#include <windows.h>
#include <ansi_c.h>
#include <cvirte.h>		
#include <userint.h>
#include "wr_engine.h"
#include "panel.h"
#include "optrisCT.h"

#define ARRAY_SIZE(_array) (sizeof(_array)/sizeof(*_array))

static int panelHandle;

void panel_laser_update(const struct MTE_laser_t *laser)
{
	SetCtrlVal(panelHandle, PANEL_LASER_ON_LED, laser->status.LS);
	SetCtrlVal(panelHandle, PANEL_ROI_X1_NUMERIC, laser->status.X1);
	SetCtrlVal(panelHandle, PANEL_ROI_Y1_NUMERIC, laser->status.Y1);
	SetCtrlVal(panelHandle, PANEL_ROI_X2_NUMERIC, laser->status.X2);
	SetCtrlVal(panelHandle, PANEL_ROI_Y2_NUMERIC, laser->status.Y2);
}

void panel_laser_status(const struct MTE_laser_t *laser)
{
	int pos = 0;
	char message[1000];
	static const char *modes[] = { "StandBy", "Searching", "Tracking", "Vertical Search", "Side Search", "Locate", "Continuos" };
    pos += snprintf (message + pos, sizeof(message) - pos, "Mode: %s\n",
		(laser->status.Mode < ARRAY_SIZE(modes)) ? modes[laser->status.Mode] : "unknown");
    pos += snprintf (message + pos, sizeof(message) - pos, "Main Board Temp: %f ºC\n",
		((double)laser->status.MTP - 10000.0)/100.0);	
	pos += snprintf (message + pos, sizeof(message) - pos, "Power Board Temp: %f ºC\n",
		((double)laser->status.STP - 10000.0)/100.0);
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser Temp: %f ºC\n",
		((double)laser->status.LTP - 10000.0)/100.0);
	pos += snprintf (message + pos, sizeof(message) - pos, "Heater: %s\n", laser->status.HST ? "ON" : "OFF");
	pos += snprintf (message + pos, sizeof(message) - pos, "Camera Gain: %d\n", laser->status.CGN);
	pos += snprintf (message + pos, sizeof(message) - pos, "Camera Shutter: %d\n", laser->status.SHT);
	pos += snprintf (message + pos, sizeof(message) - pos, "Camera Options: %d\n", laser->status.COP);
	pos += snprintf (message + pos, sizeof(message) - pos, "ROI X1: %d\n", laser->status.X1);
	pos += snprintf (message + pos, sizeof(message) - pos, "ROI Y1: %d\n", laser->status.Y1);
	pos += snprintf (message + pos, sizeof(message) - pos, "ROI X2: %d\n", laser->status.X2);
	pos += snprintf (message + pos, sizeof(message) - pos, "ROI Y2: %d\n", laser->status.Y2);
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser status: %s\n", laser->status.LS ? "ON" : "OFF");
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser intensity 0: %d %%\n", laser->status.INT0);
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser intensity 1: %d %%\n", laser->status.INT1);
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser intensity 2: %d %%\n", laser->status.INT2);
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser intensity 3: %d %%\n", laser->status.INT3);
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser 0 option: %d\n", laser->status.OPT0);
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser 1 option: %d\n", laser->status.OPT1);
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser 2 option: %d\n", laser->status.OPT2);
	pos += snprintf (message + pos, sizeof(message) - pos, "Laser 3 option: %d\n", laser->status.OPT3);
	pos += snprintf (message + pos, sizeof(message) - pos, "Seam ID: %d\n", laser->status.SID);
	pos += snprintf (message + pos, sizeof(message) - pos, "Seam Type: %d\n", laser->status.STY);
	pos += snprintf (message + pos, (sizeof(message) - pos < sizeof(laser->status.N)) ? 
		sizeof(message) - pos : sizeof(laser->status.N), "Seam Name: %s\n", laser->status.N);
	pos += snprintf (message + pos, sizeof(message) - pos, "Can Status: %d\n", laser->status.CST);
	
    MessagePopup ("MTE Smart Laser Status", message);
}

