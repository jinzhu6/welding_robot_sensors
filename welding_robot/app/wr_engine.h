//==============================================================================
//
// Title:       wr_engine.h
// Purpose:     A short description of the interface.
//
// Created on:  10/03/2013 at 20:08:28 by DISAUSER.
// Copyright:   DISA ETSI UPV/EHU. All Rights Reserved.
//
//==============================================================================

#ifndef __wr_engine_H__
#define __wr_engine_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

//#include "cvidef.h"
#include "MTE_laser.h"
#include "robot.h"
#include "optrisPI_cam.h"

//==============================================================================
// Constants
#define MAX_POINTS 1000
		
//==============================================================================
// Types
struct wr_engine_t
{
	struct MTE_laser_t laser1;
	struct robot_t robot1;
	struct optrisPI_cam_t camera1;
	volatile int running;
	
	int calculated_points, sent_points, current_point;
	int calculated_point[10];

/*	
	struct {
		int position[NX_POS_N];
		int measurments0[2];
		int measurmentsd[2];
		double tstamp;
	} monitoring[MAX_POINTS];
*/
int mon_pos_x[MAX_POINTS],mon_pos_y[MAX_POINTS],mon_pos_z[MAX_POINTS];
int mes_x[MAX_POINTS],mes_y[MAX_POINTS];
double mon_pos_times[MAX_POINTS];
	
	void (*update_cb)(void);
	void (*tracking_cb)(void);
};

//==============================================================================
// External variables
extern struct wr_engine_t wr_engine;

//==============================================================================
// Global functions

int wr_engine_init (void);
int wr_engine_run (void);
void wr_engine_stop (void);
int wr_engine_set_arc (int on, int ac, int av);

void wr_engine_center (void);
void wr_engine_orientate (void);
void wr_engine_step (void);

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __wr_engine_H__ */
