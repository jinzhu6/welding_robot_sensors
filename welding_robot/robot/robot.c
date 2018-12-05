//==============================================================================
//
// Title:		robot.c
// Purpose:		A short description of the implementation.
//
// Created on:	10/02/2013 at 20:08:29 by DISAUSER.
// Copyright:	DISA ETSI UPV/EHU. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

#include "robot.h"
#include <ansi_c.h>
#include <utility.h>

//==============================================================================
// Constants

enum {
	NX_RESTYPE_VAR_B=1, // (1) Byte type 
	NX_RESTYPE_VAR_I,   // (2) Integer type 
	NX_RESTYPE_VAR_D,   // (3) Double-precision type 
	NX_RESTYPE_VAR_R,	// (4) Real type
};


//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions

int robot_init(struct robot_t *robot, char *url)
{
	Initialize_MotoNIS();
	return Motoman_MotoNIS_NisService__Create_1(&robot->nisService, url, 0);	
}
	
void robot_close(struct robot_t *robot)
{
	CDotNetDiscardHandle(robot->nisService);	
	Close_MotoNIS();
}

int robot_getPosition (struct robot_t *robot)
{
	return robot_get_position(robot, robot->position);
}

int robot_get_position (struct robot_t *robot, int position[NX_POS_N])
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_ControlGroupData sData;
	if (Motoman_MotoNIS_ControlGroupData__Create_1(&sData, 0, 0) == 0)
	{
		Motoman_MotoNIS_CartesianPositionResponseData rData;
		if (!Motoman_MotoNIS_NisService_NxGetCartPos(robot->nisService, sData, &rData, &res, 0) && !res)
		{
			int npos,*_position = 0;
			Motoman_MotoNIS_CartesianPositionResponseData_Get_Configuration(rData, &robot->configuration, 0);
			Motoman_MotoNIS_CartesianPositionResponseData_Get_Position(rData, &_position, &npos, 0);
			if (_position)
			{
				if (npos > NX_POS_N) npos = NX_POS_N;
				memcpy(position, _position, npos * sizeof(*position));
				CDotNetFreeMemory(_position);
			}
			CDotNetDiscardHandle(rData);
		}
		CDotNetDiscardHandle(sData); 
	}
	return res;
}

int robot_imov (struct robot_t *robot, int position[NX_POS_N])
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_IMoveData sData;
	int iposition[12];
	int speedType = !(position[NX_POS_X]||position[NX_POS_Y]||position[NX_POS_Z]);
	memset(iposition, 0, sizeof(iposition));
	memcpy(iposition, position, sizeof(int)*NX_POS_N);
	if (Motoman_MotoNIS_IMoveData__Create_1(&sData, iposition, 12, robot->speed, 0, 1, 0, speedType, 0) == 0)
	{
		Motoman_MotoNIS_StandardResponseData rData;
		if (!Motoman_MotoNIS_NisService_NxIMOV(robot->nisService, sData, &rData, &res, 0) && !res)
		{
			unsigned short error = 0;
			Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
			if (error) res = error;
			CDotNetDiscardHandle(rData);
		}
		CDotNetDiscardHandle(sData); 
	}
	return res;	
}

int robot_movj (struct robot_t *robot, int position[NX_POS_N])
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_MoveJData sData;
	int iposition[12];
	memset(iposition, 0, sizeof(iposition));
	memcpy(iposition, position, sizeof(int)*NX_POS_N);
	if (Motoman_MotoNIS_MoveJData__Create_1(&sData, iposition, 12, robot->speed, robot->configuration, 0, 1, 0, 0) == 0)
	{
		Motoman_MotoNIS_StandardResponseData rData;
		if (!Motoman_MotoNIS_NisService_NxMOVJ(robot->nisService, sData, &rData, &res, 0) && !res)
		{
			unsigned short error = 0;
			Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
			if (error) res = error;
			CDotNetDiscardHandle(rData);
		}
		CDotNetDiscardHandle(sData); 
	}
	return res;	
}

int robot_movl (struct robot_t *robot, int position[NX_POS_N])
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_MoveLData sData;
	int iposition[12];
	memset(iposition, 0, sizeof(iposition));
	memcpy(iposition, position, sizeof(int)*NX_POS_N);
	if (Motoman_MotoNIS_MoveLData__Create_1(&sData, iposition, 12, robot->speed, 0, robot->configuration, 0, 1, 0, 0) == 0)
	{
		Motoman_MotoNIS_StandardResponseData rData;
		if (!Motoman_MotoNIS_NisService_NxMOVL(robot->nisService, sData, &rData, &res, 0) && !res)
		{
			unsigned short error = 0;
			Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
			if (error) res = error;
			CDotNetDiscardHandle(rData);
		}
		CDotNetDiscardHandle(sData); 
	}
	return res;	
}

