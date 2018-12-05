//==============================================================================
//
// Title:		MTE_laser.c
// Purpose:		A short description of the implementation.
//
// Created on:	05/02/2013 at 12:00:01 by puri.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include <windows.h>
//#include "winsock2.h"
#include "toolbox.h"
#include <ansi_c.h>
#include <udpsupp.h>
#include "MTE_com.h"
#include "MTE_laser.h"

//==============================================================================
// Constants
#define MTE_LASER_VIDEO_PORT 11000

//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

static void MTE_msg_send_ch(const struct MTE_laser_t *laser, int channel, const char *msg, int length)
{
	int error = UDPWrite(channel, laser->port, laser->ipaddr, msg, length);
	if (error < 0)
	{
		ErrorPrintf("MTE_msg_send(%d, %s, %d): error: %d-%s\n",
			laser->port, laser->ipaddr, length, error, GetGeneralErrorString(error));
	}
}

static inline void MTE_msg_send(const struct MTE_laser_t *laser, const char *msg, int length)
{
	MTE_msg_send_ch(laser, laser->channel, msg, length);
}

static void send_command_ch(const struct MTE_laser_t *laser, int channel, unsigned short cmd)
{
	struct MTE_msg_t msg;
	msg.command = cmd;
	msg.length = 0;
	MTE_msg_send_ch(laser, channel, (char*)&msg, sizeof(msg));	
}

static inline void send_command(const struct MTE_laser_t *laser, unsigned short cmd)
{
	send_command_ch(laser, laser->channel, cmd);
}

static int CVICALLBACK UDPThread (void *functionData)
{
	CmtSetCurrentThreadPriority (THREAD_PRIORITY_ABOVE_NORMAL);
	while (((struct MTE_laser_t *)functionData)->run)
		MTE_laser_receive(functionData);
	return 0;
}

static inline int toRGB(int val)
{
	if (val > 0x0ff00) val = 0x0ff00;
	else val &= 0x0ff00;
	return (val<<8 | val | val>>8);
}

static void process_frame(struct MTE_laser_t *laser, int line, int width, unsigned short *data)
{
	laser->frame_line = line - laser->status.X1;
	if (laser->frame_line == 0) laser->frame_width = width;
	if (laser->frame_width != width)
		ErrorPrintf("frame width mismatch(%d != %d) in line %d\n", laser->frame_width, width, line);
	else if (laser->frame_line < MTE_FRAME_HEIGHT && laser->frame_width <= MTE_FRAME_WIDTH)
		while (width--)
			laser->frame_bitmap[(laser->frame_line * laser->frame_width) + width] = toRGB(data[width]);
	if (laser->frame_cb && laser->status.X2 && (line >= laser->status.X2))
		laser->frame_cb(laser);
}

DECLSPEC_IMPORT int PASCAL setsockopt(int,int,int,const char*,int);
#define SOL_SOCKET	0xffff
#define SO_RCVBUF	0x1002

static int CVICALLBACK FrameThread (void *functionData)
{
	int s, channel;
	struct MTE_laser_t *laser = functionData;
	if (CreateUDPChannel(MTE_LASER_VIDEO_PORT, &channel)) return -1;
	if (GetUDPSocketHandle (channel, &s) == 0)
	{
		int rcvbuf = 50000;
		setsockopt(s, SOL_SOCKET, SO_RCVBUF, (const char*)&rcvbuf, sizeof(rcvbuf));
	}
	while (laser->run_video)
	{
		int offset = 0;
		char buffer[4000];
//		Delay(1.5);
		send_command_ch(laser, channel, MSG_START_VIDEO_DATA_SENDING);
		laser->frame_line = 0;
		while (laser->run_video && laser->frame_line < (laser->status.X2 - laser->status.X1))
		{
			int size = UDPRead(channel, buffer + offset, sizeof(buffer) - offset, 2000, NULL, NULL);
			struct MTE_msg_t *msg = (struct MTE_msg_t *)(buffer + offset);
			if (size <= 0)
			{
				DebugPrintf("size <= 0\n");
				break;
			}
			else if (size >= 4 && msg->command == MSG_START_VIDEO_DATA_SENDING && msg->length >= (size - 4))
			{//is msg head
				if (msg->length == 0)
				{
					offset = 0;
					continue;
				}
				else if (msg->length + 4 == size)
				{
					process_frame(laser, msg->data[1], (msg->length - 4)/2, msg->data + 2);
				}
				else
				{
					if (offset)
					{ //tail of the frame is lost
						process_frame(laser, msg->data[1], (msg->length - 4)/2, msg->data + 2);
						memmove(buffer, buffer + offset, size);
						DebugPrintf("tail of the frame is lost\n");
					}
					offset = size;
				}
			}
			else if (offset)
			{//is tail
				msg = (struct MTE_msg_t *)buffer;
//				if (offset + size != msg->length + 4)
//					DebugPrintf("length mismatch\n");
				process_frame(laser, msg->data[1], (msg->length - 4)/2, msg->data + 2);
				offset = 0;
			}
			else
			{
				DebugPrintf("head is missing\n");
				offset = 0;
			}
		}
	}
	DisposeUDPChannel(channel);
	return 0;
}

