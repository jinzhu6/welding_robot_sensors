//==============================================================================
//
// Title:		robot.h
// Purpose:		A short description of the interface.
//
// Created on:	10/02/2013 at 19:55:35 by DISAUSER.
// Copyright:	DISA ETSI UPV/EHU. All Rights Reserved.
//
//==============================================================================

#ifndef __robot_H__
#define __robot_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include <cvidotnet.h>
#include "Motonis_dll.h"

//==============================================================================
// Constants

#define NX_CONF_MASK_FLIP	1
#define NX_CONF_MASK_ARM	2
#define NX_CONF_MASK_FRONT	4
#define NX_CONF_MASK_R		8
#define NX_CONF_MASK_T		0x10

#define NX_MODE_TEACH	1
#define NX_MODE_PLAY	2

#define SET_VARS_MAX 16
		
enum
{
	NX_POS_X = 0,
	NX_POS_Y,
	NX_POS_Z,
	NX_POS_Rx,
	NX_POS_Ry,
	NX_POS_Rz,
	NX_POS_N
};

//==============================================================================
// Types
		
struct robot_t
{
	Motoman_MotoNIS_NisService nisService;
	short configuration;
	int position[NX_POS_N];
	int speed;
	int increment;
	int power;
	int hold;
};

//==============================================================================
// External variables

//==============================================================================
// Global functions


int robot_init(struct robot_t *robot, char *url);
void robot_close(struct robot_t *robot);
int robot_getPosition (struct robot_t *robot);
int robot_setServoPower (struct robot_t *robot, int power);
int robot_imov (struct robot_t *robot, int position[NX_POS_N]);
int robot_movj (struct robot_t *robot, int position[NX_POS_N]);
int robot_movl (struct robot_t *robot, int position[NX_POS_N]);
int robot_get_position (struct robot_t *robot, int position[NX_POS_N]);
int robot_hold (struct robot_t *robot, int hold);
int robot_setCycle (struct robot_t *robot, int cycle);
int robot_setMode (struct robot_t *robot, int mode);
int robot_setVarPos (struct robot_t *robot, int i, int pos[10]);
int robot_getVarI (struct robot_t *robot, int i, int *var);
int robot_setVarI (struct robot_t *robot, int i, int var);
int robot_sendJob (struct robot_t *robot, char *jobname, unsigned char *job, int length);
int robot_startJob (struct robot_t *robot, char *jobname, int task);
int robot_setVarsPos (struct robot_t *robot, int n, int idx[SET_VARS_MAX], int pos[SET_VARS_MAX][10]);
int robot_writeIO (struct robot_t *robot, int io, int val);



#ifdef __cplusplus
    }
#endif

#endif  /* ndef __robot_H__ */
