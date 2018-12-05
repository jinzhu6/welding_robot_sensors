//==============================================================================
//
// Title:       optrisCT.h
// Purpose:     A short description of the interface.
//
// Created on:  01/08/2013 at 10:59:35 by Jorge Elso.
// Copyright:   UPV-EHU. All Rights Reserved.
//
//==============================================================================

#ifndef __optrisCT_H__
#define __optrisCT_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include "cvidef.h"

//==============================================================================
// Constants

//==============================================================================
// Types

struct optrisCT_t
{
	int index;
//	int width, height, depth;
//	char buffer[38400];
	

};
		
//==============================================================================
// External variables

//==============================================================================
// Global functions

int optrisCT_init (struct optrisCT_t *sensor, int index);
int optrisCT_get (struct optrisCT_t *sensor, int index);
void optrisCT_release (struct optrisCT_t *sensor);

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __optrisCT_H__ */