static int CVICALLBACK ProfileThread (void *functionData)
{
	int s, channel, i, j, offset = 0;
	struct MTE_laser_t *laser = functionData;
	unsigned short data[1000];
	if (CreateUDPChannel(MTE_LASER_VIDEO_PORT, &channel)) return -1;
	if (GetUDPSocketHandle (channel, &s) == 0)
	{
		int rcvbuf = 50000;
		setsockopt(s, SOL_SOCKET, SO_RCVBUF, (const char*)&rcvbuf, sizeof(rcvbuf));
	}
	send_command_ch(laser, channel, MSG_START_PROFILE_SENDING);
	while (laser->run_video)
	{
		int size = UDPRead(channel, data, sizeof(data), 2000, NULL, NULL);
		if (size <= 0)
		{
			DebugPrintf("ProfileThread -> 'size <= 0'\n");
			continue;
		}
		if (size == 4 && data[0] == MSG_START_PROFILE_SENDING)
			continue;
		if (size >= 16 && data[0] == MSG_START_PROFILE_SENDING && data[1] == ((data[6]-data[4]+1)*32+12))
		{//is msg head
			laser->status.X1 = data[4];
			laser->status.Y1 = data[5];
			laser->status.X2 = data[6];
			laser->status.Y2 = data[7];
			laser->frame_width = laser->status.Y2 - laser->status.Y1 + 1;
			laser->frame_line = laser->status.X2 - laser->status.X1;
			memset(laser->frame_bitmap, 0, (laser->frame_line + 1) * laser->frame_width * 4);
			i = j = 0; offset = -8;
		}
		if (!offset)
		{
			DebugPrintf("ProfileThread -> '!offset - head is missing'\n");
			continue;
		}
		while ((i*16+j*2-offset) < size/2)
		{
			int pos = data[i*16+j*2-offset] - laser->status.Y1;
			if (pos >= 0 && pos < laser->frame_width)
				laser->frame_bitmap[(i*laser->frame_width) + pos] = toRGB(data[i*16+j*2-offset+1]<<4);
			if (++j==8)
				i++, j=0;
		}
		offset += size/2;
		if (laser->frame_cb && i >= laser->frame_line)
			laser->frame_cb(laser);
//			PostDeferredCall((DeferredCallbackPtr)laser->frame_cb, laser);
	}
	send_command_ch(laser, channel, MSG_STOP_PROFILE_SENDING);
	DisposeUDPChannel(channel);
	return 0;
}

static int checkMinLength(const struct MTE_msg_t *msg, int expected)
{
	if (msg->length < expected)
	{
		 ErrorPrintf("checkMinLength(%d, %d < %d): LENGTH MISMATCH\n", msg->command, msg->length, expected);
		 return 0;
	}
	return 1;
}

static int checkLength(const struct MTE_msg_t *msg, int expected)
{
	if (msg->length != expected)
	{
		 ErrorPrintf("checkLength(%d, %d != %d): LENGTH MISMATCH\n", msg->command, msg->length, expected);
		 return 0;
	}
	return 1;
}

