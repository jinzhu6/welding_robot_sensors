//==============================================================================
//
// Title:       wr_engine.c
// Purpose:     A short description of the implementation.
//
// Created on:  10/03/2013 at 20:08:28 by DISAUSER.
// Copyright:   DISA ETSI UPV/EHU. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

#include <rtutil.h>
#include <ansi_c.h>
#include <userint.h>
#include "wr_engine.h"
#include "toolbox.h"

//==============================================================================
// Constants
#define JOB_REMOT "WRREMOTE"
#define JOB_ARC "WRARC"

#define TRACK_QUEUE_SIZE 32

//integer vars of the robot
#define CURRENT_POINT_VAR 0
#define SENT_POINT_VAR 1
#define CTRL_POINT_VAR 2
#define TRACKING_SPEED_VAR 10


#define POS_MAX_X 1200000
#define POS_MIN_X 700000
#define POS_MAX_Y 200000
#define POS_MIN_Y -200000
#define POS_MAX_Z 30000
#define POS_MIN_Z -323000
#define POS_MAX_Rx 21000
#define POS_MIN_Rx -18001
#define POS_MAX_Ry 3000
#define POS_MIN_Ry -3000
#define POS_MAX_Rz 6000
#define POS_MIN_Rz -10000

#define OFFSET_X -8.000
#define OFFSET_Z .700
#define LOOK_AHEAD 37.000
#define TRACKING_SPEED 50 //.1mm/s
#define CALCULATION_PERIOD .250 //s
#define FILTER_A .83//.65


//==============================================================================
// Types

//==============================================================================
// Static global variables

static unsigned char wr_remot_job[] = ""
"/JOB\r\n"
"//NAME " JOB_REMOT "\r\n"
"//INST\r\n"
"///DATE 2013/06/27 10:48\r\n"
"///ATTR SC,RW\r\n"
"///GROUP1 RB1\r\n"
"NOP\r\n"
"SET I000 0\r\n"
"SET I002 0\r\n"
"*LOOP\r\n"
"JUMP *LOOP IF I000>=I001\r\n"
"MOVL P[I002] V=I010 PL=3\r\n"
"INC I000\r\n"
"INC I002\r\n"
"JUMP *LOOP IF I002<32\r\n"
"SET I002 0\r\n"
"JUMP *LOOP\r\n"
"END\r\n"
;


static double time_zero;
static FILE *f;

//==============================================================================
// Static functions

static void record_data(double time, int *point, double Dx, double Dz)
{
	if (wr_engine.calculated_points < MAX_POINTS)
	{
		wr_engine.mon_pos_x[wr_engine.calculated_points] = point[NX_POS_X];
		wr_engine.mon_pos_y[wr_engine.calculated_points] = point[NX_POS_Y];
		wr_engine.mon_pos_z[wr_engine.calculated_points] = point[NX_POS_Z];
		wr_engine.mes_x[wr_engine.calculated_points] = Dx;
		wr_engine.mes_y[wr_engine.calculated_points] = Dz;
		wr_engine.mon_pos_times[wr_engine.calculated_points] = time;
	}
}

static int check_bounds(int *point)
{
	return (point[NX_POS_X] < POS_MAX_X && point[NX_POS_X] > POS_MIN_X
		&& point[NX_POS_Y] < POS_MAX_Y && point[NX_POS_Y] > POS_MIN_Y
		&& point[NX_POS_Z] < POS_MAX_Z && point[NX_POS_Z] > POS_MIN_Z
		&& point[NX_POS_Rx] < POS_MAX_Rx && point[NX_POS_Rx] > POS_MIN_Rx
		&& point[NX_POS_Ry] < POS_MAX_Ry && point[NX_POS_Ry] > POS_MIN_Ry
		&& point[NX_POS_Rz] < POS_MAX_Rz && point[NX_POS_Rz] > POS_MIN_Rz);
}

static int step_go = 0;

