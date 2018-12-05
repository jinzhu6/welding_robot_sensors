//==============================================================================
//
// Title:       optrisCT.c
// Purpose:     A short description of the implementation.
//
// Created on:  01/08/2013 at 11:02:34 by Jorge Elso.
// Copyright:   UPV-EHU. All Rights Reserved.
//
//==============================================================================

#include <NIDAQmx.h>
#include <utility.h>
#include "optrisCT.h"

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables


//==============================================================================
// Static functions
static TaskHandle taskh;


//==============================================================================
// Global variables

//==============================================================================
// Global functions

int optrisCT_init (struct optrisCT_t *sensor, int index)
{
	int res;
	DebugPrintf("optrisCT_init()\n");
	
	res = DAQmxCreateTask("", &taskh);
	if (res)
	{
		ErrorPrintf("optrisCT_init -> DAQmxCreateTask: %d\n", res);
		return res;
	}
	
	res = DAQmxCreateAIVoltageChan (taskh, "Dev1/ai0", "", DAQmx_Val_RSE, -10.0, 10.0, DAQmx_Val_Volts, "");
	if (res)
	{
		ErrorPrintf("optrisCT_init -> DAQmxCreateAIVoltageChan: %d\n", res);
		return res;
	}
	
	return 0;
}


int optrisCT_get (struct optrisCT_t *sensor, int index)
{
	float64 data;
	
	int res = DAQmxReadAnalogScalarF64 (taskh, -1, &data, 0);
	if (res)
	{
		ErrorPrintf("optrisCT_get -> DAQmxReadAnalogScalarF64: %d\n", res);
		return res;
	}
//	DebugPrintf("optrisCT_get(%f)\n", data); 
	
	return ((data*1500.0)+2500.0);
}

void optrisCT_release (struct optrisCT_t *sensor)
{
	DebugPrintf("optrisCT_release()\n");
	
	if (DAQmxClearTask (taskh))
		ErrorPrintf("optrisCT_release -> DAQmxClearTask\n");		

}