static void process_measurement(struct MTE_laser_t *laser, unsigned int *data)
{
	int i; int something = 0;
//if (!stdout_debug) return; stdout_debug=0;
//	DebugPrintf("MEASUREMENTS\n");
	for(i=0;i<16;i++) if(!data[3*i+2])
	{
		laser->frame_bitmap[(data[3*i] * laser->frame_width) + data[3*i+1]] = 0x00ff0000;
		DebugPrintf("Measurement %d (x,y status): %d,%d %d\n", i, data[3*i], data[3*i+1], data[3*i+2]);
		something = 1;
	}
//	for(i=0;i<16;i++)
//		DebugPrintf("Measurement %d (val status): %d mm %d\n", i, data[2*i+48], data[3*i+49]);
	if (something && laser->frame_cb) PostDeferredCall((DeferredCallbackPtr)laser->frame_cb, laser);
}

static void MTE_msg_dispatch (struct MTE_laser_t *laser, struct MTE_msg_t *msg)
{
	switch (msg->command)
	{
	case MSG_GET_SENSOR_VERSION:
		if (checkLength(msg, sizeof(laser->protocol_version)))
			memcpy(&laser->protocol_version, msg->data, sizeof(laser->protocol_version));
		break;
	case MSG_START_TRACKING:
		if (checkLength(msg, sizeof(laser->status.Mode)))
			laser->status.Mode = msg->data[0];
		break;
	case MSG_STOP_TRACKING:
		if (checkLength(msg, 0))
			laser->status.Mode = 0;
		break;
	case MSG_SET_LASER_ON:
		if (checkLength(msg, 0))
		{
			laser->status.LS = 1;
			if (laser->update_cb) PostDeferredCall((DeferredCallbackPtr)laser->update_cb, laser);
		}
		break;
	case MSG_SET_LASER_OFF:
		if (checkLength(msg, 0))
		{
			laser->status.LS = 0;
			if (laser->update_cb) PostDeferredCall((DeferredCallbackPtr)laser->update_cb, laser);
		}
		break;
	case MSG_SET_CAMERA_ROI:
		if (checkLength(msg, 0))
			if (laser->update_cb) PostDeferredCall((DeferredCallbackPtr)laser->update_cb, laser);
		break;
	case MSG_GET_SENSOR_STATUS:
		if (checkLength(msg, sizeof(laser->status)))
		{
			memcpy(&laser->status, msg->data, sizeof(laser->status));
			if (laser->update_cb) PostDeferredCall((DeferredCallbackPtr)laser->update_cb, laser);
			if (laser->status_cb) PostDeferredCall((DeferredCallbackPtr)laser->status_cb, laser);
		}
		break;
	case MSG_GET_CUR_CORRECTIONS:
		if (checkLength(msg, sizeof(laser->corrections)))
		{
			memcpy(&laser->corrections, msg->data, sizeof(laser->corrections));
			if (laser->corrections_cb) PostDeferredCall((DeferredCallbackPtr)laser->corrections_cb, laser);
		}
		break;
	case MSG_STOP_PROFILE_SENDING:
	case MSG_STOP_MEASUREMENT_SENDING:	
	case MSG_STOP_MEASUREMENT_SENDING_IN_MM:
		checkLength(msg, 0);
		break;
//	case MSG_START_PROFILE_SENDING:
//		if (msg->length && checkMinLength(msg, 12))
//			process_profile(laser, msg->data, msg->length);
//		break;
	case MSG_START_MEASUREMENT_SENDING:
		if (msg->length && checkLength(msg, sizeof(laser->measurements)))
		{
			memcpy(&laser->measurements, msg->data, sizeof(laser->measurements));
			if (laser->measurements_cb) PostDeferredCall((DeferredCallbackPtr)laser->measurements_cb, laser);
		}
		break;
	case MSG_START_MEASUREMENT_SENDING_IN_MM:
		if (msg->length && checkLength(msg, sizeof(laser->measurements_mm)))
		{
			CmtGetLock(laser->lockHandle);
			memcpy(&laser->measurements_mm, msg->data, sizeof(laser->measurements_mm));
			CmtReleaseLock(laser->lockHandle);
			if (laser->measurements_mm_cb) PostDeferredCall((DeferredCallbackPtr)laser->measurements_mm_cb, laser);
		}
		break;
	case MSG_START_VIDEO_DATA_SENDING:
		if (msg->length && checkMinLength(msg, 4))
			process_frame(laser, msg->data[1], (msg->length - 4)/2, msg->data + 2);
		break;
	case MSG_ERROR_REPORT:
		ErrorPrintf("************** MTE_msg_dispatch(MSG_ERROR_REPORT):\n");
		if (checkMinLength(msg, 8))
		{
			int error = *(int*)msg->data;
			int i,nop = *((int*)msg->data + 1);
			ErrorPrintf("ERROR CODE: %d (%d)\n", error, nop);
			for (i=0; i < nop; i++)
				ErrorPrintf("PARAM%d: %d\n", i, *((int*)msg->data + 2 + i));
		}
		break;
	default:
		ErrorPrintf("MTE_msg_dispatch(%d, %d): unrecognized msg\n", msg->command, msg->length);	
	}
}