static int calculate_next_point(int *point)
{
	int res, cur_pos[NX_POS_N];
	double time, corr_dx, corr_dy = 0;
	double Rx, Ry, Rz; 
	double sx, sy, sz; //sensor vector from origin
	double nx, ny, nz; //next point

	time = Timer();
//get position
	res = robot_get_position(&wr_engine.robot1, cur_pos);
	if (res)
	{
		ErrorPrintf("calculate_next_point()->error robot_getPosition:%d\n", res);
		return 0;
	}
//get corrections
	
	
////////////////////FIXME: testing without laser sensor	
if (wr_engine.laser1.status.LS == 0)
{
	memcpy(point, cur_pos, sizeof(cur_pos));
	point[NX_POS_Y] += -10000;
	return !res;
}
else {
//////////////////////////////////////////////////////////////////////	
	
	
	CmtGetLock(wr_engine.laser1.lockHandle);
	if (wr_engine.laser1.measurements_mm.mp[0].status != 0)
	{
		DebugPrintf("calculate_next_point()->status(2): %d !!\n", wr_engine.laser1.measurements_mm.mp[0].status);
		CmtReleaseLock(wr_engine.laser1.lockHandle);
		return 0;
	}
	else
	{
		sx = wr_engine.laser1.measurements_mm.mp[0].x;
		sz = wr_engine.laser1.measurements_mm.mp[0].y;

		if (wr_engine.laser1.measurements_mm.mp[1].status == 0 &&
			  wr_engine.laser1.measurements_mm.mp[2].status == 0)
		{
			corr_dx = wr_engine.laser1.measurements_mm.mp[1].x - wr_engine.laser1.measurements_mm.mp[2].x;
			corr_dy = wr_engine.laser1.measurements_mm.mp[1].y - wr_engine.laser1.measurements_mm.mp[2].y;
		}
	}
	CmtReleaseLock(wr_engine.laser1.lockHandle);
}
//record data	
	record_data(time, cur_pos, sx*1000, sz*1000);
	
	if (f) fprintf(f, "%f %d %d %d %d %d %d %f %f ", time,
		cur_pos[0], cur_pos[1], cur_pos[2], cur_pos[3], cur_pos[4], cur_pos[5],
		sx, sz);

	Rx = DegToRad(cur_pos[NX_POS_Rx] / 100.0);
	Ry = DegToRad(cur_pos[NX_POS_Ry] / 100.0);
	Rz = DegToRad(cur_pos[NX_POS_Rz] / 100.0);
	
	sx = OFFSET_X - sx;
	sy = LOOK_AHEAD;
	sz = OFFSET_Z + sz;
	
	if (f) fprintf(f, "%f %f %f %f %f %f ", Rx, Ry, Rz, sx, sy, sz);

//rotation x
	nx = sx;
	ny = cos(Rx)*sy - sin(Rx)*sz;
	nz = sin(Rx)*sy + cos(Rx)*sz;

//rotation y
	sx = cos(Ry)*nx + sin(Ry)*nz;
	sy = ny;
	sz = -sin(Ry)*nx + cos(Ry)*nz;

//rotation z
	nx = cos(Rz)*sx - sin(Rz)*sy;
	ny = sin(Rz)*sx + cos(Rz)*sy;
	nz = sz;
	
/*rotation
 z*(sx*sz + cx*cz*sy) - y*(cx*sz - cz*sx*sy) + cy*cz*x
 y*(cx*cz + sx*sy*sz) - z*(cz*sx - cx*sy*sz) + cy*sz*x
                              cx*cy*z - sy*x + cy*sx*y
*/
//	nx =  (cos(Ry)*cos(Rz) * sx) - (((cos(Rx)*sin(Rz))-(sin(Rx)*sin(Ry)*cos(Rz))) * sy) + (((sin(Rx)*sin(Rz))+(cos(Rx)*sin(Ry)*cos(Rz))) * sz);
//	ny =  (cos(Ry)*sin(Rz) * sx) + (((cos(Rx)*cos(Rz))+(sin(Rx)*sin(Ry)*sin(Rz))) * sy) - (((sin(Rx)*cos(Rz))-(cos(Rx)*sin(Ry)*sin(Rz))) * sz);
//	nz = -(sin(Ry)         * sx) +                    ((sin(Rx)*cos(Ry))          * sy) +                    ((cos(Rx)*cos(Ry))          * sz);
	
//DebugPrintf("calculate_next_point() look_ahead: %d, phi: %f\n", LOOK_AHEAD, phi);
/*
//next_point=cur_point + look_ahead
	point[NX_POS_X] = cur_pos[NX_POS_X] - ((sin(x_y) * cos(y_z) * LOOK_AHEAD));
	point[NX_POS_Y] = cur_pos[NX_POS_Y] + ((cos(x_y) * cos(y_z) * LOOK_AHEAD));
	point[NX_POS_Z] = cur_pos[NX_POS_Z] + ((sin(y_z) * LOOK_AHEAD));  //FIXME: check this out
DebugPrintf("calculate_next_point(%f) +look_ahead: %d %d %d\n", time, point[NX_POS_X], point[NX_POS_Y], point[NX_POS_Z]);

//next_point=next_point + corrections
	point[NX_POS_X] -= (cos(x_y + OFFSET_X_Y) * cos(x_z + OFFSET_X_Z) * cur_corr[NX_POS_X]);
	point[NX_POS_Y] -= (sin(x_y + OFFSET_X_Y) * cur_corr[NX_POS_X]);
	point[NX_POS_Y] -= (sin(y_z + OFFSET_Y_Z) * cur_corr[NX_POS_Y]);
	point[NX_POS_Z] += (cos(y_z + OFFSET_Y_Z) * cos(x_z + OFFSET_X_Z) * cur_corr[NX_POS_Y]);
//DebugPrintf("calculate_next_point() +corrections y_z: %d %d %d\n", point[NX_POS_X], point[NX_POS_Y], point[NX_POS_Z]);
	
	if (wr_engine.mon_pos_i < 2)
	{
		point[NX_POS_Rx] = cur_pos[NX_POS_Rx];
		point[NX_POS_Ry] = cur_pos[NX_POS_Ry];
		point[NX_POS_Rz] = cur_pos[NX_POS_Rz];
		return !res;
	}
*/
	point[NX_POS_X] = cur_pos[NX_POS_X] + (nx * 1000);
	point[NX_POS_Y] = cur_pos[NX_POS_Y] + (ny * 1000);
	point[NX_POS_Z] = cur_pos[NX_POS_Z] + (nz * 1000);
	
	if (f) fprintf(f, "%f %f %f ", nx, ny, nz);

//new orientations
	if (Rx < 0) Rx += TwoPi(); //[0 2pi]
//	if (Rx > HalfPi()) Rx += Pi(); //precompensating atan: [-pi/2 pi/2]

	Rx = (Rx * FILTER_A) + 
		((atan((cur_pos[NX_POS_Z]-point[NX_POS_Z])/(double)(cur_pos[NX_POS_Y]-point[NX_POS_Y])) + Pi()) * (1-FILTER_A));
	point[NX_POS_Rx] = RadToDeg(Rx) * 100;
	
	point[NX_POS_Ry] = RadToDeg(Ry) * 100;
/*	if (corr_dy != 0)
	{
//DebugPrintf("calculate_next_point() orientation delta: %f, new delta %f (%f,%f)\n", delta, atan(corr_dy / corr_dx), corr_dy, corr_dx);
		Ry -= atan(corr_dy / corr_dx);
		point[NX_POS_Ry] = RadToDeg(Ry * 0.5) * 100;
	}
*/	
	Rz = (Rz * FILTER_A) +  
		(atan((point[NX_POS_X]/*-(OFFSET_X * 1000)*/-cur_pos[NX_POS_X])/(double)(cur_pos[NX_POS_Y]-point[NX_POS_Y])) * (1-FILTER_A));
	point[NX_POS_Rz] = RadToDeg(Rz) * 100;
	
	if (f) fprintf(f, "%d %d %d %d %d %d ;\r\n", point[0], point[1], point[2], point[3], point[4], point[5]);
 
//DebugPrintf("calculate_next_point() orientation: %d %d %d\n", point[NX_POS_Rx], point[NX_POS_Ry], point[NX_POS_Rz]);
	return !res;
}