int robot_setServoPower (struct robot_t *robot, int power)
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_ServoPowerData sData;
	if (Motoman_MotoNIS_ServoPowerData__Create_1(&sData, power, 0) == 0)
	{
		Motoman_MotoNIS_StandardResponseData rData;
		if (!Motoman_MotoNIS_NisService_NxSetServoPower(robot->nisService, sData, &rData, &res, 0) && !res)
		{
			unsigned short error = 0;
			Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
			if (error) res = error;
			CDotNetDiscardHandle(rData);
		}
		CDotNetDiscardHandle(sData);
		if (!res) robot->power = power;
	}
	return res;	
}

int robot_hold (struct robot_t *robot, int hold)
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_HoldData sData;
	if (Motoman_MotoNIS_HoldData__Create_1(&sData, hold, 0) == 0)
	{
		Motoman_MotoNIS_StandardResponseData rData;
		if (!Motoman_MotoNIS_NisService_NxHold(robot->nisService, sData, &rData, &res, 0) && !res)
		{
			unsigned short error = 0;
			Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
			if (error) res = error;
			CDotNetDiscardHandle(rData);
		}
		CDotNetDiscardHandle(sData);
		if (!res) robot->hold = hold;
	}
	return res;	
}

int robot_setCycle (struct robot_t *robot, int cycle)
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_CycleData sData;
	if (Motoman_MotoNIS_CycleData__Create_1(&sData, cycle, 0) == 0)
	{
		Motoman_MotoNIS_StandardResponseData rData;
		if (!Motoman_MotoNIS_NisService_NxSetCycle(robot->nisService, sData, &rData, &res, 0) && !res)
		{
			unsigned short error = 0;
			Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
			if (error) res = error;
			CDotNetDiscardHandle(rData);
		}
		CDotNetDiscardHandle(sData);
	}
	return res;
}

int robot_setMode (struct robot_t *robot, int mode)
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_ModeData sData;
	if (Motoman_MotoNIS_ModeData__Create_1(&sData, mode, 0) == 0)
	{
		Motoman_MotoNIS_StandardResponseData rData;
		DebugPrintf("robot_setMode->NxSetMode(%d)\n", mode);
		if (!Motoman_MotoNIS_NisService_NxSetMode(robot->nisService, sData, &rData, &res, 0) && !res)
		{
			unsigned short error = 0;
			Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
			if (error) res = error;
			CDotNetDiscardHandle(rData);
		}
		CDotNetDiscardHandle(sData);
	}
	return res;
}

int robot_setVarPos (struct robot_t *robot, int i, int pos[10])
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_PosVarData sData;
	if (Motoman_MotoNIS_PosVarData__Create(&sData, 0) == 0)
	{
		Motoman_MotoNIS_PosVarData_Set_Index(sData, i, 0);
		Motoman_MotoNIS_PosVarData_Set_Type(sData, 5, 0);
		Motoman_MotoNIS_PosVarData_Set_Value(sData, pos, 10, 0);
		Motoman_MotoNIS_NisService_NxPutPosVarData(robot->nisService, &sData, 1, &res, 0);
		CDotNetDiscardHandle(sData);
	}
	return res;	
}

int robot_setVarsPos (struct robot_t *robot, int n, int idx[SET_VARS_MAX], int pos[SET_VARS_MAX][10])
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_PosVarData sData[SET_VARS_MAX];
	int i;
	for(i=0; i < n; i++)
	{
		if (Motoman_MotoNIS_PosVarData__Create(&sData[i], 0) != 0)
			return res;
		Motoman_MotoNIS_PosVarData_Set_Index(sData[i], idx[i], 0);
		Motoman_MotoNIS_PosVarData_Set_Type(sData[i], 5, 0);
		Motoman_MotoNIS_PosVarData_Set_Value(sData[i], pos[i], 10, 0);
	}
	Motoman_MotoNIS_NisService_NxPutPosVarData(robot->nisService, sData, n, &res, 0);
	for(i=0; i < n; i++)
	{
		CDotNetDiscardHandle(sData[i]);
	}
	return res;	
}

