/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/* Copyright (c) National Instruments 2013. All Rights Reserved.          */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                            1       /* callback function: panel_cb */
#define  PANEL_ROBOT_Rzm_BUTTON           2       /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Rzp_BUTTON           3       /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Rym_BUTTON           4       /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Ryp_BUTTON           5       /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Rxm_BUTTON           6       /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Rxp_BUTTON           7       /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Zm_BUTTON            8       /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Zp_BUTTON            9       /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Ym_BUTTON            10      /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Yp_BUTTON            11      /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Xm_BUTTON            12      /* control type: command, callback function: robot_move_cb */
#define  PANEL_ROBOT_Xp_BUTTON            13      /* control type: command, callback function: robot_move_cb */
#define  PANEL_LASER_SETROI_BUTTON        14      /* control type: command, callback function: laser_setROI_cb */
#define  PANEL_LASER_OFF_BUTTON           15      /* control type: command, callback function: laser_button_cb */
#define  PANEL_ROBOT_POWER_BUTTON         16      /* control type: command, callback function: robot_button_cb */
#define  PANEL_ROBOT_HOLD_BUTTON          17      /* control type: command, callback function: robot_button_cb */
#define  PANEL_ROBOT_POSITION_BUTTON      18      /* control type: command, callback function: robot_position_cb */
#define  PANEL_LASER_IMAGE_BUTTON         19      /* control type: command, callback function: laser_button_cb */
#define  PANEL_LASER_CORRECT_BUTTON       20      /* control type: command, callback function: laser_button_cb */
#define  PANEL_ENGINE_ORIENTA_BUTTON      21      /* control type: command, callback function: robot_button_cb */
#define  PANEL_ENGINE_STEP_BUTTON         22      /* control type: command, callback function: robot_button_cb */
#define  PANEL_ENGINE_CENTER_BUTTON       23      /* control type: command, callback function: robot_button_cb */
#define  PANEL_ENGINE_STOP_BUTTON         24      /* control type: command, callback function: robot_button_cb */
#define  PANEL_LASER_MEMMSTOP_BUTTON      25      /* control type: command, callback function: laser_button_cb */
#define  PANEL_THERMCAM_STOP_BUTTON       26      /* control type: command, callback function: thermcam_button_cb */
#define  PANEL_LASER_MEASSTOP_BUTTON      27      /* control type: command, callback function: laser_button_cb */
#define  PANEL_LASER_PROFSTOP_BUTTON      28      /* control type: command, callback function: laser_button_cb */
#define  PANEL_LASER_SEARCH_BUTTON        29      /* control type: command, callback function: laser_button_cb */
#define  PANEL_GET_POSITION_BUTTON        30      /* control type: command, callback function: robot_getPosition_cb */
#define  PANEL_ROBOT_GO_BUTTON            31      /* control type: command, callback function: robot_go_cb */
#define  PANEL_LASER_ON_BUTTON            32      /* control type: command, callback function: laser_button_cb */
#define  PANEL_LASER_ON_LED               33      /* control type: LED, callback function: (none) */
#define  PANEL_INCREMENT_NUMERIC          34      /* control type: numeric, callback function: robot_increment_cb */
#define  PANEL_ROI_Y2_NUMERIC             35      /* control type: numeric, callback function: (none) */
#define  PANEL_ENGINE_ARC_V               36      /* control type: numeric, callback function: robot_arc_cb */
#define  PANEL_ROI_Y1_NUMERIC             37      /* control type: numeric, callback function: (none) */
#define  PANEL_ENGINE_ARC_C               38      /* control type: numeric, callback function: robot_arc_cb */
#define  PANEL_ROI_X2_NUMERIC             39      /* control type: numeric, callback function: (none) */
#define  PANEL_ROI_X1_NUMERIC             40      /* control type: numeric, callback function: (none) */
#define  PANEL_MODE_NUMERIC               41      /* control type: numeric, callback function: (none) */
#define  PANEL_Rz_NUMERIC                 42      /* control type: numeric, callback function: (none) */
#define  PANEL_Ry_NUMERIC                 43      /* control type: numeric, callback function: (none) */
#define  PANEL_Rx_NUMERIC                 44      /* control type: numeric, callback function: (none) */
#define  PANEL_Z_NUMERIC                  45      /* control type: numeric, callback function: (none) */
#define  PANEL_Y_NUMERIC                  46      /* control type: numeric, callback function: (none) */
#define  PANEL_ENGINE_INIT_BUTTON         47      /* control type: command, callback function: robot_button_cb */
#define  PANEL_ENGINE_START_BUTTON        48      /* control type: command, callback function: robot_button_cb */
#define  PANEL_X_NUMERIC                  49      /* control type: numeric, callback function: (none) */
#define  PANEL_LASER_MEMMSTAR_BUTTON      50      /* control type: command, callback function: laser_button_cb */
#define  PANEL_THERMCAM_START_BUTTON      51      /* control type: command, callback function: thermcam_button_cb */
#define  PANEL_SPEED_NUMERIC              52      /* control type: numeric, callback function: robot_speed_cb */
#define  PANEL_LASER_MEASSTAR_BUTTON      53      /* control type: command, callback function: laser_button_cb */
#define  PANEL_PICTURE                    54      /* control type: picture, callback function: (none) */
#define  PANEL_LASER_PROFSTAR_BUTTON      55      /* control type: command, callback function: laser_button_cb */
#define  PANEL_LASER_STOP_BUTTON          56      /* control type: command, callback function: laser_button_cb */
#define  PANEL_LASER_STATUS_BUTTON        57      /* control type: command, callback function: laser_button_cb */
#define  PANEL_LASER_TRACK_BUTTON         58      /* control type: command, callback function: laser_button_cb */
#define  PANEL_TEXTMSG_5                  59      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG                    60      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG_4                  61      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG_2                  62      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTBOX                    63      /* control type: textBox, callback function: (none) */
#define  PANEL_TEXTMSG_3                  64      /* control type: textMsg, callback function: (none) */
#define  PANEL_ENGINE_ARCONOFF            65      /* control type: binary, callback function: robot_arc_cb */
#define  PANEL_TEXTMSG_6                  66      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG_7                  67      /* control type: textMsg, callback function: (none) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK laser_button_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK laser_setROI_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panel_cb(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK robot_arc_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK robot_button_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK robot_getPosition_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK robot_go_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK robot_increment_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK robot_move_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK robot_position_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK robot_speed_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK thermcam_button_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