//==============================================================================
// Global variables

//==============================================================================
// Global functions

int MTE_laser_init (struct MTE_laser_t *laser, const char *addr, int dstPort, int srcPort)
{
	int error;
	memset(laser, 0, sizeof(struct MTE_laser_t));
	laser->ipaddr = addr;
	laser->port = dstPort;
	laser->run = 1;
//laser->frame_line=1023;
//laser->frame_width=1280;
//laser->measurements.mp[1].x=500;laser->measurements.mp[1].y=500;
	error = CreateUDPChannel(srcPort, &laser->channel);
	if (!error)
		error = CmtNewThreadPool(2, &laser->poolHandle);
	if (!error)
		error = CmtScheduleThreadPoolFunction(laser->poolHandle, UDPThread, laser, NULL);
	if (!error)
		error = CmtNewLock(NULL, 0, &laser->lockHandle);
	if (error < 0)
		ErrorPrintf("MTE_laser_init(%s, %d, %d): error: %d-%s\n",
			addr, dstPort, srcPort, error, GetGeneralErrorString(error));
	return error;
}

void MTE_laser_release (struct MTE_laser_t *laser)
{
	laser->run = 0;
	DisposeUDPChannel(laser->channel);
	CmtDiscardLock(laser->lockHandle);
	CmtDiscardThreadPool(laser->poolHandle);
}

void MTE_laser_receive (struct MTE_laser_t *laser)
{
	if (laser->offset < sizeof(laser->buffer))
	{
		int size = UDPRead(laser->channel, laser->buffer + laser->offset,
			sizeof(laser->buffer) - laser->offset, UDP_WAIT_FOREVER, NULL, NULL);
//printf("MTE_laser_receive: %d bytes (%d)\n", size, laser->offset);
//		if (!size) break;
		if (size > 0)
		{
			int offset = 0;
			struct MTE_msg_t *msg = (struct MTE_msg_t *)laser->buffer;
			laser->offset += size;
			while ((offset + sizeof(struct MTE_msg_t) + msg->length) <= laser->offset)
			{
				 MTE_msg_dispatch(laser, msg);
				 offset += (sizeof(struct MTE_msg_t) + msg->length);
				 msg = (struct MTE_msg_t *)(laser->buffer + offset);
			}
			if (offset && (offset < laser->offset))
				memmove(laser->buffer, laser->buffer + offset, laser->offset - offset);
			laser->offset -= offset;
			if (laser->offset > 1 && (msg->command == 0 || msg->command > 255))
			{
				ErrorPrintf("MTE_laser_receive(%d): buffer is dirty %d\n", laser->channel, laser->offset);
				laser->offset = 0;	
			}
		}
		else
		{
			ErrorPrintf("MTE_laser_receive(%d): reading error %d-%s\n",
				laser->channel, size, GetGeneralErrorString(size));
			laser->offset = 0;
		}
	}
	else
	{
		ErrorPrintf("MTE_laser_receive(%d): buffer overflow %d\n", laser->channel, laser->offset);
		laser->offset = 0;
	}
}

void MTE_laser_getVersion (struct MTE_laser_t *laser)
{
	send_command(laser, MSG_GET_SENSOR_VERSION);
}

void MTE_laser_getStatus (struct MTE_laser_t *laser)
{
	send_command(laser, MSG_GET_SENSOR_STATUS);
}