/*
int robot_setJob (struct robot_t *robot)
{
	Motoman_MotoNIS_WebMethodResult res = robot_setMode (robot, NX_MODE_TEACH);
	if (res == 0)
	{
		Motoman_MotoNIS_DeleteJobData sData;
		if (Motoman_MotoNIS_DeleteJobData__Create_1(&sData, WR_REMOT_JOB, 0) == 0)
		{
			Motoman_MotoNIS_StandardResponseData rData;
			if (!Motoman_MotoNIS_NisService_NxDeleteJob(robot->nisService, sData, &rData, &res, 0) && !res)
			{
				unsigned short error = 0;
				Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
				if (error) { DebugPrintf("robot_startTracking->DeleteJob(" WR_REMOT_JOB "):%d\n", error); }
				CDotNetDiscardHandle(rData);
			}
			CDotNetDiscardHandle(sData);
		}
	}
	if (res == 0)
	{
		DebugPrintf("robot_startTracking->NxWriteFile(" WR_REMOT_JOB ") [%d]\n", sizeof(wr_remot_job));
		Motoman_MotoNIS_NisService_NxWriteFile(robot->nisService,
			WR_REMOT_JOB ".JBI", wr_remot_job, sizeof(wr_remot_job) - 1, &res, 0);

		int fsize = 0;
		char buffer[10000];
//		unsigned char *pbuffer;
		FILE *f = fopen(WR_REMOT_JOB "_.JBI", "w");
		if (!f) ErrorPrintf("fopen error");
//		fsize = fread(buffer, 1, sizeof(buffer), f);
//		if (fsize > 0) {
//			DebugPrintf("robot_startTracking->NxWriteFile(TEST00.JBI) [%d]\n", fsize);
//		Motoman_MotoNIS_NisService_NxWriteFile(robot->nisService,
//			WR_REMOT_JOB ".JBI", buffer, fsize, &res, 0);
//		}
//		Motoman_MotoNIS_NisService_NxReadFile(robot->nisService,
//			"JORGE2.JBI", &pbuffer, &fsize, &res, 0);
//		if (res!=0) return res;
		fwrite(wr_remot_job, 1, sizeof(wr_remot_job), f);
		fclose(f);
//		DebugPrintf("robot_startTracking->NxWriteFile(TEST.JBI) [%d]\n", fsize);
//		Motoman_MotoNIS_NisService_NxWriteFile(robot->nisService,
//			"TEST01.JBI", pbuffer, fsize, &res, 0);
//		CDotNetFreeMemory(pbuffer);
	}
	if (res == 0)
	{
		res = robot_setMode (robot, NX_MODE_PLAY);
	}
	if (res == 0)
	{
		Motoman_MotoNIS_MasterJobData sData;
		if (Motoman_MotoNIS_MasterJobData__Create_1(&sData, WR_REMOT_JOB, 0, 0) == 0)
		{
			Motoman_MotoNIS_StandardResponseData rData;
			if (!Motoman_MotoNIS_NisService_NxSetMasterJob(robot->nisService, sData, &rData, &res, 0) && !res)
			{
				unsigned short error = 0;
				Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
				if (error) res = error;
				CDotNetDiscardHandle(rData);
			}
			CDotNetDiscardHandle(sData);
		}
		DebugPrintf("robot_startTracking->NxSetMasterJob(" WR_REMOT_JOB ")\n");
	}
	if (res == 0)
	{
		Motoman_MotoNIS_CurrentJobData sData;
		if (Motoman_MotoNIS_CurrentJobData__Create_1(&sData, WR_REMOT_JOB, 0, 0) == 0)
		{
			Motoman_MotoNIS_StandardResponseData rData;
			if (!Motoman_MotoNIS_NisService_NxSetCurJob(robot->nisService, sData, &rData, &res, 0) && !res)
			{
				unsigned short error = 0;
				Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
				if (error) res = error;
				CDotNetDiscardHandle(rData);
			}
			CDotNetDiscardHandle(sData);
		}
		DebugPrintf("robot_startTracking->NxSetCurJob(" WR_REMOT_JOB ")\n");
	}
	return res;
}

int robot_startTracking (struct robot_t *robot)
{
	Motoman_MotoNIS_WebMethodResult res = robot_setCycle (robot, 3);
	if (res == 0)
	{
		res = robot_setServoPower (robot, 1);
		DebugPrintf("robot_startTracking->robot_setServoPower(1)\n");
	}
	if (res == 0)
	{
		Motoman_MotoNIS_StartJobData sData;
		if (Motoman_MotoNIS_StartJobData__Create_1(&sData, WR_REMOT_JOB, 0, 0) == 0)
		{
			Motoman_MotoNIS_StandardResponseData rData;
			if (!Motoman_MotoNIS_NisService_NxStartJob(robot->nisService, sData, &rData, &res, 0) && !res)
			{
				unsigned short error = 0;
				Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
				if (error) res = error;
				CDotNetDiscardHandle(rData);
			}
			CDotNetDiscardHandle(sData);
		}
		DebugPrintf("robot_startTracking->NxStartJob(" WR_REMOT_JOB ")\n");
	}
	return res;
}*/

