//==============================================================================
//
// Title:		MTE_laser.h
// Purpose:		A short description of the interface.
//
// Created on:	05/02/2013 at 12:00:01 by puri.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

#ifndef __MTE_laser_H__
#define __MTE_laser_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files
#include "windows.h"
#include "cvidef.h"
#include <utility.h>

//==============================================================================
// Constants
#define MTE_MEASUREMENT_N 8
#define MTE_FRAME_HEIGHT 1024
#define MTE_FRAME_WIDTH 1280

//==============================================================================
// Types
		
struct MTE_laser_t
{
	int channel;
	CmtThreadPoolHandle poolHandle;
	CmtThreadLockHandle lockHandle;
	int run;
	int run_video;
	int port;
	const char *ipaddr;
	struct {
		unsigned short major;
		unsigned short minor;
	} protocol_version;
	struct { //status
	unsigned short Mode; //(0 - StandBy, 1 - Searching, 2 - Tracking, 3- Vertical Search, 4 -  Side Search, 5 - Locate, 6 - Continuos)
	unsigned short SP1[16]; //Spare
	unsigned short MTP;  //Main Board Temperature (°C x 100 + 10,000)
	unsigned short STP;  //Power Board Temperature (°C x 100 + 10,000)
	unsigned short LTP;  //Laser Temperature (°C x 100 + 10,000)
	unsigned short HST;  //Heater Status (0 - Heater is OFF, 1 - Heater is ON)
	unsigned short SP2[16]; //Spare
	unsigned short CGN;  //Camera Gain (0-95)
	unsigned short SHT;  //Camera Gain (0 - 1049)
	unsigned short COP;  //Camera Options
	unsigned short X1;  //x value of the upper-left point of ROI
	unsigned short Y1;  //y value of the upper-left point of ROI
	unsigned short X2;  //x value of the lower-right point of ROI
	unsigned short Y2;  //y value of the lower-right point of ROI
	unsigned short SP3[16]; //Spare
	unsigned short LS;  //Laser Status (0 - Laser is OFF, 1 - Laser is ON)
	unsigned char INT0;  //laser intensity 0 (0 - 100%)
	unsigned char INT1;  //laser intensity 1 (0 - 100%)
	unsigned char INT2;  //laser intensity 2 (0 - 100%)
	unsigned char INT3;  //laser intensity 3 (0 - 100%)
	unsigned char OPT0;  //laser 0's option
	unsigned char OPT1;  //laser 1's option
	unsigned char OPT2;  //laser 2's option
	unsigned char OPT3;  //laser 3's option
	unsigned short SP4[16];  //Spare
	unsigned short SID;  //Seam ID (0 - 255)
	unsigned short STY;  //Seam Type
	unsigned char N[40];  //Seam Name
	unsigned short SP5[64];  //Spare
	unsigned short CST;  //CAN Status
	unsigned short SP6[128];  //Spare
	} status;
	void (*update_cb)(const struct MTE_laser_t *);
	void (*status_cb)(const struct MTE_laser_t *);
			 
	struct {
		unsigned int Sy;
		unsigned int Sz;
		unsigned int Dy;
		unsigned int Dz;
		unsigned int TSFN;
		struct {
			unsigned int x, y, status;
		} mp[MTE_MEASUREMENT_N];
		struct {
			unsigned int val, status;
		} mv[MTE_MEASUREMENT_N];
		unsigned short SP[128];  //Spare
	} corrections;
	void (*corrections_cb)(const struct MTE_laser_t *);
	
	struct {
		struct {
			int x, y, status;
		} mp[16];
		struct {
			int val, status;
		} mv[16];
	} measurements;
	void (*measurements_cb)(const struct MTE_laser_t *);
	
	struct {
		unsigned int TSFN;
		struct {
			float x, y;
			int status;
		} mp[16];
		struct {
			float val;
			int status;
		} mv[16];
		unsigned short SP[64];  //Spare
	} measurements_mm;
	void (*measurements_mm_cb)(const struct MTE_laser_t *);

	int frame_width, frame_line;
	void (*frame_cb)(struct MTE_laser_t *);
	
	unsigned int offset;
	char buffer[2000];
	
	unsigned int frame_bitmap[MTE_FRAME_HEIGHT * MTE_FRAME_WIDTH]; //video frame  
};

//==============================================================================
// External variables

//==============================================================================
// Global functions

int MTE_laser_init (struct MTE_laser_t *laser, const char *addr, int dstPort, int srcPort);
void MTE_laser_release (struct MTE_laser_t *laser);
void MTE_laser_receive (struct MTE_laser_t *laser);

void MTE_laser_getVersion (struct MTE_laser_t *laser);
void MTE_laser_getStatus (struct MTE_laser_t *laser);
void MTE_laser_setOn (struct MTE_laser_t *laser);
void MTE_laser_setOff (struct MTE_laser_t *laser);
void MTE_laser_getCorrections (struct MTE_laser_t *laser);
void MTE_laser_getFrame (struct MTE_laser_t *laser);
void MTE_laser_setROI (struct MTE_laser_t *laser);
void MTE_laser_setShutter (struct MTE_laser_t *laser, int shutter);
void MTE_laser_setMode (struct MTE_laser_t *laser, int mode);
void MTE_laser_startProfile (struct MTE_laser_t *laser);
void MTE_laser_stopProfile (struct MTE_laser_t *laser);
void MTE_laser_startMeasurment (struct MTE_laser_t *laser);
void MTE_laser_stopMeasurment (struct MTE_laser_t *laser);
void MTE_laser_startMeasurment_mm (struct MTE_laser_t *laser);
void MTE_laser_stopMeasurment_mm (struct MTE_laser_t *laser);

void MTE_laser_debug(struct MTE_laser_t *laser);

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __MTE_laser_H__ */