void panel_laser_corrections(const struct MTE_laser_t *laser)
{
	int i,pos = 0;
	char message[1000];
    pos += snprintf (message + pos, sizeof(message) - pos,
		"Correction Speed y: %d\n", laser->corrections.Sy);
	pos += snprintf (message + pos, sizeof(message) - pos,
		"Correction Speed z: %d\n", laser->corrections.Sz);
	pos += snprintf (message + pos, sizeof(message) - pos,
		"Correction Distance y: %d\n", laser->corrections.Dy);
	pos += snprintf (message + pos, sizeof(message) - pos,
		"Correction Distance z: %d\n", laser->corrections.Dz);
	for (i=0; i<MTE_MEASUREMENT_N; i++)
	{
		pos += snprintf (message + pos, sizeof(message) - pos, "MPoint[%d] x: %d; y: %d; status: %d\n",
			i, laser->corrections.mp[i].x, laser->corrections.mp[i].y, laser->corrections.mp[i].status);	
		pos += snprintf (message + pos, sizeof(message) - pos, "MValue[%d]: %d; status: %d\n",
			i, laser->corrections.mv[i].val, laser->corrections.mv[i].status);	
	}
    MessagePopup ("Laser corrections", message);	
}

static inline int pixel_adjust(float pixel) { return (pixel*.00005) - 56500.0; } //FIXME !!!!
static inline double mm_adjust(float mm) { return (mm * 1.0) - 0.0; }

static void panel_laser_measurement(const struct MTE_laser_t *laser)
{
	int i,pos = 0;
	char message[2000];
	pos += snprintf (message + pos, sizeof(message) - pos, "MEASUREMENTS IN PIXELS\n");
	for(i=0;i<16;i++)
		pos += snprintf (message + pos, sizeof(message) - pos,
			"Measurement %d (x,y status): %d,%d %d\n", i, pixel_adjust(laser->measurements.mp[i].x),
			pixel_adjust(laser->measurements.mp[i].y), laser->measurements.mp[i].status);
	for(i=0;i<16;i++)
		pos += snprintf (message + pos, sizeof(message) - pos,
			"Measurement %d (val status): %02.2f mm %d\n", i, mm_adjust(laser->measurements.mv[i].val),
			laser->measurements.mv[i].status);
	ResetTextBox (panelHandle, PANEL_TEXTBOX, message);
}

static const char *str_points[] = { "", "x ", "y ", "z ", "Rx", "Ry", "Rz", "" };
static void panel_laser_measurement_mm(const struct MTE_laser_t *laser)
{
	int i,pos = 0;
	char message[2000];
	pos += snprintf (message + pos, sizeof(message) - pos, "\nMEASUREMENTS IN MM (%d ms):\n", laser->measurements_mm.TSFN);
	for(i=0;i<16;i++)
		pos += snprintf (message + pos, sizeof(message) - pos,
			"Measurement %d (x,y status): %02.2f,%02.2f mm %d\n", i, mm_adjust(laser->measurements_mm.mp[i].x),
			mm_adjust(laser->measurements_mm.mp[i].y), laser->measurements_mm.mp[i].status);
	for(i=0;i<16;i++)
		pos += snprintf (message + pos, sizeof(message) - pos,
			"Measurement %d (val status): %02.2f mm %d\n", i, mm_adjust(laser->measurements_mm.mv[i].val),
			laser->measurements_mm.mv[i].status);
	ResetTextBox (panelHandle, PANEL_TEXTBOX, message);
}

static void mark_mpoints(struct MTE_laser_t *laser)
{
	int i,j,k,l,cross_size = (laser->frame_width/32) | 1;
	for (i=0;i<16;i++) if (!laser->measurements.mp[i].status)
	{
		j = pixel_adjust(laser->measurements.mp[i].y) - laser->status.X1 - cross_size/2;
		k = pixel_adjust(laser->measurements.mp[i].x) - laser->status.Y1 - cross_size/2;
		for (l=0;l<cross_size;j++,k++,l++) if(j>=0&&k>=0&&j<=laser->frame_line&&k<laser->frame_width)
			laser->frame_bitmap[j*laser->frame_width+k] = 0x00ff0000;
		j = pixel_adjust(laser->measurements.mp[i].y) - laser->status.X1 - cross_size/2;
		k = pixel_adjust(laser->measurements.mp[i].x) - laser->status.Y1 + cross_size/2;
		for (l=0;l<cross_size;j++,k--,l++) if(j>=0&&k>=0&&j<=laser->frame_line&&k<laser->frame_width)
			laser->frame_bitmap[j*laser->frame_width+k] = 0x00ff0000;
	}
}

