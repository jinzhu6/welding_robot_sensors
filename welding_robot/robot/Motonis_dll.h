// CVI wrapper header file for .NET assembly: MotoNIS, Version=0.9.1.1, Culture=neutral, PublicKeyToken=cf185952c1ac8640
//
// This is specified by the '__assemblyName' constant in the generated source file.
// If there are multiple versions of this assembly, and you want .NET to determine 
// the appropriate one to load, then you can remove the version, culture, and public 
// key token information from the constant and just specify the name of the assembly.
//
// Other assemblies referenced by the target assembly:
// Name: mscorlib, Location: C:\Windows\Microsoft.NET\Framework\v2.0.50727\mscorlib.dll
// Name: System.Web.Services, Location: C:\Windows\assembly\GAC_MSIL\System.Web.Services\2.0.0.0__b03f5f7f11d50a3a\System.Web.Services.dll
// Name: System, Location: C:\Windows\assembly\GAC_MSIL\System\2.0.0.0__b77a5c561934e089\System.dll
//
// If any assembly, including the target assembly, is not installed in the
// Global Assembly Cache (GAC) or in the application directory, and the wrapper
// code needs to load the assembly to convert types like arrays and enums, then
// you must register the path of the assembly with the CVI .NET library by
// calling CDotNetRegisterAssemblyPath before calling the wrapper code.
//
// Types exposed by the target assembly but defined in other assemblies:
// CVI name: System_Exception, .NET name: System.Exception, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_EventHandler, .NET name: System.EventHandler, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_AsyncCallback, .NET name: System.AsyncCallback, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Runtime_Remoting_ObjRef, .NET name: System.Runtime.Remoting.ObjRef, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Reflection_MethodInfo, .NET name: System.Reflection.MethodInfo, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_ComponentModel_ISite, .NET name: System.ComponentModel.ISite, Assembly: System, Module: Global Assembly Cache
// CVI name: System_Web_Services_Protocols_SoapProtocolVersion, .NET name: System.Web.Services.Protocols.SoapProtocolVersion, Assembly: System.Web.Services, Module: Global Assembly Cache
// CVI name: System_Delegate, .NET name: System.Delegate, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Runtime_Serialization_SerializationInfo, .NET name: System.Runtime.Serialization.SerializationInfo, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Text_Encoding, .NET name: System.Text.Encoding, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Net_IWebProxy, .NET name: System.Net.IWebProxy, Assembly: System, Module: Global Assembly Cache
// CVI name: System_Type, .NET name: System.Type, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Security_Cryptography_X509Certificates_X509CertificateCollection, .NET name: System.Security.Cryptography.X509Certificates.X509CertificateCollection, Assembly: System, Module: Global Assembly Cache
// CVI name: System_Net_CookieContainer, .NET name: System.Net.CookieContainer, Assembly: System, Module: Global Assembly Cache
// CVI name: System_IAsyncResult, .NET name: System.IAsyncResult, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Net_ICredentials, .NET name: System.Net.ICredentials, Assembly: System, Module: Global Assembly Cache
// CVI name: System_ComponentModel_IContainer, .NET name: System.ComponentModel.IContainer, Assembly: System, Module: Global Assembly Cache
// CVI name: System_Runtime_Serialization_StreamingContext, .NET name: System.Runtime.Serialization.StreamingContext, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_DateTime, .NET name: System.DateTime, Assembly: mscorlib, Module: Global Assembly Cache

#include <cvidotnet.h>