static CmtTSQHandle queueHandle;
static CmtThreadPoolHandle poolHandle;

static int CVICALLBACK engine_send_points (void *data)
{
	int res, n, twait, idx[SET_VARS_MAX], points[SET_VARS_MAX][10];
	wr_engine.sent_points = 0;
	while (wr_engine.running)
	{
		res = robot_getVarI(&wr_engine.robot1, CURRENT_POINT_VAR, &wr_engine.current_point);
		if (res)
		{
			ErrorPrintf("engine_send_points()->error robot_getVarI(CURRENT_POINT_VAR):%d\n", res);
			continue;
		}
		if (wr_engine.current_point > wr_engine.sent_points) continue;
		n = wr_engine.current_point + TRACK_QUEUE_SIZE - wr_engine.sent_points;
		if (n > SET_VARS_MAX) n = SET_VARS_MAX;
		twait = (wr_engine.sent_points - wr_engine.current_point - 3) * CALCULATION_PERIOD * 1000;
		if (twait < 0) twait = 0;
		if((n = CmtReadTSQData (queueHandle, points, n, twait, 0)) < 0)
		{
			ErrorPrintf("engine_send_points()->error CmtReadTSQData():%d\n", n);
			continue;
		}
		if (n == 0) continue;	
		for(res = 0; res < n; res++)
			idx[res] = (wr_engine.sent_points + res) % TRACK_QUEUE_SIZE;
		res = robot_setVarsPos(&wr_engine.robot1, n, idx, points);
		if (res)
		{
			ErrorPrintf("engine_send_points()->error robot_setVarsPos():%d\n", res);
			continue;
		}
		wr_engine.sent_points += n;
		res = robot_setVarI(&wr_engine.robot1, SENT_POINT_VAR, wr_engine.sent_points);
		if (res) ErrorPrintf("engine_send_points()->error robot_setVarI:%d\n", res);
		DebugPrintf("engine_send_points()->n:%d send/current: %d/%d\n", n, wr_engine.sent_points, wr_engine.current_point);
	}
	return 0;
}