static void print_temperature()
{
	char message[128];
	snprintf(message,sizeof(message),"T1: %d         ", optrisCT_get(0,0));
	DeleteTextBoxLine(panelHandle, PANEL_TEXTBOX, 0);
	InsertTextBoxLine(panelHandle, PANEL_TEXTBOX, 0, message);
}

void panel_laser_showImage(struct MTE_laser_t *laser)
{
	if (laser->frame_width)
	{
		int bitmapID;
		mark_mpoints(laser);
		if (!NewBitmap(-1, 32, laser->frame_width, laser->frame_line + 1, 0, (char*)laser->frame_bitmap, 0, &bitmapID))
		{
			SetCtrlBitmap(panelHandle, PANEL_PICTURE, 0, bitmapID);
			DiscardBitmap(bitmapID);
		}
	}
}

void panel_thermcam_showImage(struct optrisPI_cam_t *camera, void *frame)
{
	int bitmapID, i, temp;
	static int mpx = 0;
	unsigned int buffer[160*120];
	unsigned short *pframe = frame;
	print_temperature();
//	if (camera->f) fprintf(camera->f, "TP(%d)=%d\n", mpx, optrisCT_get(0,0));
	if (mpx++%8!=0) return;
//se salta el principio (todos < 3000); max 199 datos
	if (camera->fidx > 0 && camera->fidx < 200) optrisPI_cam_print(pframe);
if (camera->fidx == 0) for(i=0; i < 160*120; i++) if (pframe[i] > 3000) {optrisPI_cam_print(pframe);break;}
	for(i=0; i < 160*120; i++) buffer[i] = (pframe[i]<<6)&0x00ff00;
	if (!NewBitmap(-1, 32, 160, 120, 0, (unsigned char *)buffer, 0, &bitmapID))
	{
		SetCtrlBitmap(panelHandle, PANEL_PICTURE, 0, bitmapID);
		DiscardBitmap(bitmapID);
	}
}

static int NX2PANEL[] = { PANEL_X_NUMERIC, PANEL_Y_NUMERIC, PANEL_Z_NUMERIC,
						  PANEL_Rx_NUMERIC, PANEL_Ry_NUMERIC, PANEL_Rz_NUMERIC};
static void panel_update_info ()
{
	int i,pos = 0;
	char message[2000];
	if (wr_engine.calculated_points)
	{
		pos += snprintf (message + pos, sizeof(message) - pos, "\n\n%04.3f  / %d / %d / %d\n", 
			wr_engine.mon_pos_times[wr_engine.calculated_points-1], wr_engine.calculated_points,
			wr_engine.sent_points, wr_engine.current_point);
		for(i=1;i<7;i++)
			pos += snprintf (message + pos, sizeof(message) - pos, "%s  : %d\n", str_points[i], wr_engine.calculated_point[i]);
	}
	pos += snprintf (message + pos, sizeof(message) - pos, "\nMEASUREMENTS IN MM (%d ms):\n", wr_engine.laser1.measurements_mm.TSFN);
	for(i=0;i<5;i++)
		pos += snprintf (message + pos, sizeof(message) - pos,
			"Measurement %d (x,y status): %02.2f,%02.2f mm %d\n", i, mm_adjust(wr_engine.laser1.measurements_mm.mp[i].x),
			mm_adjust(wr_engine.laser1.measurements_mm.mp[i].y), wr_engine.laser1.measurements_mm.mp[i].status);
	for(i=0;i<5;i++)
		pos += snprintf (message + pos, sizeof(message) - pos,
			"Measurement %d (val status): %02.2f mm %d\n", i, mm_adjust(wr_engine.laser1.measurements_mm.mv[i].val),
			wr_engine.laser1.measurements_mm.mv[i].status);
	ResetTextBox (panelHandle, PANEL_TEXTBOX, message);
	print_temperature(); 
}