int robot_getVarI (struct robot_t *robot, int i, int *var)
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_VarInfo sData;
	if (Motoman_MotoNIS_VarInfo__Create_1(&sData, i, NX_RESTYPE_VAR_I, 0) == 0)
	{
		int *rData = NULL, dataLength = 0;
		if (!Motoman_MotoNIS_NisService_NxGetVarData(robot->nisService, &sData, 1, &rData, &dataLength, &res, 0)
			&& !res && rData)
		{
//			DebugPrintf("robot_getVarI->dataLength:%d, rData[0]: %d\n", dataLength, rData[0]);
			*var = rData[0];
			res = 0;
			CDotNetFreeMemory (rData);
		}
		CDotNetDiscardHandle(sData);
	}
	return res;	
}

int robot_setVarI (struct robot_t *robot, int i, int var)
{
 	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_VarData sData;
	if (Motoman_MotoNIS_VarData__Create_1(&sData, var, i, NX_RESTYPE_VAR_I, 0) == 0)
	{
		Motoman_MotoNIS_NisService_NxPutVarData(robot->nisService, &sData, 1, &res, 0);
		CDotNetDiscardHandle(sData);
	}
	return res;
}

int robot_sendJob (struct robot_t *robot, char *jobname, unsigned char *job, int length)
{
	Motoman_MotoNIS_WebMethodResult res = robot_setMode (robot, NX_MODE_TEACH);
	if (res == 0)
	{
		Motoman_MotoNIS_DeleteJobData sData;
		if (Motoman_MotoNIS_DeleteJobData__Create_1(&sData, jobname, 0) == 0)
		{
			Motoman_MotoNIS_StandardResponseData rData;
			if (!Motoman_MotoNIS_NisService_NxDeleteJob(robot->nisService, sData, &rData, &res, 0) && !res)
			{
				unsigned short error = 0;
				Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
				if (error) { DebugPrintf("robot_sendJob->DeleteJob(%s):%d\n", jobname, error); }
				CDotNetDiscardHandle(rData);
			}
			CDotNetDiscardHandle(sData);
		}
	}
	if (res == 0)
	{
		char jobnamejbi[128];
		snprintf(jobnamejbi, sizeof(jobnamejbi), "%s.JBI", jobname);
		DebugPrintf("robot_sendJob->NxWriteFile(%s) [%d]\n", jobname, length);
		Motoman_MotoNIS_NisService_NxWriteFile(robot->nisService, jobnamejbi, job, length, &res, 0);
	}
	if (res == 0)
	{
		res = robot_setMode (robot, NX_MODE_PLAY);
	}
	return res;
}

int robot_startJob (struct robot_t *robot, char *jobname, int task)
{
	Motoman_MotoNIS_WebMethodResult res = robot_setCycle (robot, 3/*auto*/);
	if (res == 0)
	{
		res = robot_setServoPower (robot, 1);
		DebugPrintf("robot_startJob->robot_setServoPower(1)\n");
	}
	if (res == 0)
	{
		Motoman_MotoNIS_StartJobData sData;
		if (Motoman_MotoNIS_StartJobData__Create_1(&sData, jobname, task, 0) == 0)
		{
			Motoman_MotoNIS_StandardResponseData rData;
			if (!Motoman_MotoNIS_NisService_NxStartJob(robot->nisService, sData, &rData, &res, 0) && !res)
			{
				unsigned short error = 0;
				Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(rData, &error, 0);
				if (error) res = error;
				CDotNetDiscardHandle(rData);
			}
			CDotNetDiscardHandle(sData);
		}
		DebugPrintf("robot_startTracking->NxStartJob(%s)\n", jobname);
	}
	return res;	
}

int robot_writeIO (struct robot_t *robot, int io, int val)
{
	Motoman_MotoNIS_WebMethodResult res = -1;
	Motoman_MotoNIS_IoData ioData;
	if (Motoman_MotoNIS_IoData__Create_1(&ioData, val, io, 0) == 0)
	{
		Motoman_MotoNIS_NisService_NxWriteIO(robot->nisService, &ioData, 1, &res, 0);
		CDotNetDiscardHandle(ioData);
	}
	return res;		
}
