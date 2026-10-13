#include "libYiP2P.so.h"


undefined DAT_0005e054;
undefined4 DAT_0006608c;
int DAT_0006608c;
undefined4 DAT_0005e06c;
char DAT_000660ed;
undefined1 __bss_start;
undefined4 DAT_0005dfc0;
dword DWORD_00055688;
int DAT_0005d694;
undefined DAT_0005e03c;
undefined DAT_0004906c;
undefined4 stderr;
undefined DAT_00049328;
undefined DAT_000493c8;
undefined DAT_0005e070;
undefined DAT_0005e094;
undefined DAT_0005e084;
undefined DAT_0005e097;
undefined4 DAT_000660a8;
undefined UNK_00049540;
undefined DAT_00049544;
char DAT_000660ac;
undefined4 DAT_000660f0;
undefined FUN_0001de64;
byte DAT_000660ac;
int DAT_000660f0;
undefined1 DAT_000660ed;
int DAT_000660f4;
undefined UNK_00049114;
undefined DAT_0005e074;
undefined DAT_0005e078;
undefined DAT_0005e07c;
undefined DAT_0005e07e;
undefined DAT_0005e080;
undefined DAT_0005e088;
undefined DAT_0005e095;
undefined1 DAT_0005e096;
undefined DAT_0005e098;
undefined DAT_0005e09d;
undefined DAT_0005e090;
undefined DAT_0005e0b1;
undefined4 DAT_0004912c;
undefined2 DAT_00049130;
undefined2 DAT_00049132;
undefined DAT_0005e09b;
undefined1 DAT_0005e09a;
undefined1 DAT_0005e099;
undefined DAT_0005e08c;
undefined1 DAT_0005e09c;
undefined DAT_000660bc;
undefined1 gFlagInitialized;
undefined1[256] gServerString;
undefined1[24] TheLock;
undefined DAT_0004c580;
undefined4 gTNPSession;
undefined4 gMaxSessionNumber;
undefined4 gTNPSessionLock;
undefined DAT_0004c598;
undefined DAT_0004c5b0;
undefined DAT_0004c5c8;
undefined DAT_0004c5e0;
undefined4 DEBUG_LEVEL;
undefined1[128] DEBUG_LOGFILE;
undefined1[36] gNetInfo;
undefined4 gLastNetDetectTime;
undefined1[48] gP2PServerAddr;
undefined1[144] gP2PTCPServerAddr;
undefined4 gR2PMPCallback;
string gSuperDeviceKey;
undefined4 gP2PTCPAddrNum;
undefined PPPP_Thread_R2PMP_Callback;
undefined PPPP_Thread_Recv_Proto_App_TCP;
undefined4 gLastHandle;
undefined1 gInConnectFlag;
undefined PPPP_Thread_Send_DRW;
undefined PPPP_Thread_Recv_Proto_App;
undefined PPPP_Thread_Recv_DRW;
undefined1[12544] P2PServerMap;
undefined4 gIncomingConnectionCallback;
undefined1[36] gP2PTCPSocketInfo;
undefined4 gLoginByTCP;
int DAT_00069204;
undefined1[112] gSDevInfo;
undefined PPPP__thread_callback;
undefined4 gNoticeToCallback;
undefined PPPP_Thread_check_UDP;
undefined1 gServerConfig;
undefined4 gLastLoginOKTime;
undefined PPPP_Thread_SuperDevice;
undefined4 gRecvLoginAckByUDP;
undefined1[32] gHardKey;
undefined4 gLastUpdateServerConfigTime;
undefined4 gCurrentReportLevel;
undefined1[280] gProxyModeInfo;
undefined1 gLoginFlag;
undefined4 gSendLoginByTCP;
undefined PPPP_Thread_Recv_Proto_LanSearch;
undefined PPPP_Thread_Recv_Proto_LanMsg;
undefined1 gIsProxy;
undefined4 gLastSessionIsFull;
undefined4 gListenTimeOut;
undefined PPPP_Thread_Recv_Proto_Device;
undefined4 gCurP2PTCPServerIndex;
undefined PPPP_Thread_Recv_Proto_Device_TCP;
undefined1 gUserBreakListenFlag;
undefined8 gTimer;
undefined4 gExitTimerThread;
undefined4 hthread_timer;
undefined1[24] gSeqNumLock;
undefined1[24] gTimerLock;
undefined PPPP__thread_timer;
undefined1 gInListenFlag;
undefined4 gSeqNum;
undefined1[24] gDeviceInfoListLock;
undefined8 gDeviceInfoList;
undefined1[48] gLastServerAddr;
undefined1[256] gLastServerString;
undefined1[12] gP2PTCPPortArray;
undefined PPPP_Thread_Recv_TCP;
undefined DAT_0004f848;
undefined DAT_00050c4c;
undefined DAT_00050cdc;
undefined1 isIPv6Only;
undefined3 gAPIVersion;
undefined DAT_00052438;
undefined DAT_00053838;
undefined DAT_00053c38;
undefined DAT_00054038;
undefined DAT_00054438;
undefined DAT_00054838;
undefined4 DAT_00054c38;

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



void yi_p2p_on_stop_replay(void)

{
  yi_p2p_on_stop_replay();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int vsprintf(char *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = vsprintf(__s,__format,__arg);
  return iVar1;
}



void yi_p2p_on_has_record(void)

{
  yi_p2p_on_has_record();
  return;
}



void tnp::over_time_receive(int param_1,char *param_2,int param_3,sockaddr_in *param_4,uint param_5)

{
  over_time_receive(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::PPPP_DRWAck_Send
               (int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort *param_5,
               ushort param_6)

{
  PPPP_DRWAck_Send(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void yi_p2p_on_get_dev_info(void)

{
  yi_p2p_on_get_dev_info();
  return;
}



void tnp::PPPP_Proto_Send_R2PMPStart
               (int param_1,sockaddr_in *param_2,sockaddr_in *param_3,char param_4,char *param_5)

{
  PPPP_Proto_Send_R2PMPStart(param_1,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



void PPPP_DoListen_TCP(int param_1,uint param_2)

{
  PPPP_DoListen_TCP(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Send_ProbeAck2(int param_1,sockaddr_in *param_2,char *param_3,uint param_4)

{
  PPPP_Proto_Send_ProbeAck2(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__IncomingConnectionCallback(void)

{
  PPPP__IncomingConnectionCallback();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
  return iVar1;
}



void tnp::PPPP_Proto_Send_HelloToAck(int param_1,sockaddr_in *param_2)

{
  PPPP_Proto_Send_HelloToAck(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Write_RlyPort_EX
               (st_PPPP_RlyPort_EX *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               char *param_6)

{
  PPPP_Proto_Write_RlyPort_EX(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::AddrCompare(sockaddr_in *param_1,sockaddr_in *param_2)

{
  AddrCompare(param_1,param_2);
  return;
}



void tnp::PPPP_MakeSha1(char *param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  PPPP_MakeSha1(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::PPPP__Send_Report(int param_1,uchar param_2,char *param_3)

{
  PPPP__Send_Report(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_Proto_Read_LanSearch
               (st_PPPP_LanSearch *param_1,char *param_2,uint *param_3,char *param_4,uchar *param_5)

{
  PPPP_Proto_Read_LanSearch(param_1,param_2,param_3,param_4,param_5);
  return;
}



void PPPP__Timer_Delete(uint param_1)

{
  PPPP__Timer_Delete(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  return pVar1;
}



void tnp::SetSocketBlock(int param_1)

{
  SetSocketBlock(param_1);
  return;
}



void tnp::PPPP_Proto_Write_SDevLgn
               (st_PPPP_SDevLgn *param_1,char *param_2,uint param_3,char *param_4)

{
  PPPP_Proto_Write_SDevLgn(param_1,param_2,param_3,param_4);
  return;
}



void tnp::PPPP_Proto_Read_LanNotify
               (st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4)

{
  PPPP_Proto_Read_LanNotify(param_1,param_2,param_3,param_4);
  return;
}



void yi_p2p_on_get_ap_conf(void)

{
  yi_p2p_on_get_ap_conf();
  return;
}



void tnp::PPPP_Proto_Read_PunchPkt_EX
               (st_PPPP_PunchPkt_EX *param_1,char *param_2,uint *param_3,char *param_4,
               uchar *param_5,uint *param_6,char *param_7)

{
  PPPP_Proto_Read_PunchPkt_EX(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void tnp::sll_Remove_ByIndex(__the_SLL *param_1,uint param_2)

{
  sll_Remove_ByIndex(param_1,param_2);
  return;
}



void tnp::PPPP__DeviceInfoList_Get(char *param_1,uint param_2)

{
  PPPP__DeviceInfoList_Get(param_1,param_2);
  return;
}



void tnp::pppp_hmac_sha1(void *param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  pppp_hmac_sha1(param_1,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sscanf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



void tnp::PPPP__Update_SessionState(int param_1,uchar param_2)

{
  PPPP__Update_SessionState(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Send_P2PRdy
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  PPPP_Proto_Send_P2PRdy(param_1,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



void tnp::pppp_sha1_init_ctx(pppp_sha1_ctx *param_1)

{
  pppp_sha1_init_ctx(param_1);
  return;
}



void PPPP_Send_NoticeToAck(void)

{
  PPPP_Send_NoticeToAck();
  return;
}



void yi_p2p_on_set_voice_ctrl(void)

{
  yi_p2p_on_set_voice_ctrl();
  return;
}



void PPPP_Check_DevOnline(void)

{
  PPPP_Check_DevOnline();
  return;
}



void tnp::PPPP_Proto_Send_RlyPortAck
               (int param_1,sockaddr_in *param_2,uint param_3,ushort param_4,char param_5)

{
  PPPP_Proto_Send_RlyPortAck(param_1,param_2,param_3,param_4,param_5);
  return;
}



void trans_json_ex_s(void)

{
  trans_json_ex_s();
  return;
}



void tnp::PPPP_Proto_Write_RlyTCPStart
               (st_PPPP_RlyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char *param_5)

{
  PPPP_Proto_Write_RlyTCPStart(param_1,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Timer_Thread_Check(void)

{
  PPPP__Timer_Thread_Check();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



void yi_p2p_on_get_ptz_reset_time(void)

{
  yi_p2p_on_get_ptz_reset_time();
  return;
}



void __deregister_frame_info(void)

{
  __deregister_frame_info();
  return;
}



void tnp::pppp_sha1_process_block(void *param_1,uint param_2,pppp_sha1_ctx *param_3)

{
  pppp_sha1_process_block(param_1,param_2,param_3);
  return;
}



void PPPP__Send_Report_SuperDevice_ExitThread(char param_1,char param_2)

{
  PPPP__Send_Report_SuperDevice_ExitThread(param_1,param_2);
  return;
}



void tnp::ConnectAddress(int param_1,sockaddr_in *param_2)

{
  ConnectAddress(param_1,param_2);
  return;
}



void check_log_to_server_status(void)

{
  check_log_to_server_status();
  return;
}



void yi_p2p_on_stop_viewing(void)

{
  yi_p2p_on_stop_viewing();
  return;
}



void tnp::PPPP__Check_SessionDataReady
               (char *param_1,ushort param_2,ushort *param_3,ushort *param_4,uchar *param_5)

{
  PPPP__Check_SessionDataReady(param_1,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



void tnp::PPPP_Proto_Send_AliveAck(int param_1,char param_2,sockaddr_in *param_3)

{
  PPPP_Proto_Send_AliveAck(param_1,param_2,param_3);
  return;
}



void tnp::PPPP__Decode_ServerString(char *param_1,sockaddr_in *param_2,int param_3)

{
  PPPP__Decode_ServerString(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



void tnp::PPPP_Proto_Read_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint *param_3,char *param_4)

{
  PPPP_Proto_Read_RlyRdy(param_1,param_2,param_3,param_4);
  return;
}



void PPPP_Set_R2PMPCallback(void)

{
  PPPP_Set_R2PMPCallback();
  return;
}



void tnp::PPPP__Send_ErrorReport(int param_1,uchar param_2,char *param_3)

{
  PPPP__Send_ErrorReport(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_Proto_Read_PunchTo_EX
               (st_PPPP_PunchTo_EX *param_1,sockaddr_in *param_2,uchar *param_3,uchar *param_4,
               uint *param_5,char *param_6)

{
  PPPP_Proto_Read_PunchTo_EX(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void tnp::PPPP__Check_ValidDID(char *param_1)

{
  PPPP__Check_ValidDID(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = recvfrom(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}



void PPPP_TryRelay(int param_1,char param_2)

{
  PPPP_TryRelay(param_1,param_2);
  return;
}



void tnp::PPPP__Parse_DID
               (char *param_1,char *param_2,int param_3,int *param_4,char *param_5,int param_6)

{
  PPPP__Parse_DID(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::PPPP_Proto_Write_ConnectReport
               (st_PPPP_ConnectReport *param_1,char *param_2,char param_3,char *param_4,int param_5)

{
  PPPP_Proto_Write_ConnectReport(param_1,param_2,param_3,param_4,param_5);
  return;
}



void PPPP_Initialize(void)

{
  PPPP_Initialize();
  return;
}



void yi_p2p_on_ptz_preset_add(void)

{
  yi_p2p_on_ptz_preset_add();
  return;
}



void PPPP_LoginStatus_Check(void)

{
  PPPP_LoginStatus_Check();
  return;
}



void yi_p2p_on_alert_events(void)

{
  yi_p2p_on_alert_events();
  return;
}



void tnp::PPPP_Proto_Write_R2PMPBody
               (st_PPPP_R2PMPBody *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
               char *param_6)

{
  PPPP_Proto_Write_R2PMPBody(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void AesSetKeyDirect(void)

{
  AesSetKeyDirect();
  return;
}



void tnp::PPPP_Proto_Send_SDevReport
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               char *param_6,uint param_7,char *param_8,char param_9,char *param_10)

{
  PPPP_Proto_Send_SDevReport
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



void yi_p2p_on_is_power_on(void)

{
  yi_p2p_on_is_power_on();
  return;
}



void yi_p2p_on_get_record_events(void)

{
  yi_p2p_on_get_record_events();
  return;
}



void tnp::PPPP_Proto_Write_P2PReq
               (st_PPPP_P2PReq *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5)

{
  PPPP_Proto_Write_P2PReq(param_1,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void tnp::PPPP_Proto_Read_RlyPkt
               (st_PPPP_RlyPkt *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,
               uint *param_6)

{
  PPPP_Proto_Read_RlyPkt(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void yi_p2p_on_set_abnormal_sound_sensitivity(void)

{
  yi_p2p_on_set_abnormal_sound_sensitivity();
  return;
}



void tnp::PPPP_Proto_Read_PunchPkt
               (st_PPPP_PunchPkt *param_1,char *param_2,uint *param_3,char *param_4)

{
  PPPP_Proto_Read_PunchPkt(param_1,param_2,param_3,param_4);
  return;
}



void PPPP_NetworkDetect(void)

{
  PPPP_NetworkDetect();
  return;
}



void tnp::pppp_memxor(void *param_1,void *param_2,uint param_3)

{
  pppp_memxor(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_Proto_Recv_ALL
               (int param_1,sockaddr_in *param_2,uint param_3,uchar *param_4,ushort *param_5,
               char *param_6,ushort param_7,uchar *param_8)

{
  PPPP_Proto_Recv_ALL(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void tnp::PPPP_Proto_Send_RlyHelloSDev(int param_1,sockaddr_in *param_2)

{
  PPPP_Proto_Send_RlyHelloSDev(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void PPPP__Timer_Push(st_PPPP_TimerElement_t *param_1)

{
  PPPP__Timer_Push(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

hostent * gethostbyname(char *__name)

{
  hostent *phVar1;
  
  phVar1 = gethostbyname(__name);
  return phVar1;
}



void tnp::PPPP_DRW_Write_Header(st_PPPP_DRWHeader *param_1,uchar param_2,ushort param_3)

{
  PPPP_DRW_Write_Header(param_1,param_2,param_3);
  return;
}



void yi_p2p_on_set_viewpoint_trace(void)

{
  yi_p2p_on_set_viewpoint_trace();
  return;
}



void tnp::PPPP_Proto_Send_RlyPort_EX
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               char *param_6)

{
  PPPP_Proto_Send_RlyPort_EX(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}



void tnp::pppp_sha1_finish_ctx(pppp_sha1_ctx *param_1,void *param_2)

{
  pppp_sha1_finish_ctx(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



void yi_p2p_on_ptz_set_cruise_stay_time(void)

{
  yi_p2p_on_ptz_set_cruise_stay_time();
  return;
}



void tnp::PPPP__R2PMP_Start(int param_1)

{
  PPPP__R2PMP_Start(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



void tnp::CreateWorkerThread(_func_void_ptr_void_ptr *param_1,void *param_2)

{
  CreateWorkerThread(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void pthread_exit(void *__retval)

{
                    // WARNING: Subroutine does not return
  pthread_exit(__retval);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



void tnp::PPPP_Proto_Read_NoticeTo_EX
               (st_PPPP_NoticeTo_EX *param_1,char *param_2,uint *param_3,char *param_4,
               ulonglong *param_5,ushort *param_6,char *param_7,uint *param_8)

{
  PPPP_Proto_Read_NoticeTo_EX(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void tnp::PPPP_Proto_Send_RlyPkt
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               char param_6,uint param_7)

{
  PPPP_Proto_Send_RlyPkt(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = recv(__fd,__buf,__n,__flags);
  return sVar1;
}



void yi_p2p_on_new_session(void)

{
  yi_p2p_on_new_session();
  return;
}



void PPPP_SetNoticeToCallback(void)

{
  PPPP_SetNoticeToCallback();
  return;
}



void PPPP_Close(void)

{
  PPPP_Close();
  return;
}



void yi_p2p_on_ptz_set_cruise_period(void)

{
  yi_p2p_on_ptz_set_cruise_period();
  return;
}



void tnp::PPPP_Proto_Read_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint *param_3)

{
  PPPP_Proto_Read_RlyTo(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



void tnp::PPPP_Proto_Send_DevLgn_EX
               (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
               char *param_6,char param_7,sockaddr_in *param_8,char *param_9,char param_10)

{
  PPPP_Proto_Send_DevLgn_EX
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



void tnp::PPPP_Proto_Read_ServerConfig
               (st_PPPP_ServerConfig *param_1,char *param_2,uint *param_3,char *param_4,
               char *param_5,uint *param_6,char *param_7)

{
  PPPP_Proto_Read_ServerConfig(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void AesSetKey(void)

{
  AesSetKey();
  return;
}



void tnp::sll_Remove_ByNumber(__the_SLL *param_1,uint param_2)

{
  sll_Remove_ByNumber(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Send_EasyTCPStart
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               char param_6,char *param_7)

{
  PPPP_Proto_Send_EasyTCPStart(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void PPPP_DoWakeup(char *param_1,char *param_2,char *param_3)

{
  PPPP_DoWakeup(param_1,param_2,param_3);
  return;
}



void PPPP_TrySendConnectReport(uint param_1,int param_2)

{
  PPPP_TrySendConnectReport(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = clock_gettime(__clock_id,__tp);
  return iVar1;
}



void tnp::PPPP__Set_SessionReady(int param_1,char param_2)

{
  PPPP__Set_SessionReady(param_1,param_2);
  return;
}



void yi_p2p_on_sync_dev_ability(void)

{
  yi_p2p_on_sync_dev_ability();
  return;
}



void yi_p2p_on_speaker_stop(void)

{
  yi_p2p_on_speaker_stop();
  return;
}



void tnp::PPPP__Send_Alive(uint param_1,int param_2,char param_3,sockaddr_in *param_4)

{
  PPPP__Send_Alive(param_1,param_2,param_3,param_4);
  return;
}



void yi_p2p_on_sync_info_from_server(void)

{
  yi_p2p_on_sync_info_from_server();
  return;
}



void tnp::ntohAddr(sockaddr_in *param_1,sockaddr_in *param_2)

{
  ntohAddr(param_1,param_2);
  return;
}



void tnp::RecvFromAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4)

{
  RecvFromAddress(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}



void tnp::PPPP_Proto_Read_RlyPortAck
               (st_PPPP_RlyPortAck *param_1,uint *param_2,ushort *param_3,char *param_4)

{
  PPPP_Proto_Read_RlyPortAck(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Timer_Pop(void)

{
  PPPP__Timer_Pop();
  return;
}



void tnp::PPPP__DeviceInfoList_Clear(void)

{
  PPPP__DeviceInfoList_Clear();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = strnlen(__string,__maxlen);
  return sVar1;
}



void tnp::ClearSocketEnv(void)

{
  ClearSocketEnv();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



void tnp::PPPP_Proto_Write_SDevSessionReport
               (st_PPPP_SDevSessionReport *param_1,uint param_2,char *param_3,uint param_4,
               char *param_5,char *param_6,uint param_7,char *param_8,char param_9,uint param_10,
               uint param_11,uint param_12,uint param_13,uint param_14)

{
  PPPP_Proto_Write_SDevSessionReport
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,param_14);
  return;
}



void PPPP__CheckP2PResult(int param_1)

{
  PPPP__CheckP2PResult(param_1);
  return;
}



void tnp::BroadcastMessage(char *param_1,int param_2,int param_3,ushort param_4)

{
  BroadcastMessage(param_1,param_2,param_3,param_4);
  return;
}



void tnp::PPPP_Proto_Read_RlyTCPTo(st_PPPP_RlyTCPTo *param_1,sockaddr_in *param_2,char *param_3)

{
  PPPP_Proto_Read_RlyTCPTo(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_Proto_Write_RlyReq
               (st_PPPP_RlyReq *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5,uint param_6)

{
  PPPP_Proto_Write_RlyReq(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::PPPP__DeviceInfoList_Init(void)

{
  PPPP__DeviceInfoList_Init();
  return;
}



void tnp::PPPP_Proto_Send_NoticePingAck
               (int param_1,char param_2,sockaddr_in *param_3,st_PPPP_NoticePing *param_4)

{
  PPPP_Proto_Send_NoticePingAck(param_1,param_2,param_3,param_4);
  return;
}



void tnp::PPPP_Proto_Send_RlyTCPPkt(int param_1,sockaddr_in *param_2,char *param_3,char param_4)

{
  PPPP_Proto_Send_RlyTCPPkt(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = sleep(__seconds);
  return uVar1;
}



void yi_p2p_on_set_replay_time(void)

{
  yi_p2p_on_set_replay_time();
  return;
}



void tnp::PPPP__Write_Block(int param_1,uchar param_2,char *param_3,int param_4)

{
  PPPP__Write_Block(param_1,param_2,param_3,param_4);
  return;
}



void yi_p2p_on_reset_device(void)

{
  yi_p2p_on_reset_device();
  return;
}



void tnp::PPPP_Proto_Write_PunchPkt
               (st_PPPP_PunchPkt *param_1,char *param_2,uint param_3,char *param_4)

{
  PPPP_Proto_Write_PunchPkt(param_1,param_2,param_3,param_4);
  return;
}



void yi_p2p_on_ptz_preset_call(void)

{
  yi_p2p_on_ptz_preset_call();
  return;
}



void yi_p2p_on_set_motion_record(void)

{
  yi_p2p_on_set_motion_record();
  return;
}



void yi_p2p_on_set_record_plan_time(void)

{
  yi_p2p_on_set_record_plan_time();
  return;
}



void tnp::MUTEX_RELEASE(pthread_mutex_t *param_1)

{
  MUTEX_RELEASE(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = vfprintf(__s,__format,__arg);
  return iVar1;
}



void PPPP_Connect_LanOnly(void)

{
  PPPP_Connect_LanOnly();
  return;
}



void tnp::PPPP_Proto_Read_R2PMPStart
               (st_PPPP_R2PMPStart *param_1,sockaddr_in *param_2,char *param_3,uint *param_4,
               char *param_5)

{
  PPPP_Proto_Read_R2PMPStart(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::PPPP_Proto_Recv_TCP(int param_1,char *param_2,ushort param_3,ushort *param_4,uint param_5)

{
  PPPP_Proto_Recv_TCP(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::PPPP_DRWAck_Write_Header(st_PPPP_DRWAckHeader *param_1,uchar param_2,ushort param_3)

{
  PPPP_DRWAck_Write_Header(param_1,param_2,param_3);
  return;
}



void tnp::IndexCompare(ushort param_1,ushort param_2)

{
  IndexCompare(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Send_RlyTCPStart
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               char *param_6)

{
  PPPP_Proto_Send_RlyTCPStart(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::PPPP_Proto_Send_RlyServerReq
               (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
               char *param_6)

{
  PPPP_Proto_Send_RlyServerReq(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::PPPP_Proto_Send_Report
               (int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,
               char param_6,char param_7,short param_8,char *param_9)

{
  PPPP_Proto_Send_Report(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



void tnp::PPPP__Resolve_P2PServer(char *param_1,sockaddr_in *param_2,sockaddr_in *param_3)

{
  PPPP__Resolve_P2PServer(param_1,param_2,param_3);
  return;
}



void tnp::PPPP__Close_Inner(uint param_1)

{
  PPPP__Close_Inner(param_1);
  return;
}



void tnp::sll_Move_ByNumber(__the_SLL *param_1,__the_SLL *param_2,uint param_3)

{
  sll_Move_ByNumber(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_DebugTrace(uint param_1,char *param_2,...)

{
  PPPP_DebugTrace(param_1,param_2);
  return;
}



void yi_p2p_on_set_abnormal_sound(void)

{
  yi_p2p_on_set_abnormal_sound();
  return;
}



void tnp::SendMessageByTCP(char *param_1,int param_2,int param_3)

{
  SendMessageByTCP(param_1,param_2,param_3);
  return;
}



void tnp::PPPP__Get_LocalAddress(sockaddr_in *param_1,sockaddr_in *param_2)

{
  PPPP__Get_LocalAddress(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = getsockname(__fd,__addr,__len);
  return iVar1;
}



void PPPP__Start_Proto_Lan(int param_1)

{
  PPPP__Start_Proto_Lan(param_1);
  return;
}



void yi_p2p_check_buf(void)

{
  yi_p2p_check_buf();
  return;
}



void yi_p2p_on_set_lapse_video(void)

{
  yi_p2p_on_set_lapse_video();
  return;
}



void tnp::MUTEX_DESTROY(pthread_mutex_t *param_1)

{
  MUTEX_DESTROY(param_1);
  return;
}



void tnp::PPPP_Proto_Read_RlyTo_EX
               (st_PPPP_RlyTo_EX *param_1,sockaddr_in *param_2,uint *param_3,char *param_4)

{
  PPPP_Proto_Read_RlyTo_EX(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



void PPPP_TryRelayByUDP(int param_1,int param_2)

{
  PPPP_TryRelayByUDP(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Write_RlyPortAck
               (st_PPPP_RlyPortAck *param_1,uint param_2,ushort param_3,char param_4)

{
  PPPP_Proto_Write_RlyPortAck(param_1,param_2,param_3,param_4);
  return;
}



void tnp::PPPP__DeviceInfoList_UnInit(void)

{
  PPPP__DeviceInfoList_UnInit();
  return;
}



void yi_p2p_on_get_record_events_month(void)

{
  yi_p2p_on_get_record_events_month();
  return;
}



void yi_p2p_on_get_white_led_status(void)

{
  yi_p2p_on_get_white_led_status();
  return;
}



void tnp::MUTEX_LOCK(pthread_mutex_t *param_1)

{
  MUTEX_LOCK(param_1);
  return;
}



void tnp::PPPP_Proto_Write_RlyPkt
               (st_PPPP_RlyPkt *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               uint param_6)

{
  PPPP_Proto_Write_RlyPkt(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}



void PPPP_Send_Login(void)

{
  PPPP_Send_Login();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}



void yi_p2p_on_get_factory_test_info(void)

{
  yi_p2p_on_get_factory_test_info();
  return;
}



void tnp::pppp_bin_to_string(char *param_1,int param_2,char *param_3)

{
  pppp_bin_to_string(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_Proto_Read_RlyRdy_EX
               (st_PPPP_RlyRdy_EX *param_1,char *param_2,uint *param_3,char *param_4,char *param_5)

{
  PPPP_Proto_Read_RlyRdy_EX(param_1,param_2,param_3,param_4,param_5);
  return;
}



void PPPP__Send_Report_SuperDevice_Connect(char *param_1)

{
  PPPP__Send_Report_SuperDevice_Connect(param_1);
  return;
}



void tnp::PPPP_Proto_Write_ServerConfigReq
               (st_PPPP_ServerConfigReq *param_1,char *param_2,uint param_3,char *param_4,
               uint param_5,char *param_6)

{
  PPPP_Proto_Write_ServerConfigReq(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::PPPP__DoNetWorkDetect(st_PPPP_NetInfo *param_1,ushort param_2,char *param_3)

{
  PPPP__DoNetWorkDetect(param_1,param_2,param_3);
  return;
}



void tnp::sll_DeInit(__the_SLL *param_1)

{
  sll_DeInit(param_1);
  return;
}



void PPPP_Connect(void)

{
  PPPP_Connect();
  return;
}



void tnp::PPPP_Proto_Generate_SDevSessionReport
               (char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char *param_6,
               uint param_7,char *param_8,char param_9,uint param_10,uint param_11,uint param_12,
               uint param_13,uint param_14)

{
  PPPP_Proto_Generate_SDevSessionReport
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,param_14);
  return;
}



void tnp::PPPP__DeviceInfoList_Add(char *param_1,uint param_2,char *param_3)

{
  PPPP__DeviceInfoList_Add(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_Proto_Send_HelloWithBody
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               char param_6)

{
  PPPP_Proto_Send_HelloWithBody(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::MUTEX_TRYLOCK(pthread_mutex_t *param_1)

{
  MUTEX_TRYLOCK(param_1);
  return;
}



void AesEncryptDirect(void)

{
  AesEncryptDirect();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = localtime_r(__timer,__tp);
  return ptVar1;
}



void tnp::PPPP_Proto_Write_P2PRdy_EX
               (st_PPPP_P2PRdy_EX *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
               char *param_6)

{
  PPPP_Proto_Write_P2PRdy_EX(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = popen(__command,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void yi_p2p_on_ptz_preset_del(void)

{
  yi_p2p_on_ptz_preset_del();
  return;
}



void tnp::PPPP_Proto_Send_Close(int param_1,char param_2,sockaddr_in *param_3)

{
  PPPP_Proto_Send_Close(param_1,param_2,param_3);
  return;
}



void PPPP_ForceClose(void)

{
  PPPP_ForceClose();
  return;
}



void tnp::PPPP_MakeSha1_2(char *param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  PPPP_MakeSha1_2(param_1,param_2,param_3,param_4,param_5);
  return;
}



void PPPP__Send_NoticeToAckError(int param_1,ulonglong param_2,char param_3)

{
  PPPP__Send_NoticeToAckError(param_1,param_2,param_3);
  return;
}



void tnp::sll_Put(__the_SLL *param_1,__the_SLL_Element *param_2)

{
  sll_Put(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Read_NoticePing
               (st_PPPP_NoticePing *param_1,char *param_2,uint *param_3,char *param_4)

{
  PPPP_Proto_Read_NoticePing(param_1,param_2,param_3,param_4);
  return;
}



void yi_p2p_on_process_ability_sets(void)

{
  yi_p2p_on_process_ability_sets();
  return;
}



void tnp::PPPP__Start_TCP_For_Session(int param_1,sockaddr *param_2,int param_3)

{
  PPPP__Start_TCP_For_Session(param_1,param_2,param_3);
  return;
}



void yi_p2p_on_ptz_jump_to_point(void)

{
  yi_p2p_on_ptz_jump_to_point();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Timer_UnInit(void)

{
  PPPP__Timer_UnInit();
  return;
}



void yi_p2p_on_ptz_set_cruise(void)

{
  yi_p2p_on_ptz_set_cruise();
  return;
}



void yi_p2p_on_get_record_events_day(void)

{
  yi_p2p_on_get_record_events_day();
  return;
}



void tnp::PPPP_DRW_Send(int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort param_5,
                       char *param_6,ushort param_7)

{
  PPPP_DRW_Send(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void yi_p2p_on_set_baby_cry(void)

{
  yi_p2p_on_set_baby_cry();
  return;
}



void tnp::PPPP_Proto_Send_RlyReq
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               sockaddr_in *param_6,uint param_7)

{
  PPPP_Proto_Send_RlyReq(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



void yi_p2p_on_restart_ap(void)

{
  yi_p2p_on_restart_ap();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__EnableInsecureMode(void)

{
  PPPP__EnableInsecureMode();
  return;
}



void tnp::PPPP_Proto_Send_PunchPkt
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  PPPP_Proto_Send_PunchPkt(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::PPPP_Proto_Send_DevOnline
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  PPPP_Proto_Send_DevOnline(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::PPPP_Proto_Send_ConnectReport
               (int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,
               char *param_6,int param_7)

{
  PPPP_Proto_Send_ConnectReport(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void tnp::PPPP_Proto_Write_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint param_3,char *param_4)

{
  PPPP_Proto_Write_P2PRdy(param_1,param_2,param_3,param_4);
  return;
}



void tnp::PPPP__ResetSuperDevice(void)

{
  PPPP__ResetSuperDevice();
  return;
}



void tnp::CreateSocket(char param_1)

{
  CreateSocket(param_1);
  return;
}



void tnp::PPPP__Calculate_LossRate(int param_1,uint *param_2)

{
  PPPP__Calculate_LossRate(param_1,param_2);
  return;
}



void yi_p2p_on_set_light(void)

{
  yi_p2p_on_set_light();
  return;
}



void yi_p2p_on_set_mirror_flip(void)

{
  yi_p2p_on_set_mirror_flip();
  return;
}



void tnp::UpdateNetwork(void)

{
  UpdateNetwork();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void tnp::SllIndexCompare(uint param_1,uint param_2,uint param_3)

{
  SllIndexCompare(param_1,param_2,param_3);
  return;
}



void tnp::SetSocketBroadcast(int param_1)

{
  SetSocketBroadcast(param_1);
  return;
}



void __register_frame_info(void)

{
  __register_frame_info();
  return;
}



void tnp::PPPP_Proto_Write_LanSearch
               (st_PPPP_LanSearch *param_1,char *param_2,uint param_3,char *param_4)

{
  PPPP_Proto_Write_LanSearch(param_1,param_2,param_3,param_4);
  return;
}



void AesDecryptDirect(void)

{
  AesDecryptDirect();
  return;
}



void yi_p2p_on_set_day_night_mode(void)

{
  yi_p2p_on_set_day_night_mode();
  return;
}



void tnp::PPPP_Proto_Send_PunchPkt_EX
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               uint param_6,char *param_7)

{
  PPPP_Proto_Send_PunchPkt_EX(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void PPPP_DoListen_UDP(int param_1,uint param_2,ushort param_3,char param_4)

{
  PPPP_DoListen_UDP(param_1,param_2,param_3,param_4);
  return;
}



void __thiscall
tnp::PPPP_Proto_Send_NoticeToAck
          (tnp *this,int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
          char *param_6,ulonglong param_7,ushort param_8,char *param_9,char *param_10,uchar param_11
          ,char param_12)

{
  PPPP_Proto_Send_NoticeToAck
            (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12);
  return;
}



void tnp::PPPP_Proto_Write_Header(st_PPPP_SessionHeader *param_1,uchar param_2,ushort param_3)

{
  PPPP_Proto_Write_Header(param_1,param_2,param_3);
  return;
}



void PPPP_Check_Buffer(void)

{
  PPPP_Check_Buffer();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = raise(__sig);
  return iVar1;
}



void yi_p2p_on_set_wifi_info(void)

{
  yi_p2p_on_set_wifi_info();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Check_Device_Working(void)

{
  PPPP__Check_Device_Working();
  return;
}



void PPPP_TryRelayByTCP(int param_1,int param_2)

{
  PPPP_TryRelayByTCP(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



void PPPP_TryWakeUp(char *param_1,int param_2,char *param_3,int param_4,uint param_5,uint param_6)

{
  PPPP_TryWakeUp(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void PPPP_GetAPIVersion(void)

{
  PPPP_GetAPIVersion();
  return;
}



void tnp::PPPP_Proto_Send_ServerConfigReq
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               uint param_6,char *param_7)

{
  PPPP_Proto_Send_ServerConfigReq(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void tnp::PPPP__Resolve_HostName(char *param_1,sockaddr_in *param_2)

{
  PPPP__Resolve_HostName(param_1,param_2);
  return;
}



void tnp::SendMessage(char *param_1,int param_2,int param_3,sockaddr_in *param_4)

{
  SendMessage(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = send(__fd,__buf,__n,__flags);
  return sVar1;
}



void yi_p2p_on_set_ap_conf(void)

{
  yi_p2p_on_set_ap_conf();
  return;
}



void yi_p2p_on_auth(void)

{
  yi_p2p_on_auth();
  return;
}



void tnp::PPPP__Halt_TCP_For_Session(int param_1)

{
  PPPP__Halt_TCP_For_Session(param_1);
  return;
}



void yi_p2p_on_ptz_direction_ctrl_stop(void)

{
  yi_p2p_on_ptz_direction_ctrl_stop();
  return;
}



void tnp::PPPP_Proto_Send_P2PReq_EX
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               sockaddr_in *param_6,char *param_7)

{
  PPPP_Proto_Send_P2PReq_EX(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = ferror(__stream);
  return iVar1;
}



void PPPP_Set_IncomingConnectionCallback(void)

{
  PPPP_Set_IncomingConnectionCallback();
  return;
}



void tnp::PPPP_Proto_Write_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint param_3,char *param_4)

{
  PPPP_Proto_Write_RlyRdy(param_1,param_2,param_3,param_4);
  return;
}



void tnp::PPPP_Proto_Read_R2PMPReq
               (st_PPPP_R2PMPReq *param_1,sockaddr_in *param_2,sockaddr_in *param_3,uint *param_4,
               char *param_5)

{
  PPPP_Proto_Read_R2PMPReq(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::WaitThreadExit(ulong *param_1)

{
  WaitThreadExit(param_1);
  return;
}



void tnp::PPPP__Set_SessionState(int param_1,uchar param_2)

{
  PPPP__Set_SessionState(param_1,param_2);
  return;
}



void PPPP_Read(void)

{
  PPPP_Read();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(__mutex,__mutexattr);
  return iVar1;
}



void tnp::PPPP_DRWAck_Read_Header(st_PPPP_DRWAckHeader *param_1,uchar *param_2,ushort *param_3)

{
  PPPP_DRWAck_Read_Header(param_1,param_2,param_3);
  return;
}



void yi_p2p_on_set_audio_mode(void)

{
  yi_p2p_on_set_audio_mode();
  return;
}



void tnp::MUTEX_INIT(pthread_mutex_t *param_1)

{
  MUTEX_INIT(param_1);
  return;
}



void tnp::PPPP__Check_RemoteAddr(int param_1,sockaddr_in *param_2)

{
  PPPP__Check_RemoteAddr(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}



void tnp::PPPP_Proto_Send_LanSearch
               (int param_1,ushort param_2,char *param_3,uint param_4,char *param_5)

{
  PPPP_Proto_Send_LanSearch(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::TryBindPort(int param_1,ushort *param_2)

{
  TryBindPort(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



void PPPP_TryP2P(int param_1,char param_2)

{
  PPPP_TryP2P(param_1,param_2);
  return;
}



void tnp::SetSocketNonBlock(int param_1)

{
  SetSocketNonBlock(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Timer_Timeout(void)

{
  PPPP__Timer_Timeout();
  return;
}



void tnp::PPPP_MakeNonce(char *param_1,int param_2)

{
  PPPP_MakeNonce(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Send_DevLgn_Proxy
               (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
               char *param_6,char param_7,sockaddr_in *param_8,char *param_9,char param_10,
               char *param_11,uint param_12,char *param_13,char *param_14,uchar param_15)

{
  PPPP_Proto_Send_DevLgn_Proxy
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,param_14,param_15);
  return;
}



void tnp::sll_element_Allocate(uint param_1,uint param_2)

{
  sll_element_Allocate(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Read_Header(st_PPPP_SessionHeader *param_1,uchar *param_2,ushort *param_3)

{
  PPPP_Proto_Read_Header(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_Proto_Send_RlyRdy
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  PPPP_Proto_Send_RlyRdy(param_1,param_2,param_3,param_4,param_5);
  return;
}



void yi_remote_manual_reboot(void)

{
  yi_remote_manual_reboot();
  return;
}



void tnp::PPPP_Proto_Write_P2PReq_EX
               (st_PPPP_P2PReq_EX *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5,char *param_6)

{
  PPPP_Proto_Write_P2PReq_EX(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::PPPP_Proto_Write_R2PMPStart
               (st_PPPP_R2PMPStart *param_1,sockaddr_in *param_2,char param_3,char *param_4)

{
  PPPP_Proto_Write_R2PMPStart(param_1,param_2,param_3,param_4);
  return;
}



void tnp::sll_Search_ByNumber(__the_SLL *param_1,uint param_2)

{
  sll_Search_ByNumber(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



void tnp::PPPP__ConnectWithNonBlockSocket(int param_1,sockaddr *param_2,int param_3)

{
  PPPP__ConnectWithNonBlockSocket(param_1,param_2,param_3);
  return;
}



void yi_p2p_on_start_viewing(void)

{
  yi_p2p_on_start_viewing();
  return;
}



void tnp::PPPP_Proto_Read_PunchTo(st_PPPP_PunchTo *param_1,sockaddr_in *param_2)

{
  PPPP_Proto_Read_PunchTo(param_1,param_2);
  return;
}



void tnp::sll_Search_ByIndex(__the_SLL *param_1,uint param_2,uint *param_3)

{
  sll_Search_ByIndex(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Timer_RemoveMaxElapse(void)

{
  PPPP__Timer_RemoveMaxElapse();
  return;
}



void yi_p2p_on_set_alarm_sensitivity(void)

{
  yi_p2p_on_set_alarm_sensitivity();
  return;
}



void tnp::PPPP__Update_SessionP2PServer(int param_1,sockaddr_in *param_2)

{
  PPPP__Update_SessionP2PServer(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Write_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint param_3)

{
  PPPP_Proto_Write_RlyTo(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_Proto_Write_RlyTCPReq
               (st_PPPP_RlyTCPReq *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5,char *param_6)

{
  PPPP_Proto_Write_RlyTCPReq(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::PPPP_Proto_Write_RlyTCPPkt(st_PPPP_RlyTCPPkt *param_1,char *param_2,char param_3)

{
  PPPP_Proto_Write_RlyTCPPkt(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = getsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



void tnp::DetachThread(ulong *param_1)

{
  DetachThread(param_1);
  return;
}



void tnp::over_time_receive_tcp(int param_1,char *param_2,int param_3,uint param_4)

{
  over_time_receive_tcp(param_1,param_2,param_3,param_4);
  return;
}



void yi_p2p_on_panorama_capture_start(void)

{
  yi_p2p_on_panorama_capture_start();
  return;
}



void yi_report_debug_strings(void)

{
  yi_report_debug_strings();
  return;
}



void yi_p2p_on_set_encode_mode(void)

{
  yi_p2p_on_set_encode_mode();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int inet_aton(char *__cp,in_addr *__inp)

{
  int iVar1;
  
  iVar1 = inet_aton(__cp,__inp);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__InitP2PTCPSocketInfo(void)

{
  PPPP__InitP2PTCPSocketInfo();
  return;
}



void tnp::PPPP_Proto_Write_RlyServerReq
               (st_PPPP_RlyServerReq *param_1,char *param_2,uint param_3,char *param_4)

{
  PPPP_Proto_Write_RlyServerReq(param_1,param_2,param_3,param_4);
  return;
}



void tnp::GetIP(int param_1,char *param_2)

{
  GetIP(param_1,param_2);
  return;
}



void tnp::PPPP__Set_ConnectKey(uint param_1,char *param_2)

{
  PPPP__Set_ConnectKey(param_1,param_2);
  return;
}



void tnp::sll_Put_Free(__the_SLL *param_1,__the_SLL_Element *param_2,char param_3)

{
  sll_Put_Free(param_1,param_2,param_3);
  return;
}



void yi_p2p_on_ptz_home(void)

{
  yi_p2p_on_ptz_home();
  return;
}



void yi_p2p_on_set_alarm_sound(void)

{
  yi_p2p_on_set_alarm_sound();
  return;
}



void tnp::mSecSleep(uint param_1)

{
  mSecSleep(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__App_UnInit(void)

{
  PPPP__App_UnInit();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__GetLanOnlyFlag(void)

{
  PPPP__GetLanOnlyFlag();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



void yi_p2p_on_panorama_capture_abort(void)

{
  yi_p2p_on_panorama_capture_abort();
  return;
}



void yi_p2p_on_get_white_led_time(void)

{
  yi_p2p_on_get_white_led_time();
  return;
}



void yi_p2p_on_get_device_param_conf(void)

{
  yi_p2p_on_get_device_param_conf();
  return;
}



void PPPP_Set_LogFilename(void)

{
  PPPP_Set_LogFilename();
  return;
}



void yi_p2p_on_ptz_direction_ctrl(void)

{
  yi_p2p_on_ptz_direction_ctrl();
  return;
}



void tnp::PPPP_DRW_Read_Header(st_PPPP_DRWHeader *param_1,uchar *param_2,ushort *param_3)

{
  PPPP_DRW_Read_Header(param_1,param_2,param_3);
  return;
}



void tnp::PPPP__Calculate_P2PPktLossRatio(uint param_1)

{
  PPPP__Calculate_P2PPktLossRatio(param_1);
  return;
}



void tnp::PPPP_Proto_Send_RlyHelloSDevAck(int param_1,sockaddr_in *param_2)

{
  PPPP_Proto_Send_RlyHelloSDevAck(param_1,param_2);
  return;
}



void tnp::pppp_sha1_process_bytes(void *param_1,uint param_2,pppp_sha1_ctx *param_3)

{
  pppp_sha1_process_bytes(param_1,param_2,param_3);
  return;
}



void tnp::PPPP_IsEmpty(char *param_1)

{
  PPPP_IsEmpty(param_1);
  return;
}



void tnp::PPPP_Proto_Send_SDevLgn
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  PPPP_Proto_Send_SDevLgn(param_1,param_2,param_3,param_4,param_5);
  return;
}



void yi_p2p_on_sync_time(void)

{
  yi_p2p_on_sync_time();
  return;
}



void tnp::PPPP_Proto_Write_P2PServerReq
               (st_PPPP_P2PServerReq *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               char *param_6,char *param_7)

{
  PPPP_Proto_Write_P2PServerReq(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void yi_p2p_on_get_video_backup_state(void)

{
  yi_p2p_on_get_video_backup_state();
  return;
}



void PPPP_Get_PeerBandwidthInfo(void)

{
  PPPP_Get_PeerBandwidthInfo();
  return;
}



void tnp::PPPP_Proto_Write_HeaderV2
               (st_PPPP_SessionHeaderV2 *param_1,uchar param_2,ushort param_3,char param_4,
               char *param_5,uint param_6,char *param_7)

{
  PPPP_Proto_Write_HeaderV2(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



void yi_p2p_on_update(void)

{
  yi_p2p_on_update();
  return;
}



void PPPP__CloseTCPSessionSocket(int param_1)

{
  PPPP__CloseTCPSessionSocket(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = fcntl(__fd,__cmd);
  return iVar1;
}



void tnp::PPPP__Connect_TCPServer
               (sockaddr_in *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  PPPP__Connect_TCPServer(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::PPPP__Reset_Session(void)

{
  PPPP__Reset_Session();
  return;
}



void PPPP_Listen_Break(void)

{
  PPPP_Listen_Break();
  return;
}



void tnp::PPPP_Proto_Send_R2PMPBody
               (int param_1,sockaddr_in *param_2,uchar param_3,char *param_4,uint param_5,
               char *param_6,uint param_7,char *param_8)

{
  PPPP_Proto_Send_R2PMPBody(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void PPPP_Listen(void)

{
  PPPP_Listen();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



void yi_p2p_on_set_video_backup(void)

{
  yi_p2p_on_set_video_backup();
  return;
}



void tnp::PPPP_Proto_Write_SDevReport
               (st_PPPP_SDevReport *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               uint param_6,char *param_7,char param_8,char *param_9)

{
  PPPP_Proto_Write_SDevReport
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



void tnp::PPPP_Proto_Read_RlyTCPTo_EX
               (st_PPPP_RlyTCPTo_EX *param_1,sockaddr_in *param_2,char *param_3,char *param_4)

{
  PPPP_Proto_Read_RlyTCPTo_EX(param_1,param_2,param_3,param_4);
  return;
}



void PPPP_Write(void)

{
  PPPP_Write();
  return;
}



void tnp::PPPP__R2PMP_Success(int param_1,sockaddr_in *param_2)

{
  PPPP__R2PMP_Success(param_1,param_2);
  return;
}



void tnp::PPPP_MakeSha1_EX(char *param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  PPPP_MakeSha1_EX(param_1,param_2,param_3,param_4,param_5);
  return;
}



void tnp::PPPP__ExitSuperDevice(char param_1)

{
  PPPP__ExitSuperDevice(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



void yi_p2p_on_set_device_param_conf(void)

{
  yi_p2p_on_set_device_param_conf();
  return;
}



void tnp::PPPP_Proto_Send_WakeUp
               (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
               char *param_6,char *param_7)

{
  PPPP_Proto_Send_WakeUp(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void tnp::PPPP_Proto_Read_LanNotifyAck
               (st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4)

{
  PPPP_Proto_Read_LanNotifyAck(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__ResetP2PTCPSocketInfo(void)

{
  PPPP__ResetP2PTCPSocketInfo();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Device_Init(void)

{
  PPPP__Device_Init();
  return;
}



void yi_p2p_on_set_mic_volume(void)

{
  yi_p2p_on_set_mic_volume();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = localtime(__timer);
  return ptVar1;
}



void yi_p2p_on_get_panorama_capture_schedule(void)

{
  yi_p2p_on_get_panorama_capture_schedule();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = feof(__stream);
  return iVar1;
}



void yi_p2p_on_get_record_plan_time(void)

{
  yi_p2p_on_get_record_plan_time();
  return;
}



void tnp::PPPP_DecodeString(char *param_1,char *param_2,int param_3)

{
  PPPP_DecodeString(param_1,param_2,param_3);
  return;
}



void tnp::PPPP__Update_P2PServer(sockaddr_in *param_1,sockaddr_in *param_2,sockaddr_in *param_3)

{
  PPPP__Update_P2PServer(param_1,param_2,param_3);
  return;
}



void AesCbcDecrypt(void)

{
  AesCbcDecrypt();
  return;
}



void PPPP__HelloToIpEqual(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  PPPP__HelloToIpEqual(param_1,param_2,param_3,param_4);
  return;
}



void yi_p2p_on_set_white_led_time(void)

{
  yi_p2p_on_set_white_led_time();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Device_UnInit(void)

{
  PPPP__Device_UnInit();
  return;
}



void yi_p2p_on_set_high_resolution(void)

{
  yi_p2p_on_set_high_resolution();
  return;
}



void tnp::PPPP_Proto_Read_P2PRdy_EX
               (st_PPPP_P2PRdy_EX *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,
               char *param_6)

{
  PPPP_Proto_Read_P2PRdy_EX(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = sendto(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}



void yi_p2p_on_ptz_set_motion_track(void)

{
  yi_p2p_on_ptz_set_motion_track();
  return;
}



void yi_p2p_on_set_sd_record_stop(void)

{
  yi_p2p_on_set_sd_record_stop();
  return;
}



void tnp::getCurTime(void)

{
  getCurTime();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void yi_p2p_on_get_motion_detect_cfg(void)

{
  yi_p2p_on_get_motion_detect_cfg();
  return;
}



void tnp::PPPP_Proto_Send_RlyTCPToAck
               (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
               char *param_6,char *param_7,char param_8,char param_9)

{
  PPPP_Proto_Send_RlyTCPToAck
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Generate_SeqNum(void)

{
  PPPP__Generate_SeqNum();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = pclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



void tnp::PPPP_Proto_Write_PunchPkt_EX
               (st_PPPP_PunchPkt_EX *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
               char *param_6)

{
  PPPP_Proto_Write_PunchPkt_EX(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::PPPP_Proto_Write_RlyToAck
               (st_PPPP_RlyToAck *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               uint param_6,char param_7)

{
  PPPP_Proto_Write_RlyToAck(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void yi_p2p_on_set_power(void)

{
  yi_p2p_on_set_power();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = mktime(__tp);
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = inet_ntoa(__in);
  return pcVar1;
}



void yi_p2p_on_get_realtime_state(void)

{
  yi_p2p_on_get_realtime_state();
  return;
}



void tnp::PPPP_Proto_Write_DevLgn
               (st_PPPP_DevLgn *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               sockaddr_in *param_6)

{
  PPPP_Proto_Write_DevLgn(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void PPPP_Share_Bandwidth(void)

{
  PPPP_Share_Bandwidth();
  return;
}



void tnp::PPPP_Proto_Send_Hello(int param_1,sockaddr_in *param_2)

{
  PPPP_Proto_Send_Hello(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Write_EasyTCPStart
               (st_PPPP_EasyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char param_5)

{
  PPPP_Proto_Write_EasyTCPStart(param_1,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__EnableSecureMode(void)

{
  PPPP__EnableSecureMode();
  return;
}



void error_at_line(void)

{
  error_at_line();
  return;
}



void tnp::IndexDistanse(ushort param_1,ushort param_2)

{
  IndexDistanse(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Read_R2PMPBody
               (st_PPPP_R2PMPBody *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,
               char *param_6)

{
  PPPP_Proto_Read_R2PMPBody(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void yi_p2p_on_speaker_start(void)

{
  yi_p2p_on_speaker_start();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



void tnp::PPPP_Proto_Send_Probe
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char param_5)

{
  PPPP_Proto_Send_Probe(param_1,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_detach(pthread_t __th)

{
  int iVar1;
  
  iVar1 = pthread_detach(__th);
  return iVar1;
}



void tnp::sll_Init(__the_SLL *param_1,uint param_2)

{
  sll_Init(param_1,param_2);
  return;
}



void PPPP__NoticeToCallback(ulonglong param_1,char *param_2,uint param_3)

{
  PPPP__NoticeToCallback(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = select(__nfds,__readfds,__writefds,__exceptfds,__timeout);
  return iVar1;
}



void yi_p2p_on_set_ldc(void)

{
  yi_p2p_on_set_ldc();
  return;
}



void yi_p2p_on_get_version(void)

{
  yi_p2p_on_get_version();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long atol(char *__nptr)

{
  long lVar1;
  
  lVar1 = atol(__nptr);
  return lVar1;
}



void yi_p2p_get_replay_speed(void)

{
  yi_p2p_get_replay_speed();
  return;
}



void tnp::setup_listen_port(ushort param_1)

{
  setup_listen_port(param_1);
  return;
}



void PPPP_Connect_Break_All(void)

{
  PPPP_Connect_Break_All();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = gmtime_r(__timer,__tp);
  return ptVar1;
}



void tnp::PPPP_Proto_Read_RlyPort_EX
               (st_PPPP_RlyPort_EX *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,
               char *param_6)

{
  PPPP_Proto_Read_RlyPort_EX(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



void yi_p2p_on_set_light_switch_mode(void)

{
  yi_p2p_on_set_light_switch_mode();
  return;
}



void PPPP_DoListen(char *param_1,uint param_2,ushort param_3,char param_4,char *param_5,
                  char *param_6)

{
  PPPP_DoListen(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void AesCbcEncrypt(void)

{
  AesCbcEncrypt();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Timer_Clear(void)

{
  PPPP__Timer_Clear();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__Timer_Init(void)

{
  PPPP__Timer_Init();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void tnp::PPPP_Proto_Send_RlyToAck
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               char param_6,uint param_7,char param_8)

{
  PPPP_Proto_Send_RlyToAck(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void PPPP_DoConnect(char *param_1,char param_2,ushort param_3,char *param_4,char *param_5,
                   char param_6)

{
  PPPP_DoConnect(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_trylock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__SessionHandler_Is_Full(void)

{
  PPPP__SessionHandler_Is_Full();
  return;
}



void PPPP_Get_APIVersion(void)

{
  PPPP_Get_APIVersion();
  return;
}



void tnp::PPPP_Proto_Read_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint *param_3,char *param_4)

{
  PPPP_Proto_Read_P2PRdy(param_1,param_2,param_3,param_4);
  return;
}



void tnp::PPPP__Resolve_SessionP2PServer(int param_1,char *param_2)

{
  PPPP__Resolve_SessionP2PServer(param_1,param_2);
  return;
}



void yi_p2p_get_frame_data_offset(void)

{
  yi_p2p_get_frame_data_offset();
  return;
}



void tnp::PPPP__Dump_SessionInfo(int param_1)

{
  PPPP__Dump_SessionInfo(param_1);
  return;
}



void tnp::PPPP_Proto_Send_RlyHello(int param_1,sockaddr_in *param_2)

{
  PPPP_Proto_Send_RlyHello(param_1,param_2);
  return;
}



void yi_p2p_on_set_alarm_ring(void)

{
  yi_p2p_on_set_alarm_ring();
  return;
}



void tnp::PPPP_Proto_Send_P2PRdy_EX
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               uint param_6,char *param_7)

{
  PPPP_Proto_Send_P2PRdy_EX(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void tnp::SendToAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4)

{
  SendToAddress(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void yi_p2p_on_set_ptz_reset_time(void)

{
  yi_p2p_on_set_ptz_reset_time();
  return;
}



void tnp::sll_element_Free(__the_SLL_Element *param_1)

{
  sll_element_Free(param_1);
  return;
}



void yi_p2p_on_set_human_motion(void)

{
  yi_p2p_on_set_human_motion();
  return;
}



void tnp::getCurSecond(long param_1,uint param_2)

{
  getCurSecond(param_1,param_2);
  return;
}



void tnp::CloseSocket(int param_1)

{
  CloseSocket(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
}



void PPPP__SetP2PTCPSocketInfo(int param_1,char *param_2,uint param_3,char *param_4)

{
  PPPP__SetP2PTCPSocketInfo(param_1,param_2,param_3,param_4);
  return;
}



void tnp::InitSocketEnv(void)

{
  InitSocketEnv();
  return;
}



void yi_p2p_on_format_sd(void)

{
  yi_p2p_on_format_sd();
  return;
}



void yi_p2p_on_set_motion_detect(void)

{
  yi_p2p_on_set_motion_detect();
  return;
}



void yi_p2p_on_alert_days(void)

{
  yi_p2p_on_alert_days();
  return;
}



void tnp::PPPP_Proto_Send_RlyTCPReq
               (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
               char *param_6,sockaddr_in *param_7,char *param_8)

{
  PPPP_Proto_Send_RlyTCPReq(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void PPPP_SendNoticeToAck(void)

{
  PPPP_SendNoticeToAck();
  return;
}



void PPPP_DeInitialize(void)

{
  PPPP_DeInitialize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PPPP__App_Init(void)

{
  PPPP__App_Init();
  return;
}



void PPPP_Set_NoticeToCallback(void)

{
  PPPP_Set_NoticeToCallback();
  return;
}



void tnp::htonAddr(sockaddr_in *param_1,sockaddr_in *param_2)

{
  htonAddr(param_1,param_2);
  return;
}



void tnp::PPPP_Proto_Write_Report
               (st_PPPP_Report *param_1,char *param_2,char param_3,char param_4,char param_5,
               short param_6,char *param_7)

{
  PPPP_Proto_Write_Report(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void PPPP__Send_SessionReport_SuperDevice
               (char param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  PPPP__Send_SessionReport_SuperDevice(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void tnp::PPPP_Proto_Write_RlyTCPToAck
               (st_PPPP_RlyTCPToAck *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               char param_6,char param_7)

{
  PPPP_Proto_Write_RlyTCPToAck(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void tnp::LanIfNum(void)

{
  LanIfNum();
  return;
}



undefined4 processEntry entry(undefined4 param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0005e054);
  iVar1 = 0;
  do {
    if ((&DAT_0006608c)[iVar1] == -1) {
      *(undefined4 *)(&DAT_0005e054 + (iVar1 + 0x200e) * 4) = param_1;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0005e054);
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0005e054);
  return 0xffffffff;
}



undefined4 FUN_0001ba48(void)

{
  int iVar1;
  undefined4 local_1c [2];
  
  iVar1 = DAT_0006608c;
  local_1c[0] = 1;
  FUN_0001e664(DAT_0006608c,0x2349,0,local_1c,4);
  sleep(3);
  FUN_0001e92c(iVar1);
  (&DAT_0005e06c)[iVar1 * 0x334] = 1;
  return 0;
}



void FUN_0001bac0(ushort *param_1)

{
  tm local_3c;
  
  error_at_line(0,0,"yi_p2p.c",0x839,"timeday:  %d-%d-%d, %d:%d:%d\r\n",
                *param_1 << 8 | *param_1 >> 8,(char)param_1[1],*(undefined1 *)((int)param_1 + 3),
                *(undefined1 *)((int)param_1 + 5),(char)param_1[3],*(undefined1 *)((int)param_1 + 7)
               );
  memset(&local_3c,0,0x2c);
  local_3c.tm_hour = (int)*(byte *)((int)param_1 + 5);
  local_3c.tm_mday = (int)*(byte *)((int)param_1 + 3);
  local_3c.tm_min = (int)(byte)param_1[3];
  local_3c.tm_sec = (int)*(byte *)((int)param_1 + 7);
  local_3c.tm_year = ((*param_1 & 0xff) << 8 | (uint)(*param_1 >> 8)) - 0x76c;
  local_3c.tm_mon = (byte)param_1[1] - 1;
  if (DAT_000660ed == '\0') {
    mktime(&local_3c);
  }
  else {
    FUN_0002111c();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001bc00)
// WARNING: Removing unreachable block (ram,0x0001bc0c)
// WARNING: Removing unreachable block (ram,0x0001bc10)

void FUN_0001bbd4(void)

{
  return;
}



void _FINI_0(void)

{
  if (__bss_start == '\0') {
    __cxa_finalize(DAT_0005dfc0);
    FUN_0001bbd4();
    __deregister_frame_info(&DWORD_00055688);
    __bss_start = 1;
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001bc58)
// WARNING: Removing unreachable block (ram,0x0001bc64)
// WARNING: Removing unreachable block (ram,0x0001bc68)

void _INIT_0(void)

{
  __register_frame_info(&DWORD_00055688,&DAT_0005e03c);
  if (DAT_0005d694 != 0) {
    _Jv_RegisterClasses();
  }
  return;
}



void FUN_0001be5c(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *unaff_r5;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint local_60 [16];
  
  uVar8 = param_2 + param_3[5];
  param_3[5] = uVar8;
  if (uVar8 < param_2) {
    unaff_r5 = param_3;
  }
  uVar9 = param_3[3];
  uVar2 = param_1 + (param_2 & 0xfffffffc);
  uVar10 = uVar9;
  if (uVar8 < param_2) {
    uVar10 = unaff_r5[6];
  }
  uVar1 = *param_3;
  uVar3 = param_3[1];
  uVar11 = param_3[4];
  uVar5 = param_3[2];
  if (uVar8 < param_2) {
    unaff_r5[6] = uVar10 + 1;
  }
  for (; param_1 < uVar2; param_1 = param_1 + 0x40) {
    iVar6 = 0;
    do {
      uVar8 = *(uint *)(param_1 + iVar6);
      *(uint *)((int)local_60 + iVar6) =
           (uVar8 ^ (uVar8 >> 0x10 | uVar8 << 0x10)) >> 8 & 0xffff00ff ^
           (uVar8 >> 8 | uVar8 << 0x18);
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0x40);
    uVar8 = uVar3 >> 2 | uVar3 << 0x1e;
    uVar10 = uVar1 >> 2 | uVar1 << 0x1e;
    uVar12 = local_60[0] + 0x5a827999 + uVar11 + (uVar1 >> 0x1b | uVar1 << 5) +
             ((uVar9 ^ uVar5) & uVar3 ^ uVar9);
    uVar21 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar27 = local_60[1] + 0x5a827999 + uVar9 + ((uVar8 ^ uVar5) & uVar1 ^ uVar5) +
             (uVar12 >> 0x1b | uVar12 * 0x20);
    uVar23 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar15 = local_60[2] + 0x5a827999 + uVar5 + (uVar12 & (uVar10 ^ uVar8) ^ uVar8) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[3] + 0x5a827999 + uVar8 + ((uVar21 ^ uVar10) & uVar27 ^ uVar10) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar8 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar15 = local_60[4] + 0x5a827999 + uVar10 + ((uVar23 ^ uVar21) & uVar15 ^ uVar21) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar10 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[5] + 0x5a827999 + uVar21 + ((uVar12 ^ uVar23) & uVar27 ^ uVar23) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar21 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar15 = local_60[6] + 0x5a827999 + uVar23 + ((uVar8 ^ uVar12) & uVar15 ^ uVar12) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar23 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[7] + 0x5a827999 + uVar12 + ((uVar10 ^ uVar8) & uVar27 ^ uVar8) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar15 = local_60[8] + 0x5a827999 + uVar8 + ((uVar21 ^ uVar10) & uVar15 ^ uVar10) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar8 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[9] + 0x5a827999 + uVar10 + ((uVar23 ^ uVar21) & uVar27 ^ uVar21) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar15 = local_60[10] + 0x5a827999 + uVar21 + ((uVar12 ^ uVar23) & uVar15 ^ uVar23) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar10 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar21 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[0xb] + 0x5a827999 + uVar23 + ((uVar8 ^ uVar12) & uVar27 ^ uVar12) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar19 = local_60[0xc] + 0x5a827999 + uVar12 + ((uVar10 ^ uVar8) & uVar15 ^ uVar8) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar23 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar12 = local_60[2] ^ local_60[0] ^ local_60[8] ^ local_60[0xd];
    uVar12 = uVar12 >> 0x1f | uVar12 << 1;
    uVar15 = local_60[0xd] + 0x5a827999 + uVar8 + ((uVar21 ^ uVar10) & uVar27 ^ uVar10) +
             (uVar19 >> 0x1b | uVar19 * 0x20);
    uVar8 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar27 = local_60[3] ^ local_60[1] ^ local_60[9] ^ local_60[0xe];
    uVar19 = local_60[0xe] + 0x5a827999 + uVar10 + ((uVar23 ^ uVar21) & uVar19 ^ uVar21) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar10 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar24 = local_60[4] ^ local_60[2] ^ local_60[10] ^ local_60[0xf];
    uVar7 = local_60[0xf] + 0x5a827999 + uVar21 + ((uVar8 ^ uVar23) & uVar15 ^ uVar23) +
            (uVar19 >> 0x1b | uVar19 * 0x20);
    uVar21 = uVar24 >> 0x1f | uVar24 << 1;
    uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar27 = uVar27 >> 0x1f | uVar27 << 1;
    uVar24 = local_60[5] ^ local_60[3] ^ local_60[0xb] ^ uVar12;
    uVar16 = uVar12 + 0x5a827999 + uVar23 + ((uVar10 ^ uVar8) & uVar19 ^ uVar8) +
             (uVar7 >> 0x1b | uVar7 * 0x20);
    uVar23 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar19 = uVar24 >> 0x1f | uVar24 << 1;
    uVar24 = local_60[6] ^ local_60[4] ^ local_60[0xc] ^ uVar27;
    uVar24 = uVar24 >> 0x1f | uVar24 << 1;
    uVar28 = uVar27 + 0x5a827999 + uVar8 + ((uVar15 ^ uVar10) & uVar7 ^ uVar10) +
             (uVar16 >> 0x1b | uVar16 * 0x20);
    uVar8 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar7 = local_60[7] ^ local_60[5] ^ local_60[0xd] ^ uVar21;
    uVar7 = uVar7 >> 0x1f | uVar7 << 1;
    uVar20 = uVar21 + 0x5a827999 + uVar10 + ((uVar23 ^ uVar15) & uVar16 ^ uVar15) +
             (uVar28 >> 0x1b | uVar28 * 0x20);
    uVar10 = uVar28 >> 2 | uVar28 * 0x40000000;
    uVar13 = uVar19 + 0x5a827999 + uVar15 + ((uVar8 ^ uVar23) & uVar28 ^ uVar23) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar16 = local_60[8] ^ local_60[6] ^ local_60[0xe] ^ uVar19;
    uVar16 = uVar16 >> 0x1f | uVar16 << 1;
    uVar28 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar14 = uVar24 + 0x6ed9eba1 + uVar23 + (uVar10 ^ uVar8 ^ uVar20) +
             (uVar13 >> 0x1b | uVar13 * 0x20);
    uVar23 = local_60[9] ^ local_60[7] ^ local_60[0xf] ^ uVar24;
    uVar20 = local_60[10] ^ local_60[8] ^ uVar12 ^ uVar7;
    uVar23 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar20 >> 0x1f | uVar20 << 1;
    uVar17 = uVar7 + 0x6ed9eba1 + uVar8 + (uVar15 ^ uVar10 ^ uVar13) +
             (uVar14 >> 0x1b | uVar14 * 0x20);
    uVar8 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar29 = uVar16 + 0x6ed9eba1 + uVar10 + (uVar28 ^ uVar15 ^ uVar14) +
             (uVar17 >> 0x1b | uVar17 * 0x20);
    uVar10 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar13 = local_60[0xb] ^ local_60[9] ^ uVar27 ^ uVar16;
    uVar13 = uVar13 >> 0x1f | uVar13 << 1;
    uVar14 = uVar29 >> 2 | uVar29 * 0x40000000;
    uVar18 = uVar23 + 0x6ed9eba1 + uVar15 + (uVar8 ^ uVar28 ^ uVar17) +
             (uVar29 >> 0x1b | uVar29 * 0x20);
    uVar17 = local_60[0xc] ^ local_60[10] ^ uVar21 ^ uVar23;
    uVar15 = local_60[0xd] ^ local_60[0xb] ^ uVar19 ^ uVar20;
    uVar25 = local_60[0xe] ^ local_60[0xc] ^ uVar24 ^ uVar13;
    uVar29 = uVar20 + 0x6ed9eba1 + uVar28 + (uVar10 ^ uVar8 ^ uVar29) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar15 = uVar15 >> 0x1f | uVar15 << 1;
    uVar28 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar17 = uVar17 >> 0x1f | uVar17 << 1;
    uVar30 = uVar13 + 0x6ed9eba1 + uVar8 + (uVar14 ^ uVar10 ^ uVar18) +
             (uVar29 >> 0x1b | uVar29 * 0x20);
    uVar8 = uVar29 >> 2 | uVar29 * 0x40000000;
    uVar18 = uVar25 >> 0x1f | uVar25 << 1;
    uVar25 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar4 = uVar17 + 0x6ed9eba1 + uVar10 + (uVar28 ^ uVar14 ^ uVar29) +
            (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar10 = local_60[0xf] ^ local_60[0xd] ^ uVar7 ^ uVar17;
    uVar29 = uVar12 ^ local_60[0xe] ^ uVar16 ^ uVar15;
    uVar10 = uVar10 >> 0x1f | uVar10 << 1;
    uVar29 = uVar29 >> 0x1f | uVar29 << 1;
    uVar22 = uVar27 ^ local_60[0xf] ^ uVar23 ^ uVar18;
    uVar30 = uVar15 + 0x6ed9eba1 + uVar14 + (uVar8 ^ uVar28 ^ uVar30) +
             (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar14 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar31 = uVar18 + 0x6ed9eba1 + uVar28 + (uVar25 ^ uVar8 ^ uVar4) +
             (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar28 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar4 = uVar22 >> 0x1f | uVar22 << 1;
    uVar30 = uVar10 + 0x6ed9eba1 + uVar8 + (uVar14 ^ uVar25 ^ uVar30) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar12 = uVar21 ^ uVar12 ^ uVar20 ^ uVar10;
    uVar8 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar12 = uVar12 >> 0x1f | uVar12 << 1;
    uVar27 = uVar19 ^ uVar27 ^ uVar13 ^ uVar29;
    uVar27 = uVar27 >> 0x1f | uVar27 << 1;
    uVar22 = uVar29 + 0x6ed9eba1 + uVar25 + (uVar28 ^ uVar14 ^ uVar31) +
             (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar25 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar31 = uVar4 + 0x6ed9eba1 + uVar14 + (uVar8 ^ uVar28 ^ uVar30) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar14 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar21 = uVar24 ^ uVar21 ^ uVar17 ^ uVar4;
    uVar21 = uVar21 >> 0x1f | uVar21 << 1;
    uVar30 = uVar7 ^ uVar19 ^ uVar15 ^ uVar12;
    uVar26 = uVar16 ^ uVar24 ^ uVar18 ^ uVar27;
    uVar19 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar24 = uVar30 >> 0x1f | uVar30 << 1;
    uVar30 = uVar26 >> 0x1f | uVar26 << 1;
    uVar28 = uVar12 + 0x6ed9eba1 + uVar28 + (uVar25 ^ uVar8 ^ uVar22) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar22 = uVar27 + 0x6ed9eba1 + uVar8 + (uVar14 ^ uVar25 ^ uVar31) +
             (uVar28 >> 0x1b | uVar28 * 0x20);
    uVar8 = uVar28 >> 2 | uVar28 * 0x40000000;
    uVar25 = uVar21 + 0x6ed9eba1 + uVar25 + (uVar19 ^ uVar14 ^ uVar28) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar28 = uVar23 ^ uVar7 ^ uVar10 ^ uVar21;
    uVar7 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar28 = uVar28 >> 0x1f | uVar28 << 1;
    uVar22 = uVar24 + 0x6ed9eba1 + uVar14 + (uVar8 ^ uVar19 ^ uVar22) +
             (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar14 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar23 = uVar13 ^ uVar23 ^ uVar4 ^ uVar30;
    uVar23 = uVar23 >> 0x1f | uVar23 << 1;
    uVar16 = uVar20 ^ uVar16 ^ uVar29 ^ uVar24;
    uVar16 = uVar16 >> 0x1f | uVar16 << 1;
    uVar25 = uVar30 + 0x6ed9eba1 + uVar19 + (uVar7 ^ uVar8 ^ uVar25) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar19 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar28 + 0x6ed9eba1 + uVar8 + (uVar14 ^ uVar7 ^ uVar22) +
             (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar20 = uVar17 ^ uVar20 ^ uVar12 ^ uVar28;
    uVar20 = uVar20 >> 0x1f | uVar20 << 1;
    uVar13 = uVar15 ^ uVar13 ^ uVar27 ^ uVar16;
    uVar25 = uVar16 + 0x6ed9eba1 + uVar7 + (uVar19 ^ uVar14 ^ uVar25) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar7 = uVar13 >> 0x1f | uVar13 << 1;
    uVar13 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar23 + 0x6ed9eba1 + uVar14 + (uVar8 ^ uVar19 ^ uVar22) +
             (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar14 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar17 = uVar18 ^ uVar17 ^ uVar21 ^ uVar23;
    uVar17 = uVar17 >> 0x1f | uVar17 << 1;
    uVar15 = uVar10 ^ uVar15 ^ uVar24 ^ uVar20;
    uVar15 = uVar15 >> 0x1f | uVar15 << 1;
    uVar31 = uVar20 + 0x8f1bbcdc + uVar19 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar25 | uVar13) & uVar8 | uVar25 & uVar13);
    uVar19 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar25 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar22 = uVar7 + 0x8f1bbcdc + uVar8 + ((uVar22 | uVar14) & uVar13 | uVar22 & uVar14) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar31 = uVar17 + 0x8f1bbcdc + uVar13 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar31 | uVar19) & uVar14 | uVar31 & uVar19);
    uVar8 = uVar29 ^ uVar18 ^ uVar30 ^ uVar7;
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    uVar10 = uVar4 ^ uVar10 ^ uVar28 ^ uVar17;
    uVar10 = uVar10 >> 0x1f | uVar10 << 1;
    uVar13 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar26 = uVar15 + 0x8f1bbcdc + uVar14 + ((uVar22 | uVar25) & uVar19 | uVar22 & uVar25) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar14 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar18 = uVar12 ^ uVar29 ^ uVar16 ^ uVar15;
    uVar29 = uVar27 ^ uVar4 ^ uVar23 ^ uVar8;
    uVar18 = uVar18 >> 0x1f | uVar18 << 1;
    uVar29 = uVar29 >> 0x1f | uVar29 << 1;
    uVar4 = uVar8 + 0x8f1bbcdc + uVar19 + (uVar26 >> 0x1b | uVar26 * 0x20) +
            ((uVar31 | uVar14) & uVar25 | uVar31 & uVar14);
    uVar19 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar22 = uVar10 + 0x8f1bbcdc + uVar25 + ((uVar26 | uVar13) & uVar14 | uVar26 & uVar13) +
             (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar25 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar12 = uVar21 ^ uVar12 ^ uVar20 ^ uVar10;
    uVar4 = uVar18 + 0x8f1bbcdc + uVar14 + (uVar22 >> 0x1b | uVar22 * 0x20) +
            ((uVar4 | uVar19) & uVar13 | uVar4 & uVar19);
    uVar12 = uVar12 >> 0x1f | uVar12 << 1;
    uVar27 = uVar24 ^ uVar27 ^ uVar7 ^ uVar18;
    uVar27 = uVar27 >> 0x1f | uVar27 << 1;
    uVar14 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar29 + 0x8f1bbcdc + uVar13 + ((uVar22 | uVar25) & uVar19 | uVar22 & uVar25) +
             (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar13 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar21 = uVar30 ^ uVar21 ^ uVar17 ^ uVar29;
    uVar21 = uVar21 >> 0x1f | uVar21 << 1;
    uVar31 = uVar12 + 0x8f1bbcdc + uVar19 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar4 | uVar14) & uVar25 | uVar4 & uVar14);
    uVar19 = uVar28 ^ uVar24 ^ uVar15 ^ uVar12;
    uVar19 = uVar19 >> 0x1f | uVar19 << 1;
    uVar24 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar27 + 0x8f1bbcdc + uVar25 + ((uVar22 | uVar13) & uVar14 | uVar22 & uVar13) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar25 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar4 = uVar16 ^ uVar30 ^ uVar8 ^ uVar27;
    uVar4 = uVar4 >> 0x1f | uVar4 << 1;
    uVar31 = uVar21 + 0x8f1bbcdc + uVar14 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar31 | uVar24) & uVar13 | uVar31 & uVar24);
    uVar14 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar26 = uVar23 ^ uVar28 ^ uVar10 ^ uVar21;
    uVar28 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar30 = uVar19 + 0x8f1bbcdc + uVar13 + ((uVar22 | uVar25) & uVar24 | uVar22 & uVar25) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar13 = uVar26 >> 0x1f | uVar26 << 1;
    uVar16 = uVar20 ^ uVar16 ^ uVar18 ^ uVar19;
    uVar16 = uVar16 >> 0x1f | uVar16 << 1;
    uVar22 = uVar4 + 0x8f1bbcdc + uVar24 + (uVar30 >> 0x1b | uVar30 * 0x20) +
             ((uVar31 | uVar14) & uVar25 | uVar31 & uVar14);
    uVar23 = uVar7 ^ uVar23 ^ uVar29 ^ uVar4;
    uVar23 = uVar23 >> 0x1f | uVar23 << 1;
    uVar24 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar31 = uVar13 + 0x8f1bbcdc + uVar25 + ((uVar30 | uVar28) & uVar14 | uVar30 & uVar28) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar25 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar20 = uVar17 ^ uVar20 ^ uVar12 ^ uVar13;
    uVar30 = uVar15 ^ uVar7 ^ uVar27 ^ uVar16;
    uVar7 = uVar20 >> 0x1f | uVar20 << 1;
    uVar20 = uVar30 >> 0x1f | uVar30 << 1;
    uVar30 = uVar16 + 0x8f1bbcdc + uVar14 + (uVar31 >> 0x1b | uVar31 * 0x20) +
             ((uVar22 | uVar24) & uVar28 | uVar22 & uVar24);
    uVar14 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar22 = uVar23 + 0x8f1bbcdc + uVar28 + ((uVar31 | uVar25) & uVar24 | uVar31 & uVar25) +
             (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar28 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar17 = uVar8 ^ uVar17 ^ uVar21 ^ uVar23;
    uVar15 = uVar10 ^ uVar15 ^ uVar19 ^ uVar7;
    uVar15 = uVar15 >> 0x1f | uVar15 << 1;
    uVar17 = uVar17 >> 0x1f | uVar17 << 1;
    uVar30 = uVar7 + 0x8f1bbcdc + uVar24 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar30 | uVar14) & uVar25 | uVar30 & uVar14);
    uVar24 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar20 + 0x8f1bbcdc + uVar25 + ((uVar22 | uVar28) & uVar14 | uVar22 & uVar28) +
             (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar8 = uVar18 ^ uVar8 ^ uVar4 ^ uVar20;
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    uVar25 = uVar29 ^ uVar10 ^ uVar13 ^ uVar17;
    uVar10 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar25 = uVar25 >> 0x1f | uVar25 << 1;
    uVar31 = uVar17 + 0x8f1bbcdc + uVar14 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar30 | uVar24) & uVar28 | uVar30 & uVar24);
    uVar14 = uVar12 ^ uVar18 ^ uVar16 ^ uVar15;
    uVar14 = uVar14 >> 0x1f | uVar14 << 1;
    uVar18 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar15 + 0x8f1bbcdc + uVar28 + ((uVar22 | uVar10) & uVar24 | uVar22 & uVar10) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar28 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar30 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar31 = uVar8 + 0xca62c1d6 + uVar24 + (uVar18 ^ uVar10 ^ uVar31) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar24 = uVar27 ^ uVar29 ^ uVar23 ^ uVar8;
    uVar24 = uVar24 >> 0x1f | uVar24 << 1;
    uVar12 = uVar21 ^ uVar12 ^ uVar7 ^ uVar25;
    local_60[0] = uVar12 >> 0x1f | uVar12 << 1;
    uVar12 = uVar19 ^ uVar27 ^ uVar20 ^ uVar14;
    local_60[1] = uVar12 >> 0x1f | uVar12 << 1;
    uVar27 = uVar25 + 0xca62c1d6 + uVar10 + (uVar28 ^ uVar18 ^ uVar22) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar10 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar18 = uVar14 + 0xca62c1d6 + uVar18 + (uVar30 ^ uVar28 ^ uVar31) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar29 = uVar4 ^ uVar21 ^ uVar17 ^ uVar24;
    uVar21 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar28 = uVar24 + 0xca62c1d6 + uVar28 + (uVar10 ^ uVar30 ^ uVar27) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    local_60[2] = uVar29 >> 0x1f | uVar29 << 1;
    uVar27 = uVar13 ^ uVar19 ^ uVar15 ^ local_60[0];
    local_60[3] = uVar27 >> 0x1f | uVar27 << 1;
    uVar27 = uVar16 ^ uVar4 ^ uVar8 ^ local_60[1];
    local_60[4] = uVar27 >> 0x1f | uVar27 << 1;
    uVar18 = local_60[0] + 0xca62c1d6 + uVar30 + (uVar12 ^ uVar10 ^ uVar18) +
             (uVar28 >> 0x1b | uVar28 * 0x20);
    uVar27 = uVar28 >> 2 | uVar28 * 0x40000000;
    uVar28 = local_60[1] + 0xca62c1d6 + uVar10 + (uVar21 ^ uVar12 ^ uVar28) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar10 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar13 = uVar23 ^ uVar13 ^ uVar25 ^ local_60[2];
    uVar19 = uVar28 >> 2 | uVar28 * 0x40000000;
    uVar12 = local_60[2] + 0xca62c1d6 + uVar12 + (uVar27 ^ uVar21 ^ uVar18) +
             (uVar28 >> 0x1b | uVar28 * 0x20);
    uVar16 = uVar7 ^ uVar16 ^ uVar14 ^ local_60[3];
    local_60[5] = uVar13 >> 0x1f | uVar13 << 1;
    local_60[6] = uVar16 >> 0x1f | uVar16 << 1;
    uVar16 = local_60[3] + 0xca62c1d6 + uVar21 + (uVar10 ^ uVar27 ^ uVar28) +
             (uVar12 >> 0x1b | uVar12 * 0x20);
    uVar23 = uVar20 ^ uVar23 ^ uVar24 ^ local_60[4];
    uVar21 = uVar12 >> 2 | uVar12 * 0x40000000;
    local_60[7] = uVar23 >> 0x1f | uVar23 << 1;
    uVar27 = local_60[4] + 0xca62c1d6 + uVar27 + (uVar19 ^ uVar10 ^ uVar12) +
             (uVar16 >> 0x1b | uVar16 * 0x20);
    uVar23 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar12 = uVar17 ^ uVar7 ^ local_60[0] ^ local_60[5];
    local_60[8] = uVar12 >> 0x1f | uVar12 << 1;
    uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar16 = local_60[5] + 0xca62c1d6 + uVar10 + (uVar21 ^ uVar19 ^ uVar16) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar10 = uVar15 ^ uVar20 ^ local_60[1] ^ local_60[6];
    local_60[9] = uVar10 >> 0x1f | uVar10 << 1;
    uVar7 = uVar8 ^ uVar17 ^ local_60[2] ^ local_60[7];
    uVar27 = local_60[6] + 0xca62c1d6 + uVar19 + (uVar23 ^ uVar21 ^ uVar27) +
             (uVar16 >> 0x1b | uVar16 * 0x20);
    uVar10 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar16 = local_60[7] + 0xca62c1d6 + uVar21 + (uVar12 ^ uVar23 ^ uVar16) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar21 = uVar27 >> 2 | uVar27 * 0x40000000;
    local_60[10] = uVar7 >> 0x1f | uVar7 << 1;
    uVar27 = local_60[8] + 0xca62c1d6 + uVar23 + (uVar10 ^ uVar12 ^ uVar27) +
             (uVar16 >> 0x1b | uVar16 * 0x20);
    uVar15 = uVar25 ^ uVar15 ^ local_60[3] ^ local_60[8];
    uVar23 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar19 = uVar14 ^ uVar8 ^ local_60[4] ^ local_60[9];
    uVar8 = uVar24 ^ uVar25 ^ local_60[5] ^ local_60[10];
    local_60[0xb] = uVar15 >> 0x1f | uVar15 << 1;
    local_60[0xd] = uVar8 >> 0x1f | uVar8 << 1;
    uVar15 = local_60[9] + 0xca62c1d6 + uVar12 + (uVar21 ^ uVar10 ^ uVar16) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar8 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
    local_60[0xc] = uVar19 >> 0x1f | uVar19 << 1;
    uVar27 = local_60[10] + 0xca62c1d6 + uVar10 + (uVar23 ^ uVar21 ^ uVar27) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar15 = local_60[0xb] + 0xca62c1d6 + uVar21 + (uVar8 ^ uVar23 ^ uVar15) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar10 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar19 = local_60[0] ^ uVar14 ^ local_60[6] ^ local_60[0xb];
    uVar21 = local_60[1] ^ uVar24 ^ local_60[7] ^ local_60[0xc];
    local_60[0xf] = uVar21 >> 0x1f | uVar21 << 1;
    local_60[0xe] = uVar19 >> 0x1f | uVar19 << 1;
    uVar27 = local_60[0xc] + 0xca62c1d6 + uVar23 + (uVar12 ^ uVar8 ^ uVar27) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar21 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar23 = local_60[0xd] + 0xca62c1d6 + uVar8 + (uVar10 ^ uVar12 ^ uVar15) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar8 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar12 = local_60[0xe] + 0xca62c1d6 + uVar12 + (uVar21 ^ uVar10 ^ uVar27) +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar5 = uVar5 + (uVar23 >> 2 | uVar23 * 0x40000000);
    uVar11 = uVar11 + uVar21;
    uVar3 = uVar3 + uVar12;
    uVar9 = uVar9 + uVar8;
    uVar1 = uVar1 + local_60[0xf] + 0xca62c1d6 + uVar10 + (uVar8 ^ uVar21 ^ uVar23) +
            (uVar12 >> 0x1b | uVar12 * 0x20);
    *param_3 = uVar1;
    param_3[1] = uVar3;
    param_3[2] = uVar5;
    param_3[3] = uVar9;
    param_3[4] = uVar11;
  }
  return;
}



uint * FUN_0001d4c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = param_1[7];
  uVar7 = param_1[6];
  uVar1 = uVar3 + param_1[5];
  if (uVar3 < 0x38) {
    uVar5 = 0x40;
    iVar4 = 0xf;
    iVar2 = 0x38;
    iVar6 = 0xe;
  }
  else {
    uVar5 = 0x80;
    iVar4 = 0x1f;
    iVar2 = 0x78;
    iVar6 = 0x1e;
  }
  if (uVar1 < uVar3) {
    uVar7 = uVar7 + 1;
  }
  if (uVar1 < uVar3) {
    param_1[6] = uVar7;
  }
  uVar8 = uVar1 >> 0x1d | uVar7 << 3;
  param_1[5] = uVar1;
  param_1[iVar6 + 8] =
       (uVar8 ^ ((uVar7 & 0x1fffffff) >> 0xd | uVar8 << 0x10)) >> 8 & 0xffff00ff ^
       ((uVar7 & 0x1fffffff) >> 5 | uVar8 << 0x18);
  param_1[iVar4 + 8] =
       uVar1 * 0x8000000 | (uVar1 & 0x1fffffff) >> 0x15 | (uVar1 * 8 & 0xff00) << 8 |
       (uVar1 & 0x1fffffff) >> 5 & 0xff00;
  memcpy((void *)((int)(param_1 + 8) + uVar3),&DAT_0004906c,iVar2 - uVar3);
  FUN_0001be5c(param_1 + 8,uVar5,param_1);
  uVar1 = *param_1;
  *param_2 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  uVar1 = param_1[1];
  param_2[1] = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
               (uVar1 >> 8 | uVar1 << 0x18);
  uVar1 = param_1[2];
  param_2[2] = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
               (uVar1 >> 8 | uVar1 << 0x18);
  uVar1 = param_1[3];
  param_2[3] = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
               (uVar1 >> 8 | uVar1 << 0x18);
  uVar1 = param_1[4];
  param_2[4] = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
               (uVar1 >> 8 | uVar1 << 0x18);
  return param_2;
}



void FUN_0001d594(void *param_1,uint param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  
  iVar3 = *(int *)(param_3 + 0x1c);
  if (iVar3 != 0) {
    uVar4 = 0x80U - iVar3;
    if (param_2 < 0x80U - iVar3) {
      uVar4 = param_2;
    }
    pvVar5 = (void *)(param_3 + 0x20);
    memcpy((void *)((int)pvVar5 + iVar3),param_1,uVar4);
    uVar2 = uVar4 + *(int *)(param_3 + 0x1c);
    *(uint *)(param_3 + 0x1c) = uVar2;
    if (0x40 < uVar2) {
      FUN_0001be5c(pvVar5,uVar2 & 0xffffffc0,param_3);
      uVar2 = *(uint *)(param_3 + 0x1c) & 0x3f;
      *(uint *)(param_3 + 0x1c) = uVar2;
      memcpy(pvVar5,(void *)((int)pvVar5 + (uVar4 + iVar3 & 0xffffffc0)),uVar2);
    }
    param_1 = (void *)((int)param_1 + uVar4);
    param_2 = param_2 - uVar4;
  }
  if (0x3f < param_2) {
    if (((uint)param_1 & 3) != 0) {
      pvVar5 = param_1;
      uVar4 = param_2;
      if (param_2 != 0x40) {
        do {
          pvVar1 = memcpy((void *)(param_3 + 0x20),pvVar5,0x40);
          uVar4 = uVar4 - 0x40;
          FUN_0001be5c(pvVar1,0x40,param_3);
          pvVar5 = (void *)((int)pvVar5 + 0x40);
        } while (0x40 < uVar4);
        uVar4 = param_2 - 0x41 >> 6;
        param_2 = (param_2 - 0x40) + uVar4 * -0x40;
        param_1 = (void *)((int)param_1 + (uVar4 + 1) * 0x40);
      }
      goto LAB_0001d618;
    }
    uVar4 = param_2 & 0xffffffc0;
    FUN_0001be5c(param_1,uVar4,param_3);
    param_2 = param_2 & 0x3f;
    param_1 = (void *)((int)param_1 + uVar4);
  }
  if (param_2 == 0) {
    return;
  }
LAB_0001d618:
  pvVar5 = (void *)(param_3 + 0x20);
  uVar4 = param_2 + *(int *)(param_3 + 0x1c);
  memcpy((void *)((int)pvVar5 + *(int *)(param_3 + 0x1c)),param_1,param_2);
  if (0x3f < uVar4) {
    FUN_0001be5c(pvVar5,0x40,param_3);
    memcpy(pvVar5,(void *)(param_3 + 0x60),uVar4 - 0x40);
    *(uint *)(param_3 + 0x1c) = uVar4 - 0x40;
    return;
  }
  *(uint *)(param_3 + 0x1c) = uVar4;
  return;
}



void FUN_0001d70c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  
  local_ac = 0x10325476;
  local_a8 = 0xc3d2e1f0;
  local_a0 = 0;
  local_a4 = 0;
  local_9c = 0;
  local_b8 = 0x67452301;
  local_b4 = 0xefcdab89;
  local_b0 = 0x98badcfe;
  FUN_0001d594(param_1,param_2,&local_b8);
  FUN_0001d4c0(&local_b8,param_3);
  return;
}



undefined4 FUN_0001d780(FILE *param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_1110;
  undefined4 uStack_110c;
  undefined4 uStack_1108;
  undefined4 local_1104;
  undefined4 local_1100;
  undefined4 local_10fc;
  undefined4 local_10f8;
  undefined4 local_10f4;
  undefined1 auStack_1070 [4172];
  
  iVar3 = 0;
  uStack_1110 = 0x67452301;
  uStack_110c = 0xefcdab89;
  uStack_1108 = 0x98badcfe;
  local_1104 = 0x10325476;
  local_1100 = 0xc3d2e1f0;
  local_10f8 = 0;
  local_10fc = 0;
  local_10f4 = 0;
  while( true ) {
    while( true ) {
      sVar1 = fread(auStack_1070 + iVar3,1,0x1000 - iVar3,param_1);
      iVar3 = iVar3 + sVar1;
      if (iVar3 != 0x1000) break;
      FUN_0001be5c(auStack_1070,0x1000,&uStack_1110);
      iVar3 = 0;
    }
    if (sVar1 == 0) break;
    iVar2 = feof(param_1);
    if (iVar2 != 0) {
LAB_0001d818:
      if (iVar3 != 0) {
        FUN_0001d594(auStack_1070,iVar3,&uStack_1110);
      }
      FUN_0001d4c0(&uStack_1110,param_2);
      return 0;
    }
  }
  iVar2 = ferror(param_1);
  if (iVar2 != 0) {
    return 1;
  }
  goto LAB_0001d818;
}



undefined4
FUN_0001d8d0(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar4;
  byte *pbVar5;
  byte abStack_1d0 [20];
  undefined1 auStack_1bc [19];
  byte bStack_1a9;
  byte local_1a8 [64];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  byte *pbVar3;
  
  if (param_2 < 0x41) {
    local_158 = 0xc3d2e1f0;
    local_168 = 0x67452301;
    local_164 = 0xefcdab89;
    local_160 = 0x98badcfe;
    local_15c = 0x10325476;
    local_150 = 0;
    local_154 = 0;
    local_14c = 0;
    memset(local_1a8,0x36,0x40);
    if (param_2 == 0) {
      FUN_0001be5c(local_1a8,0x40,&local_168);
      FUN_0001d594(param_3,param_4,&local_168);
      FUN_0001d4c0(&local_168,auStack_1bc);
      local_b8 = 0xc3d2e1f0;
      local_c8 = 0x67452301;
      local_c4 = 0xefcdab89;
      local_c0 = 0x98badcfe;
      local_bc = 0x10325476;
      local_b4 = param_2;
      local_b0 = param_2;
      local_ac = param_2;
      memset(local_1a8,0x5c,0x40);
      goto LAB_0001da08;
    }
  }
  else {
    local_c8 = 0x67452301;
    local_c4 = 0xefcdab89;
    local_c0 = 0x98badcfe;
    local_bc = 0x10325476;
    local_b8 = 0xc3d2e1f0;
    local_b0 = 0;
    local_b4 = 0;
    local_ac = 0;
    FUN_0001d594(param_1,param_2,&local_c8);
    FUN_0001d4c0(&local_c8,abStack_1d0);
    local_160 = 0x98badcfe;
    local_168 = 0x67452301;
    local_164 = 0xefcdab89;
    local_15c = 0x10325476;
    local_158 = 0xc3d2e1f0;
    local_150 = 0;
    local_154 = 0;
    local_14c = 0;
    memset(local_1a8,0x36,0x40);
    param_2 = 0x14;
    param_1 = abStack_1d0;
  }
  pbVar4 = &bStack_1a9;
  pbVar1 = pbVar4;
  pbVar3 = param_1;
  do {
    pbVar2 = pbVar3 + 1;
    pbVar5 = pbVar1 + 1;
    pbVar1 = pbVar1 + 1;
    *pbVar1 = *pbVar5 ^ *pbVar3;
    pbVar3 = pbVar2;
  } while (pbVar2 != param_1 + param_2);
  FUN_0001be5c(local_1a8,0x40,&local_168);
  FUN_0001d594(param_3,param_4,&local_168);
  FUN_0001d4c0(&local_168,auStack_1bc);
  local_c8 = 0x67452301;
  local_c4 = 0xefcdab89;
  local_c0 = 0x98badcfe;
  local_bc = 0x10325476;
  local_b8 = 0xc3d2e1f0;
  local_b0 = 0;
  local_b4 = 0;
  local_ac = 0;
  memset(local_1a8,0x5c,0x40);
  pbVar1 = param_1;
  do {
    pbVar5 = pbVar1 + 1;
    pbVar3 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    *pbVar4 = *pbVar3 ^ *pbVar1;
    pbVar1 = pbVar5;
  } while (pbVar5 != param_1 + param_2);
LAB_0001da08:
  FUN_0001be5c(local_1a8,0x40,&local_c8);
  FUN_0001d594(auStack_1bc,0x14,&local_c8);
  FUN_0001d4c0(&local_c8,param_5);
  return 0;
}



longlong FUN_0001db70(void)

{
  longlong lVar1;
  int iVar2;
  timespec local_10;
  
  iVar2 = clock_gettime(4,&local_10);
  if (iVar2 == 0) {
    lVar1 = (longlong)local_10.tv_sec * 1000 + (longlong)(local_10.tv_nsec / 1000000);
  }
  else {
    lVar1 = -1;
  }
  return lVar1;
}



char * FUN_0001dbc8(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = param_2;
  if (param_3 == 0) goto LAB_0001dc1c;
  pcVar2 = param_1;
  while (pcVar2 != param_1 + param_3 + -1) {
    pcVar3 = pcVar4 + 1;
    cVar1 = *pcVar4;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar3;
    if (cVar1 == '\0') goto LAB_0001dc0c;
  }
  *pcVar2 = '\0';
  cVar1 = *pcVar4;
  while (pcVar3 = pcVar4 + 1, pcVar4 = pcVar3, cVar1 != '\0') {
LAB_0001dc1c:
    cVar1 = *pcVar4;
  }
LAB_0001dc0c:
  return pcVar3 + (-1 - (int)param_2);
}



char * FUN_0001dc2c(byte *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 < 1) {
    iVar8 = 0;
  }
  else {
    *param_2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*param_1 >> 2];
    uVar5 = (*param_1 & 3) << 4;
    if (param_3 == 1) {
      iVar8 = 4;
      iVar2 = 3;
      iVar1 = 2;
      iVar4 = 1;
    }
    else {
      iVar4 = 1;
      pcVar3 = param_2;
      iVar2 = 0;
      iVar8 = 0;
      do {
        iVar7 = iVar8;
        iVar1 = iVar2 + 3;
        param_2[iVar4] =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
             [uVar5 | param_1[iVar2 + 1] >> 4];
        iVar6 = iVar2 + 4;
        uVar5 = (param_1[iVar2 + 1] & 0xf) * 4;
        if (param_3 <= iVar2 + 2) {
          iVar8 = iVar7 + 4;
          param_2[iVar7 + 2] =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar5];
          param_2[iVar7 + 3] = '=';
          goto LAB_0001dd20;
        }
        iVar8 = iVar7 + 4;
        pcVar3[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                    [uVar5 | param_1[iVar2 + 2] >> 6];
        iVar4 = iVar7 + 5;
        pcVar3[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                    [param_1[iVar2 + 2] & 0x3f];
        if (param_3 <= iVar1) goto LAB_0001dd20;
        pcVar3 = pcVar3 + 4;
        *pcVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [param_1[iVar1] >> 2];
        uVar5 = (param_1[iVar1] & 3) << 4;
        iVar2 = iVar1;
      } while (iVar6 < param_3);
      iVar1 = iVar7 + 6;
      iVar2 = iVar7 + 7;
      iVar8 = iVar7 + 8;
    }
    param_2[iVar4] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar5];
    param_2[iVar1] = '=';
    param_2[iVar2] = '=';
  }
LAB_0001dd20:
  param_2[iVar8] = '\0';
  return param_2;
}



void FUN_0001dd84(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  time_t tStack_5c;
  timeval tStack_54;
  tm local_4c;
  
  if (param_4 != (char *)0x0) {
    time(&tStack_5c);
    localtime_r(&tStack_5c,&local_4c);
    gettimeofday(&tStack_54,(__timezone_ptr_t)0x0);
    if (tStack_54.tv_usec < 0) {
      tStack_54.tv_usec = tStack_54.tv_usec + 0x3ff;
    }
    fprintf(stderr,"\n%s(%s-%d)[%02d:%02d:%02d.%03d]:",param_1,param_2,param_3,local_4c.tm_hour,
            local_4c.tm_min,local_4c.tm_sec,tStack_54.tv_usec >> 10);
    vfprintf(stderr,param_4,&stack0x00000000);
    fputc(10,stderr);
  }
  return;
}



void FUN_0001de64(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  FILE *__stream;
  char *pcVar4;
  undefined4 uVar5;
  char *local_10c;
  char *local_108;
  char *local_104;
  char local_a8 [132];
  
  error_at_line(0,0,"yi_p2p.c",0x10d,"notice: msg_index(%llu), content_len(%u), content(%s)\n");
  memset(local_a8,0,0x80);
  yi_report_debug_strings(2,5,"notice_callback:content:(%s)\n",param_3);
  iVar1 = strcmp(param_3,"TurnOn");
  if (iVar1 == 0) {
    iVar1 = yi_p2p_on_is_power_on();
    if (iVar1 == 0) {
      yi_p2p_on_set_power(1);
      uVar5 = 0;
      goto LAB_0001e00c;
    }
  }
  else {
    iVar1 = strcmp(param_3,"TurnOff");
    if (iVar1 != 0) {
      iVar1 = strcmp(param_3,"OnLine");
      if (iVar1 != 0) {
        pcVar2 = strstr(param_3,"UPDATE_HW");
        if (pcVar2 != (char *)0x0) {
          error_at_line(0,0,"yi_p2p.c",0x134,"UPDATE_HW\n");
          iVar1 = trans_json_ex_s(local_a8,0x80,&DAT_00049328,param_3);
          if (iVar1 == 1) {
            printf("UPDATE_HW=%s\n",local_a8);
            sVar3 = strlen(local_a8);
            if (sVar3 < 0x20) {
              error_at_line(0,0,"yi_p2p.c",0x143,"cloud set hw size err!!!\n");
            }
            else {
              memset(&local_10c,0,100);
              sprintf((char *)&local_10c,"/usr/bin/write_hw %s",local_a8);
              system((char *)&local_10c);
              sleep(1);
            }
          }
          iVar1 = snprintf((char *)&local_10c,4,"%d");
          error_at_line(0,0,"yi_p2p.c",0x14f,"notice: msg_index(%llu), resp_len(%u), resp(%s)\n");
          PPPP_SendNoticeToAck(param_1,param_2,&local_10c,iVar1);
          sleep(5);
          system("reboot -f");
          return;
        }
        pcVar2 = strstr(param_3,"LOG_STATUS");
        if (pcVar2 == (char *)0x0) {
          pcVar4 = strstr(param_3,"REBOOT");
          if (pcVar4 != (char *)0x0) {
            error_at_line(0,0,"yi_p2p.c",0x187,"REBOOT\n");
            local_10c = pcVar2;
            local_108 = pcVar2;
            local_104 = pcVar2;
            iVar1 = snprintf((char *)&local_10c,4,"%d",0);
            error_at_line(0,0,"yi_p2p.c",0x18c,"notice: msg_index(%llu), resp_len(%u), resp(%s)\n");
            PPPP_SendNoticeToAck(param_1,param_2,&local_10c,iVar1);
            sleep(2);
            yi_remote_manual_reboot();
            sleep(5);
            system("reboot -f");
            return;
          }
          pcVar2 = strstr(param_3,"FORMAT");
          if (pcVar2 != (char *)0x0) {
            error_at_line(0,0,"yi_p2p.c",0x198,"FORMAT\n");
            local_10c = pcVar4;
            local_108 = pcVar4;
            local_104 = pcVar4;
            iVar1 = snprintf((char *)&local_10c,4,"%d",0);
            error_at_line(0,0,"yi_p2p.c",0x19d,"notice: msg_index(%llu), resp_len(%u), resp(%s)\n");
            PPPP_SendNoticeToAck(param_1,param_2,&local_10c,iVar1);
            yi_p2p_on_format_sd();
            sleep(5);
            system("reboot -f");
            return;
          }
          pcVar4 = strstr(param_3,"RESET");
          if (pcVar4 != (char *)0x0) {
            error_at_line(0,0,"yi_p2p.c",0x1a6,"RESET\n");
            local_10c = pcVar2;
            local_108 = pcVar2;
            local_104 = pcVar2;
            iVar1 = snprintf((char *)&local_10c,4,"%d",0);
            error_at_line(0,0,"yi_p2p.c",0x1ab,"notice: msg_index(%llu), resp_len(%u), resp(%s)\n");
            PPPP_SendNoticeToAck(param_1,param_2,&local_10c,iVar1);
            sleep(5);
            yi_p2p_on_reset_device();
            system("reboot -f");
            return;
          }
          uVar5 = 10000;
          goto LAB_0001e00c;
        }
        error_at_line(0,0,"yi_p2p.c",0x158,"LOG_STATUS\n");
        iVar1 = trans_json_ex_s(local_a8,0x80,&DAT_000493c8,param_3);
        if (iVar1 == 1) {
          printf("LOG_STATUS=%s\n",local_a8);
          if (local_a8[0] != '\0') {
            __stream = fopen("/etc/jffs2/logStatus.conf","w");
            if (__stream == (FILE *)0x0) {
              printf("open %s failed!\r\n","/etc/jffs2/logStatus.conf");
              return;
            }
            fputs(local_a8,__stream);
            fclose(__stream);
            sleep(1);
            iVar1 = snprintf((char *)&local_10c,4,"%d",0);
            error_at_line(0,0,"yi_p2p.c",0x178,"notice: msg_index(%llu), resp_len(%u), resp(%s)\n");
            PPPP_SendNoticeToAck(param_1,param_2,&local_10c,iVar1);
            sleep(3);
            check_log_to_server_status();
            goto LAB_0001e198;
          }
          error_at_line(0,0,"yi_p2p.c",0x16c,"cloud set LOG_STATUS size err!!!\n");
        }
        iVar1 = snprintf((char *)&local_10c,4,"%d",0x2711);
        error_at_line(0,0,"yi_p2p.c",0x178,"notice: msg_index(%llu), resp_len(%u), resp(%s)\n");
        PPPP_SendNoticeToAck(param_1,param_2,&local_10c,iVar1);
        sleep(3);
LAB_0001e198:
        sleep(2);
        return;
      }
      uVar5 = 0;
      goto LAB_0001e00c;
    }
    iVar1 = yi_p2p_on_is_power_on();
    if (iVar1 != 0) {
      yi_p2p_on_set_power(0);
      uVar5 = 0;
      goto LAB_0001e00c;
    }
  }
  uVar5 = 0x2711;
LAB_0001e00c:
  local_10c = (char *)0x0;
  local_108 = (char *)0x0;
  local_104 = (char *)0x0;
  iVar1 = snprintf((char *)&local_10c,4,"%d",uVar5);
  error_at_line(0,0,"yi_p2p.c",0x1ba,"notice: msg_index(%llu), resp_len(%u), resp(%s)\n");
  yi_report_debug_strings(2,5,"PPPP_SendNoticeToAck:resp_buf:(%s)\n",&local_10c);
  PPPP_SendNoticeToAck(param_1,param_2,&local_10c,iVar1);
  return;
}



void FUN_0001e664(int param_1,int param_2,int param_3,void *param_4,ushort param_5)

{
  undefined1 uVar1;
  int iVar2;
  uint __n;
  undefined4 *__s;
  uint uVar3;
  undefined1 auStack_10050 [4];
  uint uStack_1004c;
  ushort auStack_10048 [4];
  undefined4 auStack_10040 [16392];
  undefined4 uStack_20;
  
  __n = (uint)param_5;
  uVar3 = __n + 0x37 >> 3;
  iVar2 = uVar3 * -8;
  __s = &uStack_20 + uVar3 * -2;
  uStack_20 = param_4;
  memset(__s,0,0x30);
  uVar3 = __n + 0x28;
  uVar1 = (&DAT_0005e094)[param_1 * 0xcd0];
  *(ushort *)(&stack0xffffffe8 + iVar2) = (ushort)(param_2 << 8) | (ushort)((uint)param_2 >> 8);
  *(ushort *)(&stack0xffffffea + iVar2) = (ushort)(param_3 << 8) | (ushort)((uint)param_3 >> 8);
  *(undefined1 *)__s = uVar1;
  *(uint *)(&stack0xffffffe4 + iVar2) =
       (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 * 0x1000000;
  *(undefined1 *)((int)&uStack_20 + iVar2 + 1) = 3;
  *(ushort *)(&stack0xffffffee + iVar2) = param_5 << 8 | param_5 >> 8;
  *(undefined2 *)(&stack0xffffffec + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  if (__n != 0) {
    memcpy(&stack0x00000010 + iVar2,param_4,__n);
  }
  PPPP_Write(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),0,__s,__n + 0x30);
  return;
}



undefined4 FUN_0001e764(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint local_18;
  uint local_14;
  
  if (param_3 == 0) {
    (&DAT_0005e097)[param_1 * 0xcd0] = 1;
  }
  else {
    (&DAT_0005e097)[param_1 * 0xcd0] = 0;
    if (param_3 - 4 < 3) {
      *(uint *)(&DAT_0005e084 + param_1 * 0xcd0) = param_3;
      goto LAB_0001e7bc;
    }
  }
  param_3 = (int)(param_3 + 1) % 2;
  *(uint *)(&DAT_0005e084 + param_1 * 0xcd0) = param_3;
LAB_0001e7bc:
  if (param_4 == 0xffff) {
    uVar1 = 0;
  }
  else {
    local_14 = (param_2 ^ (param_2 >> 0x10 | param_2 << 0x10)) >> 8 & 0xffff00ff ^
               (param_2 >> 8 | param_2 << 0x18);
    local_18 = (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
               (param_3 >> 8 | param_3 << 0x18);
    uVar1 = FUN_0001e664(param_1,0x1312,param_4,&local_18,8);
    param_3 = *(uint *)(&DAT_0005e084 + param_1 * 0xcd0);
  }
  error_at_line(0,0,"yi_p2p.c",0x79f,
                "IOTYPE_USER_IPCAM_SET_RESOLUTION_RESP, ret = %d auto_resolution=%d session[index=%d].resolution=%d rsp.resolution=%d\n"
                ,uVar1,(&DAT_0005e097)[param_1 * 0xcd0],param_1,param_3,local_18);
  return uVar1;
}



void FUN_0001e8d4(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 auStack_2c [24];
  
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  FUN_0001d8d0(param_1,sVar1,param_2,sVar2,auStack_2c);
  FUN_0001dc2c(auStack_2c,param_3,0x14);
  return;
}



undefined4 FUN_0001e92c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0005e054);
  piVar1 = (int *)0x66088;
  iVar2 = 0;
  do {
    piVar1 = piVar1 + 1;
    if (*piVar1 == param_1) {
      if (iVar2 != 7) {
        puVar3 = (undefined4 *)(&DAT_0005e054 + (iVar2 + 0x200e) * 4);
        do {
          puVar4 = puVar3 + 1;
          *puVar3 = puVar3[1];
          puVar3 = puVar4;
        } while (puVar4 != &DAT_000660a8);
      }
      DAT_000660a8 = 0xffffffff;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0005e054);
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0005e054);
  return 0xffffffff;
}



void FUN_0001e9ec(int param_1,int param_2,int param_3)

{
  undefined4 local_48;
  undefined4 local_44;
  ushort local_40;
  ushort local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_40 = (ushort)(param_2 << 8) | (ushort)((uint)param_2 >> 8);
  local_3e = (ushort)(param_3 << 8) | (ushort)((uint)param_3 >> 8);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_44 = 0x28000000;
  local_48 = (uint)CONCAT12(1,CONCAT11(3,(&DAT_0005e094)[param_1 * 0xcd0]));
  PPPP_Write(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),0,&local_48,0x30);
  return;
}



undefined4 yi_p2p_init(undefined4 param_1,char param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char *pcVar4;
  char local_3c;
  char local_3b;
  char local_3a;
  undefined1 local_39;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  memset(&DAT_0005e054,0,0x809c);
  pthread_mutex_init((pthread_mutex_t *)&DAT_0005e054,(pthread_mutexattr_t *)0x0);
  DAT_000660f0 = 1;
  DAT_000660ac = param_2;
  uVar1 = PPPP_GetAPIVersion();
  error_at_line(0,0,"yi_p2p.c",0x1cb,"PPPP_API Version: 0x%X %u.%u.%u.%u\n",uVar1,uVar1 >> 0x18,
                uVar1 >> 0x10 & 0xff,uVar1 >> 8 & 0xff,uVar1 & 0xff);
  PPPP_Initialize(param_1,0xc);
  yi_report_debug_strings(0,5,"PPPP_Initialize:MaxSessionNumber:(%d)\n",0xc);
  if (DAT_000660ac == '\0') {
    uVar2 = PPPP_NetworkDetect(&local_3c,10000);
    yi_report_debug_strings(0,5,"PPPP_NetworkDetect:ret(%d),nettype:(%d)\n",uVar2,local_39);
    error_at_line(0,0,"yi_p2p.c",0x1d6,"PPPP_NetworkDetect(): ret=%d\n",uVar2);
    switch(local_39) {
    case 0:
      pcVar4 = "Unknow";
      break;
    case 1:
      pcVar4 = "IP-Restricted Cone";
      break;
    case 2:
      pcVar4 = "Port-Restricted Cone";
      break;
    case 3:
      pcVar4 = "Symmetric";
      break;
    default:
      pcVar4 = (char *)0x0;
    }
    error_at_line(0,0,"yi_p2p.c",0x1e1,"--------------- NetInfo: ---------------\n",uVar2);
    puVar3 = &UNK_00049540;
    if (local_3c != '\x01') {
      puVar3 = &DAT_00049544;
    }
    error_at_line(0,0,"yi_p2p.c",0x1e2,"Internet Reachable     : %s\n",puVar3);
    puVar3 = &UNK_00049540;
    if (local_3b != '\x01') {
      puVar3 = &DAT_00049544;
    }
    error_at_line(0,0,"yi_p2p.c",0x1e3,"P2P Server IP resolved : %s\n",puVar3);
    puVar3 = &UNK_00049540;
    if (local_3a != '\x01') {
      puVar3 = &DAT_00049544;
    }
    error_at_line(0,0,"yi_p2p.c",0x1e4,"P2P Server Hello Ack   : %s\n",puVar3);
    error_at_line(0,0,"yi_p2p.c",0x1e5,"Local NAT Type         : %s\n",pcVar4);
    error_at_line(0,0,"yi_p2p.c",0x1e6,"My Wan IP              : %s\n",auStack_28);
    error_at_line(0,0,"yi_p2p.c",0x1e7,"My Lan IP              : %s\n\n",auStack_38);
  }
  yi_report_debug_strings(0,5,"PPPP_SetNoticeToCallback\n");
  PPPP_SetNoticeToCallback(FUN_0001de64);
  return 0;
}



void yi_p2p_deinit(void)

{
  undefined4 in_r3;
  
  DAT_000660f0 = 0;
  yi_report_debug_strings(0,5,"PPPP_DeInitialize\n",0,in_r3);
  PPPP_DeInitialize();
  pthread_mutex_destroy((pthread_mutex_t *)&DAT_0005e054);
  return;
}



undefined4 yi_p2p_listen(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
LAB_0001eed0:
  if (DAT_000660f0 == 0) {
    return 0;
  }
  yi_report_debug_strings(0,5,"before PPPP_Listen\n");
  iVar2 = PPPP_Listen(param_1,0xe10,0,DAT_000660ac ^ 1,param_2,param_3);
  if (-1 < iVar2) {
    yi_report_debug_strings(1,5,"PPPP_Listen OK sid:(%d)\n",iVar2);
    iVar5 = 0;
    puVar4 = &DAT_0005e054;
    while (piVar1 = (int *)(puVar4 + 0x18), puVar4 = puVar4 + 0xcd0, *piVar1 != 0) {
      iVar5 = iVar5 + 1;
      if (iVar5 == 10) {
        yi_report_debug_strings(1,5,"PPPP_ForceClose:YI_P2P_MAX_SESSION:sid:(%d)\n",10);
        PPPP_ForceClose(iVar2);
        error_at_line(0,0,"yi_p2p.c",0x211,"too many session, force exit!\n");
        return 0xffffffff;
      }
    }
    (&DAT_0005e06c)[iVar5 * 0x334] = 2;
    *(int *)(&DAT_0005e070 + iVar5 * 0xcd0) = iVar2;
    error_at_line(0,0,"yi_p2p.c",0x217,"new session: sid(%d), tnp_sid(%d)\n",iVar5,iVar2);
    yi_report_debug_strings(1,5,"new session:sid:(%d)\n",iVar5);
    iVar3 = yi_p2p_on_new_session(iVar5);
    if (iVar3 < 0) {
      yi_report_debug_strings(1,5,"PPPP_ForceClose:sid:(%d)\n",iVar5);
      PPPP_ForceClose(iVar2);
      (&DAT_0005e06c)[iVar5 * 0x334] = 0;
      error_at_line(0,0,"yi_p2p.c",0x224,"yi_p2p_on_new_session(): ret=%d\n",iVar3);
      return 0xffffffff;
    }
    goto LAB_0001f0e4;
  }
  yi_report_debug_strings(1,5,"PPPP_Listen-error:sid:(%d)\n",iVar2);
  error_at_line(0,0,"yi_p2p.c",0x22b,"PPPP_Listen(): ret=%d\n",iVar2);
  switch(iVar2) {
  case -0xbda:
    goto LAB_0001f154;
  case -0xbd9:
    break;
  case -0xbd8:
    break;
  case -0xbd7:
    goto LAB_0001f154;
  case -0xbd6:
    break;
  case -0xbd5:
    break;
  case -0xbd4:
    goto LAB_0001f154;
  case -0xbd3:
    goto LAB_0001f154;
  case -0xbd2:
    break;
  case -0xbd1:
    break;
  case -0xbd0:
    break;
  case -0xbcf:
    break;
  case -0xbce:
    break;
  case -0xbcd:
    break;
  case -0xbcc:
    break;
  case -0xbcb:
    break;
  case -0xbca:
    break;
  case -0xbc9:
    return 0xffffffff;
  case -0xbc8:
    goto LAB_0001f0e4;
  case -0xbc7:
    break;
  case -0xbc6:
    break;
  case -0xbc5:
    break;
  case -0xbc4:
    break;
  case -0xbc3:
    break;
  case -0xbc2:
    break;
  case -0xbc1:
    goto LAB_0001f154;
  case -0xbc0:
    goto LAB_0001f154;
  case -0xbbf:
    break;
  case -0xbbe:
    break;
  case -0xbbd:
    goto LAB_0001f154;
  case -0xbbc:
LAB_0001f154:
    sleep(0x3c);
    goto LAB_0001eed0;
  case -0xbbb:
LAB_0001f0e4:
    sleep(1);
    goto LAB_0001eed0;
  case -0xbba:
    break;
  case -0xbb9:
    return 0xffffffff;
  }
  sleep(10);
  goto LAB_0001eed0;
}



undefined4 yi_p2p_reply_record_events(uint param_1,int param_2,time_t *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *__ptr;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  time_t *ptVar6;
  size_t __size;
  tm local_54;
  
  if (param_1 < 10) {
    iVar4 = param_4 + 1;
    __size = iVar4 * 0xc + 0x30;
    __ptr = calloc(1,__size);
    if (__ptr == (undefined1 *)0x0) {
      error_at_line(0,0,"yi_p2p.c",600,"calloc(1, %d) failed\n",__size);
      uVar2 = 0xffffffff;
    }
    else {
      uVar3 = iVar4 * 0xc + 0x28;
      uVar1 = (&DAT_0005e094)[param_1 * 0xcd0];
      *(uint *)(__ptr + 4) = (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 * 0x1000000;
      *__ptr = uVar1;
      *(ushort *)(__ptr + 10) = (ushort)(param_2 << 8) | (ushort)((uint)param_2 >> 8);
      *(ushort *)(__ptr + 0xe) =
           (short)iVar4 * 0xc00 | (ushort)(byte)((uint)(iVar4 * 0xc0000) >> 0x18);
      *(ushort *)(__ptr + 0x30) = (ushort)(param_4 << 8) | (ushort)((uint)param_4 >> 8);
      *(undefined2 *)(__ptr + 8) = 0x4823;
      __ptr[1] = 3;
      *(undefined2 *)(__ptr + 0xc) = 0;
      *(undefined4 *)(__ptr + 0x10) = 0;
      if (param_4 != 0) {
        ptVar6 = param_3 + (param_4 - 1U & 0xffff) * 2 + 2;
        puVar5 = (uint *)(__ptr + 0x44);
        do {
          gmtime_r(param_3,&local_54);
          *(char *)((int)puVar5 + -3) = (char)local_54.tm_hour;
          *(ushort *)(puVar5 + -2) =
               (short)(local_54.tm_year + 0x76c) * 0x100 |
               (ushort)(byte)((uint)((local_54.tm_year + 0x76c) * 0x10000) >> 0x18);
          *(char *)((int)puVar5 + -6) = (char)local_54.tm_mon + '\x01';
          *(char *)((int)puVar5 + -5) = (char)local_54.tm_mday;
          *(char *)((int)puVar5 + -2) = (char)local_54.tm_min;
          *(char *)((int)puVar5 + -1) = (char)local_54.tm_sec;
          *(char *)(puVar5 + -1) = (char)local_54.tm_wday;
          uVar3 = param_3[1];
          param_3 = param_3 + 2;
          *puVar5 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
                    (uVar3 >> 8 | uVar3 << 0x18);
          puVar5 = puVar5 + 3;
        } while (param_3 != ptVar6);
      }
      uVar2 = PPPP_Write(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),0,__ptr,__size);
      free(__ptr);
    }
  }
  else {
    error_at_line(0,0,"yi_p2p.c",0x24f,"expected sid(%u) < YI_P2P_MAX_SESSION(%d)\n",param_1,10);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



int yi_p2p_check_buf(int param_1,undefined1 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = PPPP_Check_Buffer(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),param_2);
  if (iVar1 < 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xfffffff;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0xfffffff;
    }
    if ((iVar1 + 0xbc5U < 2) || (iVar1 == -0xbc6)) {
      (&DAT_0005e06c)[param_1 * 0x334] = 1;
      error_at_line(0,0,"yi_p2p.c",0x2c6,"PPPP connection is closed!(%d), ret = %d\n",param_1,iVar1)
      ;
      return iVar1;
    }
  }
  return iVar1;
}



undefined4 yi_p2p_get_frame_data_offset(void)

{
  return 0x20;
}



void yi_p2p_reply_set_motion_detect(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar2 = param_3[4];
  uVar6 = *param_3;
  uVar5 = param_3[1];
  uVar4 = param_3[2];
  uVar3 = param_3[3];
  uVar1 = param_3[5];
  local_30 = (uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar2 >> 8 | uVar2 << 0x18);
  local_3c = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar5 >> 8 | uVar5 << 0x18);
  local_34 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar3 >> 8 | uVar3 << 0x18);
  local_2c = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  local_40 = (uVar6 ^ (uVar6 >> 0x10 | uVar6 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar6 >> 8 | uVar6 << 0x18);
  local_38 = (uVar4 ^ (uVar4 >> 0x10 | uVar4 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar4 >> 8 | uVar4 << 0x18);
  FUN_0001e664(param_1,0x1326,param_2,&local_40,0x18);
  return;
}



void yi_p2p_reply_motion_detect_cfg(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar2 = param_3[4];
  uVar6 = *param_3;
  uVar5 = param_3[1];
  uVar4 = param_3[2];
  uVar3 = param_3[3];
  uVar1 = param_3[5];
  local_30 = (uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar2 >> 8 | uVar2 << 0x18);
  local_3c = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar5 >> 8 | uVar5 << 0x18);
  local_34 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar3 >> 8 | uVar3 << 0x18);
  local_2c = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  local_40 = (uVar6 ^ (uVar6 >> 0x10 | uVar6 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar6 >> 8 | uVar6 << 0x18);
  local_38 = (uVar4 ^ (uVar4 >> 0x10 | uVar4 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar4 >> 8 | uVar4 << 0x18);
  FUN_0001e664(param_1,0x1328,param_2,&local_40,0x18);
  return;
}



void yi_p2p_reply_set_video_backup(undefined4 param_1,undefined4 param_2,byte param_3)

{
  uint local_20 [7];
  
  local_20[1] = 0;
  local_20[0] = param_3 ^ 1;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  FUN_0001e664(param_1,0x1354,param_2,local_20,0x18);
  return;
}



void yi_p2p_reply_video_backup_state(undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 auStack_5c [8];
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  
  pvVar1 = memcpy(auStack_5c,param_3,0x34);
  local_54 = (local_54 ^ (local_54 >> 0x10 | local_54 << 0x10)) >> 8 & 0xffff00ff ^
             (local_54 >> 8 | local_54 << 0x18);
  local_50 = (local_50 ^ (local_50 >> 0x10 | local_50 << 0x10)) >> 8 & 0xffff00ff ^
             (local_50 >> 8 | local_50 << 0x18);
  local_4c = (local_4c ^ (local_4c >> 0x10 | local_4c << 0x10)) >> 8 & 0xffff00ff ^
             (local_4c >> 8 | local_4c << 0x18);
  local_48 = (local_48 ^ (local_48 >> 0x10 | local_48 << 0x10)) >> 8 & 0xffff00ff ^
             (local_48 >> 8 | local_48 << 0x18);
  local_44 = (local_44 ^ (local_44 >> 0x10 | local_44 << 0x10)) >> 8 & 0xffff00ff ^
             (local_44 >> 8 | local_44 << 0x18);
  local_40 = (local_40 ^ (local_40 >> 0x10 | local_40 << 0x10)) >> 8 & 0xffff00ff ^
             (local_40 >> 8 | local_40 << 0x18);
  FUN_0001e664(param_1,0x1356,param_2,pvVar1,0x34);
  return;
}



void yi_p2p_reply_ptz_preset_add(undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  ushort local_28;
  ushort local_26;
  
  pvVar1 = memcpy(&local_28,param_3,0x10);
  local_26 = local_26 << 8 | local_26 >> 8;
  local_28 = local_28 << 8 | local_28 >> 8;
  FUN_0001e664(param_1,0x4001,param_2,pvVar1,0x10);
  return;
}



void yi_p2p_reply_ptz_preset_del(undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  ushort local_28;
  ushort local_26;
  
  pvVar1 = memcpy(&local_28,param_3,0x10);
  local_26 = local_26 << 8 | local_26 >> 8;
  local_28 = local_28 << 8 | local_28 >> 8;
  FUN_0001e664(param_1,0x4003,param_2,pvVar1,0x10);
  return;
}



void yi_p2p_reply_ptz_preset_call(undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  ushort local_28;
  ushort local_26;
  
  pvVar1 = memcpy(&local_28,param_3,0x10);
  local_26 = local_26 << 8 | local_26 >> 8;
  local_28 = local_28 << 8 | local_28 >> 8;
  FUN_0001e664(param_1,0x400d,param_2,pvVar1,0x10);
  return;
}



void yi_p2p_reply_panorama_capture_start(undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  uint local_14;
  
  pvVar1 = memcpy(&local_14,param_3,4);
  local_14 = (local_14 ^ (local_14 >> 0x10 | local_14 << 0x10)) >> 8 & 0xffff00ff ^
             (local_14 >> 8 | local_14 << 0x18);
  FUN_0001e664(param_1,0x4021,param_2,pvVar1,4);
  return;
}



void yi_p2p_reply_panorama_capture_schedule(undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  pvVar1 = memcpy(&local_34,param_3,0x14);
  local_30 = (local_30 ^ (local_30 >> 0x10 | local_30 << 0x10)) >> 8 & 0xffff00ff ^
             (local_30 >> 8 | local_30 << 0x18);
  local_2c = (local_2c ^ (local_2c >> 0x10 | local_2c << 0x10)) >> 8 & 0xffff00ff ^
             (local_2c >> 8 | local_2c << 0x18);
  local_34 = (local_34 ^ (local_34 >> 0x10 | local_34 << 0x10)) >> 8 & 0xffff00ff ^
             (local_34 >> 8 | local_34 << 0x18);
  FUN_0001e664(param_1,0x4025,param_2,pvVar1,0x14);
  return;
}



void yi_p2p_reply_dev_info
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined1 local_17d;
  undefined1 local_17c;
  undefined1 local_17a;
  undefined1 local_179;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175;
  undefined1 local_172;
  undefined1 local_171;
  undefined1 local_170;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined1 local_16a;
  undefined1 local_169;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  uint local_164;
  uint local_158;
  uint local_154;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 auStack_148 [12];
  undefined1 auStack_13c [4];
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  undefined1 local_124;
  undefined1 auStack_121 [253];
  
  memset(&local_180,0,0x158);
  local_177 = param_4[5];
  local_17f = *param_4;
  local_17e = param_4[1];
  local_17d = param_4[2];
  local_17c = param_4[3];
  local_179 = param_4[4];
  local_175 = param_4[7];
  local_172 = param_4[8];
  local_171 = param_4[9];
  local_176 = param_4[6];
  local_170 = param_4[10];
  local_16c = param_4[0xb];
  local_16b = param_4[0xc];
  local_16a = param_4[0xd];
  local_169 = param_4[0xe];
  local_180 = 9;
  local_17a = 1;
  local_14b = 1;
  local_178 = 0xfd;
  uVar3 = *(uint *)(param_4 + 0x14);
  uVar1 = *(uint *)(param_4 + 0x1c);
  uVar2 = *(uint *)(param_4 + 0x18);
  local_168 = param_4[0xf];
  local_167 = param_4[0x10];
  local_164 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
              (uVar3 >> 8 | uVar3 << 0x18);
  local_158 = (uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10)) >> 8 & 0xffff00ff ^
              (uVar2 >> 8 | uVar2 << 0x18);
  local_166 = param_4[0x11];
  local_150 = param_4[0x20];
  local_154 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
              (uVar1 >> 8 | uVar1 << 0x18);
  local_14f = param_4[0x21];
  local_14d = param_4[0x23];
  local_14c = param_4[0x24];
  local_14a = param_4[0x25];
  local_14e = param_4[0x22];
  local_128 = param_4[0x26];
  local_127 = param_4[0x27];
  local_126 = param_4[0x28];
  local_125 = param_4[0x29];
  local_124 = param_4[0x2a];
  DAT_000660ed = local_177;
  memcpy(auStack_148,param_4 + 0x2b,0xc);
  memcpy(auStack_13c,param_4 + 0x38,0x14);
  local_134 = (local_134 ^ (local_134 >> 0x10 | local_134 << 0x10)) >> 8 & 0xffff00ff ^
              (local_134 >> 8 | local_134 << 0x18);
  local_130 = (local_130 ^ (local_130 >> 0x10 | local_130 << 0x10)) >> 8 & 0xffff00ff ^
              (local_130 >> 8 | local_130 << 0x18);
  local_12c = (local_12c ^ (local_12c >> 0x10 | local_12c << 0x10)) >> 8 & 0xffff00ff ^
              (local_12c >> 8 | local_12c << 0x18);
  local_138 = (local_138 ^ (local_138 >> 0x10 | local_138 << 0x10)) >> 8 & 0xffff00ff ^
              (local_138 >> 8 | local_138 << 0x18);
  memcpy(auStack_121,param_4 + 0x4c,0x14);
  FUN_0001e664(param_1,param_2,param_3,&local_180,0x158);
  return;
}



void yi_p2p_reply_factory_test_info(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001e664(param_1,0x6ff2,param_2,param_3,0x34);
  return;
}



void yi_p2p_reply_version(undefined4 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  FUN_0001e664(param_1,0x1301,param_2,param_3,sVar1 & 0xffff);
  return;
}



void yi_p2p_reply_update(undefined4 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  FUN_0001e664(param_1,0x1213,param_2,param_3,sVar1 & 0xffff);
  return;
}



void FUN_0001fcbc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001e664(param_1,0x1397,param_2,param_3,4);
  return;
}



int yi_p2p_send_frame_data(int param_1,uint *param_2,void *param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int local_188;
  undefined4 local_184;
  uint local_180;
  timeval local_17c;
  undefined1 auStack_174 [16];
  undefined1 auStack_164 [15];
  undefined1 local_155;
  undefined4 local_154;
  undefined4 local_150;
  uint local_14c;
  uint local_148;
  undefined4 local_144;
  uint local_140;
  undefined1 auStack_13c [280];
  
  if (param_3 == (void *)0x0) {
    error_at_line(0,0,"yi_p2p.c",999,"send_buf is NULL\n");
    return -1;
  }
  uVar6 = param_4 + 0x18;
  local_154 = (uint)*(byte *)((int)param_2 + 0xd);
  local_180 = (uVar6 ^ (uVar6 >> 0x10 | uVar6 * 0x10000)) >> 8 & 0xffff00ff ^
              (uVar6 >> 8 | uVar6 * 0x1000000);
  if (local_154 == 0) {
    iVar7 = param_1 * 0xcd0;
    local_184._0_2_ = CONCAT11(2,(&DAT_0005e094)[iVar7]);
    local_184 = (uint)(ushort)local_184;
    local_150 = local_154;
    local_14c = local_154;
    local_148 = local_154;
    local_144 = local_154;
    local_140 = local_154;
    pvVar1 = memcpy(auStack_164,&DAT_0005e09d + iVar7,0xf);
    uVar6 = *param_2;
    local_148 = (uVar6 ^ (uVar6 >> 0x10 | uVar6 << 0x10)) >> 8 & 0xffff00ff ^
                (uVar6 >> 8 | uVar6 << 0x18);
    *(short *)(&DAT_0005e07e + iVar7) = *(short *)(&DAT_0005e07e + iVar7) + 1;
    local_155 = 0x30;
    local_154._0_3_ = CONCAT12(0x1b,(undefined2)local_154);
                    // WARNING: Ignoring partial resolution of indirect
    local_154._0_2_ = 0x8a00;
    if ((1 < (byte)(&DAT_0005e094)[iVar7]) && ((&DAT_0005e096)[iVar7] != '\0')) {
      iVar7 = param_4 + 0xf;
      if (-1 < param_4) {
        iVar7 = param_4;
      }
      AesSetKeyDirect(auStack_13c,pvVar1,0x10,0,0);
      if (0 < iVar7 >> 4) {
        pvVar1 = (void *)((int)param_3 + 0x20);
        iVar5 = 0;
        do {
          AesEncryptDirect(auStack_13c,auStack_174,pvVar1);
          iVar5 = iVar5 + 1;
          memcpy(pvVar1,auStack_174,0x10);
          pvVar1 = (void *)((int)pvVar1 + 0x10);
        } while (iVar5 != iVar7 >> 4);
      }
    }
    cVar8 = (char)param_2[3];
    iVar7 = 1;
  }
  else {
    local_154 = 0;
    local_150 = 0;
    local_14c = 0;
    local_148 = 0;
    local_144 = 0;
    local_140 = 0;
    local_184._0_2_ = CONCAT11(1,(&DAT_0005e094)[param_1 * 0xcd0]);
    local_184 = (uint)(ushort)local_184;
    memcpy(auStack_164,&DAT_0005e09d + param_1 * 0xcd0,0xf);
    cVar8 = (char)param_2[3];
    local_155 = 0x30;
    if (cVar8 == '\0') {
      bVar10 = *(char *)((int)param_2 + 0xe) == '\0';
      if (bVar10) {
        iVar7 = 5;
      }
      else {
        iVar7 = 4;
      }
      bVar10 = !bVar10;
    }
    else if (*(char *)((int)param_2 + 0xe) == '\0') {
      bVar10 = false;
      iVar7 = 3;
    }
    else {
      bVar10 = true;
      iVar7 = 2;
    }
    bVar9 = *(char *)((int)param_2 + 0xf) == '\0';
    *(short *)(&DAT_0005e07c + param_1 * 0xcd0) = *(short *)(&DAT_0005e07c + param_1 * 0xcd0) + 1;
    if (bVar9) {
                    // WARNING: Ignoring partial resolution of indirect
      local_154._0_2_ = 0x4e00;
    }
    if (!bVar9) {
                    // WARNING: Ignoring partial resolution of indirect
      local_154._0_2_ = 0x5100;
    }
    uVar6 = *param_2;
    local_148 = (uVar6 ^ (uVar6 >> 0x10 | uVar6 << 0x10)) >> 8 & 0xffff00ff ^
                (uVar6 >> 8 | uVar6 << 0x18);
                    // WARNING: Ignoring partial resolution of indirect
    local_14c._0_2_ = (ushort)param_2[2] << 8 | (ushort)param_2[2] >> 8;
    local_154._0_3_ = CONCAT12(bVar10,(undefined2)local_154);
    local_150 = CONCAT31(local_150._1_3_,(char)param_2[4]);
    local_144 = CONCAT13(*(undefined1 *)((int)param_2 + 0x11),
                         CONCAT12(*(undefined1 *)((int)param_2 + 0x12),(undefined2)local_144));
    if ((((&DAT_0005e096)[param_1 * 0xcd0] != '\0') && (bVar10)) && (0x23 < param_4)) {
      AesSetKey(auStack_13c,auStack_164,0x10,0,0);
      AesCbcEncrypt(auStack_13c,auStack_174,(void *)((int)param_3 + 0x24),0x10);
      memcpy((void *)((int)param_3 + 0x24),auStack_174,0x10);
      AesSetKey(auStack_13c,auStack_164,0x10,0,0);
      AesCbcEncrypt(auStack_13c,auStack_174,(void *)((int)param_3 + 0x34),0x10);
      memcpy((void *)((int)param_3 + 0x34),auStack_174,0x10);
      cVar8 = (char)param_2[3];
    }
  }
  iVar5 = param_1 * 0xcd0;
  uVar6 = param_2[1];
  local_140 = (uVar6 ^ (uVar6 >> 0x10 | uVar6 << 0x10)) >> 8 & 0xffff00ff ^
              (uVar6 >> 8 | uVar6 << 0x18);
  local_150._0_2_ = CONCAT11((&DAT_0005e095)[iVar5],(undefined1)local_150);
  local_154 = CONCAT13(cVar8,(undefined3)local_154) ^ 0x1000000;
  if (((&DAT_0005e097)[iVar5] == '\0') || ((&DAT_0005e098)[iVar5] == '\0')) goto LAB_000201b8;
  local_188 = 0;
  if (cVar8 == '\0') {
    uVar3 = 4;
  }
  else {
    uVar3 = 2;
  }
  yi_p2p_check_buf(param_1,uVar3,&local_188,0);
  if ((local_188 != 0) && (*(char *)((int)param_2 + 0xe) == '\0')) goto LAB_000201b8;
  iVar4 = param_1 * 0xcd0;
  gettimeofday(&local_17c,(__timezone_ptr_t)0x0);
  iVar5 = local_188;
  if ((local_17c.tv_sec - *(int *)(&DAT_0005e074 + iVar4)) * 1000 +
      (local_17c.tv_usec - *(int *)(&DAT_0005e078 + iVar4)) / 1000 == 0) goto LAB_000201b8;
  iVar2 = FUN_00047b90(*(int *)(&DAT_0005e080 + iVar4) - local_188);
  *(int *)(&DAT_0005e080 + iVar4) = iVar5;
  (&DAT_0005e098)[iVar4] = 0;
  if (iVar2 < 0x47) {
    if ((0x27 < iVar2) || (*(int *)(&DAT_0005e084 + iVar4) != 0)) {
LAB_0002046c:
      *(undefined4 *)(&DAT_0005e088 + param_1 * 0xcd0) = 0;
      goto LAB_000201b8;
    }
  }
  else if (*(int *)(&DAT_0005e084 + iVar4) != 1) goto LAB_0002046c;
  iVar5 = param_1 * 0xcd0;
  iVar4 = *(int *)(&DAT_0005e088 + iVar5);
  *(int *)(&DAT_0005e088 + iVar5) = iVar4 + 1;
  if (4 < iVar4 + 1) {
    error_at_line(0,0,"yi_p2p.c",0x498,"switch resolution: sid=%d\n",param_1);
    *(uint *)(&DAT_0005e084 + iVar5) = *(int *)(&DAT_0005e084 + iVar5) + 1U & 1;
    *(undefined4 *)(&DAT_0005e088 + iVar5) = 0;
  }
LAB_000201b8:
  local_17c.tv_sec = 0;
  yi_p2p_check_buf(param_1,iVar7,&local_17c,0);
  iVar5 = param_1 * 0xcd0;
  if (((&DAT_0005e097)[iVar5] != '\0') && (*(char *)((int)param_2 + 0xe) != '\0')) {
    if ((&DAT_0005e098)[iVar5] == '\0') {
      gettimeofday((timeval *)(&DAT_0005e074 + iVar5),(__timezone_ptr_t)0x0);
      (&DAT_0005e098)[iVar5] = 1;
    }
    *(int *)(&DAT_0005e080 + param_1 * 0xcd0) = param_4 + 0x20 + local_17c.tv_sec;
  }
  if (((DAT_000660f4 == 0) || (local_154._2_1_ == '\x01')) ||
     (*(char *)((int)param_2 + 0xd) == '\0')) {
    iVar5 = 0x34;
    uVar6 = *(uint *)(&UNK_00049114 + iVar7 * 4);
    while( true ) {
      local_17c.tv_sec = 0;
      iVar4 = yi_p2p_check_buf(param_1,iVar7,&local_17c,0);
      if (iVar4 != 0) break;
      if ((uint)local_17c.tv_sec <= uVar6) {
        memcpy(param_3,&local_184,8);
        memcpy((void *)((int)param_3 + 8),&local_154,0x18);
        iVar7 = PPPP_Write(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),iVar7,param_3,
                           param_4 + 0x20);
        return iVar7;
      }
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        error_at_line(0,0,"yi_p2p.c",0x4ca,
                      "yi_p2p_check_buf timeout: tnp_sid=%d, channel=%d, max_cache_size=%d",
                      *(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),iVar7,uVar6);
        DAT_000660f4 = 1;
        return -1;
      }
      usleep(100000);
    }
    error_at_line(0,0,"yi_p2p.c",0x4c0,"yi_p2p_check_buf failed: tnp_sid=%d, channel=%d, ret=%d",
                  *(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),iVar7,iVar4);
  }
  else {
    error_at_line(0,0,"yi_p2p.c",0x4b3,"g_frame_drop_flag,not iframe,drop it!");
    DAT_000660f4 = 0;
    iVar4 = -1;
  }
  return iVar4;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

size_t yi_p2p_recv_audio_data(int param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  size_t __n;
  size_t sVar6;
  void *pvVar7;
  byte *pbVar8;
  uint local_85c;
  undefined1 auStack_858 [15];
  undefined1 local_849;
  undefined1 auStack_848 [1024];
  undefined4 local_448;
  uint local_444;
  undefined1 auStack_440 [12];
  uint local_434;
  
  local_448 = 0;
  local_444 = 0;
  local_85c = 8;
  iVar2 = PPPP_Read(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),1,&local_448,&local_85c,10);
  if ((((iVar2 == 0) || ((short)local_448 != 0)) && (local_448._1_1_ == '\x02')) &&
     (uVar5 = (local_444 ^ (local_444 >> 0x10 | local_444 << 0x10)) >> 8 & 0xffff00ff ^
              (local_444 >> 8 | local_444 << 0x18), uVar5 - 0x19 < 0x400)) {
    param_1 = param_1 * 0xcd0;
    local_85c = uVar5;
    iVar2 = PPPP_Read(*(undefined4 *)(&DAT_0005e070 + param_1),1,auStack_440,&local_85c,10);
    if (((iVar2 == 0) && (uVar5 == local_85c)) && (local_434 != 0)) {
      iVar2 = yi_p2p_get_frame_data_offset();
      uVar5 = local_85c;
      __n = local_85c - 0x18;
      pvVar3 = (void *)((int)&local_448 + iVar2);
      if (((byte)(&DAT_0005e094)[param_1] < 2) || ((&DAT_0005e096)[param_1] == '\0')) {
        memcpy(param_2,pvVar3,__n);
        bVar1 = *param_2;
      }
      else {
        if ((&DAT_0005e09d)[param_1] == '\0') {
          error_at_line(0,0,"yi_p2p.c",0x536,"decrypt audio, password is empty\n");
          return 0xffffffff;
        }
        memcpy(auStack_858,&DAT_0005e09d + param_1,0xf);
        local_849 = 0x30;
        AesSetKeyDirect(auStack_848,auStack_858,0x10,0,1);
        sVar6 = __n;
        if ((int)__n < 0) {
          sVar6 = uVar5 - 9;
        }
        iVar2 = (int)sVar6 >> 4;
        if (0 < iVar2) {
          iVar4 = 0;
          pvVar7 = pvVar3;
          pbVar8 = param_2;
          do {
            iVar4 = iVar4 + 1;
            AesDecryptDirect(auStack_848,pbVar8,pvVar7);
            pbVar8 = pbVar8 + 0x10;
            pvVar7 = (void *)((int)pvVar7 + 0x10);
          } while (iVar4 != iVar2);
        }
        memcpy(param_2 + iVar2 * 0x10,(void *)((int)pvVar3 + iVar2 * 0x10),(int)__n % 0x10);
        bVar1 = *param_2;
      }
      if (bVar1 >> 4 == 0) {
        pvVar3 = memcpy(auStack_848,param_2,__n);
        __n = uVar5 - 0x1c;
        memcpy(param_2,(void *)((int)pvVar3 + 4),__n);
      }
      *param_3 = (local_434 ^ (local_434 >> 0x10 | local_434 << 0x10)) >> 8 & 0xffff00ff ^
                 (local_434 >> 8 | local_434 << 0x18);
      return __n;
    }
  }
  return 0xffffffff;
}



undefined4
yi_p2p_do_auth(int param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5,
              undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_108 [32];
  char acStack_e8 [7];
  undefined1 auStack_e1 [25];
  undefined1 auStack_c8 [32];
  char acStack_a8 [32];
  char acStack_88 [32];
  char acStack_68 [68];
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if (DAT_000660ac == '\0') {
    FUN_0001dbc8(acStack_88,param_2,0x20);
    sscanf(acStack_88,"%[0-9A-Za-z],%s",acStack_e8,auStack_c8);
    param_1 = param_1 * 0xcd0;
    if ((&DAT_0005e09d)[param_1] != '\0') {
      if ((byte)(&DAT_0005e094)[param_1] < 2) {
        FUN_0001dbc8(acStack_a8,acStack_e8,0x20);
      }
      else {
        if ((&DAT_0005e0b1)[param_1] == '\0') {
          FUN_0001dbc8(&DAT_0005e0b1 + param_1,acStack_e8,8);
        }
        else {
          iVar1 = strncmp(&DAT_0005e0b1 + param_1,acStack_e8,7);
          if (iVar1 != 0) {
            error_at_line(0,0,"yi_p2p.c",0x5df,"session nonce not match!\n");
            return 4;
          }
        }
        FUN_0001dbc8(acStack_a8,auStack_e1,9);
      }
      iVar4 = *(int *)(&DAT_0005e090 + param_1);
      iVar1 = 0;
      do {
        iVar2 = strcmp((char *)((int)&DAT_0005e06c + ((iVar1 + iVar4) % 100) * 0x20 + param_1 + 0x4d
                               ),acStack_a8);
        iVar1 = iVar1 + 1;
        if (iVar2 == 0) {
          error_at_line(0,0,"yi_p2p.c",0x5ef,"lately used nonce!\n");
          return 2;
        }
      } while (iVar1 != 100);
      snprintf(acStack_68,0x40,"user=xiaoyiuser&nonce=%s",acStack_e8);
      FUN_0001e8d4(&DAT_0005e09d + param_1,acStack_68,auStack_108);
      iVar1 = memcmp(auStack_108,auStack_c8,0xf);
      if (iVar1 != 0) {
        error_at_line(0,0,"yi_p2p.c",0x5fe,"cached pwd wrong\n");
        return 1;
      }
      FUN_0001dbc8((int)&DAT_0005e06c + *(int *)(&DAT_0005e090 + param_1) * 0x20 + param_1 + 0x4d,
                   acStack_a8,0x20);
      *(int *)(&DAT_0005e090 + param_1) = (*(int *)(&DAT_0005e090 + param_1) + 1) % 100;
      return 0;
    }
    if ((byte)(&DAT_0005e094)[param_1] < 2) {
      FUN_0001dbc8(acStack_a8,acStack_e8,0x20);
    }
    else {
      if ((&DAT_0005e0b1)[param_1] == '\0') {
        FUN_0001dbc8(&DAT_0005e0b1 + param_1,acStack_e8,8);
      }
      else {
        iVar1 = strncmp(&DAT_0005e0b1 + param_1,acStack_e8,7);
        if (iVar1 != 0) {
          error_at_line(0,0,"yi_p2p.c",0x58e,"session nonce not match!\n");
          return 4;
        }
      }
      FUN_0001dbc8(acStack_a8,auStack_e1,9);
    }
    iVar4 = *(int *)(&DAT_0005e090 + param_1);
    iVar1 = 0;
    do {
      iVar2 = strcmp((char *)((int)&DAT_0005e06c + ((iVar1 + iVar4) % 100) * 0x20 + param_1 + 0x4d),
                     acStack_a8);
      iVar1 = iVar1 + 1;
      if (iVar2 == 0) {
        error_at_line(0,0,"yi_p2p.c",0x59e,"lately used nonce!\n");
        return 2;
      }
    } while (iVar1 != 100);
    if (*param_3 == '\0') {
      if (*param_5 != '\0') {
        snprintf(acStack_68,0x40,"user=xiaoyiuser&nonce=%s",acStack_e8);
        FUN_0001e8d4(param_5,acStack_68,auStack_108);
        iVar1 = memcmp(auStack_108,auStack_c8,0xf);
        if (iVar1 == 0) {
          FUN_0001dbc8(&DAT_0005e09d + param_1,param_5,0x14);
          FUN_0001dbc8((int)&DAT_0005e06c +
                       *(int *)(&DAT_0005e090 + param_1) * 0x20 + param_1 + 0x4d,acStack_a8,0x20);
          iVar1 = *(int *)(&DAT_0005e090 + param_1) + 1;
          puVar5 = (undefined1 *)((ulonglong)((longlong)iVar1 * 0x51eb851f) >> 0x20);
          goto LAB_00020d74;
        }
      }
    }
    else {
      snprintf(acStack_68,0x40,"user=xiaoyiuser&nonce=%s",acStack_e8);
      FUN_0001e8d4(param_3,acStack_68,auStack_108);
      iVar1 = memcmp(auStack_108,auStack_c8,0xf);
      if (iVar1 == 0) {
        FUN_0001dbc8(&DAT_0005e09d + param_1,param_3,0x14);
        FUN_0001dbc8((int)&DAT_0005e06c + *(int *)(&DAT_0005e090 + param_1) * 0x20 + param_1 + 0x4d,
                     acStack_a8,0x20);
        iVar1 = *(int *)(&DAT_0005e090 + param_1) + 1;
        puVar5 = (undefined1 *)((ulonglong)((longlong)iVar1 * 0x51eb851f) >> 0x20);
LAB_00020d74:
        puVar6 = puVar5;
        if (param_6 != (undefined1 *)0x0) {
          puVar6 = param_6;
        }
        *(int *)(&DAT_0005e090 + param_1) = iVar1 + (((int)puVar5 >> 5) - (iVar1 >> 0x1f)) * -100;
        if (param_6 != (undefined1 *)0x0) {
          *puVar6 = 1;
        }
        goto LAB_00020874;
      }
      if ((*param_4 != '\0') && (iVar1 = strcmp(param_3,param_4), iVar1 != 0)) {
        FUN_0001e8d4(param_4,acStack_68,auStack_108);
        iVar1 = memcmp(auStack_108,auStack_c8,0xf);
        if (iVar1 == 0) {
          FUN_0001dbc8(&DAT_0005e09d + param_1,param_4,0x14);
          FUN_0001dbc8((int)&DAT_0005e06c +
                       *(int *)(&DAT_0005e090 + param_1) * 0x20 + param_1 + 0x4d,acStack_a8,0x20);
          FUN_00047d34(*(int *)(&DAT_0005e090 + param_1) + 1,100);
          *(undefined4 *)(&DAT_0005e090 + param_1) = extraout_r1;
          error_at_line(0,0,"yi_p2p.c",0x5bc,"use tmp_pwd\n");
          return 0;
        }
      }
    }
    error_at_line(0,0,"yi_p2p.c",0x5d3,"pwd wrong\n");
    uVar3 = 1;
  }
  else {
LAB_00020874:
    uVar3 = 0;
  }
  return uVar3;
}



undefined4
yi_p2p_process_ability_sets(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (*(ushort *)((int)&DAT_00049130 + iVar3) == param_2) {
      uVar2 = *(uint *)((int)&DAT_0004912c + iVar3);
      if ((uVar2 < 0xa0) &&
         (((int)(uint)*(byte *)(param_4 + (uVar2 >> 3)) >> (uVar2 & 7) & 1U) == 0)) {
        if ((ushort)(&DAT_00049132)[iVar1 * 4] != 0) {
          param_2 = (uint)(ushort)(&DAT_00049132)[iVar1 * 4];
        }
        FUN_0001e9ec(param_1,param_2);
        return 0xffffffff;
      }
    }
    iVar3 = iVar3 + 8;
    iVar1 = iVar1 + 1;
    if (iVar3 == 0x138) {
      return 0;
    }
  } while( true );
}



bool yi_p2p_is_alive(int param_1)

{
  return (&DAT_0005e06c)[param_1 * 0x334] == 2;
}



int yi_p2p_count_session(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_0005e054;
  do {
    piVar1 = (int *)(puVar3 + 0x18);
    puVar3 = puVar3 + 0xcd0;
    if (*piVar1 == 2) {
      iVar2 = iVar2 + 1;
    }
  } while (puVar3 != (undefined *)0x66074);
  return iVar2;
}



int yi_p2p_count_viewer(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  puVar2 = &DAT_0005e054;
  do {
    while ((*(int *)(puVar2 + 0x18) == 2 && ((puVar2[0x45] != '\0' || (puVar2[0x46] != '\0'))))) {
      puVar2 = puVar2 + 0xcd0;
      iVar1 = iVar1 + 1;
      if (puVar2 == (undefined *)0x66074) {
        return iVar1;
      }
    }
    puVar2 = puVar2 + 0xcd0;
  } while (puVar2 != (undefined *)0x66074);
  return iVar1;
}



void yi_p2p_share_bandwidth(void)

{
  PPPP_Share_Bandwidth();
  return;
}



void yi_p2p_get_login_status(uint *param_1)

{
  byte local_9;
  
  PPPP_LoginStatus_Check(&local_9);
  *param_1 = (uint)local_9;
  return;
}



undefined4 yi_p2p_release_session(int param_1)

{
  undefined4 uVar1;
  
  error_at_line(0,0,"yi_p2p.c",0x728,"release session: sid(%d), tnp_sid(%d)\n",param_1,
                *(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0));
  if ((&DAT_0005e06c)[param_1 * 0x334] == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    PPPP_ForceClose(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0));
    memset(&DAT_0005e06c + param_1 * 0x334,0,0xcd0);
    uVar1 = 0;
  }
  return uVar1;
}



undefined1 yi_p2p_is_audio_requested(int param_1)

{
  return (&DAT_0005e09b)[param_1 * 0xcd0];
}



undefined1 yi_p2p_is_video_requested(int param_1)

{
  return (&DAT_0005e09a)[param_1 * 0xcd0];
}



undefined1 yi_p2p_is_replay(int param_1)

{
  return (&DAT_0005e099)[param_1 * 0xcd0];
}



void yi_p2p_set_replay_failed(int param_1)

{
  (&DAT_0005e09a)[param_1 * 0xcd0] = 1;
  (&DAT_0005e099)[param_1 * 0xcd0] = 0;
  return;
}



undefined4 yi_p2p_get_resolution(int param_1)

{
  return *(undefined4 *)(&DAT_0005e084 + param_1 * 0xcd0);
}



uint yi_p2p_get_replay_speed(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_0005e08c + param_1 * 0xcd0);
  if (uVar1 != 0) {
    if (0x1f < uVar1) {
      uVar1 = 0x20;
    }
    return uVar1;
  }
  return 1;
}



int FUN_0002111c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int aiStack_54 [14];
  
  iVar3 = param_1[5];
  uVar4 = iVar3 + 0x76c;
  aiStack_54[1] = 0x1f;
  aiStack_54[2] = 0x1c;
  aiStack_54[3] = 0x1f;
  aiStack_54[4] = 0x1e;
  aiStack_54[5] = 0x1f;
  aiStack_54[6] = 0x1e;
  aiStack_54[7] = 0x1f;
  aiStack_54[8] = 0x1f;
  aiStack_54[9] = 0x1e;
  aiStack_54[10] = 0x1f;
  aiStack_54[0xb] = 0x1e;
  aiStack_54[0xc] = 0x1f;
  iVar5 = param_1[4];
  if ((uVar4 == ((int)uVar4 / 100) * 100) || ((uVar4 & 3) != 0)) {
    if (iVar5 < 1) {
      if (uVar4 != ((int)uVar4 / 400) * 400) {
        iVar1 = iVar3 + -0x44;
        if (iVar1 < 0) {
          iVar1 = iVar3 + -0x41;
        }
        iVar1 = iVar1 >> 2;
        iVar5 = 0;
        goto LAB_000211c0;
      }
      goto LAB_00021250;
    }
  }
  else if (iVar5 < 1) {
LAB_00021250:
    iVar5 = iVar3 + -0x44;
    if (iVar5 < 0) {
      iVar5 = iVar3 + -0x41;
    }
    iVar1 = (iVar5 >> 2) + -1;
    iVar5 = 0;
    goto LAB_000211c0;
  }
  iVar1 = iVar3 + -0x44;
  if (iVar1 < 0) {
    iVar1 = iVar3 + -0x41;
  }
  piVar2 = aiStack_54;
  iVar1 = iVar1 >> 2;
  piVar6 = piVar2 + iVar5;
  iVar5 = 0;
  do {
    piVar2 = piVar2 + 1;
    iVar5 = iVar5 + *piVar2;
  } while (piVar2 != piVar6);
LAB_000211c0:
  return ((iVar3 + -0x46) * 0x16d + iVar1 + param_1[3] + -1 + iVar5) * 0x15180 + param_1[2] * 0xe10
         + param_1[1] * 0x3c + *param_1;
}



undefined4
yi_p2p_reply_ap_conf
          (undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 local_64;
  undefined1 auStack_63 [32];
  undefined1 auStack_43 [35];
  
  memset(&local_64,0,0x41);
  local_64 = param_3;
  FUN_0001dbc8(auStack_63,param_4,0x20);
  FUN_0001dbc8(auStack_43,param_5,0x20);
  uVar1 = FUN_0001e664(param_1,0x5c03,param_2,&local_64,0x41);
  error_at_line(0,0,"yi_p2p.c",0x853,"IOTYPE_USER_IPCAM_GET_AP_MODE_RESP, ret = %d\n",uVar1);
  return uVar1;
}



undefined4 yi_p2p_reply_device_param_conf(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  char acStack_98 [128];
  
  memset(acStack_98,0,0x80);
  strcpy(acStack_98,param_3);
  uVar1 = FUN_0001e664(param_1,0x6004,param_2,acStack_98,0x80);
  error_at_line(0,0,"yi_p2p.c",0x862,
                "IOTYPE_USER_IPCAM_GET_DEVICE_PARAM_RESP, ret = %d resp.hwconfig:%s\n",uVar1,
                acStack_98);
  return uVar1;
}



undefined4 yi_p2p_reply_alert_days(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_11c;
  uint local_118 [61];
  uint local_4;
  
  local_4 = param_4;
  memset(&local_11c,0,0xf4);
  local_11c = (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
              (param_3 >> 8 | param_3 << 0x18);
  if (0 < (int)param_3) {
    iVar3 = 0;
    do {
      uVar2 = *(uint *)((int)&local_4 + iVar3);
      iVar4 = iVar3 + 4;
      *(uint *)((int)local_118 + iVar3) =
           (uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10)) >> 8 & 0xffff00ff ^
           (uVar2 >> 8 | uVar2 << 0x18);
      iVar3 = iVar4;
    } while (iVar4 != param_3 * 4);
  }
  error_at_line(0,0,"yi_p2p.c",0x874,"##hxq alert days count: %d, resp_len: %d\n",param_3,
                (param_3 + 1) * 4);
  uVar1 = FUN_0001e664(param_1,0x5c05,param_2,&local_11c,(param_3 + 1 & 0x3fff) << 2);
  error_at_line(0,0,"yi_p2p.c",0x876,"IOTYPE_USER_IPCAM_GET_DAY_EVENT_LIST_RESP, ret = %d\n",uVar1);
  return uVar1;
}



undefined4 yi_p2p_reply_alert_events(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint auStack_c034 [3];
  uint auStack_c028 [12287];
  
  memset(auStack_c034,0,0xc004);
  error_at_line(0,0,"yi_p2p.c",0x884,"##hxq alert event count: %d\n",param_3);
  auStack_c034[0] =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  if (0 < (int)param_3) {
    puVar5 = (uint *)&stack0x00000004;
    puVar7 = auStack_c028;
    do {
      uVar3 = puVar5[-1];
      uVar2 = puVar5[-2];
      puVar6 = puVar5 + 3;
      uVar4 = *puVar5;
      puVar7[-1] = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
                   (uVar3 >> 8 | uVar3 << 0x18);
      puVar7[-2] = (uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10)) >> 8 & 0xffff00ff ^
                   (uVar2 >> 8 | uVar2 << 0x18);
      *puVar7 = (uVar4 ^ (uVar4 >> 0x10 | uVar4 << 0x10)) >> 8 & 0xffff00ff ^
                (uVar4 >> 8 | uVar4 << 0x18);
      puVar5 = puVar6;
      puVar7 = puVar7 + 3;
    } while (puVar6 != (uint *)((int)&stack0x00000004 + param_3 * 3 * 4));
  }
  uVar2 = param_3 * 0xc + 4;
  error_at_line(0,0,"yi_p2p.c",0x88c,"##hxq alert event resp_len: %d\n",uVar2);
  uVar1 = FUN_0001e664(param_1,0x5c07,param_2,auStack_c034,uVar2 & 0xffff);
  error_at_line(0,0,"yi_p2p.c",0x88e,"IOTYPE_USER_IPCAM_GET_ALARM_EVENT_LIST_RESP, ret = %d\n",uVar1
               );
  return uVar1;
}



undefined4 yi_p2p_login_status_check(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = PPPP_LoginStatus_Check();
    return uVar1;
  }
  return 0xffffffff;
}



void yi_p2p_listen_break(void)

{
  DAT_000660f0 = 0;
  PPPP_Listen_Break();
  return;
}



int yi_p2p_reply_record_events_day(uint param_1,int param_2,time_t *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *__ptr;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  time_t *ptVar5;
  size_t __size;
  tm local_54;
  
  if (param_1 < 10) {
    iVar3 = param_4 + 1;
    __size = iVar3 * 0xc + 0x30;
    __ptr = calloc(1,__size);
    if (__ptr == (undefined1 *)0x0) {
      error_at_line(0,0,"yi_p2p.c",0x8b0,"calloc(1, %d) failed\n",__size);
      iVar3 = -1;
    }
    else {
      uVar2 = iVar3 * 0xc + 0x28;
      uVar1 = (&DAT_0005e094)[param_1 * 0xcd0];
      *(uint *)(__ptr + 4) = (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 * 0x1000000;
      *__ptr = uVar1;
      *(ushort *)(__ptr + 10) = (ushort)(param_2 << 8) | (ushort)((uint)param_2 >> 8);
      *(ushort *)(__ptr + 0xe) =
           (short)iVar3 * 0xc00 | (ushort)(byte)((uint)(iVar3 * 0xc0000) >> 0x18);
      *(ushort *)(__ptr + 0x30) = (ushort)(param_4 << 8) | (ushort)((uint)param_4 >> 8);
      *(undefined2 *)(__ptr + 8) = 0x1314;
      __ptr[1] = 3;
      *(undefined2 *)(__ptr + 0xc) = 0;
      *(undefined4 *)(__ptr + 0x10) = 0;
      if (param_4 != 0) {
        ptVar5 = param_3 + (param_4 - 1U & 0xffff) * 2 + 2;
        puVar4 = (uint *)(__ptr + 0x44);
        do {
          gmtime_r(param_3,&local_54);
          *(char *)((int)puVar4 + -3) = (char)local_54.tm_hour;
          *(ushort *)(puVar4 + -2) =
               (short)(local_54.tm_year + 0x76c) * 0x100 |
               (ushort)(byte)((uint)((local_54.tm_year + 0x76c) * 0x10000) >> 0x18);
          *(char *)((int)puVar4 + -6) = (char)local_54.tm_mon + '\x01';
          *(char *)((int)puVar4 + -5) = (char)local_54.tm_mday;
          *(char *)((int)puVar4 + -2) = (char)local_54.tm_min;
          *(char *)((int)puVar4 + -1) = (char)local_54.tm_sec;
          *(char *)(puVar4 + -1) = (char)local_54.tm_wday;
          uVar2 = param_3[1];
          param_3 = param_3 + 2;
          *puVar4 = (uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10)) >> 8 & 0xffff00ff ^
                    (uVar2 >> 8 | uVar2 << 0x18);
          puVar4 = puVar4 + 3;
        } while (param_3 != ptVar5);
      }
      iVar3 = PPPP_Write(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),0,__ptr,__size);
      free(__ptr);
      if (iVar3 < 0) {
        error_at_line(0,0,"yi_p2p.c",0x8d7,
                      "yi_p2p_reply_record_events_day failed, send_len:%d ret = %d\n",__size,iVar3);
        return iVar3;
      }
      error_at_line(0,0,"yi_p2p.c",0x8db,"yi_p2p_reply_record_events_day ok, send_len:%d ret = %d\n"
                    ,__size,iVar3);
    }
  }
  else {
    error_at_line(0,0,"yi_p2p.c",0x8a7,"expected sid(%u) < YI_P2P_MAX_SESSION(%d)\n",param_1,10);
    iVar3 = -1;
  }
  return iVar3;
}



int yi_p2p_reply_record_events_month(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint auStack_c024 [3];
  uint auStack_c018 [12286];
  
  memset(auStack_c024,0,0xc004);
  error_at_line(0,0,"yi_p2p.c",0x8e9,"##yi_p2p_reply_record_events_monthcount: %d\n",param_4);
  auStack_c024[0] = param_4 << 0x18 | (param_4 & 0xff00) << 8;
  if (param_4 != 0) {
    iVar1 = 0;
    puVar4 = auStack_c018;
    do {
      puVar2 = (uint *)(param_3 + iVar1);
      uVar5 = *puVar2;
      iVar1 = iVar1 + 8;
      uVar3 = puVar2[1];
      puVar4[-1] = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                   (uVar5 >> 8 | uVar5 << 0x18);
      puVar4[-2] = 0;
      *puVar4 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
                (uVar3 >> 8 | uVar3 << 0x18);
      puVar4 = puVar4 + 3;
    } while (iVar1 != param_4 << 3);
  }
  uVar3 = param_4 * 0xc + 4;
  iVar1 = FUN_0001e664(param_1,0x1411,param_2,auStack_c024,uVar3 & 0xffff);
  if (iVar1 < 0) {
    error_at_line(0,0,"yi_p2p.c",0x8f5,
                  "yi_p2p_reply_record_events_month failed, resp_len:%d ret = %d\n",uVar3,iVar1);
    return iVar1;
  }
  error_at_line(0,0,"yi_p2p.c",0x8f9,"yi_p2p_reply_record_events_month ok, resp_len:%d ret = %d\n",
                uVar3,iVar1);
  return iVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

uint yi_p2p_process_msg(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  size_t sVar9;
  uint uVar10;
  uint extraout_r1;
  undefined *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  int iVar25;
  uint local_4e4;
  uint local_4e0;
  undefined1 local_4dc [44];
  undefined1 local_4b0 [64];
  undefined4 local_470;
  uint local_46c;
  uint local_468;
  uint local_464;
  uint local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 uStack_448;
  undefined4 local_444;
  uint auStack_440 [4];
  byte local_430 [4];
  uint local_42c;
  ushort auStack_428 [4];
  undefined1 auStack_420 [32];
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  uint auStack_3f4 [2];
  uint auStack_3ec [3];
  undefined1 auStack_3df [955];
  
  iVar6 = param_1 * 0xcd0;
  local_4e4 = 8;
  uVar5 = PPPP_Read(*(undefined4 *)(&DAT_0005e070 + iVar6),0,local_430,&local_4e4,10);
  if (uVar5 != 0 && uVar5 != 0xfffff445) {
    (&DAT_0005e06c)[param_1 * 0x334] = 1;
    error_at_line(0,0,"yi_p2p.c",0xdd2,"yi_p2p_process_msg: failed(%d), tnp_sid(%d)!!\n",uVar5,
                  *(undefined4 *)(&DAT_0005e070 + iVar6));
    if ((uVar5 + 0xbd1 < 0x19) && ((1 << (uVar5 + 0xbd1 & 0xff) & 0x1104021U) != 0)) {
      error_at_line(0,0,"yi_p2p.c",0xddb,
                    "yi_p2p_process_msg: uid(%.5s), read_err_code(%d), tnp_sid(%d), chn(0)\n",
                    &DAT_000660bc,uVar5,*(undefined4 *)(&DAT_0005e070 + iVar6));
      return uVar5;
    }
    return uVar5;
  }
  if ((int)local_4e4 < 1) {
    return local_4e4;
  }
  local_4e4 = (local_42c ^ (local_42c >> 0x10 | local_42c << 0x10)) >> 8 & 0xffff00ff ^
              (local_42c >> 8 | local_42c << 0x18);
  if (0x400 < local_4e4) {
    return local_4e4;
  }
  uVar5 = PPPP_Read(*(undefined4 *)(&DAT_0005e070 + iVar6),0,auStack_428,&local_4e4,10);
  if (uVar5 != 0 && uVar5 != 0xfffff445) {
    (&DAT_0005e06c)[param_1 * 0x334] = 1;
    error_at_line(0,0,"yi_p2p.c",0xdeb,"yi_p2p_process_msg: failed(%d)!!\n",uVar5);
    if (0x18 < uVar5 + 0xbd1) {
      return uVar5;
    }
    if ((1 << (uVar5 + 0xbd1 & 0xff) & 0x1104021U) != 0) {
      error_at_line(0,0,"yi_p2p.c",0xdf4,
                    "yi_p2p_process_msg: uid(%.5s), read_err_code(%d), tnp_sid(%d), chn(0)\n",
                    &DAT_000660bc,uVar5,*(undefined4 *)(&DAT_0005e070 + iVar6));
      return uVar5;
    }
    return uVar5;
  }
  if ((int)local_4e4 < 1) {
    return local_4e4;
  }
  if (2 < local_430[0]) {
    error_at_line(0,0,"yi_p2p.c",0xe02,"yi_p2p_process_msg: unsupport version(%u)\n",local_430[0]);
    local_468 = 0;
    local_464 = 0;
    local_45c = 0;
    local_458 = 0;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0;
    uStack_448 = 0;
    local_444 = 0;
    uVar1 = auStack_428[0] << 8 | auStack_428[0] >> 8;
    local_46c = 0x28000000;
    local_470 = 0x302;
    local_460 = 0x3000000;
    yi_report_debug_strings
              (2,5,"p2p_reply_unsupported_versio:ctrl_type:(0x%0x),sid(%d)\n",uVar1,param_1);
    if (uVar1 == 0x130a) {
                    // WARNING: Ignoring partial resolution of indirect
      local_468._0_2_ = 0xb13;
      goto LAB_00021f90;
    }
    if (uVar1 < 0x130a) {
      if (uVar1 == 0x1300) {
                    // WARNING: Ignoring partial resolution of indirect
        local_468._0_2_ = 0x113;
        goto LAB_00021f90;
      }
      if (uVar1 < 0x1301) {
        if (uVar1 == 0x318) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x1903;
          goto LAB_00021f90;
        }
        if (uVar1 == 0x330) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x3103;
          goto LAB_00021f90;
        }
      }
      else {
        if (uVar1 == 0x1304) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0xc13;
          goto LAB_00021f90;
        }
        if (uVar1 == 0x1305) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0xd13;
          goto LAB_00021f90;
        }
        if (uVar1 == 0x1302) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0xf13;
          goto LAB_00021f90;
        }
      }
    }
    else {
      if (uVar1 == 0x1315) {
                    // WARNING: Ignoring partial resolution of indirect
        local_468._0_2_ = 0x1613;
        goto LAB_00021f90;
      }
      if (uVar1 < 0x1316) {
        if (uVar1 == 0x1311) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x1213;
          goto LAB_00021f90;
        }
        if (uVar1 == 0x1313) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x1213;
          goto LAB_00021f90;
        }
      }
      else {
        if (uVar1 == 0x2347) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x4823;
          goto LAB_00021f90;
        }
        if (uVar1 == 0xff00) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x1ff;
          goto LAB_00021f90;
        }
        if (uVar1 == 0x131f) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x2013;
          goto LAB_00021f90;
        }
      }
    }
                    // WARNING: Ignoring partial resolution of indirect
    local_468._0_2_ = 0xffff;
LAB_00021f90:
    PPPP_Write(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),0,&local_470,0x30);
    error_at_line(0,0,"yi_p2p.c",0x69c,
                  "send auth unsupported version: sid=%d, type=0x%02x, resp_type=0x%02x\n",param_1,
                  uVar1,(local_468 & 0xff) << 8 | local_468 >> 8 & 0xff);
    return local_4e4;
  }
  (&DAT_0005e094)[iVar6] = local_430[0];
  local_4e0 = 0;
  uVar5 = yi_p2p_on_auth(param_1,auStack_420);
  uVar1 = auStack_428[0] << 8 | auStack_428[0] >> 8;
  if (uVar5 != 0 || uVar1 == 0xff00) {
    error_at_line(0,0,"yi_p2p.c",0x911,"yi_p2p_on_auth failed! auth_ret = 0x%x\r\n",uVar1);
    local_460 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                (uVar5 >> 8 | uVar5 << 0x18);
    local_468 = 0;
    local_464 = 0;
    local_45c = 0;
    local_458 = 0;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0;
    uStack_448 = 0;
    local_444 = 0;
    local_46c = 0x28000000;
    local_470._0_2_ = CONCAT11(3,(&DAT_0005e094)[iVar6]);
    local_470 = (uint)(ushort)local_470;
    if (uVar1 == 0x130a) {
                    // WARNING: Ignoring partial resolution of indirect
      local_468._0_2_ = 0xb13;
      goto LAB_00021dc0;
    }
    if (uVar1 < 0x130a) {
      if (uVar1 == 0x1300) {
                    // WARNING: Ignoring partial resolution of indirect
        local_468._0_2_ = 0x113;
        goto LAB_00021dc0;
      }
      if (uVar1 < 0x1301) {
        if (uVar1 == 0x318) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x1903;
          goto LAB_00021dc0;
        }
        if (uVar1 == 0x330) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x3103;
          goto LAB_00021dc0;
        }
      }
      else {
        if (uVar1 == 0x1304) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0xc13;
          goto LAB_00021dc0;
        }
        if (uVar1 == 0x1305) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0xd13;
          goto LAB_00021dc0;
        }
        if (uVar1 == 0x1302) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0xf13;
          goto LAB_00021dc0;
        }
      }
    }
    else {
      if (uVar1 == 0x1315) {
                    // WARNING: Ignoring partial resolution of indirect
        local_468._0_2_ = 0x1613;
        goto LAB_00021dc0;
      }
      if (uVar1 < 0x1316) {
        if (uVar1 == 0x1311) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x1213;
          goto LAB_00021dc0;
        }
        if (uVar1 == 0x1313) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x1213;
          goto LAB_00021dc0;
        }
      }
      else {
        if (uVar1 == 0x2347) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x4823;
          goto LAB_00021dc0;
        }
        if (uVar1 == 0xff00) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x1ff;
          goto LAB_00021dc0;
        }
        if (uVar1 == 0x131f) {
                    // WARNING: Ignoring partial resolution of indirect
          local_468._0_2_ = 0x2013;
          goto LAB_00021dc0;
        }
      }
    }
                    // WARNING: Ignoring partial resolution of indirect
    local_468._0_2_ = 0xffff;
LAB_00021dc0:
    PPPP_Write(*(undefined4 *)(&DAT_0005e070 + param_1 * 0xcd0),0,&local_470,0x30);
    error_at_line(0,0,"yi_p2p.c",0x64d,
                  "send auth result: sid=%d, type=0x%02x, resp_type=0x%02x, result=%u\n",param_1,
                  uVar1,(local_468 & 0xff) << 8 | local_468 >> 8 & 0xff,uVar5);
    return local_4e4;
  }
  uVar2 = auStack_428[1] << 8 | auStack_428[1] >> 8;
  iVar6 = yi_p2p_on_process_ability_sets(param_1,uVar1,uVar2);
  if (iVar6 < 0) {
    return local_4e4;
  }
  yi_report_debug_strings(1,5,"ctrl_type:(0x%x)\n",uVar1);
  uVar5 = (auStack_428[2] & 0xff) << 8 | (uint)(auStack_428[2] >> 8);
  if (uVar1 == 0x1382) {
    yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_ALARM_SOUND:sid(%d)\n",param_1);
    error_at_line(0,0,"yi_p2p.c",0xb33,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ALARM_SOUND\n",
                  param_1);
    memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
    yi_p2p_on_set_alarm_sound
              (((local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff) !=
               (local_4e0 >> 8 | local_4e0 << 0x18));
    yi_p2p_on_get_dev_info(param_1,0x1383,uVar2);
    goto LAB_000221a0;
  }
  if (uVar1 < 0x1382) {
    if (uVar1 == 0x1325) {
      yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_MOTION_DETECT:sid(%d)\n",param_1);
      iVar6 = uVar5 + 0x28;
      error_at_line(0,0,"yi_p2p.c",0xae2,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_MOTION_DETECT\n"
                    ,param_1);
      uVar18 = *(uint *)((int)auStack_428 + iVar6);
      uVar20 = *(uint *)((int)&uStack_3fc + uVar5);
      uVar23 = *(uint *)((int)auStack_3f4 + uVar5);
      uVar10 = *(uint *)((int)auStack_3f4 + uVar5 + 4);
      uVar19 = *(uint *)((int)auStack_3f4 + (uVar5 - 4));
      uVar16 = *(uint *)((int)auStack_3ec + uVar5);
      uVar21 = *(uint *)((int)auStack_3f4 + uVar5);
      uVar22 = *(uint *)((int)auStack_3ec + uVar5);
      uVar17 = *(uint *)((int)auStack_3f4 + uVar5 + 4);
      *(uint *)((int)auStack_428 + iVar6) =
           (uVar18 ^ (uVar18 >> 0x10 | uVar18 << 0x10)) >> 8 & 0xffff00ff ^
           (uVar18 >> 8 | uVar18 << 0x18);
      *(uint *)((int)&uStack_3fc + uVar5) =
           (uVar20 ^ (uVar20 >> 0x10 | uVar20 << 0x10)) >> 8 & 0xffff00ff ^
           (uVar20 >> 8 | uVar20 << 0x18);
      *(uint *)((int)auStack_3f4 + (uVar5 - 4)) =
           (uVar19 ^ (uVar19 >> 0x10 | uVar19 << 0x10)) >> 8 & 0xffff00ff ^
           (uVar19 >> 8 | uVar19 << 0x18);
      *(uint *)((int)auStack_3f4 + uVar5) =
           (uVar23 ^ (uVar23 >> 0x10 | uVar23 << 0x10)) >> 8 & 0xffff00ff ^
           (uVar21 >> 8 | uVar21 << 0x18);
      *(uint *)((int)auStack_3f4 + uVar5 + 4) =
           (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
           (uVar17 >> 8 | uVar17 << 0x18);
      *(uint *)((int)auStack_3ec + uVar5) =
           (uVar16 ^ (uVar16 >> 0x10 | uVar16 << 0x10)) >> 8 & 0xffff00ff ^
           (uVar22 >> 8 | uVar22 << 0x18);
      yi_p2p_on_set_motion_detect(param_1,uVar2,(int)auStack_428 + iVar6);
      goto LAB_000221a0;
    }
    if (uVar1 < 0x1325) {
      if (uVar1 == 0x1230) {
        yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_MOTION_DETECT_STATUS:sid(%d)\n",param_1);
        error_at_line(0,0,"yi_p2p.c",0xacc,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_MOTION_DETECT_STATUS\n",param_1);
        memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
        error_at_line(0,0,"yi_p2p.c",0xacf,"value = %d\n",
                      (local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                      (local_4e0 >> 8 | local_4e0 << 0x18));
        yi_p2p_on_get_dev_info(param_1,0x1231,uVar2);
        goto LAB_000221a0;
      }
      if (uVar1 < 0x1230) {
        if (uVar1 == 0x31a) {
          yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_RECORD_PLAYCONTROL:sid(%d)\n",param_1);
          uVar5 = *(uint *)((int)&uStack_3fc + uVar5);
          error_at_line(0,0,"yi_p2p.c",0x9fd,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_RECORD_PLAYCONTROL p->command(0x%x)\n"
                        ,param_1,(uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                                 (uVar5 >> 8 | uVar5 << 0x18));
          iVar6 = param_1 * 0xcd0;
          (&DAT_0005e099)[iVar6] = 0;
          (&DAT_0005e09a)[iVar6] = 0;
          yi_p2p_on_stop_replay(param_1);
          error_at_line(0,0,"yi_p2p.c",0xa02,"do_replay stop\n");
          cVar4 = (&DAT_0005e09c)[iVar6];
joined_r0x00024d4c:
          if (cVar4 != '\0') {
            yi_p2p_on_stop_viewing();
            (&DAT_0005e09c)[param_1 * 0xcd0] = 0;
          }
          goto LAB_000221a0;
        }
        if (uVar1 < 0x31a) {
          if (uVar1 == 0x300) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_AUDIOSTART:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0x9bd,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_AUDIOSTART\n",
                          param_1);
            (&DAT_0005e09b)[param_1 * 0xcd0] = 1;
            goto LAB_000221a0;
          }
          if (uVar1 < 0x301) {
            if (uVar1 == 0x2ff) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_STOP:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0x9aa,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_STOP\n",
                            param_1);
              iVar6 = param_1 * 0xcd0;
              (&DAT_0005e09a)[iVar6] = 0;
              (&DAT_0005e09b)[iVar6] = 0;
              if ((&DAT_0005e09c)[iVar6] != '\0') {
                yi_p2p_on_stop_viewing();
              }
              (&DAT_0005e09c)[param_1 * 0xcd0] = 0;
              FUN_0001e92c(param_1);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x301) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_AUDIOSTOP:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0x9c3,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_AUDIOSTOP\n"
                            ,param_1);
              (&DAT_0005e09b)[param_1 * 0xcd0] = 0;
              goto LAB_000221a0;
            }
            if (uVar1 == 0x318) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_LISTEVENT_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0x9f3,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_LISTEVENT_REQ\n",param_1);
              goto LAB_000221a0;
            }
          }
        }
        else {
          if (uVar1 == 0x350) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SPEAKERSTART:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0x9c9,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SPEAKERSTART\n",param_1);
            yi_p2p_on_speaker_start(param_1);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x351) {
            if (uVar1 == 0x330) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_DEVINFO_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0x9ed,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_DEVINFO_REQ\n",param_1);
              yi_p2p_on_get_dev_info(param_1,0x331,uVar2);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x351) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SPEAKERSTOP:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0x9e7,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SPEAKERSTOP\n",param_1);
              yi_p2p_on_speaker_stop(param_1);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x3c0) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_TRIGGER_SYNC_INFO_FROM_SERVER_REQ:sid(%d)\n",param_1
                        );
              error_at_line(0,0,"yi_p2p.c",0xbec,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_TRIGGER_SYNC_INFO_FROM_SERVER_REQ\n"
                            ,param_1);
              yi_p2p_on_sync_info_from_server();
              local_470 = 0;
              FUN_0001e664(param_1,0x3c1,uVar2,&local_470,4);
              goto LAB_000221a0;
            }
          }
        }
      }
      else {
        if (uVar1 == 0x130a) {
          yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_RECORD_MOD:sid(%d)\n",param_1);
          error_at_line(0,0,"yi_p2p.c",0xaa0,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_RECORD_MOD\n",param_1);
          memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
          uVar5 = (local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                  (local_4e0 >> 8 | local_4e0 << 0x18);
          error_at_line(0,0,"yi_p2p.c",0xaa3,"value = %d\n",uVar5);
          if (uVar5 == 1) {
            yi_p2p_on_set_motion_record(0);
          }
          else if (uVar5 == 0) {
            yi_p2p_on_set_motion_record(1);
          }
          yi_p2p_on_get_dev_info(param_1,0x130b,uVar2);
          goto LAB_000221a0;
        }
        if (uVar1 < 0x130b) {
          if (uVar1 == 0x1302) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_UPDATE_URI:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xb02,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_UPDATE_URI\n",param_1);
            yi_p2p_on_update(param_1,uVar2);
            yi_p2p_on_get_dev_info(param_1,0x130f,uVar2);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x1303) {
            if (uVar1 == 0x1300) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_VERSION:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xa63,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_VERSION\n",param_1);
              yi_p2p_on_get_version(param_1,uVar2);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x1304) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_SILENT_MODE:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xa6a,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_SILENT_MODE\n",param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              uVar5 = (local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                      (local_4e0 >> 8 | local_4e0 << 0x18);
              error_at_line(0,0,"yi_p2p.c",0xa6d,"value = %d\n",uVar5);
              if (uVar5 == 0) {
                yi_p2p_on_set_power(1);
              }
              else if (uVar5 == 1) {
                yi_p2p_on_set_power(0);
              }
              yi_p2p_on_get_dev_info(param_1,0x130c,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1305) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_LIGHT:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xa7c,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_LIGHT\n"
                            ,param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              uVar5 = (local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                      (local_4e0 >> 8 | local_4e0 << 0x18);
              error_at_line(0,0,"yi_p2p.c",0xa7f,"value = %d\n",uVar5);
              if (uVar5 == 0) {
                yi_p2p_on_set_light(1);
              }
              else if (uVar5 == 1) {
                yi_p2p_on_set_light(0);
              }
              yi_p2p_on_get_dev_info(param_1,0x130d,uVar2);
              goto LAB_000221a0;
            }
          }
        }
        else {
          if (uVar1 == 0x1315) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_TF_FORMATE:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xb0c,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_TF_FORMATE\n",param_1);
            yi_p2p_on_get_dev_info(param_1,0x1316,uVar2);
            yi_p2p_on_format_sd();
            goto LAB_000221a0;
          }
          if (uVar1 < 0x1316) {
            if (uVar1 == 0x1311) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_RESOLUTION:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xa41,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_RESOLUTION\n",param_1);
              uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
              uVar5 = *(uint *)((int)auStack_428 + uVar5 + 0x28);
              uVar10 = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                       (uVar10 >> 8 | uVar10 << 0x18);
              (&DAT_0005e095)[param_1 * 0xcd0] = (char)uVar10;
              FUN_0001e764(param_1,uVar10,
                           (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                           (uVar5 >> 8 | uVar5 << 0x18),uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1313) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_RESOLUTION:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xa4b,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_RESOLUTION\n",param_1);
              bVar24 = (&DAT_0005e097)[param_1 * 0xcd0] == '\0';
              uVar5 = extraout_r1;
              if (bVar24) {
                uVar5 = *(uint *)(&DAT_0005e084 + param_1 * 0xcd0);
              }
              if (!bVar24) {
                uVar5 = 0;
              }
              local_46c = (uint)(byte)(&DAT_0005e095)[param_1 * 0xcd0] << 0x18;
              if (bVar24) {
                uVar5 = uVar5 + 1;
              }
              local_470 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                          (uVar5 >> 8 | uVar5 << 0x18);
              uVar8 = FUN_0001e664(param_1,0x1314,uVar2,&local_470,8);
              error_at_line(0,0,"yi_p2p.c",0x7b7,"IOTYPE_USER_IPCAM_GET_RESOLUTION_RESP, ret = %d\n"
                            ,uVar8);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x131f) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_MIRROR_FLIP:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xa8e,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_MIRROR_FLIP\n",param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              uVar5 = (local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                      (local_4e0 >> 8 | local_4e0 << 0x18);
              error_at_line(0,0,"yi_p2p.c",0xa91,"value = %d\n",uVar5);
              if (uVar5 == 1) {
                yi_p2p_on_set_mirror_flip(1);
              }
              else if (uVar5 == 0) {
                yi_p2p_on_set_mirror_flip(0);
              }
              yi_p2p_on_get_dev_info(param_1,0x1320,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1321) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_DAYNIGHT_MODE:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xb14,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_DAYNIGHT_MODE\n",param_1);
              uVar5 = *(uint *)((int)&uStack_400 + uVar5);
              uVar5 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                      (uVar5 >> 8 | uVar5 << 0x18);
              error_at_line(0,0,"yi_p2p.c",0xb18,"value = %d\n",uVar5);
              yi_p2p_on_set_day_night_mode(uVar5);
              yi_p2p_on_get_dev_info(param_1,0x1322,uVar2);
              goto LAB_000221a0;
            }
          }
        }
      }
    }
    else {
      if (uVar1 == 0x135b) {
        yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_ALARM_RING:sid(%d)\n",param_1);
        error_at_line(0,0,"yi_p2p.c",0xb2a,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ALARM_RING\n",
                      param_1);
        yi_p2p_on_set_alarm_ring(*(uint *)((int)&uStack_400 + uVar5) >> 0x18);
        yi_p2p_on_get_dev_info(param_1,0x135c,uVar2);
        goto LAB_000221a0;
      }
      if (uVar1 < 0x135b) {
        if (uVar1 == 0x1337) {
          yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_RECORD_SPEED:sid(%d)\n",param_1);
          iVar6 = param_1;
          error_at_line(0,0,"yi_p2p.c",0xa52,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_RECORD_SPEED\n",param_1);
          uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
          uVar5 = *(uint *)((int)auStack_428 + uVar5 + 0x28);
          uVar10 = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                   (uVar10 >> 8 | uVar10 << 0x18);
          uVar5 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                  (uVar5 >> 8 | uVar5 << 0x18);
          (&DAT_0005e095)[param_1 * 0xcd0] = (char)uVar10;
          if (uVar5 == 0) {
            error_at_line(0,0,"yi_p2p.c",0x7f0,"set_replay_speed, param error, speed == 0!\n",iVar6)
            ;
          }
          else {
            *(uint *)(&DAT_0005e08c + param_1 * 0xcd0) = uVar5;
          }
          if (uVar2 != 0xffff) {
            uVar5 = yi_p2p_get_replay_speed(param_1);
            local_46c = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                        (uVar10 >> 8 | uVar10 << 0x18);
            local_470 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                        (uVar5 >> 8 | uVar5 << 0x18);
            uVar8 = FUN_0001e664(param_1,0x1338,uVar2,&local_470,8);
            error_at_line(0,0,"yi_p2p.c",0x7f9,"IOTYPE_USER_IPCAM_SET_RECORD_SPEED_RESP, ret = %d\n"
                          ,uVar8);
          }
          goto LAB_000221a0;
        }
        if (uVar1 < 0x1338) {
          if (uVar1 == 0x132d) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_ALARM_MODE:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xaf8,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ALARM_MODE\n",param_1);
            uVar5 = *(uint *)((int)&uStack_400 + uVar5);
            yi_p2p_on_set_human_motion
                      (((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                       (uVar5 >> 8 | uVar5 << 0x18)) == 1);
            yi_p2p_on_get_dev_info(param_1,0x132e,uVar2);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x132e) {
            if (uVar1 == 0x1327) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_MOTION_DETECT:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xaf1,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_MOTION_DETECT\n",param_1);
              yi_p2p_on_get_motion_detect_cfg(param_1,uVar2);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x132f) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_LDC:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xbf4,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_LDC\n",
                            param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              yi_p2p_on_set_ldc((local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 &
                                0xffff00ff ^ (local_4e0 >> 8 | local_4e0 << 0x18));
              yi_p2p_on_get_dev_info(param_1,0x1330,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1335) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_SET_ALARM_SENSITIVITY:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xb20,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ALARM_SENSITIVITY\n",param_1)
              ;
              uVar5 = *(uint *)((int)&uStack_400 + uVar5);
              yi_p2p_on_set_alarm_sensitivity
                        ((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar5 >> 8 | uVar5 << 0x18));
              yi_p2p_on_get_dev_info(param_1,0x1336,uVar2);
              goto LAB_000221a0;
            }
          }
        }
        else {
          if (uVar1 == 0x133f) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_BABY_CRY:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xbfe,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_BABY_CRY\n",param_1);
            memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
            yi_p2p_on_set_baby_cry
                      (((local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                       (local_4e0 >> 8 | local_4e0 << 0x18)) == 2);
            yi_p2p_on_get_dev_info(param_1,0x1340,uVar2);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x1340) {
            if (uVar1 == 0x1339) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_RECORD_SPEED:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xa5c,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_RECORD_SPEED\n",param_1);
              uVar5 = yi_p2p_get_replay_speed(param_1);
              local_46c = (uint)(byte)(&DAT_0005e095)[param_1 * 0xcd0] << 0x18;
              local_470 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                          (uVar5 >> 8 | uVar5 << 0x18);
              uVar8 = FUN_0001e664(param_1,0x133a,uVar2,&local_470,8);
              error_at_line(0,0,"yi_p2p.c",0x806,
                            "IOTYPE_USER_IPCAM_GET_RECORD_SPEED_RESP, ret = %d\n",uVar8);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x133b) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_MIC_VOLUME:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xc08,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_MIC_VOLUME\n",param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              yi_p2p_on_set_mic_volume
                        ((local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                         (local_4e0 >> 8 | local_4e0 << 0x18));
              yi_p2p_on_get_dev_info(param_1,0x133c,uVar2);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x1353) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_SET_VIDEO_BACKUP_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xb3d,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_VIDEO_BACKUP_REQ\n",param_1);
              yi_p2p_on_set_video_backup(param_1,uVar2,(int)auStack_428 + uVar5 + 0x28);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1355) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_GET_VIDEO_BACKUP_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xb45,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_VIDEO_BACKUP_REQ\n",param_1);
              yi_p2p_on_get_video_backup_state(param_1,uVar2);
              goto LAB_000221a0;
            }
          }
        }
      }
      else {
        if (uVar1 == 0x1369) {
          yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_VOICE_CTRL_REQ:sid(%d)\n",param_1);
          error_at_line(0,0,"yi_p2p.c",0xc1c,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_VOICE_CTRL_REQ\n",param_1);
          memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
          yi_p2p_on_set_voice_ctrl(local_4e0 >> 0x18);
          yi_p2p_on_get_dev_info(param_1,0x136a,uVar2);
          goto LAB_000221a0;
        }
        if (uVar1 < 0x136a) {
          if (uVar1 == 0x1361) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SYNC_DEV_ABILITY:sid(%d)\n",param_1);
            iVar6 = yi_p2p_on_sync_dev_ability();
            uVar8 = 0x1362;
            if (iVar6 < 0) {
              FUN_0001e9ec(param_1,0x1362,uVar2);
              goto LAB_000221a0;
            }
LAB_000247f0:
            yi_p2p_on_get_dev_info(param_1,uVar8,uVar2);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x1362) {
            if (uVar1 == 0x135d) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_SET_ABNORMAL_SOUND_SENSITIVITY:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xcc7,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ABNORMAL_SOUND_SENSITIVITY\n"
                            ,param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              yi_p2p_on_set_abnormal_sound_sensitivity(local_4e0 >> 0x18);
              yi_p2p_on_get_dev_info(param_1,0x135e,uVar2);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x1365) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_VIEWPOINT_TRACE:sid(%d)\n",param_1)
              ;
              error_at_line(0,0,"yi_p2p.c",0xc12,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_VIEWPOINT_TRACE\n",param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              yi_p2p_on_set_viewpoint_trace(local_4e0 >> 0x18);
              yi_p2p_on_get_dev_info(param_1,0x1366,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1367) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_LAPSE_VIDEO:sid(%d)\n",param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              uVar5 = (local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                      (local_4e0 >> 8 | local_4e0 << 0x18);
              error_at_line(0,0,"yi_p2p.c",0xc28,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_LAPSE_VIDEO, value = %d\n",
                            param_1,uVar5);
              yi_p2p_on_set_lapse_video(uVar5 == 2);
              yi_p2p_on_get_dev_info(param_1,0x1368,uVar2);
              goto LAB_000221a0;
            }
          }
        }
        else {
          if (uVar1 == 0x1379) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_RECORD_PLAN_TIME:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xc56,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_RECORD_PLAN_TIME\n",param_1);
            yi_p2p_on_get_record_plan_time(&local_470);
            local_470 = (local_470 ^ (local_470 >> 0x10 | local_470 << 0x10)) >> 8 & 0xffff00ff ^
                        (local_470 >> 8 | local_470 << 0x18);
            puVar13 = &local_464;
            do {
              uVar23 = puVar13[-1];
              uVar5 = puVar13[-2];
              uVar10 = *puVar13;
              puVar13[-1] = (uVar23 ^ (uVar23 >> 0x10 | uVar23 << 0x10)) >> 8 & 0xffff00ff ^
                            (uVar23 >> 8 | uVar23 << 0x18);
              puVar13[-2] = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                            (uVar5 >> 8 | uVar5 << 0x18);
              puVar12 = puVar13 + 3;
              *puVar13 = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar10 >> 8 | uVar10 << 0x18);
              puVar13 = puVar12;
            } while (puVar12 != auStack_440);
            FUN_0001e664(param_1,0x137a,uVar2,&local_470,0x28);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x137a) {
            if (uVar1 == 0x136b) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_ABNORMAL_SOUND:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xc3a,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ABNORMAL_SOUND\n",param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              yi_p2p_on_set_abnormal_sound
                        (((local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                         (local_4e0 >> 8 | local_4e0 << 0x18)) == 2);
              yi_p2p_on_get_dev_info(param_1,0x136c,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1375) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_SET_RECORD_PLAN_TIME:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xc44,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_RECORD_PLAN_TIME\n",param_1);
              memcpy(&local_470,(void *)((int)auStack_428 + uVar5 + 0x28),0x28);
              local_470 = (local_470 ^ (local_470 >> 0x10 | local_470 << 0x10)) >> 8 & 0xffff00ff ^
                          (local_470 >> 8 | local_470 << 0x18);
              puVar13 = &local_464;
              do {
                uVar23 = puVar13[-1];
                uVar5 = puVar13[-2];
                uVar10 = *puVar13;
                puVar13[-1] = (uVar23 ^ (uVar23 >> 0x10 | uVar23 << 0x10)) >> 8 & 0xffff00ff ^
                              (uVar23 >> 8 | uVar23 << 0x18);
                puVar13[-2] = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                              (uVar5 >> 8 | uVar5 << 0x18);
                puVar12 = puVar13 + 3;
                *puVar13 = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                           (uVar10 >> 8 | uVar10 << 0x18);
                puVar13 = puVar12;
              } while (puVar12 != auStack_440);
              yi_p2p_on_set_record_plan_time(&local_470);
              yi_p2p_on_get_dev_info(param_1,0x1376,uVar2);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x137d) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_REALTIME_STATE:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xc8c,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_REALTIME_STATE\n",param_1);
              memset(&local_470,0,0x20);
              local_4dc[0] = 0;
              local_4b0[0] = 0;
              yi_p2p_on_get_realtime_state(local_4dc,local_4b0);
              local_470._0_2_ = CONCAT11(local_4b0[0],local_4dc[0]);
              FUN_0001e664(param_1,0x137e,uVar2,&local_470,0x20);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1380) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_DOUBLE_LIGHT:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xc82,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_DOUBLE_LIGHT\n",param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              yi_p2p_on_set_light_switch_mode
                        ((local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                         (local_4e0 >> 8 | local_4e0 << 0x18));
              yi_p2p_on_get_dev_info(param_1,0x1381,uVar2);
              goto LAB_000221a0;
            }
          }
        }
      }
    }
  }
  else {
    if (uVar1 == 0x4000) {
      yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_PRESET_ADD_REQ:sid(%d)\n",param_1);
      error_at_line(0,0,"yi_p2p.c",0xb6a,"myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_PRESET_ADD_REQ\n",
                    param_1);
      yi_p2p_on_ptz_preset_add(param_1,uVar2);
      goto LAB_000221a0;
    }
    if (uVar1 < 0x4001) {
      if (uVar1 == 0x1410) {
        yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_SD_INDEX:sid(%d)\n",param_1);
        error_at_line(0,0,"yi_p2p.c",0xd40,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_SD_INDEX\n",
                      param_1);
        uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
        uVar5 = *(uint *)((int)auStack_3f4 + (uVar5 - 4));
        uVar10 = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                 (uVar10 >> 8 | uVar10 << 0x18);
        uVar5 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                (uVar5 >> 8 | uVar5 << 0x18);
        error_at_line(0,0,"yi_p2p.c",0xd46,"start time: %d, end time: %d\n",uVar10,uVar5);
        yi_p2p_on_get_record_events_month(param_1,uVar2,uVar10,uVar5);
        goto LAB_000221a0;
      }
      if (uVar1 < 0x1410) {
        if (uVar1 == 0x139a) {
          yi_report_debug_strings
                    (2,5,"IOTYPE_USER_IPCAM_GET_WHITE_LIGHT_OFF_STATUS:sid(%d)\n",param_1);
          error_at_line(0,0,"yi_p2p.c",0xcab,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_WHITE_LIGHT_OFF_STATUS\n",param_1
                       );
          uVar5 = yi_p2p_on_get_white_led_status();
          local_470 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                      (uVar5 >> 8 | uVar5 << 0x18);
          FUN_0001e664(param_1,0x139b,uVar2,&local_470,4);
          goto LAB_000221a0;
        }
        if (uVar1 < 0x139b) {
          if (uVar1 == 0x1392) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_WHITE_LED_TIME:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xcbe,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_WHITE_LED_TIME\n",param_1);
            uVar5 = yi_p2p_on_get_white_led_time();
            local_470 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                        (uVar5 >> 8 | uVar5 << 0x18);
            FUN_0001e664(param_1,0x1393,uVar2,&local_470,4);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x1393) {
            if (uVar1 == 0x1390) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_WHITE_LED_TIME:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xcb4,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_WHITE_LED_TIME\n",param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              yi_p2p_on_set_white_led_time
                        ((local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                         (local_4e0 >> 8 | local_4e0 << 0x18));
              yi_p2p_on_get_dev_info(param_1,0x1391,uVar2);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x1394) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_SET_DIRECTION_RESET:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xd20,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_SET_DIRECTION_RESET\n",param_1);
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              yi_p2p_on_set_ptz_reset_time
                        ((local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                         (local_4e0 >> 8 | local_4e0 << 0x18));
              yi_p2p_on_get_dev_info(param_1,0x1395,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1396) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_GET_DIRECTION_RESET:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xd2a,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_GET_DIRECTION_RESET\n",param_1);
              uVar5 = yi_p2p_on_get_ptz_reset_time();
              local_470 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                          (uVar5 >> 8 | uVar5 << 0x18);
              FUN_0001e664(param_1,0x1397,uVar2,&local_470,4);
              goto LAB_000221a0;
            }
          }
        }
        else {
          if (uVar1 == 0x1404) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_RESTART_DEVICE:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xd32,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_RESTART_DEVICE\n",param_1);
            local_470 = 0;
            iVar6 = yi_remote_manual_reboot();
            if (iVar6 == 0) {
              FUN_0001e664(param_1,0x1405,uVar2,&local_470,4);
              error_at_line(0,0,"yi_p2p.c",0xd39,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_RESTART_DEVICE reboot now\n",
                            param_1);
              sleep(3);
              system("reboot -f");
            }
            goto LAB_000221a0;
          }
          if (uVar1 < 0x1405) {
            if (uVar1 == 0x13f0) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_RESET_DEVICE_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xd17,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_RESET_DEVICE_REQ\n",param_1);
              yi_p2p_on_reset_device();
              yi_p2p_on_get_dev_info(param_1,0x13f1,uVar2);
              sleep(1);
              system("reboot -f");
              goto LAB_000221a0;
            }
            if (uVar1 == 0x1400) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_WIFI_INFO:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xc9a,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_WIFI_INFO\n",param_1);
              memset(local_4b0,0,0x40);
              memset(&local_470,0,0x40);
              memset(local_4dc,0,0x2a);
              pcVar15 = (char *)((int)auStack_428 + uVar5 + 0x28);
              if ((*(char *)((int)auStack_428 + uVar5 + 0x28) != '\0') &&
                 (sVar9 = strlen(pcVar15), sVar9 < 0xab)) {
                sscanf(pcVar15,"%s\n%s\n%s",local_4b0,&local_470,local_4dc);
              }
              error_at_line(0,0,"yi_p2p.c",0xca3,
                            "myDoIOCtrl(..):%d, message(%s)\n\tssid(%s) pwd(%s) bindkey(%s)\n",
                            param_1,pcVar15,local_4b0,&local_470,local_4dc);
              yi_p2p_on_get_dev_info(param_1,0x1401,uVar2);
              yi_p2p_on_set_wifi_info(local_4b0,&local_470,local_4dc);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x1408) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_SDCARD_RECORD:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xab2,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_SDCARD_RECORD\n",param_1);
              memcpy(&local_470,(void *)((int)auStack_428 + uVar5 + 0x28),0x28);
              local_470 = (local_470 ^ (local_470 >> 0x10 | local_470 << 0x10)) >> 8 & 0xffff00ff ^
                          (local_470 >> 8 | local_470 << 0x18);
              if (local_470 == 1) {
                yi_p2p_on_set_motion_record(0);
              }
              else if (local_470 == 2) {
                puVar13 = &local_464;
                do {
                  uVar23 = puVar13[-1];
                  uVar5 = puVar13[-2];
                  uVar10 = *puVar13;
                  puVar13[-1] = (uVar23 ^ (uVar23 >> 0x10 | uVar23 << 0x10)) >> 8 & 0xffff00ff ^
                                (uVar23 >> 8 | uVar23 << 0x18);
                  puVar13[-2] = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                                (uVar5 >> 8 | uVar5 << 0x18);
                  puVar12 = puVar13 + 3;
                  *puVar13 = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                             (uVar10 >> 8 | uVar10 << 0x18);
                  puVar13 = puVar12;
                } while (puVar12 != auStack_440);
                yi_p2p_on_set_record_plan_time(&local_470);
              }
              else if (local_470 == 3) {
                yi_p2p_on_set_motion_record(1);
              }
              else {
                yi_p2p_on_set_sd_record_stop();
              }
              yi_p2p_on_get_dev_info(param_1,0x1409,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x140a) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_GET_SDCARD_RECORD_PLAN_TIME:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xc67,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_RECORD_PLAN_TIME\n",param_1);
              yi_p2p_on_get_record_plan_time(&local_470);
              if (local_470 == 2) {
                puVar13 = &local_464;
                do {
                  uVar23 = *puVar13;
                  uVar5 = puVar13[-1];
                  uVar10 = puVar13[-2];
                  puVar13[-1] = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                                (uVar5 >> 8 | uVar5 << 0x18);
                  puVar13[-2] = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                                (uVar10 >> 8 | uVar10 << 0x18);
                  puVar12 = puVar13 + 3;
                  *puVar13 = (uVar23 ^ (uVar23 >> 0x10 | uVar23 << 0x10)) >> 8 & 0xffff00ff ^
                             (uVar23 >> 8 | uVar23 << 0x18);
                  puVar13 = puVar12;
                } while (puVar12 != auStack_440);
              }
              else {
                local_46c = 0;
                local_468 = 0;
                local_464 = 0;
                local_460 = 0;
                local_45c = 0;
                local_458 = 0;
                local_454 = 0;
                local_450 = 0;
                local_44c = 0;
              }
              local_470 = (local_470 ^ (local_470 >> 0x10 | local_470 << 0x10)) >> 8 & 0xffff00ff ^
                          (local_470 >> 8 | local_470 << 0x18);
              FUN_0001e664(param_1,0x140b,uVar2,&local_470,0x28);
              goto LAB_000221a0;
            }
          }
        }
      }
      else {
        if (uVar1 == 0x2346) {
          yi_report_debug_strings(2,5,"IOTYPE_USER_TNP_IPCAM_START_REPLAY_KEY:sid(%d)\n",param_1);
          iVar6 = uVar5 + 0x28;
          puVar11 = &DAT_0005e054;
          iVar7 = 0;
          do {
            pcVar15 = puVar11 + 0x48;
            puVar11 = puVar11 + 0xcd0;
            if (*pcVar15 != '\0') {
              iVar7 = iVar7 + 1;
            }
          } while (puVar11 != (undefined *)0x66074);
          uVar23 = (uint)*(byte *)((int)&uStack_400 + uVar5 + 1);
          uVar18 = (uint)*(byte *)((int)&uStack_400 + uVar5 + 2);
          uVar17 = (uint)*(byte *)((int)&uStack_3fc + uVar5 + 3);
          uVar10 = (uint)*(byte *)((int)&uStack_3fc + uVar5 + 2);
          uVar20 = (uint)*(ushort *)((int)&uStack_3fc + uVar5);
          uVar22 = (uint)*(byte *)((int)auStack_3f4 + (uVar5 - 3));
          uVar21 = (uint)*(byte *)((int)auStack_3f4 + (uVar5 - 2));
          uVar16 = (uint)*(byte *)((int)auStack_3f4 + (uVar5 - 1));
          uVar19 = (uint)*(byte *)((int)auStack_3f4 + (uVar5 - 4));
          iVar25 = iVar7;
          error_at_line(0,0,"yi_p2p.c",0x96e,
                        "IOTYPE_USER_TNP_IPCAM_START_REPLAY_KEY ucnt=%d res=%d cmdVer=%d view_count=%d %d-%d-%d-%d-%d-%d-%d\n"
                        ,*(undefined1 *)((int)auStack_428 + iVar6),uVar23,uVar18,iVar7,uVar20,uVar10
                        ,uVar17,uVar22,uVar21,uVar16,uVar19);
          if (((&DAT_0005e09c)[param_1 * 0xcd0] == '\0') && (7 < iVar7)) {
            if (*(char *)((int)&uStack_400 + uVar5 + 2) == '\0') {
              error_at_line(0,0,"yi_p2p.c",0x97b,
                            "IOTYPE_USER_TNP_IPCAM_START_REPLAY_KEY sid=%d, reach MAX_VIEWING_NUM\n"
                            ,param_1,uVar23,uVar18,iVar25,uVar20,uVar10,uVar17,uVar22,uVar21,uVar16,
                            uVar19);
              goto LAB_000221a0;
            }
            FUN_0001ba48();
            error_at_line(0,0,"yi_p2p.c",0x977,
                          "IOTYPE_USER_TNP_IPCAM_START_REPLAY_KEY sid=%d, kick_earliest_viewer\n",
                          param_1,uVar23,uVar18,iVar25,uVar20,uVar10,uVar17,uVar22,uVar21,uVar16,
                          uVar19);
          }
          FUN_0001e764(param_1,*(undefined1 *)((int)auStack_428 + iVar6),
                       *(undefined1 *)((int)&uStack_400 + uVar5 + 1),0xffff);
          iVar7 = yi_p2p_on_has_record();
          if (iVar7 == 0) {
            iVar7 = param_1 * 0xcd0;
            (&DAT_0005e095)[iVar7] = *(undefined1 *)((int)auStack_428 + iVar6);
            (&DAT_0005e099)[iVar7] = 0;
            (&DAT_0005e096)[iVar7] = 1;
            (&DAT_0005e09a)[iVar7] = 1;
            memset(&local_470,0,0xc);
            local_470 = 0x1000000;
            local_46c = 0xffffffff;
            FUN_0001e664(param_1,0x31b,uVar2,&local_470,0xc);
            error_at_line(0,0,"yi_p2p.c",0x999,
                          "IOTYPE_USER_TNP_IPCAM_START_REPLAY_KEY do_replay but no sd card\n");
          }
          else {
            uVar8 = FUN_0001bac0((int)&uStack_3fc + uVar5);
            iVar7 = param_1 * 0xcd0;
            uVar3 = *(undefined1 *)((int)auStack_428 + iVar6);
            (&DAT_0005e099)[iVar7] = 1;
            (&DAT_0005e096)[iVar7] = 1;
            (&DAT_0005e09a)[iVar7] = 1;
            (&DAT_0005e095)[iVar7] = uVar3;
            error_at_line(0,0,"yi_p2p.c",0x98e,
                          "IOTYPE_USER_TNP_IPCAM_START_REPLAY_KEY do_replay replay_time=%ld\n",uVar8
                         );
            yi_p2p_on_set_replay_time(param_1,uVar8);
            memset(&local_470,0,0xc);
            local_470 = 0x10000000;
            FUN_0001e664(param_1,0x31b,uVar2,&local_470,0xc);
          }
          uVar5 = (uint)(byte)(&DAT_0005e09c)[param_1 * 0xcd0];
          if (uVar5 == 0) {
            yi_p2p_on_start_viewing();
            (&DAT_0005e09c)[param_1 * 0xcd0] = 1;
            entry(param_1);
            error_at_line(uVar5,uVar5,"yi_p2p.c",0x9a1,
                          "IOTYPE_USER_TNP_IPCAM_START_REPLAY_KEY add_viewer\n");
          }
          goto LAB_000221a0;
        }
        if (uVar1 < 0x2347) {
          if (uVar1 == 0x1414) {
            uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
            uVar5 = *(uint *)((int)auStack_428 + uVar5 + 0x28);
            local_470 = 0;
            yi_p2p_on_sync_time((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                                (uVar5 >> 8 | uVar5 << 0x18),
                                (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                                (uVar10 >> 8 | uVar10 << 0x18));
            FUN_0001e664(param_1,0x1415,uVar2,&local_470,4);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x1415) {
            if (uVar1 == 0x1412) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_SD_FILE:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xd4c,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_SD_FILE\n",param_1);
              uVar23 = *(uint *)((int)&uStack_3fc + uVar5);
              uVar16 = *(uint *)((int)auStack_3f4 + (uVar5 - 4));
              uVar10 = *(uint *)((int)auStack_428 + uVar5 + 0x28);
              error_at_line(0,0,"yi_p2p.c",0xd4f,"type:%d start time: %d, end time: %d\n",
                            (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                            (uVar10 >> 8 | uVar10 << 0x18),
                            (uVar23 ^ (uVar23 >> 0x10 | uVar23 << 0x10)) >> 8 & 0xffff00ff ^
                            (uVar23 >> 8 | uVar23 << 0x18),
                            (uVar16 ^ (uVar16 >> 0x10 | uVar16 << 0x10)) >> 8 & 0xffff00ff ^
                            (uVar16 >> 8 | uVar16 << 0x18));
              uVar23 = *(uint *)((int)auStack_3f4 + (uVar5 - 4));
              uVar10 = *(uint *)((int)auStack_428 + uVar5 + 0x28);
              uVar5 = *(uint *)((int)&uStack_3fc + uVar5);
              yi_p2p_on_get_record_events_day
                        (param_1,uVar2,
                         (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar10 >> 8 | uVar10 << 0x18),
                         (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar5 >> 8 | uVar5 << 0x18),
                         (uVar23 ^ (uVar23 >> 0x10 | uVar23 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar23 >> 8 | uVar23 << 0x18));
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x1ffe) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_START_KEY:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0x920,"myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_START_KEY\n"
                            ,param_1);
              iVar6 = param_1 * 0xcd0;
              cVar4 = (&DAT_0005e09c)[iVar6];
              (&DAT_0005e095)[iVar6] =
                   (char)((uint)*(undefined4 *)((int)&uStack_400 + uVar5) >> 0x18);
              (&DAT_0005e099)[iVar6] = 0;
              (&DAT_0005e096)[iVar6] = 1;
              (&DAT_0005e09a)[iVar6] = 1;
joined_r0x00022af8:
              if (cVar4 == '\0') {
                yi_p2p_on_start_viewing();
                (&DAT_0005e09c)[param_1 * 0xcd0] = 1;
              }
              goto LAB_000221a0;
            }
            if (uVar1 == 0x2345) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_TNP_IPCAM_START_KEY:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0x932,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_TNP_IPCAM_START_KEY\n",param_1);
              puVar11 = &DAT_0005e054;
              iVar6 = 0;
              do {
                pcVar15 = puVar11 + 0x48;
                puVar11 = puVar11 + 0xcd0;
                if (*pcVar15 != '\0') {
                  iVar6 = iVar6 + 1;
                }
              } while (puVar11 != (undefined *)0x66074);
              if (((&DAT_0005e09c)[param_1 * 0xcd0] == '\0') && (7 < iVar6)) {
                if (*(char *)((int)&uStack_400 + uVar5 + 2) == '\0') {
                  error_at_line(0,0,"yi_p2p.c",0x942,"myDoIOCtrl(..): %d, reach MAX_VIEWING_NUM\n",
                                param_1);
                  goto LAB_000221a0;
                }
                FUN_0001ba48();
              }
              FUN_0001e764(param_1,*(undefined1 *)((int)auStack_428 + uVar5 + 0x28),
                           *(undefined1 *)((int)&uStack_400 + uVar5 + 1),0xffff);
              iVar6 = param_1 * 0xcd0;
              (&DAT_0005e095)[iVar6] = *(undefined1 *)((int)auStack_428 + uVar5 + 0x28);
              (&DAT_0005e099)[iVar6] = 0;
              (&DAT_0005e096)[iVar6] = 1;
              (&DAT_0005e09a)[iVar6] = 1;
              if ((&DAT_0005e09c)[iVar6] == '\0') {
                yi_p2p_on_start_viewing();
                (&DAT_0005e09c)[iVar6] = 1;
                entry(param_1);
              }
              goto LAB_000221a0;
            }
          }
        }
        else {
          if (uVar1 == 0x2352) {
            yi_report_debug_strings
                      (2,5,"IOTYPE_USER_IPCAM_SET_HIGH_RESOLUTION_REQ:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xb57,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_HIGH_RESOLUTION_REQ\n",param_1)
            ;
            memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
            uVar5 = (local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                    (local_4e0 >> 8 | local_4e0 << 0x18);
            error_at_line(0,0,"yi_p2p.c",0xb5a,"value = %d\n",uVar5);
            yi_p2p_on_set_high_resolution(uVar5);
            yi_p2p_on_get_dev_info(param_1,0x2353,uVar2);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x2353) {
            if (uVar1 == 0x2347) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_TNP_EVENT_LIST_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0x9b7,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_TNP_EVENT_LIST_REQ\n",param_1);
              yi_p2p_on_get_record_events(param_1,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x2350) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_SET_ENCODING_MODE_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xb4c,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ENCODING_MODE_REQ\n",param_1)
              ;
              memcpy(&local_4e0,(void *)((int)auStack_428 + uVar5 + 0x28),4);
              uVar5 = (local_4e0 ^ (local_4e0 >> 0x10 | local_4e0 << 0x10)) >> 8 & 0xffff00ff ^
                      (local_4e0 >> 8 | local_4e0 << 0x18);
              error_at_line(0,0,"yi_p2p.c",0xb4f,"value = %d\n",uVar5);
              yi_p2p_on_set_encode_mode(uVar5);
              yi_p2p_on_get_dev_info(param_1,0x2351,uVar2);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x2354) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_DO_MSTAR_AEC_VERIFY_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xb62,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_DO_MSTAR_AEC_VERITY_REQ\n",
                            param_1);
              memset(&local_470,0,0xb);
              local_470 = 0x33323130;
              local_46c = 0x37363534;
              local_468 = CONCAT13(local_468._3_1_,0x313938);
              uVar8 = FUN_0001e664(param_1,0x2355,uVar2,&local_470,0xb);
              error_at_line(0,0,"yi_p2p.c",0xb64,"yi_p2p_reply_aec_key_verify, ret = %d\n",uVar8);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x31ae) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_RECORD_PLAYCONTROL_KEY:sid(%d)\n",param_1);
              uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
              uVar23 = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                       (uVar10 >> 8 | uVar10 << 0x18);
              iVar6 = param_1;
              error_at_line(0,0,"yi_p2p.c",0xa12,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_RECORD_PLAYCONTROL_KEY p->command(0x%x)\n"
                            ,param_1,uVar23);
              uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
              uVar10 = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                       (uVar10 >> 8 | uVar10 << 0x18);
              if ((uVar10 != 0x10) && (uVar10 != 6)) {
                iVar7 = param_1 * 0xcd0;
                (&DAT_0005e099)[iVar7] = 0;
                (&DAT_0005e09a)[iVar7] = 0;
                yi_p2p_on_stop_replay(param_1);
                error_at_line(0,0,"yi_p2p.c",0xa34,
                              "IOTYPE_USER_IPCAM_RECORD_PLAYCONTROL_KEY do_replay stop\n",iVar6,
                              uVar23);
                cVar4 = (&DAT_0005e09c)[iVar7];
                goto joined_r0x00024d4c;
              }
              iVar7 = yi_p2p_on_has_record();
              if (iVar7 == 0) {
                iVar7 = param_1 * 0xcd0;
                uVar3 = *(undefined1 *)((int)auStack_3ec + uVar5);
                (&DAT_0005e096)[iVar7] = 1;
                (&DAT_0005e09a)[iVar7] = 1;
                (&DAT_0005e095)[iVar7] = uVar3;
                (&DAT_0005e099)[iVar7] = 0;
                error_at_line(0,0,"yi_p2p.c",0xa27,
                              "IOTYPE_USER_IPCAM_RECORD_PLAYCONTROL_KEY do_replay but no sd card\n",
                              iVar6,uVar23);
              }
              else {
                uVar8 = FUN_0001bac0((int)auStack_3f4 + uVar5);
                iVar6 = param_1 * 0xcd0;
                uVar3 = *(undefined1 *)((int)auStack_3ec + uVar5);
                (&DAT_0005e099)[iVar6] = 1;
                (&DAT_0005e096)[iVar6] = 1;
                (&DAT_0005e09a)[iVar6] = 1;
                (&DAT_0005e095)[iVar6] = uVar3;
                error_at_line(0,0,"yi_p2p.c",0xa1e,
                              "IOTYPE_USER_IPCAM_RECORD_PLAYCONTROL_KEY do_replay replay_time=%ld\n"
                              ,uVar8,uVar23);
                yi_p2p_on_set_replay_time(param_1,uVar8);
              }
              cVar4 = (&DAT_0005e09c)[param_1 * 0xcd0];
              goto joined_r0x00022af8;
            }
          }
        }
      }
    }
    else {
      if (uVar1 == 0x4020) {
        yi_report_debug_strings(2,5,"IOTYPE_USER_PANORAMA_CAPTURE_START:sid(%d)\n",param_1);
        error_at_line(0,0,"yi_p2p.c",0xbcf,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_PANORAMA_CAPTURE_START\n",param_1);
        yi_p2p_on_panorama_capture_start(param_1,uVar2);
        goto LAB_000221a0;
      }
      if (uVar1 < 0x4020) {
        if (uVar1 == 0x400b) {
          yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_SET_MOTION_TRACK_REQ:sid(%d)\n",param_1);
          error_at_line(0,0,"yi_p2p.c",0xb9b,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_SET_MOTION_TRACK_REQ\n",param_1);
          uVar5 = *(uint *)((int)&uStack_400 + uVar5);
          yi_p2p_on_ptz_set_motion_track
                    (((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff) !=
                     (uVar5 >> 8 | uVar5 << 0x18));
          FUN_0001e664(param_1,0x400c,uVar2,0,0);
          goto LAB_000221a0;
        }
        if (uVar1 < 0x400c) {
          if (uVar1 == 0x4006) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_PRESET_CALL_REQ:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xb7d,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_PRESET_CALL_REQ\n",param_1);
            uVar5 = *(uint *)((int)&uStack_400 + uVar5);
            yi_p2p_on_ptz_preset_call
                      (param_1,uVar2,
                       (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                       (uVar5 >> 8 | uVar5 << 0x18));
            goto LAB_000221a0;
          }
          if (uVar1 < 0x4007) {
            if (uVar1 == 0x4002) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_PRESET_DEL_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xb72,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_PRESET_DEL_REQ\n",param_1);
              uVar5 = *(uint *)((int)&uStack_400 + uVar5);
              yi_p2p_on_ptz_preset_del
                        (param_1,uVar2,
                         (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar5 >> 8 | uVar5 << 0x18));
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x4007) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_PTZ_SET_CURISE_STAY_TIME_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xb87,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_SET_CURISE_STAY_TIME_REQ\n",param_1
                           );
              uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
              uVar5 = *(uint *)((int)auStack_428 + uVar5 + 0x28);
              yi_p2p_on_ptz_set_cruise_stay_time
                        ((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar5 >> 8 | uVar5 << 0x18),
                         (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar10 >> 8 | uVar10 << 0x18));
              FUN_0001e664(param_1,0x4008,uVar2,0,0);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x4009) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_SET_CRUISE_PERIOD_REQ:sid(%d)\n",param_1)
              ;
              error_at_line(0,0,"yi_p2p.c",0xb91,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_SET_CRUISE_PERIOD_REQ\n",param_1);
              uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
              uVar5 = *(uint *)((int)auStack_428 + uVar5 + 0x28);
              yi_p2p_on_ptz_set_cruise_period
                        ((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar5 >> 8 | uVar5 << 0x18),
                         (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar10 >> 8 | uVar10 << 0x18));
              FUN_0001e664(param_1,0x400a,uVar2,0,0);
              goto LAB_000221a0;
            }
          }
        }
        else {
          if (uVar1 == 0x4013) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_DIRECTION_CTRL_STOP:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",3000,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_DIRECTION_CTRL_STOP\n",param_1);
            yi_p2p_on_ptz_direction_ctrl_stop();
            goto LAB_000221a0;
          }
          if (uVar1 < 0x4014) {
            if (uVar1 == 0x4010) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_SET_CRUISE_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xba5,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_SET_CRUISE_REQ\n",param_1);
              uVar5 = *(uint *)((int)&uStack_400 + uVar5);
              yi_p2p_on_ptz_set_cruise
                        (((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff) !=
                         (uVar5 >> 8 | uVar5 << 0x18));
              FUN_0001e664(param_1,0x4011,uVar2,0,0);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x4012) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_DIRECTION_CTRL:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xbaf,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_DIRECTION_CTRL\n",param_1);
              uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
              uVar5 = *(uint *)((int)auStack_428 + uVar5 + 0x28);
              yi_p2p_on_ptz_direction_ctrl
                        ((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar5 >> 8 | uVar5 << 0x18),
                         (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar10 >> 8 | uVar10 << 0x18));
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x4014) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_HOME:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xbbf,"myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_HOME\n",
                            param_1);
              yi_p2p_on_ptz_home();
              goto LAB_000221a0;
            }
            if (uVar1 == 0x4015) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_PTZ_JUMP_TO_POINT:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xbc6,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_JUMP_TO_POINT\n",param_1);
              uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
              uVar5 = *(uint *)((int)auStack_428 + uVar5 + 0x28);
              yi_p2p_on_ptz_jump_to_point
                        ((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar5 >> 8 | uVar5 << 0x18),
                         (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar10 >> 8 | uVar10 << 0x18));
              goto LAB_000221a0;
            }
          }
        }
      }
      else {
        if (uVar1 == 0x5c02) {
          yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_GET_AP_MODE_REQ:sid(%d)\n",param_1);
          error_at_line(0,0,"yi_p2p.c",0xceb,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_AP_MODE_REQ\n",param_1);
          yi_p2p_on_get_ap_conf(param_1,uVar2);
          goto LAB_000221a0;
        }
        if (uVar1 < 0x5c03) {
          if (uVar1 == 0x4024) {
            yi_report_debug_strings
                      (2,5,"IOTYPE_USER_PANORAMA_CAPTURE_SCHEDULE_POLLING:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xbde,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_PANORAMA_CAPTURE_SCHEDULE_POLLING\n",
                          param_1);
            yi_p2p_on_get_panorama_capture_schedule(param_1,uVar2);
            goto LAB_000221a0;
          }
          if (uVar1 < 0x4025) {
            if (uVar1 == 0x4022) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_PANORAMA_CAPTURE_ABORT:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xbd6,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_PANORAMA_CAPTURE_ABORT\n",param_1);
              yi_p2p_on_panorama_capture_abort();
              FUN_0001e664(param_1,0x4023,uVar2,0,0);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x5001) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_AUDIO_MODE:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xc30,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_AUDIO_MODE\n",param_1);
              uVar5 = *(uint *)((int)&uStack_400 + uVar5);
              yi_p2p_on_set_audio_mode
                        ((uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                         (uVar5 >> 8 | uVar5 << 0x18));
              yi_p2p_on_get_dev_info(param_1,0x5002,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x5c00) {
              yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_AP_MODE_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xcdf,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_AP_MODE_REQ\n",param_1);
              iVar6 = (int)&uStack_400 + uVar5 + 1;
              puVar14 = auStack_3df + uVar5;
              error_at_line(0,0,"yi_p2p.c",0xce2,"ap_enable: %d, ssid: %s, pwd: %s\n",
                            *(undefined1 *)((int)auStack_428 + uVar5 + 0x28),iVar6,puVar14);
              yi_p2p_on_set_ap_conf
                        (*(char *)((int)auStack_428 + uVar5 + 0x28) != '\0',iVar6,puVar14);
              yi_p2p_on_get_dev_info(param_1,0x5c01,uVar2);
              yi_p2p_on_restart_ap(iVar6,puVar14);
              goto LAB_000221a0;
            }
          }
        }
        else {
          if (uVar1 == 0x6001) {
            yi_report_debug_strings(2,5,"IOTYPE_USER_IPCAM_SET_DEVICE_PARAM_REQ:sid(%d)\n",param_1);
            error_at_line(0,0,"yi_p2p.c",0xcf2,
                          "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_DEVICE_PARAM_REQ\n",param_1);
            iVar6 = (int)auStack_428 + uVar5 + 0x28;
            error_at_line(0,0,"yi_p2p.c",0xcf6,"IOTYPE_USER_IPCAM_SET_DEVICE_PARAM_REQ hwconf: %s\n"
                          ,iVar6);
            yi_p2p_on_set_device_param_conf(iVar6);
            uVar8 = 0x6002;
            goto LAB_000247f0;
          }
          if (uVar1 < 0x6002) {
            if (uVar1 == 0x5c04) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_GET_DAY_EVENT_LIST_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xd04,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_DAY_EVENT_LIST_REQ\n",param_1
                           );
              yi_p2p_on_alert_days(param_1,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x5c06) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_GET_ALARM_EVENT_LIST_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xd0a,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_ALARM_EVENT_LIST_REQ \n",
                            param_1);
              uVar10 = *(uint *)((int)&uStack_3fc + uVar5);
              uVar5 = *(uint *)((int)auStack_3f4 + (uVar5 - 4));
              uVar10 = (uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10)) >> 8 & 0xffff00ff ^
                       (uVar10 >> 8 | uVar10 << 0x18);
              uVar5 = (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^
                      (uVar5 >> 8 | uVar5 << 0x18);
              error_at_line(0,0,"yi_p2p.c",0xd10,"start time: %d, end time: %d\n",uVar10,uVar5);
              yi_p2p_on_alert_events(param_1,uVar2,uVar10,uVar5);
              goto LAB_000221a0;
            }
          }
          else {
            if (uVar1 == 0x6003) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_GET_DEVICE_PARAM_REQ:sid(%d)\n",param_1);
              error_at_line(0,0,"yi_p2p.c",0xcfe,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_DEVICE_PARAM_REQ\n",param_1);
              yi_p2p_on_get_device_param_conf(param_1,uVar2);
              goto LAB_000221a0;
            }
            if (uVar1 == 0x6ff1) {
              yi_report_debug_strings
                        (2,5,"IOTYPE_USER_IPCAM_GET_FACTORY_TEST_INFO_REQ:sid(%d)\n",param_1);
              yi_p2p_on_get_factory_test_info(param_1,uVar2);
              error_at_line(0,0,"yi_p2p.c",0xbe6,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_FACTORY_TEST_INFO_REQ\n",
                            param_1);
              goto LAB_000221a0;
            }
          }
        }
      }
    }
  }
  yi_report_debug_strings(2,5,"Unknown command:0x%02x:sid(%d)\n",uVar1,param_1);
  error_at_line(0,0,"yi_p2p.c",0xdc1,"myDoIOCtrl(..): Unknown command 0x%02x\n",uVar1);
LAB_000221a0:
  if (DAT_000660ac != '\0') {
    (&DAT_0005e096)[param_1 * 0xcd0] = 0;
  }
  return local_4e4;
}



undefined4 PPPP_Get_APIVersion(void)

{
  return 0xd2030401;
}



undefined4
PPPP_NetworkDetect(st_PPPP_NetInfo *param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  tnp::PPPP_DebugTrace(1,"PPPP_NetworkDetect() Enter.\n",param_3,param_4,param_4);
  if (tnp::gFlagInitialized == '\0') {
    return 0xfffff447;
  }
  if (param_1 != (st_PPPP_NetInfo *)0x0) {
    tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
    uVar1 = tnp::PPPP__DoNetWorkDetect(param_1,param_2,tnp::gServerString);
    tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
    tnp::PPPP_DebugTrace(1,"PPPP_NetworkDetect() Exit.\n");
    return uVar1;
  }
  return 0xfffff443;
}



int PPPP_Check(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *__src;
  int iVar7;
  
  tnp::PPPP_DebugTrace(1,"PPPP_Check() Enter.\n");
  if (tnp::gFlagInitialized == '\0') {
    return -0xbb9;
  }
  if (param_2 == (undefined4 *)0x0) {
    return -0xbbd;
  }
  if (tnp::gMaxSessionNumber < param_1) {
    return -0xbc3;
  }
  iVar7 = param_1 * 0x3f18;
  iVar6 = tnp::gTNPSession + iVar7;
  uVar3 = *(byte *)(iVar6 + 0x1ba) - 1 & 0xff;
  if (uVar3 < 6) {
    if (*(int *)(&DAT_0004c580 + uVar3 * 4) < 0) {
      return *(int *)(&DAT_0004c580 + uVar3 * 4);
    }
    iVar4 = *(int *)(iVar6 + 0x50);
  }
  else {
    iVar4 = *(int *)(iVar6 + 0x50);
  }
  if ((iVar4 < 0) && (*(int *)(iVar6 + 0x54) < 0)) {
    return -0xbd0;
  }
  memset(param_2,0,0x5c);
  __src = (char *)(tnp::gTNPSession + iVar7);
  uVar1 = *(undefined4 *)(__src + 0x3ef0);
  uVar2 = *(undefined4 *)(__src + 0x3ef4);
  uVar5 = *(undefined4 *)(__src + 0x3ef8);
  *param_2 = *(undefined4 *)(__src + 0x54);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar5;
  *(char *)(param_2 + 0x16) = __src[0x4f];
  *(char *)((int)param_2 + 0x59) = __src[0x1b6];
  strncpy((char *)(param_2 + 0x10),__src,0x18);
  memcpy(param_2 + 1,(void *)(tnp::gTNPSession + iVar7 + 0x5c),0x10);
  memcpy(param_2 + 5,(void *)(tnp::gTNPSession + iVar7 + 0x6c),0x10);
  memcpy(param_2 + 9,(void *)(tnp::gTNPSession + iVar7 + 0x7c),0x10);
  tnp::PPPP_DebugTrace(1,"PPPP_Check() Exit.\n");
  return 0;
}



undefined4 PPPP_Close(uint param_1)

{
  undefined4 uVar1;
  
  tnp::PPPP_DebugTrace(1,"PPPP_Close() Enter.\n");
  if (tnp::gFlagInitialized != '\0') {
    uVar1 = tnp::PPPP__Close_Inner(param_1);
    tnp::PPPP_DebugTrace(1,"PPPP_Close() Exit.\n");
    return uVar1;
  }
  return 0xfffff447;
}



undefined4 PPPP_ForceClose(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char acStack_60 [64];
  
  tnp::PPPP_DebugTrace(1,"PPPP_ForceClose() Enter.\n");
  if (tnp::gFlagInitialized == '\0') {
    uVar2 = 0xfffff447;
  }
  else if (tnp::gMaxSessionNumber < param_1) {
    uVar2 = 0xfffff43d;
  }
  else {
    memset(acStack_60,0,0x40);
    iVar4 = param_1 * 0x3f18;
    iVar3 = tnp::gTNPSession + iVar4;
    if (*(char *)(iVar3 + 0x4f) == '\x01') {
      sprintf(acStack_60,"ForceClose Start,Session:%d",param_1);
      tnp::PPPP__Send_Report(param_1,'\x02',acStack_60);
      iVar3 = tnp::gTNPSession + iVar4;
    }
    tnp::PPPP_DebugTrace
              (8,"gTNPSession[%d].bOnForceClosed=%d\n",param_1,(uint)*(byte *)(iVar3 + 0x1b9));
    iVar3 = param_1 * 0x18;
    tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar3));
    iVar1 = tnp::gTNPSessionLock;
    if (*(char *)(tnp::gTNPSession + iVar4 + 0x1b9) == '\x01') {
      tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar3));
      uVar2 = 0xfffff43a;
    }
    else {
      *(undefined1 *)(tnp::gTNPSession + iVar4 + 0x1b9) = 1;
      tnp::MUTEX_RELEASE((pthread_mutex_t *)(iVar1 + iVar3));
      if ((*(int *)(tnp::gTNPSession + iVar4 + 0x50) < 0) &&
         (*(int *)(tnp::gTNPSession + iVar4 + 0x54) < 0)) {
        uVar2 = 0xfffff430;
      }
      else {
        tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar3));
        iVar1 = tnp::gTNPSessionLock;
        *(undefined1 *)(tnp::gTNPSession + iVar4 + 0x1c2) = 1;
        tnp::MUTEX_RELEASE((pthread_mutex_t *)(iVar1 + iVar3));
        tnp::PPPP_DebugTrace(1,"Call PPPP_Close()\n");
        uVar2 = PPPP_Close(param_1);
        if (*(char *)(tnp::gTNPSession + iVar4 + 0x4f) == '\x01') {
          memset(acStack_60,0,0x40);
          sprintf(acStack_60,"ForceClose End,PPPP_Close Return:%d,Session:%d",uVar2,param_1);
          tnp::PPPP__Send_Report(param_1,'\x02',acStack_60);
        }
        tnp::PPPP_DebugTrace(1,"PPPP_ForceClose() Exit.\n");
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



int PPPP_Read(uint param_1,uint param_2,void *param_3,size_t *param_4,uint param_5)

{
  int iVar1;
  time_t tVar2;
  time_t tVar3;
  __the_SLL_Element *p_Var4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  size_t sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  size_t sVar16;
  size_t local_88;
  void *local_78;
  char acStack_68 [68];
  
  tVar2 = time((time_t *)0x0);
  if (tnp::gFlagInitialized == '\0') {
    return -0xbb9;
  }
  if (((5 < param_2) || (param_4 == (size_t *)0x0 || param_3 == (void *)0x0)) ||
     (sVar16 = *param_4, (int)sVar16 < 1)) {
    return -0xbbd;
  }
  if (tnp::gMaxSessionNumber < param_1) {
    *param_4 = 0;
    return -0xbc3;
  }
  iVar15 = param_1 * 0x3f18;
  iVar12 = tnp::gTNPSession + iVar15;
  uVar5 = *(byte *)(iVar12 + 0x1ba) - 1 & 0xff;
  if ((5 < uVar5) || (iVar14 = *(int *)(&DAT_0004c598 + uVar5 * 4), -1 < iVar14)) {
    if (*(char *)(iVar12 + 0x1b1) == '\x01') {
      if ((-1 < *(int *)(iVar12 + 0x50)) || (-1 < *(int *)(iVar12 + 0x54))) {
        iVar14 = param_2 * 2;
        uVar6 = (uint)*(ushort *)(iVar12 + iVar14 + 0x34a0);
        uVar5 = (uint)*(ushort *)(iVar12 + iVar14 + 0x34ac);
        local_88 = uVar5 - uVar6;
        if ((int)local_88 < (int)sVar16) {
          if (uVar6 < uVar5) {
            memcpy(param_3,(void *)(iVar12 + uVar6 + param_2 * 0x400 + 0x1c94),local_88);
            sVar16 = *param_4;
            iVar12 = tnp::gTNPSession + iVar15 + iVar14;
            *(undefined2 *)(iVar12 + 0x34a0) = *(undefined2 *)(iVar12 + 0x34ac);
            sVar16 = sVar16 - local_88;
            local_78 = (void *)((int)param_3 + local_88);
          }
          else {
            local_88 = 0;
            local_78 = param_3;
          }
          iVar12 = param_2 * 0x1c;
          uVar5 = param_5 / 1000;
          if (param_5 < 10 && 0 < (int)sVar16) {
            param_5 = 10;
          }
          iVar1 = param_1 * 0x18;
          while (cVar8 = tnp::gFlagInitialized, 9 < param_5 && 0 < (int)sVar16) {
            if (tnp::gFlagInitialized == '\0') {
              *param_4 = local_88;
              return -0xbb9;
            }
            tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
            iVar13 = tnp::gTNPSession + iVar15;
            if ((*(int *)(iVar13 + iVar12 + 0x3dc) != 0) &&
               (**(uint **)(iVar13 + iVar12 + 0x3d4) ==
                (uint)*(ushort *)(iVar13 + (param_2 + 0x244) * 2))) {
              p_Var4 = (__the_SLL_Element *)
                       tnp::sll_Remove_ByNumber((__the_SLL *)(iVar13 + iVar12 + 0x3d4),0);
              iVar7 = tnp::gTNPSession + iVar15;
              sVar10 = *(size_t *)(p_Var4 + 4);
              iVar13 = param_2 * 0x400 + 0x1c90;
              *(short *)(iVar7 + (param_2 + 0x1a40) * 2 + 0x2c) = (short)sVar10;
              memcpy((void *)(iVar7 + iVar13 + 4),*(void **)(p_Var4 + 8),sVar10);
              tnp::sll_element_Free(p_Var4);
              iVar7 = tnp::gTNPSession + iVar15;
              iVar11 = iVar7 + iVar14;
              uVar6 = (uint)*(ushort *)(iVar11 + 0x34ac);
              *(short *)(iVar11 + 0x488) = *(short *)(iVar11 + 0x488) + 1;
              if ((int)uVar6 < (int)sVar16) {
                memcpy(local_78,(void *)(iVar7 + iVar13 + 4),uVar6);
                iVar13 = tnp::gTNPSession + iVar15 + iVar14;
                sVar16 = *param_4;
                *(undefined2 *)(iVar13 + 0x34a0) = *(undefined2 *)(iVar13 + 0x34ac);
                local_88 = local_88 + uVar6;
                sVar16 = sVar16 - local_88;
                local_78 = (void *)((int)param_3 + local_88);
              }
              else {
                memcpy(local_78,(void *)(iVar7 + iVar13 + 4),sVar16);
                sVar10 = *param_4;
                local_88 = local_88 + sVar16;
                local_78 = (void *)((int)param_3 + local_88);
                *(short *)(tnp::gTNPSession + (param_2 + 0x1a50) * 2 + iVar15) = (short)sVar16;
                sVar16 = sVar10 - local_88;
              }
            }
            tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
            iVar13 = tnp::gTNPSession + iVar15;
            cVar8 = tnp::gFlagInitialized;
            if (*(char *)(iVar13 + 0x1ba) != '\0') break;
            if (*(byte *)(iVar13 + 0x1b1) != 1) {
              tnp::PPPP_DebugTrace
                        (1,"PPPP_Read ==> SessionHandle:%d,Channel:%d,bInUse:%d\n",param_1,param_2,
                         (uint)*(byte *)(iVar13 + 0x1b1));
              cVar8 = tnp::gFlagInitialized;
              break;
            }
            if ((*(int *)(iVar13 + 0x50) < 0) && (*(int *)(iVar13 + 0x54) < 0)) {
              tnp::PPPP_DebugTrace
                        (1,"PPPP_Read ==> SessionHandle:%d,Channel:%d,PSSocket:%d,SSocket:%d\n",
                         param_1,param_2,*(int *)(iVar13 + 0x50),*(int *)(iVar13 + 0x54));
              cVar8 = tnp::gFlagInitialized;
              break;
            }
            if (sVar16 == 0) break;
            tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
            iVar13 = tnp::gTNPSession + iVar15 + iVar12;
            if (*(int *)(iVar13 + 0x3dc) == 0) {
LAB_00026bac:
              param_5 = param_5 - 10;
              tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
              tnp::mSecSleep(10);
            }
            else {
              uVar6 = **(uint **)(iVar13 + 0x3d4);
              uVar9 = (uint)*(ushort *)(tnp::gTNPSession + iVar15 + (param_2 + 0x244) * 2);
              if (uVar6 != uVar9) {
                tnp::PPPP_DebugTrace
                          (1,
                           "Waiting for Data come in. B. Data read=%d, Total to read=%d, timeout=%d,LL_Recv[Channel:%d].HeadE->Idx=%d,gSession[SessionHandle:%d].ReadIndex=%d\n"
                           ,*param_4 - sVar16,*param_4,param_5,param_2,uVar6,param_1,uVar9);
                goto LAB_00026bac;
              }
              tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
            }
            tVar3 = time((time_t *)0x0);
            if (uVar5 + 1 < (uint)(tVar3 - tVar2)) {
              tnp::PPPP_DebugTrace(1,"Trouble!! sleep time is too long\n");
              param_5 = 0;
            }
          }
        }
        else {
          memcpy(param_3,(void *)(iVar12 + uVar6 + param_2 * 0x400 + 0x1c94),sVar16);
          cVar8 = tnp::gFlagInitialized;
          iVar14 = tnp::gTNPSession + iVar15 + iVar14;
          *(short *)(iVar14 + 0x34a0) = *(short *)(iVar14 + 0x34a0) + (short)sVar16;
          local_88 = sVar16;
        }
        *param_4 = local_88;
        if (cVar8 == '\0') {
          return -0xbb9;
        }
        if (param_5 < 10 && 0 < (int)sVar16) {
          return -0xbbb;
        }
        iVar15 = tnp::gTNPSession + iVar15;
        uVar5 = *(byte *)(iVar15 + 0x1ba) - 1 & 0xff;
        iVar14 = 0;
        if ((5 < uVar5) || (iVar14 = *(int *)(&DAT_0004c5b0 + uVar5 * 4), -1 < iVar14)) {
          if (*(char *)(iVar15 + 0x1b1) != '\x01') {
            iVar14 = -0xbc6;
          }
          if ((*(int *)(iVar15 + 0x50) < 0) && (*(int *)(iVar15 + 0x54) < 0)) {
            iVar14 = -0xbd0;
          }
          else if (-1 < iVar14) {
            return 0;
          }
        }
        if (*(char *)(iVar15 + 0x4f) != '\x01') {
          return iVar14;
        }
        memset(acStack_68,0,0x40);
        goto LAB_00026e14;
      }
      iVar14 = -0xbd0;
    }
    else {
      iVar14 = -0xbc6;
    }
  }
  *param_4 = 0;
  if (*(char *)(iVar12 + 0x4f) != '\x01') {
    return iVar14;
  }
  memset(acStack_68,0,0x40);
LAB_00026e14:
  sprintf(acStack_68,"PPPP_Read failed,ErrorCode:%d,Session:%d,Channel:%d",iVar14,param_1,param_2);
  tnp::PPPP__Send_Report(param_1,'\x02',acStack_68);
  return iVar14;
}



int PPPP_Check_Buffer(uint param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (tnp::gFlagInitialized == '\0') {
    return -0xbb9;
  }
  if (5 < param_2) {
    return -0xbbd;
  }
  if (tnp::gMaxSessionNumber < param_1) {
    return -0xbc3;
  }
  iVar2 = param_1 * 0x3f18;
  iVar1 = tnp::gTNPSession + iVar2;
  uVar3 = *(byte *)(iVar1 + 0x1ba) - 1 & 0xff;
  if ((uVar3 < 6) && (*(int *)(&DAT_0004c5c8 + uVar3 * 4) < 0)) {
    return *(int *)(&DAT_0004c5c8 + uVar3 * 4);
  }
  if (*(char *)(iVar1 + 0x1b1) != '\x01') {
    return -0xbc6;
  }
  if ((*(int *)(iVar1 + 0x50) < 0) && (*(int *)(iVar1 + 0x54) < 0)) {
    return -0xbd0;
  }
  tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + param_1 * 0x18));
  if (param_3 != (int *)0x0) {
    iVar1 = tnp::gTNPSession + iVar2 + param_2 * 0x1c;
    *param_3 = *(int *)(iVar1 + 0x290) + *(int *)(iVar1 + 0x1e8) + *(int *)(iVar1 + 0x338);
  }
  if (param_4 != (int *)0x0) {
    iVar1 = tnp::gTNPSession + iVar2 + param_2 * 2;
    *param_4 = ((uint)*(ushort *)(iVar1 + 0x34ac) - (uint)*(ushort *)(iVar1 + 0x34a0)) +
               *(int *)(tnp::gTNPSession + iVar2 + param_2 * 0x1c + 0x3e0);
  }
  tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + param_1 * 0x18));
  return 0;
}



size_t PPPP_Write(uint param_1,uint param_2,void *param_3,size_t param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t __n;
  char *__src;
  size_t unaff_r11;
  bool bVar9;
  bool bVar10;
  char acStack_68 [68];
  
  tnp::PPPP_DebugTrace(1,"PPPP_Write() Enter.\n");
  if (tnp::gFlagInitialized == '\0') {
    return 0xfffff447;
  }
  if (param_2 < 6) {
    bVar9 = param_3 == (void *)0x0;
    sVar4 = 0;
    if (!bVar9) {
      sVar4 = param_4;
    }
    bVar2 = (int)sVar4 < 0;
    bVar10 = param_4 == 0;
    if ((!bVar9 && !bVar10) && !bVar2) {
      unaff_r11 = 0;
    }
    if ((bVar9 || bVar10) || bVar2) {
      unaff_r11 = 1;
    }
    if ((!bVar9 && !bVar10) && !bVar2) {
      if (tnp::gMaxSessionNumber < param_1) {
        return 0xfffff43d;
      }
      iVar8 = param_1 * 0x3f18;
      iVar6 = tnp::gTNPSession + iVar8;
      uVar5 = *(byte *)(iVar6 + 0x1ba) - 1 & 0xff;
      if ((5 < uVar5) || (unaff_r11 = *(size_t *)(&DAT_0004c5e0 + uVar5 * 4), -1 < (int)unaff_r11))
      {
        if (*(char *)(iVar6 + 0x1b1) != '\x01') {
          unaff_r11 = 0xfffff43a;
        }
        if ((*(int *)(iVar6 + 0x50) < 0) && (*(int *)(iVar6 + 0x54) < 0)) {
          unaff_r11 = 0xfffff430;
        }
        else if (-1 < (int)unaff_r11) {
          iVar6 = param_1 * 0x18;
          tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar6));
          iVar7 = tnp::gTNPSession + iVar8;
          uVar5 = (uint)*(ushort *)(iVar7 + (param_2 + 0x1a48) * 2 + 4);
          sVar4 = 0x400 - uVar5;
          if ((int)sVar4 < (int)param_4) {
            iVar1 = param_2 * 0x400;
            memcpy((void *)(iVar7 + iVar1 + uVar5 + 0x494),param_3,sVar4);
            iVar7 = 0xb;
            do {
              iVar3 = tnp::PPPP__Write_Block
                                (param_1,(uchar)param_2,
                                 (char *)(tnp::gTNPSession + iVar8 + iVar1 + 0x494),0x400);
              if (0 < iVar3) {
                __n = param_4 - sVar4;
                __src = (char *)((int)param_3 + sVar4);
                if ((int)__n < 0x400) goto LAB_00027518;
                iVar7 = 0;
                goto LAB_000274dc;
              }
            } while ((iVar3 == 0) && (iVar7 = iVar7 + -1, iVar7 != 0));
LAB_0002744c:
            tnp::PPPP_DebugTrace(1,"PPPP__Write_Block failed, memory allocate failed\n");
            iVar8 = tnp::gTNPSession + iVar8;
            *(undefined1 *)(iVar8 + 0x1c2) = 1;
            if (*(char *)(iVar8 + 0x1ba) == '\0') {
              *(undefined1 *)(iVar8 + 0x1ba) = 4;
            }
            tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar6));
            return 0xfffff434;
          }
          memcpy((void *)(iVar7 + uVar5 + param_2 * 0x400 + 0x494),param_3,param_4);
          iVar8 = tnp::gTNPSession + iVar8 + param_2 * 2;
          *(short *)(iVar8 + 0x3494) = *(short *)(iVar8 + 0x3494) + (short)param_4;
          goto LAB_000273ac;
        }
      }
      if (*(char *)(iVar6 + 0x4f) != '\x01') {
        return unaff_r11;
      }
      memset(acStack_68,0,0x40);
      sprintf(acStack_68,"PPPP_Write failed,ErrorCode:%d,Session:%d,Channel:%d",unaff_r11,param_1,
              param_2);
      tnp::PPPP__Send_Report(param_1,'\x02',acStack_68);
      return unaff_r11;
    }
  }
  return 0xfffff443;
LAB_000274dc:
  do {
    iVar3 = tnp::PPPP__Write_Block(param_1,(uchar)param_2,__src,0x400);
    if (iVar3 < 1) {
      if ((iVar3 != 0) || (10 < iVar7)) goto LAB_0002744c;
      iVar7 = iVar7 + 1;
    }
    else {
      __src = __src + 0x400;
      __n = __n - 0x400;
      iVar7 = 0;
    }
  } while (0x3ff < (int)__n);
LAB_00027518:
  iVar7 = (param_2 + 0x1a48) * 2;
  iVar3 = tnp::gTNPSession + iVar8;
  *(undefined2 *)(iVar3 + iVar7 + 4) = 0;
  if (0 < (int)__n) {
    memcpy((void *)(iVar3 + iVar1 + 0x494),__src,__n);
    *(short *)(tnp::gTNPSession + iVar7 + iVar8 + 4) = (short)__n;
  }
LAB_000273ac:
  tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar6));
  tnp::PPPP_DebugTrace(1,"PPPP_Write() Exit.\n");
  return param_4;
}



void PPPP_Config_Debug(int param_1,undefined4 param_2)

{
  tnp::DEBUG_LEVEL = param_2;
  if (param_1 == 0) {
    tnp::DEBUG_LEVEL = 0;
  }
  return;
}



void tnp::PPPP_Update_Network(void)

{
  UpdateNetwork();
  return;
}



undefined4 PPPP_Set_LogFilename(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  
  if ((param_1 != (char *)0x0) && (sVar1 = strlen(param_1), (int)sVar1 < 0x80)) {
    pvVar2 = memcpy(tnp::DEBUG_LOGFILE,param_1,sVar1 + 1);
    tnp::PPPP_DebugTrace(0x10,"DEBUG_LOGFILE:%s\n",pvVar2);
    return 0;
  }
  return 0xfffff443;
}



undefined4 PPPP_Initialize(char *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  tnp::PPPP_DebugTrace(1,"PPPP_Initialize() Enter...\n");
  if (tnp::gFlagInitialized == '\x01') {
    uVar2 = 0xfffff446;
  }
  else {
    tnp::MUTEX_INIT((pthread_mutex_t *)tnp::TheLock);
    iVar1 = tnp::InitSocketEnv();
    if (iVar1 < 0) {
      uVar2 = 0xfffff416;
    }
    else {
      tnp::UpdateNetwork();
      tnp::gLastNetDetectTime = 0;
      if (param_2 != 0) {
        tnp::gMaxSessionNumber = param_2;
      }
      uVar4 = tnp::gMaxSessionNumber;
      if (tnp::gTNPSession == (void *)0x0) {
        tnp::gTNPSession = malloc(tnp::gMaxSessionNumber * 0x3f18);
        tnp::gTNPSessionLock = malloc(uVar4 * 0x18);
        if (uVar4 != 0) {
          iVar1 = 0;
          uVar4 = 0;
          do {
            tnp::MUTEX_INIT((pthread_mutex_t *)((int)tnp::gTNPSessionLock + iVar1));
            uVar4 = uVar4 + 1;
            iVar1 = iVar1 + 0x18;
          } while (uVar4 < tnp::gMaxSessionNumber);
        }
      }
      iVar1 = 0;
      do {
        memset(tnp::gP2PServerAddr + iVar1,0,0x10);
        *(undefined2 *)(tnp::gP2PServerAddr + iVar1) = 2;
        iVar3 = iVar1 + 0x10;
        *(undefined2 *)(tnp::gP2PServerAddr + iVar1 + 2) = 0x647d;
        iVar1 = iVar3;
      } while (iVar3 != 0x30);
      if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
        strncpy(tnp::gServerString,param_1,0x100);
        tnp::PPPP__Resolve_P2PServer
                  (param_1,(sockaddr_in *)tnp::gP2PServerAddr,(sockaddr_in *)tnp::gP2PTCPServerAddr)
        ;
      }
      if (tnp::gMaxSessionNumber != 0) {
        uVar4 = 0;
        do {
          tnp::PPPP__Reset_Session(uVar4,0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < tnp::gMaxSessionNumber);
      }
      strncpy(tnp::gNetInfo + 0x14,"0.0.0.0",0x10);
      strncpy(tnp::gNetInfo + 4,"0.0.0.0",0x10);
      PPPP__Device_Init();
      PPPP__App_Init();
      tnp::PPPP__DeviceInfoList_Init();
      tnp::PPPP_DebugTrace(1,"PPPP_Initialize() Exit...\n");
      uVar2 = 0;
      tnp::gFlagInitialized = '\x01';
    }
  }
  return uVar2;
}



undefined4 PPPP_DeInitialize(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  tnp::PPPP_DebugTrace(1,"PPPP_DeInitialize() Enter.\n");
  if (tnp::gFlagInitialized == '\0') {
    return 0xfffff447;
  }
  iVar2 = 0;
  PPPP_Connect_Break_All();
  PPPP_Listen_Break();
  tnp::gFlagInitialized = 0;
  PPPP__Device_UnInit();
  PPPP__App_UnInit();
  tnp::PPPP__DeviceInfoList_UnInit();
  if (tnp::gMaxSessionNumber != 0) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      if ((-1 < *(int *)((int)tnp::gTNPSession + iVar2 + 0x50)) ||
         (-1 < *(int *)((int)tnp::gTNPSession + iVar2 + 0x54))) {
        tnp::PPPP__Close_Inner(uVar3);
      }
      iVar2 = iVar2 + 0x3f18;
      uVar3 = uVar1;
    } while (uVar1 < tnp::gMaxSessionNumber);
  }
  tnp::MUTEX_DESTROY((pthread_mutex_t *)tnp::TheLock);
  if (tnp::gTNPSession != (void *)0x0) {
    free(tnp::gTNPSession);
    tnp::gTNPSession = (void *)0x0;
  }
  if (tnp::gTNPSessionLock != (void *)0x0) {
    if (tnp::gMaxSessionNumber != 0) {
      iVar2 = 0;
      uVar3 = 0;
      do {
        tnp::MUTEX_DESTROY((pthread_mutex_t *)((int)tnp::gTNPSessionLock + iVar2));
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x18;
      } while (uVar3 < tnp::gMaxSessionNumber);
    }
    free(tnp::gTNPSessionLock);
    tnp::gTNPSessionLock = (void *)0x0;
  }
  tnp::ClearSocketEnv();
  tnp::PPPP_DebugTrace(1,"PPPP_DeInitialize() Exit.\n");
  return 0;
}



void PPPP_GetAPIVersion(void)

{
  PPPP_Get_APIVersion();
  return;
}



void PPPP_Set_Log_Filename(void)

{
  PPPP_Set_LogFilename();
  return;
}



// tnp::PPPP_Thread_R2PMP_Callback(void*)

void tnp::PPPP_Thread_R2PMP_Callback(void *param_1)

{
  if (gR2PMPCallback != (code *)0x0) {
    (*gR2PMPCallback)(param_1);
  }
                    // WARNING: Subroutine does not return
  pthread_exit((void *)0x0);
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// PPPP_Thread_Recv_Proto_App(void*)

void PPPP_Thread_Recv_Proto_App(void *param_1)

{
  sockaddr_in sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  hostent *phVar6;
  size_t sVar7;
  char cVar8;
  char *pcVar9;
  int iVar10;
  sockaddr_in *psVar11;
  char *__s;
  void *pvVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte local_658;
  uchar uStack_657;
  ushort uStack_656;
  uchar auStack_654 [4];
  uint local_650;
  uint local_64c;
  sockaddr_in asStack_648 [2];
  ushort uStack_646;
  in_addr local_644;
  undefined4 local_638;
  in_addr local_634;
  char acStack_628 [128];
  undefined1 local_5a8 [4];
  uint local_5a4;
  char acStack_5a0 [120];
  sockaddr_in local_528;
  char local_527;
  sockaddr_in asStack_524 [1280];
  
  memset(acStack_628,0,0x80);
  tnp::PPPP_DebugTrace(0x10,"PPPP_Thread_Recv_Proto Running.\n");
  iVar14 = (int)param_1 * 0x3f18;
  iVar10 = tnp::gTNPSession;
joined_r0x00027b10:
  do {
    if (iVar10 == 0) {
LAB_00027b90:
      tnp::PPPP_DebugTrace(0x10,"PPPP_Thread_Recv_Proto Exit.\n");
                    // WARNING: Subroutine does not return
      pthread_exit((void *)0x0);
    }
    iVar3 = *(int *)(iVar10 + iVar14 + 0x50);
    if ((iVar3 < 0) || (*(char *)(iVar10 + iVar14 + 0x1c1) != '\0')) goto LAB_00027b90;
    uVar4 = tnp::PPPP_Proto_Recv_ALL
                      (iVar3,asStack_648,200,&local_658,&uStack_656,(char *)&local_528,0x500,
                       &uStack_657);
    if (uVar4 != 0) {
      iVar10 = tnp::gTNPSession;
      if (uVar4 != 0xffffffff) {
        tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Recv_ALL ret = %d\n",uVar4);
        iVar10 = tnp::gTNPSession;
      }
      goto joined_r0x00027b10;
    }
    uVar16 = (uint)uStack_656;
    uVar15 = (uint)local_658;
    pcVar5 = inet_ntoa(local_644);
    uVar17 = (uStack_646 & 0xff) << 8 | (uint)(uStack_646 >> 8);
    tnp::PPPP_DebugTrace
              (0x400,"MsgType = 0x%02X, Size = %d from %s:%d\n",uVar15,uVar16,pcVar5,uVar17);
    sVar1 = local_528;
    if (local_658 == 0x77) {
LAB_00028174:
      tnp::PPPP_DebugTrace(0x10,"MSG_RLY_HELLO_ACK \n");
      iVar10 = tnp::gTNPSession;
      if (*(byte *)(tnp::gTNPSession + iVar14 + 0x1b0) < 0x19) {
        tnp::PPPP__Update_SessionState((int)param_1,'\x19');
        tnp::PPPP__Update_SessionState((int)param_1,'\x1a');
        memcpy((void *)(tnp::gTNPSession + iVar14 + 0xcc),asStack_648,0x10);
        iVar10 = tnp::gTNPSession + iVar14;
        tnp::PPPP_DebugTrace
                  (0x10,"Send MSG_RLY_PORT_EX For Device:%s-%06d-%s\n",iVar10 + 0x18,
                   *(undefined4 *)(iVar10 + 0x28),iVar10 + 0x20);
        iVar10 = tnp::gTNPSession;
        if (local_658 == 0x77) {
          iVar13 = tnp::gTNPSession + iVar14;
          *(undefined1 *)(iVar13 + 0x1bc) = 1;
          iVar3 = *(int *)(iVar13 + 0x54);
          uVar4 = *(uint *)(iVar13 + 0x28);
          pcVar5 = tnp::gSuperDeviceKey;
        }
        else {
          iVar13 = tnp::gTNPSession + iVar14;
          *(undefined1 *)(iVar13 + 0x1bc) = 0;
          pcVar5 = (char *)(iVar13 + 0x2c);
          iVar3 = *(int *)(iVar13 + 0x54);
          uVar4 = *(uint *)(iVar13 + 0x28);
        }
        iVar10 = iVar10 + iVar14;
        tnp::PPPP_Proto_Send_RlyPort_EX
                  (iVar3,(sockaddr_in *)(iVar10 + 0xcc),(char *)(iVar10 + 0x18),uVar4,
                   (char *)(iVar10 + 0x20),pcVar5);
        iVar10 = tnp::gTNPSession;
      }
      goto joined_r0x00027b10;
    }
    iVar10 = tnp::gTNPSession;
    if (local_658 < 0x78) {
      if (local_658 == 0x41) {
        local_638 = uVar4;
        local_634.s_addr = uVar4;
        local_5a8 = (undefined1  [4])uVar4;
        local_5a4 = uVar4;
        if (uStack_656 == 0x2c) {
          auStack_654[0] = '\0';
          auStack_654[1] = '\0';
          auStack_654[2] = 0;
          local_64c = uVar4;
          iVar3 = tnp::PPPP_Proto_Read_PunchPkt_EX
                            ((st_PPPP_PunchPkt_EX *)&local_528,(char *)&local_638,&local_650,
                             local_5a8,auStack_654,&local_64c,
                             (char *)(tnp::gTNPSession + iVar14 + 0x2c));
          iVar10 = tnp::gTNPSession;
          if (iVar3 < 0) {
            tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_PunchPkt_EX failed,Error:Invalid Sign\n");
            iVar3 = tnp::gTNPSession + iVar14;
            iVar10 = tnp::gTNPSession;
            if (*(char *)(iVar3 + 0x1b2) != -0xb) {
              __s = (char *)(iVar3 + 0x2c);
              *(undefined1 *)(iVar3 + 0x1b2) = 0xf5;
              memset(acStack_628,0,0x80);
              sVar7 = strlen(__s);
              pcVar5 = inet_ntoa(local_644);
              pcVar9 = "Read PunchPkt_EX:Invalid Sign(%.3s-%d),From:%s";
              goto LAB_00028b44;
            }
            goto joined_r0x00027b10;
          }
          iVar3 = tnp::gTNPSession + iVar14;
          uVar4 = *(uint *)(iVar3 + 0x1a8);
          if (*(uint *)(iVar3 + 0x1a8) < local_64c) {
            *(uint *)(iVar3 + 0x1a8) = local_64c;
            uVar4 = local_64c;
          }
          memcpy((void *)(iVar3 + 0x4c),auStack_654,3);
          iVar3 = 3;
          iVar10 = iVar10 + iVar14;
          while( true ) {
            tnp::PPPP_Proto_Send_PunchPkt_EX
                      (*(int *)(iVar10 + 0x54),asStack_648,(char *)(iVar10 + 0x18),
                       *(uint *)(iVar10 + 0x28),(char *)(iVar10 + 0x20),uVar4,
                       (char *)(iVar10 + 0x2c));
            tnp::mSecSleep(10);
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) break;
            iVar10 = tnp::gTNPSession + iVar14;
            uVar4 = *(uint *)(iVar10 + 0x1a8);
          }
        }
        else {
          tnp::PPPP_Proto_Read_PunchPkt
                    ((st_PPPP_PunchPkt *)&local_528,(char *)&local_638,&local_650,local_5a8);
          iVar10 = tnp::gTNPSession;
          iVar13 = tnp::gTNPSession + iVar14;
          pcVar5 = (char *)(iVar13 + 0x18);
          iVar3 = strncmp((char *)&local_638,pcVar5,7);
          if (iVar3 != 0) goto joined_r0x00027b10;
          pcVar9 = (char *)(iVar13 + 0x20);
          iVar3 = strncmp(local_5a8,pcVar9,7);
          if ((iVar3 != 0) || (uVar4 = *(uint *)(iVar13 + 0x28), uVar4 != local_650))
          goto joined_r0x00027b10;
          iVar10 = 3;
          while( true ) {
            tnp::PPPP_Proto_Send_PunchPkt(*(int *)(iVar13 + 0x54),asStack_648,pcVar5,uVar4,pcVar9);
            tnp::mSecSleep(10);
            iVar10 = iVar10 + -1;
            if (iVar10 == 0) break;
            iVar13 = tnp::gTNPSession + iVar14;
            pcVar5 = (char *)(iVar13 + 0x18);
            uVar4 = *(uint *)(iVar13 + 0x28);
            pcVar9 = (char *)(iVar13 + 0x20);
          }
        }
        tnp::PPPP_DebugTrace(0x10,"MSG_PUNCH_PKT, ID= %s-%06d-%s\n",&local_638,local_650,local_5a8);
        memcpy((void *)(tnp::gTNPSession + iVar14 + 0x5c),asStack_648,0x10);
        tnp::PPPP__Update_SessionState((int)param_1,'\x04');
        iVar10 = tnp::gTNPSession;
        goto joined_r0x00027b10;
      }
      if (local_658 < 0x42) {
        if (local_658 != 0x21) {
          if (local_658 == 0x40) {
            if (uStack_656 == 0x28) {
                    // WARNING: Ignoring partial resolution of indirect
              local_64c._0_2_ = 0;
              uVar4 = local_64c;
              local_650 = local_650 & 0xffffff00;
              local_64c._3_1_ = SUB41(uVar4,3);
              local_64c._0_2_ = (ushort)uVar4;
              local_64c._0_3_ = (uint3)(ushort)local_64c;
              local_638 = 0;
              iVar3 = tnp::PPPP_Proto_Read_PunchTo_EX
                                ((st_PPPP_PunchTo_EX *)&local_528,(sockaddr_in *)local_5a8,
                                 (uchar *)&local_650,(uchar *)&local_64c,&local_638,
                                 (char *)(tnp::gTNPSession + iVar14 + 0x2c));
              iVar10 = tnp::gTNPSession;
              if (iVar3 < 0) {
                tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_PunchTo_EX failed,Error:Invalid Sign\n");
                iVar3 = tnp::gTNPSession + iVar14;
                iVar10 = tnp::gTNPSession;
                if (*(char *)(iVar3 + 0x1b2) != -0xb) {
                  __s = (char *)(iVar3 + 0x2c);
                  *(undefined1 *)(iVar3 + 0x1b2) = 0xf5;
                  memset(acStack_628,0,0x80);
                  sVar7 = strlen(__s);
                  pcVar5 = inet_ntoa(local_644);
                  pcVar9 = "Read PunchTo_EX:Invalid Sign(%.3s-%d),From:%s";
                  goto LAB_00028b44;
                }
                goto joined_r0x00027b10;
              }
              iVar3 = tnp::gTNPSession + iVar14;
              uVar4 = *(uint *)(iVar3 + 0x1a8);
              if (*(uint *)(iVar3 + 0x1a8) < local_638) {
                *(uint *)(iVar3 + 0x1a8) = local_638;
                uVar4 = local_638;
              }
              iVar13 = 3;
              memcpy((void *)(iVar3 + 0x4c),&local_64c,3);
              iVar10 = iVar10 + iVar14;
              while( true ) {
                tnp::PPPP_Proto_Send_PunchPkt_EX
                          (*(int *)(iVar10 + 0x54),(sockaddr_in *)local_5a8,(char *)(iVar10 + 0x18),
                           *(uint *)(iVar10 + 0x28),(char *)(iVar10 + 0x20),uVar4,
                           (char *)(iVar10 + 0x2c));
                tnp::mSecSleep(10);
                iVar13 = iVar13 + -1;
                if (iVar13 == 0) break;
                iVar10 = tnp::gTNPSession + iVar14;
                uVar4 = *(uint *)(iVar10 + 0x1a8);
              }
            }
            else {
              tnp::PPPP_Proto_Read_PunchTo((st_PPPP_PunchTo *)&local_528,(sockaddr_in *)local_5a8);
              iVar10 = 3;
              do {
                iVar3 = tnp::gTNPSession + iVar14;
                tnp::PPPP_Proto_Send_PunchPkt
                          (*(int *)(iVar3 + 0x54),(sockaddr_in *)local_5a8,(char *)(iVar3 + 0x18),
                           *(uint *)(iVar3 + 0x28),(char *)(iVar3 + 0x20));
                tnp::mSecSleep(10);
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            pcVar5 = inet_ntoa((in_addr)local_5a4);
            tnp::PPPP_DebugTrace
                      (0x10,"MSG_PUNCH_TO ToAddr= %s:%d \n",pcVar5,
                       ((ushort)local_5a8._2_2_ & 0xff) << 8 | (uint)((ushort)local_5a8._2_2_ >> 8))
            ;
            tnp::PPPP__Update_SessionState((int)param_1,'\x04');
            iVar10 = tnp::gTNPSession;
            goto joined_r0x00027b10;
          }
          if (local_658 == 1) {
            tnp::ntohAddr(&local_528,(sockaddr_in *)(tnp::gTNPSession + iVar14 + 0x7c));
            pcVar9 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar14 + 0x80));
            uVar2 = *(ushort *)(tnp::gTNPSession + iVar14 + 0x7e);
            tnp::PPPP_DebugTrace
                      (0x10,"MSG_HELLO_ACK WanAddr= %s:%d \n",pcVar9,
                       (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8),pcVar5,uVar17);
            iVar10 = tnp::gTNPSession + iVar14;
            *(undefined2 *)(iVar10 + 0x6c) = 2;
            local_638 = 0x80;
            memset((sockaddr *)local_5a8,0,0x80);
            getsockname(*(int *)(iVar10 + 0x50),(sockaddr *)local_5a8,&local_638);
            iVar10 = tnp::gTNPSession;
            if (local_5a8._0_2_ == 2) {
              *(undefined2 *)(tnp::gTNPSession + iVar14 + 0x6e) = local_5a8._2_2_;
              phVar6 = gethostbyname(tnp::gNetInfo + 4);
              iVar10 = tnp::gTNPSession;
              if (phVar6 != (hostent *)0x0) {
                memcpy((void *)(tnp::gTNPSession + iVar14 + 0x70),*phVar6->h_addr_list,
                       phVar6->h_length);
                pcVar5 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar14 + 0x70));
                uVar2 = *(ushort *)(tnp::gTNPSession + iVar14 + 0x6e);
                tnp::PPPP_DebugTrace
                          (0x10,"MyLocal Addr: %s:%d\n",pcVar5,
                           (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
                iVar10 = tnp::gTNPSession;
              }
            }
          }
          goto joined_r0x00027b10;
        }
        tnp::PPPP__Update_SessionState((int)param_1,'\x02');
        tnp::PPPP_DebugTrace(0x10,"MSG_P2P_REQ_ACK, Result = %d \n",(int)(char)local_528);
        iVar10 = tnp::gTNPSession;
        sVar1 = *(sockaddr_in *)(tnp::gTNPSession + iVar14 + 0x1b2);
        if (((sVar1 != (sockaddr_in)0xfe && sVar1 != (sockaddr_in)0x1) ||
            (*(sockaddr_in *)(tnp::gTNPSession + iVar14 + 0x1b2) = local_528,
            local_528 == (sockaddr_in)0x0)) || (iVar3 = (int)(char)local_528, sVar1 == local_528))
        goto joined_r0x00027b10;
        memset(acStack_628,0,0x80);
        pcVar5 = inet_ntoa(local_644);
        sprintf(acStack_628,"Recv P2PReqAck Error:%d,From:%s",iVar3,pcVar5);
      }
      else {
        if (local_658 == 0x71) goto LAB_00028174;
        if (local_658 != 0x75) {
          if (local_658 == 0x42) {
            local_638 = 0;
            local_634.s_addr = 0;
            local_5a8 = (undefined1  [4])0x0;
            local_5a4 = 0;
            if (uStack_656 == 0x28) {
              local_64c = 0;
              iVar10 = tnp::PPPP_Proto_Read_P2PRdy_EX
                                 ((st_PPPP_P2PRdy_EX *)&local_528,(char *)&local_638,&local_650,
                                  local_5a8,&local_64c,(char *)(tnp::gTNPSession + iVar14 + 0x2c));
              if (iVar10 < 0) {
                tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_P2PRdy_EX failed,Error:Invalid Sign\n");
                iVar3 = tnp::gTNPSession + iVar14;
                iVar10 = tnp::gTNPSession;
                if (*(char *)(iVar3 + 0x1b2) != -0xb) {
                  __s = (char *)(iVar3 + 0x2c);
                  *(undefined1 *)(iVar3 + 0x1b2) = 0xf5;
                  memset(acStack_628,0,0x80);
                  sVar7 = strlen(__s);
                  pcVar5 = inet_ntoa(local_644);
                  pcVar9 = "Read P2PRdy_EX:Invalid Sign(%.3s-%d),From:%s";
                  goto LAB_00028b44;
                }
                goto joined_r0x00027b10;
              }
              uVar4 = local_650;
              if (*(uint *)(tnp::gTNPSession + iVar14 + 0x1a8) < local_64c) {
                *(uint *)(tnp::gTNPSession + iVar14 + 0x1a8) = local_64c;
              }
            }
            else {
              tnp::PPPP_Proto_Read_P2PRdy
                        ((st_PPPP_P2PRdy *)&local_528,(char *)&local_638,&local_650,local_5a8);
              iVar10 = tnp::gTNPSession;
              iVar13 = tnp::gTNPSession + iVar14;
              iVar3 = strncmp((char *)&local_638,(char *)(iVar13 + 0x18),7);
              if (((iVar3 != 0) ||
                  (iVar3 = strncmp(local_5a8,(char *)(iVar13 + 0x20),7), iVar3 != 0)) ||
                 (uVar4 = *(uint *)(iVar13 + 0x28), uVar4 != local_650)) goto joined_r0x00027b10;
            }
            tnp::PPPP_DebugTrace(0x10,"MSG_P2P_RDY, %s-%d-%s\n",&local_638,uVar4,local_5a8);
            memcpy((void *)(tnp::gTNPSession + iVar14 + 0x5c),asStack_648,0x10);
            tnp::PPPP__Set_SessionReady((int)param_1,'\0');
            iVar10 = tnp::gTNPSession;
          }
          goto joined_r0x00027b10;
        }
        if (0x1a < *(byte *)(tnp::gTNPSession + iVar14 + 0x1b0)) goto joined_r0x00027b10;
        tnp::PPPP__Update_SessionState((int)param_1,'\x1b');
        tnp::PPPP_Proto_Read_RlyPortAck
                  ((st_PPPP_RlyPortAck *)&local_528,(uint *)local_5a8,(ushort *)&local_638,
                   (char *)&local_64c);
        tnp::PPPP_DebugTrace
                  (0x10,"MSG_RLY_PORT_ACK MagicWord=0x%08X, Port = %d, Result = %d\n",local_5a8,
                   local_638 & 0xffff,local_64c & 0xff,uVar17);
        uVar4 = local_64c & 0xff;
        if (uVar4 == 0) {
          iVar10 = tnp::gTNPSession + iVar14;
          *(undefined1 (*) [4])(iVar10 + 0x18c) = local_5a8;
          *(ushort *)(iVar10 + 0xce) = (ushort)local_638 << 8 | (ushort)local_638 >> 8;
          tnp::PPPP__Update_SessionState((int)param_1,'\x1c');
          iVar3 = 0;
          do {
            iVar13 = tnp::gTNPSession + iVar14;
            iVar10 = iVar3 * 0x10;
            iVar3 = iVar3 + 1;
            tnp::PPPP_Proto_Send_RlyReq
                      (*(int *)(iVar13 + 0x50),(sockaddr_in *)(iVar13 + iVar10 + 0x8c),
                       (char *)(iVar13 + 0x18),*(uint *)(iVar13 + 0x28),(char *)(iVar13 + 0x20),
                       (sockaddr_in *)(iVar13 + 0xcc),*(uint *)(iVar13 + 0x18c));
            iVar10 = tnp::gTNPSession;
          } while (iVar3 != 3);
          goto joined_r0x00027b10;
        }
        *(undefined1 *)(tnp::gTNPSession + iVar14 + 0x1b3) = (undefined1)local_64c;
        memset(acStack_628,0,0x80);
        pcVar5 = inet_ntoa(local_644);
        sprintf(acStack_628,"Recv RlyPortAck Error:%d,From:%s",uVar4,pcVar5);
      }
LAB_0002815c:
      tnp::PPPP__Send_ErrorReport((int)param_1,'\x01',acStack_628);
      iVar10 = tnp::gTNPSession;
      goto joined_r0x00027b10;
    }
    if (local_658 != 0x87) {
      if (local_658 < 0x88) {
        if (local_658 == 0x82) {
          iVar10 = tnp::gTNPSession + iVar14;
          if (*(char *)(iVar10 + 0x1b0) == ' ') {
            tnp::PPPP_DebugTrace
                      (0x10,"gTNPSession[SessionHandle].State is ready, drop msg MSG_RLY_TO\n",0x20,
                       iVar10,pcVar5,uVar17);
            iVar10 = tnp::gTNPSession;
            goto joined_r0x00027b10;
          }
          if (uStack_656 == 0x24) {
            iVar10 = tnp::PPPP_Proto_Read_RlyTo_EX
                               ((st_PPPP_RlyTo_EX *)&local_528,(sockaddr_in *)local_5a8,&local_638,
                                (char *)(iVar10 + 0x2c));
            if (iVar10 < 0) {
              tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_RlyTo_EX failed,Error:Invalid Sign\n");
              iVar3 = tnp::gTNPSession + iVar14;
              iVar10 = tnp::gTNPSession;
              if (*(char *)(iVar3 + 0x1b3) != -0xb) {
                __s = (char *)(iVar3 + 0x2c);
                *(undefined1 *)(iVar3 + 0x1b3) = 0xf5;
                memset(acStack_628,0,0x80);
                sVar7 = strlen(__s);
                pcVar5 = inet_ntoa(local_644);
                pcVar9 = "Read RlyTo_EX:Invalid Sign(%.3s-%d),From:%s";
LAB_00028b44:
                sprintf(acStack_628,pcVar9,__s,sVar7,pcVar5);
                goto LAB_0002815c;
              }
              goto joined_r0x00027b10;
            }
          }
          else {
            tnp::PPPP_Proto_Read_RlyTo
                      ((st_PPPP_RlyTo *)&local_528,(sockaddr_in *)local_5a8,&local_638);
          }
          pcVar5 = inet_ntoa((in_addr)local_5a4);
          iVar3 = 3;
          cVar8 = -1;
          tnp::PPPP_DebugTrace
                    (0x10,"MSG_RLY_TO ToAddr= %s:%d , MagicWord=0x%08X\n",pcVar5,
                     ((ushort)local_5a8._2_2_ & 0xff) << 8 | (uint)((ushort)local_5a8._2_2_ >> 8),
                     local_638,uVar17);
          tnp::PPPP__Update_SessionState((int)param_1,'\x1e');
          iVar10 = tnp::gTNPSession + iVar14;
          *(uint *)(iVar10 + 0x18c) = local_638;
          memcpy((void *)(iVar10 + 0x5c),asStack_648,0x10);
          do {
            iVar10 = tnp::gTNPSession + iVar14;
            iVar10 = tnp::PPPP_Proto_Send_RlyPkt
                               (*(int *)(iVar10 + 0x54),(sockaddr_in *)local_5a8,
                                (char *)(iVar10 + 0x18),*(uint *)(iVar10 + 0x28),
                                (char *)(iVar10 + 0x20),*(char *)(iVar10 + 0x4f),local_638);
            if (-1 < iVar10) {
              cVar8 = '\0';
            }
            tnp::mSecSleep(10);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          tnp::PPPP__Update_SessionState((int)param_1,'\x1f');
          iVar10 = tnp::gTNPSession + iVar14;
          tnp::PPPP_Proto_Send_RlyToAck
                    (*(int *)(iVar10 + 0x50),asStack_648,(char *)(iVar10 + 0x18),
                     *(uint *)(iVar10 + 0x28),(char *)(iVar10 + 0x20),*(char *)(iVar10 + 0x4f),
                     local_638,cVar8);
          iVar10 = tnp::gTNPSession;
          goto joined_r0x00027b10;
        }
        if (local_658 != 0x84) {
          if ((local_658 == 0x81) &&
             (uVar4 = (uint)*(byte *)(tnp::gTNPSession + iVar14 + 0x1b0), uVar4 < 0x1e)) {
            tnp::PPPP_DebugTrace
                      (0x10,"pRlyTCPReqAck->Result:%d\n",(int)(char)local_528,uVar4,pcVar5,uVar17);
            iVar10 = tnp::gTNPSession + iVar14;
            if ((*(byte *)(iVar10 + 0x1b0) < 0x1d) || (*(char *)(iVar10 + 0x1b3) == -2)) {
              *(sockaddr_in *)(iVar10 + 0x1b3) = sVar1;
            }
            tnp::PPPP__Update_SessionState((int)param_1,'\x1d');
            iVar10 = tnp::gTNPSession;
          }
          goto joined_r0x00027b10;
        }
        if (*(char *)(tnp::gTNPSession + iVar14 + 0x1b0) != '\x1f') goto joined_r0x00027b10;
        local_638 = 0;
        local_634.s_addr = 0;
        local_5a8 = (undefined1  [4])0x0;
        local_5a4 = 0;
        if (uStack_656 == 0x28) {
          iVar10 = tnp::PPPP_Proto_Read_RlyRdy_EX
                             ((st_PPPP_RlyRdy_EX *)&local_528,(char *)&local_638,&local_64c,
                              local_5a8,(char *)(tnp::gTNPSession + iVar14 + 0x2c));
          if (iVar10 < 0) {
            tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_RlyRdy_EX failed,Error:Invalid Sign\n");
            iVar3 = tnp::gTNPSession + iVar14;
            iVar10 = tnp::gTNPSession;
            if (*(char *)(iVar3 + 0x1b3) != -0xb) {
              __s = (char *)(iVar3 + 0x2c);
              *(undefined1 *)(iVar3 + 0x1b3) = 0xf5;
              memset(acStack_628,0,0x80);
              sVar7 = strlen(__s);
              pcVar5 = inet_ntoa(local_644);
              pcVar9 = "Read RlyRdy_EX:Invalid Sign(%.3s-%d),From:%s";
              goto LAB_00028b44;
            }
            goto joined_r0x00027b10;
          }
        }
        else {
          tnp::PPPP_Proto_Read_RlyRdy
                    ((st_PPPP_RlyRdy *)&local_528,(char *)&local_638,&local_64c,local_5a8);
        }
        tnp::PPPP_DebugTrace(0x10,"MSG_RLY_RDY, %s-%d-%s\n",&local_638,local_64c,local_5a8,uVar17);
        iVar10 = tnp::gTNPSession;
        iVar13 = tnp::gTNPSession + iVar14;
        iVar3 = strncmp((char *)&local_638,(char *)(iVar13 + 0x18),7);
        if (((iVar3 != 0) || (iVar3 = strncmp(local_5a8,(char *)(iVar13 + 0x20),7), iVar3 != 0)) ||
           (*(uint *)(iVar13 + 0x28) != local_64c)) goto joined_r0x00027b10;
        memcpy((void *)(iVar13 + 0x5c),asStack_648,0x10);
        cVar8 = *(char *)(tnp::gTNPSession + iVar14 + 0x1bc);
      }
      else {
        if (local_658 == 0x8a) {
          iVar10 = tnp::gTNPSession + iVar14;
          if (*(char *)(iVar10 + 0x1b0) == ')') {
            tnp::PPPP_DebugTrace
                      (0x10,"gTNPSession[SessionHandle].State is ready, drop msg MSG_RLY_TCP_TO\n",
                       0x29,iVar10,pcVar5,uVar17);
            iVar10 = tnp::gTNPSession;
            goto joined_r0x00027b10;
          }
          acStack_5a0[0] = '\0';
          acStack_5a0[1] = '\0';
          acStack_5a0[2] = '\0';
          acStack_5a0[3] = '\0';
          local_5a8 = (undefined1  [4])0x0;
          acStack_5a0[4] = '\0';
          acStack_5a0[5] = '\0';
          acStack_5a0[6] = '\0';
          acStack_5a0[7] = '\0';
          local_5a4 = 0;
          if (uStack_656 == 0x30) {
            iVar10 = tnp::PPPP_Proto_Read_RlyTCPTo_EX
                               ((st_PPPP_RlyTCPTo_EX *)&local_528,(sockaddr_in *)&local_638,
                                local_5a8,(char *)(iVar10 + 0x2c));
            if (iVar10 < 0) {
              tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_RlyTCPTo_EX failed,Error:Invalid Sign\n");
              iVar3 = tnp::gTNPSession + iVar14;
              iVar10 = tnp::gTNPSession;
              if (*(char *)(iVar3 + 0x1b3) != -0xb) {
                __s = (char *)(iVar3 + 0x2c);
                *(undefined1 *)(iVar3 + 0x1b3) = 0xf5;
                memset(acStack_628,0,0x80);
                sVar7 = strlen(__s);
                pcVar5 = inet_ntoa(local_644);
                pcVar9 = "Read RlyTCPTo_EX:Invalid Sign(%.3s-%d),From:%s";
                goto LAB_00028b44;
              }
              goto joined_r0x00027b10;
            }
          }
          else {
            tnp::PPPP_Proto_Read_RlyTCPTo
                      ((st_PPPP_RlyTCPTo *)&local_528,(sockaddr_in *)&local_638,local_5a8);
          }
          pvVar12 = (void *)(tnp::gTNPSession + iVar14 + 0x17c);
          if ((*(char *)(tnp::gTNPSession + iVar14 + 0x17c) == '\0') ||
             (iVar10 = memcmp(pvVar12,local_5a8,0x10), iVar10 != 0)) {
            tnp::PPPP_DebugTrace
                      (0x10,"Recv Invalid Ticket, Ticket = %.*s, RlyServerTicket=%.*s\n",0x10,
                       local_5a8,0x10,pvVar12);
            iVar10 = tnp::gTNPSession;
          }
          else {
            tnp::PPPP__Update_SessionState((int)param_1,'\'');
            pcVar5 = inet_ntoa(local_634);
            tnp::PPPP_DebugTrace
                      (0x10,"Recv MSG_RLY_TCP_TO ToAddr = %s:%d , Ticket = %.*s\n",pcVar5,
                       (local_638._2_2_ & 0xff) << 8 | (uint)(local_638._2_2_ >> 8),0x10,local_5a8);
            iVar10 = tnp::gTNPSession + iVar14;
            cVar8 = '\0';
            if (-1 < *(int *)(iVar10 + 0x54)) {
              iVar10 = tnp::PPPP_Proto_Send_RlyTCPPkt
                                 (*(int *)(iVar10 + 0x54),(sockaddr_in *)(iVar10 + 0xcc),
                                  (char *)(iVar10 + 0x17c),*(char *)(iVar10 + 0x4f));
              if (iVar10 < 0) {
                tnp::PPPP__Halt_TCP_For_Session((int)param_1);
                cVar8 = -1;
                iVar10 = tnp::gTNPSession + iVar14;
              }
              else {
                tnp::PPPP__Update_SessionState((int)param_1,'(');
                cVar8 = '\x01';
                iVar10 = tnp::gTNPSession + iVar14;
              }
            }
            tnp::PPPP_Proto_Send_RlyTCPToAck
                      (*(int *)(iVar10 + 0x50),'\0',asStack_648,(char *)(iVar10 + 0x18),
                       *(uint *)(iVar10 + 0x28),(char *)(iVar10 + 0x20),(char *)(iVar10 + 0x17c),
                       *(char *)(iVar10 + 0x4f),cVar8);
            iVar10 = tnp::gTNPSession;
          }
          goto joined_r0x00027b10;
        }
        if (local_658 < 0x8b) {
          if ((local_658 == 0x89) &&
             (uVar4 = (uint)*(byte *)(tnp::gTNPSession + iVar14 + 0x1b0), uVar4 < 0x27)) {
            tnp::PPPP_DebugTrace
                      (0x10,"pRlyTCPReqAck->Result:%d\n",(int)(char)local_528,uVar4,pcVar5,uVar17);
            iVar10 = tnp::gTNPSession + iVar14;
            if ((*(byte *)(iVar10 + 0x1b0) < 0x26) || (*(char *)(iVar10 + 0x1b3) == -2)) {
              *(sockaddr_in *)(iVar10 + 0x1b3) = sVar1;
            }
            tnp::PPPP__Update_SessionState((int)param_1,'&');
            iVar10 = tnp::gTNPSession;
          }
          goto joined_r0x00027b10;
        }
        if (local_658 == 0xa1) {
          tnp::PPPP_DebugTrace
                    (0x10,"MSG_REPORT_REQ, ReportLevel:%d\n",(uint)(byte)local_528,0xa1,pcVar5,
                     uVar17);
          iVar10 = tnp::gTNPSession;
          *(sockaddr_in *)(tnp::gTNPSession + iVar14 + 0x1bf) = sVar1;
          goto joined_r0x00027b10;
        }
        if (local_658 != 0xe0) goto joined_r0x00027b10;
        tnp::PPPP_DebugTrace(0x80,"Recv MSG_ALIVE\n");
        iVar3 = tnp::AddrCompare(asStack_648,(sockaddr_in *)(tnp::gTNPSession + iVar14 + 0x5c));
        iVar10 = tnp::gTNPSession;
        if (iVar3 != 0) goto joined_r0x00027b10;
        tnp::PPPP_Proto_Send_AliveAck(*(int *)(tnp::gTNPSession + iVar14 + 0x54),'\0',asStack_648);
        cVar8 = *(char *)(tnp::gTNPSession + iVar14 + 0x1b0);
        if (cVar8 == '\x04') {
          tnp::PPPP__Set_SessionReady((int)param_1,'\0');
          iVar10 = tnp::gTNPSession;
          goto joined_r0x00027b10;
        }
        iVar10 = tnp::gTNPSession;
        if (cVar8 != '\x1f') goto joined_r0x00027b10;
        cVar8 = *(char *)(tnp::gTNPSession + iVar14 + 0x1bc);
      }
      if (cVar8 == '\x01') {
        cVar8 = '\x03';
      }
      else {
        cVar8 = '\x01';
      }
      tnp::PPPP__Set_SessionReady((int)param_1,cVar8);
      iVar10 = tnp::gTNPSession;
      goto joined_r0x00027b10;
    }
    iVar3 = tnp::gTNPSession + iVar14;
    if ((*(byte *)(iVar3 + 0x1b0) < 0x17) && (*(int *)(iVar3 + 0x170) == 0)) {
      if ((*(byte *)(iVar3 + 0x1b0) != 0x16) || (*(char *)(iVar3 + 0x1b3) == -2)) {
        *(char *)(iVar3 + 0x1b3) = local_527;
      }
      tnp::PPPP__Update_SessionState((int)param_1,'\x16');
      iVar10 = tnp::gTNPSession;
      if ((local_527 == '\0') && (uVar4 = (uint)(byte)local_528, uVar4 != 0)) {
        psVar11 = asStack_524;
        iVar10 = 0;
        iVar3 = 0;
        do {
          pcVar5 = inet_ntoa((in_addr)*(in_addr_t *)(psVar11 + 4));
          iVar10 = iVar10 + 1;
          tnp::PPPP_DebugTrace
                    (0x10,"RLYAddr(%d) = %s:%d,Mode:%d,SDev:%d\n",iVar10,pcVar5,
                     (*(ushort *)(psVar11 + 2) & 0xff) << 8 | (uint)(*(ushort *)(psVar11 + 2) >> 8),
                     (uint)(byte)psVar11[0x10],(uint)(byte)psVar11[0x11]);
          if (psVar11[0x10] == (sockaddr_in)0x0) {
            tnp::PPPP__Update_SessionState((int)param_1,'\x18');
            iVar3 = iVar3 + 1;
            iVar13 = *(int *)(tnp::gTNPSession + iVar14 + 0x54);
            if (psVar11[0x11] == (sockaddr_in)0x1) {
              tnp::PPPP_Proto_Send_RlyHelloSDev(iVar13,psVar11);
            }
            else {
              tnp::PPPP_Proto_Send_RlyHello(iVar13,psVar11);
            }
          }
          psVar11 = psVar11 + 0x14;
        } while (iVar10 < (int)uVar4);
        pvVar12 = malloc(uVar4 * 0x14);
        if (pvVar12 == (void *)0x0) {
          iVar13 = tnp::gTNPSession + iVar14;
          iVar10 = tnp::gTNPSession;
        }
        else {
          memcpy(pvVar12,asStack_524,uVar4 * 0x14);
          iVar10 = tnp::gTNPSession;
          iVar13 = tnp::gTNPSession + iVar14;
          *(void **)(iVar13 + 0x170) = pvVar12;
          *(uint *)(iVar13 + 0x174) = uVar4;
        }
        *(int *)(iVar13 + 0x178) = iVar3;
      }
    }
  } while( true );
}



// WARNING: Type propagation algorithm not settling
// PPPP_Thread_Recv_Proto_App_TCP(void*)

void PPPP_Thread_Recv_Proto_App_TCP(void *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ushort *puVar4;
  st_PPPP_RlyTCPTo sVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  st_PPPP_RlyTCPTo *psVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  void *pvVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  byte local_7cf;
  ushort uStack_7ce;
  ushort uStack_7cc;
  ushort uStack_7ca;
  sockaddr_in asStack_7c8 [2];
  ushort uStack_7c6;
  in_addr local_7c4;
  uint local_7b8 [4];
  st_PPPP_RlyTCPTo sStack_7a8;
  char cStack_7a7;
  ushort uStack_7a6;
  in_addr_t aiStack_7a4 [480];
  
  tnp::PPPP_DebugTrace(0x80,"PPPP_Thread_Recv_Proto_TCP Running.\n");
  iVar21 = (int)param_1 * 0x3f18;
  iVar1 = (int)param_1 * 0x18;
  uVar13 = 0;
  uVar19 = 0;
LAB_0002901c:
  do {
    while( true ) {
      while( true ) {
        if ((tnp::gTNPSession == 0) || (*(char *)(tnp::gTNPSession + iVar21 + 0x1c1) != '\0'))
        goto LAB_0002945c;
        iVar6 = *(int *)(tnp::gTNPSession + iVar21 + 0x50);
        if (-1 < iVar6) break;
        tnp::mSecSleep(10);
      }
      uStack_7ce = (ushort)((0x780 - uVar19) * 0x10000 >> 0x10);
      iVar6 = tnp::PPPP_Proto_Recv_TCP
                        (iVar6,(char *)(&sStack_7a8 + uVar19),uStack_7ce,&uStack_7ce,0x28);
      if (iVar6 != 0) break;
      uVar20 = uVar19 + uStack_7ce;
      uVar14 = 0;
      while( true ) {
        uVar19 = uVar20 & 0xffff;
        psVar12 = &sStack_7a8 + uVar14;
        iVar6 = tnp::PPPP__Check_SessionDataReady
                          ((char *)psVar12,(ushort)uVar20,&uStack_7cc,&uStack_7ca,&local_7cf);
        if (iVar6 != 1) break;
        if ((tnp::gTNPSession == 0) ||
           (uVar16 = (uint)*(byte *)(tnp::gTNPSession + iVar21 + 0x1c1), uVar16 != 0))
        goto LAB_0002945c;
        uVar2 = (uint)uStack_7cc + (uint)uStack_7ca & 0xffff;
        uVar20 = uVar19 - uVar2;
        iVar6 = uVar14 + uStack_7cc;
        uVar14 = uVar14 + uVar2 & 0xffff;
        tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
        psVar12 = &sStack_7a8 + iVar6;
        if (local_7cf == 0x89) {
          if (*(byte *)(tnp::gTNPSession + iVar21 + 0x1b0) < 0x27) {
            sVar5 = (&sStack_7a8)[iVar6];
            tnp::PPPP_DebugTrace(0x10,"pRlyTCPReqAck->Result:%d\n",(int)(char)sVar5);
            iVar6 = tnp::gTNPSession + iVar21;
            if ((*(byte *)(iVar6 + 0x1b0) < 0x26) || (*(char *)(iVar6 + 0x1b3) == -2)) {
              *(st_PPPP_RlyTCPTo *)(iVar6 + 0x1b3) = sVar5;
            }
            tnp::PPPP__Update_SessionState((int)param_1,'&');
          }
        }
        else if (local_7cf < 0x8a) {
          if (local_7cf == 0x22) {
            if (*(char *)(tnp::gTNPSession + iVar21 + 0x1a7) != '\x01') {
              pcVar8 = inet_ntoa((in_addr)*(in_addr_t *)((int)aiStack_7a4 + iVar6));
              uVar13 = *(ushort *)((int)aiStack_7a4 + iVar6 + 0xfffffffeU);
              tnp::PPPP_DebugTrace
                        (0x10,"Recv MSG_P2P_TCP_SERVER ToAddr = %s:%d\n",pcVar8,
                         (uVar13 & 0xff) << 8 | (uint)(uVar13 >> 8));
              iVar18 = tnp::gP2PTCPAddrNum;
              iVar10 = 0;
              if (0 < tnp::gP2PTCPAddrNum) {
                iVar11 = tnp::gTNPSession + iVar21;
                pvVar17 = (void *)(iVar11 + 0xe0);
                iVar10 = 0;
                do {
                  iVar7 = memcmp(pvVar17,(void *)((int)aiStack_7a4 + iVar6),4);
                  if ((iVar7 == 0) &&
                     (*(short *)((int)pvVar17 + -2) ==
                      *(short *)((int)aiStack_7a4 + iVar6 + 0xfffffffeU))) {
                    if (*(int *)(iVar11 + 0x16c) == iVar10) {
                      tnp::PPPP_DebugTrace(0x10,"P2PServerIndex == tmpIndex(%d)\n",iVar10);
                      goto LAB_000292f4;
                    }
                    tnp::CloseSocket(*(int *)(iVar11 + 0x50));
                    iVar18 = tnp::gTNPSession + iVar21;
                    *(undefined1 *)(iVar18 + 0x1a5) = 0;
                    *(undefined4 *)(iVar18 + 0x50) = 0xffffffff;
                    uVar9 = tnp::PPPP__Connect_TCPServer
                                      ((sockaddr_in *)psVar12,1,(int *)(iVar18 + 0x16c),0x1e,0x14);
                    iVar6 = tnp::gTNPSession + iVar21;
                    *(undefined4 *)(iVar18 + 0x50) = uVar9;
                    if (*(int *)(iVar6 + 0x50) < 0) {
                      tnp::PPPP_DebugTrace(1,"Connect TCP Error...\n");
                      tnp::PPPP__Halt_TCP_For_Session((int)param_1);
                      *(undefined1 *)(tnp::gTNPSession + iVar21 + 0x1b3) = 0xe2;
                    }
                    else {
                      *(int *)(iVar6 + 0x16c) = iVar10;
                      *(undefined1 *)(iVar6 + 0x1a5) = 1;
                      if (*(byte *)(iVar6 + 0x1b0) - 0x25 < 2) {
                        *(undefined1 *)(iVar6 + 0x1b3) = 1;
                        tnp::PPPP__Set_SessionState((int)param_1,'$');
                        iVar6 = tnp::gTNPSession + iVar21;
                        iVar6 = tnp::PPPP_Proto_Send_RlyTCPReq
                                          (*(int *)(iVar6 + 0x50),'\x01',
                                           (sockaddr_in *)
                                           (iVar6 + *(int *)(iVar6 + 0x16c) * 0x10 + 0xdc),
                                           (char *)(iVar6 + 0x18),*(uint *)(iVar6 + 0x28),
                                           (char *)(iVar6 + 0x20),(sockaddr_in *)(iVar6 + 0xcc),
                                           (char *)(iVar6 + 0x17c));
                        if (-1 < iVar6) {
                          tnp::PPPP__Update_SessionState((int)param_1,'%');
                        }
                      }
                    }
                    goto LAB_000290f8;
                  }
                  iVar10 = iVar10 + 1;
                  pvVar17 = (void *)((int)pvVar17 + 0x10);
                } while (iVar10 != iVar18);
              }
              tnp::PPPP_DebugTrace(0x10,"tmpIndex(%d) >= gP2PTCPAddrNum(%d)\n",iVar10,iVar18);
LAB_000292f4:
              *(undefined1 *)(tnp::gTNPSession + iVar21 + 0x1b3) = 0xfe;
            }
          }
          else if (local_7cf == 0x87) {
            iVar10 = tnp::gTNPSession + iVar21;
            if ((*(byte *)(iVar10 + 0x1b0) < 0x17) && (*(int *)(iVar10 + 0x170) == 0)) {
              if ((*(byte *)(iVar10 + 0x1b0) != 0x16) || (*(char *)(iVar10 + 0x1b3) == -2)) {
                *(char *)(iVar10 + 0x1b3) = (&cStack_7a7)[iVar6];
              }
              tnp::PPPP__Update_SessionState((int)param_1,'\x16');
              if (((&cStack_7a7)[iVar6] == '\0') &&
                 (uVar19 = (uint)(byte)(&sStack_7a8)[iVar6], uVar19 != 0)) {
                iVar10 = 0;
                pvVar17 = (void *)((int)aiStack_7a4 + iVar6);
                do {
                  pcVar8 = inet_ntoa((in_addr)*(in_addr_t *)((int)pvVar17 + 4));
                  puVar4 = (ushort *)((int)pvVar17 + 2);
                  pbVar3 = (byte *)((int)pvVar17 + 0x10);
                  iVar10 = iVar10 + 1;
                  pvVar17 = (void *)((int)pvVar17 + 0x14);
                  tnp::PPPP_DebugTrace
                            (0x10,"RLYAddr(%d) = %s:%d,Mode:%d\n",iVar10,pcVar8,
                             (*puVar4 & 0xff) << 8 | (uint)(*puVar4 >> 8),(uint)*pbVar3);
                } while (iVar10 < (int)uVar19);
                pvVar17 = malloc(uVar19 * 0x14);
                if (pvVar17 == (void *)0x0) {
                  iVar6 = tnp::gTNPSession + iVar21;
                }
                else {
                  memcpy(pvVar17,(void *)((int)aiStack_7a4 + iVar6),uVar19 * 0x14);
                  iVar6 = tnp::gTNPSession + iVar21;
                  *(void **)(iVar6 + 0x170) = pvVar17;
                  *(uint *)(iVar6 + 0x174) = uVar19;
                }
                *(undefined4 *)(iVar6 + 0x178) = 0;
              }
            }
          }
        }
        else if (local_7cf == 0x8a) {
          local_7b8[1] = 0;
          local_7b8[2] = 0;
          local_7b8[3] = 0;
          local_7b8[0] = uVar16;
          tnp::PPPP_Proto_Read_RlyTCPTo(psVar12,asStack_7c8,(char *)local_7b8);
          pvVar17 = (void *)(tnp::gTNPSession + iVar21 + 0x17c);
          if ((*(char *)(tnp::gTNPSession + iVar21 + 0x17c) == '\0') ||
             (iVar6 = memcmp(pvVar17,local_7b8,0x10), iVar6 != 0)) {
            tnp::PPPP_DebugTrace
                      (0x10,"Recv Invalid Ticket, Ticket = %.*s, RlyServerTicket=%.*s\n",0x10,
                       local_7b8,0x10,pvVar17);
          }
          else {
            tnp::PPPP__Update_SessionState((int)param_1,'\'');
            pcVar8 = inet_ntoa(local_7c4);
            tnp::PPPP_DebugTrace
                      (0x10,"Recv MSG_RLY_TCP_TO ToAddr = %s:%d , Ticket = %.*s\n",pcVar8,
                       (uStack_7c6 & 0xff) << 8 | (uint)(uStack_7c6 >> 8),0x10,local_7b8);
            iVar6 = tnp::gTNPSession + iVar21;
            cVar15 = '\0';
            if (-1 < *(int *)(iVar6 + 0x54)) {
              iVar6 = tnp::PPPP_Proto_Send_RlyTCPPkt
                                (*(int *)(iVar6 + 0x54),(sockaddr_in *)(iVar6 + 0xcc),
                                 (char *)(iVar6 + 0x17c),*(char *)(iVar6 + 0x4f));
              if (iVar6 < 0) {
                tnp::PPPP__Halt_TCP_For_Session((int)param_1);
                cVar15 = -1;
                iVar6 = tnp::gTNPSession + iVar21;
              }
              else {
                tnp::PPPP__Update_SessionState((int)param_1,'(');
                cVar15 = '\x01';
                iVar6 = tnp::gTNPSession + iVar21;
              }
            }
            tnp::PPPP_Proto_Send_RlyTCPToAck
                      (*(int *)(iVar6 + 0x50),'\x01',
                       (sockaddr_in *)(iVar6 + *(int *)(iVar6 + 0x16c) * 0x10 + 0xdc),
                       (char *)(iVar6 + 0x18),*(uint *)(iVar6 + 0x28),(char *)(iVar6 + 0x20),
                       (char *)(iVar6 + 0x17c),*(char *)(iVar6 + 0x4f),cVar15);
          }
        }
        else if (local_7cf == 0xa1) {
          sVar5 = (&sStack_7a8)[iVar6];
          tnp::PPPP_DebugTrace(0x10,"MSG_REPORT_REQ, ReportLevel:%d\n",(uint)(byte)sVar5);
          *(st_PPPP_RlyTCPTo *)(tnp::gTNPSession + iVar21 + 0x1bf) = sVar5;
        }
LAB_000290f8:
        tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
      }
      if (uVar19 == 0 || uVar14 == 0) {
        uVar13 = 0;
      }
      else {
        memmove(&sStack_7a8,psVar12,uVar19);
        uVar13 = 0;
      }
    }
    if (iVar6 == -1) break;
    if (iVar6 == -2) {
      tnp::PPPP_DebugTrace(0x80,"Socket Error...\n");
      tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
      iVar6 = tnp::gTNPSessionLock;
      iVar21 = tnp::gTNPSession + iVar21;
      if (*(char *)(iVar21 + 0x1ba) == '\0') {
        *(undefined1 *)(iVar21 + 0x1ba) = 6;
      }
      *(undefined1 *)(iVar21 + 0x1c1) = 1;
      *(undefined1 *)(iVar21 + 0x1b3) = 0xe1;
      tnp::MUTEX_RELEASE((pthread_mutex_t *)(iVar6 + iVar1));
      goto LAB_0002945c;
    }
  } while( true );
  uVar13 = uVar13 + 1;
  if (3000 < uVar13) {
    tnp::PPPP_DebugTrace(0x80,"Timeout, maybe peer socket error...\n");
    tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
    iVar6 = tnp::gTNPSessionLock;
    iVar21 = tnp::gTNPSession + iVar21;
    if (*(char *)(iVar21 + 0x1ba) == '\0') {
      *(undefined1 *)(iVar21 + 0x1ba) = 1;
    }
    *(undefined1 *)(iVar21 + 0x1c1) = 1;
    *(undefined1 *)(iVar21 + 0x1b3) = 0xe0;
    tnp::MUTEX_RELEASE((pthread_mutex_t *)(iVar6 + iVar1));
LAB_0002945c:
    tnp::PPPP_DebugTrace(0x80,"PPPP_Thread_Recv_Proto_TCP Exit.\n");
    tnp::PPPP_DebugTrace(0x4000,"PPPP_Thread_Recv_Proto_TCP Exit.\n");
                    // WARNING: Subroutine does not return
    pthread_exit((void *)0x0);
  }
  goto LAB_0002901c;
}



// tnp::PPPP__R2PMPCallback(int)

void tnp::PPPP__R2PMPCallback(int param_1)

{
  ulong local_c [2];
  
  if (gR2PMPCallback != 0) {
    local_c[0] = CreateWorkerThread(PPPP_Thread_R2PMP_Callback,(void *)param_1);
    DetachThread(local_c);
  }
  return;
}



// PPPP__CheckP2PResult(int)

undefined4 PPPP__CheckP2PResult(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 * 0x3f18 + tnp::gTNPSession + 0x1b2);
  if (bVar1 == 0xff) {
    return 0xffffffff;
  }
  if ((bVar1 & 0xf7) == 0xf5) {
    return 0xffffffff;
  }
  if ((bVar1 & 0xfd) == 0xf9) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



size_t PPPP_Probe(char *param_1,int param_2,char *param_3,size_t param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  time_t tVar8;
  time_t tVar9;
  void *pvVar10;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  sockaddr_in *psVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined1 *__src;
  uint uVar20;
  ushort *puVar21;
  in_addr_t *piVar22;
  int iVar23;
  int local_b98;
  int local_b94;
  uint local_b60;
  uchar local_b4a;
  uchar uStack_b49;
  ushort uStack_b48;
  ushort uStack_b46;
  sockaddr_in asStack_b44 [2];
  ushort local_b42;
  in_addr local_b40 [2];
  char cStack_b35;
  char local_b34 [32];
  sockaddr_in asStack_b14 [4];
  undefined4 auStack_b10 [11];
  sockaddr_in asStack_ae4 [4];
  in_addr_t local_ae0 [3];
  sockaddr_in local_ad4 [4];
  sockaddr_in asStack_ad0 [20];
  sockaddr_in asStack_abc [20];
  char local_aa8 [4];
  char acStack_aa4 [4];
  char acStack_aa0 [4];
  char acStack_a9c [4];
  char local_a98 [4];
  char acStack_a94 [4];
  char acStack_a90 [4];
  char acStack_a8c [4];
  char local_a88 [4];
  char acStack_a84 [4];
  char acStack_a80 [4];
  char acStack_a7c [4];
  char local_a78 [4];
  char acStack_a74 [4];
  char acStack_a70 [4];
  undefined2 uStack_a6c;
  undefined1 local_a6a;
  char acStack_a68 [64];
  sockaddr_in asStack_a28 [2];
  ushort local_a26;
  in_addr_t local_a24 [319];
  char acStack_528 [16];
  uint local_518;
  undefined4 local_514;
  undefined1 auStack_510 [1260];
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    sVar11 = 0xfffff431;
  }
  else if (param_4 == 0 || param_3 == (char *)0x0) {
    sVar11 = 0xfffff443;
  }
  else {
    memset(acStack_528,0,0x500);
    local_b34[0x14] = '\0';
    local_b34[0x15] = '\0';
    local_b34[0x16] = '\0';
    local_b34[0x17] = '\0';
    local_b34[0] = '\0';
    local_b34[1] = '\0';
    local_b34[2] = '\0';
    local_b34[3] = '\0';
    local_b34[0x18] = '\0';
    local_b34[0x19] = '\0';
    local_b34[0x1a] = '\0';
    local_b34[0x1b] = '\0';
    local_b34[4] = '\0';
    local_b34[5] = '\0';
    local_b34[6] = '\0';
    local_b34[7] = '\0';
    local_b34[0x1c] = '\0';
    local_b34[0x1d] = '\0';
    local_b34[0x1e] = '\0';
    local_b34[0x1f] = '\0';
    local_b34[8] = '\0';
    local_b34[9] = '\0';
    local_b34[10] = '\0';
    local_b34[0xb] = '\0';
    local_b34[0xc] = '\0';
    local_b34[0xd] = '\0';
    local_b34[0xe] = '\0';
    local_b34[0xf] = '\0';
    local_b34[0x10] = '\0';
    local_b34[0x11] = '\0';
    local_b34[0x12] = '\0';
    local_b34[0x13] = '\0';
    uVar5 = tnp::getCurTime();
    srand(uVar5);
    iVar6 = tnp::PPPP__Decode_ServerString(param_1,asStack_b14,0);
    if (iVar6 == 0) {
      iVar6 = tnp::CreateSocket('\0');
      tnp::PPPP_DebugTrace(2,"PPPP_Probe Socket = %d\n",iVar6);
      if (iVar6 < 0) {
        sVar11 = 0xfffff430;
      }
      else {
        tnp::SetSocketBroadcast(iVar6);
        uStack_b46 = 0;
        iVar7 = tnp::TryBindPort(iVar6,&uStack_b46);
        if (iVar7 < 0) {
          tnp::CloseSocket(iVar6);
          piVar14 = __errno_location();
          tnp::PPPP_DebugTrace
                    (2,"PPPP_Probe Failed to Bind ... socket errno=%d ,UDP Port=%d\n",*piVar14,
                     (uint)uStack_b46);
          sVar11 = 0xfffff436;
        }
        else {
          tnp::PPPP_DebugTrace(2,"Bind UDP Port = %d\n",(uint)uStack_b46);
          local_aa8[0] = 'A';
          local_aa8[1] = 'B';
          local_aa8[2] = 'C';
          local_aa8[3] = 'D';
          acStack_aa4[0] = 'E';
          acStack_aa4[1] = 'F';
          acStack_aa4[2] = 'G';
          acStack_aa4[3] = 'H';
          acStack_aa0[0] = 'I';
          acStack_aa0[1] = 'J';
          acStack_aa0[2] = 'K';
          acStack_aa0[3] = 'L';
          acStack_a9c[0] = 'M';
          acStack_a9c[1] = 'N';
          acStack_a9c[2] = 'O';
          acStack_a9c[3] = 'P';
          local_a98[0] = 'Q';
          local_a98[1] = 'R';
          local_a98[2] = 'S';
          local_a98[3] = 'T';
          acStack_a94[0] = 'U';
          acStack_a94[1] = 'V';
          acStack_a94[2] = 'W';
          acStack_a94[3] = 'X';
          acStack_a90[0] = 'Y';
          acStack_a90[1] = 'Z';
          acStack_a90[2] = 'a';
          acStack_a90[3] = 'b';
          acStack_a8c[0] = 'c';
          acStack_a8c[1] = 'd';
          acStack_a8c[2] = 'e';
          acStack_a8c[3] = 'f';
          local_a88[0] = 'g';
          local_a88[1] = 'h';
          local_a88[2] = 'i';
          local_a88[3] = 'j';
          acStack_a84[0] = 'k';
          acStack_a84[1] = 'l';
          acStack_a84[2] = 'm';
          acStack_a84[3] = 'n';
          acStack_a80[0] = 'o';
          acStack_a80[1] = 'p';
          acStack_a80[2] = 'q';
          acStack_a80[3] = 'r';
          acStack_a7c[0] = 's';
          acStack_a7c[1] = 't';
          acStack_a7c[2] = 'u';
          acStack_a7c[3] = 'v';
          local_a78[0] = 'w';
          local_a78[1] = 'x';
          local_a78[2] = 'y';
          local_a78[3] = 'z';
          acStack_a74[0] = '0';
          acStack_a74[1] = '1';
          acStack_a74[2] = '2';
          acStack_a74[3] = '3';
          acStack_a70[0] = '4';
          acStack_a70[1] = '5';
          acStack_a70[2] = '6';
          acStack_a70[3] = '7';
          uStack_a6c = 0x3938;
          local_a6a = 0;
          memset(asStack_ae4,0,0x3c);
          memset(asStack_a28,0,0x500);
          iVar7 = 0;
          iVar23 = 0;
          do {
            psVar17 = asStack_b14 + iVar23;
            uVar15 = *(undefined4 *)((int)auStack_b10 + iVar23);
            uVar16 = *(undefined4 *)((int)auStack_b10 + iVar23 + 4);
            uVar18 = *(undefined4 *)((int)auStack_b10 + iVar23 + 8);
            iVar23 = iVar23 + 0x10;
            *(undefined4 *)(asStack_ae4 + iVar7) = *(undefined4 *)psVar17;
            *(undefined4 *)((int)local_ae0 + iVar7) = uVar15;
            *(undefined4 *)((int)local_ae0 + iVar7 + 4) = uVar16;
            *(undefined4 *)((int)local_ae0 + iVar7 + 8) = uVar18;
            iVar7 = iVar7 + 0x14;
          } while (iVar23 != 0x30);
          pcVar19 = &cStack_b35;
          do {
            uVar5 = rand();
            pcVar19 = pcVar19 + 1;
            *pcVar19 = local_aa8[uVar5 % 0x3e];
          } while (pcVar19 != local_b34 + 0xf);
          tVar8 = time((time_t *)0x0);
          iVar7 = 0;
          iVar23 = 0;
          tnp::PPPP_DebugTrace(2,"PPPP_Probe start work\n");
          do {
            pcVar19 = inet_ntoa((in_addr)local_ae0[iVar23 * 5]);
            iVar3 = iVar7 + 2;
            iVar23 = iVar23 + 1;
            iVar7 = iVar7 + 0x14;
            tnp::PPPP_DebugTrace
                      (2,"PPPP_Probe server address is %s:%d\n",pcVar19,
                       (*(ushort *)(asStack_ae4 + iVar3) & 0xff) << 8 |
                       (uint)(*(ushort *)(asStack_ae4 + iVar3) >> 8));
          } while (iVar23 != 3);
          uVar5 = 0;
          do {
            tnp::PPPP_Proto_Send_Probe(iVar6,asStack_ae4,local_b34,uVar5,'\0');
            tnp::PPPP_Proto_Send_Probe(iVar6,asStack_ad0,local_b34,uVar5,'\0');
            tnp::PPPP_Proto_Send_Probe(iVar6,asStack_abc,local_b34,uVar5,'\0');
            uVar5 = uVar5 + 1;
            tnp::mSecSleep(10);
          } while (uVar5 != 10);
          bVar2 = false;
          local_b98 = 0;
          local_b60 = 0;
          local_b94 = 0x1e;
          do {
            iVar7 = tnp::PPPP_Proto_Recv_ALL
                              (iVar6,asStack_b44,1000,&local_b4a,&uStack_b48,acStack_528,0x500,
                               &uStack_b49);
            tnp::PPPP_DebugTrace(2,"PPPP_Probe readRet:%d\n",iVar7);
            bVar4 = bVar2;
            if ((iVar7 == 0) && (local_b4a == 0xab)) {
              uVar5 = (local_518 ^ (local_518 >> 0x10 | local_518 << 0x10)) >> 8 & 0xffff00ff ^
                      (local_518 >> 8 | local_518 << 0x18);
              pcVar19 = inet_ntoa(local_b40[0]);
              piVar22 = local_ae0;
              tnp::PPPP_DebugTrace
                        (2,"PPPP_Probe recv MSG_PROBE_ACK from %s:%d seq:%d guid:%s\n",pcVar19,
                         (local_b42 & 0xff) << 8 | (uint)(local_b42 >> 8),uVar5,acStack_528);
              tnp::PPPP_Proto_Send_ProbeAck2(iVar6,asStack_b44,acStack_528,uVar5);
              uVar1 = local_b42;
              local_b98 = local_b98 + 1;
              iVar7 = 0;
              do {
                iVar23 = memcmp(piVar22,local_b40,4);
                if ((iVar23 == 0) && (*(ushort *)((int)piVar22 + -2) == uVar1)) {
                  *(int *)(asStack_ad0 + iVar7 * 0x14 + -4) =
                       *(int *)(asStack_ad0 + iVar7 * 0x14 + -4) + 1;
                  if (bVar2) goto LAB_00029e98;
                  goto LAB_00029ec0;
                }
                iVar7 = iVar7 + 1;
                piVar22 = piVar22 + 5;
              } while (iVar7 != 3);
              if (bVar2) {
                if (0 < (short)local_b60) {
                  piVar22 = local_a24;
                  iVar7 = 0;
                  do {
                    iVar23 = memcmp(piVar22,local_b40,4);
                    if ((iVar23 == 0) && (*(ushort *)((int)piVar22 + -2) == uVar1)) {
                      local_a24[iVar7 * 5 + 3] = local_a24[iVar7 * 5 + 3] + 1;
                      bVar4 = true;
                      goto LAB_00029ce8;
                    }
                    iVar7 = iVar7 + 1;
                    piVar22 = piVar22 + 5;
                  } while (iVar7 < (short)local_b60);
                }
LAB_00029e98:
                bVar4 = true;
              }
              else {
LAB_00029ec0:
                uVar1 = (ushort)((uint)local_514 >> 8);
                uVar5 = (uint)(short)((uVar1 ^ (byte)((uint)local_514 >> 0x18)) & 0xff ^ uVar1);
                tnp::PPPP_DebugTrace(2,"PPPP_Probe count:%d\n",uVar5);
                if (0x3f < (int)uVar5) {
                  uVar5 = 0x40;
                }
                iVar7 = (int)(short)uVar5;
                local_b60 = uVar5 & 0xffff;
                if (0 < iVar7) {
                  __src = auStack_510;
                  psVar17 = asStack_a28;
                  iVar23 = 0;
                  do {
                    pvVar10 = memcpy(psVar17,__src,0x10);
                    iVar23 = iVar23 + 1;
                    __src = __src + 0x10;
                    psVar17 = (sockaddr_in *)((int)pvVar10 + 0x14);
                  } while (iVar23 < iVar7);
                }
                uVar20 = 0;
                do {
                  if (0 < iVar7) {
                    iVar23 = 0;
                    psVar17 = asStack_a28;
                    do {
                      iVar23 = iVar23 + 1;
                      tnp::PPPP_Proto_Send_Probe(iVar6,psVar17,local_b34,uVar20,'\x01');
                      psVar17 = psVar17 + 0x14;
                    } while (iVar23 < iVar7);
                  }
                  uVar20 = uVar20 + 1;
                  tnp::mSecSleep(10);
                } while (uVar20 != 10);
                bVar2 = true;
                local_b94 = (short)uVar5 * 10 + local_b94;
                bVar4 = bVar2;
              }
            }
LAB_00029ce8:
            if (local_b98 != local_b94) {
              bVar4 = false;
            }
            if (bVar4) {
              tnp::PPPP_DebugTrace(2,"PPPP_Probe recv all ack:%d\n",local_b94);
              goto LAB_00029fd0;
            }
            tVar9 = time((time_t *)0x0);
          } while ((uint)(tVar9 - tVar8) <= param_2 + 1U);
          tnp::PPPP_DebugTrace(1,"PPPP_Probe timeout\n");
LAB_00029fd0:
          tnp::CloseSocket(iVar6);
          memset(param_3,0,param_4);
          memset(acStack_a68,0,0x40);
          sprintf(acStack_a68,"%s;",local_b34);
          uVar5 = param_4 - 1;
          sVar11 = strlen(acStack_a68);
          if (sVar11 < uVar5) {
            memcpy(param_3,acStack_a68,sVar11 + 1);
            psVar17 = asStack_ae4 + 2;
            pcVar19 = param_3 + sVar11;
            iVar6 = 0;
            do {
              memset(acStack_a68,0,0x40);
              pcVar12 = inet_ntoa((in_addr)local_ae0[iVar6 * 5]);
              iVar6 = iVar6 + 1;
              sprintf(acStack_a68,"%s:%d_%d_%d;",pcVar12,
                      (*(ushort *)psVar17 & 0xff) << 8 | (uint)(*(ushort *)psVar17 >> 8),
                      *(undefined4 *)(psVar17 + 0xe),10);
              sVar13 = strlen(acStack_a68);
              sVar11 = sVar11 + sVar13;
              if (uVar5 <= sVar11) goto LAB_0002a1ac;
              memcpy(pcVar19,acStack_a68,sVar13 + 1);
              pcVar19 = pcVar19 + sVar13;
              psVar17 = psVar17 + 0x14;
            } while (iVar6 != 3);
            if (0 < (short)local_b60) {
              puVar21 = &local_a26;
              iVar6 = 0;
              do {
                memset(acStack_a68,0,0x40);
                pcVar12 = inet_ntoa((in_addr)local_a24[iVar6 * 5]);
                iVar6 = iVar6 + 1;
                sprintf(acStack_a68,"%s:%d_%d_%d;",pcVar12,
                        (*puVar21 & 0xff) << 8 | (uint)(*puVar21 >> 8),*(undefined4 *)(puVar21 + 7),
                        10);
                sVar13 = strlen(acStack_a68);
                sVar11 = sVar11 + sVar13;
                if (uVar5 <= sVar11) goto LAB_0002a1ac;
                memcpy(pcVar19,acStack_a68,sVar13 + 1);
                pcVar19 = pcVar19 + sVar13;
                puVar21 = puVar21 + 10;
              } while ((short)local_b60 != iVar6);
            }
            sVar11 = strlen(param_3);
            tnp::PPPP_DebugTrace(2,"PPPP_Probe resultBuf size:%d resultBuf:%s\n",sVar11,param_3);
            return sVar11;
          }
LAB_0002a1ac:
          sVar11 = 0xfffff42f;
        }
      }
    }
    else {
      sVar11 = 0xfffff441;
    }
  }
  return sVar11;
}



uint * PPPP_Check_DevOnline(char *param_1,char *param_2,int param_3,uint *param_4)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  time_t tVar8;
  time_t tVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  uint *local_608;
  uchar local_5f2;
  uchar uStack_5f1;
  ushort uStack_5f0;
  ushort local_5ee;
  int local_5ec;
  int local_5e8;
  int local_5e4;
  int local_5e0;
  int local_5dc;
  int local_5d8;
  int local_5d4;
  int local_5d0;
  sockaddr_in asStack_5cc [2];
  ushort local_5ca;
  in_addr local_5c8;
  uint local_5bc [6];
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 local_59c;
  sockaddr_in asStack_598 [16];
  sockaddr_in asStack_588 [16];
  sockaddr_in asStack_578 [16];
  char acStack_568 [64];
  uint local_528;
  byte local_524;
  
  local_5ec = tnp::PPPP__Check_ValidDID(param_1);
  if (local_5ec != 0) {
    return (uint *)0xfffff444;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    puVar5 = (uint *)0xfffff431;
  }
  else {
    local_5e8 = local_5ec;
    local_5e4 = local_5ec;
    local_5e0 = local_5ec;
    local_5dc = local_5ec;
    local_5d8 = local_5ec;
    local_5d4 = local_5ec;
    local_5d0 = local_5ec;
    memset(acStack_568,0,0x40);
    strncpy(acStack_568,param_1,0x40);
    pcVar1 = strchr(acStack_568,0x2d);
    *pcVar1 = '\0';
    strncpy((char *)&local_5ec,acStack_568,0x10);
    pcVar2 = strchr(pcVar1 + 1,0x2d);
    *pcVar2 = '\0';
    uVar3 = atoi(pcVar1 + 1);
    strncpy((char *)&local_5dc,pcVar2 + 1,0x10);
    sVar4 = strnlen((char *)&local_5ec,8);
    if (7 < sVar4) {
      return (uint *)0xfffff444;
    }
    sVar4 = strnlen((char *)&local_5dc,8);
    if (7 < sVar4) {
      return (uint *)0xfffff444;
    }
    if ((int)uVar3 < 0) {
      return (uint *)0xfffff444;
    }
    memset(&local_528,0,0x500);
    puVar5 = (uint *)tnp::PPPP__Decode_ServerString(param_2,asStack_598,0);
    if (puVar5 == (uint *)0x0) {
      iVar6 = tnp::CreateSocket('\0');
      tnp::PPPP_DebugTrace(2,"PPPP_CheckDevOnline Socket = %d\n",iVar6);
      if (iVar6 < 0) {
        puVar5 = (uint *)0xfffff430;
      }
      else {
        tnp::SetSocketBroadcast(iVar6);
        local_5ee = 0;
        iVar7 = tnp::TryBindPort(iVar6,&local_5ee);
        if (-1 < iVar7) {
          tnp::PPPP_DebugTrace(2,"Bind UDP Port = %d\n",(uint)local_5ee);
          tVar8 = time((time_t *)0x0);
          iVar7 = 3;
          do {
            tnp::PPPP_Proto_Send_DevOnline
                      (iVar6,asStack_598,(char *)&local_5ec,uVar3,(char *)&local_5dc);
            tnp::PPPP_Proto_Send_DevOnline
                      (iVar6,asStack_588,(char *)&local_5ec,uVar3,(char *)&local_5dc);
            tnp::PPPP_Proto_Send_DevOnline
                      (iVar6,asStack_578,(char *)&local_5ec,uVar3,(char *)&local_5dc);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          local_608 = (uint *)0xfffff445;
          iVar7 = 0;
          local_5bc[0] = 0;
          local_5bc[1] = 0;
          local_5bc[2] = 0;
          local_5bc[3] = 0;
          local_5bc[4] = 0;
          local_5bc[5] = 0;
          uStack_5a4 = 0;
          uStack_5a0 = 0;
          local_59c = 0;
          do {
            puVar15 = &uStack_5f0;
            puVar5 = &local_528;
            iVar10 = tnp::PPPP_Proto_Recv_ALL
                               (iVar6,asStack_5cc,1000,&local_5f2,puVar15,(char *)&local_528,0x500,
                                &uStack_5f1);
            tnp::PPPP_DebugTrace(2,"PPPP_CheckDevOnline Return:%d\n",iVar10);
            if ((iVar10 == 0) && (local_5f2 == '\x19')) {
              local_608 = (uint *)(uint)local_524;
              puVar14 = (ushort *)
                        ((local_528 ^ (local_528 >> 0x10 | local_528 << 0x10)) >> 8 & 0xffff00ff ^
                        (local_528 >> 8 | local_528 << 0x18));
              local_5bc[iVar7] = (uint)puVar14;
              pcVar1 = inet_ntoa(local_5c8);
              iVar7 = iVar7 + 1;
              puVar15 = puVar14;
              puVar5 = local_608;
              tnp::PPPP_DebugTrace
                        (2,
                         "PPPP_CheckDevOnline recv MSG_DEV_ONLINE_REQ_ACK from %s:%d lastLgTime:%d result:%d\n"
                         ,pcVar1,(local_5ca & 0xff) << 8 | (uint)(local_5ca >> 8),puVar14,local_608)
              ;
              if (local_608 == (uint *)0x1) {
                *param_4 = (uint)puVar14;
                goto LAB_0002a6f0;
              }
            }
            if (6 < iVar7) {
              tnp::PPPP_DebugTrace(1,"PPPP_CheckDevOnline Recv 3 Offline Msg\n");
              uVar13 = local_5bc[1];
              uVar3 = local_5bc[0];
              uVar16 = local_5bc[2];
              iVar10 = iVar7;
              tnp::PPPP_DebugTrace
                        (1,"lastLgnTimeArray %d,%d,%d,recv_count=%d\n",local_5bc[0],local_5bc[1],
                         local_5bc[2],iVar7);
              iVar12 = 1;
              *param_4 = uVar3;
              while( true ) {
                iVar12 = iVar12 + 1;
                if (uVar3 < uVar13) {
                  *param_4 = uVar13;
                  uVar3 = uVar13;
                }
                if (iVar7 <= iVar12) break;
                uVar13 = local_5bc[iVar12];
              }
              tnp::PPPP_DebugTrace(1,"Select LastLgnTime %d\n",uVar3,uVar13,uVar16,iVar10);
              goto LAB_0002a6f0;
            }
            tVar9 = time((time_t *)0x0);
          } while ((uint)(tVar9 - tVar8) <= param_3 + 1U);
          tnp::PPPP_DebugTrace(1,"PPPP_CheckDevOnline timeout\n",tVar8,param_3 + 1U,puVar15,puVar5);
          uVar13 = local_5bc[1];
          uVar3 = local_5bc[0];
          if (iVar7 == 0) {
            *param_4 = 0;
            local_608 = (uint *)0xfffff445;
          }
          else {
            tnp::PPPP_DebugTrace
                      (1,"lastLgnTimeArray %d,%d,%d,recv_count=%d\n",local_5bc[0],local_5bc[1],
                       local_5bc[2],iVar7);
            *param_4 = uVar3;
            if (iVar7 != 1) {
              puVar5 = local_5bc + 2;
              while( true ) {
                if (uVar3 < uVar13) {
                  *param_4 = uVar13;
                  uVar3 = uVar13;
                }
                if (puVar5 == local_5bc + iVar7) break;
                uVar13 = *puVar5;
                puVar5 = puVar5 + 1;
              }
            }
            tnp::PPPP_DebugTrace(1,"Select LastLgnTime %d\n");
          }
LAB_0002a6f0:
          tnp::CloseSocket(iVar6);
          return local_608;
        }
        tnp::CloseSocket(iVar6);
        piVar11 = __errno_location();
        tnp::PPPP_DebugTrace
                  (2,"PPPP_CheckDevOnline Failed to Bind ... socket errno=%d ,UDP Port=%d\n",
                   *piVar11,(uint)local_5ee);
        puVar5 = (uint *)0xfffff436;
      }
    }
  }
  return puVar5;
}



// PPPP_TryWakeUp(char*, int, char*, int, unsigned int, unsigned int)

int PPPP_TryWakeUp(char *param_1,int param_2,char *param_3,int param_4,uint param_5,uint param_6)

{
  time_t tVar1;
  int iVar2;
  time_t tVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint __n;
  uint uVar10;
  byte *__src;
  byte local_cc8;
  uchar uStack_cc7;
  ushort uStack_cc6;
  ushort uStack_cc4;
  ushort local_cc2;
  ushort local_cc0;
  ushort uStack_cbe;
  int local_cbc;
  sockaddr_in asStack_cb8 [16];
  byte local_ca8 [1280];
  byte abStack_7a8 [1924];
  
  uStack_cc6 = 0;
  memset(local_ca8,0,0x500);
  if ((param_3 == (char *)0x0 || param_1 == (char *)0x0) || (param_5 == 0 && param_6 == 0)) {
    iVar6 = -0xbbd;
  }
  else {
    if (param_5 != 0) {
      tVar1 = time((time_t *)0x0);
      iVar6 = tnp::CreateSocket('\0');
      iVar2 = tnp::TryBindPort(iVar6,&uStack_cc6);
      if (iVar2 < 0) {
        tnp::CloseSocket(iVar6);
        piVar4 = __errno_location();
        tnp::PPPP_DebugTrace(2,"Failed to Bind ... socket errno=%d\n",*piVar4);
        return -0xbca;
      }
      iVar2 = param_4 * 0x3f18;
      do {
        tnp::PPPP_Proto_Send_WakeUp
                  (iVar6,'\0',(sockaddr_in *)(tnp::gTNPSession + iVar2 + 0x8c),param_1,param_2,
                   param_3,(char *)(tnp::gTNPSession + iVar2 + 0x2c));
        tnp::PPPP_Proto_Send_WakeUp
                  (iVar6,'\0',(sockaddr_in *)(tnp::gTNPSession + iVar2 + 0x9c),param_1,param_2,
                   param_3,(char *)(tnp::gTNPSession + iVar2 + 0x2c));
        tnp::PPPP_Proto_Send_WakeUp
                  (iVar6,'\0',(sockaddr_in *)(tnp::gTNPSession + iVar2 + 0xac),param_1,param_2,
                   param_3,(char *)(tnp::gTNPSession + iVar2 + 0x2c));
        iVar8 = tnp::PPPP_Proto_Recv_ALL
                          (iVar6,asStack_cb8,1000,&local_cc8,&uStack_cc4,(char *)local_ca8,0x500,
                           &uStack_cc7);
        if (iVar8 == 0) {
          if (local_cc8 == 0x1a) {
            tnp::PPPP_DebugTrace(8,"WakeUp_ReqAck result = %d \n",(uint)local_ca8[0]);
            iVar2 = -3000;
            if (local_ca8[0] == 0) {
              iVar2 = 0;
            }
            goto LAB_0002ad60;
          }
          tnp::PPPP_DebugTrace(8,"recv unexpected msg with type %x \n",(uint)local_cc8);
        }
        else if (iVar8 != -1) {
          tnp::PPPP_DebugTrace(8,"PPPP_Proto_Recv_ALL return %d \n");
          iVar2 = -3000;
          goto LAB_0002ad60;
        }
        if (*(char *)(tnp::gTNPSession + iVar2 + 0x1bb) != '\0') {
          iVar2 = -0xbcb;
LAB_0002ad60:
          tnp::CloseSocket(iVar6);
          return iVar2;
        }
        tVar3 = time((time_t *)0x0);
      } while ((uint)(tVar3 - tVar1) <= param_5 + 1);
      tnp::CloseSocket(iVar6);
    }
    if (param_6 == 0) {
      iVar6 = -3000;
    }
    else {
      __n = 0;
      tnp::PPPP_DebugTrace(1,"Start Tcp Connecting ...\n");
      local_cbc = 0;
      tVar1 = time((time_t *)0x0);
      uVar5 = param_6;
      if (4 < param_6) {
        uVar5 = 5;
      }
      iVar2 = tnp::PPPP__Connect_TCPServer
                        ((sockaddr_in *)(tnp::gTNPSession + param_4 * 0x3f18 + 0xdc),
                         tnp::gP2PTCPAddrNum,&local_cbc,uVar5,param_6);
      if (iVar2 < 0) {
        tnp::PPPP_DebugTrace(1,"Connect P2PServer Error...\n");
        iVar6 = -0xbd3;
      }
      else {
        do {
          while( true ) {
            iVar6 = tnp::gTNPSession + param_4 * 0x3f18;
            if (*(char *)(iVar6 + 0x1bb) != '\0') {
              iVar6 = -0xbcb;
              goto LAB_0002aa38;
            }
            iVar6 = tnp::PPPP_Proto_Send_WakeUp
                              (iVar2,'\x01',(sockaddr_in *)(iVar6 + local_cbc * 0x10 + 0xdc),param_1
                               ,param_2,param_3,(char *)(iVar6 + 0x2c));
            if (iVar6 < 0) {
              tnp::CloseSocket(iVar2);
              return -0xbd4;
            }
            local_cc2 = (ushort)((0x780 - __n) * 0x10000 >> 0x10);
            iVar6 = tnp::PPPP_Proto_Recv_TCP
                              (iVar2,(char *)(abStack_7a8 + __n),local_cc2,&local_cc2,1000);
            if (iVar6 == 0) break;
            if (iVar6 == -2) {
              tnp::PPPP_DebugTrace(8,"PPPP_Proto_Recv_ALL return %d \n",0xfffffffe);
              iVar6 = -0xbd4;
              goto LAB_0002aa38;
            }
            tVar3 = time((time_t *)0x0);
            if (param_6 + 1 < (uint)(tVar3 - tVar1)) {
LAB_0002aa34:
              iVar6 = -0xbbb;
              goto LAB_0002aa38;
            }
          }
          uVar10 = __n + local_cc2;
          uVar5 = 0;
          while( true ) {
            __n = uVar10 & 0xffff;
            __src = abStack_7a8 + uVar5;
            iVar6 = tnp::PPPP__Check_SessionDataReady
                              ((char *)__src,(ushort)uVar10,&uStack_cbe,&local_cc0,&local_cc8);
            iVar8 = uVar5 + 4;
            if (iVar6 != 1) break;
            if (abStack_7a8[uVar5] == 0xf2) {
              iVar8 = uVar5 + 0x1c;
            }
            pbVar9 = abStack_7a8 + iVar8;
            if (local_cc8 == 0x1a) {
              tnp::PPPP_DebugTrace(8,"WakeUp_ReqAck result = %d \n",(uint)*pbVar9);
              iVar6 = -3000;
              if (*pbVar9 == 0) {
                iVar6 = 0;
              }
              if (__n != 0 && uVar5 != 0) goto LAB_0002ab6c;
              goto LAB_0002ab08;
            }
            tnp::PPPP_DebugTrace(8,"recv unexpected msg with type %x \n",(uint)local_cc8);
            if (*__src == 0xf2) {
              uVar7 = local_cc0 + 0x1c;
            }
            else {
              uVar7 = local_cc0 + 4;
            }
            uVar10 = __n - (uVar7 & 0xffff);
            uVar5 = uVar5 + (uVar7 & 0xffff) & 0xffff;
          }
          iVar6 = -3000;
          if (__n != 0 && uVar5 != 0) {
LAB_0002ab6c:
            memmove(abStack_7a8,__src,__n);
          }
LAB_0002ab08:
          tVar3 = time((time_t *)0x0);
          if (param_6 + 1 < (uint)(tVar3 - tVar1)) goto LAB_0002aa34;
        } while (iVar6 == -3000);
LAB_0002aa38:
        tnp::CloseSocket(iVar2);
      }
    }
  }
  return iVar6;
}



// PPPP_TryP2P(int, char)

undefined1 PPPP_TryP2P(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  tnp::PPPP_DebugTrace(1,"Send LanSearching & P2P Req\n");
  uVar10 = tnp::getCurTime();
  uVar6 = (int)param_2 & 1;
  tnp::PPPP_DebugTrace(1,"P2PStartTime:%lld\n",(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  iVar2 = tnp::gTNPSession;
  uVar7 = (int)param_2 >> 1 & 0xf;
  if (uVar7 == 0) {
    iVar8 = 0x2d;
  }
  else if (uVar7 == 0xf) {
    iVar8 = 0;
  }
  else {
    iVar8 = uVar7 * 10;
  }
  iVar5 = param_1 * 0x3f18;
  if (uVar6 == 1) {
    uVar7 = 0xfffffff2;
    *(undefined1 *)(tnp::gTNPSession + iVar5 + 0x1b2) = 1;
  }
  else {
    *(undefined1 *)(tnp::gTNPSession + iVar5 + 0x1b2) = 1;
    if (iVar8 == 0) {
      uVar9 = 0;
      goto LAB_0002b0d4;
    }
    uVar7 = 0;
  }
  cVar4 = *(char *)(iVar2 + iVar5 + 0x1bb);
  while (cVar4 == '\0') {
    if (uVar6 == 0) {
      if (-1 < (int)uVar7) goto LAB_0002af30;
    }
    else {
      tnp::PPPP_DebugTrace(1,"LanSearch Broadcastng, Counter = %d\n",0x3c - uVar7);
      if ((int)uVar7 < 0) {
        if ((uVar7 & 1) == 0) {
          tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
          iVar2 = tnp::gTNPSession + iVar5;
          tnp::PPPP_Proto_Send_LanSearch
                    (*(int *)(iVar2 + 0x50),0x7d6c,(char *)(iVar2 + 0x18),*(uint *)(iVar2 + 0x28),
                     (char *)(iVar2 + 0x20));
          tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
        }
      }
      else {
LAB_0002af30:
        if ((int)uVar7 % 10 == 0) {
          tnp::PPPP_DebugTrace(1,"P2P Req, Counter = %d\n",(int)(0x3c - uVar7) / 5);
          tnp::PPPP__Update_SessionState(param_1,'\x01');
          iVar2 = 0;
          do {
            iVar3 = tnp::gTNPSession + iVar5;
            iVar1 = iVar2 * 0x10;
            iVar2 = iVar2 + 1;
            tnp::PPPP_Proto_Send_P2PReq_EX
                      (*(int *)(iVar3 + 0x50),(sockaddr_in *)(iVar3 + iVar1 + 0x8c),
                       (char *)(iVar3 + 0x18),*(uint *)(iVar3 + 0x28),(char *)(iVar3 + 0x20),
                       (sockaddr_in *)(iVar3 + 0x6c),(char *)(iVar3 + 0x2c));
          } while (iVar2 != 3);
        }
      }
    }
    if (*(char *)(tnp::gTNPSession + iVar5 + 0x1b4) != '\0') {
      cVar4 = *(char *)(tnp::gTNPSession + iVar5 + 0x1b2);
      uVar9 = 1;
      goto LAB_0002b0cc;
    }
    iVar2 = PPPP__CheckP2PResult(param_1);
    if (iVar2 < 0) {
      uVar9 = 1;
      cVar4 = *(char *)(tnp::gTNPSession + iVar5 + 0x1b2);
      goto LAB_0002b0cc;
    }
    cVar4 = *(char *)(tnp::gTNPSession + iVar5 + 0x1b2);
    uVar9 = 0;
    if (cVar4 == -8) goto LAB_0002b0d4;
    if (cVar4 == -2) {
      uVar7 = uVar7 + 2;
      tnp::PPPP_DebugTrace(1,"P2P Req, P2PResult = %d\n");
    }
    else {
      uVar7 = uVar7 + 1;
    }
    tnp::mSecSleep(100);
    if (iVar8 <= (int)uVar7) {
      uVar9 = 0;
      cVar4 = *(char *)(tnp::gTNPSession + iVar5 + 0x1b2);
      goto LAB_0002b0cc;
    }
    cVar4 = *(char *)(tnp::gTNPSession + iVar5 + 0x1bb);
  }
  tnp::PPPP_DebugTrace(1,"gTNPSession[%d].bUserBreakConnectFlag=%d, Quit!!\n",param_1);
  uVar9 = 1;
  cVar4 = *(char *)(tnp::gTNPSession + iVar5 + 0x1b2);
LAB_0002b0cc:
  if (cVar4 == -2) {
    uVar9 = 1;
  }
LAB_0002b0d4:
  uVar11 = tnp::getCurTime();
  iVar2 = (int)uVar11 - (int)uVar10;
  *(int *)(tnp::gTNPSession + iVar5 + 0x3ef4) = iVar2;
  tnp::PPPP_DebugTrace
            (1,"P2PStopTime:%lld,ConnectTimeP2P:%lld\n",(int)uVar11,(int)((ulonglong)uVar11 >> 0x20)
             ,iVar2);
  return uVar9;
}



// PPPP_TryRelayByUDP(int, int)

undefined4 PPPP_TryRelayByUDP(int param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  sockaddr_in *psVar9;
  undefined4 uVar10;
  uint uVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  tnp::PPPP_DebugTrace(1,"Enter Relay By UDP...\n");
  uVar15 = tnp::getCurTime();
  tnp::PPPP_DebugTrace(1,"RelayStartTime(UDP):%lld\n",(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  if (param_2 < 1) {
LAB_0002b598:
    uVar10 = 0;
  }
  else {
    iVar8 = param_1 * 0x3f18;
    if (*(char *)(tnp::gTNPSession + iVar8 + 0x1bb) == '\0') {
      if (*(char *)(tnp::gTNPSession + iVar8 + 0x1b4) == '\0') {
        uVar11 = 0;
        cVar12 = '\0';
        do {
          iVar3 = PPPP__CheckP2PResult(param_1);
          if (iVar3 < 0) {
            tnp::PPPP_DebugTrace
                      (1,"P2PResult=%d, Quit!!\n",(int)*(char *)(tnp::gTNPSession + iVar8 + 0x1b2));
            uVar10 = 1;
            goto LAB_0002b5bc;
          }
          iVar3 = tnp::gTNPSession + iVar8;
          if ((*(char *)(iVar3 + 0x1b2) == -8) ||
             (iVar4 = (int)*(char *)(iVar3 + 0x1b3), iVar4 == -8)) {
            tnp::PPPP_DebugTrace(1,"P2PResult=%d, Quit!!\n");
            uVar10 = 0;
            goto LAB_0002b5bc;
          }
          if (iVar4 == -2) {
            param_2 = param_2 + -2;
            tnp::mSecSleep(100);
            if (0 < param_2) goto LAB_0002b314;
            goto LAB_0002b598;
          }
          if (iVar4 < 0) {
            tnp::PPPP_DebugTrace(1,"RLYResult=%d, Quit!!\n",iVar4);
            uVar10 = 1;
            goto LAB_0002b5bc;
          }
          cVar13 = *(char *)(iVar3 + 0x1b0);
          switch(cVar13) {
          case '\x17':
            goto LAB_0002b468;
          case '\x18':
LAB_0002b468:
            if ((uVar11 != 0) && (uVar11 % 5 == 0)) {
              tnp::PPPP_DebugTrace(1," RLYResult=%d, try again...\n",iVar4);
              iVar3 = tnp::gTNPSession + iVar8;
              if (*(int *)(iVar3 + 0x174) != 0) {
                uVar7 = 0;
                uVar14 = 1;
                do {
                  iVar4 = uVar7 * 0x14;
                  if (*(char *)(*(int *)(iVar3 + 0x170) + iVar4 + 0x10) == '\0') {
                    tnp::PPPP__Update_SessionState(param_1,'\x18');
                    pcVar5 = inet_ntoa((in_addr)*(in_addr_t *)
                                                 (*(int *)(tnp::gTNPSession + iVar8 + 0x170) + iVar4
                                                 + 4));
                    uVar2 = *(ushort *)(*(int *)(tnp::gTNPSession + iVar8 + 0x170) + iVar4 + 2);
                    tnp::PPPP_DebugTrace
                              (0x10,"RLYAddr(%d) = %s:%d \n",uVar14,pcVar5,
                               (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
                    iVar3 = *(int *)(tnp::gTNPSession + iVar8 + 0x54);
                    psVar9 = (sockaddr_in *)(*(int *)(tnp::gTNPSession + iVar8 + 0x170) + iVar4);
                    if (psVar9[0x11] == (sockaddr_in)0x1) {
                      tnp::PPPP_Proto_Send_RlyHelloSDev(iVar3,psVar9);
                    }
                    else {
                      tnp::PPPP_Proto_Send_RlyHello(iVar3,psVar9);
                    }
                  }
                  iVar3 = tnp::gTNPSession + iVar8;
                  bVar1 = uVar14 < *(uint *)(iVar3 + 0x174);
                  uVar7 = uVar14;
                  uVar14 = uVar14 + 1;
                } while (bVar1);
              }
              cVar13 = *(char *)(iVar3 + 0x1b0);
            }
            goto switchD_0002b2a8_default;
          case '\x19':
            goto LAB_0002b3d4;
          case '\x1a':
LAB_0002b3d4:
            if ((uVar11 != 0) && (uVar11 % 5 == 0)) {
              tnp::PPPP__Update_SessionState(param_1,'\x1a');
              iVar3 = tnp::gTNPSession + iVar8;
              tnp::PPPP_DebugTrace
                        (0x10,"Send MSG_RLY_PORT_EX For Device:%s-%06d-%s\n",iVar3 + 0x18,
                         *(undefined4 *)(iVar3 + 0x28),iVar3 + 0x20);
              iVar3 = tnp::gTNPSession + iVar8;
              if (*(char *)(iVar3 + 0x1bc) == '\x01') {
                iVar4 = *(int *)(iVar3 + 0x54);
                uVar7 = *(uint *)(iVar3 + 0x28);
                pcVar5 = tnp::gSuperDeviceKey;
              }
              else {
                pcVar5 = (char *)(iVar3 + 0x2c);
                iVar4 = *(int *)(iVar3 + 0x54);
                uVar7 = *(uint *)(iVar3 + 0x28);
              }
              tnp::PPPP_Proto_Send_RlyPort_EX
                        (iVar4,(sockaddr_in *)(iVar3 + 0xcc),(char *)(iVar3 + 0x18),uVar7,
                         (char *)(iVar3 + 0x20),pcVar5);
              cVar13 = *(char *)(tnp::gTNPSession + iVar8 + 0x1b0);
            }
            goto switchD_0002b2a8_default;
          case '\x1b':
            break;
          case '\x1c':
            break;
          case '\x1d':
            break;
          case '\x1e':
            goto LAB_0002b2d4;
          case '\x1f':
LAB_0002b2d4:
            if ((uVar11 != 0) && (uVar11 % 5 == 0)) {
              tnp::PPPP__Update_SessionState(param_1,'\x1f');
              iVar3 = tnp::gTNPSession + iVar8;
              tnp::PPPP_Proto_Send_RlyPkt
                        (*(int *)(iVar3 + 0x54),(sockaddr_in *)(iVar3 + 0xcc),(char *)(iVar3 + 0x18)
                         ,*(uint *)(iVar3 + 0x28),(char *)(iVar3 + 0x20),*(char *)(iVar3 + 0x4f),
                         *(uint *)(iVar3 + 0x18c));
              iVar3 = 0;
              do {
                iVar6 = tnp::gTNPSession + iVar8;
                iVar4 = iVar3 * 0x10;
                iVar3 = iVar3 + 1;
                tnp::PPPP_Proto_Send_RlyReq
                          (*(int *)(iVar6 + 0x50),(sockaddr_in *)(iVar6 + iVar4 + 0x8c),
                           (char *)(iVar6 + 0x18),*(uint *)(iVar6 + 0x28),(char *)(iVar6 + 0x20),
                           (sockaddr_in *)(iVar6 + 0xcc),*(uint *)(iVar6 + 0x18c));
              } while (iVar3 != 3);
              cVar13 = *(char *)(tnp::gTNPSession + iVar8 + 0x1b0);
            }
          default:
            goto switchD_0002b2a8_default;
          }
          if ((uVar11 != 0) && (uVar11 % 5 == 0)) {
            tnp::PPPP__Update_SessionState(param_1,'\x1c');
            iVar3 = 0;
            do {
              iVar6 = tnp::gTNPSession + iVar8;
              iVar4 = iVar3 * 0x10;
              iVar3 = iVar3 + 1;
              tnp::PPPP_Proto_Send_RlyReq
                        (*(int *)(iVar6 + 0x50),(sockaddr_in *)(iVar6 + iVar4 + 0x8c),
                         (char *)(iVar6 + 0x18),*(uint *)(iVar6 + 0x28),(char *)(iVar6 + 0x20),
                         (sockaddr_in *)(iVar6 + 0xcc),*(uint *)(iVar6 + 0x18c));
            } while (iVar3 != 3);
            cVar13 = *(char *)(tnp::gTNPSession + iVar8 + 0x1b0);
          }
switchD_0002b2a8_default:
          param_2 = param_2 + -1;
          if (cVar12 == cVar13) {
            uVar11 = uVar11 + 1;
          }
          else {
            uVar11 = 1;
          }
          tnp::mSecSleep(100);
          cVar12 = cVar13;
          if (param_2 < 1) goto LAB_0002b598;
LAB_0002b314:
          if (*(char *)(tnp::gTNPSession + iVar8 + 0x1bb) != '\0') goto LAB_0002b6b0;
        } while (*(char *)(tnp::gTNPSession + iVar8 + 0x1b4) == '\0');
      }
      tnp::PPPP_DebugTrace(1,"bSessionReady=%d, Quit!!\n");
      uVar10 = 1;
    }
    else {
LAB_0002b6b0:
      tnp::PPPP_DebugTrace(1,"gTNPSession[%d].bUserBreakConnectFlag=%d, Quit!!\n",param_1);
      uVar10 = 1;
    }
  }
LAB_0002b5bc:
  uVar16 = tnp::getCurTime();
  iVar8 = (int)uVar16 - (int)uVar15;
  *(int *)(tnp::gTNPSession + param_1 * 0x3f18 + 0x3ef8) = iVar8;
  tnp::PPPP_DebugTrace
            (1,"RelayStopTime(UDP):%lld,ConnectTimeRelay(UDP):%lld\n",(int)uVar16,
             (int)((ulonglong)uVar16 >> 0x20),iVar8);
  return uVar10;
}



// PPPP_TryRelayByTCP(int, int)

undefined4 PPPP_TryRelayByTCP(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint local_68;
  undefined4 local_60;
  sockaddr local_3c;
  uint local_2c;
  
  tnp::PPPP_DebugTrace(1,"Ask for Relay By TCP...\n");
  uVar11 = tnp::getCurTime();
  tnp::PPPP_DebugTrace(1,"RelayStartTime(TCP):%lld\n",(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  tnp::PPPP_DebugTrace(1,"PPPP_TryRelayByTCP(SessionHandle:%d,Counter:%d) Enter.\n",param_1,param_2)
  ;
  tnp::PPPP__Set_SessionState(param_1,'!');
  iVar7 = param_1 * 0x3f18;
  iVar3 = tnp::gTNPSession + iVar7;
  *(undefined1 *)(iVar3 + 0x1b3) = 1;
  if (param_2 < 1) {
    local_60 = 1;
  }
  else if (*(char *)(iVar3 + 0x1bb) == '\0') {
    if (*(char *)(iVar3 + 0x1b4) == '\0') {
      local_60 = 1;
      uVar6 = 0;
      do {
        iVar3 = PPPP__CheckP2PResult(param_1);
        if (iVar3 < 0) {
          tnp::PPPP_DebugTrace
                    (1,"P2PResult=%d, Quit!!\n",(int)*(char *)(tnp::gTNPSession + iVar7 + 0x1b2));
          local_60 = 1;
          goto LAB_0002bb3c;
        }
        cVar8 = *(char *)(tnp::gTNPSession + iVar7 + 0x1b3);
        if (cVar8 == -8) {
          tnp::PPPP_DebugTrace(1,"RLYResult=%d, Quit!!\n");
          local_60 = 0;
          goto LAB_0002bb3c;
        }
        if (cVar8 == -2) {
          param_2 = param_2 + -2;
          tnp::mSecSleep(100);
        }
        else if (cVar8 == -10) {
LAB_0002bcf0:
          param_2 = param_2 + -1;
          tnp::mSecSleep(100);
        }
        else {
          if (cVar8 < '\0') {
            tnp::PPPP_DebugTrace(1,"RLYResult=%d, Quit!!\n");
            local_60 = 1;
            goto LAB_0002bb3c;
          }
          tnp::PPPP__Set_SessionState(param_1,'!');
          iVar3 = tnp::gTNPSession + iVar7;
          *(undefined1 *)(iVar3 + 0x1b3) = 1;
          if (uVar6 < *(uint *)(iVar3 + 0x174)) {
            iVar9 = uVar6 * 0x14;
            uVar6 = uVar6 + 1;
          }
          else {
            iVar9 = 0;
            uVar6 = 1;
          }
          puVar10 = (undefined4 *)(*(int *)(iVar3 + 0x170) + iVar9);
          local_3c._0_4_ = *puVar10;
          local_3c.sa_data._2_4_ = puVar10[1];
          local_3c.sa_data._6_4_ = puVar10[2];
          local_3c.sa_data._10_4_ = puVar10[3];
          local_2c = puVar10[4];
          if ((local_2c & 0xff) != 0) {
            tnp::PPPP__Halt_TCP_For_Session(param_1);
            memcpy((void *)(tnp::gTNPSession + iVar7 + 0xcc),&local_3c,0x10);
            local_68 = tnp::PPPP__Start_TCP_For_Session(param_1,&local_3c,5);
            tnp::PPPP_DebugTrace(1,"PPPP__Start_TCP_For_Session return:%d\n",local_68);
            if (local_68 == 0xfffffffe) {
              param_2 = param_2 + -0x32;
            }
            else {
              if ((int)local_68 < 0) goto LAB_0002bcf0;
              iVar3 = param_2;
              if (0x3c < param_2) {
                iVar3 = param_2 >> 1;
              }
              cVar8 = '\0';
              memset((void *)(tnp::gTNPSession + iVar7 + 0x17c),0,0x10);
              uVar5 = 0;
              iVar9 = param_2;
              do {
                uVar4 = (uint)*(byte *)(tnp::gTNPSession + iVar7 + 0x1bb);
                if (uVar4 != 0) {
                  tnp::PPPP_DebugTrace
                            (1,"gTNPSession[%d].bUserBreakConnectFlag=%d, Quit!!\n",param_1,uVar4);
                  local_60 = 1;
                  param_2 = 0;
                  break;
                }
                uVar4 = (uint)*(byte *)(tnp::gTNPSession + iVar7 + 0x1b4);
                if (uVar4 != 0) {
                  tnp::PPPP_DebugTrace(1,"bSessionReady=%d, Quit!!\n",uVar4);
                  local_60 = 1;
                  param_2 = 0;
                  break;
                }
                iVar1 = PPPP__CheckP2PResult(param_1);
                param_2 = 0;
                if (iVar1 < 0) {
                  tnp::PPPP_DebugTrace
                            (1,"P2PResult=%d, Quit!!\n",
                             (int)*(char *)(tnp::gTNPSession + iVar7 + 0x1b2));
                  local_60 = 1;
                  break;
                }
                iVar1 = tnp::gTNPSession + iVar7;
                cVar2 = *(char *)(iVar1 + 0x1b3);
                if (cVar2 == -8) {
                  tnp::PPPP_DebugTrace(1,"RLYResult=%d, Quit!!\n");
                  local_60 = 0;
                  param_2 = iVar9;
                  break;
                }
                if (cVar2 == -2) {
                  iVar3 = iVar3 + -2;
                  param_2 = iVar9 + -2;
                  tnp::mSecSleep(100);
                  goto LAB_0002bad8;
                }
                if (cVar2 == -4) {
                  tnp::mSecSleep(100);
                  tnp::PPPP__Set_SessionState(param_1,'\"');
                  iVar1 = tnp::gTNPSession + iVar7;
                  iVar3 = iVar3 + -1;
                  *(undefined1 *)(iVar1 + 0x1b3) = 1;
                  iVar9 = iVar9 + -1;
                }
                else {
                  if (cVar2 == -10) {
                    iVar3 = iVar3 + -1;
                    param_2 = iVar9 + -1;
                    tnp::mSecSleep(100);
                    goto LAB_0002bad8;
                  }
                  if (cVar2 < '\0') {
                    tnp::PPPP_DebugTrace(1,"RLYResult=%d, Quit!!\n");
                    local_60 = 1;
                    break;
                  }
                }
                param_2 = iVar9;
                tnp::PPPP_DebugTrace
                          (1," gTNPSession[SessionHandle].State=%d...\n",
                           (uint)*(byte *)(iVar1 + 0x1b0));
                iVar9 = tnp::gTNPSession + iVar7;
                cVar2 = *(char *)(iVar9 + 0x1b0);
                switch(cVar2) {
                case '\"':
                  tnp::PPPP_DebugTrace
                            (1," STATE_RLY_TCP_CONNECTED(LastStateCounter:)...\n",
                             (int)*(char *)(iVar9 + 0x1b3));
                  memcpy((void *)(tnp::gTNPSession + iVar7 + 0xcc),&local_3c,0x10);
                  iVar9 = tnp::gTNPSession + iVar7;
                  if (*(char *)(iVar9 + 0x1a7) == '\x01') {
                    local_68 = tnp::PPPP_Proto_Send_EasyTCPStart
                                         (*(int *)(iVar9 + 0x54),(sockaddr_in *)&local_3c,
                                          (char *)(iVar9 + 0x18),*(uint *)(iVar9 + 0x28),
                                          (char *)(iVar9 + 0x20),'\0',(char *)(iVar9 + 0x2c));
                  }
                  else {
                    local_68 = tnp::PPPP_Proto_Send_RlyTCPStart
                                         (*(int *)(iVar9 + 0x54),(sockaddr_in *)&local_3c,
                                          (char *)(iVar9 + 0x18),*(uint *)(iVar9 + 0x28),
                                          (char *)(iVar9 + 0x20),(char *)(iVar9 + 0x2c));
                  }
                  if ((int)local_68 < 0) goto LAB_0002bae4;
                  tnp::PPPP__Update_SessionState(param_1,'#');
                  cVar2 = *(char *)(tnp::gTNPSession + iVar7 + 0x1b0);
                  break;
                case '#':
                  break;
                case '$':
                  goto LAB_0002ba94;
                case '%':
LAB_0002ba94:
                  if ((uVar5 != 0) && (uVar5 % 5 == 0)) {
                    if (*(char *)(iVar9 + 0x1a5) == '\x01') {
                      if (cVar2 != '$') goto LAB_0002bdd4;
                      local_68 = tnp::PPPP_Proto_Send_RlyTCPReq
                                           (*(int *)(iVar9 + 0x50),'\x01',
                                            (sockaddr_in *)
                                            (iVar9 + *(int *)(iVar9 + 0x16c) * 0x10 + 0xdc),
                                            (char *)(iVar9 + 0x18),*(uint *)(iVar9 + 0x28),
                                            (char *)(iVar9 + 0x20),(sockaddr_in *)(iVar9 + 0xcc),
                                            (char *)(iVar9 + 0x17c));
                      if ((int)local_68 < 0) goto LAB_0002bae4;
LAB_0002be68:
                      tnp::PPPP__Update_SessionState(param_1,'%');
                    }
                    else {
                      tnp::PPPP_DebugTrace
                                (1," RLYResult=%d, try again...\n",(int)*(char *)(iVar9 + 0x1b3));
                      iVar9 = 0;
                      do {
                        iVar1 = tnp::gTNPSession + iVar7;
                        uVar4 = tnp::PPPP_Proto_Send_RlyTCPReq
                                          (*(int *)(iVar1 + 0x50),*(char *)(iVar1 + 0x1a5),
                                           (sockaddr_in *)(iVar1 + iVar9 * 0x10 + 0x8c),
                                           (char *)(iVar1 + 0x18),*(uint *)(iVar1 + 0x28),
                                           (char *)(iVar1 + 0x20),(sockaddr_in *)(iVar1 + 0xcc),
                                           (char *)(iVar1 + 0x17c));
                        iVar9 = iVar9 + 1;
                        local_68 = local_68 | uVar4;
                      } while (iVar9 != 3);
LAB_0002bdd4:
                      if (-1 < (int)local_68) goto LAB_0002be68;
                    }
                    iVar1 = tnp::gTNPSession + iVar7;
LAB_0002bde8:
                    cVar2 = *(char *)(iVar1 + 0x1b0);
                  }
                  break;
                case '&':
                  break;
                case '\'':
                  if (((uVar5 == 0) || (uVar5 != (uVar5 / 10) * 10)) ||
                     (*(char *)(iVar9 + 0x17c) == '\0')) {
                    cVar2 = '\'';
                    break;
                  }
                  tnp::PPPP_DebugTrace
                            (1," RLYResult=%d, try again...\n",(int)*(char *)(iVar9 + 0x1b3));
                  iVar9 = tnp::gTNPSession + iVar7;
                  local_68 = tnp::PPPP_Proto_Send_RlyTCPPkt
                                       (*(int *)(iVar9 + 0x54),(sockaddr_in *)&local_3c,
                                        (char *)(iVar9 + 0x17c),*(char *)(iVar9 + 0x4f));
                  if (-1 < (int)local_68) {
                    tnp::PPPP__Update_SessionState(param_1,'(');
                    iVar1 = tnp::gTNPSession + iVar7;
                    if (*(char *)(iVar1 + 0x1a5) == '\0') {
                      cVar2 = '\0';
                      iVar9 = 0;
                      while( true ) {
                        tnp::PPPP_Proto_Send_RlyTCPReq
                                  (*(int *)(iVar1 + 0x50),cVar2,
                                   (sockaddr_in *)(iVar1 + iVar9 * 0x10 + 0x8c),
                                   (char *)(iVar1 + 0x18),*(uint *)(iVar1 + 0x28),
                                   (char *)(iVar1 + 0x20),(sockaddr_in *)(iVar1 + 0xcc),
                                   (char *)(iVar1 + 0x17c));
                        iVar9 = iVar9 + 1;
                        iVar1 = tnp::gTNPSession + iVar7;
                        if (iVar9 == 3) break;
                        cVar2 = *(char *)(iVar1 + 0x1a5);
                      }
                    }
                    goto LAB_0002bde8;
                  }
                  goto LAB_0002bae4;
                case '(':
                  if ((((uVar5 != 0) && (uVar5 == (uVar5 / 10) * 10)) &&
                      (*(char *)(iVar9 + 0x17c) != '\0')) && (*(char *)(iVar9 + 0x1a5) == '\0')) {
                    iVar1 = tnp::gTNPSession + iVar7;
                    cVar2 = '\0';
                    iVar9 = 0;
                    while( true ) {
                      tnp::PPPP_Proto_Send_RlyTCPReq
                                (*(int *)(iVar1 + 0x50),cVar2,
                                 (sockaddr_in *)(iVar1 + iVar9 * 0x10 + 0x8c),(char *)(iVar1 + 0x18)
                                 ,*(uint *)(iVar1 + 0x28),(char *)(iVar1 + 0x20),
                                 (sockaddr_in *)(iVar1 + 0xcc),(char *)(iVar1 + 0x17c));
                      iVar9 = iVar9 + 1;
                      iVar1 = tnp::gTNPSession + iVar7;
                      if (iVar9 == 3) break;
                      cVar2 = *(char *)(iVar1 + 0x1a5);
                    }
                    goto LAB_0002bde8;
                  }
                  cVar2 = '(';
                }
                if (cVar2 == cVar8) {
                  uVar5 = uVar5 + 1;
                }
                else {
                  uVar5 = 0;
                }
                tnp::mSecSleep(100);
                param_2 = param_2 + -1;
                iVar3 = iVar3 + -1;
                cVar8 = cVar2;
LAB_0002bad8:
                iVar9 = param_2;
              } while (0 < iVar3);
LAB_0002bae4:
              if (*(char *)(tnp::gTNPSession + iVar7 + 0x1b0) != ')') {
                tnp::PPPP__Halt_TCP_For_Session(param_1);
                memset((void *)(tnp::gTNPSession + iVar7 + 0xcc),0,0x10);
                param_2 = param_2 - iVar3;
                memset((void *)(tnp::gTNPSession + iVar7 + 0x17c),0,0x10);
              }
            }
          }
        }
        if (param_2 < 1) goto LAB_0002bb3c;
        if (*(char *)(tnp::gTNPSession + iVar7 + 0x1bb) != '\0') goto LAB_0002bfd4;
      } while (*(char *)(tnp::gTNPSession + iVar7 + 0x1b4) == '\0');
    }
    tnp::PPPP_DebugTrace(1,"bSessionReady=%d, Quit!!\n");
    local_60 = 1;
  }
  else {
LAB_0002bfd4:
    tnp::PPPP_DebugTrace(1,"gTNPSession[%d].bUserBreakConnectFlag=%d, Quit!!\n",param_1);
    local_60 = 1;
  }
LAB_0002bb3c:
  uVar12 = tnp::getCurTime();
  iVar3 = (int)uVar12 - (int)uVar11;
  *(int *)(tnp::gTNPSession + iVar7 + 0x3ef8) = iVar3;
  tnp::PPPP_DebugTrace
            (1,"RelayStopTime(TCP):%lld,ConnectTimeRelay(TCP):%lld\n",(int)uVar12,
             (int)((ulonglong)uVar12 >> 0x20),iVar3);
  return local_60;
}



// PPPP_TryRelay(int, char)

uint PPPP_TryRelay(int param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  tnp::PPPP_DebugTrace(1,"Ask for Relay...\n");
  if ((param_2 & 0x20U) == 0) {
    uVar12 = tnp::getCurTime();
    iVar6 = param_1 * 0x3f18;
    tnp::PPPP_DebugTrace(1,"RelayStartTime:%lld\n",(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    iVar5 = tnp::gTNPSession + iVar6;
    if (*(char *)(iVar5 + 0x1b0) == '\x01') {
      tnp::PPPP_DebugTrace(1,"Set bTCPForPS true, gTNPSession[SessionHandle].State is %d\n",1);
      iVar5 = tnp::gTNPSession + iVar6;
    }
    else if ((*(byte *)(iVar5 + 0x1b2) == 0xf8) || (*(char *)(iVar5 + 0x1b3) == -8)) {
      tnp::PPPP_DebugTrace
                (1,"Set bTCPForPS true,gTNPSession[SessionHandle].P2PResult is %d\n",
                 (int)((uint)*(byte *)(iVar5 + 0x1b2) * 0x1000000) >> 0x18);
      iVar5 = tnp::gTNPSession + iVar6;
    }
    else if (*(char *)(iVar5 + 0x1a7) != '\x01') goto LAB_0002c1ac;
    iVar5 = tnp::PPPP__Connect_TCPServer
                      ((sockaddr_in *)(iVar5 + 0xdc),tnp::gP2PTCPAddrNum,(int *)(iVar5 + 0x16c),5,
                       0x14);
    if (-1 < iVar5) {
      iVar7 = tnp::gTNPSession + iVar6;
      memcpy((void *)(iVar7 + 0xbc),(void *)(iVar7 + *(int *)(iVar7 + 0x16c) * 0x10 + 0xdc),0x10);
      iVar7 = tnp::gTNPSession + iVar6;
      *(undefined1 *)(iVar7 + 0x1c1) = 1;
      tnp::WaitThreadExit((ulong *)(iVar7 + 0x1cc));
      iVar7 = tnp::gTNPSession + iVar6;
      if (0 < *(int *)(iVar7 + 0x50)) {
        tnp::CloseSocket(*(int *)(iVar7 + 0x50));
        iVar7 = tnp::gTNPSession + iVar6;
        *(undefined4 *)(iVar7 + 0x54) = 0;
        *(undefined4 *)(iVar7 + 0x50) = 0;
      }
      *(undefined1 *)(iVar7 + 0x1c1) = 0;
      *(undefined1 *)(iVar7 + 0x1a5) = 1;
      *(int *)(iVar7 + 0x50) = iVar5;
      tnp::PPPP_DebugTrace(1,"Start TCP app thread...\n");
      iVar5 = tnp::gTNPSession + iVar6;
      uVar3 = tnp::CreateWorkerThread(PPPP_Thread_Recv_Proto_App_TCP,(void *)param_1);
      *(undefined4 *)(iVar5 + 0x1cc) = uVar3;
LAB_0002c1ac:
      tnp::PPPP__Set_SessionState(param_1,'\x14');
      iVar5 = tnp::gTNPSession + iVar6;
      *(undefined1 *)(tnp::gTNPSession + iVar6 + 0x1b3) = 1;
      cVar1 = *(char *)(iVar5 + 0x1bb);
      uVar8 = 0;
      uVar9 = 0;
      bVar2 = false;
      iVar7 = 200;
      do {
        if (cVar1 != '\0') {
          tnp::PPPP_DebugTrace(1,"gTNPSession[%d].bUserBreakConnectFlag=%d, Quit!!\n",param_1);
          uVar8 = 1;
LAB_0002c2e0:
          __ptr = *(void **)(tnp::gTNPSession + iVar6 + 0x170);
          if (__ptr != (void *)0x0) {
            free(__ptr);
            iVar5 = tnp::gTNPSession + iVar6;
            *(undefined4 *)(iVar5 + 0x170) = 0;
            *(undefined4 *)(iVar5 + 0x174) = 0;
            *(undefined4 *)(iVar5 + 0x178) = 0;
          }
          uVar13 = tnp::getCurTime();
          iVar5 = (int)uVar13 - (int)uVar12;
          *(int *)(tnp::gTNPSession + iVar6 + 0x3ef8) = iVar5;
          tnp::PPPP_DebugTrace
                    (1,"RelayStopTime:%lld,ConnectTimeRelay:%lld\n",(int)uVar13,
                     (int)((ulonglong)uVar13 >> 0x20),iVar5);
          tnp::PPPP_DebugTrace
                    (1,"RLYResult = %d \n",(int)*(char *)(tnp::gTNPSession + iVar6 + 0x1b3));
          return uVar8;
        }
        if (*(char *)(iVar5 + 0x1b4) != '\0') {
          tnp::PPPP_DebugTrace(1,"bSessionReady=%d, Quit!!\n");
          uVar8 = 1;
          goto LAB_0002c2e0;
        }
        iVar5 = PPPP__CheckP2PResult(param_1);
        if (iVar5 < 0) {
          tnp::PPPP_DebugTrace
                    (1,"P2PResult=%d, Quit!!\n",(int)*(char *)(tnp::gTNPSession + iVar6 + 0x1b2));
          uVar8 = 1;
          goto LAB_0002c2e0;
        }
        iVar5 = tnp::gTNPSession + iVar6;
        if (*(char *)(iVar5 + 0x1b3) == -2) {
          iVar7 = iVar7 + -2;
          tnp::mSecSleep(100);
        }
        else {
          if (*(char *)(iVar5 + 0x1b3) < '\0') {
            tnp::PPPP_DebugTrace(1,"RLYResult=%d, Quit!!\n");
            uVar8 = 1;
            goto LAB_0002c2e0;
          }
          if ((*(byte *)(iVar5 + 0x1b0) < 0x17) && (*(int *)(iVar5 + 0x170) == 0)) {
            if (*(char *)(iVar5 + 0x1a5) == '\x01') {
              bVar11 = !bVar2;
              bVar2 = true;
              if (bVar11) {
                tnp::PPPP__Set_SessionState(param_1,'\x15');
                iVar5 = tnp::gTNPSession + iVar6;
                tnp::PPPP_Proto_Send_RlyServerReq
                          (*(int *)(iVar5 + 0x50),*(char *)(iVar5 + 0x1a5),
                           (sockaddr_in *)(iVar5 + *(int *)(iVar5 + 0x16c) * 0x10 + 0xdc),
                           (char *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x28),(char *)(iVar5 + 0x20));
              }
            }
            else if (uVar9 % 10 == 0) {
              tnp::PPPP__Set_SessionState(param_1,'\x15');
              iVar5 = 0;
              do {
                iVar10 = tnp::gTNPSession + iVar6;
                iVar4 = iVar5 * 0x10;
                iVar5 = iVar5 + 1;
                tnp::PPPP_Proto_Send_RlyServerReq
                          (*(int *)(iVar10 + 0x50),*(char *)(iVar10 + 0x1a5),
                           (sockaddr_in *)(iVar10 + iVar4 + 0x8c),(char *)(iVar10 + 0x18),
                           *(uint *)(iVar10 + 0x28),(char *)(iVar10 + 0x20));
              } while (iVar5 != 3);
            }
            uVar9 = uVar9 + 1;
            iVar7 = iVar7 + -1;
            tnp::mSecSleep(100);
          }
          else {
            iVar4 = *(int *)(iVar5 + 0x178);
            iVar10 = *(int *)(iVar5 + 0x174);
            if ((0 < iVar4) && (*(char *)(iVar5 + 0x1a5) != '\x01')) {
              bVar11 = iVar10 != iVar4;
              iVar5 = 0;
              if (bVar11) {
                iVar5 = iVar7 + -0x1e;
              }
              if ((bVar11 && iVar7 != 0x1e) && iVar5 < 0 == (bVar11 && SBORROW4(iVar7,0x1e))) {
                iVar5 = iVar7 >> 1;
                iVar7 = iVar7 - iVar5;
                uVar8 = PPPP_TryRelayByUDP(param_1,iVar5);
              }
              else {
                uVar8 = PPPP_TryRelayByUDP(param_1,iVar7);
                iVar7 = 0;
              }
            }
            iVar5 = 1 - uVar8;
            if (1 < uVar8) {
              iVar5 = 0;
            }
            if (iVar10 - iVar4 < 1) {
              iVar5 = 0;
            }
            if (iVar5 != 0) {
              uVar8 = PPPP_TryRelayByTCP(param_1,iVar7);
              goto LAB_0002c2e0;
            }
          }
        }
        if (iVar7 < 1) goto LAB_0002c2e0;
        iVar5 = tnp::gTNPSession + iVar6;
        cVar1 = *(char *)(iVar5 + 0x1bb);
      } while( true );
    }
    tnp::PPPP_DebugTrace(1,"Connect P2PServer Error...\n");
  }
  return 1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__GetLanOnlyFlag()

undefined4 PPPP__GetLanOnlyFlag(void)

{
  return 0x7f;
}



// PPPP_TrySendConnectReport(unsigned int, int)

undefined4 PPPP_TrySendConnectReport(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  
  if (param_2 != -0xbcb) {
    iVar5 = param_1 * 0x3f18;
    uVar6 = param_2 & param_2 >> 0x1f;
    iVar1 = tnp::PPPP__DeviceInfoList_Get
                      ((char *)(tnp::gTNPSession + iVar5 + 0x18),
                       *(uint *)(tnp::gTNPSession + iVar5 + 0x28));
    if (iVar1 != 0) {
      iVar7 = *(int *)(iVar1 + 0x18);
      uVar9 = *(uint *)(iVar1 + 0x14);
      iVar2 = tnp::getCurSecond(0,0);
      if (((uint)(iVar2 - iVar7) < 0xb4) && (-1 < (int)(uVar6 ^ uVar9))) {
        return 0;
      }
      *(uint *)(iVar1 + 0x14) = uVar6;
      *(int *)(iVar1 + 0x18) = iVar2;
    }
    if (param_2 < 0) {
      pcVar8 = (char *)0x0;
      pcVar10 = pcVar8;
    }
    else {
      iVar1 = tnp::gTNPSession + iVar5;
      if (*(char *)(iVar1 + 0x1b6) == '\0') {
        pcVar8 = (char *)0x1;
        pcVar10 = "P2P";
      }
      else if (*(char *)(iVar1 + 0x1b0) == ')') {
        pcVar8 = (char *)0x1;
        pcVar10 = "TCP";
      }
      else {
        pcVar10 = "SUP";
        pcVar8 = (char *)0x1;
        if (*(char *)(iVar1 + 0x1bc) != '\x01') {
          pcVar8 = (char *)0x1;
          pcVar10 = "RLY";
        }
      }
    }
    pcVar4 = (char *)(tnp::gTNPSession + iVar5);
    iVar1 = *(int *)(pcVar4 + 0x50);
    cVar3 = pcVar4[0x1a5];
    if (iVar1 < 0) {
      iVar1 = *(int *)(pcVar4 + 0x54);
    }
    if (cVar3 == '\x01') {
      tnp::PPPP_Proto_Send_ConnectReport
                (iVar1,'\x01',(sockaddr_in *)(pcVar4 + *(int *)(pcVar4 + 0x16c) * 0x10 + 0xdc),
                 pcVar4,(char)pcVar8,pcVar10,uVar6);
    }
    else {
      pcVar4 = (char *)(tnp::gTNPSession + iVar5);
      iVar2 = 0;
      while( true ) {
        iVar7 = iVar2 * 0x10;
        iVar2 = iVar2 + 1;
        tnp::PPPP_Proto_Send_ConnectReport
                  (iVar1,cVar3,(sockaddr_in *)(pcVar4 + iVar7 + 0x8c),pcVar4,(char)pcVar8,pcVar10,
                   uVar6);
        if (iVar2 == 3) break;
        pcVar4 = (char *)(tnp::gTNPSession + iVar5);
        cVar3 = pcVar4[0x1a5];
      }
    }
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling
// PPPP_DoConnect(char const*, char, unsigned short, char*, char*, char)

void * PPPP_DoConnect(char *param_1,char param_2,ushort param_3,char *param_4,char *param_5,
                     char param_6)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  void *pvVar4;
  int iVar5;
  size_t sVar6;
  time_t tVar7;
  time_t tVar8;
  char *pcVar9;
  undefined4 uVar10;
  hostent *phVar11;
  void *pvVar12;
  pthread_mutex_t *ppVar13;
  int *piVar14;
  void *extraout_r1;
  void *extraout_r1_00;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  void *pvVar20;
  void *pvVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ushort local_5e;
  uint local_5c;
  char local_58 [32];
  sockaddr_in asStack_38 [4];
  in_addr local_34;
  
  uVar15 = (uint)param_2;
  tnp::PPPP_DebugTrace(1,"PPPP_Connect() Enter.\n");
  if (tnp::gFlagInitialized == '\0') {
    return (void *)0xfffff447;
  }
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_5c = 0;
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[0x18] = '\0';
  local_58[0x19] = '\0';
  local_58[0x1a] = '\0';
  local_58[0x1b] = '\0';
  local_58[0x1c] = '\0';
  local_58[0x1d] = '\0';
  local_58[0x1e] = '\0';
  local_58[0x1f] = '\0';
  iVar5 = tnp::PPPP__Parse_DID(param_1,local_58,0x10,(int *)&local_5c,local_58 + 0x10,0x10);
  if (iVar5 != 0) {
    return (void *)0xfffff444;
  }
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    return (void *)0xfffff431;
  }
  if (param_5 == (char *)0x0) {
    return (void *)0xfffff443;
  }
  sVar6 = strlen(param_5);
  uVar18 = 1 - sVar6;
  if (1 < sVar6) {
    uVar18 = 0;
  }
  if (0x3f < (int)sVar6) {
    uVar18 = uVar18 | 1;
  }
  if (uVar18 != 0) {
    return (void *)0xfffff443;
  }
  uVar23 = tnp::getCurTime();
  tnp::PPPP_DebugTrace(1,"ConnectStartTime:%lld\n",(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
  tnp::PPPP_DebugTrace(1,"0. Select Session Handle \n");
  tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
  pvVar4 = tnp::gLastHandle;
  pvVar12 = tnp::gMaxSessionNumber;
  if (tnp::gMaxSessionNumber == (void *)0x0) {
    pvVar21 = (void *)0x0;
  }
  else {
    FUN_00047c38((int)tnp::gLastHandle + 1,tnp::gMaxSessionNumber);
    iVar5 = tnp::gTNPSession;
    iVar16 = (int)extraout_r1 * 0x3f18 + tnp::gTNPSession;
    pvVar21 = extraout_r1;
    if (*(char *)(iVar16 + 0x1b1) == '\x01') {
      pvVar20 = (void *)0x0;
      do {
        iVar16 = (int)pvVar20 + 2;
        pvVar20 = (void *)((int)pvVar20 + 1);
        pvVar21 = pvVar20;
        if (pvVar20 == pvVar12) goto LAB_0002c9a4;
        FUN_00047c38((int)pvVar4 + iVar16,pvVar12);
        iVar16 = (int)extraout_r1_00 * 0x3f18 + iVar5;
        pvVar21 = extraout_r1_00;
      } while (*(char *)(iVar16 + 0x1b1) == '\x01');
    }
    tnp::gLastHandle = pvVar21;
    *(undefined1 *)(iVar16 + 0x1b1) = 1;
  }
LAB_0002c9a4:
  tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
  if (tnp::gMaxSessionNumber == pvVar21) {
    tnp::PPPP_DebugTrace(2,"Max Number Session(%d) is reached!! \n",pvVar21);
    return (void *)0xfffff437;
  }
  tnp::PPPP__Reset_Session(pvVar21,2);
  tnp::PPPP_DebugTrace(2,"SessionHandle =%d\n",pvVar21);
  tnp::PPPP_DebugTrace(1,"1. Read ID\n");
  sVar6 = strlen(param_1);
  iVar5 = (int)pvVar21 * 0x3f18;
  if (0x17 < sVar6) {
    sVar6 = 0x18;
  }
  strncpy((char *)(tnp::gTNPSession + iVar5),param_1,sVar6);
  strncpy((char *)(tnp::gTNPSession + iVar5 + 0x18),local_58,8);
  tnp::PPPP_DebugTrace(2,"Prefix=%s\n",tnp::gTNPSession + iVar5 + 0x18);
  *(uint *)(tnp::gTNPSession + iVar5 + 0x28) = local_5c;
  tnp::PPPP_DebugTrace(2,"SN=%06d\n");
  strncpy((char *)(tnp::gTNPSession + iVar5 + 0x20),local_58 + 0x10,8);
  tnp::PPPP_DebugTrace(2,"CheckCode=%s\n",tnp::gTNPSession + iVar5 + 0x20);
  iVar16 = tnp::gTNPSession + iVar5;
  tnp::PPPP_DebugTrace
            (1,"ID = %s-%06d-%s\n",iVar16 + 0x18,*(undefined4 *)(iVar16 + 0x28),iVar16 + 0x20);
  tnp::PPPP__Set_ConnectKey((uint)pvVar21,param_5);
  tnp::PPPP__DeviceInfoList_Add(local_58,local_5c,local_58 + 0x10);
  *(char *)(tnp::gTNPSession + iVar5 + 0x1a7) = (char)(uVar15 >> 7);
  tnp::PPPP_DebugTrace(2,"ConnectFlag =%d\n",uVar15);
  tnp::PPPP_DebugTrace
            (2,"SessionHandle =%d, bForceTCP=%d\n",pvVar21,
             (uint)*(byte *)(tnp::gTNPSession + iVar5 + 0x1a7));
  tnp::PPPP_DebugTrace(1,"2. Check if need to resolve P2P Server Hostname\n");
  tVar7 = time((time_t *)0x0);
  tVar8 = time((time_t *)0x0);
  tnp::PPPP_DebugTrace
            (2,"LastResolveTime = 0x%08X, Now = 0x%08X,  (Now - LastResolveTime) = %d \n",
             tnp::gLastNetDetectTime,tVar7,tVar8 - tnp::gLastNetDetectTime);
  tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
  iVar16 = tnp::PPPP__Resolve_SessionP2PServer((int)pvVar21,param_4);
  if (iVar16 != 0) {
    tnp::PPPP_DebugTrace(2," (NG)\n");
    tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
    tnp::PPPP__Reset_Session(pvVar21,0);
    tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
    tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
    return (void *)0xfffff441;
  }
  tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
  tnp::PPPP_DebugTrace(8,"Get P2PServer...\n");
  pcVar9 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar5 + 0x90));
  tnp::PPPP_DebugTrace(8,"Server1:%s\n",pcVar9);
  pcVar9 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar5 + 0xa0));
  tnp::PPPP_DebugTrace(8,"Server2:%s\n",pcVar9);
  pcVar9 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar5 + 0xb0));
  tnp::PPPP_DebugTrace(8,"Server3:%s\n",pcVar9);
  iVar16 = tnp::PPPP__Get_LocalAddress((sockaddr_in *)(tnp::gTNPSession + iVar5 + 0x8c),asStack_38);
  if (-1 < iVar16) {
    pcVar9 = inet_ntoa(local_34);
    strncpy(tnp::gNetInfo + 4,pcVar9,0x10);
  }
  if (param_6 != '\0') {
    pvVar12 = (void *)PPPP_TryWakeUp(local_58,local_5c,local_58 + 0x10,(int)pvVar21,5,5);
    if ((int)pvVar12 < 0) {
      tnp::PPPP_DebugTrace(1,"wakeup failed with ret %d\n",pvVar12);
      tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
      tnp::PPPP__Reset_Session(pvVar21,0);
      tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
      if (pvVar12 == (void *)0xfffff435 || pvVar12 == (void *)0xfffff426) {
        return pvVar12;
      }
      if (pvVar12 == (void *)0xfffff445) {
        return (void *)0xfffff442;
      }
      return (void *)0xfffff448;
    }
    tnp::PPPP_DebugTrace(1,"wakeup success \n");
  }
  tnp::PPPP_DebugTrace(1,"3. Setup Session structure \n");
  iVar16 = tnp::gTNPSession;
  uVar10 = tnp::CreateSocket('\0');
  iVar19 = tnp::gTNPSession + iVar5;
  *(undefined4 *)(iVar16 + iVar5 + 0x50) = uVar10;
  *(undefined1 *)(iVar19 + 0x1a5) = 0;
  *(undefined4 *)(iVar19 + 0x54) = *(undefined4 *)(iVar19 + 0x50);
  *(undefined1 *)(iVar19 + 0x1a6) = 0;
  tnp::PPPP_DebugTrace(2,"3.1 Socket = %d\n");
  iVar16 = *(int *)(tnp::gTNPSession + iVar5 + 0x50);
  if (iVar16 < 0) {
    tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
    tnp::PPPP__Reset_Session(pvVar21,0);
    tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
    return (void *)0xfffff430;
  }
  tnp::SetSocketBroadcast(iVar16);
  local_5e = param_3;
  iVar16 = tnp::TryBindPort(*(int *)(tnp::gTNPSession + iVar5 + 0x50),&local_5e);
  if (iVar16 < 0) {
    tnp::CloseSocket(*(int *)(tnp::gTNPSession + iVar5 + 0x50));
    tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
    tnp::PPPP__Reset_Session(pvVar21,0);
    tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
    piVar14 = __errno_location();
    tnp::PPPP_DebugTrace(2,"Failed to Bind ... socket errno=%d\n",*piVar14);
    return (void *)0xfffff436;
  }
  tnp::PPPP_DebugTrace(2,"Bind UDP Port = %d\n",(uint)local_5e);
  *(undefined2 *)(tnp::gTNPSession + iVar5 + 0x6c) = 2;
  tnp::PPPP_DebugTrace(2,"3.4 Retrive MyLanIP \'%s\'\n",0x69470);
  phVar11 = gethostbyname(tnp::gNetInfo + 4);
  tnp::PPPP_DebugTrace(2,"3.4 ... Done\n");
  if (phVar11 != (hostent *)0x0) {
    memcpy((void *)(tnp::gTNPSession + iVar5 + 0x70),*phVar11->h_addr_list,phVar11->h_length);
  }
  *(undefined2 *)(tnp::gTNPSession + iVar5 + 0x7c) = 2;
  tnp::PPPP_DebugTrace(2,"3.5 Retrive MyWanIP \'%s\'\n",0x69480);
  phVar11 = gethostbyname(tnp::gNetInfo + 0x14);
  tnp::PPPP_DebugTrace(2,"3.5 ... Done\n");
  if (phVar11 != (hostent *)0x0) {
    memcpy((void *)(tnp::gTNPSession + iVar5 + 0x80),*phVar11->h_addr_list,phVar11->h_length);
  }
  uVar3 = local_5e << 8 | local_5e >> 8;
  iVar16 = tnp::gTNPSession + iVar5;
  *(ushort *)(iVar16 + 0x6e) = uVar3;
  *(ushort *)(iVar16 + 0x7e) = uVar3;
  iVar19 = 0;
  *(undefined1 *)(iVar16 + 0x4f) = 0;
  tnp::PPPP_DebugTrace(2,"I am %s\n","Client");
  iVar16 = tnp::gTNPSession + iVar5;
  *(undefined1 *)(iVar16 + 0x1c1) = 0;
  *(undefined1 *)(iVar16 + 0x1b4) = 0;
  *(undefined1 *)(iVar16 + 0x1bf) = 0;
  *(undefined1 *)(iVar16 + 0x1b0) = 0;
  tnp::gInConnectFlag = 1;
  tnp::PPPP_DebugTrace(1,"4. Create UDP recv Thread\n");
  iVar16 = tnp::gTNPSession;
  uVar10 = tnp::CreateWorkerThread(PPPP_Thread_Recv_Proto_App,pvVar21);
  *(undefined4 *)(iVar16 + iVar5 + 0x1cc) = uVar10;
  uVar18 = PPPP__GetLanOnlyFlag();
  if (uVar15 != uVar18) {
    tnp::PPPP_DebugTrace(1,"5. Send Hello\n");
    do {
      tnp::PPPP_Proto_Send_Hello
                (*(int *)(tnp::gTNPSession + iVar5 + 0x50),
                 (sockaddr_in *)(tnp::gTNPSession + iVar5 + iVar19 * 0x10 + 0x8c));
      iVar19 = iVar19 + 1;
    } while (iVar19 != 3);
  }
  if ((*(char *)(tnp::gTNPSession + iVar5 + 0x1a7) == '\x01') ||
     (iVar16 = PPPP_TryP2P((int)pvVar21,param_2), iVar16 == 0)) {
    iVar16 = PPPP_TryRelay((int)pvVar21,param_2);
    iVar19 = tnp::gTNPSession + iVar5;
    if ((*(char *)(iVar19 + 0x1a7) != '\x01') && (iVar16 == 0)) {
      PPPP_TryRelay((int)pvVar21,param_2);
      goto LAB_0002cee4;
    }
  }
  else {
LAB_0002cee4:
    iVar19 = tnp::gTNPSession + iVar5;
  }
  uVar18 = (uint)*(byte *)(iVar19 + 0x1b4);
  tnp::PPPP_DebugTrace
            (1,
             "8. gTNPSession[SessionHandle].P2PResult:%d,gTNPSession[SessionHandle].RLYResult:%d,gTNPSession[SessionHandle].bSessionReady:%d\n"
             ,(int)*(char *)(iVar19 + 0x1b2),(int)*(char *)(iVar19 + 0x1b3),uVar18);
  iVar16 = tnp::gTNPSession + iVar5;
  bVar2 = *(byte *)(iVar16 + 0x1b2);
  uVar17 = (uint)bVar2;
  if (((char)bVar2 != -8 & bVar2 >> 7) != 0) {
    switch((int)(char)bVar2) {
    case -0xb:
      goto LAB_0002d2c4;
    case -10:
      break;
    case -9:
      break;
    case -8:
      break;
    case -7:
      tnp::PPPP_DebugTrace(1,"8. Connect result: Device Session Full\n",uVar17,iVar16,uVar18);
      pvVar12 = (void *)0xfffff42b;
      iVar16 = tnp::gTNPSession + iVar5;
      goto LAB_0002d008;
    case -6:
      break;
    case -5:
LAB_0002d2c4:
      tnp::PPPP_DebugTrace(1,"9. Connect result: Signature Error\n",uVar17,iVar16,uVar18);
      pvVar12 = (void *)0xfffff426;
      iVar16 = tnp::gTNPSession + iVar5;
      goto LAB_0002d008;
    case -4:
      break;
    case -3:
      tnp::PPPP_DebugTrace(1,"8. Connect result: Invalid prefix of DID\n",uVar17,iVar16,uVar18);
      pvVar12 = (void *)0xfffff440;
      iVar16 = tnp::gTNPSession + iVar5;
      goto LAB_0002d008;
    case -2:
      tnp::PPPP_DebugTrace(1,"8. Connect result: ID is not online\n",uVar17,iVar16,uVar18);
      pvVar12 = (void *)0xfffff442;
      iVar16 = tnp::gTNPSession + iVar5;
      goto LAB_0002d008;
    case -1:
      tnp::PPPP_DebugTrace(1,"8. Connect result: Invalid ID\n",uVar17,iVar16,uVar18);
      pvVar12 = (void *)0xfffff444;
      iVar16 = tnp::gTNPSession + iVar5;
      goto LAB_0002d008;
    }
    goto switchD_0002cf3c_default;
  }
  if (-1 < *(char *)(iVar16 + 0x1b3)) {
    if (*(byte *)(iVar16 + 0x1b4) == 0) {
      if (*(byte *)(iVar16 + 0x1bb) == 0) {
        tnp::PPPP_DebugTrace(1,"8. Connect result: Time Out\n",0,0,uVar18);
        iVar16 = tnp::gTNPSession + iVar5;
        pvVar12 = (void *)0xfffff445;
      }
      else {
        tnp::PPPP_DebugTrace
                  (1,"8. Connect result: PPPP_Connect_Break is called\n",0,
                   (uint)*(byte *)(iVar16 + 0x1bb),uVar18);
        iVar16 = tnp::gTNPSession + iVar5;
        pvVar12 = (void *)0xfffff435;
      }
    }
    else {
      tnp::PPPP_DebugTrace
                (1,"8. Connect result: Session is Ready\n",(uint)*(byte *)(iVar16 + 0x1b4),iVar16,
                 uVar18);
      iVar16 = tnp::gTNPSession + iVar5;
      pvVar12 = pvVar21;
    }
    goto LAB_0002d008;
  }
  iVar19 = *(char *)(iVar16 + 0x1b3) + 0x20;
  switch(iVar19) {
  case 0:
    tnp::PPPP_DebugTrace(1,"7. Listen result: TCP Socket Timeout\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff445;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  case 1:
    tnp::PPPP_DebugTrace(1,"8. Connect result: TCP socket error\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff42c;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  case 2:
    tnp::PPPP_DebugTrace(1,"8. Connect result: TCP connect error\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff42d;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    goto LAB_0002d570;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    tnp::PPPP_DebugTrace(1,"8. Connect result: Device Session Full\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff42b;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  case 0x1a:
    tnp::PPPP_DebugTrace(1,"8. Connect result: Invalid Ticket\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff428;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  case 0x1b:
LAB_0002d570:
    tnp::PPPP_DebugTrace(1,"9. Connect result: Invalid Signature\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff426;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  case 0x1c:
    tnp::PPPP_DebugTrace(1,"8. Connect result: Invalid nonce\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff429;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  case 0x1d:
    tnp::PPPP_DebugTrace(1,"8. Connect result: Invalid prefix of DID\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff440;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  case 0x1e:
    tnp::PPPP_DebugTrace(1,"8. Connect result: ID is not online\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff442;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  case 0x1f:
    tnp::PPPP_DebugTrace(1,"8. Connect result: Invalid ID\n",iVar19,iVar16,uVar18);
    pvVar12 = (void *)0xfffff444;
    iVar16 = tnp::gTNPSession + iVar5;
    goto LAB_0002d008;
  }
switchD_0002cf3c_default:
  pvVar12 = (void *)0xfffff445;
LAB_0002d008:
  *(undefined1 *)(iVar16 + 0x1c1) = 1;
  tnp::WaitThreadExit((ulong *)(iVar16 + 0x1cc));
  tnp::PPPP_DebugTrace(1,"PPPP_Connect() Exit, ret = %d \n",pvVar12);
  uVar18 = PPPP__GetLanOnlyFlag();
  if (uVar15 != uVar18) {
    PPPP_TrySendConnectReport((uint)pvVar21,(int)pvVar12);
  }
  if ((int)pvVar12 < 0) {
    tnp::PPPP__Halt_TCP_For_Session((int)pvVar21);
    iVar16 = *(int *)(tnp::gTNPSession + iVar5 + 0x50);
    if (0 < iVar16) {
      tnp::CloseSocket(iVar16);
      iVar5 = tnp::gTNPSession + iVar5;
      *(undefined4 *)(iVar5 + 0x50) = 0xffffffff;
      *(undefined1 *)(iVar5 + 0x1a5) = 0;
    }
    tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
    tnp::PPPP__Reset_Session(pvVar21,0);
    tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
  }
  else {
    tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18));
    iVar16 = tnp::gTNPSession;
    iVar19 = tnp::gTNPSession + iVar5;
    uVar15 = (uint)*(byte *)(iVar19 + 0x1b0);
    *(undefined1 *)(iVar19 + 0x1c2) = 0;
    bVar22 = uVar15 != 0x29;
    if (bVar22) {
      uVar15 = *(uint *)(iVar19 + 0x50);
    }
    *(undefined1 *)(iVar19 + 0x1c3) = 0;
    if (bVar22) {
      *(bool *)(iVar19 + 0x1a6) = !bVar22;
      *(uint *)(iVar19 + 0x54) = uVar15;
    }
    else {
      *(undefined1 *)(iVar19 + 0x1a6) = 1;
    }
    iVar19 = 0;
    do {
      iVar1 = iVar19 * 0x1c;
      tnp::sll_Init((__the_SLL *)(iVar16 + iVar5 + iVar1 + 0x3d4),0x10000);
      tnp::sll_Init((__the_SLL *)(iVar1 + tnp::gTNPSession + iVar5 + 0x32c),0x10000);
      tnp::sll_Init((__the_SLL *)(iVar1 + tnp::gTNPSession + iVar5 + 0x284),0x10000);
      iVar19 = iVar19 + 1;
      tnp::sll_Init((__the_SLL *)(iVar1 + tnp::gTNPSession + iVar5 + 0x1dc),0x10000);
      iVar16 = tnp::gTNPSession;
    } while (iVar19 != 6);
    ppVar13 = (pthread_mutex_t *)(tnp::gTNPSessionLock + (int)pvVar21 * 0x18);
    *(undefined1 *)(tnp::gTNPSession + iVar5 + 0x1b5) = 1;
    tnp::MUTEX_RELEASE(ppVar13);
    iVar19 = tnp::gTNPSession + iVar5;
    iVar16 = *(int *)(iVar19 + 0x50);
    if (0 < iVar16) {
      if (iVar16 != *(int *)(iVar19 + 0x54)) {
        tnp::CloseSocket(iVar16);
        iVar19 = tnp::gTNPSession + iVar5;
        *(undefined4 *)(iVar19 + 0x50) = 0xffffffff;
      }
      *(undefined1 *)(iVar19 + 0x1a5) = 0;
    }
    if (*(char *)(iVar19 + 0x1a6) == '\0') {
      uVar10 = tnp::CreateWorkerThread(tnp::PPPP_Thread_Recv_DRW,pvVar21);
      iVar16 = tnp::gTNPSession;
      *(undefined4 *)(iVar19 + 0x1d0) = uVar10;
      iVar19 = iVar16 + iVar5;
    }
    uVar10 = tnp::CreateWorkerThread(tnp::PPPP_Thread_Send_DRW,pvVar21);
    *(undefined4 *)(iVar19 + 0x1d4) = uVar10;
    uVar24 = tnp::getCurTime();
    iVar16 = (int)uVar24 - (int)uVar23;
    *(int *)(tnp::gTNPSession + iVar5 + 0x3ef0) = iVar16;
    tnp::PPPP_DebugTrace
              (1,"ConnectStopTime:%lld,ConnectTime:%lld\n",(int)uVar24,
               (int)((ulonglong)uVar24 >> 0x20),iVar16);
    tnp::PPPP__Dump_SessionInfo((int)pvVar21);
  }
  tnp::gInConnectFlag = 0;
  return pvVar12;
}



// PPPP_DoWakeup(char const*, char*, char*)

int PPPP_DoWakeup(char *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  time_t tVar4;
  time_t tVar5;
  char *pcVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar7;
  uint uVar8;
  char *__src;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_5c;
  char local_58 [32];
  sockaddr_in asStack_38 [4];
  in_addr local_34;
  
  tnp::PPPP_DebugTrace(1,"PPPP_DoWakeup() Enter.\n");
  if (tnp::gFlagInitialized == '\0') {
    iVar2 = -0xbb9;
  }
  else {
    __src = local_58 + 0x10;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_5c = 0;
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    local_58[0x18] = '\0';
    local_58[0x19] = '\0';
    local_58[0x1a] = '\0';
    local_58[0x1b] = '\0';
    local_58[0x1c] = '\0';
    local_58[0x1d] = '\0';
    local_58[0x1e] = '\0';
    local_58[0x1f] = '\0';
    iVar2 = tnp::PPPP__Parse_DID(param_1,local_58,0x10,(int *)&local_5c,__src,0x10);
    if (iVar2 == 0) {
      if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
        iVar2 = -0xbcf;
      }
      else {
        if (param_3 != (char *)0x0) {
          sVar3 = strlen(param_3);
          uVar8 = 1 - sVar3;
          if (1 < sVar3) {
            uVar8 = 0;
          }
          if (0x3f < (int)sVar3) {
            uVar8 = uVar8 | 1;
          }
          if (uVar8 == 0) {
            uVar11 = tnp::getCurTime();
            tnp::PPPP_DebugTrace
                      (1,"WakeupStartTime:%lld\n",(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
            tnp::PPPP_DebugTrace(1,"0. Select Session Handle \n");
            tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
            uVar1 = tnp::gLastHandle;
            uVar8 = tnp::gMaxSessionNumber;
            if (tnp::gMaxSessionNumber == 0) {
              uVar10 = 0;
            }
            else {
              FUN_00047c38(tnp::gLastHandle + 1,tnp::gMaxSessionNumber);
              iVar2 = tnp::gTNPSession;
              iVar7 = extraout_r1 * 0x3f18 + tnp::gTNPSession;
              uVar10 = extraout_r1;
              if (*(char *)(iVar7 + 0x1b1) == '\x01') {
                uVar9 = 0;
                do {
                  iVar7 = uVar9 + 2;
                  uVar9 = uVar9 + 1;
                  uVar10 = uVar9;
                  if (uVar9 == uVar8) goto LAB_0002da24;
                  FUN_00047c38(iVar7 + uVar1,uVar8);
                  iVar7 = extraout_r1_00 * 0x3f18 + iVar2;
                  uVar10 = extraout_r1_00;
                } while (*(char *)(iVar7 + 0x1b1) == '\x01');
              }
              tnp::gLastHandle = uVar10;
              *(undefined1 *)(iVar7 + 0x1b1) = 1;
            }
LAB_0002da24:
            tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
            if (tnp::gMaxSessionNumber == uVar10) {
              tnp::PPPP_DebugTrace(2,"Max Number Session(%d) is reached!! \n",uVar10);
              return -0xbc9;
            }
            tnp::PPPP__Reset_Session(uVar10,2);
            tnp::PPPP_DebugTrace(2,"SessionHandle =%d\n",uVar10);
            tnp::PPPP_DebugTrace(1,"1. Read ID\n");
            sVar3 = strlen(param_1);
            iVar2 = uVar10 * 0x3f18;
            if (0x17 < sVar3) {
              sVar3 = 0x18;
            }
            strncpy((char *)(tnp::gTNPSession + iVar2),param_1,sVar3);
            strncpy((char *)(tnp::gTNPSession + iVar2 + 0x18),local_58,8);
            tnp::PPPP_DebugTrace(2,"Prefix=%s\n",tnp::gTNPSession + iVar2 + 0x18);
            *(uint *)(tnp::gTNPSession + iVar2 + 0x28) = local_5c;
            tnp::PPPP_DebugTrace(2,"SN=%06d\n");
            strncpy((char *)(tnp::gTNPSession + iVar2 + 0x20),__src,8);
            tnp::PPPP_DebugTrace(2,"CheckCode=%s\n",tnp::gTNPSession + iVar2 + 0x20);
            iVar7 = tnp::gTNPSession + iVar2;
            tnp::PPPP_DebugTrace
                      (1,"ID = %s-%06d-%s\n",iVar7 + 0x18,*(undefined4 *)(iVar7 + 0x28),iVar7 + 0x20
                      );
            tnp::PPPP__Set_ConnectKey(uVar10,param_3);
            tnp::PPPP__DeviceInfoList_Add(local_58,local_5c,__src);
            tnp::PPPP_DebugTrace(1,"2. Check if need to resolve P2P Server Hostname\n");
            tVar4 = time((time_t *)0x0);
            tVar5 = time((time_t *)0x0);
            tnp::PPPP_DebugTrace
                      (2,"LastResolveTime = 0x%08X, Now = 0x%08X,  (Now - LastResolveTime) = %d \n",
                       tnp::gLastNetDetectTime,tVar4,tVar5 - tnp::gLastNetDetectTime);
            tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
            iVar7 = tnp::PPPP__Resolve_SessionP2PServer(uVar10,param_2);
            if (iVar7 == 0) {
              tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
              tnp::PPPP_DebugTrace(8,"Get P2PServer...\n");
              pcVar6 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar2 + 0x90));
              tnp::PPPP_DebugTrace(8,"Server1:%s\n",pcVar6);
              pcVar6 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar2 + 0xa0));
              tnp::PPPP_DebugTrace(8,"Server2:%s\n",pcVar6);
              pcVar6 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar2 + 0xb0));
              tnp::PPPP_DebugTrace(8,"Server3:%s\n",pcVar6);
              iVar2 = tnp::PPPP__Get_LocalAddress
                                ((sockaddr_in *)(tnp::gTNPSession + iVar2 + 0x8c),asStack_38);
              if (-1 < iVar2) {
                pcVar6 = inet_ntoa(local_34);
                strncpy(tnp::gNetInfo + 4,pcVar6,0x10);
              }
              iVar2 = PPPP_TryWakeUp(local_58,local_5c,__src,uVar10,5,5);
              if (-1 < iVar2) {
                tnp::PPPP_DebugTrace(1,"wakeup success \n");
                tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + uVar10 * 0x18));
                tnp::PPPP__Reset_Session(uVar10,0);
                tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + uVar10 * 0x18));
                return iVar2;
              }
              tnp::PPPP_DebugTrace(1,"wakeup failed with ret %d\n",iVar2);
              tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + uVar10 * 0x18));
              tnp::PPPP__Reset_Session(uVar10,0);
              tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + uVar10 * 0x18));
              if (iVar2 == -0xbcb || iVar2 == -0xbda) {
                return iVar2;
              }
              iVar7 = -3000;
              if (iVar2 == -0xbbb) {
                iVar7 = -0xbbe;
              }
              return iVar7;
            }
            tnp::PPPP_DebugTrace(2," (NG)\n");
            tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + uVar10 * 0x18));
            tnp::PPPP__Reset_Session(uVar10,0);
            tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + uVar10 * 0x18));
            tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
            return -0xbbf;
          }
        }
        iVar2 = -0xbbd;
      }
    }
    else {
      iVar2 = -0xbbc;
    }
  }
  return iVar2;
}



void PPPP_Connect(char *param_1,char param_2,ushort param_3,char *param_4,char *param_5)

{
  PPPP_DoConnect(param_1,param_2,param_3,param_4,param_5,'\0');
  return;
}



void PPPP_WakeUp_And_Connect(char *param_1,char param_2,ushort param_3,char *param_4,char *param_5)

{
  PPPP_DoConnect(param_1,param_2,param_3,param_4,param_5,'\x01');
  return;
}



void PPPP_WakeUp(char *param_1,char *param_2,char *param_3)

{
  PPPP_DoWakeup(param_1,param_2,param_3);
  return;
}



// PPPP_Connect_With_DefaultFlag(char const*, unsigned short, char const*, char const*)

void PPPP_Connect_With_DefaultFlag(char *param_1,ushort param_2,char *param_3,char *param_4)

{
  PPPP_DoConnect(param_1,'K',param_2,param_3,param_4,'\0');
  return;
}



void PPPP_Connect_LanOnly(char *param_1)

{
  char cVar1;
  
  cVar1 = PPPP__GetLanOnlyFlag();
  PPPP_DoConnect(param_1,cVar1,0,
                 "IZBACENO"
                 ,"IZBACENO",'\0');
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__App_Init()

undefined4 PPPP__App_Init(void)

{
  memset(P2PServerMap,0,0x3100);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__App_UnInit()

undefined4 PPPP__App_UnInit(void)

{
  while (tnp::gInConnectFlag != '\0') {
    tnp::mSecSleep(10);
  }
  return 0;
}



undefined4 PPPP_Connect_Break(char *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int local_4c;
  char local_48 [36];
  
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_4c = 0;
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  if (tnp::gFlagInitialized == '\0') {
    uVar5 = 0xfffff447;
  }
  else {
    iVar3 = tnp::PPPP__Parse_DID(param_1,local_48,0x10,&local_4c,local_48 + 0x10,0x10);
    if (iVar3 == 0) {
      tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
      iVar2 = local_4c;
      iVar3 = tnp::gTNPSession;
      uVar1 = tnp::gMaxSessionNumber;
      if (tnp::gMaxSessionNumber == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          iVar7 = uVar6 * 0x3f18 + iVar3;
          if ((((*(char *)(iVar7 + 0x1b1) == '\x01') &&
               (iVar4 = strcmp((char *)(iVar7 + 0x18),local_48), iVar4 == 0)) &&
              (*(int *)(iVar7 + 0x28) == iVar2)) &&
             (iVar7 = strcmp((char *)(iVar7 + 0x20),local_48 + 0x10), iVar7 == 0)) break;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar1);
      }
      tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
      if (uVar6 < tnp::gMaxSessionNumber) {
        *(undefined1 *)(uVar6 * 0x3f18 + tnp::gTNPSession + 0x1bb) = 1;
      }
      tnp::PPPP_DebugTrace(1,"PPPP_Connect_Break SessionHandle=%d\n",uVar6);
      uVar5 = 0;
    }
    else {
      uVar5 = 0xfffff444;
    }
  }
  return uVar5;
}



undefined4 PPPP_Connect_Break_All(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = tnp::gTNPSession;
  iVar2 = tnp::gMaxSessionNumber;
  if (tnp::gMaxSessionNumber != 0) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 0x3f18;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar1 + iVar3 + 0x1bb) = 1;
    } while (iVar4 != iVar2);
  }
  return 0;
}



undefined4 PPPP_Set_R2PMPCallback(undefined4 param_1)

{
  tnp::gR2PMPCallback = param_1;
  return 0;
}



void PPPP_CheckDevOnline(void)

{
  PPPP_Check_DevOnline();
  return;
}



void PPPP_ConnectByServer(void)

{
  PPPP_Connect();
  return;
}



void PPPP_ConnectOnlyLanSearch(void)

{
  PPPP_Connect_LanOnly();
  return;
}



void PPPP_SetR2PMPCallback(void)

{
  PPPP_Set_R2PMPCallback();
  return;
}



// PPPP__thread_callback(void*)

void PPPP__thread_callback(void *param_1)

{
  pthread_t __th;
  
  __th = pthread_self();
  pthread_detach(__th);
  (*tnp::gIncomingConnectionCallback)();
                    // WARNING: Subroutine does not return
  pthread_exit((void *)0x0);
}



// PPPP_Thread_check_UDP(void*)

void PPPP_Thread_check_UDP(void *param_1)

{
  int iVar1;
  time_t tVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  sockaddr_in *psVar6;
  sockaddr_in *psVar7;
  uint uVar8;
  uint uVar9;
  int local_560;
  uchar local_53e;
  uchar uStack_53d;
  ushort uStack_53c;
  ushort uStack_53a;
  sockaddr_in asStack_538 [16];
  char acStack_528 [1284];
  
  tnp::PPPP_DebugTrace(2,"PPPP_Thread_check_UDP start SendInterval:%d\n",0x3c);
  tnp::mSecSleep(60000);
  local_560 = 0;
  uVar8 = 0;
  uVar9 = 0x3c;
  iVar4 = 0;
joined_r0x0002e374:
  do {
    while( true ) {
      if (tnp::gP2PTCPSocketInfo._12_4_ != 0) {
                    // WARNING: Subroutine does not return
        pthread_exit((void *)0x0);
      }
      tVar2 = time((time_t *)0x0);
      if (uVar9 <= (uint)(tVar2 - iVar4)) break;
      tnp::mSecSleep((uVar9 / 10) * 1000);
    }
    sVar5 = 10;
    do {
      iVar1 = tnp::CreateSocket('\0');
      if (-1 < iVar1) {
        tnp::PPPP_DebugTrace(0x200,"Socket = %d\n",iVar1);
        uStack_53a = 0;
        iVar3 = tnp::TryBindPort(iVar1,&uStack_53a);
        if (iVar3 < 0) {
          tnp::CloseSocket(iVar1);
        }
        else {
          tnp::PPPP_DebugTrace(2,"Bind UDP Port = %d\n",(uint)uStack_53a);
          tnp::PPPP_DebugTrace(2,"Send Hello to P2P Servers ...\n");
          psVar6 = (sockaddr_in *)tnp::gP2PServerAddr;
          do {
            psVar7 = psVar6 + 0x10;
            tnp::PPPP_Proto_Send_HelloWithBody
                      (iVar1,psVar6,tnp::gP2PTCPSocketInfo + 0x10,tnp::gP2PTCPSocketInfo._24_4_,
                       tnp::gP2PTCPSocketInfo + 0x1c,'\x01');
            psVar6 = psVar7;
          } while (psVar7 != (sockaddr_in *)&tnp::gTNPSessionLock);
          uVar8 = uVar8 + 1;
          if (uVar8 == 10) {
            uVar9 = 0x78;
          }
          else if (uVar8 == 0x14) {
            uVar9 = 0xb4;
          }
          tnp::PPPP_DebugTrace(2,"Waiting Hello_Ack from P2P Servers ...\n");
          iVar4 = tnp::PPPP_Proto_Recv_ALL
                            (iVar1,asStack_538,5000,&local_53e,&uStack_53c,acStack_528,0x500,
                             &uStack_53d);
          if ((iVar4 == 0) && (local_53e == '\x01')) {
            tnp::PPPP_DebugTrace(2,"Recv Hello_Ack success ...\n");
            local_560 = local_560 + 1;
          }
          else {
            tnp::PPPP_DebugTrace(2,"Recv Hello_Ack failed:%d ...\n");
          }
          tnp::CloseSocket(iVar1);
          tnp::PPPP_DebugTrace
                    (2,"Hello_Ack with SendHelloCount:%d RecvHelloAckCount:%d\n",uVar8,local_560);
          iVar4 = FUN_00047b90(local_560 * 100,uVar8);
          if ((uVar8 == 5 && 0x4f < iVar4) || (9 < uVar8 && 0x45 < iVar4)) {
            tnp::gLoginByTCP = 0;
            tnp::gP2PTCPSocketInfo._4_4_ = 1;
                    // WARNING: Subroutine does not return
            pthread_exit((void *)0x0);
          }
          iVar4 = tVar2;
          if (0x1d < uVar8) {
            uVar9 = 0x3c;
            uVar8 = 0;
            local_560 = 0;
          }
        }
        goto joined_r0x0002e374;
      }
      sVar5 = sVar5 + -1;
      tnp::mSecSleep(100);
    } while (sVar5 != 0);
    tnp::PPPP_DebugTrace(0x200,"Create Socket error\n");
  } while( true );
}



// PPPP_Thread_Recv_Proto_LanSearch(void*)

void PPPP_Thread_Recv_Proto_LanSearch(void *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *__s2;
  int iVar10;
  byte local_554;
  uchar uStack_553;
  ushort local_552;
  ushort uStack_550;
  undefined1 local_54e;
  uint local_54c;
  uint local_548;
  uint local_544;
  uint local_540;
  uint local_53c;
  sockaddr_in asStack_538 [2];
  ushort local_536;
  in_addr local_534;
  st_PPPP_LanSearch asStack_528 [1284];
  
  tnp::PPPP_DebugTrace(0x40,"PPPP_Thread_Recv_Proto_LanSearch Running.\n");
  iVar2 = tnp::setup_listen_port(0x7d6c);
  tnp::PPPP_DebugTrace(0x40,"setup_listen_port ret : %d\n",iVar2);
  if (-1 < iVar2) {
    iVar8 = (int)param_1 * 0x3f18;
    iVar6 = tnp::gTNPSession;
LAB_0002e680:
    if (iVar6 != 0) {
      do {
        if (*(short *)(iVar6 + iVar8 + 0x1c0) != 0) break;
        iVar3 = tnp::PPPP_Proto_Recv_ALL
                          (iVar2,asStack_538,200,&local_554,&local_552,(char *)asStack_528,0x500,
                           &uStack_553);
        iVar6 = tnp::gTNPSession;
        if (iVar3 != 0) goto LAB_0002e680;
        uVar1 = *(ushort *)(tnp::gTNPSession + iVar8 + 0x1c0);
        uVar9 = (uint)uVar1;
        if (uVar9 != 0) goto LAB_0002e680;
        uVar5 = (uint)local_554;
        uVar7 = (uint)local_552;
        pcVar4 = inet_ntoa(local_534);
        tnp::PPPP_DebugTrace
                  (0x400,"MsgType = 0x%02X, Size = %d from %s:%d\n",uVar5,uVar7,pcVar4,
                   (local_536 & 0xff) << 8 | (uint)(local_536 >> 8));
        if (local_554 == 0x30) {
          tnp::PPPP_DebugTrace(0x40,"MSG_LAN_SEARCH\n");
          if (local_552 == 0x18) {
            local_54e = (undefined1)uVar1;
            local_548 = uVar9;
            local_544 = uVar9;
            local_540 = uVar9;
            local_53c = uVar9;
            uStack_550 = uVar1;
            tnp::PPPP_Proto_Read_LanSearch
                      (asStack_528,(char *)&local_548,&local_54c,(char *)&local_540,
                       (uchar *)&uStack_550);
            iVar6 = tnp::gTNPSession;
            iVar10 = tnp::gTNPSession + iVar8;
            pcVar4 = (char *)(iVar10 + 0x18);
            iVar3 = strncmp((char *)&local_548,pcVar4,7);
            if (iVar3 != 0) goto LAB_0002e680;
            __s2 = (char *)(iVar10 + 0x20);
            iVar3 = strncmp((char *)&local_540,__s2,7);
            if ((iVar3 != 0) || (uVar9 = *(uint *)(iVar10 + 0x28), uVar9 != local_54c))
            goto LAB_0002e680;
          }
          else {
            iVar10 = tnp::gTNPSession + iVar8;
            uVar9 = *(uint *)(iVar10 + 0x28);
            pcVar4 = (char *)(iVar10 + 0x18);
            __s2 = (char *)(iVar10 + 0x20);
          }
          if (*(int *)(iVar10 + 0x58) < 0) {
            tnp::PPPP_Proto_Send_PunchPkt_EX
                      (*(int *)(iVar10 + 0x50),asStack_538,pcVar4,uVar9,__s2,0,
                       (char *)(iVar10 + 0x2c));
            iVar6 = tnp::gTNPSession;
            goto LAB_0002e680;
          }
          tnp::PPPP_Proto_Send_PunchPkt_EX
                    (*(int *)(iVar10 + 0x58),asStack_538,pcVar4,uVar9,__s2,0,(char *)(iVar10 + 0x2c)
                    );
        }
        iVar6 = tnp::gTNPSession;
        if (tnp::gTNPSession == 0) break;
      } while( true );
    }
    tnp::PPPP_DebugTrace(0x40,"PPPP_Thread_Recv_Proto_LanSearch Exit.\n");
    tnp::CloseSocket(iVar2);
  }
                    // WARNING: Subroutine does not return
  pthread_exit((void *)0x0);
}



void FUN_0002e8c8(undefined4 param_1)

{
  FILE *__stream;
  size_t sVar1;
  char acStack_c18 [1024];
  char acStack_818 [2048];
  
  if (DAT_00069204 == 0) {
    memset(acStack_c18,0,0x400);
    memset(acStack_818,0,0x800);
    sprintf(acStack_c18,
            "/home/cloudAPI -c 413 -url \"http://hch.xiaoyi.com:8443/upload/log\" -filename \"/tmp/log.txt\" -device_id %s"
            ,param_1);
    __stream = popen(acStack_c18,"r");
    tnp::PPPP_DebugTrace(2,"%s\n",acStack_c18);
    memset(acStack_818,0,0x800);
    sVar1 = fread(acStack_818,1,0x800,__stream);
    acStack_818[sVar1] = '\0';
    sVar1 = strlen(acStack_818);
    tnp::PPPP_DebugTrace(2,"\n%s %d\n",acStack_818,sVar1);
    pclose(__stream);
    DAT_00069204 = 1;
  }
  return;
}



// tnp::PPPP__ExitSuperDevice(char)

void tnp::PPPP__ExitSuperDevice(char param_1)

{
  if (gSDevInfo[0x6c] != '\x03' && gSDevInfo[0x6c] != '\0') {
    gSDevInfo[0x6c] = '\x03';
    gSDevInfo[0x6d] = param_1;
  }
  return;
}



// tnp::PPPP__ResetSuperDevice()

void tnp::PPPP__ResetSuperDevice(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = gSDevInfo[0x61];
  uVar1 = gSDevInfo[0x60];
  memset(gSDevInfo,0,0x70);
  gSDevInfo[0x60] = uVar1;
  gSDevInfo[0x61] = uVar2;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__ShareBandwidth()

undefined1 PPPP__ShareBandwidth(void)

{
  return tnp::gSDevInfo[0x60];
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__AnotherDeviceInLan()

undefined1 PPPP__AnotherDeviceInLan(void)

{
  return tnp::gSDevInfo[0x61];
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__IncomingConnectionCallback()

void PPPP__IncomingConnectionCallback(void)

{
  if (tnp::gIncomingConnectionCallback == 0) {
    return;
  }
  tnp::CreateWorkerThread(PPPP__thread_callback,(void *)0x0);
  return;
}



// PPPP__NoticeToCallback(unsigned long long, char*, unsigned int)

void PPPP__NoticeToCallback(ulonglong param_1,char *param_2,uint param_3)

{
  if (tnp::gNoticeToCallback == (code *)0x0) {
    return;
  }
  (*tnp::gNoticeToCallback)((int)param_1,(int)(param_1 >> 0x20));
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__InitP2PTCPSocketInfo()

void PPPP__InitP2PTCPSocketInfo(void)

{
  tnp::gP2PTCPSocketInfo._0_4_ = 0xffffffff;
  tnp::gP2PTCPSocketInfo._4_4_ = 0;
  tnp::gP2PTCPSocketInfo._8_4_ = 0;
  tnp::gP2PTCPSocketInfo._12_4_ = 0;
  tnp::gP2PTCPSocketInfo._16_4_ = 0;
  tnp::gP2PTCPSocketInfo._20_4_ = 0;
  tnp::gP2PTCPSocketInfo._24_4_ = 0;
  tnp::gP2PTCPSocketInfo._28_4_ = 0;
  tnp::gP2PTCPSocketInfo._32_4_ = 0;
  return;
}



// PPPP__SetP2PTCPSocketInfo(int, char*, unsigned int, char*)

undefined4 PPPP__SetP2PTCPSocketInfo(int param_1,char *param_2,uint param_3,char *param_4)

{
  undefined4 uVar1;
  
  strncpy(tnp::gP2PTCPSocketInfo + 0x10,param_2,7);
  tnp::gP2PTCPSocketInfo._24_4_ = param_3;
  strncpy(tnp::gP2PTCPSocketInfo + 0x1c,param_4,7);
  tnp::gP2PTCPSocketInfo._12_4_ = 0;
  tnp::gP2PTCPSocketInfo._8_4_ = tnp::CreateWorkerThread(PPPP_Thread_check_UDP,(void *)0x0);
  if (tnp::gP2PTCPSocketInfo._8_4_ == 0) {
    uVar1 = 0xfffff432;
  }
  else {
    uVar1 = 0;
    tnp::gP2PTCPSocketInfo._4_4_ = 0;
    tnp::gP2PTCPSocketInfo._0_4_ = param_1;
  }
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__ResetP2PTCPSocketInfo()

void PPPP__ResetP2PTCPSocketInfo(void)

{
  if (tnp::gP2PTCPSocketInfo._0_4_ == -1) {
    return;
  }
  tnp::gP2PTCPSocketInfo._12_4_ = 1;
  tnp::WaitThreadExit((ulong *)(tnp::gP2PTCPSocketInfo + 8));
  tnp::CloseSocket(tnp::gP2PTCPSocketInfo._0_4_);
  tnp::gP2PTCPSocketInfo._0_4_ = 0xffffffff;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__SessionHandler_Is_Full()

undefined4 PPPP__SessionHandler_Is_Full(void)

{
  int iVar1;
  int iVar2;
  
  if (tnp::gMaxSessionNumber == 0) {
    return 1;
  }
  if (*(char *)(tnp::gTNPSession + 0x1b1) == '\x01') {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x3f18;
      if (iVar1 == tnp::gMaxSessionNumber) {
        return 1;
      }
    } while (*(char *)(tnp::gTNPSession + iVar2 + 0x1b1) == '\x01');
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__EnableSecureMode()

byte PPPP__EnableSecureMode(void)

{
  return tnp::gServerConfig >> 1 & 1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__EnableInsecureMode()

byte PPPP__EnableInsecureMode(void)

{
  byte bVar1;
  
  if (tnp::gServerConfig == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = tnp::gServerConfig & 1;
  }
  return bVar1;
}



// PPPP_Thread_Recv_Proto_LanMsg(void*)

void PPPP_Thread_Recv_Proto_LanMsg(void *param_1)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  byte local_5d8;
  uchar uStack_5d7;
  ushort uStack_5d6;
  uchar auStack_5d4 [4];
  uint local_5d0;
  uint local_5cc;
  char local_5c8 [8];
  undefined4 local_5c0;
  undefined4 local_5bc;
  sockaddr_in asStack_5b8 [2];
  ushort uStack_5b6;
  in_addr local_5b4;
  char acStack_5a8 [128];
  st_PPPP_PunchPkt asStack_528 [1284];
  
  memset(acStack_5a8,0,0x80);
  tnp::PPPP_DebugTrace(0x40,"PPPP_Thread_Recv_Proto_LanMsg Running.\n");
  iVar5 = (int)param_1 * 0x3f18;
LAB_0002ed64:
  do {
    do {
      if (tnp::gTNPSession == 0) {
LAB_0002ef50:
        tnp::PPPP_DebugTrace(0x40,"PPPP_Thread_Recv_Proto_LanMsg Exit.\n");
                    // WARNING: Subroutine does not return
        pthread_exit((void *)0x0);
      }
      iVar1 = *(int *)(tnp::gTNPSession + iVar5 + 0x58);
      if ((iVar1 < 0) || (*(short *)(tnp::gTNPSession + iVar5 + 0x1c0) != 0)) goto LAB_0002ef50;
      iVar1 = tnp::PPPP_Proto_Recv_ALL
                        (iVar1,asStack_5b8,200,&local_5d8,&uStack_5d6,(char *)asStack_528,0x500,
                         &uStack_5d7);
    } while ((iVar1 != 0) || (*(short *)(tnp::gTNPSession + iVar5 + 0x1c0) != 0));
    uVar7 = (uint)uStack_5d6;
    uVar6 = (uint)local_5d8;
    pcVar2 = inet_ntoa(local_5b4);
    tnp::PPPP_DebugTrace
              (0x400,"MsgType = 0x%02X, Size = %d from %s:%d\n",uVar6,uVar7,pcVar2,
               (uStack_5b6 & 0xff) << 8 | (uint)(uStack_5b6 >> 8));
  } while (local_5d8 != 0x41);
  PPPP__IncomingConnectionCallback();
  iVar1 = PPPP__SessionHandler_Is_Full();
  if (iVar1 == 1) {
    tnp::PPPP_DebugTrace(0x10,"session is full, drop msg MSG_RLY_TCP_TO\n");
    goto LAB_0002ed64;
  }
  if (*(char *)(tnp::gTNPSession + iVar5 + 0x4f) == '\x01') {
    tnp::PPPP__ExitSuperDevice('\x02');
  }
  local_5c8[0] = '\0';
  local_5c8[1] = '\0';
  local_5c8[2] = '\0';
  local_5c8[3] = '\0';
  local_5c8[4] = '\0';
  local_5c8[5] = '\0';
  local_5c8[6] = '\0';
  local_5c8[7] = '\0';
  local_5c0 = 0;
  local_5bc = 0;
  if ((uStack_5d6 == 0x2c) && (iVar1 = PPPP__EnableSecureMode(), iVar1 != 0)) {
    auStack_5d4[0] = '\0';
    auStack_5d4[1] = '\0';
    auStack_5d4[2] = 0;
    local_5cc = 0;
    iVar4 = tnp::PPPP_Proto_Read_PunchPkt_EX
                      ((st_PPPP_PunchPkt_EX *)asStack_528,local_5c8,&local_5d0,(char *)&local_5c0,
                       auStack_5d4,&local_5cc,(char *)(tnp::gTNPSession + iVar5 + 0x2c));
    iVar1 = tnp::gTNPSession;
    if (iVar4 < 0) {
      tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_PunchPkt_EX failed,ErrorCode:%d\n",iVar4);
      memset(acStack_5a8,0,0x80);
      uVar6 = local_5cc;
      if (iVar4 == -1) {
        pcVar2 = inet_ntoa(local_5b4);
        sprintf(acStack_5a8,"Read PunchPkt_EX:Invalid Time(%d-%d),From:%s",uVar6,0,pcVar2);
      }
      else {
        pcVar8 = (char *)(tnp::gTNPSession + iVar5 + 0x2c);
        sVar3 = strlen(pcVar8);
        pcVar2 = inet_ntoa(local_5b4);
        sprintf(acStack_5a8,"Read PunchPkt_EX:Invalid Sign(%.3s-%d),From:%s",pcVar8,sVar3,pcVar2);
      }
      tnp::PPPP__Send_ErrorReport((int)param_1,'\x01',acStack_5a8);
      goto LAB_0002ed64;
    }
    memcpy((void *)(tnp::gTNPSession + iVar5 + 0x4c),auStack_5d4,3);
    iVar4 = 3;
    do {
      iVar1 = iVar1 + iVar5;
      tnp::PPPP_Proto_Send_P2PRdy_EX
                (*(int *)(iVar1 + 0x58),asStack_5b8,(char *)(iVar1 + 0x18),*(uint *)(iVar1 + 0x28),
                 (char *)(iVar1 + 0x20),0,(char *)(iVar1 + 0x2c));
      tnp::mSecSleep(10);
      iVar4 = iVar4 + -1;
      iVar1 = tnp::gTNPSession;
    } while (iVar4 != 0);
  }
  else {
    iVar1 = PPPP__EnableInsecureMode();
    if (iVar1 == 0) goto LAB_0002ed64;
    tnp::PPPP_Proto_Read_PunchPkt(asStack_528,local_5c8,&local_5d0,(char *)&local_5c0);
    iVar4 = tnp::gTNPSession + iVar5;
    pcVar2 = (char *)(iVar4 + 0x18);
    iVar1 = strncmp(local_5c8,pcVar2,7);
    if (iVar1 != 0) goto LAB_0002ed64;
    pcVar8 = (char *)(iVar4 + 0x20);
    iVar1 = strncmp((char *)&local_5c0,pcVar8,7);
    if ((iVar1 != 0) || (uVar6 = *(uint *)(iVar4 + 0x28), uVar6 != local_5d0)) goto LAB_0002ed64;
    iVar1 = 3;
    while( true ) {
      tnp::PPPP_Proto_Send_P2PRdy(*(int *)(iVar4 + 0x58),asStack_5b8,pcVar2,uVar6,pcVar8);
      tnp::mSecSleep(10);
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) break;
      iVar4 = tnp::gTNPSession + iVar5;
      pcVar2 = (char *)(iVar4 + 0x18);
      uVar6 = *(uint *)(iVar4 + 0x28);
      pcVar8 = (char *)(iVar4 + 0x20);
    }
  }
  tnp::PPPP_DebugTrace(0x10,"MSG_PUNCH_PKT, ID= %s-%06d-%s\n",local_5c8,local_5d0,&local_5c0);
  memcpy((void *)(tnp::gTNPSession + iVar5 + 0x5c),asStack_5b8,0x10);
  *(undefined1 *)(tnp::gTNPSession + iVar5 + 0x1b7) = 1;
  tnp::PPPP__Set_SessionReady((int)param_1,'\0');
  memset(acStack_5a8,0,0x80);
  pcVar2 = inet_ntoa(local_5b4);
  sprintf(acStack_5a8,"Recv PUNCH_PKT From:%s,Session:%d",pcVar2,param_1);
  tnp::PPPP__Send_Report((int)param_1,'\x01',acStack_5a8);
  goto LAB_0002ed64;
}



undefined4 PPPP_Parse_Address(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 != (char *)0x0 && param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     (iVar1 = tnp::PPPP_DecodeString(param_1,param_2,param_3 + -1), -1 < iVar1)) {
    return 0;
  }
  return 0xfffff443;
}



undefined4 PPPP_LoginStatus_Check(int param_1)

{
  time_t tVar1;
  uint uVar2;
  
  tnp::PPPP_DebugTrace(1,"PPPP_LoginStatus_Check(bLoginStatus addr=0x%08X) Enter.\n",param_1);
  if (tnp::gFlagInitialized == '\0') {
    return 0xfffff447;
  }
  if (param_1 == 0) {
    return 0xfffff443;
  }
  tVar1 = time((time_t *)0x0);
  uVar2 = tVar1 - tnp::gLastLoginOKTime;
  tnp::PPPP_DebugTrace(2," Last Successful Login time is %d sec before\n",uVar2);
  tnp::PPPP_DebugTrace(0x40000," Last Successful Login time is %d sec before\n",uVar2);
  *(bool *)param_1 = uVar2 < 0x3d;
  tnp::PPPP_DebugTrace(1,"PPPP_LoginStatus_Check() Exit.\n");
  return 0;
}



undefined4 PPPP_Share_Bandwidth(uint param_1)

{
  if (tnp::gFlagInitialized != '\0') {
    if ((tnp::gSDevInfo[0x60] != param_1) &&
       (tnp::gSDevInfo[0x60] = (byte)param_1, '\0' < tnp::gSDevInfo[0x6c])) {
      tnp::PPPP__ExitSuperDevice('\x02');
      tnp::WaitThreadExit((ulong *)(tnp::gSDevInfo + 0x68));
      tnp::PPPP__ResetSuperDevice();
    }
    tnp::PPPP_DebugTrace(0x200,"PPPP_Share_Bandwidth:%d\n",param_1);
    return 0;
  }
  return 0xfffff447;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Check_Device_Working()

undefined4 PPPP__Check_Device_Working(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (tnp::gMaxSessionNumber == 0) {
    uVar4 = 1;
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 0x3f18;
      iVar3 = iVar3 + 1;
      if (*(char *)(iVar1 + tnp::gTNPSession + 0x1b1) == '\x01') {
        iVar2 = iVar2 + 1;
      }
    } while (iVar3 != tnp::gMaxSessionNumber);
    if (iVar2 < 2) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  tnp::PPPP_DebugTrace(2,"device count is %d\n",iVar2);
  return uVar4;
}



// PPPP__Send_Report_SuperDevice_Connect(char*)

undefined4 PPPP__Send_Report_SuperDevice_Connect(char *param_1)

{
  sockaddr_in *psVar1;
  sockaddr_in *psVar2;
  
  psVar1 = (sockaddr_in *)tnp::gP2PServerAddr;
  do {
    psVar2 = psVar1 + 0x10;
    tnp::PPPP_Proto_Send_SDevReport
              (tnp::gSDevInfo._0_4_,psVar1,tnp::gSDevInfo + 0x4c,tnp::gSDevInfo._92_4_,
               tnp::gSDevInfo + 0x54,tnp::gSDevInfo + 0x38,tnp::gSDevInfo._72_4_,
               tnp::gSDevInfo + 0x40,'\x01',param_1);
    psVar1 = psVar2;
  } while (psVar2 != (sockaddr_in *)&tnp::gTNPSessionLock);
  return 0;
}



// PPPP__Send_Report_SuperDevice_ExitThread(char, char)

undefined4 PPPP__Send_Report_SuperDevice_ExitThread(char param_1,char param_2)

{
  int iVar1;
  char *__s;
  sockaddr_in *psVar2;
  sockaddr_in *psVar3;
  char local_88 [100];
  
  iVar1 = (int)param_1;
  __s = local_88 + 0x20;
  memset(__s,0,0x40);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  switch(iVar1) {
  case 0:
    strncpy(local_88,"ok",0x1f);
    break;
  case 1:
    strncpy(local_88,"unknown",0x1f);
    break;
  case 2:
    strncpy(local_88,"working",0x1f);
    break;
  case 3:
    strncpy(local_88,"recv data timeout",0x1f);
    break;
  case 4:
    strncpy(local_88,"connect timeout",0x1f);
    break;
  case 5:
    strncpy(local_88,"login error",0x1f);
LAB_0002f640:
    snprintf(__s,0x40,"reason:%d(%s),loginack:%d",5,local_88,(int)param_2);
    goto LAB_0002f55c;
  case 6:
    strncpy(local_88,"socket bind error",0x1f);
    break;
  case 7:
    strncpy(local_88,"socket recv error",0x1f);
    break;
  case 8:
    strncpy(local_88,"exceed limits",0x1f);
    break;
  case 9:
    strncpy(local_88,"another device in lan",0x1f);
    break;
  default:
    strncpy(local_88,"unknown",0x1f);
    if (iVar1 == 5) goto LAB_0002f640;
  }
  snprintf(__s,0x40,"reason:%d(%s)",iVar1,local_88);
LAB_0002f55c:
  psVar2 = (sockaddr_in *)tnp::gP2PServerAddr;
  do {
    psVar3 = psVar2 + 0x10;
    tnp::PPPP_Proto_Send_SDevReport
              (tnp::gSDevInfo._0_4_,psVar2,tnp::gSDevInfo + 0x4c,tnp::gSDevInfo._92_4_,
               tnp::gSDevInfo + 0x54,tnp::gSDevInfo + 0x38,tnp::gSDevInfo._72_4_,
               tnp::gSDevInfo + 0x40,'\x02',__s);
    psVar2 = psVar3;
  } while (psVar3 != (sockaddr_in *)&tnp::gTNPSessionLock);
  return 0;
}



// PPPP__HelloToIpEqual(unsigned long, unsigned long, unsigned long, unsigned long)

bool PPPP__HelloToIpEqual(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  if (param_1 == param_3 && param_2 == param_4) {
    return true;
  }
  return param_1 == param_4 && param_2 == param_3;
}



// PPPP__Send_NoticeToAckError(int, unsigned long long, char)

void PPPP__Send_NoticeToAckError(int param_1,ulonglong param_2,char param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  uchar in_stack_ffffffc4;
  char in_stack_ffffffc8;
  char *local_30;
  
  piVar2 = &tnp::gTNPSession;
  iVar3 = tnp::gTNPSession + param_1 * 0x3f18;
  local_30 = (char *)param_2;
  if (*(char *)(iVar3 + 0x1a5) == '\0') {
    puVar1 = tnp::gP2PServerAddr;
    iVar3 = tnp::gTNPSession;
    while( true ) {
      iVar3 = iVar3 + param_1 * 0x3f18;
      tnp::PPPP_Proto_Send_NoticeToAck
                (*(tnp **)(iVar3 + 0x50),0,(char)puVar1,(sockaddr_in *)(iVar3 + 0x18),
                 *(char **)(iVar3 + 0x28),iVar3 + 0x20,local_30,0x49da400000000,0x9424,(char *)0x0,
                 (char *)(uint)(byte)param_3,in_stack_ffffffc4,(char)piVar2);
      puVar1 = (undefined1 *)((int)puVar1 + 0x10);
      if ((undefined4 *)puVar1 == &tnp::gTNPSessionLock) break;
      iVar3 = *piVar2;
    }
  }
  else {
    tnp::PPPP_Proto_Send_NoticeToAck
              (*(tnp **)(iVar3 + 0x50),1,
               (char)iVar3 + (char)*(undefined4 *)(iVar3 + 0x16c) * '\x10' + -0x24,
               (sockaddr_in *)(iVar3 + 0x18),*(char **)(iVar3 + 0x28),iVar3 + 0x20,local_30,
               0x49da400000000,0x9424,(char *)0x0,(char *)(uint)(byte)param_3,in_stack_ffffffc4,
               in_stack_ffffffc8);
  }
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// PPPP_Thread_Recv_Proto_Device(void*)

void PPPP_Thread_Recv_Proto_Device(void *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [4];
  sockaddr_in sVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  hostent *phVar9;
  undefined4 uVar10;
  int iVar11;
  time_t tVar12;
  size_t sVar13;
  byte bVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  sockaddr_in *psVar19;
  char *__s;
  uint uVar20;
  undefined1 *puVar21;
  sockaddr_in *psVar22;
  int iVar23;
  char cVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ushort *puVar27;
  sockaddr *local_a44;
  byte local_a26;
  uchar uStack_a25;
  ushort uStack_a24;
  ushort uStack_a22;
  uint local_a20;
  uint local_a1c;
  byte local_a18;
  undefined1 uStack_a17;
  undefined1 uStack_a16;
  undefined1 uStack_a15;
  undefined4 uStack_a14;
  uint local_a0c;
  undefined4 local_a08;
  uint local_a04;
  undefined4 local_a00;
  sockaddr_in asStack_9fc [2];
  ushort uStack_9fa;
  in_addr local_9f8;
  undefined1 local_9ec [4];
  uint local_9e8;
  char acStack_9ac [128];
  undefined1 local_92c [4];
  uint local_928;
  char local_924 [1020];
  sockaddr_in local_528;
  byte local_527;
  byte local_526;
  byte local_525;
  sockaddr_in asStack_524 [2];
  ushort uStack_522;
  in_addr local_520;
  char acStack_508 [1252];
  
  memset(acStack_9ac,0,0x80);
  tnp::PPPP_DebugTrace(0x10,"PPPP_Thread_Recv_Proto_Device Running.\n");
  iVar23 = (int)param_1 * 0x3f18;
  iVar5 = tnp::gLastUpdateServerConfigTime;
joined_r0x0002f900:
  do {
    tnp::gLastUpdateServerConfigTime = iVar5;
    if (tnp::gTNPSession == 0) {
LAB_0002f988:
      tnp::PPPP_DebugTrace(0x10,"PPPP_Thread_Recv_Proto Exit.\n");
                    // WARNING: Subroutine does not return
      pthread_exit((void *)0x0);
    }
    iVar5 = *(int *)(tnp::gTNPSession + iVar23 + 0x50);
    if ((iVar5 < 0) || (*(char *)(tnp::gTNPSession + iVar23 + 0x1c1) != '\0')) goto LAB_0002f988;
    uVar6 = tnp::PPPP_Proto_Recv_ALL
                      (iVar5,asStack_9fc,200,&local_a26,&uStack_a24,(char *)&local_528,0x500,
                       &uStack_a25);
    if (uVar6 == 0) {
      uVar17 = (uint)uStack_a24;
      uVar15 = (uint)local_a26;
      pcVar7 = inet_ntoa(local_9f8);
      uVar20 = (uStack_9fa & 0xff) << 8 | (uint)(uStack_9fa >> 8);
      tnp::PPPP_DebugTrace
                (0x400,"MsgType = 0x%02X, Size = %d from %s:%d\n",uVar15,uVar17,pcVar7,uVar20);
      sVar4 = local_528;
      if (local_a26 == 0x40) {
        PPPP__IncomingConnectionCallback();
        iVar5 = PPPP__SessionHandler_Is_Full();
        if (iVar5 == 1) {
          tnp::PPPP_DebugTrace(0x10,"session is full, drop msg MSG_PUNCH_TO\n");
          iVar5 = tnp::gLastUpdateServerConfigTime;
          goto joined_r0x0002f900;
        }
        if ((uStack_a24 == 0x28) && (iVar5 = PPPP__EnableSecureMode(), iVar5 != 0)) {
                    // WARNING: Ignoring partial resolution of indirect
          local_a04._0_2_ = 0;
          uVar20 = local_a04;
          local_a0c = local_a0c & 0xffffff00;
          local_a04._3_1_ = SUB41(uVar20,3);
          local_a04._0_2_ = (ushort)uVar20;
          local_a04._0_3_ = (uint3)(ushort)local_a04;
          local_9ec = (undefined1  [4])uVar6;
          iVar18 = tnp::PPPP_Proto_Read_PunchTo_EX
                             ((st_PPPP_PunchTo_EX *)&local_528,(sockaddr_in *)local_92c,
                              (uchar *)&local_a0c,(uchar *)&local_a04,(uint *)local_9ec,
                              (char *)(tnp::gTNPSession + iVar23 + 0x2c));
          iVar5 = tnp::gTNPSession;
          if (iVar18 < 0) {
            tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_PunchTo_EX failed,ErrorCode:%d\n",iVar18);
            memset(acStack_9ac,0,0x80);
            auVar3 = local_9ec;
            if (iVar18 == -1) {
              pcVar7 = inet_ntoa(local_9f8);
              sprintf(acStack_9ac,"Read PunchTo_EX:Invalid Time(%d-%d),From:%s",auVar3,0,pcVar7);
            }
            else {
              pcVar8 = (char *)(tnp::gTNPSession + iVar23 + 0x2c);
              sVar13 = strlen(pcVar8);
              pcVar7 = inet_ntoa(local_9f8);
              sprintf(acStack_9ac,"Read PunchTo_EX:Invalid Sign(%.3s-%d),From:%s",pcVar8,sVar13,
                      pcVar7);
            }
LAB_000310f8:
            tnp::PPPP__Send_ErrorReport((int)param_1,'\x01',acStack_9ac);
            iVar5 = tnp::gLastUpdateServerConfigTime;
            goto joined_r0x0002f900;
          }
          memcpy((void *)(tnp::gTNPSession + iVar23 + 0x4c),&local_a04,3);
          iVar18 = 3;
          do {
            iVar5 = iVar5 + iVar23;
            tnp::PPPP_Proto_Send_PunchPkt_EX
                      (*(int *)(iVar5 + 0x54),(sockaddr_in *)local_92c,(char *)(iVar5 + 0x18),
                       *(uint *)(iVar5 + 0x28),(char *)(iVar5 + 0x20),0,(char *)(iVar5 + 0x2c));
            tnp::mSecSleep(10);
            iVar18 = iVar18 + -1;
            iVar5 = tnp::gTNPSession;
          } while (iVar18 != 0);
        }
        else {
          iVar18 = PPPP__EnableInsecureMode();
          iVar5 = tnp::gLastUpdateServerConfigTime;
          if (iVar18 == 0) goto joined_r0x0002f900;
          tnp::PPPP_Proto_Read_PunchTo((st_PPPP_PunchTo *)&local_528,(sockaddr_in *)local_92c);
          iVar5 = 3;
          do {
            iVar18 = tnp::gTNPSession + iVar23;
            tnp::PPPP_Proto_Send_PunchPkt
                      (*(int *)(iVar18 + 0x54),(sockaddr_in *)local_92c,(char *)(iVar18 + 0x18),
                       *(uint *)(iVar18 + 0x28),(char *)(iVar18 + 0x20));
            tnp::mSecSleep(10);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        pcVar7 = inet_ntoa((in_addr)local_928);
        tnp::PPPP_DebugTrace
                  (0x10,"MSG_PUNCH_TO ToAddr= %s:%d \n",pcVar7,
                   ((ushort)local_92c._2_2_ & 0xff) << 8 | (uint)((ushort)local_92c._2_2_ >> 8));
        tnp::PPPP__Update_SessionState((int)param_1,'\x04');
        memset(acStack_9ac,0,0x80);
        pcVar8 = inet_ntoa((in_addr)local_928);
        pcVar7 = "Recv PUNCH_TO:%s,Session:%d";
      }
      else {
        iVar5 = tnp::gLastUpdateServerConfigTime;
        if (local_a26 < 0x41) {
          if (local_a26 == 0x15) {
            tnp::PPPP_DebugTrace
                      (0x40000,"MSG_DEV_LGN_SIGN_ACK, Result = %d, LgnInterval = %d \n",
                       (uint)(byte)local_528,(uint)local_527,pcVar7,uVar20);
            tnp::gLoginFlag = 0x31;
            tnp::gRecvLoginAckByUDP = 1;
            tVar12 = time((time_t *)0x0);
            iVar18 = tnp::gTNPSession;
            if (local_528 == (sockaddr_in)0x0) {
              bVar14 = local_527;
              if (0x28 < local_527 - 10) {
                bVar14 = 0x19;
              }
              iVar5 = tnp::gTNPSession + iVar23;
              *(byte *)(iVar5 + 0x1be) = bVar14;
              *(undefined1 *)(iVar5 + 0x1bd) = 0;
              tnp::gLastLoginOKTime = tVar12;
              iVar5 = tnp::gLastUpdateServerConfigTime;
              if ((local_526 != tnp::gServerConfig) &&
                 (0xb4 < (uint)(tVar12 - tnp::gLastUpdateServerConfigTime))) {
                psVar19 = (sockaddr_in *)tnp::gP2PServerAddr;
                do {
                  iVar18 = iVar18 + iVar23;
                  psVar22 = psVar19 + 0x10;
                  tnp::PPPP_Proto_Send_ServerConfigReq
                            (*(int *)(iVar18 + 0x50),psVar19,(char *)(iVar18 + 0x18),
                             *(uint *)(iVar18 + 0x28),(char *)(iVar18 + 0x20),0,
                             (char *)(iVar18 + 0x2c));
                  iVar18 = tnp::gTNPSession;
                  psVar19 = psVar22;
                  iVar5 = tVar12;
                } while (psVar22 != (sockaddr_in *)&tnp::gTNPSessionLock);
              }
              goto joined_r0x0002f900;
            }
          }
          else {
            if (0x15 < local_a26) {
              if (local_a26 == 0x3a) {
                local_9ec = (undefined1  [4])uVar6;
                local_9e8 = uVar6;
                local_92c = (undefined1  [4])uVar6;
                local_928 = uVar6;
                tnp::PPPP_Proto_Read_NoticePing
                          ((st_PPPP_NoticePing *)&local_528,local_9ec,&local_a04,local_92c);
                tnp::PPPP_DebugTrace
                          (0x10,"MSG_NOTICE_PING, %s-%d-%s\n",local_9ec,local_a04,local_92c,uVar20);
                iVar11 = tnp::gTNPSession + iVar23;
                iVar18 = strncmp(local_9ec,(char *)(iVar11 + 0x18),7);
                iVar5 = tnp::gLastUpdateServerConfigTime;
                if (((iVar18 == 0) &&
                    (iVar18 = strncmp(local_92c,(char *)(iVar11 + 0x20),7),
                    iVar5 = tnp::gLastUpdateServerConfigTime, iVar18 == 0)) &&
                   (*(uint *)(iVar11 + 0x28) == local_a04)) {
                  tnp::PPPP_Proto_Send_NoticePingAck
                            (*(int *)(iVar11 + 0x50),'\0',asStack_9fc,
                             (st_PPPP_NoticePing *)&local_528);
                  iVar5 = tnp::gLastUpdateServerConfigTime;
                }
              }
              else if (local_a26 == 0x3f) {
                memset(local_9ec,0,0x40);
                local_a0c = 0;
                local_a08 = 0;
                local_a04 = 0;
                local_a00 = 0;
                memset(local_92c,0,0x404);
                puVar27 = &uStack_a22;
                tnp::PPPP_Proto_Read_NoticeTo_EX
                          ((st_PPPP_NoticeTo_EX *)&local_528,(char *)&local_a0c,&local_a20,
                           (char *)&local_a04,(ulonglong *)&local_a18,puVar27,local_92c,&local_a1c);
                uVar6 = atol(acStack_508);
                uVar25 = tnp::getCurTime();
                uVar20 = FUN_000486fc((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),1000,0);
                tnp::PPPP_DebugTrace
                          (0x10,"MSG_NOTICE_TO_EX, %s-%d-%s MsgIndex:%llu, ContentLen:%u\n",
                           &local_a0c,local_a20,&local_a04,puVar27,
                           CONCAT13(uStack_a15,CONCAT12(uStack_a16,CONCAT11(uStack_a17,local_a18))),
                           uStack_a14,(uint)uStack_a22);
                if (((uVar6 < uVar20) && (local_a1c < uVar20 - uVar6)) ||
                   ((uVar20 < uVar6 && (local_a1c < uVar6 - uVar20)))) {
                  tnp::PPPP_DebugTrace
                            (0x10,
                             "MSG_NOTICE_TO_EX, %s-%d-%s MsgIndex:%llu, nonce:%s, currentTime:%u, ValidNonceTime:%u, nonce time error\n"
                             ,&local_a0c,local_a20,&local_a04,puVar27,
                             CONCAT13(uStack_a15,CONCAT12(uStack_a16,CONCAT11(uStack_a17,local_a18))
                                     ),uStack_a14,acStack_508,uVar20,local_a1c);
                  PPPP__Send_NoticeToAckError
                            ((int)param_1,
                             CONCAT44(uStack_a14,
                                      CONCAT13(uStack_a15,
                                               CONCAT12(uStack_a16,CONCAT11(uStack_a17,local_a18))))
                             ,-2);
                  iVar5 = tnp::gLastUpdateServerConfigTime;
                }
                else {
                  sVar13 = strlen(tnp::gHardKey);
                  tnp::PPPP_MakeSha1(tnp::gHardKey,sVar13,acStack_508,uStack_a22 + 0x40,local_9ec);
                  uVar2 = uStack_a14;
                  uVar6 = local_a20;
                  uVar20 = (uint)uStack_a22;
                  uVar10 = CONCAT13(uStack_a15,CONCAT12(uStack_a16,CONCAT11(uStack_a17,local_a18)));
                  pcVar7 = inet_ntoa(local_9f8);
                  tnp::PPPP_DebugTrace
                            (0x10,
                             "MSG_NOTICE_TO_EX signature, %s-%d-%s MsgIndex:%llu, ContentLen:%u, tmpConnectKey:%s, outbuf:%s, Signature:%s, from:%s:%d\n"
                             ,&local_a0c,uVar6,&local_a04,puVar27,uVar10,uVar2,uVar20,tnp::gHardKey,
                             local_9ec,&local_528,pcVar7,
                             (uStack_9fa & 0xff) << 8 | (uint)(uStack_9fa >> 8));
                  iVar5 = memcmp(local_9ec,&local_528,8);
                  uVar10 = uStack_a14;
                  uVar6 = local_a20;
                  if (iVar5 == 0) {
                    iVar18 = tnp::gTNPSession + iVar23;
                    iVar5 = strncmp((char *)&local_a0c,(char *)(iVar18 + 0x18),7);
                    if (((iVar5 == 0) &&
                        (iVar5 = strncmp((char *)&local_a04,(char *)(iVar18 + 0x20),7), iVar5 == 0))
                       && (*(uint *)(iVar18 + 0x28) == local_a20)) {
                      PPPP__NoticeToCallback
                                (CONCAT44(uStack_a14,
                                          CONCAT13(uStack_a15,
                                                   CONCAT12(uStack_a16,
                                                            CONCAT11(uStack_a17,local_a18)))),
                                 local_92c,(uint)uStack_a22);
                      iVar5 = tnp::gLastUpdateServerConfigTime;
                    }
                    else {
                      PPPP__Send_NoticeToAckError
                                ((int)param_1,
                                 CONCAT44(uStack_a14,
                                          CONCAT13(uStack_a15,
                                                   CONCAT12(uStack_a16,
                                                            CONCAT11(uStack_a17,local_a18)))),-3);
                      iVar5 = tnp::gLastUpdateServerConfigTime;
                    }
                  }
                  else {
                    uVar2 = CONCAT13(uStack_a15,CONCAT12(uStack_a16,CONCAT11(uStack_a17,local_a18)))
                    ;
                    uVar20 = (uint)uStack_a22;
                    pcVar7 = inet_ntoa(local_9f8);
                    tnp::PPPP_DebugTrace
                              (0x10,
                               "MSG_NOTICE_TO_EX signature error, %s-%d-%s MsgIndex:%llu, ContentLen:%u, tmpConnectKey:%s, outbuf:%s, Signature:%s, from:%s:%d\n"
                               ,&local_a0c,uVar6,&local_a04,puVar27,uVar2,uVar10,uVar20,
                               tnp::gHardKey,local_9ec,&local_528,pcVar7,
                               (uStack_9fa & 0xff) << 8 | (uint)(uStack_9fa >> 8));
                    PPPP__Send_NoticeToAckError
                              ((int)param_1,
                               CONCAT44(uStack_a14,
                                        CONCAT13(uStack_a15,
                                                 CONCAT12(uStack_a16,CONCAT11(uStack_a17,local_a18))
                                                )),-1);
                    iVar5 = tnp::gLastUpdateServerConfigTime;
                  }
                }
              }
              else if (local_a26 == 0x32) {
                local_a04 = 0;
                local_a00 = 0;
                local_9ec = (undefined1  [4])0x0;
                local_9e8 = 0;
                tnp::PPPP_Proto_Read_LanNotifyAck
                          ((st_PPPP_LanNotify *)&local_528,(char *)&local_a04,&local_a0c,local_9ec);
                tnp::PPPP_DebugTrace
                          (0x10,"Recv MSG_LAN_NOTIFY_ACK, ID= %s-%06d-%s\n",&local_a04,local_a0c,
                           local_9ec,uVar20);
                iVar5 = tnp::gLastUpdateServerConfigTime;
                if ((tnp::gSDevInfo[0x60] != '\0') && (tnp::gSDevInfo[0x61] == '\0')) {
                  tnp::gSDevInfo[0x61] = '\x01';
                  memset(local_92c,0,0x40);
                  uVar25 = tnp::getCurTime();
                  uVar10 = FUN_000486fc((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),1000,0);
                  snprintf(local_92c,0x40,"%x,reason:%d,recv MSG_LAN_NOTIFY_ACK",uVar10,9);
                  psVar19 = (sockaddr_in *)tnp::gP2PServerAddr;
                  do {
                    iVar5 = tnp::gTNPSession + iVar23;
                    psVar22 = psVar19 + 0x10;
                    tnp::PPPP_Proto_Send_SDevReport
                              (*(int *)(iVar5 + 0x50),psVar19,"",0,"",(char *)(iVar5 + 0x18),
                               *(uint *)(iVar5 + 0x28),(char *)(iVar5 + 0x20),'\x03',local_92c);
                    psVar19 = psVar22;
                    iVar5 = tnp::gLastUpdateServerConfigTime;
                  } while (psVar22 != (sockaddr_in *)&tnp::gTNPSessionLock);
                }
              }
              goto joined_r0x0002f900;
            }
            if (local_a26 == 6) {
              tnp::PPPP_DebugTrace
                        (0x10,"MSG_SESSION_RESPONSE, ResType:%d, Role:%d, Result:%d\n",
                         (uint)(byte)local_528,(uint)local_527,(uint)local_526,uVar20);
              iVar5 = tnp::gLastUpdateServerConfigTime;
              goto joined_r0x0002f900;
            }
            if (local_a26 != 0x11) {
              if (local_a26 == 1) {
                tnp::ntohAddr(&local_528,(sockaddr_in *)(tnp::gTNPSession + iVar23 + 0x7c));
                pcVar8 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar23 + 0x80));
                uVar1 = *(ushort *)(tnp::gTNPSession + iVar23 + 0x7e);
                tnp::PPPP_DebugTrace
                          (0x10,"MSG_HELLO_ACK WanAddr= %s:%d \n",pcVar8,
                           (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8),pcVar7,uVar20);
                iVar5 = tnp::gTNPSession + iVar23;
                *(undefined2 *)(iVar5 + 0x6c) = 2;
                local_9ec = (undefined1  [4])0x80;
                memset((sockaddr *)local_92c,0,0x80);
                getsockname(*(int *)(iVar5 + 0x50),(sockaddr *)local_92c,(socklen_t *)local_9ec);
                iVar5 = tnp::gLastUpdateServerConfigTime;
                if (local_92c._0_2_ == 2) {
                  *(undefined2 *)(tnp::gTNPSession + iVar23 + 0x6e) = local_92c._2_2_;
                  phVar9 = gethostbyname(tnp::gNetInfo + 4);
                  iVar5 = tnp::gLastUpdateServerConfigTime;
                  if (phVar9 != (hostent *)0x0) {
                    memcpy((void *)(tnp::gTNPSession + iVar23 + 0x70),*phVar9->h_addr_list,
                           phVar9->h_length);
                    pcVar7 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gTNPSession + iVar23 + 0x70));
                    uVar1 = *(ushort *)(tnp::gTNPSession + iVar23 + 0x6e);
                    tnp::PPPP_DebugTrace
                              (0x10,"MyLocal Addr: %s:%d\n",pcVar7,
                               (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8));
                    iVar5 = tnp::gLastUpdateServerConfigTime;
                  }
                }
              }
              goto joined_r0x0002f900;
            }
            uVar20 = (uint)(byte)local_528;
            uVar6 = (uint)local_527;
            uVar15 = (uint)local_526;
            pcVar7 = inet_ntoa(local_520);
            tnp::PPPP_DebugTrace
                      (0x40000,
                       "MSG_DEV_LGN_PROXY_ACK, Result=%d, LgnInterval=%d, HasToken=%d Address=%s:%d\n"
                       ,uVar20,uVar6,uVar15,pcVar7,
                       (uStack_522 & 0xff) << 8 | (uint)(uStack_522 >> 8));
            tnp::gLoginFlag = 0x31;
            tnp::gRecvLoginAckByUDP = 1;
            tVar12 = time((time_t *)0x0);
            iVar5 = tnp::gTNPSession;
            if (local_528 == (sockaddr_in)0x0) {
              iVar18 = tnp::gTNPSession + iVar23;
              *(undefined1 *)(iVar18 + 0x1bd) = 0;
              bVar14 = local_527;
              if (0x28 < local_527 - 10) {
                bVar14 = 0x19;
              }
              *(byte *)(iVar18 + 0x1be) = bVar14;
              tnp::gLastLoginOKTime = tVar12;
              iVar18 = tnp::gLastUpdateServerConfigTime;
              if ((local_525 != tnp::gServerConfig) &&
                 (0xb4 < (uint)(tVar12 - tnp::gLastUpdateServerConfigTime))) {
                psVar19 = (sockaddr_in *)tnp::gP2PServerAddr;
                do {
                  iVar5 = iVar5 + iVar23;
                  psVar22 = psVar19 + 0x10;
                  tnp::PPPP_Proto_Send_ServerConfigReq
                            (*(int *)(iVar5 + 0x50),psVar19,(char *)(iVar5 + 0x18),
                             *(uint *)(iVar5 + 0x28),(char *)(iVar5 + 0x20),0,(char *)(iVar5 + 0x2c)
                            );
                  iVar5 = tnp::gTNPSession;
                  psVar19 = psVar22;
                  iVar18 = tVar12;
                } while (psVar22 != (sockaddr_in *)&tnp::gTNPSessionLock);
              }
              tnp::gLastUpdateServerConfigTime = iVar18;
              iVar5 = tnp::gLastUpdateServerConfigTime;
              if (local_526 == 1) {
                puVar21 = tnp::gP2PServerAddr;
                iVar18 = 0;
                do {
                  iVar5 = tnp::AddrCompare(asStack_524,(sockaddr_in *)puVar21);
                  if (iVar5 == 0) {
                    gProxyModeInfo[iVar18 + 0x114] = 1;
                    iVar5 = tnp::gLastUpdateServerConfigTime;
                    break;
                  }
                  iVar18 = iVar18 + 1;
                  puVar21 = puVar21 + 0x10;
                  iVar5 = tnp::gLastUpdateServerConfigTime;
                } while (iVar18 != 3);
              }
              goto joined_r0x0002f900;
            }
          }
          sVar4 = local_528;
          iVar18 = tnp::gTNPSession + iVar23;
          if (*(char *)(iVar18 + 0x1bd) == '\0') {
            uVar25 = FUN_0004800c(tVar12 - tnp::gLastLoginOKTime);
            uVar26 = FUN_00048030(*(undefined1 *)(iVar18 + 0x1be));
            uVar26 = FUN_0004810c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0x33333333,0x3ff33333
                                 );
            iVar11 = FUN_00048680((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,
                                  (int)((ulonglong)uVar26 >> 0x20));
            iVar5 = tnp::gLastUpdateServerConfigTime;
            if (iVar11 == 0) goto joined_r0x0002f900;
          }
          *(sockaddr_in *)(iVar18 + 0x1bd) = sVar4;
          iVar5 = tnp::gLastUpdateServerConfigTime;
          goto joined_r0x0002f900;
        }
        if (local_a26 == 0x8a) {
          PPPP__IncomingConnectionCallback();
          iVar5 = PPPP__SessionHandler_Is_Full();
          if (iVar5 == 1) {
            tnp::PPPP_DebugTrace(0x10,"session is full, drop msg MSG_RLY_TCP_TO\n");
            iVar5 = tnp::gLastUpdateServerConfigTime;
            goto joined_r0x0002f900;
          }
          iVar5 = tnp::gTNPSession + iVar23;
          if (*(char *)(iVar5 + 0x1b0) == ')') {
            tnp::PPPP_DebugTrace
                      (0x10,"gTNPSession[SessionHandle].State is ready, drop msg MSG_RLY_TCP_TO\n",
                       0x29,iVar5,pcVar7,uVar20);
            iVar5 = tnp::gLastUpdateServerConfigTime;
            goto joined_r0x0002f900;
          }
          if (*(char *)(iVar5 + 0x4f) == '\x01') {
            tnp::PPPP__ExitSuperDevice('\x02');
          }
          local_924[4] = '\0';
          local_924[5] = '\0';
          local_924[6] = '\0';
          local_924[7] = '\0';
          local_92c = (undefined1  [4])0x0;
          local_928 = 0;
          local_924[0] = '\0';
          local_924[1] = '\0';
          local_924[2] = '\0';
          local_924[3] = '\0';
          if ((uStack_a24 == 0x30) && (iVar5 = PPPP__EnableSecureMode(), iVar5 != 0)) {
            iVar5 = tnp::PPPP_Proto_Read_RlyTCPTo_EX
                              ((st_PPPP_RlyTCPTo_EX *)&local_528,(sockaddr_in *)local_9ec,local_92c,
                               (char *)(tnp::gTNPSession + iVar23 + 0x2c));
            if (iVar5 < 0) {
              tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_RlyTCPTo_EX failed,ErrorCode:%d\n");
              memset(acStack_9ac,0,0x80);
              __s = (char *)(tnp::gTNPSession + iVar23 + 0x2c);
              sVar13 = strlen(__s);
              pcVar7 = inet_ntoa(local_9f8);
              pcVar8 = "Read RlyTCPTo_EX:Invalid Sign(%.3s-%d),From:%s";
              goto LAB_000310ec;
            }
          }
          else {
            iVar18 = PPPP__EnableInsecureMode();
            iVar5 = tnp::gLastUpdateServerConfigTime;
            if (iVar18 == 0) goto joined_r0x0002f900;
            tnp::PPPP_Proto_Read_RlyTCPTo
                      ((st_PPPP_RlyTCPTo *)&local_528,(sockaddr_in *)local_9ec,local_92c);
          }
          local_a44 = (sockaddr *)local_9ec;
          tnp::PPPP__Update_SessionState((int)param_1,'\'');
          pcVar7 = inet_ntoa((in_addr)local_9e8);
          tnp::PPPP_DebugTrace
                    (0x10,"Recv MSG_RLY_TCP_TO ToAddr = %s:%d , Ticket = %.*s\n",pcVar7,
                     ((ushort)local_9ec._2_2_ & 0xff) << 8 | (uint)((ushort)local_9ec._2_2_ >> 8),
                     0x10,local_92c);
          iVar18 = tnp::gTNPSession + iVar23;
          pcVar7 = (char *)(iVar18 + 0x17c);
          iVar5 = memcmp(pcVar7,local_92c,0x10);
          if (iVar5 == 0) {
            cVar16 = *(char *)(iVar18 + 0x4f);
          }
          else {
            tnp::PPPP__Set_SessionState((int)param_1,'\'');
            iVar18 = tnp::gTNPSession + iVar23;
            cVar16 = *(char *)(iVar18 + 0x4f);
            if (cVar16 == '\x01') {
              memcpy((void *)(iVar18 + 0xcc),local_a44,0x10);
              memcpy((void *)(tnp::gTNPSession + iVar23 + 0x17c),local_92c,0x10);
              tnp::PPPP__Halt_TCP_For_Session((int)param_1);
              tnp::PPPP__Start_TCP_For_Session((int)param_1,local_a44,0x1e);
              iVar18 = tnp::gTNPSession + iVar23;
              cVar16 = *(char *)(iVar18 + 0x4f);
            }
            pcVar7 = (char *)(iVar18 + 0x17c);
          }
          if (*(int *)(iVar18 + 0x54) < 0) {
            cVar24 = '\0';
          }
          else {
            iVar5 = tnp::PPPP_Proto_Send_RlyTCPPkt
                              (*(int *)(iVar18 + 0x54),(sockaddr_in *)(iVar18 + 0xcc),pcVar7,cVar16)
            ;
            if (iVar5 < 0) {
              tnp::PPPP__Halt_TCP_For_Session((int)param_1);
              cVar24 = -1;
              iVar18 = tnp::gTNPSession + iVar23;
              pcVar7 = (char *)(iVar18 + 0x17c);
              cVar16 = *(char *)(iVar18 + 0x4f);
            }
            else {
              tnp::PPPP__Update_SessionState((int)param_1,'(');
              cVar24 = '\x01';
              iVar18 = tnp::gTNPSession + iVar23;
              cVar16 = *(char *)(iVar18 + 0x4f);
              pcVar7 = (char *)(iVar18 + 0x17c);
            }
          }
          tnp::PPPP_Proto_Send_RlyTCPToAck
                    (*(int *)(iVar18 + 0x50),'\0',asStack_9fc,(char *)(iVar18 + 0x18),
                     *(uint *)(iVar18 + 0x28),(char *)(iVar18 + 0x20),pcVar7,cVar16,cVar24);
          memset(acStack_9ac,0,0x80);
          pcVar8 = inet_ntoa((in_addr)local_9e8);
          pcVar7 = "Recv RLY_TCP_TO:%s,Session:%d";
        }
        else {
          if (0x8a < local_a26) {
            if (local_a26 == 0xa1) {
              uVar6 = (uint)(byte)local_528;
              tnp::PPPP_DebugTrace(0x10,"MSG_REPORT_REQ, ReportLevel:%d\n",uVar6,0xa1,pcVar7,uVar20)
              ;
              *(sockaddr_in *)(tnp::gTNPSession + iVar23 + 0x1bf) = sVar4;
              iVar5 = tnp::gLastUpdateServerConfigTime;
              tnp::gCurrentReportLevel = uVar6;
            }
            else if (local_a26 == 0xb0) {
              local_a18 = 0;
              local_9ec = (undefined1  [4])0x0;
              local_9e8 = 0;
              local_92c = (undefined1  [4])0x0;
              local_928 = 0;
              local_a04 = 0;
              iVar5 = tnp::PPPP_Proto_Read_ServerConfig
                                ((st_PPPP_ServerConfig *)&local_528,local_9ec,&local_a0c,local_92c,
                                 (char *)&local_a18,&local_a04,
                                 (char *)(tnp::gTNPSession + iVar23 + 0x2c));
              if (iVar5 < 0) {
                tnp::PPPP_DebugTrace
                          (0x10,"PPPP_Proto_Read_ServerConfig failed,ErrorCode:%d\n",iVar5);
                memset(acStack_9ac,0,0x80);
                uVar6 = local_a04;
                if (iVar5 == -1) {
                  pcVar7 = inet_ntoa(local_9f8);
                  sprintf(acStack_9ac,"Read ServerConfig:Invalid Time(%d-%d),From:%s",uVar6,0,pcVar7
                         );
                }
                else {
                  pcVar8 = (char *)(tnp::gTNPSession + iVar23 + 0x2c);
                  sVar13 = strlen(pcVar8);
                  pcVar7 = inet_ntoa(local_9f8);
                  sprintf(acStack_9ac,"Read ServerConfig:Invalid Sign(%.3s-%d),From:%s",pcVar8,
                          sVar13,pcVar7);
                }
                tnp::PPPP__Send_ErrorReport((int)param_1,'\n',acStack_9ac);
                iVar5 = tnp::gLastUpdateServerConfigTime;
              }
              else {
                iVar5 = tnp::gLastUpdateServerConfigTime;
                if (local_a18 != 0) {
                  tnp::gServerConfig = local_a18;
                }
              }
            }
            else if (local_a26 == 0x90) {
              tnp::PPPP_DebugTrace(0x10,"MSG_SDEV_RUN\n");
              uVar25 = tnp::getCurTime();
              if (tnp::gSDevInfo[0x61] == '\0') {
                if (tnp::gSDevInfo[0x60] == '\0') {
                  tnp::PPPP_DebugTrace(2,"gSDevInfo.bShareBandwidth is off\n");
                  iVar5 = tnp::gLastUpdateServerConfigTime;
                }
                else {
                  iVar5 = PPPP__Check_Device_Working();
                  if (iVar5 == 0) {
                    tnp::PPPP_DebugTrace(2,"device is working\n");
                    iVar5 = tnp::gLastUpdateServerConfigTime;
                  }
                  else {
                    uVar6 = FUN_000486fc((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),1000,0);
                    if ((uint)tnp::gSDevInfo._100_4_ < uVar6) {
                      if (tnp::gSDevInfo[0x6c] == '\x03') {
                        tnp::WaitThreadExit((ulong *)(tnp::gSDevInfo + 0x68));
                        tnp::gSDevInfo[0x6c] = '\0';
                      }
                      else {
                        iVar5 = tnp::gLastUpdateServerConfigTime;
                        if (tnp::gSDevInfo[0x6c] != '\0') goto joined_r0x0002f900;
                      }
                      tnp::PPPP__ResetSuperDevice();
                      iVar5 = tnp::gTNPSession + iVar23;
                      tnp::gSDevInfo[0x6c] = '\x01';
                      tnp::gSDevInfo._72_4_ = *(undefined4 *)(iVar5 + 0x28);
                      strncpy(tnp::gSDevInfo + 0x38,(char *)(iVar5 + 0x18),8);
                      strncpy(tnp::gSDevInfo + 0x40,(char *)(iVar5 + 0x20),8);
                      tnp::gSDevInfo._104_4_ =
                           tnp::CreateWorkerThread(PPPP_Thread_SuperDevice,(void *)0x0);
                      iVar5 = tnp::gLastUpdateServerConfigTime;
                      goto joined_r0x0002f900;
                    }
                    tnp::PPPP_DebugTrace
                              (2,"super device will work after %d seconds\n",
                               tnp::gSDevInfo._100_4_ - uVar6);
                    iVar5 = tnp::gLastUpdateServerConfigTime;
                  }
                }
              }
              else {
                tnp::PPPP_DebugTrace(2,"gSDevInfo.bAnotherDeviceInLan is true\n");
                iVar5 = tnp::gLastUpdateServerConfigTime;
              }
            }
            goto joined_r0x0002f900;
          }
          if (local_a26 == 0x82) {
            PPPP__IncomingConnectionCallback();
            iVar5 = PPPP__SessionHandler_Is_Full();
            if (iVar5 == 1) {
              tnp::PPPP_DebugTrace(0x10,"session is full, drop msg MSG_RLY_TO\n");
              iVar5 = tnp::gLastUpdateServerConfigTime;
              goto joined_r0x0002f900;
            }
            iVar5 = tnp::gTNPSession + iVar23;
            if (*(char *)(iVar5 + 0x1b0) == ' ') {
              tnp::PPPP_DebugTrace
                        (0x10,"gTNPSession[SessionHandle].State is ready, drop msg MSG_RLY_TO\n",
                         0x20,iVar5,pcVar7,uVar20);
              iVar5 = tnp::gLastUpdateServerConfigTime;
              goto joined_r0x0002f900;
            }
            if (*(char *)(iVar5 + 0x4f) == '\x01') {
              tnp::PPPP__ExitSuperDevice('\x02');
            }
            if ((uStack_a24 == 0x24) && (iVar5 = PPPP__EnableSecureMode(), iVar5 != 0)) {
              iVar5 = tnp::PPPP_Proto_Read_RlyTo_EX
                                ((st_PPPP_RlyTo_EX *)&local_528,(sockaddr_in *)local_92c,
                                 (uint *)local_9ec,(char *)(tnp::gTNPSession + iVar23 + 0x2c));
              if (iVar5 < 0) {
                tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_RlyTo_EX failed,ErrorCode:%d\n");
                memset(acStack_9ac,0,0x80);
                __s = (char *)(tnp::gTNPSession + iVar23 + 0x2c);
                sVar13 = strlen(__s);
                pcVar7 = inet_ntoa(local_9f8);
                pcVar8 = "Read RlyTo_EX:Invalid Sign(%.3s-%d),From:%s";
                goto LAB_000310ec;
              }
            }
            else {
              iVar18 = PPPP__EnableInsecureMode();
              iVar5 = tnp::gLastUpdateServerConfigTime;
              if (iVar18 == 0) goto joined_r0x0002f900;
              tnp::PPPP_Proto_Read_RlyTo
                        ((st_PPPP_RlyTo *)&local_528,(sockaddr_in *)local_92c,(uint *)local_9ec);
            }
            pcVar7 = inet_ntoa((in_addr)local_928);
            iVar18 = 3;
            cVar16 = -1;
            tnp::PPPP_DebugTrace
                      (0x10,"MSG_RLY_TO ToAddr= %s:%d , MagicWord=0x%08X\n",pcVar7,
                       ((ushort)local_92c._2_2_ & 0xff) << 8 | (uint)((ushort)local_92c._2_2_ >> 8),
                       local_9ec);
            tnp::PPPP__Update_SessionState((int)param_1,'\x1e');
            iVar5 = tnp::gTNPSession;
            *(undefined1 (*) [4])(tnp::gTNPSession + iVar23 + 0x18c) = local_9ec;
            do {
              iVar5 = iVar5 + iVar23;
              iVar5 = tnp::PPPP_Proto_Send_RlyPkt
                                (*(int *)(iVar5 + 0x54),(sockaddr_in *)local_92c,
                                 (char *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x28),
                                 (char *)(iVar5 + 0x20),*(char *)(iVar5 + 0x4f),(uint)local_9ec);
              if (-1 < iVar5) {
                cVar16 = '\0';
              }
              tnp::mSecSleep(10);
              iVar18 = iVar18 + -1;
              iVar5 = tnp::gTNPSession;
            } while (iVar18 != 0);
            tnp::PPPP__Update_SessionState((int)param_1,'\x1f');
            iVar5 = tnp::gTNPSession + iVar23;
            tnp::PPPP_Proto_Send_RlyToAck
                      (*(int *)(iVar5 + 0x50),asStack_9fc,(char *)(iVar5 + 0x18),
                       *(uint *)(iVar5 + 0x28),(char *)(iVar5 + 0x20),*(char *)(iVar5 + 0x4f),
                       (uint)local_9ec,cVar16);
            memset(acStack_9ac,0,0x80);
            pcVar8 = inet_ntoa((in_addr)local_928);
            pcVar7 = "Recv RLY_TO:%s,Session:%d";
          }
          else {
            if (local_a26 == 0x84) {
              if (*(char *)(tnp::gTNPSession + iVar23 + 0x1b0) == '\x1f') {
                local_9ec = (undefined1  [4])0x0;
                local_9e8 = 0;
                local_92c = (undefined1  [4])0x0;
                local_928 = 0;
                if ((uStack_a24 == 0x28) && (iVar5 = PPPP__EnableSecureMode(), iVar5 != 0)) {
                  iVar5 = tnp::PPPP_Proto_Read_RlyRdy_EX
                                    ((st_PPPP_RlyRdy_EX *)&local_528,local_9ec,&local_a04,local_92c,
                                     (char *)(tnp::gTNPSession + iVar23 + 0x2c));
                  uVar6 = local_a04;
                  if (iVar5 < 0) {
                    tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Read_RlyRdy_EX failed,ErrorCode:%d\n");
                    memset(acStack_9ac,0,0x80);
                    __s = (char *)(tnp::gTNPSession + iVar23 + 0x2c);
                    sVar13 = strlen(__s);
                    pcVar7 = inet_ntoa(local_9f8);
                    pcVar8 = "Read RlyRdy_EX:Invalid Sign(%.3s-%d),From:%s";
                    goto LAB_000310ec;
                  }
                }
                else {
                  iVar18 = PPPP__EnableInsecureMode();
                  iVar5 = tnp::gLastUpdateServerConfigTime;
                  if (iVar18 == 0) goto joined_r0x0002f900;
                  tnp::PPPP_Proto_Read_RlyRdy
                            ((st_PPPP_RlyRdy *)&local_528,local_9ec,&local_a04,local_92c);
                  iVar11 = tnp::gTNPSession + iVar23;
                  iVar18 = strncmp(local_9ec,(char *)(iVar11 + 0x18),7);
                  iVar5 = tnp::gLastUpdateServerConfigTime;
                  if (((iVar18 != 0) ||
                      (iVar18 = strncmp(local_92c,(char *)(iVar11 + 0x20),7),
                      iVar5 = tnp::gLastUpdateServerConfigTime, iVar18 != 0)) ||
                     (uVar6 = *(uint *)(iVar11 + 0x28), *(uint *)(iVar11 + 0x28) != local_a04))
                  goto joined_r0x0002f900;
                }
                local_a44 = (sockaddr *)local_9ec;
                tnp::PPPP_DebugTrace
                          (0x10,"MSG_RLY_RDY, %s-%d-%s\n",local_a44,uVar6,local_92c,uVar20);
                memcpy((void *)(tnp::gTNPSession + iVar23 + 0x5c),asStack_9fc,0x10);
                tnp::PPPP__Set_SessionReady((int)param_1,'\x01');
              }
              memset(acStack_9ac,0,0x80);
              sprintf(acStack_9ac,"Recv RLY_RDY,Session:%d",param_1);
              tnp::PPPP__Send_Report((int)param_1,'\x01',acStack_9ac);
              iVar5 = tnp::gLastUpdateServerConfigTime;
              goto joined_r0x0002f900;
            }
            if (local_a26 != 0x41) goto joined_r0x0002f900;
            PPPP__IncomingConnectionCallback();
            iVar5 = PPPP__SessionHandler_Is_Full();
            if (iVar5 == 1) {
              tnp::PPPP_DebugTrace(0x10,"session is full, drop msg MSG_PUNCH_PKT\n");
              iVar5 = tnp::gLastUpdateServerConfigTime;
              goto joined_r0x0002f900;
            }
            if (*(char *)(tnp::gTNPSession + iVar23 + 0x4f) == '\x01') {
              tnp::PPPP__ExitSuperDevice('\x02');
            }
            local_9ec = (undefined1  [4])0x0;
            local_9e8 = 0;
            local_92c = (undefined1  [4])0x0;
            local_928 = 0;
            if ((uStack_a24 == 0x2c) && (iVar5 = PPPP__EnableSecureMode(), iVar5 != 0)) {
              uStack_a16 = 0;
              local_a04 = 0;
              iVar18 = tnp::PPPP_Proto_Read_PunchPkt_EX
                                 ((st_PPPP_PunchPkt_EX *)&local_528,local_9ec,&local_a0c,local_92c,
                                  &local_a18,&local_a04,(char *)(tnp::gTNPSession + iVar23 + 0x2c));
              iVar5 = tnp::gTNPSession;
              if (iVar18 < 0) {
                tnp::PPPP_DebugTrace
                          (0x10,"PPPP_Proto_Read_PunchPkt_EX failed,ErrorCode:%d\n",iVar18);
                memset(acStack_9ac,0,0x80);
                uVar6 = local_a04;
                if (iVar18 == -1) {
                  pcVar7 = inet_ntoa(local_9f8);
                  sprintf(acStack_9ac,"Read PunchPkt_EX:Invalid Time(%d-%d),From:%s",uVar6,0,pcVar7)
                  ;
                  goto LAB_000310f8;
                }
                __s = (char *)(tnp::gTNPSession + iVar23 + 0x2c);
                sVar13 = strlen(__s);
                pcVar7 = inet_ntoa(local_9f8);
                pcVar8 = "Read PunchPkt_EX:Invalid Sign(%.3s-%d),From:%s";
LAB_000310ec:
                sprintf(acStack_9ac,pcVar8,__s,sVar13,pcVar7);
                goto LAB_000310f8;
              }
              memcpy((void *)(tnp::gTNPSession + iVar23 + 0x4c),&local_a18,3);
              iVar18 = 3;
              do {
                iVar5 = iVar5 + iVar23;
                tnp::PPPP_Proto_Send_P2PRdy_EX
                          (*(int *)(iVar5 + 0x54),asStack_9fc,(char *)(iVar5 + 0x18),
                           *(uint *)(iVar5 + 0x28),(char *)(iVar5 + 0x20),0,(char *)(iVar5 + 0x2c));
                tnp::mSecSleep(10);
                iVar18 = iVar18 + -1;
                iVar5 = tnp::gTNPSession;
              } while (iVar18 != 0);
            }
            else {
              iVar18 = PPPP__EnableInsecureMode();
              iVar5 = tnp::gLastUpdateServerConfigTime;
              if (iVar18 == 0) goto joined_r0x0002f900;
              tnp::PPPP_Proto_Read_PunchPkt
                        ((st_PPPP_PunchPkt *)&local_528,local_9ec,&local_a0c,local_92c);
              iVar11 = tnp::gTNPSession + iVar23;
              pcVar7 = (char *)(iVar11 + 0x18);
              iVar18 = strncmp(local_9ec,pcVar7,7);
              iVar5 = tnp::gLastUpdateServerConfigTime;
              if (iVar18 != 0) goto joined_r0x0002f900;
              pcVar8 = (char *)(iVar11 + 0x20);
              iVar18 = strncmp(local_92c,pcVar8,7);
              iVar5 = tnp::gLastUpdateServerConfigTime;
              if ((iVar18 != 0) || (uVar6 = *(uint *)(iVar11 + 0x28), uVar6 != local_a0c))
              goto joined_r0x0002f900;
              iVar5 = 3;
              while( true ) {
                tnp::PPPP_Proto_Send_P2PRdy(*(int *)(iVar11 + 0x54),asStack_9fc,pcVar7,uVar6,pcVar8)
                ;
                tnp::mSecSleep(10);
                iVar5 = iVar5 + -1;
                if (iVar5 == 0) break;
                iVar11 = tnp::gTNPSession + iVar23;
                pcVar7 = (char *)(iVar11 + 0x18);
                uVar6 = *(uint *)(iVar11 + 0x28);
                pcVar8 = (char *)(iVar11 + 0x20);
              }
            }
            local_a44 = (sockaddr *)local_9ec;
            tnp::PPPP_DebugTrace
                      (0x10,"MSG_PUNCH_PKT, ID= %s-%06d-%s\n",local_a44,local_a0c,local_92c);
            memcpy((void *)(tnp::gTNPSession + iVar23 + 0x5c),asStack_9fc,0x10);
            tnp::PPPP__Set_SessionReady((int)param_1,'\0');
            memset(acStack_9ac,0,0x80);
            pcVar8 = inet_ntoa(local_9f8);
            pcVar7 = "Recv PUNCH_PKT From:%s,Session:%d";
          }
        }
      }
      sprintf(acStack_9ac,pcVar7,pcVar8,param_1);
      tnp::PPPP__Send_Report((int)param_1,'\x01',acStack_9ac);
      iVar5 = tnp::gLastUpdateServerConfigTime;
      goto joined_r0x0002f900;
    }
    iVar5 = tnp::gLastUpdateServerConfigTime;
    if (uVar6 != 0xffffffff) {
      tnp::PPPP_DebugTrace(0x10,"PPPP_Proto_Recv_ALL ret = %d\n",uVar6);
      iVar5 = tnp::gLastUpdateServerConfigTime;
    }
  } while( true );
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// PPPP_Thread_Recv_Proto_Device_TCP(void*)

void PPPP_Thread_Recv_Proto_Device_TCP(void *param_1)

{
  int iVar1;
  uint uVar2;
  st_PPPP_NoticeTo_EX *psVar3;
  st_PPPP_NoticeTo_EX *psVar4;
  st_PPPP_NoticeTo_EX sVar5;
  st_PPPP_NoticeTo_EX sVar6;
  int iVar7;
  size_t sVar8;
  void *__dest;
  int iVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  st_PPPP_NoticeTo_EX *psVar14;
  ushort uVar15;
  uint uVar16;
  undefined1 *puVar17;
  st_PPPP_NoticeTo_EX sVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ushort *puVar24;
  byte local_c99;
  ushort uStack_c98;
  ushort uStack_c96;
  ushort uStack_c94;
  ushort uStack_c92;
  uint local_c90;
  uint local_c8c;
  undefined4 uStack_c88;
  undefined4 uStack_c84;
  uint local_c7c;
  uint local_c78;
  uint local_c74;
  uint local_c70;
  undefined1 local_c6c [64];
  char acStack_c2c [128];
  uint local_bac;
  uint local_ba8;
  uint local_ba4;
  uint local_ba0;
  st_PPPP_NoticeTo_EX asStack_7a8 [32];
  char acStack_788 [1892];
  
  memset(acStack_c2c,0,0x80);
  tnp::PPPP_DebugTrace(0x80,"PPPP_Thread_Recv_Proto_TCP Running.\n");
  iVar21 = (int)param_1 * 0x3f18;
  iVar1 = (int)param_1 * 0x18;
  uVar15 = 0;
  uVar20 = 0;
LAB_000314f4:
  do {
    while( true ) {
      while( true ) {
        if ((tnp::gTNPSession == 0) || (*(char *)(tnp::gTNPSession + iVar21 + 0x1c1) != '\0'))
        goto LAB_00031fb4;
        iVar7 = *(int *)(tnp::gTNPSession + iVar21 + 0x50);
        if (-1 < iVar7) break;
        tnp::mSecSleep(10);
      }
      uStack_c98 = (ushort)((0x780 - uVar20) * 0x10000 >> 0x10);
      iVar7 = tnp::PPPP_Proto_Recv_TCP
                        (iVar7,(char *)(asStack_7a8 + uVar20),uStack_c98,&uStack_c98,0x28);
      if (iVar7 != 0) break;
      uVar12 = uVar20 + uStack_c98;
      uVar19 = 0;
      while( true ) {
        uVar20 = uVar12 & 0xffff;
        iVar7 = tnp::PPPP__Check_SessionDataReady
                          ((char *)(asStack_7a8 + uVar19),(ushort)uVar12,&uStack_c96,&uStack_c94,
                           &local_c99);
        if (iVar7 != 1) break;
        if ((tnp::gTNPSession == 0) ||
           (uVar16 = (uint)*(byte *)(tnp::gTNPSession + iVar21 + 0x1c1), uVar16 != 0))
        goto LAB_00031fb4;
        uVar2 = (uint)uStack_c96 + (uint)uStack_c94 & 0xffff;
        uVar12 = uVar20 - uVar2;
        iVar7 = uVar19 + uStack_c96;
        uVar19 = uVar19 + uVar2 & 0xffff;
        tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
        psVar14 = asStack_7a8 + iVar7;
        if (local_c99 == 0x3a) {
          local_c6c._0_4_ = uVar16;
          local_c6c._4_4_ = uVar16;
          local_bac = uVar16;
          local_ba8 = uVar16;
          tnp::PPPP_Proto_Read_NoticePing
                    ((st_PPPP_NoticePing *)psVar14,local_c6c,&local_c74,(char *)&local_bac);
          tnp::PPPP_DebugTrace(0x10,"MSG_NOTICE_PING, %s-%d-%s\n",local_c6c,local_c74,&local_bac);
          iVar9 = tnp::gTNPSession + iVar21;
          iVar7 = strncmp(local_c6c,(char *)(iVar9 + 0x18),7);
          if ((((iVar7 == 0) &&
               (iVar7 = strncmp((char *)&local_bac,(char *)(iVar9 + 0x20),7), iVar7 == 0)) &&
              (*(uint *)(iVar9 + 0x28) == local_c74)) &&
             ((iVar7 = tnp::PPPP_Proto_Send_NoticePingAck
                                 (*(int *)(iVar9 + 0x50),'\x01',
                                  (sockaddr_in *)(iVar9 + *(int *)(iVar9 + 0x16c) * 0x10 + 0xdc),
                                  (st_PPPP_NoticePing *)psVar14), iVar7 < 0 &&
              (*(char *)(tnp::gTNPSession + iVar21 + 0x4f) == '\x01')))) {
            tnp::PPPP_DebugTrace(0x80,"PPPP_Proto_Send_NoticePingAck error...\n");
            iVar7 = tnp::gTNPSession + iVar21;
            *(undefined1 *)(iVar7 + 0x1c1) = 1;
            if (*(char *)(iVar7 + 0x1ba) == '\0') {
              *(undefined1 *)(iVar7 + 0x1ba) = 6;
            }
          }
        }
        else if (local_c99 < 0x3b) {
          if (local_c99 == 0x11) {
            sVar18 = asStack_7a8[iVar7];
            sVar5 = asStack_7a8[iVar7 + 2];
            sVar6 = asStack_7a8[iVar7 + 1];
            pcVar10 = inet_ntoa((in_addr)*(in_addr_t *)(asStack_7a8 + iVar7 + 8));
            tnp::PPPP_DebugTrace
                      (0x40000,
                       "MSG_DEV_LGN_PROXY_ACK, Result=%d, LgnInterval=%d, HasToken=%d Address=%s:%d\n"
                       ,(uint)(byte)sVar18,(uint)(byte)sVar6,(uint)(byte)sVar5,pcVar10,
                       (*(ushort *)(asStack_7a8 + iVar7 + 6) & 0xff) << 8 |
                       (uint)(*(ushort *)(asStack_7a8 + iVar7 + 6) >> 8));
            tnp::gSendLoginByTCP = 0;
            iVar9 = time((time_t *)0x0);
            sVar18 = asStack_7a8[iVar7];
            if (sVar18 == (st_PPPP_NoticeTo_EX)0x0) {
              iVar13 = tnp::gTNPSession + iVar21;
              *(undefined1 *)(iVar13 + 0x1bd) = 0;
              sVar18 = asStack_7a8[iVar7 + 1];
              if (0x28 < (byte)sVar18 - 10) {
                sVar18 = (st_PPPP_NoticeTo_EX)0x19;
              }
              *(st_PPPP_NoticeTo_EX *)(iVar13 + 0x1be) = sVar18;
              if (asStack_7a8[iVar7 + 3] != (st_PPPP_NoticeTo_EX)0x0) {
                tnp::gServerConfig = (char)asStack_7a8[iVar7 + 3];
              }
              tnp::gLastLoginOKTime = iVar9;
              if (asStack_7a8[iVar7 + 2] == (st_PPPP_NoticeTo_EX)0x1) {
                puVar17 = tnp::gP2PServerAddr;
                iVar9 = 0;
                do {
                  iVar13 = tnp::AddrCompare((sockaddr_in *)(asStack_7a8 + iVar7 + 4),
                                            (sockaddr_in *)puVar17);
                  if (iVar13 == 0) {
                    gProxyModeInfo[iVar9 + 0x114] = 1;
                    break;
                  }
                  iVar9 = iVar9 + 1;
                  puVar17 = puVar17 + 0x10;
                } while (iVar9 != 3);
              }
            }
            else {
LAB_00031dc4:
              iVar7 = tnp::gTNPSession + iVar21;
              if (*(char *)(iVar7 + 0x1bd) == '\0') {
                uVar22 = FUN_0004800c(iVar9 - tnp::gLastLoginOKTime);
                uVar23 = FUN_00048030(*(undefined1 *)(iVar7 + 0x1be));
                uVar23 = FUN_0004810c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0x33333333,
                                      0x3ff33333);
                iVar9 = FUN_00048680((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                                     (int)((ulonglong)uVar23 >> 0x20));
                if (iVar9 == 0) goto LAB_000315fc;
              }
              *(st_PPPP_NoticeTo_EX *)(iVar7 + 0x1bd) = sVar18;
            }
          }
          else if (local_c99 == 0x15) {
            tnp::PPPP_DebugTrace
                      (0x40000,"MSG_DEV_LGN_SIGN_ACK, Result = %d, LgnInterval = %d \n",
                       (uint)(byte)asStack_7a8[iVar7],(uint)(byte)asStack_7a8[iVar7 + 1]);
            tnp::gLoginFlag = 0x31;
            tnp::gSendLoginByTCP = 0;
            iVar9 = time((time_t *)0x0);
            sVar18 = asStack_7a8[iVar7];
            if (sVar18 != (st_PPPP_NoticeTo_EX)0x0) goto LAB_00031dc4;
            iVar13 = tnp::gTNPSession + iVar21;
            *(undefined1 *)(iVar13 + 0x1bd) = 0;
            sVar18 = asStack_7a8[iVar7 + 1];
            if (0x28 < (byte)sVar18 - 10) {
              sVar18 = (st_PPPP_NoticeTo_EX)0x19;
            }
            *(st_PPPP_NoticeTo_EX *)(iVar13 + 0x1be) = sVar18;
            tnp::gLastLoginOKTime = iVar9;
            if (asStack_7a8[iVar7 + 2] != (st_PPPP_NoticeTo_EX)0x0) {
              tnp::gServerConfig = (char)asStack_7a8[iVar7 + 2];
            }
          }
          else if (local_c99 == 6) {
            tnp::PPPP_DebugTrace
                      (0x10,"MSG_SESSION_RESPONSE, ResType:%d, Role:%d, Result:%d\n",
                       (uint)(byte)asStack_7a8[iVar7],(uint)(byte)asStack_7a8[iVar7 + 1],
                       (uint)(byte)asStack_7a8[iVar7 + 2]);
            iVar7 = tnp::gTNPSession + iVar21;
            *(undefined1 *)(iVar7 + 0x1c1) = 1;
            *(undefined1 *)(iVar7 + 0x1b2) = 0xf5;
            *(undefined1 *)(iVar7 + 0x1b3) = 0xf5;
          }
        }
        else if (local_c99 == 0x87) {
          iVar9 = tnp::gTNPSession + iVar21;
          if ((*(byte *)(iVar9 + 0x1b0) < 0x17) && (*(int *)(iVar9 + 0x170) == 0)) {
            if ((*(byte *)(iVar9 + 0x1b0) != 0x16) || (*(char *)(iVar9 + 0x1b3) == -2)) {
              *(st_PPPP_NoticeTo_EX *)(iVar9 + 0x1b3) = asStack_7a8[iVar7 + 1];
            }
            if ((asStack_7a8[iVar7 + 1] == (st_PPPP_NoticeTo_EX)0x0) &&
               (uVar20 = (uint)(byte)asStack_7a8[iVar7], uVar20 != 0)) {
              iVar9 = 0;
              psVar14 = asStack_7a8 + iVar7 + 4;
              do {
                pcVar10 = inet_ntoa((in_addr)*(in_addr_t *)(psVar14 + 4));
                psVar4 = psVar14 + 2;
                psVar3 = psVar14 + 0x10;
                iVar9 = iVar9 + 1;
                psVar14 = psVar14 + 0x14;
                tnp::PPPP_DebugTrace
                          (0x10,"RLYAddr(%d) = %s:%d,Mode:%d\n",iVar9,pcVar10,
                           (*(ushort *)psVar4 & 0xff) << 8 | (uint)(*(ushort *)psVar4 >> 8),
                           (uint)(byte)*psVar3);
              } while (iVar9 < (int)uVar20);
              __dest = malloc(uVar20 * 0x14);
              if (__dest == (void *)0x0) {
                iVar7 = tnp::gTNPSession + iVar21;
              }
              else {
                memcpy(__dest,asStack_7a8 + iVar7 + 4,uVar20 * 0x14);
                iVar7 = tnp::gTNPSession + iVar21;
                *(void **)(iVar7 + 0x170) = __dest;
                *(uint *)(iVar7 + 0x174) = uVar20;
              }
              *(undefined4 *)(iVar7 + 0x178) = 0;
            }
            tnp::PPPP__Update_SessionState((int)param_1,'\x16');
          }
        }
        else if (local_c99 < 0x88) {
          if (local_c99 == 0x3f) {
            memset(local_c6c,0,0x40);
            local_c7c = uVar16;
            local_c78 = uVar16;
            local_c74 = uVar16;
            local_c70 = uVar16;
            memset(&local_bac,0,0x404);
            puVar24 = &uStack_c92;
            pcVar10 = acStack_788 + iVar7;
            tnp::PPPP_Proto_Read_NoticeTo_EX
                      (psVar14,(char *)&local_c7c,&local_c90,(char *)&local_c74,
                       (ulonglong *)&uStack_c88,puVar24,(char *)&local_bac,&local_c8c);
            uVar20 = atol(pcVar10);
            uVar22 = tnp::getCurTime();
            uVar16 = FUN_000486fc((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),1000,0);
            tnp::PPPP_DebugTrace
                      (0x10,"MSG_NOTICE_TO_EX, %s-%d-%s MsgIndex:%llu, ContentLen:%u\n",&local_c7c,
                       local_c90,&local_c74,puVar24,uStack_c88,uStack_c84,(uint)uStack_c92);
            if (((uVar20 < uVar16) && (local_c8c < uVar16 - uVar20)) ||
               ((uVar16 < uVar20 && (local_c8c < uVar20 - uVar16)))) {
              tnp::PPPP_DebugTrace
                        (0x10,
                         "MSG_NOTICE_TO_EX, %s-%d-%s MsgIndex:%llu, nonce:%s, currentTime:%u, ValidNonceTime:%u, nonce time error\n"
                         ,&local_c7c,local_c90,&local_c74,puVar24,uStack_c88,uStack_c84,pcVar10,
                         uVar16,local_c8c);
              PPPP__Send_NoticeToAckError((int)param_1,CONCAT44(uStack_c84,uStack_c88),-2);
            }
            else {
              sVar8 = strlen(tnp::gHardKey);
              tnp::PPPP_MakeSha1(tnp::gHardKey,sVar8,pcVar10,uStack_c92 + 0x40,local_c6c);
              iVar7 = memcmp(local_c6c,psVar14,8);
              if (iVar7 == 0) {
                iVar9 = tnp::gTNPSession + iVar21;
                iVar7 = strncmp((char *)&local_c7c,(char *)(iVar9 + 0x18),7);
                if (((iVar7 == 0) &&
                    (iVar7 = strncmp((char *)&local_c74,(char *)(iVar9 + 0x20),7), iVar7 == 0)) &&
                   (*(uint *)(iVar9 + 0x28) == local_c90)) {
                  PPPP__NoticeToCallback
                            (CONCAT44(uStack_c84,uStack_c88),(char *)&local_bac,(uint)uStack_c92);
                }
                else {
                  PPPP__Send_NoticeToAckError((int)param_1,CONCAT44(uStack_c84,uStack_c88),-3);
                }
              }
              else {
                tnp::PPPP_DebugTrace
                          (0x10,
                           "MSG_NOTICE_TO_EX signature error, %s-%d-%s MsgIndex:%llu, ContentLen:%u, tmpConnectKey:%s, outbuf:%s, Signature:%s\n"
                           ,&local_c7c,local_c90,&local_c74,puVar24,uStack_c88,uStack_c84,
                           (uint)uStack_c92,tnp::gHardKey,local_c6c,psVar14);
                PPPP__Send_NoticeToAckError((int)param_1,CONCAT44(uStack_c84,uStack_c88),-1);
              }
            }
          }
        }
        else if (local_c99 == 0x8a) {
          local_bac = uVar16;
          local_ba8 = uVar16;
          local_ba4 = uVar16;
          local_ba0 = uVar16;
          tnp::PPPP_Proto_Read_RlyTCPTo
                    ((st_PPPP_RlyTCPTo *)psVar14,(sockaddr_in *)local_c6c,(char *)&local_bac);
          iVar7 = PPPP__SessionHandler_Is_Full();
          if (iVar7 == 1) {
            tnp::PPPP_DebugTrace(0x10,"session is full, drop msg MSG_RLY_TCP_TO\n");
          }
          else {
            if (*(char *)(tnp::gTNPSession + iVar21 + 0x4f) == '\x01') {
              tnp::PPPP__ExitSuperDevice('\x02');
            }
            tnp::PPPP__Update_SessionState((int)param_1,'\'');
            pcVar10 = inet_ntoa((in_addr)local_c6c._4_4_);
            tnp::PPPP_DebugTrace
                      (0x10,"Recv MSG_RLY_TCP_TO ToAddr = %s:%d , Ticket = %.*s\n",pcVar10,
                       ((ushort)local_c6c._2_2_ & 0xff) << 8 | (uint)((ushort)local_c6c._2_2_ >> 8),
                       0x10,&local_bac);
            iVar9 = tnp::gTNPSession + iVar21;
            pcVar10 = (char *)(iVar9 + 0x17c);
            iVar7 = memcmp(pcVar10,&local_bac,0x10);
            if (iVar7 != 0) {
              tnp::PPPP__Set_SessionState((int)param_1,'\'');
              memcpy((void *)(tnp::gTNPSession + iVar21 + 0xcc),(sockaddr *)local_c6c,0x10);
              memcpy((void *)(tnp::gTNPSession + iVar21 + 0x17c),&local_bac,0x10);
              tnp::PPPP__Halt_TCP_For_Session((int)param_1);
              tnp::PPPP__Start_TCP_For_Session((int)param_1,(sockaddr *)local_c6c,0x1e);
              iVar9 = tnp::gTNPSession + iVar21;
              pcVar10 = (char *)(iVar9 + 0x17c);
            }
            if (*(int *)(iVar9 + 0x54) < 0) {
              cVar11 = '\0';
            }
            else {
              iVar7 = tnp::PPPP_Proto_Send_RlyTCPPkt
                                (*(int *)(iVar9 + 0x54),(sockaddr_in *)(iVar9 + 0xcc),pcVar10,
                                 *(char *)(iVar9 + 0x4f));
              if (iVar7 < 0) {
                tnp::PPPP__Halt_TCP_For_Session((int)param_1);
                cVar11 = -1;
                iVar9 = tnp::gTNPSession + iVar21;
                pcVar10 = (char *)(iVar9 + 0x17c);
              }
              else {
                tnp::PPPP__Update_SessionState((int)param_1,'(');
                cVar11 = '\x01';
                iVar9 = tnp::gTNPSession + iVar21;
                pcVar10 = (char *)(iVar9 + 0x17c);
              }
            }
            iVar7 = tnp::PPPP_Proto_Send_RlyTCPToAck
                              (*(int *)(iVar9 + 0x50),'\x01',
                               (sockaddr_in *)(iVar9 + *(int *)(iVar9 + 0x16c) * 0x10 + 0xdc),
                               (char *)(iVar9 + 0x18),*(uint *)(iVar9 + 0x28),(char *)(iVar9 + 0x20)
                               ,pcVar10,*(char *)(iVar9 + 0x4f),cVar11);
            if (iVar7 < 0) {
              tnp::PPPP_DebugTrace(0x80,"PPPP_Proto_Send_RlyTCPToAck error...\n");
              iVar7 = tnp::gTNPSession + iVar21;
              *(undefined1 *)(iVar7 + 0x1c1) = 1;
              if (*(char *)(iVar7 + 0x1ba) == '\0') {
                *(undefined1 *)(iVar7 + 0x1ba) = 6;
              }
            }
            memset(acStack_c2c,0,0x80);
            pcVar10 = inet_ntoa((in_addr)local_c6c._4_4_);
            sprintf(acStack_c2c,"Recv RLY_TO:%s,Session:%d,",pcVar10,param_1);
            tnp::PPPP__Send_Report((int)param_1,'\x01',acStack_c2c);
          }
        }
        else if (local_c99 == 0xa1) {
          sVar18 = asStack_7a8[iVar7];
          tnp::PPPP_DebugTrace(0x10,"MSG_REPORT_REQ, ReportLevel:%d\n",(uint)(byte)sVar18);
          *(st_PPPP_NoticeTo_EX *)(tnp::gTNPSession + iVar21 + 0x1bf) = sVar18;
          tnp::gCurrentReportLevel = (uint)(byte)sVar18;
        }
LAB_000315fc:
        tnp::MUTEX_RELEASE((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
      }
      if (uVar20 == 0 || uVar19 == 0) {
        uVar15 = 0;
      }
      else {
        memmove(asStack_7a8,asStack_7a8 + uVar19,uVar20);
        uVar15 = 0;
      }
    }
    if (iVar7 == -1) break;
    if (iVar7 == -2) {
      tnp::PPPP_DebugTrace(0x80,"Socket Error...\n");
      tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
      iVar7 = tnp::gTNPSessionLock;
      iVar21 = tnp::gTNPSession + iVar21;
      if (*(char *)(iVar21 + 0x1ba) == '\0') {
        *(undefined1 *)(iVar21 + 0x1ba) = 6;
      }
      *(undefined1 *)(iVar21 + 0x1c1) = 1;
      *(undefined1 *)(iVar21 + 0x1b3) = 0xe1;
      tnp::MUTEX_RELEASE((pthread_mutex_t *)(iVar7 + iVar1));
      goto LAB_00031fb4;
    }
  } while( true );
  uVar15 = uVar15 + 1;
  if (3000 < uVar15) {
    tnp::PPPP_DebugTrace(0x80,"Timeout, maybe peer socket error...\n");
    tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar1));
    iVar7 = tnp::gTNPSessionLock;
    iVar21 = tnp::gTNPSession + iVar21;
    if (*(char *)(iVar21 + 0x1ba) == '\0') {
      *(undefined1 *)(iVar21 + 0x1ba) = 1;
    }
    *(undefined1 *)(iVar21 + 0x1c1) = 1;
    *(undefined1 *)(iVar21 + 0x1b3) = 0xe0;
    tnp::MUTEX_RELEASE((pthread_mutex_t *)(iVar7 + iVar1));
LAB_00031fb4:
    tnp::PPPP_DebugTrace(0x80,"PPPP_Thread_Recv_Proto_TCP Exit.\n");
    tnp::PPPP_DebugTrace(0x4000,"PPPP_Thread_Recv_Proto_TCP Exit.\n");
                    // WARNING: Subroutine does not return
    pthread_exit((void *)0x0);
  }
  goto LAB_000314f4;
}



// PPPP__Start_Proto_Lan(int)

undefined4 PPPP__Start_Proto_Lan(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  tnp::PPPP_DebugTrace(1,"PPPP__Start_Proto_Lan\n");
  iVar2 = param_1 * 0x3f18;
  iVar4 = tnp::gTNPSession + iVar2;
  *(undefined4 *)(iVar4 + 0x58) = 0xffffffff;
  uVar1 = tnp::CreateWorkerThread(PPPP_Thread_Recv_Proto_LanSearch,(void *)param_1);
  iVar3 = tnp::gTNPSession + iVar2;
  *(undefined4 *)(iVar4 + 0x1c4) = uVar1;
  if (*(int *)(iVar3 + 0x1c4) == 0) {
    tnp::PPPP_DebugTrace
              (1," Failed!! CreateWorkerThread on PPPP_Thread_Recv_Proto_LanSearch error\n");
    return 0xfffff432;
  }
  if (*(char *)(iVar3 + 0x1a5) == '\x01') {
    uVar1 = tnp::CreateSocket('\0');
    iVar4 = tnp::gTNPSession + iVar2;
    *(undefined4 *)(iVar3 + 0x58) = uVar1;
    if (*(int *)(iVar4 + 0x58) < 0) {
      tnp::PPPP_DebugTrace(2,"Fail to create LanSocket\n");
      iVar2 = tnp::gTNPSession + iVar2;
      *(undefined1 *)(iVar2 + 0x1c0) = 1;
      tnp::WaitThreadExit((ulong *)(iVar2 + 0x1c4));
      return 0xfffff430;
    }
    tnp::PPPP_DebugTrace(1,"Create LanSocket %d\n");
    iVar4 = tnp::gTNPSession + iVar2;
    uVar1 = tnp::CreateWorkerThread(PPPP_Thread_Recv_Proto_LanMsg,(void *)param_1);
    iVar3 = tnp::gTNPSession + iVar2;
    *(undefined4 *)(iVar4 + 0x1c8) = uVar1;
    if (*(int *)(iVar3 + 0x1c8) == 0) {
      tnp::PPPP_DebugTrace
                (1," Failed!! CreateWorkerThread on PPPP_Thread_Recv_Proto_LanMsg error\n");
      iVar3 = tnp::gTNPSession + iVar2;
      *(undefined1 *)(iVar3 + 0x1c0) = 1;
      tnp::WaitThreadExit((ulong *)(iVar3 + 0x1c4));
      tnp::CloseSocket(*(int *)(tnp::gTNPSession + iVar2 + 0x58));
      *(undefined4 *)(tnp::gTNPSession + iVar2 + 0x58) = 0xffffffff;
      return 0xfffff432;
    }
  }
  return 0;
}



// PPPP_DoListen_UDP(int, unsigned int, unsigned short, char)

undefined4 PPPP_DoListen_UDP(int param_1,uint param_2,ushort param_3,char param_4)

{
  ushort uVar1;
  time_t tVar2;
  time_t tVar3;
  int iVar4;
  undefined4 uVar5;
  hostent *phVar6;
  int *piVar7;
  int extraout_r1;
  uchar uVar8;
  int iVar9;
  sockaddr_in *psVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  int local_3c;
  ushort local_2a [3];
  
  tnp::PPPP_DebugTrace(1,"PPPP_Listen_Do_With_Key() Enter.\n");
  tnp::PPPP_DebugTrace(1,"2. Check if need to resolve P2P Server Hostname\n");
  tVar2 = time((time_t *)0x0);
  tVar3 = time((time_t *)0x0);
  iVar4 = tVar3 - tnp::gLastNetDetectTime;
  tnp::PPPP_DebugTrace
            (2,"LastResolveTime = 0x%08X, Now = 0x%08X,  (Now - LastResolveTime) = %d \n",
             tnp::gLastNetDetectTime,tVar2,iVar4);
  tVar2 = time((time_t *)0x0);
  if (("hostbyname" <= (char *)(tVar2 - tnp::gLastNetDetectTime)) && ((param_4 & 1U) != 0)) {
    tnp::PPPP_DebugTrace(1,"Do NetWork Detect\n",tnp::gLastNetDetectTime,"thostbyname",iVar4);
    iVar4 = tnp::PPPP__DoNetWorkDetect((st_PPPP_NetInfo *)tnp::gNetInfo,param_3,tnp::gServerString);
    if (iVar4 != 0) {
      FUN_0002e8c8(tnp::gTNPSession + param_1 * 0x3f18);
    }
  }
  iVar13 = param_1 * 0x3f18;
  tnp::PPPP__Update_SessionP2PServer(param_1,(sockaddr_in *)tnp::gP2PServerAddr);
  tnp::PPPP_DebugTrace(1,"3. Setup Session structure \n");
  iVar4 = tnp::gTNPSession;
  uVar5 = tnp::CreateSocket('\0');
  iVar9 = tnp::gTNPSession + iVar13;
  *(undefined4 *)(iVar4 + iVar13 + 0x50) = uVar5;
  *(undefined1 *)(iVar9 + 0x1a5) = 0;
  *(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(iVar9 + 0x50);
  *(undefined1 *)(iVar9 + 0x1a6) = 0;
  tnp::PPPP_DebugTrace(2,"Socket = %d\n");
  iVar4 = *(int *)(tnp::gTNPSession + iVar13 + 0x50);
  if (iVar4 < 0) {
    tnp::PPPP_DebugTrace(2,"Fail to create PSSocket\n");
    return 0xfffff430;
  }
  tnp::SetSocketBroadcast(iVar4);
  local_2a[0] = param_3;
  iVar4 = tnp::TryBindPort(*(int *)(tnp::gTNPSession + iVar13 + 0x50),local_2a);
  if (iVar4 < 0) {
    tnp::CloseSocket(*(int *)(tnp::gTNPSession + iVar13 + 0x50));
    *(undefined4 *)(tnp::gTNPSession + iVar13 + 0x50) = 0xffffffff;
    piVar7 = __errno_location();
    tnp::PPPP_DebugTrace(2,"Failed to Bind ... socket errno=%d\n",*piVar7);
    return 0xfffff436;
  }
  tnp::PPPP_DebugTrace(2,"Bind UDP Port = %d\n",(uint)local_2a[0]);
  *(undefined2 *)(tnp::gTNPSession + iVar13 + 0x6c) = 2;
  phVar6 = gethostbyname(tnp::gNetInfo + 4);
  if (phVar6 != (hostent *)0x0) {
    memcpy((void *)(tnp::gTNPSession + iVar13 + 0x70),*phVar6->h_addr_list,phVar6->h_length);
  }
  *(undefined2 *)(tnp::gTNPSession + iVar13 + 0x7c) = 2;
  phVar6 = gethostbyname(tnp::gNetInfo + 0x14);
  if (phVar6 != (hostent *)0x0) {
    memcpy((void *)(tnp::gTNPSession + iVar13 + 0x80),*phVar6->h_addr_list,phVar6->h_length);
  }
  uVar1 = local_2a[0] << 8 | local_2a[0] >> 8;
  iVar4 = tnp::gTNPSession + iVar13;
  *(ushort *)(iVar4 + 0x6e) = uVar1;
  *(ushort *)(iVar4 + 0x7e) = uVar1;
  tnp::PPPP_DebugTrace(1,"4. Create UDP recv Thread\n");
  iVar4 = tnp::gTNPSession;
  uVar5 = tnp::CreateWorkerThread(PPPP_Thread_Recv_Proto_Device,(void *)param_1);
  iVar9 = tnp::gTNPSession + iVar13;
  *(undefined4 *)(iVar4 + iVar13 + 0x1cc) = uVar5;
  if (*(int *)(iVar9 + 0x1cc) == 0) {
    tnp::CloseSocket(*(int *)(iVar9 + 0x50));
    *(undefined4 *)(tnp::gTNPSession + iVar13 + 0x50) = 0xffffffff;
    tnp::PPPP_DebugTrace(1," Failed!! CreateWorkerThread on PPPP_Thread_Recv_Proto_Device errror\n")
    ;
    return 0xfffff432;
  }
  PPPP__Start_Proto_Lan(param_1);
  tnp::PPPP_DebugTrace(1,"6. Send Login every 40 second, if ListenFlag is set\n");
  *(undefined1 *)(tnp::gTNPSession + iVar13 + 0x1bd) = 1;
  tnp::gRecvLoginAckByUDP = 0;
  if (param_2 < 0x1999999a) {
    tnp::gListenTimeOut = param_2;
    if (param_2 * 10 == 0) {
      tnp::gRecvLoginAckByUDP = 0;
      return 0;
    }
  }
  else {
    tnp::gListenTimeOut = 0xffffffff;
  }
  uVar12 = 0;
  local_3c = 0;
  do {
    if (uVar12 == 0) {
      tnp::PPPP_DebugTrace(2,"Send Hello\n");
      psVar10 = (sockaddr_in *)tnp::gP2PServerAddr;
      do {
        if ((param_4 & 1U) != 0) {
          tnp::PPPP_Proto_Send_Hello(*(int *)(tnp::gTNPSession + iVar13 + 0x50),psVar10);
        }
        psVar10 = psVar10 + 0x10;
      } while (psVar10 != (sockaddr_in *)&tnp::gTNPSessionLock);
      iVar9 = PPPP__SessionHandler_Is_Full();
      tnp::gLastSessionIsFull = iVar9;
      if ((param_4 & 1U) == 0) {
LAB_000327cc:
        iVar4 = tnp::gTNPSession + iVar13;
        goto LAB_000327d4;
      }
LAB_00032858:
      tnp::gLastSessionIsFull = iVar9;
      tnp::PPPP_DebugTrace(2,"Send Login: %d sec \n",uVar12 / 10);
      tnp::PPPP_DebugTrace(0x40000,"Send Login: %d sec \n",uVar12 / 10);
      cVar14 = tnp::gNetInfo[3];
      if (iVar9 != 0) {
        cVar14 = -7;
      }
      puVar11 = gProxyModeInfo;
      psVar10 = (sockaddr_in *)tnp::gP2PServerAddr;
      do {
        if (gIsProxy == '\0') {
          iVar4 = tnp::gTNPSession + iVar13;
          tnp::PPPP_Proto_Send_DevLgn_EX
                    (*(int *)(iVar4 + 0x50),'\0',psVar10,(char *)(iVar4 + 0x18),
                     *(uint *)(iVar4 + 0x28),(char *)(iVar4 + 0x20),cVar14,
                     (sockaddr_in *)(iVar4 + 0x6c),tnp::gHardKey,tnp::gLoginFlag);
        }
        else {
          iVar4 = tnp::gTNPSession + iVar13;
          uVar8 = '\0';
          if (puVar11[0x114] == '\0') {
            uVar8 = gProxyModeInfo[0x113];
          }
          tnp::PPPP_Proto_Send_DevLgn_Proxy
                    (*(int *)(iVar4 + 0x50),'\0',psVar10,(char *)(iVar4 + 0x18),
                     *(uint *)(iVar4 + 0x28),(char *)(iVar4 + 0x20),cVar14,
                     (sockaddr_in *)(iVar4 + 0x6c),tnp::gHardKey,tnp::gLoginFlag,gProxyModeInfo,
                     gProxyModeInfo._8_4_,gProxyModeInfo + 0xc,gProxyModeInfo + 0x14,uVar8);
        }
        psVar10 = psVar10 + 0x10;
        puVar11 = puVar11 + 1;
      } while (psVar10 != (sockaddr_in *)&tnp::gTNPSessionLock);
      if (tnp::gRecvLoginAckByUDP != 1) {
        if ((uVar12 != 0) && (local_3c = local_3c + 1, 5 < local_3c)) {
          tnp::gLoginByTCP = 1;
          return 0;
        }
        goto LAB_000327cc;
      }
      iVar4 = tnp::gTNPSession + iVar13;
      tnp::gRecvLoginAckByUDP = 0;
      local_3c = 0;
      cVar14 = *(char *)(iVar4 + 0x1b4);
    }
    else {
      iVar9 = PPPP__SessionHandler_Is_Full();
      iVar4 = tnp::gTNPSession + iVar13;
      FUN_00047c38(uVar12,(uint)*(byte *)(iVar4 + 0x1be) * 10);
      if (((extraout_r1 == 0) || (uVar12 == 0x1e)) || (iVar9 != tnp::gLastSessionIsFull)) {
        tnp::gLastSessionIsFull = iVar9;
        if ((param_4 & 1U) != 0) goto LAB_00032858;
        goto LAB_000327cc;
      }
LAB_000327d4:
      cVar14 = *(char *)(iVar4 + 0x1b4);
    }
    if (cVar14 != '\0') {
      return 0;
    }
    if (*(char *)(iVar4 + 0x1bd) < '\0') {
      return 0;
    }
    tnp::mSecSleep(100);
    uVar12 = uVar12 + 1;
    if (tnp::gListenTimeOut * 10 <= uVar12) {
      return 0;
    }
  } while( true );
}



// PPPP__CloseTCPSessionSocket(int)

void PPPP__CloseTCPSessionSocket(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x3f18 + tnp::gTNPSession;
  *(undefined4 *)(iVar1 + 0x50) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x1a5) = 0;
  PPPP__ResetP2PTCPSocketInfo();
  return;
}



// PPPP_DoListen_TCP(int, unsigned int)

undefined4 PPPP_DoListen_TCP(int param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  char *pcVar3;
  undefined4 uVar4;
  time_t tVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  uchar local_3c;
  
  tnp::PPPP_DebugTrace(1,"PPPP_DoListen_TCP() Enter.\n");
  iVar9 = param_1 * 0x3f18;
  if ((*(char *)(tnp::gTNPSession + iVar9 + 0x1a7) == '\x01') &&
     (tVar5 = time((time_t *)0x0), "thostbyname" < (char *)(tVar5 - tnp::gLastNetDetectTime))) {
    tnp::PPPP_DebugTrace(1,"Do NetWork Detect\n");
    tnp::PPPP__DoNetWorkDetect((st_PPPP_NetInfo *)tnp::gNetInfo,0,tnp::gServerString);
  }
  tnp::PPPP__Update_SessionP2PServer(param_1,(sockaddr_in *)tnp::gP2PServerAddr);
  if (0 < tnp::gP2PTCPAddrNum) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      iVar1 = iVar6 * 0x10;
      iVar6 = iVar6 + 1;
      pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gP2PTCPServerAddr + iVar1 + 4));
      iVar1 = iVar7 + 2;
      iVar7 = iVar7 + 0x10;
      tnp::PPPP_DebugTrace
                (0x10,"tcpp2paddr(%d) = %s:%d \n",iVar6,pcVar3,
                 (*(ushort *)(tnp::gP2PTCPServerAddr + iVar1) & 0xff) << 8 |
                 (uint)(*(ushort *)(tnp::gP2PTCPServerAddr + iVar1) >> 8));
    } while (iVar6 < tnp::gP2PTCPAddrNum);
  }
  if ((int)tnp::gP2PTCPSocketInfo._0_4_ < 0) {
    iVar6 = tnp::PPPP__Connect_TCPServer
                      ((sockaddr_in *)tnp::gP2PTCPServerAddr,tnp::gP2PTCPAddrNum,
                       &tnp::gCurP2PTCPServerIndex,5,0x14);
    if (iVar6 < 0) {
      tnp::PPPP_DebugTrace(1,"Create TCP P2PTCPSocket Failed\n");
      return 0xfffff42e;
    }
    iVar7 = tnp::gTNPSession + iVar9;
    iVar7 = PPPP__SetP2PTCPSocketInfo
                      (iVar6,(char *)(iVar7 + 0x18),*(uint *)(iVar7 + 0x28),(char *)(iVar7 + 0x20));
    if (iVar7 < 0) {
      tnp::PPPP_DebugTrace(1,"Create TCP Hello Thread Failed\n");
      tnp::CloseSocket(iVar6);
      return 0xfffff432;
    }
  }
  uVar4 = tnp::gP2PTCPSocketInfo._0_4_;
  iVar6 = tnp::gTNPSession + iVar9;
  *(undefined4 *)(iVar6 + 0x16c) = tnp::gCurP2PTCPServerIndex;
  *(undefined4 *)(iVar6 + 0x50) = uVar4;
  *(undefined1 *)(iVar6 + 0x1a5) = 1;
  tnp::PPPP_DebugTrace(1,"4. Create TCP recv Thread\n");
  iVar6 = tnp::gTNPSession;
  uVar4 = tnp::CreateWorkerThread(PPPP_Thread_Recv_Proto_Device_TCP,(void *)param_1);
  iVar7 = tnp::gTNPSession + iVar9;
  *(undefined4 *)(iVar6 + iVar9 + 0x1cc) = uVar4;
  if (*(int *)(iVar7 + 0x1cc) == 0) {
    tnp::PPPP_DebugTrace(1," Failed!! CreateWorkerThread on PPPP_Thread_Recv_Proto_Device errror\n")
    ;
    return 0xfffff432;
  }
  PPPP__Start_Proto_Lan(param_1);
  tnp::PPPP_DebugTrace(1,"6. Send Login every 40 second, if ListenFlag is set\n");
  *(undefined1 *)(tnp::gTNPSession + iVar9 + 0x1bd) = 1;
  if (param_2 < 0x1999999a) {
    tnp::gListenTimeOut = param_2;
    if (param_2 * 10 == 0) {
      tnp::gSendLoginByTCP = 0;
      return 0;
    }
  }
  else {
    tnp::gListenTimeOut = 0xffffffff;
  }
  tnp::gSendLoginByTCP = 0;
  if (tnp::gP2PTCPSocketInfo._4_4_ == 0) {
    uVar8 = 0;
    do {
      iVar6 = PPPP__SessionHandler_Is_Full();
      iVar7 = tnp::gTNPSession + iVar9;
      FUN_00047c38(uVar8,(uint)*(byte *)(iVar7 + 0x1be) * 10);
      if ((extraout_r1 == 0) || (uVar8 == 0x1e)) {
        if (iVar6 != tnp::gLastSessionIsFull) goto LAB_00032e48;
LAB_00032e60:
        if ((0x1e < uVar8) && (tnp::gSendLoginByTCP == 1)) {
          tnp::PPPP_DebugTrace(2,"Wait LoginAck Timeout\n");
          PPPP__CloseTCPSessionSocket(param_1);
          return 0;
        }
        tnp::PPPP_DebugTrace(2,"Send Login: %d sec \n",uVar8 / 10);
        tnp::PPPP_DebugTrace(0x40000,"Send Login: %d sec \n",uVar8 / 10);
        cVar11 = tnp::gNetInfo[3];
        if (iVar6 != 0) {
          cVar11 = -7;
        }
        if (gIsProxy == '\0') {
          iVar6 = tnp::gTNPSession + iVar9;
          iVar6 = tnp::PPPP_Proto_Send_DevLgn_EX
                            (*(int *)(iVar6 + 0x50),*(char *)(iVar6 + 0x1a5),
                             (sockaddr_in *)(iVar6 + *(int *)(iVar6 + 0x16c) * 0x10 + 0xdc),
                             (char *)(iVar6 + 0x18),*(uint *)(iVar6 + 0x28),(char *)(iVar6 + 0x20),
                             cVar11,(sockaddr_in *)(iVar6 + 0x6c),tnp::gHardKey,tnp::gLoginFlag);
        }
        else {
          if (((gProxyModeInfo[0x114] == '\0') || (gProxyModeInfo[0x115] == '\0')) ||
             (gProxyModeInfo[0x116] == '\0')) {
            local_3c = gProxyModeInfo[0x113];
          }
          else {
            local_3c = '\0';
          }
          iVar6 = tnp::gTNPSession + iVar9;
          iVar6 = tnp::PPPP_Proto_Send_DevLgn_Proxy
                            (*(int *)(iVar6 + 0x50),*(char *)(iVar6 + 0x1a5),
                             (sockaddr_in *)(iVar6 + *(int *)(iVar6 + 0x16c) * 0x10 + 0xdc),
                             (char *)(iVar6 + 0x18),*(uint *)(iVar6 + 0x28),(char *)(iVar6 + 0x20),
                             cVar11,(sockaddr_in *)(iVar6 + 0x6c),tnp::gHardKey,tnp::gLoginFlag,
                             gProxyModeInfo,gProxyModeInfo._8_4_,gProxyModeInfo + 0xc,
                             gProxyModeInfo + 0x14,local_3c);
        }
        if (iVar6 < 0) {
          tnp::PPPP_DebugTrace(2,"close gTNPSession[SessionHandle].PSSocket Ret=%d\n",iVar6);
          PPPP__CloseTCPSessionSocket(param_1);
          return 0;
        }
        iVar7 = tnp::gTNPSession + iVar9;
        tnp::gSendLoginByTCP = 1;
        if (*(char *)(iVar7 + 0x1a7) == '\x01') {
          if (*(char *)(iVar7 + 0x1b0) == '\"') {
            iVar6 = tnp::PPPP_Proto_Send_RlyHello
                              (*(int *)(iVar7 + 0x54),(sockaddr_in *)(iVar7 + 0xcc));
            if (iVar6 < 0) {
              tnp::PPPP_DebugTrace(2,"Send_RlyHello failed\n");
              tnp::PPPP__Halt_TCP_For_Session(param_1);
              return 0;
            }
            iVar7 = tnp::gTNPSession + iVar9;
            goto LAB_0003321c;
          }
          goto LAB_000330f4;
        }
LAB_00032fa0:
        if (*(char *)(iVar7 + 0x1ba) == '\x06' || *(char *)(iVar7 + 0x1ba) == '\x01') {
LAB_00033238:
          PPPP__CloseTCPSessionSocket(param_1);
          return 0;
        }
      }
      else {
        if (iVar6 != tnp::gLastSessionIsFull) {
LAB_00032e48:
          tnp::PPPP_DebugTrace(2,"SessionIsFull:%d gLastSessionIsFull:%d \n",iVar6);
          tnp::gLastSessionIsFull = iVar6;
          goto LAB_00032e60;
        }
LAB_0003321c:
        if (*(char *)(iVar7 + 0x1a7) == '\x01') {
LAB_000330f4:
          if ((*(char *)(iVar7 + 0x1bd) == '\0') && (*(byte *)(iVar7 + 0x1b0) < 0x15)) {
            iVar6 = tnp::PPPP_Proto_Send_RlyServerReq
                              (*(int *)(iVar7 + 0x50),*(char *)(iVar7 + 0x1a5),
                               (sockaddr_in *)(iVar7 + *(int *)(iVar7 + 0x16c) * 0x10 + 0xdc),
                               (char *)(iVar7 + 0x18),*(uint *)(iVar7 + 0x28),(char *)(iVar7 + 0x20)
                              );
            if (iVar6 < 0) goto LAB_00033238;
            tnp::PPPP__Update_SessionState(param_1,'\x15');
          }
          iVar7 = tnp::gTNPSession + iVar9;
          if (*(char *)(iVar7 + 0x1b0) == '\x16') {
            iVar6 = *(int *)(iVar7 + 0x170);
            if (((iVar6 == 0) || (*(uint *)(iVar7 + 0x174) <= *(uint *)(iVar7 + 0x178))) ||
               (*(uint *)(iVar7 + 0x174) == 0)) {
LAB_0003324c:
              tnp::PPPP_DebugTrace(2,"construct tcp session failed\n");
              return 0;
            }
            uVar10 = 0;
LAB_00033180:
            iVar7 = uVar10 * 0x14;
            uVar10 = uVar10 + 1;
            if ((char)((sockaddr *)(iVar6 + iVar7))[1].sa_family != '\x01') {
LAB_00033164:
              iVar6 = tnp::gTNPSession + iVar9;
              if (*(uint *)(iVar6 + 0x174) <= uVar10) goto LAB_00033320;
              iVar6 = *(int *)(iVar6 + 0x170);
              goto LAB_00033180;
            }
            iVar6 = tnp::PPPP__Start_TCP_For_Session(param_1,(sockaddr *)(iVar6 + iVar7),5);
            if (iVar6 < 0) {
              pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)
                                           (*(int *)(tnp::gTNPSession + iVar9 + 0x170) + iVar7 + 4))
              ;
              uVar2 = *(ushort *)(*(int *)(tnp::gTNPSession + iVar9 + 0x170) + iVar7 + 2);
              tnp::PPPP_DebugTrace
                        (0x10,"Connect Address %s:%d failed\n",pcVar3,
                         (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
              goto LAB_00033164;
            }
            pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)
                                         (*(int *)(tnp::gTNPSession + iVar9 + 0x170) + iVar7 + 4));
            uVar2 = *(ushort *)(*(int *)(tnp::gTNPSession + iVar9 + 0x170) + iVar7 + 2);
            tnp::PPPP_DebugTrace
                      (0x10,"Connect Address %s:%d success\n",pcVar3,
                       (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
            memcpy((void *)(tnp::gTNPSession + iVar9 + 0xcc),
                   (void *)(*(int *)(tnp::gTNPSession + iVar9 + 0x170) + iVar7),0x10);
            iVar6 = tnp::gTNPSession + iVar9;
LAB_00033320:
            if (*(char *)(iVar6 + 0x1b0) != '\"') goto LAB_0003324c;
            iVar6 = tnp::PPPP_Proto_Send_EasyTCPStart
                              (*(int *)(iVar6 + 0x54),(sockaddr_in *)(iVar6 + 0xcc),
                               (char *)(iVar6 + 0x18),*(uint *)(iVar6 + 0x28),(char *)(iVar6 + 0x20)
                               ,'\x01',(char *)(iVar6 + 0x2c));
            if (iVar6 < 0) {
              tnp::PPPP_DebugTrace(2,"Send_EasyTCPStart failed\n");
              tnp::PPPP__Halt_TCP_For_Session(param_1);
              return 0;
            }
            iVar7 = tnp::gTNPSession + iVar9;
          }
          goto LAB_00032fa0;
        }
        if (*(char *)(iVar7 + 0x1ba) == '\x06' || *(char *)(iVar7 + 0x1ba) == '\x01')
        goto LAB_00033238;
      }
      if (*(char *)(iVar7 + 0x1bd) < '\0') {
        return 0;
      }
      if (*(char *)(iVar7 + 0x1b4) != '\0') {
        return 0;
      }
      tnp::mSecSleep(100);
      uVar8 = uVar8 + 1;
      if (tnp::gListenTimeOut * 10 <= uVar8) {
        return 0;
      }
    } while (tnp::gP2PTCPSocketInfo._4_4_ == 0);
  }
  tnp::PPPP_DebugTrace(2,"UDP Connect Success, Exit TCP Socket\n");
  PPPP__CloseTCPSessionSocket(param_1);
  return 0;
}



undefined4 PPPP_Listen_Break(void)

{
  if (tnp::gFlagInitialized != '\0') {
    tnp::gUserBreakListenFlag = 1;
    tnp::gListenTimeOut = 0;
    return 0;
  }
  return 0xfffff447;
}



int PPPP_Send_Login(void)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char cVar7;
  
  if (tnp::gFlagInitialized == '\0') {
    iVar4 = -0xbb9;
  }
  else {
    tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
    if (tnp::gMaxSessionNumber != 0) {
      iVar4 = 0;
      do {
        iVar3 = iVar4 * 0x3f18 + tnp::gTNPSession;
        if ((*(char *)(iVar3 + 0x1b1) == '\x01') && (*(char *)(iVar3 + 0x1b4) != '\x01')) {
          tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
          iVar3 = PPPP__SessionHandler_Is_Full();
          cVar7 = tnp::gNetInfo[3];
          if (iVar3 != 0) {
            cVar7 = -7;
          }
          iVar4 = iVar4 * 0x3f18;
          iVar3 = tnp::gTNPSession + iVar4;
          cVar1 = *(char *)(iVar3 + 0x1a5);
          if (cVar1 == '\0') {
            puVar6 = tnp::gP2PServerAddr;
            puVar5 = gProxyModeInfo;
            if (gIsProxy == '\0') goto LAB_000337d8;
            do {
              iVar3 = tnp::gTNPSession + iVar4;
              uVar2 = '\0';
              if (puVar5[0x114] == '\0') {
                uVar2 = gProxyModeInfo[0x113];
              }
              tnp::PPPP_Proto_Send_DevLgn_Proxy
                        (*(int *)(iVar3 + 0x50),'\0',(sockaddr_in *)puVar6,(char *)(iVar3 + 0x18),
                         *(uint *)(iVar3 + 0x28),(char *)(iVar3 + 0x20),cVar7,
                         (sockaddr_in *)(iVar3 + 0x6c),tnp::gHardKey,tnp::gLoginFlag,gProxyModeInfo,
                         gProxyModeInfo._8_4_,gProxyModeInfo + 0xc,gProxyModeInfo + 0x14,uVar2);
              while( true ) {
                puVar6 = puVar6 + 0x10;
                puVar5 = puVar5 + 1;
                if ((sockaddr_in *)puVar6 == (sockaddr_in *)&tnp::gTNPSessionLock) {
                  return 0;
                }
                if (gIsProxy != '\0') break;
LAB_000337d8:
                iVar3 = tnp::gTNPSession + iVar4;
                tnp::PPPP_Proto_Send_DevLgn_EX
                          (*(int *)(iVar3 + 0x50),'\0',(sockaddr_in *)puVar6,(char *)(iVar3 + 0x18),
                           *(uint *)(iVar3 + 0x28),(char *)(iVar3 + 0x20),cVar7,
                           (sockaddr_in *)(iVar3 + 0x6c),tnp::gHardKey,tnp::gLoginFlag);
              }
            } while( true );
          }
          if (gIsProxy == '\0') {
            iVar4 = tnp::PPPP_Proto_Send_DevLgn_EX
                              (*(int *)(iVar3 + 0x50),cVar1,
                               (sockaddr_in *)(iVar3 + *(int *)(iVar3 + 0x16c) * 0x10 + 0xdc),
                               (char *)(iVar3 + 0x18),*(uint *)(iVar3 + 0x28),(char *)(iVar3 + 0x20)
                               ,cVar7,(sockaddr_in *)(iVar3 + 0x6c),tnp::gHardKey,tnp::gLoginFlag);
          }
          else {
            uVar2 = gProxyModeInfo[0x113];
            if (((gProxyModeInfo[0x114] != '\0') && (gProxyModeInfo[0x115] != '\0')) &&
               (gProxyModeInfo[0x116] != '\0')) {
              uVar2 = '\0';
            }
            iVar4 = tnp::PPPP_Proto_Send_DevLgn_Proxy
                              (*(int *)(iVar3 + 0x50),cVar1,
                               (sockaddr_in *)(iVar3 + *(int *)(iVar3 + 0x16c) * 0x10 + 0xdc),
                               (char *)(iVar3 + 0x18),*(uint *)(iVar3 + 0x28),(char *)(iVar3 + 0x20)
                               ,cVar7,(sockaddr_in *)(iVar3 + 0x6c),tnp::gHardKey,tnp::gLoginFlag,
                               gProxyModeInfo,gProxyModeInfo._8_4_,gProxyModeInfo + 0xc,
                               gProxyModeInfo + 0x14,uVar2);
          }
          if (iVar4 < 0) {
            return iVar4;
          }
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != tnp::gMaxSessionNumber);
    }
    tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
    iVar4 = -0xbc3;
  }
  return iVar4;
}



undefined4 PPPP_IsConnecting(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (tnp::gFlagInitialized == '\0') {
    return 0xfffff447;
  }
  tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
  if (tnp::gMaxSessionNumber != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 0x3f18 + tnp::gTNPSession;
      iVar2 = iVar2 + 1;
      if (((*(char *)(iVar1 + 0x1b1) == '\x01') && (*(char *)(iVar1 + 0x1b4) != '\x01')) &&
         (*(char *)(iVar1 + 0x1b0) != '\0')) {
        uVar3 = 0;
        goto LAB_00033a30;
      }
    } while (iVar2 != tnp::gMaxSessionNumber);
  }
  uVar3 = 0xfffff448;
LAB_00033a30:
  tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
  return uVar3;
}



undefined4 PPPP_Set_IncomingConnectionCallback(undefined4 param_1)

{
  tnp::gIncomingConnectionCallback = param_1;
  return 0;
}



undefined4 PPPP_Set_NoticeToCallback(undefined4 param_1)

{
  tnp::gNoticeToCallback = param_1;
  return 0;
}



int PPPP_Send_NoticeToAck(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uchar in_stack_ffffffc4;
  char in_stack_ffffffc8;
  
  if (tnp::gFlagInitialized == '\0') {
    iVar2 = -0xbb9;
  }
  else {
    tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
    if (tnp::gMaxSessionNumber != 0) {
      iVar2 = 0;
      do {
        iVar1 = iVar2 * 0x3f18 + tnp::gTNPSession;
        if ((*(char *)(iVar1 + 0x1b1) == '\x01') && (*(char *)(iVar1 + 0x1b4) != '\x01')) {
          tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
          iVar1 = tnp::gTNPSession + iVar2 * 0x3f18;
          if (*(char *)(iVar1 + 0x1a5) == '\0') {
            puVar3 = tnp::gP2PServerAddr;
            do {
              iVar1 = tnp::gTNPSession + iVar2 * 0x3f18;
              iVar1 = tnp::PPPP_Proto_Send_NoticeToAck
                                (*(tnp **)(iVar1 + 0x50),0,(char)puVar3,
                                 (sockaddr_in *)(iVar1 + 0x18),*(char **)(iVar1 + 0x28),iVar1 + 0x20
                                 ,param_1,CONCAT44(param_3,param_4) & 0xffffffff0000ffff,0x9424,
                                 (char *)0x0,(char *)0x0,in_stack_ffffffc4,in_stack_ffffffc8);
              puVar3 = (undefined1 *)((int)puVar3 + 0x10);
            } while ((undefined4 *)puVar3 != &tnp::gTNPSessionLock);
          }
          else {
            iVar1 = tnp::PPPP_Proto_Send_NoticeToAck
                              (*(tnp **)(iVar1 + 0x50),1,
                               (char)iVar1 + (char)*(undefined4 *)(iVar1 + 0x16c) * '\x10' + -0x24,
                               (sockaddr_in *)(iVar1 + 0x18),*(char **)(iVar1 + 0x28),iVar1 + 0x20,
                               param_1,CONCAT44(param_3,param_4) & 0xffffffff0000ffff,0x9424,
                               (char *)0x0,(char *)0x0,in_stack_ffffffc4,in_stack_ffffffc8);
          }
          if (-1 < iVar1) {
            iVar1 = 0;
          }
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != tnp::gMaxSessionNumber);
    }
    tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
    iVar2 = -0xbc3;
  }
  return iVar2;
}



undefined4 PPPP_Get_Statistics(uint param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  if (tnp::gMaxSessionNumber < param_1) {
    uVar1 = 0xfffff43d;
  }
  else if (param_2 == (undefined2 *)0x0) {
    uVar1 = 0xfffff443;
  }
  else {
    uVar1 = 0;
    *param_2 = *(undefined2 *)(param_1 * 0x3f18 + tnp::gTNPSession + 0x3f00);
  }
  return uVar1;
}



undefined4
PPPP_Get_PeerBandwidthInfo(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (tnp::gMaxSessionNumber < param_1) {
    uVar2 = 0xfffff43d;
  }
  else if ((param_3 == (undefined4 *)0x0 || param_2 == (undefined4 *)0x0) ||
          (uVar2 = 0, param_4 == (undefined4 *)0x0)) {
    uVar2 = 0xfffff443;
  }
  else {
    iVar4 = param_1 * 0x3f18 + tnp::gTNPSession;
    uVar1 = *(undefined4 *)(iVar4 + 0x3f14);
    uVar3 = *(undefined4 *)(iVar4 + 0x3f04);
    *param_2 = *(undefined4 *)(iVar4 + 0x3f10);
    param_2[1] = uVar1;
    *param_3 = uVar3;
    *param_4 = *(undefined4 *)(iVar4 + 0x3f08);
  }
  return uVar2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Timer_Init()

void PPPP__Timer_Init(void)

{
  gTimer._4_4_ = 0;
  gTimer._0_4_ = 0;
  tnp::MUTEX_INIT((pthread_mutex_t *)gTimerLock);
  gExitTimerThread = 0;
  hthread_timer = 0;
  tnp::MUTEX_INIT((pthread_mutex_t *)gSeqNumLock);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Device_Init()

undefined4 PPPP__Device_Init(void)

{
  tnp::gLastLoginOKTime = 0;
  PPPP__InitP2PTCPSocketInfo();
  tnp::gSDevInfo[0x60] = 0;
  tnp::gSDevInfo[0x61] = 0;
  tnp::PPPP__ResetSuperDevice();
  PPPP__Timer_Init();
  memset(gProxyModeInfo,0,0x118);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Timer_Thread_Check()

void PPPP__Timer_Thread_Check(void)

{
  if (hthread_timer != 0) {
    return;
  }
  gExitTimerThread = 0;
  hthread_timer = tnp::CreateWorkerThread(PPPP__thread_timer,(void *)0x0);
  return;
}



// PPPP_DoListen(char const*, unsigned int, unsigned short, char, char const*, char const*)

void * PPPP_DoListen(char *param_1,uint param_2,ushort param_3,char param_4,char *param_5,
                    char *param_6)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  size_t sVar6;
  time_t tVar7;
  int iVar8;
  time_t tVar9;
  undefined4 uVar10;
  void *extraout_r1;
  void *extraout_r1_00;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  void *pvVar15;
  void *local_c8;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  char acStack_68 [68];
  
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_8c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  iVar5 = tnp::PPPP__Parse_DID
                    (param_1,(char *)&local_88,0x10,(int *)&local_8c,(char *)&local_78,0x10);
  if (iVar5 == 0) {
    if (tnp::gFlagInitialized != '\0') {
      if (((((char *)(param_2 - 0x3c) < "eadyEic") && (param_5 != (char *)0x0)) &&
          (sVar6 = strlen(param_5), sVar6 != 0 && (int)sVar6 < 0x20)) && (param_6 != (char *)0x0)) {
        sVar6 = strlen(param_6);
        uVar14 = 1 - sVar6;
        if (1 < sVar6) {
          uVar14 = 0;
        }
        if (0x1f < (int)sVar6) {
          uVar14 = uVar14 | 1;
        }
        if (uVar14 == 0) {
          tnp::PPPP_DebugTrace(1,"0. Select Session Handle \n");
          tnp::MUTEX_LOCK((pthread_mutex_t *)tnp::TheLock);
          pvVar3 = tnp::gLastHandle;
          pvVar15 = tnp::gMaxSessionNumber;
          if (tnp::gMaxSessionNumber == (void *)0x0) {
            local_c8 = (void *)0x0;
          }
          else {
            FUN_00047c38((int)tnp::gLastHandle + 1,tnp::gMaxSessionNumber);
            iVar13 = tnp::gTNPSession;
            iVar5 = (int)extraout_r1 * 0x3f18 + tnp::gTNPSession;
            cVar11 = *(char *)(iVar5 + 0x1b1);
            pvVar4 = extraout_r1;
            pvVar2 = (void *)0x0;
            while (local_c8 = pvVar4, cVar11 == '\x01') {
              local_c8 = (void *)((int)pvVar2 + 1);
              if (local_c8 == pvVar15) goto LAB_000340b4;
              FUN_00047c38((int)local_c8 + (int)pvVar3 + 1,pvVar15);
              iVar5 = (int)extraout_r1_00 * 0x3f18 + iVar13;
              pvVar4 = extraout_r1_00;
              pvVar2 = local_c8;
              cVar11 = *(char *)(iVar5 + 0x1b1);
            }
            tnp::gLastHandle = local_c8;
            *(undefined1 *)(iVar5 + 0x1b1) = 1;
          }
LAB_000340b4:
          tnp::MUTEX_RELEASE((pthread_mutex_t *)tnp::TheLock);
          if (tnp::gMaxSessionNumber == local_c8) {
            tnp::PPPP_DebugTrace(2,"Max Number Session(%d) is reached!! \n",local_c8);
            return (void *)0xfffff437;
          }
          tnp::PPPP__Reset_Session(local_c8,2);
          strncpy(tnp::gHardKey,param_5,0x1f);
          tnp::PPPP__DeviceInfoList_Add((char *)&local_88,local_8c,(char *)&local_78);
          tnp::gUserBreakListenFlag = '\0';
          tnp::gInListenFlag = 1;
          PPPP__Timer_Thread_Check();
          uVar14 = tnp::getCurTime();
          srand(uVar14);
          iVar13 = (int)local_c8 * 0x3f18;
          iVar5 = (int)local_c8 * 0x18;
          do {
            tVar7 = time((time_t *)0x0);
            tnp::PPPP_DebugTrace(2,"SessionHandle =%d\n",local_c8);
            tnp::PPPP_DebugTrace(1,"1. Read ID\n");
            sVar6 = strlen(param_1);
            if (0x17 < sVar6) {
              sVar6 = 0x18;
            }
            strncpy((char *)(tnp::gTNPSession + iVar13),param_1,sVar6);
            strncpy((char *)(tnp::gTNPSession + iVar13 + 0x18),(char *)&local_88,8);
            tnp::PPPP_DebugTrace(2,"Prefix=%s\n",tnp::gTNPSession + iVar13 + 0x18);
            *(uint *)(tnp::gTNPSession + iVar13 + 0x28) = local_8c;
            tnp::PPPP_DebugTrace(2,"SN=%06d\n");
            strncpy((char *)(tnp::gTNPSession + iVar13 + 0x20),(char *)&local_78,8);
            tnp::PPPP_DebugTrace(2,"CheckCode=%s\n",tnp::gTNPSession + iVar13 + 0x20);
            tnp::PPPP__Set_ConnectKey((uint)local_c8,param_6);
            tnp::PPPP_DebugTrace(2,"Key=%s\n",tnp::gTNPSession + iVar13 + 0x2c);
            *(undefined1 *)(tnp::gTNPSession + iVar13 + 0x1a7) = 0;
            tnp::PPPP_DebugTrace(2,"bForceTCP=%d\n",0);
            *(undefined1 *)(tnp::gTNPSession + iVar13 + 0x4f) = 1;
            tnp::PPPP_DebugTrace(2,"I am %s\n","Device");
            iVar8 = tnp::gTNPSession + iVar13;
            *(undefined1 *)(iVar8 + 0x1c0) = 0;
            *(undefined1 *)(iVar8 + 0x1c1) = 0;
            *(undefined1 *)(iVar8 + 0x1b4) = 0;
            *(undefined1 *)(iVar8 + 0x1bf) = 0;
            *(undefined1 *)(iVar8 + 0x1b0) = 0;
            *(undefined1 *)(iVar8 + 0x1be) = 0x19;
            if (*(char *)(iVar8 + 0x1a7) == '\x01') {
              tnp::gLoginByTCP = 1;
LAB_00034340:
              if ((param_4 & 1U) != 0) {
                pvVar15 = (void *)PPPP_DoListen_TCP((int)local_c8,param_2);
                if ((int)tnp::gP2PTCPSocketInfo._0_4_ < 0) {
                  tnp::gLoginByTCP = 0;
                }
                goto LAB_000344d4;
              }
              pvVar15 = (void *)0xfffff445;
              goto LAB_00034350;
            }
            if (tnp::gLoginByTCP != 0) goto LAB_00034340;
            PPPP__ResetP2PTCPSocketInfo();
            pvVar15 = (void *)PPPP_DoListen_UDP((int)local_c8,param_2,param_3,param_4);
LAB_000344d4:
            iVar8 = tnp::gTNPSession + iVar13;
            if (pvVar15 != (void *)0x0) goto switchD_0003461c_default;
            if (-1 < *(char *)(iVar8 + 0x1bd)) {
              if (*(char *)(iVar8 + 0x1b4) != '\0') {
                tnp::PPPP_DebugTrace(1,"7. Listen result: Session is Ready\n");
                iVar8 = tnp::gTNPSession + iVar13;
                pvVar15 = local_c8;
                goto switchD_0003461c_default;
              }
              if (tnp::gUserBreakListenFlag == '\0') {
                pvVar15 = (void *)0xfffff445;
                tnp::PPPP_DebugTrace(1,"7. Listen result: Time Out\n");
                iVar8 = tnp::gTNPSession + iVar13;
              }
              else {
                pvVar15 = (void *)0xfffff438;
                tnp::PPPP_DebugTrace(1,"7. Listen result: User break listen\n");
                iVar8 = tnp::gTNPSession + iVar13;
              }
              goto LAB_00034350;
            }
            switch((int)*(char *)(iVar8 + 0x1bd)) {
            case -0x20:
              tnp::PPPP_DebugTrace(1,"7. Listen result: TCP Socket Timeout\n");
              pvVar15 = (void *)0xfffff445;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -0x1f:
              tnp::PPPP_DebugTrace(1,"7. Listen result: TCP Socket Error\n");
              pvVar15 = (void *)0xfffff42c;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -0x1e:
              tnp::PPPP_DebugTrace(1,"7. Listen result: TCP Connect Error\n");
              pvVar15 = (void *)0xfffff42d;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -0x1d:
              break;
            case -0x1c:
              break;
            case -0x1b:
              break;
            case -0x1a:
              break;
            case -0x19:
              break;
            case -0x18:
              break;
            case -0x17:
              break;
            case -0x16:
              break;
            case -0x15:
              break;
            case -0x14:
              break;
            case -0x13:
              break;
            case -0x12:
              break;
            case -0x11:
              break;
            case -0x10:
              break;
            case -0xf:
              break;
            case -0xe:
              tnp::PPPP_DebugTrace(1,"7. Listen result: Invalid Token Time\n");
              pvVar15 = (void *)0xfffff422;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -0xd:
              tnp::PPPP_DebugTrace(1,"7. Listen result: Invalid GW\n");
              pvVar15 = (void *)0xfffff424;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -0xc:
              tnp::PPPP_DebugTrace(1,"7. Listen result: Invalid Token\n");
              pvVar15 = (void *)0xfffff423;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -0xb:
              goto LAB_0003493c;
            case -10:
              break;
            case -9:
              break;
            case -8:
              break;
            case -7:
              break;
            case -6:
              break;
            case -5:
LAB_0003493c:
              tnp::PPPP_DebugTrace(1,"7. Listen result: Invalid Signature\n");
              pvVar15 = (void *)0xfffff426;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -4:
              tnp::PPPP_DebugTrace(1,"7. Listen result: Invalid Nonce\n");
              pvVar15 = (void *)0xfffff429;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -3:
              tnp::PPPP_DebugTrace(1,"7. Listen result: Invalid prefix of DID\n");
              pvVar15 = (void *)0xfffff440;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -2:
              tnp::PPPP_DebugTrace(1,"7. Listen result: ID is Out of date\n");
              pvVar15 = (void *)0xfffff43f;
              iVar8 = tnp::gTNPSession + iVar13;
              goto LAB_00034350;
            case -1:
              tnp::PPPP_DebugTrace(1,"7. Listen result: Invalid ID\n");
              pvVar15 = (void *)0xfffff444;
              iVar8 = tnp::gTNPSession + iVar13;
LAB_00034350:
              *(undefined1 *)(iVar8 + 0x1c1) = 1;
              tnp::WaitThreadExit((ulong *)(iVar8 + 0x1cc));
              tnp::WaitThreadExit((ulong *)(tnp::gTNPSession + iVar13 + 0x1c8));
              tnp::WaitThreadExit((ulong *)(tnp::gTNPSession + iVar13 + 0x1c4));
              tnp::PPPP_DebugTrace(1,"PPPP_DoListen_UDP() is done!!, ret =%d \n",pvVar15);
              goto LAB_00034394;
            }
switchD_0003461c_default:
            *(undefined1 *)(iVar8 + 0x1c1) = 1;
            tnp::WaitThreadExit((ulong *)(iVar8 + 0x1cc));
            tnp::WaitThreadExit((ulong *)(tnp::gTNPSession + iVar13 + 0x1c8));
            tnp::WaitThreadExit((ulong *)(tnp::gTNPSession + iVar13 + 0x1c4));
            tnp::PPPP_DebugTrace(1,"PPPP_DoListen_UDP() is done!!, ret =%d \n",pvVar15);
            if ((int)pvVar15 < 0) {
LAB_00034394:
              tnp::PPPP__Halt_TCP_For_Session((int)local_c8);
              if (pvVar15 != (void *)0xfffff445) {
                cVar11 = *(char *)(tnp::gTNPSession + iVar13 + 0x1bd);
                memset(acStack_68,0,0x40);
                sprintf(acStack_68,"Device listen failed,ErrorCode:%d,Session:%d",pvVar15,local_c8);
                tnp::PPPP__Send_Report((int)local_c8,cVar11 == '\0',acStack_68);
              }
              iVar8 = tnp::gTNPSession + iVar13;
              if ((*(char *)(iVar8 + 0x1a5) == '\0') && (-1 < *(int *)(iVar8 + 0x50))) {
                tnp::CloseSocket(*(int *)(iVar8 + 0x50));
                iVar8 = tnp::gTNPSession + iVar13;
              }
              if (-1 < *(int *)(iVar8 + 0x58)) {
                tnp::CloseSocket(*(int *)(iVar8 + 0x58));
                *(undefined4 *)(tnp::gTNPSession + iVar13 + 0x58) = 0xffffffff;
              }
              tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar5));
              tnp::PPPP__Reset_Session(local_c8,0);
              iVar8 = tnp::gTNPSessionLock;
              *(undefined1 *)(tnp::gTNPSession + iVar13 + 0x1b1) = 1;
              tnp::MUTEX_RELEASE((pthread_mutex_t *)(iVar8 + iVar5));
            }
            else {
              tnp::MUTEX_LOCK((pthread_mutex_t *)(tnp::gTNPSessionLock + iVar5));
              iVar8 = tnp::gTNPSession;
              iVar12 = tnp::gTNPSession + iVar13;
              *(undefined1 *)(iVar12 + 0x1c2) = 0;
              *(undefined1 *)(iVar12 + 0x1c3) = 0;
              if ((*(char *)(iVar12 + 0x1b0) == '\x06') && (*(char *)(iVar12 + 0x1b7) == '\x01')) {
                cVar11 = '\x06';
                if (*(char *)(iVar12 + 0x1a5) == '\x01') {
                  tnp::PPPP__Halt_TCP_For_Session((int)local_c8);
                  iVar8 = tnp::gTNPSession;
                  iVar12 = tnp::gTNPSession + iVar13;
                  *(undefined1 *)(iVar12 + 0x1a5) = 0;
                  *(undefined4 *)(iVar12 + 0x50) = *(undefined4 *)(iVar12 + 0x58);
                  cVar11 = *(char *)(iVar12 + 0x1b0);
                }
                *(undefined4 *)(iVar12 + 0x58) = 0xffffffff;
              }
              else {
                tnp::CloseSocket(*(int *)(iVar12 + 0x58));
                iVar8 = tnp::gTNPSession;
                iVar12 = tnp::gTNPSession + iVar13;
                cVar11 = *(char *)(iVar12 + 0x1b0);
                *(undefined4 *)(iVar12 + 0x58) = 0xffffffff;
              }
              if (cVar11 != ')') {
                *(undefined4 *)(iVar12 + 0x54) = *(undefined4 *)(iVar12 + 0x50);
              }
              *(bool *)(iVar12 + 0x1a6) = cVar11 == ')';
              iVar12 = 0;
              do {
                iVar1 = iVar12 * 0x1c;
                tnp::sll_Init((__the_SLL *)(iVar8 + iVar13 + iVar1 + 0x3d4),0x10000);
                tnp::sll_Init((__the_SLL *)(iVar1 + tnp::gTNPSession + iVar13 + 0x32c),0x10000);
                tnp::sll_Init((__the_SLL *)(iVar1 + tnp::gTNPSession + iVar13 + 0x284),0x10000);
                iVar12 = iVar12 + 1;
                tnp::sll_Init((__the_SLL *)(iVar1 + tnp::gTNPSession + iVar13 + 0x1dc),0x10000);
                iVar1 = tnp::gTNPSessionLock;
                iVar8 = tnp::gTNPSession;
              } while (iVar12 != 6);
              *(undefined1 *)(tnp::gTNPSession + iVar13 + 0x1b5) = 1;
              tnp::MUTEX_RELEASE((pthread_mutex_t *)(iVar1 + iVar5));
              iVar8 = tnp::gTNPSession + iVar13;
              if (*(char *)(iVar8 + 0x1a6) == '\0') {
                uVar10 = tnp::CreateWorkerThread(tnp::PPPP_Thread_Recv_DRW,local_c8);
                iVar12 = tnp::gTNPSession;
                *(undefined4 *)(iVar8 + 0x1d0) = uVar10;
                iVar8 = iVar12 + iVar13;
              }
              uVar10 = tnp::CreateWorkerThread(tnp::PPPP_Thread_Send_DRW,local_c8);
              *(undefined4 *)(iVar8 + 0x1d4) = uVar10;
            }
            if (param_4 == '\0') {
              tnp::mSecSleep(1000);
            }
            if (-1 < (int)pvVar15) {
              tnp::gInListenFlag = 0;
              return pvVar15;
            }
            iVar8 = rand();
            uVar14 = (iVar8 % 4) * 1000;
            tnp::PPPP_DebugTrace(1,"sleep %d ms \n",uVar14);
            tnp::mSecSleep(uVar14);
            if (pvVar15 != (void *)0xfffff445) break;
            tVar9 = time((time_t *)0x0);
            param_2 = param_2 - (tVar9 - tVar7);
            tnp::PPPP_DebugTrace(1,"Try Connect Again, RemainTime is %d seconds\n",param_2);
          } while (0 < (int)param_2);
          tnp::gInListenFlag = 0;
          tnp::PPPP__Reset_Session(local_c8,0);
          return pvVar15;
        }
      }
      return (void *)0xfffff443;
    }
    pvVar15 = (void *)0xfffff447;
  }
  else {
    pvVar15 = (void *)0xfffff444;
  }
  return pvVar15;
}



void PPPP_Listen(char *param_1,uint param_2,ushort param_3,char param_4,char *param_5,char *param_6)

{
  gIsProxy = 0;
  PPPP_DoListen(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



undefined4
PPPP_Listen_Proxy(char *param_1,char *param_2,void *param_3,size_t param_4,uint param_5,
                 ushort param_6,char param_7,char *param_8,char *param_9)

{
  int iVar1;
  undefined4 uVar2;
  int local_4c;
  char local_48 [36];
  
  if (((param_3 != (void *)0x0 && param_1 != (char *)0x0) && (param_4 - 1 < 0xff)) &&
     (param_9 != (char *)0x0 && param_8 != (char *)0x0)) {
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    local_4c = 0;
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_48[0x18] = '\0';
    local_48[0x19] = '\0';
    local_48[0x1a] = '\0';
    local_48[0x1b] = '\0';
    local_48[0x1c] = '\0';
    local_48[0x1d] = '\0';
    local_48[0x1e] = '\0';
    local_48[0x1f] = '\0';
    iVar1 = tnp::PPPP__Parse_DID(param_8,local_48,0x10,&local_4c,local_48 + 0x10,0x10);
    if (iVar1 == 0) {
      tnp::PPPP_DebugTrace(2,"I am Proxy\n");
      strncpy(gProxyModeInfo,local_48,7);
      tnp::PPPP_DebugTrace(2,"ProxyPrefix=%s\n",gProxyModeInfo);
      gProxyModeInfo._8_4_ = local_4c;
      tnp::PPPP_DebugTrace(2,"ProxySN=%06d\n",local_4c);
      strncpy(gProxyModeInfo + 0xc,local_48 + 0x10,7);
      if (0xfe < (int)param_4) {
        param_4 = 0xff;
      }
      tnp::PPPP_DebugTrace(2,"ProxyCheckCode=%s\n",0x69234);
      iVar1 = memcmp(gProxyModeInfo + 0x14,param_3,param_4);
      if (iVar1 != 0) {
        memcpy(gProxyModeInfo + 0x14,param_3,param_4);
        gProxyModeInfo[0x113] = (undefined1)param_4;
        gProxyModeInfo[0x114] = 0;
        gProxyModeInfo[0x115] = 0;
        gProxyModeInfo[0x116] = 0;
        tnp::PPPP_DebugTrace(2,"Reset Token\n");
      }
      gIsProxy = 1;
      uVar2 = PPPP_DoListen(param_1,param_5,param_6,param_7,param_9,param_2);
    }
    else {
      uVar2 = 0xfffff444;
    }
    return uVar2;
  }
  return 0xfffff443;
}



// PPPP__Timer_Push(st_PPPP_TimerElement_t*)

undefined4 PPPP__Timer_Push(st_PPPP_TimerElement_t *param_1)

{
  st_PPPP_TimerElement_t *psVar1;
  st_PPPP_TimerElement_t *psVar2;
  st_PPPP_TimerElement_t *psVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined4 *)(param_1 + 0x514) = 0;
  tnp::MUTEX_LOCK((pthread_mutex_t *)gTimerLock);
  psVar2 = param_1;
  psVar3 = param_1;
  if ((st_PPPP_TimerElement_t *)gTimer != (st_PPPP_TimerElement_t *)0x0) {
    uVar5 = *(uint *)param_1;
    if (*(uint *)(st_PPPP_TimerElement_t *)gTimer < uVar5) {
      if (uVar5 < *(uint *)gTimer._4_4_) {
        uVar4 = *(uint *)*(st_PPPP_TimerElement_t **)((st_PPPP_TimerElement_t *)gTimer + 0x514);
        psVar3 = *(st_PPPP_TimerElement_t **)((st_PPPP_TimerElement_t *)gTimer + 0x514);
        psVar2 = (st_PPPP_TimerElement_t *)gTimer;
        while (psVar1 = psVar3, uVar4 < uVar5) {
          psVar3 = *(st_PPPP_TimerElement_t **)(psVar1 + 0x514);
          psVar2 = psVar1;
          uVar4 = *(uint *)*(st_PPPP_TimerElement_t **)(psVar1 + 0x514);
        }
        *(st_PPPP_TimerElement_t **)(psVar2 + 0x514) = param_1;
        *(st_PPPP_TimerElement_t **)(param_1 + 0x514) = psVar1;
        psVar2 = (st_PPPP_TimerElement_t *)gTimer;
        psVar3 = gTimer._4_4_;
      }
      else {
        *(st_PPPP_TimerElement_t **)(gTimer._4_4_ + 0x514) = param_1;
        psVar2 = (st_PPPP_TimerElement_t *)gTimer;
        psVar3 = param_1;
      }
    }
    else {
      *(st_PPPP_TimerElement_t **)(param_1 + 0x514) = (st_PPPP_TimerElement_t *)gTimer;
      psVar2 = param_1;
      psVar3 = gTimer._4_4_;
    }
  }
  gTimer._4_4_ = psVar3;
  gTimer._0_4_ = psVar2;
  tnp::MUTEX_RELEASE((pthread_mutex_t *)gTimerLock);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Timer_Pop()

int PPPP__Timer_Pop(void)

{
  int iVar1;
  
  tnp::MUTEX_LOCK((pthread_mutex_t *)gTimerLock);
  iVar1 = (int)gTimer;
  if (((int)gTimer != 0) && (gTimer._0_4_ = *(int *)((int)gTimer + 0x514), (int)gTimer == 0)) {
    gTimer._4_4_ = 0;
  }
  tnp::MUTEX_RELEASE((pthread_mutex_t *)gTimerLock);
  return iVar1;
}



// PPPP__Timer_Delete(unsigned int)

void PPPP__Timer_Delete(uint param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *__ptr;
  
  tnp::MUTEX_LOCK((pthread_mutex_t *)gTimerLock);
  pvVar2 = (void *)gTimer;
  if ((void *)gTimer != (void *)0x0) {
    __ptr = *(void **)((int)(void *)gTimer + 0x514);
    if (__ptr == (void *)0x0) {
      if (*(uint *)((int)(void *)gTimer + 8) == param_1) {
        free((void *)gTimer);
        gTimer._4_4_ = (void *)0x0;
        gTimer._0_4_ = (void *)0x0;
      }
    }
    else if (*(uint *)((int)(void *)gTimer + 8) == param_1) {
      gTimer._0_4_ = __ptr;
      free(pvVar2);
    }
    else {
      do {
        if (*(uint *)((int)__ptr + 8) == param_1) {
          if (gTimer._4_4_ == __ptr) {
            uVar3 = 0;
            gTimer._4_4_ = pvVar2;
          }
          else {
            uVar3 = *(undefined4 *)((int)__ptr + 0x514);
          }
          *(undefined4 *)((int)pvVar2 + 0x514) = uVar3;
          free(__ptr);
          tnp::MUTEX_RELEASE((pthread_mutex_t *)gTimerLock);
          return;
        }
        piVar1 = (int *)((int)__ptr + 0x514);
        pvVar2 = __ptr;
        __ptr = (void *)*piVar1;
      } while ((void *)*piVar1 != (void *)0x0);
    }
  }
  tnp::MUTEX_RELEASE((pthread_mutex_t *)gTimerLock);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Timer_Timeout()

undefined4 PPPP__Timer_Timeout(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = tnp::getCurTime();
  uVar1 = FUN_000486fc((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1000,0);
  tnp::MUTEX_LOCK((pthread_mutex_t *)gTimerLock);
  if ((uint *)gTimer == (uint *)0x0) {
    uVar2 = 0;
  }
  else if (uVar1 < *(uint *)gTimer) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  tnp::MUTEX_RELEASE((pthread_mutex_t *)gTimerLock);
  return uVar2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Timer_RemoveMaxElapse()

void PPPP__Timer_RemoveMaxElapse(void)

{
  byte bVar1;
  void *__ptr;
  void *__ptr_00;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  
  tnp::MUTEX_LOCK((pthread_mutex_t *)gTimerLock);
  pvVar2 = gTimer._4_4_;
  if ((void *)gTimer != (void *)0x0) {
    uVar5 = *(uint *)((int)(void *)gTimer + 4);
    __ptr = (void *)gTimer;
    while (600 < uVar5) {
      gTimer._0_4_ = *(void **)((int)__ptr + 0x514);
      tnp::PPPP_DebugTrace
                (0x100,"remove timer element with SeqNum:%d,Type:0x%02X,ElapseTime:%d\n",
                 *(undefined4 *)((int)__ptr + 8),(uint)*(byte *)((int)__ptr + 0xc),uVar5);
      free(__ptr);
      pvVar2 = (void *)gTimer;
      if ((void *)gTimer == (void *)0x0) goto LAB_000350a4;
      __ptr = (void *)gTimer;
      uVar5 = *(uint *)((int)(void *)gTimer + 4);
    }
    pvVar3 = *(void **)((int)__ptr + 0x514);
    gTimer._0_4_ = __ptr;
    pvVar2 = gTimer._4_4_;
    while (__ptr_00 = pvVar3, __ptr_00 != (void *)0x0) {
      uVar5 = *(uint *)((int)__ptr_00 + 4);
      if (uVar5 < 0x259) {
        pvVar3 = *(void **)((int)__ptr_00 + 0x514);
        __ptr = __ptr_00;
        pvVar2 = __ptr_00;
      }
      else {
        uVar4 = *(undefined4 *)((int)__ptr_00 + 8);
        bVar1 = *(byte *)((int)__ptr_00 + 0xc);
        *(undefined4 *)((int)__ptr + 0x514) = *(undefined4 *)((int)__ptr_00 + 0x514);
        tnp::PPPP_DebugTrace
                  (0x100,"remove timer element with SeqNum:%d,Type:0x%02X,ElapseTime:%d\n",uVar4,
                   (uint)bVar1,uVar5);
        free(__ptr_00);
        pvVar3 = *(void **)((int)__ptr + 0x514);
        pvVar2 = __ptr;
      }
    }
  }
LAB_000350a4:
  gTimer._4_4_ = pvVar2;
  tnp::MUTEX_RELEASE((pthread_mutex_t *)gTimerLock);
  return;
}



// PPPP__thread_timer(void*)

void PPPP__thread_timer(void *param_1)

{
  st_PPPP_TimerElement_t sVar1;
  int iVar2;
  int iVar3;
  st_PPPP_TimerElement_t *psVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint local_568;
  byte local_53e;
  uchar uStack_53d;
  ushort auStack_53c [2];
  sockaddr_in asStack_538 [2];
  ushort uStack_536;
  in_addr local_534;
  uint local_528 [321];
  
  memset(local_528,0,0x500);
  tnp::PPPP_DebugTrace(0x200,"PPPP__thread_timer Running.\n");
  iVar2 = tnp::CreateSocket('\0');
  tnp::PPPP_DebugTrace(0x200,"Socket = %d\n",iVar2);
  auStack_53c[1] = 0;
  iVar3 = tnp::TryBindPort(iVar2,auStack_53c + 1);
  if (iVar3 < 0) {
    tnp::CloseSocket(iVar2);
    tnp::PPPP_DebugTrace(0x200,"Socket %d TryBindPort error, exit thread\n",iVar2);
  }
  else if (gExitTimerThread == 0) {
    local_568 = 0;
    do {
      if (local_568 == (local_568 / 0x3c) * 0x3c) {
        PPPP__Timer_RemoveMaxElapse();
      }
      iVar3 = PPPP__Timer_Timeout();
      while (iVar3 == 1) {
        psVar4 = (st_PPPP_TimerElement_t *)PPPP__Timer_Pop();
        iVar3 = 0;
        puVar10 = tnp::gP2PServerAddr;
        do {
          iVar5 = tnp::SendMessage((char *)(psVar4 + 0x14),*(int *)(psVar4 + 0x10),iVar2,
                                   (sockaddr_in *)puVar10);
          sVar1 = psVar4[0xc];
          uVar11 = *(undefined4 *)(psVar4 + 8);
          if (iVar5 < 0) {
            pcVar6 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gP2PServerAddr + iVar3 * 0x10 + 4));
            tnp::PPPP_DebugTrace
                      (4,"[Failed!!] Send 0x%02X with seq %d to %s:%d\n",(uint)(byte)sVar1,uVar11,
                       pcVar6,(*(ushort *)(puVar10 + 2) & 0xff) << 8 |
                              (uint)(*(ushort *)(puVar10 + 2) >> 8));
          }
          else {
            pcVar6 = inet_ntoa((in_addr)*(in_addr_t *)(tnp::gP2PServerAddr + iVar3 * 0x10 + 4));
            tnp::PPPP_DebugTrace
                      (4,"Send 0x%02X with seq %d to %s:%d\n",(uint)(byte)sVar1,uVar11,pcVar6,
                       (*(ushort *)(puVar10 + 2) & 0xff) << 8 |
                       (uint)(*(ushort *)(puVar10 + 2) >> 8));
          }
          iVar3 = iVar3 + 1;
          puVar10 = puVar10 + 0x10;
        } while (iVar3 != 3);
        *(int *)(psVar4 + 4) = *(int *)(psVar4 + 4) + 10;
        *(int *)psVar4 = *(int *)psVar4 + 10;
        PPPP__Timer_Push(psVar4);
        iVar3 = PPPP__Timer_Timeout();
      }
      iVar3 = tnp::PPPP_Proto_Recv_ALL
                        (iVar2,asStack_538,1000,&local_53e,auStack_53c,(char *)local_528,0x500,
                         &uStack_53d);
      if (iVar3 == 0) {
        uVar9 = (uint)auStack_53c[0];
        uVar8 = (uint)local_53e;
        pcVar6 = inet_ntoa(local_534);
        uVar12 = (uStack_536 & 0xff) << 8 | (uint)(uStack_536 >> 8);
        tnp::PPPP_DebugTrace
                  (0x400,"MsgType = 0x%02X, Size = %d from %s:%d\n",uVar8,uVar9,pcVar6,uVar12);
        uVar8 = (uint)local_53e;
        if (uVar8 == 0x93) {
          uVar9 = (local_528[0] ^ (local_528[0] >> 0x10 | local_528[0] << 0x10)) >> 8 & 0xffff00ff ^
                  (local_528[0] >> 8 | local_528[0] << 0x18);
          pcVar7 = "Recv 0x%02X(MSG_SDEV_SESSIONREPORT_ACK) with seq %d\n";
        }
        else {
          if (uVar8 != 0xa4) {
            tnp::PPPP_DebugTrace(4,"Recv Unexpected Msg 0x%02X\n");
            goto LAB_0003534c;
          }
          uVar9 = (local_528[0] ^ (local_528[0] >> 0x10 | local_528[0] << 0x10)) >> 8 & 0xffff00ff ^
                  (local_528[0] >> 8 | local_528[0] << 0x18);
          pcVar7 = "Recv 0x%02X(MSG_SENDDATA_REPORT_ACK) with seq %d\n";
        }
        tnp::PPPP_DebugTrace(4,pcVar7,uVar8,uVar9,pcVar6,uVar12);
        PPPP__Timer_Delete((local_528[0] ^ (local_528[0] >> 0x10 | local_528[0] << 0x10)) >> 8 &
                           0xffff00ff ^ (local_528[0] >> 8 | local_528[0] << 0x18));
      }
LAB_0003534c:
      local_568 = local_568 + 1;
    } while (gExitTimerThread == 0);
  }
  tnp::PPPP_DebugTrace(0x200,"PPPP__thread_timer Exit.\n");
                    // WARNING: Subroutine does not return
  pthread_exit((void *)0x0);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Timer_Clear()

void PPPP__Timer_Clear(void)

{
  void *__ptr;
  
  tnp::MUTEX_LOCK((pthread_mutex_t *)gTimerLock);
  while ((void *)gTimer != (void *)0x0) {
    __ptr = (void *)gTimer;
    gTimer._0_4_ = *(void **)((int)(void *)gTimer + 0x514);
    free(__ptr);
  }
  gTimer._4_4_ = 0;
  gTimer._0_4_ = (void *)0x0;
  tnp::MUTEX_RELEASE((pthread_mutex_t *)gTimerLock);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Timer_UnInit()

void PPPP__Timer_UnInit(void)

{
  gExitTimerThread = 1;
  tnp::WaitThreadExit(&hthread_timer);
  hthread_timer = 0;
  PPPP__Timer_Clear();
  tnp::MUTEX_DESTROY((pthread_mutex_t *)gTimerLock);
  tnp::MUTEX_DESTROY((pthread_mutex_t *)gSeqNumLock);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Device_UnInit()

undefined4 PPPP__Device_UnInit(void)

{
  PPPP__Timer_UnInit();
  tnp::PPPP__ExitSuperDevice('\0');
  tnp::WaitThreadExit((ulong *)(tnp::gSDevInfo + 0x68));
  tnp::gSDevInfo._104_4_ = 0;
  PPPP__ResetP2PTCPSocketInfo();
  while (tnp::gInListenFlag != '\0') {
    tnp::mSecSleep(10);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// PPPP__Generate_SeqNum()

int PPPP__Generate_SeqNum(void)

{
  int iVar1;
  
  tnp::MUTEX_LOCK((pthread_mutex_t *)gSeqNumLock);
  iVar1 = gSeqNum;
  gSeqNum = gSeqNum + 1;
  tnp::MUTEX_RELEASE((pthread_mutex_t *)gSeqNumLock);
  return iVar1;
}



// PPPP__Send_SessionReport_SuperDevice(char, unsigned int, unsigned int, unsigned int, unsigned
// int, unsigned int)

undefined4
PPPP__Send_SessionReport_SuperDevice
          (char param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  st_PPPP_TimerElement_t *__s;
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  __s = malloc(0x518);
  if (__s != (st_PPPP_TimerElement_t *)0x0) {
    memset(__s,0,0x518);
    uVar3 = tnp::getCurTime();
    uVar1 = FUN_000486fc((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1000,0);
    *(undefined4 *)__s = uVar1;
    uVar2 = PPPP__Generate_SeqNum();
    __s[0xc] = (st_PPPP_TimerElement_t)0x93;
    *(undefined4 *)(__s + 4) = 0;
    *(undefined4 *)(__s + 0x514) = 0;
    *(uint *)(__s + 8) = uVar2;
    uVar1 = tnp::PPPP_Proto_Generate_SDevSessionReport
                      ((char *)(__s + 0x14),uVar2,tnp::gSDevInfo + 0x4c,tnp::gSDevInfo._92_4_,
                       tnp::gSDevInfo + 0x54,tnp::gSDevInfo + 0x38,tnp::gSDevInfo._72_4_,
                       tnp::gSDevInfo + 0x40,param_1,param_2,param_3,param_4,param_5,param_6);
    *(undefined4 *)(__s + 0x10) = uVar1;
    PPPP__Timer_Push(__s);
  }
  return 0;
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// PPPP_Thread_SuperDevice(void*)

void PPPP_Thread_SuperDevice(void *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  size_t sVar10;
  undefined4 uVar11;
  uint uVar12;
  sockaddr_in sVar13;
  char cVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  bool bVar18;
  uint uVar19;
  sockaddr_in *psVar20;
  sockaddr_in *psVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  uint local_b68;
  uint local_b64;
  uint local_b60;
  uint local_b58;
  uint local_b54;
  uint local_b50;
  uint local_b4c;
  uint local_b48;
  ulong local_b34;
  ulong local_b30;
  uint local_b28;
  byte local_b12;
  uchar uStack_b11;
  ushort uStack_b10;
  ushort uStack_b0e;
  uint local_b0c;
  uint local_b08;
  uint local_b04;
  uint local_b00;
  uint local_afc;
  sockaddr_in local_af8 [2];
  ushort uStack_af6;
  in_addr local_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  uint local_ae8 [9];
  uint uStack_ac4;
  uint uStack_ac0;
  uint uStack_abc;
  uint uStack_ab8;
  uint uStack_ab4;
  uint uStack_ab0;
  uint local_aac;
  undefined4 local_aa8;
  in_addr local_aa4;
  undefined4 local_a68;
  in_addr local_a64;
  sockaddr_in asStack_a28 [16];
  sockaddr_in local_a18 [2];
  ushort uStack_a16;
  uint local_a14;
  char local_528;
  char cStack_527;
  char acStack_524 [4];
  char acStack_520 [4];
  char acStack_51c [4];
  undefined2 local_518 [2];
  uint local_514;
  uint local_510;
  char acStack_50c [4];
  ushort local_508;
  undefined1 local_506;
  
  memset(asStack_a28,0,0x500);
  tnp::PPPP_DebugTrace(0x200,"PPPP_Thread_SuperDevice Running.\n");
  tnp::gSDevInfo._0_4_ = tnp::CreateSocket('\0');
  sVar13 = (sockaddr_in)0x0;
  tnp::PPPP_DebugTrace(0x200,"Socket = %d\n",tnp::gSDevInfo._0_4_);
  tnp::SetSocketBroadcast(tnp::gSDevInfo._0_4_);
  uStack_b0e = 0;
  iVar2 = tnp::TryBindPort(tnp::gSDevInfo._0_4_,&uStack_b0e);
  if (iVar2 < 0) {
    tnp::CloseSocket(tnp::gSDevInfo._0_4_);
    tnp::PPPP__ExitSuperDevice('\x06');
  }
  else {
    tnp::PPPP_DebugTrace(0x200,"UDP Port = %d\n",(uint)uStack_b0e);
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    tnp::gSDevInfo._52_4_ =
         iVar2 % 0x100 + (iVar3 % 0x100) * 0x100 + (iVar4 % 0x100) * 0x10000 + iVar5 * 0x1000000;
    if (tnp::gSDevInfo[0x6c] == '\x01') {
      if (tnp::gSDevInfo[0x61] == '\0') {
        uVar19 = 0;
        local_b54 = 0;
        local_b34 = 0;
        local_b30 = 0;
        do {
          if (uVar19 == (uVar19 / 400) * 400) {
            psVar20 = (sockaddr_in *)tnp::gP2PServerAddr;
            do {
              psVar21 = psVar20 + 0x10;
              tnp::PPPP_Proto_Send_SDevLgn
                        (tnp::gSDevInfo._0_4_,psVar20,tnp::gSDevInfo + 0x38,tnp::gSDevInfo._72_4_,
                         tnp::gSDevInfo + 0x40);
              psVar20 = psVar21;
            } while (psVar21 != (sockaddr_in *)&tnp::gTNPSessionLock);
          }
          uVar6 = tnp::PPPP_Proto_Recv_ALL
                            (tnp::gSDevInfo._0_4_,local_af8,100,&local_b12,&uStack_b10,
                             (char *)asStack_a28,0x500,&uStack_b11);
          if (uVar6 == 0) {
            uVar12 = (uint)uStack_b10;
            uVar17 = (uint)local_b12;
            pcVar7 = inet_ntoa(local_af4);
            uVar15 = (uStack_af6 & 0xff) << 8 | (uint)(uStack_af6 >> 8);
            tnp::PPPP_DebugTrace
                      (0x400,"MsgType = 0x%02X, Size = %d from %s:%d\n",uVar17,uVar12,pcVar7,uVar15)
            ;
            sVar13 = local_a18[0];
            if (local_b12 == 0x74) {
              if (uStack_b10 == 0x54) {
                local_ae8[1] = 0;
                local_ae8[2] = 0;
                local_ae8[3] = 0;
                local_ae8[6] = 0;
                local_ae8[5] = 0;
                local_ae8[7] = 0;
                local_ae8[4] = 0;
                local_b08 = uVar6;
                local_b04 = uVar6;
                local_b00 = uVar6;
                local_afc = uVar6;
                local_ae8[0] = uVar6;
                local_ae8[8] = uVar6;
                uStack_ac4 = uVar6;
                uStack_ac0 = uVar6;
                uStack_abc = uVar6;
                uStack_ab8 = uVar6;
                uStack_ab4 = uVar6;
                uStack_ab0 = uVar6;
                local_aac = uVar6;
                tnp::PPPP_Proto_Read_RlyPort_EX
                          ((st_PPPP_RlyPort_EX *)asStack_a28,(char *)&local_b08,&local_b0c,
                           (char *)&local_b00,(char *)local_ae8,(char *)(local_ae8 + 8));
                if (local_b0c < 1000000) {
                  pcVar7 = inet_ntoa(local_af4);
                  tnp::PPPP_DebugTrace
                            (0x200,"Recv New MSG_RLY_PORT_EX from %s:%d\n",pcVar7,
                             (uStack_af6 & 0xff) << 8 | (uint)(uStack_af6 >> 8));
                  memset(&local_aa8,0,0x40);
                  memset(&local_a68,0,0x40);
                  snprintf((char *)&local_aa8,0x40,"%.*s:%s-%06d-%s",0x20,local_ae8,&local_b08,
                           local_b0c,&local_b00);
                  sVar9 = strlen(tnp::gSuperDeviceKey);
                  sVar10 = strlen((char *)&local_aa8);
                  iVar4 = 3;
                  tnp::PPPP_MakeSha1(tnp::gSuperDeviceKey,sVar9,(char *)&local_aa8,sVar10,
                                     (char *)&local_a68);
                  iVar3 = strncmp((char *)(local_ae8 + 8),(char *)&local_a68,0x20);
                  iVar2 = 0;
                  if (iVar3 != 0) {
                    iVar2 = 0xfb;
                  }
                  tnp::PPPP_DebugTrace
                            (0x200,
                             "Send MSG_RLY_PORT_ACK with magicword:%x, MyWanAddr.sin_port:%d, Result:%d\n"
                             ,tnp::gSDevInfo._52_4_,
                             ((ushort)tnp::gSDevInfo._38_2_ & 0xff) << 8 |
                             (uint)((ushort)tnp::gSDevInfo._38_2_ >> 8),iVar2);
                  tnp::PPPP_Proto_Send_RlyPortAck
                            (tnp::gSDevInfo._0_4_,local_af8,tnp::gSDevInfo._52_4_,
                             tnp::gSDevInfo._38_2_ << 8 | (ushort)tnp::gSDevInfo._38_2_ >> 8,
                             (char)iVar2);
                  do {
                    tnp::mSecSleep(10);
                    tnp::PPPP_Proto_Send_RlyPortAck
                              (tnp::gSDevInfo._0_4_,local_af8,tnp::gSDevInfo._52_4_,
                               tnp::gSDevInfo._38_2_ << 8 | (ushort)tnp::gSDevInfo._38_2_ >> 8,
                               (char)iVar2);
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                  strncpy(tnp::gSDevInfo + 0x4c,(char *)&local_b08,7);
                  strncpy(tnp::gSDevInfo + 0x54,(char *)&local_b00,7);
                  tnp::gSDevInfo._20_4_ = _local_af8;
                  tnp::gSDevInfo._24_4_ = local_af4.s_addr;
                  tnp::gSDevInfo._28_4_ = uStack_af0;
                  tnp::gSDevInfo._32_4_ = uStack_aec;
                  tnp::gSDevInfo._92_4_ = local_b0c;
                  memset(&local_528,0,0x40);
                  sprintf(&local_528,"%s,Result=%d","Recv MSG_RLY_PORT_EX",iVar2);
                  PPPP__Send_Report_SuperDevice_Connect(&local_528);
                  if (iVar2 == 0) {
                    tnp::gSDevInfo[0x6c] = '\x02';
                  }
                  else {
                    tnp::gSDevInfo._76_4_ = 0;
                    tnp::gSDevInfo._80_4_ = 0;
                    tnp::gSDevInfo._92_4_ = 0;
                    tnp::gSDevInfo._84_4_ = 0;
                    tnp::gSDevInfo._88_4_ = 0;
                    tnp::gSDevInfo._20_4_ = 0;
                    tnp::gSDevInfo._24_4_ = 0;
                    tnp::gSDevInfo._28_4_ = 0;
                    tnp::gSDevInfo._32_4_ = 0;
                  }
                }
                else {
                  pcVar7 = inet_ntoa(local_af4);
                  tnp::PPPP_DebugTrace
                            (0x200,"Recv MSG_RLY_PORT_EX from %s:%d with Invalid SN:%d\n",pcVar7,
                             (uStack_af6 & 0xff) << 8 | (uint)(uStack_af6 >> 8),local_b0c);
                }
              }
              else {
                pcVar7 = inet_ntoa(local_af4);
                tnp::PPPP_DebugTrace
                          (2,"<<<DataSize != %d>>> MSG_RLY_PORT_EX from %s:%d\n",0x54,pcVar7,
                           (uStack_af6 & 0xff) << 8 | (uint)(uStack_af6 >> 8),uVar15);
              }
            }
            else if (local_b12 < 0x75) {
              if (local_b12 == 2) {
                tnp::ntohAddr(asStack_a28,(sockaddr_in *)&local_aa8);
                tnp::ntohAddr(local_a18,(sockaddr_in *)&local_a68);
                pcVar8 = inet_ntoa(local_aa4);
                iVar2 = 3;
                tnp::PPPP_DebugTrace
                          (0x200,"MSG_HELLO_TO, ToAddr1= %s:%d\n",pcVar8,
                           (local_aa8._2_2_ & 0xff) << 8 | (uint)(local_aa8._2_2_ >> 8),pcVar7,
                           uVar15);
                pcVar7 = inet_ntoa(local_a64);
                tnp::PPPP_DebugTrace
                          (0x200,"MSG_HELLO_TO, ToAddr2= %s:%d\n",pcVar7,
                           (local_a68._2_2_ & 0xff) << 8 | (uint)(local_a68._2_2_ >> 8));
                tnp::PPPP_Proto_Send_HelloToAck(tnp::gSDevInfo._0_4_,(sockaddr_in *)&local_aa8);
                tnp::PPPP_Proto_Send_HelloToAck(tnp::gSDevInfo._0_4_,(sockaddr_in *)&local_a68);
                do {
                  tnp::mSecSleep(10);
                  tnp::PPPP_Proto_Send_HelloToAck(tnp::gSDevInfo._0_4_,(sockaddr_in *)&local_aa8);
                  tnp::PPPP_Proto_Send_HelloToAck(tnp::gSDevInfo._0_4_,(sockaddr_in *)&local_a68);
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
                uVar25 = tnp::getCurTime();
                uVar11 = (undefined4)((ulonglong)uVar25 >> 0x20);
                if ((local_b54 == 0) ||
                   (iVar2 = PPPP__HelloToIpEqual
                                      (local_b30,local_b34,local_aa4.s_addr,local_a64.s_addr),
                   iVar2 == 0)) {
                  uVar6 = FUN_000486fc((int)uVar25,uVar11);
                }
                else {
                  uVar25 = FUN_000486fc((int)uVar25,uVar11,1000,0);
                  uVar6 = (uint)uVar25;
                  if ((uint)((ulonglong)uVar25 >> 0x20) == (uint)(uVar6 < local_b54) &&
                      uVar6 - local_b54 < 0xb) goto joined_r0x00035aac;
                }
                memset(&local_528,0,0x40);
                local_528 = 'R';
                cStack_527 = 'e';
                register0x00000022 = 'c';
                register0x00000023 = 'v';
                acStack_524[0] = ' ';
                acStack_524[1] = 'M';
                acStack_524[2] = 'S';
                acStack_524[3] = 'G';
                acStack_520[0] = '_';
                acStack_520[1] = 'H';
                acStack_520[2] = 'E';
                acStack_520[3] = 'L';
                acStack_51c[0] = 'L';
                acStack_51c[1] = 'O';
                acStack_51c[2] = '_';
                acStack_51c[3] = 'T';
                local_518[0] = 0x4f;
                PPPP__Send_Report_SuperDevice_Connect(&local_528);
                local_b54 = uVar6;
                local_b34 = (ulong)local_a64;
                local_b30 = (ulong)local_aa4;
              }
              else if (local_b12 == 0x70) {
                pcVar8 = inet_ntoa(local_af4);
                tnp::PPPP_DebugTrace
                          (0x200,"MSG_RLY_HELLO is not support from %s:%d\n",pcVar8,
                           (uStack_af6 & 0xff) << 8 | (uint)(uStack_af6 >> 8),pcVar7,uVar15);
              }
            }
            else if (local_b12 == 0x76) {
              if (uStack_b10 == 0) {
                pcVar8 = inet_ntoa(local_af4);
                tnp::PPPP_DebugTrace
                          (0x200,"MSG_RLY_HELLO_SDEV from %s:%d\n",pcVar8,
                           (uStack_af6 & 0xff) << 8 | (uint)(uStack_af6 >> 8),pcVar7,uVar15);
                tnp::PPPP_Proto_Send_RlyHelloSDevAck(tnp::gSDevInfo._0_4_,local_af8);
                memset(&local_528,0,0x40);
                local_528 = 'R';
                cStack_527 = 'e';
                register0x00000022 = 'c';
                register0x00000023 = 'v';
                acStack_524[0] = ' ';
                acStack_524[1] = 'M';
                acStack_524[2] = 'S';
                acStack_524[3] = 'G';
                acStack_520[0] = '_';
                acStack_520[1] = 'R';
                acStack_520[2] = 'L';
                acStack_520[3] = 'Y';
                acStack_51c[0] = '_';
                acStack_51c[1] = 'H';
                acStack_51c[2] = 'E';
                acStack_51c[3] = 'L';
                local_518[0]._0_1_ = 'L';
                local_518[0]._1_1_ = 'O';
                local_518[1]._0_1_ = '_';
                local_518[1]._1_1_ = 'S';
                local_514._0_1_ = 'D';
                local_514._1_1_ = 'E';
                local_514._2_1_ = 'V';
                local_514._3_1_ = '\0';
                PPPP__Send_Report_SuperDevice_Connect(&local_528);
              }
              else {
                pcVar8 = inet_ntoa(local_af4);
                tnp::PPPP_DebugTrace
                          (0x200,"<<<DataSize != 0>>>\n",pcVar8,
                           (uStack_af6 & 0xff) << 8 | (uint)(uStack_af6 >> 8),pcVar7,uVar15);
              }
            }
            else if (local_b12 == 0x91) {
              if (local_a18[0] != (sockaddr_in)0x0) {
                uVar25 = tnp::getCurTime();
                uVar19 = (local_a14 ^ (local_a14 >> 0x10 | local_a14 << 0x10)) >> 8 & 0xffff00ff ^
                         (local_a14 >> 8 | local_a14 << 0x18);
                iVar2 = FUN_000486fc((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),1000,0);
                tnp::gSDevInfo._100_4_ = uVar19 + iVar2;
                tnp::PPPP_DebugTrace
                          (0x200,
                           "MSG_SDEV_LGN_ACK Failed with result %d, DelaySec %d, nextworktime %d\n",
                           (uint)(byte)local_a18[0],uVar19,tnp::gSDevInfo._100_4_,uVar15);
                tnp::PPPP__ExitSuperDevice('\x05');
                goto LAB_000359c0;
              }
              uVar6 = (uint)uStack_a16;
              uVar1 = uStack_a16 >> 8;
              local_b4c = (uVar6 << 8 & 0xffff) >> 0xc;
              local_b28 = (local_a14 ^ (local_a14 >> 0x10 | local_a14 << 0x10)) >> 8 & 0xffff00ff ^
                          (local_a14 >> 8 | local_a14 << 0x18);
              tnp::ntohAddr(asStack_a28,(sockaddr_in *)(tnp::gSDevInfo + 0x24));
              pcVar7 = inet_ntoa((in_addr)tnp::gSDevInfo._40_4_);
              uVar6 = uVar6 << 8 & 0xffff | (uint)uVar1;
              local_b50 = uVar6 << 0x14;
              tnp::PPPP_DebugTrace
                        (0x200,
                         "MSG_SDEV_LGN_ACK Success, WanAddr= %s:%d MaxBytes:%llu(%dMB) MaxPeriodSec:%u\n"
                         ,pcVar7,((ushort)tnp::gSDevInfo._38_2_ & 0xff) << 8 |
                                 (uint)((ushort)tnp::gSDevInfo._38_2_ >> 8),local_b50,local_b4c,
                         uVar6,local_b28);
            }
          }
joined_r0x00035aac:
          if (tnp::gSDevInfo[0x6c] != '\x01') goto LAB_00035ab0;
          uVar19 = uVar19 + 1;
        } while (tnp::gSDevInfo[0x61] == '\0');
      }
      tnp::PPPP__ExitSuperDevice('\t');
      sVar13 = (sockaddr_in)0x0;
    }
    else {
      local_b54 = 0;
      local_b34 = 0;
      local_b30 = 0;
LAB_00035ab0:
      if (tnp::gSDevInfo[0x6c] != '\x03') {
        uVar6 = 0;
        iVar2 = 1;
        iVar3 = 1;
        uVar19 = 0;
        local_b68 = 0;
        do {
          if (tnp::gSDevInfo[0x6c] != '\x02') break;
          iVar4 = tnp::PPPP_Proto_Recv_ALL
                            (tnp::gSDevInfo._0_4_,local_af8,100,&local_b12,&uStack_b10,
                             (char *)asStack_a28,0x500,&uStack_b11);
          if (iVar4 == 0) {
            uVar17 = (uint)uStack_b10;
            uVar15 = (uint)local_b12;
            pcVar7 = inet_ntoa(local_af4);
            uVar6 = (uStack_af6 & 0xff) << 8 | (uint)(uStack_af6 >> 8);
            tnp::PPPP_DebugTrace
                      (0x400,"MsgType = 0x%02X, Size = %d from %s:%d\n",uVar15,uVar17,pcVar7,uVar6);
            if (local_b12 == 2) {
              tnp::ntohAddr(asStack_a28,(sockaddr_in *)&local_aa8);
              tnp::ntohAddr(local_a18,(sockaddr_in *)&local_a68);
              pcVar8 = inet_ntoa(local_aa4);
              tnp::PPPP_DebugTrace
                        (0x200,"MSG_HELLO_TO, ToAddr1= %s:%d\n",pcVar8,
                         (local_aa8._2_2_ & 0xff) << 8 | (uint)(local_aa8._2_2_ >> 8),pcVar7,uVar6);
              pcVar7 = inet_ntoa(local_a64);
              tnp::PPPP_DebugTrace
                        (0x200,"MSG_HELLO_TO, ToAddr2= %s:%d\n",pcVar7,
                         (local_a68._2_2_ & 0xff) << 8 | (uint)(local_a68._2_2_ >> 8));
              tnp::PPPP_Proto_Send_HelloToAck(tnp::gSDevInfo._0_4_,(sockaddr_in *)&local_aa8);
              tnp::PPPP_Proto_Send_HelloToAck(tnp::gSDevInfo._0_4_,(sockaddr_in *)&local_a68);
              iVar4 = 3;
              do {
                tnp::mSecSleep(10);
                tnp::PPPP_Proto_Send_HelloToAck(tnp::gSDevInfo._0_4_,(sockaddr_in *)&local_aa8);
                tnp::PPPP_Proto_Send_HelloToAck(tnp::gSDevInfo._0_4_,(sockaddr_in *)&local_a68);
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              uVar25 = tnp::getCurTime();
              uVar11 = (undefined4)((ulonglong)uVar25 >> 0x20);
              if ((local_b54 == 0) ||
                 (iVar4 = PPPP__HelloToIpEqual
                                    (local_b30,local_b34,local_aa4.s_addr,local_a64.s_addr),
                 iVar4 == 0)) {
                local_b60 = FUN_000486fc((int)uVar25,uVar11);
              }
              else {
                uVar25 = FUN_000486fc((int)uVar25,uVar11,1000,0);
                local_b60 = (uint)uVar25;
                if ((uint)((ulonglong)uVar25 >> 0x20) == (uint)(local_b60 < local_b54) &&
                    local_b60 - local_b54 < 0xb) goto LAB_000360c0;
              }
              memset(&local_528,0,0x40);
              local_528 = 'R';
              cStack_527 = 'e';
              register0x00000022 = 'c';
              register0x00000023 = 'v';
              acStack_524[0] = ' ';
              acStack_524[1] = 'M';
              acStack_524[2] = 'S';
              acStack_524[3] = 'G';
              acStack_520[0] = '_';
              acStack_520[1] = 'H';
              acStack_520[2] = 'E';
              acStack_520[3] = 'L';
              acStack_51c[0] = 'L';
              acStack_51c[1] = 'O';
              acStack_51c[2] = '_';
              acStack_51c[3] = 'T';
              local_518[0] = 0x4f;
              local_b54 = local_b60;
              PPPP__Send_Report_SuperDevice_Connect(&local_528);
              local_b30 = local_aa4.s_addr;
              local_b34 = local_a64.s_addr;
LAB_000360c0:
              if (uStack_b10 == 0x1c) {
                local_aa8 = 0;
                local_aa4.s_addr = 0;
                local_a68 = 0;
                local_a64.s_addr = 0;
                tnp::PPPP_Proto_Read_RlyPkt
                          ((st_PPPP_RlyPkt *)asStack_a28,(char *)&local_aa8,local_ae8 + 8,
                           (char *)&local_a68,(char *)&local_b00,local_ae8);
                if (tnp::gSDevInfo._52_4_ == local_ae8[0]) {
                  if ((local_b00 & 0xff) == 0) {
                    if (iVar3 != 0) {
                      memset(&local_528,0,0x40);
                      local_528 = 'R';
                      cStack_527 = 'e';
                      register0x00000022 = 'c';
                      register0x00000023 = 'v';
                      acStack_524[0] = ' ';
                      acStack_524[1] = 'M';
                      acStack_524[2] = 'S';
                      acStack_524[3] = 'G';
                      acStack_520[0] = '_';
                      acStack_520[1] = 'R';
                      acStack_520[2] = 'L';
                      acStack_520[3] = 'Y';
                      acStack_51c[0] = '_';
                      acStack_51c[1] = 'P';
                      acStack_51c[2] = 'K';
                      acStack_51c[3] = 'T';
                      local_518[0]._0_1_ = ',';
                      local_518[0]._1_1_ = 'A';
                      local_518[1]._0_1_ = 'p';
                      local_518[1]._1_1_ = 'p';
                      local_514 = local_514 & 0xffffff00;
                      PPPP__Send_Report_SuperDevice_Connect(&local_528);
                    }
                    strncpy(tnp::gSDevInfo + 0x4c,(char *)&local_aa8,8);
                    strncpy(tnp::gSDevInfo + 0x54,(char *)&local_a68,8);
                    uVar11 = tnp::gSDevInfo._0_4_;
                    tnp::gSDevInfo._20_4_ = _local_af8;
                    tnp::gSDevInfo._24_4_ = local_af4.s_addr;
                    tnp::gSDevInfo._28_4_ = uStack_af0;
                    tnp::gSDevInfo._32_4_ = uStack_aec;
                    tnp::gSDevInfo._92_4_ = local_ae8[8];
                    pcVar7 = inet_ntoa(local_af4);
                    tnp::PPPP_DebugTrace
                              (0x200,"skt=%d, ClientAddr=%s:%d\n",uVar11,pcVar7,
                               ((ushort)tnp::gSDevInfo._22_2_ & 0xff) << 8 |
                               (uint)((ushort)tnp::gSDevInfo._22_2_ >> 8));
                    local_b68 = 1;
                  }
                  else {
                    if (iVar2 != 0) {
                      memset(&local_528,0,0x40);
                      local_528 = 'R';
                      cStack_527 = 'e';
                      register0x00000022 = 'c';
                      register0x00000023 = 'v';
                      acStack_524[0] = ' ';
                      acStack_524[1] = 'M';
                      acStack_524[2] = 'S';
                      acStack_524[3] = 'G';
                      acStack_520[0] = '_';
                      acStack_520[1] = 'R';
                      acStack_520[2] = 'L';
                      acStack_520[3] = 'Y';
                      acStack_51c[0] = '_';
                      acStack_51c[1] = 'P';
                      acStack_51c[2] = 'K';
                      acStack_51c[3] = 'T';
                      local_518[0]._0_1_ = ',';
                      local_518[0]._1_1_ = 'D';
                      local_518[1]._0_1_ = 'e';
                      local_518[1]._1_1_ = 'v';
                      local_514._0_1_ = 'i';
                      local_514._1_1_ = 'c';
                      local_514._2_1_ = 'e';
                      local_514._3_1_ = '\0';
                      PPPP__Send_Report_SuperDevice_Connect(&local_528);
                    }
                    uVar11 = tnp::gSDevInfo._0_4_;
                    tnp::gSDevInfo._4_4_ = _local_af8;
                    tnp::gSDevInfo._8_4_ = local_af4.s_addr;
                    tnp::gSDevInfo._12_4_ = uStack_af0;
                    tnp::gSDevInfo._16_4_ = uStack_aec;
                    pcVar7 = inet_ntoa(local_af4);
                    uVar19 = 1;
                    tnp::PPPP_DebugTrace
                              (0x200,"skt=%d, DeviceAddr=%s:%d\n",uVar11,pcVar7,
                               ((ushort)tnp::gSDevInfo._6_2_ & 0xff) << 8 |
                               (uint)((ushort)tnp::gSDevInfo._6_2_ >> 8));
                  }
                  uVar6 = 0;
                  goto LAB_00035b2c;
                }
              }
            }
            else if (local_b12 == 0x83) goto LAB_000360c0;
            uVar6 = 0;
          }
          else {
            if (uVar6 % 5 == 0) {
LAB_00035b2c:
              if (uVar19 == 0 && local_b68 == 0) {
                tnp::PPPP_Proto_Send_RlyPortAck
                          (tnp::gSDevInfo._0_4_,(sockaddr_in *)(tnp::gSDevInfo + 0x14),
                           tnp::gSDevInfo._52_4_,
                           tnp::gSDevInfo._38_2_ << 8 | (ushort)tnp::gSDevInfo._38_2_ >> 8,'\0');
                uVar19 = 0;
                local_b68 = 0;
              }
            }
            if (0x32 < uVar6) {
              tnp::PPPP__ExitSuperDevice('\x04');
              goto LAB_00036200;
            }
            uVar6 = uVar6 + 1;
          }
          iVar3 = 1 - local_b68;
          if (1 < local_b68) {
            iVar3 = 0;
          }
          iVar2 = 1 - uVar19;
          if (1 < uVar19) {
            iVar2 = 0;
          }
        } while (iVar2 != 0 || iVar3 != 0);
        if (tnp::gSDevInfo[0x6c] != '\x03') {
          tnp::PPPP_Proto_Send_RlyRdy
                    (tnp::gSDevInfo._0_4_,(sockaddr_in *)(tnp::gSDevInfo + 0x14),
                     tnp::gSDevInfo + 0x4c,tnp::gSDevInfo._92_4_,tnp::gSDevInfo + 0x54);
          tnp::PPPP_Proto_Send_RlyRdy
                    (tnp::gSDevInfo._0_4_,(sockaddr_in *)(tnp::gSDevInfo + 4),tnp::gSDevInfo + 0x4c,
                     tnp::gSDevInfo._92_4_,tnp::gSDevInfo + 0x54);
          memset(&local_528,0,0x40);
          local_528 = 'S';
          cStack_527 = 'e';
          register0x00000022 = 'n';
          register0x00000023 = 'd';
          acStack_524[0] = ' ';
          acStack_524[1] = 'M';
          acStack_524[2] = 'S';
          acStack_524[3] = 'G';
          acStack_520[0] = '_';
          acStack_520[1] = 'R';
          acStack_520[2] = 'L';
          acStack_520[3] = 'Y';
          acStack_51c[0] = '_';
          acStack_51c[1] = 'R';
          acStack_51c[2] = 'D';
          acStack_51c[3] = 'Y';
          local_518[0]._0_1_ = ' ';
          local_518[0]._1_1_ = 'T';
          local_518[1]._0_1_ = 'o';
          local_518[1]._1_1_ = ' ';
          local_514._0_1_ = 'A';
          local_514._1_1_ = 'p';
          local_514._2_1_ = 'p';
          local_514._3_1_ = ' ';
          local_510._0_1_ = 'A';
          local_510._1_1_ = 'n';
          local_510._2_1_ = 'd';
          local_510._3_1_ = ' ';
          acStack_50c[0] = 'D';
          acStack_50c[1] = 'e';
          acStack_50c[2] = 'v';
          acStack_50c[3] = 'i';
          local_508 = 0x6563;
          local_506 = 0;
          PPPP__Send_Report_SuperDevice_Connect(&local_528);
          if (tnp::gSDevInfo[0x6c] != '\x02') {
            tnp::PPPP__ExitSuperDevice('\x01');
            sVar13 = (sockaddr_in)0x0;
            goto LAB_000359c0;
          }
          uVar6 = 0;
          local_b68 = 0;
          uVar19 = 0;
          local_b60 = 0;
          local_b48 = 0;
          local_b54 = 0;
          local_b58 = 0;
          local_b64 = 0;
          bVar18 = false;
          bVar24 = false;
          do {
            iVar2 = tnp::over_time_receive
                              (tnp::gSDevInfo._0_4_,&local_528,0x500,(sockaddr_in *)&local_a68,100);
            if (iVar2 == 0) {
              uVar19 = uVar19 + 1;
              if ((!bVar24) && (uVar19 % 5 == 0)) {
                tnp::PPPP_Proto_Send_RlyRdy
                          (tnp::gSDevInfo._0_4_,(sockaddr_in *)(tnp::gSDevInfo + 0x14),
                           tnp::gSDevInfo + 0x4c,tnp::gSDevInfo._92_4_,tnp::gSDevInfo + 0x54);
              }
              if ((!bVar18) && (uVar19 % 5 == 0)) {
                tnp::PPPP_Proto_Send_RlyRdy
                          (tnp::gSDevInfo._0_4_,(sockaddr_in *)(tnp::gSDevInfo + 4),
                           tnp::gSDevInfo + 0x4c,tnp::gSDevInfo._92_4_,tnp::gSDevInfo + 0x54);
              }
              if (0x32 < uVar19) {
                if ((bool)(bVar18 & bVar24)) {
                  tnp::PPPP__ExitSuperDevice('\x03');
                  bVar24 = true;
                }
                else {
                  tnp::PPPP__ExitSuperDevice('\x04');
                }
                break;
              }
            }
            else {
              if (iVar2 < 0) {
                tnp::PPPP__ExitSuperDevice('\a');
                break;
              }
              cVar14 = cStack_527;
              if (!(bool)(bVar24 ^ 1U) && bVar18) {
                iVar3 = tnp::AddrCompare((sockaddr_in *)&local_a68,
                                         (sockaddr_in *)(tnp::gSDevInfo + 0x14));
                uVar6 = uVar6 + 1;
                if (iVar3 == 0) {
                  tnp::SendMessage(&local_528,iVar2,tnp::gSDevInfo._0_4_,
                                   (sockaddr_in *)(tnp::gSDevInfo + 4));
                  local_b64 = local_b64 + iVar2;
                  if (cVar14 == -0x30) {
                    local_b54 = local_b54 + iVar2;
                  }
                }
                else {
                  iVar3 = tnp::AddrCompare((sockaddr_in *)&local_a68,
                                           (sockaddr_in *)(tnp::gSDevInfo + 4));
                  if (iVar3 == 0) {
                    tnp::SendMessage(&local_528,iVar2,tnp::gSDevInfo._0_4_,
                                     (sockaddr_in *)(tnp::gSDevInfo + 0x14));
                    local_b58 = local_b58 + iVar2;
                    if (cVar14 == -0x30) {
                      local_b48 = local_b48 + iVar2;
                    }
                  }
                  else {
                    local_b68 = local_b68 + 1;
                    if ((int)local_b68 < 4) {
                      pcVar7 = inet_ntoa(local_a64);
                      tnp::PPPP_DebugTrace
                                (0x10,
                                 "Recv packet from wrong address %s:%d, device:%s-%06d, size:%d\n",
                                 pcVar7,(local_a68._2_2_ & 0xff) << 8 | (uint)(local_a68._2_2_ >> 8)
                                 ,0x693b4,tnp::gSDevInfo._92_4_,iVar2);
                    }
                  }
                }
                if (uVar6 == (uVar6 / 10) * 10) {
                  bVar24 = local_b4c <= CARRY4(local_b64,local_b58);
                  if (CARRY4(local_b64,local_b58) == local_b4c) {
                    bVar24 = local_b50 <= local_b64 + local_b58;
                  }
                  if (bVar24) {
                    tnp::PPPP__ExitSuperDevice('\b');
                  }
                  uVar25 = tnp::getCurTime();
                  iVar2 = FUN_000486fc((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),1000,0);
                  if (local_b28 <= iVar2 - local_b60) {
                    tnp::PPPP__ExitSuperDevice('\b');
                  }
                  tnp::PPPP_DebugTrace
                            (0x200,
                             "Check limits clientPacketSize:%lu,devicePacketSize:%lu,clientDRWSize:%lu,deviceDRWSize:%lu,maxBytes:%llu,timeInterval:%lu,maxPeriodSec:%lu\n"
                             ,local_b64,local_b58,local_b54,local_b48,local_b50,local_b4c,
                             iVar2 - local_b60,local_b28);
                  uVar19 = 0;
                  bVar24 = true;
                }
                else {
                  uVar19 = 0;
                  bVar24 = true;
                }
                goto LAB_000364a8;
              }
              bVar16 = bVar24;
              if (local_528 == -0xf) {
                bVar23 = cStack_527 == -0x30;
                bVar22 = cStack_527 == -0x20;
                if (!bVar22 && !bVar23) goto LAB_00036520;
                iVar3 = tnp::AddrCompare((sockaddr_in *)&local_a68,
                                         (sockaddr_in *)(tnp::gSDevInfo + 0x14));
                if (iVar3 == 0) {
                  local_b64 = local_b64 + iVar2;
                  if (bVar23) {
                    local_b54 = local_b54 + iVar2;
                  }
                  bVar24 = true;
                  bVar16 = bVar22 || bVar23;
                }
                else {
                  iVar3 = tnp::AddrCompare((sockaddr_in *)&local_a68,
                                           (sockaddr_in *)(tnp::gSDevInfo + 4));
                  if (iVar3 == 0) {
                    local_b58 = local_b58 + iVar2;
                    if (bVar23) {
                      bVar18 = true;
                      local_b48 = local_b48 + iVar2;
                    }
                    else {
                      bVar18 = true;
                    }
                  }
                  else {
                    local_b68 = local_b68 + 1;
                    if ((int)local_b68 < 4) {
                      pcVar7 = inet_ntoa(local_a64);
                      tnp::PPPP_DebugTrace
                                (0x10,
                                 "Recv packet from wrong address %s:%d, device:%s-%06d, size:%d\n",
                                 pcVar7,(local_a68._2_2_ & 0xff) << 8 | (uint)(local_a68._2_2_ >> 8)
                                 ,0x693b4,tnp::gSDevInfo._92_4_,iVar2);
                    }
                  }
                  if ((bool)(bVar24 ^ 1U)) {
                    pcVar7 = inet_ntoa((in_addr)tnp::gSDevInfo._24_4_);
                    tnp::PPPP_DebugTrace
                              (0x10,"Resend MSG_RLY_RDY to App %s:%d, device:%s-%06d\n",pcVar7,
                               ((ushort)tnp::gSDevInfo._22_2_ & 0xff) << 8 |
                               (uint)((ushort)tnp::gSDevInfo._22_2_ >> 8),0x693b4,
                               tnp::gSDevInfo._92_4_);
                    bVar24 = false;
                    tnp::PPPP_Proto_Send_RlyRdy
                              (tnp::gSDevInfo._0_4_,(sockaddr_in *)(tnp::gSDevInfo + 0x14),
                               tnp::gSDevInfo + 0x4c,tnp::gSDevInfo._92_4_,tnp::gSDevInfo + 0x54);
                    uVar19 = 0;
                    goto LAB_000364a8;
                  }
                }
                pcVar7 = inet_ntoa((in_addr)tnp::gSDevInfo._8_4_);
                tnp::PPPP_DebugTrace
                          (0x10,"Resend MSG_RLY_RDY to Device %s:%d, device:%s-%06d\n",pcVar7,
                           ((ushort)tnp::gSDevInfo._6_2_ & 0xff) << 8 |
                           (uint)((ushort)tnp::gSDevInfo._6_2_ >> 8),0x693b4,tnp::gSDevInfo._92_4_);
                tnp::PPPP_Proto_Send_RlyRdy
                          (tnp::gSDevInfo._0_4_,(sockaddr_in *)(tnp::gSDevInfo + 4),
                           tnp::gSDevInfo + 0x4c,tnp::gSDevInfo._92_4_,tnp::gSDevInfo + 0x54);
              }
              else {
LAB_00036520:
                tnp::PPPP_Proto_Send_RlyRdy
                          (tnp::gSDevInfo._0_4_,(sockaddr_in *)&local_a68,tnp::gSDevInfo + 0x4c,
                           tnp::gSDevInfo._92_4_,tnp::gSDevInfo + 0x54);
              }
              uVar19 = 0;
              if ((bool)(bVar16 & bVar18)) {
                uVar25 = tnp::getCurTime();
                local_b60 = FUN_000486fc((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),1000,0);
                uVar19 = 0;
                local_b68 = 0;
                uVar6 = uVar19;
              }
            }
LAB_000364a8:
          } while (tnp::gSDevInfo[0x6c] == '\x02');
          tnp::PPPP__ExitSuperDevice('\x01');
          if ((bool)(bVar18 & bVar24)) {
            uVar25 = tnp::getCurTime();
            iVar2 = FUN_000486fc((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),1000,0);
            if (tnp::gSDevInfo[0x6d] == '\x03') {
              cVar14 = '\0';
            }
            else if (tnp::gSDevInfo[0x6d] == '\b') {
              cVar14 = '\x01';
            }
            else {
              cVar14 = '\x02';
            }
            tnp::PPPP_DebugTrace
                      (0x10,
                       "Send SessionReport with cause:%d,clientPacketSize:%u,devicePacketSize:%u,clientDRWSize:%lu,deviceDRWSize:%lu,time:%u\n"
                      );
            PPPP__Send_SessionReport_SuperDevice
                      (cVar14,local_b64,local_b58,local_b54,local_b48,iVar2 - local_b60);
            tnp::PPPP_Proto_Send_Close
                      (tnp::gSDevInfo._0_4_,'\0',(sockaddr_in *)(tnp::gSDevInfo + 0x14));
            tnp::PPPP_Proto_Send_Close
                      (tnp::gSDevInfo._0_4_,'\0',(sockaddr_in *)(tnp::gSDevInfo + 4));
            memset(&local_528,0,0x40);
            local_528 = 'S';
            cStack_527 = 'e';
            register0x00000022 = 'n';
            register0x00000023 = 'd';
            acStack_524[0] = ' ';
            acStack_524[1] = 'M';
            acStack_524[2] = 'S';
            acStack_524[3] = 'G';
            acStack_520[0] = '_';
            acStack_520[1] = 'C';
            acStack_520[2] = 'L';
            acStack_520[3] = 'O';
            acStack_51c[0] = 'S';
            acStack_51c[1] = 'E';
            acStack_51c[2] = ' ';
            acStack_51c[3] = 'T';
            sVar13 = (sockaddr_in)0x0;
            local_518[0]._0_1_ = 'o';
            local_518[0]._1_1_ = ' ';
            local_518[1]._0_1_ = 'A';
            local_518[1]._1_1_ = 'p';
            local_514._0_1_ = 'p';
            local_514._1_1_ = ' ';
            local_514._2_1_ = 'A';
            local_514._3_1_ = 'n';
            local_510._0_1_ = 'd';
            local_510._1_1_ = ' ';
            local_510._2_1_ = 'D';
            local_510._3_1_ = 'e';
            acStack_50c[0] = 'v';
            acStack_50c[1] = 'i';
            acStack_50c[2] = 'c';
            acStack_50c[3] = 'e';
            local_508 = local_508 & 0xff00;
            PPPP__Send_Report_SuperDevice_Connect(&local_528);
            goto LAB_000359c0;
          }
          if (bVar24) {
            tnp::PPPP_Proto_Send_Close
                      (tnp::gSDevInfo._0_4_,'\0',(sockaddr_in *)(tnp::gSDevInfo + 0x14));
            memset(&local_528,0,0x40);
            local_528 = 'S';
            cStack_527 = 'e';
            register0x00000022 = 'n';
            register0x00000023 = 'd';
            acStack_524[0] = ' ';
            acStack_524[1] = 'M';
            acStack_524[2] = 'S';
            acStack_524[3] = 'G';
            acStack_520[0] = '_';
            acStack_520[1] = 'C';
            acStack_520[2] = 'L';
            acStack_520[3] = 'O';
            acStack_51c[0] = 'S';
            acStack_51c[1] = 'E';
            acStack_51c[2] = ' ';
            acStack_51c[3] = 'T';
            local_518[0]._0_1_ = 'o';
            local_518[0]._1_1_ = ' ';
            local_518[1]._0_1_ = 'A';
            local_518[1]._1_1_ = 'p';
            local_514 = CONCAT22(local_514._2_2_,0x70);
            PPPP__Send_Report_SuperDevice_Connect(&local_528);
            sVar13 = (sockaddr_in)0x0;
            goto LAB_000359c0;
          }
          if (bVar18) {
            tnp::PPPP_Proto_Send_Close
                      (tnp::gSDevInfo._0_4_,'\0',(sockaddr_in *)(tnp::gSDevInfo + 4));
            memset(&local_528,0,0x40);
            local_528 = 'S';
            cStack_527 = 'e';
            register0x00000022 = 'n';
            register0x00000023 = 'd';
            acStack_524[0] = ' ';
            acStack_524[1] = 'M';
            acStack_524[2] = 'S';
            acStack_524[3] = 'G';
            acStack_520[0] = '_';
            acStack_520[1] = 'C';
            acStack_520[2] = 'L';
            acStack_520[3] = 'O';
            acStack_51c[0] = 'S';
            acStack_51c[1] = 'E';
            acStack_51c[2] = ' ';
            acStack_51c[3] = 'T';
            local_518[0]._0_1_ = 'o';
            local_518[0]._1_1_ = ' ';
            local_518[1]._0_1_ = 'D';
            local_518[1]._1_1_ = 'e';
            local_514._0_1_ = 'v';
            local_514._1_1_ = 'i';
            local_514._2_1_ = 'c';
            local_514._3_1_ = 'e';
            local_510 = local_510 & 0xffffff00;
            PPPP__Send_Report_SuperDevice_Connect(&local_528);
            sVar13 = (sockaddr_in)0x0;
            goto LAB_000359c0;
          }
        }
      }
LAB_00036200:
      sVar13 = (sockaddr_in)0x0;
    }
  }
LAB_000359c0:
  PPPP__Send_Report_SuperDevice_ExitThread(tnp::gSDevInfo[0x6d],(char)sVar13);
  tnp::PPPP_DebugTrace(0x200,"PPPP_Thread_SuperDevice Exit.\n");
  tnp::CloseSocket(tnp::gSDevInfo._0_4_);
                    // WARNING: Subroutine does not return
  pthread_exit((void *)0x0);
}



void PPPP_SendLogin(void)

{
  PPPP_Send_Login();
  return;
}



void PPPP_GetPeerBandwidthInfo(void)

{
  PPPP_Get_PeerBandwidthInfo();
  return;
}



void PPPP_SetIncomingConnectionCallback(void)

{
  PPPP_Set_IncomingConnectionCallback();
  return;
}



void PPPP_SetNoticeToCallback(void)

{
  PPPP_Set_NoticeToCallback();
  return;
}



void PPPP_SendNoticeToAck(void)

{
  PPPP_Send_NoticeToAck();
  return;
}



// tnp::PPPP__DeviceInfoList_Init()

void tnp::PPPP__DeviceInfoList_Init(void)

{
  gDeviceInfoList._4_4_ = 0;
  gDeviceInfoList._0_4_ = 0;
  MUTEX_INIT((pthread_mutex_t *)gDeviceInfoListLock);
  return;
}



// tnp::PPPP__DeviceInfoList_Add(char*, unsigned int, char*)

undefined4 tnp::PPPP__DeviceInfoList_Add(char *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  char *__dest;
  char *extraout_r3;
  char *pcVar3;
  
  MUTEX_LOCK((pthread_mutex_t *)gDeviceInfoListLock);
  pcVar1 = (char *)gDeviceInfoList;
  for (pcVar3 = (char *)gDeviceInfoList; pcVar3 != (char *)0x0; pcVar3 = *(char **)(pcVar3 + 0x1c))
  {
    iVar2 = strncmp(pcVar3,param_1,7);
    if ((iVar2 == 0) && (__dest = (char *)gDeviceInfoList, *(uint *)(pcVar3 + 8) == param_2))
    goto LAB_0003709c;
  }
  __dest = malloc(0x20);
  if (__dest == (char *)0x0) {
    MUTEX_RELEASE((pthread_mutex_t *)gDeviceInfoListLock);
    return 0xffffffff;
  }
  __dest[0] = '\0';
  __dest[1] = '\0';
  __dest[2] = '\0';
  __dest[3] = '\0';
  __dest[4] = '\0';
  __dest[5] = '\0';
  __dest[6] = '\0';
  __dest[7] = '\0';
  __dest[8] = '\0';
  __dest[9] = '\0';
  __dest[10] = '\0';
  __dest[0xb] = '\0';
  __dest[0xc] = '\0';
  __dest[0xd] = '\0';
  __dest[0xe] = '\0';
  __dest[0xf] = '\0';
  __dest[0x10] = '\0';
  __dest[0x11] = '\0';
  __dest[0x12] = '\0';
  __dest[0x13] = '\0';
  __dest[0x14] = '\0';
  __dest[0x15] = '\0';
  __dest[0x16] = '\0';
  __dest[0x17] = '\0';
  __dest[0x18] = '\0';
  __dest[0x19] = '\0';
  __dest[0x1a] = '\0';
  __dest[0x1b] = '\0';
  __dest[0x1c] = '\0';
  __dest[0x1d] = '\0';
  __dest[0x1e] = '\0';
  __dest[0x1f] = '\0';
  __dest[0x18] = '\0';
  __dest[0x19] = '\0';
  __dest[0x1a] = '\0';
  __dest[0x1b] = '\0';
  __dest[0x14] = -1;
  __dest[0x15] = -1;
  __dest[0x16] = -1;
  __dest[0x17] = -1;
  strncpy(__dest,param_1,7);
  strncpy(__dest + 0xc,param_3,7);
  pcVar3 = extraout_r3;
  if (pcVar1 != (char *)0x0) {
    pcVar3 = gDeviceInfoList._4_4_;
  }
  *(uint *)(__dest + 8) = param_2;
  gDeviceInfoList._4_4_ = __dest;
  if (pcVar1 != (char *)0x0) {
    *(char **)(pcVar3 + 0x1c) = __dest;
    __dest = (char *)gDeviceInfoList;
  }
LAB_0003709c:
  gDeviceInfoList._0_4_ = __dest;
  MUTEX_RELEASE((pthread_mutex_t *)gDeviceInfoListLock);
  return 1;
}



// tnp::PPPP__DeviceInfoList_Get(char*, unsigned int)

char * tnp::PPPP__DeviceInfoList_Get(char *param_1,uint param_2)

{
  int iVar1;
  char *__s1;
  
  MUTEX_LOCK((pthread_mutex_t *)gDeviceInfoListLock);
  for (__s1 = (char *)gDeviceInfoList;
      (__s1 != (char *)0x0 &&
      ((iVar1 = strncmp(__s1,param_1,7), iVar1 != 0 || (*(uint *)(__s1 + 8) != param_2))));
      __s1 = *(char **)(__s1 + 0x1c)) {
  }
  MUTEX_RELEASE((pthread_mutex_t *)gDeviceInfoListLock);
  return __s1;
}



// tnp::PPPP__DeviceInfoList_Clear()

void tnp::PPPP__DeviceInfoList_Clear(void)

{
  void *__ptr;
  void *pvVar1;
  
  MUTEX_LOCK((pthread_mutex_t *)gDeviceInfoListLock);
  __ptr = (void *)gDeviceInfoList;
  while (__ptr != (void *)0x0) {
    pvVar1 = *(void **)((int)__ptr + 0x1c);
    free(__ptr);
    __ptr = pvVar1;
  }
  gDeviceInfoList._4_4_ = 0;
  gDeviceInfoList._0_4_ = (void *)0x0;
  MUTEX_RELEASE((pthread_mutex_t *)gDeviceInfoListLock);
  return;
}



// tnp::PPPP__DeviceInfoList_UnInit()

void tnp::PPPP__DeviceInfoList_UnInit(void)

{
  PPPP__DeviceInfoList_Clear();
  MUTEX_DESTROY((pthread_mutex_t *)gDeviceInfoListLock);
  return;
}



// tnp::PPPP__ConnectWithNonBlockSocket(int, sockaddr*, int)

int tnp::PPPP__ConnectWithNonBlockSocket(int param_1,sockaddr *param_2,int param_3)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  __suseconds_t *p_Var6;
  int iVar7;
  int local_b8 [2];
  timeval local_b0;
  fd_set local_a8;
  
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2->sa_data + 2));
  PPPP_DebugTrace(1,"PPPP__ConnectWithNonBlockSocket(socket:%d,addr:(%s:%d))...\n",param_1,pcVar2,
                  (*(ushort *)param_2->sa_data & 0xff) << 8 |
                  (uint)(*(ushort *)param_2->sa_data >> 8));
  SetSocketNonBlock(param_1);
  iVar3 = ConnectAddress(param_1,(sockaddr_in *)param_2);
  if (iVar3 < 0) {
    piVar4 = __errno_location();
    iVar7 = *piVar4;
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2->sa_data + 2));
    uVar1 = *(ushort *)param_2->sa_data;
    pcVar5 = strerror(iVar7);
    PPPP_DebugTrace(1,"ConnectAddress(socket:%d,addr:(%s:%d)) error,ret:%d,errno:%d,%s\n",param_1,
                    pcVar2,(uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8),iVar3,iVar7,pcVar5);
    if (iVar7 == 0x73) {
      p_Var6 = &local_b0.tv_usec;
      do {
        p_Var6 = p_Var6 + 1;
        *p_Var6 = 0;
      } while (p_Var6 != local_a8.fds_bits + 0x1f);
      local_a8.fds_bits[(uint)param_1 >> 5] =
           local_a8.fds_bits[(uint)param_1 >> 5] | 1 << (param_1 & 0x1fU);
      local_b0.tv_usec = 0;
      local_b0.tv_sec = param_3;
      iVar3 = select(param_1 + 1,(fd_set *)0x0,&local_a8,(fd_set *)0x0,&local_b0);
      if (iVar3 < 1) {
        pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2->sa_data + 2));
        iVar3 = -2;
        PPPP_DebugTrace(1,"ConnectAddress(socket:%d,addr:(%s:%d)) timeout\n",param_1,pcVar2,
                        (*(ushort *)param_2->sa_data & 0xff) << 8 |
                        (uint)(*(ushort *)param_2->sa_data >> 8));
      }
      else {
        local_b8[1] = 4;
        getsockopt(param_1,1,4,local_b8,(socklen_t *)(local_b8 + 1));
        if (local_b8[0] == 0) {
          pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2->sa_data + 2));
          PPPP_DebugTrace(1,"ConnectAddress(socket:%d,addr:(%s:%d)) success\n",param_1,pcVar2,
                          (*(ushort *)param_2->sa_data & 0xff) << 8 |
                          (uint)(*(ushort *)param_2->sa_data >> 8));
          iVar3 = 0;
        }
        else {
          iVar7 = *piVar4;
          pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2->sa_data + 2));
          uVar1 = *(ushort *)param_2->sa_data;
          pcVar5 = strerror(iVar7);
          iVar3 = -1;
          PPPP_DebugTrace(1,
                          "ConnectAddress(socket:%d,addr:(%s:%d)) failed,so_error:%d,errno:%d,%s\n",
                          param_1,pcVar2,(uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8),local_b8[0],iVar7,
                          pcVar5);
        }
      }
    }
    else {
      iVar3 = -1;
    }
  }
  SetSocketBlock(param_1);
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2->sa_data + 2));
  PPPP_DebugTrace(1,"PPPP__ConnectWithNonBlockSocket(socket:%d,addr:(%s:%d)) end\n",param_1,pcVar2,
                  (*(ushort *)param_2->sa_data & 0xff) << 8 |
                  (uint)(*(ushort *)param_2->sa_data >> 8));
  return iVar3;
}



// tnp::PPPP__Set_ConnectKey(unsigned int, char const*)

undefined4 tnp::PPPP__Set_ConnectKey(uint param_1,char *param_2)

{
  strncpy((char *)(gTNPSession + param_1 * 0x3f18 + 0x2c),param_2,0x20);
  PPPP_DebugTrace(0x10,"key:%s\n",gTNPSession + param_1 * 0x3f18 + 0x2c);
  return 0;
}



// tnp::PPPP__Set_SessionState(int, unsigned char)

void tnp::PPPP__Set_SessionState(int param_1,uchar param_2)

{
  time_t tVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x3f18 + gTNPSession;
  *(uchar *)(iVar2 + 0x1b0) = param_2;
  tVar1 = time((time_t *)0x0);
  *(time_t *)(iVar2 + 0x1ac) = tVar1;
  return;
}



// tnp::PPPP__Reset_Session(int, tnp::SESSION_RESET_FLAG)

void tnp::PPPP__Reset_Session(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  param_1 = param_1 * 0x3f18;
  if (param_2 == 2) {
    iVar1 = gTNPSession + param_1;
    uVar6 = *(undefined1 *)(iVar1 + 0x1b1);
    uVar7 = *(undefined4 *)(iVar1 + 0x50);
    uVar8 = *(undefined4 *)(iVar1 + 0x54);
    uVar3 = *(undefined4 *)(iVar1 + 0x58);
  }
  else {
    uVar3 = 0xffffffff;
    iVar1 = gTNPSession + param_1;
    if (param_2 == 1) {
      uVar5 = *(undefined1 *)(iVar1 + 0x1ba);
      uVar2 = *(undefined1 *)(iVar1 + 0x4f);
      uVar4 = *(undefined1 *)(iVar1 + 0x1b9);
      uVar6 = 0;
      uVar7 = uVar3;
      uVar8 = uVar3;
      goto LAB_0003757c;
    }
    uVar8 = 0xffffffff;
    uVar7 = 0xffffffff;
    uVar6 = 0;
  }
  uVar2 = 0;
  uVar5 = 0;
  uVar4 = 0;
LAB_0003757c:
  memset((void *)(gTNPSession + param_1),0,0x3f18);
  param_1 = gTNPSession + param_1;
  *(undefined1 *)(param_1 + 0x1b1) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined1 *)(param_1 + 0x1ba) = uVar5;
  *(undefined1 *)(param_1 + 0x4f) = uVar2;
  *(undefined1 *)(param_1 + 0x1b9) = uVar4;
  *(undefined1 *)(param_1 + 0x1b2) = 1;
  *(undefined1 *)(param_1 + 0x1b3) = 1;
  *(undefined1 *)(param_1 + 0x1bd) = 1;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b5) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  return;
}



// tnp::PPPP__DIDFormat(char const*, char*)

void tnp::PPPP__DIDFormat(char *param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != (char *)0x0) {
    iVar5 = 0;
    bVar2 = true;
    iVar3 = 0;
    do {
      while( true ) {
        bVar1 = *param_1;
        uVar4 = (uint)bVar1;
        if (9 < uVar4 - 0x30) break;
        if (bVar2) {
          param_2[iVar5] = '-';
          bVar1 = *param_1;
          iVar5 = iVar5 + 1;
        }
        param_2[iVar5] = bVar1;
        bVar2 = false;
        iVar5 = iVar5 + 1;
LAB_00037670:
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 1;
        if (iVar3 == 0x40) {
          return;
        }
      }
      if (0x19 < uVar4 - 0x61) {
        if (uVar4 - 0x41 < 0x1a) {
          if (!bVar2) {
            param_2[iVar5] = '-';
            bVar1 = *param_1;
            iVar5 = iVar5 + 1;
          }
          bVar2 = true;
          param_2[iVar5] = bVar1;
          iVar5 = iVar5 + 1;
        }
        else if (uVar4 != 0x2d) {
          return;
        }
        goto LAB_00037670;
      }
      if (!bVar2) {
        param_2[iVar5] = '-';
        bVar1 = *param_1;
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      bVar2 = true;
      param_2[iVar5] = bVar1 - 0x20;
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 != 0x40);
  }
  return;
}



// tnp::PPPP__Check_ValidDID(char const*)

undefined4 tnp::PPPP__Check_ValidDID(char *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if ((param_1 == (char *)0x0) || (0x19 < (byte)*param_1 - 0x41)) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    iVar5 = 0;
    do {
      uVar4 = (uint)(byte)param_1[iVar3];
      uVar2 = (uVar4 & 0xffffffdf) - 0x41;
      uVar6 = uVar4 - 0x30;
      if (uVar4 == 0x2d) {
        iVar5 = iVar5 + 1;
      }
      else {
        if (uVar4 == 0) break;
        bVar8 = 8 < uVar6;
        bVar7 = uVar6 == 9;
        if (9 < uVar6) {
          bVar8 = 0x18 < uVar2;
          bVar7 = uVar2 == 0x19;
        }
        if (bVar8 && !bVar7) break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x40);
    uVar1 = 0;
    if (iVar5 != 2) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



// tnp::PPPP__Parse_DID(char const*, char*, int, int*, char*, int)

undefined4
tnp::PPPP__Parse_DID(char *param_1,char *param_2,int param_3,int *param_4,char *param_5,int param_6)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  char acStack_60 [64];
  
  memset(acStack_60,0,0x40);
  iVar1 = PPPP__Check_ValidDID(param_1);
  if (iVar1 == 0) {
    strncpy(acStack_60,param_1,0x40);
    pcVar2 = strchr(acStack_60,0x2d);
    *pcVar2 = '\0';
    strncpy(param_2,acStack_60,param_3);
    pcVar3 = strchr(pcVar2 + 1,0x2d);
    *pcVar3 = '\0';
    iVar1 = atoi(pcVar2 + 1);
    *param_4 = iVar1;
    strncpy(param_5,pcVar3 + 1,param_6);
    sVar4 = strnlen(param_2,8);
    if (((sVar4 < 8) && (sVar4 = strnlen(param_5,8), sVar4 < 8)) && (-1 < *param_4)) {
      return 0;
    }
  }
  return 0xfffff444;
}



// tnp::PPPP__Check_RemoteAddr(int, sockaddr_in*)

undefined4 tnp::PPPP__Check_RemoteAddr(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 4);
  iVar1 = param_1 * 0x3f18 + gTNPSession;
  if (((iVar3 != *(int *)(iVar1 + 0x60)) || (*(short *)(param_2 + 2) != *(short *)(iVar1 + 0x5e)))
     && ((iVar3 != *(int *)(iVar1 + 0xd0) || (*(short *)(param_2 + 2) != *(short *)(iVar1 + 0xce))))
     ) {
    if (iVar3 == *(int *)(iVar1 + 0x194)) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 1;
}



// tnp::PPPP__Check_SessionDataReady(char*, unsigned short, unsigned short*, unsigned short*,
// unsigned char*)

undefined4
tnp::PPPP__Check_SessionDataReady
          (char *param_1,ushort param_2,ushort *param_3,ushort *param_4,uchar *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  if (3 < param_2) {
    uVar1 = *(ushort *)(param_1 + 2) << 8;
    uVar2 = *(ushort *)(param_1 + 2) >> 8;
    if (*param_1 == -0xe) {
      iVar3 = 0x1c;
    }
    else {
      iVar3 = 4;
    }
    if ((uint)(uVar1 | uVar2) + iVar3 <= (uint)param_2) {
      *param_3 = (ushort)iVar3;
      *param_4 = uVar1 | uVar2;
      *param_5 = param_1[1];
      return 1;
    }
  }
  return 0;
}



// tnp::PPPP__Get_LocalAddress(sockaddr_in*, sockaddr_in*)

undefined4 tnp::PPPP__Get_LocalAddress(sockaddr_in *param_1,sockaddr_in *param_2)

{
  int __fd;
  undefined4 uVar1;
  socklen_t local_9c;
  sockaddr asStack_98 [8];
  
  __fd = CreateSocket('\0');
  if (__fd < 0) {
    uVar1 = 0xfffff430;
  }
  else {
    local_9c = 0x80;
    memset(asStack_98,0,0x80);
    ConnectAddress(__fd,param_1);
    getsockname(__fd,asStack_98,&local_9c);
    memcpy(param_2,asStack_98,0x10);
    CloseSocket(__fd);
    uVar1 = 0;
  }
  return uVar1;
}



// tnp::PPPP__Resolve_HostName(char*, sockaddr_in*)

undefined4 tnp::PPPP__Resolve_HostName(char *param_1,sockaddr_in *param_2)

{
  hostent *phVar1;
  char *pcVar2;
  
  phVar1 = gethostbyname(param_1);
  if (phVar1 != (hostent *)0x0) {
    memcpy(param_2 + 4,*phVar1->h_addr_list,phVar1->h_length);
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(8,"Resolving Hostname:%s [%s]\n",param_1,pcVar2);
    return 0;
  }
  PPPP_DebugTrace(8,"gethostbyname \'%s\' failed!!\n",param_1);
  return 0xfffff441;
}



// tnp::PPPP__Decode_ServerString(char*, sockaddr_in*, int)

undefined4 tnp::PPPP__Decode_ServerString(char *param_1,sockaddr_in *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *__dest;
  sockaddr_in *psVar5;
  int iVar6;
  char *pcVar7;
  char *__s;
  int iVar8;
  char acStack_728 [768];
  char local_428 [1028];
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar4 = 0xfffff441;
  }
  else {
    if (param_3 == 1) {
      PPPP_DebugTrace(1,"Decode P2PServerString:%s...\n",param_1);
    }
    __s = acStack_728;
    memset(local_428,0,0x400);
    memset(__s,0,0x300);
    PPPP_DecodeString(param_1,local_428,0x400);
    sVar2 = strlen(local_428);
    psVar5 = param_2;
    if (0 < (int)sVar2) {
      iVar6 = 0;
      iVar8 = 0;
      iVar3 = 0;
      pcVar7 = local_428;
      do {
        while( true ) {
          iVar6 = iVar6 + 1;
          if (*pcVar7 != ',') break;
          iVar1 = iVar8 * 0x100;
          *pcVar7 = '\0';
          iVar8 = iVar8 + 1;
          strncpy(__s + iVar1,local_428 + iVar3,0xff);
          PPPP_DebugTrace(1,"Server %d name: %s\n",iVar8,__s + iVar1);
          iVar3 = iVar6;
          pcVar7 = pcVar7 + 1;
          if ((int)sVar2 <= iVar6) goto LAB_00037b78;
        }
        pcVar7 = pcVar7 + 1;
      } while (iVar6 < (int)sVar2);
    }
LAB_00037b78:
    do {
      memset(psVar5,0,0x10);
      *(undefined2 *)psVar5 = 2;
      *(undefined2 *)(psVar5 + 2) = 0x647d;
      iVar3 = PPPP__Resolve_HostName(__s,psVar5);
      __s = __s + 0x100;
      if (iVar3 != 0) {
        PPPP_DebugTrace(2," (NG)\n");
        return 0xfffff441;
      }
      PPPP_DebugTrace(2," (OK)\n");
      psVar5 = psVar5 + 0x10;
    } while (__s != local_428);
    if (param_3 == 1) {
      strncpy(gLastServerString,param_1,0x100);
      iVar3 = 0;
      do {
        __dest = gLastServerAddr + iVar3;
        psVar5 = param_2 + iVar3;
        iVar3 = iVar3 + 0x10;
        memcpy(__dest,psVar5,0x10);
      } while (iVar3 != 0x30);
    }
    uVar4 = 0;
  }
  return uVar4;
}



// tnp::PPPP__Update_P2PServer(sockaddr_in*, sockaddr_in*, sockaddr_in*)

void tnp::PPPP__Update_P2PServer(sockaddr_in *param_1,sockaddr_in *param_2,sockaddr_in *param_3)

{
  void *pvVar1;
  sockaddr_in *__dest;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  do {
    memcpy(param_1 + iVar2,param_3 + iVar2,0x10);
    piVar3 = &gP2PTCPAddrNum;
    __dest = param_2;
    do {
      pvVar1 = memcpy(__dest,param_3 + iVar2,0x10);
      piVar3 = piVar3 + 1;
      *(ushort *)((int)pvVar1 + 2) = (ushort)(*piVar3 << 8) | (ushort)(byte)((uint)*piVar3 >> 8);
      __dest = (sockaddr_in *)((int)pvVar1 + 0x10);
    } while (piVar3 != (int *)(gP2PTCPPortArray + 8));
    iVar2 = iVar2 + 0x10;
    param_2 = param_2 + 0x30;
  } while (iVar2 != 0x30);
  return;
}



// tnp::PPPP__Resolve_P2PServer(char*, sockaddr_in*, sockaddr_in*)

undefined4 tnp::PPPP__Resolve_P2PServer(char *param_1,sockaddr_in *param_2,sockaddr_in *param_3)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr_in asStack_48 [48];
  
  iVar1 = strncmp(gLastServerString,param_1,0x100);
  if (iVar1 != 0) {
    iVar1 = PPPP__Decode_ServerString(param_1,asStack_48,1);
    if (iVar1 == 0) {
      PPPP__Update_P2PServer(param_2,param_3,asStack_48);
      uVar2 = 0;
    }
    else {
      PPPP_DebugTrace(2," (NG)\n");
      uVar2 = 0xfffff441;
    }
    return uVar2;
  }
  PPPP__Update_P2PServer(param_2,param_3,(sockaddr_in *)gLastServerAddr);
  return 0;
}



// tnp::PPPP__Update_SessionP2PServer(int, sockaddr_in*)

void tnp::PPPP__Update_SessionP2PServer(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1 * 0x3f18;
  iVar6 = 0;
  iVar2 = gTNPSession;
  do {
    memcpy((void *)(iVar2 + iVar5 + iVar6 * 0x10 + 0x8c),param_2,0x10);
    piVar4 = &gP2PTCPAddrNum;
    iVar3 = iVar6 * 3;
    iVar2 = gTNPSession;
    do {
      iVar1 = iVar3 * 0x10;
      memcpy((void *)(iVar2 + iVar5 + iVar1 + 0xdc),param_2,0x10);
      iVar2 = gTNPSession;
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + 1;
      *(ushort *)(gTNPSession + iVar1 + iVar5 + 0xde) =
           (ushort)(*piVar4 << 8) | (ushort)(byte)((uint)*piVar4 >> 8);
    } while (piVar4 != (int *)(gP2PTCPPortArray + 8));
    iVar6 = iVar6 + 1;
    param_2 = param_2 + 0x10;
  } while (iVar6 != 3);
  return;
}



// tnp::PPPP__Resolve_SessionP2PServer(int, char*)

undefined4 tnp::PPPP__Resolve_SessionP2PServer(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr_in asStack_48 [52];
  
  iVar1 = strncmp(gLastServerString,param_2,0x100);
  if (iVar1 != 0) {
    iVar1 = PPPP__Decode_ServerString(param_2,asStack_48,1);
    if (iVar1 == 0) {
      PPPP__Update_SessionP2PServer(param_1,asStack_48);
      uVar2 = 0;
    }
    else {
      PPPP_DebugTrace(2," (NG)\n");
      uVar2 = 0xfffff441;
    }
    return uVar2;
  }
  PPPP__Update_SessionP2PServer(param_1,(sockaddr_in *)gLastServerAddr);
  return 0;
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// tnp::PPPP__DoNetWorkDetect(st_PPPP_NetInfo*, unsigned short, char*)

undefined4 tnp::PPPP__DoNetWorkDetect(st_PPPP_NetInfo *param_1,ushort param_2,char *param_3)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  st_PPPP_NetInfo *__dest;
  st_PPPP_NetInfo *__dest_00;
  undefined4 local_59c;
  uchar local_586;
  uchar uStack_585;
  ushort local_584;
  ushort uStack_582;
  uint local_580;
  ushort uStack_57c;
  sockaddr_in asStack_578 [2];
  ushort local_576;
  in_addr local_574;
  sockaddr_in asStack_568 [2];
  ushort local_566;
  in_addr local_564;
  sockaddr_in asStack_558 [4];
  in_addr local_554;
  sockaddr_in asStack_548 [4];
  in_addr local_544;
  sockaddr_in asStack_538 [4];
  in_addr local_534;
  sockaddr_in asStack_528 [1284];
  
  __dest = param_1 + 0x14;
  uStack_57c = 0;
  __dest_00 = param_1 + 4;
  local_580 = 0;
  memset(asStack_528,0,0x500);
  *param_1 = (st_PPPP_NetInfo)0x0;
  param_1[2] = (st_PPPP_NetInfo)0x0;
  param_1[1] = (st_PPPP_NetInfo)0x1;
  strncpy((char *)__dest,"0.0.0.0",0x10);
  strncpy((char *)__dest_00,"0.0.0.0",0x10);
  PPPP_DebugTrace(2,"1. Resolve P2PServer Host Name ...\n");
  iVar4 = PPPP__Decode_ServerString(param_3,asStack_558,1);
  if (iVar4 == 0) {
    PPPP_DebugTrace(8,"Get P2PServer...\n");
    pcVar5 = inet_ntoa(local_554);
    PPPP_DebugTrace(8,"Server1:%s\n",pcVar5);
    pcVar5 = inet_ntoa(local_544);
    PPPP_DebugTrace(8,"Server2:%s\n",pcVar5);
    pcVar5 = inet_ntoa(local_534);
    PPPP_DebugTrace(8,"Server3:%s\n",pcVar5);
    iVar4 = strncmp(gServerString,param_3,0x100);
    if (iVar4 == 0) {
      PPPP__Update_P2PServer
                ((sockaddr_in *)gP2PServerAddr,(sockaddr_in *)gP2PTCPServerAddr,asStack_558);
    }
    if (param_1[1] == (st_PPPP_NetInfo)0x0) {
      PPPP_DebugTrace(2,"....Failed\n");
    }
    else {
      PPPP_DebugTrace(2,"....Successfully Done\n");
    }
    PPPP_DebugTrace(2,"2. Send Hello to P2P Servers ...\n");
    iVar4 = CreateSocket('\0');
    if (iVar4 < 0) {
      uVar8 = 0xfffff430;
    }
    else {
      SetSocketBroadcast(iVar4);
      uStack_582 = param_2;
      iVar6 = TryBindPort(iVar4,&uStack_582);
      if (iVar6 < 0) {
        CloseSocket(iVar4);
        uVar8 = 0xfffff436;
      }
      else {
        PPPP_DebugTrace(2,"Bind UDP Port = %d\n",(uint)uStack_582);
        PPPP_Proto_Send_Hello(iVar4,asStack_558);
        PPPP_Proto_Send_Hello(iVar4,asStack_548);
        PPPP_Proto_Send_Hello(iVar4,asStack_538);
        PPPP_DebugTrace(2,"3. Waiting Hello_Ack from P2P Servers ...\n");
        iVar6 = 3;
        bVar3 = false;
        do {
          if (iVar6 == 3) {
            uVar9 = 5000;
          }
          else {
            uVar9 = 1000;
          }
          iVar7 = PPPP_Proto_Recv_ALL(iVar4,asStack_578,uVar9,&local_586,&local_584,
                                      (char *)asStack_528,0x500,&uStack_585);
          if (iVar7 == 0) {
            if ((local_586 == '\x01') && (local_584 == 0x10)) {
              ntohAddr(asStack_528,asStack_568);
              pcVar5 = inet_ntoa(local_564);
              strncpy((char *)__dest,pcVar5,0x10);
              strncpy(gNetInfo + 0x14,(char *)__dest,0x10);
              uVar1 = local_566 << 8;
              uVar2 = local_566 >> 8;
              *(ushort *)((int)&local_580 + (3 - iVar6) * 2) = uVar1 | uVar2;
              pcVar5 = inet_ntoa(local_574);
              PPPP_DebugTrace(2,"Receive Hello_Ack from %s:%d\n",pcVar5,
                              (local_576 & 0xff) << 8 | (uint)(local_576 >> 8));
              if ((ushort)(local_576 << 8 | local_576 >> 8) == 0x7d64) {
                PPPP_DebugTrace(2," MyWanIP=%s, Port =%d\n",__dest,(uint)(uVar1 | uVar2));
                iVar6 = iVar6 + -1;
                *param_1 = (st_PPPP_NetInfo)0x1;
                param_1[2] = (st_PPPP_NetInfo)0x1;
              }
              else {
                bVar3 = true;
              }
            }
          }
          else if (iVar7 < 0) break;
        } while (0 < iVar6);
        PPPP_DebugTrace(2,"4. Get Lan IP ...\n");
        if (param_1[2] == (st_PPPP_NetInfo)0x1) {
          iVar6 = PPPP__Get_LocalAddress(asStack_578,asStack_568);
          if (-1 < iVar6) {
            pcVar5 = inet_ntoa(local_564);
            strncpy((char *)__dest_00,pcVar5,0x10);
            strncpy(gNetInfo + 4,(char *)__dest_00,0x10);
          }
          PPPP_DebugTrace(2," MyLanIP=%s\n",__dest_00);
          gLastNetDetectTime = time((time_t *)0x0);
        }
        uVar10 = local_580 & 0xffff;
        uVar9 = local_580 >> 0x10;
        PPPP_DebugTrace(2,"5. Calculate NAT Type, WanPorts = %d, %d, %d ...\n",uVar10,uVar9,
                        (uint)uStack_57c);
        if ((uVar10 == 0) || (uVar9 == 0)) {
          param_1[3] = (st_PPPP_NetInfo)0x0;
          local_59c = 0;
        }
        else if (uVar10 == uVar9) {
          if (bVar3) {
            param_1[3] = (st_PPPP_NetInfo)0x1;
            local_59c = 1;
          }
          else {
            local_59c = 2;
            param_1[3] = (st_PPPP_NetInfo)0x2;
          }
        }
        else {
          param_1[3] = (st_PPPP_NetInfo)0x3;
          local_59c = 3;
        }
        PPPP_DebugTrace(2," NAT Type: %d\n",local_59c);
        gNetInfo[3] = param_1[3];
        CloseSocket(iVar4);
        uVar8 = 0;
      }
    }
  }
  else {
    PPPP_DebugTrace(2," (NG)\n");
    uVar8 = 0xfffff441;
    param_1[1] = (st_PPPP_NetInfo)0x0;
  }
  return uVar8;
}



// tnp::PPPP__Connect_TCPServer(sockaddr_in*, int, int*, int, int)

int tnp::PPPP__Connect_TCPServer
              (sockaddr_in *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  uint __seed;
  int iVar1;
  int iVar2;
  time_t tVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  
  __seed = time((time_t *)0x0);
  srand(__seed);
  iVar1 = rand();
  if (0 < param_2) {
    iVar5 = 0;
    do {
      while( true ) {
        tVar3 = time((time_t *)0x0);
        if (param_5 < (int)(tVar3 - __seed)) {
          PPPP_DebugTrace(1,"PPPP__Connect_TCPServer timeout\n");
          return -1;
        }
        iVar4 = CreateSocket('\x01');
        if (-1 < iVar4) break;
        PPPP_DebugTrace(1,"socket() return:%d\n",iVar4);
        iVar5 = iVar5 + 1;
        mSecSleep(100);
        if (iVar5 == param_2) {
          return -1;
        }
      }
      FUN_00047d34(iVar5 + iVar1,param_2);
      PPPP_DebugTrace(1,"socket() return:%d\n",iVar4);
      iVar2 = PPPP__ConnectWithNonBlockSocket
                        (iVar4,(sockaddr *)(param_1 + extraout_r1 * 0x10),param_4);
      if (iVar2 == -2) {
        CloseSocket(iVar4);
      }
      else {
        if (iVar2 != -1) {
          *param_3 = extraout_r1;
          return iVar4;
        }
        CloseSocket(iVar4);
        mSecSleep(100);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_2);
  }
  return -1;
}



// tnp::PPPP__Halt_TCP_For_Session(int)

void tnp::PPPP__Halt_TCP_For_Session(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x3f18;
  iVar1 = gTNPSession + iVar2;
  *(undefined1 *)(iVar1 + 0x1c3) = 1;
  WaitThreadExit((ulong *)(iVar1 + 0x1d8));
  iVar1 = *(int *)(gTNPSession + iVar2 + 0x54);
  if (iVar1 < 0) {
    return;
  }
  if (*(char *)(gTNPSession + iVar2 + 0x1a6) != '\x01') {
    return;
  }
  CloseSocket(iVar1);
  iVar2 = gTNPSession + iVar2;
  *(undefined4 *)(iVar2 + 0x54) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x1a6) = 0;
  return;
}



// tnp::PPPP__Update_SessionState(int, unsigned char)

void tnp::PPPP__Update_SessionState(int param_1,uchar param_2)

{
  byte bVar1;
  time_t tVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1 * 0x3f18;
  bVar1 = *(byte *)(gTNPSession + iVar3 + 0x1b0);
  if ((bVar1 != 0x20 && bVar1 != 6) && (bVar1 != 0x29)) {
    if ((param_2 == ' ' || param_2 == '\x06') || ((param_2 == ')' || (bVar1 < param_2)))) {
LAB_000387c4:
      PPPP__Set_SessionState(param_1,param_2);
      return;
    }
    if (param_2 < bVar1) {
      if (bVar1 < 6) {
        uVar4 = 10;
      }
      else if (bVar1 < 0x29) {
        uVar4 = 0x14;
      }
      else {
        uVar4 = 0;
      }
      tVar2 = time((time_t *)0x0);
      if (uVar4 < (uint)(tVar2 - *(int *)(gTNPSession + iVar3 + 0x1ac))) {
        if ((0x20 < *(byte *)(gTNPSession + iVar3 + 0x1b0)) && (param_2 < 0x29)) {
          PPPP__Halt_TCP_For_Session(param_1);
          iVar3 = gTNPSession + iVar3;
          *(undefined1 *)(iVar3 + 0x1a6) = 0;
          *(undefined1 *)(iVar3 + 0x1ba) = 0;
          *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar3 + 0x50);
        }
        goto LAB_000387c4;
      }
    }
  }
  return;
}



// tnp::PPPP__Set_SessionReady(int, char)

void tnp::PPPP__Set_SessionReady(int param_1,char param_2)

{
  uchar uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x3f18 + gTNPSession;
  *(char *)(iVar2 + 0x1b6) = param_2;
  *(undefined1 *)(iVar2 + 0x1b4) = 1;
  *(undefined1 *)(iVar2 + 0x1c1) = 1;
  if (param_2 == '\0') {
    *(undefined1 *)(iVar2 + 0x1b2) = 0;
    PPPP__Update_SessionState(param_1,'\x06');
    return;
  }
  if (param_2 == '\x02') {
    uVar1 = ')';
  }
  else {
    uVar1 = ' ';
  }
  *(undefined1 *)(iVar2 + 0x1b3) = 0;
  PPPP__Update_SessionState(param_1,uVar1);
  return;
}



// tnp::PPPP__Start_TCP_For_Session(int, sockaddr*, int)

int tnp::PPPP__Start_TCP_For_Session(int param_1,sockaddr *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  
  iVar1 = CreateSocket('\x01');
  if (iVar1 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = PPPP__ConnectWithNonBlockSocket(iVar1,param_2,param_3);
    if (iVar2 < 0) {
      piVar4 = __errno_location();
      iVar6 = *piVar4;
      pcVar5 = strerror(iVar6);
      PPPP_DebugTrace(2,"connect error,errno:%d,%s",iVar6,pcVar5);
      CloseSocket(iVar1);
      return iVar2;
    }
    PPPP__Update_SessionState(param_1,'\"');
    iVar6 = param_1 * 0x3f18 + gTNPSession;
    *(undefined1 *)(iVar6 + 0x1a6) = 1;
    *(int *)(iVar6 + 0x54) = iVar1;
    *(undefined1 *)(iVar6 + 0x1c3) = 0;
    *(undefined1 *)(iVar6 + 0x1b5) = 0;
    uVar3 = CreateWorkerThread(PPPP_Thread_Recv_TCP,(void *)param_1);
    *(undefined4 *)(iVar6 + 0x1d8) = uVar3;
  }
  return iVar2;
}



// tnp::PPPP__Close_Inner(unsigned int)

undefined4 tnp::PPPP__Close_Inner(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  char acStack_68 [68];
  
  PPPP_DebugTrace(1,"PPPP__Close_Inner() Enter.\n");
  if (gMaxSessionNumber < param_1) {
    uVar4 = 0xfffff43d;
  }
  else {
    iVar8 = param_1 * 0x3f18;
    if ((*(int *)(gTNPSession + iVar8 + 0x50) < 0) && (*(int *)(gTNPSession + iVar8 + 0x54) < 0)) {
      uVar4 = 0xfffff430;
    }
    else {
      iVar1 = param_1 * 0x18;
      MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
      iVar5 = gTNPSessionLock;
      iVar6 = gTNPSession + iVar8;
      if (*(char *)(iVar6 + 0x1b8) == '\x01') {
        MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar1));
        uVar4 = 0xfffff43a;
      }
      else {
        *(undefined1 *)(iVar6 + 0x1b8) = 1;
        if (*(char *)(iVar6 + 0x1ba) == '\0') {
          *(undefined1 *)(iVar6 + 0x1ba) = 3;
        }
        MUTEX_RELEASE((pthread_mutex_t *)(iVar5 + iVar1));
        iVar5 = gTNPSession + iVar8;
        if (*(char *)(iVar5 + 0x4f) == '\0') {
          uVar3 = *(byte *)(iVar5 + 0x1ba) - 1 & 0xff;
          if (uVar3 < 6) {
            uVar3 = *(uint *)(&DAT_0004f848 + uVar3 * 4);
            PPPP_DebugTrace(1,"PPPP_Proto_Send_Report DID:%s,State:%d,RetCode:%d\n",iVar5,
                            (uint)*(byte *)(iVar5 + 0x1b0),uVar3);
            bVar9 = 0xfffff43a < uVar3;
            if (uVar3 != 0xfffff43b) {
              bVar9 = uVar3 != 0xfffff42f;
            }
            if (((!bVar9 || (uVar3 == 0xfffff43b || uVar3 == 0xfffff430)) || (uVar3 == 0xfffff434))
               && (iVar5 = CreateSocket('\0'), -1 < iVar5)) {
              memset(acStack_68,0,0x40);
              sprintf(acStack_68,"PPPP__Close_Inner,ErrorCode:%d,Session:%d",uVar3,param_1);
              iVar6 = 0;
              do {
                pcVar7 = (char *)(gTNPSession + iVar8);
                iVar2 = iVar6 * 0x10;
                iVar6 = iVar6 + 1;
                PPPP_Proto_Send_Report
                          (iVar5,'\0',(sockaddr_in *)(pcVar7 + iVar2 + 0x8c),pcVar7,'\x02',
                           pcVar7[0x1b0],pcVar7[0x4f],(short)uVar3,"PPPP_Close Called");
              } while (iVar6 != 3);
              CloseSocket(iVar5);
            }
            iVar5 = gTNPSession + iVar8;
          }
          else {
            PPPP_DebugTrace(1,"PPPP_Proto_Send_Report DID:%s,State:%d,RetCode:%d\n",iVar5,
                            (uint)*(byte *)(iVar5 + 0x1b0),0);
            iVar5 = gTNPSession + iVar8;
          }
        }
        if ((*(char *)(iVar5 + 0x1ba) != '\x06') && (-1 < *(int *)(iVar5 + 0x54))) {
          PPPP_Proto_Send_Close
                    (*(int *)(iVar5 + 0x54),*(char *)(iVar5 + 0x1a6),(sockaddr_in *)(iVar5 + 0x5c));
        }
        MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
        iVar5 = gTNPSessionLock;
        iVar6 = gTNPSession + iVar8;
        *(undefined1 *)(iVar6 + 0x1c1) = 1;
        *(undefined1 *)(iVar6 + 0x1c2) = 1;
        *(undefined1 *)(iVar6 + 0x1c3) = 1;
        MUTEX_RELEASE((pthread_mutex_t *)(iVar5 + iVar1));
        PPPP_DebugTrace(1,"Wait for Send/Recv thread to exit...");
        WaitThreadExit((ulong *)(gTNPSession + iVar8 + 0x1cc));
        WaitThreadExit((ulong *)(gTNPSession + iVar8 + 0x1c8));
        WaitThreadExit((ulong *)(gTNPSession + iVar8 + 0x1c4));
        WaitThreadExit((ulong *)(gTNPSession + iVar8 + 0x1d0));
        WaitThreadExit((ulong *)(gTNPSession + iVar8 + 0x1d4));
        WaitThreadExit((ulong *)(gTNPSession + iVar8 + 0x1d8));
        PPPP_DebugTrace(1,"Wait Thread Exit Done!!\n");
        PPPP_DebugTrace(1,"Clear data buffers...");
        MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
        iVar5 = 0;
        do {
          iVar6 = iVar5 * 0x1c;
          sll_DeInit((__the_SLL *)(gTNPSession + iVar8 + iVar6 + 0x3d4));
          sll_DeInit((__the_SLL *)(iVar6 + gTNPSession + iVar8 + 0x32c));
          sll_DeInit((__the_SLL *)(iVar6 + gTNPSession + iVar8 + 0x284));
          sll_DeInit((__the_SLL *)(iVar6 + gTNPSession + iVar8 + 0x1dc));
          iVar6 = iVar5 + 1;
          PPPP_DebugTrace(1," %d ",iVar5);
          iVar5 = iVar6;
        } while (iVar6 != 6);
        MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar1));
        PPPP_DebugTrace(1," ... Done!!\n");
        iVar5 = gTNPSession + iVar8;
        if (((*(char *)(iVar5 + 0x4f) != '\x01') || (*(char *)(iVar5 + 0x1a5) != '\x01')) &&
           (-1 < *(int *)(iVar5 + 0x50))) {
          CloseSocket(*(int *)(iVar5 + 0x50));
          iVar5 = gTNPSession + iVar8;
        }
        iVar8 = *(int *)(iVar5 + 0x54);
        if ((-1 < iVar8) && (iVar8 != *(int *)(iVar5 + 0x50))) {
          CloseSocket(iVar8);
        }
        MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
        PPPP__Reset_Session(param_1,1);
        MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar1));
        PPPP_DebugTrace(1,"PPPP__Close_Inner() Exit.\n");
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



// tnp::PPPP__R2PMP_Start(int)

void tnp::PPPP__R2PMP_Start(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  
  PPPP_DebugTrace(0x80,"PPPP__R2PMP_Start\n");
  iVar5 = param_1 * 0x3f18;
  iVar2 = gTNPSession + iVar5;
  if (*(char *)(iVar2 + 0x4f) == '\0') {
    iVar4 = *(int *)(iVar2 + 0x50);
    if (iVar4 < 0) {
      iVar4 = *(int *)(iVar2 + 0x54);
    }
    cVar6 = '\0';
    pcVar3 = (char *)(gTNPSession + iVar5);
    iVar2 = 0;
    while( true ) {
      iVar1 = iVar2 * 0x10;
      iVar2 = iVar2 + 1;
      PPPP_Proto_Send_Report
                (iVar4,pcVar3[0x1a5],(sockaddr_in *)(pcVar3 + iVar1 + 0x8c),pcVar3,'\x04',
                 pcVar3[0x1b0],cVar6,0,"R2P_Start_Received");
      if (iVar2 == 3) break;
      pcVar3 = (char *)(gTNPSession + iVar5);
      cVar6 = pcVar3[0x4f];
    }
  }
  return;
}



// tnp::PPPP__R2PMP_Success(int, sockaddr_in*)

void tnp::PPPP__R2PMP_Success(int param_1,sockaddr_in *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  iVar4 = param_1 * 0x3f18;
  PPPP_DebugTrace(0x80,"R2PMP_Success, PeerAddress %s:%d\n",pcVar1,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  iVar2 = gTNPSession + iVar4;
  *(undefined1 *)(iVar2 + 0x1b6) = 0;
  memcpy((void *)(iVar2 + 0x5c),param_2,0x10);
  PPPP__Set_SessionState(param_1,'\x06');
  iVar2 = gTNPSession;
  iVar3 = gTNPSession + iVar4;
  *(undefined1 *)(iVar3 + 0x1b2) = 0;
  if (*(char *)(iVar3 + 0x4f) == '\0') {
    iVar5 = *(int *)(iVar3 + 0x50);
    if (iVar5 < 0) {
      iVar5 = *(int *)(iVar3 + 0x54);
    }
    iVar3 = 0;
    do {
      pcVar1 = (char *)(iVar2 + iVar4);
      iVar2 = iVar3 * 0x10;
      iVar3 = iVar3 + 1;
      PPPP_Proto_Send_ConnectReport
                (iVar5,pcVar1[0x1a5],(sockaddr_in *)(pcVar1 + iVar2 + 0x8c),pcVar1,'\x01',"R2P",0);
      iVar2 = gTNPSession;
    } while (iVar3 != 3);
    if (gR2PMPCallback != 0) {
      CreateWorkerThread(PPPP_Thread_R2PMP_Callback,(void *)param_1);
      DetachThread((ulong *)&stack0xfffffff4);
    }
    return;
  }
  return;
}



// tnp::PPPP__Send_Alive(unsigned int, int, char, sockaddr_in*)

void tnp::PPPP__Send_Alive(uint param_1,int param_2,char param_3,sockaddr_in *param_4)

{
  int iVar1;
  
  if (param_3 == '\0') {
    iVar1 = param_1 * 0x3f18 + gTNPSession;
    *(short *)(iVar1 + 0x3efc) = *(short *)(iVar1 + 0x3efc) + 1;
  }
  PPPP_Proto_Send_Alive(param_2,param_3,param_4);
  return;
}



// tnp::PPPP__Send_Report(int, unsigned char, char*)

undefined4 tnp::PPPP__Send_Report(int param_1,uchar param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  
  if (2 < gCurrentReportLevel) {
    pcVar4 = (char *)(gTNPSession + param_1 * 0x3f18);
    iVar2 = *(int *)(pcVar4 + 0x50);
    if (0 < iVar2) {
      if (pcVar4[0x1a5] == '\0') {
        cVar3 = '\0';
        iVar5 = 0;
        while( true ) {
          iVar1 = iVar5 * 0x10;
          iVar5 = iVar5 + 1;
          PPPP_Proto_Send_Report
                    (iVar2,cVar3,(sockaddr_in *)(pcVar4 + iVar1 + 0x8c),pcVar4,param_2,pcVar4[0x1b0]
                     ,pcVar4[0x4f],0,param_3);
          if (iVar5 == 3) break;
          pcVar4 = (char *)(gTNPSession + param_1 * 0x3f18);
          iVar2 = *(int *)(pcVar4 + 0x50);
          cVar3 = pcVar4[0x1a5];
        }
      }
      else {
        PPPP_Proto_Send_Report
                  (iVar2,pcVar4[0x1a5],
                   (sockaddr_in *)(pcVar4 + *(int *)(pcVar4 + 0x16c) * 0x10 + 0xdc),pcVar4,param_2,
                   pcVar4[0x1b0],pcVar4[0x4f],0,param_3);
      }
    }
  }
  return 0;
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// tnp::PPPP_Thread_Recv_TCP(void*)

void tnp::PPPP_Thread_Recv_TCP(void *param_1)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  __the_SLL_Element *p_Var5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ushort uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  st_PPPP_DRWAckHeader *psVar21;
  int iVar22;
  uint __n;
  undefined8 uVar23;
  undefined8 uVar24;
  uint local_848;
  uint local_830;
  byte local_7f2;
  byte local_7f1;
  ushort uStack_7f0;
  ushort uStack_7ee;
  ushort uStack_7ec;
  ushort local_7ea;
  char acStack_7e8 [64];
  st_PPPP_DRWAckHeader asStack_7a8 [16];
  byte abStack_798 [1908];
  
  memset(acStack_7e8,0,0x40);
  getCurTime();
  PPPP_DebugTrace(0x80,"PPPP_Thread_Recv_TCP Start...\n");
  iVar22 = (int)param_1 * 0x3f18;
  local_848 = 0;
  local_830 = 0;
  iVar1 = (int)param_1 * 0x18;
  __n = 0;
joined_r0x000391f0:
  do {
    while( true ) {
      while( true ) {
        if (((gTNPSession == 0) ||
            (iVar12 = gTNPSession + iVar22, *(char *)(iVar12 + 0x1c3) != '\0')) ||
           (*(char *)(iVar12 + 0x1b1) == '\0')) goto LAB_0003923c;
        if ((-1 < *(int *)(iVar12 + 0x54)) && (*(char *)(iVar12 + 0x1a6) != '\0')) break;
        mSecSleep(10);
      }
      uStack_7f0 = (ushort)((0x780 - __n) * 0x10000 >> 0x10);
      iVar12 = PPPP_Proto_Recv_TCP(*(int *)(iVar12 + 0x54),(char *)(asStack_7a8 + __n),uStack_7f0,
                                   &uStack_7f0,0x28);
      if (iVar12 != 0) break;
      uVar20 = (uint)uStack_7f0;
      uVar19 = *(undefined4 *)(gTNPSession + iVar22 + 0x54);
      pcVar10 = inet_ntoa((in_addr)*(in_addr_t *)(gTNPSession + iVar22 + 0xd0));
      uVar3 = *(ushort *)(gTNPSession + iVar22 + 0xce);
      PPPP_DebugTrace(0x80,
                      "PPPP_Thread_Recv_TCP(SessionHandle:%d,Socket:%d) ==> RecvSize = %d, From %s:%d\n"
                      ,param_1,uVar19,uVar20,pcVar10,(uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8));
      uVar13 = __n + uStack_7f0;
      uVar20 = 0;
      while( true ) {
        __n = uVar13 & 0xffff;
        iVar12 = PPPP__Check_SessionDataReady
                           ((char *)(asStack_7a8 + uVar20),(ushort)uVar13,&uStack_7ee,&uStack_7ec,
                            &local_7f2);
        if (iVar12 != 1) break;
        if (((gTNPSession == 0) ||
            (iVar12 = gTNPSession + iVar22, *(char *)(iVar12 + 0x1c3) != '\0')) ||
           (*(char *)(iVar12 + 0x1b1) == '\0')) goto LAB_0003923c;
        uVar6 = (uint)uStack_7ee;
        uVar8 = (uint)uStack_7ec;
        uVar19 = *(undefined4 *)(iVar12 + 0x54);
        uVar18 = (uint)local_7f2;
        pcVar10 = inet_ntoa((in_addr)*(in_addr_t *)(iVar12 + 0xd0));
        iVar12 = uVar20 + uVar6;
        psVar21 = asStack_7a8 + iVar12;
        uVar3 = *(ushort *)(gTNPSession + iVar22 + 0xce);
        uVar13 = (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8);
        uVar11 = uVar8;
        PPPP_DebugTrace(0x80,
                        "PPPP_Thread_Recv_TCP(SessionHandle:%d,Socket:%d) ==> MsgType = 0x%02X, DataSize = %d, From %s:%d\n"
                        ,param_1,uVar19,uVar18,uVar8,pcVar10,uVar13);
        if (*(short *)(gTNPSession + iVar22 + 0x1b4) == 1) {
          mSecSleep(10);
        }
        else {
          if (*(char *)(gTNPSession + iVar22 + 0x1b4) == '\0') {
            while (iVar16 = MUTEX_TRYLOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1)), iVar16 != 0
                  ) {
              if (((gTNPSession == 0) || (*(char *)(gTNPSession + iVar22 + 0x1c3) != '\0')) ||
                 (*(char *)(gTNPSession + iVar22 + 0x1b1) == '\0')) goto LAB_0003923c;
              mSecSleep(10);
            }
            if (local_7f2 == 0x71) {
              PPPP_DebugTrace(0x10,"Recv MSG_RLY_HELLO_ACK\n");
            }
            else if (local_7f2 < 0x72) {
              if (local_7f2 == 6) {
                PPPP_DebugTrace(0x10,"MSG_SESSION_RESPONSE, ResType:%d, Role:%d, Result:%d\n",
                                (uint)(byte)asStack_7a8[iVar12],(uint)(byte)asStack_7a8[iVar12 + 1],
                                (uint)(byte)asStack_7a8[iVar12 + 2],uVar11,pcVar10,uVar13);
                iVar12 = gTNPSession + iVar22;
                *(undefined1 *)(iVar12 + 0x1b3) = 0xf5;
                *(undefined1 *)(iVar12 + 0x1c1) = 1;
                *(undefined1 *)(iVar12 + 0x1c3) = 1;
              }
            }
            else if (local_7f2 == 0x88) {
              PPPP_DebugTrace(0x80,"Recv MSG_RLY_TCP_START_ACK\n");
              if (*(byte *)(gTNPSession + iVar22 + 0x1b0) < 0x25) {
                PPPP__Update_SessionState((int)param_1,'$');
                PPPP_DebugTrace(0x80,"Recv MSG_RLY_TCP_START_ACK Ticket:%s, Result:%d\n",psVar21,
                                (uint)abStack_798[iVar12]);
                iVar16 = gTNPSession + iVar22;
                *(byte *)(iVar16 + 0x1b3) = abStack_798[iVar12];
                if (abStack_798[iVar12] == 0) {
                  memcpy((void *)(iVar16 + 0x17c),psVar21,0x10);
                  iVar12 = 0;
                  if (*(char *)(gTNPSession + iVar22 + 0x1a5) == '\x01') {
                    PPPP_DebugTrace(0x80,"Send RlyTCPReq through tcp\n");
                    iVar12 = gTNPSession + iVar22;
                    if ((*(byte *)(iVar12 + 0x1b0) < 0x25) &&
                       (iVar12 = PPPP_Proto_Send_RlyTCPReq
                                           (*(int *)(iVar12 + 0x50),'\x01',
                                            (sockaddr_in *)
                                            (iVar12 + *(int *)(iVar12 + 0x16c) * 0x10 + 0xdc),
                                            (char *)(iVar12 + 0x18),*(uint *)(iVar12 + 0x28),
                                            (char *)(iVar12 + 0x20),(sockaddr_in *)(iVar12 + 0xcc),
                                            (char *)(iVar12 + 0x17c)), -1 < iVar12)) {
                      PPPP__Update_SessionState((int)param_1,'%');
                    }
                  }
                  else {
                    do {
                      iVar15 = gTNPSession + iVar22;
                      iVar16 = iVar12 * 0x10;
                      iVar12 = iVar12 + 1;
                      PPPP_Proto_Send_RlyTCPReq
                                (*(int *)(iVar15 + 0x50),'\0',
                                 (sockaddr_in *)(iVar15 + iVar16 + 0x8c),(char *)(iVar15 + 0x18),
                                 *(uint *)(iVar15 + 0x28),(char *)(iVar15 + 0x20),
                                 (sockaddr_in *)(iVar15 + 0xcc),(char *)(iVar15 + 0x17c));
                    } while (iVar12 != 3);
                  }
                }
              }
            }
            else if (local_7f2 == 0x8b) {
              PPPP_DebugTrace(0x80,"Recv MSG_RLY_TCP_RESULT\n");
              iVar16 = gTNPSession + iVar22;
              if (*(byte *)(iVar16 + 0x1b0) < 0x2a) {
                *(st_PPPP_DRWAckHeader *)(iVar16 + 0x1b3) = asStack_7a8[iVar12];
                PPPP_DebugTrace(0x80,"Recv MSG_RLY_TCP_RESULT with result %d\n",
                                (uint)(byte)asStack_7a8[iVar12],iVar16,uVar18,uVar11,pcVar10,uVar13)
                ;
                if (asStack_7a8[iVar12] == (st_PPPP_DRWAckHeader)0x0) {
                  memcpy((void *)(gTNPSession + iVar22 + 0x5c),(void *)(gTNPSession + iVar22 + 0xcc)
                         ,0x10);
                  PPPP__Set_SessionReady((int)param_1,'\x02');
                }
                if (*(char *)(gTNPSession + iVar22 + 0x4f) == '\x01') {
                  memset(acStack_7e8,0,0x40);
                  sprintf(acStack_7e8,"Recv RLY_TCP_RESULT:%d,Session:%d",
                          (uint)(byte)asStack_7a8[iVar12],param_1);
                  PPPP__Send_Report((int)param_1,'\x01',acStack_7e8);
                }
              }
            }
          }
          else {
            MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
            switch(local_7f2) {
            case 0xd0:
              PPPP_DebugTrace(0x80,"Recv MSG_DRW\n");
              iVar16 = PPPP_DRW_Read_Header((st_PPPP_DRWHeader *)psVar21,&local_7f1,&local_7ea);
              if (iVar16 == 0) {
                PPPP_DebugTrace(0x80,"Recv MSG_DRW From Channel:%d\n",(uint)local_7f1);
                if (local_7f1 < 6) {
                  if (4 < uStack_7ec) {
                    PPPP_DebugTrace(1,"Recv DRW Data ==> Channel:%d,DRW Packet Index:%d\n",
                                    (uint)local_7f1,(uint)local_7ea);
                    uVar13 = (uint)local_7f1;
                    iVar16 = gTNPSession + iVar22;
                    if (0x100000 < *(uint *)(iVar16 + uVar13 * 0x1c + 0x3e0)) {
                      iVar16 = IndexCompare(local_7ea,*(ushort *)(iVar16 + (uVar13 + 0x244) * 2));
                      if (0 < iVar16) goto LAB_000396f8;
                      uVar13 = (uint)local_7f1;
                      iVar16 = gTNPSession + iVar22;
                    }
                    iVar15 = iVar16 + uVar13 * 2;
                    uVar11 = (uint)*(ushort *)(iVar15 + 0x3890);
                    if (uVar11 < 0x52) {
                      *(ushort *)(iVar16 + (uVar13 * 0x52 + uVar11 + 0x1a40) * 2 + 0x38) = local_7ea
                      ;
                      *(short *)(iVar15 + 0x3890) = (short)((uVar11 + 1) * 0x10000 >> 0x10);
                      if (0x4e < (uVar11 + 1 & 0xffff)) {
                        PPPP_DebugTrace(0x10000,"Receive PPPP_DRW_MUST_ACK_SIZE MSG_DRW\n");
                        iVar16 = gTNPSession + iVar22;
                        iVar16 = PPPP_DRWAck_Send(*(int *)(iVar16 + 0x54),'\x01',
                                                  (sockaddr_in *)(iVar16 + 0x5c),local_7f1,
                                                  (ushort *)
                                                  ((uint)local_7f1 * 0xa4 + iVar16 + 0x34b8),
                                                  *(ushort *)
                                                   (iVar16 + (local_7f1 + 0x1c40) * 2 + 0x10));
                        if ((iVar16 < 0) && (*(char *)(gTNPSession + iVar22 + 0x1a6) != '\0')) {
                          PPPP_DebugTrace(0x100,
                                          "PPPP_DRWAck_Send Error, Channel=%d, NumberOfIndex=%d, Ret=%d\n"
                                          ,(uint)local_7f1,
                                          (uint)*(ushort *)
                                                 (gTNPSession + iVar22 + (local_7f1 + 0x1c40) * 2 +
                                                 0x10),iVar16);
                          goto LAB_00039ed4;
                        }
                        PPPP_DebugTrace(0x80,"PPPP_DRWAck_Send Channel=%d, NumberOfIndex=%d\n",
                                        (uint)local_7f1,
                                        (uint)*(ushort *)
                                               (gTNPSession + (local_7f1 + 0x1c48) * 2 + iVar22));
                        uVar13 = (uint)local_7f1;
                        iVar16 = gTNPSession + iVar22;
                        *(undefined2 *)(iVar16 + (uVar13 + 0x1c48) * 2) = 0;
                      }
                      iVar16 = IndexCompare(*(ushort *)(iVar16 + (uVar13 + 0x244) * 2),local_7ea);
                      if (iVar16 < 1) {
                        PPPP_DebugTrace(0x80,
                                        "Inset into LL_Recv Channel: %d, Index: %d, Size = %d\n",
                                        (uint)local_7f1,(uint)local_7ea,uStack_7ec - 4);
                        p_Var5 = (__the_SLL_Element *)
                                 sll_element_Allocate((uint)local_7ea,uStack_7ec - 4);
                        if (p_Var5 == (__the_SLL_Element *)0x0) {
                          PPPP_DebugTrace(0x80,"LL_Recv Put Failed!!\n");
                          iVar12 = gTNPSession + iVar22;
                          *(undefined1 *)(iVar12 + 0x1c2) = 1;
                          *(undefined1 *)(iVar12 + 0x1c3) = 1;
                          if (*(char *)(iVar12 + 0x1ba) == '\0') {
                            *(undefined1 *)(iVar12 + 0x1ba) = 4;
                          }
                        }
                        else {
                          memcpy(*(void **)(p_Var5 + 8),asStack_7a8 + iVar12 + 4,
                                 *(size_t *)(p_Var5 + 4));
                          iVar12 = sll_Put((__the_SLL *)
                                           ((uint)local_7f1 * 0x1c + gTNPSession + iVar22 + 0x3d4),
                                           p_Var5);
                          if (iVar12 < 0) {
                            PPPP_DebugTrace(0x80,"LL_Recv Put Failed!!\n");
                            goto LAB_0003a480;
                          }
                          PPPP_DebugTrace(0x4000,"R:%d-%d,%d\n",(uint)local_7f1,(uint)local_7ea,
                                          uStack_7ec - 4);
                        }
                      }
                    }
                  }
                }
                else {
                  PPPP_DebugTrace(0x8000,
                                  "Abnormal packet received!! Wrong channel number= %d, close session\n"
                                 );
LAB_0003a480:
                  iVar12 = gTNPSession + iVar22;
                  *(undefined1 *)(iVar12 + 0x1c2) = 1;
                  *(undefined1 *)(iVar12 + 0x1c3) = 1;
                  if (*(char *)(iVar12 + 0x1ba) == '\0') {
                    *(undefined1 *)(iVar12 + 0x1ba) = 5;
                  }
                }
              }
              else {
                PPPP_DebugTrace(0x80,"PPPP_DRW_Read_Header Error!!\n");
              }
LAB_000396f8:
              local_848 = 0;
              local_830 = 0;
              break;
            case 0xd1:
              PPPP_DebugTrace(0x80,"Recv MSG_DRW_ACK\n");
              iVar16 = PPPP_DRWAck_Read_Header(psVar21,&local_7f1,&local_7ea);
              if (iVar16 == 0) {
                PPPP_DebugTrace(0x80,"Recv MSG_DRW_ACK From Channel:%d\n",(uint)local_7f1);
                pcVar10 = "Abnormal packet received!! Wrong channel number= %d, close session\n";
                if (local_7f1 < 6) {
                  if (local_7ea < 0x52) {
                    PPPP_DebugTrace(0x80,"Number Of Index: %d\n");
                    uVar17 = local_7ea;
                    iVar15 = gTNPSession + iVar22 + (uint)local_7f1 * 2;
                    uVar3 = *(ushort *)(iVar15 + 0x389c);
                    uVar23 = FUN_00048030(local_7ea);
                    uVar24 = FUN_00048030(uVar3 + 10);
                    uVar24 = FUN_0004810c((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0x66666666,
                                          0x3fe66666);
                    iVar16 = FUN_00048694((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                                          (int)((ulonglong)uVar24 >> 0x20));
                    if (iVar16 != 0) {
                      uVar23 = FUN_00048030((uint)uVar3);
                      FUN_0004810c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0x33333333,
                                   0x3ff33333);
                      sVar2 = FUN_000486a8();
                      uVar3 = sVar2 + 1;
                      *(ushort *)(iVar15 + 0x389c) = uVar3;
                      if (uVar3 < 0x65) {
                        PPPP_DebugTrace(0x10000,"Increase SlidWindowSize to %d\n",uVar3 + 10);
                        uVar17 = local_7ea;
                      }
                      else {
                        *(undefined2 *)(iVar15 + 0x389c) = 100;
                      }
                    }
                    if (uVar17 != 0) {
                      psVar21 = asStack_7a8 + iVar12 + 2;
                      iVar12 = 0;
                      do {
                        psVar21 = psVar21 + 2;
                        uVar3 = *(ushort *)psVar21 << 8;
                        uVar17 = *(ushort *)psVar21 >> 8;
                        uVar13 = (uint)(uVar3 | uVar17);
                        iVar16 = iVar12;
                        PPPP_DebugTrace(0x80,"Recv MSG_DRW_ACK From Channel:%d,Index:%d(%d)\n",
                                        (uint)local_7f1,uVar13,iVar12);
                        p_Var5 = (__the_SLL_Element *)
                                 sll_Remove_ByIndex((__the_SLL *)
                                                    (gTNPSession + iVar22 + (uint)local_7f1 * 0x1c +
                                                    0x32c),uVar13);
                        if (p_Var5 != (__the_SLL_Element *)0x0) {
                          PPPP_DebugTrace(0x80,"Remove from LL_Sent Channel: %d, Index: %d \n",
                                          (uint)local_7f1,uVar13,iVar16);
                          PPPP_DebugTrace(0x2000,"A:%d-%d \n",(uint)local_7f1,uVar13);
                          sll_element_Free(p_Var5);
                        }
                        p_Var5 = (__the_SLL_Element *)
                                 sll_Remove_ByIndex((__the_SLL *)
                                                    (gTNPSession + iVar22 + (uint)local_7f1 * 0x1c +
                                                    0x284),uVar13);
                        if (p_Var5 != (__the_SLL_Element *)0x0) {
                          PPPP_DebugTrace(0x80,"Remove from LL_ToSend Channel: %d, Index: %d \n",
                                          (uint)local_7f1,uVar13,iVar16);
                          PPPP_DebugTrace(0x2000,"A:%d-%d \n",(uint)local_7f1,uVar13);
                          sll_element_Free(p_Var5);
                        }
                        PPPP_DebugTrace(0x80,"Move previous ones to LL_ToSend \n",(uint)local_7f1,
                                        uVar13);
                        uVar11 = (uint)local_7f1;
                        iVar16 = gTNPSession + iVar22;
                        iVar15 = *(int *)(iVar16 + uVar11 * 0x1c + 0x334);
                        while (iVar15 != 0) {
                          PPPP_DebugTrace(0x80,"LL_Sent Head Index =%d \n",
                                          **(undefined4 **)(iVar16 + uVar11 * 0x1c + 0x32c));
                          iVar16 = IndexCompare(uVar3 | uVar17,
                                                **(ushort **)
                                                  (gTNPSession + (uint)local_7f1 * 0x1c + iVar22 +
                                                  0x32c));
                          if (iVar16 < 0) {
                            PPPP_DebugTrace(0x80,"LL_Sent Head Index is larger , so break\n");
                            uVar11 = (uint)local_7f1;
                            break;
                          }
                          PPPP_DebugTrace(0x80,"LL_Sent Head Index is smaller , so move;\n");
                          iVar16 = gTNPSession + iVar22 + (uint)local_7f1 * 0x1c;
                          sll_Move_ByNumber((__the_SLL *)(iVar16 + 0x32c),
                                            (__the_SLL *)(iVar16 + 0x284),0);
                          uVar11 = (uint)local_7f1;
                          iVar16 = gTNPSession + iVar22;
                          iVar15 = *(int *)(iVar16 + uVar11 * 0x1c + 0x334);
                        }
                        PPPP_DebugTrace(0x80,"Move previous ones to LL_ToSend Done!!\n",uVar11,
                                        uVar13);
                        iVar12 = iVar12 + 1;
                      } while (iVar12 < (int)(uint)local_7ea);
                    }
                    goto LAB_00039740;
                  }
                  pcVar10 = "Abnormal packet received!! Wrong NumberOfIndex = %d, close session\n";
                }
                PPPP_DebugTrace(0x8000,pcVar10);
                iVar12 = gTNPSession + iVar22;
                *(undefined1 *)(iVar12 + 0x1c2) = 1;
                *(undefined1 *)(iVar12 + 0x1c3) = 1;
                if (*(char *)(iVar12 + 0x1ba) == '\0') {
                  *(undefined1 *)(iVar12 + 0x1ba) = 5;
                }
              }
              else {
                PPPP_DebugTrace(0x80,"PPPP_DRWAck_Read_Header Error!!\n");
              }
LAB_00039740:
              local_848 = 0;
              local_830 = 0;
              break;
            case 0xd2:
              break;
            case 0xd3:
              break;
            case 0xd4:
              break;
            case 0xd5:
              break;
            case 0xd6:
              break;
            case 0xd7:
              break;
            case 0xd8:
              break;
            case 0xd9:
              break;
            case 0xda:
              break;
            case 0xdb:
              break;
            case 0xdc:
              break;
            case 0xdd:
              break;
            case 0xde:
              break;
            case 0xdf:
              break;
            case 0xe0:
              PPPP_DebugTrace(0x80,"Recv MSG_ALIVE\n");
              iVar12 = gTNPSession + iVar22;
              if (*(char *)(iVar12 + 0x1b5) != '\0') {
                iVar12 = PPPP_Proto_Send_AliveAck
                                   (*(int *)(iVar12 + 0x54),'\x01',(sockaddr_in *)(iVar12 + 0x5c));
                if ((iVar12 < 0) && (*(char *)(gTNPSession + iVar22 + 0x1a6) != '\0')) {
                  pcVar10 = "PPPP_Proto_Send_AliveAck Error, Ret=%d\n";
                  goto LAB_00039ed0;
                }
                iVar16 = 0;
                do {
                  iVar12 = iVar16 * 0x1c;
                  iVar15 = 3;
                  do {
                    piVar4 = (int *)sll_Move_ByNumber((__the_SLL *)
                                                      (gTNPSession + iVar22 + iVar12 + 0x32c),
                                                      (__the_SLL *)
                                                      (gTNPSession + iVar22 + iVar12 + 0x284),0);
                    if ((piVar4 == (int *)0x0) ||
                       (piVar7 = *(int **)(gTNPSession + iVar22 + iVar12 + 0x32c),
                       piVar7 == (int *)0x0)) break;
                    if (*piVar4 == *piVar7 + -1) {
                      iVar15 = iVar15 + -1;
                    }
                    else {
                      iVar15 = iVar15 >> 1;
                    }
                  } while (0 < iVar15);
                  iVar12 = gTNPSession + iVar22;
                  iVar16 = iVar16 + 1;
                } while (iVar16 != 6);
              }
              if (*(char *)(iVar12 + 0x4f) == '\x01') {
                memset(acStack_7e8,0,0x40);
                sprintf(acStack_7e8,"Recv ALIVE,Session:%d",param_1);
                PPPP__Send_Report((int)param_1,'\x02',acStack_7e8);
                local_830 = 0;
              }
              else {
                local_830 = 0;
              }
              break;
            case 0xe1:
              PPPP_DebugTrace(0x80,"Recv MSG_ALIVE_ACK\n");
              if (*(char *)(gTNPSession + iVar22 + 0x4f) != '\x01') goto LAB_000396f8;
              memset(acStack_7e8,0,0x40);
              sprintf(acStack_7e8,"Recv ALIVE_ACK,Session:%d",param_1);
              local_848 = 0;
              PPPP__Send_Report((int)param_1,'\x02',acStack_7e8);
              local_830 = 0;
              break;
            case 0xe2:
              break;
            case 0xe3:
              break;
            case 0xe4:
              break;
            case 0xe5:
              iVar16 = gTNPSession + iVar22;
              uVar23 = getCurTime();
              uVar9 = *(uint *)(asStack_7a8 + iVar12);
              uVar14 = *(uint *)(asStack_7a8 + iVar12 + 4);
              iVar12 = gTNPSession + iVar22;
              uVar9 = (uVar9 ^ (uVar9 >> 0x10 | uVar9 << 0x10)) >> 8 & 0xffff00ff ^
                      (uVar9 >> 8 | uVar9 << 0x18);
              uVar14 = (uVar14 ^ (uVar14 >> 0x10 | uVar14 << 0x10)) >> 8 & 0xffff00ff ^
                       (uVar14 >> 8 | uVar14 << 0x18);
              *(undefined8 *)(iVar16 + 0x3f10) = uVar23;
              *(uint *)(iVar12 + 0x3f04) = uVar9;
              *(uint *)(iVar12 + 0x3f08) = uVar14;
              PPPP_DebugTrace(0x80,"Recv MSG_BITRATE_INFO With Bitrate:%u LossRatio:%u\n",uVar9,
                              uVar14,uVar18,uVar11,pcVar10,uVar13);
              break;
            case 0xe6:
              break;
            case 0xe7:
              break;
            case 0xe8:
              break;
            case 0xe9:
              break;
            case 0xea:
              break;
            case 0xeb:
              break;
            case 0xec:
              break;
            case 0xed:
              break;
            case 0xee:
              break;
            case 0xef:
              break;
            case 0xf0:
              PPPP_DebugTrace(0x80,"Recv MSG_CLOSE\n");
              iVar12 = gTNPSession + iVar22;
              if (*(char *)(iVar12 + 0x1ba) == '\0') {
                *(undefined1 *)(iVar12 + 0x1ba) = 2;
              }
              *(undefined1 *)(iVar12 + 0x1c2) = 1;
              *(undefined1 *)(iVar12 + 0x1c3) = 1;
              if (*(char *)(iVar12 + 0x4f) == '\x01') {
                memset(acStack_7e8,0,0x40);
                sprintf(acStack_7e8,"Recv CLOSE,CloseCode:%d,Session:%d",
                        (uint)*(byte *)(iVar12 + 0x1ba),param_1);
                PPPP__Send_Report((int)param_1,'\x02',acStack_7e8);
              }
            }
          }
          MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar1));
        }
        uVar11 = uVar8 + uVar6 & 0xffff;
        uVar13 = __n - uVar11;
        uVar20 = uVar20 + uVar11 & 0xffff;
      }
      if (__n != 0 && uVar20 != 0) {
        memmove(asStack_7a8,asStack_7a8 + uVar20,__n);
      }
    }
    if (iVar12 != -1) break;
    if (*(char *)(gTNPSession + iVar22 + 0x1b5) == '\x01') {
      if (local_848 % 0x19 == 0) {
        MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
        iVar12 = PPPP__Send_Alive((uint)param_1,*(int *)(gTNPSession + iVar22 + 0x54),'\x01',
                                  (sockaddr_in *)(gTNPSession + iVar22 + 0x5c));
        PPPP_DebugTrace(0x80,"PPPP_Proto_Send_Alive, Ret=%d\n",iVar12);
        if ((iVar12 < 0) && (*(char *)(gTNPSession + iVar22 + 0x1a6) != '\0')) {
          pcVar10 = "PPPP_Proto_Send_Alive Error, Ret=%d\n";
LAB_00039ed0:
          PPPP_DebugTrace(0x100,pcVar10,iVar12);
LAB_00039ed4:
          iVar22 = gTNPSession + iVar22;
          *(undefined1 *)(iVar22 + 0x1c2) = 1;
          *(undefined1 *)(iVar22 + 0x1c3) = 1;
          if (*(char *)(iVar22 + 0x1ba) == '\0') {
            *(undefined1 *)(iVar22 + 0x1ba) = 6;
          }
          MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar1));
          goto LAB_0003923c;
        }
        local_830 = local_830 + 1;
        PPPP_DebugTrace(0x800,"Session AliveCounter = %d , TimeOutCounter = %d\n",local_830,
                        local_848);
        if (8 < local_830) {
          pcVar10 = "socket recv Error";
          if (iVar12 != -2) {
            pcVar10 = "time out ";
          }
          PPPP_DebugTrace(0x800,"Session is timeout!!, Due to %s\n",pcVar10);
          iVar12 = gTNPSession + iVar22;
          if (*(char *)(iVar12 + 0x1ba) == '\0') {
            *(undefined1 *)(iVar12 + 0x1ba) = 1;
          }
          *(undefined1 *)(iVar12 + 0x1c2) = 1;
          *(undefined1 *)(iVar12 + 0x1c3) = 1;
          if (*(char *)(iVar12 + 0x4f) == '\x01') {
            memset(acStack_7e8,0,0x40);
            sprintf(acStack_7e8,"Alive Timeout,Session:%d",param_1);
            PPPP__Send_Report((int)param_1,'\x02',acStack_7e8);
          }
        }
        MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar1));
      }
      local_848 = local_848 + 1 & 0xffff;
    }
  } while( true );
  if (iVar12 == -2) {
    PPPP_DebugTrace(0x80,"Socket Error...\n");
    MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
    iVar12 = gTNPSessionLock;
    iVar16 = gTNPSession + iVar22;
    *(undefined1 *)(iVar16 + 0x1c2) = 1;
    *(undefined1 *)(iVar16 + 0x1c3) = 1;
    if (*(char *)(iVar16 + 0x1ba) == '\0') {
      *(undefined1 *)(iVar16 + 0x1ba) = 6;
    }
    MUTEX_RELEASE((pthread_mutex_t *)(iVar12 + iVar1));
    if (*(char *)(gTNPSession + iVar22 + 0x4f) == '\x01') {
      memset(acStack_7e8,0,0x40);
      sprintf(acStack_7e8,"TCP Socket Recv Error,Session:%d",param_1);
      PPPP__Send_Report((int)param_1,'\x02',acStack_7e8);
    }
LAB_0003923c:
    PPPP_DebugTrace(0x80,"PPPP_Thread_Recv_TCP Exit.\n");
    PPPP_DebugTrace(0x4000,"PPPP_Thread_Recv_TCP Exit.\n");
                    // WARNING: Subroutine does not return
    pthread_exit((void *)0x0);
  }
  goto joined_r0x000391f0;
}



// tnp::PPPP__Send_ErrorReport(int, unsigned char, char*)

undefined4 tnp::PPPP__Send_ErrorReport(int param_1,uchar param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(gTNPSession + param_1 * 0x3f18);
  iVar2 = *(int *)(pcVar4 + 0x50);
  if (0 < iVar2) {
    if (pcVar4[0x1a5] == '\0') {
      cVar3 = '\0';
      iVar5 = 0;
      while( true ) {
        iVar1 = iVar5 * 0x10;
        iVar5 = iVar5 + 1;
        PPPP_Proto_Send_Report
                  (iVar2,cVar3,(sockaddr_in *)(pcVar4 + iVar1 + 0x8c),pcVar4,param_2,pcVar4[0x1b0],
                   pcVar4[0x4f],0,param_3);
        if (iVar5 == 3) break;
        pcVar4 = (char *)(gTNPSession + param_1 * 0x3f18);
        iVar2 = *(int *)(pcVar4 + 0x50);
        cVar3 = pcVar4[0x1a5];
      }
    }
    else {
      PPPP_Proto_Send_Report
                (iVar2,pcVar4[0x1a5],
                 (sockaddr_in *)(pcVar4 + *(int *)(pcVar4 + 0x16c) * 0x10 + 0xdc),pcVar4,param_2,
                 pcVar4[0x1b0],pcVar4[0x4f],0,param_3);
    }
  }
  return 0;
}



// tnp::PPPP__Write_Block(int, unsigned char, char*, int)

int tnp::PPPP__Write_Block(int param_1,uchar param_2,char *param_3,int param_4)

{
  __the_SLL_Element *p_Var1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)param_2;
  iVar4 = param_1 * 0x3f18;
  p_Var1 = (__the_SLL_Element *)
           sll_element_Allocate
                     ((uint)*(ushort *)(gTNPSession + (uVar3 + 0x23c) * 2 + iVar4 + 4),param_4);
  if (p_Var1 == (__the_SLL_Element *)0x0) {
    PPPP_DebugTrace(1,"PPPP__Write_Block() Failed.\n");
    return -1;
  }
  memcpy(*(void **)(p_Var1 + 8),param_3,param_4);
  iVar2 = sll_Put((__the_SLL *)(gTNPSession + iVar4 + uVar3 * 0x1c + 0x1dc),p_Var1);
  if (-1 < iVar2) {
    iVar4 = gTNPSession + iVar4 + uVar3 * 2;
    *(short *)(iVar4 + 0x47c) = *(short *)(iVar4 + 0x47c) + 1;
    if (iVar2 != 0) {
      return param_4;
    }
    return 0;
  }
  return -1;
}



// tnp::PPPP__Calculate_P2PPktLossRatio(unsigned int)

uint tnp::PPPP__Calculate_P2PPktLossRatio(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x3f18 + gTNPSession;
  if (*(char *)(iVar3 + 0x1a6) != '\0') {
    *(undefined2 *)(iVar3 + 0x3f00) = 0;
    return param_1;
  }
  uVar2 = (uint)*(ushort *)(iVar3 + 0x3efc);
  if (uVar2 % 100 == 0) {
    if (uVar2 != 0) {
      uVar1 = (uint)*(ushort *)(iVar3 + 0x3efe);
      if (uVar1 < uVar2) {
        uVar1 = FUN_00047c58((uVar2 - uVar1) * 100);
        *(short *)(iVar3 + 0x3f00) = (short)uVar1;
      }
      else {
        *(undefined2 *)(iVar3 + 0x3f00) = 0;
      }
      *(undefined2 *)(iVar3 + 0x3efc) = 0;
      *(undefined2 *)(iVar3 + 0x3efe) = 0;
      return uVar1;
    }
    return 0;
  }
  return uVar2 * 0x51eb851f;
}



// tnp::PPPP__Calculate_LossRate(int, unsigned int*)

undefined4 tnp::PPPP__Calculate_LossRate(int param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_58 [13];
  
  iVar10 = param_1 * 0x3f18;
  iVar9 = 0;
  iVar8 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0;
  do {
    iVar7 = gTNPSession + iVar10;
    iVar5 = iVar8 * 0x1c;
    iVar1 = (iVar8 + 0x244) * 2;
    if (*(int *)(iVar7 + iVar5 + 0x3d8) == 0) {
      iVar5 = IndexDistanse(*(ushort *)(iVar7 + (iVar8 + 0x244) * 2),
                            *(ushort *)((int)param_2 + iVar9));
      if (0 < iVar5) {
        *(int *)((int)local_58 + iVar9) = iVar5;
        *(undefined4 *)((int)local_58 + iVar9 + 0x18) = 0;
      }
    }
    else {
      iVar7 = IndexDistanse(*(ushort *)(iVar7 + iVar1),*(ushort *)((int)param_2 + iVar9));
      iVar3 = IndexDistanse(**(ushort **)(gTNPSession + iVar10 + iVar5 + 0x3d8),
                            *(ushort *)(gTNPSession + iVar10 + iVar1));
      iVar1 = iVar3;
      if (-1 < iVar3) {
        iVar1 = iVar7;
      }
      if (iVar1 != 0 && (-1 < iVar3 && -1 < iVar7)) {
        *(int *)((int)local_58 + iVar9) = iVar7 + iVar3 + 1;
        *(int *)((int)local_58 + iVar9 + 0x18) =
             (1 - *(int *)(gTNPSession + iVar5 + iVar10 + 0x3dc)) + iVar3;
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 4;
  } while (iVar8 != 6);
  iVar9 = 0;
  iVar8 = 0;
  uVar6 = 0;
  do {
    iVar10 = iVar9 + 0x18;
    piVar2 = (int *)((int)local_58 + iVar9);
    iVar9 = iVar9 + 4;
    iVar8 = iVar8 + *(int *)((int)local_58 + iVar10);
    uVar6 = uVar6 + *piVar2;
  } while (iVar9 != 0x18);
  if (iVar8 == 0 || uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00047b90(iVar8 * 100 + (uVar6 >> 1),uVar6);
  }
  return uVar4;
}



// tnp::PPPP__Calculate_Bitrate(int, int, unsigned int, unsigned int, unsigned int*)

void tnp::PPPP__Calculate_Bitrate(int param_1,int param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_00047b90(param_4 * 8000,param_3);
  if (param_2 == 0) {
    uVar3 = PPPP__Calculate_LossRate(param_1,param_5);
  }
  else {
    uVar3 = 0;
  }
  iVar2 = param_1 * 0x3f18 + gTNPSession;
  PPPP_Proto_Send_BitrateInfo
            (*(int *)(iVar2 + 0x54),*(char *)(iVar2 + 0x1a6),(sockaddr_in *)(iVar2 + 0x5c),uVar1,
             uVar3);
  return;
}



// tnp::PPPP__Dump_SessionInfo(int)

void tnp::PPPP__Dump_SessionInfo(int param_1)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  char local_58 [4];
  undefined2 local_54;
  undefined2 uStack_52;
  undefined2 local_50;
  undefined1 local_4e;
  
  PPPP_DebugTrace(0x20,"-------- Dummp Session Handle: %d --------\n",param_1);
  iVar4 = param_1 * 0x3f18;
  PPPP_DebugTrace(0x20," SSocket = %d\n",*(undefined4 *)(gTNPSession + iVar4 + 0x54));
  pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(gTNPSession + iVar4 + 0x60));
  uVar2 = *(ushort *)(gTNPSession + iVar4 + 0x5e);
  PPPP_DebugTrace(0x20," RemoteAddr: %s:%d\n",pcVar3,(uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
  pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(gTNPSession + iVar4 + 0x70));
  uVar2 = *(ushort *)(gTNPSession + iVar4 + 0x6e);
  PPPP_DebugTrace(0x20," MyLocalAddr: %s:%d\n",pcVar3,(uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
  pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(gTNPSession + iVar4 + 0x80));
  uVar2 = *(ushort *)(gTNPSession + iVar4 + 0x7e);
  PPPP_DebugTrace(0x20," MyWanAddr: %s:%d\n",pcVar3,(uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
  PPPP_DebugTrace(0x20," ConnectTime: %dMS\n",*(undefined4 *)(gTNPSession + iVar4 + 0x3ef0));
  PPPP_DebugTrace(0x20," ConnectTimeP2P: %dMS\n",*(undefined4 *)(gTNPSession + iVar4 + 0x3ef4));
  PPPP_DebugTrace(0x20," ConnectTimeRelay: %dMS\n",*(undefined4 *)(gTNPSession + iVar4 + 0x3ef8));
  PPPP_DebugTrace(0x20," DID: %s\n",gTNPSession + iVar4);
  pcVar3 = "Client";
  if (*(char *)(gTNPSession + iVar4 + 0x4f) != '\0') {
    pcVar3 = "Device";
  }
  PPPP_DebugTrace(0x20," I am Client or Device: %s\n",pcVar3);
  memset(local_58,0,0x40);
  cVar1 = *(char *)(gTNPSession + iVar4 + 0x1b6);
  if (cVar1 == '\0') {
    builtin_strncpy(local_58,"P2P",4);
  }
  else if (cVar1 == '\x01') {
    local_58[0] = 'R';
    local_58[1] = 'e';
    local_58[2] = 'l';
    local_58[3] = 'a';
    local_54._0_1_ = 'y';
    local_54._1_1_ = '\0';
  }
  else if (cVar1 == '\x02') {
    local_58[0] = 'T';
    local_58[1] = 'C';
    local_58[2] = 'P';
    local_58[3] = ' ';
    local_54._0_1_ = 'R';
    local_54._1_1_ = 'e';
    register0x00000026 = 'l';
    register0x00000027 = 'a';
    local_50 = 0x79;
  }
  else if (cVar1 == '\x03') {
    local_58[0] = 'S';
    local_58[1] = 'D';
    local_58[2] = 'e';
    local_58[3] = 'v';
    local_54._0_1_ = ' ';
    local_54._1_1_ = 'R';
    register0x00000026 = 'e';
    register0x00000027 = 'l';
    local_50 = 0x7961;
    local_4e = 0;
  }
  else if (cVar1 == '\x04') {
    builtin_strncpy(local_58,"R2P",4);
  }
  PPPP_DebugTrace(0x20," Connection Mode: %s\n",local_58);
  PPPP_DebugTrace(0x20," bExit_recv_proto %d\n",(uint)*(byte *)(gTNPSession + iVar4 + 0x1c1));
  PPPP_DebugTrace(0x20," bSessionReady %d\n",(uint)*(byte *)(gTNPSession + iVar4 + 0x1b4));
  PPPP_DebugTrace(0x20," hthread_recv_proto %d\n",*(undefined4 *)(gTNPSession + iVar4 + 0x1cc));
  PPPP_DebugTrace(0x20," hthread_recv_proto_LanSearch %d\n",
                  *(undefined4 *)(gTNPSession + iVar4 + 0x1c4));
  pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(gTNPSession + iVar4 + 0xc0));
  uVar2 = *(ushort *)(gTNPSession + iVar4 + 0xbe);
  PPPP_DebugTrace(0x20," P2PAddr: %s:%d\n",pcVar3,(uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
  pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(gTNPSession + iVar4 + 0xd0));
  uVar2 = *(ushort *)(gTNPSession + iVar4 + 0xce);
  PPPP_DebugTrace(0x20," RLYAddr: %s:%d\n",pcVar3,(uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
  iVar4 = gTNPSession + iVar4;
  PPPP_DebugTrace(0x20," P2PResult :%d, LoginResult :%d, RLYResult = %d\n",
                  (int)*(char *)(iVar4 + 0x1b2),(int)*(char *)(iVar4 + 0x1bd),
                  (int)*(char *)(iVar4 + 0x1b3));
  PPPP_DebugTrace(0x20,"-----End of Dummp Session Handle: %d -----\n",param_1);
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// tnp::PPPP_Thread_Recv_DRW(void*)

void tnp::PPPP_Thread_Recv_DRW(void *param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  __the_SLL_Element *p_Var8;
  int iVar9;
  size_t sVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  int *piVar15;
  int iVar16;
  char *__s;
  byte bVar17;
  short sVar18;
  uint uVar19;
  ushort *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint local_758;
  byte local_728;
  uchar uStack_727;
  ushort uStack_726;
  undefined2 uStack_724;
  undefined1 local_722;
  uint local_720;
  uint local_71c;
  undefined4 local_718;
  in_addr local_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  in_addr local_704;
  uint local_6f8;
  in_addr_t local_6f4;
  char acStack_6e8 [128];
  undefined4 local_668;
  uint local_664 [400];
  
  memset(acStack_6e8,0,0x80);
  getCurTime();
  PPPP_DebugTrace(0x80,"PPPP_Thread_Recv_DRW Running.\n");
  PPPP_DebugTrace(0x4000,"PPPP_Thread_Recv_DRW Running\n");
  iVar1 = (int)param_1 * 0x18;
  iVar22 = (int)param_1 * 0x3f18;
  uVar23 = 0;
  local_758 = 0;
joined_r0x0003b070:
  do {
    if (gTNPSession == 0) {
LAB_0003b15c:
      PPPP_DebugTrace(0x80,"PPPP_Thread_Recv_DRW Exit.\n");
      PPPP_DebugTrace(0x4000,"PPPP_Thread_Recv_DRW Exit.\n");
                    // WARNING: Subroutine does not return
      pthread_exit((void *)0x0);
    }
    iVar5 = *(int *)(gTNPSession + iVar22 + 0x54);
    if ((iVar5 < 0) || (*(char *)(gTNPSession + iVar22 + 0x1c2) != '\0')) goto LAB_0003b15c;
    iVar5 = PPPP_Proto_Recv_ALL(iVar5,(sockaddr_in *)&local_718,0x28,&local_728,&uStack_726,
                                (char *)&local_668,0x640,&uStack_727);
    if (iVar5 != 0) {
      if (iVar5 == -1) {
        if (uVar23 % 0x19 == 0) {
          local_758 = local_758 + 1;
          MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
          PPPP__Calculate_P2PPktLossRatio((uint)param_1);
          PPPP__Send_Alive((uint)param_1,*(int *)(gTNPSession + iVar22 + 0x54),'\0',
                           (sockaddr_in *)(gTNPSession + iVar22 + 0x5c));
          PPPP_DebugTrace(0x800,"Session AliveCounter = %d , TimeOutCounter = %d\n",local_758,uVar23
                         );
          if (8 < local_758) {
            PPPP_DebugTrace(0x800,"Session is timeout!!, Due to %s\n","time out ");
            iVar5 = gTNPSession + iVar22;
            if (*(char *)(iVar5 + 0x1ba) == '\0') {
              *(undefined1 *)(iVar5 + 0x1ba) = 1;
            }
            *(undefined1 *)(iVar5 + 0x1c2) = 1;
            if (*(char *)(iVar5 + 0x4f) == '\x01') {
              memset(acStack_6e8,0,0x80);
              sprintf(acStack_6e8,"Alive Timeout,Session:%d",param_1);
              PPPP__Send_Report((int)param_1,'\x02',acStack_6e8);
            }
          }
          MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar1));
        }
        uVar23 = uVar23 + 1 & 0xffff;
      }
      else {
        if (iVar5 == -2) {
          PPPP_DebugTrace(0x80,"Socket Recv Error...\n");
          MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
          iVar5 = gTNPSessionLock;
          iVar16 = gTNPSession + iVar22;
          if (*(char *)(iVar16 + 0x1ba) == '\0') {
            *(undefined1 *)(iVar16 + 0x1ba) = 6;
          }
          *(undefined1 *)(iVar16 + 0x1c2) = 1;
          MUTEX_RELEASE((pthread_mutex_t *)(iVar5 + iVar1));
          if (*(char *)(gTNPSession + iVar22 + 0x4f) == '\x01') {
            memset(acStack_6e8,0,0x80);
            sprintf(acStack_6e8,"UDP Socket Recv Error:%d,Session:%d",0xfffffffe,param_1);
            PPPP__Send_Report((int)param_1,'\x02',acStack_6e8);
          }
          goto LAB_0003b15c;
        }
        if (iVar5 == -4) {
          PPPP_DebugTrace(0x80,
                          "PPPP_Proto_Recv_ALL() ret =%d ==> Size error, byteRecv !=  sizeof(st_PPPP_SessionHeader) + DataSize \n"
                          ,0xfffffffc);
        }
        else if (iVar5 == -3) {
          PPPP_DebugTrace(0x80,"PPPP_Proto_Recv_ALL() ret =%d ==> header Magic or Version error \n",
                          0xfffffffd);
        }
        else if (iVar5 == -5) {
          PPPP_DebugTrace(0x80,"PPPP_Proto_Recv_ALL() ret =%d ==> data buf is too small \n",
                          0xfffffffb);
        }
        if (*(char *)(gTNPSession + iVar22 + 0x4f) == '\x01') {
          memset(acStack_6e8,0,0x80);
          sprintf(acStack_6e8,"UDP Socket Recv Error:%d,Session:%d",iVar5,param_1);
          PPPP__Send_Report((int)param_1,'\x02',acStack_6e8);
        }
      }
      goto joined_r0x0003b070;
    }
    uVar21 = (uint)uStack_726;
    uVar19 = (uint)local_728;
    pcVar6 = inet_ntoa(local_714);
    uVar13 = (local_718._2_2_ & 0xff) << 8 | (uint)(local_718._2_2_ >> 8);
    PPPP_DebugTrace(0x80,
                    "PPPP_Thread_Recv_DRW(SessionHandle:%d) ==> Recv Data, MsgType = 0x%02X, DataSize = %d from %s:%d\n"
                    ,param_1,uVar19,uVar21,pcVar6,uVar13);
    MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar1));
    iVar5 = gTNPSession + iVar22;
    if (*(char *)(iVar5 + 0x1a6) == '\0') {
      iVar5 = PPPP__Check_RemoteAddr((int)param_1,(sockaddr_in *)&local_718);
      if (iVar5 != 2) goto LAB_0003b21c;
      if (local_728 == 0x41) {
LAB_0003b8d4:
        if ((*(char *)(gTNPSession + iVar22 + 0x1b6) == '\x01') && (uStack_726 == 0x2c)) {
          uStack_724 = 0;
          local_708 = 0;
          local_704.s_addr = 0;
          local_6f8 = 0;
          local_6f4 = 0;
          local_722 = 0;
          local_71c = 0;
          iVar5 = PPPP_Proto_Read_PunchPkt_EX
                            ((st_PPPP_PunchPkt_EX *)&local_668,(char *)&local_708,&local_720,
                             (char *)&local_6f8,(uchar *)&uStack_724,&local_71c,
                             (char *)(gTNPSession + iVar22 + 0x2c));
          if (iVar5 < 0) {
            PPPP_DebugTrace(0x80,"PPPP_Proto_Read_PunchPkt_EX failed,ErrorCode:%d\n",iVar5);
            memset(acStack_6e8,0,0x80);
            uVar13 = local_71c;
            if (iVar5 == -1) {
              pcVar6 = inet_ntoa(local_714);
              sprintf(acStack_6e8,"Read PunchPkt_EX:Invalid Time(%d-%d),From:%s",uVar13,0,pcVar6);
            }
            else {
              pcVar11 = (char *)(gTNPSession + iVar22 + 0x2c);
              sVar10 = strlen(pcVar11);
              pcVar6 = inet_ntoa(local_714);
              sprintf(acStack_6e8,"Read PunchPkt_EX:Invalid Sign(%.3s-%d),From:%s",pcVar11,sVar10,
                      pcVar6);
            }
            PPPP__Send_ErrorReport((int)param_1,'\x01',acStack_6e8);
          }
          else {
            memcpy((void *)(gTNPSession + iVar22 + 0x4c),&uStack_724,3);
            PPPP_DebugTrace(0x80,"MSG_PUNCH_PKT, ID= %s-%06d-%s\n",&local_708,local_720,&local_6f8);
            memcpy((void *)(gTNPSession + iVar22 + 400),(sockaddr_in *)&local_718,0x10);
            iVar5 = gTNPSession + iVar22;
            if (*(char *)(iVar5 + 0x4f) == '\x01') {
              PPPP__R2PMP_Success((int)param_1,(sockaddr_in *)&local_718);
              iVar5 = 3;
              do {
                iVar16 = gTNPSession + iVar22;
                PPPP_Proto_Send_P2PRdy_EX
                          (*(int *)(iVar16 + 0x54),(sockaddr_in *)&local_718,(char *)(iVar16 + 0x18)
                           ,*(uint *)(iVar16 + 0x28),(char *)(iVar16 + 0x20),0,
                           (char *)(iVar16 + 0x2c));
                mSecSleep(10);
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            else {
              uVar13 = *(uint *)(iVar5 + 0x1a8);
              if (*(uint *)(iVar5 + 0x1a8) < local_71c) {
                *(uint *)(iVar5 + 0x1a8) = local_71c;
                uVar13 = local_71c;
              }
              PPPP_Proto_Send_PunchPkt_EX
                        (*(int *)(iVar5 + 0x54),(sockaddr_in *)&local_718,(char *)(iVar5 + 0x18),
                         *(uint *)(iVar5 + 0x28),(char *)(iVar5 + 0x20),uVar13,
                         (char *)(iVar5 + 0x2c));
            }
          }
        }
        goto LAB_0003b5e8;
      }
      if (local_728 != 0x42) {
        if (*(char *)(gTNPSession + iVar22 + 0x1b6) == '\x01') {
          PPPP__R2PMP_Success((int)param_1,(sockaddr_in *)&local_718);
        }
        goto LAB_0003b21c;
      }
LAB_0003b808:
      if ((*(char *)(gTNPSession + iVar22 + 0x1b6) == '\x01') && (uStack_726 == 0x28)) {
        local_708 = 0;
        local_704.s_addr = 0;
        local_6f8 = 0;
        local_6f4 = 0;
        local_71c = 0;
        iVar5 = PPPP_Proto_Read_P2PRdy_EX
                          ((st_PPPP_P2PRdy_EX *)&local_668,(char *)&local_708,&local_720,
                           (char *)&local_6f8,&local_71c,(char *)(gTNPSession + iVar22 + 0x2c));
        if (iVar5 < 0) {
          PPPP_DebugTrace(0x80,"PPPP_Proto_Read_P2PRdy_EX failed,Error:Invalid Sign\n");
          memset(acStack_6e8,0,0x80);
          __s = (char *)(gTNPSession + iVar22 + 0x2c);
          sVar10 = strlen(__s);
          pcVar6 = inet_ntoa(local_714);
          pcVar11 = "Read P2PRdy_EX:Invalid Sign(%.3s-%d),From:%s";
          bVar17 = 1;
LAB_0003c3f0:
          sprintf(acStack_6e8,pcVar11,__s,sVar10,pcVar6);
          PPPP__Send_ErrorReport((int)param_1,bVar17,acStack_6e8);
        }
        else {
          if (*(uint *)(gTNPSession + iVar22 + 0x1a8) < local_71c) {
            *(uint *)(gTNPSession + iVar22 + 0x1a8) = local_71c;
          }
          PPPP_DebugTrace(0x80,"MSG_P2P_RDY, %s-%d-%s\n",&local_708,local_720,&local_6f8);
          PPPP__R2PMP_Success((int)param_1,(sockaddr_in *)&local_718);
        }
      }
    }
    else {
      local_718 = *(undefined4 *)(iVar5 + 0x5c);
      local_714.s_addr = *(in_addr_t *)(iVar5 + 0x60);
      uStack_710 = *(undefined4 *)(iVar5 + 100);
      uStack_70c = *(undefined4 *)(iVar5 + 0x68);
LAB_0003b21c:
      if (local_728 == 0xd0) {
        PPPP_DebugTrace(0x80,"Recv MSG_DRW\n");
        iVar5 = PPPP_DRW_Read_Header
                          ((st_PPPP_DRWHeader *)&local_668,(uchar *)&local_708,(ushort *)&local_6f8)
        ;
        if (iVar5 == 0) {
          PPPP_DebugTrace(0x80,"Recv MSG_DRW From Channel:%d,index:%d\n",local_708 & 0xff,
                          local_6f8 & 0xffff);
          if ((local_708 & 0xff) < 6) {
            if (4 < uStack_726) {
              PPPP_DebugTrace(1,"PPPP_Thread_Recv_DRW ==> Channel:%d,DRW Packet Index:%d\n",
                              local_708 & 0xff,local_6f8 & 0xffff);
              uVar23 = local_708 & 0xff;
              iVar5 = gTNPSession + iVar22;
              if (0x100000 < *(uint *)(iVar5 + uVar23 * 0x1c + 0x3e0)) {
                iVar5 = IndexCompare((ushort)local_6f8,*(ushort *)(iVar5 + (uVar23 + 0x244) * 2));
                if (0 < iVar5) goto LAB_0003ba40;
                uVar23 = local_708 & 0xff;
                iVar5 = gTNPSession + iVar22;
              }
              iVar16 = iVar5 + uVar23 * 2;
              uVar13 = (uint)*(ushort *)(iVar16 + 0x3890);
              if (uVar13 < 0x52) {
                *(ushort *)(iVar5 + (uVar23 * 0x52 + uVar13 + 0x1a40) * 2 + 0x38) =
                     (ushort)local_6f8;
                *(short *)(iVar16 + 0x3890) = (short)((uVar13 + 1) * 0x10000 >> 0x10);
                if (0x4e < (uVar13 + 1 & 0xffff)) {
                  PPPP_DebugTrace(0x10000,"Receive PPPP_DRW_MUST_ACK_SIZE MSG_DRW\n");
                  iVar5 = gTNPSession + iVar22;
                  PPPP_DRWAck_Send(*(int *)(iVar5 + 0x54),'\0',(sockaddr_in *)(iVar5 + 0x5c),
                                   (uchar)local_708._0_1_,
                                   (ushort *)((local_708 & 0xff) * 0xa4 + iVar5 + 0x34b8),
                                   *(ushort *)(iVar5 + ((local_708 & 0xff) + 0x1c40) * 2 + 0x10));
                  PPPP_DebugTrace(0x80,"PPPP_DRWAck_Send Channel=%d, NumberOfIndex=%d\n",
                                  local_708 & 0xff,
                                  (uint)*(ushort *)
                                         (gTNPSession + ((local_708 & 0xff) + 0x1c48) * 2 + iVar22))
                  ;
                  uVar23 = local_708 & 0xff;
                  iVar5 = gTNPSession + iVar22;
                  *(undefined2 *)(iVar5 + (uVar23 + 0x1c48) * 2) = 0;
                }
                iVar5 = IndexCompare(*(ushort *)(iVar5 + (uVar23 + 0x244) * 2),(ushort)local_6f8);
                if (iVar5 < 1) {
                  PPPP_DebugTrace(0x80,"Inset into LL_Recv Channel: %d, Index: %d, Size = %d\n",
                                  local_708 & 0xff,local_6f8 & 0xffff,uStack_726 - 4);
                  p_Var8 = (__the_SLL_Element *)
                           sll_element_Allocate(local_6f8 & 0xffff,uStack_726 - 4);
                  if (p_Var8 == (__the_SLL_Element *)0x0) {
                    PPPP_DebugTrace(0x80,"LL_Recv Put Failed!!\n");
                    iVar5 = gTNPSession + iVar22;
                    *(undefined1 *)(iVar5 + 0x1c2) = 1;
                    if (*(char *)(iVar5 + 0x1ba) == '\0') {
                      *(undefined1 *)(iVar5 + 0x1ba) = 4;
                    }
                  }
                  else {
                    memcpy(*(void **)(p_Var8 + 8),local_664,*(size_t *)(p_Var8 + 4));
                    iVar5 = sll_Put((__the_SLL *)
                                    (gTNPSession + iVar22 + (local_708 & 0xff) * 0x1c + 0x3d4),
                                    p_Var8);
                    if (iVar5 < 0) {
                      PPPP_DebugTrace(0x80,"LL_Recv Put Failed!!\n");
                      goto LAB_0003b740;
                    }
                    PPPP_DebugTrace(0x4000,"R:%d-%d,%d\n",local_708 & 0xff,local_6f8 & 0xffff,
                                    uStack_726 - 4);
                  }
                }
              }
            }
          }
          else {
            PPPP_DebugTrace(0x8000,
                            "Abnormal packet received!! Wrong channel number= %d, close session\n");
LAB_0003b740:
            iVar5 = gTNPSession + iVar22;
            *(undefined1 *)(iVar5 + 0x1c2) = 1;
            if (*(char *)(iVar5 + 0x1ba) == '\0') {
              *(undefined1 *)(iVar5 + 0x1ba) = 5;
            }
          }
        }
        else {
          PPPP_DebugTrace(0x80,"PPPP_DRW_Read_Header Error!!\n");
        }
LAB_0003ba40:
        uVar23 = 0;
        local_758 = 0;
      }
      else if (local_728 < 0xd1) {
        if (local_728 == 0x42) goto LAB_0003b808;
        if (local_728 < 0x43) {
          if (local_728 == 0x41) goto LAB_0003b8d4;
        }
        else if (local_728 == 0x50) {
          iVar5 = gTNPSession + iVar22;
          bVar17 = *(byte *)(iVar5 + 0x1b6);
          if (bVar17 == 1) {
            iVar5 = PPPP_Proto_Read_R2PMPReq
                              ((st_PPPP_R2PMPReq *)&local_668,(sockaddr_in *)&local_708,
                               (sockaddr_in *)&local_6f8,&local_71c,(char *)(iVar5 + 0x2c));
            uVar13 = local_71c;
            if (iVar5 < 0) {
              PPPP_DebugTrace(0x80,"PPPP_Proto_Read_R2PMPReq failed,Error:Invalid Sign\n");
              memset(acStack_6e8,0,0x80);
              __s = (char *)(gTNPSession + iVar22 + 0x2c);
              sVar10 = strlen(__s);
              pcVar6 = inet_ntoa(local_714);
              pcVar11 = "Read R2PMPReq:Invalid Sign(%.3s-%d),From:%s";
              goto LAB_0003c3f0;
            }
            pcVar6 = inet_ntoa(local_704);
            PPPP_DebugTrace(0x80,"Recv MSG_R2PMP_REQ with TryPortCount:%d,MyWanAddr:(%s:%d)\n",
                            uVar13,pcVar6,
                            (local_708._2_2_ & 0xff) << 8 | (uint)(local_708._2_2_ >> 8));
            uVar13 = local_71c;
            if (100 < local_71c) {
              uVar13 = 100;
            }
            iVar5 = gTNPSession + iVar22;
            *(uint *)(iVar5 + 0x1a0) = uVar13;
            cVar14 = gNetInfo[3];
            if (*(char *)(iVar5 + 0x4f) == '\0') {
              iVar16 = AddrCompare((sockaddr_in *)(iVar5 + 0x7c),(sockaddr_in *)&local_708);
              iVar5 = gTNPSession + iVar22;
              if (iVar16 == 0) {
                cVar14 = '\x02';
              }
              else {
                cVar14 = '\x03';
              }
            }
            PPPP_Proto_Send_R2PMPStart
                      (*(int *)(iVar5 + 0x54),(sockaddr_in *)(iVar5 + 0x5c),
                       (sockaddr_in *)&local_708,cVar14,(char *)(iVar5 + 0x2c));
          }
          else {
            PPPP_DebugTrace(0x80,"Mode(%d) is not relay, drop it\n",(uint)bVar17,iVar5,uVar21,pcVar6
                            ,uVar13);
          }
        }
        else if (local_728 == 0x51) {
          PPPP_DebugTrace(0x80,"Recv MSG_R2PMP_START\n");
          if (*(char *)(gTNPSession + iVar22 + 0x1b6) == '\x01') {
            local_71c = 0;
            iVar5 = PPPP_Proto_Read_R2PMPStart
                              ((st_PPPP_R2PMPStart *)&local_668,(sockaddr_in *)&local_708,
                               (char *)&local_720,&local_71c,(char *)(gTNPSession + iVar22 + 0x2c));
            if (iVar5 < 0) {
              PPPP_DebugTrace(0x80,"PPPP_Proto_Read_R2PMPStart failed,Error:Invalid Sign\n");
              memset(acStack_6e8,0,0x80);
              __s = (char *)(gTNPSession + iVar22 + 0x2c);
              sVar10 = strlen(__s);
              pcVar6 = inet_ntoa(local_714);
              pcVar11 = "Read R2PMPStart:Invalid Sign(%.3s-%d),From:%s";
              bVar17 = 1;
              goto LAB_0003c3f0;
            }
            uVar13 = local_720 & 0xff;
            pcVar6 = inet_ntoa(local_704);
            PPPP_DebugTrace(0x80,"Recv MSG_R2PMP_START with NATType:%d PeerAddr:%s:%d\n",uVar13,
                            pcVar6,(local_708._2_2_ & 0xff) << 8 | (uint)(local_708._2_2_ >> 8));
            iVar5 = gTNPSession;
            iVar16 = gTNPSession + iVar22;
            if (*(char *)(iVar16 + 0x4f) == '\0') {
              if (*(uint *)(iVar16 + 0x1a8) < local_71c) {
                *(uint *)(iVar16 + 0x1a8) = local_71c;
              }
              if (*(char *)(iVar16 + 0x1a4) == '\0') {
                PPPP__R2PMP_Start((int)param_1);
                iVar5 = gTNPSession;
                iVar16 = gTNPSession + iVar22;
                *(undefined1 *)(iVar16 + 0x1a4) = 1;
              }
            }
            if ((local_720 & 0xff) == 0 || (local_720 & 0xff) == 3) {
              local_6f8 = local_708;
              local_6f4 = local_704.s_addr;
              iVar5 = *(int *)(iVar16 + 0x1a0);
              bVar25 = iVar5 == 0;
              if (bVar25) {
                iVar5 = 0x14;
              }
              iVar9 = 3;
              if (bVar25) {
                *(int *)(iVar16 + 0x1a0) = iVar5;
              }
              do {
                if (0 < iVar5) {
                  iVar16 = 0;
                  do {
                    iVar12 = gTNPSession + iVar22;
                    iVar16 = iVar16 + 1;
                    PPPP_Proto_Send_PunchPkt_EX
                              (*(int *)(iVar12 + 0x54),(sockaddr_in *)&local_6f8,
                               (char *)(iVar12 + 0x18),*(uint *)(iVar12 + 0x28),
                               (char *)(iVar12 + 0x20),*(uint *)(iVar12 + 0x1a8),
                               (char *)(iVar12 + 0x2c));
                  } while (iVar16 != iVar5);
                }
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            else {
              iVar16 = 3;
              do {
                iVar5 = iVar5 + iVar22;
                PPPP_Proto_Send_PunchPkt_EX
                          (*(int *)(iVar5 + 0x54),(sockaddr_in *)&local_708,(char *)(iVar5 + 0x18),
                           *(uint *)(iVar5 + 0x28),(char *)(iVar5 + 0x20),*(uint *)(iVar5 + 0x1a8),
                           (char *)(iVar5 + 0x2c));
                mSecSleep(10);
                iVar16 = iVar16 + -1;
                iVar5 = gTNPSession;
              } while (iVar16 != 0);
            }
          }
        }
      }
      else if (local_728 == 0xe1) {
        PPPP_DebugTrace(0x80,"Recv MSG_ALIVE_ACK\n");
        iVar5 = gTNPSession + iVar22;
        *(short *)(iVar5 + 0x3efe) = *(short *)(iVar5 + 0x3efe) + 1;
        if (*(char *)(iVar5 + 0x4f) != '\x01') goto LAB_0003ba40;
        memset(acStack_6e8,0,0x80);
        sprintf(acStack_6e8,"Recv ALIVE_ACK,Session:%d",param_1);
        uVar23 = 0;
        PPPP__Send_Report((int)param_1,'\x02',acStack_6e8);
        local_758 = 0;
      }
      else if (local_728 < 0xe2) {
        if (local_728 == 0xd1) {
          PPPP_DebugTrace(0x80,"Recv MSG_DRW_ACK\n");
          iVar5 = PPPP_DRWAck_Read_Header
                            ((st_PPPP_DRWAckHeader *)&local_668,(uchar *)&local_708,
                             (ushort *)&local_6f8);
          if (iVar5 == 0) {
            PPPP_DebugTrace(0x80,"Recv MSG_DRW_ACK From Channel:%d\n",local_708 & 0xff);
            pcVar6 = "Abnormal packet received!! Wrong channel number= %d, close session\n";
            if ((local_708 & 0xff) < 6) {
              if ((ushort)local_6f8 < 0x52) {
                PPPP_DebugTrace(0x80,"Number Of Index: %d\n");
                sVar18 = (ushort)local_6f8;
                iVar16 = gTNPSession + iVar22 + (local_708 & 0xff) * 2;
                uVar4 = *(ushort *)(iVar16 + 0x389c);
                uVar26 = FUN_00048030((ushort)local_6f8);
                uVar27 = FUN_00048030(uVar4 + 10);
                uVar27 = FUN_0004810c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0x66666666,
                                      0x3fe66666);
                iVar5 = FUN_00048694((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                                     (int)((ulonglong)uVar27 >> 0x20));
                if (iVar5 != 0) {
                  uVar26 = FUN_00048030((uint)uVar4);
                  FUN_0004810c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0x33333333,0x3ff33333);
                  sVar3 = FUN_000486a8();
                  uVar4 = sVar3 + 1;
                  *(ushort *)(iVar16 + 0x389c) = uVar4;
                  if (uVar4 < 0x65) {
                    PPPP_DebugTrace(0x10000,"Increase SlidWindowSize to %d\n",uVar4 + 10);
                    sVar18 = (ushort)local_6f8;
                  }
                  else {
                    *(undefined2 *)(iVar16 + 0x389c) = 100;
                  }
                }
                if (sVar18 != 0) {
                  puVar20 = (ushort *)((int)&local_668 + 2);
                  iVar5 = 0;
                  do {
                    puVar20 = puVar20 + 1;
                    uVar4 = *puVar20 << 8;
                    uVar2 = *puVar20 >> 8;
                    uVar23 = (uint)(uVar4 | uVar2);
                    iVar16 = iVar5;
                    PPPP_DebugTrace(0x80,"Recv MSG_DRW_ACK From Channel:%d,Index:%d(%d)\n",
                                    local_708 & 0xff,uVar23,iVar5);
                    p_Var8 = (__the_SLL_Element *)
                             sll_Remove_ByIndex((__the_SLL *)
                                                (gTNPSession + iVar22 + (local_708 & 0xff) * 0x1c +
                                                0x32c),uVar23);
                    if (p_Var8 != (__the_SLL_Element *)0x0) {
                      PPPP_DebugTrace(0x80,"Remove from LL_Sent Channel: %d, Index: %d \n",
                                      local_708 & 0xff,uVar23,iVar16);
                      PPPP_DebugTrace(0x2000,"A:%d-%d \n",local_708 & 0xff,uVar23);
                      sll_element_Free(p_Var8);
                    }
                    p_Var8 = (__the_SLL_Element *)
                             sll_Remove_ByIndex((__the_SLL *)
                                                (gTNPSession + iVar22 + (local_708 & 0xff) * 0x1c +
                                                0x284),uVar23);
                    if (p_Var8 != (__the_SLL_Element *)0x0) {
                      PPPP_DebugTrace(0x80,"Remove from LL_ToSend Channel: %d, Index: %d \n",
                                      local_708 & 0xff,uVar23,iVar16);
                      PPPP_DebugTrace(0x2000,"A:%d-%d \n",local_708 & 0xff,uVar23);
                      sll_element_Free(p_Var8);
                    }
                    PPPP_DebugTrace(0x80,"Move previous ones to LL_ToSend \n",local_708 & 0xff,
                                    uVar23);
                    uVar13 = local_708 & 0xff;
                    iVar16 = gTNPSession + iVar22;
                    iVar9 = *(int *)(iVar16 + uVar13 * 0x1c + 0x334);
                    while (iVar9 != 0) {
                      PPPP_DebugTrace(0x80,"LL_Sent Head Index =%d \n",
                                      **(undefined4 **)(iVar16 + uVar13 * 0x1c + 0x32c));
                      iVar16 = IndexCompare(uVar4 | uVar2,
                                            **(ushort **)
                                              (gTNPSession + (local_708 & 0xff) * 0x1c + iVar22 +
                                              0x32c));
                      if (iVar16 < 0) {
                        PPPP_DebugTrace(0x80,"LL_Sent Head Index is larger , so break\n");
                        uVar13 = local_708 & 0xff;
                        break;
                      }
                      PPPP_DebugTrace(0x80,"LL_Sent Head Index is smaller , so move;\n");
                      iVar16 = gTNPSession + iVar22 + (local_708 & 0xff) * 0x1c;
                      sll_Move_ByNumber((__the_SLL *)(iVar16 + 0x32c),(__the_SLL *)(iVar16 + 0x284),
                                        0);
                      uVar13 = local_708 & 0xff;
                      iVar16 = gTNPSession + iVar22;
                      iVar9 = *(int *)(iVar16 + uVar13 * 0x1c + 0x334);
                    }
                    PPPP_DebugTrace(0x80,"Move previous ones to LL_ToSend Done!!\n",uVar13,uVar23);
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)(local_6f8 & 0xffff));
                }
                goto LAB_0003ba40;
              }
              pcVar6 = "Abnormal packet received!! Wrong NumberOfIndex = %d, close session\n";
            }
            PPPP_DebugTrace(0x8000,pcVar6);
            goto LAB_0003b740;
          }
          PPPP_DebugTrace(0x80,"PPPP_DRWAck_Read_Header Error!!\n");
          goto LAB_0003ba40;
        }
        if (local_728 == 0xe0) {
          PPPP_DebugTrace(0x80,"Recv MSG_ALIVE\n");
          PPPP_Proto_Send_AliveAck
                    (*(int *)(gTNPSession + iVar22 + 0x54),'\0',
                     (sockaddr_in *)(gTNPSession + iVar22 + 0x5c));
          iVar5 = 3;
          do {
            piVar7 = (int *)sll_Move_ByNumber((__the_SLL *)(gTNPSession + iVar22 + 0x32c),
                                              (__the_SLL *)(gTNPSession + iVar22 + 0x284),0);
            if ((piVar7 == (int *)0x0) ||
               (piVar15 = *(int **)(gTNPSession + iVar22 + 0x32c), piVar15 == (int *)0x0)) break;
            if (*piVar7 == *piVar15 + -1) {
              iVar5 = iVar5 + -1;
            }
            else {
              iVar5 = iVar5 >> 1;
            }
          } while (0 < iVar5);
          if (*(char *)(gTNPSession + iVar22 + 0x4f) == '\x01') {
            memset(acStack_6e8,0,0x80);
            sprintf(acStack_6e8,"Recv ALIVE,Session:%d",param_1);
            PPPP__Send_Report((int)param_1,'\x02',acStack_6e8);
            local_758 = 0;
          }
          else {
            local_758 = 0;
          }
        }
      }
      else if (local_728 == 0xe5) {
        iVar5 = gTNPSession + iVar22;
        uVar26 = getCurTime();
        uVar19 = (local_668 ^ (local_668 >> 0x10 | local_668 << 0x10)) >> 8 & 0xffff00ff ^
                 (local_668 >> 8 | local_668 << 0x18);
        iVar16 = gTNPSession + iVar22;
        uVar24 = (local_664[0] ^ (local_664[0] >> 0x10 | local_664[0] << 0x10)) >> 8 & 0xffff00ff ^
                 (local_664[0] >> 8 | local_664[0] << 0x18);
        *(undefined8 *)(iVar5 + 0x3f10) = uVar26;
        *(uint *)(iVar16 + 0x3f04) = uVar19;
        *(uint *)(iVar16 + 0x3f08) = uVar24;
        PPPP_DebugTrace(0x80,"Recv MSG_BITRATE_INFO With Bitrate:%u LossRatio:%u\n",uVar19,uVar24,
                        uVar21,pcVar6,uVar13);
      }
      else if (local_728 == 0xf0) {
        PPPP_DebugTrace(0x80,"Recv MSG_CLOSE\n");
        iVar5 = gTNPSession + iVar22;
        if (*(char *)(iVar5 + 0x1ba) == '\0') {
          *(undefined1 *)(iVar5 + 0x1ba) = 2;
        }
        *(undefined1 *)(iVar5 + 0x1c2) = 1;
        if (*(char *)(iVar5 + 0x4f) == '\x01') {
          memset(acStack_6e8,0,0x80);
          sprintf(acStack_6e8,"Recv CLOSE,CloseCode:%d,Session:%d",(uint)*(byte *)(iVar5 + 0x1ba),
                  param_1);
          PPPP__Send_Report((int)param_1,'\x02',acStack_6e8);
        }
      }
    }
LAB_0003b5e8:
    MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar1));
  } while( true );
}



// tnp::PPPP_Thread_Send_DRW(void*)

void tnp::PPPP_Thread_Send_DRW(void *param_1)

{
  uint uVar1;
  ushort *puVar2;
  char cVar3;
  ushort uVar4;
  uchar uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int extraout_r1;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_44;
  
  PPPP_DebugTrace(0x100,"PPPP_Thread_Send_DRW Running.\n");
  PPPP_DebugTrace(0x2000,"PPPP_Thread_Send_DRW Running.\n");
  if (gTNPSession != 0) {
    iVar19 = (int)param_1 * 0x3f18;
    iVar11 = gTNPSession + iVar19;
    if ((-1 < *(int *)(iVar11 + 0x54)) && (*(char *)(iVar11 + 0x1c2) == '\0')) {
      cVar3 = *(char *)(iVar11 + 0x4f);
      iVar11 = (int)param_1 * 0x18;
      uVar1 = 0;
      do {
        if (cVar3 == '\x01') {
          PPPP__ExitSuperDevice('\x02');
        }
        MUTEX_LOCK((pthread_mutex_t *)(gTNPSessionLock + iVar11));
        uVar16 = uVar1 % 100;
        uVar1 = uVar1 + 1 & 0xffff;
        if (uVar16 == 0) {
          PPPP__Calculate_P2PPktLossRatio((uint)param_1);
          iVar18 = gTNPSession + iVar19;
          iVar18 = PPPP__Send_Alive((uint)param_1,*(int *)(iVar18 + 0x54),*(char *)(iVar18 + 0x1a6),
                                    (sockaddr_in *)(iVar18 + 0x5c));
          if ((iVar18 < 0) && (*(char *)(gTNPSession + iVar19 + 0x1a6) != '\0')) {
            PPPP_DebugTrace(0x100,"PPPP_Proto_Send_Alive Error, Ret=%d\n",iVar18);
LAB_0003c9cc:
            iVar19 = gTNPSession + iVar19;
            *(undefined1 *)(iVar19 + 0x1c2) = 1;
            *(undefined1 *)(iVar19 + 0x1c3) = 1;
            if (*(char *)(iVar19 + 0x1ba) == '\0') {
              *(undefined1 *)(iVar19 + 0x1ba) = 6;
            }
            MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar11));
            break;
          }
        }
        iVar18 = 0;
        local_44 = 0;
        do {
          iVar17 = (iVar18 + 0x1a48) * 2;
          iVar7 = gTNPSession + iVar19;
          uVar16 = (uint)*(ushort *)(iVar7 + iVar17 + 4);
          uVar5 = (uchar)iVar18;
          iVar12 = gTNPSession;
          if (uVar16 != 0) {
            iVar6 = PPPP__Write_Block((int)param_1,uVar5,(char *)(iVar7 + iVar18 * 0x400 + 0x494),
                                      uVar16);
            iVar12 = gTNPSession;
            iVar7 = gTNPSession + iVar19;
            if (0 < iVar6) {
              *(undefined2 *)(iVar7 + iVar17 + 4) = 0;
            }
          }
          iVar17 = iVar18 * 0x1c;
          iVar6 = *(int *)(iVar7 + iVar17 + 0x28c);
          uVar16 = iVar6 + *(int *)(iVar7 + iVar17 + 0x334);
          while (uVar16 < 0x100) {
            iVar7 = sll_Move_ByNumber((__the_SLL *)(iVar7 + iVar17 + 0x1dc),
                                      (__the_SLL *)(iVar7 + iVar17 + 0x284),0);
            iVar12 = gTNPSession;
            if (iVar7 == 0) {
              iVar6 = *(int *)(gTNPSession + iVar18 * 0x1c + iVar19 + 0x28c);
              break;
            }
            iVar7 = gTNPSession + iVar19;
            iVar9 = iVar7 + iVar17;
            iVar6 = *(int *)(iVar9 + 0x28c);
            *(undefined4 *)(iVar9 + 0x29c) = 0;
            uVar16 = iVar6 + *(int *)(iVar9 + 0x334);
          }
          iVar12 = iVar12 + iVar19;
          iVar17 = iVar18 * 0x1c;
          iVar7 = 8;
          while (iVar6 != 0) {
            iVar7 = iVar7 + -1;
            if (iVar7 == 0) goto LAB_0003cb20;
            uVar16 = **(uint **)(iVar12 + iVar17 + 0x284);
            iVar12 = sll_Move_ByNumber((__the_SLL *)(iVar12 + iVar17 + 0x284),
                                       (__the_SLL *)(iVar12 + iVar17 + 0x32c),0);
            if (iVar12 == 0) {
LAB_0003ca40:
              iVar12 = gTNPSession + iVar19;
            }
            else {
              uVar15 = uVar16 & 0xffff;
              iVar6 = gTNPSession + iVar19;
              iVar6 = PPPP_DRW_Send(*(int *)(iVar6 + 0x54),*(char *)(iVar6 + 0x1a6),
                                    (sockaddr_in *)(iVar6 + 0x5c),uVar5,(ushort)uVar16,
                                    *(char **)(iVar12 + 8),*(ushort *)(iVar12 + 4));
              if ((iVar6 < 0) && (*(char *)(gTNPSession + iVar19 + 0x1a6) != '\0')) {
                pcVar8 = "PPPP_DRW_Send Error,Channel=%d, Index=%d, Ret=%d\n";
                goto LAB_0003c9c8;
              }
              PPPP_DebugTrace(0x100,"PPPP_DRW_Send Channel=%d, Index=%d\n",iVar18,uVar16 & 0xffff);
              uVar10 = *(undefined4 *)(iVar12 + 4);
              PPPP_DebugTrace(0x2000,"S:%d-%d,%d \n",iVar18,uVar16 & 0xffff,uVar10);
              iVar12 = gTNPSession + iVar19;
              if (*(ushort *)(iVar12 + (iVar18 + 0x1c40) * 2 + 0x1c) + 10 <
                  *(uint *)(iVar12 + iVar17 + 0x334)) {
                PPPP_DebugTrace(0x100,"LL_Sent[%d].ListCount > %d, so stop send\n",iVar18,10,uVar10)
                ;
                goto LAB_0003ca40;
              }
            }
            iVar6 = *(int *)(iVar12 + iVar17 + 0x28c);
          }
          uVar16 = 0;
          if (iVar18 == 1) {
            uVar15 = 10;
          }
          else if (iVar18 == 2 || iVar18 == 4) {
            uVar15 = 10;
            uVar16 = uVar15;
          }
          else if (iVar18 == 3 || iVar18 == 5) {
            uVar15 = 5;
          }
          else {
            uVar15 = 10;
          }
          iVar17 = iVar18 * 0x1c;
          iVar6 = iVar12 + iVar17;
          iVar7 = *(int *)(iVar6 + 0x29c) + 1;
          *(int *)(iVar6 + 0x29c) = iVar7;
          FUN_00047c38(iVar7,uVar15);
          if (((extraout_r1 == 0) && (uVar15 = *(uint *)(iVar6 + 0x334), uVar16 < uVar15)) &&
             (0 < (int)uVar15)) {
            while (iVar7 = sll_Move_ByNumber((__the_SLL *)(iVar12 + iVar17 + 0x32c),
                                             (__the_SLL *)(iVar12 + iVar17 + 0x284),0), iVar7 != 0)
            {
              iVar12 = gTNPSession + iVar19;
              if ((*(int *)(iVar12 + iVar17 + 0x32c) == 0) ||
                 (uVar15 = (int)uVar15 >> 2, uVar15 == 0)) goto LAB_0003cb20;
            }
            iVar12 = gTNPSession + iVar19;
          }
LAB_0003cb20:
          iVar17 = iVar18 + 0x1c48;
          uVar4 = *(ushort *)(iVar12 + iVar17 * 2);
          uVar16 = (uint)uVar4;
          if (uVar16 < 2) {
            iVar7 = iVar12 + iVar18 * 0x1c;
            uVar15 = *(int *)(iVar7 + 0x298) + 1;
            *(uint *)(iVar7 + 0x298) = uVar15;
            if (uVar16 != 0) {
LAB_0003cb94:
              if (0x14 < uVar15) goto LAB_0003cb9c;
            }
          }
          else {
            puVar14 = (ushort *)(iVar18 * 0xa4 + iVar12 + 0x34b6);
            do {
              if (puVar14 == (ushort *)(iVar12 + (local_44 + uVar16) * 2 + 0x34b4)) {
                iVar7 = iVar12 + iVar18 * 0x1c;
                uVar15 = *(int *)(iVar7 + 0x298) + 1;
                *(uint *)(iVar7 + 0x298) = uVar15;
                goto LAB_0003cb94;
              }
              puVar13 = puVar14 + 1;
              puVar2 = puVar14 + 2;
              puVar14 = puVar13;
            } while (*puVar13 + 1 == (uint)*puVar2);
LAB_0003cb9c:
            *(undefined4 *)(iVar12 + iVar18 * 0x1c + 0x298) = 0;
            iVar6 = PPPP_DRWAck_Send(*(int *)(iVar12 + 0x54),*(char *)(iVar12 + 0x1a6),
                                     (sockaddr_in *)(iVar12 + 0x5c),uVar5,
                                     (ushort *)(iVar18 * 0xa4 + iVar12 + 0x34b8),uVar4);
            if ((iVar6 < 0) && (*(char *)(gTNPSession + iVar19 + 0x1a6) != '\0')) {
              uVar15 = (uint)*(ushort *)(gTNPSession + iVar19 + iVar17 * 2);
              pcVar8 = "PPPP_DRWAck_Send Error, Channel=%d, NumberOfIndex=%d, Ret=%d\n";
LAB_0003c9c8:
              PPPP_DebugTrace(0x100,pcVar8,iVar18,uVar15,iVar6);
              goto LAB_0003c9cc;
            }
            PPPP_DebugTrace(0x100,"PPPP_DRWAck_Send Channel=%d, NumberOfIndex=%d\n",iVar18,
                            (uint)*(ushort *)(gTNPSession + iVar19 + iVar17 * 2));
            *(undefined2 *)(gTNPSession + iVar17 * 2 + iVar19) = 0;
          }
          iVar18 = iVar18 + 1;
          local_44 = local_44 + 0x52;
        } while (iVar18 != 6);
        MUTEX_RELEASE((pthread_mutex_t *)(gTNPSessionLock + iVar11));
        mSecSleep(10);
        if (((gTNPSession == 0) || (iVar18 = gTNPSession + iVar19, *(int *)(iVar18 + 0x54) < 0)) ||
           (*(char *)(iVar18 + 0x1c2) != '\0')) break;
        cVar3 = *(char *)(iVar18 + 0x4f);
      } while( true );
    }
  }
  PPPP_DebugTrace(0x100,"PPPP_Thread_Send_DRW Exit.\n");
  PPPP_DebugTrace(0x2000,"PPPP_Thread_Send_DRW Exit.\n");
                    // WARNING: Subroutine does not return
  pthread_exit((void *)0x0);
}



// tnp::SllIndexCompare(unsigned int, unsigned int, unsigned int)

uint tnp::SllIndexCompare(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 < param_1) {
    uVar1 = param_1 - param_2;
    if (param_3 >> 1 < uVar1) {
      uVar1 = (param_1 - param_3) - param_2;
    }
    return uVar1;
  }
  uVar1 = param_1 - param_2;
  if (param_3 >> 1 < param_2 - param_1) {
    uVar1 = uVar1 + param_3;
  }
  return uVar1;
}



// tnp::IndexCompare(unsigned short, unsigned short)

undefined4 tnp::IndexCompare(ushort param_1,ushort param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = SllIndexCompare((uint)param_1,(uint)param_2,0x10000);
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}



// tnp::IndexDistanse(unsigned short, unsigned short)

void tnp::IndexDistanse(ushort param_1,ushort param_2)

{
  SllIndexCompare((uint)param_1,(uint)param_2,0x10000);
  return;
}



// tnp::sll_element_Allocate(unsigned int, unsigned int)

uint * tnp::sll_element_Allocate(uint param_1,uint param_2)

{
  uint *__ptr;
  void *__s;
  
  __ptr = malloc(0x14);
  if (__ptr == (uint *)0x0) {
    return (uint *)0x0;
  }
  __s = malloc(param_2);
  __ptr[2] = (uint)__s;
  if (__s != (void *)0x0) {
    memset(__s,0,param_2);
    __ptr[1] = param_2;
    *__ptr = param_1;
    return __ptr;
  }
  free(__ptr);
  return (uint *)0x0;
}



// tnp::sll_element_Free(tnp::__the_SLL_Element*)

void tnp::sll_element_Free(__the_SLL_Element *param_1)

{
  if (param_1 == (__the_SLL_Element *)0x0) {
    return;
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
  }
  free(param_1);
  return;
}



// tnp::sll_Dump(tnp::__the_SLL*, int)

void tnp::sll_Dump(__the_SLL *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  printf("Total num = %d, Total Size=%d, Max_I=%d\n",*(undefined4 *)(param_1 + 8),
         *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  if (param_2 != 1) {
    if ((param_2 == 2) && (puVar1 = *(undefined4 **)param_1, puVar1 != (undefined4 *)0x0)) {
      iVar2 = 0;
      do {
        if (iVar2 < 200) {
          printf("%d: Idx=%06d, DataBuf=0x%08X, Size=%d\n",iVar2,*puVar1,puVar1[2],puVar1[1]);
        }
        puVar1 = (undefined4 *)puVar1[3];
        iVar2 = iVar2 + 1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    return;
  }
  puVar1 = *(undefined4 **)param_1;
  printf("Head: Idx=%06d, DataBuf=0x%08X, Size=%d\n",*puVar1,puVar1[2],puVar1[1]);
  puVar1 = *(undefined4 **)(param_1 + 4);
  printf("Tail: Idx=%06d, DataBuf=0x%08X, Size=%d\n",*puVar1,puVar1[2],puVar1[1]);
  return;
}



// tnp::sll_Init(tnp::__the_SLL*, unsigned int)

void tnp::sll_Init(__the_SLL *param_1,uint param_2)

{
  if (param_1 == (__the_SLL *)0x0) {
    return;
  }
  memset(param_1,0,0x1c);
  *(uint *)(param_1 + 0x10) = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// tnp::sll_DeInit(tnp::__the_SLL*)

void tnp::sll_DeInit(__the_SLL *param_1)

{
  __the_SLL_Element *p_Var1;
  int iVar2;
  __the_SLL_Element *p_Var3;
  
  p_Var1 = *(__the_SLL_Element **)param_1;
  if (*(__the_SLL_Element **)param_1 == (__the_SLL_Element *)0x0) {
    return;
  }
  do {
    iVar2 = *(int *)(p_Var1 + 4);
    p_Var3 = *(__the_SLL_Element **)(p_Var1 + 0xc);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
    sll_element_Free(p_Var1);
    *(__the_SLL_Element **)param_1 = p_Var3;
    p_Var1 = p_Var3;
  } while (p_Var3 != (__the_SLL_Element *)0x0);
  return;
}



// tnp::sll_Put_Free(tnp::__the_SLL*, tnp::__the_SLL_Element*, char)

undefined4 tnp::sll_Put_Free(__the_SLL *param_1,__the_SLL_Element *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10) / 3;
  if (*(uint **)param_1 == (uint *)0x0) {
    iVar3 = *(int *)(param_2 + 4);
    iVar2 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(__the_SLL_Element **)param_1 = param_2;
    *(__the_SLL_Element **)(param_1 + 4) = param_2;
    *(int *)(param_1 + 0xc) = iVar2 + iVar3;
    *(int *)(param_1 + 8) = iVar4 + 1;
    return 1;
  }
  iVar2 = SllIndexCompare(*(uint *)param_2,**(uint **)param_1,*(uint *)(param_1 + 0x10));
  iVar3 = SllIndexCompare(*(uint *)param_2,**(uint **)(param_1 + 4),*(uint *)(param_1 + 0x10));
  if (((int)uVar1 < iVar2) || (iVar3 < (int)-uVar1)) {
    if (param_3 != '\0') {
      sll_element_Free(param_2);
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  if (iVar3 == 0 || iVar2 == 0) {
LAB_0003d094:
    if (param_3 != '\0') {
      sll_element_Free(param_2);
    }
    return 0;
  }
  if (iVar2 < 0) {
    iVar2 = *(int *)param_1;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(int *)(param_2 + 0xc) = iVar2;
    *(__the_SLL_Element **)(iVar2 + 0x10) = param_2;
    *(__the_SLL_Element **)param_1 = param_2;
  }
  else if (iVar3 < 1) {
    if (iVar2 + iVar3 < 1) {
      iVar2 = *(int *)param_1;
      puVar5 = *(uint **)(iVar2 + 0xc);
      while (puVar5 != (uint *)0x0) {
        iVar3 = SllIndexCompare(*(uint *)param_2,*puVar5,*(uint *)(param_1 + 0x10));
        if (iVar3 == 0) goto LAB_0003d094;
        if (iVar3 < 0) {
          uVar6 = *(undefined4 *)(iVar2 + 0xc);
          *(int *)(param_2 + 0x10) = iVar2;
          *(undefined4 *)(param_2 + 0xc) = uVar6;
          *(__the_SLL_Element **)(*(int *)(iVar2 + 0xc) + 0x10) = param_2;
          *(__the_SLL_Element **)(iVar2 + 0xc) = param_2;
          break;
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        puVar5 = *(uint **)(iVar2 + 0xc);
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
      puVar5 = *(uint **)(iVar2 + 0x10);
      while (puVar5 != (uint *)0x0) {
        iVar3 = SllIndexCompare(*(uint *)param_2,*puVar5,*(uint *)(param_1 + 0x10));
        if (iVar3 == 0) goto LAB_0003d094;
        if (0 < iVar3) {
          uVar6 = *(undefined4 *)(iVar2 + 0x10);
          *(int *)(param_2 + 0xc) = iVar2;
          *(undefined4 *)(param_2 + 0x10) = uVar6;
          *(__the_SLL_Element **)(*(int *)(iVar2 + 0x10) + 0xc) = param_2;
          *(__the_SLL_Element **)(iVar2 + 0x10) = param_2;
          break;
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        puVar5 = *(uint **)(iVar2 + 0x10);
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(int *)(param_2 + 0x10) = iVar2;
    *(__the_SLL_Element **)(iVar2 + 0xc) = param_2;
    *(__the_SLL_Element **)(param_1 + 4) = param_2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_2 + 4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 1;
}



// tnp::sll_Put(tnp::__the_SLL*, tnp::__the_SLL_Element*)

void tnp::sll_Put(__the_SLL *param_1,__the_SLL_Element *param_2)

{
  sll_Put_Free(param_1,param_2,'\x01');
  return;
}



// tnp::sll_Search_ByIndex(tnp::__the_SLL const*, unsigned int, unsigned int*)

undefined4 tnp::sll_Search_ByIndex(__the_SLL *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int extraout_r3;
  uint *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = SllIndexCompare(param_2,**(uint **)param_1,*(uint *)(param_1 + 0x10));
    iVar2 = SllIndexCompare(param_2,**(uint **)(param_1 + 4),*(uint *)(param_1 + 0x10));
    uVar5 = uVar1 >> 0x1f;
    if (0 < iVar2) {
      uVar5 = 1;
    }
    if (uVar5 == 0) {
      if (iVar2 == 0) {
        iVar2 = extraout_r3;
        if (param_3 != (uint *)0x0) {
          iVar2 = *(int *)(param_1 + 8);
        }
        uVar3 = *(undefined4 *)(param_1 + 4);
        if (param_3 != (uint *)0x0) {
          *param_3 = iVar2 - 1;
        }
        return uVar3;
      }
      if (uVar1 == 0) {
        if (param_3 != (uint *)0x0) {
          *param_3 = 0;
        }
        return *(undefined4 *)param_1;
      }
      if ((int)(uVar1 + iVar2) < 1) {
        iVar2 = *(int *)param_1;
        puVar6 = *(uint **)(iVar2 + 0xc);
        if (puVar6 != (uint *)0x0) {
          iVar7 = 0;
          do {
            iVar4 = SllIndexCompare(param_2,*puVar6,*(uint *)(param_1 + 0x10));
            if (iVar4 == 0) {
              if (param_3 != (uint *)0x0) {
                *param_3 = iVar7 + 1;
              }
              return *(undefined4 *)(iVar2 + 0xc);
            }
            if (iVar4 < 0) {
              return 0;
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            iVar7 = iVar7 + 1;
            puVar6 = *(uint **)(iVar2 + 0xc);
          } while (puVar6 != (uint *)0x0);
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 4);
        puVar6 = *(uint **)(iVar2 + 0x10);
        iVar7 = *(int *)(param_1 + 8);
        while (puVar6 != (uint *)0x0) {
          iVar4 = SllIndexCompare(param_2,*puVar6,*(uint *)(param_1 + 0x10));
          if (iVar4 == 0) {
            if (param_3 != (uint *)0x0) {
              *param_3 = iVar7 - 2;
            }
            return *(undefined4 *)(iVar2 + 0x10);
          }
          if (0 < iVar4) {
            return 0;
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          iVar7 = iVar7 + -1;
          puVar6 = *(uint **)(iVar2 + 0x10);
        }
      }
    }
  }
  return 0;
}



// tnp::sll_Search_ByNumber(tnp::__the_SLL const*, unsigned int)

void tnp::sll_Search_ByNumber(__the_SLL *param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)param_1 == 0) {
    return;
  }
  if ((int)param_2 < 1) {
    return;
  }
  iVar1 = *(int *)(*(int *)param_1 + 0xc);
  if (iVar1 == 0) {
    return;
  }
  do {
    param_2 = param_2 - 1;
    if (param_2 == 0) {
      return;
    }
    iVar1 = *(int *)(iVar1 + 0xc);
  } while (iVar1 != 0);
  return;
}



// tnp::sll_Remove_ByIndex(tnp::__the_SLL*, unsigned int)

void tnp::sll_Remove_ByIndex(__the_SLL *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = sll_Search_ByIndex(param_1,param_2,(uint *)0x0);
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x10);
    iVar3 = *(int *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      *(int *)param_1 = iVar3;
    }
    else {
      *(int *)(iVar5 + 0xc) = iVar3;
      iVar3 = *(int *)(iVar1 + 0xc);
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x10) = iVar5;
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(iVar1 + 4);
    if (iVar3 == 0) {
      *(int *)(param_1 + 4) = iVar5;
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(int *)(param_1 + 8) = iVar2 + -1;
    *(int *)(param_1 + 0xc) = iVar6 - iVar4;
    return;
  }
  return;
}



// tnp::sll_Remove_ByNumber(tnp::__the_SLL*, unsigned int)

void tnp::sll_Remove_ByNumber(__the_SLL *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = sll_Search_ByNumber(param_1,param_2);
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x10);
    iVar3 = *(int *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      *(int *)param_1 = iVar3;
    }
    else {
      *(int *)(iVar5 + 0xc) = iVar3;
      iVar3 = *(int *)(iVar1 + 0xc);
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x10) = iVar5;
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(iVar1 + 4);
    if (iVar3 == 0) {
      *(int *)(param_1 + 4) = iVar5;
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(int *)(param_1 + 8) = iVar2 + -1;
    *(int *)(param_1 + 0xc) = iVar6 - iVar4;
    return;
  }
  return;
}



// tnp::sll_Move_ByNumber(tnp::__the_SLL*, tnp::__the_SLL*, unsigned int)

__the_SLL_Element * tnp::sll_Move_ByNumber(__the_SLL *param_1,__the_SLL *param_2,uint param_3)

{
  __the_SLL_Element *p_Var1;
  int iVar2;
  
  p_Var1 = (__the_SLL_Element *)sll_Remove_ByNumber(param_1,param_3);
  if (p_Var1 != (__the_SLL_Element *)0x0) {
    iVar2 = sll_Put_Free(param_2,p_Var1,'\0');
    if (0 < iVar2) {
      return p_Var1;
    }
    sll_Put(param_1,p_Var1);
  }
  return (__the_SLL_Element *)0x0;
}



// tnp::MUTEX_INIT(pthread_mutex_t*)

undefined4 tnp::MUTEX_INIT(pthread_mutex_t *param_1)

{
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  return 0;
}



// tnp::MUTEX_DESTROY(pthread_mutex_t*)

void tnp::MUTEX_DESTROY(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  return;
}



// tnp::MUTEX_LOCK(pthread_mutex_t*)

void tnp::MUTEX_LOCK(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



// tnp::MUTEX_TRYLOCK(pthread_mutex_t*)

void tnp::MUTEX_TRYLOCK(pthread_mutex_t *param_1)

{
  pthread_mutex_trylock(param_1);
  return;
}



// tnp::MUTEX_RELEASE(pthread_mutex_t*)

void tnp::MUTEX_RELEASE(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}



// tnp::mSecSleep(unsigned int)

void tnp::mSecSleep(uint param_1)

{
  usleep(param_1 * 1000);
  return;
}



// tnp::SetSocketNonBlock(int)

void tnp::SetSocketNonBlock(int param_1)

{
  uint uVar1;
  
  uVar1 = fcntl(param_1,3,0);
  fcntl(param_1,4,uVar1 | 0x800);
  return;
}



// tnp::SetSocketBlock(int)

void tnp::SetSocketBlock(int param_1)

{
  uint uVar1;
  
  uVar1 = fcntl(param_1,3,0);
  fcntl(param_1,4,uVar1 & 0xfffff7ff);
  return;
}



// tnp::SetSocketBroadcast(int)

void tnp::SetSocketBroadcast(int param_1)

{
  undefined4 local_c [2];
  
  local_c[0] = 1;
  setsockopt(param_1,1,6,local_c,4);
  return;
}



// tnp::CreateWorkerThread(void* (*)(void*), void*)

pthread_t tnp::CreateWorkerThread(_func_void_ptr_void_ptr *param_1,void *param_2)

{
  int iVar1;
  pthread_t local_c [2];
  
  iVar1 = pthread_create(local_c,(pthread_attr_t *)0x0,(__start_routine *)param_1,param_2);
  if (iVar1 != 0) {
    local_c[0] = 0;
  }
  return local_c[0];
}



// tnp::DetachThread(unsigned long*)

int tnp::DetachThread(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = pthread_detach(*param_1);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}



// tnp::WaitThreadExit(unsigned long*)

void tnp::WaitThreadExit(ulong *param_1)

{
  if (*param_1 != 0) {
    pthread_join(*param_1,(void **)0x0);
  }
  *param_1 = 0;
  return;
}



// tnp::InitSocketEnv()

undefined4 tnp::InitSocketEnv(void)

{
  return 0;
}



// tnp::ClearSocketEnv()

void tnp::ClearSocketEnv(void)

{
  return;
}



// tnp::pppp_sha1_init_ctx(tnp::pppp_sha1_ctx*)

void tnp::pppp_sha1_init_ctx(pppp_sha1_ctx *param_1)

{
  *(undefined4 *)param_1 = 0x67452301;
  *(undefined4 *)(param_1 + 4) = 0xefcdab89;
  *(undefined4 *)(param_1 + 8) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0xc) = 0x10325476;
  *(undefined4 *)(param_1 + 0x10) = 0xc3d2e1f0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// tnp::pppp_sha1_read_ctx(tnp::pppp_sha1_ctx const*, void*)

void * tnp::pppp_sha1_read_ctx(pppp_sha1_ctx *param_1,void *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  *(uint *)param_2 =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)((int)param_2 + 4) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)((int)param_2 + 8) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)((int)param_2 + 0xc) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)((int)param_2 + 0x10) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  return param_2;
}



// tnp::pppp_sha1_process_block(void const*, unsigned int, tnp::pppp_sha1_ctx*)

void tnp::pppp_sha1_process_block(void *param_1,uint param_2,pppp_sha1_ctx *param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  pppp_sha1_ctx *unaff_r5;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint local_60 [16];
  
  uVar8 = param_2 + *(int *)(param_3 + 0x14);
  *(uint *)(param_3 + 0x14) = uVar8;
  if (uVar8 < param_2) {
    unaff_r5 = param_3;
  }
  uVar9 = *(uint *)(param_3 + 0xc);
  pvVar2 = (void *)((int)param_1 + (param_2 & 0xfffffffc));
  uVar10 = uVar9;
  if (uVar8 < param_2) {
    uVar10 = *(uint *)(unaff_r5 + 0x18);
  }
  uVar1 = *(uint *)param_3;
  uVar3 = *(uint *)(param_3 + 4);
  iVar11 = *(int *)(param_3 + 0x10);
  uVar5 = *(uint *)(param_3 + 8);
  if (uVar8 < param_2) {
    *(uint *)(unaff_r5 + 0x18) = uVar10 + 1;
  }
  for (; param_1 < pvVar2; param_1 = (void *)((int)param_1 + 0x40)) {
    iVar6 = 0;
    do {
      uVar8 = *(uint *)((int)param_1 + iVar6);
      *(uint *)((int)local_60 + iVar6) =
           (uVar8 ^ (uVar8 >> 0x10 | uVar8 << 0x10)) >> 8 & 0xffff00ff ^
           (uVar8 >> 8 | uVar8 << 0x18);
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0x40);
    uVar8 = uVar3 >> 2 | uVar3 << 0x1e;
    uVar10 = uVar1 >> 2 | uVar1 << 0x1e;
    uVar12 = local_60[0] + 0x5a827999 + iVar11 + (uVar1 >> 0x1b | uVar1 << 5) +
             ((uVar9 ^ uVar5) & uVar3 ^ uVar9);
    uVar21 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar27 = local_60[1] + 0x5a827999 + uVar9 + ((uVar8 ^ uVar5) & uVar1 ^ uVar5) +
             (uVar12 >> 0x1b | uVar12 * 0x20);
    uVar23 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar15 = local_60[2] + 0x5a827999 + uVar5 + (uVar12 & (uVar10 ^ uVar8) ^ uVar8) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[3] + 0x5a827999 + uVar8 + ((uVar21 ^ uVar10) & uVar27 ^ uVar10) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar8 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar15 = local_60[4] + 0x5a827999 + uVar10 + ((uVar23 ^ uVar21) & uVar15 ^ uVar21) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar10 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[5] + 0x5a827999 + uVar21 + ((uVar12 ^ uVar23) & uVar27 ^ uVar23) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar21 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar15 = local_60[6] + 0x5a827999 + uVar23 + ((uVar8 ^ uVar12) & uVar15 ^ uVar12) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar23 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[7] + 0x5a827999 + uVar12 + ((uVar10 ^ uVar8) & uVar27 ^ uVar8) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar15 = local_60[8] + 0x5a827999 + uVar8 + ((uVar21 ^ uVar10) & uVar15 ^ uVar10) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar8 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[9] + 0x5a827999 + uVar10 + ((uVar23 ^ uVar21) & uVar27 ^ uVar21) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar15 = local_60[10] + 0x5a827999 + uVar21 + ((uVar12 ^ uVar23) & uVar15 ^ uVar23) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar10 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar21 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar27 = local_60[0xb] + 0x5a827999 + uVar23 + ((uVar8 ^ uVar12) & uVar27 ^ uVar12) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar19 = local_60[0xc] + 0x5a827999 + uVar12 + ((uVar10 ^ uVar8) & uVar15 ^ uVar8) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar23 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar12 = local_60[2] ^ local_60[0] ^ local_60[8] ^ local_60[0xd];
    uVar12 = uVar12 >> 0x1f | uVar12 << 1;
    uVar15 = local_60[0xd] + 0x5a827999 + uVar8 + ((uVar21 ^ uVar10) & uVar27 ^ uVar10) +
             (uVar19 >> 0x1b | uVar19 * 0x20);
    uVar8 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar27 = local_60[3] ^ local_60[1] ^ local_60[9] ^ local_60[0xe];
    uVar19 = local_60[0xe] + 0x5a827999 + uVar10 + ((uVar23 ^ uVar21) & uVar19 ^ uVar21) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar10 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar24 = local_60[4] ^ local_60[2] ^ local_60[10] ^ local_60[0xf];
    uVar7 = local_60[0xf] + 0x5a827999 + uVar21 + ((uVar8 ^ uVar23) & uVar15 ^ uVar23) +
            (uVar19 >> 0x1b | uVar19 * 0x20);
    uVar21 = uVar24 >> 0x1f | uVar24 << 1;
    uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar27 = uVar27 >> 0x1f | uVar27 << 1;
    uVar24 = local_60[5] ^ local_60[3] ^ local_60[0xb] ^ uVar12;
    uVar16 = uVar12 + 0x5a827999 + uVar23 + ((uVar10 ^ uVar8) & uVar19 ^ uVar8) +
             (uVar7 >> 0x1b | uVar7 * 0x20);
    uVar23 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar19 = uVar24 >> 0x1f | uVar24 << 1;
    uVar24 = local_60[6] ^ local_60[4] ^ local_60[0xc] ^ uVar27;
    uVar24 = uVar24 >> 0x1f | uVar24 << 1;
    uVar28 = uVar27 + 0x5a827999 + uVar8 + ((uVar15 ^ uVar10) & uVar7 ^ uVar10) +
             (uVar16 >> 0x1b | uVar16 * 0x20);
    uVar8 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar7 = local_60[7] ^ local_60[5] ^ local_60[0xd] ^ uVar21;
    uVar7 = uVar7 >> 0x1f | uVar7 << 1;
    uVar20 = uVar21 + 0x5a827999 + uVar10 + ((uVar23 ^ uVar15) & uVar16 ^ uVar15) +
             (uVar28 >> 0x1b | uVar28 * 0x20);
    uVar10 = uVar28 >> 2 | uVar28 * 0x40000000;
    uVar13 = uVar19 + 0x5a827999 + uVar15 + ((uVar8 ^ uVar23) & uVar28 ^ uVar23) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar16 = local_60[8] ^ local_60[6] ^ local_60[0xe] ^ uVar19;
    uVar16 = uVar16 >> 0x1f | uVar16 << 1;
    uVar28 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar14 = uVar24 + 0x6ed9eba1 + uVar23 + (uVar10 ^ uVar8 ^ uVar20) +
             (uVar13 >> 0x1b | uVar13 * 0x20);
    uVar23 = local_60[9] ^ local_60[7] ^ local_60[0xf] ^ uVar24;
    uVar20 = local_60[10] ^ local_60[8] ^ uVar12 ^ uVar7;
    uVar23 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar20 >> 0x1f | uVar20 << 1;
    uVar17 = uVar7 + 0x6ed9eba1 + uVar8 + (uVar15 ^ uVar10 ^ uVar13) +
             (uVar14 >> 0x1b | uVar14 * 0x20);
    uVar8 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar29 = uVar16 + 0x6ed9eba1 + uVar10 + (uVar28 ^ uVar15 ^ uVar14) +
             (uVar17 >> 0x1b | uVar17 * 0x20);
    uVar10 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar13 = local_60[0xb] ^ local_60[9] ^ uVar27 ^ uVar16;
    uVar13 = uVar13 >> 0x1f | uVar13 << 1;
    uVar14 = uVar29 >> 2 | uVar29 * 0x40000000;
    uVar18 = uVar23 + 0x6ed9eba1 + uVar15 + (uVar8 ^ uVar28 ^ uVar17) +
             (uVar29 >> 0x1b | uVar29 * 0x20);
    uVar17 = local_60[0xc] ^ local_60[10] ^ uVar21 ^ uVar23;
    uVar15 = local_60[0xd] ^ local_60[0xb] ^ uVar19 ^ uVar20;
    uVar25 = local_60[0xe] ^ local_60[0xc] ^ uVar24 ^ uVar13;
    uVar29 = uVar20 + 0x6ed9eba1 + uVar28 + (uVar10 ^ uVar8 ^ uVar29) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar15 = uVar15 >> 0x1f | uVar15 << 1;
    uVar28 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar17 = uVar17 >> 0x1f | uVar17 << 1;
    uVar30 = uVar13 + 0x6ed9eba1 + uVar8 + (uVar14 ^ uVar10 ^ uVar18) +
             (uVar29 >> 0x1b | uVar29 * 0x20);
    uVar8 = uVar29 >> 2 | uVar29 * 0x40000000;
    uVar18 = uVar25 >> 0x1f | uVar25 << 1;
    uVar25 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar4 = uVar17 + 0x6ed9eba1 + uVar10 + (uVar28 ^ uVar14 ^ uVar29) +
            (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar10 = local_60[0xf] ^ local_60[0xd] ^ uVar7 ^ uVar17;
    uVar29 = uVar12 ^ local_60[0xe] ^ uVar16 ^ uVar15;
    uVar10 = uVar10 >> 0x1f | uVar10 << 1;
    uVar29 = uVar29 >> 0x1f | uVar29 << 1;
    uVar22 = uVar27 ^ local_60[0xf] ^ uVar23 ^ uVar18;
    uVar30 = uVar15 + 0x6ed9eba1 + uVar14 + (uVar8 ^ uVar28 ^ uVar30) +
             (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar14 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar31 = uVar18 + 0x6ed9eba1 + uVar28 + (uVar25 ^ uVar8 ^ uVar4) +
             (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar28 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar4 = uVar22 >> 0x1f | uVar22 << 1;
    uVar30 = uVar10 + 0x6ed9eba1 + uVar8 + (uVar14 ^ uVar25 ^ uVar30) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar12 = uVar21 ^ uVar12 ^ uVar20 ^ uVar10;
    uVar8 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar12 = uVar12 >> 0x1f | uVar12 << 1;
    uVar27 = uVar19 ^ uVar27 ^ uVar13 ^ uVar29;
    uVar27 = uVar27 >> 0x1f | uVar27 << 1;
    uVar22 = uVar29 + 0x6ed9eba1 + uVar25 + (uVar28 ^ uVar14 ^ uVar31) +
             (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar25 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar31 = uVar4 + 0x6ed9eba1 + uVar14 + (uVar8 ^ uVar28 ^ uVar30) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar14 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar21 = uVar24 ^ uVar21 ^ uVar17 ^ uVar4;
    uVar21 = uVar21 >> 0x1f | uVar21 << 1;
    uVar30 = uVar7 ^ uVar19 ^ uVar15 ^ uVar12;
    uVar26 = uVar16 ^ uVar24 ^ uVar18 ^ uVar27;
    uVar19 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar24 = uVar30 >> 0x1f | uVar30 << 1;
    uVar30 = uVar26 >> 0x1f | uVar26 << 1;
    uVar28 = uVar12 + 0x6ed9eba1 + uVar28 + (uVar25 ^ uVar8 ^ uVar22) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar22 = uVar27 + 0x6ed9eba1 + uVar8 + (uVar14 ^ uVar25 ^ uVar31) +
             (uVar28 >> 0x1b | uVar28 * 0x20);
    uVar8 = uVar28 >> 2 | uVar28 * 0x40000000;
    uVar25 = uVar21 + 0x6ed9eba1 + uVar25 + (uVar19 ^ uVar14 ^ uVar28) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar28 = uVar23 ^ uVar7 ^ uVar10 ^ uVar21;
    uVar7 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar28 = uVar28 >> 0x1f | uVar28 << 1;
    uVar22 = uVar24 + 0x6ed9eba1 + uVar14 + (uVar8 ^ uVar19 ^ uVar22) +
             (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar14 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar23 = uVar13 ^ uVar23 ^ uVar4 ^ uVar30;
    uVar23 = uVar23 >> 0x1f | uVar23 << 1;
    uVar16 = uVar20 ^ uVar16 ^ uVar29 ^ uVar24;
    uVar16 = uVar16 >> 0x1f | uVar16 << 1;
    uVar25 = uVar30 + 0x6ed9eba1 + uVar19 + (uVar7 ^ uVar8 ^ uVar25) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar19 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar28 + 0x6ed9eba1 + uVar8 + (uVar14 ^ uVar7 ^ uVar22) +
             (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar20 = uVar17 ^ uVar20 ^ uVar12 ^ uVar28;
    uVar20 = uVar20 >> 0x1f | uVar20 << 1;
    uVar13 = uVar15 ^ uVar13 ^ uVar27 ^ uVar16;
    uVar25 = uVar16 + 0x6ed9eba1 + uVar7 + (uVar19 ^ uVar14 ^ uVar25) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar7 = uVar13 >> 0x1f | uVar13 << 1;
    uVar13 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar23 + 0x6ed9eba1 + uVar14 + (uVar8 ^ uVar19 ^ uVar22) +
             (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar14 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar17 = uVar18 ^ uVar17 ^ uVar21 ^ uVar23;
    uVar17 = uVar17 >> 0x1f | uVar17 << 1;
    uVar15 = uVar10 ^ uVar15 ^ uVar24 ^ uVar20;
    uVar15 = uVar15 >> 0x1f | uVar15 << 1;
    uVar31 = uVar20 + 0x8f1bbcdc + uVar19 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar25 | uVar13) & uVar8 | uVar25 & uVar13);
    uVar19 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar25 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar22 = uVar7 + 0x8f1bbcdc + uVar8 + ((uVar22 | uVar14) & uVar13 | uVar22 & uVar14) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar31 = uVar17 + 0x8f1bbcdc + uVar13 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar31 | uVar19) & uVar14 | uVar31 & uVar19);
    uVar8 = uVar29 ^ uVar18 ^ uVar30 ^ uVar7;
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    uVar10 = uVar4 ^ uVar10 ^ uVar28 ^ uVar17;
    uVar10 = uVar10 >> 0x1f | uVar10 << 1;
    uVar13 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar26 = uVar15 + 0x8f1bbcdc + uVar14 + ((uVar22 | uVar25) & uVar19 | uVar22 & uVar25) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar14 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar18 = uVar12 ^ uVar29 ^ uVar16 ^ uVar15;
    uVar29 = uVar27 ^ uVar4 ^ uVar23 ^ uVar8;
    uVar18 = uVar18 >> 0x1f | uVar18 << 1;
    uVar29 = uVar29 >> 0x1f | uVar29 << 1;
    uVar4 = uVar8 + 0x8f1bbcdc + uVar19 + (uVar26 >> 0x1b | uVar26 * 0x20) +
            ((uVar31 | uVar14) & uVar25 | uVar31 & uVar14);
    uVar19 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar22 = uVar10 + 0x8f1bbcdc + uVar25 + ((uVar26 | uVar13) & uVar14 | uVar26 & uVar13) +
             (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar25 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar12 = uVar21 ^ uVar12 ^ uVar20 ^ uVar10;
    uVar4 = uVar18 + 0x8f1bbcdc + uVar14 + (uVar22 >> 0x1b | uVar22 * 0x20) +
            ((uVar4 | uVar19) & uVar13 | uVar4 & uVar19);
    uVar12 = uVar12 >> 0x1f | uVar12 << 1;
    uVar27 = uVar24 ^ uVar27 ^ uVar7 ^ uVar18;
    uVar27 = uVar27 >> 0x1f | uVar27 << 1;
    uVar14 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar29 + 0x8f1bbcdc + uVar13 + ((uVar22 | uVar25) & uVar19 | uVar22 & uVar25) +
             (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar13 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar21 = uVar30 ^ uVar21 ^ uVar17 ^ uVar29;
    uVar21 = uVar21 >> 0x1f | uVar21 << 1;
    uVar31 = uVar12 + 0x8f1bbcdc + uVar19 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar4 | uVar14) & uVar25 | uVar4 & uVar14);
    uVar19 = uVar28 ^ uVar24 ^ uVar15 ^ uVar12;
    uVar19 = uVar19 >> 0x1f | uVar19 << 1;
    uVar24 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar27 + 0x8f1bbcdc + uVar25 + ((uVar22 | uVar13) & uVar14 | uVar22 & uVar13) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar25 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar4 = uVar16 ^ uVar30 ^ uVar8 ^ uVar27;
    uVar4 = uVar4 >> 0x1f | uVar4 << 1;
    uVar31 = uVar21 + 0x8f1bbcdc + uVar14 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar31 | uVar24) & uVar13 | uVar31 & uVar24);
    uVar14 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar26 = uVar23 ^ uVar28 ^ uVar10 ^ uVar21;
    uVar28 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar30 = uVar19 + 0x8f1bbcdc + uVar13 + ((uVar22 | uVar25) & uVar24 | uVar22 & uVar25) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar13 = uVar26 >> 0x1f | uVar26 << 1;
    uVar16 = uVar20 ^ uVar16 ^ uVar18 ^ uVar19;
    uVar16 = uVar16 >> 0x1f | uVar16 << 1;
    uVar22 = uVar4 + 0x8f1bbcdc + uVar24 + (uVar30 >> 0x1b | uVar30 * 0x20) +
             ((uVar31 | uVar14) & uVar25 | uVar31 & uVar14);
    uVar23 = uVar7 ^ uVar23 ^ uVar29 ^ uVar4;
    uVar23 = uVar23 >> 0x1f | uVar23 << 1;
    uVar24 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar31 = uVar13 + 0x8f1bbcdc + uVar25 + ((uVar30 | uVar28) & uVar14 | uVar30 & uVar28) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar25 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar20 = uVar17 ^ uVar20 ^ uVar12 ^ uVar13;
    uVar30 = uVar15 ^ uVar7 ^ uVar27 ^ uVar16;
    uVar7 = uVar20 >> 0x1f | uVar20 << 1;
    uVar20 = uVar30 >> 0x1f | uVar30 << 1;
    uVar30 = uVar16 + 0x8f1bbcdc + uVar14 + (uVar31 >> 0x1b | uVar31 * 0x20) +
             ((uVar22 | uVar24) & uVar28 | uVar22 & uVar24);
    uVar14 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar22 = uVar23 + 0x8f1bbcdc + uVar28 + ((uVar31 | uVar25) & uVar24 | uVar31 & uVar25) +
             (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar28 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar17 = uVar8 ^ uVar17 ^ uVar21 ^ uVar23;
    uVar15 = uVar10 ^ uVar15 ^ uVar19 ^ uVar7;
    uVar15 = uVar15 >> 0x1f | uVar15 << 1;
    uVar17 = uVar17 >> 0x1f | uVar17 << 1;
    uVar30 = uVar7 + 0x8f1bbcdc + uVar24 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar30 | uVar14) & uVar25 | uVar30 & uVar14);
    uVar24 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar20 + 0x8f1bbcdc + uVar25 + ((uVar22 | uVar28) & uVar14 | uVar22 & uVar28) +
             (uVar30 >> 0x1b | uVar30 * 0x20);
    uVar8 = uVar18 ^ uVar8 ^ uVar4 ^ uVar20;
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    uVar25 = uVar29 ^ uVar10 ^ uVar13 ^ uVar17;
    uVar10 = uVar30 >> 2 | uVar30 * 0x40000000;
    uVar25 = uVar25 >> 0x1f | uVar25 << 1;
    uVar31 = uVar17 + 0x8f1bbcdc + uVar14 + (uVar22 >> 0x1b | uVar22 * 0x20) +
             ((uVar30 | uVar24) & uVar28 | uVar30 & uVar24);
    uVar14 = uVar12 ^ uVar18 ^ uVar16 ^ uVar15;
    uVar14 = uVar14 >> 0x1f | uVar14 << 1;
    uVar18 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar15 + 0x8f1bbcdc + uVar28 + ((uVar22 | uVar10) & uVar24 | uVar22 & uVar10) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar28 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar30 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar31 = uVar8 + 0xca62c1d6 + uVar24 + (uVar18 ^ uVar10 ^ uVar31) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar24 = uVar27 ^ uVar29 ^ uVar23 ^ uVar8;
    uVar24 = uVar24 >> 0x1f | uVar24 << 1;
    uVar12 = uVar21 ^ uVar12 ^ uVar7 ^ uVar25;
    local_60[0] = uVar12 >> 0x1f | uVar12 << 1;
    uVar12 = uVar19 ^ uVar27 ^ uVar20 ^ uVar14;
    local_60[1] = uVar12 >> 0x1f | uVar12 << 1;
    uVar27 = uVar25 + 0xca62c1d6 + uVar10 + (uVar28 ^ uVar18 ^ uVar22) +
             (uVar31 >> 0x1b | uVar31 * 0x20);
    uVar10 = uVar31 >> 2 | uVar31 * 0x40000000;
    uVar18 = uVar14 + 0xca62c1d6 + uVar18 + (uVar30 ^ uVar28 ^ uVar31) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar29 = uVar4 ^ uVar21 ^ uVar17 ^ uVar24;
    uVar21 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar28 = uVar24 + 0xca62c1d6 + uVar28 + (uVar10 ^ uVar30 ^ uVar27) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    local_60[2] = uVar29 >> 0x1f | uVar29 << 1;
    uVar27 = uVar13 ^ uVar19 ^ uVar15 ^ local_60[0];
    local_60[3] = uVar27 >> 0x1f | uVar27 << 1;
    uVar27 = uVar16 ^ uVar4 ^ uVar8 ^ local_60[1];
    local_60[4] = uVar27 >> 0x1f | uVar27 << 1;
    uVar18 = local_60[0] + 0xca62c1d6 + uVar30 + (uVar12 ^ uVar10 ^ uVar18) +
             (uVar28 >> 0x1b | uVar28 * 0x20);
    uVar27 = uVar28 >> 2 | uVar28 * 0x40000000;
    uVar28 = local_60[1] + 0xca62c1d6 + uVar10 + (uVar21 ^ uVar12 ^ uVar28) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar10 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar13 = uVar23 ^ uVar13 ^ uVar25 ^ local_60[2];
    uVar19 = uVar28 >> 2 | uVar28 * 0x40000000;
    uVar12 = local_60[2] + 0xca62c1d6 + uVar12 + (uVar27 ^ uVar21 ^ uVar18) +
             (uVar28 >> 0x1b | uVar28 * 0x20);
    uVar16 = uVar7 ^ uVar16 ^ uVar14 ^ local_60[3];
    local_60[5] = uVar13 >> 0x1f | uVar13 << 1;
    local_60[6] = uVar16 >> 0x1f | uVar16 << 1;
    uVar16 = local_60[3] + 0xca62c1d6 + uVar21 + (uVar10 ^ uVar27 ^ uVar28) +
             (uVar12 >> 0x1b | uVar12 * 0x20);
    uVar23 = uVar20 ^ uVar23 ^ uVar24 ^ local_60[4];
    uVar21 = uVar12 >> 2 | uVar12 * 0x40000000;
    local_60[7] = uVar23 >> 0x1f | uVar23 << 1;
    uVar27 = local_60[4] + 0xca62c1d6 + uVar27 + (uVar19 ^ uVar10 ^ uVar12) +
             (uVar16 >> 0x1b | uVar16 * 0x20);
    uVar23 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar12 = uVar17 ^ uVar7 ^ local_60[0] ^ local_60[5];
    local_60[8] = uVar12 >> 0x1f | uVar12 << 1;
    uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar16 = local_60[5] + 0xca62c1d6 + uVar10 + (uVar21 ^ uVar19 ^ uVar16) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar10 = uVar15 ^ uVar20 ^ local_60[1] ^ local_60[6];
    local_60[9] = uVar10 >> 0x1f | uVar10 << 1;
    uVar7 = uVar8 ^ uVar17 ^ local_60[2] ^ local_60[7];
    uVar27 = local_60[6] + 0xca62c1d6 + uVar19 + (uVar23 ^ uVar21 ^ uVar27) +
             (uVar16 >> 0x1b | uVar16 * 0x20);
    uVar10 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar16 = local_60[7] + 0xca62c1d6 + uVar21 + (uVar12 ^ uVar23 ^ uVar16) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar21 = uVar27 >> 2 | uVar27 * 0x40000000;
    local_60[10] = uVar7 >> 0x1f | uVar7 << 1;
    uVar27 = local_60[8] + 0xca62c1d6 + uVar23 + (uVar10 ^ uVar12 ^ uVar27) +
             (uVar16 >> 0x1b | uVar16 * 0x20);
    uVar15 = uVar25 ^ uVar15 ^ local_60[3] ^ local_60[8];
    uVar23 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar19 = uVar14 ^ uVar8 ^ local_60[4] ^ local_60[9];
    uVar8 = uVar24 ^ uVar25 ^ local_60[5] ^ local_60[10];
    local_60[0xb] = uVar15 >> 0x1f | uVar15 << 1;
    local_60[0xd] = uVar8 >> 0x1f | uVar8 << 1;
    uVar15 = local_60[9] + 0xca62c1d6 + uVar12 + (uVar21 ^ uVar10 ^ uVar16) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar8 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
    local_60[0xc] = uVar19 >> 0x1f | uVar19 << 1;
    uVar27 = local_60[10] + 0xca62c1d6 + uVar10 + (uVar23 ^ uVar21 ^ uVar27) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar15 = local_60[0xb] + 0xca62c1d6 + uVar21 + (uVar8 ^ uVar23 ^ uVar15) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar10 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar19 = local_60[0] ^ uVar14 ^ local_60[6] ^ local_60[0xb];
    uVar21 = local_60[1] ^ uVar24 ^ local_60[7] ^ local_60[0xc];
    local_60[0xf] = uVar21 >> 0x1f | uVar21 << 1;
    local_60[0xe] = uVar19 >> 0x1f | uVar19 << 1;
    uVar27 = local_60[0xc] + 0xca62c1d6 + uVar23 + (uVar12 ^ uVar8 ^ uVar27) +
             (uVar15 >> 0x1b | uVar15 * 0x20);
    uVar21 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar23 = local_60[0xd] + 0xca62c1d6 + uVar8 + (uVar10 ^ uVar12 ^ uVar15) +
             (uVar27 >> 0x1b | uVar27 * 0x20);
    uVar8 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar12 = local_60[0xe] + 0xca62c1d6 + uVar12 + (uVar21 ^ uVar10 ^ uVar27) +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar5 = uVar5 + (uVar23 >> 2 | uVar23 * 0x40000000);
    iVar11 = iVar11 + uVar21;
    uVar3 = uVar3 + uVar12;
    uVar9 = uVar9 + uVar8;
    uVar1 = uVar1 + local_60[0xf] + 0xca62c1d6 + uVar10 + (uVar8 ^ uVar21 ^ uVar23) +
            (uVar12 >> 0x1b | uVar12 * 0x20);
    *(uint *)param_3 = uVar1;
    *(uint *)(param_3 + 4) = uVar3;
    *(uint *)(param_3 + 8) = uVar5;
    *(uint *)(param_3 + 0xc) = uVar9;
    *(int *)(param_3 + 0x10) = iVar11;
  }
  return;
}



// tnp::pppp_sha1_finish_ctx(tnp::pppp_sha1_ctx*, void*)

void tnp::pppp_sha1_finish_ctx(pppp_sha1_ctx *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar1 = uVar3 + *(int *)(param_1 + 0x14);
  if (uVar3 < 0x38) {
    uVar5 = 0x40;
    iVar4 = 0xf;
    iVar2 = 0x38;
    iVar6 = 0xe;
  }
  else {
    uVar5 = 0x80;
    iVar4 = 0x1f;
    iVar2 = 0x78;
    iVar6 = 0x1e;
  }
  if (uVar1 < uVar3) {
    uVar7 = uVar7 + 1;
  }
  if (uVar1 < uVar3) {
    *(uint *)(param_1 + 0x18) = uVar7;
  }
  uVar8 = uVar1 >> 0x1d | uVar7 << 3;
  *(uint *)(param_1 + 0x14) = uVar1;
  *(uint *)(param_1 + (iVar6 + 8) * 4) =
       (uVar8 ^ ((uVar7 & 0x1fffffff) >> 0xd | uVar8 << 0x10)) >> 8 & 0xffff00ff ^
       ((uVar7 & 0x1fffffff) >> 5 | uVar8 << 0x18);
  *(uint *)(param_1 + (iVar4 + 8) * 4) =
       uVar1 * 0x8000000 | (uVar1 & 0x1fffffff) >> 0x15 | (uVar1 * 8 & 0xff00) << 8 |
       (uVar1 & 0x1fffffff) >> 5 & 0xff00;
  memcpy(param_1 + 0x20 + uVar3,&DAT_00050c4c,iVar2 - uVar3);
  pppp_sha1_process_block(param_1 + 0x20,uVar5,param_1);
  pppp_sha1_read_ctx(param_1,param_2);
  return;
}



// tnp::pppp_sha1_process_bytes(void const*, unsigned int, tnp::pppp_sha1_ctx*)

void tnp::pppp_sha1_process_bytes(void *param_1,uint param_2,pppp_sha1_ctx *param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *__src;
  uint uVar4;
  pppp_sha1_ctx *ppVar5;
  
  iVar3 = *(int *)(param_3 + 0x1c);
  if (iVar3 != 0) {
    uVar4 = 0x80U - iVar3;
    if (param_2 < 0x80U - iVar3) {
      uVar4 = param_2;
    }
    ppVar5 = param_3 + 0x20;
    memcpy(ppVar5 + iVar3,param_1,uVar4);
    uVar2 = uVar4 + *(int *)(param_3 + 0x1c);
    *(uint *)(param_3 + 0x1c) = uVar2;
    if (0x40 < uVar2) {
      pppp_sha1_process_block(ppVar5,uVar2 & 0xffffffc0,param_3);
      uVar2 = *(uint *)(param_3 + 0x1c);
      *(uint *)(param_3 + 0x1c) = uVar2 & 0x3f;
      memcpy(ppVar5,ppVar5 + (uVar4 + iVar3 & 0xffffffc0),uVar2 & 0x3f);
    }
    param_1 = (void *)((int)param_1 + uVar4);
    param_2 = param_2 - uVar4;
  }
  if (0x3f < param_2) {
    if (((uint)param_1 & 3) != 0) {
      __src = param_1;
      uVar4 = param_2;
      if (param_2 != 0x40) {
        do {
          pvVar1 = memcpy(param_3 + 0x20,__src,0x40);
          uVar4 = uVar4 - 0x40;
          pppp_sha1_process_block(pvVar1,0x40,param_3);
          __src = (void *)((int)__src + 0x40);
        } while (0x40 < uVar4);
        uVar4 = param_2 - 0x41 >> 6;
        param_2 = (param_2 - 0x40) + uVar4 * -0x40;
        param_1 = (void *)((int)param_1 + (uVar4 + 1) * 0x40);
      }
      goto LAB_0003ee9c;
    }
    uVar4 = param_2 & 0xffffffc0;
    pppp_sha1_process_block(param_1,uVar4,param_3);
    param_2 = param_2 & 0x3f;
    param_1 = (void *)((int)param_1 + uVar4);
  }
  if (param_2 == 0) {
    return;
  }
LAB_0003ee9c:
  ppVar5 = param_3 + 0x20;
  uVar4 = param_2 + *(int *)(param_3 + 0x1c);
  memcpy(ppVar5 + *(int *)(param_3 + 0x1c),param_1,param_2);
  if (0x3f < uVar4) {
    pppp_sha1_process_block(ppVar5,0x40,param_3);
    memcpy(ppVar5,param_3 + 0x60,uVar4 - 0x40);
    *(uint *)(param_3 + 0x1c) = uVar4 - 0x40;
    return;
  }
  *(uint *)(param_3 + 0x1c) = uVar4;
  return;
}



// tnp::pppp_sha1_buffer(char const*, unsigned int, void*)

void tnp::pppp_sha1_buffer(char *param_1,uint param_2,void *param_3)

{
  pppp_sha1_ctx apStack_b8 [164];
  
  pppp_sha1_init_ctx(apStack_b8);
  pppp_sha1_process_bytes(param_1,param_2,apStack_b8);
  pppp_sha1_finish_ctx(apStack_b8,param_3);
  return;
}



// tnp::pppp_sha1_stream(__STDIO_FILE_STRUCT*, void*)

undefined4 tnp::pppp_sha1_stream(__STDIO_FILE_STRUCT *param_1,void *param_2)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  pppp_sha1_ctx apStack_1100 [160];
  undefined1 auStack_1060 [4168];
  
  pppp_sha1_init_ctx(apStack_1100);
  uVar3 = 0;
  while( true ) {
    while( true ) {
      sVar1 = fread(auStack_1060 + uVar3,1,0x1000 - uVar3,(FILE *)param_1);
      uVar3 = uVar3 + sVar1;
      if (uVar3 != 0x1000) break;
      pppp_sha1_process_block(auStack_1060,0x1000,apStack_1100);
      uVar3 = 0;
    }
    if (sVar1 == 0) break;
    iVar2 = feof((FILE *)param_1);
    if (iVar2 != 0) {
LAB_0003f030:
      if (uVar3 != 0) {
        pppp_sha1_process_bytes(auStack_1060,uVar3,apStack_1100);
      }
      pppp_sha1_finish_ctx(apStack_1100,param_2);
      return 0;
    }
  }
  iVar2 = ferror((FILE *)param_1);
  if (iVar2 != 0) {
    return 1;
  }
  goto LAB_0003f030;
}



// tnp::pppp_memxor(void*, void const*, unsigned int)

void tnp::pppp_memxor(void *param_1,void *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (param_3 != 0) {
    pbVar2 = param_2;
    do {
      pbVar1 = pbVar2 + 1;
      *(byte *)param_1 = *(byte *)param_1 ^ *pbVar2;
      pbVar2 = pbVar1;
      param_1 = (byte *)((int)param_1 + 1);
    } while (pbVar1 != (byte *)((int)param_2 + param_3));
  }
  return;
}



// tnp::pppp_hmac_sha1(void const*, int, void const*, int, void*)

undefined4 tnp::pppp_hmac_sha1(void *param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  undefined1 auStack_1d0 [20];
  undefined1 auStack_1bc [20];
  undefined1 auStack_1a8 [64];
  pppp_sha1_ctx apStack_168 [160];
  pppp_sha1_ctx apStack_c8 [164];
  
  if (0x40 < param_2) {
    pppp_sha1_init_ctx(apStack_c8);
    pppp_sha1_process_bytes(param_1,param_2,apStack_c8);
    pppp_sha1_finish_ctx(apStack_c8,auStack_1d0);
    param_2 = 0x14;
    param_1 = auStack_1d0;
  }
  pppp_sha1_init_ctx(apStack_168);
  memset(auStack_1a8,0x36,0x40);
  pppp_memxor(auStack_1a8,param_1,param_2);
  pppp_sha1_process_block(auStack_1a8,0x40,apStack_168);
  pppp_sha1_process_bytes(param_3,param_4,apStack_168);
  pppp_sha1_finish_ctx(apStack_168,auStack_1bc);
  pppp_sha1_init_ctx(apStack_c8);
  memset(auStack_1a8,0x5c,0x40);
  pppp_memxor(auStack_1a8,param_1,param_2);
  pppp_sha1_process_block(auStack_1a8,0x40,apStack_c8);
  pppp_sha1_process_bytes(auStack_1bc,0x14,apStack_c8);
  pppp_sha1_finish_ctx(apStack_c8,param_5);
  return 0;
}



// tnp::pppp_bin_to_string(char const*, int, char*)

void tnp::pppp_bin_to_string(char *param_1,int param_2,char *param_3)

{
  char *__s;
  char *pcVar1;
  byte *pbVar2;
  
  if (param_2 < 1) {
    return;
  }
  pbVar2 = (byte *)(param_1 + -1);
  __s = param_3;
  do {
    pcVar1 = __s + 2;
    pbVar2 = pbVar2 + 1;
    sprintf(__s,"%02X",(uint)*pbVar2);
    __s = pcVar1;
  } while (param_3 + param_2 * 2 != pcVar1);
  return;
}



// tnp::PPPP_MakeSha1(char const*, int, char const*, int, char*)

void tnp::PPPP_MakeSha1(char *param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  size_t sVar1;
  char acStack_2c [24];
  
  sVar1 = strlen(param_1);
  pppp_hmac_sha1(param_1,sVar1,param_3,param_4,acStack_2c);
  pppp_bin_to_string(acStack_2c,0x14,param_5);
  return;
}



// tnp::PPPP_MakeSha1_2(char const*, int, char const*, int, char*)

void tnp::PPPP_MakeSha1_2(char *param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  size_t sVar1;
  undefined1 auStack_24 [20];
  
  sVar1 = strlen(param_1);
  pppp_hmac_sha1(param_1,sVar1,param_3,param_4,auStack_24);
  memcpy(param_5,auStack_24,8);
  return;
}



// tnp::PPPP_MakeSha1_EX(char const*, int, char*, int, char const*)

void tnp::PPPP_MakeSha1_EX(char *param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  size_t sVar1;
  undefined1 auStack_2c [20];
  
  sVar1 = strlen(param_5);
  pppp_hmac_sha1(param_5,sVar1,param_1,param_2,auStack_2c);
  if (0x13 < param_4) {
    param_4 = 0x14;
  }
  memcpy(param_3,auStack_2c,param_4);
  return;
}



// tnp::PPPP_MakeNonce(char*, int)

void tnp::PPPP_MakeNonce(char *param_1,int param_2)

{
  uint __seed;
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  __seed = getCurTime();
  snprintf(param_1,param_2,"%llu:");
  srand(__seed);
  sVar1 = strlen(param_1);
  if (0 < (int)(param_2 - sVar1)) {
    pcVar3 = param_1 + sVar1;
    do {
      iVar2 = rand();
      pcVar4 = pcVar3 + 1;
      *pcVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[iVar2 % 0x3e];
      pcVar3 = pcVar4;
    } while (pcVar4 != param_1 + sVar1 + (param_2 - sVar1));
  }
  return;
}



// tnp::getTickCount()

int tnp::getTickCount(void)

{
  timeval local_10;
  
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  return local_10.tv_sec * 1000 + local_10.tv_usec / 1000;
}



// tnp::getCurTime()

longlong tnp::getCurTime(void)

{
  timeval local_10;
  
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  return (longlong)local_10.tv_sec * 1000 + (longlong)(local_10.tv_usec / 1000);
}



// tnp::getCurSecond(long, unsigned int)

uint tnp::getCurSecond(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = time((time_t *)0x0);
  if (param_1 < 1) {
    return uVar1;
  }
  if ((uint)param_1 < uVar1) {
    if (param_1 + param_2 <= uVar1) {
      uVar1 = param_1 + param_2;
    }
    return uVar1;
  }
  return param_1;
}



// tnp::PPPP_DebugTrace(unsigned int, char*, ...)

void tnp::PPPP_DebugTrace(uint param_1,char *param_2,...)

{
  uint uVar1;
  tm *ptVar2;
  FILE *__stream;
  undefined4 in_r2;
  undefined4 in_r3;
  uint uVar3;
  timeval tStack_270;
  char acStack_268 [64];
  char acStack_228 [516];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((param_1 & DEBUG_LEVEL) != 0) {
    uStack_8 = in_r2;
    uStack_4 = in_r3;
    memset(acStack_268,0,0x40);
    gettimeofday(&tStack_270,(__timezone_ptr_t)0x0);
    ptVar2 = localtime(&tStack_270.tv_sec);
    sprintf(acStack_268,"%04d-%02d-%02d %02d:%02d:%02d.%03d",ptVar2->tm_year + 0x76c,
            ptVar2->tm_mon + 1,ptVar2->tm_mday,ptVar2->tm_hour,ptVar2->tm_min,ptVar2->tm_sec,
            tStack_270.tv_usec / 1000);
    memset(acStack_228,0,0x200);
    vsprintf(acStack_228,param_2,&uStack_8);
    uVar1 = 0;
    do {
      uVar3 = uVar1;
      uVar1 = uVar3 + 1;
    } while (param_1 >> (uVar3 + 1 & 0xff) != 0);
    FUN_0001dd84("","",0xffffffff,"%s TNP <%d> %s",acStack_268,uVar3,acStack_228);
    if (DEBUG_LOGFILE[0] != '\0') {
      printf("%s TNPDebugLog <%d> %s",acStack_268,uVar3,acStack_228);
      __stream = fopen(DEBUG_LOGFILE,"a+");
      if (__stream != (FILE *)0x0) {
        fprintf(__stream,"%s %s",acStack_268,acStack_228);
        fclose(__stream);
      }
    }
  }
  return;
}



// tnp::PPPP_Log(char*, char*, ...)

char * tnp::PPPP_Log(char *param_1,char *param_2,...)

{
  return param_1;
}



// tnp::trim(char*)

char * tnp::trim(char *param_1)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (*param_1 == '\t' || *param_1 == ' ') {
    do {
      param_1 = param_1 + 1;
    } while (*param_1 == ' ' || *param_1 == '\t');
  }
  sVar2 = strlen(param_1);
  if (0 < (int)sVar2) {
    pbVar3 = (byte *)(param_1 + sVar2);
    do {
      pbVar3 = pbVar3 + -1;
      bVar1 = *pbVar3;
      bVar4 = 0x1f < bVar1;
      if (bVar1 != 0x20) {
        bVar4 = bVar1 != 9;
      }
    } while (((!bVar4 || (bVar1 == 0x20 || bVar1 == 10)) || (bVar1 == 0xd)) &&
            (sVar2 = sVar2 - 1, sVar2 != 0));
  }
  param_1[sVar2] = '\0';
  return param_1;
}



// tnp::PPPP_EncodeString(char*, char*, int)

undefined4 tnp::PPPP_EncodeString(char *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  byte *pbVar2;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte local_60 [60];
  byte *pbVar3;
  
  memcpy(local_60,&DAT_00050cdc,0x36);
  sVar1 = strlen(param_1);
  iVar5 = 0;
  pbVar4 = (byte *)param_1;
  if (0 < (int)sVar1) {
    do {
      if (iVar5 < 1) {
        uVar6 = 0x39;
      }
      else {
        uVar6 = 0x39;
        pbVar3 = (byte *)param_1;
        do {
          pbVar2 = pbVar3 + 1;
          uVar6 = uVar6 ^ *pbVar3;
          pbVar3 = pbVar2;
        } while (pbVar4 != pbVar2);
      }
      uVar6 = uVar6 ^ (*pbVar4 ^ local_60[iVar5 % 0x36]);
      if (param_3 <= iVar5 * 2) {
        return 0xffffffff;
      }
      *param_2 = (char)((int)uVar6 >> 4) + 'A';
      param_2[1] = ((byte)uVar6 & 0xf) + 0x41;
      sVar1 = strlen(param_1);
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 1;
      param_2 = param_2 + 2;
    } while (iVar5 < (int)sVar1);
  }
  return 0;
}



// tnp::PPPP_DecodeString(char*, char*, int)

undefined4 tnp::PPPP_DecodeString(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  byte *pbVar4;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  byte bVar10;
  byte local_60 [60];
  byte *pbVar5;
  
  memcpy(local_60,&DAT_00050cdc,0x36);
  iVar7 = 0;
  pbVar8 = (byte *)param_2;
  pcVar9 = param_1;
  do {
    sVar3 = strlen(param_1);
    if ((int)sVar3 / 2 <= iVar7) {
      return 0;
    }
    cVar2 = *pcVar9;
    pcVar1 = pcVar9 + 1;
    if (iVar7 == 0) {
      bVar10 = 0x39;
    }
    else {
      bVar10 = 0x39;
      pbVar5 = (byte *)param_2;
      do {
        pbVar4 = pbVar5 + 1;
        bVar10 = bVar10 ^ *pbVar5;
        pbVar5 = pbVar4;
      } while (pbVar4 != pbVar8);
    }
    iVar6 = iVar7 % 0x36;
    iVar7 = iVar7 + 1;
    pcVar9 = pcVar9 + 2;
    *pbVar8 = *pcVar1 + cVar2 * '\x10' + 0xafU ^ local_60[iVar6] ^ bVar10;
    pbVar8 = pbVar8 + 1;
  } while (iVar7 < param_3);
  return 0xffffffff;
}



// tnp::PPPP_IsEmpty(char const*)

int tnp::PPPP_IsEmpty(char *param_1)

{
  int iVar1;
  
  if (param_1 != (char *)0x0) {
    iVar1 = 1 - (uint)(byte)*param_1;
    if (1 < (byte)*param_1) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 1;
}



// tnp::over_time_receive_tcp(int, char*, int, unsigned int)

ssize_t tnp::over_time_receive_tcp(int param_1,char *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  __suseconds_t *p_Var5;
  timeval local_a8;
  fd_set local_a0;
  
  p_Var5 = &local_a8.tv_usec;
  do {
    p_Var5 = p_Var5 + 1;
    *p_Var5 = 0;
  } while (p_Var5 != local_a0.fds_bits + 0x1f);
  uVar1 = (uint)param_1 >> 5;
  local_a8.tv_usec = (param_4 % 1000) * 1000;
  local_a8.tv_sec = (param_4 - param_4 % 1000) / 1000;
  local_a0.fds_bits[uVar1] = local_a0.fds_bits[uVar1] | 1 << (param_1 & 0x1fU);
  iVar2 = select(param_1 + 1,&local_a0,(fd_set *)0x0,(fd_set *)0x0,&local_a8);
  if (iVar2 != -1) {
    sVar3 = 0;
    if ((iVar2 != 0) && (sVar3 = 0, (local_a0.fds_bits[uVar1] >> (param_1 & 0x1fU) & 1U) != 0)) {
      memset(param_2,0,param_3);
      sVar3 = recv(param_1,param_2,param_3,0);
      if ((sVar3 < 1) && (PPPP_DebugTrace(4,"recv error, return %d\n",sVar3), sVar3 == 0)) {
        sVar3 = -2;
      }
    }
    return sVar3;
  }
  piVar4 = __errno_location();
  PPPP_DebugTrace(4,"select Error : errno = %d\n",*piVar4);
  return -1;
}



// tnp::SendMessageByTCP(char*, int, int)

int tnp::SendMessageByTCP(char *param_1,int param_2,int param_3)

{
  size_t sVar1;
  int *piVar2;
  char *pcVar3;
  size_t __n;
  int __errnum;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  __n = param_2;
  while( true ) {
    while (sVar1 = send(param_3,param_1,__n,0), -1 < (int)sVar1) {
      bVar5 = __n == sVar1;
      param_1 = param_1 + sVar1;
      __n = __n - sVar1;
      if (bVar5) {
        return param_2;
      }
    }
    if (2 < iVar4) break;
    piVar2 = __errno_location();
    __errnum = *piVar2;
    if (__errnum != 4 && __errnum != 0xb) goto LAB_0003fac0;
    pcVar3 = strerror(__errnum);
    iVar4 = iVar4 + 1;
    PPPP_DebugTrace(2,"send(socket:%d) Error : errno = %d,%s\n",param_3,__errnum,pcVar3);
    usleep(1000);
  }
  piVar2 = __errno_location();
  __errnum = *piVar2;
LAB_0003fac0:
  pcVar3 = strerror(__errnum);
  PPPP_DebugTrace(2,"send(socket:%d) Error : errno = %d,%s   sendcount=%d\n",param_3,__errnum,pcVar3
                  ,iVar4);
  return -1;
}



// tnp::CloseSocket(int)

void tnp::CloseSocket(int param_1)

{
  close(param_1);
  PPPP_DebugTrace(2,"CloseSocket:%d\n",param_1);
  return;
}



// tnp::CreateSocket(char)

int tnp::CreateSocket(char param_1)

{
  int __fd;
  undefined4 local_18;
  int local_14;
  
  if (param_1 == 0) {
    __fd = socket(2,2,0);
    local_18 = 1;
    local_14 = (int)param_1;
    setsockopt(__fd,1,0x14,&local_18,8);
  }
  else {
    __fd = socket(2,1,0);
    local_18 = 1;
    local_14 = 0;
    setsockopt(__fd,1,0x15,&local_18,8);
  }
  if (0x3ff < __fd) {
    CloseSocket(__fd);
    __fd = -1;
  }
  PPPP_DebugTrace(2,"CreateSocket:%d\n",__fd);
  return __fd;
}



// tnp::setup_listen_port(unsigned short)

int tnp::setup_listen_port(ushort param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_9c;
  sockaddr local_98 [8];
  
  local_9c = 1;
  __fd = CreateSocket('\0');
  if (__fd != -1) {
    iVar1 = setsockopt(__fd,1,2,&local_9c,4);
    if ((-1 < iVar1) && (iVar1 = setsockopt(__fd,1,6,&local_9c,4), -1 < iVar1)) {
      memset(local_98,0,0x80);
      local_98[0].sa_data._0_2_ = param_1 << 8 | param_1 >> 8;
      local_98[0].sa_family = 2;
      iVar1 = bind(__fd,local_98,0x10);
      if (-1 < iVar1) {
        return __fd;
      }
      CloseSocket(__fd);
      return -3;
    }
    __fd = -2;
  }
  return __fd;
}



// tnp::TryBindPort(int, unsigned short*)

undefined4 tnp::TryBindPort(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  sockaddr local_a0 [8];
  
  memset(local_a0,0,0x80);
  uVar1 = *param_2;
  local_a0[0].sa_family = 2;
  if (uVar1 == 0) {
    uVar4 = getCurTime();
    srand(uVar4);
    iVar2 = 1000;
    do {
      iVar5 = rand();
      uVar6 = iVar5 % 20000 + 10000;
      uVar4 = uVar6 * 0x100;
      uVar6 = uVar6 & 0xffff;
      local_a0[0].sa_data._0_2_ = (ushort)uVar4 | (ushort)(uVar6 >> 8);
      uVar4 = uVar4 & 0xffff | uVar6 >> 8;
      iVar5 = bind(param_1,local_a0,0x10);
      uVar3 = 0;
      if (iVar5 == 0) goto LAB_0003fd10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar3 = 0xffffffff;
  }
  else {
    local_a0[0].sa_data._0_2_ = uVar1 << 8 | uVar1 >> 8;
    uVar4 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    iVar2 = bind(param_1,local_a0,0x10);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = 0xffffffff;
    }
  }
LAB_0003fd10:
  *param_2 = (ushort)(uVar4 << 8) | (ushort)(uVar4 >> 8);
  return uVar3;
}



// tnp::ConnectAddress(int, sockaddr_in const*)

void tnp::ConnectAddress(int param_1,sockaddr_in *param_2)

{
  connect(param_1,(sockaddr *)param_2,0x10);
  return;
}



// tnp::SendToAddress(int, char*, int, sockaddr_in const*)

void tnp::SendToAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4)

{
  if (*(short *)param_4 == 0) {
    *(undefined2 *)param_4 = 2;
  }
  sendto(param_1,param_2,param_3,0,(sockaddr *)param_4,0x10);
  return;
}



// tnp::SendMessage(char*, int, int, sockaddr_in*)

int tnp::SendMessage(char *param_1,int param_2,int param_3,sockaddr_in *param_4)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  int __errnum;
  
  iVar2 = SendToAddress(param_3,param_1,param_2,param_4);
  if (-1 < iVar2) {
    return iVar2;
  }
  pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(param_4 + 4));
  uVar1 = *(ushort *)(param_4 + 2);
  piVar4 = __errno_location();
  __errnum = *piVar4;
  pcVar5 = strerror(__errnum);
  PPPP_DebugTrace(4,"SendToAddress(socket:%d,dest addr = %s:%d) Error : errno = %d,%s\n",param_3,
                  pcVar3,(uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8),__errnum,pcVar5);
  return iVar2;
}



// tnp::RecvFromAddress(int, char*, int, sockaddr_in*)

ssize_t tnp::RecvFromAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4)

{
  ssize_t sVar1;
  socklen_t local_a4;
  sockaddr asStack_a0 [8];
  
  memset(asStack_a0,0,0x80);
  local_a4 = 0x80;
  memset(param_2,0,param_3);
  sVar1 = recvfrom(param_1,param_2,param_3,0,asStack_a0,&local_a4);
  memcpy(param_4,asStack_a0,0x10);
  return sVar1;
}



// tnp::over_time_receive(int, char*, int, sockaddr_in*, unsigned int)

undefined4
tnp::over_time_receive(int param_1,char *param_2,int param_3,sockaddr_in *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  __suseconds_t *p_Var5;
  timeval local_a8;
  fd_set local_a0;
  
  p_Var5 = &local_a8.tv_usec;
  do {
    p_Var5 = p_Var5 + 1;
    *p_Var5 = 0;
  } while (p_Var5 != local_a0.fds_bits + 0x1f);
  uVar1 = (uint)param_1 >> 5;
  local_a8.tv_usec = (param_5 % 1000) * 1000;
  local_a8.tv_sec = (param_5 - param_5 % 1000) / 1000;
  local_a0.fds_bits[uVar1] = local_a0.fds_bits[uVar1] | 1 << (param_1 & 0x1fU);
  iVar2 = select(param_1 + 1,&local_a0,(fd_set *)0x0,(fd_set *)0x0,&local_a8);
  if (iVar2 != -1) {
    if ((iVar2 != 0) && ((local_a0.fds_bits[uVar1] >> (param_1 & 0x1fU) & 1U) != 0)) {
      memset(param_2,0,param_3);
      uVar3 = RecvFromAddress(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    return 0;
  }
  piVar4 = __errno_location();
  PPPP_DebugTrace(4,"select Error : errno = %d\n",*piVar4);
  return 0xffffffff;
}



// tnp::ToAddrV6(sockaddr_in const*, sockaddr_in6*)

sockaddr_in * tnp::ToAddrV6(sockaddr_in *param_1,sockaddr_in6 *param_2)

{
  return param_1;
}



// tnp::ToAddrV4(sockaddr_in6 const*, sockaddr_in*)

sockaddr_in6 * tnp::ToAddrV4(sockaddr_in6 *param_1,sockaddr_in *param_2)

{
  return param_1;
}



// tnp::GetAddrInfo(sockaddr_storage*, char*, unsigned short*)

sockaddr_storage * tnp::GetAddrInfo(sockaddr_storage *param_1,char *param_2,ushort *param_3)

{
  return param_1;
}



// tnp::AddrCompare(sockaddr_in*, sockaddr_in*)

bool tnp::AddrCompare(sockaddr_in *param_1,sockaddr_in *param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    return true;
  }
  return *(short *)(param_1 + 2) != *(short *)(param_2 + 2);
}



// tnp::UpdateNetwork()

void tnp::UpdateNetwork(void)

{
  isIPv6Only = 0;
  return;
}



// tnp::LanIfNum()

uint tnp::LanIfNum(void)

{
  int __fd;
  int iVar1;
  uint uVar2;
  uint local_218;
  undefined1 *local_214;
  undefined1 auStack_210 [516];
  
  __fd = CreateSocket('\0');
  if (-1 < __fd) {
    local_218 = 0x200;
    local_214 = auStack_210;
    iVar1 = ioctl(__fd,0x8912,&local_218);
    if (iVar1 == 0) {
      uVar2 = local_218 >> 5;
      goto LAB_000400c4;
    }
  }
  uVar2 = 0;
LAB_000400c4:
  CloseSocket(__fd);
  return uVar2;
}



// tnp::GetIP(int, char*)

undefined4 tnp::GetIP(int param_1,char *param_2)

{
  int __fd;
  int iVar1;
  char *__src;
  undefined1 *puVar2;
  undefined4 local_220;
  undefined1 *puStack_21c;
  undefined1 auStack_218 [16];
  ushort auStack_208 [2];
  in_addr_t aiStack_204 [123];
  
  __fd = CreateSocket('\0');
  if (-1 < __fd) {
    local_220 = 0x200;
    puStack_21c = auStack_218;
    iVar1 = ioctl(__fd,0x8912,&local_220);
    if (iVar1 == 0) {
      puVar2 = auStack_218 + param_1 * 0x20;
      ioctl(__fd,0x8913,puVar2);
      if ((auStack_208[param_1 * 0x10] & 1) != 0) {
        ioctl(__fd,0x8915,puVar2);
        __src = inet_ntoa((in_addr)aiStack_204[param_1 * 8]);
        strcpy(param_2,__src);
      }
    }
  }
  CloseSocket(__fd);
  return 0;
}



// tnp::BroadcastMessage(char*, int, int, unsigned short)

void tnp::BroadcastMessage(char *param_1,int param_2,int param_3,ushort param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_58;
  ushort local_56;
  in_addr local_54 [3];
  char acStack_48 [36];
  
  iVar1 = LanIfNum();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      GetIP(iVar3,acStack_48);
      iVar2 = strcmp("127.0.0.1",acStack_48);
      iVar3 = iVar3 + 1;
      if ((iVar2 != 0) && (iVar2 = strncmp("169.254",acStack_48,7), iVar2 != 0)) {
        local_58 = 2;
        local_56 = param_4 << 8 | param_4 >> 8;
        inet_aton(acStack_48,local_54);
        local_54[0].s_addr = local_54[0].s_addr | 0xff000000;
        SendMessage(param_1,param_2,param_3,(sockaddr_in *)&local_58);
      }
    } while (iVar3 != iVar1);
  }
  return;
}



// tnp::htonAddr(sockaddr_in const*, sockaddr_in*)

void tnp::htonAddr(sockaddr_in *param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  memset(param_2,0,0x10);
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = *(ushort *)(param_1 + 2);
  *(ushort *)param_2 = *(ushort *)param_1 << 8 | *(ushort *)param_1 >> 8;
  *(ushort *)(param_2 + 2) = uVar1 << 8 | uVar1 >> 8;
  *(uint *)(param_2 + 4) =
       (uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10)) >> 8 & 0xffff00ff ^ (uVar2 >> 8 | uVar2 << 0x18);
  return;
}



// tnp::ntohAddr(sockaddr_in const*, sockaddr_in*)

void tnp::ntohAddr(sockaddr_in *param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  memset(param_2,0,0x10);
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = *(ushort *)(param_1 + 2);
  *(ushort *)param_2 = *(ushort *)param_1 << 8 | *(ushort *)param_1 >> 8;
  *(ushort *)(param_2 + 2) = uVar1 << 8 | uVar1 >> 8;
  *(uint *)(param_2 + 4) =
       (uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10)) >> 8 & 0xffff00ff ^ (uVar2 >> 8 | uVar2 << 0x18);
  return;
}



// tnp::PPPP_Proto_Recv_TCP(int, char*, unsigned short, unsigned short*, unsigned int)

undefined4
tnp::PPPP_Proto_Recv_TCP(int param_1,char *param_2,ushort param_3,ushort *param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  iVar1 = over_time_receive_tcp(param_1,param_2,(uint)param_3,param_5);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (iVar1 < 0) {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    pcVar4 = strerror(iVar1);
    PPPP_DebugTrace(4,"TNP over_time_receive_tcp(Socket:%d) Error : %d %s\n",param_1,iVar1,pcVar4);
    uVar2 = 0xfffffffe;
  }
  else {
    *param_4 = (ushort)iVar1;
    uVar2 = 0;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Read_Header(tnp::st_PPPP_SessionHeader*, unsigned char*, unsigned short*)

undefined4
tnp::PPPP_Proto_Read_Header(st_PPPP_SessionHeader *param_1,uchar *param_2,ushort *param_3)

{
  if ((param_1 != (st_PPPP_SessionHeader *)0x0) && ((byte)((char)*param_1 + 0xfU) < 2)) {
    *param_3 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
    *param_2 = (uchar)param_1[1];
    return 0;
  }
  return 0xffffffff;
}



// tnp::PPPP_Proto_Recv_ALL(int, sockaddr_in*, unsigned int, unsigned char*, unsigned short*, char*,
// unsigned short, unsigned char*)

undefined4
tnp::PPPP_Proto_Recv_ALL
          (int param_1,sockaddr_in *param_2,uint param_3,uchar *param_4,ushort *param_5,
          char *param_6,ushort param_7,uchar *param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  uint __n;
  st_PPPP_SessionHeader local_660 [1600];
  
  memset(local_660,0,0x640);
  iVar1 = over_time_receive(param_1,(char *)local_660,0x640,param_2,param_3);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (iVar1 < 0) {
    piVar4 = __errno_location();
    iVar1 = *piVar4;
    pcVar5 = strerror(iVar1);
    PPPP_DebugTrace(4,"TNP over_time_receive(Socket:%d) Error : %d\n,%s",param_1,iVar1,pcVar5);
    uVar3 = 0xfffffffe;
  }
  else {
    iVar2 = PPPP_Proto_Read_Header(local_660,param_4,param_5);
    if (iVar2 == 0) {
      *param_8 = (uchar)local_660[0];
      if (local_660[0] == (st_PPPP_SessionHeader)0xf1) {
        iVar2 = 4;
      }
      else {
        if (local_660[0] != (st_PPPP_SessionHeader)0xf2) {
          PPPP_DebugTrace(4,"invalid msg version:0x%02X");
          return 0xfffffffa;
        }
        iVar2 = 0x1c;
      }
      __n = (uint)*param_5;
      if (__n == iVar1 - iVar2) {
        if (param_7 < __n) {
          memcpy(param_6,local_660 + iVar2,(uint)param_7);
          uVar3 = 0xfffffffb;
        }
        else {
          memcpy(param_6,local_660 + iVar2,__n);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0xfffffffc;
      }
    }
    else {
      uVar3 = 0xfffffffd;
    }
  }
  return uVar3;
}



// tnp::PPPP_Proto_Verify_Header(char const*, int, tnp::st_PPPP_SessionHeaderV2*)

undefined4 tnp::PPPP_Proto_Verify_Header(char *param_1,int param_2,st_PPPP_SessionHeaderV2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = PPPP_IsEmpty(param_1);
  if (local_20 == 0) {
    local_1c = local_20;
    local_18 = local_20;
    local_14 = local_20;
    PPPP_MakeSha1_2(param_1,param_2,(char *)param_3,0x14,(char *)&local_20);
    iVar1 = memcmp(&local_20,param_3 + 0x14,8);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Write_Header(tnp::st_PPPP_SessionHeader*, unsigned char, unsigned short)

void tnp::PPPP_Proto_Write_Header(st_PPPP_SessionHeader *param_1,uchar param_2,ushort param_3)

{
  param_1[1] = (st_PPPP_SessionHeader)param_2;
  *param_1 = (st_PPPP_SessionHeader)0xf1;
  *(ushort *)(param_1 + 2) = param_3 << 8 | param_3 >> 8;
  return;
}



// tnp::PPPP_Proto_Write_HeaderV2(tnp::st_PPPP_SessionHeaderV2*, unsigned char, unsigned short,
// char, char*, unsigned int, char*)

void tnp::PPPP_Proto_Write_HeaderV2
               (st_PPPP_SessionHeaderV2 *param_1,uchar param_2,ushort param_3,char param_4,
               char *param_5,uint param_6,char *param_7)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = PPPP_IsEmpty(param_7);
  if (iVar1 != 0) {
    PPPP_DebugTrace(4,"get key error prefix=%s sn=%d",param_5,param_6);
  }
  *param_1 = (st_PPPP_SessionHeaderV2)0xf2;
  param_1[1] = (st_PPPP_SessionHeaderV2)param_2;
  param_1[4] = (st_PPPP_SessionHeaderV2)param_4;
  *(ushort *)(param_1 + 2) = param_3 << 8 | param_3 >> 8;
  strncpy((char *)(param_1 + 8),param_5,8);
  *(uint *)(param_1 + 0x10) =
       (param_6 ^ (param_6 >> 0x10 | param_6 << 0x10)) >> 8 & 0xffff00ff ^
       (param_6 >> 8 | param_6 << 0x18);
  sVar2 = strlen(param_7);
  PPPP_MakeSha1_2(param_7,sVar2,(char *)param_1,0x14,(char *)(param_1 + 0x14));
  return;
}



// tnp::PPPP_Proto_Send_SignErrorAck(int, char, sockaddr_in*, unsigned char, char, char)

int tnp::PPPP_Proto_Send_SignErrorAck
              (int param_1,char param_2,sockaddr_in *param_3,uchar param_4,char param_5,char param_6
              )

{
  int iVar1;
  in_addr __in;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  uchar local_11c;
  char local_11b;
  char local_11a;
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'\x06',4);
  local_11b = param_5;
  local_11a = param_6;
  local_11c = param_4;
  if (param_2 == '\x01') {
    iVar1 = SendMessageByTCP((char *)asStack_120,8,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar1 = SendMessage((char *)asStack_120,8,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_SESSION_RESPONSE to %s:%d\n",pcVar2,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa(__in);
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_SESSION_RESPONSE to %s:%d\n",pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Write_P2PServerReq(tnp::st_PPPP_P2PServerReq*, char*, unsigned int, char*, char,
// char*, char*)

void tnp::PPPP_Proto_Write_P2PServerReq
               (st_PPPP_P2PServerReq *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               char *param_6,char *param_7)

{
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  param_1[0x14] = (st_PPPP_P2PServerReq)param_5;
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  memcpy(param_1 + 0x18,param_6,0x20);
  memcpy(param_1 + 0x38,param_7,0x20);
  return;
}



// tnp::PPPP_Proto_Send_P2PServerReq(int, char, sockaddr_in*, char*, unsigned int, char*, char,
// char*)

int tnp::PPPP_Proto_Send_P2PServerReq
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,char param_7,char *param_8)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  in_addr __in;
  char *pcVar4;
  char acStack_1c8 [32];
  char acStack_1a8 [64];
  char acStack_168 [64];
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_P2PServerReq asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,'\x04',0x58);
  memset(acStack_1a8,0,0x40);
  memset(acStack_168,0,0x40);
  PPPP_MakeNonce(acStack_1c8,0x20);
  snprintf(acStack_1a8,0x40,"%.*s:%s-%06d-%s",0x20,acStack_1c8,param_4,param_5,param_6);
  sVar1 = strlen(param_8);
  sVar2 = strlen(acStack_1a8);
  PPPP_MakeSha1(param_8,sVar1,acStack_1a8,sVar2,acStack_168);
  memset(asStack_124,0,0x58);
  PPPP_Proto_Write_P2PServerReq(asStack_124,param_4,param_5,param_6,param_7,acStack_1c8,acStack_168)
  ;
  if (param_2 == '\0') {
    iVar3 = SendMessage((char *)asStack_128,0x5c,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar3 = SendMessageByTCP((char *)asStack_128,0x5c,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar3) {
    pcVar4 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_P2P_SERVER_REQ to %s:%d\n",pcVar4,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
    return iVar3;
  }
  pcVar4 = inet_ntoa(__in);
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_P2P_SERVER_REQ to %s:%d\n",pcVar4,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar3;
}



// tnp::PPPP_Proto_Read_ServerConfig(tnp::st_PPPP_ServerConfig*, char*, unsigned int*, char*, char*,
// unsigned int*, char*)

undefined4
tnp::PPPP_Proto_Read_ServerConfig
          (st_PPPP_ServerConfig *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,
          uint *param_6,char *param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char local_30 [20];
  
  uVar3 = *(uint *)(param_1 + 0x18);
  *param_6 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar3 >> 8 | uVar3 << 0x18);
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x1c,local_30,0x10,param_7);
  iVar1 = memcmp(local_30,param_1 + 0x1c,0xf);
  if (iVar1 == 0) {
    strncpy(param_2,(char *)param_1,7);
    strncpy(param_4,(char *)(param_1 + 0xc),7);
    uVar3 = *(uint *)(param_1 + 8);
    *param_3 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
               (uVar3 >> 8 | uVar3 << 0x18);
    *param_5 = (char)param_1[0x14];
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Write_ServerConfigReq(tnp::st_PPPP_ServerConfigReq*, char*, unsigned int, char*,
// unsigned int, char*)

void tnp::PPPP_Proto_Write_ServerConfigReq
               (st_PPPP_ServerConfigReq *param_1,char *param_2,uint param_3,char *param_4,
               uint param_5,char *param_6)

{
  uint uVar1;
  
  memset(param_1,0,0x28);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  uVar1 = getCurSecond(param_5,600);
  *(uint *)(param_1 + 0x14) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  PPPP_MakeSha1_EX((char *)param_1,0x18,(char *)(param_1 + 0x18),0x10,param_6);
  return;
}



// tnp::PPPP_Proto_Send_ServerConfigReq(int, sockaddr_in*, char*, unsigned int, char*, unsigned int,
// char*)

int tnp::PPPP_Proto_Send_ServerConfigReq
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              uint param_6,char *param_7)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_ServerConfigReq asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0xb0,0x28);
  PPPP_Proto_Write_ServerConfigReq(asStack_124,param_3,param_4,param_5,param_6,param_7);
  iVar1 = SendMessage((char *)asStack_128,0x2c,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_SERVER_CONFIG_REQ to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_SERVER_CONFIG_REQ to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_Hello(int, sockaddr_in*)

int tnp::PPPP_Proto_Send_Hello(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_110 [256];
  
  memset(asStack_110,0,0x100);
  PPPP_Proto_Write_Header(asStack_110,'\0',0);
  iVar1 = SendMessage((char *)asStack_110,4,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_HELLO to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_HELLO to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_HelloWithBody(int, sockaddr_in*, char*, unsigned int, char*, char)

int tnp::PPPP_Proto_Send_HelloWithBody
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char param_6)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  char acStack_11c [8];
  uint local_114;
  char acStack_110 [8];
  char local_108;
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'\0',0x18);
  strncpy(acStack_11c,param_3,7);
  local_114 = (param_4 ^ (param_4 >> 0x10 | param_4 << 0x10)) >> 8 & 0xffff00ff ^
              (param_4 >> 8 | param_4 << 0x18);
  strncpy(acStack_110,param_5,7);
  local_108 = param_6;
  iVar1 = SendMessage((char *)asStack_120,0x1c,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_HELLO to %s:%d ID:%s-%06d-%s CorD:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8),
                    param_3,param_4,param_5,(uint)(byte)param_6);
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_HELLO to %s:%d ID:%s-%06d-%s CorD:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8),
                  param_3,param_4,param_5,(uint)(byte)param_6);
  return iVar1;
}



// tnp::PPPP_Proto_Send_HelloAck(int, sockaddr_in*, sockaddr_in*)

int tnp::PPPP_Proto_Send_HelloAck(int param_1,sockaddr_in *param_2,sockaddr_in *param_3)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  sockaddr_in asStack_114 [256];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,'\x01',0x10);
  htonAddr(param_3,asStack_114);
  iVar1 = SendMessage((char *)asStack_118,0x14,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_HELLO_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_HELLO_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_DevLgn(tnp::st_PPPP_DevLgn*, char*, unsigned int*, char*, char*, unsigned
// char*, sockaddr_in*)

void tnp::PPPP_Proto_Read_DevLgn
               (st_PPPP_DevLgn *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,
               uchar *param_6,sockaddr_in *param_7)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  *param_6 = (uchar)param_1[0x15];
  *(st_PPPP_DevLgn *)(param_6 + 1) = param_1[0x16];
  *(st_PPPP_DevLgn *)(param_6 + 2) = param_1[0x17];
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  *param_5 = (char)param_1[0x14];
  ntohAddr((sockaddr_in *)(param_1 + 0x18),param_7);
  return;
}



// tnp::PPPP_Proto_Write_DevLgn(tnp::st_PPPP_DevLgn*, char*, unsigned int, char*, char,
// sockaddr_in*)

void tnp::PPPP_Proto_Write_DevLgn
               (st_PPPP_DevLgn *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               sockaddr_in *param_6)

{
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  memcpy(param_1 + 0x15,&gAPIVersion,3);
  param_1[0x14] = (st_PPPP_DevLgn)param_5;
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  htonAddr(param_6,(sockaddr_in *)(param_1 + 0x18));
  return;
}



// tnp::PPPP_Proto_Send_DevLgn_EX(int, char, sockaddr_in*, char*, unsigned int, char*, char,
// sockaddr_in*, char*, char)

int tnp::PPPP_Proto_Send_DevLgn_EX
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,char param_7,sockaddr_in *param_8,char *param_9,char param_10)

{
  ushort uVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  char acStack_1a8 [64];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_DevLgn asStack_124 [40];
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  
  uVar8 = (uint)(byte)param_7;
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,'\x14',0x68);
  memset(asStack_124,0,0x68);
  PPPP_Proto_Write_DevLgn(asStack_124,param_4,param_5,param_6,param_7,param_8);
  memset(acStack_1a8,0,0x40);
  memset(&local_168,0,0x40);
  PPPP_MakeNonce((char *)&local_1c8,0x20);
  uStack_1ac = CONCAT13(param_10,(undefined3)uStack_1ac);
  puVar9 = &local_fc;
  local_fc = local_1c8;
  uStack_f8 = uStack_1c4;
  uStack_f4 = uStack_1c0;
  uStack_f0 = uStack_1bc;
  local_ec = local_1b8;
  uStack_e8 = uStack_1b4;
  uStack_e4 = uStack_1b0;
  uStack_e0 = uStack_1ac;
  snprintf(acStack_1a8,0x40,"%.*s:%s-%06d-%s",0x20,&local_1c8,param_4,param_5,param_6);
  sVar2 = strlen(param_9);
  sVar3 = strlen(acStack_1a8);
  puVar10 = &local_dc;
  PPPP_MakeSha1(param_9,sVar2,acStack_1a8,sVar3,(char *)&local_168);
  local_dc = local_168;
  uStack_d8 = uStack_164;
  uStack_d4 = uStack_160;
  uStack_d0 = uStack_15c;
  local_cc = local_158;
  uStack_c8 = uStack_154;
  uStack_c4 = uStack_150;
  uStack_c0 = uStack_14c;
  if (param_2 == '\0') {
    iVar4 = SendMessage((char *)asStack_128,0x6c,param_1,param_3);
  }
  else {
    iVar4 = SendMessageByTCP((char *)asStack_128,0x6c,param_1);
  }
  pcVar5 = inet_ntoa((in_addr)*(in_addr_t *)(param_8 + 4));
  uVar11 = (*(ushort *)(param_8 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_8 + 2) >> 8);
  PPPP_DebugTrace(4,
                  "Send st_PPPP_DevLgn_EX length:%d,Prefix:%s,SerialNumber:%d,CheckCode:%s,NONCE:%.32s,pDevLgnEX->Signature:%.32s,NATType:%d,localAddr:%s:%d\n"
                  ,0x6c,param_4,param_5,param_6,puVar9,puVar10,uVar8,pcVar5,uVar11);
  if (iVar4 < 0) {
    pcVar6 = inet_ntoa((in_addr)*(in_addr_t *)(param_3 + 4));
    uVar1 = *(ushort *)(param_3 + 2);
    pcVar7 = "[Failed!!] Send MSG_DEV_LGN_SIGN to %s:%d\n";
  }
  else {
    pcVar6 = inet_ntoa((in_addr)*(in_addr_t *)(param_3 + 4));
    uVar1 = *(ushort *)(param_3 + 2);
    pcVar7 = "Send MSG_DEV_LGN_SIGN to %s:%d\n";
  }
  PPPP_DebugTrace(4,pcVar7,pcVar6,(uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8),param_5,param_6,puVar9,
                  puVar10,uVar8,pcVar5,uVar11);
  pcVar5 = inet_ntoa((in_addr)*(in_addr_t *)(param_3 + 4));
  PPPP_DebugTrace(0x40000,pcVar7,pcVar5,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar4;
}



// tnp::PPPP_Proto_Send_DevLgn_Proxy(int, char, sockaddr_in*, char*, unsigned int, char*, char,
// sockaddr_in*, char*, char, char*, unsigned int, char*, char*, unsigned char)

int tnp::PPPP_Proto_Send_DevLgn_Proxy
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,char param_7,sockaddr_in *param_8,char *param_9,char param_10,
              char *param_11,uint param_12,char *param_13,char *param_14,uchar param_15)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  ushort uVar6;
  size_t __n;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int local_338;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  char acStack_2c8 [160];
  st_PPPP_SessionHeader asStack_228 [4];
  st_PPPP_DevLgn asStack_224 [40];
  char acStack_1fc [8];
  uint local_1f4;
  char acStack_1f0 [8];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8;
  undefined1 auStack_1a4 [384];
  
  uVar8 = (uint)(byte)param_7;
  __n = (size_t)param_15;
  memset(asStack_228,0,0x200);
  if (__n == 0 || param_14 == (char *)0x0) {
    __n = 0;
    local_338 = 0x84;
    uVar6 = 0x80;
  }
  else {
    local_338 = __n + 0x84;
    uVar6 = param_15 + 0x80;
  }
  PPPP_Proto_Write_Header(asStack_228,'\x10',uVar6);
  memset(asStack_224,0,0x80);
  PPPP_Proto_Write_DevLgn(asStack_224,param_4,param_5,param_6,param_7,param_8);
  strncpy(acStack_1fc,param_11,7);
  strncpy(acStack_1f0,param_13,7);
  local_1f4 = (param_12 ^ (param_12 >> 0x10 | param_12 << 0x10)) >> 8 & 0xffff00ff ^
              (param_12 >> 8 | param_12 << 0x18);
  memset(acStack_2c8,0,0xa0);
  memset(&local_308,0,0x40);
  PPPP_MakeNonce((char *)&local_328,0x20);
  uStack_30c = CONCAT13(param_10,(undefined3)uStack_30c);
  puVar9 = &local_1e8;
  local_1e8 = local_328;
  uStack_1e4 = uStack_324;
  uStack_1e0 = uStack_320;
  uStack_1dc = uStack_31c;
  local_1d8 = local_318;
  uStack_1d4 = uStack_314;
  uStack_1d0 = uStack_310;
  uStack_1cc = uStack_30c;
  snprintf(acStack_2c8,0xa0,"%.*s:%s-%06d-%s:%s-%06d-%s",0x20,&local_328,param_4,param_5,param_6,
           param_11,param_12,param_13);
  sVar1 = strlen(param_9);
  sVar2 = strlen(acStack_2c8);
  puVar10 = &local_1c8;
  PPPP_MakeSha1(param_9,sVar1,acStack_2c8,sVar2,(char *)&local_308);
  local_1c8 = local_308;
  uStack_1c4 = uStack_304;
  uStack_1c0 = uStack_300;
  uStack_1bc = uStack_2fc;
  local_1b8 = local_2f8;
  uStack_1b4 = uStack_2f4;
  uStack_1b0 = uStack_2f0;
  uStack_1ac = uStack_2ec;
  local_1a8 = (undefined1)__n;
  if (__n != 0) {
    memcpy(auStack_1a4,param_14,__n);
  }
  if (param_2 == '\0') {
    iVar3 = SendMessage((char *)asStack_228,local_338,param_1,param_3);
  }
  else {
    iVar3 = SendMessageByTCP((char *)asStack_228,local_338,param_1);
  }
  pcVar4 = inet_ntoa((in_addr)*(in_addr_t *)(param_8 + 4));
  uVar11 = (*(ushort *)(param_8 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_8 + 2) >> 8);
  PPPP_DebugTrace(4,
                  "Send st_PPPP_DevLgn_Proxy length:%d,Prefix:%s,SerialNumber:%d,CheckCode:%s,ProxyPrefix:%s,ProxySerialNumber:%d,ProxyCheckCode:%s,TokenLen:%d,NONCE:%.32s,Signature:%.32s,NATType:%d,localAddr:%s:%d\n"
                  ,0x84,param_4,param_5,param_6,param_11,param_12,param_13,__n,puVar9,puVar10,uVar8,
                  pcVar4,uVar11);
  if (iVar3 < 0) {
    pcVar5 = inet_ntoa((in_addr)*(in_addr_t *)(param_3 + 4));
    uVar6 = *(ushort *)(param_3 + 2);
    pcVar7 = "[Failed!!] Send MSG_DEV_LGN_PROXY to %s:%d\n";
  }
  else {
    pcVar5 = inet_ntoa((in_addr)*(in_addr_t *)(param_3 + 4));
    uVar6 = *(ushort *)(param_3 + 2);
    pcVar7 = "Send MSG_DEV_LGN_PROXY to %s:%d\n";
  }
  PPPP_DebugTrace(4,pcVar7,pcVar5,(uVar6 & 0xff) << 8 | (uint)(uVar6 >> 8),param_5,param_6,param_11,
                  param_12,param_13,__n,puVar9,puVar10,uVar8,pcVar4,uVar11);
  pcVar4 = inet_ntoa((in_addr)*(in_addr_t *)(param_3 + 4));
  PPPP_DebugTrace(0x40000,pcVar7,pcVar4,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar3;
}



// tnp::PPPP_Proto_Read_LanSearch(tnp::st_PPPP_LanSearch*, char*, unsigned int*, char*, unsigned
// char*)

void tnp::PPPP_Proto_Read_LanSearch
               (st_PPPP_LanSearch *param_1,char *param_2,uint *param_3,char *param_4,uchar *param_5)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  *param_5 = (uchar)param_1[0x14];
  *(st_PPPP_LanSearch *)(param_5 + 1) = param_1[0x15];
  *(st_PPPP_LanSearch *)(param_5 + 2) = param_1[0x16];
  return;
}



// tnp::PPPP_Proto_Write_LanSearch(tnp::st_PPPP_LanSearch*, char*, unsigned int, char*)

void tnp::PPPP_Proto_Write_LanSearch
               (st_PPPP_LanSearch *param_1,char *param_2,uint param_3,char *param_4)

{
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  memcpy(param_1 + 0x14,&gAPIVersion,3);
  return;
}



// tnp::PPPP_Proto_Send_LanSearch(int, unsigned short, char*, unsigned int, char*)

void tnp::PPPP_Proto_Send_LanSearch
               (int param_1,ushort param_2,char *param_3,uint param_4,char *param_5)

{
  st_PPPP_SessionHeader asStack_120 [4];
  st_PPPP_LanSearch asStack_11c [256];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'0',0x18);
  PPPP_Proto_Write_LanSearch(asStack_11c,param_3,param_4,param_5);
  PPPP_DebugTrace(4,"Broadcast MSG_LAN_SEARCH to Port: %d\n",(uint)param_2);
  BroadcastMessage((char *)asStack_120,0x1c,param_1,param_2);
  return;
}



// tnp::PPPP_Proto_Read_P2PReq(tnp::st_PPPP_P2PReq*, char*, unsigned int*, char*, sockaddr_in*)

void tnp::PPPP_Proto_Read_P2PReq
               (st_PPPP_P2PReq *param_1,char *param_2,uint *param_3,char *param_4,
               sockaddr_in *param_5)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  ntohAddr((sockaddr_in *)(param_1 + 0x14),param_5);
  return;
}



// tnp::PPPP_Proto_Write_P2PReq(tnp::st_PPPP_P2PReq*, char*, unsigned int, char*, sockaddr_in*)

void tnp::PPPP_Proto_Write_P2PReq
               (st_PPPP_P2PReq *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5)

{
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  htonAddr(param_5,(sockaddr_in *)(param_1 + 0x14));
  return;
}



// tnp::PPPP_Proto_Write_P2PReq_EX(tnp::st_PPPP_P2PReq_EX*, char*, unsigned int, char*,
// sockaddr_in*, char*)

void tnp::PPPP_Proto_Write_P2PReq_EX
               (st_PPPP_P2PReq_EX *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5,char *param_6)

{
  uint uVar1;
  
  memset(param_1,0,0x3c);
  PPPP_Proto_Write_P2PReq((st_PPPP_P2PReq *)param_1,param_2,param_3,param_4,param_5);
  memcpy(param_1 + 0x24,&gAPIVersion,3);
  uVar1 = getCurSecond(0,0);
  *(uint *)(param_1 + 0x28) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  PPPP_MakeSha1_EX((char *)param_1,0x2c,(char *)(param_1 + 0x2c),0x10,param_6);
  return;
}



// tnp::PPPP_Proto_Send_P2PReq(int, sockaddr_in*, char*, unsigned int, char*, sockaddr_in*)

int tnp::PPPP_Proto_Send_P2PReq
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              sockaddr_in *param_6)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,' ',0x24);
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  PPPP_Proto_Write_P2PReq((st_PPPP_P2PReq *)&local_11c,param_3,param_4,param_5,param_6);
  iVar1 = SendMessage((char *)asStack_120,0x28,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_P2P_REQ to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_P2P_REQ to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_P2PReq_EX(int, sockaddr_in*, char*, unsigned int, char*, sockaddr_in*,
// char*)

int tnp::PPPP_Proto_Send_P2PReq_EX
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              sockaddr_in *param_6,char *param_7)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_P2PReq_EX asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,' ',0x24);
  PPPP_Proto_Write_P2PReq_EX(asStack_124,param_3,param_4,param_5,param_6,param_7);
  iVar1 = SendMessage((char *)asStack_128,0x28,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_P2P_REQ to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_P2P_REQ to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_P2PReqAck(int, sockaddr_in*, char)

int tnp::PPPP_Proto_Send_P2PReqAck(int param_1,sockaddr_in *param_2,char param_3)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  uint local_114;
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,'!',4);
  local_114 = (uint)(byte)param_3;
  iVar1 = SendMessage((char *)asStack_118,8,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_P2P_REQ_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_P2P_REQ_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_PunchTo(tnp::st_PPPP_PunchTo*, sockaddr_in*)

void tnp::PPPP_Proto_Read_PunchTo(st_PPPP_PunchTo *param_1,sockaddr_in *param_2)

{
  ntohAddr((sockaddr_in *)param_1,param_2);
  return;
}



// tnp::PPPP_Proto_Read_PunchTo_EX(tnp::st_PPPP_PunchTo_EX*, sockaddr_in*, unsigned char*, unsigned
// char*, unsigned int*, char*)

undefined4
tnp::PPPP_Proto_Read_PunchTo_EX
          (st_PPPP_PunchTo_EX *param_1,sockaddr_in *param_2,uchar *param_3,uchar *param_4,
          uint *param_5,char *param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char local_30 [20];
  
  uVar3 = *(uint *)(param_1 + 0x14);
  *param_5 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar3 >> 8 | uVar3 << 0x18);
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x18,local_30,0x10,param_6);
  iVar1 = memcmp(local_30,param_1 + 0x18,0xf);
  if (iVar1 == 0) {
    PPPP_Proto_Read_PunchTo((st_PPPP_PunchTo *)param_1,param_2);
    *param_3 = (uchar)param_1[0x13];
    *param_4 = (uchar)param_1[0x10];
    *(st_PPPP_PunchTo_EX *)(param_4 + 1) = param_1[0x11];
    *(st_PPPP_PunchTo_EX *)(param_4 + 2) = param_1[0x12];
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Send_PunchTo(int, sockaddr_in*, sockaddr_in*)

int tnp::PPPP_Proto_Send_PunchTo(int param_1,sockaddr_in *param_2,sockaddr_in *param_3)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  sockaddr_in asStack_114 [256];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,'@',0x10);
  htonAddr(param_3,asStack_114);
  iVar1 = SendMessage((char *)asStack_118,0x14,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_PUNCH_TO to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_PUNCH_TO to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_PunchPkt(tnp::st_PPPP_PunchPkt*, char*, unsigned int*, char*)

void tnp::PPPP_Proto_Read_PunchPkt
               (st_PPPP_PunchPkt *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  return;
}



// tnp::PPPP_Proto_Read_PunchPkt_EX(tnp::st_PPPP_PunchPkt_EX*, char*, unsigned int*, char*, unsigned
// char*, unsigned int*, char*)

undefined4
tnp::PPPP_Proto_Read_PunchPkt_EX
          (st_PPPP_PunchPkt_EX *param_1,char *param_2,uint *param_3,char *param_4,uchar *param_5,
          uint *param_6,char *param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char local_30 [20];
  
  uVar3 = *(uint *)(param_1 + 0x18);
  *param_6 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar3 >> 8 | uVar3 << 0x18);
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x1c,local_30,0x10,param_7);
  iVar1 = memcmp(local_30,param_1 + 0x1c,0xf);
  if (iVar1 == 0) {
    PPPP_Proto_Read_PunchPkt((st_PPPP_PunchPkt *)param_1,param_2,param_3,param_4);
    *param_5 = (uchar)param_1[0x14];
    *(st_PPPP_PunchPkt_EX *)(param_5 + 1) = param_1[0x15];
    *(st_PPPP_PunchPkt_EX *)(param_5 + 2) = param_1[0x16];
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Write_PunchPkt(tnp::st_PPPP_PunchPkt*, char*, unsigned int, char*)

void tnp::PPPP_Proto_Write_PunchPkt
               (st_PPPP_PunchPkt *param_1,char *param_2,uint param_3,char *param_4)

{
  memset(param_1,0,0x14);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  return;
}



// tnp::PPPP_Proto_Write_PunchPkt_EX(tnp::st_PPPP_PunchPkt_EX*, char*, unsigned int, char*, unsigned
// int, char*)

void tnp::PPPP_Proto_Write_PunchPkt_EX
               (st_PPPP_PunchPkt_EX *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
               char *param_6)

{
  uint uVar1;
  
  memset(param_1,0,0x2c);
  PPPP_Proto_Write_PunchPkt((st_PPPP_PunchPkt *)param_1,param_2,param_3,param_4);
  memcpy(param_1 + 0x14,&gAPIVersion,3);
  uVar1 = getCurSecond(param_5,600);
  *(uint *)(param_1 + 0x18) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  PPPP_MakeSha1_EX((char *)param_1,0x1c,(char *)(param_1 + 0x1c),0x10,param_6);
  return;
}



// tnp::PPPP_Proto_Send_PunchPkt(int, sockaddr_in*, char*, unsigned int, char*)

int tnp::PPPP_Proto_Send_PunchPkt
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  st_PPPP_PunchPkt asStack_11c [256];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'A',0x14);
  PPPP_Proto_Write_PunchPkt(asStack_11c,param_3,param_4,param_5);
  iVar1 = SendMessage((char *)asStack_120,0x18,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_PUNCH_PKT to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_PUNCH_PKT to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_PunchPkt_EX(int, sockaddr_in*, char*, unsigned int, char*, unsigned int,
// char*)

int tnp::PPPP_Proto_Send_PunchPkt_EX
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              uint param_6,char *param_7)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_PunchPkt_EX asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,'A',0x2c);
  PPPP_Proto_Write_PunchPkt_EX(asStack_124,param_3,param_4,param_5,param_6,param_7);
  iVar1 = SendMessage((char *)asStack_128,0x30,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_PUNCH_PKT_EX to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_PUNCH_PKT_EX to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_P2PRdy(tnp::st_PPPP_P2PRdy*, char*, unsigned int*, char*)

void tnp::PPPP_Proto_Read_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  return;
}



// tnp::PPPP_Proto_Read_P2PRdy_EX(tnp::st_PPPP_P2PRdy_EX*, char*, unsigned int*, char*, unsigned
// int*, char*)

undefined4
tnp::PPPP_Proto_Read_P2PRdy_EX
          (st_PPPP_P2PRdy_EX *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,
          char *param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char local_30 [20];
  
  uVar3 = *(uint *)(param_1 + 0x14);
  *param_5 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar3 >> 8 | uVar3 << 0x18);
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x18,local_30,0x10,param_6);
  iVar1 = memcmp(local_30,param_1 + 0x18,0xf);
  if (iVar1 == 0) {
    PPPP_Proto_Read_P2PRdy((st_PPPP_P2PRdy *)param_1,param_2,param_3,param_4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Write_P2PRdy(tnp::st_PPPP_P2PRdy*, char*, unsigned int, char*)

void tnp::PPPP_Proto_Write_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint param_3,char *param_4)

{
  memset(param_1,0,0x14);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  return;
}



// tnp::PPPP_Proto_Write_P2PRdy_EX(tnp::st_PPPP_P2PRdy_EX*, char*, unsigned int, char*, unsigned
// int, char*)

void tnp::PPPP_Proto_Write_P2PRdy_EX
               (st_PPPP_P2PRdy_EX *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
               char *param_6)

{
  uint uVar1;
  
  memset(param_1,0,0x28);
  PPPP_Proto_Write_P2PRdy((st_PPPP_P2PRdy *)param_1,param_2,param_3,param_4);
  uVar1 = getCurSecond(param_5,600);
  *(uint *)(param_1 + 0x14) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  PPPP_MakeSha1_EX((char *)param_1,0x18,(char *)(param_1 + 0x18),0x10,param_6);
  return;
}



// tnp::PPPP_Proto_Send_P2PRdy(int, sockaddr_in*, char*, unsigned int, char*)

int tnp::PPPP_Proto_Send_P2PRdy
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  st_PPPP_P2PRdy asStack_11c [256];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'B',0x14);
  PPPP_Proto_Write_P2PRdy(asStack_11c,param_3,param_4,param_5);
  iVar1 = SendMessage((char *)asStack_120,0x18,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_P2P_RDY to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_P2P_RDY to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_P2PRdy_EX(int, sockaddr_in*, char*, unsigned int, char*, unsigned int,
// char*)

int tnp::PPPP_Proto_Send_P2PRdy_EX
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              uint param_6,char *param_7)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_P2PRdy_EX asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,'B',0x28);
  PPPP_Proto_Write_P2PRdy_EX(asStack_124,param_3,param_4,param_5,param_6,param_7);
  iVar1 = SendMessage((char *)asStack_128,0x2c,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_P2P_RDY_EX to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_P2P_RDY_EX to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_P2PRdy_Ack(int, sockaddr_in*)

int tnp::PPPP_Proto_Send_P2PRdy_Ack(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_110 [256];
  
  memset(asStack_110,0,0x100);
  PPPP_Proto_Write_Header(asStack_110,'C',0);
  iVar1 = SendMessage((char *)asStack_110,4,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_P2P_RDY_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_P2P_RDY_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Write_RlyServerReq(tnp::st_PPPP_RlyServerReq*, char*, unsigned int, char*)

void tnp::PPPP_Proto_Write_RlyServerReq
               (st_PPPP_RlyServerReq *param_1,char *param_2,uint param_3,char *param_4)

{
  memset(param_1,0,0x14);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  return;
}



// tnp::PPPP_Proto_Send_RlyServerReq(int, char, sockaddr_in*, char*, unsigned int, char*)

int tnp::PPPP_Proto_Send_RlyServerReq
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6)

{
  int iVar1;
  in_addr __in;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  st_PPPP_RlyServerReq asStack_11c [252];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,0x87,0x14);
  PPPP_Proto_Write_RlyServerReq(asStack_11c,param_4,param_5,param_6);
  if (param_2 == '\0') {
    iVar1 = SendMessage((char *)asStack_120,0x18,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_120,0x18,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_RLY_SERVER_REQ %s:%d\n",pcVar2,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa(__in);
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_SERVER_REQ to %s:%d\n",pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_RlyHello(int, sockaddr_in*)

int tnp::PPPP_Proto_Send_RlyHello(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_110 [256];
  
  memset(asStack_110,0,0x100);
  PPPP_Proto_Write_Header(asStack_110,'p',0);
  iVar1 = SendMessage((char *)asStack_110,4,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_HELLO to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_HELLO to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_RlyHelloAck(int, sockaddr_in*)

int tnp::PPPP_Proto_Send_RlyHelloAck(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_110 [256];
  
  memset(asStack_110,0,0x100);
  PPPP_Proto_Write_Header(asStack_110,'q',0);
  iVar1 = SendMessage((char *)asStack_110,4,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_HELLO_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_HELLO_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_RlyPort_EX(tnp::st_PPPP_RlyPort_EX*, char*, unsigned int*, char*, char*,
// char*)

void tnp::PPPP_Proto_Read_RlyPort_EX
               (st_PPPP_RlyPort_EX *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,
               char *param_6)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  memcpy(param_5,param_1 + 0x14,0x20);
  memcpy(param_6,param_1 + 0x34,0x20);
  return;
}



// tnp::PPPP_Proto_Write_RlyPort_EX(tnp::st_PPPP_RlyPort_EX*, char*, unsigned int, char*, char*,
// char*)

void tnp::PPPP_Proto_Write_RlyPort_EX
               (st_PPPP_RlyPort_EX *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               char *param_6)

{
  memset(param_1,0,0x54);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  memcpy(param_1 + 0x14,param_5,0x20);
  memcpy(param_1 + 0x34,param_6,0x20);
  return;
}



// tnp::PPPP_Proto_Send_RlyPort_EX(int, sockaddr_in*, char*, unsigned int, char*, char*)

int tnp::PPPP_Proto_Send_RlyPort_EX
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char *param_6)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  char acStack_1c8 [32];
  char acStack_1a8 [64];
  char acStack_168 [64];
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_RlyPort_EX asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,'t',0x54);
  memset(acStack_1a8,0,0x40);
  memset(acStack_168,0,0x40);
  PPPP_MakeNonce(acStack_1c8,0x20);
  snprintf(acStack_1a8,0x40,"%.*s:%s-%06d-%s",0x20,acStack_1c8,param_3,param_4,param_5);
  sVar1 = strlen(param_6);
  sVar2 = strlen(acStack_1a8);
  PPPP_MakeSha1(param_6,sVar1,acStack_1a8,sVar2,acStack_168);
  memset(asStack_124,0,0x54);
  PPPP_Proto_Write_RlyPort_EX(asStack_124,param_3,param_4,param_5,acStack_1c8,acStack_168);
  iVar3 = SendMessage((char *)asStack_128,0x58,param_1,param_2);
  if (-1 < iVar3) {
    pcVar4 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_PORT_EX to %s:%d\n",pcVar4,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar3;
  }
  pcVar4 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_PORT_EX to %s:%d\n",pcVar4,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar3;
}



// tnp::PPPP_Proto_Read_RlyPortAck(tnp::st_PPPP_RlyPortAck*, unsigned int*, unsigned short*, char*)

void tnp::PPPP_Proto_Read_RlyPortAck
               (st_PPPP_RlyPortAck *param_1,uint *param_2,ushort *param_3,char *param_4)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)param_1;
  uVar1 = *(ushort *)(param_1 + 4);
  *param_2 = (uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar2 >> 8 | uVar2 << 0x18);
  *param_3 = uVar1 << 8 | uVar1 >> 8;
  *param_4 = (char)param_1[6];
  return;
}



// tnp::PPPP_Proto_Write_RlyPortAck(tnp::st_PPPP_RlyPortAck*, unsigned int, unsigned short, char)

void tnp::PPPP_Proto_Write_RlyPortAck
               (st_PPPP_RlyPortAck *param_1,uint param_2,ushort param_3,char param_4)

{
  param_1[3] = (st_PPPP_RlyPortAck)0x0;
  param_1[4] = (st_PPPP_RlyPortAck)0x0;
  param_1[5] = (st_PPPP_RlyPortAck)0x0;
  param_1[6] = (st_PPPP_RlyPortAck)0x0;
  param_1[7] = (st_PPPP_RlyPortAck)0x0;
  param_1[6] = (st_PPPP_RlyPortAck)param_4;
  *(uint *)param_1 =
       (param_2 ^ (param_2 >> 0x10 | param_2 << 0x10)) >> 8 & 0xffff00ff ^
       (param_2 >> 8 | param_2 << 0x18);
  *(ushort *)(param_1 + 4) = param_3 << 8 | param_3 >> 8;
  return;
}



// tnp::PPPP_Proto_Send_RlyPortAck(int, sockaddr_in*, unsigned int, unsigned short, char)

int tnp::PPPP_Proto_Send_RlyPortAck
              (int param_1,sockaddr_in *param_2,uint param_3,ushort param_4,char param_5)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  st_PPPP_RlyPortAck asStack_11c [256];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'u',8);
  PPPP_Proto_Write_RlyPortAck(asStack_11c,param_3,param_4,param_5);
  iVar1 = SendMessage((char *)asStack_120,0xc,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_PORT_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_PORT_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_RlyReq(tnp::st_PPPP_RlyReq*, char*, unsigned int*, char*, sockaddr_in*,
// unsigned int*)

void tnp::PPPP_Proto_Read_RlyReq
               (st_PPPP_RlyReq *param_1,char *param_2,uint *param_3,char *param_4,
               sockaddr_in *param_5,uint *param_6)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  uVar1 = *(uint *)(param_1 + 0x24);
  *param_6 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  ntohAddr((sockaddr_in *)(param_1 + 0x14),param_5);
  return;
}



// tnp::PPPP_Proto_Write_RlyReq(tnp::st_PPPP_RlyReq*, char*, unsigned int, char*, sockaddr_in*,
// unsigned int)

void tnp::PPPP_Proto_Write_RlyReq
               (st_PPPP_RlyReq *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5,uint param_6)

{
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  *(uint *)(param_1 + 0x24) =
       (param_6 ^ (param_6 >> 0x10 | param_6 << 0x10)) >> 8 & 0xffff00ff ^
       (param_6 >> 8 | param_6 << 0x18);
  htonAddr(param_5,(sockaddr_in *)(param_1 + 0x14));
  return;
}



// tnp::PPPP_Proto_Send_RlyReq(int, sockaddr_in*, char*, unsigned int, char*, sockaddr_in*, unsigned
// int)

int tnp::PPPP_Proto_Send_RlyReq
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              sockaddr_in *param_6,uint param_7)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0x80,0x28);
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  PPPP_Proto_Write_RlyReq((st_PPPP_RlyReq *)&local_124,param_3,param_4,param_5,param_6,param_7);
  iVar1 = SendMessage((char *)asStack_128,0x2c,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_REQ to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_REQ to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_RlyReqAck(int, sockaddr_in*, char)

int tnp::PPPP_Proto_Send_RlyReqAck(int param_1,sockaddr_in *param_2,char param_3)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  uint local_114;
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,0x81,4);
  local_114 = (uint)(byte)param_3;
  iVar1 = SendMessage((char *)asStack_118,8,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_REQ_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_REQ_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_RlyTo(tnp::st_PPPP_RlyTo*, sockaddr_in*, unsigned int*)

void tnp::PPPP_Proto_Read_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  ntohAddr((sockaddr_in *)param_1,param_2);
  return;
}



// tnp::PPPP_Proto_Read_RlyTo_EX(tnp::st_PPPP_RlyTo_EX*, sockaddr_in*, unsigned int*, char*)

undefined4
tnp::PPPP_Proto_Read_RlyTo_EX
          (st_PPPP_RlyTo_EX *param_1,sockaddr_in *param_2,uint *param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char local_28 [20];
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x14,local_28,0x10,param_4);
  iVar1 = memcmp(local_28,param_1 + 0x14,0xf);
  if (iVar1 == 0) {
    PPPP_Proto_Read_RlyTo((st_PPPP_RlyTo *)param_1,param_2,param_3);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Write_RlyTo(tnp::st_PPPP_RlyTo*, sockaddr_in*, unsigned int)

void tnp::PPPP_Proto_Write_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint param_3)

{
  *(uint *)(param_1 + 0x10) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  htonAddr(param_2,(sockaddr_in *)param_1);
  return;
}



// tnp::PPPP_Proto_Send_RlyTo(int, sockaddr_in*, sockaddr_in*, unsigned int)

int tnp::PPPP_Proto_Send_RlyTo(int param_1,sockaddr_in *param_2,sockaddr_in *param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  st_PPPP_RlyTo asStack_114 [252];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,0x82,0x14);
  PPPP_Proto_Write_RlyTo(asStack_114,param_3,param_4);
  iVar1 = SendMessage((char *)asStack_118,0x18,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_TO to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_TO to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Write_RlyToAck(tnp::st_PPPP_RlyToAck*, char*, unsigned int, char*, char, unsigned
// int, char)

void tnp::PPPP_Proto_Write_RlyToAck
               (st_PPPP_RlyToAck *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               uint param_6,char param_7)

{
  memset(param_1,0,0x1c);
  *(uint *)param_1 =
       (param_6 ^ (param_6 >> 0x10 | param_6 << 0x10)) >> 8 & 0xffff00ff ^
       (param_6 >> 8 | param_6 << 0x18);
  strncpy((char *)(param_1 + 4),param_2,7);
  strncpy((char *)(param_1 + 0x10),param_4,7);
  param_1[0x18] = (st_PPPP_RlyToAck)param_5;
  param_1[0x19] = (st_PPPP_RlyToAck)param_7;
  *(uint *)(param_1 + 0xc) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  return;
}



// tnp::PPPP_Proto_Send_RlyToAck(int, sockaddr_in*, char*, unsigned int, char*, char, unsigned int,
// char)

int tnp::PPPP_Proto_Send_RlyToAck
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char param_6,uint param_7,char param_8)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_RlyToAck asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0x85,0x1c);
  PPPP_Proto_Write_RlyToAck(asStack_124,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar1 = SendMessage((char *)asStack_128,0x20,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_TO_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_TO_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_RlyPkt(tnp::st_PPPP_RlyPkt*, char*, unsigned int*, char*, char*, unsigned
// int*)

void tnp::PPPP_Proto_Read_RlyPkt
               (st_PPPP_RlyPkt *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,
               uint *param_6)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  *param_6 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  strncpy(param_2,(char *)(param_1 + 4),7);
  strncpy(param_4,(char *)(param_1 + 0x10),7);
  uVar1 = *(uint *)(param_1 + 0xc);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  *param_5 = (char)param_1[0x18];
  return;
}



// tnp::PPPP_Proto_Write_RlyPkt(tnp::st_PPPP_RlyPkt*, char*, unsigned int, char*, char, unsigned
// int)

void tnp::PPPP_Proto_Write_RlyPkt
               (st_PPPP_RlyPkt *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               uint param_6)

{
  memset(param_1,0,0x1c);
  *(uint *)param_1 =
       (param_6 ^ (param_6 >> 0x10 | param_6 << 0x10)) >> 8 & 0xffff00ff ^
       (param_6 >> 8 | param_6 << 0x18);
  strncpy((char *)(param_1 + 4),param_2,7);
  strncpy((char *)(param_1 + 0x10),param_4,7);
  param_1[0x18] = (st_PPPP_RlyPkt)param_5;
  *(uint *)(param_1 + 0xc) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  return;
}



// tnp::PPPP_Proto_Send_RlyPkt(int, sockaddr_in*, char*, unsigned int, char*, char, unsigned int)

int tnp::PPPP_Proto_Send_RlyPkt
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char param_6,uint param_7)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_RlyPkt asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0x83,0x1c);
  PPPP_Proto_Write_RlyPkt(asStack_124,param_3,param_4,param_5,param_6,param_7);
  iVar1 = SendMessage((char *)asStack_128,0x20,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_PKT to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_PKT to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_RlyRdy(tnp::st_PPPP_RlyRdy*, char*, unsigned int*, char*)

void tnp::PPPP_Proto_Read_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  return;
}



// tnp::PPPP_Proto_Read_RlyRdy_EX(tnp::st_PPPP_RlyRdy_EX*, char*, unsigned int*, char*, char*)

undefined4
tnp::PPPP_Proto_Read_RlyRdy_EX
          (st_PPPP_RlyRdy_EX *param_1,char *param_2,uint *param_3,char *param_4,char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char local_28 [16];
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x18,local_28,0x10,param_5);
  iVar1 = memcmp(local_28,param_1 + 0x18,0xf);
  if (iVar1 == 0) {
    PPPP_Proto_Read_RlyRdy((st_PPPP_RlyRdy *)param_1,param_2,param_3,param_4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Write_RlyRdy(tnp::st_PPPP_RlyRdy*, char*, unsigned int, char*)

void tnp::PPPP_Proto_Write_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint param_3,char *param_4)

{
  memset(param_1,0,0x14);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  return;
}



// tnp::PPPP_Proto_Send_RlyRdy(int, sockaddr_in*, char*, unsigned int, char*)

int tnp::PPPP_Proto_Send_RlyRdy
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  st_PPPP_RlyRdy asStack_11c [256];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,0x84,0x14);
  PPPP_Proto_Write_RlyRdy(asStack_11c,param_3,param_4,param_5);
  iVar1 = SendMessage((char *)asStack_120,0x18,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_RDYto %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_RDY to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Write_RlyTCPStart(tnp::st_PPPP_RlyTCPStart*, char*, unsigned int, char*, char*)

void tnp::PPPP_Proto_Write_RlyTCPStart
               (st_PPPP_RlyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char *param_5)

{
  size_t sVar1;
  size_t sVar2;
  char acStack_c8 [32];
  char acStack_a8 [64];
  char acStack_68 [68];
  
  memset(param_1,0,0x54);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  memset(acStack_a8,0,0x40);
  memset(acStack_68,0,0x40);
  PPPP_MakeNonce(acStack_c8,0x20);
  snprintf(acStack_a8,0x40,"%.*s:%s-%06d-%s",0x20,acStack_c8,param_2,param_3,param_4);
  sVar1 = strlen(param_5);
  sVar2 = strlen(acStack_a8);
  PPPP_MakeSha1(param_5,sVar1,acStack_a8,sVar2,acStack_68);
  memcpy(param_1 + 0x14,acStack_c8,0x20);
  memcpy(param_1 + 0x34,acStack_68,0x20);
  return;
}



// tnp::PPPP_Proto_Send_RlyTCPStart(int, sockaddr_in*, char*, unsigned int, char*, char*)

int tnp::PPPP_Proto_Send_RlyTCPStart
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char *param_6)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  st_PPPP_RlyTCPStart asStack_11c [252];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,0x88,0x54);
  PPPP_Proto_Write_RlyTCPStart(asStack_11c,param_3,param_4,param_5,param_6);
  iVar1 = SendMessageByTCP((char *)asStack_120,0x58,param_1);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_TCP_START to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_TCP_START to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Write_RlyTCPReq(tnp::st_PPPP_RlyTCPReq*, char*, unsigned int, char*,
// sockaddr_in*, char*)

void tnp::PPPP_Proto_Write_RlyTCPReq
               (st_PPPP_RlyTCPReq *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5,char *param_6)

{
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  memcpy(param_1 + 0x24,param_6,0x10);
  memcpy(param_1 + 0x14,param_5,0x10);
  return;
}



// tnp::PPPP_Proto_Send_RlyTCPReq(int, char, sockaddr_in*, char*, unsigned int, char*, sockaddr_in*,
// char*)

int tnp::PPPP_Proto_Send_RlyTCPReq
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,sockaddr_in *param_7,char *param_8)

{
  int iVar1;
  in_addr __in;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0x89,0x34);
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  PPPP_Proto_Write_RlyTCPReq
            ((st_PPPP_RlyTCPReq *)&local_124,param_4,param_5,param_6,param_7,param_8);
  if (param_2 == '\0') {
    iVar1 = SendMessage((char *)asStack_128,0x38,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_128,0x38,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_RLY_TCP_REQ to %s:%d\n",pcVar2,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa(__in);
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_TCP_REQ to %s:%d\n",pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_RlyTCPTo(tnp::st_PPPP_RlyTCPTo*, sockaddr_in*, char*)

void tnp::PPPP_Proto_Read_RlyTCPTo(st_PPPP_RlyTCPTo *param_1,sockaddr_in *param_2,char *param_3)

{
  memcpy(param_3,param_1 + 0x10,0x10);
  memcpy(param_2,param_1,0x10);
  return;
}



// tnp::PPPP_Proto_Read_RlyTCPTo_EX(tnp::st_PPPP_RlyTCPTo_EX*, sockaddr_in*, char*, char*)

undefined4
tnp::PPPP_Proto_Read_RlyTCPTo_EX
          (st_PPPP_RlyTCPTo_EX *param_1,sockaddr_in *param_2,char *param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char local_28 [20];
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x20,local_28,0x10,param_4);
  iVar1 = memcmp(local_28,param_1 + 0x20,0xf);
  if (iVar1 == 0) {
    PPPP_Proto_Read_RlyTCPTo((st_PPPP_RlyTCPTo *)param_1,param_2,param_3);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Write_RlyTCPToAck(tnp::st_PPPP_RlyTCPToAck*, char*, unsigned int, char*, char*,
// char, char)

void tnp::PPPP_Proto_Write_RlyTCPToAck
               (st_PPPP_RlyTCPToAck *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               char param_6,char param_7)

{
  memset(param_1,0,0x28);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  memcpy(param_1 + 0x14,param_5,0x10);
  param_1[0x24] = (st_PPPP_RlyTCPToAck)param_6;
  param_1[0x25] = (st_PPPP_RlyTCPToAck)param_7;
  return;
}



// tnp::PPPP_Proto_Send_RlyTCPToAck(int, char, sockaddr_in*, char*, unsigned int, char*, char*,
// char, char)

int tnp::PPPP_Proto_Send_RlyTCPToAck
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,char *param_7,char param_8,char param_9)

{
  int iVar1;
  in_addr __in;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_RlyTCPToAck asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0x8a,0x28);
  PPPP_Proto_Write_RlyTCPToAck(asStack_124,param_4,param_5,param_6,param_7,param_8,param_9);
  if (param_2 == '\x01') {
    iVar1 = SendMessageByTCP((char *)asStack_128,0x2c,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar1 = SendMessage((char *)asStack_128,0x2c,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_RLY_TCP_TO_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa(__in);
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_TCP_TO_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Write_RlyTCPPkt(tnp::st_PPPP_RlyTCPPkt*, char*, char)

void tnp::PPPP_Proto_Write_RlyTCPPkt(st_PPPP_RlyTCPPkt *param_1,char *param_2,char param_3)

{
  memset(param_1,0,0x14);
  memcpy(param_1,param_2,0x10);
  param_1[0x10] = (st_PPPP_RlyTCPPkt)param_3;
  return;
}



// tnp::PPPP_Proto_Send_RlyTCPPkt(int, sockaddr_in*, char*, char)

int tnp::PPPP_Proto_Send_RlyTCPPkt(int param_1,sockaddr_in *param_2,char *param_3,char param_4)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  st_PPPP_RlyTCPPkt asStack_114 [252];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,0x8b,0x14);
  PPPP_Proto_Write_RlyTCPPkt(asStack_114,param_3,param_4);
  iVar1 = SendMessageByTCP((char *)asStack_118,0x18,param_1);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_TCP_PKT to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_TCP_PKT to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_R2PMPReq(tnp::st_PPPP_R2PMPReq*, sockaddr_in*, sockaddr_in*, unsigned int*,
// char*)

undefined4
tnp::PPPP_Proto_Read_R2PMPReq
          (st_PPPP_R2PMPReq *param_1,sockaddr_in *param_2,sockaddr_in *param_3,uint *param_4,
          char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char local_28 [16];
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x28,local_28,0x10,param_5);
  iVar1 = memcmp(local_28,param_1 + 0x28,0xf);
  if (iVar1 == 0) {
    memcpy(param_2,param_1,0x10);
    memcpy(param_3,param_1 + 0x10,0x10);
    uVar3 = *(uint *)(param_1 + 0x20);
    *param_4 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
               (uVar3 >> 8 | uVar3 << 0x18);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Read_R2PMPStart(tnp::st_PPPP_R2PMPStart*, sockaddr_in*, char*, unsigned int*,
// char*)

undefined4
tnp::PPPP_Proto_Read_R2PMPStart
          (st_PPPP_R2PMPStart *param_1,sockaddr_in *param_2,char *param_3,uint *param_4,
          char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char local_28 [16];
  
  uVar3 = *(uint *)(param_1 + 0x14);
  *param_4 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar3 >> 8 | uVar3 << 0x18);
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x18,local_28,0x10,param_5);
  iVar1 = memcmp(local_28,param_1 + 0x18,0xf);
  if (iVar1 == 0) {
    memcpy(param_2,param_1,0x10);
    *param_3 = (char)param_1[0x10];
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Write_R2PMPStart(tnp::st_PPPP_R2PMPStart*, sockaddr_in*, char, char*)

void tnp::PPPP_Proto_Write_R2PMPStart
               (st_PPPP_R2PMPStart *param_1,sockaddr_in *param_2,char param_3,char *param_4)

{
  uint uVar1;
  
  memset(param_1,0,0x28);
  memcpy(param_1,param_2,0x10);
  param_1[0x10] = (st_PPPP_R2PMPStart)param_3;
  uVar1 = getCurSecond(0,0);
  *(uint *)(param_1 + 0x14) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  PPPP_MakeSha1_EX((char *)param_1,0x18,(char *)(param_1 + 0x18),0x10,param_4);
  return;
}



// tnp::PPPP_Proto_Send_R2PMPStart(int, sockaddr_in*, sockaddr_in*, char, char*)

int tnp::PPPP_Proto_Send_R2PMPStart
              (int param_1,sockaddr_in *param_2,sockaddr_in *param_3,char param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  st_PPPP_R2PMPStart asStack_11c [256];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'Q',0x28);
  PPPP_Proto_Write_R2PMPStart(asStack_11c,param_3,param_4,param_5);
  iVar1 = SendMessage((char *)asStack_120,0x2c,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send st_PPPP_R2PMPStart with NAT:%d to %s:%d\n",(int)param_4,pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send st_PPPP_R2PMPStart with NAT:%d to %s:%d\n",(int)param_4,pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_R2PMPBody(tnp::st_PPPP_R2PMPBody*, char*, unsigned int*, char*, unsigned
// int*, char*)

undefined4
tnp::PPPP_Proto_Read_R2PMPBody
          (st_PPPP_R2PMPBody *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,
          char *param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char local_30 [20];
  
  uVar3 = *(uint *)(param_1 + 0x14);
  *param_5 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar3 >> 8 | uVar3 << 0x18);
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  PPPP_MakeSha1_EX((char *)param_1,0x18,local_30,0x10,param_6);
  iVar1 = memcmp(local_30,param_1 + 0x18,0xf);
  if (iVar1 == 0) {
    strncpy(param_2,(char *)param_1,7);
    strncpy(param_4,(char *)(param_1 + 0xc),7);
    uVar3 = *(uint *)(param_1 + 8);
    *param_3 = (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^
               (uVar3 >> 8 | uVar3 << 0x18);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// tnp::PPPP_Proto_Write_R2PMPBody(tnp::st_PPPP_R2PMPBody*, char*, unsigned int, char*, unsigned
// int, char*)

void tnp::PPPP_Proto_Write_R2PMPBody
               (st_PPPP_R2PMPBody *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
               char *param_6)

{
  uint uVar1;
  
  memset(param_1,0,0x28);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  uVar1 = getCurSecond(param_5,600);
  *(uint *)(param_1 + 0x14) =
       (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^ (uVar1 >> 8 | uVar1 << 0x18);
  PPPP_MakeSha1_EX((char *)param_1,0x18,(char *)(param_1 + 0x18),0x10,param_6);
  return;
}



// tnp::PPPP_Proto_Send_R2PMPBody(int, sockaddr_in*, unsigned char, char*, unsigned int, char*,
// unsigned int, char*)

int tnp::PPPP_Proto_Send_R2PMPBody
              (int param_1,sockaddr_in *param_2,uchar param_3,char *param_4,uint param_5,
              char *param_6,uint param_7,char *param_8)

{
  int iVar1;
  char *pcVar2;
  char acStack_168 [64];
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_R2PMPBody asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  memset(acStack_168,0,0x40);
  PPPP_Proto_Write_Header(asStack_128,param_3,0x28);
  PPPP_Proto_Write_R2PMPBody(asStack_124,param_4,param_5,param_6,param_7,param_8);
  iVar1 = SendMessage((char *)asStack_128,0x2c,param_1,param_2);
  if (param_3 == 'R') {
    strncpy(acStack_168,"st_PPPP_R2PMPPkt",0x3f);
  }
  else if (param_3 == 'S') {
    strncpy(acStack_168,"st_PPPP_R2PMPRdy",0x3f);
  }
  else {
    strncpy(acStack_168,"unknown",0x3f);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send %s to %s:%d\n",acStack_168,pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send %s to %s:%d\n",acStack_168,pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_R2PMPPkt(tnp::st_PPPP_R2PMPBody*, char*, unsigned int*, char*, unsigned
// int*, char*)

void tnp::PPPP_Proto_Read_R2PMPPkt
               (st_PPPP_R2PMPBody *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,
               char *param_6)

{
  PPPP_Proto_Read_R2PMPBody(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// tnp::PPPP_Proto_Read_R2PMPRdy(tnp::st_PPPP_R2PMPBody*, char*, unsigned int*, char*, unsigned
// int*, char*)

void tnp::PPPP_Proto_Read_R2PMPRdy
               (st_PPPP_R2PMPBody *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,
               char *param_6)

{
  PPPP_Proto_Read_R2PMPBody(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// tnp::PPPP_Proto_Send_R2PMPPkt(int, sockaddr_in*, char*, unsigned int, char*, unsigned int, char*)

void tnp::PPPP_Proto_Send_R2PMPPkt
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               uint param_6,char *param_7)

{
  PPPP_Proto_Send_R2PMPBody(param_1,param_2,'R',param_3,param_4,param_5,param_6,param_7);
  return;
}



// tnp::PPPP_Proto_Send_R2PMPRdy(int, sockaddr_in*, char*, unsigned int, char*, unsigned int, char*)

void tnp::PPPP_Proto_Send_R2PMPRdy
               (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
               uint param_6,char *param_7)

{
  PPPP_Proto_Send_R2PMPBody(param_1,param_2,'S',param_3,param_4,param_5,param_6,param_7);
  return;
}



// tnp::PPPP_Proto_Write_EasyTCPStart(tnp::st_PPPP_EasyTCPStart*, char*, unsigned int, char*, char)

void tnp::PPPP_Proto_Write_EasyTCPStart
               (st_PPPP_EasyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char param_5)

{
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  param_1[0x14] = (st_PPPP_EasyTCPStart)param_5;
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  return;
}



// tnp::PPPP_Proto_Send_EasyTCPStart(int, sockaddr_in*, char*, unsigned int, char*, char, char*)

int tnp::PPPP_Proto_Send_EasyTCPStart
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char param_6,char *param_7)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  char acStack_1a8 [64];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_EasyTCPStart asStack_124 [24];
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0x8c,0x58);
  memset(asStack_124,0,0x58);
  PPPP_Proto_Write_EasyTCPStart(asStack_124,param_3,param_4,param_5,param_6);
  memset(acStack_1a8,0,0x40);
  memset(&local_168,0,0x40);
  PPPP_MakeNonce((char *)&local_1c8,0x20);
  local_10c = local_1c8;
  uStack_108 = uStack_1c4;
  uStack_104 = uStack_1c0;
  uStack_100 = uStack_1bc;
  local_fc = local_1b8;
  uStack_f8 = uStack_1b4;
  uStack_f4 = uStack_1b0;
  uStack_f0 = uStack_1ac;
  snprintf(acStack_1a8,0x40,"%.*s:%s-%06d-%s",0x20,&local_1c8,param_3,param_4,param_5);
  sVar1 = strlen(param_7);
  sVar2 = strlen(acStack_1a8);
  PPPP_MakeSha1(param_7,sVar1,acStack_1a8,sVar2,(char *)&local_168);
  local_ec = local_168;
  uStack_e8 = uStack_164;
  uStack_e4 = uStack_160;
  uStack_e0 = uStack_15c;
  local_dc = local_158;
  uStack_d8 = uStack_154;
  uStack_d4 = uStack_150;
  uStack_d0 = uStack_14c;
  iVar3 = SendMessageByTCP((char *)asStack_128,0x5c,param_1);
  if (-1 < iVar3) {
    pcVar4 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_EASYTCP_START to %s:%d\n",pcVar4,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar3;
  }
  pcVar4 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_EASYTCP_START to %s:%d\n",pcVar4,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar3;
}



// tnp::PPPP_Proto_Send_Alive(int, char, sockaddr_in*)

int tnp::PPPP_Proto_Send_Alive(int param_1,char param_2,sockaddr_in *param_3)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [260];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,0xe0,0);
  if (param_2 == '\0') {
    iVar1 = SendMessage((char *)asStack_118,4,param_1,param_3);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_118,4,param_1);
  }
  if (-1 < iVar1) {
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_3 + 4));
  PPPP_DebugTrace(4,"[Failed!!%d] Send MSG_ALIVE to %s:%d\n",iVar1,pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_AliveAck(int, char, sockaddr_in*)

int tnp::PPPP_Proto_Send_AliveAck(int param_1,char param_2,sockaddr_in *param_3)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [260];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,0xe1,0);
  if (param_2 == '\0') {
    iVar1 = SendMessage((char *)asStack_118,4,param_1,param_3);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_118,4,param_1);
  }
  if (-1 < iVar1) {
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_3 + 4));
  PPPP_DebugTrace(4,"[Failed!!%d] Send MSG_ALIVE_ACK to %s:%d\n",iVar1,pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_DRW_Read_Header(tnp::st_PPPP_DRWHeader*, unsigned char*, unsigned short*)

undefined4 tnp::PPPP_DRW_Read_Header(st_PPPP_DRWHeader *param_1,uchar *param_2,ushort *param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == (st_PPPP_DRWHeader)0xd1) {
    uVar1 = 0;
    *param_3 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
    *param_2 = (uchar)param_1[1];
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// tnp::PPPP_DRW_Write_Header(tnp::st_PPPP_DRWHeader*, unsigned char, unsigned short)

void tnp::PPPP_DRW_Write_Header(st_PPPP_DRWHeader *param_1,uchar param_2,ushort param_3)

{
  param_1[1] = (st_PPPP_DRWHeader)param_2;
  *param_1 = (st_PPPP_DRWHeader)0xd1;
  *(ushort *)(param_1 + 2) = param_3 << 8 | param_3 >> 8;
  return;
}



// tnp::PPPP_DRW_Send(int, char, sockaddr_in*, unsigned char, unsigned short, char*, unsigned short)

int tnp::PPPP_DRW_Send(int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort param_5,
                      char *param_6,ushort param_7)

{
  int iVar1;
  in_addr __in;
  char *pcVar2;
  uint __n;
  st_PPPP_SessionHeader asStack_528 [4];
  st_PPPP_DRWHeader asStack_524 [4];
  undefined1 auStack_520 [1276];
  
  __n = (uint)param_7;
  memset(asStack_528,0,0x500);
  PPPP_Proto_Write_Header(asStack_528,0xd0,(ushort)((__n + 4) * 0x10000 >> 0x10));
  PPPP_DRW_Write_Header(asStack_524,param_4,param_5);
  if (__n != 0 && param_6 != (char *)0x0) {
    memcpy(auStack_520,param_6,__n);
  }
  if (param_2 == '\0') {
    iVar1 = SendMessage((char *)asStack_528,__n + 8,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_528,__n + 8,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa(__in);
    PPPP_DebugTrace(0x2000,"Send MSG_DRW to %s:%d,Channel:%d,Index:%d,DataSize:%d\n",pcVar2,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8),
                    (uint)param_4,(uint)param_5,__n);
    return iVar1;
  }
  pcVar2 = inet_ntoa(__in);
  PPPP_DebugTrace(0x2000,"[Failed!!%d] Send MSG_DRW to %s:%d\n",iVar1,pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_DRWAck_Read_Header(tnp::st_PPPP_DRWAckHeader*, unsigned char*, unsigned short*)

undefined4
tnp::PPPP_DRWAck_Read_Header(st_PPPP_DRWAckHeader *param_1,uchar *param_2,ushort *param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == (st_PPPP_DRWAckHeader)0xd1) {
    uVar1 = 0;
    *param_3 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
    *param_2 = (uchar)param_1[1];
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// tnp::PPPP_DRWAck_Write_Header(tnp::st_PPPP_DRWAckHeader*, unsigned char, unsigned short)

void tnp::PPPP_DRWAck_Write_Header(st_PPPP_DRWAckHeader *param_1,uchar param_2,ushort param_3)

{
  param_1[1] = (st_PPPP_DRWAckHeader)param_2;
  *param_1 = (st_PPPP_DRWAckHeader)0xd1;
  *(ushort *)(param_1 + 2) = param_3 << 8 | param_3 >> 8;
  return;
}



// tnp::PPPP_DRWAck_Send(int, char, sockaddr_in*, unsigned char, unsigned short*, unsigned short)

int tnp::PPPP_DRWAck_Send
              (int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort *param_5,
              ushort param_6)

{
  int iVar1;
  in_addr __in;
  char *pcVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  st_PPPP_SessionHeader asStack_528 [4];
  st_PPPP_DRWAckHeader asStack_524 [2];
  ushort auStack_522 [639];
  
  uVar3 = (uint)param_6;
  iVar1 = uVar3 * 2;
  memset(asStack_528,0,0x500);
  PPPP_Proto_Write_Header(asStack_528,0xd1,(ushort)((uint)((iVar1 + 4) * 0x10000) >> 0x10));
  PPPP_DRWAck_Write_Header(asStack_524,param_4,param_6);
  if (uVar3 != 0 && param_5 != (ushort *)0x0) {
    puVar4 = auStack_522;
    puVar5 = puVar4 + uVar3;
    do {
      PPPP_DebugTrace(0x100,"PPPP_DRWAck_Send ==> Channel:%d, Ack For DRW Packet Index:%d\n",
                      (uint)param_4,(uint)*param_5);
      puVar4 = puVar4 + 1;
      *puVar4 = *param_5 << 8 | *param_5 >> 8;
      param_5 = param_5 + 1;
    } while (puVar4 != puVar5);
  }
  if (param_2 == '\0') {
    iVar1 = SendMessage((char *)asStack_528,iVar1 + 8,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_528,iVar1 + 8,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa(__in);
    PPPP_DebugTrace(0x2000,"Send MSG_DRW_ACK %s:%d\n",pcVar2,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa(__in);
  PPPP_DebugTrace(0x2000,"[Failed!!%d] Send MSG_DRW_ACK to %s:%d\n",iVar1,pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_Close(int, char, sockaddr_in*)

int tnp::PPPP_Proto_Send_Close(int param_1,char param_2,sockaddr_in *param_3)

{
  int iVar1;
  in_addr __in;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [260];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,0xf0,0);
  if (param_2 == '\0') {
    iVar1 = SendMessage((char *)asStack_118,4,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_118,4,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_CLOSE to %s:%d\n",pcVar2,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa(__in);
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_CLOSE to %s:%d\n",pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_Probe(int, sockaddr_in*, char*, unsigned int, char)

int tnp::PPPP_Proto_Send_Probe
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  st_PPPP_SessionHeader asStack_828 [4];
  char acStack_824 [16];
  uint local_814;
  
  uVar3 = (uint)(byte)param_5;
  memset(asStack_828,0,0x800);
  if (uVar3 == 0) {
    uVar2 = 0x14;
    iVar4 = 0x18;
  }
  else {
    uVar2 = 0x4c4;
    iVar4 = 0x4c8;
  }
  PPPP_Proto_Write_Header(asStack_828,0xaa,(ushort)uVar2);
  strncpy(acStack_824,param_3,0x10);
  local_814 = (param_4 ^ (param_4 >> 0x10 | param_4 << 0x10)) >> 8 & 0xffff00ff ^
              (param_4 >> 8 | param_4 << 0x18);
  iVar4 = SendMessage((char *)asStack_828,iVar4,param_1,param_2);
  if (iVar4 < 0) {
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,
                    "[Failed!!] Send MSG_PROBE_START to %s:%d serial:%d guid:%s largepacket:%d bodysize:%d\n"
                    ,pcVar1,(*(ushort *)(param_2 + 2) & 0xff) << 8 |
                            (uint)(*(ushort *)(param_2 + 2) >> 8),param_4,param_3,uVar3,uVar2);
    return iVar4;
  }
  pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"Send MSG_PROBE_START to %s:%d serial:%d guid:%s largepacket:%d bodysize:%d\n",
                  pcVar1,(*(ushort *)(param_2 + 2) & 0xff) << 8 |
                         (uint)(*(ushort *)(param_2 + 2) >> 8),param_4,param_3,uVar3,uVar2);
  return iVar4;
}



// tnp::PPPP_Proto_Send_ProbeAck2(int, sockaddr_in*, char*, unsigned int)

int tnp::PPPP_Proto_Send_ProbeAck2(int param_1,sockaddr_in *param_2,char *param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  char acStack_114 [16];
  uint local_104;
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,0xac,0x14);
  strncpy(acStack_114,param_3,0x10);
  local_104 = (param_4 ^ (param_4 >> 0x10 | param_4 << 0x10)) >> 8 & 0xffff00ff ^
              (param_4 >> 8 | param_4 << 0x18);
  iVar1 = SendMessage((char *)asStack_118,0x18,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_PROBE_ACK2 to %s:%d serial:%d guid:%s\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8),
                    param_4,param_3);
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_PROBE_ACK2 to %s:%d serial:%d guid:%s\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8),
                  param_4,param_3);
  return iVar1;
}



// tnp::PPPP_Proto_Send_DevOnline(int, sockaddr_in*, char*, unsigned int, char*)

int tnp::PPPP_Proto_Send_DevOnline
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  char acStack_11c [8];
  uint local_114;
  char acStack_110 [244];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'\x18',0x14);
  strncpy(acStack_11c,param_3,8);
  local_114 = (param_4 ^ (param_4 >> 0x10 | param_4 << 0x10)) >> 8 & 0xffff00ff ^
              (param_4 >> 8 | param_4 << 0x18);
  strncpy(acStack_110,param_5,8);
  iVar1 = SendMessage((char *)asStack_120,0x18,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_DEV_ONLINE_REQ to %s:%d Prefix:%s sn:%d checkcode:%s\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8),
                    param_3,param_4,param_5);
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_DEV_ONLINE_REQ to %s:%d Prefix:%s sn:%d checkcode:%s\n",
                  pcVar2,(*(ushort *)(param_2 + 2) & 0xff) << 8 |
                         (uint)(*(ushort *)(param_2 + 2) >> 8),param_3,param_4,param_5);
  return iVar1;
}



// tnp::PPPP_Proto_Send_WakeUp(int, char, sockaddr_in*, char*, unsigned int, char*, char*)

int tnp::PPPP_Proto_Send_WakeUp
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,char *param_7)

{
  int iVar1;
  in_addr __in;
  char *pcVar2;
  int iVar3;
  st_PPPP_SessionHeaderV2 asStack_128 [28];
  char acStack_10c [8];
  uint local_104;
  char acStack_100 [220];
  
  iVar3 = (int)param_2;
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_HeaderV2(asStack_128,'\x1a',0x14,'\0',param_4,param_5,param_7);
  strncpy(acStack_10c,param_4,7);
  local_104 = (param_5 ^ (param_5 >> 0x10 | param_5 << 0x10)) >> 8 & 0xffff00ff ^
              (param_5 >> 8 | param_5 << 0x18);
  strncpy(acStack_100,param_6,7);
  if (iVar3 == 0) {
    iVar1 = SendMessage((char *)asStack_128,0x30,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_128,0x30,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_DEV_WAKEUP_REQ to %s:%d Prefix:%s sn:%d checkcode:%s bTCP:%d\n",
                    pcVar2,(*(ushort *)(param_3 + 2) & 0xff) << 8 |
                           (uint)(*(ushort *)(param_3 + 2) >> 8),param_4,param_5,param_6,iVar3);
    return iVar1;
  }
  pcVar2 = inet_ntoa(__in);
  PPPP_DebugTrace(4,
                  "[Failed!!] Send MSG_DEV_WAKEUP_REQ to %s:%d Prefix:%s sn:%d checkcode:%s bTCP:%d\n"
                  ,pcVar2,(*(ushort *)(param_3 + 2) & 0xff) << 8 |
                          (uint)(*(ushort *)(param_3 + 2) >> 8),param_4,param_5,param_6,iVar3);
  return iVar1;
}



// tnp::PPPP_Proto_Read_NoticePing(tnp::st_PPPP_NoticePing*, char*, unsigned int*, char*)

void tnp::PPPP_Proto_Read_NoticePing
               (st_PPPP_NoticePing *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  return;
}



// tnp::PPPP_Proto_Send_NoticePingAck(int, char, sockaddr_in*, tnp::st_PPPP_NoticePing*)

int tnp::PPPP_Proto_Send_NoticePingAck
              (int param_1,char param_2,sockaddr_in *param_3,st_PPPP_NoticePing *param_4)

{
  int iVar1;
  in_addr __in;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  undefined1 auStack_114 [252];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,';',0x18);
  memcpy(auStack_114,param_4,0x18);
  if (param_2 == '\0') {
    iVar1 = SendMessage((char *)asStack_118,0x1c,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_118,0x1c,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_NOTICE_PING_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa(__in);
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_NOTICE_PING_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_NoticeTo_EX(tnp::st_PPPP_NoticeTo_EX*, char*, unsigned int*, char*, unsigned
// long long*, unsigned short*, char*, unsigned int*)

void tnp::PPPP_Proto_Read_NoticeTo_EX
               (st_PPPP_NoticeTo_EX *param_1,char *param_2,uint *param_3,char *param_4,
               ulonglong *param_5,ushort *param_6,char *param_7,uint *param_8)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  strncpy(param_2,(char *)(param_1 + 0x40),7);
  strncpy(param_4,(char *)(param_1 + 0x4c),7);
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar2 = *(ushort *)(param_1 + 0x5c);
  *param_3 = (uVar4 ^ (uVar4 >> 0x10 | uVar4 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar4 >> 8 | uVar4 << 0x18);
  uVar3 = *(uint *)(param_1 + 0x58);
  uVar5 = *(uint *)(param_1 + 0x54);
  uVar1 = uVar2 << 8;
  uVar2 = uVar2 >> 8;
  uVar4 = (uint)(uVar1 | uVar2);
  *(uint *)param_5 =
       (uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10)) >> 8 & 0xffff00ff ^ (uVar3 >> 8 | uVar3 << 0x18);
  *(uint *)((int)param_5 + 4) =
       (uVar5 ^ (uVar5 >> 0x10 | uVar5 << 0x10)) >> 8 & 0xffff00ff ^ (uVar5 >> 8 | uVar5 << 0x18);
  *param_6 = uVar1 | uVar2;
  if (0x400 < uVar4) {
    uVar4 = 0x400;
  }
  *param_8 = (uint)(byte)param_1[0x5e] * 0x3c;
  *param_6 = (ushort)uVar4;
  memcpy(param_7,param_1 + 0x60,uVar4);
  return;
}



// tnp::PPPP_Proto_Send_NoticeToAck(int, char, sockaddr_in*, char*, unsigned int, char*, unsigned
// long long, unsigned short, char*, char*, unsigned char, char)

int __thiscall
tnp::PPPP_Proto_Send_NoticeToAck
          (tnp *this,int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
          char *param_6,ulonglong param_7,ushort param_8,char *param_9,char *param_10,uchar param_11
          ,char param_12)

{
  size_t sVar1;
  int iVar2;
  in_addr __in;
  char *pcVar3;
  sockaddr_in *psVar4;
  uint __n;
  uint in_stack_0000000c;
  undefined2 in_stack_0000001a;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  st_PPPP_SessionHeader asStack_4a8 [4];
  undefined4 local_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 local_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 local_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 local_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  char acStack_464 [8];
  uint local_45c;
  char acStack_458 [8];
  uint local_450;
  uint local_44c;
  ushort uStack_448;
  undefined1 local_446;
  undefined1 local_445;
  undefined1 auStack_444 [1056];
  
  psVar4 = (sockaddr_in *)(int)param_2;
  __n = (uint)(ushort)param_7;
  memset(asStack_4a8,0,0x480);
  if (__n < 0x401) {
    PPPP_Proto_Write_Header(asStack_4a8,'?',(ushort)((__n + 0x60) * 0x10000 >> 0x10));
    strncpy(acStack_464,(char *)param_3,7);
    strncpy(acStack_458,(char *)param_5,7);
    local_44c = ((uint)param_6 ^ ((uint)param_6 >> 0x10 | (int)param_6 << 0x10)) >> 8 & 0xffff00ff ^
                ((uint)param_6 >> 8 | (int)param_6 << 0x18);
    local_45c = ((uint)param_4 ^ ((uint)param_4 >> 0x10 | (int)param_4 << 0x10)) >> 8 & 0xffff00ff ^
                ((uint)param_4 >> 8 | (int)param_4 << 0x18);
    local_450 = in_stack_0000000c >> 0x18 | in_stack_0000000c << 0x18 |
                (in_stack_0000000c & 0xff0000) >> 8 | (in_stack_0000000c & 0xff00) << 8;
    uStack_448 = (ushort)param_7 << 8 | (ushort)param_7 >> 8;
    local_446 = SUB41(param_9,0);
    local_445 = SUB41(param_10,0);
    if (__n != 0) {
      memcpy(auStack_444,param_7._4_4_,__n);
    }
    memset(&local_4e8,0,0x40);
    PPPP_MakeNonce((char *)&local_508,0x20);
    local_484 = local_508;
    uStack_480 = uStack_504;
    uStack_47c = uStack_500;
    uStack_478 = uStack_4fc;
    local_474 = local_4f8;
    uStack_470 = uStack_4f4;
    uStack_46c = uStack_4f0;
    uStack_468 = uStack_4ec;
    sVar1 = strlen(_param_8);
    PPPP_MakeSha1(_param_8,sVar1,(char *)&local_484,__n + 0x40,(char *)&local_4e8);
    local_4a4 = local_4e8;
    uStack_4a0 = uStack_4e4;
    uStack_49c = uStack_4e0;
    uStack_498 = uStack_4dc;
    local_494 = local_4d8;
    uStack_490 = uStack_4d4;
    uStack_48c = uStack_4d0;
    uStack_488 = uStack_4cc;
    if (param_1 == 0) {
      iVar2 = SendMessage((char *)asStack_4a8,__n + 100,(int)this,psVar4);
      __in.s_addr = *(in_addr_t *)(psVar4 + 4);
    }
    else {
      iVar2 = SendMessageByTCP((char *)asStack_4a8,__n + 100,(int)this);
      __in.s_addr = *(in_addr_t *)(psVar4 + 4);
    }
    if (iVar2 < 0) {
      pcVar3 = inet_ntoa(__in);
      PPPP_DebugTrace(4,"[Failed!!] Send MSG_NOTICE_TO_ACK to %s:%d\n",pcVar3,
                      (*(ushort *)(psVar4 + 2) & 0xff) << 8 | (uint)(*(ushort *)(psVar4 + 2) >> 8));
      return iVar2;
    }
    pcVar3 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_NOTICE_TO_ACK to %s:%d\n",pcVar3,
                    (*(ushort *)(psVar4 + 2) & 0xff) << 8 | (uint)(*(ushort *)(psVar4 + 2) >> 8));
  }
  else {
    pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(psVar4 + 4));
    PPPP_DebugTrace(4,
                    "[Failed!!] Send MSG_NOTICE_TO_ACK to %s:%d error, ContentLen %d is larger than 1024\n"
                    ,pcVar3,(*(ushort *)(psVar4 + 2) & 0xff) << 8 |
                            (uint)(*(ushort *)(psVar4 + 2) >> 8),__n);
    iVar2 = -1;
  }
  return iVar2;
}



// tnp::PPPP_Proto_Send_QueryDID(int, sockaddr_in*, char const*)

int tnp::PPPP_Proto_Send_QueryDID(int param_1,sockaddr_in *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  char acStack_114 [256];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,'\b',0x40);
  strncpy(acStack_114,param_3,0x40);
  iVar1 = SendMessage((char *)asStack_118,0x44,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_QUERY_DID to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_QUERY_DID to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_QueryDIDAck(int, sockaddr_in*, char const*)

int tnp::PPPP_Proto_Send_QueryDIDAck(int param_1,sockaddr_in *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  char acStack_114 [256];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,'\t',0x40);
  strncpy(acStack_114,param_3,0x40);
  iVar1 = SendMessage((char *)asStack_118,0x44,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_QUERY_DID_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_QUERY_DID_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_HelloTo(int, sockaddr_in*, sockaddr_in*, sockaddr_in*)

int tnp::PPPP_Proto_Send_HelloTo
              (int param_1,sockaddr_in *param_2,sockaddr_in *param_3,sockaddr_in *param_4)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  sockaddr_in asStack_114 [16];
  sockaddr_in asStack_104 [236];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,'\x02',0x20);
  htonAddr(param_3,asStack_114);
  htonAddr(param_4,asStack_104);
  iVar1 = SendMessage((char *)asStack_118,0x24,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_HELLO_TO to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_HELLO_TO to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_HelloToAck(int, sockaddr_in*)

int tnp::PPPP_Proto_Send_HelloToAck(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_110 [256];
  
  memset(asStack_110,0,0x100);
  PPPP_Proto_Write_Header(asStack_110,'\x03',0);
  iVar1 = SendMessage((char *)asStack_110,4,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_HELLO_TO_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_HELLO_TO_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_LanNotify(tnp::st_PPPP_LanNotify*, char*, unsigned int*, char*)

void tnp::PPPP_Proto_Read_LanNotify
               (st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  return;
}



// tnp::PPPP_Proto_Send_LanNotify(int, unsigned short, char*, unsigned int, char*)

void tnp::PPPP_Proto_Send_LanNotify
               (int param_1,ushort param_2,char *param_3,uint param_4,char *param_5)

{
  st_PPPP_SessionHeader asStack_120 [4];
  char acStack_11c [8];
  uint local_114;
  char acStack_110 [244];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'1',0x14);
  strncpy(acStack_11c,param_3,7);
  strncpy(acStack_110,param_5,7);
  local_114 = (param_4 ^ (param_4 >> 0x10 | param_4 << 0x10)) >> 8 & 0xffff00ff ^
              (param_4 >> 8 | param_4 << 0x18);
  PPPP_DebugTrace(4,"Broadcast MSG_LAN_NOTIFY to Port: %d\n",(uint)param_2);
  BroadcastMessage((char *)asStack_120,0x18,param_1,param_2);
  return;
}



// tnp::PPPP_Proto_Read_LanNotifyAck(tnp::st_PPPP_LanNotify*, char*, unsigned int*, char*)

void tnp::PPPP_Proto_Read_LanNotifyAck
               (st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4)

{
  PPPP_Proto_Read_LanNotify(param_1,param_2,param_3,param_4);
  return;
}



// tnp::PPPP_Proto_Send_LanNotifyAck(int, sockaddr_in*, char*, unsigned int, char*)

int tnp::PPPP_Proto_Send_LanNotifyAck
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  char acStack_11c [8];
  uint local_114;
  char acStack_110 [244];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,'2',0x14);
  strncpy(acStack_11c,param_3,7);
  strncpy(acStack_110,param_5,7);
  local_114 = (param_4 ^ (param_4 >> 0x10 | param_4 << 0x10)) >> 8 & 0xffff00ff ^
              (param_4 >> 8 | param_4 << 0x18);
  iVar1 = SendMessage((char *)asStack_120,0x18,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_LAN_NOTIFY_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_LAN_NOTIFY_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_RlyHelloSDev(int, sockaddr_in*)

int tnp::PPPP_Proto_Send_RlyHelloSDev(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_110 [256];
  
  memset(asStack_110,0,0x100);
  PPPP_Proto_Write_Header(asStack_110,'v',0);
  iVar1 = SendMessage((char *)asStack_110,4,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_HELLO_SDEV to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_HELLO_SDEV to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_RlyHelloSDevAck(int, sockaddr_in*)

int tnp::PPPP_Proto_Send_RlyHelloSDevAck(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_110 [256];
  
  memset(asStack_110,0,0x100);
  PPPP_Proto_Write_Header(asStack_110,'w',0);
  iVar1 = SendMessage((char *)asStack_110,4,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_RLY_HELLO_SDEV_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_RLY_HELLO_SDEV_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_SDevRun(int, sockaddr_in*)

int tnp::PPPP_Proto_Send_SDevRun(int param_1,sockaddr_in *param_2)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_110 [256];
  
  memset(asStack_110,0,0x100);
  PPPP_Proto_Write_Header(asStack_110,0x90,0);
  iVar1 = SendMessage((char *)asStack_110,4,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_SDEV_RUN to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_SDEV_RUN to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Read_SDevLgn(tnp::st_PPPP_SDevLgn*, char*, unsigned int*, char*)

void tnp::PPPP_Proto_Read_SDevLgn
               (st_PPPP_SDevLgn *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  strncpy(param_2,(char *)param_1,7);
  strncpy(param_4,(char *)(param_1 + 0xc),7);
  uVar1 = *(uint *)(param_1 + 8);
  *param_3 = (uVar1 ^ (uVar1 >> 0x10 | uVar1 << 0x10)) >> 8 & 0xffff00ff ^
             (uVar1 >> 8 | uVar1 << 0x18);
  return;
}



// tnp::PPPP_Proto_Write_SDevLgn(tnp::st_PPPP_SDevLgn*, char*, unsigned int, char*)

void tnp::PPPP_Proto_Write_SDevLgn
               (st_PPPP_SDevLgn *param_1,char *param_2,uint param_3,char *param_4)

{
  memset(param_1,0,0x14);
  strncpy((char *)param_1,param_2,7);
  strncpy((char *)(param_1 + 0xc),param_4,7);
  *(uint *)(param_1 + 8) =
       (param_3 ^ (param_3 >> 0x10 | param_3 << 0x10)) >> 8 & 0xffff00ff ^
       (param_3 >> 8 | param_3 << 0x18);
  return;
}



// tnp::PPPP_Proto_Send_SDevLgn(int, sockaddr_in*, char*, unsigned int, char*)

int tnp::PPPP_Proto_Send_SDevLgn
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  st_PPPP_SDevLgn asStack_11c [256];
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,0x91,0x14);
  PPPP_Proto_Write_SDevLgn(asStack_11c,param_3,param_4,param_5);
  iVar1 = SendMessage((char *)asStack_120,0x18,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_SDEV_LGN %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_SDEV_LGN to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_SDevLgnAck(int, sockaddr_in*, sockaddr_in*)

int tnp::PPPP_Proto_Send_SDevLgnAck(int param_1,sockaddr_in *param_2,sockaddr_in *param_3)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_118 [4];
  sockaddr_in asStack_114 [256];
  
  memset(asStack_118,0,0x100);
  PPPP_Proto_Write_Header(asStack_118,0x91,0x18);
  htonAddr(param_3,asStack_114);
  iVar1 = SendMessage((char *)asStack_118,0x1c,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_SDEV_LGN_ACK to %s:%d\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_SDEV_LGN_ACK to %s:%d\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8));
  return iVar1;
}



// tnp::PPPP_Proto_Send_BitrateInfo(int, char, sockaddr_in*, unsigned int, unsigned int)

int tnp::PPPP_Proto_Send_BitrateInfo
              (int param_1,char param_2,sockaddr_in *param_3,uint param_4,uint param_5)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_120 [4];
  uint local_11c;
  uint local_118;
  
  memset(asStack_120,0,0x100);
  PPPP_Proto_Write_Header(asStack_120,0xe5,8);
  local_11c = (param_4 ^ (param_4 >> 0x10 | param_4 << 0x10)) >> 8 & 0xffff00ff ^
              (param_4 >> 8 | param_4 << 0x18);
  local_118 = (param_5 ^ (param_5 >> 0x10 | param_5 << 0x10)) >> 8 & 0xffff00ff ^
              (param_5 >> 8 | param_5 << 0x18);
  if (param_2 == '\0') {
    iVar1 = SendMessage((char *)asStack_120,0xc,param_1,param_3);
  }
  else {
    iVar1 = SendMessageByTCP((char *)asStack_120,0xc,param_1);
  }
  if (-1 < iVar1) {
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_3 + 4));
  PPPP_DebugTrace(4,"[Failed!!%d] Send MSG_BITRATE_INFO to %s:%d with Bitrate:%u LossRatio:%u\n",
                  iVar1,pcVar2,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8),
                  param_4,param_5);
  return iVar1;
}



// tnp::PPPP_Proto_Write_ConnectReport(tnp::st_PPPP_ConnectReport*, char*, char, char*, int)

void tnp::PPPP_Proto_Write_ConnectReport
               (st_PPPP_ConnectReport *param_1,char *param_2,char param_3,char *param_4,int param_5)

{
  strncpy((char *)param_1,param_2,0x1f);
  memcpy(param_1 + 0x20,&gAPIVersion,3);
  param_1[0x23] = (st_PPPP_ConnectReport)param_3;
  if (param_3 != '\x01') {
    *(uint *)(param_1 + 0x24) =
         (param_5 ^ ((uint)param_5 >> 0x10 | param_5 << 0x10)) >> 8 & 0xffff00ff ^
         ((uint)param_5 >> 8 | param_5 << 0x18);
    return;
  }
  strncpy((char *)(param_1 + 0x24),param_4,3);
  return;
}



// tnp::PPPP_Proto_Send_ConnectReport(int, char, sockaddr_in*, char*, char, char*, int)

int tnp::PPPP_Proto_Send_ConnectReport
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,
              char *param_6,int param_7)

{
  char *pcVar1;
  int iVar2;
  in_addr __in;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  char acStack_168 [64];
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_ConnectReport asStack_124 [256];
  
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  memset(acStack_168,0,0x40);
  strncpy(acStack_168,param_4,0x40);
  pcVar1 = strchr(acStack_168,0x2d);
  *pcVar1 = '\0';
  strncpy((char *)&local_188,acStack_168,0x10);
  pcVar1 = strchr(pcVar1 + 1,0x2d);
  *pcVar1 = '\0';
  strncpy((char *)&local_178,pcVar1 + 1,0x10);
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0xa0,0x28);
  PPPP_Proto_Write_ConnectReport(asStack_124,param_4,param_5,param_6,param_7);
  if (param_2 == '\0') {
    iVar2 = SendMessage((char *)asStack_128,0x2c,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar2 = SendMessageByTCP((char *)asStack_128,0x2c,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar2) {
    pcVar1 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_CONNECT_REPORT to %s:%d\n",pcVar1,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
    return iVar2;
  }
  pcVar1 = inet_ntoa(__in);
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_CONNECT_REPORT to %s:%d\n",pcVar1,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8));
  return iVar2;
}



// tnp::PPPP_Proto_Write_Report(tnp::st_PPPP_Report*, char*, char, char, char, short, char*)

void tnp::PPPP_Proto_Write_Report
               (st_PPPP_Report *param_1,char *param_2,char param_3,char param_4,char param_5,
               short param_6,char *param_7)

{
  strncpy((char *)param_1,param_2,0x17);
  param_1[0x19] = (st_PPPP_Report)param_3;
  param_1[0x1a] = (st_PPPP_Report)param_4;
  param_1[0x18] = (st_PPPP_Report)param_5;
  *(ushort *)(param_1 + 0x1c) = param_6 << 8 | (ushort)param_6 >> 8;
  if (param_7 == (char *)0x0) {
    return;
  }
  if (*param_7 == '\0') {
    return;
  }
  strncpy((char *)(param_1 + 0x1e),param_7,0x45);
  return;
}



// tnp::PPPP_Proto_Send_Report(int, char, sockaddr_in*, char*, char, char, char, short, char*)

int tnp::PPPP_Proto_Send_Report
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,char param_6
              ,char param_7,short param_8,char *param_9)

{
  char *pcVar1;
  int iVar2;
  in_addr __in;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  char acStack_168 [64];
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_Report asStack_124 [256];
  
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  memset(acStack_168,0,0x40);
  strncpy(acStack_168,param_4,0x40);
  pcVar1 = strchr(acStack_168,0x2d);
  *pcVar1 = '\0';
  strncpy((char *)&local_188,acStack_168,0x10);
  pcVar1 = strchr(pcVar1 + 1,0x2d);
  *pcVar1 = '\0';
  strncpy((char *)&local_178,pcVar1 + 1,0x10);
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0xa2,100);
  PPPP_Proto_Write_Report(asStack_124,param_4,param_5,param_6,param_7,param_8,param_9);
  if (param_2 == '\0') {
    iVar2 = SendMessage((char *)asStack_128,0x68,param_1,param_3);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  else {
    iVar2 = SendMessageByTCP((char *)asStack_128,0x68,param_1);
    __in.s_addr = *(in_addr_t *)(param_3 + 4);
  }
  if (-1 < iVar2) {
    pcVar1 = inet_ntoa(__in);
    PPPP_DebugTrace(4,"Send MSG_REPORT to %s:%d with info %s\n",pcVar1,
                    (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8),
                    param_9);
    return iVar2;
  }
  pcVar1 = inet_ntoa(__in);
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_REPORT to %s:%d with info %s\n",pcVar1,
                  (*(ushort *)(param_3 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_3 + 2) >> 8),
                  param_9);
  return iVar2;
}



// tnp::PPPP_Proto_Write_SDevReport(tnp::st_PPPP_SDevReport*, char*, unsigned int, char*, char*,
// unsigned int, char*, char, char*)

void tnp::PPPP_Proto_Write_SDevReport
               (st_PPPP_SDevReport *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               uint param_6,char *param_7,char param_8,char *param_9)

{
  sprintf((char *)param_1,"%s-%06d-%s",param_5,param_6,param_7);
  sprintf((char *)(param_1 + 0x18),"%s-%06d-%s",param_2,param_3,param_4);
  param_1[0x30] = (st_PPPP_SDevReport)param_8;
  strncpy((char *)(param_1 + 0x34),param_9,0x3f);
  return;
}



// tnp::PPPP_Proto_Send_SDevReport(int, sockaddr_in*, char*, unsigned int, char*, char*, unsigned
// int, char*, char, char*)

int tnp::PPPP_Proto_Send_SDevReport
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char *param_6,uint param_7,char *param_8,char param_9,char *param_10)

{
  int iVar1;
  char *pcVar2;
  st_PPPP_SessionHeader asStack_128 [4];
  st_PPPP_SDevReport asStack_124 [256];
  
  memset(asStack_128,0,0x100);
  PPPP_Proto_Write_Header(asStack_128,0x94,0x74);
  PPPP_Proto_Write_SDevReport
            (asStack_124,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  iVar1 = SendMessage((char *)asStack_128,0x78,param_1,param_2);
  if (-1 < iVar1) {
    pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
    PPPP_DebugTrace(4,"Send MSG_SDEV_REPORT to %s:%d with info %s\n",pcVar2,
                    (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8),
                    param_10);
    return iVar1;
  }
  pcVar2 = inet_ntoa((in_addr)*(in_addr_t *)(param_2 + 4));
  PPPP_DebugTrace(4,"[Failed!!] Send MSG_SDEV_REPORT to %s:%d with info %s\n",pcVar2,
                  (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8),
                  param_10);
  return iVar1;
}



// tnp::PPPP_Proto_Write_SDevSessionReport(tnp::st_PPPP_SDevSessionReport*, unsigned int, char*,
// unsigned int, char*, char*, unsigned int, char*, char, unsigned int, unsigned int, unsigned int,
// unsigned int, unsigned int)

void tnp::PPPP_Proto_Write_SDevSessionReport
               (st_PPPP_SDevSessionReport *param_1,uint param_2,char *param_3,uint param_4,
               char *param_5,char *param_6,uint param_7,char *param_8,char param_9,uint param_10,
               uint param_11,uint param_12,uint param_13,uint param_14)

{
  *(uint *)param_1 =
       (param_2 ^ (param_2 >> 0x10 | param_2 << 0x10)) >> 8 & 0xffff00ff ^
       (param_2 >> 8 | param_2 << 0x18);
  strncpy((char *)(param_1 + 4),param_3,7);
  *(uint *)(param_1 + 0xc) =
       (param_4 ^ (param_4 >> 0x10 | param_4 << 0x10)) >> 8 & 0xffff00ff ^
       (param_4 >> 8 | param_4 << 0x18);
  strncpy((char *)(param_1 + 0x10),param_5,7);
  strncpy((char *)(param_1 + 0x18),param_6,7);
  *(uint *)(param_1 + 0x20) =
       (param_7 ^ (param_7 >> 0x10 | param_7 << 0x10)) >> 8 & 0xffff00ff ^
       (param_7 >> 8 | param_7 << 0x18);
  strncpy((char *)(param_1 + 0x24),param_8,7);
  param_1[0x2c] = (st_PPPP_SDevSessionReport)param_9;
  *(uint *)(param_1 + 0x30) =
       (param_10 ^ (param_10 >> 0x10 | param_10 << 0x10)) >> 8 & 0xffff00ff ^
       (param_10 >> 8 | param_10 << 0x18);
  *(uint *)(param_1 + 0x34) =
       (param_11 ^ (param_11 >> 0x10 | param_11 << 0x10)) >> 8 & 0xffff00ff ^
       (param_11 >> 8 | param_11 << 0x18);
  *(uint *)(param_1 + 0x38) =
       (param_12 ^ (param_12 >> 0x10 | param_12 << 0x10)) >> 8 & 0xffff00ff ^
       (param_12 >> 8 | param_12 << 0x18);
  *(uint *)(param_1 + 0x3c) =
       (param_13 ^ (param_13 >> 0x10 | param_13 << 0x10)) >> 8 & 0xffff00ff ^
       (param_13 >> 8 | param_13 << 0x18);
  *(uint *)(param_1 + 0x40) =
       (param_14 ^ (param_14 >> 0x10 | param_14 << 0x10)) >> 8 & 0xffff00ff ^
       (param_14 >> 8 | param_14 << 0x18);
  return;
}



// tnp::PPPP_Proto_Generate_SDevSessionReport(char*, unsigned int, char*, unsigned int, char*,
// char*, unsigned int, char*, char, unsigned int, unsigned int, unsigned int, unsigned int,
// unsigned int)

undefined4
tnp::PPPP_Proto_Generate_SDevSessionReport
          (char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char *param_6,
          uint param_7,char *param_8,char param_9,uint param_10,uint param_11,uint param_12,
          uint param_13,uint param_14)

{
  PPPP_Proto_Write_Header((st_PPPP_SessionHeader *)param_1,0x93,0x44);
  PPPP_Proto_Write_SDevSessionReport
            ((st_PPPP_SDevSessionReport *)(param_1 + 4),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14);
  return 0x48;
}



// tnp::PPPP_Proto_Generate_SendDataReport(char*, unsigned int, char*, unsigned int, char*, char,
// char)

undefined4
tnp::PPPP_Proto_Generate_SendDataReport
          (char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char param_6,
          char param_7)

{
  PPPP_Proto_Write_Header((st_PPPP_SessionHeader *)param_1,0xa4,0x1c);
  *(uint *)(param_1 + 4) =
       (param_2 ^ (param_2 >> 0x10 | param_2 << 0x10)) >> 8 & 0xffff00ff ^
       (param_2 >> 8 | param_2 << 0x18);
  strncpy(param_1 + 8,param_3,7);
  *(uint *)(param_1 + 0x10) =
       (param_4 ^ (param_4 >> 0x10 | param_4 << 0x10)) >> 8 & 0xffff00ff ^
       (param_4 >> 8 | param_4 << 0x18);
  strncpy(param_1 + 0x14,param_5,7);
  param_1[0x1c] = param_6;
  param_1[0x1d] = param_7;
  return 0x20;
}



uint FUN_00046810(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff) << 8 | (param_1 & 0xff00ffff) >> 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



void FUN_0004682c(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0xf;
  do {
    cVar1 = *(char *)(param_1 + iVar2) + '\x01';
    *(char *)(param_1 + iVar2) = cVar1;
    if (cVar1 != '\0') {
      return;
    }
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  return;
}



void FUN_00046854(uint *param_1,void *param_2,void *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c [2];
  
  uVar14 = param_1[0x3c];
  if ((uVar14 >> 1) - 1 < 7) {
    memcpy(&local_38,param_2,4);
    memcpy(&local_34,(void *)((int)param_2 + 4),4);
    memcpy(&local_30,(void *)((int)param_2 + 8),4);
    memcpy(local_2c,(void *)((int)param_2 + 0xc),4);
    uVar4 = FUN_00046810(local_38);
    uVar5 = FUN_00046810(local_34);
    uVar6 = FUN_00046810(local_30);
    uVar7 = FUN_00046810(local_2c[0]);
    local_38 = uVar4 ^ *param_1;
    local_34 = uVar5 ^ param_1[1];
    local_30 = uVar6 ^ param_1[2];
    uVar7 = uVar7 ^ param_1[3];
    puVar15 = param_1;
    uVar4 = local_30;
    uVar5 = local_34;
    uVar6 = local_38;
    while( true ) {
      uVar13 = *(uint *)(&DAT_00052438 + (uVar6 >> 0x18) * 4) ^
               *(uint *)(&DAT_00052438 + ((uVar7 & 0xff) + 0x300) * 4) ^ puVar15[4] ^
               *(uint *)(&DAT_00052438 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(&DAT_00052438 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
      puVar16 = puVar15 + 8;
      uVar21 = *(uint *)(&DAT_00052438 + (uVar5 >> 0x18) * 4) ^
               *(uint *)(&DAT_00052438 + ((uVar6 & 0xff) + 0x300) * 4) ^ puVar15[5] ^
               *(uint *)(&DAT_00052438 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(&DAT_00052438 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
      uVar20 = *(uint *)(&DAT_00052438 + (uVar4 >> 0x18) * 4) ^
               *(uint *)(&DAT_00052438 + ((uVar5 & 0xff) + 0x300) * 4) ^ puVar15[6] ^
               *(uint *)(&DAT_00052438 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(&DAT_00052438 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
      uVar7 = *(uint *)(&DAT_00052438 + (uVar7 >> 0x18) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar4 & 0xff) + 0x300) * 4) ^ puVar15[7] ^
              *(uint *)(&DAT_00052438 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
      if (puVar16 == param_1 + (uVar14 >> 1) * 8) break;
      uVar6 = *(uint *)(&DAT_00052438 + (uVar13 >> 0x18) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar7 & 0xff) + 0x300) * 4) ^ *puVar16 ^
              *(uint *)(&DAT_00052438 + ((uVar21 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar20 >> 8 & 0xff) + 0x200) * 4);
      uVar5 = *(uint *)(&DAT_00052438 + (uVar21 >> 0x18) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar13 & 0xff) + 0x300) * 4) ^ puVar15[9] ^
              *(uint *)(&DAT_00052438 + ((uVar20 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
      uVar4 = *(uint *)(&DAT_00052438 + (uVar20 >> 0x18) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar21 & 0xff) + 0x300) * 4) ^ puVar15[10] ^
              *(uint *)(&DAT_00052438 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar13 >> 8 & 0xff) + 0x200) * 4);
      uVar7 = *(uint *)(&DAT_00052438 + (uVar7 >> 0x18) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar20 & 0xff) + 0x300) * 4) ^ puVar15[0xb] ^
              *(uint *)(&DAT_00052438 + ((uVar13 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00052438 + ((uVar21 >> 8 & 0xff) + 0x200) * 4);
      puVar15 = puVar16;
    }
    uVar19 = *(uint *)(&DAT_00052438 + ((uVar21 >> 0x18) + 0x400) * 4);
    bVar1 = (&DAT_00052438)[((uVar13 & 0xff) + 0x400) * 4];
    uVar14 = puVar15[9];
    uVar4 = *(uint *)(&DAT_00052438 + ((uVar20 >> 0x10 & 0xff) + 0x400) * 4);
    uVar5 = *(uint *)(&DAT_00052438 + ((uVar7 >> 8 & 0xff) + 0x400) * 4);
    uVar18 = *(uint *)(&DAT_00052438 + ((uVar20 >> 0x18) + 0x400) * 4);
    bVar2 = (&DAT_00052438)[((uVar21 & 0xff) + 0x400) * 4];
    uVar6 = puVar15[10];
    uVar8 = *(uint *)(&DAT_00052438 + ((uVar7 >> 0x10 & 0xff) + 0x400) * 4);
    uVar9 = *(uint *)(&DAT_00052438 + ((uVar13 >> 8 & 0xff) + 0x400) * 4);
    uVar17 = *(uint *)(&DAT_00052438 + ((uVar7 >> 0x18) + 0x400) * 4);
    bVar3 = (&DAT_00052438)[((uVar20 & 0xff) + 0x400) * 4];
    uVar10 = puVar15[0xb];
    uVar11 = *(uint *)(&DAT_00052438 + ((uVar13 >> 0x10 & 0xff) + 0x400) * 4);
    uVar12 = *(uint *)(&DAT_00052438 + ((uVar21 >> 8 & 0xff) + 0x400) * 4);
    local_38 = FUN_00046810(*(uint *)(&DAT_00052438 + ((uVar13 >> 0x18) + 0x400) * 4) & 0xff000000 ^
                            (uint)(byte)(&DAT_00052438)[((uVar7 & 0xff) + 0x400) * 4] ^ *puVar16 ^
                            *(uint *)(&DAT_00052438 + ((uVar21 >> 0x10 & 0xff) + 0x400) * 4) &
                            0xff0000 ^
                            *(uint *)(&DAT_00052438 + ((uVar20 >> 8 & 0xff) + 0x400) * 4) & 0xff00);
    local_34 = FUN_00046810(uVar19 & 0xff000000 ^ (uint)bVar1 ^ uVar14 ^ uVar4 & 0xff0000 ^
                            uVar5 & 0xff00);
    local_30 = FUN_00046810(uVar18 & 0xff000000 ^ (uint)bVar2 ^ uVar6 ^ uVar8 & 0xff0000 ^
                            uVar9 & 0xff00);
    local_2c[0] = FUN_00046810(uVar17 & 0xff000000 ^ (uint)bVar3 ^ uVar10 ^ uVar11 & 0xff0000 ^
                               uVar12 & 0xff00);
    memcpy(param_3,&local_38,4);
    memcpy((void *)((int)param_3 + 4),&local_34,4);
    memcpy((void *)((int)param_3 + 8),&local_30,4);
    memcpy((void *)((int)param_3 + 0xc),local_2c,4);
  }
  return;
}



void FUN_00046d64(uint *param_1,void *param_2,void *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c [2];
  
  uVar15 = param_1[0x3c];
  if ((uVar15 >> 1) - 1 < 7) {
    memcpy(&local_38,param_2,4);
    memcpy(&local_34,(void *)((int)param_2 + 4),4);
    memcpy(&local_30,(void *)((int)param_2 + 8),4);
    memcpy(local_2c,(void *)((int)param_2 + 0xc),4);
    uVar4 = FUN_00046810(local_38);
    uVar5 = FUN_00046810(local_34);
    uVar6 = FUN_00046810(local_30);
    uVar7 = FUN_00046810(local_2c[0]);
    local_38 = uVar4 ^ *param_1;
    local_34 = uVar5 ^ param_1[1];
    local_30 = uVar6 ^ param_1[2];
    uVar7 = uVar7 ^ param_1[3];
    puVar16 = param_1;
    uVar4 = local_34;
    uVar5 = local_30;
    uVar6 = local_38;
    while( true ) {
      uVar13 = *(uint *)(&DAT_00053838 + (uVar6 >> 0x18) * 4) ^
               *(uint *)(&DAT_00054438 + (uVar4 & 0xff) * 4) ^ puVar16[4] ^
               *(uint *)(&DAT_00053c38 + (uVar7 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_00054038 + (uVar5 >> 8 & 0xff) * 4);
      uVar14 = *(uint *)(&DAT_00053838 + (uVar4 >> 0x18) * 4) ^
               *(uint *)(&DAT_00054438 + (uVar5 & 0xff) * 4) ^ puVar16[5] ^
               *(uint *)(&DAT_00053c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_00054038 + (uVar7 >> 8 & 0xff) * 4);
      uVar21 = *(uint *)(&DAT_00053838 + (uVar5 >> 0x18) * 4) ^
               *(uint *)(&DAT_00054438 + (uVar7 & 0xff) * 4) ^ puVar16[6] ^
               *(uint *)(&DAT_00053c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_00054038 + (uVar6 >> 8 & 0xff) * 4);
      puVar17 = puVar16 + 8;
      uVar4 = *(uint *)(&DAT_00053838 + (uVar7 >> 0x18) * 4) ^
              *(uint *)(&DAT_00054438 + (uVar6 & 0xff) * 4) ^ puVar16[7] ^
              *(uint *)(&DAT_00053c38 + (uVar5 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00054038 + (uVar4 >> 8 & 0xff) * 4);
      if (puVar17 == param_1 + (uVar15 >> 1) * 8) break;
      uVar6 = *(uint *)(&DAT_00053838 + (uVar13 >> 0x18) * 4) ^
              *(uint *)(&DAT_00054438 + (uVar14 & 0xff) * 4) ^ *puVar17 ^
              *(uint *)(&DAT_00053c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00054038 + (uVar21 >> 8 & 0xff) * 4);
      uVar7 = *(uint *)(&DAT_00053838 + (uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_00054438 + (uVar13 & 0xff) * 4) ^ puVar16[0xb] ^
              *(uint *)(&DAT_00053c38 + (uVar21 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00054038 + (uVar14 >> 8 & 0xff) * 4);
      uVar5 = *(uint *)(&DAT_00053838 + (uVar21 >> 0x18) * 4) ^
              *(uint *)(&DAT_00054438 + (uVar4 & 0xff) * 4) ^ puVar16[10] ^
              *(uint *)(&DAT_00053c38 + (uVar14 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00054038 + (uVar13 >> 8 & 0xff) * 4);
      uVar4 = *(uint *)(&DAT_00053838 + (uVar14 >> 0x18) * 4) ^
              *(uint *)(&DAT_00054438 + (uVar21 & 0xff) * 4) ^ puVar16[9] ^
              *(uint *)(&DAT_00053c38 + (uVar13 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00054038 + (uVar4 >> 8 & 0xff) * 4);
      puVar16 = puVar17;
    }
    uVar20 = *(uint *)(&DAT_00054838 + (uVar14 >> 0x18) * 4);
    bVar1 = (&DAT_00054838)[(uVar21 & 0xff) * 4];
    uVar15 = puVar16[9];
    uVar5 = *(uint *)(&DAT_00054838 + (uVar13 >> 0x10 & 0xff) * 4);
    uVar6 = *(uint *)(&DAT_00054838 + (uVar4 >> 8 & 0xff) * 4);
    uVar19 = *(uint *)(&DAT_00054838 + (uVar21 >> 0x18) * 4);
    bVar2 = (&DAT_00054838)[(uVar4 & 0xff) * 4];
    uVar7 = puVar16[10];
    uVar8 = *(uint *)(&DAT_00054838 + (uVar14 >> 0x10 & 0xff) * 4);
    uVar9 = *(uint *)(&DAT_00054838 + (uVar13 >> 8 & 0xff) * 4);
    uVar18 = *(uint *)(&DAT_00054838 + (uVar4 >> 0x18) * 4);
    bVar3 = (&DAT_00054838)[(uVar13 & 0xff) * 4];
    uVar10 = puVar16[0xb];
    uVar11 = *(uint *)(&DAT_00054838 + (uVar21 >> 0x10 & 0xff) * 4);
    uVar12 = *(uint *)(&DAT_00054838 + (uVar14 >> 8 & 0xff) * 4);
    local_38 = FUN_00046810(*(uint *)(&DAT_00054838 + (uVar13 >> 0x18) * 4) & 0xff000000 ^
                            (uint)(byte)(&DAT_00054838)[(uVar14 & 0xff) * 4] ^ *puVar17 ^
                            *(uint *)(&DAT_00054838 + (uVar4 >> 0x10 & 0xff) * 4) & 0xff0000 ^
                            *(uint *)(&DAT_00054838 + (uVar21 >> 8 & 0xff) * 4) & 0xff00);
    local_34 = FUN_00046810(uVar20 & 0xff000000 ^ (uint)bVar1 ^ uVar15 ^ uVar5 & 0xff0000 ^
                            uVar6 & 0xff00);
    local_30 = FUN_00046810(uVar19 & 0xff000000 ^ (uint)bVar2 ^ uVar7 ^ uVar8 & 0xff0000 ^
                            uVar9 & 0xff00);
    local_2c[0] = FUN_00046810(uVar18 & 0xff000000 ^ (uint)bVar3 ^ uVar10 ^ uVar11 & 0xff0000 ^
                               uVar12 & 0xff00);
    memcpy(param_3,&local_38,4);
    memcpy((void *)((int)param_3 + 4),&local_34,4);
    memcpy((void *)((int)param_3 + 8),&local_30,4);
    memcpy((void *)((int)param_3 + 0xc),local_2c,4);
  }
  return;
}



void FUN_00047294(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_1 | param_2) & 3) == 0) {
    do {
      *(uint *)(param_1 + iVar1) = *(uint *)(param_1 + iVar1) ^ *(uint *)(param_2 + iVar1);
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0x10);
    return;
  }
  iVar1 = 0;
  do {
    *(byte *)(param_1 + iVar1) = *(byte *)(param_2 + iVar1) ^ *(byte *)(param_1 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return;
}



undefined4 AesSetIV(int param_1,void *param_2)

{
  if (param_1 != 0) {
    if (param_2 == (void *)0x0) {
      memset((void *)(param_1 + 0xf4),0,0x10);
    }
    else {
      memcpy((void *)(param_1 + 0xf4),param_2,0x10);
    }
    return 0;
  }
  return 0xffffff53;
}



undefined4 AesSetKey(uint *param_1,void *param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  if (((param_3 & 0xfffffff7) != 0x10) && (param_3 != 0x20)) {
    return 0xffffff53;
  }
  param_1[0x45] = 0;
  param_1[0x3c] = (param_3 >> 2) + 6;
  memcpy(param_1,param_2,param_3);
  for (puVar3 = param_1; puVar3 != param_1 + (param_3 >> 2); puVar3 = puVar3 + 1) {
    uVar2 = FUN_00046810(*puVar3);
    *puVar3 = uVar2;
  }
  if (param_3 == 0x18) {
    iVar4 = 0;
    puVar3 = param_1;
    while( true ) {
      uVar2 = puVar3[5];
      puVar6 = (uint *)((int)&DAT_00054c38 + iVar4);
      iVar4 = iVar4 + 4;
      uVar7 = *puVar6 ^ *puVar3 ^ *(uint *)(&DAT_00052438 + ((uVar2 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00052438)[((uVar2 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar3[6] = uVar7;
      uVar7 = uVar7 ^ puVar3[1];
      puVar3[7] = uVar7;
      uVar7 = uVar7 ^ puVar3[2];
      puVar3[8] = uVar7;
      uVar7 = uVar7 ^ puVar3[3];
      puVar3[9] = uVar7;
      if (iVar4 == 0x20) break;
      uVar7 = uVar7 ^ puVar3[4];
      puVar3[10] = uVar7;
      puVar3[0xb] = uVar7 ^ uVar2;
      puVar3 = puVar3 + 6;
    }
  }
  else if (param_3 == 0x20) {
    iVar4 = 0;
    puVar3 = param_1;
    while( true ) {
      uVar7 = puVar3[7];
      puVar6 = (uint *)((int)&DAT_00054c38 + iVar4);
      iVar4 = iVar4 + 4;
      uVar2 = *puVar6 ^ *puVar3 ^ *(uint *)(&DAT_00052438 + ((uVar7 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00052438 + ((uVar7 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00052438 + ((uVar7 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar3[8] = uVar2;
      uVar2 = uVar2 ^ puVar3[1];
      puVar3[9] = uVar2;
      uVar2 = uVar2 ^ puVar3[2];
      puVar3[10] = uVar2;
      uVar2 = uVar2 ^ puVar3[3];
      puVar3[0xb] = uVar2;
      if (iVar4 == 0x1c) break;
      uVar2 = *(uint *)(&DAT_00052438 + ((uVar2 >> 0x18) + 0x400) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_00052438)[((uVar2 & 0xff) + 0x400) * 4] ^ puVar3[4] ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4) & 0xff0000 ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 8 & 0xff) + 0x400) * 4) & 0xff00;
      puVar3[0xc] = uVar2;
      uVar2 = uVar2 ^ puVar3[5];
      puVar3[0xd] = uVar2;
      uVar2 = uVar2 ^ puVar3[6];
      puVar3[0xe] = uVar2;
      puVar3[0xf] = uVar2 ^ uVar7;
      puVar3 = puVar3 + 8;
    }
  }
  else {
    if (param_3 != 0x10) {
      return 0xffffff53;
    }
    iVar4 = 0;
    puVar3 = param_1;
    while( true ) {
      uVar2 = puVar3[3];
      puVar6 = (uint *)((int)&DAT_00054c38 + iVar4);
      iVar4 = iVar4 + 4;
      uVar7 = *puVar6 ^ *puVar3 ^ *(uint *)(&DAT_00052438 + ((uVar2 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00052438)[((uVar2 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar3[4] = uVar7;
      uVar7 = uVar7 ^ puVar3[1];
      puVar3[5] = uVar7;
      uVar7 = uVar7 ^ puVar3[2];
      puVar3[6] = uVar7;
      puVar3[7] = uVar7 ^ uVar2;
      if (iVar4 == 0x28) break;
      puVar3 = puVar3 + 4;
    }
  }
  if (param_5 == 1) {
    uVar2 = param_1[0x3c];
    uVar7 = 0;
    puVar3 = param_1;
    puVar6 = param_1 + uVar2 * 4;
    while( true ) {
      if (uVar2 * 4 - uVar7 <= uVar7) break;
      uVar5 = *puVar3;
      uVar7 = uVar7 + 4;
      *puVar3 = *puVar6;
      *puVar6 = uVar5;
      uVar5 = puVar3[1];
      puVar3[1] = puVar6[1];
      puVar6[1] = uVar5;
      uVar5 = puVar3[2];
      puVar3[2] = puVar6[2];
      puVar6[2] = uVar5;
      uVar5 = puVar3[3];
      puVar3[3] = puVar6[3];
      puVar6[3] = uVar5;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + -4;
    }
    puVar3 = param_1;
    for (uVar2 = 1; uVar2 < param_1[0x3c]; uVar2 = uVar2 + 1) {
      puVar6 = puVar3 + 4;
      uVar7 = *puVar6;
      *puVar6 = *(uint *)(&DAT_00054438 +
                         (uint)(byte)(&DAT_00052438)[((uVar7 & 0xff) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00053838 +
                         (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00053c38 +
                         (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00054038 +
                         (uint)(byte)(&DAT_00052438)[((uVar7 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar7 = puVar3[5];
      puVar3[5] = *(uint *)(&DAT_00054438 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053838 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053c38 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00054038 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar7 = puVar3[6];
      puVar3[6] = *(uint *)(&DAT_00054438 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053838 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053c38 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00054038 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar7 = puVar3[7];
      puVar3[7] = *(uint *)(&DAT_00054438 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053838 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053c38 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00054038 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 8 & 0xff) + 0x400) * 4] * 4);
      puVar3 = puVar6;
    }
  }
  uVar1 = AesSetIV(param_1,param_4);
  return uVar1;
}



undefined4 AesSetKeyDirect(uint *param_1,void *param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  param_1[0x45] = 0;
  param_1[0x3c] = (param_3 >> 2) + 6;
  memcpy(param_1,param_2,param_3);
  for (puVar3 = param_1; puVar3 != param_1 + (param_3 >> 2); puVar3 = puVar3 + 1) {
    uVar2 = FUN_00046810(*puVar3);
    *puVar3 = uVar2;
  }
  if (param_3 == 0x18) {
    iVar4 = 0;
    puVar3 = param_1;
    while( true ) {
      uVar2 = puVar3[5];
      puVar6 = (uint *)((int)&DAT_00054c38 + iVar4);
      iVar4 = iVar4 + 4;
      uVar7 = *puVar6 ^ *puVar3 ^ *(uint *)(&DAT_00052438 + ((uVar2 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00052438)[((uVar2 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar3[6] = uVar7;
      uVar7 = uVar7 ^ puVar3[1];
      puVar3[7] = uVar7;
      uVar7 = uVar7 ^ puVar3[2];
      puVar3[8] = uVar7;
      uVar7 = uVar7 ^ puVar3[3];
      puVar3[9] = uVar7;
      if (iVar4 == 0x20) break;
      uVar7 = uVar7 ^ puVar3[4];
      puVar3[10] = uVar7;
      puVar3[0xb] = uVar7 ^ uVar2;
      puVar3 = puVar3 + 6;
    }
  }
  else if (param_3 == 0x20) {
    iVar4 = 0;
    puVar3 = param_1;
    while( true ) {
      uVar7 = puVar3[7];
      puVar6 = (uint *)((int)&DAT_00054c38 + iVar4);
      iVar4 = iVar4 + 4;
      uVar2 = *puVar6 ^ *puVar3 ^ *(uint *)(&DAT_00052438 + ((uVar7 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00052438 + ((uVar7 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00052438 + ((uVar7 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar3[8] = uVar2;
      uVar2 = uVar2 ^ puVar3[1];
      puVar3[9] = uVar2;
      uVar2 = uVar2 ^ puVar3[2];
      puVar3[10] = uVar2;
      uVar2 = uVar2 ^ puVar3[3];
      puVar3[0xb] = uVar2;
      if (iVar4 == 0x1c) break;
      uVar2 = *(uint *)(&DAT_00052438 + ((uVar2 >> 0x18) + 0x400) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_00052438)[((uVar2 & 0xff) + 0x400) * 4] ^ puVar3[4] ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4) & 0xff0000 ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 8 & 0xff) + 0x400) * 4) & 0xff00;
      puVar3[0xc] = uVar2;
      uVar2 = uVar2 ^ puVar3[5];
      puVar3[0xd] = uVar2;
      uVar2 = uVar2 ^ puVar3[6];
      puVar3[0xe] = uVar2;
      puVar3[0xf] = uVar2 ^ uVar7;
      puVar3 = puVar3 + 8;
    }
  }
  else {
    if (param_3 != 0x10) {
      return 0xffffff53;
    }
    iVar4 = 0;
    puVar3 = param_1;
    while( true ) {
      uVar2 = puVar3[3];
      puVar6 = (uint *)((int)&DAT_00054c38 + iVar4);
      iVar4 = iVar4 + 4;
      uVar7 = *puVar6 ^ *puVar3 ^ *(uint *)(&DAT_00052438 + ((uVar2 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00052438)[((uVar2 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00052438 + ((uVar2 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar3[4] = uVar7;
      uVar7 = uVar7 ^ puVar3[1];
      puVar3[5] = uVar7;
      uVar7 = uVar7 ^ puVar3[2];
      puVar3[6] = uVar7;
      puVar3[7] = uVar7 ^ uVar2;
      if (iVar4 == 0x28) break;
      puVar3 = puVar3 + 4;
    }
  }
  if (param_5 == 1) {
    uVar2 = param_1[0x3c];
    uVar7 = 0;
    puVar3 = param_1;
    puVar6 = param_1 + uVar2 * 4;
    while( true ) {
      if (uVar2 * 4 - uVar7 <= uVar7) break;
      uVar5 = *puVar3;
      uVar7 = uVar7 + 4;
      *puVar3 = *puVar6;
      *puVar6 = uVar5;
      uVar5 = puVar3[1];
      puVar3[1] = puVar6[1];
      puVar6[1] = uVar5;
      uVar5 = puVar3[2];
      puVar3[2] = puVar6[2];
      puVar6[2] = uVar5;
      uVar5 = puVar3[3];
      puVar3[3] = puVar6[3];
      puVar6[3] = uVar5;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + -4;
    }
    puVar3 = param_1;
    for (uVar2 = 1; uVar2 < param_1[0x3c]; uVar2 = uVar2 + 1) {
      puVar6 = puVar3 + 4;
      uVar7 = *puVar6;
      *puVar6 = *(uint *)(&DAT_00054438 +
                         (uint)(byte)(&DAT_00052438)[((uVar7 & 0xff) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00053838 +
                         (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00053c38 +
                         (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00054038 +
                         (uint)(byte)(&DAT_00052438)[((uVar7 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar7 = puVar3[5];
      puVar3[5] = *(uint *)(&DAT_00054438 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053838 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053c38 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00054038 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar7 = puVar3[6];
      puVar3[6] = *(uint *)(&DAT_00054438 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053838 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053c38 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00054038 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar7 = puVar3[7];
      puVar3[7] = *(uint *)(&DAT_00054438 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053838 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00053c38 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00054038 +
                           (uint)(byte)(&DAT_00052438)[((uVar7 >> 8 & 0xff) + 0x400) * 4] * 4);
      puVar3 = puVar6;
    }
  }
  uVar1 = AesSetIV(param_1,param_4);
  return uVar1;
}



void AesEncryptDirect(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00046854(param_1,param_3,param_2);
  return;
}



void AesDecryptDirect(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00046d64(param_1,param_3,param_2);
  return;
}



undefined4 AesCbcEncrypt(int param_1,int param_2,int param_3,uint param_4)

{
  void *__src;
  uint uVar1;
  
  uVar1 = 0;
  __src = (void *)(param_1 + 0xf4);
  while( true ) {
    if (uVar1 == param_4 >> 4) break;
    FUN_00047294(__src,param_3 + uVar1 * 0x10);
    FUN_00046854(param_1,__src,__src);
    memcpy((void *)(param_2 + uVar1 * 0x10),__src,0x10);
    uVar1 = uVar1 + 1;
  }
  return 0;
}



undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  void *__dest;
  int iVar2;
  
  uVar1 = 0;
  __dest = (void *)(param_1 + 0x104);
  while( true ) {
    iVar2 = param_2 + uVar1 * 0x10;
    if (uVar1 == param_4 >> 4) break;
    memcpy(__dest,(void *)(param_3 + uVar1 * 0x10),0x10);
    FUN_00046d64(param_1,__dest,iVar2);
    FUN_00047294(iVar2,(void *)(param_1 + 0xf4));
    memcpy((void *)(param_1 + 0xf4),__dest,0x10);
    uVar1 = uVar1 + 1;
  }
  return 0;
}



void AesCbcDecryptWithKey
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_130 [284];
  
  iVar1 = AesSetKey(auStack_130,param_4,param_5,param_6,1);
  if (iVar1 == 0) {
    AesCbcDecrypt(auStack_130,param_1,param_2,param_3);
  }
  return;
}



void AesCtrEncrypt(int param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar1 = (byte *)((param_1 + 0x114) - *(int *)(param_1 + 0x114));
  pbVar5 = param_3;
  pbVar6 = param_2;
  for (; (*(int *)(param_1 + 0x114) != 0 && (param_4 != 0)); param_4 = param_4 - 1) {
    *pbVar6 = *pbVar5 ^ *pbVar1;
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
    pbVar1 = pbVar1 + 1;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  iVar4 = 0;
  pbVar1 = (byte *)0x0;
  iVar7 = param_1;
  while( true ) {
    if (param_4 - iVar4 < 0x10) break;
    FUN_00046854(param_1,param_1 + 0xf4,pbVar6 + iVar4,pbVar1,iVar7,pbVar1,param_3);
    FUN_0004682c(param_1 + 0xf4);
    FUN_00047294(pbVar6 + iVar4,pbVar5 + iVar4);
    iVar4 = iVar4 + 0x10;
    *(byte **)(param_1 + 0x114) = pbVar1;
    param_2 = pbVar1;
  }
  uVar2 = param_4 & 0xfffffff0;
  if ((param_4 & 0xf) != 0) {
    FUN_00046854(param_1,param_1 + 0xf4,param_1 + 0x104,uVar2,iVar7,param_2,param_3);
    FUN_0004682c(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x114) = 0x10;
    uVar3 = 0;
    do {
      pbVar6[uVar3 + uVar2] = *(byte *)(param_1 + 0x104 + uVar3) ^ pbVar5[uVar3 + uVar2];
      uVar3 = uVar3 + 1;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
    } while (uVar3 != (param_4 & 0xf));
  }
  return;
}



ulonglong FUN_00047b90(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}



void FUN_00047c38(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00047b90();
    return;
  }
  raise(8);
  return;
}



ulonglong FUN_00047c58(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
  }
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return CONCAT44(uVar3,uVar1);
}



uint FUN_00047c60(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if (in_NG) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



void FUN_00047d34(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00047c60();
    return;
  }
  raise(8);
  return;
}



ulonglong FUN_0004800c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  bool bVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  iVar4 = LZCOUNT(param_1);
  uVar5 = iVar4 + 0x15;
  bVar8 = SBORROW4(uVar5,0x20);
  uVar2 = iVar4 - 0xb;
  bVar7 = uVar2 == 0;
  uVar6 = uVar2;
  uVar3 = uVar2;
  if (uVar5 < 0x20) {
    bVar8 = SCARRY4(uVar2,0xc);
    uVar3 = iVar4 + 1;
    bVar7 = uVar3 == 0;
    uVar6 = uVar5;
    if (!bVar7 && -0xd < (int)uVar2) {
      uVar1 = param_1 << uVar5;
      param_1 = param_1 >> (0xc - uVar3 & 0xff);
      goto LAB_00047ef8;
    }
  }
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    in_r12 = 0x20 - uVar6;
  }
  param_1 = param_1 << (uVar6 & 0xff);
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    param_1 = param_1 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar6 & 0xff);
  }
LAB_00047ef8:
  if (uVar5 < 0x433) {
    return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
  }
  uVar6 = ~(0x432 - uVar5);
  if (0x1e < (int)uVar6) {
    return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
  }
  if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
    uVar6 = uVar6 + 1;
    return CONCAT44(param_1 >> (uVar6 & 0xff),
                    uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
  }
  uVar6 = 0xc - (uVar6 - 0x13);
  return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



ulonglong FUN_00048030(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_r12;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar8 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar8 < 0) {
    uVar2 = -param_1;
  }
  uVar1 = 0;
  iVar5 = LZCOUNT(uVar2);
  uVar6 = iVar5 + 0x15;
  bVar10 = SBORROW4(uVar6,0x20);
  uVar3 = iVar5 - 0xb;
  bVar9 = uVar3 == 0;
  uVar7 = uVar3;
  uVar4 = uVar3;
  if (uVar6 < 0x20) {
    bVar10 = SCARRY4(uVar3,0xc);
    uVar4 = iVar5 + 1;
    bVar9 = uVar4 == 0;
    uVar7 = uVar6;
    if (!bVar9 && -0xd < (int)uVar3) {
      uVar1 = uVar2 << uVar6;
      uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
      goto LAB_00047ef8;
    }
  }
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    in_r12 = 0x20 - uVar7;
  }
  uVar2 = uVar2 << (uVar7 & 0xff);
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar7 & 0xff);
  }
LAB_00047ef8:
  if (uVar6 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
  }
  uVar7 = ~(0x432 - uVar6);
  if (0x1e < (int)uVar7) {
    return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
    uVar7 = uVar7 + 1;
    return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
                    uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
  }
  uVar8 = 0xc - (uVar7 - 0x13);
  return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
         0x80000000ffffffff;
}



ulonglong FUN_0004810c(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint extraout_r2;
  uint extraout_r3;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r5;
  uint uVar9;
  uint uVar10;
  uint extraout_r12;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  
  uVar14 = CONCAT44(param_2,param_1);
  uVar10 = 0x7ff;
  uVar6 = param_2 >> 0x14 & 0x7ff;
  bVar11 = uVar6 == 0;
  if (!bVar11) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar11 = unaff_r5 == 0;
  }
  if (!bVar11) {
    bVar11 = uVar6 == 0x7ff;
  }
  if (!bVar11) {
    bVar11 = unaff_r5 == 0x7ff;
  }
  if (bVar11) {
    uVar14 = FUN_000482ec();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    uVar10 = extraout_r12;
  }
  uVar4 = (uint)(uVar14 >> 0x20);
  iVar7 = uVar6 + unaff_r5;
  uVar9 = uVar4 ^ param_4;
  uVar4 = uVar4 & ~(uVar10 << 0x15);
  param_4 = param_4 & ~(uVar10 << 0x15);
  uVar6 = uVar4 | 0x100000;
  uVar5 = param_4 | 0x100000;
  if ((uint)uVar14 == 0 && (uVar4 & 0xfffff) == 0 || param_3 == 0 && (param_4 & 0xfffff) == 0) {
    param_3 = (uint)uVar14 | param_3;
    uVar5 = (uVar9 & 0x80000000 | uVar6) ^ uVar5;
    uVar6 = uVar10 >> 1;
    bVar13 = SBORROW4(iVar7,uVar6);
    uVar8 = iVar7 - uVar6;
    bVar11 = uVar8 == 0;
    uVar4 = uVar8;
    if (!bVar11 && (int)uVar6 <= iVar7) {
      bVar13 = SBORROW4(uVar10,uVar8);
      uVar4 = uVar10 - uVar8;
      bVar11 = uVar10 == uVar8;
    }
    if (!bVar11 && (int)uVar4 < 0 == bVar13) {
      return CONCAT44(uVar5 | uVar8 * 0x100000,param_3);
    }
    uVar5 = uVar5 | 0x100000;
    uVar10 = 0;
    bVar13 = SBORROW4(uVar8,1);
    uVar8 = uVar8 - 1;
    bVar11 = uVar8 == 0;
    uVar6 = uVar8;
  }
  else {
    uVar2 = (ulonglong)param_3 * (uVar14 & 0xffffffff);
    uVar14 = (ulonglong)uVar5 * (uVar14 & 0xffffffff) +
             (ulonglong)param_3 * (ulonglong)uVar6 + (uVar2 >> 0x20);
    uVar4 = (uint)uVar14;
    lVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 + (uVar14 >> 0x20);
    uVar10 = (uint)lVar1;
    uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((int)uVar2 != 0) {
      uVar4 = uVar4 | 1;
    }
    uVar8 = (iVar7 + -0xff) - ((uVar6 < 0x200) + 0x300);
    if (uVar6 < 0x200) {
      bVar3 = (byte)(uVar4 >> 0x1f);
      uVar4 = uVar4 << 1;
      lVar1 = CONCAT44(uVar6 * 2 + (uint)(CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar3)),
                       uVar10 * 2 + (uint)bVar3);
    }
    uVar5 = uVar9 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
    param_3 = (uint)lVar1 << 0xb | uVar4 >> 0x15;
    uVar10 = uVar4 * 0x800;
    bVar12 = 0xfc < uVar8;
    bVar13 = SBORROW4(uVar8,0xfd);
    uVar9 = uVar8 - 0xfd;
    bVar11 = uVar9 == 0;
    uVar6 = uVar9;
    if (bVar12 && !bVar11) {
      bVar12 = 0x6ff < uVar9;
      bVar13 = SBORROW4(uVar9,0x700);
      uVar6 = uVar8 - 0x7fd;
      bVar11 = uVar9 == 0x700;
    }
    if (!bVar12 || bVar11) {
      bVar11 = 0x7fffffff < uVar10;
      if (uVar10 == 0x80000000) {
        bVar11 = (bool)((byte)(uVar4 >> 0x15) & 1);
      }
      return CONCAT44(uVar5 + uVar8 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar11),param_3 + bVar11
                     );
    }
  }
  if (!bVar11 && (int)uVar6 < 0 == bVar13) {
    return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  if (-0x36 < (int)uVar8) {
    uVar6 = -uVar8;
    uVar4 = uVar6 - 0x20;
    if (0x1f < (int)uVar6) {
      uVar9 = param_3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
      uVar6 = (uVar5 >> (uVar4 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar4 & 0xff))) -
              ((int)uVar9 >> 0x1f);
      if ((uVar10 == 0 && param_3 << (0x20 - uVar4 & 0xff) == 0) && (uVar9 & 0x7fffffff) == 0) {
        uVar6 = uVar6 & ~(uVar9 >> 0x1f);
      }
      return CONCAT44(uVar5,uVar6) & 0x80000000ffffffff;
    }
    if (uVar6 - 0x14 != 0 && -0xd < (int)uVar4) {
      uVar4 = 0xc - (uVar6 - 0x14);
      uVar6 = param_3 << (uVar4 & 0xff);
      uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
      uVar9 = uVar4 + -((int)uVar6 >> 0x1f);
      if (uVar10 == 0 && (uVar6 & 0x7fffffff) == 0) {
        uVar9 = uVar9 & ~(uVar6 >> 0x1f);
      }
      return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar9);
    }
    uVar4 = param_3 << (uVar8 + 0x20 & 0xff);
    uVar9 = param_3 >> (uVar6 & 0xff) | uVar5 << (uVar8 + 0x20 & 0xff);
    uVar8 = uVar9 + -((int)uVar4 >> 0x1f);
    if (uVar10 == 0 && (uVar4 & 0x7fffffff) == 0) {
      uVar8 = uVar8 & ~(uVar4 >> 0x1f);
    }
    return CONCAT44((uVar5 & 0x80000000) + ((uVar5 & 0x7fffffff) >> (uVar6 & 0xff)) +
                    (uint)CARRY4(uVar9,-((int)uVar4 >> 0x1f)),uVar8);
  }
  return (ulonglong)(uVar5 & 0x80000000) << 0x20;
}



ulonglong FUN_000482ec(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  uint uVar5;
  uint in_r12;
  
  uVar4 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 != in_r12 && uVar4 != in_r12) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
    {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    if (unaff_r4 == 0) {
      uVar5 = param_2 & 0x80000000;
      do {
        iVar2 = param_1 >> 0x1f;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 - iVar2;
      } while ((param_2 & 0x100000) == 0);
      param_2 = param_2 | uVar5;
      if (uVar4 != 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    do {
      iVar2 = param_3 >> 0x1f;
      param_3 = param_3 << 1;
      param_4 = param_4 * 2 - iVar2;
    } while ((param_4 & 0x100000) == 0);
    return CONCAT44(param_2,param_1);
  }
  bVar1 = (param_2 & 0x7fffffff) != 0;
  uVar5 = param_4;
  iVar2 = param_3;
  if (param_1 != 0 || bVar1) {
    uVar5 = param_2;
    iVar2 = param_1;
  }
  uVar3 = uVar5;
  if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
      ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
     ((uVar4 != in_r12 ||
      (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
    return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}



ulonglong FUN_00048378(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r2;
  uint uVar3;
  uint extraout_r3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r5;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint extraout_r12;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  
  uVar16 = CONCAT44(param_2,param_1);
  uVar11 = 0x7ff;
  uVar6 = param_2 >> 0x14 & 0x7ff;
  bVar13 = uVar6 == 0;
  if (!bVar13) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar13 = unaff_r5 == 0;
  }
  if (!bVar13) {
    bVar13 = uVar6 == 0x7ff;
  }
  if (!bVar13) {
    bVar13 = unaff_r5 == 0x7ff;
  }
  if (bVar13) {
    uVar16 = FUN_0004850c();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    uVar11 = extraout_r12;
  }
  uVar8 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar2 = (uint)uVar16;
  iVar7 = uVar6 - unaff_r5;
  if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
    uVar6 = (uVar8 ^ param_4) & 0x80000000 | uVar8 & 0xfffff;
    bVar14 = SCARRY4(iVar7,uVar11 >> 1);
    uVar8 = iVar7 + (uVar11 >> 1);
    bVar13 = (int)uVar8 < 0;
    bVar15 = uVar8 == 0;
    if (!bVar15 && bVar13 == bVar14) {
      bVar14 = SBORROW4(uVar11,uVar8);
      bVar13 = (int)(uVar11 - uVar8) < 0;
      bVar15 = uVar11 == uVar8;
    }
    if (!bVar15 && bVar13 == bVar14) {
      return CONCAT44(uVar6 | uVar8 * 0x100000,uVar2);
    }
    uVar6 = uVar6 | 0x100000;
    uVar4 = 0;
    bVar15 = SBORROW4(uVar8,1);
    uVar8 = uVar8 - 1;
    bVar13 = uVar8 == 0;
    uVar11 = uVar8;
  }
  else {
    uVar4 = (param_4 & 0xfffff) << 8 | 0x10000000 | param_3 >> 0x18;
    uVar11 = param_3 << 8;
    uVar9 = (uVar8 & 0xfffff) << 8 | 0x10000000 | uVar2 >> 0x18;
    uVar2 = uVar2 * 0x100;
    uVar6 = (uVar8 ^ param_4) & 0x80000000;
    bVar13 = uVar4 <= uVar9;
    if (uVar9 == uVar4) {
      bVar13 = uVar11 <= uVar2;
    }
    iVar7 = iVar7 + (uint)bVar13;
    uVar8 = iVar7 + 0x3fd;
    if (!bVar13) {
      uVar4 = uVar4 >> 1;
      uVar11 = (uint)((byte)(param_3 >> 0x18) & 1) << 0x1f | (param_3 & 0xffffff) << 7;
    }
    uVar10 = uVar2 - uVar11;
    uVar9 = uVar9 - (uVar4 + (uVar2 < uVar11));
    uVar5 = uVar4 >> 1;
    uVar3 = (uint)((byte)uVar4 & 1) << 0x1f | uVar11 >> 1;
    uVar2 = 0x100000;
    uVar11 = 0x80000;
    while( true ) {
      bVar13 = uVar3 <= uVar10;
      if (uVar5 < uVar9 || uVar9 - uVar5 < (uint)bVar13) {
        uVar10 = uVar10 - uVar3;
        uVar2 = uVar2 | uVar11;
        uVar9 = uVar9 - (uVar5 + !bVar13);
      }
      uVar4 = uVar5 >> 1;
      uVar3 = (uint)((byte)uVar5 & 1) << 0x1f | uVar3 >> 1;
      bVar13 = uVar3 <= uVar10;
      if (uVar4 < uVar9 || uVar9 - uVar4 < (uint)bVar13) {
        uVar10 = uVar10 - uVar3;
        uVar2 = uVar2 | uVar11 >> 1;
        uVar9 = uVar9 - (uVar4 + !bVar13);
      }
      uVar12 = uVar5 >> 2;
      uVar1 = (uint)((byte)uVar4 & 1) << 0x1f | uVar3 >> 1;
      bVar13 = uVar1 <= uVar10;
      if (uVar12 < uVar9 || uVar9 - uVar12 < (uint)bVar13) {
        uVar10 = uVar10 - uVar1;
        uVar2 = uVar2 | uVar11 >> 2;
        uVar9 = uVar9 - (uVar12 + !bVar13);
      }
      uVar5 = uVar5 >> 3;
      uVar3 = (uint)((byte)uVar12 & 1) << 0x1f | uVar1 >> 1;
      bVar13 = uVar3 <= uVar10;
      if (uVar5 < uVar9 || uVar9 - uVar5 < (uint)bVar13) {
        uVar10 = uVar10 - uVar3;
        uVar2 = uVar2 | uVar11 >> 3;
        uVar9 = uVar9 - (uVar5 + !bVar13);
      }
      uVar4 = uVar9 | uVar10;
      if (uVar4 == 0) break;
      uVar9 = uVar9 << 4 | uVar10 >> 0x1c;
      uVar10 = uVar10 << 4;
      uVar5 = uVar5 << 3 | uVar3 >> 0x1d;
      uVar3 = (uVar1 >> 1) << 3;
      uVar11 = uVar11 >> 4;
      if (uVar11 == 0) {
        if ((uVar6 & 0x100000) != 0) goto LAB_000484b8;
        uVar6 = uVar6 | uVar2;
        uVar2 = 0;
        uVar11 = 0x80000000;
      }
    }
    if ((uVar6 & 0x100000) == 0) {
      uVar6 = uVar6 | uVar2;
      uVar2 = 0;
    }
LAB_000484b8:
    bVar14 = 0xfc < uVar8;
    bVar15 = SBORROW4(uVar8,0xfd);
    uVar12 = iVar7 + 0x300;
    bVar13 = uVar12 == 0;
    uVar11 = uVar12;
    if (bVar14 && !bVar13) {
      bVar14 = 0x6ff < uVar12;
      bVar15 = SBORROW4(uVar12,0x700);
      uVar11 = iVar7 - 0x400;
      bVar13 = uVar12 == 0x700;
    }
    if (!bVar14 || bVar13) {
      bVar13 = uVar5 <= uVar9;
      if (uVar9 == uVar5) {
        bVar13 = uVar3 <= uVar10;
      }
      if (uVar9 == uVar5 && uVar10 == uVar3) {
        bVar13 = (bool)((byte)uVar2 & 1);
      }
      return CONCAT44(uVar6 + uVar8 * 0x100000 + (uint)CARRY4(uVar2,(uint)bVar13),uVar2 + bVar13);
    }
  }
  if (!bVar13 && (int)uVar11 < 0 == bVar15) {
    return (ulonglong)(uVar6 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  if ((int)uVar8 < -0x35) {
    return (ulonglong)(uVar6 & 0x80000000) << 0x20;
  }
  uVar11 = -uVar8;
  uVar9 = uVar11 - 0x20;
  if (0x1f < (int)uVar11) {
    uVar8 = uVar2 >> (uVar9 & 0xff) | uVar6 << (0x20 - uVar9 & 0xff);
    uVar11 = (uVar6 >> (uVar9 & 0xff) & ~((uVar6 & 0x80000000) >> (uVar9 & 0xff))) -
             ((int)uVar8 >> 0x1f);
    if ((uVar4 == 0 && uVar2 << (0x20 - uVar9 & 0xff) == 0) && (uVar8 & 0x7fffffff) == 0) {
      uVar11 = uVar11 & ~(uVar8 >> 0x1f);
    }
    return CONCAT44(uVar6,uVar11) & 0x80000000ffffffff;
  }
  if (uVar11 - 0x14 != 0 && -0xd < (int)uVar9) {
    uVar8 = 0xc - (uVar11 - 0x14);
    uVar11 = uVar2 << (uVar8 & 0xff);
    uVar2 = uVar2 >> (0x20 - uVar8 & 0xff) | uVar6 << (uVar8 & 0xff);
    uVar8 = uVar2 + -((int)uVar11 >> 0x1f);
    if (uVar4 == 0 && (uVar11 & 0x7fffffff) == 0) {
      uVar8 = uVar8 & ~(uVar11 >> 0x1f);
    }
    return CONCAT44((uVar6 & 0x80000000) + (uint)CARRY4(uVar2,-((int)uVar11 >> 0x1f)),uVar8);
  }
  uVar9 = uVar2 << (uVar8 + 0x20 & 0xff);
  uVar2 = uVar2 >> (uVar11 & 0xff) | uVar6 << (uVar8 + 0x20 & 0xff);
  uVar8 = uVar2 + -((int)uVar9 >> 0x1f);
  if (uVar4 == 0 && (uVar9 & 0x7fffffff) == 0) {
    uVar8 = uVar8 & ~(uVar9 >> 0x1f);
  }
  return CONCAT44((uVar6 & 0x80000000) + ((uVar6 & 0x7fffffff) >> (uVar11 & 0xff)) +
                  (uint)CARRY4(uVar2,-((int)uVar9 >> 0x1f)),uVar8);
}



ulonglong FUN_0004850c(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint unaff_r4;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  
  uVar2 = in_r12 & param_4 >> 0x14;
  uVar3 = param_2;
  if (unaff_r4 != in_r12 || uVar2 != in_r12) {
    if (unaff_r4 == in_r12) {
      if ((param_1 == 0 && (param_2 & 0xfffff) == 0) &&
         (param_1 = param_3, uVar3 = param_4, uVar2 != in_r12)) {
LAB_00048354:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar2 == in_r12) {
      param_1 = param_3;
      uVar3 = param_4;
      if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
LAB_00048308:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
      }
    }
    else {
      if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) &&
          (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) {
        if (unaff_r4 == 0) {
          uVar3 = param_2 & 0x80000000;
          do {
            iVar1 = param_1 >> 0x1f;
            param_1 = param_1 << 1;
            param_2 = param_2 * 2 - iVar1;
          } while ((param_2 & 0x100000) == 0);
          param_2 = param_2 | uVar3;
          if (uVar2 != 0) {
            return CONCAT44(param_2,param_1);
          }
        }
        do {
          iVar1 = param_3 >> 0x1f;
          param_3 = param_3 << 1;
          param_4 = param_4 * 2 - iVar1;
        } while ((param_4 & 0x100000) == 0);
        return CONCAT44(param_2,param_1);
      }
      if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) goto LAB_00048354;
      if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) goto LAB_00048308;
    }
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}



uint FUN_0004858c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  if (((int)(param_2 << 1) >> 0x15 == -1 || (int)(param_4 << 1) >> 0x15 == -1) &&
     ((((int)(param_2 << 1) >> 0x15 == -1 && (param_1 != 0 || (param_2 & 0xfffff) != 0)) ||
      (((int)(param_4 << 1) >> 0x15 == -1 && (param_3 != 0 || (param_4 & 0xfffff) != 0)))))) {
    return 1;
  }
  bVar3 = (param_2 & 0x7fffffff) == 0;
  bVar2 = param_1 == 0 && bVar3;
  if (param_1 == 0 && bVar3) {
    bVar2 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
  }
  if (!bVar2) {
    bVar2 = param_2 == param_4;
  }
  if (!bVar2 || param_1 != param_3) {
    uVar1 = param_2 ^ param_4;
    bVar3 = uVar1 == 0;
    if (-1 < (int)uVar1) {
      bVar3 = param_2 == param_4;
    }
    bVar2 = -1 < (int)uVar1 && param_4 <= param_2;
    if (bVar3) {
      bVar2 = param_3 <= param_1;
    }
    param_4 = (int)param_4 >> 0x1f;
    if (!bVar2) {
      param_4 = ~param_4;
    }
    return param_4 | 1;
  }
  return 0;
}



void FUN_00048614(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00048630(param_3,param_4,param_1,param_2);
  return;
}



undefined4 FUN_00048630(undefined4 param_1)

{
  FUN_0004858c();
  return param_1;
}



undefined1 FUN_00048644(void)

{
  undefined1 in_ZR;
  
  FUN_00048630();
  return in_ZR;
}



bool FUN_00048658(void)

{
  undefined1 in_CY;
  
  FUN_00048630();
  return !(bool)in_CY;
}



bool FUN_0004866c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  FUN_00048630();
  return !(bool)in_CY || (bool)in_ZR;
}



bool FUN_00048680(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  FUN_00048614();
  return !(bool)in_CY || (bool)in_ZR;
}



bool FUN_00048694(void)

{
  undefined1 in_CY;
  
  FUN_00048614();
  return !(bool)in_CY;
}



uint FUN_000486a8(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (SUB41(param_2 >> 0x1f,0)) {
    return 0;
  }
  iVar1 = param_2 * 2 + 0x200000;
  if (param_2 * 2 < 0xffe00000) {
    if (-1 < iVar1) {
      return 0;
    }
    uVar2 = -(iVar1 >> 0x15) - 0x3e1;
    if (-1 < (int)uVar2) {
      return (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar2 & 0xff);
    }
  }
  else if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    return 0;
  }
  return 0xffffffff;
}



void FUN_000486fc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00048784();
    return;
  }
  raise(8);
  return;
}



void FUN_00048748(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_000487c0();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = param_2 - ((int)((ulonglong)lVar2 >> 0x20) + (uint)(param_1 < uVar1));
  return;
}



void FUN_00048784(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00048c58();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = param_2 - ((int)((ulonglong)lVar2 >> 0x20) + (uint)(param_1 < uVar1));
  return;
}



undefined8 FUN_000487c0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if ((int)param_2 < 0) {
    bVar13 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar13);
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = 0;
  }
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar13);
    uVar7 = ~uVar7;
  }
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = FUN_00047b90(1,0);
      }
      iVar6 = LZCOUNT(param_3);
      if (iVar6 == 0) {
        iVar6 = param_2 - param_3;
        uVar3 = 1;
      }
      else {
        param_3 = param_3 << iVar6;
        uVar5 = param_2 >> (0x20U - iVar6 & 0xff);
        uVar12 = param_3 >> 0x10;
        uVar9 = param_1 >> (0x20U - iVar6 & 0xff) | param_2 << iVar6;
        param_1 = param_1 << iVar6;
        iVar6 = FUN_00047b90(uVar5,uVar12);
        uVar3 = (param_3 & 0xffff) * iVar6;
        FUN_00047c38(uVar5,uVar12);
        uVar5 = uVar9 >> 0x10 | extraout_r1_01 << 0x10;
        iVar2 = iVar6;
        if (uVar5 < uVar3) {
          bVar13 = CARRY4(uVar5,param_3);
          uVar5 = uVar5 + param_3;
          iVar2 = iVar6 + -1;
          if ((!bVar13) && (uVar5 < uVar3)) {
            uVar5 = uVar5 + param_3;
            iVar2 = iVar6 + -2;
          }
        }
        uVar8 = FUN_00047b90(uVar5 - uVar3,uVar12);
        uVar10 = uVar8 * (param_3 & 0xffff);
        FUN_00047c38(uVar5 - uVar3,uVar12);
        uVar12 = uVar9 & 0xffff | extraout_r1_02 << 0x10;
        uVar3 = uVar8;
        if (uVar12 < uVar10) {
          bVar13 = CARRY4(uVar12,param_3);
          uVar12 = uVar12 + param_3;
          uVar3 = uVar8 - 1;
          if ((!bVar13) && (uVar12 < uVar10)) {
            uVar12 = uVar12 + param_3;
            uVar3 = uVar8 - 2;
          }
        }
        iVar6 = uVar12 - uVar10;
        uVar3 = uVar3 | iVar2 << 0x10;
      }
      uVar12 = param_3 >> 0x10;
      iVar2 = FUN_00047b90(iVar6,uVar12);
      uVar9 = (param_3 & 0xffff) * iVar2;
      FUN_00047c38(iVar6,uVar12);
      uVar5 = param_1 >> 0x10 | extraout_r1_03 << 0x10;
      iVar6 = iVar2;
      if (uVar5 < uVar9) {
        bVar13 = CARRY4(uVar5,param_3);
        uVar5 = uVar5 + param_3;
        iVar6 = iVar2 + -1;
        if ((!bVar13) && (uVar5 < uVar9)) {
          uVar5 = uVar5 + param_3;
          iVar6 = iVar2 + -2;
        }
      }
      uVar8 = FUN_00047b90(uVar5 - uVar9,uVar12);
      uVar10 = uVar8 * (param_3 & 0xffff);
      FUN_00047c38(uVar5 - uVar9,uVar12);
      uVar5 = param_1 & 0xffff | extraout_r1_04 << 0x10;
      uVar12 = uVar8;
      if (uVar5 < uVar10) {
        uVar12 = uVar8 - 1;
        if ((!CARRY4(uVar5,param_3)) && (uVar5 + param_3 < uVar10)) {
          uVar12 = uVar8 - 2;
        }
      }
      uVar12 = uVar12 | iVar6 << 0x10;
      goto LAB_00048c38;
    }
    iVar6 = LZCOUNT(param_3);
    if (iVar6 != 0) {
      param_3 = param_3 << iVar6;
      param_2 = param_1 >> (0x20U - iVar6 & 0xff) | param_2 << iVar6;
      param_1 = param_1 << iVar6;
    }
    uVar12 = param_3 >> 0x10;
    iVar2 = FUN_00047b90(param_2,uVar12);
    uVar9 = (param_3 & 0xffff) * iVar2;
    FUN_00047c38(param_2,uVar12);
    uVar5 = param_1 >> 0x10 | extraout_r1 << 0x10;
    iVar6 = iVar2;
    if (uVar5 < uVar9) {
      bVar13 = CARRY4(uVar5,param_3);
      uVar5 = uVar5 + param_3;
      iVar6 = iVar2 + -1;
      if ((!bVar13) && (uVar5 < uVar9)) {
        uVar5 = uVar5 + param_3;
        iVar6 = iVar2 + -2;
      }
    }
    uVar3 = FUN_00047b90(uVar5 - uVar9,uVar12);
    uVar8 = uVar3 * (param_3 & 0xffff);
    FUN_00047c38(uVar5 - uVar9,uVar12);
    uVar5 = param_1 & 0xffff | extraout_r1_00 << 0x10;
    uVar12 = uVar3;
    if (uVar5 < uVar8) {
      uVar12 = uVar3 - 1;
      if ((!CARRY4(uVar5,param_3)) && (uVar5 + param_3 < uVar8)) {
        uVar12 = uVar3 - 2;
      }
    }
    uVar12 = uVar12 | iVar6 << 0x10;
LAB_00048c28:
    uVar3 = 0;
  }
  else {
    if (param_4 <= param_2) {
      iVar6 = LZCOUNT(param_4);
      if (iVar6 != 0) {
        uVar9 = 0x20 - iVar6;
        uVar3 = param_3 >> (uVar9 & 0xff) | param_4 << iVar6;
        uVar5 = param_2 >> (uVar9 & 0xff);
        uVar12 = uVar3 >> 0x10;
        uVar9 = param_1 >> (uVar9 & 0xff) | param_2 << iVar6;
        iVar4 = FUN_00047b90(uVar5,uVar12);
        uVar8 = (uVar3 & 0xffff) * iVar4;
        FUN_00047c38(uVar5,uVar12);
        uVar5 = uVar9 >> 0x10 | extraout_r1_05 << 0x10;
        iVar2 = iVar4;
        if (uVar5 < uVar8) {
          bVar13 = CARRY4(uVar5,uVar3);
          uVar5 = uVar5 + uVar3;
          iVar2 = iVar4 + -1;
          if ((!bVar13) && (uVar5 < uVar8)) {
            uVar5 = uVar5 + uVar3;
            iVar2 = iVar4 + -2;
          }
        }
        uVar10 = FUN_00047b90(uVar5 - uVar8,uVar12);
        uVar11 = uVar10 * (uVar3 & 0xffff);
        FUN_00047c38(uVar5 - uVar8,uVar12);
        uVar5 = uVar9 & 0xffff | extraout_r1_06 << 0x10;
        uVar12 = uVar10;
        if (uVar5 < uVar11) {
          bVar13 = CARRY4(uVar5,uVar3);
          uVar5 = uVar5 + uVar3;
          uVar12 = uVar10 - 1;
          if ((!bVar13) && (uVar5 < uVar11)) {
            uVar5 = uVar5 + uVar3;
            uVar12 = uVar10 - 2;
          }
        }
        uVar12 = uVar12 | iVar2 << 0x10;
        lVar1 = (ulonglong)(param_3 << iVar6) * (ulonglong)uVar12;
        uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar5 = uVar5 - uVar11;
        if ((uVar9 < uVar5 || uVar9 == uVar5) &&
           (uVar3 = 0, (uint)lVar1 <= param_1 << iVar6 || uVar9 != uVar5)) goto LAB_00048c38;
        uVar12 = uVar12 - 1;
        goto LAB_00048c28;
      }
      bVar13 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar13 = param_3 <= param_1;
      }
      if (bVar13) {
        uVar3 = 0;
        uVar12 = 1;
        goto LAB_00048c38;
      }
    }
    uVar3 = 0;
    uVar12 = uVar3;
  }
LAB_00048c38:
  if (uVar7 != 0) {
    bVar13 = uVar12 != 0;
    uVar12 = -uVar12;
    uVar3 = -(uVar3 + bVar13);
  }
  return CONCAT44(uVar3,uVar12);
}



undefined8 FUN_00048c58(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar5;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uVar6;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = FUN_00047b90(1,0,0,0,param_1,param_2,0);
      }
      iVar7 = LZCOUNT(param_3);
      if (iVar7 == 0) {
        iVar7 = param_2 - param_3;
        uVar8 = 1;
        uVar9 = param_1;
      }
      else {
        param_3 = param_3 << iVar7;
        uVar5 = param_2 >> (0x20U - iVar7 & 0xff);
        uVar9 = param_1 << iVar7;
        uVar6 = param_3 >> 0x10;
        uVar11 = param_1 >> (0x20U - iVar7 & 0xff) | param_2 << iVar7;
        iVar7 = FUN_00047b90(uVar5,uVar6);
        uVar8 = (param_3 & 0xffff) * iVar7;
        FUN_00047c38(uVar5,uVar6);
        uVar5 = uVar11 >> 0x10 | extraout_r1_01 << 0x10;
        iVar2 = iVar7;
        if (uVar5 < uVar8) {
          bVar12 = CARRY4(uVar5,param_3);
          uVar5 = uVar5 + param_3;
          iVar2 = iVar7 + -1;
          if ((!bVar12) && (uVar5 < uVar8)) {
            uVar5 = uVar5 + param_3;
            iVar2 = iVar7 + -2;
          }
        }
        uVar3 = FUN_00047b90(uVar5 - uVar8,uVar6);
        uVar10 = uVar3 * (param_3 & 0xffff);
        FUN_00047c38(uVar5 - uVar8,uVar6);
        uVar6 = uVar11 & 0xffff | extraout_r1_02 << 0x10;
        uVar8 = uVar3;
        if (uVar6 < uVar10) {
          bVar12 = CARRY4(uVar6,param_3);
          uVar6 = uVar6 + param_3;
          uVar8 = uVar3 - 1;
          if ((!bVar12) && (uVar6 < uVar10)) {
            uVar6 = uVar6 + param_3;
            uVar8 = uVar3 - 2;
          }
        }
        iVar7 = uVar6 - uVar10;
        uVar8 = uVar8 | iVar2 << 0x10;
      }
      uVar6 = param_3 >> 0x10;
      iVar2 = FUN_00047b90(iVar7,uVar6);
      uVar11 = (param_3 & 0xffff) * iVar2;
      FUN_00047c38(iVar7,uVar6);
      uVar5 = uVar9 >> 0x10 | extraout_r1_03 << 0x10;
      iVar7 = iVar2;
      if (uVar5 < uVar11) {
        bVar12 = CARRY4(uVar5,param_3);
        uVar5 = uVar5 + param_3;
        iVar7 = iVar2 + -1;
        if ((!bVar12) && (uVar5 < uVar11)) {
          uVar5 = uVar5 + param_3;
          iVar7 = iVar2 + -2;
        }
      }
      uVar3 = FUN_00047b90(uVar5 - uVar11,uVar6);
      uVar10 = uVar3 * (param_3 & 0xffff);
      FUN_00047c38(uVar5 - uVar11,uVar6);
      uVar6 = uVar9 & 0xffff | extraout_r1_04 << 0x10;
      uVar9 = uVar3;
      if (uVar6 < uVar10) {
        uVar9 = uVar3 - 1;
        if ((!CARRY4(uVar6,param_3)) && (uVar6 + param_3 < uVar10)) {
          uVar9 = uVar3 - 2;
        }
      }
      uVar9 = uVar9 | iVar7 << 0x10;
      goto LAB_00049050;
    }
    iVar7 = LZCOUNT(param_3);
    uVar9 = param_2;
    uVar6 = param_3;
    if (iVar7 != 0) {
      uVar6 = param_3 << iVar7;
      uVar9 = param_1 >> (0x20U - iVar7 & 0xff) | param_2 << iVar7;
    }
    uVar5 = uVar6 >> 0x10;
    uVar8 = param_1;
    if (iVar7 != 0) {
      uVar8 = param_1 << iVar7;
    }
    iVar2 = FUN_00047b90(uVar9,uVar5,param_3,iVar7,param_1,param_2,param_3);
    uVar11 = (uVar6 & 0xffff) * iVar2;
    FUN_00047c38(uVar9,uVar5);
    uVar9 = uVar8 >> 0x10 | extraout_r1 << 0x10;
    iVar7 = iVar2;
    if (uVar9 < uVar11) {
      bVar12 = CARRY4(uVar9,uVar6);
      uVar9 = uVar9 + uVar6;
      iVar7 = iVar2 + -1;
      if ((!bVar12) && (uVar9 < uVar11)) {
        uVar9 = uVar9 + uVar6;
        iVar7 = iVar2 + -2;
      }
    }
    uVar3 = FUN_00047b90(uVar9 - uVar11,uVar5);
    uVar10 = uVar3 * (uVar6 & 0xffff);
    FUN_00047c38(uVar9 - uVar11,uVar5);
    uVar5 = uVar8 & 0xffff | extraout_r1_00 << 0x10;
    uVar9 = uVar3;
    if (uVar5 < uVar10) {
      uVar9 = uVar3 - 1;
      if ((!CARRY4(uVar5,uVar6)) && (uVar5 + uVar6 < uVar10)) {
        uVar9 = uVar3 - 2;
      }
    }
    uVar9 = uVar9 | iVar7 << 0x10;
LAB_00049040:
    uVar8 = 0;
  }
  else {
    if (param_4 <= param_2) {
      iVar7 = LZCOUNT(param_4);
      if (iVar7 != 0) {
        uVar5 = 0x20 - iVar7;
        uVar8 = param_3 >> (uVar5 & 0xff) | param_4 << iVar7;
        uVar6 = param_2 >> (uVar5 & 0xff);
        uVar9 = uVar8 >> 0x10;
        uVar11 = param_1 >> (uVar5 & 0xff) | param_2 << iVar7;
        iVar4 = FUN_00047b90(uVar6,uVar9);
        uVar5 = (uVar8 & 0xffff) * iVar4;
        FUN_00047c38(uVar6,uVar9);
        uVar6 = uVar11 >> 0x10 | extraout_r1_05 << 0x10;
        iVar2 = iVar4;
        if (uVar6 < uVar5) {
          bVar12 = CARRY4(uVar6,uVar8);
          uVar6 = uVar6 + uVar8;
          iVar2 = iVar4 + -1;
          if ((!bVar12) && (uVar6 < uVar5)) {
            uVar6 = uVar6 + uVar8;
            iVar2 = iVar4 + -2;
          }
        }
        iVar4 = uVar6 - uVar5;
        uVar6 = FUN_00047b90(iVar4,uVar9);
        uVar3 = uVar6 * (uVar8 & 0xffff);
        FUN_00047c38(iVar4,uVar9);
        uVar5 = uVar11 & 0xffff | extraout_r1_06 << 0x10;
        uVar9 = uVar6;
        if (uVar5 < uVar3) {
          bVar12 = CARRY4(uVar5,uVar8);
          uVar5 = uVar5 + uVar8;
          uVar9 = uVar6 - 1;
          if ((!bVar12) && (uVar5 < uVar3)) {
            uVar5 = uVar5 + uVar8;
            uVar9 = uVar6 - 2;
          }
        }
        uVar9 = uVar9 | iVar2 << 0x10;
        lVar1 = (ulonglong)(param_3 << iVar7) * (ulonglong)uVar9;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar5 = uVar5 - uVar3;
        if ((uVar6 < uVar5 || uVar6 == uVar5) &&
           (uVar8 = 0, (uint)lVar1 <= param_1 << iVar7 || uVar6 != uVar5)) goto LAB_00049050;
        uVar9 = uVar9 - 1;
        goto LAB_00049040;
      }
      bVar12 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar12 = param_3 <= param_1;
      }
      if (bVar12) {
        uVar9 = 1;
        uVar8 = 0;
        goto LAB_00049050;
      }
    }
    uVar9 = 0;
    uVar8 = uVar9;
  }
LAB_00049050:
  return CONCAT44(uVar8,uVar9);
}



void _fini(void)

{
  return;
}