static void panel_update_pos ()
{
	int i;
	for (i=0;i<NX_POS_N;i++)
		SetCtrlVal(panelHandle, NX2PANEL[i], wr_engine.robot1.position[i]);
	SetCtrlVal(panelHandle, PANEL_MODE_NUMERIC, wr_engine.robot1.configuration);	
}

int run_panel()
{
	CmtSetCurrentThreadPriority (THREAD_PRIORITY_LOWEST);
	wr_engine.laser1.update_cb = panel_laser_update;
	wr_engine.laser1.status_cb = panel_laser_status;
	wr_engine.laser1.corrections_cb = panel_laser_corrections;
	wr_engine.laser1.measurements_cb = panel_laser_measurement;
	wr_engine.laser1.measurements_mm_cb = panel_laser_measurement_mm;
	wr_engine.laser1.frame_cb = panel_laser_showImage;
	wr_engine.camera1.frame_cb = panel_thermcam_showImage;
	wr_engine.update_cb = panel_update_pos;
	wr_engine.tracking_cb = panel_update_info;
	if ((panelHandle = LoadPanel (0, "panel.uir", PANEL)) < 0)
		return -1;
	GetCtrlVal(panelHandle, PANEL_INCREMENT_NUMERIC, &wr_engine.robot1.increment);
	GetCtrlVal(panelHandle, PANEL_SPEED_NUMERIC, &wr_engine.robot1.speed);
	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	return 0;
}

int CVICALLBACK laser_button_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{int res; //FIXME: clean out the testing chunks
	if (event == EVENT_COMMIT)
	switch (control)
	{
		case PANEL_LASER_ON_BUTTON: //MTE_laser_setOn(&wr_engine.laser1); break;
			if(res = robot_writeIO(&wr_engine.robot1, 10056, 1))
			{
				char message[100];
				snprintf(message, sizeof(message), "Error: %d (0x%x)", res, res);
				MessagePopup ("Error en comando write IO 1", message);
			}
			break;
		case PANEL_LASER_OFF_BUTTON: //MTE_laser_setOff(&wr_engine.laser1); break;
			if(res = robot_writeIO(&wr_engine.robot1, 10056, 0))
			{
				char message[100];
				snprintf(message, sizeof(message), "Error: %d (0x%x)", res, res);
				MessagePopup ("Error en comando write IO 0", message);
			}
			break;
		case PANEL_LASER_STATUS_BUTTON: MTE_laser_getStatus(&wr_engine.laser1); break;		
		case PANEL_LASER_CORRECT_BUTTON: MTE_laser_getCorrections(&wr_engine.laser1); break;		
		case PANEL_LASER_IMAGE_BUTTON: MTE_laser_getFrame(&wr_engine.laser1); break;
		case PANEL_LASER_TRACK_BUTTON: MTE_laser_setMode(&wr_engine.laser1, 2);
print_temperature();break;
		case PANEL_LASER_SEARCH_BUTTON: MTE_laser_setMode(&wr_engine.laser1, 1); break;
		case PANEL_LASER_STOP_BUTTON: MTE_laser_setMode(&wr_engine.laser1, 0); break;
		case PANEL_LASER_PROFSTAR_BUTTON: MTE_laser_startProfile(&wr_engine.laser1); break;
		case PANEL_LASER_MEASSTAR_BUTTON: MTE_laser_startMeasurment(&wr_engine.laser1); break;
		case PANEL_LASER_MEMMSTAR_BUTTON: MTE_laser_startMeasurment_mm(&wr_engine.laser1); break;
		case PANEL_LASER_PROFSTOP_BUTTON: MTE_laser_stopProfile(&wr_engine.laser1); break;
		case PANEL_LASER_MEASSTOP_BUTTON: MTE_laser_stopMeasurment(&wr_engine.laser1); break;
		case PANEL_LASER_MEMMSTOP_BUTTON: MTE_laser_stopMeasurment_mm(&wr_engine.laser1); break;

	}
	return 0;
}

