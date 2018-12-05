//==============================================================================
//
// Title:		welding_robot.c
// Purpose:		A short description of the implementation.
//
// Created on:	09/02/2013 at 22:30:29 by DISAUSER.
// Copyright:	DISA ETSI UPV/EHU. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include <windows.h>
#include "wr_engine.h"

#include "optrisCT.h"

//==============================================================================
// Constants
#define IPADDR "192.168.12.151"
#define DST_PORT 8002
#define SRC_PORT 8001
#define MOTONIS_URL "http://192.168.12.10:8080"

//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

//==============================================================================
// Global variables


extern int run_panel(void);

//==============================================================================
// Global functions
int __stdcall WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
                       LPSTR lpszCmdLine, int nCmdShow)
{
//	if (InitCVIRTE (hInstance, 0, 0) == 0)
//		return -1;	/* out of memory */
	
optrisCT_init(0,0);
	
	if (MTE_laser_init(&wr_engine.laser1, IPADDR, DST_PORT, SRC_PORT) < 0)
		return -1;
//	if (optrisPI_cam_init(&wr_engine.camera1, 0) < 0)
//		return -1;
	if (robot_init(&wr_engine.robot1, MOTONIS_URL) < 0)
		return -1;
	if (run_panel() < 0)
		return -1;
	

//MTE_laser_debug(&laser1);

optrisCT_release(0);

	MTE_laser_release(&wr_engine.laser1);
	robot_close(&wr_engine.robot1);
//	optrisPI_cam_release(&wr_engine.camera1);
//	CloseCVIRTE();
	return 0;
}