static int CVICALLBACK engine_calculate_points (void *functionData)
{
	int correction_fails = 0;
	double time = 0;
	wr_engine.calculated_points = 0;
	wr_engine.calculated_point[0] = 17;
	while (wr_engine.running)
	{
		wr_engine.tracking_cb();
		SyncWait (time, CALCULATION_PERIOD);
		time = Timer();
		if (!calculate_next_point(wr_engine.calculated_point + 1))
		{
			if (correction_fails++ > 10)
			{
				wr_engine_stop ();
				return 0;
			}
			DebugPrintf("engine_thread()->correction_fails: %d\n", correction_fails);
			Delay(.5);
			continue;
		}
		correction_fails = 0; 
		if (!check_bounds(wr_engine.calculated_point + 1))
		{
			ErrorPrintf("next_point OUT OF BOUNDS (%d %d %d %d %d %d)\n", 
				wr_engine.calculated_point[1], wr_engine.calculated_point[2], wr_engine.calculated_point[3],
				wr_engine.calculated_point[4], wr_engine.calculated_point[5], wr_engine.calculated_point[6]);
			wr_engine_stop ();
			return 0;	
		}
		if (CmtWriteTSQData (queueHandle, wr_engine.calculated_point, 1, 100, NULL) < 1)
			ErrorPrintf("error CmtWriteTSQData() < 1\n");
		wr_engine.calculated_points++;
	}
	return 0;
}

/*
static volatile int engine_sending = 0;

static int CVICALLBACK engine_send_point (void *point)
{
	int res = robot_setVarPos(&wr_engine.robot1, wr_engine.sent_points % TRACK_QUEUE_SIZE, point);
	if (res) ErrorPrintf("engine_send_point()->error robot_setVarPos:%d\n", res);
	else
	{
		wr_engine.sent_points++;
		res = robot_setVarI(&wr_engine.robot1, SENT_POINT_VAR, wr_engine.sent_points);
		if (res) ErrorPrintf("engine_send_point()->error robot_setVarI:%d\n", res);
	}
	engine_sending = 0;
	DebugPrintf("engine_send_point(%d)\n", wr_engine.sent_points);
	return 0;
}

static int CVICALLBACK engine_thread_job (void *functionData)
{
	int res, current_point = 0, correction_fails = 0, last_point[10];
	double last_time=0, time;
	wr_engine.sent_points = 0;
	while (wr_engine.running)
	{
//while (!step_go) {if(!wr_engine.running) return 0; Delay(1);}
step_go = 0;

		int pos_point[10] = { 17, 0, 0, 0, 18000, 0, 0, 0, 0, 0 };
		res = robot_getVarI(&wr_engine.robot1, CURRENT_POINT_VAR, &current_point);
		if (res)
		{
			ErrorPrintf("engine_thread()->error robot_getVarI:%d\n", res);
			continue;
		}
		if (wr_engine.sent_points - current_point < LEAD_POINTS)
		{
			GetCurrentDateTime(&time);
			if (time - last_time < ENGINE_PERIOD)
				Delay(last_time + ENGINE_PERIOD - time);
			last_time = time;
			
			if (f) fprintf(f, "%d %d %f ", wr_engine.sent_points, current_point, time);

			if (!calculate_next_point(pos_point + 1))
			{
				if (correction_fails++ > 2)
				{
					DebugPrintf("engine_thread()->correction_fails: %d\n", correction_fails);
					if (correction_fails > 10 || current_point >= wr_engine.sent_points)
					{
						wr_engine_stop ();
						return 0;
					}
				}
				Delay(.5);
				continue;
			}
			correction_fails = 0; 
			if (!check_bounds(pos_point + 1))
			{
				ErrorPrintf("next_point OUT OF BOUNDS (%d %d %d %d %d %d)\n", 
					pos_point[1], pos_point[2], pos_point[3], pos_point[4], pos_point[5], pos_point[6]);
				wr_engine_stop ();
				return 0;	
			}
			while (engine_sending)
			{
//				DebugPrintf("engine_thread(%d/%d)->WAITING SENDER\n", wr_engine.sent_points, current_point);
				Delay(0.01);
			}
			engine_sending = 1;
			memcpy(last_point, pos_point, sizeof(last_point));
			CmtScheduleThreadPoolFunction(DEFAULT_THREAD_POOL_HANDLE, engine_send_point, last_point, NULL);
			DebugPrintf("engine_thread(%d/%d)\n", wr_engine.sent_points, current_point);
		}
		else
		{
			DebugPrintf("engine_thread(%d/%d)->WAITING\n", wr_engine.sent_points, current_point);
		}
	}
	return 0;
}*/