int  CVICALLBACK laser_setROI_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal(panelHandle, PANEL_ROI_X1_NUMERIC, &wr_engine.laser1.status.X1);
			GetCtrlVal(panelHandle, PANEL_ROI_X2_NUMERIC, &wr_engine.laser1.status.X2);
			GetCtrlVal(panelHandle, PANEL_ROI_Y1_NUMERIC, &wr_engine.laser1.status.Y1);
			GetCtrlVal(panelHandle, PANEL_ROI_Y2_NUMERIC, &wr_engine.laser1.status.Y2);
			MTE_laser_setROI(&wr_engine.laser1);
			break;
	}
	return 0;
}

int CVICALLBACK robot_position_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			if (robot_getPosition(&wr_engine.robot1) == 0)
			{
				int pos = 0;
				char message[500];
				panel_update_pos ();
				pos += snprintf (message + pos, sizeof(message) - pos, "X : %d (micron)\n", wr_engine.robot1.position[NX_POS_X]);
				pos += snprintf (message + pos, sizeof(message) - pos, "Y : %d\n", wr_engine.robot1.position[NX_POS_Y]);
				pos += snprintf (message + pos, sizeof(message) - pos, "Z : %d\n", wr_engine.robot1.position[NX_POS_Z]);
				pos += snprintf (message + pos, sizeof(message) - pos, "Rx: %d (0.01 deg)\n", wr_engine.robot1.position[NX_POS_Rx]);
				pos += snprintf (message + pos, sizeof(message) - pos, "Ry: %d\n", wr_engine.robot1.position[NX_POS_Ry]);
				pos += snprintf (message + pos, sizeof(message) - pos, "Rz: %d\n", wr_engine.robot1.position[NX_POS_Rz]);
				pos += snprintf (message + pos, sizeof(message) - pos, "%s\n%s\n%s\n%s\n%s\n",
					(wr_engine.robot1.configuration & NX_CONF_MASK_FLIP) ? "No Flip" : "Flip",
					(wr_engine.robot1.configuration & NX_CONF_MASK_ARM) ? "Lower arm" : "Upper arm",
					(wr_engine.robot1.configuration & NX_CONF_MASK_FRONT) ? "Back" : "Front",
					(wr_engine.robot1.configuration & NX_CONF_MASK_R) ? "R>=180" : "R<180",
					(wr_engine.robot1.configuration & NX_CONF_MASK_T) ? "T>=180" : "T<180");	
				
			    MessagePopup ("Current Robot Position", message);	
			}
			break;
	}
	return 0;
}

static void control2position(int control, int position[NX_POS_N])
{
	memset(position, 0, sizeof(int)*NX_POS_N);
	switch(control)
	{
	case PANEL_ROBOT_Rzm_BUTTON: position[NX_POS_Rz] = -wr_engine.robot1.increment/10; break;
	case PANEL_ROBOT_Rzp_BUTTON: position[NX_POS_Rz] = wr_engine.robot1.increment/10; break; 
	case PANEL_ROBOT_Rym_BUTTON: position[NX_POS_Ry] = -wr_engine.robot1.increment/10; break; 
	case PANEL_ROBOT_Ryp_BUTTON: position[NX_POS_Ry] = wr_engine.robot1.increment/10; break; 
	case PANEL_ROBOT_Rxm_BUTTON: position[NX_POS_Rx] = -wr_engine.robot1.increment/10; break; 
	case PANEL_ROBOT_Rxp_BUTTON: position[NX_POS_Rx] = wr_engine.robot1.increment/10; break; 
	case PANEL_ROBOT_Zm_BUTTON: position[NX_POS_Z] = -wr_engine.robot1.increment; break; 
	case PANEL_ROBOT_Zp_BUTTON: position[NX_POS_Z] = wr_engine.robot1.increment; break; 
	case PANEL_ROBOT_Ym_BUTTON: position[NX_POS_Y] = -wr_engine.robot1.increment; break; 
	case PANEL_ROBOT_Yp_BUTTON: position[NX_POS_Y] = wr_engine.robot1.increment; break; 
	case PANEL_ROBOT_Xm_BUTTON: position[NX_POS_X] = -wr_engine.robot1.increment; break; 
	case PANEL_ROBOT_Xp_BUTTON: position[NX_POS_X] = wr_engine.robot1.increment; break;
	}
}