#ifdef __cplusplus
extern "C" {
#endif

// Type definitions
typedef struct __Motoman_MotoNIS_MasterJobData * Motoman_MotoNIS_MasterJobData;
typedef struct __Motoman_MotoNIS_StandardResponseData * Motoman_MotoNIS_StandardResponseData;
typedef struct __Motoman_MotoNIS_VarInfo * Motoman_MotoNIS_VarInfo;
typedef struct __Motoman_MotoNIS_PosVarInfo * Motoman_MotoNIS_PosVarInfo;
typedef struct __Motoman_MotoNIS_IoInfo * Motoman_MotoNIS_IoInfo;
typedef struct __Motoman_MotoNIS_MonitorInfo * Motoman_MotoNIS_MonitorInfo;
typedef struct __Motoman_MotoNIS_AlarmStatusResponseData * Motoman_MotoNIS_AlarmStatusResponseData;
typedef struct __Motoman_MotoNIS_AlarmData * Motoman_MotoNIS_AlarmData;
typedef struct __Motoman_MotoNIS_AlarmCodeResponseData * Motoman_MotoNIS_AlarmCodeResponseData;
typedef struct __Motoman_MotoNIS_ModeResponseData * Motoman_MotoNIS_ModeResponseData;
typedef struct __Motoman_MotoNIS_CycleResponseData * Motoman_MotoNIS_CycleResponseData;
typedef struct __Motoman_MotoNIS_ServoPowerResponseData * Motoman_MotoNIS_ServoPowerResponseData;
typedef struct __Motoman_MotoNIS_PlayStatusResponseData * Motoman_MotoNIS_PlayStatusResponseData;
typedef struct __Motoman_MotoNIS_TaskData * Motoman_MotoNIS_TaskData;
typedef struct __Motoman_MotoNIS_CurJobResponseData * Motoman_MotoNIS_CurJobResponseData;
typedef struct __Motoman_MotoNIS_JobNameResponseData * Motoman_MotoNIS_JobNameResponseData;
typedef struct __Motoman_MotoNIS_SpecialOperationResponseData * Motoman_MotoNIS_SpecialOperationResponseData;
typedef struct __Motoman_MotoNIS_JobNameData * Motoman_MotoNIS_JobNameData;
typedef struct __Motoman_MotoNIS_SystemTimeResponseData * Motoman_MotoNIS_SystemTimeResponseData;
typedef struct __Motoman_MotoNIS_ControlGroupData * Motoman_MotoNIS_ControlGroupData;
typedef struct __Motoman_MotoNIS_CartesianPositionResponseData * Motoman_MotoNIS_CartesianPositionResponseData;
typedef struct __Motoman_MotoNIS_PulsePositionResponseData * Motoman_MotoNIS_PulsePositionResponseData;
typedef struct __Motoman_MotoNIS_FbPulsePositionresponseData * Motoman_MotoNIS_FbPulsePositionresponseData;
typedef struct __Motoman_MotoNIS_ServoSpeedResponseData * Motoman_MotoNIS_ServoSpeedResponseData;
typedef struct __Motoman_MotoNIS_FbSpeedResponseData * Motoman_MotoNIS_FbSpeedResponseData;
typedef struct __Motoman_MotoNIS_TorqueResponseData * Motoman_MotoNIS_TorqueResponseData;
typedef struct __Motoman_MotoNIS_SystemTimeData * Motoman_MotoNIS_SystemTimeData;
typedef struct __Motoman_MotoNIS_VarData * Motoman_MotoNIS_VarData;
typedef struct __Motoman_MotoNIS_IoData * Motoman_MotoNIS_IoData;
typedef struct __Motoman_MotoNIS_PosVarData * Motoman_MotoNIS_PosVarData;
typedef struct __Motoman_MotoNIS_ModeData * Motoman_MotoNIS_ModeData;
typedef struct __Motoman_MotoNIS_CycleData * Motoman_MotoNIS_CycleData;
typedef struct __Motoman_MotoNIS_ServoPowerData * Motoman_MotoNIS_ServoPowerData;
typedef struct __Motoman_MotoNIS_CurrentJobData * Motoman_MotoNIS_CurrentJobData;
typedef struct __Motoman_MotoNIS_StartJobData * Motoman_MotoNIS_StartJobData;
typedef struct __Motoman_MotoNIS_HoldData * Motoman_MotoNIS_HoldData;
typedef struct __Motoman_MotoNIS_WaitJobData * Motoman_MotoNIS_WaitJobData;
typedef struct __Motoman_MotoNIS_DeleteJobData * Motoman_MotoNIS_DeleteJobData;
typedef struct __Motoman_MotoNIS_JogSpeedResponseData * Motoman_MotoNIS_JogSpeedResponseData;
typedef struct __Motoman_MotoNIS_JogCoordinateResponseData * Motoman_MotoNIS_JogCoordinateResponseData;
typedef struct __Motoman_MotoNIS_ConvertJobToRelativeData * Motoman_MotoNIS_ConvertJobToRelativeData;
typedef struct __Motoman_MotoNIS_ConvertJobRelativeToPulseData * Motoman_MotoNIS_ConvertJobRelativeToPulseData;
typedef struct __Motoman_MotoNIS_IMoveData * Motoman_MotoNIS_IMoveData;
typedef struct __Motoman_MotoNIS_MoveJData * Motoman_MotoNIS_MoveJData;
typedef struct __Motoman_MotoNIS_MoveLData * Motoman_MotoNIS_MoveLData;
typedef struct __Motoman_MotoNIS_PMoveJData * Motoman_MotoNIS_PMoveJData;
typedef struct __Motoman_MotoNIS_PMoveLData * Motoman_MotoNIS_PMoveLData;
typedef struct __Motoman_MotoNIS_INisService * Motoman_MotoNIS_INisService;
typedef struct __Motoman_MotoNIS_NisService * Motoman_MotoNIS_NisService;
typedef struct __Motoman_MotoNIS_AccessToken * Motoman_MotoNIS_AccessToken;
typedef struct __System_DateTime * System_DateTime;
typedef struct __Motoman_MotoNIS_Core_CoreService * Motoman_MotoNIS_Core_CoreService;
typedef struct __System_Net_CookieContainer * System_Net_CookieContainer;
typedef struct __System_Security_Cryptography_X509Certificates_X509CertificateCollection * System_Security_Cryptography_X509Certificates_X509CertificateCollection;
typedef struct __System_Net_IWebProxy * System_Net_IWebProxy;
typedef struct __System_Net_ICredentials * System_Net_ICredentials;
typedef struct __System_Text_Encoding * System_Text_Encoding;
typedef struct __System_ComponentModel_ISite * System_ComponentModel_ISite;
typedef struct __System_ComponentModel_IContainer * System_ComponentModel_IContainer;
typedef struct __System_AsyncCallback * System_AsyncCallback;
typedef struct __System_IAsyncResult * System_IAsyncResult;
typedef struct __System_EventHandler * System_EventHandler;
typedef struct __System_Type * System_Type;
typedef struct __System_Runtime_Remoting_ObjRef * System_Runtime_Remoting_ObjRef;
typedef struct __Motoman_MotoNIS_Core_VARINFO * Motoman_MotoNIS_Core_VARINFO;
typedef struct __Motoman_MotoNIS_Core_PMOVLSENDDATA * Motoman_MotoNIS_Core_PMOVLSENDDATA;
typedef struct __Motoman_MotoNIS_Core_PMOVJSENDDATA * Motoman_MotoNIS_Core_PMOVJSENDDATA;
typedef struct __Motoman_MotoNIS_Core_MOVLSENDDATA * Motoman_MotoNIS_Core_MOVLSENDDATA;
typedef struct __Motoman_MotoNIS_Core_MOVJSENDDATA * Motoman_MotoNIS_Core_MOVJSENDDATA;
typedef struct __Motoman_MotoNIS_Core_IMOVSENDDATA * Motoman_MotoNIS_Core_IMOVSENDDATA;
typedef struct __Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA * Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA;
typedef struct __Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA * Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA;
typedef struct __Motoman_MotoNIS_Core_JOGCOORDRSPDATA * Motoman_MotoNIS_Core_JOGCOORDRSPDATA;
typedef struct __Motoman_MotoNIS_Core_JOGSPEEDRSPDATA * Motoman_MotoNIS_Core_JOGSPEEDRSPDATA;
typedef struct __Motoman_MotoNIS_Core_DELETEJOBSENDDATA * Motoman_MotoNIS_Core_DELETEJOBSENDDATA;
typedef struct __Motoman_MotoNIS_Core_WAITJOBSENDDATA * Motoman_MotoNIS_Core_WAITJOBSENDDATA;
typedef struct __Motoman_MotoNIS_Core_HOLDSENDDATA * Motoman_MotoNIS_Core_HOLDSENDDATA;
typedef struct __Motoman_MotoNIS_Core_STARTJOBSENDDATA * Motoman_MotoNIS_Core_STARTJOBSENDDATA;
typedef struct __Motoman_MotoNIS_Core_CURJOBSENDDATA * Motoman_MotoNIS_Core_CURJOBSENDDATA;
typedef struct __Motoman_MotoNIS_Core_MASTERJOBSENDDATA * Motoman_MotoNIS_Core_MASTERJOBSENDDATA;
typedef struct __Motoman_MotoNIS_Core_SERVOPOWERSENDDATA * Motoman_MotoNIS_Core_SERVOPOWERSENDDATA;
typedef struct __Motoman_MotoNIS_Core_CYCLESENDDATA * Motoman_MotoNIS_Core_CYCLESENDDATA;
typedef struct __Motoman_MotoNIS_Core_MODESENDDATA * Motoman_MotoNIS_Core_MODESENDDATA;
typedef struct __Motoman_MotoNIS_Core_STDRSPDATA * Motoman_MotoNIS_Core_STDRSPDATA;
typedef struct __Motoman_MotoNIS_Core_POSVARDATA * Motoman_MotoNIS_Core_POSVARDATA;
typedef struct __Motoman_MotoNIS_Core_SYSTIMESENDDATA * Motoman_MotoNIS_Core_SYSTIMESENDDATA;
typedef struct __Motoman_MotoNIS_Core_SYSTIMERSPDATA * Motoman_MotoNIS_Core_SYSTIMERSPDATA;
typedef struct __Motoman_MotoNIS_Core_JOBNAMESENDDATA * Motoman_MotoNIS_Core_JOBNAMESENDDATA;
typedef struct __Motoman_MotoNIS_Core_SPECIALOPRSPDATA * Motoman_MotoNIS_Core_SPECIALOPRSPDATA;
typedef struct __Motoman_MotoNIS_Core_CURJOBRSPDATA * Motoman_MotoNIS_Core_CURJOBRSPDATA;
typedef struct __Motoman_MotoNIS_Core_JOBNAMERSPDATA * Motoman_MotoNIS_Core_JOBNAMERSPDATA;
typedef struct __Motoman_MotoNIS_Core_TASKSENDDATA * Motoman_MotoNIS_Core_TASKSENDDATA;
typedef struct __Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA * Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA;
typedef struct __Motoman_MotoNIS_Core_SERVOPOWERRSPDATA * Motoman_MotoNIS_Core_SERVOPOWERRSPDATA;
typedef struct __Motoman_MotoNIS_Core_CYCLERSPDATA * Motoman_MotoNIS_Core_CYCLERSPDATA;
typedef struct __Motoman_MotoNIS_Core_MODERSPDATA * Motoman_MotoNIS_Core_MODERSPDATA;
typedef struct __Motoman_MotoNIS_Core_ALARMDATA * Motoman_MotoNIS_Core_ALARMDATA;
typedef struct __Motoman_MotoNIS_Core_ALARMCODERSPDATA * Motoman_MotoNIS_Core_ALARMCODERSPDATA;
typedef struct __Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA * Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA;
typedef struct __Motoman_MotoNIS_Core_MONITORINFO * Motoman_MotoNIS_Core_MONITORINFO;
typedef struct __Motoman_MotoNIS_Core_TORQUERSPDATA * Motoman_MotoNIS_Core_TORQUERSPDATA;
typedef struct __Motoman_MotoNIS_Core_FBSPEEDRSPDATA * Motoman_MotoNIS_Core_FBSPEEDRSPDATA;
typedef struct __Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA * Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA;
typedef struct __Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA * Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA;
typedef struct __Motoman_MotoNIS_Core_POSVARINFO * Motoman_MotoNIS_Core_POSVARINFO;
typedef struct __Motoman_MotoNIS_Core_CARTPOSRSPDATAEX * Motoman_MotoNIS_Core_CARTPOSRSPDATAEX;
typedef struct __Motoman_MotoNIS_Core_CARTPOSEXSENDDATA * Motoman_MotoNIS_Core_CARTPOSEXSENDDATA;
typedef struct __Motoman_MotoNIS_Core_CARTPOSRSPDATA * Motoman_MotoNIS_Core_CARTPOSRSPDATA;
typedef struct __Motoman_MotoNIS_Core_PULSEPOSRSPDATA * Motoman_MotoNIS_Core_PULSEPOSRSPDATA;
typedef struct __Motoman_MotoNIS_Core_CTRLGRPSENDDATA * Motoman_MotoNIS_Core_CTRLGRPSENDDATA;
typedef struct __Motoman_MotoNIS_Core_IOINFO * Motoman_MotoNIS_Core_IOINFO;
typedef struct __Motoman_MotoNIS_Core_IODATA * Motoman_MotoNIS_Core_IODATA;
typedef struct __Motoman_MotoNIS_Core_VARDATA * Motoman_MotoNIS_Core_VARDATA;
typedef struct __Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler * Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler;
typedef struct __System_Reflection_MethodInfo * System_Reflection_MethodInfo;
typedef struct __System_Runtime_Serialization_SerializationInfo * System_Runtime_Serialization_SerializationInfo;
typedef struct __System_Runtime_Serialization_StreamingContext * System_Runtime_Serialization_StreamingContext;
typedef struct __System_Delegate * System_Delegate;
typedef struct __Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs * Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs;
typedef struct __System_Exception * System_Exception;
typedef struct __Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler * Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs * Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler * Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs * Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler * Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs * Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler * Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs * Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler * Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs * Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler * Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs * Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler * Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs * Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler * Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs * Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler * Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs * Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler * Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs * Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler * Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs * Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler * Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs * Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler * Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs * Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler * Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs * Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler * Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs * Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler * Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs * Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler * Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs * Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler * Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs * Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler * Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs * Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler * Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs * Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler * Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs * Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler * Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs * Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler * Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs * Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler * Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs * Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler * Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs * Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler * Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs * Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler * Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs * Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler * Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs * Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler * Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs * Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler * Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs * Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler * Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs * Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler * Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs * Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxHoldCompletedEventHandler * Motoman_MotoNIS_Core_NxHoldCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxHoldCompletedEventArgs * Motoman_MotoNIS_Core_NxHoldCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler * Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs * Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler * Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs * Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler * Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs * Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler * Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs * Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler * Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs * Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler * Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs * Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler * Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs * Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler * Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs * Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler * Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs * Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler * Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs * Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler * Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs * Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler * Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs * Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler * Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs * Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler * Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs * Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxPingCompletedEventHandler * Motoman_MotoNIS_Core_NxPingCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxPingCompletedEventArgs * Motoman_MotoNIS_Core_NxPingCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler * Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs * Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler * Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs * Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs;
typedef struct __Motoman_MotoNIS_Core_NxDebugCompletedEventHandler * Motoman_MotoNIS_Core_NxDebugCompletedEventHandler;
typedef struct __Motoman_MotoNIS_Core_NxDebugCompletedEventArgs * Motoman_MotoNIS_Core_NxDebugCompletedEventArgs;

// C wrapper for enumeration type Motoman.MotoNIS.WebMethodResult
#ifndef Motoman_MotoNIS_WebMethodResult_DEFINED
#define Motoman_MotoNIS_WebMethodResult_DEFINED
typedef enum Motoman_MotoNIS_WebMethodResult
{
	Motoman_MotoNIS_WebMethodResult_Ok = 0x0,
	Motoman_MotoNIS_WebMethodResult_TokenLevelError = 0x2,
	Motoman_MotoNIS_WebMethodResult_TokenExpiredError = 0x3,
	Motoman_MotoNIS_WebMethodResult_Failed = 0xffffffff,
} Motoman_MotoNIS_WebMethodResult;
#endif // Motoman_MotoNIS_WebMethodResult_DEFINED

// C wrapper for enumeration type Motoman.MotoNIS.TokenRequestResult
#ifndef Motoman_MotoNIS_TokenRequestResult_DEFINED
#define Motoman_MotoNIS_TokenRequestResult_DEFINED
typedef enum Motoman_MotoNIS_TokenRequestResult
{
	Motoman_MotoNIS_TokenRequestResult_Ok = 0x0,
	Motoman_MotoNIS_TokenRequestResult_Failed = 0x1,
} Motoman_MotoNIS_TokenRequestResult;
#endif // Motoman_MotoNIS_TokenRequestResult_DEFINED

// C wrapper for enumeration type Motoman.MotoNIS.AccessLevel
#ifndef Motoman_MotoNIS_AccessLevel_DEFINED
#define Motoman_MotoNIS_AccessLevel_DEFINED
typedef enum Motoman_MotoNIS_AccessLevel
{
	Motoman_MotoNIS_AccessLevel_None = 0x0,
	Motoman_MotoNIS_AccessLevel_Low = 0x1,
	Motoman_MotoNIS_AccessLevel_High = 0x2,
} Motoman_MotoNIS_AccessLevel;
#endif // Motoman_MotoNIS_AccessLevel_DEFINED

// C wrapper for enumeration type System.Web.Services.Protocols.SoapProtocolVersion
#ifndef System_Web_Services_Protocols_SoapProtocolVersion_DEFINED
#define System_Web_Services_Protocols_SoapProtocolVersion_DEFINED
typedef enum System_Web_Services_Protocols_SoapProtocolVersion
{
	System_Web_Services_Protocols_SoapProtocolVersion_Default = 0x0,
	System_Web_Services_Protocols_SoapProtocolVersion_Soap11 = 0x1,
	System_Web_Services_Protocols_SoapProtocolVersion_Soap12 = 0x2,
} System_Web_Services_Protocols_SoapProtocolVersion;
#endif // System_Web_Services_Protocols_SoapProtocolVersion_DEFINED


typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxHoldCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxHoldCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxPingCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxPingCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs e);
typedef int (CVICALLBACK * Motoman_MotoNIS_Core_NxDebugCompletedEventHandler__Callback_t)(void * callbackData,
		CDotNetHandle sender,
		Motoman_MotoNIS_Core_NxDebugCompletedEventArgs e);