//==============================================================================
// Global variables
struct wr_engine_t wr_engine;

//==============================================================================
// Global functions

int wr_engine_init ()
{
	int res;
/*	FILE *f = fopen(JOB_REMOT "_.JBI", "w");
	fwrite(wr_remot_job, 1, sizeof(wr_remot_job), f);
	fclose(f);
	f = fopen(JOB_ARC "_.JBI", "w");
	fwrite(wr_arc_job, 1, sizeof(wr_arc_job), f);
	fclose(f);
return 17;	
*/	
	res = robot_sendJob(&wr_engine.robot1, JOB_REMOT, wr_remot_job, sizeof(wr_remot_job) - 1);
	if (res) return res;
	DebugPrintf("robot_sendJob(" JOB_REMOT "): OK\n");
	return 0;
}

static int setIO(int addr, int val)
{
	int i, res;
	for(i=0;i<8;i++)
	{
//		DebugPrintf("setIO(%d,%d): %d: %d\n",addr,val,addr+i, !!(val&(1<<i)));
		if(res = robot_writeIO(&wr_engine.robot1, addr + i, !!(val&(1<<i)))) return res;
	}
	return 0;
}

int wr_engine_set_arc (int on, int ac, int av)
{
	int res;
	DebugPrintf("wr_engine_set_arc(%d, %d, %d)\n", on, ac, av);
	if (on && !wr_engine.robot1.hold)
	{
		if(res = setIO(10070, 1)) return res;  //program
		if(res = setIO(10080, 1)) return res;  //job
		
		if(res = robot_writeIO(&wr_engine.robot1, 10050, 0)) return res;	//normal
		if(res = robot_writeIO(&wr_engine.robot1, 10051, 0)) return res;	//normal
		if(res = robot_writeIO(&wr_engine.robot1, 10052, 0)) return res;	//normal
		if(res = robot_writeIO(&wr_engine.robot1, 10053, 1)) return res;	//AC special pulses
		if(res = robot_writeIO(&wr_engine.robot1, 10055, 1)) return res;	//robot ready
		if(res = robot_writeIO(&wr_engine.robot1, 10066, 0)) return res;	//job mode
		if(res = robot_writeIO(&wr_engine.robot1, 10067, 0)) return res;	//simulation off
		if(res = robot_writeIO(&wr_engine.robot1, 10054, 1)) return res;	//start signal
	}
	else
	{
		 if(res = robot_writeIO(&wr_engine.robot1, 10054, 0)) return res;	//stop signal
	}
	
	return 0;
}