int  CVICALLBACK robot_move_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	int res, position[NX_POS_N];
	switch (event)
	{
		case EVENT_COMMIT:
			control2position(control, position);
			if(res = robot_imov(&wr_engine.robot1, position))
			{
				char message[100];
				snprintf(message, sizeof(message), "Error: %d (0x%x)", res, res);
				MessagePopup ("Error en comando IMOV", message);
			}
			break;
	}
	return 0;
}

int  CVICALLBACK robot_speed_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	int speed;
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal(panel, control, &speed);
			wr_engine.robot1.speed = speed;
			break;
	}
	return 0;
}

int  CVICALLBACK robot_increment_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	int increment;
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal(panel, control, &increment);
			wr_engine.robot1.increment = increment;
			break;
	}
	return 0;
}

int  CVICALLBACK robot_getPosition_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			if (robot_getPosition(&wr_engine.robot1) == 0)
			{
				panel_update_pos ();	
			}
			break;
	}
	return 0;
}

int  CVICALLBACK robot_go_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	int res, i, position[NX_POS_N];
	switch (event)
	{
		case EVENT_COMMIT:
			for (i=0;i<NX_POS_N;i++)
				GetCtrlVal(panel, NX2PANEL[i], &position[i]);
			GetCtrlVal(panel, PANEL_MODE_NUMERIC, &wr_engine.robot1.configuration);
			if(res = robot_movj(&wr_engine.robot1, position))
			{
				char message[100];
				snprintf(message, sizeof(message), "Error: %d (0x%x)", res, res);
				MessagePopup ("Error en comando MOVJ", message);
			}
			break;
	}
	return 0;
}

static void print_monitored_positions()
{
	int i,pos = 0, npoints = wr_engine.calculated_points;
	char message[300000];
	if (npoints > MAX_POINTS) npoints = MAX_POINTS;
/*	pos += snprintf (message + pos, sizeof(message) - pos, "SENT POSITIONS (%d)\n", wr_engine.pos_i);
	for(i=0;i<wr_engine.pos_i;i++)
		pos += snprintf (message + pos, sizeof(message) - pos,
			"Position %d (x,y,z): %d,%d,%d microm\n", i, wr_engine.pos_x[i], wr_engine.pos_y[i], wr_engine.pos_z[i]);
*/	pos += snprintf (message + pos, sizeof(message) - pos, "MONITORED POSITIONS (%d)\n", wr_engine.calculated_points);
	for(i=0;i<npoints;i++)
		pos += snprintf (message + pos, sizeof(message) - pos,
			"%d (x,y,z): %d,%d,%d (dx,dy): %d,%d microm at %f s\n", i,
			wr_engine.mon_pos_x[i], wr_engine.mon_pos_y[i], wr_engine.mon_pos_z[i], wr_engine.mes_x[i], wr_engine.mes_y[i], wr_engine.mon_pos_times[i]);
	ResetTextBox (panelHandle, PANEL_TEXTBOX, message);
	if (!wr_engine.calculated_points) return;
//	XYGraphPopup("Monitored X with time", wr_engine.mon_pos_times,wr_engine.mon_pos_x, wr_engine.mon_pos_i, VAL_DOUBLE, VAL_INTEGER);
	XYGraphPopup("Monitored y(t)", wr_engine.mon_pos_times,wr_engine.mon_pos_y, npoints, VAL_DOUBLE, VAL_INTEGER); 
	XYGraphPopup("Monitored x(y)", wr_engine.mon_pos_y,wr_engine.mon_pos_x, npoints, VAL_INTEGER, VAL_INTEGER);
	XYGraphPopup("Monitored z(y)", wr_engine.mon_pos_y,wr_engine.mon_pos_z, npoints, VAL_INTEGER, VAL_INTEGER);
//	XYGraphPopup("Monitored Z with time", wr_engine.mon_pos_times,wr_engine.mon_pos_z, wr_engine.mon_pos_i, VAL_DOUBLE, VAL_INTEGER);
	XYGraphPopup("Erro(x)", wr_engine.mon_pos_times,wr_engine.mes_x, npoints, VAL_DOUBLE, VAL_INTEGER);
	XYGraphPopup("Erro(z)", wr_engine.mon_pos_times,wr_engine.mes_y, npoints, VAL_DOUBLE, VAL_INTEGER);
/*	YGraphPopup("Monitored X positions", wr_engine.mon_pos_x, wr_engine.mon_pos_i, VAL_INTEGER);
	YGraphPopup("Programed X positions", wr_engine.pos_x, wr_engine.pos_i, VAL_INTEGER);
	YGraphPopup("Monitored Y positions", wr_engine.mon_pos_y, wr_engine.mon_pos_i, VAL_INTEGER);
	YGraphPopup("Programed Y positions", wr_engine.pos_y, wr_engine.pos_i, VAL_INTEGER);
	YGraphPopup("Monitored Z positions", wr_engine.mon_pos_z, wr_engine.mon_pos_i, VAL_INTEGER);
	YGraphPopup("Programed Z positions", wr_engine.pos_z, wr_engine.pos_i, VAL_INTEGER);*/
}

