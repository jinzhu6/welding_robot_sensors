//==============================================================================
//
// Title:       optrisPI_cam.h
// Purpose:     A short description of the interface.
//
// Created on:  18/04/2013 at 10:37:35 by Jorge Elso.
// Copyright:   UPV-EHU. All Rights Reserved.
//
//==============================================================================

#ifndef __optrisPI_cam_H__
#define __optrisPI_cam_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include "cvidef.h"
#include <ansi_c.h> 

//==============================================================================
// Constants

//==============================================================================
// Types

struct optrisPI_cam_t
{
	int index;
	int width, height, depth;
//	char buffer[38400];
	FILE *f;
	int fidx;
	
	void (*frame_cb)(struct optrisPI_cam_t *, void *frame);
};
		
//==============================================================================
// External variables

//==============================================================================
// Global functions

int optrisPI_cam_init (struct optrisPI_cam_t *camera, int index);
void optrisPI_cam_release (struct optrisPI_cam_t *camera);
int optrisPI_cam_print (unsigned short *pframe);

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __optrisPI_cam_H__ */