void MTE_laser_setOn (struct MTE_laser_t *laser)
{
	send_command(laser, MSG_SET_LASER_ON);
}

void MTE_laser_setOff (struct MTE_laser_t *laser)
{
	send_command(laser, MSG_SET_LASER_OFF);
}

void MTE_laser_getCorrections (struct MTE_laser_t *laser)
{
	send_command(laser, MSG_GET_CUR_CORRECTIONS);
}

void MTE_laser_getFrame (struct MTE_laser_t *laser)
{
//	send_command(laser, MSG_START_VIDEO_DATA_SENDING);
	if (laser->run_video) return;
	laser->run_video = 1;
	CmtScheduleThreadPoolFunction(laser->poolHandle, FrameThread, laser, NULL);
}

void MTE_laser_setROI (struct MTE_laser_t *laser)
{
	struct {
		struct MTE_msg_t head;
		unsigned short data[6];
	} msg;
	msg.head.command = MSG_SET_CAMERA_ROI;
	msg.head.length = sizeof(msg.data);
	msg.data[0] = laser->status.X1; msg.data[1] = laser->status.Y1;
	msg.data[2] = laser->status.X2; msg.data[3] = laser->status.Y2;
	msg.data[4] = msg.data[5] = 0;
	MTE_msg_send(laser, (char*)&msg, sizeof(msg));
}

void MTE_laser_setShutter (struct MTE_laser_t *laser, int shutter)
{
	struct {
		struct MTE_msg_t head;
		unsigned short sht;
	} msg;
	msg.head.command = MSG_SET_CAMERA_SHUTTER;
	msg.head.length = sizeof(msg.sht);
	msg.sht = shutter;
	MTE_msg_send(laser, (char*)&msg, sizeof(msg));
}

void MTE_laser_setMode (struct MTE_laser_t *laser, int mode)
{
	if (mode >= 1 && mode <= 2)
	{
		struct {
			struct MTE_msg_t head;
			unsigned short snm;
		} msg;
		msg.head.command = MSG_START_TRACKING;
		msg.head.length = sizeof(msg.snm);
		msg.snm = mode;
		MTE_msg_send(laser, (char*)&msg, sizeof(msg));
	}
	else
	{
		send_command(laser, MSG_STOP_TRACKING);
	}
}

void MTE_laser_startProfile (struct MTE_laser_t *laser)
{
//	send_command(laser, MSG_START_PROFILE_SENDING);
	if (laser->run_video) return;
	laser->run_video = 1;
	CmtScheduleThreadPoolFunction(laser->poolHandle, ProfileThread, laser, NULL);
}

void MTE_laser_stopProfile (struct MTE_laser_t *laser)
{
	laser->run_video = 0;
	send_command(laser, MSG_STOP_PROFILE_SENDING);
}

void MTE_laser_startMeasurment (struct MTE_laser_t *laser)
{
	send_command(laser, MSG_START_MEASUREMENT_SENDING);
}

void MTE_laser_stopMeasurment (struct MTE_laser_t *laser)
{
	send_command(laser, MSG_STOP_MEASUREMENT_SENDING);
}

void MTE_laser_startMeasurment_mm (struct MTE_laser_t *laser)
{
	send_command(laser, MSG_START_MEASUREMENT_SENDING_IN_MM);
}

void MTE_laser_stopMeasurment_mm (struct MTE_laser_t *laser)
{
	send_command(laser, MSG_STOP_MEASUREMENT_SENDING_IN_MM);
}


//////////////////////////////test
#if 0
void MTE_laser_receive_test (struct MTE_laser_t *laser, char *buffer, int len)
{
	if (laser->offset < sizeof(laser->buffer))
	{
		int size = len;//UDPRead(laser->channel, laser->buffer + laser->offset,
			//sizeof(laser->buffer) - laser->offset, UDP_DO_NOT_WAIT, NULL, NULL);
		if (len > sizeof(laser->buffer) - laser->offset)
			DebugPrintf("no hay espacio\n");
		memcpy(laser->buffer + laser->offset,buffer,len);
		if (size > 0)
		{
			int offset = 0;
			struct MTE_msg_t *msg = (struct MTE_msg_t *)laser->buffer;
			laser->offset += size;
			while ((offset + sizeof(struct MTE_msg_t) + msg->length) <= laser->offset)
			{
				 MTE_msg_dispatch(laser, msg);
				 offset += (sizeof(struct MTE_msg_t) + msg->length);
				 msg = (struct MTE_msg_t *)(laser->buffer + offset);
			}
			if (offset < laser->offset)
				memmove(laser->buffer, laser->buffer + offset, laser->offset - offset);
			laser->offset -= offset;
		}
		else
		{
			ErrorPrintf("MTE_laser_receive(%d): reading error %d-%s\n",
				laser->channel, size, GetGeneralErrorString(size));
		}
	}
	else
	{
		ErrorPrintf("MTE_laser_receive(%d): buffer overflow %d\n", laser->channel, laser->offset);
		laser->offset = 0;
	}
}