int  CVICALLBACK robot_button_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	int res;
	if (event == EVENT_COMMIT)
	switch (control)
	{
		case PANEL_ROBOT_POWER_BUTTON:
			if(res = robot_setServoPower(&wr_engine.robot1, 1))
			{
				char message[100];
				snprintf(message, sizeof(message), "Error: %d (0x%x)", res, res);
				MessagePopup ("Error en comando Servo Power", message);
			}
			break;
		case PANEL_ROBOT_HOLD_BUTTON:
			res = robot_hold(&wr_engine.robot1, !wr_engine.robot1.hold);
			res = robot_writeIO(&wr_engine.robot1, 10055, 1);	//robot ready
			if(res)
			{
				char message[100];
				snprintf(message, sizeof(message), "Error: %d (0x%x)", res, res);
				MessagePopup ("Error en comando Hold", message);
			}
			break;
		case PANEL_ENGINE_INIT_BUTTON:
			if(res = wr_engine_init())
			{
				char message[100];
				snprintf(message, sizeof(message), "Error: %d (0x%x)", res, res);
				MessagePopup ("Error welding track start", message);
			}
			break;
		case PANEL_ENGINE_START_BUTTON:
			wr_engine.laser1.measurements_mm_cb = 0;
			if (robot_arc_cb (panel, control, event, 0, 0, 0) == 0)
			if(res = wr_engine_run())
			{
				char message[100];
				snprintf(message, sizeof(message), "Error: %d (0x%x)", res, res);
				MessagePopup ("Error welding track start", message);
			}
			break;
		case PANEL_ENGINE_STOP_BUTTON:
			wr_engine_stop();
			print_monitored_positions();
			wr_engine.laser1.measurements_mm_cb = panel_laser_measurement_mm;
			break;
		case PANEL_ENGINE_CENTER_BUTTON:
			wr_engine_center();
			break;
		case PANEL_ENGINE_ORIENTA_BUTTON:
			wr_engine_orientate();
			break;
		case PANEL_ENGINE_STEP_BUTTON:
			wr_engine_step();
			break;
	}
	return 0;
}


int CVICALLBACK thermcam_button_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	if (event == EVENT_COMMIT)
	switch (control)
	{
		case PANEL_THERMCAM_START_BUTTON: optrisPI_cam_init(&wr_engine.camera1, 0); break;
		case PANEL_THERMCAM_STOP_BUTTON: optrisPI_cam_release(&wr_engine.camera1); break;

	}
	return 0;
}

int  CVICALLBACK robot_arc_cb (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	if (event == EVENT_COMMIT) 
	{
		int res, onoff, ac, av; 
		GetCtrlVal(panel, PANEL_ENGINE_ARCONOFF, &onoff);
		GetCtrlVal(panel, PANEL_ENGINE_ARC_C, &ac);
		GetCtrlVal(panel, PANEL_ENGINE_ARC_V, &av);
		if(res = wr_engine_set_arc (!!onoff, ac, av))
		{
			char message[100];
			snprintf(message, sizeof(message), "Error: %d (0x%x) (%d, %d, %d)", res, res, onoff, ac, av);
			MessagePopup ("Error welding arc param set", message);
			return -1;
		}
	}
	return 0;
}

int  CVICALLBACK panel_cb (int panel, int event, void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_CLOSE:
			QuitUserInterface(0);
			break;
	}
	return 0;
}