// Global Functions
int CVIFUNC Initialize_MotoNIS(void);
int CVIFUNC Close_MotoNIS(void);

// Type: Motoman.MotoNIS.MasterJobData
int CVIFUNC Motoman_MotoNIS_MasterJobData__Create(
	Motoman_MotoNIS_MasterJobData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MasterJobData__Create_1(
	Motoman_MotoNIS_MasterJobData * __instance,
	char * jobName,
	short taskNumber,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MasterJobData_Get_TaskNumber(
	Motoman_MotoNIS_MasterJobData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MasterJobData_Set_TaskNumber(
	Motoman_MotoNIS_MasterJobData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MasterJobData_Get_JobName(
	Motoman_MotoNIS_MasterJobData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MasterJobData_Set_JobName(
	Motoman_MotoNIS_MasterJobData __instance,
	char * value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.StandardResponseData
int CVIFUNC Motoman_MotoNIS_StandardResponseData__Create(
	Motoman_MotoNIS_StandardResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(
	Motoman_MotoNIS_StandardResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_StandardResponseData_Set_ErrorNumber(
	Motoman_MotoNIS_StandardResponseData __instance,
	unsigned short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.VarInfo
int CVIFUNC Motoman_MotoNIS_VarInfo__Create(
	Motoman_MotoNIS_VarInfo * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarInfo__Create_1(
	Motoman_MotoNIS_VarInfo * __instance,
	unsigned short Index,
	unsigned short Type,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarInfo_Get_Index(
	Motoman_MotoNIS_VarInfo __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarInfo_Set_Index(
	Motoman_MotoNIS_VarInfo __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarInfo_Get_Type(
	Motoman_MotoNIS_VarInfo __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarInfo_Set_Type(
	Motoman_MotoNIS_VarInfo __instance,
	unsigned short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.PosVarInfo
int CVIFUNC Motoman_MotoNIS_PosVarInfo__Create(
	Motoman_MotoNIS_PosVarInfo * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarInfo__Create_1(
	Motoman_MotoNIS_PosVarInfo * __instance,
	unsigned short index,
	unsigned short type,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarInfo_Get_Index(
	Motoman_MotoNIS_PosVarInfo __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarInfo_Set_Index(
	Motoman_MotoNIS_PosVarInfo __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarInfo_Get_Type(
	Motoman_MotoNIS_PosVarInfo __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarInfo_Set_Type(
	Motoman_MotoNIS_PosVarInfo __instance,
	unsigned short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.IoInfo
int CVIFUNC Motoman_MotoNIS_IoInfo__Create(
	Motoman_MotoNIS_IoInfo * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IoInfo__Create_1(
	Motoman_MotoNIS_IoInfo * __instance,
	unsigned __int64 address,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IoInfo_Get_Address(
	Motoman_MotoNIS_IoInfo __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IoInfo_Set_Address(
	Motoman_MotoNIS_IoInfo __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.MonitorInfo
int CVIFUNC Motoman_MotoNIS_MonitorInfo__Create(
	Motoman_MotoNIS_MonitorInfo * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MonitorInfo__Create_1(
	Motoman_MotoNIS_MonitorInfo * __instance,
	unsigned __int64 index,
	unsigned __int64 type,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MonitorInfo_Get_Index(
	Motoman_MotoNIS_MonitorInfo __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MonitorInfo_Set_Index(
	Motoman_MotoNIS_MonitorInfo __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MonitorInfo_Get_Type(
	Motoman_MotoNIS_MonitorInfo __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MonitorInfo_Set_Type(
	Motoman_MotoNIS_MonitorInfo __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.AlarmStatusResponseData
int CVIFUNC Motoman_MotoNIS_AlarmStatusResponseData__Create(
	Motoman_MotoNIS_AlarmStatusResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmStatusResponseData_Get_IsAlarm(
	Motoman_MotoNIS_AlarmStatusResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmStatusResponseData_Set_IsAlarm(
	Motoman_MotoNIS_AlarmStatusResponseData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.AlarmData
int CVIFUNC Motoman_MotoNIS_AlarmData__Create(
	Motoman_MotoNIS_AlarmData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmData__Create_1(
	Motoman_MotoNIS_AlarmData * __instance,
	Motoman_MotoNIS_Core_ALARMDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmData_Get_AlarmNumber(
	Motoman_MotoNIS_AlarmData __instance,
	unsigned short ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmData_Set_AlarmNumber(
	Motoman_MotoNIS_AlarmData __instance,
	unsigned short * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmData_Get_AlarmInfo(
	Motoman_MotoNIS_AlarmData __instance,
	unsigned short ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmData_Set_AlarmInfo(
	Motoman_MotoNIS_AlarmData __instance,
	unsigned short * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmData__Get__MAX_ALARM_COUNT(
	int * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.AlarmCodeResponseData
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData__Create(
	Motoman_MotoNIS_AlarmCodeResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData__Create_1(
	Motoman_MotoNIS_AlarmCodeResponseData * __instance,
	Motoman_MotoNIS_Core_ALARMCODERSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Get_AlarmCount(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Set_AlarmCount(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Get_ErrorData(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Set_ErrorData(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Get_ErrorNumber(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Set_ErrorNumber(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Get_AlarmData(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	Motoman_MotoNIS_AlarmData * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Set_AlarmData(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	Motoman_MotoNIS_AlarmData value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.ModeResponseData
int CVIFUNC Motoman_MotoNIS_ModeResponseData__Create(
	Motoman_MotoNIS_ModeResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ModeResponseData__Create_1(
	Motoman_MotoNIS_ModeResponseData * __instance,
	Motoman_MotoNIS_Core_MODERSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ModeResponseData_Get_Mode(
	Motoman_MotoNIS_ModeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ModeResponseData_Set_Mode(
	Motoman_MotoNIS_ModeResponseData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ModeResponseData_Get_Remote(
	Motoman_MotoNIS_ModeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ModeResponseData_Set_Remote(
	Motoman_MotoNIS_ModeResponseData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.CycleResponseData
int CVIFUNC Motoman_MotoNIS_CycleResponseData__Create(
	Motoman_MotoNIS_CycleResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CycleResponseData__Create_1(
	Motoman_MotoNIS_CycleResponseData * __instance,
	Motoman_MotoNIS_Core_CYCLERSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CycleResponseData_Get_Cycle(
	Motoman_MotoNIS_CycleResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CycleResponseData_Set_Cycle(
	Motoman_MotoNIS_CycleResponseData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.ServoPowerResponseData
int CVIFUNC Motoman_MotoNIS_ServoPowerResponseData__Create(
	Motoman_MotoNIS_ServoPowerResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ServoPowerResponseData__Create_1(
	Motoman_MotoNIS_ServoPowerResponseData * __instance,
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ServoPowerResponseData_Get_ServoPower(
	Motoman_MotoNIS_ServoPowerResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ServoPowerResponseData_Set_ServoPower(
	Motoman_MotoNIS_ServoPowerResponseData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.PlayStatusResponseData
int CVIFUNC Motoman_MotoNIS_PlayStatusResponseData__Create(
	Motoman_MotoNIS_PlayStatusResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PlayStatusResponseData__Create_1(
	Motoman_MotoNIS_PlayStatusResponseData * __instance,
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PlayStatusResponseData_Get_Hold(
	Motoman_MotoNIS_PlayStatusResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PlayStatusResponseData_Get_Start(
	Motoman_MotoNIS_PlayStatusResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.TaskData
int CVIFUNC Motoman_MotoNIS_TaskData__Create(
	Motoman_MotoNIS_TaskData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_TaskData__Create_1(
	Motoman_MotoNIS_TaskData * __instance,
	short taskNumber,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_TaskData_Get_TaskNumber(
	Motoman_MotoNIS_TaskData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_TaskData_Set_TaskNumber(
	Motoman_MotoNIS_TaskData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.CurJobResponseData
int CVIFUNC Motoman_MotoNIS_CurJobResponseData__Create(
	Motoman_MotoNIS_CurJobResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CurJobResponseData__Create_1(
	Motoman_MotoNIS_CurJobResponseData * __instance,
	Motoman_MotoNIS_Core_CURJOBRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CurJobResponseData_Get_JobLine(
	Motoman_MotoNIS_CurJobResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CurJobResponseData_Get_Step(
	Motoman_MotoNIS_CurJobResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CurJobResponseData_Get_JobName(
	Motoman_MotoNIS_CurJobResponseData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.JobNameResponseData
int CVIFUNC Motoman_MotoNIS_JobNameResponseData__Create(
	Motoman_MotoNIS_JobNameResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_JobNameResponseData_Get_JobName(
	Motoman_MotoNIS_JobNameResponseData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.SpecialOperationResponseData
int CVIFUNC Motoman_MotoNIS_SpecialOperationResponseData__Create(
	Motoman_MotoNIS_SpecialOperationResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SpecialOperationResponseData_Get_SpecialOperationStatus(
	Motoman_MotoNIS_SpecialOperationResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.JobNameData
int CVIFUNC Motoman_MotoNIS_JobNameData__Create(
	Motoman_MotoNIS_JobNameData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_JobNameData__Create_1(
	Motoman_MotoNIS_JobNameData * __instance,
	char * jobName,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_JobNameData_Set_JobName(
	Motoman_MotoNIS_JobNameData __instance,
	char * value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.SystemTimeResponseData
int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData__Create(
	Motoman_MotoNIS_SystemTimeResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_ElapsedTime(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartDay(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartHour(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartMin(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartMonth(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartSec(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartYear(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.ControlGroupData
int CVIFUNC Motoman_MotoNIS_ControlGroupData__Create(
	Motoman_MotoNIS_ControlGroupData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ControlGroupData__Create_1(
	Motoman_MotoNIS_ControlGroupData * __instance,
	short controlGroup,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ControlGroupData_Get_ControlGroup(
	Motoman_MotoNIS_ControlGroupData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ControlGroupData_Set_ControlGroup(
	Motoman_MotoNIS_ControlGroupData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.CartesianPositionResponseData
int CVIFUNC Motoman_MotoNIS_CartesianPositionResponseData__Create(
	Motoman_MotoNIS_CartesianPositionResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CartesianPositionResponseData__Create_1(
	Motoman_MotoNIS_CartesianPositionResponseData * __instance,
	Motoman_MotoNIS_Core_CARTPOSRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CartesianPositionResponseData_Get_Configuration(
	Motoman_MotoNIS_CartesianPositionResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CartesianPositionResponseData_Get_Position(
	Motoman_MotoNIS_CartesianPositionResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.PulsePositionResponseData
int CVIFUNC Motoman_MotoNIS_PulsePositionResponseData__Create(
	Motoman_MotoNIS_PulsePositionResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PulsePositionResponseData__Create_1(
	Motoman_MotoNIS_PulsePositionResponseData * __instance,
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PulsePositionResponseData_Get_Position(
	Motoman_MotoNIS_PulsePositionResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.FbPulsePositionresponseData
int CVIFUNC Motoman_MotoNIS_FbPulsePositionresponseData__Create(
	Motoman_MotoNIS_FbPulsePositionresponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_FbPulsePositionresponseData__Create_1(
	Motoman_MotoNIS_FbPulsePositionresponseData * __instance,
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_FbPulsePositionresponseData_Get_Position(
	Motoman_MotoNIS_FbPulsePositionresponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.ServoSpeedResponseData
int CVIFUNC Motoman_MotoNIS_ServoSpeedResponseData__Create(
	Motoman_MotoNIS_ServoSpeedResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ServoSpeedResponseData__Create_1(
	Motoman_MotoNIS_ServoSpeedResponseData * __instance,
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ServoSpeedResponseData_Get_Speed(
	Motoman_MotoNIS_ServoSpeedResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.FbSpeedResponseData
int CVIFUNC Motoman_MotoNIS_FbSpeedResponseData__Create(
	Motoman_MotoNIS_FbSpeedResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_FbSpeedResponseData__Create_1(
	Motoman_MotoNIS_FbSpeedResponseData * __instance,
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_FbSpeedResponseData_Get_Speed(
	Motoman_MotoNIS_FbSpeedResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.TorqueResponseData
int CVIFUNC Motoman_MotoNIS_TorqueResponseData__Create(
	Motoman_MotoNIS_TorqueResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_TorqueResponseData__Create_1(
	Motoman_MotoNIS_TorqueResponseData * __instance,
	Motoman_MotoNIS_Core_TORQUERSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_TorqueResponseData_Get_TorquePercentage(
	Motoman_MotoNIS_TorqueResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.SystemTimeData
int CVIFUNC Motoman_MotoNIS_SystemTimeData__Create(
	Motoman_MotoNIS_SystemTimeData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeData__Create_1(
	Motoman_MotoNIS_SystemTimeData * __instance,
	short timeType,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeData_Get_TimeType(
	Motoman_MotoNIS_SystemTimeData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_SystemTimeData_Set_TimeType(
	Motoman_MotoNIS_SystemTimeData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.VarData
int CVIFUNC Motoman_MotoNIS_VarData__Create(
	Motoman_MotoNIS_VarData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarData__Create_1(
	Motoman_MotoNIS_VarData * __instance,
	int value,
	unsigned short index,
	unsigned short type,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarData_Get_Value(
	Motoman_MotoNIS_VarData __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarData_Set_Value(
	Motoman_MotoNIS_VarData __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarData_Get_Index(
	Motoman_MotoNIS_VarData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarData_Set_Index(
	Motoman_MotoNIS_VarData __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarData_Get_Type(
	Motoman_MotoNIS_VarData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_VarData_Set_Type(
	Motoman_MotoNIS_VarData __instance,
	unsigned short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.IoData
int CVIFUNC Motoman_MotoNIS_IoData__Create(
	Motoman_MotoNIS_IoData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IoData__Create_1(
	Motoman_MotoNIS_IoData * __instance,
	unsigned __int64 value,
	unsigned __int64 address,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IoData_Get_Address(
	Motoman_MotoNIS_IoData __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IoData_Set_Address(
	Motoman_MotoNIS_IoData __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IoData_Get_Value(
	Motoman_MotoNIS_IoData __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IoData_Set_Value(
	Motoman_MotoNIS_IoData __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.PosVarData
int CVIFUNC Motoman_MotoNIS_PosVarData__Create(
	Motoman_MotoNIS_PosVarData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarData__Create_1(
	Motoman_MotoNIS_PosVarData * __instance,
	Motoman_MotoNIS_Core_POSVARDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarData_Get_Index(
	Motoman_MotoNIS_PosVarData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarData_Set_Index(
	Motoman_MotoNIS_PosVarData __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarData_Get_Type(
	Motoman_MotoNIS_PosVarData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarData_Set_Type(
	Motoman_MotoNIS_PosVarData __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarData_Get_Value(
	Motoman_MotoNIS_PosVarData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarData_Set_Value(
	Motoman_MotoNIS_PosVarData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PosVarData_GetBaseInstance(
	Motoman_MotoNIS_PosVarData __instance,
	Motoman_MotoNIS_Core_POSVARDATA * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.ModeData
int CVIFUNC Motoman_MotoNIS_ModeData__Create(
	Motoman_MotoNIS_ModeData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ModeData__Create_1(
	Motoman_MotoNIS_ModeData * __instance,
	short mode,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ModeData_Get_Mode(
	Motoman_MotoNIS_ModeData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ModeData_Set_Mode(
	Motoman_MotoNIS_ModeData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.CycleData
int CVIFUNC Motoman_MotoNIS_CycleData__Create(
	Motoman_MotoNIS_CycleData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CycleData__Create_1(
	Motoman_MotoNIS_CycleData * __instance,
	short cycle,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CycleData_Get_Cycle(
	Motoman_MotoNIS_CycleData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CycleData_Set_Cycle(
	Motoman_MotoNIS_CycleData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.ServoPowerData
int CVIFUNC Motoman_MotoNIS_ServoPowerData__Create(
	Motoman_MotoNIS_ServoPowerData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ServoPowerData__Create_1(
	Motoman_MotoNIS_ServoPowerData * __instance,
	short servoPower,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ServoPowerData_Get_ServoPower(
	Motoman_MotoNIS_ServoPowerData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ServoPowerData_Set_ServoPower(
	Motoman_MotoNIS_ServoPowerData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.CurrentJobData
int CVIFUNC Motoman_MotoNIS_CurrentJobData__Create(
	Motoman_MotoNIS_CurrentJobData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CurrentJobData__Create_1(
	Motoman_MotoNIS_CurrentJobData * __instance,
	char * jobName,
	unsigned short jobLine,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CurrentJobData_Get_JobLine(
	Motoman_MotoNIS_CurrentJobData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CurrentJobData_Set_JobLine(
	Motoman_MotoNIS_CurrentJobData __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CurrentJobData_Get_JobName(
	Motoman_MotoNIS_CurrentJobData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_CurrentJobData_Set_JobName(
	Motoman_MotoNIS_CurrentJobData __instance,
	char * value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.StartJobData
int CVIFUNC Motoman_MotoNIS_StartJobData__Create(
	Motoman_MotoNIS_StartJobData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_StartJobData__Create_1(
	Motoman_MotoNIS_StartJobData * __instance,
	char * jobName,
	short taskNumber,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_StartJobData_Get_TaskNumber(
	Motoman_MotoNIS_StartJobData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_StartJobData_Set_TaskNumber(
	Motoman_MotoNIS_StartJobData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_StartJobData_Get_JobName(
	Motoman_MotoNIS_StartJobData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_StartJobData_Set_JobName(
	Motoman_MotoNIS_StartJobData __instance,
	char * value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.HoldData
int CVIFUNC Motoman_MotoNIS_HoldData__Create(
	Motoman_MotoNIS_HoldData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_HoldData__Create_1(
	Motoman_MotoNIS_HoldData * __instance,
	short hold,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_HoldData_Get_Hold(
	Motoman_MotoNIS_HoldData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_HoldData_Set_Hold(
	Motoman_MotoNIS_HoldData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.WaitJobData
int CVIFUNC Motoman_MotoNIS_WaitJobData__Create(
	Motoman_MotoNIS_WaitJobData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_WaitJobData__Create_1(
	Motoman_MotoNIS_WaitJobData * __instance,
	short taskNumber,
	short time,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_WaitJobData_Get_TaskNumber(
	Motoman_MotoNIS_WaitJobData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_WaitJobData_Set_TaskNumber(
	Motoman_MotoNIS_WaitJobData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_WaitJobData_Get_Time(
	Motoman_MotoNIS_WaitJobData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_WaitJobData_Set_Time(
	Motoman_MotoNIS_WaitJobData __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.DeleteJobData
int CVIFUNC Motoman_MotoNIS_DeleteJobData__Create(
	Motoman_MotoNIS_DeleteJobData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_DeleteJobData__Create_1(
	Motoman_MotoNIS_DeleteJobData * __instance,
	char * jobName,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_DeleteJobData_Get_JobName(
	Motoman_MotoNIS_DeleteJobData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_DeleteJobData_Set_JobName(
	Motoman_MotoNIS_DeleteJobData __instance,
	char * value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.JogSpeedResponseData
int CVIFUNC Motoman_MotoNIS_JogSpeedResponseData__Create(
	Motoman_MotoNIS_JogSpeedResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_JogSpeedResponseData__Create_1(
	Motoman_MotoNIS_JogSpeedResponseData * __instance,
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_JogSpeedResponseData_Get_JogSpeed(
	Motoman_MotoNIS_JogSpeedResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.JogCoordinateResponseData
int CVIFUNC Motoman_MotoNIS_JogCoordinateResponseData__Create(
	Motoman_MotoNIS_JogCoordinateResponseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_JogCoordinateResponseData__Create_1(
	Motoman_MotoNIS_JogCoordinateResponseData * __instance,
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA b,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_JogCoordinateResponseData_Get_JogCoordinate(
	Motoman_MotoNIS_JogCoordinateResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.ConvertJobToRelativeData
int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData__Create(
	Motoman_MotoNIS_ConvertJobToRelativeData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData__Create_1(
	Motoman_MotoNIS_ConvertJobToRelativeData * __instance,
	char * jobName,
	short frame,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData_Get_Frame(
	Motoman_MotoNIS_ConvertJobToRelativeData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData_Set_Frame(
	Motoman_MotoNIS_ConvertJobToRelativeData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData_Get_JobName(
	Motoman_MotoNIS_ConvertJobToRelativeData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData_Set_JobName(
	Motoman_MotoNIS_ConvertJobToRelativeData __instance,
	char * value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.ConvertJobRelativeToPulseData
int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData__Create(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData__Create_1(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData * __instance,
	char * jobName,
	short conversionType,
	short variableNumber,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Get_ConversionType(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Set_ConversionType(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Get_VariableNumber(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Set_VariableNumber(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Get_JobName(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Set_JobName(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	char * value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.IMoveData
int CVIFUNC Motoman_MotoNIS_IMoveData__Create(
	Motoman_MotoNIS_IMoveData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData__Create_1(
	Motoman_MotoNIS_IMoveData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short controlGroup,
	short frame,
	short toolNumber,
	short speedType,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Get_Speed(
	Motoman_MotoNIS_IMoveData __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Set_Speed(
	Motoman_MotoNIS_IMoveData __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Get_ControlGroup(
	Motoman_MotoNIS_IMoveData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Set_ControlGroup(
	Motoman_MotoNIS_IMoveData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Get_Frame(
	Motoman_MotoNIS_IMoveData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Set_Frame(
	Motoman_MotoNIS_IMoveData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Get_ToolNumber(
	Motoman_MotoNIS_IMoveData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Set_ToolNumber(
	Motoman_MotoNIS_IMoveData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Get_SpeedType(
	Motoman_MotoNIS_IMoveData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Set_SpeedType(
	Motoman_MotoNIS_IMoveData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Get_Position(
	Motoman_MotoNIS_IMoveData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_IMoveData_Set_Position(
	Motoman_MotoNIS_IMoveData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.MoveJData
int CVIFUNC Motoman_MotoNIS_MoveJData__Create(
	Motoman_MotoNIS_MoveJData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData__Create_1(
	Motoman_MotoNIS_MoveJData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short configuration,
	short controlGroup,
	short frame,
	short toolNumber,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Get_Speed(
	Motoman_MotoNIS_MoveJData __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Set_Speed(
	Motoman_MotoNIS_MoveJData __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Get_ControlGroup(
	Motoman_MotoNIS_MoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Set_ControlGroup(
	Motoman_MotoNIS_MoveJData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Get_Frame(
	Motoman_MotoNIS_MoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Set_Frame(
	Motoman_MotoNIS_MoveJData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Get_ToolNumber(
	Motoman_MotoNIS_MoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Set_ToolNumber(
	Motoman_MotoNIS_MoveJData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Get_Configuration(
	Motoman_MotoNIS_MoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Set_Configuration(
	Motoman_MotoNIS_MoveJData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Get_Postition(
	Motoman_MotoNIS_MoveJData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveJData_Set_Postition(
	Motoman_MotoNIS_MoveJData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.MoveLData
int CVIFUNC Motoman_MotoNIS_MoveLData__Create(
	Motoman_MotoNIS_MoveLData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData__Create_1(
	Motoman_MotoNIS_MoveLData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short motionSpeed,
	short configuration,
	short controlGroup,
	short frame,
	short toolNumber,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Get_Speed(
	Motoman_MotoNIS_MoveLData __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Set_Speed(
	Motoman_MotoNIS_MoveLData __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Get_MotionSpeed(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Set_MotionSpeed(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Get_ControlGroup(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Set_ControlGroup(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Get_Frame(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Set_Frame(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Get_ToolNumber(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Set_ToolNumber(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Get_Configuration(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Set_Configuration(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Get_Postition(
	Motoman_MotoNIS_MoveLData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_MoveLData_Set_Postition(
	Motoman_MotoNIS_MoveLData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.PMoveJData
int CVIFUNC Motoman_MotoNIS_PMoveJData__Create(
	Motoman_MotoNIS_PMoveJData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveJData__Create_1(
	Motoman_MotoNIS_PMoveJData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short controlGroup,
	short toolNumber,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveJData_Get_Speed(
	Motoman_MotoNIS_PMoveJData __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveJData_Set_Speed(
	Motoman_MotoNIS_PMoveJData __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveJData_Get_ControlGroup(
	Motoman_MotoNIS_PMoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveJData_Set_ControlGroup(
	Motoman_MotoNIS_PMoveJData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveJData_Get_ToolNumber(
	Motoman_MotoNIS_PMoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveJData_Set_ToolNumber(
	Motoman_MotoNIS_PMoveJData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveJData_Get_Postition(
	Motoman_MotoNIS_PMoveJData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveJData_Set_Postition(
	Motoman_MotoNIS_PMoveJData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.PMoveLData
int CVIFUNC Motoman_MotoNIS_PMoveLData__Create(
	Motoman_MotoNIS_PMoveLData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData__Create_1(
	Motoman_MotoNIS_PMoveLData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short controlGroup,
	short toolNumber,
	short motionSpeed,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_MotionSpeed(
	Motoman_MotoNIS_PMoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_MotionSpeed(
	Motoman_MotoNIS_PMoveLData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_Speed(
	Motoman_MotoNIS_PMoveLData __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_Speed(
	Motoman_MotoNIS_PMoveLData __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_ControlGroup(
	Motoman_MotoNIS_PMoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_ControlGroup(
	Motoman_MotoNIS_PMoveLData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_ToolNumber(
	Motoman_MotoNIS_PMoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_ToolNumber(
	Motoman_MotoNIS_PMoveLData __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_Position(
	Motoman_MotoNIS_PMoveLData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_Position(
	Motoman_MotoNIS_PMoveLData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.INisService
int CVIFUNC Motoman_MotoNIS_INisService_NxSetCurJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_CurrentJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxStartJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_StartJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxHold(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_HoldData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxWaitForJobEnd(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_WaitJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxDeleteJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_DeleteJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetJogSpeed(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_JogSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetJogCoord(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_JogCoordinateResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetSysId(
	Motoman_MotoNIS_INisService __instance,
	unsigned char ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxDebug(
	Motoman_MotoNIS_INisService __instance,
	int cmd,
	unsigned char * fileDataIn,
	int __fileDataInLength,
	unsigned char ** fileDataOut,
	int * __fileDataOutLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxConvertJobPtoR(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ConvertJobToRelativeData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxConvertJobRtoP(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ConvertJobRelativeToPulseData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxIMOV(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_IMoveData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxMOVJ(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_MoveJData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxMOVL(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_MoveLData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxPulseMOVJ(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PMoveJData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxPulseMOVL(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PMoveLData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxReadFile(
	Motoman_MotoNIS_INisService __instance,
	char * fileName,
	unsigned char ** fileData,
	int * __fileDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxWriteFile(
	Motoman_MotoNIS_INisService __instance,
	char * fileName,
	unsigned char * fileData,
	int __fileDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetFileList(
	Motoman_MotoNIS_INisService __instance,
	short extension,
	char *** fileList,
	int * __fileListLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_SetUrl(
	Motoman_MotoNIS_INisService __instance,
	char * url,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxPing(
	Motoman_MotoNIS_INisService __instance,
	int cmd,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetVarData(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_VarInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxReadIO(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_IoInfo * sData,
	int __sDataLength,
	unsigned short ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxMonitor(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_MonitorInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetPosVarData(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PosVarInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetAlarmStatus(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_AlarmStatusResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetAlarmCode(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_AlarmCodeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetMode(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ModeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetCycle(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_CycleResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetServoPower(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ServoPowerResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetPlayStatus(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PlayStatusResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetMasterJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_TaskData sData,
	Motoman_MotoNIS_CurJobResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetCurJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_TaskData sData,
	Motoman_MotoNIS_CurJobResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetSpecialOpStatus(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_SpecialOperationResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetJobDate(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_JobNameData sData,
	Motoman_MotoNIS_SystemTimeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetCartPos(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_CartesianPositionResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetPulsePos(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_PulsePositionResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetFBPulsePos(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_FbPulsePositionresponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetServoSpeed(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_ServoSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetFBSpeed(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_FbSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetTorque(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_TorqueResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxGetSysTimes(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_SystemTimeData sData,
	Motoman_MotoNIS_SystemTimeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxPutVarData(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_VarData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxWriteIO(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_IoData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxPutPosVarData(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PosVarData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxCancelError(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxResetAlarm(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxSetMode(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ModeData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxSetCycle(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_CycleData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxSetServoPower(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ServoPowerData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_INisService_NxSetMasterJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_MasterJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.NisService
int CVIFUNC Motoman_MotoNIS_NisService__Create(
	Motoman_MotoNIS_NisService * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService__Create_1(
	Motoman_MotoNIS_NisService * __instance,
	char * url,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_Get_CurrentToken(
	Motoman_MotoNIS_AccessToken * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetPrmS1D(
	Motoman_MotoNIS_NisService __instance,
	int dPrmNo,
	int dPRmNum,
	int ** data,
	int * __dataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_SetUrl(
	Motoman_MotoNIS_NisService __instance,
	char * url,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_StringTosbyteArray(
	Motoman_MotoNIS_NisService __instance,
	char * str,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_sbyteArrayToString(
	Motoman_MotoNIS_NisService __instance,
	char * data,
	int __dataLength,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxConvertJobPtoR(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ConvertJobToRelativeData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxConvertJobRtoP(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ConvertJobRelativeToPulseData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxIMOV(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_IMoveData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxMOVJ(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_MoveJData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxMOVL(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_MoveLData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxPulseMOVJ(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PMoveJData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxPulseMOVL(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PMoveLData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxWriteFile(
	Motoman_MotoNIS_NisService __instance,
	char * fileName,
	unsigned char * fileData,
	int __fileDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxReadFile(
	Motoman_MotoNIS_NisService __instance,
	char * fileName,
	unsigned char ** fileData,
	int * __fileDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetFileList(
	Motoman_MotoNIS_NisService __instance,
	short extension,
	char *** fileList,
	int * __fileListLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxPing(
	Motoman_MotoNIS_NisService __instance,
	int cmd,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetVarData(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_VarInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxReadIO(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_IoInfo * sData,
	int __sDataLength,
	unsigned short ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxMonitor(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_MonitorInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetPosVarData(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PosVarInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetAlarmStatus(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_AlarmStatusResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetAlarmCode(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_AlarmCodeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetMode(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ModeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetCycle(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_CycleResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetServoPower(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ServoPowerResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetPlayStatus(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PlayStatusResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetMasterJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_TaskData sData,
	Motoman_MotoNIS_CurJobResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetCurJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_TaskData sData,
	Motoman_MotoNIS_CurJobResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetSpecialOpStatus(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_SpecialOperationResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetJobDate(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_JobNameData sData,
	Motoman_MotoNIS_SystemTimeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetCartPos(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_CartesianPositionResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetPulsePos(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_PulsePositionResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetFBPulsePos(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_FbPulsePositionresponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetServoSpeed(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_ServoSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetFBSpeed(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_FbSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetTorque(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_TorqueResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetSysTimes(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_SystemTimeData sData,
	Motoman_MotoNIS_SystemTimeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxPutVarData(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_VarData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxWriteIO(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_IoData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxPutPosVarData(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PosVarData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxCancelError(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxResetAlarm(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxSetMode(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ModeData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxSetCycle(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_CycleData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxSetServoPower(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ServoPowerData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxSetMasterJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_MasterJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxSetCurJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_CurrentJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxStartJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_StartJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxHold(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_HoldData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxWaitForJobEnd(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_WaitJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxDeleteJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_DeleteJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetJogSpeed(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_JogSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetJogCoord(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_JogCoordinateResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxGetSysId(
	Motoman_MotoNIS_NisService __instance,
	unsigned char ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_NisService_NxDebug(
	Motoman_MotoNIS_NisService __instance,
	int cmd,
	unsigned char * fileDataIn,
	int __fileDataInLength,
	unsigned char ** fileDataOut,
	int * __fileDataOutLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.AccessToken
int CVIFUNC Motoman_MotoNIS_AccessToken__Create(
	Motoman_MotoNIS_AccessToken * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AccessToken__Get__Token(
	Motoman_MotoNIS_AccessToken __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AccessToken__Set__Token(
	Motoman_MotoNIS_AccessToken __instance,
	char * Token,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AccessToken__Get__Level(
	Motoman_MotoNIS_AccessToken __instance,
	Motoman_MotoNIS_AccessLevel * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AccessToken__Set__Level(
	Motoman_MotoNIS_AccessToken __instance,
	Motoman_MotoNIS_AccessLevel Level,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AccessToken__Get__TimeCreated(
	Motoman_MotoNIS_AccessToken __instance,
	System_DateTime * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_AccessToken__Set__TimeCreated(
	Motoman_MotoNIS_AccessToken __instance,
	System_DateTime TimeCreated,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CoreService
int CVIFUNC Motoman_MotoNIS_Core_CoreService__Create(
	Motoman_MotoNIS_Core_CoreService * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_SoapVersion(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Web_Services_Protocols_SoapProtocolVersion * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_SoapVersion(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Web_Services_Protocols_SoapProtocolVersion value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_AllowAutoRedirect(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_AllowAutoRedirect(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_CookieContainer(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_CookieContainer * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_CookieContainer(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_CookieContainer value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_ClientCertificates(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Security_Cryptography_X509Certificates_X509CertificateCollection * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_EnableDecompression(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_EnableDecompression(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_UserAgent(
	Motoman_MotoNIS_Core_CoreService __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_UserAgent(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Proxy(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_IWebProxy * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Proxy(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_IWebProxy value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_UnsafeAuthenticatedConnectionSharing(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_UnsafeAuthenticatedConnectionSharing(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Credentials(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_ICredentials * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Credentials(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_ICredentials value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_UseDefaultCredentials(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_UseDefaultCredentials(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_ConnectionGroupName(
	Motoman_MotoNIS_Core_CoreService __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_ConnectionGroupName(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_PreAuthenticate(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_PreAuthenticate(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Url(
	Motoman_MotoNIS_Core_CoreService __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Url(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_RequestEncoding(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Text_Encoding * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_RequestEncoding(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Text_Encoding value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Timeout(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Timeout(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Site(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_ComponentModel_ISite * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Site(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_ComponentModel_ISite value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Container(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_ComponentModel_IContainer * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxConvertJobRtoP(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxConvertJobRtoP(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobRtoPAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobRtoPAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxIMOV(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IMOVSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxIMOV(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IMOVSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxIMOV(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxIMOVAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IMOVSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxIMOVAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IMOVSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVJSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVJSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVJAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVJSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVJAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVJSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVLSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVLSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVLAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVLSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVLAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVLSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVJSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPulseMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVJSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPulseMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVJAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVJSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVJAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVJSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVLSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPulseMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVLSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPulseMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVLAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVLSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVLAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVLSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle sData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxWriteFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxWriteFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteFileAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteFileAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxReadFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxReadFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	CDotNetHandle * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadFileAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadFileAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFileList(
	Motoman_MotoNIS_Core_CoreService __instance,
	short extension,
	char *** rData,
	int * __rDataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetFileList(
	Motoman_MotoNIS_Core_CoreService __instance,
	short extension,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetFileList(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	char *** rData,
	int * __rDataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFileListAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	short extension,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFileListAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	short extension,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPing(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPing(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPing(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPingAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPingAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPrmS1D(
	Motoman_MotoNIS_Core_CoreService __instance,
	int dPrmNo,
	int dPrmNum,
	int ** data,
	int * __dataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetPrmS1D(
	Motoman_MotoNIS_Core_CoreService __instance,
	int dPrmNo,
	int dPrmNum,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetPrmS1D(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int ** data,
	int * __dataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPrmS1DAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	int dPrmNo,
	int dPrmNum,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPrmS1DAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	int dPrmNo,
	int dPrmNum,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysId(
	Motoman_MotoNIS_Core_CoreService __instance,
	unsigned char ** rData,
	int * __rDataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetSysId(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetSysId(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	unsigned char ** rData,
	int * __rDataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysIdAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysIdAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDebug(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle sData,
	CDotNetHandle * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxDebug(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxDebug(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	CDotNetHandle * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDebugAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDebugAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_CancelAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxCancelError(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxCancelError(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxCancelError(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxCancelErrorAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxCancelErrorAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxResetAlarm(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxResetAlarm(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxResetAlarm(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxResetAlarmAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxResetAlarmAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODESENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODESENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetModeAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODESENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetModeAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODESENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLESENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLESENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCycleAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLESENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCycleAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLESENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetServoPowerAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetServoPowerAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetMasterJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetMasterJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CURJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CURJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCurJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CURJOBSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCurJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CURJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxStartJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STARTJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxStartJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STARTJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxStartJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxStartJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STARTJOBSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxStartJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STARTJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxHold(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_HOLDSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxHold(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_HOLDSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxHold(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxHoldAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_HOLDSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxHoldAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_HOLDSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWaitForJobEnd(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_WAITJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxWaitForJobEnd(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_WAITJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxWaitForJobEnd(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWaitForJobEndAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_WAITJOBSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWaitForJobEndAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_WAITJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDeleteJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxDeleteJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxDeleteJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDeleteJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDeleteJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetJogSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetJogSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogSpeedAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogSpeedAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogCoord(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetJogCoord(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetJogCoord(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogCoordAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogCoordAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobPtoR(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxConvertJobPtoR(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxConvertJobPtoR(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobPtoRAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobPtoRAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobRtoP(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetTorque(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_TORQUERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetTorque(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetTorque(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_TORQUERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetTorqueAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetTorqueAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMonitor(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MONITORINFO * sData,
	int __sDataLength,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxMonitor(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MONITORINFO * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxMonitor(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMonitorAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MONITORINFO * sData,
	int __sDataLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMonitorAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MONITORINFO * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetAlarmStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetAlarmStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmStatusAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmStatusAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmCode(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_ALARMCODERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetAlarmCode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetAlarmCode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_ALARMCODERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmCodeAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmCodeAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_MODERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetModeAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetModeAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_CYCLERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCycleAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCycleAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoPowerAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoPowerAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPlayStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetPlayStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetPlayStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPlayStatusAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPlayStatusAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	Motoman_MotoNIS_Core_JOBNAMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_JOBNAMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetMasterJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetMasterJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	Motoman_MotoNIS_Core_CURJOBRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_CURJOBRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCurJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCurJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSpecialOpStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetSpecialOpStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetSpecialOpStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSpecialOpStatusAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSpecialOpStatusAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJobDate(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOBNAMESENDDATA sData,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetJobDate(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOBNAMESENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetJobDate(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJobDateAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOBNAMESENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJobDateAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOBNAMESENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysTimes(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SYSTIMESENDDATA sData,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetSysTimes(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SYSTIMESENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetSysTimes(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysTimesAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SYSTIMESENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysTimesAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SYSTIMESENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARDATA * sData,
	int __sDataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPutPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARDATA * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPutPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutPosVarDataAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARDATA * sData,
	int __sDataLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutPosVarDataAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARDATA * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxMOVLCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxMOVLCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPulseMOVJCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPulseMOVJCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPulseMOVLCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPulseMOVLCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxWriteFileCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxWriteFileCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxReadFileCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxReadFileCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetFileListCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetFileListCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPingCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPingCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetPrmS1DCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetPrmS1DCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetSysIdCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetSysIdCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxDebugCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxDebugCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARINFO * sData,
	int __sDataLength,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARINFO * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetVarDataAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARINFO * sData,
	int __sDataLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetVarDataAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARINFO * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARDATA * sData,
	int __sDataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPutVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARDATA * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPutVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutVarDataAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARDATA * sData,
	int __sDataLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutVarDataAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARDATA * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IODATA * sData,
	int __sDataLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxWriteIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IODATA * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxWriteIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteIOAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IODATA * sData,
	int __sDataLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteIOAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IODATA * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IOINFO * sData,
	int __sDataLength,
	unsigned short ** ushortArray,
	int * __ushortArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxReadIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IOINFO * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxReadIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	unsigned short ** ushortArray,
	int * __ushortArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadIOAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IOINFO * sData,
	int __sDataLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadIOAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IOINFO * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPulsePosAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPulsePosAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_CARTPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetCartPos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetCartPos(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_CARTPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosEx(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA sData,
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetCartPosEx(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetCartPosEx(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosExAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosExAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARINFO * sData,
	int __sDataLength,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARINFO * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPosVarDataAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARINFO * sData,
	int __sDataLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPosVarDataAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARINFO * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetFBPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetFBPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBPulsePosAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBPulsePosAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetServoSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetServoSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoSpeedAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoSpeedAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetFBSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetFBSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBSpeedAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBSpeedAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPutVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPutVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxWriteIOCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxWriteIOCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxReadIOCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxReadIOCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetPulsePosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetPulsePosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetCartPosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetCartPosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetCartPosExCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetCartPosExCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetPosVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetPosVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetFBPulsePosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetFBPulsePosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetServoSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetServoSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetFBSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetFBSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetTorqueCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetTorqueCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxMonitorCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxMonitorCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetAlarmStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetAlarmStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetAlarmCodeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetAlarmCodeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetModeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetModeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetCycleCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetCycleCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetServoPowerCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetServoPowerCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetPlayStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetPlayStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetMasterJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetMasterJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetCurJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetCurJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetSpecialOpStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetSpecialOpStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetJobDateCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetJobDateCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetSysTimesCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetSysTimesCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPutPosVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPutPosVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxCancelErrorCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxCancelErrorCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxResetAlarmCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxResetAlarmCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetModeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetModeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetCycleCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetCycleCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetServoPowerCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetServoPowerCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetMasterJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetMasterJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetCurJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetCurJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxStartJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxStartJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxHoldCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxHoldCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxWaitForJobEndCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxWaitForJobEndCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxDeleteJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxDeleteJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetJogSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetJogSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetJogCoordCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetJogCoordCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxConvertJobPtoRCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxConvertJobPtoRCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxConvertJobRtoPCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxConvertJobRtoPCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxIMOVCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxIMOVCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxMOVJCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxMOVJCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Discover(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Abort(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_Disposed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_EventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_Disposed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_EventHandler value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_Dispose(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_ToString(
	Motoman_MotoNIS_Core_CoreService __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_GetLifetimeService(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_InitializeLifetimeService(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CoreService_CreateObjRef(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Type requestedType,
	System_Runtime_Remoting_ObjRef * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.VARINFO
int CVIFUNC Motoman_MotoNIS_Core_VARINFO__Create(
	Motoman_MotoNIS_Core_VARINFO * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARINFO_Get_usType(
	Motoman_MotoNIS_Core_VARINFO __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARINFO_Set_usType(
	Motoman_MotoNIS_Core_VARINFO __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARINFO_Get_usIndex(
	Motoman_MotoNIS_Core_VARINFO __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARINFO_Set_usIndex(
	Motoman_MotoNIS_Core_VARINFO __instance,
	unsigned short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.PMOVLSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA__Create(
	Motoman_MotoNIS_Core_PMOVLSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_sVType(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_sVType(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.PMOVJSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA__Create(
	Motoman_MotoNIS_Core_PMOVJSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.MOVLSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA__Create(
	Motoman_MotoNIS_Core_MOVLSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sVType(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sVType(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sFrame(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sFrame(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sConfig(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sConfig(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.MOVJSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA__Create(
	Motoman_MotoNIS_Core_MOVJSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_sFrame(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_sFrame(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_sConfig(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_sConfig(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.IMOVSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA__Create(
	Motoman_MotoNIS_Core_IMOVSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_sVType(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_sVType(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	int value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_sFrame(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_sFrame(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA__Create(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Get_sConvType(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Set_sConvType(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Get_sVarNo(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Set_sVarNo(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA__Create(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Get_sFrame(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Set_sFrame(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.JOGCOORDRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA__Create(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA_Get_sJogCoord(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA_Set_sJogCoord(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.JOGSPEEDRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA__Create(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA_Get_sJogSpeed(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA_Set_sJogSpeed(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.DELETEJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.WAITJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA_Get_sTaskNo(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA_Set_sTaskNo(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA_Get_sTime(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA_Set_sTime(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.HOLDSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA__Create(
	Motoman_MotoNIS_Core_HOLDSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA_Get_sHold(
	Motoman_MotoNIS_Core_HOLDSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA_Set_sHold(
	Motoman_MotoNIS_Core_HOLDSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_HOLDSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_HOLDSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.STARTJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Get_sTaskNo(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Set_sTaskNo(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CURJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_CURJOBSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Get_usJobLine(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Set_usJobLine(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.MASTERJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Get_sTaskNo(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Set_sTaskNo(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.SERVOPOWERSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA__Create(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA_Get_sServoPower(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA_Set_sServoPower(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CYCLESENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA__Create(
	Motoman_MotoNIS_Core_CYCLESENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA_Get_sCycle(
	Motoman_MotoNIS_Core_CYCLESENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA_Set_sCycle(
	Motoman_MotoNIS_Core_CYCLESENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CYCLESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CYCLESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.MODESENDDATA
int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA__Create(
	Motoman_MotoNIS_Core_MODESENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA_Get_sMode(
	Motoman_MotoNIS_Core_MODESENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA_Set_sMode(
	Motoman_MotoNIS_Core_MODESENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_MODESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_MODESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.STDRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA__Create(
	Motoman_MotoNIS_Core_STDRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA_Get_errno(
	Motoman_MotoNIS_Core_STDRSPDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA_Set_errno(
	Motoman_MotoNIS_Core_STDRSPDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_STDRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_STDRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.POSVARDATA
int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA__Create(
	Motoman_MotoNIS_Core_POSVARDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Get_usType(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Set_usType(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Get_usIndex(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Set_usIndex(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Get_ulValue(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Set_ulValue(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.SYSTIMESENDDATA
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA__Create(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA_Get_sTimeType(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA_Set_sTimeType(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.SYSTIMERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA__Create(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartYear(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartYear(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartMonth(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartMonth(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartDay(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartDay(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartHour(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartHour(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartMin(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartMin(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartSec(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartSec(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_lElapsedTime(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_lElapsedTime(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	int value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.JOBNAMESENDDATA
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA__Create(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.SPECIALOPRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA__Create(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA_Get_sSpecialOpStatus(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA_Set_sSpecialOpStatus(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CURJOBRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA__Create(
	Motoman_MotoNIS_Core_CURJOBRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Get_usJobLine(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Set_usJobLine(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Get_usStep(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Set_usStep(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Get_cJobName(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Set_cJobName(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.JOBNAMERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA__Create(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA_Get_cJobName(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA_Set_cJobName(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.TASKSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA__Create(
	Motoman_MotoNIS_Core_TASKSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA_Get_sTaskNo(
	Motoman_MotoNIS_Core_TASKSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA_Set_sTaskNo(
	Motoman_MotoNIS_Core_TASKSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_TASKSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_TASKSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA__Create(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA_Get_sStart(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA_Set_sStart(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA_Get_sHold(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA_Set_sHold(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.SERVOPOWERRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA__Create(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA_Get_sServoPower(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA_Set_sServoPower(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CYCLERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA__Create(
	Motoman_MotoNIS_Core_CYCLERSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA_Get_sCycle(
	Motoman_MotoNIS_Core_CYCLERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA_Set_sCycle(
	Motoman_MotoNIS_Core_CYCLERSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_CYCLERSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_CYCLERSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.MODERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_MODERSPDATA__Create(
	Motoman_MotoNIS_Core_MODERSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MODERSPDATA_Get_sMode(
	Motoman_MotoNIS_Core_MODERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MODERSPDATA_Set_sMode(
	Motoman_MotoNIS_Core_MODERSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MODERSPDATA_Get_sRemote(
	Motoman_MotoNIS_Core_MODERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MODERSPDATA_Set_sRemote(
	Motoman_MotoNIS_Core_MODERSPDATA __instance,
	short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.ALARMDATA
int CVIFUNC Motoman_MotoNIS_Core_ALARMDATA__Create(
	Motoman_MotoNIS_Core_ALARMDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMDATA_Get_usAlarmNo(
	Motoman_MotoNIS_Core_ALARMDATA __instance,
	unsigned short ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMDATA_Set_usAlarmNo(
	Motoman_MotoNIS_Core_ALARMDATA __instance,
	unsigned short * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMDATA_Get_usAlarmData(
	Motoman_MotoNIS_Core_ALARMDATA __instance,
	unsigned short ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMDATA_Set_usAlarmData(
	Motoman_MotoNIS_Core_ALARMDATA __instance,
	unsigned short * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.ALARMCODERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_ALARMCODERSPDATA__Create(
	Motoman_MotoNIS_Core_ALARMCODERSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMCODERSPDATA_Get_usErrorNo(
	Motoman_MotoNIS_Core_ALARMCODERSPDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMCODERSPDATA_Set_usErrorNo(
	Motoman_MotoNIS_Core_ALARMCODERSPDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMCODERSPDATA_Get_usErrorData(
	Motoman_MotoNIS_Core_ALARMCODERSPDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMCODERSPDATA_Set_usErrorData(
	Motoman_MotoNIS_Core_ALARMCODERSPDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMCODERSPDATA_Get_usAlarmNum(
	Motoman_MotoNIS_Core_ALARMCODERSPDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMCODERSPDATA_Set_usAlarmNum(
	Motoman_MotoNIS_Core_ALARMCODERSPDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMCODERSPDATA_Get_AlarmData(
	Motoman_MotoNIS_Core_ALARMCODERSPDATA __instance,
	Motoman_MotoNIS_Core_ALARMDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMCODERSPDATA_Set_AlarmData(
	Motoman_MotoNIS_Core_ALARMCODERSPDATA __instance,
	Motoman_MotoNIS_Core_ALARMDATA value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.ALARMSTATUSRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA__Create(
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA_Get_sIsAlarm(
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA_Set_sIsAlarm(
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.MONITORINFO
int CVIFUNC Motoman_MotoNIS_Core_MONITORINFO__Create(
	Motoman_MotoNIS_Core_MONITORINFO * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MONITORINFO_Get_ulType(
	Motoman_MotoNIS_Core_MONITORINFO __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MONITORINFO_Set_ulType(
	Motoman_MotoNIS_Core_MONITORINFO __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MONITORINFO_Get_ulIndex(
	Motoman_MotoNIS_Core_MONITORINFO __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_MONITORINFO_Set_ulIndex(
	Motoman_MotoNIS_Core_MONITORINFO __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.TORQUERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_TORQUERSPDATA__Create(
	Motoman_MotoNIS_Core_TORQUERSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_TORQUERSPDATA_Get_lTorquePcnt(
	Motoman_MotoNIS_Core_TORQUERSPDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_TORQUERSPDATA_Set_lTorquePcnt(
	Motoman_MotoNIS_Core_TORQUERSPDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.FBSPEEDRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_FBSPEEDRSPDATA__Create(
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_FBSPEEDRSPDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_FBSPEEDRSPDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.SERVOSPEEDRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA__Create(
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.FBPULSEPOSRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA__Create(
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA_Get_lPos(
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA_Set_lPos(
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.POSVARINFO
int CVIFUNC Motoman_MotoNIS_Core_POSVARINFO__Create(
	Motoman_MotoNIS_Core_POSVARINFO * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARINFO_Get_usType(
	Motoman_MotoNIS_Core_POSVARINFO __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARINFO_Set_usType(
	Motoman_MotoNIS_Core_POSVARINFO __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARINFO_Get_usIndex(
	Motoman_MotoNIS_Core_POSVARINFO __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_POSVARINFO_Set_usIndex(
	Motoman_MotoNIS_Core_POSVARINFO __instance,
	unsigned short value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CARTPOSRSPDATAEX
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATAEX__Create(
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATAEX_Get_lPos(
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATAEX_Set_lPos(
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATAEX_Get_sConfig(
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATAEX_Set_sConfig(
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATAEX_Get_reserved(
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATAEX_Set_reserved(
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CARTPOSEXSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSEXSENDDATA__Create(
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSEXSENDDATA_Get_sRobotNo(
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSEXSENDDATA_Set_sRobotNo(
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSEXSENDDATA_Get_sFrame(
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSEXSENDDATA_Set_sFrame(
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSEXSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSEXSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSEXSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSEXSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CARTPOSRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATA__Create(
	Motoman_MotoNIS_Core_CARTPOSRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATA_Get_lPos(
	Motoman_MotoNIS_Core_CARTPOSRSPDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATA_Set_lPos(
	Motoman_MotoNIS_Core_CARTPOSRSPDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATA_Get_sConfig(
	Motoman_MotoNIS_Core_CARTPOSRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATA_Set_sConfig(
	Motoman_MotoNIS_Core_CARTPOSRSPDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_CARTPOSRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CARTPOSRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_CARTPOSRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.PULSEPOSRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_PULSEPOSRSPDATA__Create(
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PULSEPOSRSPDATA_Get_lPos(
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_PULSEPOSRSPDATA_Set_lPos(
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.CTRLGRPSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CTRLGRPSENDDATA__Create(
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CTRLGRPSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CTRLGRPSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA __instance,
	short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CTRLGRPSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_CTRLGRPSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.IOINFO
int CVIFUNC Motoman_MotoNIS_Core_IOINFO__Create(
	Motoman_MotoNIS_Core_IOINFO * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IOINFO_Get_ulAddr(
	Motoman_MotoNIS_Core_IOINFO __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IOINFO_Set_ulAddr(
	Motoman_MotoNIS_Core_IOINFO __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.IODATA
int CVIFUNC Motoman_MotoNIS_Core_IODATA__Create(
	Motoman_MotoNIS_Core_IODATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IODATA_Get_ulAddr(
	Motoman_MotoNIS_Core_IODATA __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IODATA_Set_ulAddr(
	Motoman_MotoNIS_Core_IODATA __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IODATA_Get_ulValue(
	Motoman_MotoNIS_Core_IODATA __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_IODATA_Set_ulValue(
	Motoman_MotoNIS_Core_IODATA __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.VARDATA
int CVIFUNC Motoman_MotoNIS_Core_VARDATA__Create(
	Motoman_MotoNIS_Core_VARDATA * __instance,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARDATA_Get_usType(
	Motoman_MotoNIS_Core_VARDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARDATA_Set_usType(
	Motoman_MotoNIS_Core_VARDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARDATA_Get_usIndex(
	Motoman_MotoNIS_Core_VARDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARDATA_Set_usIndex(
	Motoman_MotoNIS_Core_VARDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARDATA_Get_ulValue(
	Motoman_MotoNIS_Core_VARDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_VARDATA_Set_ulValue(
	Motoman_MotoNIS_Core_VARDATA __instance,
	int value,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetVarDataCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetVarDataCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs_Get_intArray(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPutVarDataCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPutVarDataCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxWriteIOCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxWriteIOCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxReadIOCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxReadIOCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs_Get_ushortArray(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs __instance,
	unsigned short ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxReadIOCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetPulsePosCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetPulsePosCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetCartPosCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetCartPosCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_CARTPOSRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetCartPosExCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetCartPosExCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetPosVarDataCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetPosVarDataCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs_Get_intArray(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetFBPulsePosCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetFBPulsePosCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetServoSpeedCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetServoSpeedCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetFBSpeedCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetFBSpeedCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetTorqueCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetTorqueCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_TORQUERSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxMonitorCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxMonitorCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs_Get_intArray(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxMonitorCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetAlarmStatusCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetAlarmStatusCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetAlarmCodeCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetAlarmCodeCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_ALARMCODERSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetModeCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetModeCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_MODERSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetModeCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetCycleCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetCycleCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_CYCLERSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetServoPowerCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetServoPowerCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetPlayStatusCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetPlayStatusCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetMasterJobCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetMasterJobCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_JOBNAMERSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetCurJobCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetCurJobCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_CURJOBRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetSpecialOpStatusCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetSpecialOpStatusCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetJobDateCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetJobDateCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetSysTimesCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetSysTimesCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPutPosVarDataCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPutPosVarDataCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxCancelErrorCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxCancelErrorCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxResetAlarmCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxResetAlarmCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetModeCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetModeCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxSetModeCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetCycleCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetCycleCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetServoPowerCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetServoPowerCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetMasterJobCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetMasterJobCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetCurJobCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxSetCurJobCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxStartJobCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxStartJobCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxStartJobCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxHoldCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxHoldCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxHoldCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxHoldCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxHoldCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxHoldCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxHoldCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxHoldCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxHoldCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxHoldCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxWaitForJobEndCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxWaitForJobEndCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxDeleteJobCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxDeleteJobCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetJogSpeedCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetJogSpeedCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetJogCoordCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetJogCoordCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxConvertJobPtoRCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxConvertJobPtoRCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxConvertJobRtoPCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxConvertJobRtoPCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxIMOVCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxIMOVCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxIMOVCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxMOVJCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxMOVJCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxMOVJCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxMOVLCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxMOVLCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxMOVLCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPulseMOVJCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPulseMOVJCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPulseMOVLCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPulseMOVLCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxWriteFileCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxWriteFileCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxReadFileCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxReadFileCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxReadFileCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetFileListCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetFileListCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs __instance,
	char *** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPingCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPingCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxPingCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxPingCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxPingCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxPingCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxPingCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxPingCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxPingCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetPrmS1DCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetPrmS1DCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs_Get_data(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetSysIdCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxGetSysIdCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs __instance,
	unsigned char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxDebugCompletedEventHandler
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler__Create(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler * __instance,
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler__Callback_t __userCallback,
	void * __userCallbackData,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_Get_Method(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	System_Reflection_MethodInfo * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_Get_Target(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_Invoke(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxDebugCompletedEventArgs e,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_BeginInvoke(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	CDotNetHandle sender,
	Motoman_MotoNIS_Core_NxDebugCompletedEventArgs e,
	System_AsyncCallback callback,
	CDotNetHandle object,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_EndInvoke(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	System_IAsyncResult result,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_GetObjectData(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_Equals(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	CDotNetHandle obj,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_GetInvocationList(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	System_Delegate ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_GetHashCode(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_DynamicInvoke(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	CDotNetHandle * args,
	int __argsLength,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventHandler_Clone(
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);

// Type: Motoman.MotoNIS.Core.NxDebugCompletedEventArgs
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventArgs_Get_Result(
	Motoman_MotoNIS_Core_NxDebugCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventArgs_Get_rData(
	Motoman_MotoNIS_Core_NxDebugCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventArgs_Get_Cancelled(
	Motoman_MotoNIS_Core_NxDebugCompletedEventArgs __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventArgs_Get_Error(
	Motoman_MotoNIS_Core_NxDebugCompletedEventArgs __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC Motoman_MotoNIS_Core_NxDebugCompletedEventArgs_Get_UserState(
	Motoman_MotoNIS_Core_NxDebugCompletedEventArgs __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception);


#ifdef __cplusplus
}
#endif
