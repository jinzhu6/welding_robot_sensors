//==============================================================================
//
// Title:		MTE_com.h
// Purpose:		A short description of the interface.
//
// Created on:	04/02/2013 at 19:41:21 by DISAUSER.
// Copyright:	DISA ETSI UPV/EHU. All Rights Reserved.
//
//==============================================================================

#ifndef __MTE_com_H__
#define __MTE_com_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include "cvidef.h"

//==============================================================================
// Constants
		
#define MSG_GET_SENSOR_VERSION		1
#define MSG_SET_LASERS_OPTIONS		3
#define MSG_SET_LASERS_INTENSITY	5
#define MSG_SET_CAMERA_SHUTTER		6
#define MSG_SET_LASER_ON			7
#define MSG_SET_LASER_OFF			8
#define MSG_SET_CAMERA_ROI			12
#define MSG_GET_SENSOR_STATUS		15
#define MSG_EEPROM_R_SYSTEM_DATA			30
#define MSG_FLASH_R_SYSTEM_DATA				33
#define MSG_SET_BASIC_SEAM_TYPE				40
#define MSG_LOAD_SEAM_DATA					42
#define MSG_WRITE_SEAM_DATA					43
#define MSG_DEL_SEAM_DATA					44
#define MSG_SET_MEASUREMENT_LIMITS			45
#define MSG_GET_MEASUREMENT_LIMITS			46
#define MSG_SET_MEASUREMENT_OPTIONS			47
#define MSG_SET_CUR_TEACH_POSITION			51
#define MSG_START_TRACKING					52
#define MSG_STOP_TRACKING					53
#define MSG_GET_CUR_CORRECTIONS				54
#define MSG_GET_FIRMWARE_VERSION			100
#define MSG_GET_MAIN_BD_TEMP				105
#define MSG_GET_SENSOR_TEMP					106
#define MSG_START_VIDEO_DATA_SENDING		144
#define MSG_START_PROFILE_SENDING			146
#define MSG_STOP_PROFILE_SENDING			147
#define MSG_START_MEASUREMENT_SENDING		148
#define MSG_STOP_MEASUREMENT_SENDING		149
#define MSG_START_MEASUREMENT_SENDING_IN_MM	150
#define MSG_STOP_MEASUREMENT_SENDING_IN_MM	151
#define MSG_ERROR_REPORT					255


//==============================================================================
// Types

struct MTE_msg_t
{
	unsigned short command;
	unsigned short length;
	unsigned short data[0];
};


//==============================================================================
// External variables

//==============================================================================
// Global functions


#ifdef __cplusplus
    }
#endif

#endif  /* ndef __MTE_com_H__ */
