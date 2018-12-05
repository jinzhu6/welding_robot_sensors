//==============================================================================
//
// Title:       optrisPI_cam.c
// Purpose:     A short description of the implementation.
//
// Created on:  18/04/2013 at 10:38:46 by Jorge Elso.
// Copyright:   UPV-EHU. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

#include "ImagerIPC2.h"
#include <utility.h>
#include "optrisPI_cam.h"

//==============================================================================
// Constants
#define OPTRISPI_MAX_DEVICES 1
#define OPTRISPI_FNAME "thermcam.dat"
//==============================================================================
// Types

//==============================================================================
// Static global variables
static int optrisPI_initialized = 0;

static struct optrisPI_cam_t *_optris_PI_camera1;

//==============================================================================
// Static functions

static HRESULT WINAPI OnServerStopped(int reason)
{
	DebugPrintf("OnServerStopped(%d)\n", reason);

	return 0;
}

static HRESULT WINAPI OnFrameInit(int w, int h, int d)
{
	DebugPrintf("OnFrameInit(%d,%d,%d)\n", w, h, d);
	_optris_PI_camera1->width = w;
	_optris_PI_camera1->height = h;
	_optris_PI_camera1->depth = d;
	_optris_PI_camera1->fidx = 0;
	if (_optris_PI_camera1->f) fclose(_optris_PI_camera1->f);
	_optris_PI_camera1->f = fopen(OPTRISPI_FNAME, "a");
	if (!_optris_PI_camera1->f)
		 ErrorPrintf("optrisPI_cam_init(): opening '" OPTRISPI_FNAME "'\n");

	return 0;
}

static HRESULT WINAPI OnNewFrameEx_1(void *frame, struct FrameMetadata *mdata)
{
//	DebugPrintf("OnNewFrameEx(%p, %p)\n", frame, mdata);
	if (_optris_PI_camera1->frame_cb) 
		_optris_PI_camera1->frame_cb(_optris_PI_camera1, frame);

	return 0;
}

static HRESULT WINAPI OnInitCompleted()
{
	DebugPrintf("OnInitCompleted()\n");
	
	DebugPrintf("OnInitCompleted()->GetPID(0):%d\n", GetPID(0));
	return 0;
}

//==============================================================================
// Global variables

//==============================================================================
// Global functions

int optrisPI_cam_print (unsigned short *pframe)
{
	if (_optris_PI_camera1->f)
	{
		int i,j;
		fprintf(_optris_PI_camera1->f, "TC(:,:,%d)=[", ++_optris_PI_camera1->fidx);
		for (i=20;i<_optris_PI_camera1->height-20;i++)
		{
			for (j=20;j<_optris_PI_camera1->width-20;j++)
				fprintf(_optris_PI_camera1->f, "%u ", pframe[_optris_PI_camera1->width*i+j]);
			fprintf(_optris_PI_camera1->f, "; ");
		}
		fprintf(_optris_PI_camera1->f, "];\n");
	}
	return 0;	
}

int optrisPI_cam_init (struct optrisPI_cam_t *camera, int index)
{
	int res, var;
	camera->index = index;
	camera->f = 0;
_optris_PI_camera1 = camera;
//	res = SetLogFile(L"optrisPI.log", 10, 1);
//	if (res)
//		ErrorPrintf("optrisPI_cam_init()->SetLogFile(%d):%x\n", index, res);
	if (!optrisPI_initialized)
	{
		optrisPI_initialized = 1;
		res = SetImagerIPCCount (OPTRISPI_MAX_DEVICES);
		if (res)
			ErrorPrintf("optrisPI_cam_init()->SetImagerIPCCount(%d):%x\n", OPTRISPI_MAX_DEVICES, res);
	}
	res = InitImagerIPC(index);
	if (res)
		ErrorPrintf("optrisPI_cam_init()->InitImagerIPC(%d):%x\n", index, res);

	res |= SetCallback_OnServerStopped (index, OnServerStopped);
	res |= SetCallback_OnFrameInit (index, OnFrameInit);
	res |= SetCallback_OnNewFrameEx (index, OnNewFrameEx_1);
	res |= SetCallback_OnInitCompleted (index, OnInitCompleted);
	
	if (res)
		ErrorPrintf("optrisPI_cam_init()->SetCallback_XXXX(%d):%x\n", index, res);
	
	res = RunImagerIPC(index);
	if (res)
	{
		ErrorPrintf("optrisPI_cam_init()->RunImagerIPC(%d):%x\n", index, res);
		return res;
	}
	


    return res;
}

void optrisPI_cam_release (struct optrisPI_cam_t *camera)
{
	DebugPrintf("optrisPI_cam_release(%d)\n", camera->index);
	ReleaseImagerIPC(camera->index);
	if (camera->f) fclose(camera->f);
	camera->f = 0;
}