int wr_engine_run ()
{
	int res;
	if (wr_engine.running) return -11;
	
	GetCurrentDateTime(&time_zero);

	if (!(f = fopen("wr_numbers.log","a")))
		ErrorPrintf("Error opening 'wr_numbers.log'\n");
	if (f) fprintf(f, "%% wr_numers at %f second\r\n", time_zero);
	if (f) fprintf(f, "%% [1:time 2:x y z Rx Ry 7:Rz 8:dx 9:dy 10:rRx rRy 12:rRz "
		"13:sx sy 15:sz 16:nx ny 18:nz 19:x y z Rx Ry 24:Rz]\r\n");

	if (queueHandle) CmtDiscardTSQ (queueHandle);
	if((res = CmtNewTSQ (TRACK_QUEUE_SIZE, sizeof(int)*10, OPT_TSQ_AUTO_FLUSH_EXACT, &queueHandle))) return res;
	if (poolHandle) CmtDiscardThreadPool (poolHandle);
	if((res = CmtNewThreadPool (2, &poolHandle))) return res;

	wr_engine.laser1.measurements_mm.mp[0].status = -1;
	MTE_laser_setOn(&wr_engine.laser1);
	if((res = robot_setVarI(&wr_engine.robot1, SENT_POINT_VAR, 0))) return res;
	MTE_laser_startMeasurment_mm(&wr_engine.laser1);
	if((res = robot_setVarI(&wr_engine.robot1, TRACKING_SPEED_VAR, TRACKING_SPEED))) return res;

	if((res = robot_startJob(&wr_engine.robot1, JOB_REMOT, 0))) return res;		
    wr_engine.running = 1;

	CmtScheduleThreadPoolFunction(poolHandle, engine_send_points, NULL, NULL);
	CmtScheduleThreadPoolFunction(poolHandle, engine_calculate_points, NULL, NULL);
	return 0;
}

void wr_engine_stop ()
{
	int chold = wr_engine.robot1.hold;
	wr_engine.running = 0;
	wr_engine_set_arc(0,0,0);
	robot_hold(&wr_engine.robot1, 1);
	robot_hold(&wr_engine.robot1, chold);
	MTE_laser_stopMeasurment_mm(&wr_engine.laser1);
	MTE_laser_setOff(&wr_engine.laser1);
	
	if (f) fprintf(f, "\r\n%% ---------------------------------- \r\n\r\n");
	if (f) fclose(f);
	f=0;
}

static int point0[10] = { 17, 0, 0, 0, 18000, 0, 0, 0, 0, 0 };
static int CVICALLBACK engine_get_point0 (void *point)
{
	while (wr_engine.running && calculate_next_point(point0 + 1) && check_bounds(point0 + 1))
	{
		int position[NX_POS_N] = { 0, 10000, 0, 0, 0, 0 };
		int res = robot_imov(&wr_engine.robot1, position);
		if (res) DebugPrintf("wr_engine_center()->error robot_imov: %d(0x%x)\n", res, res);
	}
	DebugPrintf("wr_engine_center point0: (%d %d %d %d %d %d)\n", 
			point0[1], point0[2], point0[3], point0[4], point0[5], point0[6]);
	wr_engine_stop ();
	return 0;
}

void wr_engine_center ()
{
	if (wr_engine.running) return;
	wr_engine.laser1.measurements_mm.mp[0].status = -1;
	MTE_laser_setOn(&wr_engine.laser1);
	Delay(1);
	MTE_laser_startMeasurment_mm(&wr_engine.laser1);
	Delay(1);
	if (wr_engine.laser1.measurements_mm.mp[0].status!=0) return;
	wr_engine.running = 1;
	CmtScheduleThreadPoolFunction(DEFAULT_THREAD_POOL_HANDLE, engine_get_point0, NULL, NULL);
}

void wr_engine_orientate ()
{
	int res, position[NX_POS_N];
	if (wr_engine.running) return;
	wr_engine.laser1.measurements_mm.mp[0].status = -1;
	MTE_laser_setOn(&wr_engine.laser1);
	Delay(1);
	MTE_laser_startMeasurment_mm(&wr_engine.laser1);
	Delay(2);
	if (calculate_next_point(position) && check_bounds(position) && check_bounds(point0 + 1))
	{
		point0[4] = position[3]; point0[5] = position[4]; point0[6] = position[5]; 
		res = robot_movj(&wr_engine.robot1, point0 + 1);
		if (res) ErrorPrintf("wr_engine_step()->error robot_movj: %d(0x%x)\n", res, res);
	}
 	MTE_laser_stopMeasurment_mm(&wr_engine.laser1);
	MTE_laser_setOff(&wr_engine.laser1);
}

void wr_engine_step ()
{
	if (wr_engine.running) step_go = 1;
	else
	{
		int res;
		point0[4] = 18000; point0[5] = 0; point0[6] = 0; 
		if (!check_bounds(point0 + 1))
		{
			ErrorPrintf("wr_engine_step OUT OF BOUNDS (%d %d %d %d %d %d)\n", 
				point0[1], point0[2], point0[3], point0[4], point0[5], point0[6]);
			return;
		}
		res = robot_movj(&wr_engine.robot1, point0 + 1);
		if (res) ErrorPrintf("wr_engine_step()->error robot_movj: %d(0x%x)\n", res, res);
	}
}