///normales, varios en un datagrama, un mensaje varios datagramas, varios con el ultimo cortado
unsigned short dt_ver[] = { 1, 4, 4, 5};
unsigned short dt_on[] = { 7, 0 };
unsigned short dt_off[] = { 8, 0 };

unsigned short dt_on_ver_off[] = { 7, 0, 1, 4, 4, 5, 8, 0 };

unsigned short dt_ver1[] = { 1, 4, 4};
unsigned short dt_ver2[] = { 5};

unsigned short dt_error[] = { 255, 12, 1, 1, 1, 0, 9, 0 };

unsigned short dt_multi1[] = { 7, 0, 1, 4, 4, 5, 8, 0,255, 12, 1, 1, 1, 0 };
unsigned short dt_multi2[] = { 9, 0, 1, 4, 4, 5, 8, 0 };

int main(int argc, char *argv[])
{
	struct MTE_laser_t laser;
	MTE_laser_init(&laser,"192.168.6.51", 8002, 8001);
	
	MTE_laser_getVersion (&laser);
	MTE_laser_getStatus (&laser);
	MTE_laser_setOn (&laser);
	MTE_laser_setOff (&laser);
	
	MTE_laser_receive(&laser);
	
	printf("Enviando 3 sueltos ...\n");
getchar();	
	MTE_laser_receive_test(&laser, (char*)dt_ver, sizeof(dt_ver));
	MTE_laser_receive_test(&laser, (char*)dt_on, sizeof(dt_on));
	MTE_laser_receive_test(&laser, (char*)dt_off, sizeof(dt_off));
	
	printf("Enviando uno con 3 ...\n");
getchar();	
	MTE_laser_receive_test(&laser, (char*)dt_on_ver_off, sizeof(dt_on_ver_off));	
	
		printf("Enviando 2 con 1 ...\n");
getchar();	
	MTE_laser_receive_test(&laser, (char*)dt_ver1, sizeof(dt_ver1));
	MTE_laser_receive_test(&laser, (char*)dt_ver2, sizeof(dt_ver2));
	
	printf("Enviando dt error ...\n");
getchar();	
	MTE_laser_receive_test(&laser, (char*)dt_error, sizeof(dt_error));

		printf("Enviando multi1 ...\n");
getchar();	
	MTE_laser_receive_test(&laser, (char*)dt_multi1, sizeof(dt_multi1));
	
			printf("Enviando multi2 ...\n");
getchar();	
	MTE_laser_receive_test(&laser, (char*)dt_multi2, sizeof(dt_multi2));
	
	MTE_laser_release(&laser);
	
	
	printf("Fin\n");
	getchar();
	
}
#endif

void MTE_laser_debug(struct MTE_laser_t *laser)
{
	int size;
	char buffer[2048];

	MTE_laser_getVersion (laser);
	MTE_laser_receive (laser);
	MTE_laser_getStatus (laser);
	MTE_laser_receive (laser);
	laser->status.X1 = laser->status.Y1 = 0;
	laser->status.X2 = 1023;laser->status.Y2 = 1200;
	MTE_laser_setROI (laser);
	MTE_laser_receive (laser);
	MTE_laser_setOn (laser);
	MTE_laser_receive (laser);
getchar();	
	for (;;)
	{						  int i;
		printf("Solicitando imagen ...\n");
		MTE_laser_getFrame  (laser);
		for (i=0;i<2048;i++)
			MTE_laser_receive (laser); 
		getchar();
	}
}

