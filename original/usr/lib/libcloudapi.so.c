#include "libcloudapi.so.h"


undefined4 DAT_000515b4;
dword DWORD_00048888;
undefined1 __bss_start__;
int DAT_00051008;
undefined DAT_000515dc;
undefined DAT_00040bb0;
undefined DAT_00040bb4;
undefined DAT_00040bb8;
undefined FUN_000161c0;
undefined DAT_000410a4;
undefined LAB_00015fa8;
undefined DAT_000412dc;
undefined FUN_00016228;
undefined4 DAT_0005100c;
undefined DAT_000410b8;
undefined4 DAT_00051010;
undefined4 stderr;
undefined DAT_00041bfc;
undefined FUN_00016408;
char DAT_000515f8;
undefined1 DAT_000515fa;
undefined1 DAT_000515fb;
undefined1 DAT_000515fc;
undefined4 DAT_000515f4;
undefined DAT_000515fd;
undefined DAT_0005161d;
pthread_t DAT_000515f4;
undefined1 DAT_000515f9;
undefined4 __ctype_tolower;
undefined *DAT_000515b8;
undefined *DAT_000515bc;
char *DAT_00051640;
undefined DAT_000422e0;
byte UNK_00000000;
int DAT_00051644;
byte *DAT_00051640;
undefined4 DAT_00040978;
undefined DAT_00042330;
undefined DAT_00042338;
undefined4 DAT_00051640;
undefined malloc;
undefined free;
char UNK_00000000;
undefined4 base64char;
undefined DAT_00042384;
undefined DAT_00042438;
undefined DAT_00043838;
undefined DAT_00043c38;
undefined DAT_00044038;
undefined DAT_00044438;
undefined DAT_00044838;
undefined4 DAT_00044c38;
undefined realloc;
int DAT_00051648;
undefined strdup;
undefined *DAT_000515c4;
undefined *DAT_000515c8;
undefined *DAT_000515cc;
undefined *DAT_000515d0;
undefined *DAT_000515d4;
undefined4 DAT_00051650;
undefined calloc;
uint DAT_0005164c;
int DAT_000515c4;
int DAT_000515c8;
int DAT_000515d0;
int DAT_000515cc;
int DAT_000515d4;
undefined LAB_00022fe8;
undefined FUN_00024148;
undefined LAB_00024110;
undefined LAB_00024130;
undefined DAT_00024160;
undefined FUN_00024164;
undefined *PTR_s_No_error_00045234;
int DAT_00051650;
undefined FUN_0003ab20;
undefined LAB_00027ae0;
undefined LAB_0003ab58;
undefined FUN_00027de0;
undefined LAB_00027e1c;
char DAT_00051654;
uint DAT_00051658;
char DAT_0005165c;
undefined LAB_0003071c;
undefined LAB_000307ec;
undefined DAT_00046112;
undefined DAT_00046116;
undefined FUN_00028dc8;
undefined FUN_00028e64;
undefined DAT_0004611a;
int DAT_00051678;
undefined LAB_000298c8;
undefined DAT_00051660;
undefined FUN_00029834;
undefined DAT_000298b4;
undefined DAT_00051680;
undefined LAB_00029ff8;
undefined LAB_00015180;
undefined DAT_000478e3;
undefined DAT_0004860c;
undefined1 DAT_000467ca;
undefined DAT_00046018;
undefined DAT_00046802;
undefined4 stdin;
undefined DAT_0004659b;
undefined FUN_0002b178;
undefined4 stdout;
undefined4 __ctype_b;
undefined FUN_0002c8dc;
undefined *PTR_DAT_0004816c;
undefined4 DAT_000484d4;
undefined DAT_0004676a;
undefined DAT_000468e0;
undefined DAT_00046ddc;
undefined DAT_00046bdf;
undefined FUN_0003eea0;
undefined DAT_00046be4;
undefined DAT_00046c05;
undefined DAT_00046c38;
undefined DAT_00046f0e;
undefined DAT_00047173;
undefined DAT_00047175;
undefined UNK_000471e0;
undefined *PTR_DAT_000471f8;
undefined *PTR_s_Header_00047208;
undefined fread;
undefined fwrite;
undefined DAT_000472c3;
undefined DAT_00047356;
undefined DAT_0004735a;
undefined DAT_00047464;
undefined4 DAT_000515d4;
undefined DAT_00030d2c;
undefined LAB_00033694;
undefined DAT_000472d0;
undefined UNK_00047310;
undefined UNK_0004740c;
undefined UNK_00047411;
undefined UNK_00047416;
undefined UNK_0004741a;
undefined DAT_0004741f;
undefined UNK_00047424;
undefined UNK_00047429;
undefined1 DAT_000478ca;
undefined DAT_000478d0;
undefined DAT_000478d1;
undefined LAB_000364a0;
undefined4 DAT_000515c8;
undefined FUN_000364d4;
undefined fputc;
undefined LAB_00036588;
undefined DAT_000478d5;
undefined DAT_0004796f;
undefined FUN_0003f008;
undefined *PTR_s_Too_long_hexadecimal_number_00047ea8;
undefined FUN_0003a5d4;
undefined DAT_00047f44;
undefined DAT_00047f55;
undefined DAT_00047f67;
undefined DAT_00047f6d;
undefined DAT_00047f8e;
undefined DAT_000480dc;
undefined DAT_00048504;
undefined4 DAT_00048188;
undefined DAT_000481a4;
undefined LAB_0003d248;
undefined DAT_000487f5;

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = clock_gettime(__clock_id,__tp);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strtok_r(char *__s,char *__delim,char **__save_ptr)

{
  char *pcVar1;
  
  pcVar1 = strtok_r(__s,__delim,__save_ptr);
  return pcVar1;
}



void CyaSSL_pending(void)

{
  CyaSSL_pending();
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = recv(__fd,__buf,__n,__flags);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = connect(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = geteuid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int inet_pton(int __af,char *__cp,void *__buf)

{
  int iVar1;
  
  iVar1 = inet_pton(__af,__cp,__buf);
  return iVar1;
}



void CyaSSL_check_domain_name(void)

{
  CyaSSL_check_domain_name();
  return;
}



void CyaSSL_write(void)

{
  CyaSSL_write();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = stat64(__file,__buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = __xpg_basename(__path);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = pclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



void InitRng(void)

{
  InitRng();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long atol(char *__nptr)

{
  long lVar1;
  
  lVar1 = atol(__nptr);
  return lVar1;
}



void cJSON_GetArraySize(void)

{
  cJSON_GetArraySize();
  return;
}



void CyaSSL_read(void)

{
  CyaSSL_read();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



void gen_uidstring(void)

{
  gen_uidstring();
  return;
}



void sha1_finish_ctx(void)

{
  sha1_finish_ctx();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double floor(double __x)

{
  double dVar1;
  
  dVar1 = floor(__x);
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  qsort(__base,__nmemb,__size,__compar);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



void __xpg_strerror_r(void)

{
  __xpg_strerror_r();
  return;
}



void error_at_line(void)

{
  error_at_line();
  return;
}



void gen_pwdstring(void)

{
  gen_pwdstring();
  return;
}



void fcntl64(void)

{
  fcntl64();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = prctl(__option);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void CyaSSL_set_fd(void)

{
  CyaSSL_set_fd();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = tolower(__c);
  return iVar1;
}



void sha1_process_bytes(void)

{
  sha1_process_bytes();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = feof(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = remove(__filename);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void siglongjmp(__jmp_buf_tag *__env,int __val)

{
                    // WARNING: Subroutine does not return
  siglongjmp(__env,__val);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = sleep(__seconds);
  return uVar1;
}



void CyaSSL_CTX_free(void)

{
  CyaSSL_CTX_free();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
  longlong lVar1;
  
  lVar1 = strtoll(__nptr,__endptr,__base);
  return lVar1;
}



void CyaSSL_CTX_load_verify_locations(void)

{
  CyaSSL_CTX_load_verify_locations();
  return;
}



void yi_p2p_on_get_white_led_status(void)

{
  yi_p2p_on_get_white_led_status();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = strtoul(__nptr,__endptr,__base);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = select(__nfds,__readfds,__writefds,__exceptfds,__timeout);
  return iVar1;
}



void trans_json(void)

{
  trans_json();
  return;
}



void cJSON_DetachItemFromArray(void)

{
  cJSON_DetachItemFromArray();
  return;
}



void CyaSSL_Init(void)

{
  CyaSSL_Init();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



void CyaSSL_connect(void)

{
  CyaSSL_connect();
  return;
}



void hmac_sha1(void)

{
  hmac_sha1();
  return;
}



void CyaSSL_free(void)

{
  CyaSSL_free();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncasecmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = send(__fd,__buf,__n,__flags);
  return sVar1;
}



void cJSON_DetachItemFromObject(void)

{
  cJSON_DetachItemFromObject();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void freeaddrinfo(addrinfo *__ai)

{
  freeaddrinfo(__ai);
  return;
}



void cJSON_Parse(void)

{
  cJSON_Parse();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = gmtime_r(__timer,__tp);
  return ptVar1;
}



void sha1_process_block(void)

{
  sha1_process_block();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = alarm(__seconds);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



void __sigsetjmp(void)

{
  __sigsetjmp();
  return;
}



void cJSON_GetObjectItem(void)

{
  cJSON_GetObjectItem();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = accept(__fd,__addr,__addr_len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strrchr(__s,__c);
  return pcVar1;
}



void cJSON_GetStrObjItem(void)

{
  cJSON_GetStrObjItem();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double atof(char *__nptr)

{
  double dVar1;
  
  dVar1 = atof(__nptr);
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}



void CyaSSLv3_client_method(void)

{
  CyaSSLv3_client_method();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint if_nametoindex(char *__ifname)

{
  uint uVar1;
  
  uVar1 = if_nametoindex(__ifname);
  return uVar1;
}



void __deregister_frame_info(void)

{
  __deregister_frame_info();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



void memset_s(void)

{
  memset_s();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = fseek(__stream,__off,__whence);
  return iVar1;
}



void cJSON_GetArrayItem(void)

{
  cJSON_GetArrayItem();
  return;
}



void URLEncode(void)

{
  URLEncode();
  return;
}



void yi_make_ap_p2p_id(void)

{
  yi_make_ap_p2p_id();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memchr(__s,__c,__n);
  return pvVar1;
}



void CyaSSL_shutdown(void)

{
  CyaSSL_shutdown();
  return;
}



void AesSetKey(void)

{
  AesSetKey();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = mktime(__tp);
  return tVar1;
}



void cJSON_Duplicate(void)

{
  cJSON_Duplicate();
  return;
}



void strhex2byte(void)

{
  strhex2byte();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = ferror(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



void base64_encode(void)

{
  base64_encode();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: register
// WARNING: Unknown calling convention -- yet parameter storage is locked

double pow(double __x,double __y)

{
  double dVar1;
  
  dVar1 = pow(__x,__y);
  return dVar1;
}



void gen_hmac(void)

{
  gen_hmac();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



void AesCbcEncrypt(void)

{
  AesCbcEncrypt();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcasecmp(__s1,__s2);
  return iVar1;
}



void yi_p2p_on_get_white_led_time(void)

{
  yi_p2p_on_get_white_led_time();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



void memxor(void)

{
  memxor();
  return;
}



void sha1_init_ctx(void)

{
  sha1_init_ctx();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = listen(__fd,__n);
  return iVar1;
}



void trans_json_ex_s(void)

{
  trans_json_ex_s();
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

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



void cJSON_Delete(void)

{
  cJSON_Delete();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = ftell(__stream);
  return lVar1;
}



void CyaSSLv23_client_method(void)

{
  CyaSSLv23_client_method();
  return;
}



void cJSON_CreateArray(void)

{
  cJSON_CreateArray();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = inet_ntoa(__in);
  return pcVar1;
}



void CyaSSL_get_error(void)

{
  CyaSSL_get_error();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = poll(__fds,__nfds,__timeout);
  return iVar1;
}



void CyaSSL_ERR_error_string(void)

{
  CyaSSL_ERR_error_string();
  return;
}



void CyaSSL_get_session(void)

{
  CyaSSL_get_session();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getpwuid_r(__uid_t __uid,passwd *__resultbuf,char *__buffer,size_t __buflen,passwd **__result)

{
  int iVar1;
  
  iVar1 = getpwuid_r(__uid,__resultbuf,__buffer,__buflen,__result);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



void cJSON_CreateNumber(void)

{
  cJSON_CreateNumber();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



void CyaSSL_CTX_use_PrivateKey_file(void)

{
  CyaSSL_CTX_use_PrivateKey_file();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = getpeername(__fd,__addr,__len);
  return iVar1;
}



void getifaddrs(void)

{
  getifaddrs();
  return;
}



void CyaSSL_CTX_new(void)

{
  CyaSSL_CTX_new();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = getsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



void freeifaddrs(void)

{
  freeifaddrs();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai)

{
  int iVar1;
  
  iVar1 = getaddrinfo(__name,__service,__req,__pai);
  return iVar1;
}



void cJSON_CreateString(void)

{
  cJSON_CreateString();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



void CyaSSL_set_session(void)

{
  CyaSSL_set_session();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void rewind(FILE *__stream)

{
  rewind(__stream);
  return;
}



void CyaSSL_new(void)

{
  CyaSSL_new();
  return;
}



void yi_on_ap_bind_info(void)

{
  yi_on_ap_bind_info();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



void RNG_GenerateBlock(void)

{
  RNG_GenerateBlock();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  
  pcVar1 = inet_ntop(__af,__cp,__buf,__len);
  return pcVar1;
}



void AesCbcDecrypt(void)

{
  AesCbcDecrypt();
  return;
}



void CyaTLSv1_2_client_method(void)

{
  CyaTLSv1_2_client_method();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



void get_cur_time_ms(void)

{
  get_cur_time_ms();
  return;
}



void yi_on_ap_sync_time(void)

{
  yi_on_ap_sync_time();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



void CyaTLSv1_1_client_method(void)

{
  CyaTLSv1_1_client_method();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



void CyaTLSv1_client_method(void)

{
  CyaTLSv1_client_method();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}



void __register_frame_info(void)

{
  __register_frame_info();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



void CyaSSL_CTX_use_certificate_file(void)

{
  CyaSSL_CTX_use_certificate_file();
  return;
}



void CyaSSL_CTX_set_verify(void)

{
  CyaSSL_CTX_set_verify();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = raise(__sig);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void yi_on_ap_preview(void)

{
  yi_on_ap_preview();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = getsockname(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen64(__filename,__modes);
  return pFVar1;
}



undefined4 processEntry entry(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  time_t tVar5;
  undefined4 uVar6;
  int *in_r1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int extraout_r1_02;
  uint extraout_r1_03;
  int iVar7;
  uint uVar8;
  int local_1f0;
  undefined1 auStack_1ec [4];
  undefined1 auStack_1e8 [4];
  undefined1 auStack_1e4 [4];
  undefined1 auStack_1e0 [4];
  undefined1 auStack_1dc [4];
  undefined1 auStack_1d8 [4];
  tm tStack_1d4;
  char acStack_1a8 [128];
  char acStack_128 [128];
  char acStack_a8 [168];
  
  memset(acStack_1a8,0,0x80);
  if (in_r1 == (int *)0x0) {
LAB_00015c84:
    uVar6 = 0xffffffff;
  }
  else {
    iVar1 = trans_json_ex_s(acStack_1a8,0x80,"\"enable\"",param_1);
    if (iVar1 != 1) {
      printf("\x1b[1;33m%s(%d) get enable error\x1b[m\n","parse_schedule_power",0x97);
      return 0xffffffff;
    }
    iVar1 = atoi(acStack_1a8);
    *in_r1 = iVar1;
    if (iVar1 != 0) {
      memset(acStack_128,0,0x80);
      memset(acStack_a8,0,0x80);
      iVar1 = trans_json_ex_s(acStack_128,0x80,"\"repeater\"",param_1);
      if ((iVar1 != 1) || (iVar1 = trans_json_ex_s(acStack_a8,0x80,"\"time\"",param_1), iVar1 != 1))
      goto LAB_00015c84;
      memset(&local_1f0,0,0x1c);
      iVar1 = sscanf(acStack_128,"%d,%d,%d,%d,%d,%d,%d",&local_1f0,auStack_1ec,auStack_1e8,
                     auStack_1e4,auStack_1e0,auStack_1dc,auStack_1d8);
      if (0 < iVar1) {
        iVar7 = 0;
        do {
          uVar8 = (&local_1f0)[iVar7] - 1;
          iVar7 = iVar7 + 1;
          if (uVar8 < 7) {
            FUN_0003f1ec(uVar8,7);
            in_r1[1] = in_r1[1] | 1 << (extraout_r1_03 & 0xff);
          }
        } while (iVar7 != iVar1);
      }
      iVar1 = atoi(acStack_a8);
      memset(&tStack_1d4,0,0x2c);
      iVar7 = FUN_0003f048(iVar1,100000000);
      tStack_1d4.tm_year = iVar7 + 100;
      FUN_0003f0f0(iVar1,100000000);
      iVar2 = FUN_0003f048(extraout_r1,1000000);
      tStack_1d4.tm_mon = iVar2 + -1;
      FUN_0003f0f0(iVar1,1000000);
      iVar3 = FUN_0003f048(extraout_r1_00,10000);
      tStack_1d4.tm_mday = iVar3;
      FUN_0003f0f0(iVar1,10000);
      iVar4 = FUN_0003f048(extraout_r1_01,100);
      tStack_1d4.tm_hour = iVar4;
      FUN_0003f0f0(iVar1,100);
      tStack_1d4.tm_min = extraout_r1_02;
      printf("\x1b[1;33m%s(%d) repeater:%s,t:%u,time:%02d-%02d-%02d %02d:%02d\x1b[m\n",
             "parse_schedule_power",0xb9,acStack_128,iVar1,iVar7,iVar2,iVar3,iVar4,extraout_r1_02);
      tVar5 = mktime(&tStack_1d4);
      in_r1[2] = tVar5;
    }
    printf("\x1b[1;33m%s(%d) schedule_power info:enable=%d,repeater=%d,time=%ld\x1b[m\n",
           "parse_schedule_power",0xbc,*in_r1,in_r1[1],in_r1[2]);
    uVar6 = 0;
  }
  return uVar6;
}



int FUN_00015cc4(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x8610) = 0;
  iVar2 = FUN_0002ccb0(param_1,param_2 + 0x13c);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_0002ce70(param_2,"Expect:");
  if (iVar2 == 0) {
    iVar2 = FUN_0002d990(param_3,"Expect: 100-continue\r\n");
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x8610) = 1;
    }
    return iVar2;
  }
  uVar1 = FUN_0002da1c(iVar2,"Expect:","100-continue");
  *(undefined1 *)(param_1 + 0x8610) = uVar1;
  return 0;
}



void FUN_00015d48(undefined4 param_1,int param_2)

{
  size_t sVar1;
  byte *pbVar2;
  char *__s;
  
  __s = *(char **)(param_2 + 8);
  *(char **)(param_2 + 0xc) = __s;
  sVar1 = strlen(__s);
  if (__s[sVar1 - 1] == '.') {
    __s[sVar1 - 1] = '\0';
  }
  pbVar2 = (byte *)(*(int *)(param_2 + 8) + -1);
  do {
    pbVar2 = pbVar2 + 1;
    if (*pbVar2 == 0) {
      return;
    }
  } while ((*pbVar2 & 0x80) == 0);
  FUN_000305d4(param_1,"IDN support not present, can\'t parse Unicode domains\n");
  return;
}



bool FUN_00015dac(int param_1,int param_2)

{
  int iVar1;
  
  if ((((*(uint *)(param_2 + 0x3c) & 3) != 0) &&
      (iVar1 = FUN_00024a14(*(undefined4 *)(param_1 + 0x40)), iVar1 != 0)) &&
     ((*(uint *)(param_1 + 0x240) & 0xfffffffb) == 1)) {
    return *(int *)(param_1 + 0x244) != 1;
  }
  return false;
}



// WARNING: Removing unreachable block (ram,0x00015e24)
// WARNING: Removing unreachable block (ram,0x00015e30)
// WARNING: Removing unreachable block (ram,0x00015e34)

void FUN_00015df8(void)

{
  return;
}



void _FINI_0(void)

{
  if (__bss_start__ == '\0') {
    __cxa_finalize(DAT_000515b4);
    FUN_00015df8();
    __deregister_frame_info(&DWORD_00048888);
    __bss_start__ = 1;
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00015e7c)
// WARNING: Removing unreachable block (ram,0x00015e88)
// WARNING: Removing unreachable block (ram,0x00015e8c)

void _INIT_0(void)

{
  __register_frame_info(&DWORD_00048888,&DAT_000515dc);
  if (DAT_00051008 != 0) {
    _Jv_RegisterClasses();
  }
  return;
}



int FUN_00016000(int param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 local_2c;
  
  iVar10 = 0;
  pcVar9 = (char *)(param_1 + 1);
  local_2c = 0;
  iVar11 = param_2;
  do {
    if (pcVar9[-1] == '\0') {
      return iVar10;
    }
    memset_s(&local_2c,4,0xff,4);
    uVar7 = local_2c;
    uVar4 = local_2c & 0xff;
    uVar8 = 0;
    do {
      pcVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + uVar8;
      uVar6 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      if (*pcVar1 == pcVar9[-1]) {
        uVar4 = uVar6;
      }
    } while (uVar8 != 0x40);
    uVar8 = local_2c >> 8 & 0xff;
    uVar6 = 0;
    do {
      pcVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + uVar6;
      uVar5 = uVar6 & 0xff;
      uVar6 = uVar6 + 1;
      if (*pcVar1 == *pcVar9) {
        uVar8 = uVar5;
      }
    } while (uVar6 != 0x40);
    uVar6 = local_2c >> 0x10 & 0xff;
    uVar5 = 0;
    bVar2 = (byte)uVar8;
    do {
      pcVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + uVar5;
      uVar8 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      if (*pcVar1 == pcVar9[1]) {
        uVar6 = uVar8;
      }
    } while (uVar5 != 0x40);
    uVar7 = uVar7 >> 0x18;
    uVar8 = 0;
    bVar3 = (byte)uVar6;
    do {
      pcVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + uVar8;
      uVar6 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      if (*pcVar1 == pcVar9[2]) {
        uVar7 = uVar6;
      }
    } while (uVar8 != 0x40);
    local_2c = CONCAT13((byte)uVar7,CONCAT12(bVar3,CONCAT11(bVar2,(char)uVar4)));
    *(byte *)(param_2 + iVar10) = bVar2 >> 4 & 3 | (char)uVar4 << 2;
    if (pcVar9[1] == '=') {
      return iVar10 + 1;
    }
    *(byte *)(iVar11 + 1) = bVar3 >> 2 & 0xf | bVar2 << 4;
    if (pcVar9[2] == '=') {
      return iVar10 + 2;
    }
    iVar10 = iVar10 + 3;
    *(byte *)(iVar11 + 2) = (byte)uVar7 & 0x3f | bVar3 << 6;
    pcVar9 = pcVar9 + 4;
    iVar11 = iVar11 + 3;
  } while (iVar10 != 0x42);
  return 0x42;
}



size_t FUN_000161c0(void *param_1,int param_2,int param_3,undefined4 *param_4)

{
  void *pvVar1;
  int iVar2;
  size_t __n;
  
  __n = param_3 * param_2;
  pvVar1 = realloc((void *)*param_4,param_4[1] + 1 + __n);
  if (pvVar1 != (void *)0x0) {
    *param_4 = pvVar1;
    memcpy((void *)((int)pvVar1 + param_4[1]),param_1,__n);
    iVar2 = param_4[1];
    param_4[1] = __n + iVar2;
    *(undefined1 *)((int)pvVar1 + __n + iVar2) = 0;
    return __n;
  }
  return 0;
}



size_t FUN_00016228(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
  sVar1 = fread(param_1,param_2,param_3,param_4);
  printf("\x1b[0;32;32m%s(%d) upload file size = %d \n\x1b[m\n","read_file",0x72,sVar1);
  return sVar1;
}



int FUN_00016260(void)

{
  char *__s1;
  uint uVar1;
  int iVar2;
  
  __s1 = (char *)cJSON_GetStrObjItem();
  uVar1 = strcmp(__s1,"y");
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 FUN_00016284(char *param_1,int param_2,char *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  
  pcVar8 = param_3;
  error_at_line(0,0,"cloudapi.c",0x7ab,"trans_json info=%s;key=%s\n",param_4,param_3);
  pcVar2 = strstr(param_4,param_3);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  sVar3 = strlen(param_3);
  pcVar4 = pcVar2 + sVar3;
  iVar5 = 0;
  do {
    cVar1 = *pcVar4;
    iVar6 = iVar5 + 1;
    if ((((cVar1 != ':') && (cVar1 != '\'')) && (cVar1 != '\"')) && (cVar1 != '{')) break;
    pcVar4 = pcVar4 + 1;
    iVar5 = iVar6;
  } while (iVar6 != 10);
  if (param_2 != 0) {
    iVar6 = 0;
    do {
      uVar7 = (uint)(byte)pcVar2[iVar6 + iVar5 + sVar3];
      if ((((uVar7 == 0x3a) || (uVar7 == 0x22)) ||
          ((uVar7 - 0x26 < 2 || ((uVar7 == 0x2c || (uVar7 == 0x7d)))))) || (uVar7 == 0)) {
        if (iVar6 == 0) goto LAB_00016398;
        if (iVar6 < param_2) goto LAB_00016388;
        break;
      }
      iVar6 = iVar6 + 1;
    } while (param_2 != iVar6);
    iVar6 = param_2;
LAB_00016388:
    snprintf(param_1,iVar6 + 1,"%s");
  }
LAB_00016398:
  error_at_line(0,0,"cloudapi.c",0x7f3,"trans_json result=%s\n",param_1,pcVar8);
  return 1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 FUN_00016408(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint __fd;
  int iVar3;
  size_t sVar4;
  FILE *pFVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  byte bVar14;
  uint *puVar15;
  __fd_mask *p_Var16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int local_458c;
  int local_4588;
  int local_457c;
  int local_4570;
  uint local_4554;
  socklen_t sStack_450c;
  timeval local_4508;
  sockaddr sStack_4500;
  undefined1 auStack_44f0 [16];
  undefined4 local_44e0;
  undefined4 local_44dc;
  undefined4 local_44d8;
  undefined4 local_44d4;
  undefined4 local_44d0;
  undefined4 local_44cc;
  undefined4 local_44c8;
  undefined4 local_44c4;
  int iStack_44c0;
  int local_44bc;
  int iStack_44b8;
  int iStack_44b4;
  int iStack_44b0;
  int iStack_44ac;
  int iStack_44a8;
  int local_44a4;
  int iStack_44a0;
  int iStack_449c;
  int iStack_4498;
  int iStack_4494;
  int iStack_4490;
  int iStack_448c;
  int iStack_4488;
  int local_4484;
  char acStack_4480 [64];
  char acStack_4440 [64];
  char acStack_4400 [64];
  char acStack_43c0 [64];
  byte abStack_4380 [64];
  byte abStack_4340 [64];
  undefined1 auStack_4300 [88];
  fd_set fStack_42a8;
  uint local_4228 [32];
  char acStack_41a8 [127];
  char acStack_4129 [129];
  int local_40a8;
  int local_40a4;
  int local_40a0;
  int local_409c;
  int local_4098;
  int iStack_4094;
  int local_4090;
  int local_408c;
  char acStack_4028 [1024];
  int iStack_3c28;
  int local_3c24;
  int iStack_3c20;
  int local_3c1c;
  int iStack_3c18;
  int iStack_3c14;
  int iStack_3c10;
  int local_3c0c;
  uint uStack_382c;
  uint local_3828 [1024];
  undefined1 auStack_2828 [10244];
  
  memset(auStack_2828,0,0x2800);
  memset(acStack_4480,0,0x40);
  memset(acStack_4440,0,0x40);
  memset(acStack_41a8,0,0x80);
  memset(acStack_4129 + 1,0,0x80);
  memset(acStack_4400,0,0x40);
  memset(acStack_4028,0,0x400);
  prctl(0xf,"ap_listen");
  __fd = socket(2,1,0);
  sStack_4500.sa_data[0] = '\x17';
  sStack_4500.sa_data[1] = 'p';
  sStack_4500.sa_data[6] = '\0';
  sStack_4500.sa_data[7] = '\0';
  sStack_4500.sa_data[8] = '\0';
  sStack_4500.sa_data[9] = '\0';
  sStack_4500.sa_data[10] = '\0';
  sStack_4500.sa_data[0xb] = '\0';
  sStack_4500.sa_data[0xc] = '\0';
  sStack_4500.sa_data[0xd] = '\0';
  local_44d8 = 0;
  local_44d4 = 0;
  local_44d0 = 0;
  local_44cc = 0;
  local_44c8 = 0;
  local_44c4 = 0;
  sStack_4500.sa_data[2] = '\0';
  sStack_4500.sa_data[3] = '\0';
  sStack_4500.sa_data[4] = '\0';
  sStack_4500.sa_data[5] = '\0';
  local_44e0 = 0x6e616c77;
  sStack_4500.sa_family = 2;
  local_44dc = 0x30;
  setsockopt(__fd,1,0x19,&local_44e0,0x20);
  bind(__fd,&sStack_4500,0x10);
  listen(__fd,10);
  puVar15 = &uStack_382c;
  do {
    puVar15 = puVar15 + 1;
    *puVar15 = 0xffffffff;
  } while (puVar15 != local_3828 + 0x3ff);
  local_458c = 0;
  local_457c = -1;
  local_4570 = 0;
  local_4588 = 0;
  iVar19 = -1;
  local_4554 = __fd;
  do {
    do {
      do {
        if (*(char *)(param_1 + 5) != '\0') {
          puts("ap proc exit~~~");
          return 0;
        }
        usleep(20000);
        p_Var16 = fStack_42a8.fds_bits + 0x1f;
        do {
          p_Var16 = p_Var16 + 1;
          *p_Var16 = 0;
        } while ((uint *)p_Var16 != local_4228 + 0x1f);
        local_4228[__fd >> 5] = local_4228[__fd >> 5] | 1 << (__fd & 0x1f);
        puVar15 = &uStack_382c;
        do {
          puVar15 = puVar15 + 1;
          uVar17 = *puVar15;
          if (uVar17 != 0xffffffff) {
            local_4228[uVar17 >> 5] = local_4228[uVar17 >> 5] | 1 << (uVar17 & 0x1f);
          }
        } while (local_3828 + 0x3ff != puVar15);
        memcpy(&fStack_42a8,local_4228,0x80);
        iVar18 = 0;
        local_4508.tv_usec = 0;
        local_4508.tv_sec = 1;
        iVar3 = select(local_4554 + 1,&fStack_42a8,(fd_set *)0x0,(fd_set *)0x0,&local_4508);
      } while (iVar3 < 1);
      if ((fStack_42a8.fds_bits[__fd >> 5] >> (__fd & 0x1f) & 1U) != 0) {
        sStack_450c = 0x10;
        puts("\naccpet connection~");
        uVar17 = accept(__fd,(sockaddr *)auStack_44f0,&sStack_450c);
        if ((int)uVar17 < 0) {
          perror("accept error.\n");
                    // WARNING: Subroutine does not return
          exit(1);
        }
        pcVar6 = inet_ntoa((in_addr)auStack_44f0._4_4_);
        printf("accpet a new client: %s:%d\n",pcVar6,(uint)(ushort)auStack_44f0._2_2_);
        puVar15 = &uStack_382c;
        while (puVar15 = puVar15 + 1, -1 < (int)*puVar15) {
          iVar18 = iVar18 + 1;
          if (iVar18 == 0x400) {
            perror("too many connection.\n");
                    // WARNING: Subroutine does not return
            exit(1);
          }
        }
        if ((int)local_4554 < (int)uVar17) {
          local_4554 = uVar17;
        }
        if (iVar19 < iVar18) {
          iVar19 = iVar18;
        }
        iVar3 = iVar3 + -1;
        local_4228[uVar17 >> 5] = local_4228[uVar17 >> 5] | 1 << (uVar17 & 0x1f);
        local_3828[iVar18] = uVar17;
      }
    } while (iVar19 < 0);
    iVar18 = 0;
    do {
      uVar17 = local_3828[iVar18];
      if ((-1 < (int)uVar17) && ((fStack_42a8.fds_bits[uVar17 >> 5] >> (uVar17 & 0x1f) & 1U) != 0))
      {
        memset(auStack_2828,0,0x2800);
        sVar4 = read(uVar17,auStack_2828,0x2800);
        if ((int)sVar4 < 1) {
          if (sVar4 != 0) {
            piVar9 = __errno_location();
            printf("read socket error! err:%d\n",*piVar9);
          }
          close(uVar17);
          local_3828[iVar18] = 0xffffffff;
        }
        else {
          memset(acStack_4480,0,0x40);
          if (local_458c != 0) {
            local_4588 = local_4588 + sVar4;
            write(local_457c,auStack_2828,sVar4);
            printf("clint[%d] recv message: len:%d,sum = %d\n",iVar18,sVar4,local_4588);
            if (local_457c == -1 || local_4588 < local_4570) {
              printf("clint[%d] recv message: len:%d,sum = %d\n",iVar18,sVar4,local_4588);
            }
            else {
              puts("file recv over!");
              close(local_457c);
              sprintf(acStack_41a8,"md5sum %s",acStack_4440);
              memset(acStack_4129 + 1,0,0x40);
              pFVar5 = popen(acStack_41a8,"r");
              if (pFVar5 != (FILE *)0x0) {
                sVar4 = fread(acStack_4129 + 1,1,0x40,pFVar5);
                if ((int)sVar4 < 0x40) {
                  acStack_4129[sVar4 + 1] = '\0';
                }
                else {
                  acStack_4129[sVar4] = '\0';
                }
                pclose(pFVar5);
              }
              pcVar6 = strstr(acStack_4129 + 1,acStack_4400);
              if (pcVar6 == (char *)0x0) {
                printf("shell_result = %s,md5_str = %s\n",acStack_4129 + 1,acStack_4400);
                memset(acStack_41a8,0,0x80);
                memset(acStack_4028,0,0x400);
                sprintf(acStack_4028,"{\"operator\":\"%s\", \"state\":\"false\"}","ap_trans_result")
                ;
                sVar4 = strlen(acStack_4028);
                sVar4 = write(uVar17,acStack_4028,sVar4);
                sVar7 = strlen(acStack_4028);
                local_458c = 0;
                if (sVar4 == sVar7) {
                  local_457c = -1;
                }
                else {
                  puts("ap_trans_result error writing to the sockfd! false");
                  local_457c = -1;
                }
              }
              else {
                puts("save file success!prepare to update firmware!");
                memset(acStack_4028,0,0x400);
                sprintf(acStack_4028,"{\"operator\":\"%s\", \"state\":\"OK\"}","ap_trans_result");
                sVar4 = strlen(acStack_4028);
                sVar4 = write(uVar17,acStack_4028,sVar4);
                sVar7 = strlen(acStack_4028);
                if (sVar4 != sVar7) {
                  puts("ap_trans_result error writing to the sockfd! true");
                }
                system("cp -a /usr/sbin/update.sh /tmp");
                system("/tmp/update.sh");
                sleep(10);
                local_458c = 0;
                local_457c = -1;
              }
            }
            goto joined_r0x000169e4;
          }
          iVar8 = trans_json_ex_s(acStack_4480,0x40,"\"operator\"",auStack_2828);
          if (iVar8 == 1) {
            memset(acStack_4028,0,0x400);
            iVar8 = strcmp(acStack_4480,"ap_bind");
            if (iVar8 == 0) {
              memset(&iStack_3c28,0,0x400);
              puts("msg type: ap bind.");
              sprintf(acStack_4028,"{\"operator\":\"%s\", \"state\":\"OK\"}",acStack_4480);
              sVar4 = strlen(acStack_4028);
              sVar4 = write(uVar17,acStack_4028,sVar4);
              sVar7 = strlen(acStack_4028);
              if (sVar4 != sVar7) {
                puts("error writing to the sockfd!");
                break;
              }
              iVar8 = trans_json_ex_s(&iStack_3c28,0x400,"\"data\"",auStack_2828);
              if (iVar8 == 1) {
                memset(acStack_43c0,0,0x40);
                memset(abStack_4380,0,0x40);
                iStack_44c0 = local_458c;
                iStack_44b8 = local_458c;
                iStack_44b4 = local_458c;
                local_44bc = local_458c;
                iStack_44b0 = local_458c;
                iStack_44ac = local_458c;
                iStack_44a8 = local_458c;
                local_44a4 = local_458c;
                memset(auStack_4300,0,0x58);
                memset(&local_40a8,0,0x58);
                memset(abStack_4340,0,0x40);
                iStack_44a0 = local_458c;
                iStack_449c = local_458c;
                iStack_4498 = local_458c;
                iStack_4494 = local_458c;
                iStack_4490 = local_458c;
                iStack_448c = local_458c;
                iStack_4488 = local_458c;
                local_4484 = local_458c;
                FUN_00016284(&local_40a8,0x57,&DAT_00040bb0,&iStack_3c28);
                FUN_00016284(auStack_4300,0x57,&DAT_00040bb4,&iStack_3c28);
                FUN_00016284(&iStack_44a0,0x1f,&DAT_00040bb8,&iStack_3c28);
                FUN_00016000(auStack_4300,acStack_43c0);
                FUN_00016000(&local_40a8,abStack_4340);
                sVar4 = strlen((char *)abStack_4340);
                memset_s(abStack_4380,0x40,0,0x40);
                if (0 < (int)sVar4) {
                  sVar7 = 0;
                  do {
                    bVar1 = abStack_4340[sVar7] ^
                            "IZBACENO"
                            [(int)sVar7 % 0x46];
                    bVar14 = abStack_4340[sVar7];
                    if (bVar1 != 0) {
                      bVar14 = bVar1;
                    }
                    abStack_4380[sVar7] = bVar14;
                    sVar7 = sVar7 + 1;
                  } while (sVar4 != sVar7);
                }
                sVar4 = strlen((char *)&iStack_44a0);
                strncpy((char *)&iStack_44c0,(char *)&iStack_44a0,sVar4);
                if ((acStack_43c0[0] != '\0') && ((char)iStack_44c0 != '\0')) {
                  error_at_line(0,0,"cloudapi.c",0x93a,"got ssid(%s) pwd(%s) bind(%s)\n",
                                acStack_43c0,abStack_4380,&iStack_44c0);
                  yi_on_ap_bind_info(acStack_43c0,abStack_4380,&iStack_44c0);
                }
              }
            }
            else {
              iVar8 = strcmp(acStack_4480,"ap_preview");
              if (iVar8 == 0) {
                iStack_3c28 = local_458c;
                local_3c24 = local_458c;
                iStack_3c20 = local_458c;
                local_3c1c = local_458c;
                puts("msg type: ap_preview.");
                iVar8 = trans_json_ex_s(&iStack_3c28,0x10,"\"time\"",auStack_2828);
                if (iVar8 == 1) {
                  lVar12 = atol((char *)&iStack_3c28);
                  error_at_line(0,0,"cloudapi.c",0x946,"sync time, utc timestamp: %ld",lVar12);
                  yi_on_ap_preview();
                  yi_on_ap_sync_time(lVar12);
                }
                bVar1 = *(byte *)(param_1 + 6);
                bVar14 = *(byte *)(param_1 + 7);
                bVar2 = *(byte *)(param_1 + 8);
                uVar10 = yi_p2p_on_get_white_led_status();
                uVar11 = yi_p2p_on_get_white_led_time();
                sprintf(acStack_4028,
                        "{\"operator\":\"%s\", \"tnp_uid\":\"%s\",\"did\":\"%s\", \"with_ptz\":\"%d\", \"state\":\"OK\", \"is_white\":\"%d\",\"isHorn\":\"%d\", \"trigger_light\":\"%d\", \"light_time\":\"%d\"}"
                        ,acStack_4480,param_1 + 9,param_1 + 0x29,(uint)bVar1,(uint)bVar14,
                        (uint)bVar2,uVar10,uVar11);
                sVar4 = strlen(acStack_4028);
                sVar4 = write(uVar17,acStack_4028,sVar4);
                sVar7 = strlen(acStack_4028);
                if (sVar4 != sVar7) {
                  puts("error writing to the sockfd!");
                  break;
                }
              }
              else {
                iVar8 = strcmp(acStack_4480,"ap_log");
                if (iVar8 == 0) {
                  memset(&local_40a8,0,0x80);
                  memset(&iStack_3c28,0,0x400);
                  sprintf((char *)&local_40a8,"/mnt/log/log_%s.txt",param_1 + 0x29);
                  pFVar5 = fopen((char *)&local_40a8,"at");
                  lVar12 = ftell(pFVar5);
                  fseek(pFVar5,0,2);
                  lVar13 = ftell(pFVar5);
                  fseek(pFVar5,lVar12,0);
                  printf("debug_file_size:%d\n",lVar13);
                  fclose(pFVar5);
                  sprintf(acStack_4028,"{\"operator\":\"%s\", \"length\":\"%d\"}",acStack_4480,
                          lVar13);
                  sVar4 = strlen(acStack_4028);
                  sVar4 = write(uVar17,acStack_4028,sVar4);
                  sVar7 = strlen(acStack_4028);
                  if (sVar4 != sVar7) {
                    puts("error writing to the sockfd!");
                    break;
                  }
                  sleep(1);
                  pFVar5 = fopen((char *)&local_40a8,"r");
                  if (pFVar5 == (FILE *)0x0) {
                    puts("fopen logpath fail!");
                    break;
                  }
                  if (0 < lVar13) {
                    iVar8 = 0;
                    do {
                      sVar4 = fread(&iStack_3c28,1,0x400,pFVar5);
                      iVar8 = iVar8 + sVar4;
                      write(uVar17,&iStack_3c28,sVar4);
                      printf("readSize:%d,sendSize = %d\n",sVar4,iVar8);
                    } while (iVar8 < lVar13);
                  }
                  fclose(pFVar5);
                  puts("ap_log send finished!");
                }
                else {
                  iVar8 = strcmp(acStack_4480,"ap_update_name");
                  if (iVar8 == 0) {
                    local_40a4 = local_458c;
                    local_40a0 = local_458c;
                    local_409c = local_458c;
                    local_4098 = local_458c;
                    iStack_3c28 = local_458c;
                    local_4090 = local_458c;
                    iStack_4094 = local_458c;
                    local_408c = local_458c;
                    iStack_3c20 = local_458c;
                    local_40a8 = local_458c;
                    local_3c1c = local_458c;
                    local_3c24 = local_458c;
                    iStack_3c18 = local_458c;
                    iStack_3c14 = local_458c;
                    iStack_3c10 = local_458c;
                    local_3c0c = local_458c;
                    iVar8 = trans_json_ex_s(&local_40a8,0x20,"\"name\"",auStack_2828);
                    if (iVar8 == 1) {
                      sprintf(acStack_4440,"/tmp/%s",&local_40a8);
                      printf("ap_update_name fileName:%s\n",acStack_4440);
                    }
                    iVar8 = trans_json_ex_s(&iStack_3c28,0x20,"\"length\"",auStack_2828);
                    if (iVar8 == 1) {
                      local_4570 = atoi((char *)&iStack_3c28);
                      printf("ap_update_name fileLen:%d\n",local_4570);
                    }
                    iVar8 = trans_json_ex_s(acStack_4400,0x40,"\"md5\"",auStack_2828);
                    if (iVar8 == 1) {
                      printf("ap_update_name md5:%s\n",acStack_4400);
                    }
                    memset(acStack_4028,0,0x400);
                    sprintf(acStack_4028,"{\"operator\":\"%s\", \"state\":\"OK\"}",acStack_4480);
                    sVar4 = strlen(acStack_4028);
                    sVar4 = write(uVar17,acStack_4028,sVar4);
                    sVar7 = strlen(acStack_4028);
                    if (sVar4 != sVar7) {
                      puts("ap_update_name error writing to the sockfd!");
                      break;
                    }
                    if ((local_457c < 0) &&
                       (local_457c = open(acStack_4440,0x41,0x1ff), local_457c == -1)) {
                      puts("ap_update_name open file error!");
                      break;
                    }
                    local_458c = 1;
                    local_4588 = 0;
                  }
                }
              }
            }
          }
        }
        iVar3 = iVar3 + -1;
        if (iVar3 < 1) break;
      }
joined_r0x000169e4:
      iVar18 = iVar18 + 1;
    } while (iVar18 <= iVar19);
  } while( true );
}



int yi_sync_time(char *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_4f0;
  int local_4ec;
  char local_4e8 [32];
  int local_4c8;
  int local_4c4;
  int iStack_4c0;
  int iStack_4bc;
  int iStack_4b8;
  int iStack_4b4;
  int iStack_4b0;
  int local_4ac;
  undefined1 auStack_4a8 [128];
  char local_428 [4];
  undefined2 local_424;
  
  local_4c4 = 0;
  local_4e8[4] = '\0';
  local_4e8[5] = '\0';
  local_4e8[6] = '\0';
  local_4e8[7] = '\0';
  iStack_4c0 = 0;
  local_4e8[0x14] = '\0';
  local_4e8[0x15] = '\0';
  local_4e8[0x16] = '\0';
  local_4e8[0x17] = '\0';
  iStack_4bc = 0;
  local_4e8[8] = '\0';
  local_4e8[9] = '\0';
  local_4e8[10] = '\0';
  local_4e8[0xb] = '\0';
  iStack_4b8 = 0;
  local_4e8[0x18] = '\0';
  local_4e8[0x19] = '\0';
  local_4e8[0x1a] = '\0';
  local_4e8[0x1b] = '\0';
  iStack_4b4 = 0;
  iStack_4b0 = 0;
  local_4e8[0] = '\0';
  local_4e8[1] = '\0';
  local_4e8[2] = '\0';
  local_4e8[3] = '\0';
  local_4c8 = 0;
  local_4e8[0x10] = '\0';
  local_4e8[0x11] = '\0';
  local_4e8[0x12] = '\0';
  local_4e8[0x13] = '\0';
  local_4f0 = (void *)0x0;
  local_4ec = 0;
  local_4ac = 0;
  local_4e8[0xc] = '\0';
  local_4e8[0xd] = '\0';
  local_4e8[0xe] = '\0';
  local_4e8[0xf] = '\0';
  local_4e8[0x1c] = '\0';
  local_4e8[0x1d] = '\0';
  local_4e8[0x1e] = '\0';
  local_4e8[0x1f] = '\0';
  iVar1 = FUN_000228d4();
  if (param_1 == (char *)0x0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_sync_time",0xcc,"yi_sync_time param");
  }
  else if (param_3 == (undefined4 *)0x0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_sync_time",0xcd,"yi_sync_time result string");
  }
  else {
    pcVar2 = strstr(param_1,"://");
    snprintf(param_1,0x80,"http%s",pcVar2);
    if (iVar1 != 0) {
      local_428[0] = 's';
      local_428[1] = 'e';
      local_428[2] = 'q';
      local_428[3] = '=';
      local_424 = 0x39;
      memset_s(auStack_4a8,0x80,0,0x80);
      gen_hmac(local_428,"rockteco2014",auStack_4a8);
      snprintf(local_428,0x400,"%s/v2/ipc/sync_time?hmac=%s&seq=9",param_1,auStack_4a8);
      printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_sync_time",0xdf,local_428);
      FUN_00022920(iVar1,0x2712,local_428);
      FUN_00022920(iVar1,0x51,0);
      FUN_00022920(iVar1,0x40,0);
      if (param_2 < 0) {
        FUN_00022920(iVar1,99,1);
      }
      else {
        FUN_00022920(iVar1,0xd,param_2);
        FUN_00022920(iVar1,0x4e,param_2);
      }
      FUN_00022920(iVar1,0x2711,&local_4f0);
      FUN_00022920(iVar1,0x4e2b,FUN_000161c0);
      iVar3 = FUN_00022954(iVar1);
      FUN_00022b2c(iVar1);
      if (iVar3 == 0) {
        if (local_4ec == 0) {
          printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_sync_time",0xfe);
        }
        else {
          iVar1 = trans_json_ex_s(local_4e8,0x10,"\"code\"",local_4f0);
          if (((iVar1 == 1) && (iVar1 = atoi(local_4e8), iVar1 == 20000)) &&
             (local_4c8 = iVar3, local_4c4 = iVar3, iStack_4c0 = iVar3, iStack_4bc = iVar3,
             iStack_4b8 = iVar3, iStack_4b4 = iVar3, iStack_4b0 = iVar3, local_4ac = iVar3,
             iVar1 = trans_json_ex_s(&local_4c8,0x20,"\"time\"",local_4f0), iVar1 == 1)) {
            atof((char *)&local_4c8);
            FUN_0003f830();
            uVar4 = FUN_0003fb60();
            *param_3 = uVar4;
            free(local_4f0);
            return 0;
          }
          iVar1 = trans_json_ex_s(local_4e8 + 0x10,0x10,"\"curl_code\"",local_4f0);
          if (iVar1 == 1) {
            free(local_4f0);
            iVar1 = atoi(local_4e8 + 0x10);
            return iVar1;
          }
        }
      }
      else {
        uVar4 = FUN_00026fc8(iVar3);
        printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: {\"curl_code\":%d} %s\n\x1b[m\n",
               "yi_sync_time",0xf9,iVar3,uVar4);
      }
    }
    if (local_4f0 != (void *)0x0) {
      free(local_4f0);
    }
  }
  return -1;
}



undefined4 yi_check_need_update(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_620;
  int local_61c;
  char acStack_618 [64];
  char local_5d8 [64];
  char acStack_598 [128];
  char local_518 [256];
  char acStack_418 [1024];
  
  local_620 = (void *)0x0;
  local_61c = 0;
  iVar1 = FUN_000228d4();
  if (iVar1 != 0) {
    snprintf(acStack_418,0x400,"%s/vmanager/ipc/firmware/upgrade/silent?version=%s&did=%s&sname=%s",
             param_1,param_1 + 0x120,param_1 + 0xc0,param_1 + 0xe0);
    printf("\x1b[0;32;32m%s(%d) req_info = %s\n\x1b[m\n","yi_check_need_update",0x12d,acStack_418);
    FUN_00022d14(iVar1);
    FUN_00022920(iVar1,0x2712,acStack_418);
    FUN_00022920(iVar1,0x51,0);
    FUN_00022920(iVar1,0x40,0);
    FUN_00022920(iVar1,99,1);
    FUN_00022920(iVar1,0x2711,&local_620);
    FUN_00022920(iVar1,0x4e2b,FUN_000161c0);
    iVar2 = FUN_00022954(iVar1);
    if (iVar2 == 0) {
      if (local_61c == 0) {
        printf("\x1b[0;32;31m%s(%d) receive data error: len(%d)\n\x1b[m\n","yi_check_need_update",
               0x142);
      }
      else {
        memset(acStack_598,0,0x80);
        iVar2 = trans_json_ex_s(acStack_598,0x80,&DAT_000410a4,local_620);
        if ((iVar2 == 1) && (iVar2 = atoi(acStack_598), iVar2 == 1)) {
          memset(acStack_618,0,0x40);
          iVar2 = trans_json_ex_s(acStack_618,0x40,"needUpdate",local_620);
          if ((iVar2 != 0) && (iVar2 = strcmp(acStack_618,"true"), iVar2 == 0)) {
            memset(local_518,0,0x100);
            iVar2 = trans_json_ex_s(local_518,0x100,"downloadPath",local_620);
            if ((iVar2 != 0) && (local_518[0] != '\0')) {
              memset(local_5d8,0,0x40);
              iVar2 = trans_json_ex_s(local_5d8,0x40,"md5Code",local_620);
              if ((iVar2 != 0) && (local_5d8[0] != '\0')) {
                printf("\x1b[0;32;32m%s(%d) got url(%s), md5(%s)\n\x1b[m\n","yi_check_need_update",
                       0x15c,local_518,local_5d8);
                strcpy(param_2,local_518);
                strcpy(param_2 + 0x100,local_5d8);
                FUN_00022b2c(iVar1);
                free(local_620);
                return 0;
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = FUN_00026fc8();
      printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: %s\n\x1b[m\n","yi_check_need_update",
             0x13c,uVar3);
    }
    FUN_00022b2c(iVar1);
  }
  if (local_620 != (void *)0x0) {
    free(local_620);
  }
  return 0xffffffff;
}



undefined4 yi_get_update_info(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_648;
  int local_644;
  char local_640 [32];
  char acStack_620 [64];
  char local_5e0 [64];
  char acStack_5a0 [128];
  char local_520 [256];
  char acStack_420 [1028];
  
  local_648 = (void *)0x0;
  local_644 = 0;
  iVar1 = FUN_000228d4();
  if (iVar1 != 0) {
    snprintf(acStack_420,0x400,"%s/vmanager/ipc/firmware/upgrade?version=%s&did=%s&sname=%s",param_1
             ,param_1 + 0x120,param_1 + 0xc0,param_1 + 0xe0);
    printf("\x1b[0;32;32m%s(%d) req_info = %s\n\x1b[m\n","yi_get_update_info",0x182,acStack_420);
    FUN_00022d14(iVar1);
    FUN_00022920(iVar1,0x2712,acStack_420);
    FUN_00022920(iVar1,0x51,0);
    FUN_00022920(iVar1,0x40,0);
    FUN_00022920(iVar1,99,1);
    FUN_00022920(iVar1,0x2711,&local_648);
    FUN_00022920(iVar1,0x4e2b,FUN_000161c0);
    iVar2 = FUN_00022954(iVar1);
    if (iVar2 == 0) {
      if (local_644 == 0) {
        printf("\x1b[0;32;31m%s(%d) receive data error: len(%d)\n\x1b[m\n","yi_get_update_info",
               0x197);
      }
      else {
        memset(acStack_5a0,0,0x80);
        iVar2 = trans_json_ex_s(acStack_5a0,0x80,&DAT_000410a4,local_648);
        if ((iVar2 == 1) && (iVar2 = atoi(acStack_5a0), iVar2 == 1)) {
          memset(acStack_620,0,0x40);
          iVar2 = trans_json_ex_s(acStack_620,0x40,"needUpdate",local_648);
          if ((iVar2 != 0) && (iVar2 = strcmp(acStack_620,"true"), iVar2 == 0)) {
            memset(local_520,0,0x100);
            iVar2 = trans_json_ex_s(local_520,0x100,"downloadPath",local_648);
            if ((iVar2 != 0) && (local_520[0] != '\0')) {
              memset(local_5e0,0,0x40);
              iVar2 = trans_json_ex_s(local_5e0,0x40,"md5Code",local_648);
              if ((iVar2 != 0) && (local_5e0[0] != '\0')) {
                memset(local_640,0,0x20);
                iVar2 = trans_json_ex_s(local_640,0x20,"\"version\"",local_648);
                if ((iVar2 != 0) && (local_640[0] != '\0')) {
                  printf("\x1b[0;32;32m%s(%d) got url(%s), md5(%s), ver(%s)\n\x1b[m\n",
                         "yi_get_update_info",0x1b8,local_520,local_5e0,local_640);
                  strcpy(param_2,local_520);
                  strcpy(param_2 + 0x100,local_5e0);
                  strcpy(param_2 + 0x140,local_640);
                  FUN_00022b2c(iVar1);
                  free(local_648);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = FUN_00026fc8();
      printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: %s\n\x1b[m\n","yi_get_update_info",
             0x191,uVar3);
    }
    FUN_00022b2c(iVar1);
  }
  if (local_648 != (void *)0x0) {
    free(local_648);
  }
  return 0xffffffff;
}



undefined4 yi_download_file(undefined4 param_1,char *param_2,undefined4 param_3)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  __stream = fopen(param_2,"wb");
  if (__stream == (FILE *)0x0) {
    printf("\x1b[0;32;31m%s(%d) can\'t create file: %s\n\x1b[m\n","yi_download_file",0x1e5,param_2);
    return 0xffffffff;
  }
  FUN_00022750(3);
  iVar1 = FUN_000228d4();
  if (iVar1 != 0) {
    FUN_00022920(iVar1,0x2712,param_1);
    FUN_00022920(iVar1,0x4e2b,0);
    FUN_00022920(iVar1,0x2711,__stream);
    FUN_00022920(iVar1,0x2b,0);
    FUN_00022920(iVar1,0x4efb,&LAB_00015fa8);
    FUN_00022920(iVar1,0x2749,param_3);
    FUN_00022920(iVar1,0x34,1);
    FUN_00022920(iVar1,99,1);
    FUN_00022920(iVar1,0x13,1);
    FUN_00022920(iVar1,0x14,0x1e);
    FUN_00022920(iVar1,0x51,0);
    FUN_00022920(iVar1,0x40,0);
    iVar2 = FUN_00022954(iVar1);
    if (iVar2 == 0) {
      FUN_00022b2c(iVar1);
      fclose(__stream);
      return 0;
    }
    uVar3 = FUN_00026fc8();
    printf("\x1b[0;32;31m%s(%d) download failed: %s\n\x1b[m\n","yi_download_file",0x200,uVar3);
    FUN_00022b2c(iVar1);
  }
  fclose(__stream);
  remove(param_2);
  return 0xffffffff;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 yi_gen_presigned_url(int param_1,char *param_2)

{
  time_t tVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s;
  int iVar4;
  void *local_1900;
  int local_18fc;
  char acStack_18f8 [80];
  undefined1 auStack_18a8 [128];
  char acStack_1828 [1024];
  undefined1 auStack_1428 [1024];
  undefined1 auStack_1028 [1024];
  undefined1 auStack_c28 [1024];
  undefined1 auStack_828 [2052];
  
  acStack_18f8[0] = '\0';
  acStack_18f8[1] = '\0';
  acStack_18f8[2] = '\0';
  acStack_18f8[3] = '\0';
  acStack_18f8[4] = '\0';
  acStack_18f8[5] = '\0';
  acStack_18f8[6] = '\0';
  acStack_18f8[7] = '\0';
  acStack_18f8[8] = '\0';
  acStack_18f8[9] = '\0';
  acStack_18f8[10] = '\0';
  acStack_18f8[0xb] = '\0';
  acStack_18f8[0xc] = '\0';
  acStack_18f8[0xd] = '\0';
  acStack_18f8[0xe] = '\0';
  acStack_18f8[0xf] = '\0';
  memset(auStack_828,0,0x800);
  memset(acStack_1828,0,0x400);
  memset(auStack_1428,0,0x400);
  memset(auStack_1028,0,0x400);
  memset(auStack_c28,0,0x400);
  local_1900 = (void *)0x0;
  local_18fc = 0;
  tVar1 = time((time_t *)0x0);
  iVar2 = FUN_000228d4();
  if (param_1 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_gen_presigned_url",0x225,"gen url param");
    return 0xffffffff;
  }
  if (param_2 == (char *)0x0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_gen_presigned_url",0x226,"gen url result info");
    return 0xffffffff;
  }
  if (iVar2 != 0) {
    __s = acStack_18f8 + 0x10;
    memset(__s,0,0x40);
    iVar4 = param_1 + 0x80;
    memset(acStack_1828,0,0x400);
    uVar3 = gen_uidstring(iVar4,iVar4,__s);
    sprintf(acStack_1828,"seq=9&uid=%s&type=%d&sub_type=%d&suffix=%s&time=%u&timestamp=%u",uVar3,
            *(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),param_1 + 200,
            *(undefined4 *)(param_1 + 0xd4),tVar1);
    memset(auStack_18a8,0,0x80);
    gen_hmac(acStack_1828,param_1 + 0xa0,auStack_18a8);
    memset(acStack_1828,0,0x400);
    uVar3 = gen_uidstring(iVar4,iVar4,__s);
    sprintf(acStack_1828,
            "%s/v5/alert/gen_presigned_url?hmac=%s&seq=9&uid=%s&type=%d&sub_type=%d&suffix=%s&time=%u&timestamp=%u"
            ,param_1,auStack_18a8,uVar3,*(undefined4 *)(param_1 + 0xc0),
            *(undefined4 *)(param_1 + 0xc4),param_1 + 200,*(undefined4 *)(param_1 + 0xd4),tVar1);
    printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_gen_presigned_url",0x23c,acStack_1828);
    FUN_00022920(iVar2,0x2712,acStack_1828);
    FUN_00022920(iVar2,0x51,0);
    FUN_00022920(iVar2,0x40,0);
    FUN_00022920(iVar2,99,1);
    FUN_00022920(iVar2,0x2711,&local_1900);
    FUN_00022920(iVar2,0x4e2b,FUN_000161c0);
    iVar4 = FUN_00022954(iVar2);
    FUN_00022b2c(iVar2);
    if (iVar4 == 0) {
      if (local_18fc == 0) {
        printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_gen_presigned_url",0x253)
        ;
      }
      else {
        iVar2 = trans_json_ex_s(acStack_18f8,0x10,"\"code\"",local_1900);
        if (iVar2 == 1) {
          iVar2 = atoi(acStack_18f8);
          if (iVar2 == 20000) {
            iVar2 = trans_json_ex_s(auStack_828,0x800,"\"data\"",local_1900);
            if (iVar2 == 1) {
              printf("\x1b[0;32;32m%s(%d) gen_presigned_url success \n\x1b[m\n",
                     "yi_gen_presigned_url",0x25c);
              iVar2 = trans_json_ex_s(param_2,0x10,&DAT_000412dc,auStack_828);
              if ((iVar2 == 1) && (iVar2 = strcmp(param_2,"true"), iVar2 == 0)) {
                iVar2 = trans_json_ex_s(auStack_1428,0x400,"\"tar\"",auStack_828);
                if (iVar2 == 1) {
                  trans_json_ex_s(param_2 + 0x10,0x200,"\"url\"",auStack_1428);
                  trans_json_ex_s(param_2 + 0x210,0x40,"\"pwd\"",auStack_1428);
                }
                iVar2 = trans_json_ex_s(auStack_1028,0x400,"\"jpg\"",auStack_828);
                if (iVar2 == 1) {
                  trans_json_ex_s(param_2 + 0x250,0x200,"\"url\"",auStack_1028);
                  trans_json_ex_s(param_2 + 0x450,0x40,"\"pwd\"",auStack_1028);
                }
                iVar2 = trans_json_ex_s(auStack_c28,0x400,"\"mp4\"",auStack_828);
                if (iVar2 == 1) {
                  trans_json_ex_s(param_2 + 0x490,0x200,"\"url\"",auStack_c28);
                  trans_json_ex_s(param_2 + 0x690,0x40,"\"pwd\"",auStack_c28);
                }
                printf("\x1b[0;32;32m%s(%d) parse data finished! tar_url = %s tar pwd = %s pic_url = %s pic_pwd = %s                                 video_url = %s video_pwd = %s\n\x1b[m\n"
                       ,"yi_gen_presigned_url",0x275,param_2 + 0x10,param_2 + 0x210,param_2 + 0x250,
                       param_2 + 0x450,param_2 + 0x490,param_2 + 0x690);
                free(local_1900);
                return 0;
              }
            }
            else {
              printf("\x1b[0;32;31m%s(%d) gen_presigned_url failed! \n\x1b[m\n",
                     "yi_gen_presigned_url",0x281);
            }
            goto LAB_000184f4;
          }
        }
        else {
          iVar2 = atoi(acStack_18f8);
        }
        if (iVar2 == 0xc76b) {
          printf("\x1b[0;32;31m%s(%d) yi cloud storage time out, need sync info from server \n\x1b[m\n"
                 ,"yi_gen_presigned_url",0x287);
          free(local_1900);
          return 0xffffeffd;
        }
      }
    }
    else {
      uVar3 = FUN_00026fc8(iVar4);
      printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: %s\n\x1b[m\n","yi_gen_presigned_url",
             0x24e,uVar3);
    }
  }
LAB_000184f4:
  if (local_1900 != (void *)0x0) {
    free(local_1900);
  }
  return 0xffffffff;
}



undefined4 yi_event_upload(int param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int local_1c;
  
  local_1c = 0;
  if (param_1 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_event_upload",0x29f,"upload url");
  }
  else if (param_2 == (char *)0x0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_event_upload",0x2a0,"local_file");
  }
  else {
    FUN_00022750(3);
    iVar1 = FUN_000228d4();
    if (iVar1 == 0) {
      fclose((FILE *)0x0);
      return 0xffffffff;
    }
    __stream = fopen(param_2,"rb");
    if (__stream != (FILE *)0x0) {
      fseek(__stream,0,2);
      lVar2 = ftell(__stream);
      rewind(__stream);
      FUN_00022920(iVar1,0x2712,param_1);
      FUN_00022920(iVar1,0x51,0);
      FUN_00022920(iVar1,0x40,0);
      FUN_00022920(iVar1,0x36,1);
      FUN_00022920(iVar1,99,1);
      FUN_00022920(iVar1,0x4e2c,FUN_00016228);
      FUN_00022920(iVar1,0x2719,__stream);
      FUN_00022920(iVar1,0xe,lVar2);
      iVar3 = FUN_00022954(iVar1);
      if (iVar3 == 0) {
        FUN_00022b38(iVar1,0x200002,&local_1c);
        if (local_1c == 200) {
          fclose(__stream);
          FUN_00022b2c(iVar1);
          return 0;
        }
      }
      else {
        uVar4 = FUN_00026fc8();
        printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: %s\n\x1b[m\n","yi_event_upload",
               0x2c6,uVar4);
      }
      fclose(__stream);
    }
    FUN_00022b2c(iVar1);
  }
  return 0xffffffff;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 yi_event_update(int param_1,char *param_2)

{
  time_t tVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  int iVar5;
  char *__s;
  char *__s_00;
  void *local_1900;
  int local_18fc;
  char acStack_18f8 [80];
  undefined1 auStack_18a8 [128];
  undefined1 auStack_1828 [1024];
  undefined1 auStack_1428 [1024];
  char acStack_1028 [4100];
  
  acStack_18f8[4] = '\0';
  acStack_18f8[5] = '\0';
  acStack_18f8[6] = '\0';
  acStack_18f8[7] = '\0';
  acStack_18f8[0] = '\0';
  acStack_18f8[1] = '\0';
  acStack_18f8[2] = '\0';
  acStack_18f8[3] = '\0';
  acStack_18f8[8] = '\0';
  acStack_18f8[9] = '\0';
  acStack_18f8[10] = '\0';
  acStack_18f8[0xb] = '\0';
  local_1900 = (void *)0x0;
  acStack_18f8[0xc] = '\0';
  acStack_18f8[0xd] = '\0';
  acStack_18f8[0xe] = '\0';
  acStack_18f8[0xf] = '\0';
  local_18fc = 0;
  memset(auStack_1828,0,0x400);
  memset(auStack_1428,0,0x400);
  memset(acStack_1028,0,0x1000);
  tVar1 = time((time_t *)0x0);
  if (param_2 == (char *)0x0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_event_update",0x2eb,"timeout string buf");
  }
  else {
    iVar2 = FUN_000228d4();
    if (iVar2 != 0) {
      iVar5 = param_1 + 0x80;
      memset(acStack_18f8 + 0x10,0,0x40);
      uVar3 = gen_uidstring(iVar5,iVar5,acStack_18f8 + 0x10);
      __s_00 = (char *)(param_1 + 200);
      __s = (char *)(param_1 + 0x2c8);
      snprintf(acStack_1028,0x1000,
               "seq=9&uid=%s&type=%d&sub_type=%d&time=%u&local_video=%s&pic_urls=%s&video_urls=%s&pic_pwd=%s&video_pwd=%s&timestamp=%u"
               ,uVar3,*(undefined4 *)(param_1 + 0x548),*(undefined4 *)(param_1 + 0x54c),
               *(undefined4 *)(param_1 + 0x550),param_1 + 0xc0,__s_00,__s,param_1 + 0x4c8,
               param_1 + 0x508,tVar1);
      memset_s(auStack_18a8,0x80,0,0x80);
      gen_hmac(acStack_1028,param_1 + 0xa0,auStack_18a8);
      sVar4 = strlen(__s_00);
      URLEncode(__s_00,sVar4,auStack_1828,0x400);
      sVar4 = strlen(__s);
      URLEncode(__s,sVar4,auStack_1428,0x400);
      uVar3 = gen_uidstring(iVar5,iVar5,acStack_18f8 + 0x10);
      snprintf(acStack_1028,0x1000,
               "%s/v4/alert/event?hmac=%s&seq=9&uid=%s&type=%d&sub_type=%d&time=%u&local_video=%s&pic_urls=%s&video_urls=%s&pic_pwd=%s&video_pwd=%s&timestamp=%u"
               ,param_1,auStack_18a8,uVar3,*(undefined4 *)(param_1 + 0x548),
               *(undefined4 *)(param_1 + 0x54c),*(undefined4 *)(param_1 + 0x550),param_1 + 0xc0,
               auStack_1828,auStack_1428,param_1 + 0x4c8,param_1 + 0x508,tVar1);
      printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_event_update",0x316,acStack_1028);
      FUN_00022920(iVar2,0x2712,acStack_1028);
      FUN_00022920(iVar2,0x36,1);
      FUN_00022920(iVar2,0x51,0);
      FUN_00022920(iVar2,0x40,0);
      FUN_00022920(iVar2,0xe,0);
      FUN_00022920(iVar2,99,1);
      FUN_00022920(iVar2,0x2711,&local_1900);
      FUN_00022920(iVar2,0x4e2b,FUN_000161c0);
      iVar5 = FUN_00022954(iVar2);
      FUN_00022b2c(iVar2);
      if (iVar5 == 0) {
        if (local_18fc == 0) {
          printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_event_update",0x330);
        }
        else {
          iVar2 = trans_json_ex_s(acStack_18f8,0x10,"\"code\"",local_1900);
          if ((iVar2 == 1) && (iVar2 = atoi(acStack_18f8), iVar2 == 20000)) {
            if ((*(int *)(param_1 + 0x54c) != 5 && *(int *)(param_1 + 0x54c) != 3) &&
               (iVar2 = trans_json_ex_s(param_2,0x20,"\"ipcSetTime\"",local_1900), iVar2 != 1)) {
              printf("\x1b[0;32;31m%s(%d) got trans_json_ex_s ipcSetTime fail\n\x1b[m\n",
                     "yi_event_update",0x33b);
              sprintf(param_2,"%d",600);
            }
            printf("\x1b[0;32;32m%s(%d) do_cloud_event_update success \n\x1b[m\n","yi_event_update",
                   0x340);
            free(local_1900);
            return 0;
          }
        }
      }
      else {
        uVar3 = FUN_00026fc8(iVar5);
        printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: %s\n\x1b[m\n","yi_event_update",
               0x32b,uVar3);
      }
    }
    if (local_1900 != (void *)0x0) {
      free(local_1900);
    }
  }
  return 0xffffffff;
}



undefined4 yi_check_did_valid(int param_1)

{
  time_t tVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_520;
  int local_51c;
  char local_518 [16];
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 local_4ec;
  undefined1 auStack_4e8 [64];
  undefined1 auStack_4a8 [128];
  char acStack_428 [1028];
  
  uStack_504 = 0;
  local_518[4] = '\0';
  local_518[5] = '\0';
  local_518[6] = '\0';
  local_518[7] = '\0';
  uStack_500 = 0;
  local_518[8] = '\0';
  local_518[9] = '\0';
  local_518[10] = '\0';
  local_518[0xb] = '\0';
  uStack_4fc = 0;
  uStack_4f8 = 0;
  local_518[0xc] = '\0';
  local_518[0xd] = '\0';
  local_518[0xe] = '\0';
  local_518[0xf] = '\0';
  uStack_4f4 = 0;
  local_508 = 0;
  uStack_4f0 = 0;
  local_518[0] = '\0';
  local_518[1] = '\0';
  local_518[2] = '\0';
  local_518[3] = '\0';
  local_4ec = 0;
  tVar1 = time((time_t *)0x0);
  local_520 = (void *)0x0;
  local_51c = 0;
  iVar2 = FUN_000228d4();
  if (iVar2 != 0) {
    memset(auStack_4e8,0,0x40);
    iVar4 = param_1 + 0x80;
    memset(acStack_428,0,0x400);
    uVar3 = gen_uidstring(iVar4,iVar4,auStack_4e8);
    sprintf(acStack_428,"seq=9&uid=%s&timestamp=%u",uVar3,tVar1);
    memset(auStack_4a8,0,0x80);
    gen_hmac(acStack_428,param_1 + 0xa0,auStack_4a8);
    memset(acStack_428,0,0x400);
    uVar3 = gen_uidstring(iVar4,iVar4,auStack_4e8);
    sprintf(acStack_428,"%s/v4/ipc/check_did?hmac=%s&seq=9&uid=%s&timestamp=%u",param_1,auStack_4a8,
            uVar3,tVar1);
    printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_check_did_valid",0x3af,acStack_428);
    FUN_00022920(iVar2,0x2712,acStack_428);
    FUN_00022920(iVar2,0x51,0);
    FUN_00022920(iVar2,0x40,0);
    FUN_00022920(iVar2,99,1);
    FUN_00022920(iVar2,0x2711,&local_520);
    FUN_00022920(iVar2,0x4e2b,FUN_000161c0);
    iVar4 = FUN_00022954(iVar2);
    FUN_00022b2c(iVar2);
    if (iVar4 == 0) {
      if (local_51c == 0) {
        printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_check_did_valid",0x3c7);
      }
      else {
        iVar2 = trans_json_ex_s(local_518,0x10,"\"code\"",local_520);
        if (((iVar2 == 1) && (iVar2 = atoi(local_518), iVar2 == 20000)) &&
           (iVar2 = trans_json_ex_s(&local_508,0x20,"\"allow\"",local_520), iVar2 == 1)) {
          iVar2 = strcmp((char *)&local_508,"false");
          if (iVar2 == 0) {
            printf("\x1b[0;32;32m%s(%d)  result = false\n\x1b[m\n","yi_check_did_valid",0x3d7);
            free(local_520);
            return 0xfffff000;
          }
          iVar2 = strcmp((char *)&local_508,"true");
          if (iVar2 == 0) {
            printf("\x1b[0;32;32m%s(%d)  result = true\n\x1b[m\n","yi_check_did_valid",0x3dd);
            free(local_520);
            return 0;
          }
        }
      }
    }
    else {
      uVar3 = FUN_00026fc8(iVar4);
      printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: %s\n\x1b[m\n","yi_check_did_valid",
             0x3c2,uVar3);
    }
  }
  if (local_520 != (void *)0x0) {
    free(local_520);
  }
  return 0xffffffff;
}



int yi_reset_server(int param_1,int param_2)

{
  time_t tVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_510;
  int local_50c;
  char local_508 [16];
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 local_4ec;
  undefined1 auStack_4e8 [64];
  undefined1 auStack_4a8 [128];
  char acStack_428 [1028];
  
  local_508[4] = '\0';
  local_508[5] = '\0';
  local_508[6] = '\0';
  local_508[7] = '\0';
  local_508[8] = '\0';
  local_508[9] = '\0';
  local_508[10] = '\0';
  local_508[0xb] = '\0';
  local_508[0] = '\0';
  local_508[1] = '\0';
  local_508[2] = '\0';
  local_508[3] = '\0';
  local_508[0xc] = '\0';
  local_508[0xd] = '\0';
  local_508[0xe] = '\0';
  local_508[0xf] = '\0';
  memset(acStack_428,0,0x400);
  uStack_4f4 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4ec = 0;
  tVar1 = time((time_t *)0x0);
  local_510 = (void *)0x0;
  local_50c = 0;
  iVar2 = FUN_000228d4();
  if (iVar2 != 0) {
    iVar4 = param_1 + 0x80;
    memset(auStack_4e8,0,0x40);
    uVar3 = gen_uidstring(iVar4,iVar4,auStack_4e8);
    snprintf(acStack_428,0x400,"seq=9&uid=%s&timestamp=%u",uVar3,tVar1);
    memset_s(auStack_4a8,0x80,0,0x80);
    gen_hmac(acStack_428,param_1 + 0xa0,auStack_4a8);
    uVar3 = gen_uidstring(iVar4,iVar4,auStack_4e8);
    snprintf(acStack_428,0x400,"%s/v4/ipc/reset?hmac=%s&seq=9&uid=%s&timestamp=%u",param_1,
             auStack_4a8,uVar3,tVar1);
    printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_reset_server",0x40e,acStack_428);
    FUN_00022920(iVar2,0x2712,acStack_428);
    FUN_00022920(iVar2,0x51,0);
    FUN_00022920(iVar2,0x40,0);
    if (param_2 < 0) {
      FUN_00022920(iVar2,99,1);
    }
    else {
      FUN_00022920(iVar2,0xd,param_2);
      FUN_00022920(iVar2,0x4e,param_2);
    }
    FUN_00022920(iVar2,0x2711,&local_510);
    FUN_00022920(iVar2,0x4e2b,FUN_000161c0);
    iVar4 = FUN_00022954(iVar2);
    FUN_00022b2c(iVar2);
    if (iVar4 == 0) {
      if (local_50c == 0) {
        printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_reset_server",0x42d);
      }
      else {
        iVar2 = trans_json_ex_s(local_508,0x10,"\"code\"",local_510);
        if (iVar2 == 1) {
          iVar2 = atoi(local_508);
          if (iVar2 == 20000) {
            printf("\x1b[0;32;32m%s(%d) webapi_do_reset success %s\n\x1b[m\n","yi_reset_server",
                   0x436,local_510);
            free(local_510);
            return 0;
          }
          if (iVar2 == 0x4f11) {
            printf("\x1b[1;33m%s(%d) receive code 20241, reset failed\n\x1b[m\n","yi_reset_server",
                   0x43c);
            free(local_510);
            return -0x1001;
          }
        }
        iVar2 = trans_json_ex_s(&local_4f8,0x10,"\"curl_code\"",local_510);
        if (iVar2 == 1) {
          printf("\x1b[1;33m%s(%d) something error occured!, errno = %s\n\x1b[m\n","yi_reset_server"
                 ,0x443,&local_4f8);
          free(local_510);
          iVar2 = atoi((char *)&local_4f8);
          return iVar2;
        }
      }
    }
    else {
      uVar3 = FUN_00026fc8(iVar4);
      printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: {\"curl_code\":%d} %s\n\x1b[m\n",
             "yi_reset_server",0x428,iVar4,uVar3);
    }
  }
  if (local_510 != (void *)0x0) {
    free(local_510);
  }
  return -1;
}



undefined4 yi_do_check_region(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  char *__s1;
  void *local_4e0;
  int local_4dc;
  undefined1 auStack_4d8 [64];
  undefined1 auStack_498 [120];
  char acStack_420 [1024];
  
  memset(auStack_498,0,0x78);
  local_4e0 = (void *)0x0;
  local_4dc = 0;
  memset(acStack_420,0,0x400);
  iVar1 = FUN_000228d4();
  if (iVar1 != 0) {
    memset(auStack_4d8,0,0x40);
    uVar2 = gen_uidstring(param_1,param_1,auStack_4d8);
    sprintf(acStack_420,"http://yicamera-router.mi-ae.com.sg/v1/ipc/router?&uid=%s",uVar2);
    printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_do_check_region",0x463,acStack_420);
    FUN_00022920(iVar1,0x2712,acStack_420);
    FUN_00022920(iVar1,99,1);
    FUN_00022920(iVar1,0x2711,&local_4e0);
    FUN_00022920(iVar1,0x4e2b,FUN_000161c0);
    iVar3 = FUN_00022954(iVar1);
    FUN_00022b2c(iVar1);
    if (iVar3 == 0) {
      if (local_4dc == 0) {
        printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_do_check_region",0x479);
      }
      else {
        iVar1 = trans_json_ex_s(auStack_498,0x78,"\"endpoint\"",local_4e0);
        if (iVar1 == 1) {
          __s1 = (char *)(param_2 + 0x31);
          iVar1 = trans_json_ex_s(__s1,0x40,"\"dlProtocol\"",local_4e0);
          if (iVar1 == 1) {
            snprintf((char *)(param_2 + 1),0x80,"https://%s",auStack_498);
            iVar1 = strcmp(__s1,"mius");
            if (iVar1 == 0) {
              *param_2 = 0x11;
              pvVar4 = memcpy(param_2 + 0x21,"M325YY",7);
            }
            else {
              iVar1 = strcmp(__s1,"mieu");
              if (iVar1 == 0) {
                *param_2 = 0x10;
                pvVar4 = memcpy(param_2 + 0x21,"M325YY",7);
              }
              else {
                *param_2 = 9;
                pvVar4 = memcpy(param_2 + 0x21,"M325YY",7);
              }
            }
            printf("\x1b[0;32;32m%s(%d) in webapi_do_check_region, region_id = %d, api_server = %s, sname = %s, dlproto = %s\n\x1b[m\n"
                   ,"yi_do_check_region",0x495,*param_2,param_2 + 1,pvVar4,__s1);
            free(local_4e0);
            return 0;
          }
        }
      }
    }
    else {
      uVar2 = FUN_00026fc8(iVar3);
      printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: %s\n\x1b[m\n","yi_do_check_region",
             0x474,uVar2);
    }
  }
  if (local_4e0 != (void *)0x0) {
    free(local_4e0);
  }
  return 0xffffffff;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

int yi_do_login(int param_1,uint *param_2)

{
  time_t tVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *__s1;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int local_62f0;
  void *local_62b8;
  int local_62b4;
  char acStack_62b0 [16];
  undefined4 uStack_62a0;
  undefined4 uStack_629c;
  undefined4 uStack_6298;
  undefined4 local_6294;
  char acStack_6290 [16];
  undefined4 uStack_6280;
  undefined4 uStack_627c;
  undefined4 uStack_6278;
  undefined4 local_6274;
  undefined4 uStack_6270;
  undefined4 uStack_626c;
  undefined4 uStack_6268;
  undefined4 local_6264;
  char acStack_6260 [36];
  undefined1 auStack_623c [64];
  undefined1 auStack_61fc [64];
  undefined1 auStack_61bc [128];
  undefined1 auStack_613c [276];
  char acStack_6028 [1024];
  undefined1 auStack_5c28 [1024];
  char acStack_5828 [2048];
  undefined1 auStack_5028 [4096];
  undefined1 auStack_4028 [8192];
  char acStack_2028 [20];
  undefined1 auStack_2014 [8176];
  
  acStack_62b0[0] = '\0';
  acStack_62b0[1] = '\0';
  acStack_62b0[2] = '\0';
  acStack_62b0[3] = '\0';
  acStack_62b0[4] = '\0';
  acStack_62b0[5] = '\0';
  acStack_62b0[6] = '\0';
  acStack_62b0[7] = '\0';
  acStack_62b0[8] = '\0';
  acStack_62b0[9] = '\0';
  acStack_62b0[10] = '\0';
  acStack_62b0[0xb] = '\0';
  acStack_62b0[0xc] = '\0';
  acStack_62b0[0xd] = '\0';
  acStack_62b0[0xe] = '\0';
  acStack_62b0[0xf] = '\0';
  memset(auStack_4028,0,0x2000);
  uStack_62a0 = 0;
  acStack_6290[0] = '\0';
  acStack_6290[1] = '\0';
  acStack_6290[2] = '\0';
  acStack_6290[3] = '\0';
  uStack_6280 = 0;
  uStack_6270 = 0;
  uStack_626c = 0;
  acStack_6290[4] = '\0';
  acStack_6290[5] = '\0';
  acStack_6290[6] = '\0';
  acStack_6290[7] = '\0';
  uStack_627c = 0;
  uStack_6268 = 0;
  uStack_629c = 0;
  acStack_6290[8] = '\0';
  acStack_6290[9] = '\0';
  acStack_6290[10] = '\0';
  acStack_6290[0xb] = '\0';
  uStack_6278 = 0;
  local_6264 = 0;
  uStack_6298 = 0;
  acStack_6290[0xc] = '\0';
  acStack_6290[0xd] = '\0';
  acStack_6290[0xe] = '\0';
  acStack_6290[0xf] = '\0';
  local_6274 = 0;
  local_6294 = 0;
  memset(acStack_5828,0,0x800);
  memset(acStack_6028,0,0x400);
  acStack_6260[4] = '\0';
  acStack_6260[5] = '\0';
  acStack_6260[6] = '\0';
  acStack_6260[7] = '\0';
  acStack_6260[0] = '\0';
  acStack_6260[1] = '\0';
  acStack_6260[2] = '\0';
  acStack_6260[3] = '\0';
  acStack_6260[8] = '\0';
  acStack_6260[9] = '\0';
  acStack_6260[10] = '\0';
  acStack_6260[0xb] = '\0';
  acStack_6260[0xc] = '\0';
  acStack_6260[0xd] = '\0';
  acStack_6260[0xe] = '\0';
  acStack_6260[0xf] = '\0';
  memset(auStack_5c28,0,0x400);
  tVar1 = time((time_t *)0x0);
  local_62b8 = (void *)0x0;
  param_2[3] = 0;
  local_62b4 = 0;
  iVar2 = FUN_000228d4();
  if (iVar2 != 0) {
    memset(auStack_623c,0,0x40);
    memset(auStack_61fc,0,0x40);
    iVar9 = param_1 + 0x140;
    snprintf(acStack_6028,0x400,
             "{\"p2p_encrypt\":\"%s\",\"ssid\":\"%s\",\"mac\":\"%s\",\"ip\":\"%s\",\"signal_quality\":\"%d\"}"
             ,&DAT_000410b8,param_1 + 0x100,iVar9,param_1 + 0x160,*(undefined4 *)(param_1 + 0x180));
    sVar3 = strlen(acStack_6028);
    URLEncode(acStack_6028,sVar3,auStack_5c28,0x400);
    iVar8 = param_1 + 0x80;
    memset_s(acStack_5828,0x800,0,0x800);
    uVar4 = gen_uidstring(iVar8,iVar8,auStack_623c);
    uVar5 = gen_pwdstring(param_1 + 0xc0,iVar8,auStack_61fc);
    pcVar10 = (char *)(param_1 + 0xa0);
    snprintf(acStack_5828,0x800,
             "seq=9&uid=%s&password=%s&version=%s&model=0&port=0&mac=%s&packetloss=%d&p2pconnect=%d&p2pconnect_success=%d&tfstat=%d&timestamp=%u"
             ,uVar4,uVar5,param_1 + 0xe0,iVar9,*(undefined4 *)(param_1 + 0x184),
             *(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c),
             *(undefined4 *)(param_1 + 400),tVar1);
    memset_s(auStack_61bc,0x80,0,0x80);
    gen_hmac(acStack_5828,pcVar10,auStack_61bc);
    memset_s(acStack_5828,0x800,0,0x800);
    uVar4 = gen_uidstring(iVar8,iVar8,auStack_623c);
    uVar5 = gen_pwdstring(param_1 + 0xc0,iVar8,auStack_61fc);
    snprintf(acStack_5828,0x800,
             "%s/v4/ipc/on_line?hmac=%s&seq=9&uid=%s&password=%s&version=%s&model=0&port=0&mac=%s&packetloss=%d&p2pconnect=%d&p2pconnect_success=%d&tfstat=%d&timestamp=%u&ext_info=%s"
             ,param_1,auStack_61bc,uVar4,uVar5,param_1 + 0xe0,iVar9,*(undefined4 *)(param_1 + 0x184)
             ,*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c),
             *(undefined4 *)(param_1 + 400),tVar1,auStack_5c28);
    printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_do_login",0x4d6,acStack_5828);
    FUN_00022920(iVar2,0x2712,acStack_5828);
    FUN_00022920(iVar2,0x51,0);
    FUN_00022920(iVar2,0x40,0);
    FUN_00022920(iVar2,99,1);
    FUN_00022920(iVar2,0x2711,&local_62b8);
    FUN_00022920(iVar2,0x4e2b,FUN_000161c0);
    iVar8 = FUN_00022954(iVar2);
    FUN_00022b2c(iVar2);
    if (iVar8 == 0) {
      if (local_62b4 == 0) {
        printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_do_login",0x4ee);
      }
      else {
        iVar2 = trans_json_ex_s(acStack_62b0,0x10,"\"code\"",local_62b8);
        if (iVar2 == 1) {
          iVar2 = atoi(acStack_62b0);
          if (iVar2 == 20000) {
            printf("\x1b[0;32;32m%s(%d) webapi_do_login success %s\n\x1b[m\n","yi_do_login",0x4f7,
                   local_62b8);
            iVar2 = trans_json_ex_s(&uStack_62a0,0x10,"\"css_flag\"",local_62b8);
            if (iVar2 == 1) {
              iVar2 = atoi((char *)&uStack_62a0);
              *param_2 = (uint)(iVar2 != 0);
            }
            iVar2 = trans_json_ex_s(acStack_6290,0x10,"\"css_mode\"",local_62b8);
            if (iVar2 == 1) {
              iVar2 = atoi(acStack_6290);
              param_2[1] = (uint)(iVar2 != 0);
            }
            iVar2 = trans_json_ex_s(&uStack_6280,0x10,"\"css_image_flag\"",local_62b8);
            if (iVar2 == 1) {
              iVar2 = atoi((char *)&uStack_6280);
              param_2[2] = (uint)(iVar2 != 0);
            }
            iVar2 = trans_json_ex_s(auStack_4028,0x2000,"\"abilityTable\"",local_62b8);
            if (iVar2 == 1) {
              memset(acStack_2028,0,0x2000);
              memset(auStack_5028,0,0x1000);
              uVar4 = strhex2byte(auStack_5028,auStack_4028);
              sVar3 = strlen(pcVar10);
              AesSetKey(auStack_613c,pcVar10,sVar3,pcVar10,1);
              AesCbcDecrypt(auStack_613c,acStack_2028,auStack_5028,uVar4);
              pcVar10 = strrchr(acStack_2028,0x7d);
              if (pcVar10 != (char *)0x0) {
                pcVar10[1] = '\0';
              }
              local_62f0 = cJSON_Parse(acStack_2028);
              if ((local_62f0 != 0) || (local_62f0 = cJSON_Parse(auStack_2014), local_62f0 != 0)) {
                iVar2 = cJSON_GetObjectItem(local_62f0,"abilities");
                pcVar10 = acStack_6260 + 0x10;
                memset(pcVar10,0,0x14);
                if (iVar2 != 0) {
                  iVar8 = 0;
                  do {
                    iVar7 = *(int *)((int)&DAT_00051010 + iVar8);
                    iVar9 = iVar7;
                    if (iVar7 < 0) {
                      iVar9 = iVar7 + 7;
                    }
                    iVar6 = cJSON_GetObjectItem(iVar2,*(undefined4 *)((int)&DAT_0005100c + iVar8));
                    iVar9 = iVar9 >> 3;
                    if (((iVar6 == 0) ||
                        (__s1 = (char *)cJSON_GetStrObjItem(iVar6,"support"), __s1 == (char *)0x0))
                       || (iVar6 = strcmp(__s1,"y"), iVar6 != 0)) {
                      pcVar10[iVar9] = pcVar10[iVar9] & ~(byte)(1 << (iVar7 % 8 & 0xffU));
                    }
                    else {
                      pcVar10[iVar9] = pcVar10[iVar9] | (byte)(1 << (iVar7 % 8 & 0xffU));
                    }
                    iVar8 = iVar8 + 8;
                  } while (iVar8 != 0x1e0);
                }
                cJSON_Delete(local_62f0);
                param_2[3] = 1;
                memcpy(param_2 + 4,pcVar10,0x14);
              }
            }
            iVar2 = trans_json_ex_s(&uStack_6270,0x10,"\"codingProtocol\"",local_62b8);
            if (iVar2 == 1) {
              memcpy(param_2 + 9,&uStack_6270,0x10);
            }
            printf("\x1b[0;32;32m%s(%d) PARSE Json string finished!\n\x1b[m\n","yi_do_login",0x549);
            free(local_62b8);
            return 0;
          }
          if (iVar2 == 0x4f11) {
            printf("\x1b[1;33m%s(%d) cloud do login failed! ret = 20241...\n\x1b[m\n","yi_do_login",
                   0x54f);
            free(local_62b8);
            return -0x1001;
          }
          iVar2 = trans_json_ex_s(acStack_6260,0x10,"\"curl_code\"",local_62b8);
          if (iVar2 == 1) {
            printf("\x1b[1;33m%s(%d) something error occured!, errno = %s\n\x1b[m\n","yi_do_login",
                   0x555,acStack_6260);
            free(local_62b8);
            iVar2 = atoi(acStack_6260);
            return iVar2;
          }
        }
      }
    }
    else {
      uVar4 = FUN_00026fc8(iVar8);
      printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: %s\n\x1b[m\n","yi_do_login",0x4e9,
             uVar4);
    }
  }
  if (local_62b8 != (void *)0x0) {
    free(local_62b8);
  }
  return -1;
}



int yi_do_bindkey(int param_1,int param_2)

{
  time_t tVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_510;
  int local_50c;
  char local_508 [16];
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 local_4ec;
  undefined1 auStack_4e8 [64];
  undefined1 auStack_4a8 [128];
  char acStack_428 [1028];
  
  local_508[4] = '\0';
  local_508[5] = '\0';
  local_508[6] = '\0';
  local_508[7] = '\0';
  uStack_4f4 = 0;
  local_508[8] = '\0';
  local_508[9] = '\0';
  local_508[10] = '\0';
  local_508[0xb] = '\0';
  uStack_4f0 = 0;
  local_508[0xc] = '\0';
  local_508[0xd] = '\0';
  local_508[0xe] = '\0';
  local_508[0xf] = '\0';
  local_4ec = 0;
  local_508[0] = '\0';
  local_508[1] = '\0';
  local_508[2] = '\0';
  local_508[3] = '\0';
  local_4f8 = 0;
  tVar1 = time((time_t *)0x0);
  local_510 = (void *)0x0;
  local_50c = 0;
  iVar2 = FUN_000228d4();
  if (iVar2 != 0) {
    iVar4 = param_1 + 0x80;
    memset(auStack_4e8,0,0x40);
    uVar3 = gen_uidstring(iVar4,iVar4,auStack_4e8);
    sprintf(acStack_428,"seq=9&uid=%s&bindkey=%s&timestamp=%u",uVar3,param_1 + 0xc0,tVar1);
    memset(auStack_4a8,0,0x80);
    gen_hmac(acStack_428,param_1 + 0xa0,auStack_4a8);
    uVar3 = gen_uidstring(iVar4,iVar4,auStack_4e8);
    sprintf(acStack_428,"%s/v4/ipc/qr_bind?hmac=%s&seq=9&uid=%s&bindkey=%s&timestamp=%u",param_1,
            auStack_4a8,uVar3,param_1 + 0xc0,tVar1);
    printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_do_bindkey",0x584,acStack_428);
    FUN_00022920(iVar2,0x2712,acStack_428);
    FUN_00022920(iVar2,0x51,0);
    FUN_00022920(iVar2,0x40,0);
    if (param_2 < 0) {
      FUN_00022920(iVar2,99,1);
    }
    else {
      FUN_00022920(iVar2,0xd,param_2);
      FUN_00022920(iVar2,0x4e,param_2);
    }
    FUN_00022920(iVar2,0x2711,&local_510);
    FUN_00022920(iVar2,0x4e2b,FUN_000161c0);
    iVar4 = FUN_00022954(iVar2);
    FUN_00022b2c(iVar2);
    if (iVar4 == 0) {
      if (local_50c == 0) {
        printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_do_bindkey",0x5a3);
      }
      else {
        iVar2 = trans_json_ex_s(local_508,0x10,"\"code\"",local_510);
        if (iVar2 == 1) {
          iVar2 = atoi(local_508);
          if (iVar2 == 20000) {
            free(local_510);
            return 0;
          }
          if (iVar2 == 0x4efb) {
            printf("\x1b[0;32;31m%s(%d) bind key error, return code = %s \n\x1b[m\n","yi_do_bindkey"
                   ,0x5b1,local_508);
            free(local_510);
            return -0x1002;
          }
        }
        iVar2 = trans_json_ex_s(&local_4f8,0x10,"\"curl_code\"",local_510);
        if (iVar2 == 1) {
          printf("\x1b[1;33m%s(%d) something error occured!, errno = %s\n\x1b[m\n","yi_do_bindkey",
                 0x5b8,&local_4f8);
          free(local_510);
          iVar2 = atoi((char *)&local_4f8);
          return iVar2;
        }
      }
    }
    else {
      uVar3 = FUN_00026fc8(iVar4);
      printf("\x1b[0;32;31m%s(%d) curl_easy_perform() failed: {\"curl_code\":%d} %s\n\x1b[m\n",
             "yi_do_bindkey",0x59e,iVar4,uVar3);
    }
  }
  if (local_510 != (void *)0x0) {
    free(local_510);
  }
  return -1;
}



undefined4 yi_get_dev_info(int param_1,int *param_2,int param_3)

{
  FILE *__stream;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  time_t tVar12;
  int iVar13;
  undefined4 uVar14;
  char *pcVar15;
  size_t sVar16;
  int iVar17;
  int iVar18;
  undefined1 *__s;
  undefined1 *__s_00;
  int iVar19;
  char *pcVar20;
  void *pvStack_1d2c;
  int local_1d28;
  undefined4 local_1d24;
  undefined4 local_1d20;
  undefined4 local_1d1c;
  undefined4 local_1d18;
  undefined4 uStack_1d14;
  undefined4 uStack_1d10;
  undefined4 uStack_1d0c;
  undefined4 local_1d08;
  undefined4 uStack_1d04;
  undefined4 uStack_1d00;
  undefined4 uStack_1cfc;
  undefined4 local_1cf8;
  undefined4 uStack_1cf4;
  undefined4 uStack_1cf0;
  undefined4 uStack_1cec;
  undefined4 local_1ce8;
  undefined4 uStack_1ce4;
  undefined4 uStack_1ce0;
  undefined4 uStack_1cdc;
  undefined4 local_1cd8;
  undefined4 uStack_1cd4;
  undefined4 uStack_1cd0;
  undefined4 uStack_1ccc;
  undefined4 local_1cc8;
  undefined1 auStack_1cc4 [64];
  undefined1 auStack_1c84 [128];
  char acStack_1c04 [200];
  undefined1 auStack_1b3c [276];
  undefined1 auStack_1a28 [512];
  undefined1 auStack_1828 [512];
  undefined1 auStack_1628 [512];
  undefined1 auStack_1428 [1024];
  char acStack_1028 [1024];
  char acStack_c28 [20];
  undefined1 auStack_c14 [1004];
  undefined1 auStack_828 [2052];
  
  local_1d20 = 0;
  local_1d1c = 0;
  local_1d18 = 0;
  uStack_1d14 = 0;
  uStack_1d10 = 0;
  uStack_1d0c = 0;
  local_1d24 = 0;
  local_1d08 = 0;
  memset(auStack_828,0,0x800);
  memset(auStack_1a28,0,0x200);
  memset(auStack_1828,0,0x200);
  memset(auStack_1428,0,0x400);
  uStack_1d04 = 0;
  uStack_1cf4 = 0;
  uStack_1ce4 = 0;
  uStack_1d00 = 0;
  uStack_1cf0 = 0;
  uStack_1cfc = 0;
  uStack_1cec = 0;
  uStack_1cd4 = 0;
  local_1cf8 = 0;
  local_1ce8 = 0;
  uStack_1ce0 = 0;
  uStack_1cd0 = 0;
  uStack_1cdc = 0;
  uStack_1ccc = 0;
  local_1cd8 = 0;
  local_1cc8 = 0;
  memset(acStack_1c04,0,200);
  tVar12 = time((time_t *)0x0);
  param_2[4] = 0;
  pvStack_1d2c = (void *)0x0;
  local_1d28 = 0;
  iVar13 = FUN_000228d4();
  if (iVar13 == 0) {
LAB_0001aa38:
    if (pvStack_1d2c != (void *)0x0) {
      free(pvStack_1d2c);
    }
    return 0xffffffff;
  }
  iVar19 = param_1 + 0x80;
  memset(auStack_1cc4,0,0x40);
  uVar14 = gen_uidstring(iVar19,iVar19,auStack_1cc4);
  sprintf(acStack_1028,"seq=9&uid=%s&timestamp=%d",uVar14,tVar12);
  pcVar20 = (char *)(param_1 + 0xa0);
  memset(auStack_1c84,0,0x80);
  gen_hmac(acStack_1028,pcVar20,auStack_1c84);
  uVar14 = gen_uidstring(iVar19,iVar19,auStack_1cc4);
  sprintf(acStack_1028,"%s/v5/ipc/deviceinfo?hmac=%s&seq=9&uid=%s&timestamp=%d",param_1,auStack_1c84
          ,uVar14,tVar12);
  printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_get_dev_info",0x5f3,acStack_1028);
  FUN_00022920(iVar13,0x2712,acStack_1028);
  FUN_00022920(iVar13,0x51,0);
  FUN_00022920(iVar13,0x40,0);
  if (param_3 < 0) {
    FUN_00022920(iVar13,99,1);
  }
  else {
    FUN_00022920(iVar13,0xd,param_3);
    FUN_00022920(iVar13,0x4e,param_3);
  }
  FUN_00022920(iVar13,0x2711,&pvStack_1d2c);
  FUN_00022920(iVar13,0x4e2b,FUN_000161c0);
  iVar19 = FUN_00022954(iVar13);
  FUN_00022b2c(iVar13);
  __stream = stderr;
  if (iVar19 != 0) {
    uVar14 = FUN_00026fc8(iVar19);
    fprintf(__stream,"curl_easy_perform() failed: %s\n",uVar14);
  }
  if (local_1d28 == 0) {
    printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_get_dev_info",0x612);
    goto LAB_0001aa38;
  }
  local_1d24 = 0;
  local_1d20 = 0;
  local_1d1c = 0;
  local_1d18 = 0;
  iVar13 = trans_json_ex_s(&local_1d24,0x10,"\"code\"",pvStack_1d2c);
  if ((iVar13 != 1) || (iVar13 = atoi((char *)&local_1d24), iVar13 != 20000)) goto LAB_0001aa38;
  memset(auStack_828,0,0x800);
  iVar13 = trans_json_ex_s(auStack_828,0x800,"\"data\"",pvStack_1d2c);
  if (iVar13 != 1) goto LAB_0001aaf8;
  iVar13 = trans_json_ex_s(&uStack_1d14,0x10,"\"tz_offset\"",auStack_828);
  if (iVar13 == 1) {
    iVar13 = atoi((char *)&uStack_1d14);
    *param_2 = iVar13;
  }
  iVar13 = trans_json_ex_s(&uStack_1d04,0x10,"\"css_flag\"",auStack_828);
  if (iVar13 == 1) {
    iVar13 = atoi((char *)&uStack_1d04);
    param_2[1] = (uint)(iVar13 != 0);
  }
  iVar13 = trans_json_ex_s(&uStack_1cf4,0x10,"\"css_mode\"",auStack_828);
  if (iVar13 == 1) {
    iVar13 = atoi((char *)&uStack_1cf4);
    param_2[2] = (uint)(iVar13 != 0);
  }
  iVar13 = trans_json_ex_s(&uStack_1ce4,0x10,"\"css_image_flag\"",auStack_828);
  if (iVar13 == 1) {
    iVar13 = atoi((char *)&uStack_1ce4);
    param_2[3] = (uint)(iVar13 != 0);
  }
  iVar13 = trans_json_ex_s(auStack_1828,0x200,"\"premiumServices\"",auStack_828);
  if (iVar13 == 1) {
    memset(acStack_c28,0,0x200);
    memset(auStack_1b3c,0,0x100);
    uVar14 = strhex2byte(auStack_1b3c,auStack_1828);
    sVar16 = strlen(pcVar20);
    AesSetKey(auStack_1628,pcVar20,sVar16,pcVar20,1);
    AesCbcDecrypt(auStack_1628,acStack_c28,auStack_1b3c,uVar14);
    pcVar15 = strrchr(acStack_c28,0x7d);
    if (pcVar15 != (char *)0x0) {
      pcVar15[1] = '\0';
    }
    iVar13 = cJSON_Parse(acStack_c28);
    if ((((iVar13 == 0) && (iVar13 = cJSON_Parse(auStack_c14), iVar13 == 0)) ||
        (iVar13 = cJSON_GetObjectItem(iVar13,&DAT_00041bfc), iVar13 == 0)) ||
       (iVar13 = cJSON_GetObjectItem(iVar13,"ListNames"), iVar13 == 0)) goto LAB_0001ac1c;
    iVar19 = cJSON_GetArraySize();
    if (0 < iVar19) {
      pcVar15 = acStack_1c04;
      iVar18 = 0;
      do {
        iVar17 = cJSON_GetArrayItem(iVar13,iVar18);
        iVar18 = iVar18 + 1;
        strcpy(pcVar15,*(char **)(iVar17 + 0x10));
        printf("\x1b[1;33m%s(%d) premiumTable:  ListNum = %d  ListName:%s\x1b[m\n","yi_get_dev_info"
               ,0x64d,iVar19,pcVar15);
        pcVar15 = pcVar15 + 0x14;
      } while (iVar18 != iVar19);
    }
  }
  else {
LAB_0001ac1c:
    iVar19 = 0;
  }
  iVar13 = trans_json_ex_s(auStack_1428,0x400,"\"premiumTable\"",auStack_828);
  if (iVar13 == 1) {
    memset(acStack_c28,0,0x400);
    memset(auStack_1628,0,0x200);
    uVar14 = strhex2byte(auStack_1628,auStack_1428);
    sVar16 = strlen(pcVar20);
    AesSetKey(auStack_1b3c,pcVar20,sVar16,pcVar20,1);
    AesCbcDecrypt(auStack_1b3c,acStack_c28,auStack_1628,uVar14);
    pcVar20 = strrchr(acStack_c28,0x7d);
    if (pcVar20 != (char *)0x0) {
      pcVar20[1] = '\0';
    }
    iVar13 = cJSON_Parse(acStack_c28);
    if (((iVar13 != 0) || (iVar13 = cJSON_Parse(auStack_c14), iVar13 != 0)) &&
       ((iVar13 = cJSON_GetObjectItem(iVar13,&DAT_00041bfc), iVar13 != 0 && (0 < iVar19)))) {
      pcVar20 = acStack_1c04;
      iVar18 = 0;
      do {
        iVar17 = cJSON_GetObjectItem(iVar13,pcVar20);
        iVar18 = iVar18 + 1;
        pcVar20 = pcVar20 + 0x14;
        if (iVar17 != 0) {
          param_2[4] = 1;
          uVar1 = FUN_00016260(iVar17,"motion_video_upload");
          uVar2 = FUN_00016260(iVar17,"allday_video_upload");
          uVar3 = FUN_00016260(iVar17,"lapse_video");
          uVar4 = FUN_00016260(iVar17,"fast_video");
          uVar5 = FUN_00016260(iVar17,"fast_video_playback");
          uVar6 = FUN_00016260(iVar17,"time_poweron");
          uVar7 = FUN_00016260(iVar17,"human_detect");
          uVar8 = FUN_00016260(iVar17,"motion_area");
          uVar9 = FUN_00016260(iVar17,"baby_cry");
          uVar10 = FUN_00016260(iVar17,"abnormal_voice");
          uVar11 = FUN_00016260(iVar17,"image_index");
          *(undefined1 *)(param_2 + 5) = uVar1;
          *(undefined1 *)((int)param_2 + 0x15) = uVar2;
          *(undefined1 *)((int)param_2 + 0x16) = uVar3;
          *(undefined1 *)(param_2 + 6) = uVar5;
          *(undefined1 *)((int)param_2 + 0x19) = uVar6;
          *(undefined1 *)((int)param_2 + 0x1a) = uVar7;
          *(undefined1 *)((int)param_2 + 0x17) = uVar4;
          *(undefined1 *)((int)param_2 + 0x1b) = uVar8;
          *(undefined1 *)(param_2 + 7) = uVar9;
          *(undefined1 *)((int)param_2 + 0x1d) = uVar10;
          *(undefined1 *)((int)param_2 + 0x1e) = uVar11;
        }
      } while (iVar18 != iVar19);
    }
  }
  iVar13 = trans_json_ex_s(auStack_1a28,0x200,"\"appParam\"",auStack_828);
  if (iVar13 == 1) {
    pcVar20 = acStack_c28;
    memset(pcVar20,0,0x400);
    printf("\x1b[0;32;32m%s(%d) app_param = %s \n\x1b[m\n","yi_get_dev_info",0x684,auStack_1a28);
    iVar13 = trans_json_ex_s(pcVar20,0x400,"\"schedule_power\"",auStack_1a28);
    if (iVar13 == 1) {
      __s = auStack_1628;
      __s_00 = auStack_1b3c;
      memset(__s,0,0x200);
      memset(__s_00,0,0x18);
      printf("\x1b[0;32;32m%s(%d) schedule_power:%s\x1b[m\n","yi_get_dev_info",0x68a,pcVar20);
      iVar13 = trans_json_ex_s(__s,0x200,"\"schedule_power_on\"",pcVar20);
      if (iVar13 == 1) {
        printf("\x1b[1;33m%s(%d) schedule_pwron_str:%s\x1b[m\n","yi_get_dev_info",0x68d,__s);
        entry(__s);
      }
      memset(__s,0,0x200);
      iVar13 = trans_json_ex_s(__s,0x200,"\"schedule_power_off\"",pcVar20);
      if (iVar13 == 1) {
        printf("\x1b[1;33m%s(%d) schedule_pwroff_str:%s\x1b[m\n","yi_get_dev_info",0x694,__s);
        entry(__s);
      }
      memcpy(param_2 + 8,__s_00,0x18);
    }
  }
  iVar13 = trans_json_ex_s(&uStack_1cd4,0x10,"\"codingProtocol\"",auStack_828);
  if (iVar13 == 1) {
    memcpy(param_2 + 0xe,&uStack_1cd4,0x10);
  }
LAB_0001aaf8:
  free(pvStack_1d2c);
  return 0;
}



undefined4 yi_do_tnp_online(int param_1,undefined4 param_2,int param_3)

{
  FILE *__stream;
  time_t tVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *__s;
  int iVar5;
  void *local_500;
  int local_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 local_4ec;
  undefined1 auStack_4e8 [64];
  undefined1 auStack_4a8 [128];
  char acStack_428 [1028];
  
  uStack_4f4 = 0;
  uStack_4f0 = 0;
  local_4f8 = 0;
  local_4ec = 0;
  tVar1 = time((time_t *)0x0);
  local_500 = (void *)0x0;
  local_4fc = 0;
  if (param_1 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_do_tnp_online",0x6c4,"gen url param");
  }
  else if (param_3 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_do_tnp_online",0x6c5,"gen url result info");
  }
  else {
    printf("\x1b[0;32;32m%s(%d) now do webapi_do_tnp_on_line \n\x1b[m\n","yi_do_tnp_online",0x6c6);
    iVar2 = FUN_000228d4();
    if (iVar2 != 0) {
      memset(auStack_4e8,0,0x40);
      iVar5 = param_1 + 0x80;
      memset(acStack_428,0,0x400);
      uVar3 = gen_uidstring(iVar5,iVar5,auStack_4e8);
      sprintf(acStack_428,"seq=9&uid=%s&version=%s&timestamp=%u",uVar3,param_2,tVar1);
      memset(auStack_4a8,0,0x80);
      gen_hmac(acStack_428,param_1 + 0xa0,auStack_4a8);
      memset(acStack_428,0,0x400);
      uVar3 = gen_uidstring(iVar5,iVar5,auStack_4e8);
      sprintf(acStack_428,"%s/v4/tnp/on_line?hmac=%s&seq=9&uid=%s&version=%s&timestamp=%u",param_1,
              auStack_4a8,uVar3,param_2,tVar1);
      printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_do_tnp_online",0x6dd,acStack_428);
      FUN_00022920(iVar2,0x2712,acStack_428);
      FUN_00022920(iVar2,0x51,0);
      FUN_00022920(iVar2,0x40,0);
      FUN_00022920(iVar2,99,1);
      FUN_00022920(iVar2,0x2711,&local_500);
      FUN_00022920(iVar2,0x4e2b,FUN_000161c0);
      iVar5 = FUN_00022954(iVar2);
      FUN_00022b2c(iVar2);
      __stream = stderr;
      if (iVar5 != 0) {
        uVar3 = FUN_00026fc8(iVar5);
        fprintf(__stream,"curl_easy_perform() failed: %s\n",uVar3);
      }
      if (local_4fc == 0) {
        printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_do_tnp_online",0x6f4);
      }
      else {
        iVar2 = trans_json_ex_s(&local_4f8,0x10,"\"code\"",local_500);
        if ((iVar2 == 1) && (iVar2 = atoi((char *)&local_4f8), iVar2 == 20000)) {
          printf("\x1b[0;32;32m%s(%d) webapi_do_tnp_on_line success %s\n\x1b[m\n","yi_do_tnp_online"
                 ,0x6fb,local_500);
          iVar2 = trans_json_ex_s(param_3,0x20,"\"DID\"",local_500);
          if (iVar2 == 1) {
            __s = (char *)(param_3 + 0x20);
            iVar2 = trans_json_ex_s(__s,0x20,"\"License\"",local_500);
            if ((iVar2 == 1) &&
               (iVar2 = trans_json_ex_s(param_3 + 0x40,0x80,"\"InitString\"",local_500), iVar2 == 1)
               ) {
              pcVar4 = strchr(__s,0x3a);
              if (pcVar4 != (char *)0x0) {
                *pcVar4 = '\0';
              }
              printf("\x1b[0;32;32m%s(%d) tnp_license =%s p =%s\n\x1b[m\n","yi_do_tnp_online",0x705,
                     __s,pcVar4);
              free(local_500);
              return 0;
            }
          }
        }
      }
    }
    if (local_500 != (void *)0x0) {
      free(local_500);
    }
  }
  return 0xffffffff;
}



undefined4 yi_report_tnp_status(int param_1)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_8b0;
  int local_8ac;
  char acStack_8a8 [128];
  char acStack_828 [2052];
  
  memset(acStack_8a8,0,0x80);
  memset(acStack_828,0,0x800);
  local_8b0 = (void *)0x0;
  local_8ac = 0;
  get_cur_time_ms();
  iVar1 = FUN_000228d4();
  if (iVar1 != 0) {
    snprintf(acStack_828,0x800,
             "%s/ipc/monitor/heartbeat?did=%s&device_version=%s&mac=%s&heart_time=%llu&p2p_status=%d"
             ,param_1,param_1 + 0xc0,param_1 + 0x100,param_1 + 0xe0);
    printf("\x1b[0;32;32m%s(%d) req_info=%s\n\x1b[m\n","yi_report_tnp_status",0x728,acStack_828);
    FUN_00022920(iVar1,0x2712,acStack_828);
    FUN_00022920(iVar1,0x36,1);
    FUN_00022920(iVar1,0x51,0);
    FUN_00022920(iVar1,0x40,0);
    FUN_00022920(iVar1,0xe,0);
    FUN_00022920(iVar1,99,1);
    FUN_00022920(iVar1,0x2711,&local_8b0);
    FUN_00022920(iVar1,0x4e2b,FUN_000161c0);
    iVar2 = FUN_00022954(iVar1);
    FUN_00022b2c(iVar1);
    __stream = stderr;
    if (iVar2 != 0) {
      uVar3 = FUN_00026fc8(iVar2);
      fprintf(__stream,"curl_easy_perform() failed: %s\n",uVar3);
    }
    if (local_8ac == 0) {
      printf("\x1b[0;32;31m%s(%d) receive mesg len error!\n\x1b[m\n","yi_report_tnp_status",0x73b);
    }
    else {
      iVar1 = trans_json(acStack_8a8,&DAT_000410a4,local_8b0);
      if ((iVar1 == 1) && (iVar1 = atoi(acStack_8a8), iVar1 == 1)) {
        printf("\x1b[0;32;32m%s(%d) report_tnp_on_line_status success state = %d did = %s\n\x1b[m\n"
               ,"yi_report_tnp_status",0x742,*(undefined4 *)(param_1 + 0x120),param_1 + 0xc0);
        free(local_8b0);
        return 0;
      }
    }
  }
  if (local_8b0 != (void *)0x0) {
    free(local_8b0);
  }
  return 0xffffffff;
}



void yi_cloud_crypt_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char acStack_218 [516];
  
  memset(acStack_218,0,0x200);
  sprintf(acStack_218,"/usr/sbin/crypt_file -e %s %s %s",param_1,param_2,param_3);
  system(acStack_218);
  return;
}



undefined4 yi_cloud_get_version(void)

{
  undefined4 in_r3;
  
  printf("\x1b[0;32;32m%s(%d) 0.0.0.202003181300\n\x1b[m\n","yi_cloud_get_version",0x75c,in_r3,in_r3
        );
  return 0;
}



void yi_make_ap_ssid(char *param_1,int param_2)

{
  sprintf(param_1,"CAM_%s",param_2 + 8);
  return;
}



void yi_make_ap_p2p_id(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte local_1c [4];
  byte *pbVar3;
  
  puVar1 = memcpy(param_1,param_2,0x14);
  puVar1[0x14] = 0;
  *puVar1 = 0x54;
  puVar1[7] = 0x2d;
  puVar1[0xe] = 0x2d;
  pbVar3 = puVar1 + 8;
  do {
    while( true ) {
      pbVar2 = pbVar3 + 1;
      if ((*pbVar3 - 0x41 & 0xff) < 0x1a) break;
      pbVar3 = pbVar2;
      if (pbVar2 == puVar1 + 0xe) {
        return;
      }
    }
    snprintf((char *)local_1c,2,"%d",(int)(*pbVar3 - 0x41) % 10);
    *pbVar3 = local_1c[0];
    pbVar3 = pbVar2;
  } while (pbVar2 != puVar1 + 0xe);
  return;
}



undefined4 yi_ap_listen_start(char *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  puts("====yi_sdk yi_ap_listen_start =====\r");
  if (DAT_000515f8 != '\0') {
    return 0;
  }
  yi_make_ap_p2p_id(&DAT_000515fd,param_1);
  strcpy(&DAT_0005161d,param_1);
  DAT_000515fa = param_2 != 0;
  DAT_000515fb = param_3 != 0;
  DAT_000515fc = param_4 != 0;
  iVar1 = pthread_create(&DAT_000515f4,(pthread_attr_t *)0x0,FUN_00016408,&DAT_000515f4);
  if (iVar1 == 0) {
    DAT_000515f8 = 1;
    return 0;
  }
  return 0xffffffff;
}



void yi_ap_listen_stop(void)

{
  if (DAT_000515f8 == '\0') {
    return;
  }
  DAT_000515f9 = 1;
  pthread_join(DAT_000515f4,(void **)0x0);
  DAT_000515f9 = 0;
  DAT_000515f8 = 0;
  return;
}



uint FUN_0001bc5c(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  if (param_1 == (byte *)0x0) {
    return (uint)(param_2 != (byte *)0x0);
  }
  if (param_2 == (byte *)0x0) {
    uVar5 = 1;
  }
  else {
    bVar3 = *param_1;
    bVar4 = *param_2;
    while( true ) {
      iVar1 = (uint)*(ushort *)(__ctype_tolower + (uint)bVar3 * 2) * 0x10000;
      iVar2 = (uint)*(ushort *)(__ctype_tolower + (uint)bVar4 * 2) * 0x10000;
      if (iVar1 != iVar2) break;
      if (bVar3 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      param_2 = param_2 + 1;
      bVar4 = *param_2;
    }
    uVar5 = (iVar1 >> 0x10) - (iVar2 >> 0x10);
  }
  return uVar5;
}



int FUN_0001bcf0(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*param_1;
  uVar1 = uVar2 - 0x30;
  if (9 < (uVar1 & 0xff)) {
    if (uVar2 - 0x41 < 6) {
      uVar1 = uVar2 - 0x37;
    }
    else {
      if (5 < uVar2 - 0x61) {
        return 0;
      }
      uVar1 = uVar2 - 0x57;
    }
  }
  uVar2 = (uint)param_1[1];
  iVar3 = uVar1 * 0x10;
  if ((uVar2 - 0x30 & 0xff) < 10) {
    iVar3 = (uVar2 - 0x30) + iVar3;
  }
  else if (uVar2 - 0x41 < 6) {
    iVar3 = (uVar2 - 0x37) + iVar3;
  }
  else {
    if (5 < uVar2 - 0x61) {
      return 0;
    }
    iVar3 = (uVar2 - 0x57) + iVar3;
  }
  uVar1 = (uint)param_1[2];
  uVar2 = uVar1 - 0x30;
  if (9 < (uVar2 & 0xff)) {
    if (uVar1 - 0x41 < 6) {
      uVar2 = uVar1 - 0x37;
    }
    else {
      if (5 < uVar1 - 0x61) {
        return 0;
      }
      uVar2 = uVar1 - 0x57;
    }
  }
  uVar1 = (uint)param_1[3];
  iVar3 = (uVar2 + iVar3 * 0x10) * 0x10;
  if ((uVar1 - 0x30 & 0xff) < 10) {
    iVar3 = (uVar1 - 0x30) + iVar3;
  }
  else if (uVar1 - 0x41 < 6) {
    iVar3 = (uVar1 - 0x37) + iVar3;
  }
  else {
    if (5 < uVar1 - 0x61) {
      return 0;
    }
    iVar3 = (uVar1 - 0x57) + iVar3;
  }
  return iVar3;
}



void * FUN_0001be08(void)

{
  void *__s;
  
  __s = (void *)(*DAT_000515b8)(0x28);
  if (__s != (void *)0x0) {
    memset(__s,0,0x28);
  }
  return __s;
}



int FUN_0001be40(int *param_1,int param_2)

{
  uint uVar1;
  void *__dest;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  param_2 = param_1[2] + param_2;
  if (param_2 <= param_1[1]) {
    return *param_1 + param_1[2];
  }
  uVar1 = param_2 - 1;
  uVar1 = uVar1 | (int)uVar1 >> 1;
  uVar1 = uVar1 | (int)uVar1 >> 2;
  uVar1 = uVar1 | (int)uVar1 >> 4;
  uVar1 = uVar1 | (int)uVar1 >> 8;
  iVar2 = (uVar1 | (int)uVar1 >> 0x10) + 1;
  __dest = (void *)(*DAT_000515b8)(iVar2);
  if (__dest != (void *)0x0) {
    memcpy(__dest,(void *)*param_1,param_1[1]);
    (*DAT_000515bc)(*param_1);
    param_1[1] = iVar2;
    *param_1 = (int)__dest;
    return (int)__dest + param_1[2];
  }
  (*DAT_000515bc)(*param_1);
  param_1[1] = 0;
  *param_1 = 0;
  return 0;
}



undefined4 * FUN_0001bef8(void *param_1)

{
  undefined4 *__dest;
  
  __dest = (undefined4 *)FUN_0001be08();
  if (__dest != (undefined4 *)0x0) {
    memcpy(__dest,param_1,0x28);
    __dest[3] = __dest[3] | 0x100;
    __dest[8] = 0;
    __dest[1] = 0;
    *__dest = 0;
  }
  return __dest;
}



void * FUN_0001bf3c(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (void *)(*DAT_000515b8)(sVar1 + 1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,sVar1 + 1);
  }
  return __dest;
}



int FUN_0001bf80(int *param_1)

{
  size_t sVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    iVar2 = param_1[2];
    sVar1 = strlen((char *)(*param_1 + iVar2));
    return sVar1 + iVar2;
  }
  return 0;
}



undefined1 * FUN_0001c26c(byte *param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint __c;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  __c = (uint)*param_1;
  if (__c == 0) {
    iVar5 = 3;
    iVar8 = 0;
  }
  else {
    bVar13 = false;
    uVar7 = __c;
    pbVar6 = param_1;
    do {
      pbVar6 = pbVar6 + 1;
      uVar9 = uVar7 - 1;
      bVar11 = 0x21 < uVar7;
      bVar10 = uVar7 != 0x22;
      if (bVar10) {
        bVar11 = 0x1d < uVar9;
      }
      bVar12 = uVar7 == 0x5c;
      uVar7 = (uint)*pbVar6;
      bVar13 = (bool)(bVar13 | ((!bVar11 || (!bVar10 || uVar9 == 0x1e)) || bVar12));
    } while (uVar7 != 0);
    if (bVar13) {
      iVar8 = 0;
      pbVar6 = param_1;
      do {
        while (pcVar2 = strchr("\"\\\b\f\n\r\t",__c), pcVar2 == (char *)0x0) {
          pbVar6 = pbVar6 + 1;
          if (__c < 0x20) {
            iVar8 = iVar8 + 6;
          }
          else {
            iVar8 = iVar8 + 1;
          }
          __c = (uint)*pbVar6;
          if (*pbVar6 == 0) goto LAB_0001c320;
        }
        iVar8 = iVar8 + 2;
        pbVar6 = pbVar6 + 1;
        __c = (uint)*pbVar6;
      } while (*pbVar6 != 0);
LAB_0001c320:
      if (param_2 == 0) {
        puVar3 = (undefined1 *)(*DAT_000515b8)(iVar8 + 3);
      }
      else {
        puVar3 = (undefined1 *)FUN_0001be40(param_2);
      }
      if (puVar3 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      pbVar6 = puVar3 + 1;
      *puVar3 = 0x22;
LAB_0001c368:
      do {
        while( true ) {
          while( true ) {
            bVar1 = *param_1;
            pbVar4 = param_1;
            while( true ) {
              if (bVar1 == 0) {
                pbVar6[1] = 0;
                *pbVar6 = 0x22;
                return puVar3;
              }
              param_1 = pbVar4 + 1;
              bVar13 = 0x21 < bVar1;
              if (bVar1 != 0x22) {
                bVar13 = 0x1e < bVar1;
              }
              if ((!bVar13 || (bVar1 == 0x22 || bVar1 == 0x1f)) || (bVar1 == 0x5c)) break;
              *pbVar6 = bVar1;
              bVar1 = *param_1;
              pbVar6 = pbVar6 + 1;
              pbVar4 = param_1;
            }
            *pbVar6 = 0x5c;
            bVar1 = *pbVar4;
            if (bVar1 != 0xc) break;
            pbVar6[1] = 0x66;
            pbVar6 = pbVar6 + 2;
          }
          if (bVar1 < 0xd) break;
          if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
            pbVar6[1] = bVar1;
            pbVar6 = pbVar6 + 2;
          }
          else if (bVar1 == 0xd) {
            pbVar6[1] = 0x72;
            pbVar6 = pbVar6 + 2;
          }
          else {
LAB_0001c440:
            pbVar4 = pbVar6 + 1;
            pbVar6 = pbVar6 + 6;
            sprintf((char *)pbVar4,"u%04x");
          }
        }
        if (bVar1 != 9) {
          if (bVar1 == 10) {
            pbVar6[1] = 0x6e;
            pbVar6 = pbVar6 + 2;
          }
          else {
            if (bVar1 != 8) goto LAB_0001c440;
            pbVar6[1] = 0x62;
            pbVar6 = pbVar6 + 2;
          }
          goto LAB_0001c368;
        }
        pbVar6[1] = 0x74;
        pbVar6 = pbVar6 + 2;
      } while( true );
    }
    iVar8 = (int)pbVar6 - (int)param_1;
    iVar5 = iVar8 + 3;
  }
  if (param_2 == 0) {
    puVar3 = (undefined1 *)(*DAT_000515b8)(iVar5);
  }
  else {
    puVar3 = (undefined1 *)FUN_0001be40(param_2);
  }
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0x22;
    pcVar2 = strcpy(puVar3 + 1,(char *)param_1);
    pcVar2[iVar8] = '\"';
    (pcVar2 + iVar8)[1] = '\0';
  }
  return puVar3;
}



byte * FUN_0001c50c(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  byte *pbVar9;
  
  pbVar9 = (byte *)(param_3 + 1);
  if (*param_3 != '\"') {
    DAT_00051640 = param_3;
    return (byte *)0x0;
  }
  iVar2 = 0;
  for (pbVar5 = pbVar9; bVar8 = *pbVar5, bVar8 != 0 && bVar8 != 0x22; pbVar5 = pbVar5 + 1) {
    while (iVar2 = iVar2 + 1, bVar8 == 0x5c) {
      pbVar5 = pbVar5 + 2;
      bVar8 = *pbVar5;
      if (bVar8 == 0 || bVar8 == 0x22) goto LAB_0001c56c;
    }
  }
LAB_0001c56c:
  pbVar5 = (byte *)(*DAT_000515b8)(iVar2 + 1);
  if (pbVar5 == (byte *)0x0) {
    pbVar9 = (byte *)0x0;
  }
  else {
    bVar8 = param_3[1];
    pbVar6 = pbVar5;
    while (bVar8 != 0 && bVar8 != 0x22) {
      if (bVar8 == 0x5c) {
        pbVar7 = pbVar9 + 1;
        switch(pbVar9[1]) {
        case 0x62:
          *pbVar6 = 8;
          pbVar6 = pbVar6 + 1;
          bVar1 = pbVar9[2];
          goto LAB_0001c6ec;
        case 99:
          break;
        case 100:
          break;
        case 0x65:
          break;
        case 0x66:
          *pbVar6 = 0xc;
          pbVar6 = pbVar6 + 1;
          bVar1 = pbVar9[2];
          goto LAB_0001c6ec;
        case 0x67:
          break;
        case 0x68:
          break;
        case 0x69:
          break;
        case 0x6a:
          break;
        case 0x6b:
          break;
        case 0x6c:
          break;
        case 0x6d:
          break;
        case 0x6e:
          *pbVar6 = 10;
          pbVar6 = pbVar6 + 1;
          bVar1 = pbVar9[2];
          goto LAB_0001c6ec;
        case 0x6f:
          break;
        case 0x70:
          break;
        case 0x71:
          break;
        case 0x72:
          *pbVar6 = 0xd;
          pbVar6 = pbVar6 + 1;
          bVar1 = pbVar9[2];
          goto LAB_0001c6ec;
        case 0x73:
          break;
        case 0x74:
          *pbVar6 = 9;
          pbVar6 = pbVar6 + 1;
          bVar1 = pbVar9[2];
          goto LAB_0001c6ec;
        case 0x75:
          uVar3 = FUN_0001bcf0(pbVar9 + 2);
          pbVar7 = pbVar9 + 5;
          if (uVar3 == 0 || uVar3 - 0xdc00 < 0x400) {
            bVar1 = pbVar9[6];
          }
          else if (uVar3 - 0xd800 < 0x400) {
            bVar1 = pbVar9[6];
            if ((pbVar9[6] == 0x5c) && (bVar1 = bVar8, pbVar9[7] == 0x75)) {
              uVar4 = FUN_0001bcf0(pbVar9 + 8);
              pbVar7 = pbVar9 + 0xb;
              if (uVar4 - 0xdc00 < 0x400) {
                uVar3 = ((uVar3 & 0x3ff) << 10 | uVar4 & 0x3ff) + 0x10000;
LAB_0001c7ec:
                if (uVar3 < 0x10000) {
                  iVar2 = 3;
                }
                else {
                  iVar2 = 4;
                  pbVar6[3] = ~((byte)~(byte)(((uVar3 & 0x3f) << 0x19) >> 0x18) >> 1);
                  uVar3 = uVar3 >> 6;
                }
                uVar4 = uVar3 & 0x3f;
                uVar3 = uVar3 >> 6;
                pbVar6[2] = ~((byte)~(byte)((uVar4 << 0x19) >> 0x18) >> 1);
                goto LAB_0001c7bc;
              }
              bVar1 = pbVar9[0xc];
            }
          }
          else {
            if (uVar3 < 0x80) {
              iVar2 = 1;
            }
            else {
              if (0x7ff < uVar3) goto LAB_0001c7ec;
              iVar2 = 2;
LAB_0001c7bc:
              uVar4 = uVar3 & 0x3f;
              uVar3 = uVar3 >> 6;
              pbVar6[1] = ~((byte)~(byte)((uVar4 << 0x19) >> 0x18) >> 1);
            }
            *pbVar6 = (byte)uVar3 | (&DAT_000422e0)[iVar2];
            pbVar6 = pbVar6 + iVar2;
            bVar1 = pbVar7[1];
          }
          goto LAB_0001c6ec;
        }
        *pbVar6 = pbVar9[1];
        pbVar6 = pbVar6 + 1;
        bVar1 = pbVar9[2];
LAB_0001c6ec:
        bVar8 = bVar1;
        pbVar9 = pbVar7 + 1;
      }
      else {
        *pbVar6 = bVar8;
        pbVar9 = pbVar9 + 1;
        bVar8 = *pbVar9;
        pbVar6 = pbVar6 + 1;
      }
    }
    *pbVar6 = 0;
    bVar8 = *pbVar9;
    *param_2 = pbVar5;
    if (bVar8 == 0x22) {
      pbVar9 = pbVar9 + 1;
    }
    *param_1 = 4;
  }
  return pbVar9;
}



byte * FUN_0001c864(int param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r0;
  int *piVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined4 extraout_s3;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_2c;
  
  DAT_00051644 = DAT_00051644 + 1;
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  iVar1 = strncmp((char *)param_2,"null",4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    return param_2 + 4;
  }
  iVar1 = strncmp((char *)param_2,"false",5);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return param_2 + 5;
  }
  iVar1 = strncmp((char *)param_2,"true",4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return param_2 + 4;
  }
  uVar10 = (uint)*param_2;
  if (uVar10 == 0x22) {
    pbVar7 = (byte *)FUN_0001c50c(param_1 + 0xc,param_1 + 0x10,param_2);
    return pbVar7;
  }
  if (uVar10 - 0x30 < 10 || uVar10 == 0x2d) {
    if (uVar10 == 0x2d) {
      uStack_2c = 0xbff00000;
      uVar10 = (uint)param_2[1];
      param_2 = param_2 + 1;
    }
    else {
      uStack_2c = 0x3ff00000;
    }
    if (uVar10 == 0x30) {
      uVar10 = (uint)param_2[1];
      param_2 = param_2 + 1;
    }
    if (uVar10 - 0x31 < 9) {
      uVar11 = 0;
      pbVar7 = param_2;
      do {
        uVar11 = FUN_0003f5c4((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x40240000);
        param_2 = pbVar7 + 1;
        uVar12 = FUN_0003f4e8(uVar10 - 0x30);
        uVar11 = FUN_0003f218((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                              (int)((ulonglong)uVar12 >> 0x20));
        uVar10 = (uint)pbVar7[1];
        pbVar7 = param_2;
      } while (uVar10 - 0x30 < 10);
    }
    else {
      uVar11 = 0;
    }
    if (uVar10 == 0x2e) {
      uVar10 = (uint)param_2[1];
      if (9 < uVar10 - 0x30) goto LAB_0001cb10;
      uVar12 = 0;
      pbVar7 = param_2 + 1;
      do {
        uVar11 = FUN_0003f5c4((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x40240000);
        param_2 = pbVar7 + 1;
        uVar13 = FUN_0003f4e8(uVar10 - 0x30);
        uVar11 = FUN_0003f218((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar13,
                              (int)((ulonglong)uVar13 >> 0x20));
        uVar12 = FUN_0003f214((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x3ff00000);
        uVar10 = (uint)pbVar7[1];
        pbVar7 = param_2;
      } while (uVar10 - 0x30 < 10);
    }
    else {
      uVar12 = 0;
    }
    uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar2 = (undefined4)uVar12;
    if ((uVar10 & 0xdf) == 0x45) {
      uVar10 = (uint)param_2[1];
      if (uVar10 == 0x2b) {
        uVar10 = (uint)param_2[2];
        iVar1 = 1;
        param_2 = param_2 + 2;
      }
      else if (uVar10 == 0x2d) {
        uVar10 = (uint)param_2[2];
        iVar1 = -1;
        param_2 = param_2 + 2;
      }
      else {
        iVar1 = 1;
        param_2 = param_2 + 1;
      }
      uVar10 = uVar10 - 0x30;
      if ((uVar10 & 0xff) < 10) {
        iVar6 = 0;
        do {
          param_2 = param_2 + 1;
          iVar6 = uVar10 + iVar6 * 10;
          uVar10 = *param_2 - 0x30;
        } while ((uVar10 & 0xff) < 10);
        uVar12 = FUN_0003f4e8(iVar6 * iVar1);
        FUN_0003f218(uVar2,uVar8,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      }
      else {
        FUN_0003f218(uVar2,uVar8,0,0);
      }
    }
    else {
      FUN_0003f218(uVar2,uVar8,0,0);
    }
LAB_0001cb10:
    uVar2 = FUN_0003f5c4(0,uStack_2c,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    pow((double)CONCAT44(extraout_s1,extraout_s0),(double)CONCAT44(extraout_s3,extraout_s2));
    uVar11 = FUN_0003f5c4(uVar2,extraout_r1,extraout_r0,extraout_r1_00);
    *(undefined8 *)(param_1 + 0x18) = uVar11;
    uVar2 = FUN_0003fb60();
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    return param_2;
  }
  if (uVar10 == 0x5b) {
    pbVar7 = param_2 + 1;
    *(undefined4 *)(param_1 + 0xc) = 5;
    if (pbVar7 == (byte *)0x0) {
LAB_0001cf1c:
      pbVar7 = (byte *)0x0;
      bVar5 = bRam00000000;
LAB_0001cf24:
      if (bVar5 == 0x5d) goto LAB_0001c98c;
    }
    else {
      bVar5 = param_2[1];
      if (bVar5 != 0) {
        if (bVar5 < 0x21) {
          pbVar9 = param_2 + 2;
          do {
            pbVar7 = pbVar9;
            if (pbVar7 == (byte *)0x0) goto LAB_0001cf1c;
            bVar5 = *pbVar7;
            if (bVar5 == 0) goto LAB_0001cf2c;
            pbVar9 = pbVar7 + 1;
          } while (bVar5 < 0x21);
        }
        goto LAB_0001cf24;
      }
    }
LAB_0001cf2c:
    piVar3 = (int *)FUN_0001be08();
    *(int **)(param_1 + 8) = piVar3;
    if (piVar3 == (int *)0x0) {
      return (byte *)0x0;
    }
    do {
      pbVar9 = pbVar7 + 1;
      if (0x1f < *pbVar7 - 1) break;
      pbVar7 = pbVar9;
    } while (pbVar9 != (byte *)0x0);
    pbVar7 = (byte *)FUN_0001c864(piVar3,pbVar7);
    if (pbVar7 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar5 = *pbVar7;
    while (uVar10 = (uint)bVar5, uVar10 - 1 < 0x20) {
      pbVar7 = pbVar7 + 1;
      if (pbVar7 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar5 = *pbVar7;
    }
    while (uVar10 == 0x2c) {
      piVar4 = (int *)FUN_0001be08();
      if (piVar4 == (int *)0x0) {
        return (byte *)0x0;
      }
      pbVar9 = pbVar7 + 1;
      *piVar3 = (int)piVar4;
      piVar4[1] = (int)piVar3;
      if ((pbVar9 != (byte *)0x0) && (pbVar7[1] - 1 < 0x20)) {
        pbVar7 = pbVar7 + 2;
        do {
          pbVar9 = pbVar7;
          if (pbVar9 == (byte *)0x0) break;
          pbVar7 = pbVar9 + 1;
        } while (*pbVar9 - 1 < 0x20);
      }
      pbVar7 = (byte *)FUN_0001c864(piVar4,pbVar9);
      if (pbVar7 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar5 = *pbVar7;
      while (uVar10 = (uint)bVar5, piVar3 = piVar4, uVar10 - 1 < 0x20) {
        pbVar7 = pbVar7 + 1;
        if (pbVar7 == (byte *)0x0) {
          return (byte *)0x0;
        }
        bVar5 = *pbVar7;
      }
    }
    if (uVar10 != 0x5d) {
      DAT_00051640 = pbVar7;
      return (byte *)0x0;
    }
    goto LAB_0001c98c;
  }
  if (uVar10 != 0x7b) {
    DAT_00051640 = param_2;
    return (byte *)0x0;
  }
  pbVar7 = param_2 + 1;
  *(undefined4 *)(param_1 + 0xc) = 6;
  if (pbVar7 == (byte *)0x0) {
LAB_0001c97c:
    pbVar7 = (byte *)0x0;
    bVar5 = bRam00000000;
LAB_0001c984:
    if (bVar5 == 0x7d) goto LAB_0001c98c;
  }
  else {
    bVar5 = param_2[1];
    if (bVar5 != 0) {
      if (bVar5 < 0x21) {
        pbVar9 = param_2 + 2;
        do {
          pbVar7 = pbVar9;
          if (pbVar7 == (byte *)0x0) goto LAB_0001c97c;
          bVar5 = *pbVar7;
          if (bVar5 == 0) goto LAB_0001cb68;
          pbVar9 = pbVar7 + 1;
        } while (bVar5 < 0x21);
      }
      goto LAB_0001c984;
    }
  }
LAB_0001cb68:
  piVar3 = (int *)FUN_0001be08();
  *(int **)(param_1 + 8) = piVar3;
  if (piVar3 == (int *)0x0) {
    return (byte *)0x0;
  }
  do {
    pbVar9 = pbVar7 + 1;
    if (0x1f < *pbVar7 - 1) break;
    pbVar7 = pbVar9;
  } while (pbVar9 != (byte *)0x0);
  pbVar7 = (byte *)FUN_0001c50c(piVar3 + 3,piVar3 + 4,pbVar7);
  if (pbVar7 == (byte *)0x0) {
    return (byte *)0x0;
  }
  bVar5 = *pbVar7;
  while (bVar5 - 1 < 0x20) {
    pbVar7 = pbVar7 + 1;
    if (pbVar7 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar5 = *pbVar7;
  }
  piVar3[8] = piVar3[4];
  piVar3[4] = 0;
  if (*pbVar7 != 0x3a) {
    DAT_00051640 = pbVar7;
    return (byte *)0x0;
  }
  pbVar9 = pbVar7 + 1;
  if ((pbVar9 != (byte *)0x0) && (pbVar7[1] - 1 < 0x20)) {
    pbVar7 = pbVar7 + 2;
    do {
      pbVar9 = pbVar7;
      if (pbVar9 == (byte *)0x0) break;
      pbVar7 = pbVar9 + 1;
    } while (*pbVar9 - 1 < 0x20);
  }
  pbVar7 = (byte *)FUN_0001c864(piVar3,pbVar9);
  if (pbVar7 == (byte *)0x0) {
    return (byte *)0x0;
  }
  bVar5 = *pbVar7;
  while (uVar10 = (uint)bVar5, uVar10 - 1 < 0x20) {
    pbVar7 = pbVar7 + 1;
    if (pbVar7 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar5 = *pbVar7;
  }
  while (uVar10 == 0x2c) {
    piVar4 = (int *)FUN_0001be08();
    if (piVar4 == (int *)0x0) {
      return (byte *)0x0;
    }
    pbVar9 = pbVar7 + 1;
    *piVar3 = (int)piVar4;
    piVar4[1] = (int)piVar3;
    if ((pbVar9 != (byte *)0x0) && (pbVar7[1] - 1 < 0x20)) {
      pbVar7 = pbVar7 + 2;
      do {
        pbVar9 = pbVar7;
        if (pbVar9 == (byte *)0x0) break;
        pbVar7 = pbVar9 + 1;
      } while (*pbVar9 - 1 < 0x20);
    }
    pbVar7 = (byte *)FUN_0001c50c(piVar4 + 3,piVar4 + 4,pbVar9);
    if (pbVar7 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar5 = *pbVar7;
    while (bVar5 - 1 < 0x20) {
      pbVar7 = pbVar7 + 1;
      if (pbVar7 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar5 = *pbVar7;
    }
    iVar1 = piVar4[4];
    piVar4[4] = 0;
    piVar4[8] = iVar1;
    if (*pbVar7 != 0x3a) {
      DAT_00051640 = pbVar7;
      return (byte *)0x0;
    }
    pbVar9 = pbVar7 + 1;
    if ((pbVar9 != (byte *)0x0) && (pbVar7[1] - 1 < 0x20)) {
      pbVar7 = pbVar7 + 2;
      do {
        pbVar9 = pbVar7;
        if (pbVar9 == (byte *)0x0) break;
        pbVar7 = pbVar9 + 1;
      } while (*pbVar9 - 1 < 0x20);
    }
    pbVar7 = (byte *)FUN_0001c864(piVar4,pbVar9);
    if (pbVar7 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar5 = *pbVar7;
    while (uVar10 = (uint)bVar5, piVar3 = piVar4, uVar10 - 1 < 0x20) {
      pbVar7 = pbVar7 + 1;
      if (pbVar7 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar5 = *pbVar7;
    }
  }
  if (uVar10 != 0x7d) {
    DAT_00051640 = pbVar7;
    return (byte *)0x0;
  }
LAB_0001c98c:
  return pbVar7 + 1;
}



char * FUN_0001d4d0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  void *__s;
  undefined4 *puVar5;
  char *pcVar6;
  size_t sVar7;
  size_t sVar8;
  char extraout_r1;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 extraout_r2;
  undefined1 uVar12;
  char *pcVar13;
  int *piVar14;
  char *pcVar15;
  int extraout_r3;
  int iVar16;
  undefined1 *puVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 unaff_r4;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  char *pcVar27;
  bool bVar28;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar29;
  int local_40;
  double __x;
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  if (param_4 != (int *)0x0) {
    switch(*(undefined1 *)(param_1 + 0xc)) {
    case 0:
      pcVar6 = (char *)FUN_0001be40(param_4,6);
      if (pcVar6 != (char *)0x0) {
        memcpy(pcVar6,"false",6);
        return pcVar6;
      }
      break;
    case 1:
      pcVar6 = (char *)FUN_0001be40(param_4,5);
      if (pcVar6 != (char *)0x0) {
        memcpy(pcVar6,&DAT_000410b8,5);
        return pcVar6;
      }
      break;
    case 2:
      pcVar6 = (char *)FUN_0001be40(param_4,5);
      if (pcVar6 != (char *)0x0) {
        memcpy(pcVar6,&DAT_00042330,5);
        return pcVar6;
      }
      break;
    case 3:
      piVar14 = param_4;
      goto LAB_0001bfb4;
    case 4:
      pcVar6 = (char *)FUN_0001c26c(*(undefined4 *)(param_1 + 0x10),param_4);
      return pcVar6;
    case 5:
      goto LAB_0001d144;
    case 6:
      goto LAB_0001d688;
    default:
      goto switchD_0001d4ec_default;
    }
    return (char *)0x0;
  }
  piVar14 = (int *)(uint)*(byte *)(param_1 + 0xc);
  switch(piVar14) {
  case (int *)0x0:
    pcVar6 = (char *)FUN_0001bf3c("false");
    return pcVar6;
  case (int *)0x1:
    pcVar6 = (char *)FUN_0001bf3c(&DAT_000410b8);
    return pcVar6;
  case (int *)0x2:
    pcVar6 = (char *)FUN_0001bf3c(&DAT_00042330);
    return pcVar6;
  case (int *)0x3:
    param_4 = (int *)0x0;
LAB_0001bfb4:
    uVar23 = *(uint *)(param_1 + 0x1c);
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    iVar21 = FUN_0003fafc(uVar10,uVar23,0,0,piVar14,unaff_r4);
    if (iVar21 == 0) {
      uVar29 = FUN_0003f4e8(*(undefined4 *)(param_1 + 0x14));
      uVar29 = FUN_0003f214((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),uVar10,uVar23);
      iVar21 = FUN_0003fb24((int)uVar29,(uint)((ulonglong)uVar29 >> 0x20) & 0x7fffffff,0,0x3cb00000)
      ;
      if (((iVar21 == 0) ||
          (iVar21 = FUN_0003fb24(uVar10,uVar23,0xffc00000,0x41dfffff), iVar21 == 0)) ||
         (iVar21 = FUN_0003fb38(uVar10,uVar23,0,0xc1e00000), iVar21 == 0)) {
        if (param_4 == (int *)0x0) {
          pcVar6 = (char *)(*DAT_000515b8)(0x40);
          __x = (double)CONCAT44(extraout_s1_00,extraout_s0_00);
        }
        else {
          pcVar6 = (char *)FUN_0001be40(param_4,0x40);
          __x = (double)CONCAT44(extraout_s1,extraout_s0);
        }
        if (pcVar6 != (char *)0x0) {
          floor(__x);
          uVar29 = FUN_0003f214();
          uVar19 = uVar23 & 0x7fffffff;
          iVar21 = FUN_0003fb24((int)uVar29,(uint)((ulonglong)uVar29 >> 0x20) & 0x7fffffff,0,
                                0x3cb00000);
          if ((iVar21 == 0) ||
             (iVar21 = FUN_0003fb10(uVar10,uVar19,0xe4c2f344,0x4c63e9e4), iVar21 == 0)) {
            iVar21 = FUN_0003fb10(uVar10,uVar19,0xa0b5ed8d,0x3eb0c6f7);
            if ((iVar21 == 0) && (iVar21 = FUN_0003fb4c(uVar10,uVar19,0,0x41cdcd65), iVar21 == 0)) {
              sprintf(pcVar6,"%f",uVar10,uVar23);
              return pcVar6;
            }
            sprintf(pcVar6,"%e",uVar10,uVar23);
            return pcVar6;
          }
          sprintf(pcVar6,"%.0f",uVar10,uVar23);
        }
      }
      else {
        if (param_4 == (int *)0x0) {
          pcVar6 = (char *)(*DAT_000515b8)(0x15);
        }
        else {
          pcVar6 = (char *)FUN_0001be40(param_4,0x15);
        }
        if (pcVar6 != (char *)0x0) {
          sprintf(pcVar6,"%d",*(undefined4 *)(param_1 + 0x14));
        }
      }
    }
    else {
      if (param_4 == (int *)0x0) {
        pcVar6 = (char *)(*DAT_000515b8)(2);
      }
      else {
        pcVar6 = (char *)FUN_0001be40(param_4,2);
      }
      if (pcVar6 != (char *)0x0) {
        memcpy(pcVar6,&DAT_00040978,2);
      }
    }
    return pcVar6;
  case (int *)0x4:
    pcVar6 = (char *)FUN_0001c26c(*(undefined4 *)(param_1 + 0x10),0);
    return pcVar6;
  case (int *)0x5:
    param_4 = (int *)0x0;
LAB_0001d144:
    piVar14 = (int *)(param_1 + 8);
    piVar1 = (int *)*piVar14;
    if (piVar1 == (int *)0x0) {
      if (param_4 == (int *)0x0) {
        pcVar6 = (char *)(*DAT_000515b8)(3);
      }
      else {
        pcVar6 = (char *)FUN_0001be40(param_4,3);
      }
      if (pcVar6 != (char *)0x0) {
        memcpy(pcVar6,&DAT_00042338,3);
      }
      return pcVar6;
    }
    iVar21 = 0;
    do {
      iVar22 = iVar21;
      piVar1 = (int *)*piVar1;
      iVar21 = iVar22 + 1;
    } while (piVar1 != (int *)0x0);
    if (param_4 == (int *)0x0) {
      puVar5 = (undefined4 *)(*DAT_000515b8)(iVar21 * 4);
      if (puVar5 != (undefined4 *)0x0) {
        memset(puVar5,0,iVar21 * 4);
        piVar14 = (int *)*piVar14;
        if (piVar14 == (int *)0x0) {
          iVar3 = 5;
        }
        else {
          puVar20 = puVar5 + -1;
          iVar3 = 5;
          do {
            pcVar6 = (char *)FUN_0001d4d0(piVar14,param_2 + 1,param_3,0);
            puVar20 = puVar20 + 1;
            *puVar20 = pcVar6;
            if (pcVar6 == (char *)0x0) goto LAB_0001d2d4;
            sVar7 = strlen(pcVar6);
            piVar14 = (int *)*piVar14;
            if (param_3 == 0) {
              iVar25 = 2;
            }
            else {
              iVar25 = 3;
            }
            iVar3 = iVar25 + iVar3 + sVar7;
          } while (piVar14 != (int *)0x0);
        }
        pcVar6 = (char *)(*DAT_000515b8)(iVar3);
        if (pcVar6 != (char *)0x0) {
          iVar3 = 0;
          *pcVar6 = '[';
          pcVar6[1] = '\0';
          pcVar27 = pcVar6 + 1;
          puVar20 = puVar5;
          do {
            pcVar18 = (char *)*puVar20;
            sVar7 = strlen(pcVar18);
            memcpy(pcVar27,pcVar18,sVar7);
            pcVar18 = pcVar27 + sVar7;
            if (iVar22 != iVar3) {
              pcVar27[sVar7] = ',';
              pcVar27 = pcVar18 + 2;
              if (param_3 == 0) {
                pcVar27 = pcVar18 + 1;
              }
              else {
                pcVar18[1] = ' ';
              }
              *pcVar27 = '\0';
              pcVar18 = pcVar27;
            }
            iVar3 = iVar3 + 1;
            (*DAT_000515bc)(*puVar20);
            pcVar27 = pcVar18;
            puVar20 = puVar20 + 1;
          } while (iVar3 < iVar21);
          (*DAT_000515bc)(puVar5);
          *pcVar18 = ']';
          pcVar18[1] = '\0';
          return pcVar6;
        }
LAB_0001d2d4:
        piVar14 = puVar5 + -1;
        iVar22 = 0;
        do {
          piVar14 = piVar14 + 1;
          iVar22 = iVar22 + 1;
          if (*piVar14 != 0) {
            (*DAT_000515bc)();
          }
        } while (iVar22 < iVar21);
        (*DAT_000515bc)(puVar5);
      }
    }
    else {
      iVar22 = param_4[2];
      puVar2 = (undefined1 *)FUN_0001be40(param_4,1);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0x5b;
        piVar14 = (int *)*piVar14;
        bVar28 = piVar14 != (int *)0x0;
        if (bVar28) {
          iVar21 = param_2 + 1;
        }
        param_4[2] = param_4[2] + 1;
        while (bVar28) {
          FUN_0001d4d0(piVar14,iVar21,param_3,param_4);
          iVar3 = FUN_0001bf80(param_4);
          iVar25 = *piVar14;
          param_4[2] = iVar3;
          if (iVar25 == 0) break;
          if (param_3 == 0) {
            uVar10 = 2;
            iVar3 = 1;
          }
          else {
            uVar10 = 3;
            iVar3 = 2;
          }
          puVar4 = (undefined1 *)FUN_0001be40(param_4,uVar10);
          puVar2 = puVar4 + 1;
          if (puVar4 == (undefined1 *)0x0) {
            return (char *)0x0;
          }
          if (param_3 != 0) {
            puVar2 = puVar4 + 2;
            puVar4[1] = 0x20;
          }
          *puVar4 = 0x2c;
          *puVar2 = 0;
          piVar14 = (int *)*piVar14;
          bVar28 = piVar14 != (int *)0x0;
          param_4[2] = param_4[2] + iVar3;
        }
        puVar2 = (undefined1 *)FUN_0001be40(param_4,2);
        if (puVar2 != (undefined1 *)0x0) {
          puVar2[1] = 0;
          *puVar2 = 0x5d;
          return (char *)(*param_4 + iVar22);
        }
      }
    }
    return (char *)0x0;
  case (int *)0x6:
    param_4 = (int *)0x0;
    break;
  default:
switchD_0001d4ec_default:
    return (char *)0x0;
  }
LAB_0001d688:
  piVar14 = (int *)(param_1 + 8);
  piVar1 = (int *)*piVar14;
  if (piVar1 == (int *)0x0) {
    if (param_4 == (int *)0x0) {
      if (param_3 == 0) {
        iVar21 = 3;
      }
      else {
        iVar21 = param_2 + 4;
      }
      pcVar6 = (char *)(*DAT_000515b8)(iVar21);
    }
    else {
      if (param_3 == 0) {
        iVar21 = 3;
      }
      else {
        iVar21 = param_2 + 4;
      }
      pcVar6 = (char *)FUN_0001be40(param_4,iVar21);
    }
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '{';
      if (param_3 == 0) {
        pcVar27 = pcVar6 + 1;
      }
      else {
        pcVar6[1] = '\n';
        pcVar27 = pcVar6 + 2;
        if (1 < param_2) {
          pcVar13 = pcVar27 + param_2 + -1;
          pcVar18 = pcVar27;
          do {
            pcVar15 = pcVar18 + 1;
            *pcVar18 = '\t';
            pcVar27 = pcVar13;
            pcVar18 = pcVar15;
          } while (pcVar15 != pcVar13);
        }
      }
      *pcVar27 = '}';
      pcVar27[1] = '\0';
      return pcVar6;
    }
    return (char *)0x0;
  }
  iVar21 = 0;
  do {
    iVar22 = iVar21;
    piVar1 = (int *)*piVar1;
    iVar21 = iVar22 + 1;
  } while (piVar1 != (int *)0x0);
  if (param_4 != (int *)0x0) {
    iVar21 = param_4[2];
    if (param_3 == 0) {
      uVar10 = 2;
      iVar22 = 1;
    }
    else {
      uVar10 = 3;
      iVar22 = 2;
    }
    puVar2 = (undefined1 *)FUN_0001be40(param_4,uVar10);
    if (puVar2 == (undefined1 *)0x0) {
      return (char *)0x0;
    }
    uVar12 = extraout_r2;
    if (param_3 != 0) {
      uVar12 = 10;
    }
    *puVar2 = 0x7b;
    if (param_3 != 0) {
      puVar2[1] = uVar12;
      puVar2 = puVar2 + 2;
    }
    else {
      puVar2 = puVar2 + 1;
    }
    *puVar2 = 0;
    piVar14 = (int *)*piVar14;
    param_4[2] = param_4[2] + iVar22;
    iVar22 = param_2 + 1;
    while( true ) {
      if (piVar14 == (int *)0x0) {
        if (param_3 == 0) {
          puVar4 = (undefined1 *)FUN_0001be40(param_4,2);
          if (puVar4 == (undefined1 *)0x0) {
            return (char *)0x0;
          }
        }
        else {
          puVar2 = (undefined1 *)FUN_0001be40(param_4,param_2 + 2);
          if (puVar2 == (undefined1 *)0x0) {
            return (char *)0x0;
          }
          if (param_2 < 1) {
            puVar4 = puVar2;
            iVar21 = 0;
          }
          else {
            puVar4 = puVar2 + param_2;
            do {
              puVar17 = puVar2 + 1;
              *puVar2 = 9;
              iVar21 = param_2;
              puVar2 = puVar17;
            } while (puVar17 != puVar4);
          }
        }
        *puVar4 = 0x7d;
        puVar4[1] = 0;
        return (char *)(*param_4 + iVar21);
      }
      if (param_3 == 0) {
        FUN_0001c26c(piVar14[8],param_4);
        iVar3 = FUN_0001bf80(param_4);
        iVar25 = 1;
        param_4[2] = iVar3;
      }
      else {
        iVar3 = FUN_0001be40(param_4,iVar22);
        if (iVar3 == 0) {
          return (char *)0x0;
        }
        if (0 < iVar22) {
          puVar2 = (undefined1 *)(iVar3 + -1);
          do {
            puVar2 = puVar2 + 1;
            *puVar2 = 9;
          } while (puVar2 != (undefined1 *)(iVar3 + param_2));
        }
        uVar10 = piVar14[8];
        param_4[2] = param_4[2] + iVar22;
        FUN_0001c26c(uVar10,param_4);
        iVar3 = FUN_0001bf80(param_4);
        iVar25 = 2;
        param_4[2] = iVar3;
      }
      puVar2 = (undefined1 *)FUN_0001be40(param_4,iVar25);
      if (puVar2 == (undefined1 *)0x0) break;
      *puVar2 = 0x3a;
      if (param_3 != 0) {
        puVar2[1] = 9;
      }
      param_4[2] = param_4[2] + iVar25;
      FUN_0001d4d0(piVar14,iVar22,param_3,param_4);
      iVar3 = FUN_0001bf80(param_4);
      uVar19 = (uint)(param_3 != 0);
      uVar23 = uVar19;
      if (*piVar14 != 0) {
        uVar23 = uVar19 + 1;
      }
      param_4[2] = iVar3;
      puVar2 = (undefined1 *)FUN_0001be40(param_4,uVar23 + 1);
      if (puVar2 == (undefined1 *)0x0) {
        return (char *)0x0;
      }
      if (*piVar14 != 0) {
        *puVar2 = 0x2c;
        puVar2 = puVar2 + 1;
      }
      if (uVar19 != 0) {
        *puVar2 = 10;
        puVar2 = puVar2 + 1;
      }
      *puVar2 = 0;
      piVar14 = (int *)*piVar14;
      param_4[2] = param_4[2] + uVar23;
    }
    return (char *)0x0;
  }
  sVar7 = iVar21 * 4;
  __s = (void *)(*DAT_000515b8)(sVar7);
  if (__s == (void *)0x0) {
    return (char *)0x0;
  }
  puVar5 = (undefined4 *)(*DAT_000515b8)(sVar7);
  if (puVar5 == (undefined4 *)0x0) {
    (*DAT_000515bc)(__s);
    return (char *)0x0;
  }
  memset(__s,0,sVar7);
  memset(puVar5,0,sVar7);
  iVar3 = extraout_r3;
  if (param_3 != 0) {
    iVar3 = param_2;
  }
  piVar14 = (int *)*piVar14;
  if (param_3 == 0) {
    iVar3 = 7;
  }
  else {
    iVar3 = iVar3 + 8;
  }
  iVar25 = param_2 + 1;
  if (piVar14 != (int *)0x0) {
    if (param_3 == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = param_2 + 3;
    }
    iVar24 = 0;
    local_40 = 0;
    do {
      pcVar6 = (char *)FUN_0001c26c(piVar14[8],0);
      *(char **)((int)puVar5 + iVar24) = pcVar6;
      uVar29 = FUN_0001d4d0(piVar14,iVar25,param_3,0);
      iVar11 = (int)((ulonglong)uVar29 >> 0x20);
      pcVar27 = (char *)uVar29;
      if (pcVar27 == (char *)0x0 || pcVar6 == (char *)0x0) {
        iVar11 = 1;
      }
      *(char **)((int)__s + iVar24) = pcVar27;
      if (pcVar27 != (char *)0x0 && pcVar6 != (char *)0x0) {
        sVar7 = strlen(pcVar27);
        sVar8 = strlen(pcVar6);
        iVar3 = iVar16 + 2 + iVar3 + sVar7 + sVar8;
        iVar11 = local_40;
      }
      local_40 = iVar11;
      piVar14 = (int *)*piVar14;
      iVar24 = iVar24 + 4;
    } while (piVar14 != (int *)0x0);
    if (local_40 != 0) goto LAB_0001da6c;
  }
  pcVar6 = (char *)(*DAT_000515b8)(iVar3);
  if (pcVar6 != (char *)0x0) {
    *pcVar6 = '{';
    if (param_3 == 0) {
      pcVar27 = pcVar6 + 1;
    }
    else {
      pcVar27 = pcVar6 + 2;
      pcVar6[1] = '\n';
    }
    iVar3 = 0;
    puVar26 = (undefined4 *)((int)__s + -4);
    *pcVar27 = '\0';
    puVar20 = puVar5;
    do {
      if (param_3 == 0) {
        pcVar18 = (char *)*puVar20;
        sVar7 = strlen(pcVar18);
        memcpy(pcVar27,pcVar18,sVar7);
        pcVar27[sVar7] = ':';
        pcVar18 = pcVar27 + sVar7 + 1;
      }
      else {
        if (0 < iVar25) {
          pcVar18 = pcVar27 + -1;
          do {
            pcVar18 = pcVar18 + 1;
            *pcVar18 = '\t';
          } while (pcVar18 != pcVar27 + param_2);
          pcVar27 = pcVar27 + iVar25;
        }
        pcVar18 = (char *)*puVar20;
        sVar7 = strlen(pcVar18);
        memcpy(pcVar27,pcVar18,sVar7);
        pcVar27[sVar7] = ':';
        pcVar18 = pcVar27 + sVar7 + 2;
        pcVar27[sVar7 + 1] = '\t';
      }
      strcpy(pcVar18,(char *)puVar26[1]);
      sVar7 = strlen((char *)puVar26[1]);
      bVar28 = iVar22 != iVar3;
      cVar9 = extraout_r1;
      if (bVar28) {
        cVar9 = ',';
      }
      iVar3 = iVar3 + 1;
      pcVar27 = pcVar18 + sVar7;
      if (bVar28) {
        pcVar27 = pcVar27 + 1;
        pcVar18[sVar7] = cVar9;
      }
      if (param_3 != 0) {
        *pcVar27 = '\n';
        pcVar27 = pcVar27 + 1;
      }
      *pcVar27 = '\0';
      (*DAT_000515bc)(*puVar20);
      puVar26 = puVar26 + 1;
      (*DAT_000515bc)(*puVar26);
      puVar20 = puVar20 + 1;
    } while (iVar3 < iVar21);
    (*DAT_000515bc)(puVar5);
    (*DAT_000515bc)(__s);
    if ((param_3 != 0) && (0 < param_2)) {
      pcVar13 = pcVar27 + param_2;
      pcVar18 = pcVar27;
      do {
        pcVar27 = pcVar18 + 1;
        *pcVar18 = '\t';
        pcVar18 = pcVar27;
      } while (pcVar27 != pcVar13);
    }
    *pcVar27 = '}';
    pcVar27[1] = '\0';
    return pcVar6;
  }
LAB_0001da6c:
  iVar22 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    if (*(int *)((int)puVar5 + iVar22) != 0) {
      (*DAT_000515bc)();
    }
    piVar14 = (int *)((int)__s + iVar22);
    iVar22 = iVar22 + 4;
    if (*piVar14 != 0) {
      (*DAT_000515bc)();
    }
  } while (iVar3 < iVar21);
  (*DAT_000515bc)(puVar5);
  (*DAT_000515bc)(__s);
  return (char *)0x0;
}



undefined4 cJSON_GetErrorPtr(void)

{
  return DAT_00051640;
}



void cJSON_InitHooks(int *param_1)

{
  if (param_1 != (int *)0x0) {
    DAT_000515b8 = (code *)*param_1;
    if (DAT_000515b8 == (code *)0x0) {
      DAT_000515b8 = malloc;
    }
    DAT_000515bc = (code *)param_1[1];
    if (DAT_000515bc == (code *)0x0) {
      DAT_000515bc = free;
    }
    return;
  }
  DAT_000515b8 = malloc;
  DAT_000515bc = free;
  return;
}



void cJSON_Delete(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    uVar1 = param_1[3];
    piVar2 = (int *)*param_1;
    if ((uVar1 & 0x100) == 0) {
      if (param_1[2] != 0) {
        cJSON_Delete();
        uVar1 = param_1[3];
        if ((uVar1 & 0x100) != 0) goto LAB_0001de80;
      }
      if (param_1[4] != 0) {
        (*DAT_000515bc)();
        uVar1 = param_1[3];
      }
    }
LAB_0001de80:
    if (((uVar1 & 0x200) == 0) && (param_1[8] != 0)) {
      (*DAT_000515bc)();
    }
    (*DAT_000515bc)(param_1);
    param_1 = piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
  } while( true );
}



int cJSON_ParseWithOpts(byte *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  iVar1 = FUN_0001be08();
  DAT_00051640 = (byte *)0x0;
  if (iVar1 != 0) {
    pbVar2 = (byte *)&DAT_00051640;
    if ((param_1 != (byte *)0x0) &&
       (pbVar2 = (byte *)(*param_1 - 1), (byte *)(*param_1 - 1) < (byte *)0x20)) {
      pbVar2 = param_1 + 1;
      do {
        param_1 = pbVar2;
        pbVar2 = param_1;
        if (param_1 == (byte *)0x0) break;
        pbVar2 = param_1 + 1;
      } while (*param_1 - 1 < 0x20);
    }
    pbVar2 = (byte *)FUN_0001c864(iVar1,param_1,0,pbVar2,param_4);
    if (pbVar2 == (byte *)0x0) {
      cJSON_Delete(iVar1);
      return 0;
    }
    if (param_3 != 0) {
      do {
        pbVar3 = pbVar2 + 1;
        if (*pbVar2 == 0) goto LAB_0001dfc4;
        if (0x20 < *pbVar2) goto LAB_0001dfe0;
        pbVar2 = pbVar3;
      } while (pbVar3 != (byte *)0x0);
      if (cRam00000000 != '\0') {
LAB_0001dfe0:
        cJSON_Delete(iVar1);
        DAT_00051640 = pbVar2;
        return 0;
      }
    }
LAB_0001dfc4:
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = pbVar2;
      return iVar1;
    }
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0001df94)
// WARNING: Removing unreachable block (ram,0x0001dfa8)
// WARNING: Removing unreachable block (ram,0x0001dfb0)
// WARNING: Removing unreachable block (ram,0x0001dfb8)
// WARNING: Removing unreachable block (ram,0x0001dfe0)
// WARNING: Removing unreachable block (ram,0x0001df8c)
// WARNING: Removing unreachable block (ram,0x0001dfcc)

int cJSON_Parse(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar1 = FUN_0001be08();
  DAT_00051640 = 0;
  if (iVar1 != 0) {
    pbVar3 = (byte *)&DAT_00051640;
    if ((param_1 != (byte *)0x0) &&
       (pbVar3 = (byte *)(*param_1 - 1), (byte *)(*param_1 - 1) < (byte *)0x20)) {
      pbVar3 = param_1 + 1;
      do {
        param_1 = pbVar3;
        pbVar3 = param_1;
        if (param_1 == (byte *)0x0) break;
        pbVar3 = param_1 + 1;
      } while (*param_1 - 1 < 0x20);
    }
    iVar2 = FUN_0001c864(iVar1,param_1,0,pbVar3,param_4);
    if (iVar2 == 0) {
      cJSON_Delete(iVar1);
      return 0;
    }
  }
  return iVar1;
}



void cJSON_Print(undefined4 param_1)

{
  FUN_0001d4d0(param_1,0,1,0);
  return;
}



void cJSON_PrintUnformatted(undefined4 param_1)

{
  FUN_0001d4d0(param_1,0,0,0);
  return;
}



void cJSON_PrintBuffered(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = (*DAT_000515b8)(param_2);
  uStack_14 = 0;
  uStack_18 = param_2;
  FUN_0001d4d0(param_1,0,param_3,&uStack_1c);
  return;
}



int cJSON_GetArraySize(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    iVar1 = 0;
    do {
      piVar2 = (int *)*piVar2;
      iVar1 = iVar1 + 1;
    } while (piVar2 != (int *)0x0);
    return iVar1;
  }
  return 0;
}



void cJSON_GetArrayItem(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = param_2;
  }
  if ((piVar2 == (int *)0x0 || param_2 == 0) || iVar1 < 0) {
    return;
  }
  do {
    piVar2 = (int *)*piVar2;
    param_2 = param_2 + -1;
    iVar1 = 0;
    if (piVar2 != (int *)0x0) {
      iVar1 = param_2;
    }
  } while ((piVar2 != (int *)0x0 && param_2 != 0) && -1 < iVar1);
  return;
}



int cJSON_GetObjectItem(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  while ((piVar2 != (int *)0x0 && (iVar1 = FUN_0001bc5c(piVar2[8],param_2), iVar1 != 0))) {
    piVar2 = (int *)*piVar2;
  }
  return (int)piVar2;
}



void cJSON_AddItemToArray(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    *(int *)(param_1 + 8) = param_2;
    return;
  }
  do {
    piVar2 = piVar1;
    piVar1 = (int *)*piVar2;
  } while ((int *)*piVar2 != (int *)0x0);
  *piVar2 = param_2;
  *(int **)(param_2 + 4) = piVar2;
  return;
}



void cJSON_AddItemToObject(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x20) != 0) {
    (*DAT_000515bc)();
  }
  uVar2 = FUN_0001bf3c(param_2);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  if (param_3 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    *(int *)(param_1 + 8) = param_3;
    return;
  }
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
  } while ((int *)*piVar3 != (int *)0x0);
  *piVar3 = param_3;
  *(int **)(param_3 + 4) = piVar3;
  return;
}



void cJSON_AddItemToObjectCS(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    return;
  }
  uVar3 = *(uint *)(param_3 + 0xc);
  if (((uVar3 & 0x200) == 0) && (*(int *)(param_3 + 0x20) != 0)) {
    (*DAT_000515bc)();
    uVar3 = *(uint *)(param_3 + 0xc);
  }
  *(uint *)(param_3 + 0xc) = uVar3 | 0x200;
  *(undefined4 *)(param_3 + 0x20) = param_2;
  if (param_3 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    *(int *)(param_1 + 8) = param_3;
    return;
  }
  do {
    piVar2 = piVar1;
    piVar1 = (int *)*piVar2;
  } while ((int *)*piVar2 != (int *)0x0);
  *piVar2 = param_3;
  *(int **)(param_3 + 4) = piVar2;
  return;
}



void cJSON_AddItemReferenceToArray(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_0001bef8(param_2);
  if (iVar2 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    *(int *)(param_1 + 8) = iVar2;
    return;
  }
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
  } while ((int *)*piVar3 != (int *)0x0);
  *piVar3 = iVar2;
  *(int **)(iVar2 + 4) = piVar3;
  return;
}



void cJSON_AddItemReferenceToObject(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = FUN_0001bef8(param_3);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x20) != 0) {
    (*DAT_000515bc)();
  }
  uVar2 = FUN_0001bf3c(param_2);
  *(undefined4 *)(iVar3 + 0x20) = uVar2;
  if (iVar3 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    *(int *)(param_1 + 8) = iVar3;
    return;
  }
  do {
    piVar4 = piVar1;
    piVar1 = (int *)*piVar4;
  } while ((int *)*piVar4 != (int *)0x0);
  *piVar4 = iVar3;
  *(int **)(iVar3 + 4) = piVar4;
  return;
}



int * cJSON_DetachItemFromArray(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar4 = 0;
  if (piVar2 != (int *)0x0) {
    iVar4 = param_2;
  }
  piVar3 = piVar2;
  if ((piVar2 != (int *)0x0 && param_2 != 0) && -1 < iVar4) {
    do {
      piVar3 = (int *)*piVar3;
      param_2 = param_2 + -1;
      iVar4 = 0;
      if (piVar3 != (int *)0x0) {
        iVar4 = param_2;
      }
    } while ((piVar3 != (int *)0x0 && param_2 != 0) && -1 < iVar4);
  }
  if (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[1];
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar3;
    }
    iVar4 = *piVar3;
    if (iVar4 != 0) {
      *(int **)(iVar4 + 4) = piVar1;
    }
    if (piVar3 == piVar2) {
      *(int *)(param_1 + 8) = iVar4;
    }
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  return piVar3;
}



void cJSON_DeleteItemFromArray(void)

{
  cJSON_DetachItemFromArray();
  cJSON_Delete();
  return;
}



undefined4
cJSON_DetachItemFromObject(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    iVar4 = 0;
    do {
      iVar1 = FUN_0001bc5c(piVar3[8],param_2);
      if (iVar1 == 0) {
        uVar2 = cJSON_DetachItemFromArray(param_1,iVar4,extraout_r2,param_4);
        return uVar2;
      }
      piVar3 = (int *)*piVar3;
      iVar4 = iVar4 + 1;
    } while (piVar3 != (int *)0x0);
  }
  return 0;
}



void cJSON_DeleteItemFromObject(void)

{
  cJSON_DetachItemFromObject();
  cJSON_Delete();
  return;
}



void cJSON_InsertItemInArray(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  iVar1 = 0;
  if (piVar3 != (int *)0x0) {
    iVar1 = param_2;
  }
  piVar2 = piVar3;
  if ((piVar3 != (int *)0x0 && param_2 != 0) && -1 < iVar1) {
    do {
      piVar2 = (int *)*piVar2;
      param_2 = param_2 + -1;
      iVar1 = 0;
      if (piVar2 != (int *)0x0) {
        iVar1 = param_2;
      }
    } while ((piVar2 != (int *)0x0 && param_2 != 0) && -1 < iVar1);
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    *param_3 = piVar2;
    param_3[1] = iVar1;
    piVar2[1] = (int)param_3;
    if (piVar2 == piVar3) {
      *(undefined4 **)(param_1 + 8) = param_3;
    }
    else {
      *(undefined4 **)param_3[1] = param_3;
    }
    return;
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  piVar3 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    *(undefined4 **)(param_1 + 8) = param_3;
    return;
  }
  do {
    piVar2 = piVar3;
    piVar3 = (int *)*piVar2;
  } while ((int *)*piVar2 != (int *)0x0);
  *piVar2 = (int)param_3;
  param_3[1] = piVar2;
  return;
}



void cJSON_ReplaceItemInArray(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 8);
  iVar1 = 0;
  if (piVar4 != (int *)0x0) {
    iVar1 = param_2;
  }
  piVar2 = piVar4;
  if ((piVar4 != (int *)0x0 && param_2 != 0) && -1 < iVar1) {
    do {
      piVar2 = (int *)*piVar2;
      param_2 = param_2 + -1;
      iVar1 = 0;
      if (piVar2 != (int *)0x0) {
        iVar1 = param_2;
      }
    } while ((piVar2 != (int *)0x0 && param_2 != 0) && -1 < iVar1);
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar2;
  iVar3 = piVar2[1];
  *param_3 = iVar1;
  param_3[1] = iVar3;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_3;
  }
  if (piVar2 == piVar4) {
    *(int **)(param_1 + 8) = param_3;
  }
  else {
    *(int **)param_3[1] = param_3;
  }
  piVar2[1] = 0;
  *piVar2 = 0;
  cJSON_Delete(piVar2);
  return;
}



void cJSON_ReplaceItemInObject(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 == (int *)0x0) {
    return;
  }
  iVar4 = 0;
  while (iVar1 = FUN_0001bc5c(piVar3[8],param_2), iVar1 != 0) {
    piVar3 = (int *)*piVar3;
    iVar4 = iVar4 + 1;
    if (piVar3 == (int *)0x0) {
      return;
    }
  }
  iVar1 = FUN_0001bf3c(param_2);
  param_3[8] = iVar1;
  piVar3 = *(int **)(param_1 + 8);
  iVar1 = 0;
  if (piVar3 != (int *)0x0) {
    iVar1 = iVar4;
  }
  piVar2 = piVar3;
  if ((piVar3 != (int *)0x0 && iVar4 != 0) && -1 < iVar1) {
    do {
      piVar2 = (int *)*piVar2;
      iVar4 = iVar4 + -1;
      iVar1 = 0;
      if (piVar2 != (int *)0x0) {
        iVar1 = iVar4;
      }
    } while ((piVar2 != (int *)0x0 && iVar4 != 0) && -1 < iVar1);
  }
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    iVar1 = piVar2[1];
    *param_3 = iVar4;
    param_3[1] = iVar1;
    if (iVar4 != 0) {
      *(int **)(iVar4 + 4) = param_3;
    }
    if (piVar2 == piVar3) {
      *(int **)(param_1 + 8) = param_3;
    }
    else {
      *(int **)param_3[1] = param_3;
    }
    piVar2[1] = 0;
    *piVar2 = 0;
    cJSON_Delete(piVar2);
    return;
  }
  return;
}



void cJSON_CreateNull(void)

{
  int iVar1;
  
  iVar1 = FUN_0001be08();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
  }
  return;
}



void cJSON_CreateTrue(void)

{
  int iVar1;
  
  iVar1 = FUN_0001be08();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 1;
  }
  return;
}



void cJSON_CreateFalse(void)

{
  int iVar1;
  
  iVar1 = FUN_0001be08();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  return;
}



void cJSON_CreateBool(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001be08();
  if (iVar1 == 0) {
    return;
  }
  *(uint *)(iVar1 + 0xc) = (uint)(param_1 != 0);
  return;
}



int cJSON_CreateNumber(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001be08();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_1;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    uVar2 = FUN_0003fb60(param_1,param_2);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
  }
  return iVar1;
}



int cJSON_CreateString(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001be08();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 4;
    uVar2 = FUN_0001bf3c(param_1);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
  }
  return iVar1;
}



void cJSON_CreateArray(void)

{
  int iVar1;
  
  iVar1 = FUN_0001be08();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 5;
  }
  return;
}



void cJSON_CreateObject(void)

{
  int iVar1;
  
  iVar1 = FUN_0001be08();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 6;
  }
  return;
}



int cJSON_CreateIntArray(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = cJSON_CreateArray();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_2;
  }
  if ((iVar1 != 0 && param_2 != 0) && -1 < iVar3) {
    puVar5 = (undefined4 *)(param_1 + -4);
    iVar3 = 0;
    piVar4 = (int *)0x0;
    do {
      puVar5 = puVar5 + 1;
      FUN_0003f4e8(*puVar5);
      piVar2 = (int *)cJSON_CreateNumber();
      if (iVar3 == 0) {
        *(int **)(iVar1 + 8) = piVar2;
      }
      else if (piVar4 != (int *)0x0 && piVar2 != (int *)0x0) {
        *piVar4 = (int)piVar2;
        piVar2[1] = (int)piVar4;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar2;
    } while (iVar3 < param_2);
  }
  return iVar1;
}



int cJSON_CreateFloatArray(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = cJSON_CreateArray();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_2;
  }
  if ((iVar1 != 0 && param_2 != 0) && -1 < iVar3) {
    puVar5 = (undefined4 *)(param_1 + -4);
    iVar3 = 0;
    piVar4 = (int *)0x0;
    do {
      puVar5 = puVar5 + 1;
      FUN_0003f510(*puVar5);
      piVar2 = (int *)cJSON_CreateNumber();
      if (iVar3 == 0) {
        *(int **)(iVar1 + 8) = piVar2;
      }
      else if (piVar4 != (int *)0x0 && piVar2 != (int *)0x0) {
        *piVar4 = (int)piVar2;
        piVar2[1] = (int)piVar4;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar2;
    } while (iVar3 < param_2);
  }
  return iVar1;
}



int cJSON_CreateDoubleArray(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = cJSON_CreateArray();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_2;
  }
  if ((iVar1 != 0 && param_2 != 0) && -1 < iVar3) {
    iVar3 = 0;
    piVar4 = (int *)0x0;
    puVar5 = (undefined4 *)(param_1 + -8);
    do {
      piVar2 = (int *)cJSON_CreateNumber(puVar5[2],puVar5[3]);
      if (iVar3 == 0) {
        *(int **)(iVar1 + 8) = piVar2;
      }
      else if (piVar4 != (int *)0x0 && piVar2 != (int *)0x0) {
        *piVar4 = (int)piVar2;
        piVar2[1] = (int)piVar4;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar2;
      puVar5 = puVar5 + 2;
    } while (iVar3 < param_2);
  }
  return iVar1;
}



int cJSON_CreateStringArray(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = cJSON_CreateArray();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_2;
  }
  if ((iVar1 != 0 && param_2 != 0) && -1 < iVar3) {
    puVar5 = (undefined4 *)(param_1 + -4);
    iVar3 = 0;
    piVar4 = (int *)0x0;
    do {
      puVar5 = puVar5 + 1;
      piVar2 = (int *)cJSON_CreateString(*puVar5);
      if (iVar3 == 0) {
        *(int **)(iVar1 + 8) = piVar2;
      }
      else if (piVar4 != (int *)0x0 && piVar2 != (int *)0x0) {
        *piVar4 = (int)piVar2;
        piVar2[1] = (int)piVar4;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar2;
    } while (iVar3 < param_2);
  }
  return iVar1;
}



int cJSON_Duplicate(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  
  if ((param_1 == 0) || (iVar1 = FUN_0001be08(), iVar1 == 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(uint *)(iVar1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffeff;
  *(undefined4 *)(iVar1 + 0x14) = uVar4;
  *(undefined4 *)(iVar1 + 0x18) = uVar5;
  *(undefined4 *)(iVar1 + 0x1c) = uVar6;
  if (iVar2 != 0) {
    iVar2 = FUN_0001bf3c();
    *(int *)(iVar1 + 0x10) = iVar2;
    if (iVar2 == 0) goto LAB_0001e7e8;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar2 = FUN_0001bf3c();
    *(int *)(iVar1 + 0x20) = iVar2;
    if (iVar2 == 0) {
LAB_0001e7e8:
      cJSON_Delete(iVar1);
      return 0;
    }
  }
  if ((param_2 != 0) && (piVar7 = *(int **)(param_1 + 8), piVar7 != (int *)0x0)) {
    piVar8 = (int *)0x0;
    do {
      piVar3 = (int *)cJSON_Duplicate(piVar7,1);
      if (piVar3 == (int *)0x0) goto LAB_0001e7e8;
      if (piVar8 != (int *)0x0) {
        *piVar8 = (int)piVar3;
      }
      piVar7 = (int *)*piVar7;
      if (piVar8 != (int *)0x0) {
        piVar3[1] = (int)piVar8;
      }
      else {
        *(int **)(iVar1 + 8) = piVar3;
      }
      piVar8 = piVar3;
    } while (piVar7 != (int *)0x0);
  }
  return iVar1;
}



void cJSON_Minify(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar3 = *param_1;
  pcVar2 = param_1;
LAB_0001e854:
  do {
    while( true ) {
      if (cVar3 == '\0') {
        *pcVar2 = '\0';
        return;
      }
      if ((((cVar3 != ' ') && (cVar3 != '\t')) && (cVar3 != '\r')) && (cVar3 != '\n')) break;
LAB_0001e84c:
      cVar3 = param_1[1];
      param_1 = param_1 + 1;
    }
    if (cVar3 != '/') {
      if (cVar3 != '\"') {
LAB_0001e844:
        *pcVar2 = cVar3;
        pcVar2 = pcVar2 + 1;
        goto LAB_0001e84c;
      }
      *pcVar2 = '\"';
      cVar3 = param_1[1];
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      if (cVar3 != '\0' && cVar3 != '\"') {
        do {
          if (cVar3 == '\\') {
            param_1 = param_1 + 1;
            *pcVar2 = '\\';
          }
          if (cVar3 == '\\') {
            pcVar2 = pcVar2 + 1;
          }
          *pcVar2 = *param_1;
          cVar3 = param_1[1];
          pcVar2 = pcVar2 + 1;
          param_1 = param_1 + 1;
        } while (cVar3 != '\"' && cVar3 != '\0');
      }
      *pcVar2 = cVar3;
      pcVar2 = pcVar2 + 1;
      cVar3 = param_1[1];
      param_1 = param_1 + 1;
      goto LAB_0001e854;
    }
    pcVar1 = param_1;
    if (param_1[1] == '/') {
      while (param_1 = pcVar1 + 1, cVar3 != '\n' && cVar3 != '\0') {
        cVar3 = pcVar1[2];
        pcVar1 = param_1;
      }
    }
    else {
      if (param_1[1] != '*') goto LAB_0001e844;
      cVar3 = '*';
      pcVar5 = param_1 + 1;
      do {
        if ((cVar3 == '*') && (pcVar4 = pcVar5, pcVar5[1] == '/')) break;
        cVar3 = param_1[2];
        param_1 = param_1 + 1;
        pcVar4 = pcVar5 + 1;
        pcVar1 = pcVar5;
        pcVar5 = pcVar4;
      } while (cVar3 != '\0');
      cVar3 = pcVar1[3];
      param_1 = pcVar4 + 2;
    }
  } while( true );
}



undefined4
cJSON_GetIntObjItem(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = cJSON_GetObjectItem();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(iVar1 + 0xc) == 3) {
    *param_3 = *(undefined4 *)(iVar1 + 0x14);
    return 0;
  }
  printf("%s(\"%s\") not a number item obj!\n","cJSON_GetIntObjItem",param_2,*(int *)(iVar1 + 0xc),
         param_4);
  return 0xffffffff;
}



undefined4 cJSON_GetStrObjItem(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = cJSON_GetObjectItem();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0xc) == 4) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  printf("%s(\"%s\") not a string item obj!\n","cJSON_GetStrObjItem",param_2);
  return 0;
}



void memset_s(void *param_1,uint param_2,int param_3,uint param_4)

{
  if (param_2 < param_4) {
    param_4 = param_2;
  }
  memset(param_1,param_3,param_4);
  return;
}



void memcpy_s(void *param_1,uint param_2,void *param_3,uint param_4)

{
  if (param_2 < param_4) {
    param_4 = param_2;
  }
  memcpy(param_1,param_3,param_4);
  return;
}



longlong get_cur_time_ms(void)

{
  timeval local_10;
  
  local_10.tv_sec = 0;
  local_10.tv_usec = 0;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  return (longlong)local_10.tv_sec * 1000 + (longlong)(local_10.tv_usec / 1000);
}



undefined1 * base64_encode(byte *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 < 1) {
    iVar8 = 0;
  }
  else {
    *param_2 = *(undefined1 *)(base64char + (uint)(*param_1 >> 2));
    uVar4 = (*param_1 & 3) << 4;
    if (param_3 == 1) {
      iVar8 = 4;
      iVar3 = 3;
      iVar1 = 2;
      iVar5 = 1;
    }
    else {
      iVar5 = 1;
      puVar2 = param_2;
      iVar3 = 0;
      iVar8 = 0;
      do {
        iVar7 = iVar8;
        param_2[iVar5] = *(undefined1 *)(base64char + (uVar4 | param_1[iVar3 + 1] >> 4));
        iVar1 = iVar3 + 3;
        iVar6 = iVar3 + 4;
        uVar4 = (param_1[iVar3 + 1] & 0xf) * 4;
        if (param_3 <= iVar3 + 2) {
          iVar8 = iVar7 + 4;
          param_2[iVar7 + 2] = *(undefined1 *)(base64char + uVar4);
          param_2[iVar7 + 3] = 0x3d;
          goto LAB_0001eba8;
        }
        puVar2[2] = *(undefined1 *)(base64char + (uVar4 | param_1[iVar3 + 2] >> 6));
        iVar8 = iVar7 + 4;
        puVar2[3] = *(undefined1 *)(base64char + (param_1[iVar3 + 2] & 0x3f));
        if (param_3 <= iVar1) goto LAB_0001eba8;
        iVar5 = iVar7 + 5;
        puVar2 = puVar2 + 4;
        *puVar2 = *(undefined1 *)(base64char + (uint)(param_1[iVar1] >> 2));
        uVar4 = (param_1[iVar1] & 3) << 4;
        iVar3 = iVar1;
      } while (iVar6 < param_3);
      iVar1 = iVar7 + 6;
      iVar3 = iVar7 + 7;
      iVar8 = iVar7 + 8;
    }
    param_2[iVar5] = *(undefined1 *)(base64char + uVar4);
    param_2[iVar1] = 0x3d;
    param_2[iVar3] = 0x3d;
  }
LAB_0001eba8:
  param_2[iVar8] = 0;
  return param_2;
}



int base64_decode(char *param_1,int param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_24;
  
  iVar5 = 0;
  if (*param_1 != '\0') {
    iVar7 = 0;
    iVar5 = 0;
    pcVar4 = param_1;
    iVar6 = param_2;
    do {
      iVar3 = 0;
      local_24 = 0xffffffff;
      do {
        pcVar1 = (char *)(base64char + iVar3);
        uVar2 = (undefined1)iVar3;
        iVar3 = iVar3 + 1;
        if (*pcVar1 == *pcVar4) {
          local_24 = CONCAT31(local_24._1_3_,uVar2);
        }
      } while (iVar3 != 0x40);
      iVar3 = 0;
      do {
        pcVar4 = (char *)(base64char + iVar3);
        uVar2 = (undefined1)iVar3;
        iVar3 = iVar3 + 1;
        if (*pcVar4 == param_1[iVar7 + 1]) {
          local_24._0_2_ = CONCAT11(uVar2,(char)local_24);
        }
      } while (iVar3 != 0x40);
      iVar3 = 0;
      do {
        pcVar4 = (char *)(base64char + iVar3);
        uVar2 = (undefined1)iVar3;
        iVar3 = iVar3 + 1;
        if (*pcVar4 == param_1[iVar7 + 2]) {
          local_24._0_3_ = CONCAT12(uVar2,(undefined2)local_24);
        }
      } while (iVar3 != 0x40);
      iVar3 = 0;
      do {
        pcVar4 = (char *)(base64char + iVar3);
        uVar2 = (undefined1)iVar3;
        iVar3 = iVar3 + 1;
        if (*pcVar4 == param_1[iVar7 + 3]) {
          local_24 = CONCAT13(uVar2,(undefined3)local_24);
        }
      } while (iVar3 != 0x40);
      *(byte *)(param_2 + iVar5) = local_24._1_1_ >> 4 & 3 | (char)local_24 << 2;
      if (param_1[iVar7 + 2] == '=') {
        return iVar5 + 1;
      }
      *(byte *)(iVar6 + 1) = local_24._2_1_ >> 2 & 0xf | local_24._1_1_ << 4;
      if (param_1[iVar7 + 3] == '=') {
        return iVar5 + 2;
      }
      iVar7 = iVar7 + 4;
      *(byte *)(iVar6 + 2) = local_24._3_1_ & 0x3f | local_24._2_1_ << 6;
      iVar5 = iVar5 + 3;
      iVar6 = iVar6 + 3;
      pcVar4 = param_1 + iVar7;
    } while (param_1[iVar7] != '\0');
  }
  return iVar5;
}



uint strhex2byte(int param_1,byte *param_2)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  sVar2 = strlen((char *)param_2);
  uVar1 = sVar2 >> 1;
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      uVar3 = (uint)*param_2;
      if (uVar3 - 0x41 < 6) {
        uVar3 = uVar3 - 0x37 & 0xff;
      }
      else if (uVar3 - 0x61 < 6) {
        uVar3 = uVar3 - 0x57 & 0xff;
      }
      else {
        uVar3 = uVar3 - 0x30 & 0xff;
        if (9 < uVar3) {
          uVar3 = 0x10;
        }
      }
      bVar5 = param_2[1];
      uVar4 = (uint)bVar5;
      if (uVar4 - 0x41 < 6) {
        bVar5 = bVar5 - 0x37;
      }
      else if (uVar4 - 0x61 < 6) {
        bVar5 = bVar5 + 0xa9;
      }
      else {
        bVar5 = (byte)(uVar4 - 0x30);
        if (9 < (uVar4 - 0x30 & 0xff)) goto LAB_0001ee28;
      }
      if (0xf < uVar3) {
LAB_0001ee28:
        printf("find invalid char(%d) :%c %c\n",uVar6 << 1);
        return 0xffffffff;
      }
      *(byte *)(param_1 + uVar6) = bVar5 | (byte)(uVar3 << 4);
      uVar6 = uVar6 + 1;
      param_2 = param_2 + 2;
    } while (uVar1 != uVar6);
  }
  return uVar1;
}



int gen_pwdstring(undefined4 param_1,undefined4 param_2,int param_3)

{
  size_t sVar1;
  byte *pbVar2;
  char acStack_3b8 [128];
  undefined1 auStack_338 [279];
  byte bStack_221;
  byte local_220 [512];
  
  memset(local_220,0,0x200);
  memset(acStack_3b8,0,0x80);
  snprintf(acStack_3b8,0x80,"%s0",param_1);
  AesSetKey(auStack_338,param_2,0x10,0,0);
  sVar1 = strlen(acStack_3b8);
  pbVar2 = &bStack_221;
  AesCbcEncrypt(auStack_338,local_220,acStack_3b8,sVar1);
  sVar1 = 0x40;
  do {
    pbVar2 = pbVar2 + 1;
    snprintf((char *)((param_3 + 0x40) - sVar1),sVar1,"%02x",(uint)*pbVar2);
    sVar1 = sVar1 - 2;
  } while (pbVar2 != local_220 + 0xf);
  printf("inpwd=%s\n",acStack_3b8);
  printf("outbuf=%s\n",param_3);
  return param_3;
}



int gen_uidstring(char *param_1,undefined4 param_2,int param_3)

{
  size_t sVar1;
  size_t __maxlen;
  byte *pbVar2;
  undefined1 auStack_338 [279];
  byte bStack_221;
  byte local_220 [516];
  
  memset(local_220,0,0x200);
  AesSetKey(auStack_338,param_2,0x10,0,0);
  sVar1 = strlen(param_1);
  __maxlen = 0x40;
  AesCbcEncrypt(auStack_338,local_220,param_1,sVar1);
  pbVar2 = &bStack_221;
  do {
    pbVar2 = pbVar2 + 1;
    snprintf((char *)((param_3 + 0x40) - __maxlen),__maxlen,"%02x",(uint)*pbVar2);
    __maxlen = __maxlen - 2;
  } while (pbVar2 != local_220 + 0xf);
  return param_3;
}



void sha1_init_ctx(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  return;
}



uint * sha1_read_ctx(uint *param_1,uint *param_2)

{
  uint uVar1;
  
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



void sha1_process_block(uint param_1,uint param_2,uint *param_3)

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



uint * sha1_finish_ctx(uint *param_1,uint *param_2)

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
  memcpy((void *)((int)(param_1 + 8) + uVar3),&DAT_00042384,iVar2 - uVar3);
  sha1_process_block(param_1 + 8,uVar5,param_1);
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



void sha1_process_bytes(void *param_1,uint param_2,int param_3)

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
      sha1_process_block(pvVar5,uVar2 & 0xffffffc0,param_3);
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
          sha1_process_block(pvVar1,0x40,param_3);
          pvVar5 = (void *)((int)pvVar5 + 0x40);
        } while (0x40 < uVar4);
        uVar4 = param_2 - 0x41 >> 6;
        param_2 = (param_2 - 0x40) + uVar4 * -0x40;
        param_1 = (void *)((int)param_1 + (uVar4 + 1) * 0x40);
      }
      goto LAB_000208a4;
    }
    uVar4 = param_2 & 0xffffffc0;
    sha1_process_block(param_1,uVar4,param_3);
    param_2 = param_2 & 0x3f;
    param_1 = (void *)((int)param_1 + uVar4);
  }
  if (param_2 == 0) {
    return;
  }
LAB_000208a4:
  pvVar5 = (void *)(param_3 + 0x20);
  uVar4 = param_2 + *(int *)(param_3 + 0x1c);
  memcpy((void *)((int)pvVar5 + *(int *)(param_3 + 0x1c)),param_1,param_2);
  if (0x3f < uVar4) {
    sha1_process_block(pvVar5,0x40,param_3);
    memcpy(pvVar5,(void *)(param_3 + 0x60),uVar4 - 0x40);
    *(uint *)(param_3 + 0x1c) = uVar4 - 0x40;
    return;
  }
  *(uint *)(param_3 + 0x1c) = uVar4;
  return;
}



void sha1_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_b8 [164];
  
  sha1_init_ctx(auStack_b8);
  sha1_process_bytes(param_1,param_2,auStack_b8);
  sha1_finish_ctx(auStack_b8,param_3);
  return;
}



undefined4 sha1_stream(FILE *param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1100 [160];
  undefined1 auStack_1060 [4168];
  
  sha1_init_ctx(auStack_1100);
  iVar3 = 0;
  while( true ) {
    while( true ) {
      sVar1 = fread(auStack_1060 + iVar3,1,0x1000 - iVar3,param_1);
      iVar3 = iVar3 + sVar1;
      if (iVar3 != 0x1000) break;
      sha1_process_block(auStack_1060,0x1000,auStack_1100);
      iVar3 = 0;
    }
    if (sVar1 == 0) break;
    iVar2 = feof(param_1);
    if (iVar2 != 0) {
LAB_00020a38:
      if (iVar3 != 0) {
        sha1_process_bytes(auStack_1060,iVar3,auStack_1100);
      }
      sha1_finish_ctx(auStack_1100,param_2);
      return 0;
    }
  }
  iVar2 = ferror(param_1);
  if (iVar2 != 0) {
    return 1;
  }
  goto LAB_00020a38;
}



void memxor(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (param_3 != 0) {
    pbVar2 = param_2;
    do {
      pbVar1 = pbVar2 + 1;
      *param_1 = *pbVar2 ^ *param_1;
      pbVar2 = pbVar1;
      param_1 = param_1 + 1;
    } while (pbVar1 != param_2 + param_3);
  }
  return;
}



undefined4
hmac_sha1(undefined1 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 auStack_1d0 [20];
  undefined1 auStack_1bc [20];
  undefined1 auStack_1a8 [64];
  undefined1 auStack_168 [160];
  undefined1 auStack_c8 [164];
  
  if (0x40 < param_2) {
    sha1_init_ctx(auStack_c8);
    sha1_process_bytes(param_1,param_2,auStack_c8);
    sha1_finish_ctx(auStack_c8,auStack_1d0);
    param_2 = 0x14;
    param_1 = auStack_1d0;
  }
  sha1_init_ctx(auStack_168);
  memset_s(auStack_1a8,0x40,0x36,0x40);
  memxor(auStack_1a8,param_1,param_2);
  sha1_process_block(auStack_1a8,0x40,auStack_168);
  sha1_process_bytes(param_3,param_4,auStack_168);
  sha1_finish_ctx(auStack_168,auStack_1bc);
  sha1_init_ctx(auStack_c8);
  memset_s(auStack_1a8,0x40,0x5c,0x40);
  memxor(auStack_1a8,param_1,param_2);
  sha1_process_block(auStack_1a8,0x40,auStack_c8);
  sha1_process_bytes(auStack_1bc,0x14,auStack_c8);
  sha1_finish_ctx(auStack_c8,param_5);
  return 0;
}



int URLEncode(int param_1,size_t param_2,int param_3,size_t param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  size_t sVar6;
  
  if (param_3 != 0 && param_1 != 0) {
    sVar6 = param_4;
    if (0 < (int)param_4) {
      sVar6 = param_2;
    }
    if (0 < (int)sVar6) {
      iVar2 = 0;
      iVar3 = iVar2;
      sVar6 = param_4;
      do {
        uVar1 = (uint)*(byte *)(param_1 + iVar2);
        if (((uVar1 & 0xffffffdf) - 0x41 < 0x1a) || (uVar1 - 0x30 < 10)) {
LAB_00020cc4:
          *(byte *)(param_3 + iVar3) = *(byte *)(param_1 + iVar2);
          iVar4 = iVar3 + 1;
        }
        else if (uVar1 == 0x20) {
          *(undefined1 *)(param_3 + iVar3) = 0x2b;
          iVar4 = iVar3 + 1;
        }
        else {
          bVar5 = 0x5e < uVar1;
          if (uVar1 != 0x5f) {
            bVar5 = uVar1 != 0x2d;
          }
          if ((!bVar5 || (uVar1 == 0x5f || uVar1 == 0x2e)) || (uVar1 == 0x2a)) goto LAB_00020cc4;
          iVar4 = iVar3 + 3;
          if ((int)param_4 <= iVar4) {
            return 0;
          }
          snprintf((char *)(param_3 + iVar3),param_4,"%%%02X",uVar1,sVar6);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar4;
        if ((int)param_2 <= iVar2 || (int)param_4 <= iVar4) {
          *(undefined1 *)(param_3 + iVar4) = 0;
          return iVar4;
        }
      } while( true );
    }
  }
  return 0;
}



undefined4 gen_hmac(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 auStack_a0 [64];
  char acStack_60 [68];
  
  memset(auStack_a0,0,0x40);
  memset(acStack_60,0,0x40);
  memset_s(auStack_a0,0x40,0,0x40);
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_1);
  hmac_sha1(param_2,sVar1,param_1,sVar2,auStack_a0);
  base64_encode(auStack_a0,acStack_60,0x14);
  sVar1 = strlen(acStack_60);
  URLEncode(acStack_60,sVar1,param_3,0x80);
  return param_3;
}



undefined4 trans_json(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *__s;
  int iVar4;
  int iVar5;
  
  if (param_2 != (char *)0x0 && param_1 != 0) {
    if (param_3 == (char *)0x0) {
      return 0;
    }
    pcVar2 = strstr(param_3,param_2);
    if (pcVar2 != (char *)0x0) {
      sVar3 = strlen(param_2);
      __s = pcVar2 + sVar3;
      iVar5 = 2;
      do {
        iVar4 = iVar5;
        cVar1 = __s[1];
        __s = __s + 1;
        if (((cVar1 != ':') && (cVar1 != '\'')) && (cVar1 != '\"')) goto LAB_00020e00;
        iVar5 = iVar4 + 1;
      } while (iVar5 != 0xc);
      __s = pcVar2 + iVar4 + sVar3;
LAB_00020e00:
      sscanf(__s,"%[^\"\',}]",param_1);
      return 1;
    }
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling

undefined4 trans_json_ex(byte *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  byte bVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  bool bVar16;
  
  if (param_2 != (char *)0x0 && param_1 != (byte *)0x0) {
    if (param_3 == (char *)0x0) {
      return 0;
    }
    pcVar2 = strstr(param_3,param_2);
    if (pcVar2 != (char *)0x0) {
      sVar3 = strlen(param_3);
      sVar4 = strlen(param_2);
      pbVar11 = (byte *)(param_3 + (sVar3 - 1));
      pbVar9 = (byte *)(pcVar2 + sVar4);
      bVar1 = pcVar2[sVar4];
      while (bVar1 != 0x3a) {
        if (pbVar11 < pbVar9) {
          return 0;
        }
        pbVar15 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
        bVar1 = *pbVar15;
      }
      if (pbVar9 <= pbVar11) {
        iVar14 = 0;
        uVar6 = 0;
        iVar12 = 0;
        uVar13 = 0;
        uVar5 = 0;
        pbVar15 = (byte *)0x0;
        do {
          pbVar10 = pbVar9 + 1;
          uVar7 = (uint)*pbVar9;
          bVar16 = 0x2a < uVar7;
          if (uVar7 != 0x2b) {
            bVar16 = 8 < uVar7 - 0x30;
          }
          if ((bVar16 && (uVar7 != 0x2b && uVar7 - 0x30 != 9)) && (uVar7 != 0x2d)) {
            if (((uVar7 & 0xffffffdf) - 0x41 < 0x1a) && (pbVar15 == (byte *)0x0)) {
              uVar13 = 1;
              pbVar15 = pbVar9;
            }
LAB_00020f18:
            if (uVar7 != 0x22) goto LAB_00020f20;
LAB_00020f74:
            if (pbVar15 == (byte *)0x0) {
              iVar14 = iVar14 + 1;
              pbVar15 = pbVar9;
              goto LAB_00020f3c;
            }
            pbVar8 = (byte *)(uint)*pbVar15;
            if (iVar14 != 0) {
              iVar14 = iVar14 + -1;
              if ((pbVar8 != (byte *)0x22) || (iVar14 != 0)) goto LAB_00020f3c;
              goto LAB_00020fa4;
            }
            if (pbVar8 != (byte *)0x22) goto LAB_00020f3c;
LAB_0002101c:
            if (pbVar9 != (byte *)0x0) goto LAB_00020fa4;
            break;
          }
          if (pbVar15 != (byte *)0x0) goto LAB_00020f18;
          uVar5 = 1;
          pbVar15 = pbVar9;
          if (uVar7 == 0x22) goto LAB_00020f74;
LAB_00020f20:
          if (uVar7 == 0x5b) {
            uVar6 = uVar6 + 1;
            if (pbVar15 == (byte *)0x0) {
              pbVar15 = pbVar9;
            }
          }
          else if (uVar7 == 0x7b) {
            iVar12 = iVar12 + 1;
            if (pbVar15 == (byte *)0x0) {
              pbVar15 = pbVar9;
            }
          }
          else if (uVar7 == 0x5d) {
            if (uVar5 != 0 || uVar13 != 0) goto LAB_00021018;
            uVar6 = uVar6 - 1;
            if ((*pbVar15 == 0x5b) && (uVar6 == 0)) {
              pbVar8 = (byte *)0x5b;
              uVar5 = 0;
              uVar13 = 0;
              goto LAB_00020fa4;
            }
          }
          else if (uVar7 == 0x7d) {
            if (uVar5 != 0 || uVar13 != 0) {
LAB_00021018:
              pbVar8 = (byte *)(uVar5 | uVar13);
              pbVar9 = pbVar9 + -1;
              goto LAB_0002101c;
            }
            iVar12 = iVar12 + -1;
            if ((*pbVar15 == 0x7b) && (iVar12 == 0)) {
              pbVar8 = (byte *)0x7b;
              uVar5 = 0;
              uVar13 = 0;
              goto LAB_00020fa4;
            }
          }
          else if ((uVar7 == 0x2c) && (uVar5 != 0 || uVar13 != 0)) goto LAB_00021018;
LAB_00020f3c:
          pbVar9 = pbVar10;
        } while (pbVar10 <= pbVar11);
        pbVar8 = (byte *)(uVar13 | uVar5);
        pbVar9 = pbVar11;
        if (pbVar8 != (byte *)0x0) {
LAB_00020fa4:
          if (pbVar9 == (byte *)0x0 || pbVar15 == (byte *)0x0) {
            return 0;
          }
          if (((uVar5 ^ 1) & ~uVar13) != 0) {
            pbVar9 = pbVar9 + -1;
            pbVar15 = pbVar15 + 1;
          }
          if (pbVar15 <= pbVar9) {
            pbVar11 = param_1;
            do {
              pbVar10 = pbVar15 + 1;
              uVar6 = (uint)*pbVar15;
              pbVar8 = pbVar11 + 1;
              *pbVar11 = *pbVar15;
              pbVar11 = pbVar8;
              pbVar15 = pbVar10;
            } while (pbVar10 != pbVar9 + 1);
          }
          printf("trans_json_ex result=%s\n",param_1,uVar6,pbVar8,param_4);
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 trans_json_ex_s(byte *param_1,int param_2,char *param_3,char *param_4)

{
  byte bVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  byte *pbVar14;
  bool bVar15;
  
  if (param_3 != (char *)0x0 && param_1 != (byte *)0x0) {
    if (param_4 == (char *)0x0) {
      return 0;
    }
    pcVar2 = strstr(param_4,param_3);
    if (pcVar2 != (char *)0x0) {
      sVar3 = strlen(param_4);
      sVar4 = strlen(param_3);
      pbVar11 = (byte *)(param_4 + (sVar3 - 1));
      pbVar9 = (byte *)(pcVar2 + sVar4);
      bVar1 = pcVar2[sVar4];
      while (bVar1 != 0x3a) {
        if (pbVar11 < pbVar9) {
          return 0;
        }
        pbVar14 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
        bVar1 = *pbVar14;
      }
      if (pbVar9 <= pbVar11) {
        iVar5 = 0;
        iVar8 = 0;
        iVar6 = 0;
        bVar13 = false;
        bVar12 = false;
        pbVar14 = (byte *)0x0;
        do {
          pbVar10 = pbVar9 + 1;
          uVar7 = (uint)*pbVar9;
          bVar15 = 0x2a < uVar7;
          if (uVar7 != 0x2b) {
            bVar15 = 8 < uVar7 - 0x30;
          }
          if ((bVar15 && (uVar7 != 0x2b && uVar7 - 0x30 != 9)) && (uVar7 != 0x2d)) {
            if (((uVar7 & 0xffffffdf) - 0x41 < 0x1a) && (pbVar14 == (byte *)0x0)) {
              bVar13 = true;
              pbVar14 = pbVar9;
            }
LAB_000211b0:
            if (uVar7 != 0x22) goto LAB_000211b8;
LAB_0002120c:
            if (pbVar14 == (byte *)0x0) {
              iVar5 = iVar5 + 1;
              pbVar14 = pbVar9;
              goto LAB_000211d4;
            }
            if (iVar5 != 0) {
              iVar5 = iVar5 + -1;
              if ((*pbVar14 != 0x22) || (iVar5 != 0)) goto LAB_000211d4;
              goto LAB_0002123c;
            }
            if (*pbVar14 != 0x22) goto LAB_000211d4;
LAB_000212b8:
            if (pbVar9 != (byte *)0x0) goto LAB_0002123c;
            break;
          }
          if (pbVar14 != (byte *)0x0) goto LAB_000211b0;
          bVar12 = true;
          pbVar14 = pbVar9;
          if (uVar7 == 0x22) goto LAB_0002120c;
LAB_000211b8:
          if (uVar7 == 0x5b) {
            iVar8 = iVar8 + 1;
            if (pbVar14 == (byte *)0x0) {
              pbVar14 = pbVar9;
            }
          }
          else if (uVar7 == 0x7b) {
            iVar6 = iVar6 + 1;
            if (pbVar14 == (byte *)0x0) {
              pbVar14 = pbVar9;
            }
          }
          else if (uVar7 == 0x5d) {
            if (bVar12 || bVar13) goto LAB_000212b4;
            iVar8 = iVar8 + -1;
            if ((*pbVar14 == 0x5b) && (iVar8 == 0)) {
              bVar12 = false;
              bVar13 = false;
              goto LAB_0002123c;
            }
          }
          else if (uVar7 == 0x7d) {
            if (bVar12 || bVar13) {
LAB_000212b4:
              pbVar9 = pbVar9 + -1;
              goto LAB_000212b8;
            }
            iVar6 = iVar6 + -1;
            if ((*pbVar14 == 0x7b) && (iVar6 == 0)) {
              bVar12 = false;
              bVar13 = false;
              goto LAB_0002123c;
            }
          }
          else if ((uVar7 == 0x2c) && (bVar12 || bVar13)) goto LAB_000212b4;
LAB_000211d4:
          pbVar9 = pbVar10;
        } while (pbVar10 <= pbVar11);
        pbVar9 = pbVar11;
        if (bVar13 || bVar12) {
LAB_0002123c:
          if (pbVar9 == (byte *)0x0 || pbVar14 == (byte *)0x0) {
            return 0;
          }
          if ((bool)((bVar12 ^ 1U) & ~bVar13)) {
            pbVar14 = pbVar14 + 1;
            pbVar9 = pbVar9 + -1;
          }
          if ((pbVar14 <= pbVar9) && (1 < param_2)) {
            pbVar11 = param_1;
            do {
              pbVar10 = pbVar11 + 1;
              *pbVar11 = *pbVar14;
              if (pbVar9 < pbVar14 + 1) {
                return 1;
              }
              pbVar11 = pbVar10;
              pbVar14 = pbVar14 + 1;
            } while (pbVar10 != param_1 + param_2 + -1);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



uint FUN_00021370(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff) << 8 | (param_1 & 0xff00ffff) >> 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



void FUN_0002138c(int param_1)

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



void FUN_000213b4(uint *param_1,void *param_2,void *param_3)

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
    uVar4 = FUN_00021370(local_38);
    uVar5 = FUN_00021370(local_34);
    uVar6 = FUN_00021370(local_30);
    uVar7 = FUN_00021370(local_2c[0]);
    local_38 = uVar4 ^ *param_1;
    local_34 = uVar5 ^ param_1[1];
    local_30 = uVar6 ^ param_1[2];
    uVar7 = uVar7 ^ param_1[3];
    puVar15 = param_1;
    uVar4 = local_30;
    uVar5 = local_34;
    uVar6 = local_38;
    while( true ) {
      uVar13 = *(uint *)(&DAT_00042438 + (uVar6 >> 0x18) * 4) ^
               *(uint *)(&DAT_00042438 + ((uVar7 & 0xff) + 0x300) * 4) ^ puVar15[4] ^
               *(uint *)(&DAT_00042438 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(&DAT_00042438 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
      puVar16 = puVar15 + 8;
      uVar21 = *(uint *)(&DAT_00042438 + (uVar5 >> 0x18) * 4) ^
               *(uint *)(&DAT_00042438 + ((uVar6 & 0xff) + 0x300) * 4) ^ puVar15[5] ^
               *(uint *)(&DAT_00042438 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(&DAT_00042438 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
      uVar20 = *(uint *)(&DAT_00042438 + (uVar4 >> 0x18) * 4) ^
               *(uint *)(&DAT_00042438 + ((uVar5 & 0xff) + 0x300) * 4) ^ puVar15[6] ^
               *(uint *)(&DAT_00042438 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(&DAT_00042438 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
      uVar7 = *(uint *)(&DAT_00042438 + (uVar7 >> 0x18) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar4 & 0xff) + 0x300) * 4) ^ puVar15[7] ^
              *(uint *)(&DAT_00042438 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
      if (puVar16 == param_1 + (uVar14 >> 1) * 8) break;
      uVar6 = *(uint *)(&DAT_00042438 + (uVar13 >> 0x18) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar7 & 0xff) + 0x300) * 4) ^ *puVar16 ^
              *(uint *)(&DAT_00042438 + ((uVar21 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar20 >> 8 & 0xff) + 0x200) * 4);
      uVar5 = *(uint *)(&DAT_00042438 + (uVar21 >> 0x18) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar13 & 0xff) + 0x300) * 4) ^ puVar15[9] ^
              *(uint *)(&DAT_00042438 + ((uVar20 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
      uVar4 = *(uint *)(&DAT_00042438 + (uVar20 >> 0x18) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar21 & 0xff) + 0x300) * 4) ^ puVar15[10] ^
              *(uint *)(&DAT_00042438 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar13 >> 8 & 0xff) + 0x200) * 4);
      uVar7 = *(uint *)(&DAT_00042438 + (uVar7 >> 0x18) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar20 & 0xff) + 0x300) * 4) ^ puVar15[0xb] ^
              *(uint *)(&DAT_00042438 + ((uVar13 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_00042438 + ((uVar21 >> 8 & 0xff) + 0x200) * 4);
      puVar15 = puVar16;
    }
    uVar19 = *(uint *)(&DAT_00042438 + ((uVar21 >> 0x18) + 0x400) * 4);
    bVar1 = (&DAT_00042438)[((uVar13 & 0xff) + 0x400) * 4];
    uVar14 = puVar15[9];
    uVar4 = *(uint *)(&DAT_00042438 + ((uVar20 >> 0x10 & 0xff) + 0x400) * 4);
    uVar5 = *(uint *)(&DAT_00042438 + ((uVar7 >> 8 & 0xff) + 0x400) * 4);
    uVar18 = *(uint *)(&DAT_00042438 + ((uVar20 >> 0x18) + 0x400) * 4);
    bVar2 = (&DAT_00042438)[((uVar21 & 0xff) + 0x400) * 4];
    uVar6 = puVar15[10];
    uVar8 = *(uint *)(&DAT_00042438 + ((uVar7 >> 0x10 & 0xff) + 0x400) * 4);
    uVar9 = *(uint *)(&DAT_00042438 + ((uVar13 >> 8 & 0xff) + 0x400) * 4);
    uVar17 = *(uint *)(&DAT_00042438 + ((uVar7 >> 0x18) + 0x400) * 4);
    bVar3 = (&DAT_00042438)[((uVar20 & 0xff) + 0x400) * 4];
    uVar10 = puVar15[0xb];
    uVar11 = *(uint *)(&DAT_00042438 + ((uVar13 >> 0x10 & 0xff) + 0x400) * 4);
    uVar12 = *(uint *)(&DAT_00042438 + ((uVar21 >> 8 & 0xff) + 0x400) * 4);
    local_38 = FUN_00021370(*(uint *)(&DAT_00042438 + ((uVar13 >> 0x18) + 0x400) * 4) & 0xff000000 ^
                            (uint)(byte)(&DAT_00042438)[((uVar7 & 0xff) + 0x400) * 4] ^ *puVar16 ^
                            *(uint *)(&DAT_00042438 + ((uVar21 >> 0x10 & 0xff) + 0x400) * 4) &
                            0xff0000 ^
                            *(uint *)(&DAT_00042438 + ((uVar20 >> 8 & 0xff) + 0x400) * 4) & 0xff00);
    local_34 = FUN_00021370(uVar19 & 0xff000000 ^ (uint)bVar1 ^ uVar14 ^ uVar4 & 0xff0000 ^
                            uVar5 & 0xff00);
    local_30 = FUN_00021370(uVar18 & 0xff000000 ^ (uint)bVar2 ^ uVar6 ^ uVar8 & 0xff0000 ^
                            uVar9 & 0xff00);
    local_2c[0] = FUN_00021370(uVar17 & 0xff000000 ^ (uint)bVar3 ^ uVar10 ^ uVar11 & 0xff0000 ^
                               uVar12 & 0xff00);
    memcpy(param_3,&local_38,4);
    memcpy((void *)((int)param_3 + 4),&local_34,4);
    memcpy((void *)((int)param_3 + 8),&local_30,4);
    memcpy((void *)((int)param_3 + 0xc),local_2c,4);
  }
  return;
}



void FUN_000218c4(uint *param_1,void *param_2,void *param_3)

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
    uVar4 = FUN_00021370(local_38);
    uVar5 = FUN_00021370(local_34);
    uVar6 = FUN_00021370(local_30);
    uVar7 = FUN_00021370(local_2c[0]);
    local_38 = uVar4 ^ *param_1;
    local_34 = uVar5 ^ param_1[1];
    local_30 = uVar6 ^ param_1[2];
    uVar7 = uVar7 ^ param_1[3];
    puVar16 = param_1;
    uVar4 = local_34;
    uVar5 = local_30;
    uVar6 = local_38;
    while( true ) {
      uVar13 = *(uint *)(&DAT_00043838 + (uVar6 >> 0x18) * 4) ^
               *(uint *)(&DAT_00044438 + (uVar4 & 0xff) * 4) ^ puVar16[4] ^
               *(uint *)(&DAT_00043c38 + (uVar7 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_00044038 + (uVar5 >> 8 & 0xff) * 4);
      uVar14 = *(uint *)(&DAT_00043838 + (uVar4 >> 0x18) * 4) ^
               *(uint *)(&DAT_00044438 + (uVar5 & 0xff) * 4) ^ puVar16[5] ^
               *(uint *)(&DAT_00043c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_00044038 + (uVar7 >> 8 & 0xff) * 4);
      uVar21 = *(uint *)(&DAT_00043838 + (uVar5 >> 0x18) * 4) ^
               *(uint *)(&DAT_00044438 + (uVar7 & 0xff) * 4) ^ puVar16[6] ^
               *(uint *)(&DAT_00043c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_00044038 + (uVar6 >> 8 & 0xff) * 4);
      puVar17 = puVar16 + 8;
      uVar4 = *(uint *)(&DAT_00043838 + (uVar7 >> 0x18) * 4) ^
              *(uint *)(&DAT_00044438 + (uVar6 & 0xff) * 4) ^ puVar16[7] ^
              *(uint *)(&DAT_00043c38 + (uVar5 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00044038 + (uVar4 >> 8 & 0xff) * 4);
      if (puVar17 == param_1 + (uVar15 >> 1) * 8) break;
      uVar6 = *(uint *)(&DAT_00043838 + (uVar13 >> 0x18) * 4) ^
              *(uint *)(&DAT_00044438 + (uVar14 & 0xff) * 4) ^ *puVar17 ^
              *(uint *)(&DAT_00043c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00044038 + (uVar21 >> 8 & 0xff) * 4);
      uVar7 = *(uint *)(&DAT_00043838 + (uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_00044438 + (uVar13 & 0xff) * 4) ^ puVar16[0xb] ^
              *(uint *)(&DAT_00043c38 + (uVar21 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00044038 + (uVar14 >> 8 & 0xff) * 4);
      uVar5 = *(uint *)(&DAT_00043838 + (uVar21 >> 0x18) * 4) ^
              *(uint *)(&DAT_00044438 + (uVar4 & 0xff) * 4) ^ puVar16[10] ^
              *(uint *)(&DAT_00043c38 + (uVar14 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00044038 + (uVar13 >> 8 & 0xff) * 4);
      uVar4 = *(uint *)(&DAT_00043838 + (uVar14 >> 0x18) * 4) ^
              *(uint *)(&DAT_00044438 + (uVar21 & 0xff) * 4) ^ puVar16[9] ^
              *(uint *)(&DAT_00043c38 + (uVar13 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00044038 + (uVar4 >> 8 & 0xff) * 4);
      puVar16 = puVar17;
    }
    uVar20 = *(uint *)(&DAT_00044838 + (uVar14 >> 0x18) * 4);
    bVar1 = (&DAT_00044838)[(uVar21 & 0xff) * 4];
    uVar15 = puVar16[9];
    uVar5 = *(uint *)(&DAT_00044838 + (uVar13 >> 0x10 & 0xff) * 4);
    uVar6 = *(uint *)(&DAT_00044838 + (uVar4 >> 8 & 0xff) * 4);
    uVar19 = *(uint *)(&DAT_00044838 + (uVar21 >> 0x18) * 4);
    bVar2 = (&DAT_00044838)[(uVar4 & 0xff) * 4];
    uVar7 = puVar16[10];
    uVar8 = *(uint *)(&DAT_00044838 + (uVar14 >> 0x10 & 0xff) * 4);
    uVar9 = *(uint *)(&DAT_00044838 + (uVar13 >> 8 & 0xff) * 4);
    uVar18 = *(uint *)(&DAT_00044838 + (uVar4 >> 0x18) * 4);
    bVar3 = (&DAT_00044838)[(uVar13 & 0xff) * 4];
    uVar10 = puVar16[0xb];
    uVar11 = *(uint *)(&DAT_00044838 + (uVar21 >> 0x10 & 0xff) * 4);
    uVar12 = *(uint *)(&DAT_00044838 + (uVar14 >> 8 & 0xff) * 4);
    local_38 = FUN_00021370(*(uint *)(&DAT_00044838 + (uVar13 >> 0x18) * 4) & 0xff000000 ^
                            (uint)(byte)(&DAT_00044838)[(uVar14 & 0xff) * 4] ^ *puVar17 ^
                            *(uint *)(&DAT_00044838 + (uVar4 >> 0x10 & 0xff) * 4) & 0xff0000 ^
                            *(uint *)(&DAT_00044838 + (uVar21 >> 8 & 0xff) * 4) & 0xff00);
    local_34 = FUN_00021370(uVar20 & 0xff000000 ^ (uint)bVar1 ^ uVar15 ^ uVar5 & 0xff0000 ^
                            uVar6 & 0xff00);
    local_30 = FUN_00021370(uVar19 & 0xff000000 ^ (uint)bVar2 ^ uVar7 ^ uVar8 & 0xff0000 ^
                            uVar9 & 0xff00);
    local_2c[0] = FUN_00021370(uVar18 & 0xff000000 ^ (uint)bVar3 ^ uVar10 ^ uVar11 & 0xff0000 ^
                               uVar12 & 0xff00);
    memcpy(param_3,&local_38,4);
    memcpy((void *)((int)param_3 + 4),&local_34,4);
    memcpy((void *)((int)param_3 + 8),&local_30,4);
    memcpy((void *)((int)param_3 + 0xc),local_2c,4);
  }
  return;
}



void FUN_00021df4(uint param_1,uint param_2)

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



undefined4 AesSetKey(uint *param_1,void *param_2,uint param_3,void *param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if (((param_3 & 0xfffffff7) != 0x10) && (param_3 != 0x20)) {
    return 0xffffff53;
  }
  param_1[0x45] = 0;
  param_1[0x3c] = (param_3 >> 2) + 6;
  memcpy(param_1,param_2,param_3);
  for (puVar2 = param_1; puVar2 != param_1 + (param_3 >> 2); puVar2 = puVar2 + 1) {
    uVar1 = FUN_00021370(*puVar2);
    *puVar2 = uVar1;
  }
  if (param_3 == 0x18) {
    iVar3 = 0;
    puVar2 = param_1;
    while( true ) {
      uVar1 = puVar2[5];
      puVar5 = (uint *)((int)&DAT_00044c38 + iVar3);
      iVar3 = iVar3 + 4;
      uVar6 = *puVar5 ^ *puVar2 ^ *(uint *)(&DAT_00042438 + ((uVar1 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00042438)[((uVar1 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar2[6] = uVar6;
      uVar6 = uVar6 ^ puVar2[1];
      puVar2[7] = uVar6;
      uVar6 = uVar6 ^ puVar2[2];
      puVar2[8] = uVar6;
      uVar6 = uVar6 ^ puVar2[3];
      puVar2[9] = uVar6;
      if (iVar3 == 0x20) break;
      uVar6 = uVar6 ^ puVar2[4];
      puVar2[10] = uVar6;
      puVar2[0xb] = uVar6 ^ uVar1;
      puVar2 = puVar2 + 6;
    }
  }
  else if (param_3 == 0x20) {
    iVar3 = 0;
    puVar2 = param_1;
    while( true ) {
      uVar6 = puVar2[7];
      puVar5 = (uint *)((int)&DAT_00044c38 + iVar3);
      iVar3 = iVar3 + 4;
      uVar1 = *puVar5 ^ *puVar2 ^ *(uint *)(&DAT_00042438 + ((uVar6 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00042438 + ((uVar6 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00042438 + ((uVar6 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar2[8] = uVar1;
      uVar1 = uVar1 ^ puVar2[1];
      puVar2[9] = uVar1;
      uVar1 = uVar1 ^ puVar2[2];
      puVar2[10] = uVar1;
      uVar1 = uVar1 ^ puVar2[3];
      puVar2[0xb] = uVar1;
      if (iVar3 == 0x1c) break;
      uVar1 = *(uint *)(&DAT_00042438 + ((uVar1 >> 0x18) + 0x400) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_00042438)[((uVar1 & 0xff) + 0x400) * 4] ^ puVar2[4] ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4) & 0xff0000 ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 8 & 0xff) + 0x400) * 4) & 0xff00;
      puVar2[0xc] = uVar1;
      uVar1 = uVar1 ^ puVar2[5];
      puVar2[0xd] = uVar1;
      uVar1 = uVar1 ^ puVar2[6];
      puVar2[0xe] = uVar1;
      puVar2[0xf] = uVar1 ^ uVar6;
      puVar2 = puVar2 + 8;
    }
  }
  else {
    if (param_3 != 0x10) {
      return 0xffffff53;
    }
    iVar3 = 0;
    puVar2 = param_1;
    while( true ) {
      uVar1 = puVar2[3];
      puVar5 = (uint *)((int)&DAT_00044c38 + iVar3);
      iVar3 = iVar3 + 4;
      uVar6 = *puVar5 ^ *puVar2 ^ *(uint *)(&DAT_00042438 + ((uVar1 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00042438)[((uVar1 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar2[4] = uVar6;
      uVar6 = uVar6 ^ puVar2[1];
      puVar2[5] = uVar6;
      uVar6 = uVar6 ^ puVar2[2];
      puVar2[6] = uVar6;
      puVar2[7] = uVar6 ^ uVar1;
      if (iVar3 == 0x28) break;
      puVar2 = puVar2 + 4;
    }
  }
  if (param_5 == 1) {
    uVar1 = param_1[0x3c];
    uVar6 = 0;
    puVar2 = param_1;
    puVar5 = param_1 + uVar1 * 4;
    while( true ) {
      if (uVar1 * 4 - uVar6 <= uVar6) break;
      uVar4 = *puVar2;
      uVar6 = uVar6 + 4;
      *puVar2 = *puVar5;
      *puVar5 = uVar4;
      uVar4 = puVar2[1];
      puVar2[1] = puVar5[1];
      puVar5[1] = uVar4;
      uVar4 = puVar2[2];
      puVar2[2] = puVar5[2];
      puVar5[2] = uVar4;
      uVar4 = puVar2[3];
      puVar2[3] = puVar5[3];
      puVar5[3] = uVar4;
      puVar2 = puVar2 + 4;
      puVar5 = puVar5 + -4;
    }
    puVar2 = param_1;
    for (uVar1 = 1; uVar1 < param_1[0x3c]; uVar1 = uVar1 + 1) {
      puVar5 = puVar2 + 4;
      uVar6 = *puVar5;
      *puVar5 = *(uint *)(&DAT_00044438 +
                         (uint)(byte)(&DAT_00042438)[((uVar6 & 0xff) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00043838 +
                         (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00043c38 +
                         (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00044038 +
                         (uint)(byte)(&DAT_00042438)[((uVar6 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar6 = puVar2[5];
      puVar2[5] = *(uint *)(&DAT_00044438 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043838 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043c38 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00044038 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar6 = puVar2[6];
      puVar2[6] = *(uint *)(&DAT_00044438 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043838 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043c38 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00044038 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar6 = puVar2[7];
      puVar2[7] = *(uint *)(&DAT_00044438 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043838 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043c38 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00044038 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 8 & 0xff) + 0x400) * 4] * 4);
      puVar2 = puVar5;
    }
  }
  if (param_1 == (uint *)0x0) {
    return 0xffffff53;
  }
  if (param_4 == (void *)0x0) {
    memset(param_1 + 0x3d,0,0x10);
  }
  else {
    memcpy(param_1 + 0x3d,param_4,0x10);
  }
  return 0;
}



undefined4 AesSetKeyDirect(uint *param_1,void *param_2,uint param_3,void *param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  param_1[0x45] = 0;
  param_1[0x3c] = (param_3 >> 2) + 6;
  memcpy(param_1,param_2,param_3);
  for (puVar2 = param_1; puVar2 != param_1 + (param_3 >> 2); puVar2 = puVar2 + 1) {
    uVar1 = FUN_00021370(*puVar2);
    *puVar2 = uVar1;
  }
  if (param_3 == 0x18) {
    iVar3 = 0;
    puVar2 = param_1;
    while( true ) {
      uVar1 = puVar2[5];
      puVar5 = (uint *)((int)&DAT_00044c38 + iVar3);
      iVar3 = iVar3 + 4;
      uVar6 = *puVar5 ^ *puVar2 ^ *(uint *)(&DAT_00042438 + ((uVar1 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00042438)[((uVar1 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar2[6] = uVar6;
      uVar6 = uVar6 ^ puVar2[1];
      puVar2[7] = uVar6;
      uVar6 = uVar6 ^ puVar2[2];
      puVar2[8] = uVar6;
      uVar6 = uVar6 ^ puVar2[3];
      puVar2[9] = uVar6;
      if (iVar3 == 0x20) break;
      uVar6 = uVar6 ^ puVar2[4];
      puVar2[10] = uVar6;
      puVar2[0xb] = uVar6 ^ uVar1;
      puVar2 = puVar2 + 6;
    }
  }
  else if (param_3 == 0x20) {
    iVar3 = 0;
    puVar2 = param_1;
    while( true ) {
      uVar6 = puVar2[7];
      puVar5 = (uint *)((int)&DAT_00044c38 + iVar3);
      iVar3 = iVar3 + 4;
      uVar1 = *puVar5 ^ *puVar2 ^ *(uint *)(&DAT_00042438 + ((uVar6 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00042438 + ((uVar6 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00042438 + ((uVar6 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar2[8] = uVar1;
      uVar1 = uVar1 ^ puVar2[1];
      puVar2[9] = uVar1;
      uVar1 = uVar1 ^ puVar2[2];
      puVar2[10] = uVar1;
      uVar1 = uVar1 ^ puVar2[3];
      puVar2[0xb] = uVar1;
      if (iVar3 == 0x1c) break;
      uVar1 = *(uint *)(&DAT_00042438 + ((uVar1 >> 0x18) + 0x400) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_00042438)[((uVar1 & 0xff) + 0x400) * 4] ^ puVar2[4] ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4) & 0xff0000 ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 8 & 0xff) + 0x400) * 4) & 0xff00;
      puVar2[0xc] = uVar1;
      uVar1 = uVar1 ^ puVar2[5];
      puVar2[0xd] = uVar1;
      uVar1 = uVar1 ^ puVar2[6];
      puVar2[0xe] = uVar1;
      puVar2[0xf] = uVar1 ^ uVar6;
      puVar2 = puVar2 + 8;
    }
  }
  else {
    if (param_3 != 0x10) {
      return 0xffffff53;
    }
    iVar3 = 0;
    puVar2 = param_1;
    while( true ) {
      uVar1 = puVar2[3];
      puVar5 = (uint *)((int)&DAT_00044c38 + iVar3);
      iVar3 = iVar3 + 4;
      uVar6 = *puVar5 ^ *puVar2 ^ *(uint *)(&DAT_00042438 + ((uVar1 & 0xff) + 0x400) * 4) & 0xff00 ^
              (uint)(byte)(&DAT_00042438)[((uVar1 >> 0x18) + 0x400) * 4] ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4) & 0xff000000 ^
              *(uint *)(&DAT_00042438 + ((uVar1 >> 8 & 0xff) + 0x400) * 4) & 0xff0000;
      puVar2[4] = uVar6;
      uVar6 = uVar6 ^ puVar2[1];
      puVar2[5] = uVar6;
      uVar6 = uVar6 ^ puVar2[2];
      puVar2[6] = uVar6;
      puVar2[7] = uVar6 ^ uVar1;
      if (iVar3 == 0x28) break;
      puVar2 = puVar2 + 4;
    }
  }
  if (param_5 == 1) {
    uVar1 = param_1[0x3c];
    uVar6 = 0;
    puVar2 = param_1;
    puVar5 = param_1 + uVar1 * 4;
    while( true ) {
      if (uVar1 * 4 - uVar6 <= uVar6) break;
      uVar4 = *puVar2;
      uVar6 = uVar6 + 4;
      *puVar2 = *puVar5;
      *puVar5 = uVar4;
      uVar4 = puVar2[1];
      puVar2[1] = puVar5[1];
      puVar5[1] = uVar4;
      uVar4 = puVar2[2];
      puVar2[2] = puVar5[2];
      puVar5[2] = uVar4;
      uVar4 = puVar2[3];
      puVar2[3] = puVar5[3];
      puVar5[3] = uVar4;
      puVar2 = puVar2 + 4;
      puVar5 = puVar5 + -4;
    }
    puVar2 = param_1;
    for (uVar1 = 1; uVar1 < param_1[0x3c]; uVar1 = uVar1 + 1) {
      puVar5 = puVar2 + 4;
      uVar6 = *puVar5;
      *puVar5 = *(uint *)(&DAT_00044438 +
                         (uint)(byte)(&DAT_00042438)[((uVar6 & 0xff) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00043838 +
                         (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00043c38 +
                         (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                *(uint *)(&DAT_00044038 +
                         (uint)(byte)(&DAT_00042438)[((uVar6 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar6 = puVar2[5];
      puVar2[5] = *(uint *)(&DAT_00044438 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043838 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043c38 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00044038 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar6 = puVar2[6];
      puVar2[6] = *(uint *)(&DAT_00044438 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043838 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043c38 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00044038 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 8 & 0xff) + 0x400) * 4] * 4);
      uVar6 = puVar2[7];
      puVar2[7] = *(uint *)(&DAT_00044438 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043838 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x18) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00043c38 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 0x10 & 0xff) + 0x400) * 4] * 4) ^
                  *(uint *)(&DAT_00044038 +
                           (uint)(byte)(&DAT_00042438)[((uVar6 >> 8 & 0xff) + 0x400) * 4] * 4);
      puVar2 = puVar5;
    }
  }
  if (param_1 == (uint *)0x0) {
    return 0xffffff53;
  }
  if (param_4 == (void *)0x0) {
    memset(param_1 + 0x3d,0,0x10);
  }
  else {
    memcpy(param_1 + 0x3d,param_4,0x10);
  }
  return 0;
}



void AesEncryptDirect(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000213b4(param_1,param_3,param_2);
  return;
}



void AesDecryptDirect(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000218c4(param_1,param_3,param_2);
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
    FUN_00021df4(__src,param_3 + uVar1 * 0x10);
    FUN_000213b4(param_1,__src,__src);
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
    FUN_000218c4(param_1,__dest,iVar2);
    FUN_00021df4(iVar2,(void *)(param_1 + 0xf4));
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
    FUN_000213b4(param_1,param_1 + 0xf4,pbVar6 + iVar4,pbVar1,iVar7,pbVar1,param_3);
    FUN_0002138c(param_1 + 0xf4);
    FUN_00021df4(pbVar6 + iVar4,pbVar5 + iVar4);
    iVar4 = iVar4 + 0x10;
    *(byte **)(param_1 + 0x114) = pbVar1;
    param_2 = pbVar1;
  }
  uVar2 = param_4 & 0xfffffff0;
  if ((param_4 & 0xf) != 0) {
    FUN_000213b4(param_1,param_1 + 0xf4,param_1 + 0x104,uVar2,iVar7,param_2,param_3);
    FUN_0002138c(param_1 + 0xf4);
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



undefined4 FUN_000226f0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(char *)(param_1 + 0x2e1) == '\0') {
    pcVar2 = "CONNECT_ONLY is required!";
  }
  else {
    iVar1 = FUN_00023384(param_1,param_3,param_3,*(char *)(param_1 + 0x2e1),param_4);
    *param_2 = iVar1;
    if (iVar1 != -1) {
      return 0;
    }
    pcVar2 = "Failed to get recent socket";
  }
  FUN_00030648(param_1,pcVar2);
  return 1;
}



undefined4 FUN_00022750(uint param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00051648 + 1;
  bVar2 = DAT_00051648 == 0;
  DAT_00051648 = iVar1;
  if (bVar2) {
    DAT_000515c4 = malloc;
    DAT_000515c8 = free;
    DAT_000515cc = realloc;
    DAT_000515d0 = strdup;
    DAT_000515d4 = calloc;
    if (((param_1 & 1) != 0) && (iVar1 = FUN_00028600(), iVar1 == 0)) {
      return 2;
    }
    DAT_0005164c = param_1;
    if ((param_1 & 4) != 0) {
      DAT_00051650 = 1;
    }
  }
  return 0;
}



int FUN_000227fc(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (((param_3 != 0 && param_2 != 0) && (param_5 != 0 && param_4 != 0)) && (param_6 != 0)) {
    if (DAT_00051648 == 0) {
      iVar1 = FUN_00022750();
      if (iVar1 == 0) {
        DAT_000515d0 = param_5;
        DAT_000515d4 = param_6;
        DAT_000515c4 = param_2;
        DAT_000515c8 = param_3;
        DAT_000515cc = param_4;
      }
      return iVar1;
    }
    DAT_00051648 = DAT_00051648 + 1;
    return 0;
  }
  return 2;
}



undefined4 FUN_000228d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  if (((DAT_00051648 == 0) && (iVar1 = FUN_00022750(3), iVar1 != 0)) ||
     (iVar1 = FUN_000316b0(&local_c), iVar1 != 0)) {
    local_c = 0;
  }
  return local_c;
}



void FUN_00022920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_1 != 0) {
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_000317bc(param_1,param_2,&uStack_8,param_4,param_1,&uStack_8);
  }
  return;
}



undefined4 FUN_00022954(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar5 == 0) {
      iVar5 = FUN_000248b0(1,3);
      if (iVar5 != 0) {
        *(int *)(param_1 + 0x44) = iVar5;
        goto LAB_000229ac;
      }
    }
    else {
LAB_000229ac:
      FUN_00025010(iVar5,6,*(undefined4 *)(param_1 + 0x3d8));
      iVar1 = FUN_000253d4(iVar5,param_1);
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x40) = iVar5;
        bVar3 = 0;
        iVar1 = 0;
        uVar6 = 0;
        uVar8 = 0;
        while( true ) {
          bVar4 = (bool)(bVar3 ^ 1);
          if (iVar1 != 0) {
            bVar4 = false;
          }
          if (!bVar4) break;
          local_40 = 0;
          FUN_000296f8(&local_38);
          iVar1 = FUN_00024b38(iVar5,0,0,1000,&local_3c);
          uVar7 = uVar8;
          if (iVar1 == 0) {
            if (local_3c == -1) {
              uVar6 = 0x38;
              goto LAB_00022b10;
            }
            uVar7 = 0;
            if (local_3c == 0) {
              FUN_000296f8(&local_30);
              iVar1 = FUN_00029758(local_30,uStack_2c,local_38,uStack_34);
              if ((iVar1 < 0xb) && (uVar7 = uVar8 + 1, 2 < (int)uVar7)) {
                if ((int)uVar7 < 10) {
                  iVar1 = 1 << (uVar8 & 0xff);
                }
                else {
                  iVar1 = 1000;
                }
                FUN_000270e8(iVar1);
              }
            }
            iVar1 = FUN_000267e4(iVar5,&local_40);
            if (iVar1 != 0) goto LAB_00022ae4;
            uVar8 = uVar7;
            if ((local_40 == 0) && (iVar2 = FUN_00024f2c(iVar5,&local_30), iVar2 != 0)) {
              uVar6 = *(undefined4 *)(iVar2 + 8);
              bVar3 = 1;
            }
            else {
              bVar3 = 0;
            }
          }
          else {
LAB_00022ae4:
            bVar3 = 0;
            uVar8 = uVar7;
          }
        }
        if (iVar1 != 0) {
          if (iVar1 == 3) {
            uVar6 = 0x1b;
          }
          else {
            uVar6 = 0x2b;
          }
        }
LAB_00022b10:
        FUN_00025554(iVar5,param_1);
        return uVar6;
      }
      FUN_00024e10(iVar5);
      if (iVar1 != 3) goto LAB_000229e0;
    }
    uVar6 = 0x1b;
  }
  else {
    FUN_00030648(param_1,"easy handle already used in multi handle");
LAB_000229e0:
    uVar6 = 2;
  }
  return uVar6;
}



void FUN_00022b2c(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_000339ec();
  return;
}



void FUN_00022b38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = param_3;
  uStack_4 = param_4;
  FUN_00037c6c(param_1,param_2,param_3,&local_8,param_1,&local_8);
  return;
}



int FUN_00022b64(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = (*DAT_000515d4)(1,0x8718);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = (*DAT_000515c4)(0x100);
  *(int *)(iVar2 + 0x52c) = iVar3;
  if (iVar3 != 0) {
    *(undefined4 *)(iVar2 + 0x530) = 0x100;
    iVar3 = FUN_0003152c(iVar2,param_1);
    if (iVar3 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x440);
      *(undefined4 *)(iVar2 + 0x518) = 0;
      *(undefined4 *)(iVar2 + 0x440) = uVar4;
      uVar1 = *(undefined1 *)(param_1 + 0x438);
      *(undefined4 *)(iVar2 + 0x528) = 0;
      *(undefined1 *)(iVar2 + 0x438) = uVar1;
      if (*(int *)(param_1 + 0x400) != 0) {
        iVar3 = FUN_0002bec4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x400) + 4),
                             *(undefined4 *)(iVar2 + 0x400),*(undefined1 *)(param_1 + 0x215));
        *(int *)(iVar2 + 0x400) = iVar3;
        if (iVar3 == 0) goto LAB_00022c88;
      }
      if (*(int *)(param_1 + 0x3f8) != 0) {
        iVar3 = FUN_000279fc();
        *(int *)(iVar2 + 0x3f8) = iVar3;
        if (iVar3 == 0) goto LAB_00022c88;
      }
      if (*(int *)(param_1 + 1000) != 0) {
        iVar3 = (*DAT_000515d0)();
        *(int *)(iVar2 + 1000) = iVar3;
        if (iVar3 == 0) goto LAB_00022c88;
        *(undefined1 *)(iVar2 + 0x3ec) = 1;
      }
      if (*(int *)(param_1 + 0x3f0) != 0) {
        iVar3 = (*DAT_000515d0)();
        *(int *)(iVar2 + 0x3f0) = iVar3;
        if (iVar3 == 0) goto LAB_00022c88;
        *(undefined1 *)(iVar2 + 0x3f4) = 1;
      }
      *(undefined4 *)(iVar2 + 0x8714) = 0xc0dedbad;
      return iVar2;
    }
  }
LAB_00022c88:
  FUN_000279b0(*(undefined4 *)(iVar2 + 0x3f8));
  *(undefined4 *)(iVar2 + 0x3f8) = 0;
  if (*(int *)(iVar2 + 0x52c) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(iVar2 + 0x52c) = 0;
  }
  if (*(int *)(iVar2 + 1000) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(iVar2 + 1000) = 0;
  }
  if (*(int *)(iVar2 + 0x3f0) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(iVar2 + 0x3f0) = 0;
  }
  FUN_00031480(iVar2);
  (*DAT_000515c8)(iVar2);
  return 0;
}



void FUN_00022d14(int param_1)

{
  if (*(int *)(param_1 + 0x8620) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x8620) = 0;
  }
  *(undefined4 *)(param_1 + 0x8624) = 0;
  FUN_0003399c(param_1);
  FUN_00031480(param_1);
  memset((void *)(param_1 + 0x118),0,0x2d0);
  FUN_00031588((void *)(param_1 + 0x118));
  memset((void *)(param_1 + 0x408),0,0x110);
  *(undefined4 *)(param_1 + 0x440) = 0x10;
  *(undefined4 *)(param_1 + 0x8538) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x853c) = 0xffffffff;
  return;
}



int FUN_00022db8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint __n;
  uint uVar5;
  void *__src;
  void *pvVar6;
  int iVar7;
  
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
  }
  if ((param_2 & 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x20;
  }
  *(uint *)(param_1 + 0xf4) = uVar2 | *(uint *)(param_1 + 0xf4) & 0xffffffcf | uVar4;
  if (uVar2 == 0) {
    iVar7 = 0x8550;
    pvVar6 = *(void **)(param_1 + 0x8550);
    if (pvVar6 != (void *)0x0) {
      __n = *(uint *)(param_1 + 0x8554);
      uVar3 = *(undefined4 *)(param_1 + 0x8558);
      *(undefined4 *)(param_1 + 0x8550) = 0;
      __src = pvVar6;
      do {
        uVar5 = __n;
        if (0x3fff < __n) {
          uVar5 = 0x4000;
        }
        iVar1 = FUN_00030880(*(undefined4 *)(param_1 + 8),uVar3,__src,uVar5,iVar7,uVar3,param_3);
        if (iVar1 != 0) break;
        if ((*(int *)(param_1 + iVar7) != 0) && (__n != uVar5)) {
          __dest = (void *)(*DAT_000515cc)(*(int *)(param_1 + iVar7),__n);
          if (__dest == (void *)0x0) {
            (*DAT_000515c8)(*(undefined4 *)(param_1 + 0x8550));
            *(undefined4 *)(param_1 + 0x8550) = 0;
            iVar1 = 0x1b;
          }
          else {
            *(void **)(param_1 + 0x8550) = __dest;
            memcpy(__dest,__src,__n);
            *(uint *)(param_1 + 0x8554) = __n;
          }
          break;
        }
        __n = __n - uVar5;
        __src = (void *)((int)__src + uVar5);
      } while (__n != 0);
      (*DAT_000515c8)(pvVar6);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
  }
  if ((uVar2 | uVar4) != 0x30) {
    FUN_00025210(param_1,1);
  }
  return 0;
}



int FUN_00022f68(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = FUN_000226f0(param_1,&local_1c,&local_14);
  if (iVar1 == 0) {
    *param_4 = 0;
    iVar1 = FUN_00030348(local_14,local_1c,param_2,param_3,&local_18);
    if (local_18 == -1) {
      iVar1 = 0x37;
    }
    else if ((iVar1 == 0) && (local_18 == 0)) {
      iVar1 = 0x51;
    }
    else {
      *param_4 = local_18;
    }
  }
  return iVar1;
}



bool FUN_00023000(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_10 [2];
  
  local_10[0] = 0;
  local_10[1] = 4;
  iVar1 = getsockopt(param_1,1,4,local_10,(socklen_t *)(local_10 + 1));
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    local_10[0] = *piVar2;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_10[0];
  }
  return local_10[0] == 0 || local_10[0] == 0x6a;
}



undefined4 FUN_00023064(short *param_1,char *param_2,uint *param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  
  if (*param_1 == 1) {
    FUN_000365a4(param_2,0x2e,"%s",param_1 + 1,param_4);
    uVar2 = 0;
  }
  else {
    if ((*param_1 != 2) || (pcVar1 = inet_ntop(2,param_1 + 2,param_2,0x2e), pcVar1 == (char *)0x0))
    {
      *param_2 = '\0';
      *param_3 = 0;
      return 0;
    }
    uVar2 = ((ushort)param_1[1] & 0xff) << 8 | (uint)((ushort)param_1[1] >> 8);
  }
  *param_3 = uVar2;
  return 1;
}



int FUN_000230f4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int local_18;
  int *piStack_14;
  
  piStack_14 = param_2;
  local_18 = param_1;
  iVar6 = 300000;
  iVar1 = *(int *)(param_1 + 0x1c8);
  if (param_3 == 0) {
    iVar6 = 0;
  }
  bVar4 = 0 < iVar1;
  if ((param_3 != 0) && (0 < *(int *)(param_1 + 0x1cc))) {
    bVar4 = bVar4 | 2;
  }
  if (bVar4 == 2) {
    iVar2 = *(int *)(param_1 + 0x1cc);
  }
  else if (bVar4 == 3) {
    iVar2 = *(int *)(param_1 + 0x1cc);
    if (iVar1 <= *(int *)(param_1 + 0x1cc)) {
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = iVar1;
    if ((bVar4 != 1) && (iVar2 = iVar6, param_3 == 0)) {
      return 0;
    }
  }
  if (param_2 == (int *)0x0) {
    FUN_000296f8(&local_18);
    param_2 = &local_18;
  }
  if (param_3 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x4a0);
    uVar5 = *(undefined4 *)(param_1 + 0x4a4);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x49c);
    uVar3 = *(undefined4 *)(param_1 + 0x498);
  }
  iVar1 = FUN_00029758(*param_2,param_2[1],uVar3,uVar5);
  iVar2 = iVar2 - iVar1;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  return iVar2;
}



void FUN_000231c0(int *param_1)

{
  int iVar1;
  
  memcpy((void *)(*param_1 + 0x869c),param_1 + 0x2e,0x2e);
  memcpy((void *)(*param_1 + 0x86d0),param_1 + 0x3b,0x2e);
  iVar1 = *param_1;
  *(int *)(iVar1 + 0x86cc) = param_1[0x3a];
  *(int *)(iVar1 + 0x8700) = param_1[0x47];
  return;
}



void FUN_00023220(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  socklen_t local_11c;
  sockaddr asStack_118 [8];
  sockaddr asStack_98 [8];
  
  uVar5 = *param_1;
  if (param_1[0x23] == 2) {
    return;
  }
  if (*(char *)((int)param_1 + 0x1d9) == '\0') {
    local_11c = 0x80;
    iVar1 = getpeername(param_2,asStack_118,&local_11c);
    if (iVar1 == 0) {
      local_11c = 0x80;
      iVar1 = getsockname(param_2,asStack_98,&local_11c);
      if (iVar1 == 0) {
        iVar1 = FUN_00023064(asStack_118,param_1 + 0x2e,param_1 + 0x3a);
        if (iVar1 == 0) {
          piVar2 = __errno_location();
          iVar1 = *piVar2;
          uVar3 = FUN_00027028(param_1,iVar1);
          pcVar4 = "ssrem inet_ntop() failed with errno %d: %s";
        }
        else {
          memcpy(param_1 + 0x16,param_1 + 0x2e,0x2e);
          iVar1 = FUN_00023064(asStack_98,param_1 + 0x3b,param_1 + 0x47);
          if (iVar1 != 0) goto LAB_00023364;
          piVar2 = __errno_location();
          iVar1 = *piVar2;
          uVar3 = FUN_00027028(param_1,iVar1);
          pcVar4 = "ssloc inet_ntop() failed with errno %d: %s";
        }
      }
      else {
        piVar2 = __errno_location();
        iVar1 = *piVar2;
        uVar3 = FUN_00027028(param_1,iVar1);
        pcVar4 = "getsockname() failed with errno %d: %s";
      }
    }
    else {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      uVar3 = FUN_00027028(param_1,iVar1);
      pcVar4 = "getpeername() failed with errno %d: %s";
    }
    FUN_00030648(uVar5,pcVar4,iVar1,uVar3);
  }
  else {
LAB_00023364:
    FUN_000231c0(param_1);
  }
  return;
}



int FUN_00023384(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  iVar3 = *(int *)(param_1 + 0x528);
  if ((iVar3 != 0) && (iVar2 = *(int *)(param_1 + 0x44), iVar2 != 0)) {
    local_14 = param_4 & 0xffffff00;
    local_18 = iVar3;
    FUN_00027d28(*(undefined4 *)(iVar2 + 0x34),&local_18,&LAB_00022fe8,iVar2,param_1,param_2);
    if ((local_14 & 0xff) == 0) {
      *(undefined4 *)(param_1 + 0x528) = 0;
    }
    else {
      cVar1 = *(char *)(iVar3 + 0x178);
      if (param_2 != (int *)0x0) {
        *param_2 = iVar3;
      }
      iVar2 = *(int *)(iVar3 + 0x154);
      if (cVar1 == '\0') {
        iVar3 = recv(iVar2,&stack0xffffffe7,1,2);
      }
      else {
        iVar3 = FUN_00028bd8(iVar3);
      }
      if (iVar3 != 0) {
        return iVar2;
      }
    }
  }
  return -1;
}



undefined4 FUN_00023428(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  if ((param_1 != 0) && (pcVar3 = *(code **)(param_1 + 0x38), pcVar3 != (code *)0x0)) {
    iVar2 = *(int *)(param_1 + 0x158);
    if ((param_2 != iVar2) || (iVar2 = 0, *(char *)(param_1 + 0x165) == '\0')) {
      uVar1 = (*pcVar3)(*(undefined4 *)(param_1 + 0x3c),param_2,iVar2,pcVar3,param_4);
      return uVar1;
    }
    *(undefined1 *)(param_1 + 0x165) = 0;
  }
  close(param_2);
  if (param_1 == 0) {
    return 0;
  }
  FUN_00024f9c(param_1,param_2);
  return 0;
}



undefined4 FUN_00023498(int *param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  void *__src;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int local_a0 [36];
  
  iVar5 = *param_1;
  if (param_3 == (int *)0x0) {
    param_3 = local_a0;
  }
  *param_3 = *(int *)(param_2 + 4);
  iVar2 = param_1[0x23];
  param_3[1] = iVar2;
  if (iVar2 == 2) {
    iVar2 = 0x11;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  param_3[2] = iVar2;
  uVar3 = *(uint *)(param_2 + 0x10);
  __src = *(void **)(param_2 + 0x18);
  if (0x80 < uVar3) {
    uVar3 = 0x80;
  }
  param_3[3] = uVar3;
  memcpy(param_3 + 4,__src,param_3[3]);
  pcVar4 = *(code **)(iVar5 + 0x1a0);
  if (pcVar4 == (code *)0x0) {
    iVar5 = socket(*param_3,param_3[1],param_3[2]);
  }
  else {
    iVar5 = (*pcVar4)(*(undefined4 *)(iVar5 + 0x1a4),0,param_3);
  }
  *param_4 = iVar5;
  if (*param_4 == -1) {
    uVar1 = 7;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int FUN_00023534(int *param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int extraout_r3;
  int extraout_r3_00;
  int iVar12;
  int iVar13;
  uint uVar14;
  socklen_t __len;
  int local_30c;
  int local_300;
  int iStack_2fc;
  int local_2f8;
  undefined1 auStack_2f4 [4];
  int *local_2f0;
  socklen_t local_2ec;
  undefined1 auStack_2e8 [48];
  sockaddr asStack_2b8 [8];
  sockaddr asStack_238 [8];
  int local_1b8 [3];
  socklen_t local_1ac;
  sockaddr asStack_1a8 [8];
  uint local_128;
  undefined1 auStack_124 [256];
  
  iVar13 = *param_1;
  *param_3 = -1;
  iVar4 = FUN_00023498(param_1,param_2,local_1b8,&local_2f8);
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = FUN_00023064(asStack_1a8,auStack_2e8,auStack_2f4);
  if (iVar4 == 0) {
    piVar5 = __errno_location();
    iVar4 = *piVar5;
    uVar6 = FUN_00027028(param_1,iVar4);
    FUN_00030648(iVar13,"sa_addr inet_ntop() failed with errno %d: %s",iVar4,uVar6);
    FUN_00023428(param_1,local_2f8);
    return 0;
  }
  FUN_000305d4(iVar13,"  Trying %s...\n",auStack_2e8);
  if (*(char *)(iVar13 + 0x2de) != '\0') {
    iVar12 = *param_1;
    local_128 = (uint)*(byte *)(iVar12 + 0x2de);
    iVar4 = setsockopt(local_2f8,6,1,&local_128,4);
    if (iVar4 < 0) {
      piVar5 = __errno_location();
      uVar6 = FUN_00027028(param_1,*piVar5);
      FUN_000305d4(iVar12,"Could not set TCP_NODELAY: %s\n",uVar6);
    }
    else {
      FUN_000305d4(iVar12,"TCP_NODELAY set\n");
    }
  }
  iVar4 = local_2f8;
  if (*(char *)(iVar13 + 0x3cc) != '\0') {
    local_128 = 1;
    iVar12 = setsockopt(local_2f8,1,9,&local_128,4);
    if (iVar12 < 0) {
      pcVar10 = "Failed to set SO_KEEPALIVE on fd %d\n";
    }
    else {
      local_128 = FUN_00027ab0(*(undefined4 *)(iVar13 + 0x3d0));
      iVar12 = setsockopt(iVar4,6,4,&local_128,4);
      if (iVar12 < 0) {
        FUN_000305d4(iVar13,"Failed to set TCP_KEEPIDLE on fd %d\n",iVar4);
      }
      local_128 = FUN_00027ab0(*(undefined4 *)(iVar13 + 0x3d4));
      iVar12 = setsockopt(iVar4,6,5,&local_128,4);
      if (-1 < iVar12) goto LAB_000236f8;
      pcVar10 = "Failed to set TCP_KEEPINTVL on fd %d\n";
    }
    FUN_000305d4(iVar13,pcVar10,iVar4);
  }
LAB_000236f8:
  if (*(code **)(iVar13 + 0x198) == (code *)0x0) {
LAB_00023738:
    bVar3 = false;
  }
  else {
    iVar4 = (**(code **)(iVar13 + 0x198))(*(undefined4 *)(iVar13 + 0x19c),local_2f8,0);
    if (iVar4 != 2) {
      if (iVar4 != 0) {
        FUN_00023428(param_1,local_2f8);
        return 0x2a;
      }
      goto LAB_00023738;
    }
    bVar3 = true;
  }
  iVar4 = local_2f8;
  iVar12 = *param_1;
  local_30c = *(int *)(iVar12 + 0x16c);
  uVar1 = *(ushort *)(iVar12 + 0x168);
  uVar14 = (uint)uVar1;
  pcVar10 = *(char **)(iVar12 + 0x30c);
  local_2f0 = (int *)0x0;
  local_128 = 0;
  memset(auStack_124,0,0xfc);
  if (uVar14 == 0 && pcVar10 == (char *)0x0) {
LAB_0002397c:
    FUN_00027a44(local_2f8,1);
    FUN_000296f8(&local_300);
    param_1[0x7d] = local_300;
    param_1[0x7e] = iStack_2fc;
    iVar4 = 0;
    if (1 < param_1[0x7f]) {
      FUN_00025754(iVar13,param_1[0x80]);
    }
    if ((bVar3) || (param_1[0x23] != 1)) {
      *param_3 = local_2f8;
    }
    else {
      iVar12 = connect(local_2f8,asStack_1a8,local_1ac);
      if (iVar12 == -1) {
        piVar5 = __errno_location();
        iVar12 = *piVar5;
        if ((iVar12 != 0xb) && (iVar12 != 0x73)) {
          uVar6 = FUN_00027028(param_1,iVar12);
          FUN_000305d4(iVar13,"Immediate connect fail for %s: %s\n",auStack_2e8,uVar6);
          *(int *)(iVar13 + 0x8564) = iVar12;
          FUN_00023428(param_1,local_2f8);
          return 7;
        }
      }
      *param_3 = local_2f8;
    }
  }
  else {
    bVar2 = false;
    memset(asStack_2b8,0,0x80);
    if ((pcVar10 == (char *)0x0) || (sVar7 = strlen(pcVar10), 0xfe < sVar7)) {
      if (local_1b8[0] == 2) {
LAB_000238c4:
        asStack_2b8[0].sa_family = (sa_family_t)local_1b8[0];
        asStack_2b8[0].sa_data._0_2_ = uVar1 << 8 | uVar1 >> 8;
        __len = 0x10;
      }
      else {
LAB_000238ec:
        __len = 0;
      }
      while (iVar8 = bind(iVar4,asStack_2b8,__len), iVar8 < 0) {
        local_30c = local_30c + -1;
        if (local_30c < 1) {
          piVar5 = __errno_location();
          iVar4 = *piVar5;
          *(int *)(iVar12 + 0x8564) = iVar4;
          uVar6 = FUN_00027028(param_1,iVar4);
          pcVar10 = "bind failed with errno %d: %s";
          goto LAB_00023a38;
        }
        FUN_000305d4(iVar12,"Bind to local port %hu failed, trying next\n",uVar14);
        uVar14 = uVar14 + 1 & 0xffff;
        if (asStack_2b8[0].sa_family == 2) {
          asStack_2b8[0].sa_data._0_2_ = (ushort)(uVar14 << 8) | (ushort)(uVar14 >> 8);
        }
      }
      local_2ec = 0x80;
      memset(asStack_238,0,0x80);
      iVar4 = getsockname(iVar4,asStack_238,&local_2ec);
      if (-1 < iVar4) {
        FUN_000305d4(iVar12,"Local port: %hu\n",uVar14);
        *(undefined1 *)((int)param_1 + 0x1ef) = 1;
        goto LAB_0002397c;
      }
      piVar5 = __errno_location();
      iVar4 = *piVar5;
      *(int *)(iVar12 + 0x8564) = iVar4;
      uVar6 = FUN_00027028(param_1,iVar4);
      pcVar10 = "getsockname() failed with errno %d: %s";
LAB_00023a38:
      FUN_00030648(iVar12,pcVar10,iVar4,uVar6);
LAB_00023a40:
      iVar4 = 0x2d;
    }
    else {
      iVar8 = strncmp("if!",pcVar10,3);
      if (iVar8 != 0) {
        iVar8 = strncmp("host!",pcVar10,5);
        if (iVar8 != 0) goto LAB_00023a48;
        pcVar10 = pcVar10 + 5;
        iVar8 = extraout_r3;
LAB_0002381c:
        if (local_1b8[0] == 2) {
          iVar8 = 1;
        }
        iVar9 = param_1[0x83];
        if (local_1b8[0] == 2) {
          param_1[0x83] = iVar8;
        }
        FUN_00029bf0(param_1,pcVar10,0,&local_2f0);
        param_1[0x83] = iVar9;
        if (local_2f0 != (int *)0x0) {
          FUN_00029980(*local_2f0,&local_128,0x100);
          FUN_000305d4(iVar12,"Name \'%s\' family %i resolved to \'%s\' family %i\n",pcVar10,
                       local_1b8[0],&local_128,*(undefined4 *)(*local_2f0 + 4));
          FUN_00029f70(iVar12,local_2f0);
LAB_00023898:
          if ((local_1b8[0] == 2) &&
             (iVar8 = inet_pton(2,(char *)&local_128,asStack_2b8[0].sa_data + 2), 0 < iVar8))
          goto LAB_000238c4;
          goto LAB_000238ec;
        }
LAB_00023ba4:
        pcVar11 = "Couldn\'t bind to \'%s\'";
LAB_00023bac:
        FUN_00030648(iVar12,pcVar11,pcVar10);
        goto LAB_00023a40;
      }
      pcVar10 = pcVar10 + 3;
      bVar2 = true;
LAB_00023a48:
      iVar9 = FUN_00035f40(local_1b8[0],param_1[0x22],pcVar10,&local_128,0x100);
      if (iVar9 != 1) {
        iVar8 = extraout_r3_00;
        if (iVar9 == 0) {
          if (!bVar2) goto LAB_0002381c;
          pcVar11 = "Couldn\'t bind to interface \'%s\'";
          goto LAB_00023bac;
        }
        if (iVar9 != 2) {
          if (!bVar2) goto LAB_0002381c;
          goto LAB_00023ba4;
        }
        FUN_000305d4(iVar12,"Local Interface %s is ip %s using address family %i\n",pcVar10,
                     &local_128,local_1b8[0]);
        sVar7 = strlen(pcVar10);
        iVar8 = setsockopt(iVar4,1,0x19,pcVar10,sVar7 + 1);
        if (iVar8 != 0) {
          piVar5 = __errno_location();
          iVar8 = *piVar5;
          uVar6 = FUN_00027028(param_1,iVar8);
          FUN_000305d4(iVar12,"SO_BINDTODEVICE %s failed with errno %d: %s; will do regular bind\n",
                       pcVar10,iVar8,uVar6);
        }
        goto LAB_00023898;
      }
      iVar4 = 1;
    }
    FUN_00023428(param_1,local_2f8);
    if (iVar4 == 1) {
      iVar4 = 0;
    }
  }
  return iVar4;
}



int FUN_00023c28(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1 + param_3 * 4;
  iVar5 = *(int *)(iVar3 + 0x15c);
  *(undefined4 *)(iVar3 + 0x15c) = 0xffffffff;
  if (param_2 == 0) {
    iVar1 = *(int *)(iVar3 + 0x50);
    if ((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x50), iVar1 == 0)) {
      iVar1 = 0;
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 4);
      iVar1 = *(int *)(iVar1 + 0x1c);
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      if ((*(int *)(iVar1 + 4) == iVar2) &&
         (iVar4 = FUN_00023534(param_1,iVar1,param_1 + (param_3 + 0x56) * 4 + 4), iVar4 != 7)) {
        *(int *)(iVar3 + 0x50) = iVar1;
        goto LAB_00023cc0;
      }
    }
  }
  iVar4 = 7;
LAB_00023cc0:
  if (iVar5 != -1) {
    FUN_00023428(param_1,iVar5);
  }
  return iVar4;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

int FUN_00023cdc(int *param_1,int param_2,undefined1 *param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [52];
  
  iVar7 = *param_1;
  iVar1 = 0;
  *param_3 = 0;
  bVar10 = *(char *)((int)param_1 + param_2 + 0x1e1) != '\0';
  if (bVar10) {
    param_4 = 1;
  }
  local_64 = 0;
  if (bVar10) {
    *param_3 = param_4;
  }
  else {
    FUN_000296f8(&local_70);
    local_60 = local_70;
    uStack_5c = uStack_6c;
    iVar2 = FUN_000230f4(iVar7,&local_60,1);
    if (iVar2 < 0) {
      FUN_00030648(iVar7,"Connection time-out");
      iVar1 = 0x1c;
    }
    else {
      uVar8 = 0;
      iVar1 = 0;
      piVar9 = param_1;
      do {
        if (piVar9[0x57] != -1) {
          uVar3 = FUN_000271a8(0xffffffff,0xffffffff,piVar9[0x57],0);
          if (uVar3 == 0) {
            iVar4 = FUN_00029758(local_60,uStack_5c,param_1[0x7d],param_1[0x7e]);
            if (param_1[0x80] <= iVar4) {
              FUN_000305d4(iVar7,"After %ldms connect time, move on!\n");
              local_64 = 0x6e;
            }
            if (((uVar8 == 0) && (param_1[0x15] == 0)) &&
               (iVar4 = FUN_00029758(local_60,uStack_5c,param_1[0x7d],param_1[0x7e]), 199 < iVar4))
            {
              FUN_00023c28(param_1,param_2,1);
            }
          }
          else if (uVar3 == 2) {
            iVar4 = FUN_00023000(piVar9[0x57],&local_64);
            if (iVar4 != 0) {
              param_1[param_2 + 0x55] = param_1[uVar8 + 0x57];
              param_1[0x13] = param_1[uVar8 + 0x14];
              param_1[uVar8 + 0x57] = -1;
              if (param_1[(uVar8 ^ 1) + 0x57] != -1) {
                FUN_00023428(param_1);
                param_1[(uVar8 ^ 1) + 0x57] = -1;
              }
              iVar1 = FUN_000337b4(param_1,param_2);
              if (iVar1 != 0) {
                return iVar1;
              }
              *(undefined1 *)((int)param_1 + param_2 + 0x1e1) = 1;
              *param_3 = 1;
              if (param_2 == 0) {
                FUN_0002a5b4(iVar7,4);
              }
              FUN_00023220(param_1,param_1[param_2 + 0x55]);
              FUN_000337bc(param_1);
              goto LAB_00023f94;
            }
            FUN_000305d4(iVar7,"Connection failed\n");
          }
          else if ((uVar3 & 4) != 0) {
            FUN_00023000(piVar9[0x57],&local_64);
          }
          iVar4 = local_64;
          if (local_64 != 0) {
            *(int *)(iVar7 + 0x8564) = local_64;
            piVar5 = __errno_location();
            *piVar5 = iVar4;
            if (piVar9[0x14] != 0) {
              FUN_00029980(piVar9[0x14],auStack_58,0x2e);
              iVar1 = param_1[0x2c];
              uVar6 = FUN_00027028(param_1,local_64);
              FUN_000305d4(iVar7,"connect to %s port %ld failed: %s\n",auStack_58,iVar1,uVar6);
              iVar1 = iVar2 >> 1;
              if (*(int *)(piVar9[0x14] + 0x1c) == 0) {
                iVar1 = iVar2;
              }
              param_1[0x80] = iVar1;
              iVar1 = FUN_00023c28(param_1,param_2,uVar8);
            }
          }
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar8 != 2);
      if ((iVar1 == 0) ||
         ((param_1[0x15] == 0 && (iVar2 = FUN_00023c28(param_1,param_2,1), iVar2 == 0)))) {
LAB_00023f94:
        iVar1 = 0;
      }
      else {
        if (*(char *)((int)param_1 + 0x1da) == '\0') {
          iVar2 = param_1[0x26];
        }
        else {
          iVar2 = param_1[0x2a];
        }
        iVar4 = param_1[0x2c];
        uVar6 = FUN_00027028(param_1,local_64);
        FUN_00030648(iVar7,"Failed to connect to %s port %ld: %s",iVar2,iVar4,uVar6);
      }
    }
  }
  return iVar1;
}



int FUN_00024024(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  
  iVar3 = *param_1;
  piStack_20 = param_1;
  piStack_1c = param_2;
  uStack_18 = param_3;
  FUN_000296f8(&piStack_20);
  iVar1 = FUN_000230f4(iVar3,&piStack_20,1);
  if (iVar1 < 0) {
    FUN_00030648(iVar3,"Connection time-out");
    iVar2 = 0x1c;
  }
  else {
    iVar2 = FUN_00029964(*param_2);
    param_1[0x14] = *param_2;
    param_1[0x15] = 0;
    param_1[0x57] = -1;
    param_1[0x58] = -1;
    param_1[0x7f] = iVar2;
    FUN_00025210(*param_1,200);
    iVar2 = 7;
    if (*(int *)(param_1[0x14] + 0x1c) != 0) {
      iVar1 = iVar1 >> 1;
    }
    param_1[0x80] = iVar1;
    while ((param_1[0x14] != 0 &&
           (iVar2 = FUN_00023534(param_1,param_1[0x14],param_1 + 0x57), iVar2 != 0))) {
      param_1[0x14] = *(int *)(param_1[0x14] + 0x1c);
    }
    if (param_1[0x57] != -1) {
      iVar2 = 0;
      *(int *)(iVar3 + 0x8690) = *(int *)(iVar3 + 0x8690) + 1;
    }
  }
  return iVar2;
}



undefined4
FUN_00024148(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  
  FUN_0003f1ec(*param_1,param_3,param_3,param_4,param_4);
  return extraout_r1;
}



void FUN_00024164(undefined4 param_1,undefined4 param_2)

{
  (*DAT_000515c8)(param_2);
  return;
}



void FUN_00024180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_0003a994(param_1,&local_14,4,param_4,param_1);
  if (iVar1 != 0) {
    FUN_0003a908(param_1,&local_14,4);
  }
  return;
}



undefined4 FUN_000241bc(undefined4 *param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *__dest;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  __dest = (undefined4 *)(*DAT_000515c4)(8);
  if (__dest != (undefined4 *)0x0) {
    memcpy(__dest,param_2,8);
    iVar2 = FUN_0003a510(param_1);
    if (iVar2 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)0x0;
      while ((puVar3 = puVar1, puVar3 != (undefined4 *)0x0 &&
             (iVar2 = FUN_00029758(*(undefined4 *)*puVar3,((undefined4 *)*puVar3)[1],*__dest,
                                   __dest[1],param_4), iVar2 < 1))) {
        puVar1 = (undefined4 *)puVar3[2];
        puVar4 = puVar3;
      }
    }
    iVar2 = FUN_0003a388(param_1,puVar4,__dest);
    if (iVar2 != 0) {
      return 0;
    }
    (*DAT_000515c8)(__dest);
  }
  return 3;
}



void FUN_00024288(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  if (param_2 != 0x10) {
    return;
  }
  *(int *)(*(int *)(param_1 + 0x40) + 0x10) = *(int *)(*(int *)(param_1 + 0x40) + 0x10) + -1;
  return;
}



void FUN_000242a4(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_20;
  int *local_1c;
  
  local_20 = param_1;
  local_1c = param_2;
  FUN_000296f8(&local_20);
  piVar2 = local_1c;
  piVar1 = local_20;
  iVar3 = FUN_00027500(0,0,*param_1);
  iVar4 = *(int *)(iVar3 + 0xc);
  *param_1 = iVar3;
  if ((iVar4 < (int)piVar1) || ((iVar4 <= (int)piVar1 && (*(int *)(iVar3 + 0x10) <= (int)piVar2))))
  {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00029758(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),local_20,
                         local_1c);
    if (iVar3 != 0) {
      *param_2 = iVar3;
      return;
    }
    iVar3 = 1;
  }
  *param_2 = iVar3;
  return;
}



undefined4 FUN_0002432c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar4 = *(undefined4 **)(param_4 + 0x8600);
  puVar3 = (undefined4 *)*puVar4;
  puVar6 = param_3;
  while (puVar3 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)puVar3[2];
    iVar1 = FUN_00029758(*(undefined4 *)*puVar3,((undefined4 *)*puVar3)[1],param_1,param_2,param_1,
                         param_2,puVar6);
    if (0 < iVar1) break;
    FUN_0003a420(puVar4,puVar3,0);
    puVar3 = puVar5;
  }
  puVar3 = (undefined4 *)*puVar4;
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_4 + 0x85e0) = 0;
    *(undefined4 *)(param_4 + 0x85e4) = 0;
  }
  else {
    memcpy((undefined4 *)(param_4 + 0x85e0),(void *)*puVar3,8);
    FUN_0003a420(puVar4,puVar3,0);
    uVar2 = FUN_0002762c(*(undefined4 *)(param_4 + 0x85e0),*(undefined4 *)(param_4 + 0x85e4),
                         *param_3,param_4 + 0x85e8);
    *param_3 = uVar2;
  }
  return 0;
}



uint FUN_000243f0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x8611) != '\0') {
switchD_0002442c_caseD_7:
    return 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 - 3U < 0xd) {
    *piVar1 = param_1;
  }
  switch(iVar4) {
  case 4:
  case 5:
    iVar4 = piVar1[0x57];
    if (iVar4 != -1) {
      *param_2 = iVar4;
    }
    bVar6 = iVar4 == -1;
    if (bVar6) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x10000;
    }
    uVar3 = (uint)!bVar6;
    if (piVar1[0x58] != -1) {
      param_2[uVar3] = piVar1[0x58];
      uVar2 = uVar2 | 1 << uVar3 + 0x10;
    }
    if (piVar1[0x120] == 1) {
      *param_2 = piVar1[0x55];
      uVar2 = 1;
    }
    break;
  case 6:
    pcVar5 = *(code **)(piVar1[0x81] + 0x20);
    if (pcVar5 == (code *)0x0) {
      return 0;
    }
    uVar2 = (*pcVar5)(piVar1,param_2,5,pcVar5,param_4);
    return uVar2;
  default:
    goto switchD_0002442c_caseD_7;
  case 8:
  case 9:
    if ((piVar1 != (int *)0x0) && (pcVar5 = *(code **)(piVar1[0x81] + 0x24), pcVar5 != (code *)0x0))
    {
      uVar2 = (*pcVar5)(piVar1,param_2,5,pcVar5,param_4);
      return uVar2;
    }
    return 0;
  case 10:
    uVar2 = 0;
    if (*(code **)(piVar1[0x81] + 0x28) != (code *)0x0) {
      uVar2 = (**(code **)(piVar1[0x81] + 0x28))(piVar1,param_2,5);
      return uVar2;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
    iVar4 = *piVar1;
    if (*(code **)(piVar1[0x81] + 0x2c) != (code *)0x0) {
      uVar2 = (**(code **)(piVar1[0x81] + 0x2c))();
      return uVar2;
    }
    bVar6 = (*(uint *)(iVar4 + 0xf4) & 0x15) == 1;
    if (bVar6) {
      *param_2 = piVar1[0x84];
    }
    uVar2 = (uint)bVar6;
    uVar3 = *(uint *)(iVar4 + 0xf4);
    if ((uVar3 & 0x2a) == 2) {
      uVar3 = uVar3 & 1;
      if ((piVar1[0x84] == piVar1[0x85]) && (uVar3 != 0)) {
        uVar3 = 0;
      }
      else {
        param_2[uVar3] = piVar1[0x85];
      }
      return uVar2 | 1 << uVar3 + 0x10;
    }
    return uVar2;
  }
  return uVar2;
}



// WARNING: Type propagation algorithm not settling

void FUN_000244fc(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int *__src;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int local_44;
  int local_40 [7];
  
  __src = local_40 + 1;
  local_40[1] = 0xffffffff;
  local_40[2] = 0xffffffff;
  local_40[3] = 0xffffffff;
  local_40[4] = 0xffffffff;
  local_40[5] = 0xffffffff;
  uVar3 = FUN_000243f0(param_2,__src);
  uVar8 = 0;
  do {
    uVar9 = 1 << (uVar8 & 0xff);
    uVar1 = 1 << (uVar8 + 0x10 & 0xff);
    if (((uVar1 | uVar9) & uVar3) == 0) break;
    local_44 = __src[uVar8];
    piVar4 = (int *)FUN_0003a994(*(undefined4 *)(param_1 + 0x2c),&local_44,4);
    uVar9 = (uint)((uVar9 & uVar3) != 0);
    if ((uVar1 & uVar3) != 0) {
      uVar9 = uVar9 | 2;
    }
    if (piVar4 == (int *)0x0) {
      uVar12 = *(undefined4 *)(param_1 + 0x2c);
      local_40[0] = local_44;
      piVar4 = (int *)FUN_0003a994(uVar12,local_40,4);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)(*DAT_000515d4)(1,0x14);
        if (piVar4 == (int *)0x0) {
          return;
        }
        *piVar4 = param_2;
        piVar4[3] = local_40[0];
        iVar11 = FUN_0003a7cc(uVar12,local_40,4,piVar4);
        if (iVar11 == 0) {
          (*DAT_000515c8)(piVar4);
          return;
        }
      }
LAB_0002461c:
      if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
        (**(code **)(param_1 + 0x1c))
                  (param_2,local_44,uVar9,*(undefined4 *)(param_1 + 0x20),piVar4[4]);
      }
      piVar4[2] = uVar9;
    }
    else if (piVar4[2] != uVar9) goto LAB_0002461c;
    uVar8 = uVar8 + 1;
  } while (uVar8 != 5);
  iVar10 = 0;
  iVar11 = param_2;
  do {
    if (*(int *)(param_2 + 0x34) <= iVar10) {
      memcpy((void *)(param_2 + 0x20),__src,uVar8 << 2);
      *(uint *)(param_2 + 0x34) = uVar8;
      return;
    }
    local_44 = *(int *)(iVar11 + 0x20);
    for (iVar5 = 0; iVar5 < (int)uVar8; iVar5 = iVar5 + 1) {
      if (local_44 == __src[iVar5]) {
        local_44 = -1;
        break;
      }
    }
    if ((local_44 != -1) &&
       (piVar4 = (int *)FUN_0003a994(*(undefined4 *)(param_1 + 0x2c),&local_44,4),
       piVar4 != (int *)0x0)) {
      iVar5 = *(int *)(param_2 + 8);
      if (iVar5 == 0) {
LAB_000246c4:
        if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
          (**(code **)(param_1 + 0x1c))
                    (param_2,local_44,4,*(undefined4 *)(param_1 + 0x20),piVar4[4]);
        }
        FUN_00024180(*(undefined4 *)(param_1 + 0x2c),local_44);
      }
      else {
        puVar6 = *(undefined4 **)(iVar5 + 0x24c);
        if ((puVar6 == (undefined4 *)0x0) || ((uint)puVar6[3] < 2)) {
          bVar2 = true;
        }
        else {
          if (*piVar4 == param_2) {
            piVar7 = (int *)*puVar6;
            if ((piVar7 == (int *)0x0) || (*piVar7 != param_2)) {
              *piVar4 = *piVar7;
            }
            else {
              *piVar4 = *(int *)piVar7[2];
            }
          }
          bVar2 = false;
        }
        puVar6 = *(undefined4 **)(iVar5 + 0x248);
        if ((puVar6 == (undefined4 *)0x0) || ((uint)puVar6[3] < 2)) {
          if (bVar2) goto LAB_000246c4;
        }
        else if (*piVar4 == param_2) {
          piVar7 = (int *)*puVar6;
          if ((piVar7 == (int *)0x0) || (*piVar7 != param_2)) {
            *piVar4 = *piVar7;
          }
          else {
            *piVar4 = *(int *)piVar7[2];
          }
        }
      }
    }
    iVar10 = iVar10 + 1;
    iVar11 = iVar11 + 4;
  } while( true );
}



undefined4 FUN_000247e4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int local_c;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      local_c = -1;
    }
    else {
      local_c = param_2;
      FUN_000242a4(param_1 + 0x28,&local_c,param_3,*(int *)(param_1 + 0x28),param_1);
    }
    if (local_c < 0) {
      if ((*(int *)(param_1 + 100) != 0) || (*(int *)(param_1 + 0x68) != 0)) {
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        pcVar2 = *(code **)(param_1 + 0x5c);
        iVar3 = -1;
LAB_000248a0:
        uVar1 = (*pcVar2)(param_1,iVar3,*(undefined4 *)(param_1 + 0x60));
        return uVar1;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x28);
      if ((*(int *)(iVar3 + 0xc) != *(int *)(param_1 + 100)) ||
         (*(int *)(iVar3 + 0x10) != *(int *)(param_1 + 0x68))) {
        uVar1 = *(undefined4 *)(iVar3 + 0x10);
        pcVar2 = *(code **)(param_1 + 0x5c);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(param_1 + 0x68) = uVar1;
        iVar3 = local_c;
        goto LAB_000248a0;
      }
    }
  }
  return 0;
}



undefined4 * FUN_000248b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*DAT_000515d4)(1,0x6c);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = 0xbab1e;
  iVar2 = FUN_0002a014();
  puVar1[9] = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_0003a73c(param_1,FUN_00024148,&LAB_00024130,&LAB_00024110);
    puVar1[0xb] = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_00027b38(param_2);
      puVar1[0xd] = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_0003a350(&DAT_00024160);
        puVar1[5] = iVar2;
        if (iVar2 != 0) {
          iVar2 = FUN_0003a350(&DAT_00024160);
          puVar1[6] = iVar2;
          if (iVar2 != 0) {
            iVar2 = FUN_000228d4();
            puVar1[0xe] = iVar2;
            if (iVar2 != 0) {
              uVar3 = puVar1[0xd];
              *(undefined4 **)(iVar2 + 0x40) = puVar1;
              *(undefined4 *)(iVar2 + 0x518) = uVar3;
              puVar1[0x12] = 5;
              puVar1[0xf] = 0xffffffff;
              return puVar1;
            }
          }
        }
      }
    }
  }
  FUN_0003aaf8(puVar1[0xb]);
  puVar1[0xb] = 0;
  FUN_0003aaf8(puVar1[9]);
  puVar1[9] = 0;
  FUN_00027bb4(puVar1[0xd]);
  puVar1[0xd] = 0;
  FUN_000339ec(puVar1[0xe]);
  puVar1[0xe] = 0;
  FUN_0003a4c8(puVar1[5],0);
  FUN_0003a4c8(puVar1[6],0);
  (*DAT_000515c8)(puVar1);
  return (undefined4 *)0x0;
}



byte FUN_00024a14(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_1 + 0x30);
  }
  return bVar1 & 1;
}



void FUN_00024a24(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



undefined4 FUN_00024b38(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int local_40;
  int local_3c [6];
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if (param_1[10] == 0) {
    local_40 = -1;
  }
  else {
    FUN_000242a4(param_1 + 10,&local_40);
  }
  if ((-1 < local_40) && (local_40 <= param_4)) {
    param_4 = local_40;
  }
  iVar11 = 0;
  for (piVar10 = (int *)param_1[1]; piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
    iVar2 = FUN_000243f0(piVar10,local_3c);
    uVar8 = 0;
    do {
      if ((iVar2 >> (uVar8 & 0xff) & 1U) == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = local_3c[uVar8];
        iVar11 = iVar11 + 1;
      }
      if ((iVar2 >> (uVar8 + 0x10 & 0xff) & 1U) != 0) {
        iVar6 = local_3c[uVar8];
        iVar11 = iVar11 + 1;
      }
    } while ((iVar6 != -1) && (uVar8 = uVar8 + 1, uVar8 != 5));
  }
  iVar2 = 0;
  if ((iVar11 + param_3 != 0 || param_3 != 0) &&
     (iVar2 = (*DAT_000515c4)((iVar11 + param_3) * 8), iVar2 == 0)) {
    return 3;
  }
  if (iVar11 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    for (piVar10 = (int *)param_1[1]; piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
      iVar3 = FUN_000243f0(piVar10,local_3c);
      iVar9 = 0;
      uVar8 = 0;
      do {
        bVar12 = (iVar3 >> (uVar8 & 0xff) & 1U) != 0;
        if (bVar12) {
          *(undefined4 *)(iVar2 + iVar6 * 8) = *(undefined4 *)(iVar9 + (int)local_3c);
          *(undefined2 *)(iVar2 + iVar6 * 8 + 4) = 1;
        }
        if (bVar12) {
          iVar6 = iVar6 + 1;
          iVar4 = *(int *)(iVar9 + (int)local_3c);
        }
        else {
          iVar4 = -1;
        }
        if ((iVar3 >> (uVar8 + 0x10 & 0xff) & 1U) != 0) {
          *(undefined4 *)(iVar2 + iVar6 * 8) = *(undefined4 *)(iVar9 + (int)local_3c);
          *(undefined2 *)(iVar2 + iVar6 * 8 + 4) = 4;
          iVar4 = *(int *)(iVar9 + (int)local_3c);
          iVar6 = iVar6 + 1;
        }
        if (iVar4 == -1) break;
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 4;
      } while (uVar8 != 5);
    }
  }
  iVar3 = 0;
  iVar9 = 0;
  while (iVar9 != param_3) {
    iVar9 = iVar9 + 1;
    uVar1 = *(ushort *)((undefined4 *)(param_2 + iVar3) + 1);
    puVar5 = (undefined4 *)(iVar2 + iVar6 * 8 + iVar3);
    *puVar5 = *(undefined4 *)(param_2 + iVar3);
    *(undefined2 *)(puVar5 + 1) = 0;
    if ((uVar1 & 1) != 0) {
      *(undefined2 *)(puVar5 + 1) = 1;
    }
    if ((uVar1 & 2) != 0) {
      *(ushort *)(puVar5 + 1) = *(ushort *)(puVar5 + 1) | 2;
    }
    iVar3 = iVar3 + 8;
    if ((uVar1 & 4) != 0) {
      *(ushort *)(puVar5 + 1) = *(ushort *)(puVar5 + 1) | 4;
    }
  }
  iVar6 = iVar6 + param_3;
  if (iVar6 != 0) {
    FUN_000305d4(0,"Curl_poll(%d ds, %d ms)\n",iVar6,param_4);
    iVar6 = FUN_000273a8(iVar2,iVar6,param_4);
    if (iVar6 != 0) {
      for (iVar3 = 0; iVar3 != param_3; iVar3 = iVar3 + 1) {
        uVar1 = *(ushort *)(iVar2 + iVar11 * 8 + iVar3 * 8 + 6);
        uVar7 = uVar1 & 1;
        if ((uVar1 & 4) != 0) {
          uVar7 = uVar7 | 4;
        }
        if ((uVar1 & 2) != 0) {
          uVar7 = uVar7 | 2;
        }
        *(ushort *)(param_2 + iVar3 * 8 + 6) = uVar7;
      }
      goto LAB_00024dbc;
    }
  }
  iVar6 = 0;
LAB_00024dbc:
  if (iVar2 != 0) {
    (*DAT_000515c8)(iVar2);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar6;
  }
  return 0;
}



undefined4 FUN_00024e10(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    *param_1 = 0;
    while( true ) {
      piVar1 = (int *)FUN_00027da0(param_1[0xd]);
      iVar2 = param_1[0xe];
      if (piVar1 == (int *)0x0) break;
      *piVar1 = iVar2;
      FUN_00033548(piVar1,0);
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x38) = param_1[9];
      FUN_0002a034(iVar2);
      FUN_000339ec(param_1[0xe]);
    }
    FUN_0003aaf8(param_1[0xb]);
    FUN_00027bb4(param_1[0xd]);
    FUN_0003a4c8(param_1[5],0);
    FUN_0003a4c8(param_1[6],0);
    piVar1 = (int *)param_1[1];
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      if (piVar1[0xf] == 2) {
        FUN_0002a034(piVar1,piVar1[0xe]);
        piVar1[0xe] = 0;
        piVar1[0xf] = 0;
      }
      piVar1[0x146] = 0;
      piVar1[0x10] = 0;
      piVar1 = (int *)iVar2;
    }
    FUN_0003aaf8(param_1[9]);
    FUN_00028064(0,param_1 + 0x15);
    FUN_00028214(0,param_1 + 0x16);
    (*DAT_000515c8)(param_1);
    return 0;
  }
  return 1;
}



undefined4 FUN_00024f2c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  *param_2 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0xbab1e) && (iVar1 = FUN_0003a510(param_1[5]), iVar1 != 0)) {
      puVar3 = *(undefined4 **)param_1[5];
      uVar4 = *puVar3;
      FUN_0003a420((undefined4 *)param_1[5],puVar3,0);
      FUN_0003a510(param_1[5]);
      uVar2 = FUN_00027aa0();
      *param_2 = uVar2;
      return uVar4;
    }
  }
  return 0;
}



void FUN_00024f9c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_14 [2];
  
  iVar2 = *(int *)(*param_1 + 0x40);
  if ((iVar2 != 0) &&
     (local_14[0] = param_2, iVar1 = FUN_0003a994(*(undefined4 *)(iVar2 + 0x2c),local_14,4),
     iVar1 != 0)) {
    if (*(code **)(iVar2 + 0x1c) != (code *)0x0) {
      (**(code **)(iVar2 + 0x1c))
                (*param_1,local_14[0],4,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar1 + 0x10))
      ;
    }
    FUN_00024180(*(undefined4 *)(iVar2 + 0x2c),local_14[0]);
  }
  return;
}



undefined4 FUN_00025010(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_8;
  undefined4 uStack_4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if (param_2 == 0x2715) {
    param_1[0x18] = param_3;
  }
  else if (param_2 < 0x2715) {
    if (param_2 == 7) {
      param_1[0x10] = param_3;
    }
    else if (param_2 < 8) {
      if (param_2 == 3) {
        *(bool *)(param_1 + 0xc) = param_3 != 0;
      }
      else {
        if (param_2 != 6) {
          return 6;
        }
        param_1[0xf] = param_3;
      }
    }
    else if (param_2 == 0xd) {
      param_1[0x11] = param_3;
    }
    else if (param_2 == 0x2712) {
      param_1[8] = param_3;
    }
    else {
      if (param_2 != 8) {
        return 6;
      }
      param_1[0x12] = param_3;
    }
  }
  else if (param_2 == 0x4e21) {
    param_1[7] = param_3;
  }
  else {
    if (param_2 < 0x4e21) {
      local_8 = param_3;
      uStack_4 = param_4;
      if (param_2 == 0x271b) {
        uVar1 = FUN_00028064(param_3,param_1 + 0x15,&local_8,0x271b,param_1,&local_8);
        return uVar1;
      }
      if (param_2 != 0x271c) {
        return 6;
      }
      uVar1 = FUN_00028214(param_3,param_1 + 0x16);
      return uVar1;
    }
    if (param_2 == 0x7539) {
      param_1[0x13] = param_3;
    }
    else if (param_2 == 0x753a) {
      param_1[0x14] = param_3;
    }
    else {
      if (param_2 != 0x4e24) {
        return 6;
      }
      param_1[0x17] = param_3;
    }
  }
  return 0;
}



undefined4 FUN_000251b8(int *param_1,undefined4 *param_2)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    if (param_1[10] != 0) {
      FUN_000242a4(param_1 + 10);
      return 0;
    }
    *param_2 = 0xffffffff;
    return 0;
  }
  return 1;
}



void FUN_00025210(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  
  iVar5 = *(int *)(param_1 + 0x40);
  if (iVar5 != 0) {
    local_28 = param_1;
    iStack_24 = param_2;
    local_20 = param_3;
    local_1c = param_4;
    if (param_2 == 0) {
      if ((*(int *)(param_1 + 0x85e0) != 0) || (*(int *)(param_1 + 0x85e4) != 0)) {
        iVar3 = *(int *)(param_1 + 0x8600);
        iVar5 = FUN_00027808(*(undefined4 *)(iVar5 + 0x28),param_1 + 0x85e8,iVar5 + 0x28);
        if (iVar5 != 0) {
          FUN_000305d4(param_1,"Internal error clearing splay node = %d\n");
        }
        while (*(int *)(iVar3 + 0xc) != 0) {
          FUN_0003a420(iVar3,*(undefined4 *)(iVar3 + 4),0);
        }
        *(undefined4 *)(param_1 + 0x85e0) = 0;
        *(undefined4 *)(param_1 + 0x85e4) = 0;
      }
    }
    else {
      FUN_000296f8(&local_28);
      local_20 = local_28;
      local_1c = iStack_24;
      iVar1 = FUN_0003f110(param_2,1000);
      iVar1 = iVar1 + local_20;
      local_20 = iVar1;
      FUN_0003f1ec(param_2,1000);
      local_1c = extraout_r1 * 1000 + local_1c;
      iVar3 = local_1c;
      if (999999 < local_1c) {
        iVar3 = local_1c + -0xf4000;
      }
      if (999999 < local_1c) {
        local_20 = iVar1 + 1;
        local_1c = iVar3 + -0x240;
      }
      piVar4 = (int *)(param_1 + 0x85e0);
      if ((*(int *)(param_1 + 0x85e0) != 0) || (*(int *)(param_1 + 0x85e4) != 0)) {
        iVar3 = FUN_00029758(local_20,local_1c,*piVar4,*(undefined4 *)(param_1 + 0x85e4));
        if (0 < iVar3) {
          FUN_000241bc(*(undefined4 *)(param_1 + 0x8600),&local_20);
          return;
        }
        FUN_000241bc(*(undefined4 *)(param_1 + 0x8600),piVar4);
        iVar3 = FUN_00027808(*(undefined4 *)(iVar5 + 0x28),param_1 + 0x85e8,iVar5 + 0x28);
        if (iVar3 != 0) {
          FUN_000305d4(param_1,"Internal error removing splay node = %d\n");
        }
      }
      *piVar4 = local_20;
      *(int *)(param_1 + 0x85e4) = local_1c;
      uVar2 = *(undefined4 *)(iVar5 + 0x28);
      *(int *)(param_1 + 0x85fc) = param_1;
      uVar2 = FUN_0002762c(*piVar4,*(undefined4 *)(param_1 + 0x85e4),uVar2,param_1 + 0x85e8);
      *(undefined4 *)(iVar5 + 0x28) = uVar2;
    }
  }
  return;
}



undefined4 FUN_000253d4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (undefined4 *)0x0) || (param_2[0x21c5] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0x10] != 0) {
    return 7;
  }
  iVar1 = FUN_0003a350(FUN_00024164);
  if (iVar1 == 0) {
    return 3;
  }
  param_2[0x2180] = iVar1;
  if (param_2[3] != 0) {
    param_2[3] = 0;
  }
  if ((*(char *)((int)param_2 + 0x2dd) == '\0') || (param_2[0xf] == 1)) {
    if ((param_2[0xe] != 0) && (param_2[0xf] != 0)) goto LAB_00025498;
    param_2[0xe] = param_1[9];
    uVar2 = 2;
  }
  else {
    iVar1 = FUN_00029904();
    if (iVar1 == 0) goto LAB_00025498;
    param_2[0xe] = iVar1;
    uVar2 = 1;
  }
  param_2[0xf] = uVar2;
LAB_00025498:
  param_2[0x146] = param_1[0xd];
  param_2[0x2192] = param_2[0x78];
  param_2[0x2193] = param_2[0x79];
  *param_2 = 0;
  if (param_1[1] == 0) {
    param_2[1] = 0;
    param_1[1] = (int)param_2;
  }
  else {
    puVar3 = (undefined4 *)param_1[2];
    *puVar3 = param_2;
    param_2[1] = puVar3;
  }
  param_1[2] = (int)param_2;
  param_2[0x10] = param_1;
  FUN_00025210(param_2,1);
  param_1[3] = param_1[3] + 1;
  param_1[4] = param_1[4] + 1;
  memset(param_1 + 0x19,0,8);
  FUN_000247e4(param_1);
  return 0;
}



undefined4 FUN_00025554(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (int *)0x0) || (param_2[0x21c5] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0x10] == 0) {
    return 0;
  }
  uVar2 = param_2[3];
  piVar3 = (int *)param_2[2];
  if (piVar3 == (int *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = (int *)*piVar3 == param_2;
  }
  if (uVar2 < 0x10) {
    param_1[4] = param_1[4] + -1;
  }
  if (((piVar3 != (int *)0x0) &&
      (1 < (uint)(*(int *)(piVar3[0x93] + 0xc) + *(int *)(piVar3[0x92] + 0xc)))) && (uVar2 - 8 < 8))
  {
    *(undefined1 *)(piVar3 + 0x76) = 1;
    *piVar3 = (int)param_2;
  }
  FUN_00025210(param_2,0);
  if (param_2[0x2180] != 0) {
    FUN_0003a4c8(param_2[0x2180],0);
    param_2[0x2180] = 0;
  }
  if (param_2[0xf] == 2) {
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  if (param_2[2] != 0) {
    if (bVar4) {
      FUN_00035b80(param_2 + 2,param_2[4],uVar2 < 0x10);
    }
    else {
      FUN_00033714(param_2);
    }
  }
  FUN_00039e80(param_2 + 0x2194);
  param_2[0x146] = 0;
  param_2[3] = 0x10;
  FUN_000244fc(param_1,param_2);
  piVar3 = (int *)param_1[5];
  piVar1 = (int *)*piVar3;
  if ((undefined4 *)param_2[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_2[2] = 0;
    param_2[2] = 0;
  }
  param_2[0x10] = 0;
  do {
    if (piVar1 == (int *)0x0) {
LAB_000256f8:
      piVar3 = (int *)param_2[1];
      if (piVar3 == (int *)0x0) {
        param_1[1] = *param_2;
      }
      else {
        *piVar3 = *param_2;
      }
      if (*param_2 == 0) {
        param_1[2] = (int)piVar3;
      }
      else {
        *(int **)(*param_2 + 4) = piVar3;
      }
      param_1[3] = param_1[3] + -1;
      FUN_000247e4(param_1);
      return 0;
    }
    if (*(int **)(*piVar1 + 4) == param_2) {
      FUN_0003a420(piVar3,piVar1,0);
      goto LAB_000256f8;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}



void FUN_00025754(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  FUN_000296f8(&local_20);
  iVar1 = FUN_0003f110(param_2,1000);
  iVar1 = iVar1 + local_20;
  FUN_0003f1ec(param_2,1000);
  iVar3 = 1000;
  iVar2 = extraout_r1 * 1000 + local_1c;
  if (999999 < iVar2) {
    iVar3 = iVar2 + -0xf4000;
  }
  if (999999 < iVar2) {
    iVar1 = iVar1 + 1;
    iVar2 = iVar3 + -0x240;
  }
  if (((*(int *)(param_1 + 0x85e0) != 0) || (*(int *)(param_1 + 0x85e4) != 0)) &&
     (local_20 = iVar1, local_1c = iVar2,
     iVar1 = FUN_00029758(iVar1,iVar2,*(undefined4 *)(param_1 + 0x85e0),
                          *(undefined4 *)(param_1 + 0x85e4)), 0 < iVar1)) {
    return;
  }
  FUN_00025210(param_1,param_2);
  return;
}



undefined4 FUN_00025854(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x40);
  }
  return uVar1;
}



undefined4 FUN_00025860(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
  }
  return uVar1;
}



undefined4 FUN_0002586c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
  }
  return uVar1;
}



undefined8 FUN_00025878(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar2 = iVar1 >> 0x1f;
  }
  return CONCAT44(iVar2,iVar1);
}



undefined8 FUN_00025890(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50);
    iVar2 = iVar1 >> 0x1f;
  }
  return CONCAT44(iVar2,iVar1);
}



undefined4 FUN_000258a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



undefined4 FUN_000258b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



void FUN_000258b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 0x18);
  while (piVar1 = piVar3, piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[2];
    if (*(int *)(iVar2 + 0xc) == 1) {
      *(undefined4 *)(iVar2 + 0xc) = 2;
      FUN_0003a420(*(undefined4 *)(param_1 + 0x18),piVar1,0);
      FUN_00025754(iVar2,1);
    }
  }
  return;
}



undefined4 FUN_00025910(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int extraout_r2;
  undefined4 uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 local_30;
  undefined4 uStack_2c;
  char local_21;
  char local_20;
  char local_1f;
  char local_1e;
  char local_1d;
  uint local_1c;
  
  uVar10 = 0;
  local_1f = '\0';
  local_1e = '\0';
  local_1d = '\0';
  if ((param_4 == 0) || (*(int *)(param_4 + 0x8714) != -0x3f212453)) {
    return 2;
  }
  local_30 = param_2;
  uStack_2c = param_3;
  if (*(char *)(param_4 + 0x8611) != '\0') {
    FUN_000305d4(param_4,"Pipe broke: handle 0x%p, url = %s\n",param_4,
                 *(undefined4 *)(param_4 + 0x8624));
    if (*(uint *)(param_4 + 0xc) < 0x10) {
      if (*(uint *)(param_4 + 0xc) != 2) {
        *(undefined4 *)(param_4 + 0xc) = 2;
      }
      uVar10 = 0xffffffff;
      *(undefined4 *)(param_4 + 0x10) = 0;
    }
    *(undefined1 *)(param_4 + 0x8611) = 0;
    *(undefined4 *)(param_4 + 8) = 0;
    goto LAB_00026740;
  }
  uVar7 = *(uint *)(param_4 + 0xc);
  if (*(int **)(param_4 + 8) == (int *)0x0) {
    if (uVar7 - 3 < 0xc) {
      FUN_00030648(param_4,"In state %d with no easy_conn, bail out!\n");
      return 4;
    }
  }
  else {
    if (uVar7 - 3 < 0xd) {
      **(int **)(param_4 + 8) = param_4;
    }
    if ((uVar7 - 2 < 0xe) && (iVar3 = FUN_000230f4(param_4,&local_30,uVar7 < 8), iVar3 < 0)) {
      puVar11 = (undefined4 *)(param_4 + 0x498);
      if (*(int *)(param_4 + 0xc) == 3) {
        uVar10 = FUN_00029758(local_30,uStack_2c,*puVar11,*(undefined4 *)(param_4 + 0x49c));
        pcVar4 = "Resolving timed out after %ld milliseconds";
LAB_00025a64:
        FUN_00030648(param_4,pcVar4,uVar10);
      }
      else {
        if (*(int *)(param_4 + 0xc) == 4) {
          uVar10 = FUN_00029758(local_30,uStack_2c,*puVar11,*(undefined4 *)(param_4 + 0x49c));
          pcVar4 = "Connection timed out after %ld milliseconds";
          goto LAB_00025a64;
        }
        if (*(int *)(param_4 + 0x54) == -1 && *(int *)(param_4 + 0x50) == -1) {
          uVar10 = FUN_00029758(local_30,uStack_2c,*puVar11,*(undefined4 *)(param_4 + 0x49c));
          FUN_00030648(param_4,"Operation timed out after %ld milliseconds with %lld bytes received"
                       ,uVar10);
        }
        else {
          uVar10 = FUN_00029758(*(undefined4 *)(param_4 + 0x90),*(undefined4 *)(param_4 + 0x94),
                                *puVar11,*(undefined4 *)(param_4 + 0x49c));
          FUN_00030648(param_4,
                       "Operation timed out after %ld milliseconds with %lld out of %lld bytes received"
                       ,uVar10);
        }
      }
      *(undefined1 *)(*(int *)(param_4 + 8) + 0x1d8) = 1;
      *(undefined4 *)(param_4 + 0x10) = 0x1c;
      FUN_00024288(param_4,0x10);
      uVar10 = 0;
      goto LAB_00026740;
    }
  }
  switch(*(undefined4 *)(param_4 + 0xc)) {
  case 0:
    iVar3 = FUN_00039510(param_4);
    *(int *)(param_4 + 0x10) = iVar3;
    if (iVar3 != 0) break;
    if (*(int *)(param_4 + 0xc) != 2) {
      *(undefined4 *)(param_4 + 0xc) = 2;
    }
    FUN_0002a5b4(param_4,1);
    goto LAB_00026630;
  case 1:
    break;
  case 2:
    FUN_0002a5b4(param_4,2);
    iVar3 = FUN_00033d94(param_4,param_4 + 8,&local_20,&local_1f);
    *(int *)(param_4 + 0x10) = iVar3;
    if (iVar3 == 0x59) {
      iVar3 = *(int *)(param_1 + 0x18);
      if (*(int *)(param_4 + 0xc) != 1) {
        *(undefined4 *)(param_4 + 0xc) = 1;
      }
      iVar3 = FUN_0003a388(iVar3,*(undefined4 *)(iVar3 + 4),param_4);
      bVar12 = false;
      if (iVar3 != 0) {
        *(undefined4 *)(param_4 + 0x10) = 0;
        goto LAB_000260d0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0x1b;
    }
    else if (iVar3 == 0) {
      iVar3 = FUN_00027f24(param_4,*(undefined4 *)(param_4 + 8));
      *(int *)(param_4 + 0x10) = iVar3;
      if (iVar3 != 0) goto LAB_00026110;
      if (local_20 == '\0') {
        if (local_1f != '\0') goto LAB_00025ed0;
        iVar3 = *(int *)(param_4 + 0xc);
        if (*(int *)(*(int *)(param_4 + 8) + 0x480) == 1) goto LAB_00025c64;
        if (iVar3 != 4) {
          uVar10 = 4;
          goto LAB_00025e9c;
        }
        goto LAB_00026630;
      }
      if (*(int *)(param_4 + 0xc) != 3) {
        uVar10 = 3;
        goto LAB_00025ff4;
      }
    }
    break;
  case 3:
    iVar3 = *(int *)(param_4 + 8);
    if (*(int *)(param_4 + 0x48) != 0) {
      FUN_00026f3c(param_4,3,2);
    }
    iVar3 = FUN_00029a3c(iVar3,*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)(iVar3 + 0xb0),&local_1c
                        );
    if (iVar3 != 0) {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      *(undefined4 *)(param_4 + 0x10) = 0;
      FUN_000305d4(param_4,"Hostname was found in DNS cache\n");
    }
    if (local_1c != 0) {
      FUN_000305d4(param_4,"Hostname in DNS cache was stale, zapped\n");
    }
    if (*(int *)(param_4 + 0x48) != 0) {
      FUN_00026f84(param_4,3);
    }
    if (iVar3 == 0) {
      *(undefined4 *)(param_4 + 0x10) = 6;
    }
    FUN_000244fc(param_1,param_4);
    uVar10 = 0;
    if (iVar3 != 0) {
      *(undefined4 *)(param_4 + 0x10) = 0;
      if (local_1f == '\0') {
        if (*(int *)(*(int *)(param_4 + 8) + 0x480) == 1) {
          if (*(int *)(param_4 + 0xc) != 5) {
            uVar10 = 5;
LAB_00025d90:
            *(undefined4 *)(param_4 + 0xc) = uVar10;
          }
        }
        else if (*(int *)(param_4 + 0xc) != 4) {
          uVar10 = 4;
          goto LAB_00025d90;
        }
      }
      else {
        if (*(char *)(param_1 + 0x30) == '\0') {
          uVar10 = 8;
        }
        else {
          uVar10 = 7;
        }
        FUN_00024288(param_4,uVar10);
      }
      uVar10 = 0xffffffff;
    }
    bVar12 = *(int *)(param_4 + 0x10) != 0;
    goto LAB_00026660;
  case 4:
    iVar3 = FUN_00023cdc(*(undefined4 *)(param_4 + 8),0,&local_21);
    *(int *)(param_4 + 0x10) = iVar3;
    if ((local_21 != '\0') && (iVar3 == 0)) {
      uVar10 = FUN_000338dc(*(undefined4 *)(param_4 + 8),&local_1f);
      *(undefined4 *)(param_4 + 0x10) = uVar10;
    }
    if (*(char *)(*(int *)(param_4 + 8) + 0x1ee) == '\0') {
      if (*(int *)(param_4 + 0x10) == 0) {
        if (local_21 != '\0') {
          if (local_1f != '\0') goto LAB_00025ed0;
          iVar3 = *(int *)(param_4 + 0xc);
          if (*(int *)(*(int *)(param_4 + 8) + 0x480) == 1) {
LAB_00025c64:
            if (iVar3 != 5) {
              uVar10 = 5;
              goto LAB_000261ec;
            }
          }
          else if (iVar3 != 6) {
            uVar10 = 6;
LAB_00025e9c:
            bVar12 = false;
            *(undefined4 *)(param_4 + 0xc) = uVar10;
            goto LAB_00026634;
          }
          goto LAB_00026630;
        }
        break;
      }
LAB_00026110:
      bVar12 = true;
      goto LAB_000260d0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0;
    iVar6 = *(int *)(param_4 + 0xc);
LAB_00025e4c:
    if (iVar6 != 2) {
      uVar10 = 2;
LAB_000261ec:
      *(undefined4 *)(param_4 + 0xc) = uVar10;
    }
    goto LAB_00026630;
  case 5:
    iVar3 = FUN_0002ccfc(*(undefined4 *)(param_4 + 8),&local_1f);
    iVar5 = *(int *)(param_4 + 8);
    bVar12 = *(char *)(iVar5 + 0x1ee) != '\0';
    if (bVar12) {
      iVar5 = 0;
    }
    iVar6 = *(int *)(param_4 + 0xc);
    *(int *)(param_4 + 0x10) = iVar3;
    if (bVar12) {
      *(int *)(param_4 + 0x10) = iVar5;
      goto LAB_00025e4c;
    }
    if (((iVar3 != 0) || (*(int *)(iVar5 + 0x480) != 2)) || (iVar6 == 4)) break;
    uVar10 = 4;
LAB_00025ff4:
    bVar12 = false;
    *(undefined4 *)(param_4 + 0xc) = uVar10;
    goto LAB_000260d0;
  case 6:
    iVar3 = FUN_0003385c(*(undefined4 *)(param_4 + 8),&local_1f);
    *(int *)(param_4 + 0x10) = iVar3;
    if (iVar3 != 0) {
      FUN_00039680(param_4);
      uVar10 = *(undefined4 *)(param_4 + 0x10);
      uVar8 = 1;
LAB_0002610c:
      FUN_00035b80(param_4 + 8,uVar10,uVar8);
      goto LAB_00026110;
    }
    if (local_1f != '\0') {
LAB_00025ed0:
      if (*(char *)(param_1 + 0x30) == '\0') {
        uVar10 = 8;
      }
      else {
        uVar10 = 7;
      }
LAB_00026194:
      bVar12 = false;
      FUN_00024288(param_4,uVar10);
      goto LAB_00026634;
    }
    break;
  case 7:
    iVar3 = *(int *)(param_4 + 8);
    if (((*(char *)(iVar3 + 0x245) != '\0') || ((int *)**(int **)(iVar3 + 0x248) == (int *)0x0)) ||
       (*(int *)**(int **)(iVar3 + 0x248) != param_4)) break;
    *(undefined1 *)(iVar3 + 0x245) = 1;
    uVar10 = 8;
LAB_0002623c:
    bVar12 = false;
    *(undefined4 *)(param_4 + 0xc) = uVar10;
    goto LAB_00026634;
  case 8:
    bVar1 = *(byte *)(param_4 + 0x2e1);
    if (bVar1 != 0) {
      bVar12 = false;
      *(undefined1 *)(*(int *)(param_4 + 8) + 0x1d8) = 0;
      *(undefined4 *)(param_4 + 0xc) = 0xf;
      *(undefined4 *)(param_4 + 0x10) = 0;
      goto LAB_00026634;
    }
    iVar5 = param_4 + 8;
    iVar3 = FUN_00035df0(iVar5,&local_1e);
    *(int *)(param_4 + 0x10) = iVar3;
    if (iVar3 == 0) {
      if (local_1e == '\0') {
        if ((*(char *)(param_4 + 0x3b4) != '\0') &&
           ((*(uint *)(param_4 + 0x8650) & 0xfffffffd) == 4)) {
          FUN_00035b80(iVar5,0,0);
          iVar3 = *(int *)(param_4 + 0xc);
          goto LAB_000261f4;
        }
        if (*(int *)(param_4 + 0xc) != 9) {
          uVar10 = 9;
          goto LAB_000262c4;
        }
      }
      else {
        if (*(char *)(*(int *)(param_4 + 8) + 0x1e0) == '\0') {
          if (*(int *)(param_4 + 0xc) != 0xb) {
            uVar10 = 0xb;
            goto LAB_0002623c;
          }
          goto LAB_00026630;
        }
        if (*(int *)(param_4 + 0xc) != 10) {
          uVar10 = 10;
          goto LAB_00025ff4;
        }
      }
      break;
    }
    if ((iVar3 != 0x37) || (*(char *)(*(int *)(param_4 + 8) + 0x1d9) == '\0')) {
      FUN_00039680(param_4);
      if (*(int *)(param_4 + 8) == 0) goto LAB_0002665c;
      goto LAB_00026104;
    }
    local_1c = (uint)bVar1;
    iVar3 = FUN_00039c00();
    if (iVar3 == 0) {
      bVar12 = false;
      bVar2 = false;
      if (local_1c != 0) {
        bVar2 = true;
      }
    }
    else {
      *(int *)(param_4 + 0x10) = iVar3;
      bVar12 = true;
      bVar2 = false;
    }
    FUN_00039680(param_4);
    iVar3 = FUN_00035b80(iVar5,*(undefined4 *)(param_4 + 0x10),0);
    if (!bVar2) {
LAB_0002665c:
      uVar10 = 0;
      bVar12 = true;
      goto LAB_00026660;
    }
    if (iVar3 == 0 || iVar3 == 0x37) {
      iVar3 = FUN_00039688(param_4,local_1c,2);
      if (iVar3 != 0) {
        *(int *)(param_4 + 0x10) = iVar3;
        (*DAT_000515c8)(local_1c);
        goto LAB_000260d0;
      }
      if (*(int *)(param_4 + 0xc) != 2) {
        *(undefined4 *)(param_4 + 0xc) = 2;
      }
      *(undefined4 *)(param_4 + 0x10) = 0;
      goto LAB_00026634;
    }
    uVar10 = 0;
    *(int *)(param_4 + 0x10) = iVar3;
LAB_0002659c:
    (*DAT_000515c8)(local_1c);
    goto LAB_00026660;
  case 9:
    iVar3 = FUN_0003389c(*(undefined4 *)(param_4 + 8),&local_1e);
    *(int *)(param_4 + 0x10) = iVar3;
    if (iVar3 != 0) {
LAB_0002619c:
      FUN_00039680(param_4);
LAB_00026104:
      uVar10 = *(undefined4 *)(param_4 + 0x10);
      uVar8 = 0;
      goto LAB_0002610c;
    }
    if (local_1e != '\0') {
      if (*(char *)(*(int *)(param_4 + 8) + 0x1e0) == '\0') {
        uVar10 = 0xb;
      }
      else {
        uVar10 = 10;
      }
      goto LAB_00026194;
    }
    break;
  case 10:
    iVar3 = FUN_00035e98(*(undefined4 *)(param_4 + 8),&local_1c);
    *(int *)(param_4 + 0x10) = iVar3;
    if (iVar3 != 0) goto LAB_0002619c;
    if (local_1c != 0) {
      if (local_1c == 1) {
        uVar10 = 0xb;
      }
      else {
        uVar10 = 9;
      }
      goto LAB_00026194;
    }
    break;
  case 0xb:
    FUN_00027f74(param_4,*(undefined4 *)(param_4 + 8));
    FUN_000258b8(param_1);
    iVar3 = *(int *)(param_4 + 0xc);
    if ((*(int *)(*(int *)(param_4 + 8) + 0x210) == -1) &&
       (*(int *)(*(int *)(param_4 + 8) + 0x214) == -1)) {
LAB_000261f4:
      if (iVar3 != 0xf) {
        uVar10 = 0xf;
        goto LAB_000261ec;
      }
    }
    else if (iVar3 != 0xc) {
      uVar10 = 0xc;
      goto LAB_000261ec;
    }
    goto LAB_00026630;
  case 0xc:
    iVar3 = *(int *)(param_4 + 8);
    if (((*(char *)(iVar3 + 0x244) == '\0') && ((int *)**(int **)(iVar3 + 0x24c) != (int *)0x0)) &&
       (*(int *)**(int **)(iVar3 + 0x24c) == param_4)) {
      *(undefined1 *)(iVar3 + 0x244) = 1;
      uVar10 = 0xd;
      goto LAB_0002623c;
    }
    break;
  case 0xd:
    uVar7 = *(uint *)(param_4 + 0x1f0);
    iVar3 = *(int *)(param_4 + 500);
    bVar12 = false;
    local_1c = 0;
    if ((int)(uint)(uVar7 == 0) <= iVar3) {
      uVar9 = *(uint *)(param_4 + 0x458);
      iVar5 = *(int *)(param_4 + 0x45c);
      if ((int)(iVar3 - (iVar5 + (uint)(uVar7 < uVar9))) < 0 !=
          (SBORROW4(iVar3,iVar5) != SBORROW4(iVar3 - iVar5,(uint)(uVar7 < uVar9)))) {
        *(undefined4 *)(param_4 + 0xc) = 0xe;
        iVar6 = *(int *)(param_4 + 0x288);
        if (iVar6 == 0) {
          iVar6 = 0x4000;
        }
        uVar10 = FUN_00039440(uVar7,iVar3,uVar9,iVar5,iVar6);
        FUN_00025754(param_4,uVar10);
        goto LAB_000260d0;
      }
    }
    uVar7 = *(uint *)(param_4 + 0x1f8);
    iVar3 = *(int *)(param_4 + 0x1fc);
    if ((int)(uint)(uVar7 == 0) <= iVar3) {
      uVar9 = *(uint *)(param_4 + 0x450);
      iVar5 = *(int *)(param_4 + 0x454);
      if ((int)(iVar3 - (iVar5 + (uint)(uVar7 < uVar9))) < 0 !=
          (SBORROW4(iVar3,iVar5) != SBORROW4(iVar3 - iVar5,(uint)(uVar7 < uVar9)))) {
        *(undefined4 *)(param_4 + 0xc) = 0xe;
        iVar6 = *(int *)(param_4 + 0x288);
        if (iVar6 == 0) {
          iVar6 = 0x4000;
        }
        uVar10 = FUN_00039440(uVar7,iVar3,uVar9,iVar5,iVar6);
        FUN_00025754(param_4,uVar10);
        break;
      }
    }
    iVar5 = FUN_00038548(*(undefined4 *)(param_4 + 8),&local_1d);
    uVar7 = *(uint *)(param_4 + 0xf4);
    bVar12 = (uVar7 & 1) == 0;
    iVar3 = extraout_r2;
    if (bVar12) {
      iVar3 = *(int *)(param_4 + 8);
    }
    *(int *)(param_4 + 0x10) = iVar5;
    if (bVar12) {
      *(undefined1 *)(iVar3 + 0x244) = 0;
    }
    if ((uVar7 & 2) == 0) {
      *(undefined1 *)(*(int *)(param_4 + 8) + 0x245) = 0;
    }
    if ((((local_1d == '\0') && (iVar5 != 0x38)) ||
        (iVar3 = FUN_00039c00(*(undefined4 *)(param_4 + 8),&local_1c), iVar3 != 0)) ||
       (local_1c == 0)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
      *(undefined4 *)(param_4 + 0x10) = 0;
      local_1d = '\x01';
    }
    if (*(int *)(param_4 + 0x10) == 0) {
      if (local_1d == '\0') goto LAB_00026450;
      FUN_00039680(param_4);
      FUN_000336d0(param_4,*(undefined4 *)(*(int *)(param_4 + 8) + 0x24c));
      puVar11 = (undefined4 *)**(undefined4 **)(*(int *)(param_4 + 8) + 0x24c);
      if (puVar11 != (undefined4 *)0x0) {
        FUN_00025754(*puVar11,1);
      }
      FUN_000258b8(param_1);
      uVar7 = *(uint *)(param_4 + 0x100);
      if (uVar7 != 0) {
        if (bVar12) goto LAB_000264c8;
        *(undefined4 *)(param_4 + 0x100) = 0;
        uVar10 = 3;
        local_1c = uVar7;
LAB_000264cc:
        iVar3 = FUN_00035b80(param_4 + 8,0,0);
        *(int *)(param_4 + 0x10) = iVar3;
        if (iVar3 == 0) {
          iVar3 = FUN_00039688(param_4,local_1c,uVar10);
          *(int *)(param_4 + 0x10) = iVar3;
          if (iVar3 == 0) {
            bVar12 = false;
            if (*(int *)(param_4 + 0xc) != 2) {
              *(undefined4 *)(param_4 + 0xc) = 2;
            }
            local_1c = 0;
            goto LAB_00026584;
          }
        }
        goto LAB_00026450;
      }
      if (bVar12) {
LAB_000264c8:
        uVar10 = 2;
        goto LAB_000264cc;
      }
      bVar12 = false;
      if (*(int *)(param_4 + 0xfc) != 0) {
        if (local_1c != 0) {
          (*DAT_000515c8)();
        }
        local_1c = *(uint *)(param_4 + 0xfc);
        *(undefined4 *)(param_4 + 0xfc) = 0;
        iVar3 = FUN_00039688(param_4,local_1c,1);
        bVar12 = iVar3 != 0;
        *(int *)(param_4 + 0x10) = iVar3;
        if (iVar3 == 0) {
          local_1c = 0;
        }
      }
      if (*(int *)(param_4 + 0xc) != 0xf) {
        *(undefined4 *)(param_4 + 0xc) = 0xf;
      }
LAB_00026584:
      uVar10 = 0xffffffff;
    }
    else {
      if ((*(uint *)(*(int *)(*(int *)(param_4 + 8) + 0x204) + 0x40) & 2) == 0) {
        *(undefined1 *)(*(int *)(param_4 + 8) + 0x1d8) = 1;
      }
      FUN_00039680(param_4);
      FUN_00035b80(param_4 + 8,*(undefined4 *)(param_4 + 0x10),0);
LAB_00026450:
      bVar12 = false;
      uVar10 = 0;
    }
    if (local_1c != 0) goto LAB_0002659c;
    goto LAB_00026660;
  case 0xe:
    iVar3 = FUN_0002a790(*(undefined4 *)(param_4 + 8));
    if (iVar3 == 0) {
      uVar10 = FUN_0003603c(param_4,local_30,uStack_2c);
      *(undefined4 *)(param_4 + 0x10) = uVar10;
    }
    else {
      *(undefined4 *)(param_4 + 0x10) = 0x2a;
    }
    uVar7 = *(uint *)(param_4 + 0x1f0);
    iVar3 = *(int *)(param_4 + 500);
    if ((uVar7 == 0 && iVar3 == 0) ||
       (iVar5 = *(int *)(param_4 + 0x45c), bVar12 = *(uint *)(param_4 + 0x458) < uVar7,
       (int)(iVar5 - (iVar3 + (uint)bVar12)) < 0 !=
       (SBORROW4(iVar5,iVar3) != SBORROW4(iVar5 - iVar3,(uint)bVar12)))) {
      uVar7 = *(uint *)(param_4 + 0x1f8);
      iVar3 = *(int *)(param_4 + 0x1fc);
      if (((uVar7 == 0 && iVar3 == 0) ||
          (iVar5 = *(int *)(param_4 + 0x454), bVar12 = *(uint *)(param_4 + 0x450) < uVar7,
          (int)(iVar5 - (iVar3 + (uint)bVar12)) < 0 !=
          (SBORROW4(iVar5,iVar3) != SBORROW4(iVar5 - iVar3,(uint)bVar12)))) &&
         (*(int *)(param_4 + 0xc) != 0xd)) {
        uVar10 = 0xd;
LAB_000262c4:
        *(undefined4 *)(param_4 + 0xc) = uVar10;
      }
    }
    break;
  case 0xf:
    if (*(int *)(param_4 + 8) != 0) {
      FUN_000336d0(param_4,*(undefined4 *)(*(int *)(param_4 + 8) + 0x24c));
      FUN_000258b8(param_1);
      uVar10 = FUN_00035b80(param_4 + 8,*(undefined4 *)(param_4 + 0x10),0);
      if (*(int *)(param_4 + 0x10) == 0) {
        *(undefined4 *)(param_4 + 0x10) = uVar10;
      }
      if (*(int *)(param_4 + 8) != 0) {
        *(undefined4 *)(param_4 + 8) = 0;
      }
    }
    if ((*(char *)(param_4 + 0x3b4) == '\0') || (*(int *)(param_4 + 0x8650) == 6)) {
      FUN_00024288(param_4,0x10);
    }
    else if (*(int *)(param_4 + 0xc) != 0) {
      bVar12 = false;
      *(undefined4 *)(param_4 + 0xc) = 0;
      goto LAB_00026634;
    }
LAB_00026630:
    bVar12 = false;
LAB_00026634:
    uVar10 = 0xffffffff;
    goto LAB_00026660;
  case 0x10:
    bVar12 = false;
    *(undefined4 *)(param_4 + 8) = 0;
    FUN_00025210(param_4,0);
    goto LAB_000260d0;
  case 0x11:
    return 0;
  default:
    return 4;
  }
  bVar12 = false;
LAB_000260d0:
  uVar10 = 0;
LAB_00026660:
  if (*(uint *)(param_4 + 0xc) < 0x10) {
    iVar3 = *(int *)(param_4 + 8);
    if (*(int *)(param_4 + 0x10) == 0) {
      if ((iVar3 != 0) && (iVar3 = FUN_0002a790(iVar3), iVar3 != 0)) {
        uVar7 = *(uint *)(param_4 + 0xc);
        *(undefined4 *)(param_4 + 0x10) = 0x2a;
        *(undefined1 *)(*(int *)(param_4 + 8) + 0x1d8) = 1;
        if (uVar7 < 0xf) {
          uVar10 = 0xf;
        }
        else {
          uVar10 = 0x10;
        }
        FUN_00024288(param_4,uVar10);
        uVar10 = 0xffffffff;
      }
    }
    else {
      *(undefined1 *)(param_4 + 0x8611) = 0;
      if (iVar3 == 0) {
        if (*(uint *)(param_4 + 0xc) == 2) {
          FUN_00039680(param_4);
        }
      }
      else {
        *(undefined1 *)(iVar3 + 0x245) = 0;
        *(undefined1 *)(iVar3 + 0x244) = 0;
        FUN_000336d0(param_4,*(undefined4 *)(iVar3 + 0x248));
        FUN_000336d0(param_4,*(undefined4 *)(*(int *)(param_4 + 8) + 0x24c));
        FUN_000258b8(param_1);
        if (bVar12) {
          FUN_00033548(*(undefined4 *)(param_4 + 8),0);
          *(undefined4 *)(param_4 + 8) = 0;
        }
      }
      FUN_00024288(param_4,0x10);
    }
  }
LAB_00026740:
  if (*(int *)(param_4 + 0xc) == 0x10) {
    *(undefined4 *)(param_4 + 0x14) = 1;
    *(int *)(param_4 + 0x18) = param_4;
    *(undefined4 *)(param_4 + 0x1c) = *(undefined4 *)(param_4 + 0x10);
    iVar3 = FUN_0003a388(*(int *)(param_1 + 0x14),*(undefined4 *)(*(int *)(param_1 + 0x14) + 4),
                         param_4 + 0x14);
    if (iVar3 == 0) {
      uVar10 = 3;
    }
    else {
      uVar10 = 0;
    }
    if (*(int *)(param_4 + 0xc) != 0x11) {
      *(undefined4 *)(param_4 + 0xc) = 0x11;
    }
  }
  return uVar10;
}



int FUN_000267e4(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  FUN_000296f8(&local_30);
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
    for (piVar2 = (int *)param_1[1]; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (((*(char *)(piVar2 + 0xed) != '\0') && (piVar2[0x2197] == 0)) &&
         (iVar1 = FUN_00039e58(piVar2 + 0x2194), iVar1 != 0)) {
        return 3;
      }
      do {
        iVar1 = FUN_00025910(param_1,local_30,uStack_2c,piVar2);
      } while (iVar1 == -1);
      if (*(char *)(piVar2 + 0xed) == '\0') {
LAB_000268a8:
        if (iVar1 == 0) goto LAB_00026898;
      }
      else {
        if ((piVar2[0x2194] == 6) || (iVar1 != 0)) {
          FUN_00039e80(piVar2 + 0x2194);
          goto LAB_000268a8;
        }
LAB_00026898:
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
    }
    do {
      iVar1 = FUN_00027710(local_30,uStack_2c,param_1[10],&local_34);
      param_1[10] = iVar1;
      if (local_34 != 0) {
        FUN_0002432c(local_30,uStack_2c,param_1 + 10,*(undefined4 *)(local_34 + 0x14));
      }
    } while (local_34 != 0);
    *param_2 = param_1[4];
    if (iVar3 < 1) {
      FUN_000247e4(param_1);
    }
  }
  return iVar3;
}



int FUN_0002693c(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_34 [2];
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_34[0] = param_3;
  FUN_000296f8(&local_28);
  if (param_2 == 0) {
    if (local_34[0] == -1) {
      memset((void *)(param_1 + 100),0,8);
      iVar1 = 0;
    }
    else {
      piVar4 = (int *)FUN_0003a994(*(undefined4 *)(param_1 + 0x2c),local_34,4);
      if (piVar4 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar5 = *piVar4;
        if (*(int *)(iVar5 + 0x8714) != -0x3f212453) {
          return 4;
        }
        iVar1 = *(int *)(iVar5 + 8);
        if (iVar1 != 0) {
          if ((((param_4 & 2) == 0) || (*(int **)(iVar1 + 0x248) == (int *)0x0)) ||
             (piVar4 = (int *)**(int **)(iVar1 + 0x248), piVar4 == (int *)0x0)) {
            if ((((param_4 & 1) != 0) && (*(int **)(iVar1 + 0x24c) != (int *)0x0)) &&
               (piVar4 = (int *)**(int **)(iVar1 + 0x24c), piVar4 != (int *)0x0)) {
              iVar5 = *piVar4;
            }
          }
          else {
            iVar5 = *piVar4;
          }
        }
        iVar1 = *(int *)(iVar5 + 8);
        if ((iVar1 != 0) && ((*(uint *)(*(int *)(iVar1 + 0x204) + 0x40) & 8) == 0)) {
          *(uint *)(iVar1 + 0x468) = param_4;
        }
        do {
          iVar1 = FUN_00025910(param_1,local_28,uStack_24,iVar5);
        } while (iVar1 == -1);
        iVar3 = *(int *)(iVar5 + 8);
        if ((iVar3 != 0) && ((*(uint *)(*(int *)(iVar3 + 0x204) + 0x40) & 8) == 0)) {
          *(undefined4 *)(iVar3 + 0x468) = 0;
        }
        if (iVar1 < 1) {
          FUN_000244fc(param_1,iVar5);
        }
        FUN_000296f8(&local_28);
      }
    }
    iVar5 = 0;
    while( true ) {
      uVar2 = FUN_00027710(local_28,uStack_24,*(undefined4 *)(param_1 + 0x28),&local_2c);
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      if (local_2c != 0) {
        iVar5 = *(int *)(local_2c + 0x14);
        FUN_0002432c(local_28,uStack_24,param_1 + 0x28,iVar5);
      }
      if (local_2c == 0) break;
      if (iVar5 != 0) {
        do {
          iVar1 = FUN_00025910(param_1,local_28,uStack_24,iVar5);
        } while (iVar1 == -1);
        if (iVar1 < 1) {
          FUN_000244fc(param_1,iVar5);
        }
      }
    }
    *param_5 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    iVar1 = FUN_000267e4(param_1,param_5);
    if (iVar1 != 1) {
      for (piVar4 = *(int **)(param_1 + 4); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        FUN_000244fc(param_1,piVar4);
      }
    }
  }
  return iVar1;
}



int FUN_00026b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0002693c(param_1,0,param_2,0,param_3,param_2,param_3);
  if (iVar1 < 1) {
    FUN_000247e4(param_1);
  }
  return iVar1;
}



int FUN_00026b9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0002693c(param_1,0,param_2,param_3,param_4,param_2,param_3);
  if (iVar1 < 1) {
    FUN_000247e4(param_1);
  }
  return iVar1;
}



int FUN_00026bdc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0002693c(param_1,1,0xffffffff,0,param_2,param_2,param_3);
  if (iVar1 < 1) {
    FUN_000247e4(param_1);
  }
  return iVar1;
}



void FUN_00026c14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*DAT_000515d4)(1,0x28,param_3,DAT_000515d4,param_4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *puVar1 | 2;
  }
  return;
}



undefined4 FUN_00026f3c(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x48);
  if (puVar1 != (uint *)0x0) {
    if (((*puVar1 & 1 << (param_2 & 0xff)) != 0) && ((code *)puVar1[2] != (code *)0x0)) {
      (*(code *)puVar1[2])();
    }
    return 0;
  }
  return 3;
}



undefined4 FUN_00026f84(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x48);
  if (puVar1 != (uint *)0x0) {
    if (((*puVar1 & 1 << (param_2 & 0xff)) != 0) && ((code *)puVar1[3] != (code *)0x0)) {
      (*(code *)puVar1[3])(param_1,param_2,puVar1[4]);
    }
    return 0;
  }
  return 3;
}



char * FUN_00026fc8(uint param_1)

{
  char *pcVar1;
  
  if (param_1 < 0x5a) {
    pcVar1 = (&PTR_s_No_error_00045234)[param_1];
  }
  else {
    pcVar1 = "Unknown error";
  }
  return pcVar1;
}



char * FUN_00027028(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *__s;
  int iVar4;
  
  piVar1 = __errno_location();
  __s = (char *)(param_1 + 0x29c);
  iVar4 = *piVar1;
  *(undefined1 *)(param_1 + 0x29c) = 0;
  iVar2 = __xpg_strerror_r(param_2,__s,0xff);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x29c) == '\0')) {
    FUN_000365a4(__s,0xff,"Unknown error %d",param_2);
  }
  *(undefined1 *)(param_1 + 0x39b) = 0;
  pcVar3 = strrchr(__s,10);
  if ((pcVar3 != (char *)0x0) && (1 < (int)pcVar3 - (int)__s)) {
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(__s,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (int)pcVar3 - (int)__s)) {
    *pcVar3 = '\0';
  }
  if (iVar4 != *piVar1) {
    *piVar1 = iVar4;
  }
  return __s;
}



undefined4 FUN_000270e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    local_28 = param_1;
    uStack_24 = param_2;
    local_20 = param_3;
    uStack_1c = param_4;
    if (param_1 < 0) {
      piVar1 = __errno_location();
      *piVar1 = 0x16;
      uVar2 = 0xffffffff;
    }
    else {
      FUN_000296f8(&local_28);
      iVar3 = param_1;
      do {
        iVar3 = poll((pollfd *)0x0,0,iVar3);
        if (iVar3 != -1) {
          if (iVar3 != 0) {
            return 0xffffffff;
          }
          break;
        }
        piVar1 = __errno_location();
        if (*piVar1 != 0) {
          if (DAT_00051650 != 0) {
            return 0xffffffff;
          }
          if (*piVar1 != 4) {
            return 0xffffffff;
          }
        }
        FUN_000296f8(&local_20);
        iVar3 = FUN_00029758(local_20,uStack_1c,local_28,uStack_24);
        iVar3 = param_1 - iVar3;
      } while (0 < iVar3);
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint FUN_000271a8(int param_1,int param_2,int param_3,int param_4)

{
  pollfd *ppVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  pollfd local_40 [3];
  
  local_50 = 0;
  local_4c = 0;
  if ((param_2 == -1 && param_1 == -1) && (param_3 == -1)) {
    uVar2 = FUN_000270e8(param_4);
  }
  else {
    if (param_4 < 1) {
      iVar5 = 0;
    }
    else {
      FUN_000296f8(&local_50);
      iVar5 = param_4;
    }
    if (param_1 != -1) {
      local_40[0].revents = 0;
      local_40[0].events = 3;
      local_40[0].fd = param_1;
    }
    uVar6 = (uint)(param_1 != -1);
    uVar2 = uVar6;
    if (param_2 != -1) {
      local_40[uVar6].fd = param_2;
      local_40[uVar6].events = 3;
      uVar2 = uVar6 + 1;
      local_40[uVar6].revents = 0;
    }
    uVar6 = uVar2;
    if (param_3 != -1) {
      local_40[uVar2].fd = param_3;
      local_40[uVar2].events = 4;
      uVar6 = uVar2 + 1;
      local_40[uVar2].revents = 0;
    }
    do {
      do {
        if (param_4 < 0) {
          iVar5 = -1;
        }
        else if (param_4 == 0) {
          iVar5 = param_4;
        }
        iVar3 = poll(local_40,uVar6,iVar5);
        if (iVar3 != -1) {
          if (iVar3 < 0) {
            return 0xffffffff;
          }
          if (iVar3 != 0) {
            if (param_1 == -1) {
              uVar2 = 0;
              iVar5 = 0;
            }
            else {
              uVar2 = (uint)((local_40[0].revents & 0x19U) != 0);
              if ((local_40[0].revents & 0x22U) != 0) {
                uVar2 = uVar2 | 4;
              }
              iVar5 = 1;
            }
            if (param_2 != -1) {
              ppVar1 = local_40 + iVar5;
              iVar5 = iVar5 + 1;
              if ((ppVar1->revents & 0x19U) != 0) {
                uVar2 = uVar2 | 8;
              }
              if ((ppVar1->revents & 0x22U) != 0) {
                uVar2 = uVar2 | 4;
              }
            }
            if (param_3 == -1) {
              return uVar2;
            }
            if ((local_40[iVar5].revents & 4U) != 0) {
              uVar2 = uVar2 | 2;
            }
            if ((local_40[iVar5].revents & 0x38U) == 0) {
              return uVar2;
            }
            return uVar2 | 4;
          }
          goto LAB_00027300;
        }
        piVar4 = __errno_location();
        if ((*piVar4 != 0) && ((DAT_00051650 != 0 || (*piVar4 != 4)))) {
          return 0xffffffff;
        }
      } while (param_4 < 1);
      FUN_000296f8(&local_48);
      iVar5 = FUN_00029758(local_48,uStack_44,local_50,local_4c);
      iVar5 = param_4 - iVar5;
    } while (0 < iVar5);
LAB_00027300:
    uVar2 = 0;
  }
  return uVar2;
}



int FUN_000273a8(pollfd *param_1,nfds_t param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  nfds_t nVar5;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 uStack_24;
  
  nVar5 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = param_3;
  uStack_24 = param_4;
  if (param_1 != (pollfd *)0x0) {
    for (; nVar5 != param_2; nVar5 = nVar5 + 1) {
      if (param_1[nVar5].fd != -1) {
        if (param_3 < 1) {
          iVar4 = 0;
        }
        else {
          FUN_000296f8(&local_30);
          iVar4 = param_3;
        }
        do {
          if (param_3 < 0) {
            iVar4 = -1;
          }
          else if (param_3 == 0) {
            iVar4 = param_3;
          }
          iVar2 = poll(param_1,param_2,iVar4);
          if (iVar2 != -1) {
            if (iVar2 < 0) {
              return -1;
            }
            if (iVar2 == 0) {
              return 0;
            }
            iVar4 = 0;
            for (nVar5 = 0; nVar5 != param_2; nVar5 = nVar5 + 1) {
              if (*(int *)((int)&param_1->fd + iVar4) != -1) {
                uVar1 = *(ushort *)((int)&param_1->revents + iVar4);
                if ((uVar1 & 0x10) != 0) {
                  *(ushort *)((int)&param_1->revents + iVar4) = uVar1 | 1;
                }
                uVar1 = *(ushort *)((int)&param_1->revents + iVar4);
                if ((uVar1 & 8) != 0) {
                  *(ushort *)((int)&param_1->revents + iVar4) = uVar1 | 5;
                }
              }
              iVar4 = iVar4 + 8;
            }
            return iVar2;
          }
          piVar3 = __errno_location();
          if (*piVar3 != 0) {
            if (DAT_00051650 != 0) {
              return -1;
            }
            if (*piVar3 != 4) {
              return -1;
            }
          }
          if (0 < param_3) {
            FUN_000296f8(&local_28);
            iVar4 = FUN_00029758(local_28,uStack_24,local_30,local_2c);
            iVar4 = param_3 - iVar4;
            if (iVar4 < 1) {
              return 0;
            }
          }
        } while( true );
      }
    }
  }
  iVar4 = FUN_000270e8(param_3);
  return iVar4;
}



void FUN_00027500(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_28;
  int local_24;
  
  if (param_3 == (int *)0x0) {
    return;
  }
  local_28 = 0;
  local_24 = 0;
  piVar2 = &local_28;
  piVar4 = &local_28;
  do {
    while (piVar1 = param_3, param_1 < piVar1[3]) {
LAB_000275b0:
      piVar3 = (int *)*piVar1;
      if (piVar3 == (int *)0x0) goto LAB_000275e4;
      if ((param_1 < piVar3[3]) || ((param_1 <= piVar3[3] && (param_2 < piVar3[4])))) {
        *piVar1 = piVar3[1];
        piVar3[1] = (int)piVar1;
        piVar1 = piVar3;
        if (*piVar3 == 0) goto LAB_000275e4;
      }
      *piVar2 = (int)piVar1;
      piVar2 = piVar1;
      param_3 = (int *)*piVar1;
    }
    if (param_1 <= piVar1[3]) {
      if (param_2 < piVar1[4]) goto LAB_000275b0;
      if (param_2 <= piVar1[4]) {
LAB_000275e4:
        piVar4[1] = *piVar1;
        *piVar2 = piVar1[1];
        *piVar1 = local_24;
        piVar1[1] = local_28;
        return;
      }
    }
    piVar3 = (int *)piVar1[1];
    if (piVar3 == (int *)0x0) goto LAB_000275e4;
    if ((piVar3[3] <= param_1) && ((piVar3[3] < param_1 || (piVar3[4] < param_2)))) {
      piVar1[1] = *piVar3;
      *piVar3 = (int)piVar1;
      piVar1 = piVar3;
      if (piVar3[1] == 0) goto LAB_000275e4;
    }
    piVar4[1] = (int)piVar1;
    param_3 = (int *)piVar1[1];
    piVar4 = piVar1;
  } while( true );
}



undefined4 * FUN_0002762c(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_4 == (undefined4 *)0x0) {
    return param_3;
  }
  if (param_3 == (undefined4 *)0x0) {
    param_4[1] = 0;
    *param_4 = 0;
    goto LAB_000276e0;
  }
  puVar1 = (undefined4 *)FUN_00027500(param_1,param_2);
  iVar2 = puVar1[3];
  if (param_1 == iVar2) {
    if (param_2 == puVar1[4]) {
      param_4[3] = param_1;
      param_4[4] = param_2;
      *param_4 = *puVar1;
      uVar3 = puVar1[1];
      param_4[2] = puVar1;
      param_4[1] = uVar3;
      *puVar1 = param_4;
      puVar1[3] = 0xffffffff;
      puVar1[4] = 0xffffffff;
      return param_4;
    }
LAB_000276ac:
    if ((int)puVar1[4] <= param_2) {
LAB_000276d0:
      uVar3 = puVar1[1];
      *param_4 = puVar1;
      param_4[1] = uVar3;
      puVar1[1] = 0;
      goto LAB_000276e0;
    }
  }
  else if (iVar2 <= param_1) {
    if (param_1 <= iVar2) goto LAB_000276ac;
    goto LAB_000276d0;
  }
  uVar3 = *puVar1;
  param_4[1] = puVar1;
  *param_4 = uVar3;
  *puVar1 = 0;
LAB_000276e0:
  param_4[3] = param_1;
  param_4[4] = param_2;
  param_4[2] = 0;
  return param_4;
}



int * FUN_00027710(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_3 == 0) {
    *param_4 = 0;
    return (int *)0x0;
  }
  piVar1 = (int *)FUN_00027500(param_1,param_2);
  if ((param_1 < piVar1[3]) || ((param_1 <= piVar1[3] && (param_2 < piVar1[4])))) {
    iVar3 = *piVar1;
    if (iVar3 == 0) goto LAB_000277f8;
    piVar1 = (int *)FUN_00027500(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),piVar1);
  }
  if ((piVar1[3] <= param_1) && ((piVar1[3] < param_1 || (piVar1[4] <= param_2)))) {
    piVar4 = (int *)piVar1[2];
    iVar3 = *piVar1;
    if (piVar4 != (int *)0x0) {
      iVar2 = piVar1[4];
      piVar4[3] = piVar1[3];
      piVar4[4] = iVar2;
      piVar4[1] = piVar1[1];
      *piVar4 = iVar3;
      *param_4 = piVar1;
      return piVar4;
    }
    if (iVar3 == 0) {
      piVar4 = (int *)piVar1[1];
    }
    else {
      piVar4 = (int *)FUN_00027500(param_1,param_2);
      piVar4[1] = piVar1[1];
    }
    *param_4 = piVar1;
    return piVar4;
  }
LAB_000277f8:
  *param_4 = 0;
  return piVar1;
}



undefined4 FUN_00027808(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 == (int *)0x0 || param_1 == 0) {
    return 1;
  }
  if ((param_2[3] == -1) && (param_2[4] == -1)) {
    iVar2 = *param_2;
    if (iVar2 == 0) {
      return 3;
    }
    *(int *)(iVar2 + 8) = param_2[2];
    if ((int *)param_2[2] != (int *)0x0) {
      *(int *)param_2[2] = iVar2;
    }
    *param_2 = 0;
    *param_3 = param_1;
    return 0;
  }
  piVar4 = param_2 + 3;
  piVar1 = (int *)FUN_00027500(*piVar4,param_2[4],param_1);
  if (param_2 != piVar1) {
    return 2;
  }
  piVar1 = (int *)param_2[2];
  iVar2 = *param_2;
  if (piVar1 == (int *)0x0) {
    if (iVar2 == 0) {
      piVar1 = (int *)param_2[1];
    }
    else {
      piVar1 = (int *)FUN_00027500(*piVar4,param_2[4]);
      piVar1[1] = param_2[1];
    }
  }
  else {
    iVar3 = param_2[4];
    piVar1[3] = *piVar4;
    piVar1[4] = iVar3;
    iVar3 = param_2[1];
    *piVar1 = iVar2;
    piVar1[1] = iVar3;
  }
  *param_3 = (int)piVar1;
  return 0;
}



undefined4 * FUN_000278f4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*DAT_000515c4)(8);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1[1] = 0;
  *puVar1 = param_2;
  puVar2 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return puVar1;
  }
  do {
    puVar3 = puVar2;
    puVar2 = (undefined4 *)puVar3[1];
  } while (puVar2 != (undefined4 *)0x0);
  puVar3[1] = puVar1;
  return param_1;
}



int FUN_00027950(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_000515d0)(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_000278f4(param_1,iVar1);
    if (iVar2 == 0) {
      (*DAT_000515c8)(iVar1);
    }
    return iVar2;
  }
  return 0;
}



void FUN_000279b0(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar1 = (int *)param_1[1];
      if (*param_1 != 0) {
        (*DAT_000515c8)();
        *param_1 = 0;
      }
      (*DAT_000515c8)(param_1);
      param_1 = piVar1;
    } while (piVar1 != (int *)0x0);
    return;
  }
  return;
}



int FUN_000279fc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return iVar2;
    }
    iVar1 = FUN_00027950(iVar2,*param_1);
    if (iVar1 == 0) break;
    param_1 = (undefined4 *)param_1[1];
    iVar2 = iVar1;
  }
  FUN_000279b0(iVar2);
  return 0;
}



void FUN_00027a44(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = fcntl64(param_1,3,0);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfffff7ff;
  }
  else {
    uVar1 = uVar1 | 0x800;
  }
  fcntl64(param_1,4,uVar1,param_4);
  return;
}



undefined2 FUN_00027a7c(undefined2 param_1)

{
  return param_1;
}



undefined1 FUN_00027a88(undefined1 param_1)

{
  return param_1;
}



uint FUN_00027aa0(uint param_1)

{
  return param_1 & 0x7fffffff;
}



void FUN_00027aac(void)

{
  return;
}



uint FUN_00027ab0(uint param_1)

{
  return param_1 & 0x7fffffff;
}



void FUN_00027ab8(void)

{
  return;
}



undefined2 FUN_00027abc(undefined2 param_1)

{
  return param_1;
}



void FUN_00027ad0(void)

{
  return;
}



void FUN_00027ae4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined1 auStack_1c [16];
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_0003ab9c(*param_1,auStack_1c);
    do {
      piVar1 = (int *)FUN_0003abb0(auStack_1c);
      if (piVar1 == (int *)0x0) {
        return;
      }
    } while (*piVar1 != param_2);
    FUN_0003a908(*param_1,piVar1[1],piVar1[2]);
  }
  return;
}



int * FUN_00027b38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*DAT_000515d4)(1,0x14,param_3,DAT_000515d4,param_4);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_0003a73c(param_1,FUN_0003ab20,&LAB_0003ab58,&LAB_00027ae0);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      (*DAT_000515c8)(piVar1);
      return (int *)0x0;
    }
  }
  return piVar1;
}



void FUN_00027bb4(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  FUN_0003aaf8(*param_1);
  *param_1 = 0;
  (*DAT_000515c8)(param_1);
  return;
}



void FUN_00027be8(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  sVar1 = strlen(param_2);
  FUN_0003a994(*param_1,param_2,sVar1 + 1,param_4);
  return;
}



int FUN_00027c14(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  char *__s;
  int local_1c;
  undefined4 uStack_18;
  
  iVar4 = *param_2;
  local_1c = 0;
  uStack_18 = param_3;
  iVar1 = FUN_00027be8(*(undefined4 *)(iVar4 + 0x518),param_2[0x26],param_3,0,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0003d254(iVar4,&local_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    __s = (char *)param_2[0x26];
    sVar2 = strlen(__s);
    iVar3 = FUN_0003a7cc(**(undefined4 **)(iVar4 + 0x518),__s,sVar2 + 1,local_1c);
    iVar1 = local_1c;
    if (iVar3 == 0) {
      FUN_0003d2d0();
      return 0x1b;
    }
  }
  iVar1 = FUN_0003d310(iVar1,param_2);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar4 + 1;
    param_2[0x11] = iVar4;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  else if (local_1c != 0) {
    FUN_00027ae4(*(undefined4 *)(iVar4 + 0x518));
  }
  return iVar1;
}



void FUN_00027ce0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x488);
  if (iVar1 != 0) {
    FUN_0003d34c(iVar1);
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_00027ae4(param_1,iVar1,extraout_r2,0,param_4);
    }
    if (param_1 != 0) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    }
    return;
  }
  return;
}



void FUN_00027d28(undefined4 *param_1,undefined4 param_2,code *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_24 [16];
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_0003ab9c(*param_1,auStack_24);
    piVar1 = (int *)FUN_0003abb0(auStack_24);
    while (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
      piVar1 = (int *)FUN_0003abb0(auStack_24);
      puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + 8);
      while (puVar4 != (undefined4 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = (undefined4 *)puVar4[2];
        iVar3 = (*param_3)(uVar2,param_2);
        if (iVar3 == 1) {
          return;
        }
      }
    }
  }
  return;
}



undefined4
FUN_00027da0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_0003ab9c(*param_1,&uStack_14,param_3,param_4,param_1);
  do {
    piVar1 = (int *)FUN_0003abb0(&uStack_14);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  } while ((undefined4 *)**(undefined4 **)(*piVar1 + 8) == (undefined4 *)0x0);
  return *(undefined4 *)**(undefined4 **)(*piVar1 + 8);
}



void FUN_00027de0(undefined4 param_1,int *param_2)

{
  if (*param_2 != 0) {
    (*DAT_000515c8)();
    *param_2 = 0;
  }
  (*DAT_000515c8)(param_2);
  return;
}



bool FUN_00027e3c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int *piVar9;
  undefined8 uVar10;
  
  if (param_1 == 0) {
    bVar8 = false;
  }
  else {
    uVar10 = FUN_00025878(*(undefined4 *)(param_1 + 0x40));
    iVar7 = (int)((ulonglong)uVar10 >> 0x20);
    uVar6 = (uint)uVar10;
    uVar10 = FUN_00025890(*(undefined4 *)(param_1 + 0x40));
    iVar2 = (int)((ulonglong)uVar10 >> 0x20);
    uVar1 = (uint)uVar10;
    if ((*(undefined4 **)(param_2 + 0x24c) == (undefined4 *)0x0) ||
       (piVar9 = (int *)**(undefined4 **)(param_2 + 0x24c), piVar9 == (int *)0x0)) {
      bVar8 = false;
      uVar5 = 0xfffffffe;
      iVar3 = -1;
    }
    else {
      iVar3 = *piVar9;
      uVar5 = *(uint *)(iVar3 + 0x50);
      iVar3 = *(int *)(iVar3 + 0x54);
      bVar8 = (int)(uint)(uVar6 == 0) <= iVar7 &&
              (int)(iVar7 - (iVar3 + (uint)(uVar6 < uVar5))) < 0 !=
              (SBORROW4(iVar7,iVar3) != SBORROW4(iVar7 - iVar3,(uint)(uVar6 < uVar5)));
    }
    uVar6 = *(uint *)(param_2 + 0x28);
    iVar7 = *(int *)(param_2 + 0x2c);
    if (((int)(uint)(uVar1 == 0) <= iVar2) &&
       ((int)(iVar2 - (iVar7 + (uint)(uVar1 < uVar6))) < 0 !=
        (SBORROW4(iVar2,iVar7) != SBORROW4(iVar2 - iVar7,(uint)(uVar1 < uVar6))))) {
      bVar8 = true;
    }
    pcVar4 = "TRUE";
    if (bVar8 == false) {
      pcVar4 = "FALSE";
    }
    FUN_000305d4(param_1,"Conn: %ld (%p) Receive pipe weight: (%lld/%zu), penalized: %s\n",
                 *(undefined4 *)(param_2 + 0x44),param_2,uVar5,iVar3,uVar6,iVar7,pcVar4);
  }
  return bVar8;
}



undefined4 FUN_00027f24(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_2 + 0x248);
  puVar3 = (undefined4 *)*puVar2;
  uVar1 = FUN_000336ac(param_1,puVar2,param_3,param_4,param_4);
  if ((puVar2 == *(undefined4 **)(param_2 + 0x248)) &&
     (puVar2 = (undefined4 *)*puVar2, puVar3 != puVar2)) {
    *(undefined1 *)(param_2 + 0x245) = 0;
    FUN_00025210(*puVar2,1);
  }
  return uVar1;
}



void FUN_00027f74(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)**(undefined4 **)(param_2 + 0x248);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[2];
  }
  FUN_0003a518(*(undefined4 **)(param_2 + 0x248),piVar1,*(int *)(param_2 + 0x24c),
               *(undefined4 *)(*(int *)(param_2 + 0x24c) + 4));
  puVar2 = (undefined4 *)**(undefined4 **)(param_2 + 0x248);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x245) = 0;
  FUN_00025210(*puVar2,1);
  return;
}



undefined4 FUN_00027fe0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (puVar1 = (undefined4 *)FUN_000258a8(), puVar1 != (undefined4 *)0x0)) {
    for (puVar1 = (undefined4 *)*puVar1; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      puVar4 = (undefined4 *)*puVar1;
      iVar2 = FUN_0003cc64(*puVar4,*(undefined4 *)(param_2 + 0x98));
      if ((iVar2 != 0) &&
         (uVar3 = (uint)*(ushort *)(puVar4 + 1), uVar3 == *(uint *)(param_2 + 0xb4))) {
        FUN_000305d4(param_1,"Site %s:%d is pipeline blacklisted\n",*(undefined4 *)(param_2 + 0x98),
                     uVar3,param_4);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00028064(int param_1,int *param_2)

{
  int iVar1;
  char *__s;
  undefined4 *puVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = *param_2;
  if (param_1 == 0) {
    iVar1 = 0;
LAB_0002814c:
    if (iVar6 != 0) {
      FUN_0003a4c8(iVar6,0);
    }
    *param_2 = iVar1;
    return 0;
  }
  iVar1 = FUN_0003a350(FUN_00027de0);
  if (iVar1 != 0) {
    piVar7 = (int *)(param_1 + -4);
    do {
      piVar7 = piVar7 + 1;
      if (*piVar7 == 0) goto LAB_0002814c;
      __s = (char *)(*DAT_000515d0)();
      if (__s == (char *)0x0) goto LAB_00028140;
      puVar2 = (undefined4 *)(*DAT_000515c4)(8);
      if (puVar2 == (undefined4 *)0x0) {
        (*DAT_000515c8)(__s);
        goto LAB_00028140;
      }
      pcVar3 = strchr(__s,0x3a);
      if (pcVar3 == (char *)0x0) {
        *(undefined2 *)(puVar2 + 1) = 0x50;
      }
      else {
        *pcVar3 = '\0';
        lVar4 = strtol(pcVar3 + 1,(char **)0x0,10);
        *(short *)(puVar2 + 1) = (short)lVar4;
      }
      *puVar2 = __s;
      iVar5 = FUN_0003a388(iVar1,*(undefined4 *)(iVar1 + 4),puVar2);
    } while (iVar5 != 0);
    FUN_00027de0(0,puVar2);
LAB_00028140:
    FUN_0003a4c8(iVar1,0);
  }
  return 3;
}



undefined4 FUN_00028184(int param_1,undefined4 param_2)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *puVar4;
  char *__s;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_000258b0();
  if (piVar1 != (int *)0x0) {
    for (puVar4 = (undefined4 *)*piVar1; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[2]) {
      __s = (char *)*puVar4;
      sVar2 = strlen(__s);
      iVar3 = FUN_0003cccc(__s,param_2,sVar2);
      if (iVar3 != 0) {
        FUN_000305d4(param_1,"Server %s is blacklisted\n",param_2);
        return 1;
      }
    }
  }
  FUN_000305d4(param_1,"Server %s is not blacklisted\n",param_2);
  return 0;
}



undefined4 FUN_00028214(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *param_2;
  if (param_1 != 0) {
    iVar1 = FUN_0003a350(&LAB_00027e1c);
    if (iVar1 != 0) {
      piVar4 = (int *)(param_1 + -4);
      do {
        piVar4 = piVar4 + 1;
        if (*piVar4 == 0) goto LAB_00028280;
        iVar2 = (*DAT_000515d0)();
      } while ((iVar2 != 0) && (iVar2 = FUN_0003a388(iVar1,*(undefined4 *)(iVar1 + 4)), iVar2 != 0))
      ;
    }
    return 3;
  }
  iVar1 = 0;
LAB_00028280:
  if (iVar3 != 0) {
    FUN_0003a4c8(iVar3,0);
  }
  *param_2 = iVar1;
  return 0;
}



bool FUN_000282a8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0 || param_2 == 0) {
    return param_1 == 0 && param_2 == 0;
  }
  iVar1 = FUN_0003cc64();
  return iVar1 != 0;
}



undefined4 FUN_000282dc(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == *param_2) {
    if (((((short)param_1[2] == (short)param_2[2]) &&
         (iVar1 = FUN_000282a8(param_1[3],param_2[3]), iVar1 != 0)) &&
        (iVar1 = FUN_000282a8(param_1[4],param_2[4]), iVar1 != 0)) &&
       ((iVar1 = FUN_000282a8(param_1[7],param_2[7]), iVar1 != 0 &&
        (iVar1 = FUN_000282a8(param_1[8],param_2[8]), iVar1 != 0)))) {
      uVar2 = FUN_000282a8(param_1[9],param_2[9]);
      return uVar2;
    }
  }
  return 0;
}



bool FUN_00028370(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 9);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 2);
  iVar1 = param_1[4];
  *param_2 = *param_1;
  if (iVar1 == 0) {
    param_2[4] = 0;
  }
  else {
    iVar1 = (*DAT_000515d0)();
    param_2[4] = iVar1;
    if (iVar1 == 0) {
      return false;
    }
  }
  if (param_1[3] == 0) {
    param_2[3] = 0;
  }
  else {
    iVar1 = (*DAT_000515d0)();
    param_2[3] = iVar1;
    if (iVar1 == 0) {
      return false;
    }
  }
  if (param_1[9] == 0) {
    param_2[9] = 0;
  }
  else {
    iVar1 = (*DAT_000515d0)();
    param_2[9] = iVar1;
    if (iVar1 == 0) {
      return false;
    }
  }
  if (param_1[8] == 0) {
    param_2[8] = 0;
  }
  else {
    iVar1 = (*DAT_000515d0)();
    param_2[8] = iVar1;
    if (iVar1 == 0) {
      return false;
    }
  }
  if (param_1[7] == 0) {
    param_2[7] = 0;
    return true;
  }
  iVar1 = (*DAT_000515d0)();
  param_2[7] = iVar1;
  return iVar1 != 0;
}



void FUN_00028488(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  (*DAT_000515c8)();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



uint FUN_00028538(undefined4 param_1)

{
  int iVar1;
  uint local_1c;
  int local_18;
  int local_14;
  
  iVar1 = FUN_000296b4(param_1,&local_1c,4);
  if (iVar1 != 0) {
    if (DAT_00051654 == '\0') {
      FUN_000296f8(&local_18);
      FUN_000305d4(param_1,"WARNING: Using weak random seed\n");
      DAT_00051658 = (((local_14 + local_18 + DAT_00051658) * 0x41c64e6d + 0x3039) * 0x41c64e6d +
                     0x3039) * 0x41c64e6d + 0x3039;
      DAT_00051654 = '\x01';
    }
    DAT_00051658 = DAT_00051658 * 0x41c64e6d + 0x3039;
    local_1c = DAT_00051658 >> 0x10 | DAT_00051658 * 0x10000;
  }
  return local_1c;
}



undefined4 FUN_00028600(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0005165c != '\0') {
    return 1;
  }
  DAT_0005165c = 1;
  iVar1 = CyaSSL_Init();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



int FUN_00028680(undefined4 *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + param_2 * 5 + 0x5e) = 1;
  iVar1 = FUN_0002968c();
  if ((iVar1 == 0) && (*param_3 != '\0')) {
    FUN_0002a5b4(*param_1,5);
  }
  return iVar1;
}



undefined4 FUN_000286c8(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar3 = *param_1;
  *param_2 = 0;
  if ((char)param_1[0x75] == '\0') {
    return 1;
  }
  if ((*(uint **)(iVar3 + 0x48) == (uint *)0x0) ||
     (uVar2 = **(uint **)(iVar3 + 0x48), (uVar2 & 0x10) == 0)) {
    piVar6 = (int *)(iVar3 + 0x854c);
  }
  else {
    FUN_00026f3c(iVar3,4,2,uVar2,param_4);
    piVar6 = (int *)(*(int *)(iVar3 + 0x48) + 0x24);
  }
  uVar2 = 0;
  do {
    if (*(uint *)(iVar3 + 0x270) <= uVar2) {
      uVar5 = 1;
LAB_000287d0:
      if ((*(uint **)(iVar3 + 0x48) != (uint *)0x0) && ((**(uint **)(iVar3 + 0x48) & 0x10) != 0)) {
        FUN_00026f84(iVar3,4);
      }
      return uVar5;
    }
    iVar4 = *(int *)(iVar3 + 0x8548) + uVar2 * 0x4c;
    if ((((*(int *)(iVar4 + 4) != 0) &&
         (iVar1 = FUN_0003cc64(param_1[0x26],
                               *(undefined4 *)(*(int *)(iVar3 + 0x8548) + uVar2 * 0x4c)), iVar1 != 0
         )) && (param_1[0x2d] == *(int *)(iVar4 + 0x10))) &&
       (iVar1 = FUN_000282dc(param_1 + 0x68,iVar4 + 0x14), iVar1 != 0)) {
      iVar1 = *piVar6;
      *piVar6 = iVar1 + 1;
      *(int *)(iVar4 + 0xc) = iVar1 + 1;
      *param_2 = *(undefined4 *)(iVar4 + 4);
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar4 + 8);
      }
      uVar5 = 0;
      goto LAB_000287d0;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



void FUN_00028808(int *param_1)

{
  if (param_1[1] == 0) {
    return;
  }
  FUN_00029604();
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_00028488(param_1 + 5);
  if (*param_1 == 0) {
    return;
  }
  (*DAT_000515c8)();
  *param_1 = 0;
  return;
}



void FUN_00028858(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((*(uint **)(iVar2 + 0x48) != (uint *)0x0) && ((**(uint **)(iVar2 + 0x48) & 0x10) != 0)) {
    FUN_00026f3c(iVar2,4,2);
  }
  iVar1 = 0;
  do {
    if (iVar1 == *(int *)(iVar2 + 0x270)) {
LAB_000288c8:
      if (*(uint **)(iVar2 + 0x48) == (uint *)0x0) {
        return;
      }
      if ((**(uint **)(iVar2 + 0x48) & 0x10) == 0) {
        return;
      }
      FUN_00026f84(iVar2,4);
      return;
    }
    if (*(int *)(iVar1 * 0x4c + *(int *)(iVar2 + 0x8548) + 4) == param_2) {
      FUN_00028808();
      goto LAB_000288c8;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



undefined4 FUN_000288f4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar5 = *param_1;
  piVar3 = *(int **)(iVar5 + 0x8548);
  iVar6 = piVar3[3];
  iVar1 = (*DAT_000515d0)(param_1[0x26]);
  if (iVar1 != 0) {
    if ((*(uint **)(iVar5 + 0x48) == (uint *)0x0) ||
       (uVar2 = **(uint **)(iVar5 + 0x48), (uVar2 & 0x10) == 0)) {
      piVar8 = (int *)(iVar5 + 0x854c);
    }
    else {
      FUN_00026f3c(iVar5,4,2,uVar2,param_4);
      piVar8 = (int *)(*(int *)(iVar5 + 0x48) + 0x24);
    }
    uVar2 = 1;
    while ((iVar7 = iVar6, piVar4 = piVar3, uVar2 < *(uint *)(iVar5 + 0x270) &&
           (piVar3 = (int *)(uVar2 * 0x4c + *(int *)(iVar5 + 0x8548)), piVar3[1] != 0))) {
      uVar2 = uVar2 + 1;
      iVar6 = piVar3[3];
      if (iVar7 <= piVar3[3]) {
        piVar3 = piVar4;
        iVar6 = iVar7;
      }
    }
    if (uVar2 == *(uint *)(iVar5 + 0x270)) {
      FUN_00028808(piVar4);
    }
    else {
      piVar4 = (int *)(uVar2 * 0x4c + *(int *)(iVar5 + 0x8548));
    }
    iVar6 = *piVar8;
    piVar4[1] = param_2;
    piVar4[2] = param_3;
    piVar4[3] = iVar6;
    if (*piVar4 != 0) {
      (*DAT_000515c8)();
    }
    iVar6 = param_1[0x2d];
    *piVar4 = iVar1;
    piVar4[4] = iVar6;
    if ((*(uint **)(iVar5 + 0x48) != (uint *)0x0) && ((**(uint **)(iVar5 + 0x48) & 0x10) != 0)) {
      FUN_00026f84(iVar5,4);
    }
    iVar6 = FUN_00028370(param_1 + 0x68,piVar4 + 5);
    if (iVar6 != 0) {
      return 0;
    }
    piVar4[1] = 0;
    (*DAT_000515c8)(iVar1);
  }
  return 0x1b;
}



int FUN_00028a74(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x8548) != 0) &&
     ((*(uint **)(param_1 + 0x48) == (uint *)0x0 || ((**(uint **)(param_1 + 0x48) & 0x10) == 0)))) {
    uVar1 = 0;
    while( true ) {
      if (*(uint *)(param_1 + 0x270) <= uVar1) break;
      FUN_00028808(uVar1 * 0x4c + *(int *)(param_1 + 0x8548));
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0x8548) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(param_1 + 0x8548) = 0;
    }
  }
  return param_1;
}



void thunk_FUN_000295b8(int param_1,int param_2)

{
  param_1 = param_2 * 0x14 + param_1;
  if (*(int *)(param_1 + 0x184) != 0) {
    CyaSSL_shutdown();
    CyaSSL_free(*(undefined4 *)(param_1 + 0x184));
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  if (*(int *)(param_1 + 0x180) == 0) {
    return;
  }
  CyaSSL_CTX_free();
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}



undefined4 FUN_00028b0c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0002965c();
  if (iVar1 == 0) {
    iVar1 = param_2 * 0x14 + param_1;
    param_1 = param_1 + param_2 * 4;
    *(undefined1 *)(iVar1 + 0x178) = 0;
    *(undefined4 *)(iVar1 + 0x17c) = 0;
    *(undefined1 **)(param_1 + 0x168) = &LAB_000307ec;
    *(undefined1 **)(param_1 + 0x170) = &LAB_0003071c;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x50;
  }
  return uVar2;
}



undefined4 FUN_00028b54(void)

{
  return 4;
}



undefined4 FUN_00028b5c(void)

{
  return 4;
}



undefined4 FUN_00028b64(void)

{
  return 0;
}



undefined4 FUN_00028b6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8548) == 0) {
    iVar1 = (*DAT_000515d4)(param_2,0x4c,param_3,DAT_000515d4,param_4);
    if (iVar1 == 0) {
      return 0x1b;
    }
    *(undefined4 *)(param_1 + 0x270) = param_2;
    *(int *)(param_1 + 0x8548) = iVar1;
    *(undefined4 *)(param_1 + 0x854c) = 1;
  }
  return 0;
}



undefined4 FUN_00028bd8(void)

{
  return 0xffffffff;
}



bool thunk_FUN_00029634(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 * 0x14 + param_1 + 0x184) == 0) {
    return false;
  }
  iVar1 = CyaSSL_pending();
  return iVar1 != 0;
}



void FUN_00028be4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8704) == 0) {
    return;
  }
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x8704); iVar1 = iVar1 + 1) {
    FUN_000279b0(*(undefined4 *)(*(int *)(param_1 + 0x8708) + iVar1 * 4));
    *(undefined4 *)(*(int *)(param_1 + 0x8708) + iVar1 * 4) = 0;
  }
  (*DAT_000515c8)(*(undefined4 *)(param_1 + 0x8708));
  *(undefined4 *)(param_1 + 0x8708) = 0;
  *(undefined4 *)(param_1 + 0x8704) = 0;
  return;
}



bool FUN_00028c64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  
  FUN_00028be4();
  *(undefined4 *)(param_1 + 0x8704) = param_2;
  iVar1 = (*DAT_000515d4)(param_2,4,extraout_r2,DAT_000515d4,param_4);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x8708) = iVar1;
  }
  return iVar1 == 0;
}



int FUN_00028dc8(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [80];
  
  if (param_4 < 0) {
    param_4 = 0x7fffffff;
  }
  iVar1 = CyaSSL_write(param_1[param_2 * 5 + 0x61],param_3,param_4);
  if (iVar1 < 0) {
    iVar1 = CyaSSL_get_error(param_1[param_2 * 5 + 0x61]);
    if (iVar1 - 2U < 2) {
      uVar3 = 0x51;
    }
    else {
      uVar4 = *param_1;
      uVar3 = CyaSSL_ERR_error_string(iVar1,auStack_60);
      piVar2 = __errno_location();
      FUN_00030648(uVar4,"SSL write: %s, errno %d",uVar3,*piVar2);
      uVar3 = 0x37;
    }
    iVar1 = -1;
    *param_5 = uVar3;
  }
  return iVar1;
}



int FUN_00028e64(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [84];
  
  if (param_4 < 0) {
    param_4 = 0x7fffffff;
  }
  iVar1 = CyaSSL_read(param_1[param_2 * 5 + 0x61],param_3,param_4);
  if (-1 < iVar1) {
    return iVar1;
  }
  iVar2 = CyaSSL_get_error(param_1[param_2 * 5 + 0x61],iVar1);
  if (1 < iVar2) {
    if (iVar2 < 4) {
      uVar3 = 0x51;
      goto LAB_00028f00;
    }
    if (iVar2 == 6) {
      return iVar1;
    }
  }
  uVar5 = *param_1;
  uVar3 = CyaSSL_ERR_error_string(iVar2,auStack_68);
  piVar4 = __errno_location();
  FUN_00030648(uVar5,"SSL read: %s, errno %d",uVar3,*piVar4);
  uVar3 = 0x38;
LAB_00028f00:
  *param_5 = uVar3;
  return -1;
}



undefined4 FUN_00028f1c(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     (iVar1 = FUN_0003cc64(param_1,&DAT_00046112), iVar1 == 0)) {
    iVar1 = FUN_0003cc64(param_1,&DAT_00046116);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 2;
    }
    return uVar2;
  }
  return 1;
}



void FUN_000295b8(int param_1,int param_2)

{
  param_1 = param_2 * 0x14 + param_1;
  if (*(int *)(param_1 + 0x184) != 0) {
    CyaSSL_shutdown();
    CyaSSL_free(*(undefined4 *)(param_1 + 0x184));
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  if (*(int *)(param_1 + 0x180) == 0) {
    return;
  }
  CyaSSL_CTX_free();
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}



void FUN_00029604(void)

{
  return;
}



bool FUN_00029634(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 * 0x14 + param_1 + 0x184) == 0) {
    return false;
  }
  iVar1 = CyaSSL_pending();
  return iVar1 != 0;
}



undefined4 FUN_0002965c(int param_1,int param_2)

{
  param_1 = param_2 * 0x14 + param_1;
  if (*(int *)(param_1 + 0x184) != 0) {
    CyaSSL_free();
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  return 0;
}



int FUN_0002968c(int *param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_78 [21];
  
  iVar8 = *param_1;
  iVar6 = param_1[param_2 + 0x55];
  if (param_1[param_2 * 5 + 0x5f] == 2) {
    *param_3 = 1;
    return 0;
  }
  iVar9 = param_1[param_2 * 5 + 0x62];
  if (iVar9 != 0) {
LAB_000292f0:
    do {
      if (2 < param_1[param_2 * 5 + 0x62] - 1U) {
        if (param_1[param_2 * 5 + 0x62] != 4) goto LAB_0002945c;
        local_78[0] = 0;
        iVar9 = *param_1;
        iVar6 = CyaSSL_get_session(param_1[param_2 * 5 + 0x61]);
        iVar8 = FUN_000286c8(param_1,local_78,0);
        if (iVar8 == 0) {
          if (local_78[0] != iVar6) {
            FUN_000305d4(iVar9,"old SSL session ID is stale, removing\n");
            FUN_00028858(param_1,local_78[0]);
            goto LAB_00029514;
          }
        }
        else {
LAB_00029514:
          iVar6 = FUN_000288f4(param_1,iVar6,0);
          if (iVar6 != 0) {
            FUN_00030648(iVar9,"failed to store ssl session");
            return iVar6;
          }
        }
        param_1[param_2 * 5 + 0x62] = 5;
LAB_0002945c:
        iVar6 = param_1[param_2 * 5 + 0x62];
        if (iVar6 == 5) {
          param_1[param_2 * 5 + 0x5f] = 2;
          param_1[param_2 + 0x5a] = (int)FUN_00028e64;
          param_1[param_2 + 0x5c] = (int)FUN_00028dc8;
        }
        *param_3 = iVar6 == 5;
        param_1[param_2 * 5 + 0x62] = 0;
        return 0;
      }
      iVar9 = FUN_000230f4(iVar8,0,1);
      if (iVar9 < 0) goto LAB_0002937c;
      if (param_1[param_2 * 5 + 0x62] - 2U < 2) {
        if (param_1[param_2 * 5 + 0x62] == 3) {
          iVar5 = iVar6;
          iVar9 = -1;
        }
        else {
          iVar5 = -1;
          iVar9 = iVar6;
        }
        iVar9 = FUN_000271a8(iVar9,0xffffffff,iVar5,0);
        if (iVar9 < 0) {
          piVar1 = __errno_location();
          pcVar3 = "select/poll on SSL socket, errno: %d";
          iVar6 = *piVar1;
          iVar5 = iVar8;
          goto LAB_00029368;
        }
        if (iVar9 == 0) {
          *param_3 = 0;
          return 0;
        }
      }
      iVar9 = *param_1;
      FUN_000305d4(iVar9,"CyaSSL: Connecting to %s:%d\n",param_1[0x26],param_1[0x2d]);
      param_1[param_2 + 0x5a] = (int)FUN_00028e64;
      param_1[param_2 + 0x5c] = (int)FUN_00028dc8;
      if ((*(char *)(iVar9 + 0x251) != '\0') &&
         (iVar5 = CyaSSL_check_domain_name(param_1[param_2 * 5 + 0x61],param_1[0x26]), iVar5 == 0))
      {
        return 0x1b;
      }
      iVar5 = CyaSSL_connect(param_1[param_2 * 5 + 0x61]);
      if (iVar5 == 1) {
LAB_00029428:
        param_1[param_2 * 5 + 0x62] = 4;
        FUN_000305d4(iVar9,"SSL connected\n");
      }
      else {
        iVar5 = CyaSSL_get_error(param_1[param_2 * 5 + 0x61],iVar5);
        if ((iVar5 != 2) && (iVar5 != 3)) {
          if (iVar5 == -0x142) {
            FUN_00030648(iVar9,"\tsubject alt name(s) or common name do not match \"%s\"\n",
                         param_1[0x27]);
            return 0x33;
          }
          if (iVar5 != -0xbc) {
            uVar2 = CyaSSL_ERR_error_string(iVar5,local_78);
            FUN_00030648(iVar9,"SSL_connect failed with error %d: %s",iVar5,uVar2);
            return 0x23;
          }
          if (*(char *)(iVar9 + 0x250) != '\0') {
            FUN_00030648(iVar9,"\tCA signer not available for verification\n");
            return 0x4d;
          }
          FUN_000305d4(iVar9,"CA signer not available for verification, continuing anyway\n");
          goto LAB_00029428;
        }
        param_1[param_2 * 5 + 0x62] = iVar5;
      }
      if (param_1[param_2 * 5 + 0x62] - 1U < 3) {
        return 0;
      }
    } while( true );
  }
  uVar11 = FUN_000230f4(iVar8,0,1);
  if ((int)uVar11 < 0) {
LAB_0002937c:
    FUN_00030648(iVar8,"SSL connection timeout");
    return 0x1c;
  }
  iVar5 = *param_1;
  iVar10 = param_1[param_2 + 0x55];
  local_78[0] = iVar9;
  if (param_1[param_2 * 5 + 0x5f] == 2) goto LAB_000292f0;
  if (*(int *)(iVar5 + 0x248) == 2) {
    pcVar3 = "CyaSSL does not support SSLv2";
    goto LAB_0002918c;
  }
  switch(*(int *)(iVar5 + 0x248)) {
  case 0:
    uVar11 = CyaSSLv23_client_method();
    break;
  case 1:
    FUN_000305d4(iVar5,
                 "CyaSSL cannot be configured to use TLS 1.0-1.2, TLS 1.0 is used exclusively\n");
  default:
    uVar11 = CyaTLSv1_client_method();
    break;
  case 3:
    uVar11 = CyaSSLv3_client_method();
    break;
  case 5:
    uVar11 = CyaTLSv1_1_client_method();
    break;
  case 6:
    uVar11 = CyaTLSv1_2_client_method((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  }
  if ((int)uVar11 == 0) {
    pcVar3 = "SSL: couldn\'t create a method!";
  }
  else {
    if (param_1[param_2 * 5 + 0x60] != 0) {
      CyaSSL_CTX_free(param_1[param_2 * 5 + 0x60],(int)((ulonglong)uVar11 >> 0x20));
    }
    iVar9 = CyaSSL_CTX_new((int)uVar11);
    param_1[param_2 * 5 + 0x60] = iVar9;
    if (iVar9 == 0) {
      pcVar3 = "SSL: couldn\'t create a context!";
      goto LAB_000290b0;
    }
    if (*(int *)(iVar5 + 0x34c) != 0) {
      iVar9 = CyaSSL_CTX_load_verify_locations
                        (iVar9,*(int *)(iVar5 + 0x34c),*(undefined4 *)(iVar5 + 0x348));
      if (iVar9 == 0) {
        if (*(char *)(iVar5 + 0x250) != '\0') {
          puVar4 = *(undefined **)(iVar5 + 0x34c);
          if (*(undefined **)(iVar5 + 0x34c) == (undefined *)0x0) {
            puVar4 = &DAT_0004611a;
          }
          puVar7 = *(undefined **)(iVar5 + 0x348);
          if (*(undefined **)(iVar5 + 0x348) == (undefined *)0x0) {
            puVar7 = &DAT_0004611a;
          }
          FUN_00030648(iVar5,
                       "error setting certificate verify locations:\n  CAfile: %s\n  CApath: %s",
                       puVar4,puVar7);
          return 0x4d;
        }
        pcVar3 = "error setting certificate verify locations, continuing anyway:\n";
      }
      else {
        pcVar3 = "successfully set certificate verify locations:\n";
      }
      FUN_000305d4(iVar5,pcVar3);
      puVar4 = *(undefined **)(iVar5 + 0x34c);
      if (*(undefined **)(iVar5 + 0x34c) == (undefined *)0x0) {
        puVar4 = &DAT_0004611a;
      }
      puVar7 = *(undefined **)(iVar5 + 0x348);
      if (*(undefined **)(iVar5 + 0x348) == (undefined *)0x0) {
        puVar7 = &DAT_0004611a;
      }
      FUN_000305d4(iVar5,"  CAfile: %s\n  CApath: %s\n",puVar4,puVar7);
    }
    if ((*(int *)(iVar5 + 0x2f8) != 0) && (*(int *)(iVar5 + 800) != 0)) {
      uVar2 = FUN_00028f1c(*(undefined4 *)(iVar5 + 0x2fc));
      iVar9 = CyaSSL_CTX_use_certificate_file
                        (param_1[param_2 * 5 + 0x60],*(undefined4 *)(iVar5 + 0x2f8),uVar2);
      if (iVar9 != 1) {
        pcVar3 = "unable to use client certificate (no key or wrong pass phrase?)";
        goto LAB_0002918c;
      }
      uVar2 = FUN_00028f1c(*(undefined4 *)(iVar5 + 0x328));
      iVar9 = CyaSSL_CTX_use_PrivateKey_file
                        (param_1[param_2 * 5 + 0x60],*(undefined4 *)(iVar5 + 800),uVar2);
      if (iVar9 != 1) {
        pcVar3 = "unable to set private key";
        goto LAB_0002918c;
      }
    }
    CyaSSL_CTX_set_verify(param_1[param_2 * 5 + 0x60],*(undefined1 *)(iVar5 + 0x250),0);
    if (param_1[param_2 * 5 + 0x61] != 0) {
      CyaSSL_free();
    }
    iVar9 = CyaSSL_new(param_1[param_2 * 5 + 0x60]);
    param_1[param_2 * 5 + 0x61] = iVar9;
    if (iVar9 != 0) {
      iVar9 = FUN_000286c8(param_1,local_78,0);
      if (iVar9 == 0) {
        iVar9 = CyaSSL_set_session(param_1[param_2 * 5 + 0x61],local_78[0]);
        if (iVar9 == 0) {
          uVar2 = CyaSSL_get_error(param_1[param_2 * 5 + 0x61],0);
          iVar6 = CyaSSL_ERR_error_string(uVar2,0);
          pcVar3 = "SSL: SSL_set_session failed: %s";
LAB_00029368:
          FUN_00030648(iVar5,pcVar3,iVar6);
          return 0x23;
        }
        FUN_000305d4(iVar5,"SSL re-using session ID\n");
      }
      iVar9 = CyaSSL_set_fd(param_1[param_2 * 5 + 0x61],iVar10);
      if (iVar9 == 0) {
        pcVar3 = "SSL: SSL_set_fd failed";
LAB_0002918c:
        FUN_00030648(iVar5,pcVar3);
        return 0x23;
      }
      param_1[param_2 * 5 + 0x62] = 1;
      goto LAB_000292f0;
    }
    pcVar3 = "SSL: couldn\'t create a context (handle)!";
  }
LAB_000290b0:
  FUN_00030648(iVar5,pcVar3);
  return 0x1b;
}



undefined4 FUN_000296b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [268];
  
  iVar1 = InitRng(auStack_118);
  if (iVar1 == 0) {
    iVar1 = RNG_GenerateBlock(auStack_118,param_2,param_3);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



__time_t * FUN_000296f8(__time_t *param_1)

{
  int iVar1;
  timeval local_20;
  timespec local_18;
  
  iVar1 = clock_gettime(1,&local_18);
  if (iVar1 == 0) {
    local_20.tv_sec = local_18.tv_sec;
    local_20.tv_usec = FUN_0003f110(local_18.tv_nsec,1000);
  }
  else {
    gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  }
  *param_1 = local_20.tv_sec;
  param_1[1] = local_20.tv_usec;
  return param_1;
}



int FUN_00029758(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0003f110(param_2 - param_4);
  return (param_1 - param_3) * 1000 + iVar1;
}



void FUN_00029794(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == param_3) {
    uVar1 = FUN_0003f4e8(param_2 - param_4);
    FUN_0003f830((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x412e8480);
  }
  else {
    uVar1 = FUN_0003f4e8(param_1 - param_3);
    uVar2 = FUN_0003f4e8(param_2 - param_4);
    uVar2 = FUN_0003f830((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x412e8480,param_3);
    FUN_0003f218((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,
                 (int)((ulonglong)uVar2 >> 0x20));
  }
  return;
}



undefined4 FUN_0002981c(undefined4 param_1)

{
  return param_1;
}



bool FUN_00029834(int *param_1,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    return false;
  }
  return *param_1 <= param_1[1] - *(int *)(param_2 + 4);
}



byte * FUN_00029868(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  uint __c;
  int iVar2;
  byte *pbVar3;
  
  pbVar1 = (byte *)FUN_000375e8("%s:%d",param_1,param_2,param_1,param_4);
  pbVar3 = pbVar1;
  if (pbVar1 != (byte *)0x0) {
    while( true ) {
      __c = (uint)*pbVar3;
      if (__c == 0x3a || __c == 0) break;
      iVar2 = tolower(__c);
      *pbVar3 = (byte)iVar2;
      pbVar3 = pbVar3 + 1;
    }
  }
  return pbVar1;
}



undefined * FUN_00029904(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_00051678 == 0) {
    iVar1 = FUN_0003a638(&DAT_00051660,7,FUN_0003ab20,&LAB_0003ab58,&LAB_000298c8,param_2,param_3);
    if (iVar1 != 0) {
      return (undefined *)0x0;
    }
    DAT_00051678 = 1;
  }
  return &DAT_00051660;
}



int FUN_00029964(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x1c)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



char * FUN_00029980(int param_1,char *param_2,socklen_t param_3)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 4) == 2) {
    pcVar1 = inet_ntop(2,(void *)(*(int *)(param_1 + 0x18) + 4),param_2,param_3);
    return pcVar1;
  }
  return (char *)0x0;
}



void FUN_000299b8(int param_1,time_t param_2,undefined4 param_3,undefined4 param_4)

{
  time_t local_14;
  undefined4 local_10;
  time_t local_c;
  
  if ((*(int *)(param_1 + 0x284) != -1) && (*(int *)(param_1 + 0x38) != 0)) {
    local_14 = param_2;
    local_10 = param_3;
    local_c = param_4;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00026f3c(param_1,3,2,*(int *)(param_1 + 0x48),param_1);
    }
    time(&local_14);
    local_10 = *(undefined4 *)(param_1 + 0x284);
    local_c = local_14;
    FUN_0003aa74(*(undefined4 *)(param_1 + 0x38),&local_10,FUN_00029834);
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00026f84(param_1,3);
    }
  }
  return;
}



int FUN_00029a3c(int *param_1,time_t param_2,undefined4 param_3,int *param_4)

{
  char *__s;
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_20;
  time_t tStack_1c;
  undefined4 uStack_18;
  
  iVar4 = *param_1;
  local_20 = param_1;
  tStack_1c = param_2;
  uStack_18 = param_3;
  __s = (char *)FUN_00029868(param_2,param_3);
  if (__s == (char *)0x0) {
    return 0;
  }
  sVar1 = strlen(__s);
  iVar2 = FUN_0003a994(*(undefined4 *)(iVar4 + 0x38),__s,sVar1 + 1);
  (*DAT_000515c8)(__s);
  if ((((iVar2 != 0) && (*(int *)(iVar4 + 0x284) != -1)) && (*(int *)(iVar4 + 0x38) != 0)) &&
     (*(int *)(iVar2 + 8) == 0)) {
    time(&tStack_1c);
    local_20 = *(int **)(iVar4 + 0x284);
    iVar3 = FUN_00029834(&local_20,iVar2);
    if (iVar3 != 0) {
      FUN_0003aa74(*(undefined4 *)(iVar4 + 0x38),&local_20,FUN_00029834);
      iVar4 = 1;
      goto LAB_00029af0;
    }
  }
  iVar4 = 0;
LAB_00029af0:
  *param_4 = iVar4;
  if (iVar4 != 0) {
    iVar2 = 0;
  }
  return iVar2;
}



int FUN_00029b18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *__s;
  size_t sVar1;
  undefined4 *puVar2;
  int iVar3;
  
  __s = (char *)FUN_00029868(param_3,param_4,param_3,param_4,param_4);
  if (__s == (char *)0x0) {
    return 0;
  }
  sVar1 = strlen(__s);
  puVar2 = (undefined4 *)(*DAT_000515d4)(1,0xc);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[2] = 0;
    *puVar2 = param_2;
    time(puVar2 + 1);
    if (puVar2[1] == 0) {
      puVar2[1] = 1;
    }
    iVar3 = FUN_0003a7cc(*(undefined4 *)(param_1 + 0x38),__s,sVar1 + 1,puVar2);
    if (iVar3 == 0) {
      (*DAT_000515c8)(puVar2);
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    (*DAT_000515c8)(__s);
    return iVar3;
  }
  (*DAT_000515c8)(__s);
  return 0;
}



undefined4 FUN_00029bf0(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r7;
  int *local_28;
  int local_24;
  
  iVar3 = *param_1;
  *param_4 = 0;
  local_28 = param_1;
  local_24 = param_2;
  if (*(int *)(iVar3 + 0x48) != 0) {
    FUN_00026f3c(iVar3,3,2);
  }
  iVar1 = FUN_00029a3c(param_1,param_2,param_3,&local_28);
  FUN_000305d4(iVar3,"Hostname was %sfound in DNS cache\n");
  if (local_28 != (int *)0x0) {
    FUN_000305d4(iVar3,"Hostname in DNS cache was stale, zapped\n");
  }
  if (iVar1 != 0) {
    unaff_r7 = 0;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  if (iVar1 == 0) {
    unaff_r7 = 0xffffffff;
  }
  if (*(int *)(iVar3 + 0x48) != 0) {
    FUN_00026f84(iVar3,3);
  }
  if (iVar1 == 0) {
    iVar2 = FUN_0003c3c0(param_1);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_0003c47c(param_1,param_2,param_3,&local_24);
    if (iVar2 == 0) {
      if (local_24 != 0) {
        return 0xffffffff;
      }
    }
    else {
      if (*(int *)(iVar3 + 0x48) != 0) {
        FUN_00026f3c(iVar3,3,2);
      }
      iVar1 = FUN_00029b18(iVar3,iVar2,param_2,param_3);
      if (*(int *)(iVar3 + 0x48) != 0) {
        FUN_00026f84(iVar3,3);
      }
      if (iVar1 == 0) {
        FUN_0003cd98(iVar2);
      }
      else {
        unaff_r7 = 0;
      }
    }
  }
  *param_4 = iVar1;
  return unaff_r7;
}



undefined4
FUN_00029d84(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint __seconds;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  _union_1051 local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  _union_1051 local_24;
  uint local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  iVar1 = *param_1;
  *param_4 = 0;
  if (-1 < param_5) {
    if (*(char *)(iVar1 + 0x2dc) == '\0') {
      local_48 = param_5;
    }
    else {
      local_48 = 0;
    }
    if (local_48 == 0) {
      uVar2 = FUN_00029bf0(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    if (999 < local_48) {
      sigaction(0xe,(sigaction *)0x0,(sigaction *)&local_24);
      local_38 = local_24;
      uStack_34 = local_20;
      uStack_30 = uStack_1c;
      uStack_2c = uStack_18;
      local_28 = local_14;
      local_24.sa_handler = (__sighandler_t)&DAT_000298b4;
      local_20 = local_20 & 0xefffffff;
      sigaction(0xe,(sigaction *)&local_24,(sigaction *)0x0);
      FUN_0003f110(local_48,1000);
      uVar3 = FUN_00027ab8();
      uVar3 = alarm(uVar3);
      iVar4 = __sigsetjmp(&DAT_00051680,1);
      if (iVar4 == 0) {
        uVar2 = FUN_00029bf0(param_1,param_2,param_3,param_4);
      }
      else {
        FUN_00030648(iVar1,"name lookup timed out");
        uVar2 = 0xffffffff;
      }
      if (uVar3 == 0) {
        alarm(0);
      }
      sigaction(0xe,(sigaction *)&local_38,(sigaction *)0x0);
      if (uVar3 == 0) {
        return uVar2;
      }
      FUN_000296f8(&local_40);
      uVar5 = FUN_00029758(local_40,uStack_3c,param_1[0x53],param_1[0x54]);
      iVar4 = FUN_0003f048(uVar5,1000);
      __seconds = uVar3 - iVar4;
      if ((__seconds != 0) && ((-1 < (int)__seconds || ((int)uVar3 < 0)))) {
        alarm(__seconds);
        return uVar2;
      }
      alarm(1);
      FUN_00030648(iVar1,"Previous alarm fired off!");
    }
  }
  return 0xfffffffe;
}



void FUN_00029f70(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x48) != 0)) {
    FUN_00026f3c(param_1,3,2);
  }
  iVar1 = param_2[2];
  param_2[2] = iVar1 + -1;
  if ((iVar1 + -1 == 0) && (param_2[1] == 0)) {
    FUN_0003cd98(*param_2);
    (*DAT_000515c8)(param_2);
  }
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_00026f84(param_1,3);
  return;
}



void FUN_0002a014(void)

{
  FUN_0003a73c(7,FUN_0003ab20,&LAB_0003ab58,&LAB_000298c8);
  return;
}



void FUN_0002a034(undefined4 param_1,undefined4 param_2)

{
  FUN_0003aa74(param_2,param_1,&LAB_00029ff8);
  return;
}



void FUN_0002a04c(void)

{
  if (DAT_00051678 == 0) {
    return;
  }
  FUN_0002a034(0,&DAT_00051660);
  FUN_0003aa08(&DAT_00051660);
  DAT_00051678 = 0;
  return;
}



undefined4 FUN_0002a084(int param_1)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_22c;
  undefined1 auStack_228 [256];
  undefined1 auStack_128 [260];
  
  puVar5 = *(undefined4 **)(param_1 + 0x3fc);
  do {
    if (puVar5 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x3fc) = 0;
      return 0;
    }
    pcVar1 = (char *)*puVar5;
    if (((pcVar1 != (char *)0x0) && (*pcVar1 != '-')) &&
       (iVar2 = sscanf(pcVar1,"%255[^:]:%d:%255s",auStack_228,&local_22c,auStack_128), iVar2 == 3))
    {
      iVar2 = FUN_0003d1c8(auStack_128,local_22c);
      if (iVar2 == 0) {
        FUN_000305d4(param_1,"Resolve %s found illegal!\n",*puVar5);
      }
      else {
        pcVar1 = (char *)FUN_00029868(auStack_228,local_22c);
        if (pcVar1 == (char *)0x0) {
LAB_0002a1a8:
          FUN_0003cd98(iVar2);
          return 0x1b;
        }
        sVar3 = strlen(pcVar1);
        if (*(int *)(param_1 + 0x48) != 0) {
          FUN_00026f3c(param_1,3,2);
        }
        iVar4 = FUN_0003a994(*(undefined4 *)(param_1 + 0x38),pcVar1,sVar3 + 1);
        (*DAT_000515c8)(pcVar1);
        if (iVar4 == 0) {
          iVar4 = FUN_00029b18(param_1,iVar2,auStack_228,local_22c);
        }
        else {
          FUN_0003cd98(iVar2);
        }
        if (*(int *)(param_1 + 0x48) != 0) {
          FUN_00026f84(param_1,3);
        }
        if (iVar4 == 0) goto LAB_0002a1a8;
        FUN_000305d4(param_1,"Added %s:%d:%s to DNS cache\n",auStack_228,local_22c,auStack_128);
      }
    }
    puVar5 = (undefined4 *)puVar5[1];
  } while( true );
}



void FUN_0002a1f8(char *param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 < (int)(uint)(param_3 == 0)) {
    strcpy(param_1,"--:--:--");
    return;
  }
  lVar4 = FUN_0003fbbc(param_3,param_4,0xe10,0);
  if ((int)((ulonglong)lVar4 >> 0x20) < (int)(uint)((uint)lVar4 < 100)) {
    lVar1 = lVar4 * -0xe10 + CONCAT44(param_4,param_3);
    lVar5 = FUN_0003fbbc((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0x3c,0);
    FUN_000365a4(param_1,9,"%2lld:%02lld:%02lld",(int)((ulonglong)(lVar5 * -0x3c) >> 0x20),lVar4,
                 lVar5,lVar5 * -0x3c + lVar1);
  }
  else {
    lVar4 = FUN_0003fbbc(param_3,param_4,&LAB_00015180,0);
    iVar2 = (int)((ulonglong)lVar4 >> 0x20);
    bVar3 = (uint)lVar4 < 1000;
    if (iVar2 < (int)(uint)bVar3) {
      lVar4 = lVar4 * -0x15180 + CONCAT44(param_4,param_3);
      FUN_0003fbbc((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),0xe10,0);
      FUN_000365a4(param_1,9,"%3lldd %02lldh");
    }
    else {
      FUN_000365a4(param_1,9,"%7lldd",iVar2 - (uint)bVar3,lVar4);
    }
  }
  return;
}



undefined4 FUN_0002a360(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)-(param_2 + (99999 < param_1)) < 0 ==
      (SBORROW4(0,param_2) != SBORROW4(-param_2,(uint)(99999 < param_1)))) {
    pcVar1 = "%5lld";
    uVar2 = param_1;
  }
  else {
    uVar2 = 0x9c3fff;
    if ((int)-(param_2 + (0x9c3fff < param_1)) < 0 ==
        (SBORROW4(0,param_2) != SBORROW4(-param_2,(uint)(0x9c3fff < param_1)))) {
      uVar3 = param_1 >> 10 | param_2 << 0x16;
      pcVar1 = "%4lldk";
      uVar2 = uVar3;
      param_2 = (int)param_2 >> 10;
    }
    else {
      if ((int)param_2 < (int)(uint)(param_1 < 0x6400000)) {
        FUN_0003fbbc(param_1 & 0xfffff,0,0x19999,0,param_1 >> 0x14 | param_2 << 0xc,
                     (int)param_2 >> 0x14,param_3,param_4);
        pcVar1 = "%2lld.%0lldM";
LAB_0002a498:
        FUN_000365a4(param_3,6,pcVar1);
        return param_3;
      }
      if ((int)(param_2 - ((param_1 < 0x71000000) + 2)) < 0 ==
          (SBORROW4(param_2,2) != SBORROW4(param_2 - 2,(uint)(param_1 < 0x71000000)))) {
        if ((int)param_2 < 0x19) {
          FUN_0003fbbc(param_1 & 0x3fffffff,0,0x6666666,0,param_1 >> 0x1e | param_2 << 2,
                       (int)param_2 >> 0x1e,param_3,param_4);
          pcVar1 = "%2lld.%0lldG";
          goto LAB_0002a498;
        }
        if ((int)param_2 < 0x9c4) {
          uVar3 = param_1 >> 0x1e | param_2 << 2;
          pcVar1 = "%4lldG";
          uVar2 = uVar3;
          param_2 = (int)param_2 >> 0x1e;
        }
        else {
          if ((int)param_2 < 0x271000) {
            uVar2 = (int)param_2 >> 8;
          }
          uVar3 = (int)param_2 >> 0x1f;
          if ((int)param_2 < 0x271000) {
            pcVar1 = "%4lldT";
            param_2 = uVar3;
          }
          else {
            uVar2 = (int)param_2 >> 0x12;
            pcVar1 = "%4lldP";
            param_2 = uVar3;
          }
        }
      }
      else {
        uVar3 = param_1 >> 0x14 | param_2 << 0xc;
        pcVar1 = "%4lldM";
        uVar2 = uVar3;
        param_2 = (int)param_2 >> 0x14;
      }
    }
  }
  FUN_000365a4(param_3,6,pcVar1,uVar3,uVar2,param_2);
  return param_3;
}



void FUN_0002a560(int param_1)

{
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x41c) = 0;
  *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x440) & 0xffffff9f;
  return;
}



void FUN_0002a5b4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 uStack_14;
  
  piVar3 = &local_18;
  local_20 = param_1;
  uStack_1c = param_2;
  local_18 = param_3;
  uStack_14 = param_4;
  FUN_000296f8(piVar3);
  switch(param_2) {
  case 1:
    piVar2 = (int *)(param_1 + 0x4a0);
    goto LAB_0002a628;
  case 2:
    param_1 = param_1 + 0x490;
    goto LAB_0002a624;
  case 3:
    uVar4 = FUN_00029794(local_18,uStack_14,*(undefined4 *)(param_1 + 0x498),
                         *(undefined4 *)(param_1 + 0x49c));
    iVar1 = 0x460;
    break;
  case 4:
    uVar4 = FUN_00029794(local_18,uStack_14,*(undefined4 *)(param_1 + 0x498),
                         *(undefined4 *)(param_1 + 0x49c));
    iVar1 = 0x468;
    break;
  case 5:
    uVar4 = FUN_00029794(local_18,uStack_14,*(undefined4 *)(param_1 + 0x498),
                         *(undefined4 *)(param_1 + 0x49c));
    iVar1 = 0x470;
    break;
  case 6:
    uVar4 = FUN_00029794(local_18,uStack_14,*(undefined4 *)(param_1 + 0x498),
                         *(undefined4 *)(param_1 + 0x49c));
    iVar1 = 0x478;
    break;
  case 7:
    uVar4 = FUN_00029794(local_18,uStack_14,*(undefined4 *)(param_1 + 0x498),
                         *(undefined4 *)(param_1 + 0x49c));
    iVar1 = 0x480;
    break;
  default:
    goto switchD_0002a5d4_caseD_8;
  case 9:
    FUN_000296f8(&local_20);
    param_1 = param_1 + 0x4a0;
    piVar3 = &local_20;
LAB_0002a624:
    piVar2 = (int *)(param_1 + 8);
LAB_0002a628:
    iVar1 = piVar3[1];
    *piVar2 = *piVar3;
    piVar2[1] = iVar1;
    return;
  case 10:
    uVar4 = FUN_00029794(local_18,uStack_14,*(undefined4 *)(param_1 + 0x490),
                         *(undefined4 *)(param_1 + 0x494));
    iVar1 = 0x488;
  }
  *(undefined8 *)(param_1 + iVar1) = uVar4;
switchD_0002a5d4_caseD_8:
  return;
}



void FUN_0002a6d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  *(undefined4 *)(param_1 + 0x510) = 0;
  local_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_000296f8(&local_18);
  *(int *)(param_1 + 0x490) = local_18;
  *(undefined4 *)(param_1 + 0x494) = uStack_14;
  *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x440) & 0x90;
  return;
}



void FUN_0002a710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x420) = param_3;
  *(undefined4 *)(param_1 + 0x424) = param_4;
  return;
}



void FUN_0002a71c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x428) = param_3;
  *(undefined4 *)(param_1 + 0x42c) = param_4;
  return;
}



void FUN_0002a72c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 < 0) {
    uVar1 = *(uint *)(param_1 + 0x440) & 0xffffffbf;
    *(undefined4 *)(param_1 + 0x410) = 0;
    *(undefined4 *)(param_1 + 0x414) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x410) = param_3;
    *(int *)(param_1 + 0x414) = param_4;
    uVar1 = *(uint *)(param_1 + 0x440) | 0x40;
  }
  *(uint *)(param_1 + 0x440) = uVar1;
  return;
}



void FUN_0002a75c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 < 0) {
    uVar1 = *(uint *)(param_1 + 0x440) & 0xffffffdf;
    *(undefined4 *)(param_1 + 0x418) = 0;
    *(undefined4 *)(param_1 + 0x41c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x418) = param_3;
    *(int *)(param_1 + 0x41c) = param_4;
    uVar1 = *(uint *)(param_1 + 0x440) | 0x20;
  }
  *(uint *)(param_1 + 0x440) = uVar1;
  return;
}



int FUN_0002a790(int *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [10];
  undefined1 auStack_5a [10];
  undefined1 auStack_50 [10];
  undefined1 auStack_46 [10];
  undefined1 auStack_3c [10];
  undefined1 auStack_32 [14];
  
  iVar15 = *param_1;
  uVar17 = *(undefined4 *)(iVar15 + 0x510);
  FUN_000296f8(&local_90);
  iVar12 = local_90;
  uVar19 = FUN_0003f4e8(local_90 - *(int *)(iVar15 + 0x490));
  uVar20 = FUN_0003f4e8(local_8c - *(int *)(iVar15 + 0x494));
  uVar20 = FUN_0003f830((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x412e8480);
  uVar20 = FUN_0003f218((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                        (int)((ulonglong)uVar20 >> 0x20));
  uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
  uVar7 = (undefined4)uVar20;
  *(undefined8 *)(iVar15 + 0x448) = uVar20;
  uVar4 = *(uint *)(iVar15 + 0x420);
  iVar8 = *(int *)(iVar15 + 0x424);
  uVar21 = FUN_0003f564();
  iVar5 = FUN_0003fb4c(uVar7,uVar11,0,0);
  uVar19 = uVar20;
  if (iVar5 == 0) {
    uVar19 = 0x3ff0000000000000;
  }
  FUN_0003f830((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar19,
               (int)((ulonglong)uVar19 >> 0x20));
  uVar19 = FUN_0003fc50();
  iVar9 = (int)((ulonglong)uVar19 >> 0x20);
  *(undefined8 *)(iVar15 + 0x450) = uVar19;
  uVar16 = *(uint *)(iVar15 + 0x428);
  iVar5 = *(int *)(iVar15 + 0x42c);
  uVar21 = FUN_0003f564(uVar16,iVar5);
  iVar6 = FUN_0003fb4c(uVar7,uVar11,0,0);
  if (iVar6 == 0) {
    uVar20 = 0x3ff0000000000000;
  }
  FUN_0003f830((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar20,
               (int)((ulonglong)uVar20 >> 0x20));
  uVar20 = FUN_0003fc50();
  iVar6 = (int)((ulonglong)uVar20 >> 0x20);
  *(undefined8 *)(iVar15 + 0x458) = uVar20;
  if (*(int *)(iVar15 + 0x408) == iVar12) {
    bVar18 = false;
  }
  else {
    *(int *)(iVar15 + 0x408) = iVar12;
    FUN_0003f1ec(uVar17,6);
    iVar12 = iVar15 + extraout_r1 * 8;
    if ((int)(iVar5 - (iVar8 + (uint)(uVar16 < uVar4))) < 0 !=
        (SBORROW4(iVar5,iVar8) != SBORROW4(iVar5 - iVar8,(uint)(uVar16 < uVar4)))) {
      uVar16 = uVar4;
      iVar5 = iVar8;
    }
    *(uint *)(iVar12 + 0x4b0) = uVar16;
    *(int *)(iVar12 + 0x4b4) = iVar5;
    *(int *)(iVar12 + 0x4e0) = local_90;
    *(int *)(iVar12 + 0x4e4) = local_8c;
    iVar5 = *(int *)(iVar15 + 0x510) + 1;
    *(int *)(iVar15 + 0x510) = iVar5;
    if (iVar5 == 1) {
      bVar18 = (uint)uVar20 < (uint)uVar19;
      if ((int)(iVar6 - (iVar9 + (uint)bVar18)) < 0 !=
          (SBORROW4(iVar6,iVar9) != SBORROW4(iVar6 - iVar9,(uint)bVar18))) {
        uVar20 = uVar19;
      }
      *(undefined8 *)(iVar15 + 0x430) = uVar20;
    }
    else {
      if (iVar5 < 6) {
        iVar5 = 0;
      }
      else {
        FUN_0003f1ec(iVar5,6);
        iVar5 = extraout_r1_00;
      }
      puVar10 = (undefined4 *)(iVar15 + (iVar5 + 0x9c) * 8);
      iVar8 = FUN_00029758(local_90,local_8c,*puVar10,puVar10[1]);
      puVar1 = (uint *)((iVar5 + 0x96) * 8 + iVar15);
      uVar4 = *puVar1;
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      uVar16 = *(uint *)(iVar12 + 0x4b0) - uVar4;
      iVar12 = *(int *)(iVar12 + 0x4b4) - (puVar1[1] + (uint)(*(uint *)(iVar12 + 0x4b0) < uVar4));
      if ((int)-(iVar12 + (uint)(0x418937 < uVar16)) < 0 ==
          (SBORROW4(0,iVar12) != SBORROW4(-iVar12,(uint)(0x418937 < uVar16)))) {
        uVar19 = FUN_0003fbbc((int)((ulonglong)uVar16 * 1000),
                              iVar12 * 1000 + (int)((ulonglong)uVar16 * 1000 >> 0x20),iVar8,
                              iVar8 >> 0x1f);
      }
      else {
        uVar19 = FUN_0003f564(uVar16,iVar12);
        uVar20 = FUN_0003f4e8(iVar8);
        uVar20 = FUN_0003f830((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x408f4000);
        FUN_0003f830((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                     (int)((ulonglong)uVar20 >> 0x20));
        uVar19 = FUN_0003fc50();
      }
      *(undefined8 *)(iVar15 + 0x430) = uVar19;
    }
    bVar18 = true;
  }
  if ((*(uint *)(iVar15 + 0x440) & 0x10) != 0) {
    return 0;
  }
  if (*(code **)(iVar15 + 0x18c) != (code *)0x0) {
    iVar12 = (**(code **)(iVar15 + 0x18c))
                       (*(undefined4 *)(iVar15 + 0x1c0),*(undefined4 *)(iVar15 + 0x42c),
                        *(undefined4 *)(iVar15 + 0x410),*(undefined4 *)(iVar15 + 0x414),
                        *(undefined4 *)(iVar15 + 0x420),*(undefined4 *)(iVar15 + 0x424),
                        *(undefined4 *)(iVar15 + 0x418),*(undefined4 *)(iVar15 + 0x41c),
                        *(undefined4 *)(iVar15 + 0x428),*(undefined4 *)(iVar15 + 0x42c));
LAB_0002aad8:
    local_94 = 0;
    if (iVar12 != 0) {
      FUN_00030648(iVar15,"Callback aborted");
      local_94 = iVar12;
    }
    return local_94;
  }
  pcVar14 = *(code **)(iVar15 + 0x188);
  if (pcVar14 != (code *)0x0) {
    uVar19 = FUN_0003f564(*(undefined4 *)(iVar15 + 0x410),*(undefined4 *)(iVar15 + 0x414));
    uVar20 = FUN_0003f564(*(undefined4 *)(iVar15 + 0x420),*(undefined4 *)(iVar15 + 0x424));
    uVar21 = FUN_0003f564(*(undefined4 *)(iVar15 + 0x418),*(undefined4 *)(iVar15 + 0x41c));
    uVar22 = FUN_0003f564(*(undefined4 *)(iVar15 + 0x428),*(undefined4 *)(iVar15 + 0x42c));
    iVar12 = (*pcVar14)(*(undefined4 *)(iVar15 + 0x1c0),(int)((ulonglong)uVar22 >> 0x20),(int)uVar19
                        ,(int)((ulonglong)uVar19 >> 0x20),uVar20,uVar21,uVar22);
    goto LAB_0002aad8;
  }
  if (!bVar18) {
    return 0;
  }
  if ((*(uint *)(iVar15 + 0x440) & 0x80) == 0) {
    if (*(int *)(iVar15 + 0x8630) != 0 || *(int *)(iVar15 + 0x8634) != 0) {
      FUN_000377bc(*(undefined4 *)(iVar15 + 0x118),"** Resuming transfer from byte position %lld\n")
      ;
    }
    FUN_000377bc(*(undefined4 *)(iVar15 + 0x118),
                 "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                );
    *(uint *)(iVar15 + 0x440) = *(uint *)(iVar15 + 0x440) | 0x80;
  }
  uVar4 = *(uint *)(iVar15 + 0x440);
  if (((uVar4 & 0x20) == 0) ||
     (*(int *)(iVar15 + 0x45c) < (int)(uint)(*(int *)(iVar15 + 0x458) == 0))) {
    uVar19 = 0;
  }
  else {
    uVar16 = *(uint *)(iVar15 + 0x418);
    iVar12 = *(int *)(iVar15 + 0x41c);
    uVar20 = *(undefined8 *)(iVar15 + 0x418);
    uVar19 = FUN_0003fbbc(uVar16,iVar12);
    if ((int)-(iVar12 + (uint)(10000 < uVar16)) < 0 ==
        (SBORROW4(0,iVar12) != SBORROW4(-iVar12,(uint)(10000 < uVar16)))) {
      if (iVar12 < (int)(uint)(uVar16 == 0)) goto LAB_0002ac08;
      lVar3 = (ulonglong)*(uint *)(iVar15 + 0x428) * 100;
      uVar17 = (undefined4)lVar3;
      iVar12 = *(int *)(iVar15 + 0x42c) * 100 + (int)((ulonglong)lVar3 >> 0x20);
    }
    else {
      uVar20 = FUN_0003fbbc(uVar16,iVar12,100,0);
      uVar17 = *(undefined4 *)(iVar15 + 0x428);
      iVar12 = *(int *)(iVar15 + 0x42c);
    }
    FUN_0003fbbc(uVar17,iVar12,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
  }
LAB_0002ac08:
  iVar12 = (int)((ulonglong)uVar19 >> 0x20);
  if (((uVar4 & 0x40) == 0) ||
     (*(int *)(iVar15 + 0x454) < (int)(uint)(*(int *)(iVar15 + 0x450) == 0))) {
    uVar20 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar15 + 0x410);
    iVar5 = *(int *)(iVar15 + 0x414);
    uVar21 = *(undefined8 *)(iVar15 + 0x410);
    uVar20 = FUN_0003fbbc(uVar4,iVar5);
    if ((int)-(iVar5 + (uint)(10000 < uVar4)) < 0 ==
        (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(10000 < uVar4)))) {
      if (iVar5 < (int)(uint)(uVar4 == 0)) goto LAB_0002acdc;
      lVar3 = (ulonglong)*(uint *)(iVar15 + 0x420) * 100;
      uVar17 = (undefined4)lVar3;
      iVar5 = *(int *)(iVar15 + 0x424) * 100 + (int)((ulonglong)lVar3 >> 0x20);
    }
    else {
      uVar21 = FUN_0003fbbc(uVar4,iVar5,100,0);
      uVar17 = *(undefined4 *)(iVar15 + 0x420);
      iVar5 = *(int *)(iVar15 + 0x424);
    }
    FUN_0003fbbc(uVar17,iVar5,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
  }
LAB_0002acdc:
  iVar8 = (int)((ulonglong)uVar20 >> 0x20);
  uVar21 = FUN_0003fc50(uVar7,uVar11);
  iVar5 = (int)((ulonglong)uVar21 >> 0x20);
  uVar4 = (uint)uVar21;
  bVar18 = (uint)uVar20 < (uint)uVar19;
  if ((int)(iVar8 - (iVar12 + (uint)bVar18)) < 0 !=
      (SBORROW4(iVar8,iVar12) != SBORROW4(iVar8 - iVar12,(uint)bVar18))) {
    uVar20 = uVar19;
  }
  iVar12 = (int)((ulonglong)uVar20 >> 0x20);
  uVar16 = (uint)uVar20;
  if (iVar12 < (int)(uint)(uVar16 == 0)) {
    iVar8 = 0;
    iVar6 = 0;
  }
  else {
    iVar8 = uVar16 - uVar4;
    iVar6 = iVar12 - (iVar5 + (uint)(uVar16 < uVar4));
  }
  FUN_0002a1f8(auStack_88,iVar5,iVar8,iVar6);
  FUN_0002a1f8(auStack_7c,extraout_r1_01,uVar16,iVar12);
  FUN_0002a1f8(auStack_70,extraout_r1_02,uVar4,iVar5);
  if ((*(uint *)(iVar15 + 0x440) & 0x20) == 0) {
    iVar12 = 0x428;
  }
  else {
    iVar12 = 0x418;
  }
  uVar4 = *(uint *)(iVar15 + iVar12);
  if ((*(uint *)(iVar15 + 0x440) & 0x40) == 0) {
    uVar16 = *(uint *)(iVar15 + 0x420);
    iVar5 = *(int *)(iVar15 + 0x424);
  }
  else {
    uVar16 = *(uint *)(iVar15 + 0x410);
    iVar5 = *(int *)(iVar15 + 0x414);
  }
  uVar13 = uVar4 + uVar16;
  iVar5 = ((uint *)(iVar15 + iVar12))[1] + iVar5 + (uint)CARRY4(uVar4,uVar16);
  uVar19 = CONCAT44(iVar5,uVar13);
  uVar4 = *(uint *)(iVar15 + 0x420) + *(uint *)(iVar15 + 0x428);
  iVar12 = *(int *)(iVar15 + 0x424) + *(int *)(iVar15 + 0x42c) +
           (uint)CARRY4(*(uint *)(iVar15 + 0x420),*(uint *)(iVar15 + 0x428));
  if ((int)-(iVar5 + (uint)(10000 < uVar13)) < 0 ==
      (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(10000 < uVar13)))) {
    if (iVar5 < (int)(uint)(uVar13 == 0)) {
      uVar19 = 0;
      goto LAB_0002ae08;
    }
    uVar2 = (ulonglong)uVar4;
    uVar4 = (uint)(uVar2 * 100);
    iVar12 = iVar12 * 100 + (int)(uVar2 * 100 >> 0x20);
  }
  else {
    uVar19 = FUN_0003fbbc(uVar13,iVar5,100,0);
  }
  uVar19 = FUN_0003fbbc(uVar4,iVar12,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
LAB_0002ae08:
  uStack_ac = (undefined4)((ulonglong)uVar19 >> 0x20);
  local_b0 = (undefined4)uVar19;
  uVar11 = *(undefined4 *)(iVar15 + 0x118);
  uVar7 = FUN_0002a360(uVar13,iVar5,auStack_50);
  FUN_0002a360(*(undefined4 *)(iVar15 + 0x420),*(undefined4 *)(iVar15 + 0x424),auStack_64);
  FUN_0002a360(*(undefined4 *)(iVar15 + 0x428),*(undefined4 *)(iVar15 + 0x42c),auStack_5a);
  FUN_0002a360(*(undefined4 *)(iVar15 + 0x450),*(undefined4 *)(iVar15 + 0x454),auStack_46);
  FUN_0002a360(*(undefined4 *)(iVar15 + 0x458),*(undefined4 *)(iVar15 + 0x45c),auStack_3c);
  FUN_0002a360(*(undefined4 *)(iVar15 + 0x430),*(undefined4 *)(iVar15 + 0x434),auStack_32);
  FUN_000377bc(uVar11,"\r%3lld %s  %3lld %s  %3lld %s  %s  %s %s %s %s %s",local_b0,uStack_ac,uVar7)
  ;
  fflush(*(FILE **)(iVar15 + 0x118));
  return 0;
}



void FUN_0002af2c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x408) = 0;
  iVar1 = FUN_0002a790();
  if (iVar1 != 0) {
    return;
  }
  if (((*(uint *)(iVar2 + 0x440) & 0x10) == 0) && (*(char *)(iVar2 + 0x438) == '\0')) {
    FUN_000377bc(*(undefined4 *)(iVar2 + 0x118),&DAT_000478e3);
  }
  *(undefined4 *)(iVar2 + 0x510) = 0;
  return;
}



void FUN_0002af7c(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    (*DAT_000515c8)();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (*DAT_000515c8)();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_000515c8)();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (*DAT_000515c8)();
  }
  if (*(int *)(param_1 + 4) != 0) {
    (*DAT_000515c8)();
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*DAT_000515c8)();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    (*DAT_000515c8)();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    (*DAT_000515c8)();
  }
  (*DAT_000515c8)(param_1);
  return;
}



void FUN_0002b03c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    (*DAT_000515c8)();
  }
  iVar1 = (*DAT_000515d0)(param_2);
  *param_1 = iVar1;
  return;
}



void FUN_0002b080(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  uVar2 = time((time_t *)0x0);
  iVar1 = (int)uVar2 >> 0x1f;
  piVar6 = (int *)*param_1;
  piVar3 = (int *)0x0;
  while (piVar5 = piVar3, piVar3 = piVar6, piVar3 != (int *)0x0) {
    piVar6 = (int *)*piVar3;
    if (((piVar3[8] != 0) || (piVar3[0xb] != 0)) &&
       (iVar4 = piVar3[7],
       (int)(iVar4 - (iVar1 + (uint)((uint)piVar3[6] < uVar2))) < 0 !=
       (SBORROW4(iVar4,iVar1) != SBORROW4(iVar4 - iVar1,(uint)((uint)piVar3[6] < uVar2))))) {
      iVar4 = param_1[3];
      if (piVar3 == (int *)*param_1) {
        *param_1 = (int)piVar6;
      }
      else {
        *piVar5 = (int)piVar6;
      }
      param_1[3] = iVar4 + -1;
      FUN_0002af7c();
      piVar3 = piVar5;
    }
  }
  return;
}



bool FUN_0002b108(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  undefined4 extraout_r2;
  
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  if (sVar1 <= sVar2) {
    iVar3 = FUN_0003cc64(param_1,param_2 + (sVar2 - sVar1),extraout_r2,sVar2 - sVar1,param_4);
    if (iVar3 != 0) {
      if (sVar2 != sVar1) {
        return (param_2 + (sVar2 - sVar1))[-1] == '.';
      }
      return true;
    }
  }
  return false;
}



int FUN_0002b178(int *param_1,int *param_2)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = *param_2;
  sVar1 = 0;
  if (*(char **)(iVar3 + 0xc) != (char *)0x0) {
    sVar1 = strlen(*(char **)(iVar3 + 0xc));
  }
  if (*(char **)(iVar4 + 0xc) == (char *)0x0) {
    if (sVar1 != 0) {
      return -1;
    }
  }
  else {
    uVar2 = strlen(*(char **)(iVar4 + 0xc));
    if (sVar1 != uVar2) goto LAB_0002b1e8;
  }
  sVar1 = 0;
  if (*(char **)(iVar3 + 0x14) != (char *)0x0) {
    sVar1 = strlen(*(char **)(iVar3 + 0x14));
  }
  if (*(char **)(iVar4 + 0x14) == (char *)0x0) {
    if (sVar1 != 0) {
      return -1;
    }
  }
  else {
    uVar2 = strlen(*(char **)(iVar4 + 0x14));
    if (sVar1 != uVar2) {
LAB_0002b1e8:
      if (sVar1 < uVar2) {
        iVar3 = 1;
      }
      else {
        iVar3 = -1;
      }
      return iVar3;
    }
  }
  if (*(char **)(iVar3 + 4) == (char *)0x0) {
    return 0;
  }
  if (*(char **)(iVar4 + 4) == (char *)0x0) {
    return 0;
  }
  iVar3 = strcmp(*(char **)(iVar3 + 4),*(char **)(iVar4 + 4));
  return iVar3;
}



char * FUN_0002b230(void)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)(*DAT_000515d0)();
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\"') {
      sVar2 = strlen(pcVar1);
      memmove(pcVar1,pcVar1 + 1,sVar2);
    }
    sVar2 = strlen(pcVar1);
    if (pcVar1[sVar2 - 1] == '\"') {
      pcVar1[sVar2 - 1] = '\0';
    }
    if (*pcVar1 != '/') {
      (*DAT_000515c8)(pcVar1);
      pcVar1 = (char *)(*DAT_000515d0)(&DAT_0004860c);
      return pcVar1;
    }
    sVar2 = strlen(pcVar1);
    if ((1 < sVar2) && (pcVar1[sVar2 - 1] == '/')) {
      pcVar1[sVar2 - 1] = '\0';
    }
  }
  return pcVar1;
}



void FUN_0002b2e8(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  
  pcVar2 = "#HttpOnly_";
  pcVar1 = "";
  if (*(char *)(param_1 + 0x32) == '\0') {
    pcVar2 = pcVar1;
  }
  pcVar3 = *(char **)(param_1 + 0x14);
  if (((*(char *)(param_1 + 0x24) != '\0') && (pcVar3 != (char *)0x0)) && (*pcVar3 != '.')) {
    pcVar1 = ".";
  }
  pcVar4 = "FALSE";
  if (*(char *)(param_1 + 0x24) != '\0') {
    pcVar4 = "TRUE";
  }
  puVar5 = &DAT_0004860c;
  if (*(undefined **)(param_1 + 0xc) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_1 + 0xc);
  }
  pcVar6 = "TRUE";
  if (*(char *)(param_1 + 0x30) == '\0') {
    pcVar6 = "FALSE";
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "unknown";
  }
  FUN_000375e8("%s%s%s\t%s\t%s\t%s\t%lld\t%s\t%s",pcVar2,pcVar1,pcVar3,pcVar4,puVar5,pcVar6);
  return;
}



// WARNING: Type propagation algorithm not settling

undefined4 *
FUN_0002b3c4(undefined4 param_1,undefined4 *param_2,char *param_3,char *param_4,char *param_5,
            char *param_6)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  code *pcVar4;
  time_t tVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  size_t sVar10;
  size_t sVar11;
  void *__dest;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined4 *puVar19;
  char *__s;
  bool bVar20;
  undefined4 *puVar21;
  bool bVar22;
  longlong lVar23;
  undefined1 auStack_42c [4];
  char *local_428 [257];
  
  tVar5 = time((time_t *)0x0);
  puVar6 = (undefined4 *)(*DAT_000515d4)(1,0x38);
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_3 == (char *)0x0) {
    local_428[0] = param_3;
    iVar9 = strncmp(param_4,"#HttpOnly_",10);
    if (iVar9 == 0) {
      param_4 = param_4 + 10;
      *(undefined1 *)((int)puVar6 + 0x32) = 1;
    }
    if (*param_4 == '#') {
      (*DAT_000515c8)(puVar6);
      return (undefined4 *)0x0;
    }
    pcVar7 = strchr(param_4,0xd);
    iVar9 = 0;
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = '\0';
    }
    pcVar7 = strchr(param_4,10);
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = '\0';
    }
    pcVar7 = strtok_r(param_4,"\t",local_428);
    uVar12 = 0;
    while( true ) {
      if (pcVar7 == (char *)0x0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (uVar12 ^ 1) & 1;
      }
      if (uVar16 == 0) break;
      switch(iVar9) {
      case 0:
        if (*pcVar7 == '.') {
          pcVar7 = pcVar7 + 1;
        }
        uVar16 = (*DAT_000515d0)(pcVar7);
        puVar6[5] = uVar16;
        break;
      case 1:
        iVar13 = FUN_0003cc64(pcVar7,&DAT_00046018);
        *(bool *)(puVar6 + 9) = iVar13 != 0;
      default:
switchD_0002b808_default:
        uVar12 = 0;
        goto LAB_0002b95c;
      case 2:
        iVar13 = strcmp("TRUE",pcVar7);
        if ((iVar13 == 0) || (iVar13 = strcmp("FALSE",pcVar7), iVar13 == 0)) {
          uVar16 = (*DAT_000515d0)(&DAT_0004860c);
          pcVar4 = DAT_000515d0;
          uVar12 = 1 - uVar16;
          puVar6[3] = uVar16;
          if (1 < uVar16) {
            uVar12 = 0;
          }
          iVar9 = (*pcVar4)(&DAT_0004860c);
          puVar6[4] = iVar9;
          if (iVar9 == 0) {
            uVar12 = 1;
          }
          goto LAB_0002b8f8;
        }
        iVar13 = (*DAT_000515d0)(pcVar7);
        puVar6[3] = iVar13;
        if (iVar13 != 0) {
          uVar16 = FUN_0002b230();
          puVar6[4] = uVar16;
          break;
        }
        uVar12 = 1;
        goto LAB_0002b95c;
      case 3:
        uVar12 = 0;
LAB_0002b8f8:
        iVar13 = FUN_0003cc64(pcVar7,&DAT_00046018);
        iVar9 = 3;
        *(bool *)(puVar6 + 0xc) = iVar13 != 0;
        goto LAB_0002b95c;
      case 4:
        lVar23 = strtoll(pcVar7,(char **)0x0,10);
        *(longlong *)(puVar6 + 6) = lVar23;
        goto switchD_0002b808_default;
      case 5:
        uVar16 = (*DAT_000515d0)(pcVar7);
        puVar6[1] = uVar16;
        break;
      case 6:
        uVar16 = (*DAT_000515d0)(pcVar7);
        puVar6[2] = uVar16;
      }
      uVar12 = 1 - uVar16;
      if (1 < uVar16) {
        uVar12 = 0;
      }
LAB_0002b95c:
      pcVar7 = strtok_r((char *)0x0,"\t",local_428);
      iVar9 = iVar9 + 1;
    }
    if (iVar9 == 6) {
      iVar13 = (*DAT_000515d0)(&DAT_000467ca);
      if (iVar13 == 0) {
        uVar12 = 1;
        iVar9 = 6;
      }
      else {
        iVar9 = 7;
      }
      puVar6[2] = iVar13;
    }
    if (iVar9 == 7) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uVar12 ^ 1) & 1;
    }
    if ((uVar16 == 0) && (uVar12 == 0)) goto LAB_0002b9c4;
    goto LAB_0002b748;
  }
  pcVar7 = (char *)(*DAT_000515c4)(5000);
  if (pcVar7 == (char *)0x0) {
    (*DAT_000515c8)(puVar6);
    return (undefined4 *)0x0;
  }
  pcVar8 = strchr(param_4,0x3b);
  do {
    pcVar18 = param_4;
    cVar1 = *pcVar18;
    if (cVar1 == '\0') break;
    param_4 = pcVar18 + 1;
  } while (cVar1 == ' ' || cVar1 == '\t');
  bVar20 = false;
LAB_0002b51c:
  *pcVar7 = '\0';
  local_428[0] = (char *)((uint)local_428[0] & 0xffffff00);
  iVar9 = sscanf(pcVar18,"%1023[^;\r\n =]=%4999[^;\r\n]",local_428,pcVar7);
  if (iVar9 < 1) {
LAB_0002b4e0:
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) goto LAB_0002b630;
    do {
      pcVar18 = pcVar8 + 1;
      cVar1 = *pcVar18;
      if (cVar1 == '\0') break;
      pcVar8 = pcVar18;
    } while (cVar1 == ' ' || cVar1 == '\t');
    pcVar8 = strchr(pcVar18,0x3b);
    if ((pcVar8 == (char *)0x0) &&
       ((cVar1 == '\0' || (pcVar8 = strchr(pcVar18,0), pcVar8 == (char *)0x0)))) goto LAB_0002b630;
    goto LAB_0002b51c;
  }
  sVar10 = strlen(pcVar7);
  sVar11 = strlen((char *)local_428);
  pcVar18 = pcVar18 + (sVar11 - 1);
  do {
    pcVar18 = pcVar18 + 1;
    cVar1 = *pcVar18;
    if (cVar1 == '\0') break;
  } while (cVar1 == ' ' || cVar1 == '\t');
  while ((pcVar18 = pcVar7, sVar10 != 0 &&
         (sVar11 = sVar10 - 1, pcVar7[sVar11] == ' ' || pcVar7[sVar11] == '\t'))) {
    pcVar7[sVar11] = '\0';
    sVar10 = sVar11;
  }
  do {
    __s = pcVar18;
    cVar2 = *__s;
    if (cVar2 == '\0') break;
    pcVar18 = __s + 1;
  } while (cVar2 == ' ' || cVar2 == '\t');
  if (sVar10 == 0) {
    iVar9 = FUN_0003cc64("secure",local_428);
    if (iVar9 == 0) {
      iVar9 = FUN_0003cc64("httponly",local_428);
      if (iVar9 == 0) {
        if (cVar1 == '=') goto LAB_0002bafc;
      }
      else {
        *(undefined1 *)((int)puVar6 + 0x32) = 1;
      }
    }
    else {
      *(undefined1 *)(puVar6 + 0xc) = 1;
    }
    goto LAB_0002b4e0;
  }
LAB_0002bafc:
  iVar9 = FUN_0003cc64(&DAT_00046802,local_428);
  if (iVar9 == 0) {
    iVar9 = FUN_0003cc64("domain",local_428);
    if (iVar9 == 0) {
      iVar9 = FUN_0003cc64("version",local_428);
      if (iVar9 == 0) {
        iVar9 = FUN_0003cc64("max-age",local_428);
        if (iVar9 == 0) {
          iVar9 = FUN_0003cc64("expires",local_428);
          if (iVar9 == 0) {
            if (puVar6[1] != 0) goto LAB_0002b4e0;
            uVar14 = (*DAT_000515d0)(local_428);
            pcVar4 = DAT_000515d0;
            puVar6[1] = uVar14;
            iVar9 = (*pcVar4)(__s);
            puVar6[2] = iVar9;
            if (puVar6[1] == 0) goto LAB_0002b62c;
          }
          else {
            FUN_0002b03c(puVar6 + 8,__s);
            iVar9 = puVar6[8];
          }
        }
        else {
          FUN_0002b03c(puVar6 + 0xb,__s);
          iVar9 = puVar6[0xb];
        }
      }
      else {
        FUN_0002b03c(puVar6 + 10,__s);
        iVar9 = puVar6[10];
      }
      goto LAB_0002bc8c;
    }
    if (*__s == '.') {
      __s = __s + 1;
    }
    pcVar18 = param_5;
    if (param_5 == (char *)0x0) {
      pcVar18 = __s;
    }
    iVar9 = inet_pton(2,pcVar18,auStack_42c);
    pcVar18 = strchr(__s,0x2e);
    if (pcVar18 == (char *)0x0) {
      param_5 = ":";
LAB_0002bba0:
      if (iVar9 == 0) {
        iVar13 = FUN_0002b108();
        if (iVar13 == 0) goto LAB_0002bbf4;
      }
      else {
        iVar13 = strcmp(__s,param_5);
        if (iVar13 != 0) {
LAB_0002bbf4:
          FUN_000305d4(param_1,"skipped cookie with bad tailmatch domain: %s\n",__s);
          bVar20 = true;
          goto LAB_0002b4e0;
        }
      }
    }
    else if (param_5 != (char *)0x0) goto LAB_0002bba0;
    FUN_0002b03c(puVar6 + 5,__s);
    if (puVar6[5] != 0) {
      if (iVar9 == 0) {
        *(undefined1 *)(puVar6 + 9) = 1;
      }
      goto LAB_0002b4e0;
    }
  }
  else {
    FUN_0002b03c(puVar6 + 3,__s);
    if (puVar6[3] != 0) {
      iVar9 = FUN_0002b230();
      puVar6[4] = iVar9;
LAB_0002bc8c:
      if (iVar9 != 0) goto LAB_0002b4e0;
    }
  }
LAB_0002b62c:
  bVar20 = true;
LAB_0002b630:
  pcVar8 = (char *)puVar6[0xb];
  if (pcVar8 == (char *)0x0) {
    if (puVar6[8] != 0) {
      iVar9 = FUN_0003c4e0();
      if (iVar9 == 0) {
        uVar12 = 1;
      }
      else {
        if (-1 < iVar9 >> 0x1f) {
          puVar6[6] = iVar9;
          puVar6[7] = iVar9 >> 0x1f;
          goto LAB_0002b6e4;
        }
        uVar12 = 0;
      }
      uVar3 = (ulonglong)uVar12;
      goto LAB_0002b6e0;
    }
  }
  else {
    if (*pcVar8 == '\"') {
      pcVar8 = pcVar8 + 1;
    }
    lVar23 = strtoll(pcVar8,(char **)0x0,10);
    iVar9 = (int)((ulonglong)lVar23 >> 0x20);
    iVar13 = 0x7fffffff - (tVar5 >> 0x1f);
    bVar22 = -tVar5 - 1U < (uint)lVar23;
    *(longlong *)(puVar6 + 6) = lVar23;
    if ((int)(iVar13 - (iVar9 + (uint)bVar22)) < 0 ==
        (SBORROW4(iVar13,iVar9) != SBORROW4(iVar13 - iVar9,(uint)bVar22))) {
      uVar3 = lVar23 + tVar5;
LAB_0002b6e0:
      *(ulonglong *)(puVar6 + 6) = uVar3;
    }
    else {
      puVar6[6] = 0xffffffff;
      puVar6[7] = 0x7fffffff;
    }
  }
LAB_0002b6e4:
  if (bVar20) {
LAB_0002b720:
    iVar9 = 1;
  }
  else {
    if ((puVar6[5] == 0) && (param_5 != (char *)0x0)) {
      iVar9 = (*DAT_000515d0)(param_5);
      puVar6[5] = iVar9;
      if (iVar9 == 0) goto LAB_0002b720;
    }
    iVar9 = 0;
    if ((puVar6[3] == 0) && (param_6 != (char *)0x0)) {
      pcVar8 = strchr(param_6,0x3f);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = strrchr(param_6,0x2f);
      }
      else {
        pcVar8 = (char *)FUN_0003d210(param_6,0x2f,(int)pcVar8 - (int)param_6);
      }
      if (pcVar8 != (char *)0x0) {
        __dest = (void *)(*DAT_000515c4)(pcVar8 + (2 - (int)param_6));
        puVar6[3] = __dest;
        if (__dest == (void *)0x0) goto LAB_0002b720;
        memcpy(__dest,param_6,(size_t)(pcVar8 + (1 - (int)param_6)));
        (pcVar8 + (1 - (int)param_6))[puVar6[3]] = '\0';
        uVar12 = FUN_0002b230(puVar6[3]);
        iVar9 = 1 - uVar12;
        puVar6[4] = uVar12;
        if (1 < uVar12) {
          iVar9 = 0;
        }
      }
    }
  }
  (*DAT_000515c8)(pcVar7);
  if ((iVar9 == 0) && (puVar6[1] != 0)) {
LAB_0002b9c4:
    if ((*(char *)(param_2 + 2) == '\0') &&
       ((*(char *)(param_2 + 4) != '\0' && (puVar6[6] == 0 && puVar6[7] == 0)))) {
      FUN_0002af7c(puVar6);
      return (undefined4 *)0x0;
    }
    *(char *)((int)puVar6 + 0x31) = *(char *)(param_2 + 2);
    FUN_0002b080(param_2);
    puVar19 = (undefined4 *)0x0;
    puVar21 = (undefined4 *)*param_2;
    do {
      if (puVar21 == (undefined4 *)0x0) {
        bVar20 = false;
LAB_0002ba88:
        if (*(char *)(param_2 + 2) != '\0') {
          pcVar7 = "Added";
          if (bVar20) {
            pcVar7 = "Replaced";
          }
          FUN_000305d4(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %lld\n",pcVar7,
                       puVar6[1],puVar6[2],puVar6[5],puVar6[3]);
        }
        if (!bVar20) {
          iVar9 = param_2[3];
          if (puVar19 == (undefined4 *)0x0) {
            *param_2 = puVar6;
          }
          else {
            *puVar19 = puVar6;
          }
          param_2[3] = iVar9 + 1;
          return puVar6;
        }
        return puVar6;
      }
      iVar9 = FUN_0003cc64(puVar21[1],puVar6[1]);
      if (iVar9 != 0) {
        if (puVar21[5] == 0) {
          if (puVar6[5] == 0) {
LAB_0002ba54:
            if (puVar21[4] == 0) {
              if (puVar6[4] == 0) goto LAB_0002bd50;
            }
            else if ((puVar6[4] != 0) && (iVar9 = FUN_0003cc64(), iVar9 != 0)) {
LAB_0002bd50:
              if ((*(char *)((int)puVar6 + 0x31) != '\0') ||
                 (*(char *)((int)puVar21 + 0x31) == '\0')) {
                *puVar6 = *puVar21;
                (*DAT_000515c8)(puVar21[1]);
                if (puVar21[2] != 0) {
                  (*DAT_000515c8)();
                }
                if (puVar21[5] != 0) {
                  (*DAT_000515c8)();
                }
                if (puVar21[3] != 0) {
                  (*DAT_000515c8)();
                }
                if (puVar21[4] != 0) {
                  (*DAT_000515c8)();
                }
                if (puVar21[8] != 0) {
                  (*DAT_000515c8)();
                }
                if (puVar21[10] != 0) {
                  (*DAT_000515c8)();
                }
                if (puVar21[0xb] != 0) {
                  (*DAT_000515c8)();
                }
                uVar14 = puVar6[1];
                uVar15 = puVar6[2];
                uVar17 = puVar6[3];
                *puVar21 = *puVar6;
                puVar21[1] = uVar14;
                puVar21[2] = uVar15;
                puVar21[3] = uVar17;
                uVar14 = puVar6[5];
                uVar15 = puVar6[6];
                uVar17 = puVar6[7];
                puVar21[4] = puVar6[4];
                puVar21[5] = uVar14;
                puVar21[6] = uVar15;
                puVar21[7] = uVar17;
                uVar14 = puVar6[9];
                uVar15 = puVar6[10];
                uVar17 = puVar6[0xb];
                puVar21[8] = puVar6[8];
                puVar21[9] = uVar14;
                puVar21[10] = uVar15;
                puVar21[0xb] = uVar17;
                pcVar4 = DAT_000515c8;
                uVar14 = puVar6[0xd];
                puVar21[0xc] = puVar6[0xc];
                puVar21[0xd] = uVar14;
                (*pcVar4)(puVar6);
                puVar6 = puVar21;
                do {
                  puVar19 = puVar6;
                  puVar6 = (undefined4 *)*puVar19;
                } while ((undefined4 *)*puVar19 != (undefined4 *)0x0);
                bVar20 = true;
                puVar6 = puVar21;
                goto LAB_0002ba88;
              }
              break;
            }
          }
        }
        else if ((puVar6[5] != 0) && (iVar9 = FUN_0003cc64(), iVar9 != 0)) goto LAB_0002ba54;
      }
      puVar19 = puVar21;
      puVar21 = (undefined4 *)*puVar21;
    } while( true );
  }
LAB_0002b748:
  FUN_0002af7c(puVar6);
  return (undefined4 *)0x0;
}



int FUN_0002bec4(undefined4 param_1,char *param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  FILE *__stream;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_3 == 0) {
    param_3 = (*DAT_000515d4)(1,0x14,0,DAT_000515d4,param_1,param_2,0);
    if (param_3 == 0) {
      return 0;
    }
    pcVar4 = "none";
    if (param_2 != (char *)0x0) {
      pcVar4 = param_2;
    }
    uVar3 = (*DAT_000515d0)(pcVar4);
    *(undefined4 *)(param_3 + 4) = uVar3;
  }
  bVar2 = false;
  *(undefined1 *)(param_3 + 8) = 0;
  if (param_2 != (char *)0x0) {
    iVar6 = FUN_00039e30(param_2,&DAT_0004659b);
    __stream = stdin;
    if (iVar6 != 0) goto LAB_0002bf6c;
    if (*param_2 != '\0') {
      __stream = fopen64(param_2,"r");
      bVar2 = true;
      goto LAB_0002bf6c;
    }
  }
  bVar2 = true;
  __stream = (FILE *)0x0;
LAB_0002bf6c:
  *(undefined1 *)(param_3 + 0x10) = param_4;
  if (__stream != (FILE *)0x0) {
    pcVar4 = (char *)(*DAT_000515c4)(5000);
    if (pcVar4 != (char *)0x0) {
      while (pcVar5 = fgets(pcVar4,5000,__stream), pcVar5 != (char *)0x0) {
        iVar6 = FUN_0003cccc("Set-Cookie:",pcVar4,0xb);
        pcVar5 = pcVar4;
        if (iVar6 != 0) {
          pcVar5 = pcVar4 + 0xb;
        }
        do {
          cVar1 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == ' ' || cVar1 == '\t');
        FUN_0002b3c4(param_1,param_3);
      }
      (*DAT_000515c8)(pcVar4);
    }
    if (bVar2) {
      fclose(__stream);
    }
  }
  *(undefined1 *)(param_3 + 8) = 1;
  return param_3;
}



void FUN_0002c060(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x3f8);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  FUN_00026f3c(param_1,2,2);
  do {
    uVar1 = FUN_0002bec4(param_1,*puVar2,*(undefined4 *)(param_1 + 0x400),
                         *(undefined1 *)(param_1 + 0x215));
    puVar2 = (undefined4 *)puVar2[1];
    *(undefined4 *)(param_1 + 0x400) = uVar1;
  } while (puVar2 != (undefined4 *)0x0);
  FUN_000279b0(*(undefined4 *)(param_1 + 0x3f8));
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  FUN_00026f84(param_1,2);
  return;
}



undefined4 * FUN_0002c0c0(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  undefined4 *puVar4;
  char *__s;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  size_t __nmemb;
  char *__s_00;
  bool bVar11;
  undefined1 auStack_2c [8];
  
  uVar2 = time((time_t *)0x0);
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_0002b080(param_1);
    iVar3 = inet_pton(2,param_2,auStack_2c);
    __nmemb = 0;
    puVar9 = (undefined4 *)0x0;
    for (puVar10 = (undefined4 *)*param_1; puVar10 != (void *)0x0; puVar10 = (undefined4 *)*puVar10)
    {
      uVar7 = puVar10[6];
      iVar8 = puVar10[7];
      if ((((uVar7 == 0 && iVar8 == 0) ||
           (iVar1 = (int)uVar2 >> 0x1f,
           (int)(iVar1 - (iVar8 + (uint)(uVar2 < uVar7))) < 0 !=
           (SBORROW4(iVar1,iVar8) != SBORROW4(iVar1 - iVar8,(uint)(uVar2 < uVar7))))) &&
          ((*(char *)(puVar10 + 0xc) == '\0' || (param_4 != 0)))) &&
         (((puVar10[5] == 0 ||
           (((*(char *)(puVar10 + 9) != '\0' && (iVar3 == 0)) &&
            (iVar8 = FUN_0002b108(puVar10[5],param_2), iVar8 != 0)))) ||
          (((*(char *)(puVar10 + 9) == '\0' || (iVar3 != 0)) &&
           (iVar8 = FUN_0003cc64(param_2,puVar10[5]), iVar8 != 0)))))) {
        __s_00 = (char *)puVar10[4];
        if ((__s_00 == (char *)0x0) || (__n = strlen(__s_00), __n == 1)) {
LAB_0002c210:
          puVar4 = (undefined4 *)(*DAT_000515c4)(0x38);
          if (puVar4 == (void *)0x0) goto LAB_0002c318;
          memcpy(puVar4,puVar10,0x38);
          __nmemb = __nmemb + 1;
          *puVar4 = puVar9;
          puVar9 = puVar4;
        }
        else {
          __s = (char *)(*DAT_000515d0)(param_3);
          if (__s != (char *)0x0) {
            pcVar5 = strchr(__s,0x3f);
            if (pcVar5 != (char *)0x0) {
              *pcVar5 = '\0';
            }
            if (*__s != '/') {
              (*DAT_000515c8)(__s);
              __s = (char *)(*DAT_000515d0)(&DAT_0004860c);
              if (__s == (char *)0x0) goto LAB_0002c338;
            }
            sVar6 = strlen(__s);
            if ((sVar6 < __n) || (iVar8 = strncmp(__s_00,__s,__n), iVar8 != 0)) {
              bVar11 = false;
            }
            else if (__n == sVar6) {
              bVar11 = true;
            }
            else {
              bVar11 = __s[__n] == '/';
            }
            (*DAT_000515c8)(__s);
            if (bVar11) goto LAB_0002c210;
          }
        }
      }
LAB_0002c338:
    }
    if (__nmemb == 0) {
      return puVar9;
    }
    puVar10 = (undefined4 *)(*DAT_000515c4)(__nmemb * 4);
    if (puVar10 != (undefined4 *)0x0) {
      puVar4 = puVar10 + -1;
      for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)*puVar9) {
        puVar4 = puVar4 + 1;
        *puVar4 = puVar9;
      }
      qsort(puVar10,__nmemb,4,FUN_0002b178);
      puVar4 = (undefined4 *)*puVar10;
      puVar9 = puVar10 + -1;
      for (uVar2 = 0; uVar2 < __nmemb - 1; uVar2 = uVar2 + 1) {
        *(undefined4 *)puVar9[1] = puVar9[2];
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)puVar10[__nmemb - 1] = 0;
      (*DAT_000515c8)(puVar10);
      return puVar4;
    }
LAB_0002c318:
    while (puVar9 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)*puVar9;
      (*DAT_000515c8)(puVar9);
      puVar9 = puVar10;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_0002c3f8(int *param_1,int param_2)

{
  if (param_1 != (int *)0x0) {
    do {
      param_1 = (int *)*param_1;
      if (param_2 == 0) {
        (*DAT_000515c8)();
      }
      else {
        FUN_0002af7c();
      }
    } while (param_1 != (int *)0x0);
    return;
  }
  return;
}



void FUN_0002c43c(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  FUN_0002c3f8(*param_1,1);
  *param_1 = 0;
  param_1[3] = 0;
  return;
}



void FUN_0002c464(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  piVar2 = (int *)*param_1;
  piVar4 = piVar2;
  piVar3 = piVar2;
  if (piVar2 == (int *)0x0) {
    return;
  }
  do {
    piVar1 = piVar4;
    piVar4 = (int *)*piVar1;
    if (piVar1[6] == 0 && piVar1[7] == 0) {
      if (piVar2 == piVar1) {
        piVar2 = piVar4;
      }
      bVar5 = piVar3 != piVar1;
      piVar1 = piVar4;
      if (bVar5) {
        *piVar3 = (int)piVar4;
        piVar1 = piVar3;
      }
      FUN_0002af7c();
      param_1[3] = param_1[3] + -1;
    }
    piVar3 = piVar1;
  } while (piVar4 != (int *)0x0);
  *param_1 = (int)piVar2;
  return;
}



void FUN_0002c4d4(int *param_1)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1[1] != 0) {
    (*DAT_000515c8)();
  }
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    FUN_0002af7c();
  }
  (*DAT_000515c8)(param_1);
  return;
}



int FUN_0002c52c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x400);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (piVar3[3] == 0) {
    return 0;
  }
  piVar3 = (int *)*piVar3;
  iVar4 = 0;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return iVar4;
    }
    iVar1 = FUN_0002b2e8(piVar3);
    if (iVar1 == 0) break;
    iVar2 = FUN_000278f4(iVar4,iVar1);
    if (iVar2 == 0) {
      (*DAT_000515c8)(iVar1);
      FUN_000279b0(iVar4);
      return 0;
    }
    piVar3 = (int *)*piVar3;
    iVar4 = iVar2;
  }
  FUN_000279b0();
  return 0;
}



void FUN_0002c5c8(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  FILE *__stream;
  char *__filename;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x304) == 0) {
    if ((param_2 != 0) && (*(int *)(param_1 + 0x3f8) != 0)) {
      FUN_000279b0();
      *(undefined4 *)(param_1 + 0x3f8) = 0;
    }
    FUN_00026f3c(param_1,2,2);
  }
  else {
    if (*(int *)(param_1 + 0x3f8) != 0) {
      FUN_0002c060();
    }
    FUN_00026f3c(param_1,2,2);
    piVar3 = *(int **)(param_1 + 0x400);
    __filename = *(char **)(param_1 + 0x304);
    if ((piVar3 != (int *)0x0) && (piVar3[3] != 0)) {
      FUN_0002b080(piVar3);
      iVar2 = FUN_00039e30(&DAT_0004659b,__filename);
      if (iVar2 == 0) {
        __stream = fopen64(__filename,"w");
        bVar1 = false;
        if (__stream == (FILE *)0x0) {
LAB_0002c740:
          FUN_000305d4(param_1,"WARNING: failed to save cookies in %s\n",
                       *(undefined4 *)(param_1 + 0x304));
          goto LAB_0002c704;
        }
      }
      else {
        bVar1 = true;
        __stream = stdout;
      }
      fputs("# Netscape HTTP Cookie File\n# http://curl.haxx.se/docs/http-cookies.html\n# This file was generated by libcurl! Edit at your own risk.\n\n"
            ,__stream);
      for (piVar3 = (int *)*piVar3; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
        iVar2 = FUN_0002b2e8(piVar3);
        if (iVar2 == 0) {
          FUN_000377bc(__stream,"#\n# Fatal libcurl error\n");
          if (!bVar1) {
            fclose(__stream);
          }
          goto LAB_0002c740;
        }
        FUN_000377bc(__stream,"%s\n",iVar2);
        (*DAT_000515c8)(iVar2);
      }
      if (!bVar1) {
        fclose(__stream);
      }
    }
  }
LAB_0002c704:
  if ((param_2 != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 ||
      (*(int *)(param_1 + 0x400) != *(int *)(*(int *)(param_1 + 0x48) + 0x18))))) {
    FUN_0002c4d4(*(undefined4 *)(param_1 + 0x400));
  }
  FUN_00026f84(param_1,2);
  return;
}



undefined4 FUN_0002c774(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar1 = (*DAT_000515d4)(1,0x60,param_3,DAT_000515d4,param_4);
  iVar2 = *param_1;
  *(undefined4 *)(iVar3 + 0x110) = uVar1;
  if (*(int *)(iVar2 + 0x110) == 0) {
    uVar1 = 0x1b;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_0002c7b4(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1 & param_1[2];
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 8) == 0) {
        if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 1) == 0) {
            param_1[1] = 0x40000000;
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
            param_1[1] = 1;
          }
          goto LAB_0002c814;
        }
        uVar1 = 0x20;
      }
      else {
        uVar1 = 8;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 4;
  }
  param_1[1] = uVar1;
  uVar2 = 1;
LAB_0002c814:
  param_1[2] = 0;
  return uVar2;
}



undefined1 FUN_0002c820(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 200);
  if (*(char *)(iVar2 + 0x2b8) == '\0') {
    return 0;
  }
  if (iVar3 < 400) {
    return 0;
  }
  if (iVar3 == 0x197 || iVar3 == 0x191) {
    if (iVar3 == 0x191) {
      cVar1 = (char)param_1[0x77];
    }
    else {
      if (iVar3 != 0x197) goto LAB_0002c870;
      cVar1 = *(char *)((int)param_1 + 0x1dd);
    }
    if (cVar1 != '\0') {
LAB_0002c870:
      return *(undefined1 *)(iVar2 + 0x85d8);
    }
  }
  return 1;
}



uint FUN_0002c8dc(void *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint __n;
  
  iVar4 = *(int *)(*param_4 + 0x110);
  uVar1 = *(uint *)(iVar4 + 8);
  iVar2 = *(int *)(iVar4 + 0xc);
  if (uVar1 == 0 && iVar2 == 0) {
    return 0;
  }
  __n = param_3 * param_2;
  *(bool *)(*param_4 + 0x10f) = *(int *)(iVar4 + 0x58) == 1;
  if ((int)-(iVar2 + (uint)(__n < uVar1)) < 0 ==
      (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(__n < uVar1)))) {
    memcpy(param_1,*(void **)(iVar4 + 0x10),uVar1);
    iVar2 = *(int *)(iVar4 + 0x50);
    iVar3 = *(int *)(iVar4 + 0x54);
    uVar1 = *(uint *)(iVar4 + 8);
    if (iVar2 != 0 || iVar3 != 0) {
      *(int *)(iVar4 + 8) = iVar2;
      *(int *)(iVar4 + 0xc) = iVar3;
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 0x48);
      param_4[0x99] = *(int *)(iVar4 + 0x40);
      param_4[0x9a] = *(int *)(iVar4 + 0x44);
      *(undefined4 *)(iVar4 + 0x50) = 0;
      *(undefined4 *)(iVar4 + 0x54) = 0;
      *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x58) + 1;
      return uVar1;
    }
    *(int *)(iVar4 + 8) = iVar2;
    *(int *)(iVar4 + 0xc) = iVar3;
    return uVar1;
  }
  memcpy(param_1,*(void **)(iVar4 + 0x10),__n);
  uVar1 = *(uint *)(iVar4 + 8);
  *(uint *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + __n;
  *(uint *)(iVar4 + 8) = uVar1 - __n;
  *(uint *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) - (uint)(uVar1 < __n);
  return __n;
}



undefined4 FUN_0002c9b4(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *param_1;
  iVar3 = *(int *)(iVar9 + 0x110);
  if (iVar3 == 0) {
    return 0;
  }
  iVar5 = *(int *)(iVar9 + 0x240);
  if (iVar5 == 1) {
    return 0;
  }
  if (iVar5 == 5) {
    return 0;
  }
  cVar1 = *(char *)((int)param_1 + 0x1e6);
  uVar7 = *(uint *)(iVar3 + 0x28);
  iVar8 = *(int *)(iVar3 + 0x2c);
  if (cVar1 == '\0') {
    if (iVar5 == 3) {
      sVar4 = *(uint *)(iVar3 + 8);
      uVar6 = *(uint *)(iVar3 + 0xc);
      goto LAB_0002ca60;
    }
    if (iVar5 == 4) {
      sVar4 = *(uint *)(iVar9 + 0x8648);
      uVar6 = *(uint *)(iVar9 + 0x864c);
      goto LAB_0002ca60;
    }
    if (iVar5 != 2) {
      sVar4 = 0xffffffff;
      uVar6 = 0xffffffff;
      goto LAB_0002ca60;
    }
    sVar4 = *(uint *)(iVar9 + 0x160);
    uVar6 = *(uint *)(iVar9 + 0x164);
    if ((uVar6 != 0xffffffff || sVar4 != 0xffffffff) || (*(char **)(iVar9 + 0x154) == (char *)0x0))
    goto LAB_0002ca60;
    sVar4 = strlen(*(char **)(iVar9 + 0x154));
  }
  else {
    sVar4 = 0;
  }
  uVar6 = 0;
LAB_0002ca60:
  *(undefined1 *)((int)param_1 + 0x1e7) = 0;
  if ((int)(iVar8 - (uVar6 + (uVar7 < sVar4))) < 0 !=
      (SBORROW4(iVar8,uVar6) != SBORROW4(iVar8 - uVar6,(uint)(uVar7 < sVar4))) ||
      (sVar4 & uVar6) == 0xffffffff) {
    if ((((*(int *)(iVar9 + 0x85cc) == 8) || (*(int *)(iVar9 + 0x85bc) == 8)) ||
        (*(int *)(iVar9 + 0x85cc) == 0x20)) || (*(int *)(iVar9 + 0x85bc) == 0x20)) {
      if ((((int)(uVar6 - (iVar8 + (uint)(sVar4 < uVar7))) < (int)(uint)(sVar4 - uVar7 < 2000)) ||
          (param_1[0x9b] != 0)) || (param_1[0xa1] != 0)) {
        if (cVar1 != '\0') {
          return 0;
        }
        *(undefined1 *)((int)param_1 + 0x1e7) = 1;
        FUN_000305d4(iVar9,"Rewind stream after send\n");
        return 0;
      }
      if ((char)param_1[0x76] != '\0') {
        return 0;
      }
      FUN_000305d4(iVar9,"NTLM send, close instead of sending %lld bytes\n");
    }
    *(undefined1 *)(param_1 + 0x76) = 1;
    *(undefined4 *)(iVar9 + 0x50) = 0;
    *(undefined4 *)(iVar9 + 0x54) = 0;
  }
  if (uVar7 == 0 && iVar8 == 0) {
    return 0;
  }
  uVar2 = FUN_000383c0(param_1);
  return uVar2;
}



int FUN_0002cb64(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *param_1;
  iVar8 = *(int *)(iVar7 + 0x110);
  param_1[0x99] = *(int *)(iVar7 + 0x17c);
  param_1[0x9a] = *(int *)(iVar7 + 300);
  param_1[0x97] = *(int *)(iVar7 + 0x158);
  param_1[0x98] = *(int *)(iVar7 + 0x1b0);
  if (iVar8 != 0) {
    puVar4 = *(undefined4 **)(iVar8 + 0x5c);
    if (puVar4 != (undefined4 *)0x0) {
      (*DAT_000515c8)(*puVar4);
      (*DAT_000515c8)(puVar4);
      *(undefined4 *)(iVar8 + 0x5c) = 0;
    }
    if (*(int *)(iVar7 + 0x240) == 3) {
      uVar5 = *(uint *)(iVar8 + 0x20);
      iVar6 = *(int *)(iVar8 + 0x24);
      uVar1 = *(uint *)(iVar8 + 0x28);
      iVar3 = *(int *)(iVar8 + 0x2c);
      *(uint *)(iVar7 + 0x70) = uVar1 + uVar5;
      *(uint *)(iVar7 + 0x74) = iVar3 + iVar6 + (uint)CARRY4(uVar1,uVar5);
      FUN_0003e750(iVar8);
      if (*(FILE **)(iVar8 + 0x38) != (FILE *)0x0) {
        fclose(*(FILE **)(iVar8 + 0x38));
        *(undefined4 *)(iVar8 + 0x38) = 0;
      }
    }
    else if (*(int *)(iVar7 + 0x240) == 4) {
      uVar5 = *(uint *)(iVar8 + 0x20);
      iVar6 = *(int *)(iVar8 + 0x24);
      uVar1 = *(uint *)(iVar8 + 0x28);
      iVar3 = *(int *)(iVar8 + 0x2c);
      *(uint *)(iVar7 + 0x70) = uVar1 + uVar5;
      *(uint *)(iVar7 + 0x74) = iVar3 + iVar6 + (uint)CARRY4(uVar1,uVar5);
    }
    if (param_2 != 0) {
      return param_2;
    }
    if (((param_3 == 0) && ((char)param_1[0x79] == '\0')) && (*(char *)(iVar7 + 0x2e1) == '\0')) {
      uVar1 = *(uint *)(iVar7 + 0x80);
      uVar2 = *(uint *)(iVar8 + 0x20) + uVar1;
      uVar5 = *(uint *)(iVar7 + 0x84);
      if ((int)((*(int *)(iVar8 + 0x24) + ((int)uVar1 >> 0x1f) +
                (uint)CARRY4(*(uint *)(iVar8 + 0x20),uVar1)) -
               (((int)uVar5 >> 0x1f) + (uint)(uVar2 < uVar5))) < (int)(uint)(uVar2 == uVar5)) {
        FUN_00030648(iVar7,"Empty reply from server");
        return 0x34;
      }
    }
  }
  return 0;
}



bool FUN_0002ccb0(int param_1,int *param_2)

{
  if (1 < *(int *)(param_1 + 0x244)) {
    return true;
  }
  if (*(int *)(param_1 + 0x244) != 1) {
    if (*param_2 == 0xb) {
      return true;
    }
    if (*param_2 != 10) {
      return *(int *)(param_1 + 0x860c) != 10;
    }
  }
  return false;
}



int FUN_0002ccfc(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x480) != 1) {
    if ((*(uint *)(*(int *)(param_1 + 0x208) + 0x40) & 1) != 0) {
      iVar1 = FUN_00028680(param_1,0,param_2);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x1d8) = 1;
      }
      return iVar1;
    }
    *param_2 = 1;
  }
  return 0;
}



bool FUN_0002cd34(undefined4 *param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  char *__s;
  
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      iVar2 = FUN_0003cccc("HTTP/",param_2,5);
      return iVar2 != 0;
    }
    __s = (char *)*param_1;
    sVar1 = strlen(__s);
    iVar2 = FUN_0003cccc(__s,param_2,sVar1);
    if (iVar2 != 0) break;
    param_1 = (undefined4 *)param_1[1];
  }
  return true;
}



undefined4 FUN_0002cd98(int param_1,int param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = param_3 + *(int *)(param_2 + 0x58);
  if (uVar3 < *(uint *)(param_1 + 0x530)) {
LAB_0002ce30:
    memcpy(*(void **)(param_2 + 0x54),*(void **)(param_2 + 0x60),param_3);
    iVar1 = *(int *)(param_2 + 0x54);
    *(size_t *)(param_2 + 0x54) = iVar1 + param_3;
    *(size_t *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + param_3;
    *(undefined1 *)(iVar1 + param_3) = 0;
    return 0;
  }
  if (uVar3 < 0x19001) {
    uVar4 = uVar3 * 3 >> 1;
    iVar5 = *(int *)(param_2 + 0x54);
    uVar3 = *(uint *)(param_1 + 0x530) << 1;
    iVar1 = *(int *)(param_1 + 0x52c);
    if (uVar4 < uVar3) {
      uVar4 = uVar3;
    }
    iVar2 = (*DAT_000515cc)(iVar1,uVar4);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x52c) = iVar2;
      *(uint *)(param_1 + 0x530) = uVar4;
      *(int *)(param_2 + 0x54) = iVar2 + (iVar5 - iVar1);
      goto LAB_0002ce30;
    }
    FUN_00030648(param_1,"Failed to alloc memory for big header!");
  }
  else {
    FUN_00030648(param_1,"Avoided giant realloc for header (max is %d)!",0x19000);
  }
  return 0x1b;
}



undefined4 FUN_0002ce70(int *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  sVar1 = strlen(param_2);
  puVar3 = *(undefined4 **)(*param_1 + 0x208);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = FUN_0003cccc(*puVar3,param_2,sVar1);
    if (iVar2 != 0) break;
    puVar3 = (undefined4 *)puVar3[1];
  }
  return *puVar3;
}



undefined4 FUN_0002cec8(int *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  sVar1 = strlen(param_2);
  iVar2 = *param_1;
  if ((*(char *)((int)param_1 + 0x1da) == '\0') || (*(char *)(iVar2 + 0x214) == '\0')) {
    puVar3 = *(undefined4 **)(iVar2 + 0x208);
  }
  else {
    puVar3 = *(undefined4 **)(iVar2 + 0x20c);
  }
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = FUN_0003cccc(*puVar3,param_2,sVar1);
    if (iVar2 != 0) break;
    puVar3 = (undefined4 *)puVar3[1];
  }
  return *puVar3;
}



void * FUN_0002cf3c(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  void *__dest;
  byte *pbVar5;
  
  iVar2 = __ctype_b;
  do {
    pbVar3 = param_1;
    bVar1 = *pbVar3;
    param_1 = pbVar3 + 1;
  } while (bVar1 != 0x3a && bVar1 != 0);
  pbVar4 = pbVar3 + 1;
  if (bVar1 == 0) {
    pbVar4 = pbVar3;
  }
  do {
    pbVar3 = pbVar4;
    if (*pbVar3 == 0) break;
    pbVar4 = pbVar3 + 1;
  } while ((*(ushort *)(__ctype_b + (uint)*pbVar3 * 2) & 0x20) != 0);
  pbVar4 = (byte *)strchr((char *)pbVar3,0xd);
  if (((pbVar4 == (byte *)0x0) &&
      (pbVar4 = (byte *)strchr((char *)pbVar3,10), pbVar4 == (byte *)0x0)) &&
     (pbVar4 = (byte *)strchr((char *)pbVar3,0), pbVar4 == (byte *)0x0)) {
    return (void *)0x0;
  }
  do {
    pbVar5 = pbVar4;
    if (pbVar5 <= pbVar3) break;
    pbVar4 = pbVar5 + -1;
  } while ((*(ushort *)(iVar2 + (uint)*pbVar5 * 2) & 0x20) != 0);
  __dest = (void *)(*DAT_000515c4)(pbVar5 + (2 - (int)pbVar3));
  if (__dest != (void *)0x0) {
    memcpy(__dest,pbVar3,(size_t)(pbVar5 + (1 - (int)pbVar3)));
    *(byte *)((int)__dest + (int)(pbVar5 + (1 - (int)pbVar3))) = 0;
  }
  return __dest;
}



int FUN_0002d038(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar3 = *(int *)(iVar4 + 200);
  if (iVar3 - 100U < 100) {
    return 0;
  }
  if (*(char *)(iVar4 + 0x85d8) != '\0') {
    if (*(char *)(iVar4 + 0x2b8) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = 0x16;
    }
    return iVar3;
  }
  uVar1 = 0;
  if ((char)param_1[0x77] != '\0') {
    if (iVar3 == 0x191) {
LAB_0002d0b0:
      uVar1 = FUN_0002c7b4(iVar4 + 0x85b8);
      if (uVar1 == 0) {
        *(undefined1 *)(iVar4 + 0x85d8) = 1;
      }
    }
    else {
      uVar1 = 0;
      if (*(char *)((int)param_1 + 0x1e6) != '\0') {
        if (iVar3 < 300) goto LAB_0002d0b0;
        uVar1 = 0;
      }
    }
  }
  uVar2 = 0;
  if (*(char *)((int)param_1 + 0x1dd) == '\0') goto LAB_0002d11c;
  if (*(int *)(iVar4 + 200) != 0x197) {
    uVar2 = 0;
    if (*(char *)((int)param_1 + 0x1e6) == '\0') goto LAB_0002d11c;
    if (299 < *(int *)(iVar4 + 200)) {
      uVar2 = 0;
      goto LAB_0002d11c;
    }
  }
  uVar2 = FUN_0002c7b4(iVar4 + 0x85c8);
  if (uVar2 == 0) {
    *(undefined1 *)(iVar4 + 0x85d8) = 1;
  }
LAB_0002d11c:
  if (((uVar2 | uVar1) & 0xff) == 0) {
    if ((((*(int *)(iVar4 + 200) < 300) && (*(char *)(iVar4 + 0x85c4) == '\0')) &&
        (*(char *)((int)param_1 + 0x1e6) != '\0')) && ((*(uint *)(iVar4 + 0x240) & 0xfffffffb) != 1)
       ) {
      iVar3 = (*DAT_000515d0)(*(undefined4 *)(iVar4 + 1000));
      *(int *)(iVar4 + 0x100) = iVar3;
      if (iVar3 == 0) {
        return 0x1b;
      }
      *(undefined1 *)(iVar4 + 0x85c4) = 1;
    }
  }
  else {
    if (*(int *)(iVar4 + 0x100) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(iVar4 + 0x100) = 0;
    }
    iVar3 = (*DAT_000515d0)(*(undefined4 *)(iVar4 + 1000));
    *(int *)(iVar4 + 0x100) = iVar3;
    if (iVar3 == 0) {
      return 0x1b;
    }
    if ((((*(uint *)(iVar4 + 0x240) & 0xfffffffb) != 1) && (*(char *)((int)param_1 + 0x1e7) == '\0')
        ) && (iVar3 = FUN_0002c9b4(param_1), iVar3 != 0)) {
      return iVar3;
    }
  }
  iVar3 = FUN_0002c820(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_00030648(iVar4,"The requested URL returned error: %d",*(undefined4 *)(iVar4 + 200));
  return 0x16;
}



int FUN_0002d23c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int local_28;
  int local_24;
  
  iVar7 = *param_1;
  if (((*(char *)((int)param_1 + 0x1db) == '\0') || (*(char *)((int)param_1 + 0x1dd) == '\0')) &&
     ((char)param_1[0x77] == '\0')) {
    *(undefined1 *)(iVar7 + 0x85c4) = 1;
    *(undefined1 *)(iVar7 + 0x85d4) = 1;
    return 0;
  }
  iVar4 = param_3;
  if ((*(int *)(iVar7 + 0x85b8) != 0) && (iVar4 = *(int *)(iVar7 + 0x85bc), iVar4 == 0)) {
    *(int *)(iVar7 + 0x85bc) = *(int *)(iVar7 + 0x85b8);
  }
  if ((*(int *)(iVar7 + 0x85c8) != 0) && (iVar4 = *(int *)(iVar7 + 0x85cc), iVar4 == 0)) {
    *(int *)(iVar7 + 0x85cc) = *(int *)(iVar7 + 0x85c8);
  }
  *(undefined1 *)(iVar7 + 0x85d4) = 1;
  local_28 = param_3;
  local_24 = param_4;
  if ((((*(char *)(iVar7 + 0x8540) != '\0') && (*(char *)((int)param_1 + 0x1ea) == '\0')) &&
      (*(int *)(iVar7 + 0x8544) != 0)) &&
     ((*(char *)(iVar7 + 699) == '\0' &&
      (iVar4 = FUN_0003cc64(*(int *)(iVar7 + 0x8544),param_1[0x26],iVar4,0,param_1,param_2),
      iVar4 == 0)))) {
    *(undefined1 *)(iVar7 + 0x85c4) = 1;
    return 0;
  }
  iVar4 = *param_1;
  if (*(int *)(iVar7 + 0x85bc) == 2) {
    iVar2 = FUN_0003b160(param_1,0,param_2,param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
LAB_0002d45c:
    FUN_000305d4(iVar4,"%s auth using %s with user \'%s\'\n","Server");
    *(byte *)(iVar7 + 0x85c5) = *(byte *)(iVar7 + 0x85c4) ^ 1;
  }
  else {
    if (*(int *)(iVar7 + 0x85bc) == 1) {
      if (((char)param_1[0x77] == '\0') ||
         (iVar2 = FUN_0002ce70(param_1,"Authorization:"), iVar2 != 0)) {
        pcVar5 = (char *)0x0;
      }
      else {
        iVar6 = *param_1;
        pcVar5 = (char *)(iVar6 + 0x534);
        local_28 = iVar2;
        local_24 = iVar2;
        FUN_000365a4(pcVar5,0x4001,"%s:%s",param_1[0x48],param_1[0x49]);
        sVar3 = strlen(pcVar5);
        iVar2 = FUN_0003d938(iVar6,pcVar5,sVar3,&local_24,&local_28);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (local_24 == 0) {
          return 9;
        }
        if (param_1[0x89] != 0) {
          (*DAT_000515c8)();
          param_1[0x89] = 0;
        }
        iVar2 = FUN_000375e8("%sAuthorization: Basic %s\r\n",&DAT_000467ca,local_24);
        pcVar1 = DAT_000515c8;
        param_1[0x89] = iVar2;
        (*pcVar1)(local_24);
        if (param_1[0x89] == 0) {
          return 0x1b;
        }
        pcVar5 = "Basic";
      }
      *(undefined1 *)(iVar7 + 0x85c4) = 1;
      if (pcVar5 != (char *)0x0) goto LAB_0002d45c;
    }
    *(undefined1 *)(iVar7 + 0x85c5) = 0;
  }
  return 0;
}



void FUN_0002d4dc(int *param_1,int param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  byte *pbVar10;
  
  iVar7 = *param_1;
  piVar9 = param_1;
  iVar4 = param_2;
  pbVar10 = param_3;
  if (param_2 == 0) {
    puVar8 = (uint *)(iVar7 + 0x868c);
    iVar6 = iVar7 + 0x85b8;
  }
  else {
    puVar8 = (uint *)(iVar7 + 0x8688);
    iVar6 = iVar7 + 0x85c8;
  }
  do {
    if (*param_3 == 0) {
      return;
    }
    iVar2 = FUN_0003cccc("Digest",param_3,6,param_4,piVar9,iVar4,pbVar10);
    if (iVar2 == 0) {
      iVar4 = FUN_0003cccc("Basic",param_3,5);
      if (iVar4 != 0) {
        *puVar8 = *puVar8 | 1;
        *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 1;
        iVar4 = *(int *)(iVar6 + 4);
        if (iVar4 == 1) {
          *(int *)(iVar6 + 8) = iVar2;
          FUN_000305d4(iVar7,"Authentication problem. Ignoring this.\n");
          uVar5 = (undefined1)iVar4;
          goto LAB_0002d5f0;
        }
      }
    }
    else if ((*(uint *)(iVar6 + 8) & 2) == 0) {
      *puVar8 = *puVar8 | 2;
      *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 2;
      iVar3 = FUN_0003ad30(param_1,param_2,param_3);
      iVar2 = iVar4;
      if (iVar3 != 4) {
        FUN_000305d4(iVar7,"Authentication problem. Ignoring this.\n");
        uVar5 = 1;
LAB_0002d5f0:
        *(undefined1 *)(iVar7 + 0x85d8) = uVar5;
        iVar2 = iVar4;
      }
    }
    else {
      FUN_000305d4(iVar7,"Ignoring duplicate digest auth header.\n");
      iVar2 = iVar4;
    }
    do {
      param_4 = param_3;
      bVar1 = *param_4;
      param_3 = param_4 + 1;
    } while (bVar1 != 0x2c && bVar1 != 0);
    if (bVar1 == 0x2c) {
      param_4 = param_4 + 1;
    }
    do {
      param_3 = param_4;
      param_4 = param_3 + 1;
      iVar4 = iVar2;
      if (*param_3 == 0) break;
    } while ((*(ushort *)(__ctype_b + (uint)*param_3 * 2) & 0x20) != 0);
  } while( true );
}



void FUN_0002d65c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_000515d4)(1,0xc,param_3,DAT_000515d4,param_4);
  return;
}



int FUN_0002d67c(int *param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  size_t __n;
  uint uVar5;
  uint local_2c [2];
  
  uVar4 = param_1[2];
  iVar3 = *(int *)(*param_2 + 0x110);
  iVar1 = param_2[param_5 + 0x55];
  __src = (void *)*param_1;
  __n = uVar4;
  if ((*(uint *)(param_2[0x81] + 0x40) & 1) != 0) {
    if (0x3fff < uVar4) {
      __n = 0x4000;
    }
    memcpy((void *)(*param_2 + 0x4535),__src,__n);
    __src = (void *)(*param_2 + 0x4535);
  }
  iVar1 = FUN_00030348(param_2,iVar1,__src,__n,local_2c);
  if (iVar1 != 0) goto LAB_0002d828;
  uVar2 = uVar4 - param_4;
  if (local_2c[0] <= uVar4 - param_4) {
    uVar2 = local_2c[0];
  }
  uVar5 = local_2c[0] - uVar2;
  if (*(char *)(*param_2 + 0x2c8) == '\0') {
    if (uVar5 != 0) goto LAB_0002d784;
  }
  else {
    FUN_00030518(*param_2,2,__src,uVar2,param_2);
    if (uVar5 != 0) {
      FUN_00030518(*param_2,4,(int)__src + uVar2,uVar5,param_2);
LAB_0002d784:
      uVar2 = *(uint *)(iVar3 + 0x28);
      *(uint *)(iVar3 + 0x28) = uVar2 + uVar5;
      *(uint *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + (uint)CARRY4(uVar2,uVar5);
    }
  }
  *param_3 = *param_3 + local_2c[0];
  if (iVar3 == 0) {
    if (local_2c[0] != uVar4) {
      return 0x37;
    }
    *(undefined1 *)((int)param_2 + 0x245) = 0;
  }
  else {
    if (local_2c[0] != uVar4) {
      iVar1 = *param_1;
      *(int *)(iVar3 + 0x40) = param_2[0x99];
      *(int *)(iVar3 + 0x44) = param_2[0x9a];
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar3 + 0xc);
      param_2[0x99] = (int)FUN_0002c8dc;
      param_2[0x9a] = (int)param_2;
      *(uint *)(iVar3 + 8) = uVar4 - local_2c[0];
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(uint *)(iVar3 + 0x10) = iVar1 + local_2c[0];
      *(int **)(iVar3 + 0x5c) = param_1;
      *(undefined4 *)(iVar3 + 0x58) = 1;
      return 0;
    }
    *(undefined4 *)(iVar3 + 0x58) = 2;
  }
LAB_0002d828:
  if (*param_1 != 0) {
    (*DAT_000515c8)();
  }
  (*DAT_000515c8)(param_1);
  return iVar1;
}



undefined4 FUN_0002d860(int *param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1[2];
  iVar1 = *param_1;
  if (~param_3 < uVar2) {
    if (iVar1 != 0) {
      (*DAT_000515c8)();
      *param_1 = 0;
    }
LAB_0002d944:
    (*DAT_000515c8)(param_1);
    return 0x1b;
  }
  if ((iVar1 == 0) || (param_1[1] - 1U < param_3 + uVar2)) {
    if (((int)param_3 < 0) || (((int)uVar2 < 0 || (~(param_3 << 1) < uVar2 << 1)))) {
      iVar3 = -1;
    }
    else {
      iVar3 = (param_3 + uVar2) * 2;
    }
    if (iVar1 == 0) {
      iVar1 = (*DAT_000515c4)(iVar3);
    }
    else {
      iVar1 = (*DAT_000515cc)(iVar1,iVar3);
    }
    if (iVar1 == 0) {
      if (*param_1 != 0) {
        (*DAT_000515c8)();
        *param_1 = 0;
      }
      goto LAB_0002d944;
    }
    *param_1 = iVar1;
    param_1[1] = iVar3;
  }
  memcpy((void *)(*param_1 + param_1[2]),param_2,param_3);
  param_1[2] = param_1[2] + param_3;
  return 0;
}



undefined4 FUN_0002d990(int *param_1,undefined4 param_2)

{
  char *__s;
  size_t sVar1;
  undefined4 uVar2;
  
  __s = (char *)FUN_0003769c(param_2);
  if (__s == (char *)0x0) {
    if (*param_1 != 0) {
      (*DAT_000515c8)();
    }
    (*DAT_000515c8)(param_1);
    uVar2 = 0x1b;
  }
  else {
    sVar1 = strlen(__s);
    uVar2 = FUN_0002d860(param_1,__s,sVar1);
    (*DAT_000515c8)(__s);
  }
  return uVar2;
}



undefined4 FUN_0002da1c(int param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  byte *__s;
  uint uVar5;
  
  sVar2 = strlen(param_2);
  iVar3 = FUN_0003cccc(param_1,param_2,sVar2);
  if (iVar3 != 0) {
    pbVar1 = (byte *)(param_1 + sVar2);
    do {
      __s = pbVar1;
      if (*__s == 0) break;
      pbVar1 = __s + 1;
    } while ((*(ushort *)(__ctype_b + (uint)*__s * 2) & 0x20) != 0);
    pcVar4 = strchr((char *)__s,0xd);
    if ((pcVar4 == (char *)0x0) && (pcVar4 = strchr((char *)__s,10), pcVar4 == (char *)0x0)) {
      pcVar4 = strchr((char *)__s,0);
    }
    sVar2 = strlen(param_3);
    for (uVar5 = (int)pcVar4 - (int)__s; sVar2 <= uVar5; uVar5 = uVar5 - 1) {
      iVar3 = FUN_0003cccc(__s + (((int)pcVar4 - (int)__s) - uVar5),param_3,sVar2);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



int FUN_0002db04(int *param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *__s;
  int local_30 [3];
  
  local_30[2] = param_3;
  local_30[1] = param_2;
  iVar5 = *param_1;
  if (param_2 == 0) {
    local_30[0] = *(int *)(iVar5 + 0x208);
    if ((*(char *)((int)param_1 + 0x1db) != '\0') && (*(char *)((int)param_1 + 0x1e5) == '\0')) {
      iVar6 = 1;
      if (*(char *)(iVar5 + 0x214) != '\0') {
        iVar6 = 2;
        local_30[1] = *(int *)(iVar5 + 0x20c);
      }
      goto LAB_0002db70;
    }
  }
  else if (*(char *)(iVar5 + 0x214) == '\0') {
    local_30[0] = *(int *)(iVar5 + 0x208);
  }
  else {
    local_30[0] = *(int *)(iVar5 + 0x20c);
  }
  iVar6 = 1;
LAB_0002db70:
  iVar7 = 0;
  do {
    for (puVar4 = (undefined4 *)local_30[iVar7]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      __s = (char *)*puVar4;
      pbVar1 = (byte *)strchr(__s,0x3a);
      if (pbVar1 == (byte *)0x0) {
        pbVar1 = (byte *)strchr(__s,0x3b);
        if (pbVar1 != (byte *)0x0) {
          do {
            uVar3 = (uint)pbVar1[1];
            if (uVar3 == 0) {
              if (*pbVar1 == 0x3b) {
                *pbVar1 = 0x3a;
                goto LAB_0002dccc;
              }
              break;
            }
            pbVar1 = pbVar1 + 1;
          } while ((*(ushort *)(__ctype_b + uVar3 * 2) & 0x20) != 0);
        }
      }
      else {
        do {
          pbVar1 = pbVar1 + 1;
          if (*pbVar1 == 0) goto LAB_0002dc24;
        } while ((*(ushort *)(__ctype_b + (uint)*pbVar1 * 2) & 0x20) != 0);
        if (((((param_1[0x8c] == 0) || (iVar2 = FUN_0003cccc("Host:",__s,5), iVar2 == 0)) &&
             ((*(int *)(iVar5 + 0x240) != 3 ||
              (iVar2 = FUN_0003cccc("Content-Type:",*puVar4,0xd), iVar2 == 0)))) &&
            ((*(char *)((int)param_1 + 0x1e6) == '\0' ||
             (iVar2 = FUN_0003cccc("Content-Length",*puVar4,0xe), iVar2 == 0)))) &&
           ((param_1[0x8f] == 0 || (iVar2 = FUN_0003cccc("Connection",*puVar4,10), iVar2 == 0)))) {
LAB_0002dccc:
          iVar2 = FUN_0002d990(param_3,"%s\r\n",*puVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
      }
LAB_0002dc24:
    }
    iVar7 = iVar7 + 1;
    if (iVar6 <= iVar7) {
      return 0;
    }
  } while( true );
}



int FUN_0002dd04(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = FUN_0003caf4(*(undefined4 *)(param_1 + 0x23c),&local_44);
  if (iVar1 == 0) {
    if (local_2c == 0) {
      local_2c = 6;
    }
    else {
      local_2c = local_2c + -1;
    }
    FUN_000365a4(param_1 + 0x534,0x3fff,"%s, %02d %s %4d %02d:%02d:%02d GMT",
                 (&PTR_DAT_0004816c)[local_2c],local_38,(&DAT_000484d4)[local_34],local_30 + 0x76c,
                 local_3c,local_40,local_44);
    if (*(int *)(param_1 + 0x238) == 2) {
      pcVar2 = "If-Unmodified-Since: %s\r\n";
    }
    else if (*(int *)(param_1 + 0x238) == 3) {
      pcVar2 = "Last-Modified: %s\r\n";
    }
    else {
      pcVar2 = "If-Modified-Since: %s\r\n";
    }
    iVar1 = FUN_0002d990(param_2,pcVar2,param_1 + 0x534);
  }
  else {
    FUN_00030648(param_1,"Invalid TIMEVALUE");
  }
  return iVar1;
}



uint FUN_0002de00(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  size_t sVar7;
  int iVar8;
  int *piVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 extraout_r1;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  char *pcVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined1 *puVar28;
  int iVar29;
  int *piVar30;
  int *piVar31;
  bool bVar32;
  undefined8 uVar33;
  uint local_58;
  int iStack_54;
  int local_50;
  char *local_4c;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  iVar29 = *param_1;
  pcVar23 = *(char **)(iVar29 + 0x8624);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar17 = param_1[0x4f];
  iVar2 = param_1[0x26];
  uVar20 = *(uint *)(iVar29 + 0x240);
  *param_2 = 1;
  if (0x13 < iVar17) {
    return 1;
  }
  if (param_1[0x123] == 2) {
    return 1;
  }
  piVar30 = *(int **)(iVar29 + 0x110);
  if (*(char *)(iVar29 + 0x8540) == '\0') {
    if (*(int *)(iVar29 + 0x8544) != 0) {
      (*DAT_000515c8)();
    }
    iVar17 = (*DAT_000515d0)(param_1[0x26]);
    *(int *)(iVar29 + 0x8544) = iVar17;
    if (iVar17 == 0) {
      return 0x1b;
    }
  }
  piVar30[8] = 0;
  piVar30[9] = 0;
  piVar30[10] = 0;
  piVar30[0xb] = 0;
  if (((*(uint *)(param_1[0x81] + 0x3c) & 7) != 0) && (*(char *)(iVar29 + 0x2c1) != '\0')) {
    uVar20 = 4;
  }
  puVar21 = *(undefined **)(iVar29 + 0x308);
  if (puVar21 == (undefined *)0x0) {
    if (*(char *)(iVar29 + 0x2bf) == '\0') {
      if (uVar20 - 2 < 4) {
        puVar21 = *(undefined **)(&DAT_000468e0 + (uVar20 - 2) * 4);
      }
      else {
        puVar21 = &DAT_00046be4;
      }
    }
    else {
      puVar21 = &DAT_00046bdf;
    }
  }
  iVar17 = FUN_0002ce70(param_1,"User-Agent:");
  if ((iVar17 != 0) && (param_1[0x87] != 0)) {
    (*DAT_000515c8)();
    param_1[0x87] = 0;
  }
  uVar3 = FUN_0002d23c(param_1,puVar21,pcVar23,0);
  if (uVar3 != 0) {
    return uVar3;
  }
  if (((*(char *)(iVar29 + 0x85c5) == '\0') && (*(char *)(iVar29 + 0x85d5) == '\0')) ||
     ((uVar20 & 0xfffffffb) == 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x1e6) = uVar1;
  if (param_1[0x8b] != 0) {
    (*DAT_000515c8)();
    param_1[0x8b] = 0;
  }
  if ((*(int *)(iVar29 + 0x3f0) == 0) || (iVar17 = FUN_0002ce70(param_1,"Referer:"), iVar17 != 0)) {
    param_1[0x8b] = 0;
  }
  else {
    iVar17 = FUN_000375e8("Referer: %s\r\n",*(undefined4 *)(iVar29 + 0x3f0));
    param_1[0x8b] = iVar17;
    if (iVar17 == 0) {
      return 0x1b;
    }
  }
  if ((*(int *)(iVar29 + 0x300) == 0) || (iVar17 = FUN_0002ce70(param_1,"Cookie:"), iVar17 != 0)) {
    local_50 = 0;
  }
  else {
    local_50 = *(int *)(iVar29 + 0x300);
  }
  iVar17 = FUN_0002ce70(param_1,"Accept-Encoding:");
  if ((iVar17 == 0) && (*(int *)(iVar29 + 0x310) != 0)) {
    if (param_1[0x88] != 0) {
      (*DAT_000515c8)();
      param_1[0x88] = 0;
    }
    iVar17 = FUN_000375e8("Accept-Encoding: %s\r\n",*(undefined4 *)(iVar29 + 0x310));
    param_1[0x88] = iVar17;
    if (iVar17 == 0) {
      return 0x1b;
    }
  }
  if (param_1[0x4f] == 0x14) {
LAB_0002e094:
    local_4c = "";
  }
  else {
    iVar17 = FUN_0002ce70(param_1,"Transfer-Encoding:");
    if (iVar17 == 0) {
      if ((((*(uint *)(param_1[0x81] + 0x3c) & 3) == 0) || (*(char *)(iVar29 + 0x2c1) == '\0')) ||
         (*(int *)(iVar29 + 0x864c) != -1 || *(int *)(iVar29 + 0x8648) != -1)) {
        uVar1 = 0;
LAB_0002e144:
        *(undefined1 *)(iVar29 + 0x10d) = uVar1;
      }
      else if (*(char *)((int)param_1 + 0x1e6) == '\0') {
        iVar17 = FUN_0002ccb0(iVar29,param_1 + 0x4f);
        if (iVar17 == 0) {
          FUN_00030648(iVar29,"Chunky upload is not supported by HTTP 1.0");
          return 0x19;
        }
        uVar1 = 1;
        goto LAB_0002e144;
      }
      if (*(char *)(iVar29 + 0x10d) == '\0') goto LAB_0002e094;
      local_4c = "Transfer-Encoding: chunked\r\n";
    }
    else {
      uVar1 = FUN_0002da1c(iVar17,"Transfer-Encoding:","chunked");
      *(undefined1 *)(iVar29 + 0x10d) = uVar1;
      local_4c = "";
    }
  }
  if (param_1[0x8c] != 0) {
    (*DAT_000515c8)();
    param_1[0x8c] = 0;
  }
  iVar17 = FUN_0002ce70(param_1,"Host:");
  if ((iVar17 == 0) ||
     ((*(char *)(iVar29 + 0x8540) != '\0' &&
      (iVar8 = FUN_0003cc64(*(undefined4 *)(iVar29 + 0x8544),param_1[0x26]), iVar8 == 0)))) {
    iVar17 = param_1[0x2d];
    if ((((*(uint *)(param_1[0x82] + 0x3c) & 2) == 0) || (iVar17 != 0x1bb)) &&
       (((*(uint *)(param_1[0x82] + 0x3c) & 1) == 0 || (iVar17 != 0x50)))) {
      if (*(char *)((int)param_1 + 0x1de) == '\0') {
        puVar10 = &DAT_000467ca;
        puVar11 = puVar10;
      }
      else {
        puVar11 = &DAT_00046c05;
        puVar10 = &DAT_0004676a;
      }
      iVar17 = FUN_000375e8("Host: %s%s%s:%hu\r\n",puVar11,iVar2,puVar10,iVar17);
    }
    else {
      if (*(char *)((int)param_1 + 0x1de) == '\0') {
        puVar10 = &DAT_000467ca;
        puVar11 = puVar10;
      }
      else {
        puVar11 = &DAT_00046c05;
        puVar10 = &DAT_0004676a;
      }
      iVar17 = FUN_000375e8("Host: %s%s%s\r\n",puVar11,iVar2,puVar10);
    }
    param_1[0x8c] = iVar17;
    if (param_1[0x8c] == 0) {
      return 0x1b;
    }
  }
  else {
    pcVar4 = (char *)FUN_0002cf3c(iVar17);
    if (pcVar4 == (char *)0x0) {
      return 0x1b;
    }
    if (*pcVar4 == '\0') {
      (*DAT_000515c8)();
    }
    else {
      if (*pcVar4 == '[') {
        sVar7 = strlen(pcVar4);
        memmove(pcVar4,pcVar4 + 1,sVar7 - 1);
        iVar17 = 0x5d;
      }
      else {
        iVar17 = 0x3a;
      }
      pcVar5 = strchr(pcVar4,iVar17);
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      if (param_1[0x8d] != 0) {
        (*DAT_000515c8)();
      }
      param_1[0x8d] = (int)pcVar4;
    }
    param_1[0x8c] = 0;
  }
  if (uVar20 == 3) {
    uVar27 = *(undefined4 *)(iVar29 + 0x210);
    uVar25 = FUN_0002ce70(param_1,"Content-Type:");
    uVar3 = FUN_0003e854(iVar29,piVar30,uVar27,uVar25,piVar30 + 2);
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  iVar17 = FUN_0002ce70(param_1,"Accept:");
  pcVar4 = "Accept: */*\r\n";
  if (iVar17 != 0) {
    pcVar4 = (char *)0x0;
  }
  piVar30[6] = (int)pcVar4;
  if ((uVar20 - 2 < 3) && (*(int *)(iVar29 + 0x8630) != 0 || *(int *)(iVar29 + 0x8634) != 0)) {
    if (*(int *)(iVar29 + 0x8634) < 0) {
      *(undefined4 *)(iVar29 + 0x8630) = 0;
      *(undefined4 *)(iVar29 + 0x8634) = 0;
    }
    if ((*(int *)(iVar29 + 0x8630) != 0 || *(int *)(iVar29 + 0x8634) != 0) &&
       (uVar3 = (uint)*(byte *)(iVar29 + 0x8540), uVar3 == 0)) {
      if (((code *)param_1[0x97] != (code *)0x0) &&
         (iVar17 = (*(code *)param_1[0x97])(param_1[0x98]), iVar17 != 0)) {
        if (iVar17 != 2) {
          FUN_00030648(iVar29,"Could not seek stream");
          return 0x1a;
        }
        local_58 = 0;
        iStack_54 = 0;
        do {
          iVar17 = *(int *)(iVar29 + 0x8634) -
                   (iStack_54 + (uint)(*(uint *)(iVar29 + 0x8630) < local_58));
          bVar32 = 0x4000 < *(uint *)(iVar29 + 0x8630) - local_58;
          if ((int)-(iVar17 + (uint)bVar32) < 0 ==
              (SBORROW4(0,iVar17) != SBORROW4(-iVar17,(uint)bVar32))) {
            uVar26 = FUN_00027ad0();
          }
          else {
            uVar26 = 0x4000;
          }
          uVar6 = (**(code **)(iVar29 + 0x17c))
                            (iVar29 + 0x534,1,uVar26,*(undefined4 *)(iVar29 + 300),uVar3);
          bVar32 = CARRY4(local_58,uVar6);
          local_58 = local_58 + uVar6;
          iStack_54 = iStack_54 + (uint)bVar32;
          uVar18 = 1 - uVar6;
          if (1 < uVar6) {
            uVar18 = 0;
          }
          if (uVar26 < uVar6) {
            uVar18 = uVar18 | 1;
          }
          if (uVar18 != 0) {
            FUN_00030648(iVar29,"Could only read %lld bytes from the input",local_58,iStack_54);
            return 0x1a;
          }
          iVar17 = *(int *)(iVar29 + 0x8634);
          bVar32 = local_58 < *(uint *)(iVar29 + 0x8630);
        } while ((int)(iStack_54 - (iVar17 + (uint)bVar32)) < 0 !=
                 (SBORROW4(iStack_54,iVar17) != SBORROW4(iStack_54 - iVar17,(uint)bVar32)));
      }
      uVar3 = *(uint *)(iVar29 + 0x8648);
      if ((int)(uint)(uVar3 == 0) <= *(int *)(iVar29 + 0x864c)) {
        iVar17 = uVar3 - *(uint *)(iVar29 + 0x8630);
        iVar8 = *(int *)(iVar29 + 0x864c) -
                (*(int *)(iVar29 + 0x8634) + (uint)(uVar3 < *(uint *)(iVar29 + 0x8630)));
        *(int *)(iVar29 + 0x8648) = iVar17;
        *(int *)(iVar29 + 0x864c) = iVar8;
        if (iVar8 < (int)(uint)(iVar17 == 0)) {
          FUN_00030648(iVar29,"File already completely uploaded");
          return 0x12;
        }
      }
    }
  }
  if (*(char *)(iVar29 + 0x8629) != '\0') {
    if ((uVar20 & 0xfffffffb) == 1) {
      iVar17 = FUN_0002ce70(param_1,"Range:");
      if (iVar17 == 0) {
        if (param_1[0x8a] != 0) {
          (*DAT_000515c8)();
        }
        iVar17 = FUN_000375e8("Range: bytes=%s\r\n",*(undefined4 *)(iVar29 + 0x862c));
        param_1[0x8a] = iVar17;
      }
      else if (uVar20 != 1) goto LAB_0002e4e8;
    }
    else {
LAB_0002e4e8:
      iVar17 = FUN_0002ce70(param_1,"Content-Range:");
      if (iVar17 == 0) {
        if (param_1[0x8a] != 0) {
          (*DAT_000515c8)();
        }
        if (*(int *)(iVar29 + 0x204) < 0) {
          iVar17 = *(int *)(iVar29 + 0x8648);
          iVar17 = FUN_000375e8("Content-Range: bytes 0-%lld/%lld\r\n",*(int *)(iVar29 + 0x204),
                                iVar17 + -1,*(int *)(iVar29 + 0x864c) - (uint)(iVar17 == 0),iVar17,
                                *(int *)(iVar29 + 0x864c));
        }
        else {
          uVar3 = *(uint *)(iVar29 + 0x8630);
          if (uVar3 == 0 && *(int *)(iVar29 + 0x8634) == 0) {
            iVar17 = FUN_000375e8("Content-Range: bytes %s/%lld\r\n",
                                  *(undefined4 *)(iVar29 + 0x862c),*(undefined4 *)(iVar29 + 0x8648),
                                  *(undefined4 *)(iVar29 + 0x864c));
          }
          else {
            iVar17 = uVar3 + *(uint *)(iVar29 + 0x8648);
            iVar8 = *(int *)(iVar29 + 0x8634) + *(int *)(iVar29 + 0x864c) +
                    (uint)CARRY4(uVar3,*(uint *)(iVar29 + 0x8648));
            iVar17 = FUN_000375e8("Content-Range: bytes %s%lld/%lld\r\n",
                                  *(undefined4 *)(iVar29 + 0x862c),iVar17 + -1,
                                  iVar8 - (uint)(iVar17 == 0),iVar17,iVar8);
          }
        }
        param_1[0x8a] = iVar17;
        if (param_1[0x8a] == 0) {
          return 0x1b;
        }
      }
    }
  }
  iVar17 = FUN_0002ccb0(iVar29,param_1 + 0x4f);
  pcVar4 = "1.0";
  if (iVar17 != 0) {
    pcVar4 = "1.1";
  }
  iVar17 = FUN_0002d65c();
  if (iVar17 == 0) {
    return 0x1b;
  }
  uVar3 = FUN_0002d990(iVar17,&DAT_00046ddc,puVar21);
  if (uVar3 != 0) {
    return uVar3;
  }
  sVar7 = strlen(pcVar23);
  uVar3 = FUN_0002d860(iVar17,pcVar23,sVar7);
  if (uVar3 != 0) {
    return uVar3;
  }
  puVar16 = (undefined1 *)param_1[0x86];
  if ((undefined1 *)param_1[0x86] == (undefined1 *)0x0) {
    puVar16 = &DAT_000467ca;
  }
  puVar12 = (undefined1 *)param_1[0x89];
  if ((undefined1 *)param_1[0x89] == (undefined1 *)0x0) {
    puVar12 = &DAT_000467ca;
  }
  puVar19 = &DAT_000467ca;
  if ((*(char *)(iVar29 + 0x8629) != '\0') && ((undefined1 *)param_1[0x8a] != (undefined1 *)0x0)) {
    puVar19 = (undefined1 *)param_1[0x8a];
  }
  if ((*(char **)(iVar29 + 0x35c) == (char *)0x0) || (**(char **)(iVar29 + 0x35c) == '\0')) {
    puVar24 = &DAT_000467ca;
  }
  else {
    puVar24 = (undefined1 *)param_1[0x87];
    if ((undefined1 *)param_1[0x87] == (undefined1 *)0x0) {
      puVar24 = &DAT_000467ca;
    }
  }
  puVar13 = (undefined1 *)param_1[0x8c];
  if ((undefined1 *)param_1[0x8c] == (undefined1 *)0x0) {
    puVar13 = &DAT_000467ca;
  }
  puVar14 = (undefined1 *)piVar30[6];
  if ((undefined1 *)piVar30[6] == (undefined1 *)0x0) {
    puVar14 = &DAT_000467ca;
  }
  puVar15 = (undefined1 *)param_1[0x8f];
  if ((undefined1 *)param_1[0x8f] == (undefined1 *)0x0) {
    puVar15 = &DAT_000467ca;
  }
  puVar22 = &DAT_000467ca;
  if (((*(char **)(iVar29 + 0x310) != (char *)0x0) && (**(char **)(iVar29 + 0x310) != '\0')) &&
     ((undefined1 *)param_1[0x88] != (undefined1 *)0x0)) {
    puVar22 = (undefined1 *)param_1[0x88];
  }
  if (*(int *)(iVar29 + 0x3f0) == 0) {
    puVar28 = &DAT_000467ca;
  }
  else {
    puVar28 = (undefined1 *)param_1[0x8b];
    if ((undefined1 *)param_1[0x8b] == (undefined1 *)0x0) {
      puVar28 = &DAT_000467ca;
    }
  }
  if ((*(char *)((int)param_1 + 0x1db) == '\0') || (*(char *)((int)param_1 + 0x1e5) != '\0')) {
    pcVar23 = "";
  }
  else {
    iVar8 = FUN_0002cec8(param_1,"Proxy-Connection:");
    pcVar23 = "";
    if (iVar8 == 0) {
      pcVar23 = "Proxy-Connection: Keep-Alive\r\n";
    }
  }
  uVar3 = FUN_0002d990(iVar17,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",&local_34,pcVar4,puVar16,
                       puVar12,puVar19,puVar24,puVar13,puVar14,puVar15,puVar22,puVar28,pcVar23,
                       local_4c);
  if (param_1[0x89] != 0) {
    (*DAT_000515c8)();
  }
  param_1[0x89] = 0;
  if (uVar3 != 0) {
    return uVar3;
  }
  if (((*(uint *)(param_1[0x81] + 0x40) & 1) == 0) && (*(int *)(iVar29 + 0x244) == 3)) {
    return 1;
  }
  if (*(int *)(iVar29 + 0x400) == 0) {
    if (local_50 != 0) {
LAB_0002e850:
      iVar2 = 0;
      uVar3 = 0;
      goto LAB_0002e93c;
    }
  }
  else {
    FUN_00026f3c(iVar29,2,2);
    iVar8 = param_1[0x8d];
    if (param_1[0x8d] == 0) {
      iVar8 = iVar2;
    }
    piVar9 = (int *)FUN_0002c0c0(*(undefined4 *)(iVar29 + 0x400),iVar8,
                                 *(undefined4 *)(iVar29 + 0x8624),
                                 *(uint *)(param_1[0x81] + 0x3c) >> 1 & 1);
    FUN_00026f84(iVar29,2);
    if (piVar9 == (int *)0x0) goto LAB_0002e850;
    iVar2 = 0;
    piVar31 = piVar9;
    do {
      if (piVar31[2] != 0) {
        if (iVar2 == 0) {
          uVar3 = FUN_0002d990(iVar17,"Cookie: ");
          if (uVar3 != 0) break;
          puVar16 = &DAT_000467ca;
        }
        else {
          puVar16 = &DAT_00046c38;
        }
        uVar3 = FUN_0002d990(iVar17,"%s%s=%s",puVar16,piVar31[1],piVar31[2]);
        if (uVar3 != 0) break;
        iVar2 = iVar2 + 1;
      }
      piVar31 = (int *)*piVar31;
      uVar3 = 0;
    } while (piVar31 != (int *)0x0);
    FUN_0002c3f8(piVar9,0);
LAB_0002e93c:
    iVar8 = 1 - uVar3;
    if (1 < uVar3) {
      iVar8 = 0;
    }
    if (local_50 == 0) {
      iVar8 = 0;
    }
    if ((iVar8 != 0) && ((iVar2 != 0 || (uVar3 = FUN_0002d990(iVar17,"Cookie: "), uVar3 == 0)))) {
      uVar3 = FUN_0002d990(iVar17,"%s%s");
      iVar2 = iVar2 + 1;
    }
    iVar8 = 1 - uVar3;
    if (1 < uVar3) {
      iVar8 = 0;
    }
    if (iVar2 == 0) {
      iVar8 = 0;
    }
    if (iVar8 != 0) {
      uVar3 = FUN_0002d860(iVar17,"\r\n",2);
    }
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  if ((*(int *)(iVar29 + 0x238) != 0) && (uVar3 = FUN_0002dd04(iVar29,iVar17), uVar3 != 0)) {
    return uVar3;
  }
  uVar33 = FUN_0002db04(param_1,0,iVar17);
  if ((uint)uVar33 != 0) {
    return (uint)uVar33;
  }
  piVar30[4] = 0;
  FUN_0002a75c(iVar29,(int)((ulonglong)uVar33 >> 0x20),0xffffffff,0xffffffff);
  if (uVar20 == 3) {
    if ((*piVar30 == 0) || (*(char *)((int)param_1 + 0x1e6) != '\0')) {
      uVar20 = FUN_0002d990(iVar17,"Content-Length: 0\r\n\r\n");
      if (uVar20 != 0) {
        return uVar20;
      }
      uVar20 = FUN_0002d67c(iVar17,param_1,iVar29 + 0x8684,0,0);
      if (uVar20 != 0) {
        pcVar23 = "Failed sending POST request";
        goto LAB_0002f104;
      }
      uVar25 = 0xffffffff;
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = piVar30 + 0xc;
      iVar2 = FUN_0003ed64(piVar9);
      if (iVar2 != 0) {
        pcVar23 = "Internal HTTP POST error!";
LAB_0002eb4c:
        FUN_00030648(iVar29,pcVar23);
        return 0x22;
      }
      piVar30[0xf] = param_1[0x99];
      param_1[0x9a] = (int)piVar9;
      param_1[0x99] = (int)FUN_0003eea0;
      piVar30[0x16] = 2;
      if (((*(char *)(iVar29 + 0x10d) == '\0') &&
          (iVar2 = FUN_0002ce70(param_1,"Content-Length:"), iVar2 == 0)) &&
         (uVar20 = FUN_0002d990(iVar17,"Content-Length: %lld\r\n",piVar30[2],piVar30[3]),
         uVar20 != 0)) {
        return uVar20;
      }
      uVar20 = FUN_00015cc4(iVar29,param_1,iVar17);
      if (uVar20 != 0) {
        return uVar20;
      }
      iVar2 = FUN_0003ef74(piVar9);
      if (iVar2 == 0) {
        pcVar23 = "Could not get Content-Type header line!";
        goto LAB_0002eb4c;
      }
      uVar20 = FUN_0002d860(iVar17,iVar2,0);
      if (uVar20 != 0) {
        return uVar20;
      }
      uVar33 = FUN_0002d860(iVar17,"\r\n",2);
      if ((uint)uVar33 != 0) {
        return (uint)uVar33;
      }
      FUN_0002a75c(iVar29,(int)((ulonglong)uVar33 >> 0x20),piVar30[2],piVar30[3]);
      uVar20 = FUN_0002d67c(iVar17,param_1,iVar29 + 0x8684,0,0);
      if (uVar20 != 0) {
        FUN_00030648(iVar29,"Failed sending POST request");
        FUN_0003e750(piVar30);
        return uVar20;
      }
      piVar9 = piVar30 + 10;
      uVar25 = 0;
    }
LAB_0002f1ac:
    FUN_00039d0c(param_1,0,0xffffffff,0xffffffff,1,piVar30 + 8,uVar25,piVar9);
    sVar7 = 0;
    uVar3 = 0;
    goto LAB_0002f1f4;
  }
  if (uVar20 == 4) {
    if (*(char *)((int)param_1 + 0x1e6) == '\0') {
      sVar7 = *(uint *)(iVar29 + 0x8648);
      uVar3 = *(uint *)(iVar29 + 0x864c);
      if (uVar3 != 0xffffffff || sVar7 != 0xffffffff) goto LAB_0002ec24;
LAB_0002ec70:
      uVar20 = FUN_00015cc4(iVar29,param_1,iVar17);
      if (uVar20 != 0) {
        return uVar20;
      }
    }
    else {
      sVar7 = 0;
      uVar3 = 0;
LAB_0002ec24:
      if (((*(char *)(iVar29 + 0x10d) == '\0') &&
          (iVar2 = FUN_0002ce70(param_1,"Content-Length:"), iVar2 == 0)) &&
         (uVar20 = FUN_0002d990(iVar17,"Content-Length: %lld\r\n",sVar7,uVar3), uVar20 != 0)) {
        return uVar20;
      }
      if (sVar7 != 0 || uVar3 != 0) goto LAB_0002ec70;
    }
    uVar33 = FUN_0002d860(iVar17,"\r\n",2);
    if ((uint)uVar33 != 0) {
      return (uint)uVar33;
    }
    FUN_0002a75c(iVar29,(int)((ulonglong)uVar33 >> 0x20),sVar7,uVar3);
    uVar20 = FUN_0002d67c(iVar17,param_1,iVar29 + 0x8684,0,0);
    if (uVar20 != 0) {
      pcVar23 = "Failed sending PUT request";
LAB_0002f104:
      FUN_00030648(iVar29,pcVar23);
      return uVar20;
    }
    if (sVar7 == 0 && uVar3 == 0) {
      uVar25 = 0xffffffff;
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = piVar30 + 10;
      uVar25 = 0;
    }
  }
  else {
    if (uVar20 != 2) {
      uVar20 = FUN_0002d860(iVar17,"\r\n",2);
      if (uVar20 != 0) {
        return uVar20;
      }
      uVar20 = FUN_0002d67c(iVar17,param_1,iVar29 + 0x8684,0,0);
      if (uVar20 != 0) {
        pcVar23 = "Failed sending HTTP request";
        goto LAB_0002f104;
      }
      if (piVar30[4] == 0) {
        uVar25 = 0xffffffff;
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = piVar30 + 10;
        uVar25 = 0;
      }
      goto LAB_0002f1ac;
    }
    if (*(char *)((int)param_1 + 0x1e6) == '\0') {
      sVar7 = *(size_t *)(iVar29 + 0x160);
      uVar3 = *(uint *)(iVar29 + 0x164);
      if (uVar3 != 0xffffffff || sVar7 != 0xffffffff) goto LAB_0002ee6c;
      if (*(char **)(iVar29 + 0x154) != (char *)0x0) {
        sVar7 = strlen(*(char **)(iVar29 + 0x154));
        goto LAB_0002ee68;
      }
    }
    else {
      sVar7 = 0;
LAB_0002ee68:
      uVar3 = 0;
LAB_0002ee6c:
      if (((*(char *)(iVar29 + 0x10d) == '\0') &&
          (iVar2 = FUN_0002ce70(param_1,"Content-Length:"), iVar2 == 0)) &&
         (uVar20 = FUN_0002d990(iVar17,"Content-Length: %lld\r\n",sVar7,uVar3), uVar20 != 0)) {
        return uVar20;
      }
    }
    iVar2 = FUN_0002ce70(param_1,"Content-Type:");
    if ((iVar2 == 0) &&
       (uVar20 = FUN_0002d990(iVar17,"Content-Type: application/x-www-form-urlencoded\r\n"),
       uVar20 != 0)) {
      return uVar20;
    }
    uVar33 = FUN_0002ce70(param_1,"Expect:");
    uVar25 = (undefined4)((ulonglong)uVar33 >> 0x20);
    if ((int)uVar33 == 0) {
      if (uVar3 == 0 && sVar7 < 0x401) {
        *(undefined1 *)(iVar29 + 0x8610) = 0;
      }
      else {
        uVar33 = FUN_00015cc4(iVar29,param_1,iVar17);
        uVar25 = (undefined4)((ulonglong)uVar33 >> 0x20);
        if ((uint)uVar33 != 0) {
          return (uint)uVar33;
        }
      }
    }
    else {
      uVar1 = FUN_0002da1c((int)uVar33,"Expect:","100-continue");
      *(undefined1 *)(iVar29 + 0x8610) = uVar1;
      uVar25 = extraout_r1;
    }
    if (*(int *)(iVar29 + 0x154) == 0) {
      uVar20 = FUN_0002d860(iVar17,"\r\n",2);
      if (uVar20 != 0) {
        return uVar20;
      }
      if ((*(char *)(iVar29 + 0x10d) != '\0') && (*(char *)((int)param_1 + 0x1e6) != '\0')) {
        pcVar23 = "0\r\n\r\n";
        goto LAB_0002f044;
      }
      if (*(int *)(iVar29 + 0x160) != 0 || *(int *)(iVar29 + 0x164) != 0) {
        uVar26 = sVar7;
        uVar20 = uVar3;
        if ((sVar7 | uVar3) == 0) {
          uVar26 = 0xffffffff;
          uVar20 = 0xffffffff;
        }
        FUN_0002a75c(iVar29,sVar7 | uVar3,uVar26,uVar20);
        if (*(char *)((int)param_1 + 0x1e6) == '\0') {
          piVar30[4] = (int)(piVar30 + 4);
          piVar30[2] = sVar7;
          piVar30[3] = uVar3;
        }
      }
LAB_0002f0d0:
      uVar20 = 0;
    }
    else {
      if (((param_1[0x4f] == 0x14) || (*(char *)(iVar29 + 0x8610) != '\0')) ||
         ((int)(uint)(sVar7 < 0x10000) <= (int)uVar3)) {
        piVar30[4] = *(int *)(iVar29 + 0x154);
        piVar30[2] = sVar7;
        piVar30[3] = uVar3;
        piVar30[0x16] = 2;
        param_1[0x99] = (int)FUN_0002c8dc;
        param_1[0x9a] = (int)param_1;
        FUN_0002a75c(iVar29,uVar25,sVar7,uVar3);
        pcVar23 = "\r\n";
LAB_0002f044:
        uVar20 = FUN_0002d860(iVar17,pcVar23);
        if (uVar20 != 0) {
          return uVar20;
        }
        goto LAB_0002f0d0;
      }
      uVar20 = FUN_0002d860(iVar17,"\r\n",2);
      if (uVar20 != 0) {
        return uVar20;
      }
      if (*(char *)(iVar29 + 0x10d) == '\0') {
        uVar33 = FUN_0002d860(iVar17,*(undefined4 *)(iVar29 + 0x154),sVar7);
        uVar20 = sVar7;
      }
      else {
        uVar20 = sVar7;
        if (sVar7 == 0 && uVar3 == 0) {
LAB_0002efdc:
          uVar33 = FUN_0002d860(iVar17,"0\r\n\r\n",5);
        }
        else {
          uVar33 = FUN_0002d990(iVar17,&DAT_00046f0e,sVar7);
          if ((int)uVar33 == 0) {
            uVar33 = FUN_0002d860(iVar17,*(undefined4 *)(iVar29 + 0x154),sVar7);
            if ((int)uVar33 == 0) {
              uVar33 = FUN_0002d860(iVar17,"\r\n",2);
            }
            uVar20 = sVar7 + 2;
            if ((int)uVar33 == 0) goto LAB_0002efdc;
          }
          else {
            uVar20 = 0;
          }
        }
        uVar20 = uVar20 + 5;
      }
      if ((uint)uVar33 != 0) {
        return (uint)uVar33;
      }
      FUN_0002a75c(iVar29,(int)((ulonglong)uVar33 >> 0x20),sVar7,uVar3);
    }
    uVar20 = FUN_0002d67c(iVar17,param_1,iVar29 + 0x8684,uVar20,0);
    if (uVar20 != 0) {
      pcVar23 = "Failed sending HTTP POST request";
      goto LAB_0002f104;
    }
    if (piVar30[4] == 0) {
      uVar25 = 0xffffffff;
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = piVar30 + 10;
      uVar25 = 0;
    }
  }
  FUN_00039d0c(param_1,0,0xffffffff,0xffffffff,1,piVar30 + 8,uVar25,piVar9);
LAB_0002f1f4:
  if (piVar30[10] == 0 && piVar30[0xb] == 0) {
    return 0;
  }
  FUN_0002a71c(iVar29);
  iVar2 = FUN_0002a790(param_1);
  uVar20 = piVar30[10];
  iVar17 = piVar30[0xb];
  if (iVar2 == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = 0x2a;
  }
  if ((int)(iVar17 - (uVar3 + (uVar20 < sVar7))) < 0 ==
      (SBORROW4(iVar17,uVar3) != SBORROW4(iVar17 - uVar3,(uint)(uVar20 < sVar7)))) {
    FUN_000305d4(iVar29,"upload completely sent off: %lld out of %lld bytes\n",uVar20,iVar17,sVar7,
                 uVar3);
    *(undefined1 *)(iVar29 + 0xf8) = 1;
    *(uint *)(iVar29 + 0xf4) = *(uint *)(iVar29 + 0xf4) & 0xfffffffd;
    *(undefined4 *)(iVar29 + 0xd4) = 0;
    return uVar26;
  }
  return uVar26;
}



int FUN_0002f268(int param_1,int param_2,size_t *param_3,char *param_4)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 uVar7;
  void *__s;
  undefined4 uVar8;
  uint uVar9;
  undefined4 extraout_r3;
  char cVar10;
  size_t sVar11;
  int iVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  size_t sVar15;
  bool bVar16;
  longlong lVar17;
  int local_30;
  int local_2c [2];
  
  do {
    __s = *(void **)(param_1 + 0xac);
    sVar15 = *param_3;
    *(void **)(param_1 + 0xb0) = __s;
    pvVar1 = memchr(__s,10,sVar15);
    *(void **)(param_1 + 0xb4) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      iVar2 = FUN_0002cd98(param_1,param_1 + 0x50,sVar15);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (*(int *)(param_1 + 0xa0) != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0xa8) < 6) {
        return 0;
      }
      iVar2 = FUN_0002cd34(*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x52c));
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x98) = 0;
      uVar8 = 2;
LAB_0002f390:
      *(undefined4 *)(param_1 + 0x9c) = uVar8;
      return 0;
    }
    sVar11 = (int)pvVar1 + (1 - (int)__s);
    *param_3 = sVar15 - sVar11;
    *(int *)(param_1 + 0xac) = (int)pvVar1 + 1;
    iVar2 = FUN_0002cd98(param_1,param_1 + 0x50,((int)pvVar1 + 1) - (int)__s);
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x52c);
    if (((*(int *)(param_1 + 0xa0) == 0) && (5 < *(uint *)(param_1 + 0xa8))) &&
       (iVar2 = FUN_0002cd34(*(undefined4 *)(param_1 + 0x290)), iVar2 == 0)) {
      sVar15 = *param_3;
      *(undefined1 *)(param_1 + 0x98) = 0;
      if (sVar15 == 0) {
        *(undefined4 *)(param_1 + 0x9c) = 2;
        *param_3 = sVar11;
        return 0;
      }
      uVar8 = 1;
      goto LAB_0002f390;
    }
    pcVar3 = *(char **)(param_1 + 0xb8);
    cVar10 = *pcVar3;
    if (cVar10 == '\r' || cVar10 == '\n') {
      if (cVar10 == '\r') {
        *(char **)(param_1 + 0xb8) = pcVar3 + 1;
      }
      iVar2 = *(int *)(param_1 + 200);
      if (**(char **)(param_1 + 0xb8) == '\n') {
        *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
      }
      if (iVar2 - 100U < 100) {
        *(undefined1 *)(param_1 + 0x98) = 1;
        *(undefined4 *)(param_1 + 0xa0) = 0;
        if (iVar2 == 100) {
          if (*(int *)(param_1 + 0xd4) != 0) {
            *(undefined4 *)(param_1 + 0xd4) = 0;
            *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 2;
          }
        }
        else if ((iVar2 == 0x65) && (*(int *)(param_1 + 0xd8) == 1)) {
          FUN_000305d4(param_1,"Received 101\n");
          *(undefined4 *)(param_1 + 0xd8) = 2;
          return 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x98) = 0;
        if ((((*(int *)(param_1 + 0x54) == -1 && *(int *)(param_1 + 0x50) == -1) &&
             (*(char *)(param_1 + 0x10c) == '\0')) &&
            ((*(char *)(param_2 + 0x1d8) == '\0' &&
             ((*(int *)(param_2 + 0x13c) == 0xb &&
              ((*(uint *)(*(int *)(param_2 + 0x204) + 0x3c) & 0x40000) == 0)))))) &&
           (*(int *)(param_1 + 0x240) != 5)) {
          FUN_000305d4(param_1,"no chunk, no close, no size. Assume close to signal end\n");
          *(undefined1 *)(param_2 + 0x1d8) = 1;
        }
      }
      iVar2 = FUN_0002c820(param_2);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 200);
        goto LAB_0002f840;
      }
      iVar2 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x52c);
      if (*(char *)(param_1 + 700) == '\0') {
        uVar8 = 2;
      }
      else {
        uVar8 = 3;
      }
      iVar4 = FUN_00030880(param_2,uVar8,*(int *)(param_1 + 0x52c),iVar2);
      if (iVar4 != 0) {
        return iVar4;
      }
      *(int *)(param_1 + 0x8680) = *(int *)(param_1 + 0x8680) + iVar2;
      iVar4 = iVar2 + *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x80) = iVar4;
      if (99 < *(int *)(param_1 + 200) - 100U) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 0x84) = iVar4;
      if (*param_4 == '\0') {
        iVar4 = FUN_0002d038(param_2);
        if (iVar4 != 0) {
          return iVar4;
        }
        if (((((299 < *(int *)(param_1 + 200)) && (*(char *)(param_2 + 0x1e6) == '\0')) &&
             (*(char *)(param_2 + 0x1d8) == '\0')) &&
            ((*(char *)(param_2 + 0x1e7) == '\0' && (*(int *)(param_1 + 0x240) - 2U < 3)))) &&
           (*(char *)(param_1 + 0xf8) == '\0')) {
          FUN_000305d4(param_1,"HTTP error before end of send, stop sending\n");
          *(undefined1 *)(param_2 + 0x1d8) = 1;
          *(undefined1 *)(param_1 + 0xf8) = 1;
          *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfffffffd;
          if (*(char *)(param_1 + 0x8610) != '\0') {
            *(undefined4 *)(param_1 + 0xd4) = 3;
          }
        }
        if (*(char *)(param_2 + 0x1e7) != '\0') {
          FUN_000305d4(param_1,"Keep sending data to get tossed away!\n");
          *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 2;
        }
      }
      if (*(char *)(param_1 + 0x98) == '\0') {
        if (*(char *)(param_1 + 0x2bf) == '\0') {
          if (*(char *)(param_1 + 0x10c) != '\0') {
            *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
            *(undefined4 *)(param_1 + 100) = 0xffffffff;
          }
        }
        else {
          *param_4 = '\x01';
        }
        if (*(int *)(param_1 + 0x54) != -1 || *(int *)(param_1 + 0x50) != -1) {
          FUN_0002a72c(param_1);
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        }
        if (*(int *)(param_1 + 0x60) == 0 && *(int *)(param_1 + 100) == 0) {
          *param_4 = '\x01';
        }
        if (*param_4 != '\0') {
          *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfffffffe;
        }
        if (*(char *)(param_1 + 0x2c8) != '\0') {
          FUN_00030518(param_1,1,*(undefined4 *)(param_1 + 0xb0),iVar2,param_2);
        }
        return 0;
      }
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x52c);
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xa0);
      *(int *)(param_1 + 0xa0) = iVar2 + 1;
      if (iVar2 == 0) {
        uVar9 = *(uint *)(*(int *)(param_2 + 0x204) + 0x3c);
        if ((uVar9 & 3) == 0) {
          if (((uVar9 & 0x40000) == 0) ||
             (iVar2 = sscanf(pcVar3," RTSP/%d.%d %3d",local_2c,param_2 + 0x140,param_1 + 200),
             iVar2 != 3)) {
LAB_000302c4:
            *(undefined1 *)(param_1 + 0x98) = 0;
            return 0;
          }
          *(int *)(param_2 + 0x140) = local_2c[0] * 10 + *(int *)(param_2 + 0x140);
          iVar2 = 0xb;
LAB_0002f7a8:
          *(int *)(param_2 + 0x13c) = iVar2;
        }
        else {
          iVar12 = param_1 + 200;
          iVar2 = iVar12;
          iVar4 = sscanf(pcVar3," HTTP/%d.%d %3d",&local_30,param_2 + 0x13c,iVar12);
          if (iVar4 == 3) {
            iVar2 = local_30 * 10 + *(int *)(param_2 + 0x13c);
            goto LAB_0002f7a8;
          }
          iVar2 = sscanf(*(char **)(param_1 + 0xb8)," HTTP %3d",iVar12,extraout_r3,iVar2);
          *(undefined4 *)(param_2 + 0x13c) = 10;
          if (iVar2 == 0) {
            iVar2 = FUN_0002cd34(*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0xb8));
            if (iVar2 == 0) goto LAB_000302c4;
            *(undefined4 *)(param_1 + 200) = 200;
            *(undefined4 *)(param_2 + 0x13c) = 10;
          }
        }
        iVar2 = *(int *)(param_1 + 200);
        iVar4 = *(int *)(param_2 + 0x13c);
        *(int *)(param_1 + 0x866c) = iVar2;
        *(int *)(param_1 + 0x8674) = iVar4;
        if ((*(int *)(param_1 + 0x860c) == 0) || (iVar4 < *(int *)(param_1 + 0x860c))) {
          *(int *)(param_1 + 0x860c) = iVar4;
        }
        if ((*(char *)(param_1 + 0x2b8) != '\0') && (399 < iVar2)) {
          if (iVar2 == 0x191) {
            cVar10 = *(char *)(param_2 + 0x1dc);
LAB_0002f800:
            if (cVar10 != '\0') goto LAB_0002f860;
          }
          else if (iVar2 == 0x197) {
            cVar10 = *(char *)(param_2 + 0x1dd);
            goto LAB_0002f800;
          }
          if (((*(int *)(param_1 + 0x8630) == 0 && *(int *)(param_1 + 0x8634) == 0) ||
              (*(int *)(param_1 + 0x240) != 1)) || (iVar2 != 0x1a0)) {
            pcVar3 = *(char **)(param_1 + 0xb8);
            iVar4 = strncmp(pcVar3,"HTTP",4);
            if (((iVar4 == 0) && (pcVar3 = strchr(pcVar3,0x20), pcVar3 != (char *)0x0)) &&
               (pcVar3[1] != '\0')) {
              pcVar3 = pcVar3 + 1;
              pcVar5 = strchr(pcVar3,0xd);
              if (pcVar5 == (char *)0x0) {
                pcVar5 = strchr(pcVar3,10);
                if (pcVar5 == (char *)0x0) goto LAB_0002f840;
                cVar10 = '\n';
              }
              else {
                cVar10 = '\r';
              }
              *pcVar5 = '\0';
              FUN_00030648(param_1,"The requested URL returned error: %s",pcVar3);
              *pcVar5 = cVar10;
            }
            else {
LAB_0002f840:
              FUN_00030648(param_1,"The requested URL returned error: %d",iVar2);
            }
            return 0x16;
          }
        }
LAB_0002f860:
        if (iVar4 == 10) {
          FUN_000305d4(param_1,"HTTP 1.0, assume close after body\n");
          *(undefined1 *)(param_2 + 0x1d8) = 1;
        }
        else if (((10 < iVar4) && (*(char *)(param_2 + 0x1d8) == '\0')) &&
                ((puVar14 = *(undefined1 **)(param_2 + 0x488), puVar14 != (undefined1 *)0x0 &&
                 (iVar2 = FUN_00027fe0(param_1,param_2), iVar2 == 0)))) {
          *puVar14 = 1;
        }
        if ((*(int *)(param_1 + 200) == 0xcc) || (*(int *)(param_1 + 200) == 0x130)) {
          if (*(int *)(param_1 + 0x238) != 0) {
            *(undefined1 *)(param_1 + 0x867c) = 1;
          }
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(undefined4 *)(param_1 + 0x60) = 0;
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined1 *)(param_1 + 0xfa) = 1;
        }
      }
      if (((*(char *)(param_1 + 0xfa) == '\0') && (*(char *)(param_1 + 0x2df) == '\0')) &&
         (iVar2 = FUN_0003cccc("Content-Length:",*(undefined4 *)(param_1 + 0xb8),0xf), iVar2 != 0))
      {
        lVar17 = strtoll((char *)(*(int *)(param_1 + 0xb8) + 0xf),(char **)0x0,10);
        iVar2 = (int)((ulonglong)lVar17 >> 0x20);
        uVar9 = *(uint *)(param_1 + 0x298);
        iVar4 = *(int *)(param_1 + 0x29c);
        if ((uVar9 != 0 || iVar4 != 0) &&
           (bVar16 = uVar9 < (uint)lVar17,
           (int)(iVar4 - (iVar2 + (uint)bVar16)) < 0 !=
           (SBORROW4(iVar4,iVar2) != SBORROW4(iVar4 - iVar2,(uint)bVar16)))) {
          FUN_00030648(param_1,"Maximum file size exceeded");
          return 0x3f;
        }
        if (lVar17 < 0) {
          *(undefined1 *)(param_2 + 0x1d8) = 1;
          FUN_000305d4(param_1,"Negative content-length: %lld, closing after transfer\n");
        }
        else {
          *(longlong *)(param_1 + 0x50) = lVar17;
          *(longlong *)(param_1 + 0x60) = lVar17;
          FUN_0002a72c(param_1);
        }
      }
      else {
        iVar2 = FUN_0003cccc("Content-Type:",*(undefined4 *)(param_1 + 0xb8),0xd);
        if (iVar2 == 0) {
          iVar2 = FUN_0003cccc("Server:",*(undefined4 *)(param_1 + 0xb8),7);
          if (iVar2 == 0) {
            if (((*(int *)(param_2 + 0x13c) == 10) && (*(char *)(param_2 + 0x1db) != '\0')) &&
               (iVar2 = FUN_0002da1c(*(undefined4 *)(param_1 + 0xb8),"Proxy-Connection:",
                                     "keep-alive"), iVar2 != 0)) {
              *(undefined1 *)(param_2 + 0x1d8) = 0;
              pcVar3 = "HTTP/1.0 proxy connection set to keep alive!\n";
            }
            else if (((*(int *)(param_2 + 0x13c) == 0xb) && (*(char *)(param_2 + 0x1db) != '\0')) &&
                    (iVar2 = FUN_0002da1c(*(undefined4 *)(param_1 + 0xb8),"Proxy-Connection:",
                                          "close"), iVar2 != 0)) {
              pcVar3 = "HTTP/1.1 proxy connection set close!\n";
              *(undefined1 *)(param_2 + 0x1d8) = 1;
            }
            else {
              if ((*(int *)(param_2 + 0x13c) != 10) ||
                 (iVar2 = FUN_0002da1c(*(undefined4 *)(param_1 + 0xb8),"Connection:","keep-alive"),
                 iVar2 == 0)) {
                iVar2 = FUN_0002da1c(*(undefined4 *)(param_1 + 0xb8),"Connection:","close");
                if (iVar2 == 0) {
                  iVar2 = FUN_0003cccc("Transfer-Encoding:",*(undefined4 *)(param_1 + 0xb8),0x12);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0003cccc("Content-Encoding:",*(undefined4 *)(param_1 + 0xb8),0x11);
                    if ((iVar2 == 0) ||
                       ((*(int *)(param_1 + 0x310) == 0 && (*(int *)(param_2 + 0x13c) != 0x14)))) {
                      iVar2 = FUN_0003cccc("Content-Range:",*(undefined4 *)(param_1 + 0xb8),0xe);
                      if (iVar2 == 0) {
                        if ((*(int *)(param_1 + 0x400) == 0) ||
                           (iVar2 = FUN_0003cccc("Set-Cookie:",*(undefined4 *)(param_1 + 0xb8),0xb),
                           iVar2 == 0)) {
                          iVar2 = FUN_0003cccc("Last-Modified:",*(undefined4 *)(param_1 + 0xb8),0xe)
                          ;
                          if ((iVar2 == 0) ||
                             ((*(int *)(param_1 + 0x238) == 0 &&
                              (*(char *)(param_1 + 0x2b1) == '\0')))) {
                            iVar2 = FUN_0003cccc("WWW-Authenticate:",*(undefined4 *)(param_1 + 0xb8)
                                                 ,0x11);
                            if ((iVar2 == 0) || (*(int *)(param_1 + 200) != 0x191)) {
                              iVar2 = FUN_0003cccc("Proxy-authenticate:",
                                                   *(undefined4 *)(param_1 + 0xb8),0x13);
                              if ((iVar2 == 0) || (*(int *)(param_1 + 200) != 0x197)) {
                                if ((*(int *)(param_1 + 200) - 300U < 100) &&
                                   ((iVar2 = FUN_0003cccc("Location:",
                                                          *(undefined4 *)(param_1 + 0xb8),9),
                                    iVar2 != 0 && (*(int *)(param_1 + 0xfc) == 0)))) {
                                  pcVar3 = (char *)FUN_0002cf3c(*(undefined4 *)(param_1 + 0xb8));
                                  if (pcVar3 == (char *)0x0) {
                                    return 0x1b;
                                  }
                                  if (*pcVar3 == '\0') goto LAB_0002fff8;
                                  *(char **)(param_1 + 0xfc) = pcVar3;
                                  if (*(char *)(param_1 + 0x2b9) != '\0') {
                                    iVar2 = (*DAT_000515d0)();
                                    *(int *)(param_1 + 0x100) = iVar2;
                                    if (iVar2 == 0) {
                                      return 0x1b;
                                    }
                                    iVar2 = FUN_0002c9b4(param_2);
                                    if (iVar2 != 0) {
                                      return iVar2;
                                    }
                                  }
                                }
                                else if ((*(uint *)(*(int *)(param_2 + 0x204) + 0x3c) & 0x40000) !=
                                         0) {
                                  return 4;
                                }
                                goto LAB_00030054;
                              }
                            }
                            iVar4 = *(int *)(param_1 + 200);
                            iVar2 = FUN_0002cf3c(*(undefined4 *)(param_1 + 0xb8));
                            if (iVar2 == 0) {
                              return 0x1b;
                            }
                            iVar4 = FUN_0002d4dc(param_2,iVar4 == 0x197,iVar2);
                            (*DAT_000515c8)(iVar2);
                            if (iVar4 != 0) {
                              return iVar4;
                            }
                          }
                          else {
                            local_2c[0] = time((time_t *)0x0);
                            uVar8 = FUN_0003c4e0(*(int *)(param_1 + 0xb8) + 0xe);
                            *(undefined4 *)(param_1 + 0xe0) = uVar8;
                            if (*(char *)(param_1 + 0x2b1) != '\0') {
                              *(undefined4 *)(param_1 + 0x8678) = uVar8;
                            }
                          }
                        }
                        else {
                          FUN_00026f3c(param_1,2,2);
                          iVar2 = *(int *)(param_2 + 0x234);
                          if (iVar2 == 0) {
                            iVar2 = *(int *)(param_2 + 0x98);
                          }
                          FUN_0002b3c4(param_1,*(undefined4 *)(param_1 + 0x400),1,
                                       *(int *)(param_1 + 0xb8) + 0xb,iVar2,
                                       *(undefined4 *)(param_1 + 0x8624));
                          FUN_00026f84(param_1,2);
                        }
                      }
                      else {
                        pbVar13 = (byte *)(*(int *)(param_1 + 0xb8) + 0xe);
                        do {
                          pbVar6 = pbVar13;
                          uVar9 = (uint)*pbVar6;
                          if ((uVar9 == 0) || ((*(ushort *)(__ctype_b + uVar9 * 2) & 8) != 0))
                          break;
                          pbVar13 = pbVar6 + 1;
                        } while (uVar9 != 0x2a);
                        if ((*(ushort *)(__ctype_b + uVar9 * 2) & 8) == 0) {
                          *(undefined4 *)(param_1 + 0x8630) = 0;
                          *(undefined4 *)(param_1 + 0x8634) = 0;
                        }
                        else {
                          lVar17 = strtoll((char *)pbVar6,(char **)0x0,10);
                          uVar7 = (undefined1)*(undefined4 *)(param_1 + 0x8634);
                          if (lVar17 == *(longlong *)(param_1 + 0x8630)) {
                            uVar7 = 1;
                          }
                          *(longlong *)(param_1 + 0xc0) = lVar17;
                          if (lVar17 == *(longlong *)(param_1 + 0x8630)) {
                            *(undefined1 *)(param_1 + 0xbc) = uVar7;
                          }
                        }
                      }
                    }
                    else {
                      pbVar13 = (byte *)(*(int *)(param_1 + 0xb8) + 0x11);
                      do {
                        pbVar6 = pbVar13;
                        if (*pbVar6 == 0) break;
                        pbVar13 = pbVar6 + 1;
                      } while ((*(ushort *)(__ctype_b + (uint)*pbVar6 * 2) & 0x20) != 0);
                      iVar2 = FUN_0003cccc("identity",pbVar6,8);
                      if (iVar2 == 0) {
                        iVar2 = FUN_0003cccc("deflate",pbVar6,7);
                        if (iVar2 == 0) {
                          iVar2 = FUN_0003cccc(&DAT_00047175,pbVar6,4);
                          if ((iVar2 == 0) &&
                             (iVar2 = FUN_0003cccc(&DAT_00047173,pbVar6,6), iVar2 == 0)) {
                            iVar2 = FUN_0003cccc("compress",pbVar6,8);
                            if ((iVar2 == 0) &&
                               (iVar2 = FUN_0003cccc("x-compress",pbVar6,10), iVar2 == 0))
                            goto LAB_00030054;
                            uVar8 = 3;
                          }
                          else {
                            uVar8 = 2;
                          }
                        }
                        else {
                          uVar8 = 1;
                        }
                      }
                      else {
                        uVar8 = 0;
                      }
                      *(undefined4 *)(param_1 + 0xdc) = uVar8;
                    }
                  }
                  else {
                    pbVar13 = (byte *)(*(int *)(param_1 + 0xb8) + 0x12);
                    while( true ) {
                      for (; (uVar9 = (uint)*pbVar13, uVar9 != 0 &&
                             (((*(ushort *)(__ctype_b + uVar9 * 2) & 0x20) != 0 || (uVar9 == 0x2c)))
                             ); pbVar13 = pbVar13 + 1) {
                      }
                      iVar2 = FUN_0003cccc("chunked",pbVar13,7);
                      if (iVar2 != 0) {
                        *(undefined1 *)(param_1 + 0x10c) = 1;
                        FUN_00039f1c(param_2);
                        pbVar13 = pbVar13 + 7;
                      }
                      if (*(int *)(param_1 + 0xdc) != 0) break;
                      iVar2 = FUN_0003cccc("identity",pbVar13,8);
                      uVar8 = 0;
                      if (iVar2 == 0) {
                        iVar2 = FUN_0003cccc("deflate",pbVar13,7);
                        if (iVar2 == 0) {
                          iVar2 = FUN_0003cccc(&DAT_00047175,pbVar13,4);
                          if (iVar2 == 0) {
                            iVar2 = FUN_0003cccc(&DAT_00047173,pbVar13,6);
                            if (iVar2 == 0) {
                              iVar2 = FUN_0003cccc("compress",pbVar13,8);
                              if (iVar2 != 0) {
                                uVar8 = 3;
                                goto LAB_0002fc34;
                              }
                              iVar2 = FUN_0003cccc("x-compress",pbVar13,10);
                              if (iVar2 == 0) break;
                              *(undefined4 *)(param_1 + 0xdc) = 3;
                              pbVar13 = pbVar13 + 10;
                            }
                            else {
                              *(undefined4 *)(param_1 + 0xdc) = 2;
                              pbVar13 = pbVar13 + 6;
                            }
                          }
                          else {
                            *(undefined4 *)(param_1 + 0xdc) = 2;
                            pbVar13 = pbVar13 + 4;
                          }
                        }
                        else {
                          *(undefined4 *)(param_1 + 0xdc) = 1;
                          pbVar13 = pbVar13 + 7;
                        }
                      }
                      else {
LAB_0002fc34:
                        *(undefined4 *)(param_1 + 0xdc) = uVar8;
                        pbVar13 = pbVar13 + 8;
                      }
                    }
                  }
                }
                else {
                  *(undefined1 *)(param_2 + 0x1d8) = 1;
                }
                goto LAB_00030054;
              }
              *(undefined1 *)(param_2 + 0x1d8) = 0;
              pcVar3 = "HTTP/1.0 connection set to keep alive!\n";
            }
            FUN_000305d4(param_1,pcVar3);
          }
          else {
            iVar2 = FUN_0002cf3c(*(undefined4 *)(param_1 + 0xb8));
            if (((*(char **)(param_2 + 0x488) != (char *)0x0) &&
                (**(char **)(param_2 + 0x488) != '\0')) &&
               (iVar4 = FUN_00028184(param_1,iVar2), iVar4 != 0)) {
              **(undefined1 **)(param_2 + 0x488) = 0;
            }
            if (iVar2 != 0) {
              (*DAT_000515c8)(iVar2);
            }
          }
        }
        else {
          pcVar3 = (char *)FUN_0002cf3c(*(undefined4 *)(param_1 + 0xb8));
          if (pcVar3 == (char *)0x0) {
            return 0x1b;
          }
          if (*pcVar3 == '\0') {
LAB_0002fff8:
            (*DAT_000515c8)();
          }
          else {
            if (*(int *)(param_1 + 0x8694) != 0) {
              (*DAT_000515c8)();
            }
            *(char **)(param_1 + 0x8694) = pcVar3;
          }
        }
      }
LAB_00030054:
      if (*(char *)(param_1 + 700) == '\0') {
        uVar8 = 2;
      }
      else {
        uVar8 = 3;
      }
      if (*(char *)(param_1 + 0x2c8) != '\0') {
        FUN_00030518(param_1,1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xa8),
                     param_2);
      }
      iVar2 = FUN_00030880(param_2,uVar8,*(undefined4 *)(param_1 + 0xb8),
                           *(undefined4 *)(param_1 + 0xa8));
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = *(int *)(param_1 + 0xa8);
      *(int *)(param_1 + 0x8680) = *(int *)(param_1 + 0x8680) + iVar2;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + iVar2;
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x52c);
    }
    if (*param_4 != '\0') {
      return 0;
    }
    if (**(char **)(param_1 + 0xac) == '\0') {
      return 0;
    }
  } while( true );
}



undefined4 FUN_000302d4(int param_1,uint param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 400) == (code *)0x0) {
    if (param_2 < 3) {
      fwrite(&UNK_000471e0 + param_2 * 3,2,1,*(FILE **)(param_1 + 0x118));
      fwrite(param_3,param_4,1,*(FILE **)(param_1 + 0x118));
    }
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 400))();
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00030398)
// WARNING: Removing unreachable block (ram,0x000303ac)
// WARNING: Removing unreachable block (ram,0x000303a0)

undefined4 FUN_00030348(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(param_1 + ((param_2 == *(int *)(param_1 + 0x158)) + 0x5c) * 4))();
  *param_5 = iVar1;
  if (iVar1 < 0) {
    uVar2 = 0x37;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_000303b8(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  int *piVar2;
  undefined4 uVar3;
  
  sVar1 = recv(param_1,param_2,param_3,0);
  if (sVar1 != -1) {
    *param_4 = sVar1;
    return 0;
  }
  piVar2 = __errno_location();
  if (*piVar2 == 0xb || *piVar2 == 4) {
    uVar3 = 0x51;
  }
  else {
    uVar3 = 0x38;
  }
  return uVar3;
}



undefined4 FUN_000303f8(int *param_1,int param_2,void *param_3,uint param_4,size_t *param_5)

{
  int iVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 local_24;
  
  local_24 = 0x38;
  iVar5 = param_2;
  pvVar6 = param_3;
  iVar1 = FUN_00024a14(*(undefined4 *)(*param_1 + 0x40));
  iVar2 = param_1[0x56];
  *param_5 = 0;
  if (iVar1 == 0) {
    uVar4 = *(uint *)(*param_1 + 0x288);
    if (uVar4 == 0) {
      uVar4 = 0x4000;
    }
    pvVar3 = param_3;
    if ((int)param_4 <= (int)uVar4) {
      uVar4 = param_4;
    }
  }
  else {
    pvVar3 = (void *)param_1[0x94];
    uVar4 = param_1[0x96] - param_1[0x95];
    if (param_4 < uVar4) {
      uVar4 = param_4;
    }
    if (uVar4 != 0) {
      memcpy(param_3,(void *)((int)pvVar3 + param_1[0x95]),uVar4);
      *(undefined1 *)((int)param_1 + 0x1ed) = 0;
      param_1[0x95] = param_1[0x95] + uVar4;
      *param_5 = uVar4;
      return 0;
    }
    uVar4 = param_4;
    if (0x3fff < param_4) {
      uVar4 = 0x4000;
    }
  }
  __n = (*(code *)param_1[(param_2 == iVar2) + 0x5a])
                  (param_1,(uint)(param_2 == iVar2),pvVar3,uVar4,&local_24,iVar5,pvVar6);
  if (-1 < (int)__n) {
    if (iVar1 != 0) {
      memcpy(param_3,(void *)param_1[0x94],__n);
      param_1[0x96] = __n;
      param_1[0x95] = __n;
    }
    local_24 = 0;
    *param_5 = *param_5 + __n;
  }
  return local_24;
}



void FUN_00030518(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  char acStack_b8 [164];
  
  if ((((*(char *)(param_1 + 0x2b0) != '\0') && (param_5 != 0)) && (*(int *)(param_5 + 0x9c) != 0))
     && (uVar1 = param_2 - 1, uVar1 < 4)) {
    if ((&PTR_DAT_000471f8)[uVar1] != (undefined *)0x0) {
      FUN_000365a4(acStack_b8,0xa0,"[%s %s %s]",(&PTR_s_Header_00047208)[uVar1],
                   (&PTR_DAT_000471f8)[uVar1],*(int *)(param_5 + 0x9c));
      sVar2 = strlen(acStack_b8);
      iVar3 = FUN_000302d4(param_1,0,acStack_b8,sVar2);
      if (iVar3 != 0) {
        return;
      }
    }
  }
  FUN_000302d4(param_1,param_2,param_3,param_4);
  return;
}



void FUN_000305d4(int param_1,undefined4 param_2)

{
  size_t sVar1;
  char acStack_81c [2056];
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x2c8) != '\0')) {
    FUN_0003759c(acStack_81c,0x801,param_2);
    sVar1 = strlen(acStack_81c);
    FUN_00030518(param_1,0,acStack_81c,sVar1,0);
  }
  return;
}



void FUN_00030648(int param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  char *__s;
  
  __s = (char *)(param_1 + 0x534);
  FUN_0003759c(__s,0x4000,param_2);
  if ((*(int *)(param_1 + 0x120) != 0) && (*(char *)(param_1 + 0x8560) == '\0')) {
    FUN_000365a4(*(int *)(param_1 + 0x120),0x100,"%s",__s);
    *(undefined1 *)(param_1 + 0x8560) = 1;
  }
  if (*(char *)(param_1 + 0x2c8) != '\0') {
    sVar1 = strlen(__s);
    if (sVar1 < 0x3fff) {
      iVar2 = param_1 + sVar1;
      sVar1 = sVar1 + 1;
      *(undefined1 *)(iVar2 + 0x534) = 10;
      *(undefined1 *)(param_1 + sVar1 + 0x534) = 0;
    }
    FUN_00030518(param_1,0,__s,sVar1,0);
  }
  return;
}



undefined4 FUN_00030880(int *param_1,byte *param_2,char *param_3,size_t param_4)

{
  int iVar1;
  byte *__s1;
  size_t sVar2;
  void *pvVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  code *pcVar14;
  int *piVar15;
  byte *pbVar16;
  
  iVar9 = *param_1;
  piVar15 = param_1;
  pbVar16 = param_2;
  pcVar4 = param_3;
  if (param_4 == 0) {
    param_4 = strlen(param_3);
  }
  if ((*(uint *)(iVar9 + 0xf4) & 0x10) != 0) {
    if (param_2 != *(byte **)(iVar9 + 0x8558)) {
      return 0x38;
    }
    iVar11 = param_4 + *(int *)(iVar9 + 0x8554);
    iVar1 = (*DAT_000515cc)(*(undefined4 *)(iVar9 + 0x8550),iVar11);
    if (iVar1 != 0) {
      memcpy((void *)(iVar1 + *(int *)(iVar9 + 0x8554)),param_3,param_4);
      *(int *)(iVar9 + 0x8550) = iVar1;
      *(int *)(iVar9 + 0x8554) = iVar11;
      return 0;
    }
    return 0x1b;
  }
  if (((uint)param_2 & 1) != 0) {
    if ((((*(uint *)(param_1[0x81] + 0x3c) & 0xc) != 0) && ((char)param_1[0x100] == 'A')) &&
       (param_3 != (char *)0x0 && param_4 != 0)) {
      if (*(char *)(iVar9 + 0x8612) != '\0') {
        if (*param_3 == '\n') {
          param_4 = param_4 - 1;
          memmove(param_3,param_3 + 1,param_4);
          uVar5 = *(uint *)(iVar9 + 0x8618);
          *(uint *)(iVar9 + 0x8618) = uVar5 + 1;
          *(uint *)(iVar9 + 0x861c) = *(int *)(iVar9 + 0x861c) + (uint)(0xfffffffe < uVar5);
        }
        *(undefined1 *)(iVar9 + 0x8612) = 0;
      }
      __s1 = memchr(param_3,0xd,param_4);
      if (__s1 != (byte *)0x0) {
        pbVar8 = (byte *)(param_3 + (param_4 - 1));
        piVar13 = (int *)0xa;
        pbVar6 = __s1;
        for (; pbVar12 = pbVar6 + 1, __s1 < pbVar8; __s1 = __s1 + 1) {
          iVar1 = memcmp(__s1,"\r\n",2);
          if (iVar1 == 0) {
            pbVar16 = __s1 + 1;
            __s1 = __s1 + 1;
            *pbVar6 = *pbVar16;
            uVar5 = *(uint *)(iVar9 + 0x8618);
            *(uint *)(iVar9 + 0x8618) = uVar5 + 1;
            *(uint *)(iVar9 + 0x861c) = *(int *)(iVar9 + 0x861c) + (uint)(0xfffffffe < uVar5);
          }
          else if (*__s1 == 0xd) {
            *pbVar6 = (byte)piVar13;
          }
          else {
            *pbVar6 = *__s1;
          }
          pbVar6 = pbVar12;
          piVar15 = piVar13;
          pbVar16 = pbVar8;
        }
        pbVar10 = (byte *)(param_3 + param_4);
        if (__s1 < pbVar10) {
          pbVar8 = (byte *)(uint)*__s1;
          if (pbVar8 == (byte *)0xd) {
            *pbVar6 = 10;
            pbVar8 = (byte *)0x8612;
            *(undefined1 *)(iVar9 + 0x8612) = 1;
            pbVar6 = pbVar12;
          }
          else {
            *pbVar6 = *__s1;
            pbVar6 = pbVar12;
          }
        }
        bVar7 = (byte)pbVar8;
        if (pbVar6 < pbVar10) {
          bVar7 = 0;
        }
        param_4 = (int)pbVar6 - (int)param_3;
        if (pbVar6 < pbVar10) {
          *pbVar6 = bVar7;
        }
      }
    }
    if (param_4 != 0) {
      sVar2 = (**(code **)(iVar9 + 0x170))
                        (param_3,1,param_4,*(undefined4 *)(iVar9 + 0x128),piVar15,pbVar16,pcVar4);
      if (sVar2 == 0x10000001) {
        if ((*(uint *)(param_1[0x81] + 0x40) & 0x10) != 0) {
          pcVar4 = "Write callback asked for PAUSE when not supported!";
          goto LAB_00030bb8;
        }
        pvVar3 = (void *)(*DAT_000515c4)(param_4);
        if (pvVar3 == (void *)0x0) {
          return 0x1b;
        }
        memcpy(pvVar3,param_3,param_4);
        *(void **)(iVar9 + 0x8550) = pvVar3;
        *(size_t *)(iVar9 + 0x8554) = param_4;
        *(byte **)(iVar9 + 0x8558) = param_2;
        goto LAB_00030b94;
      }
      if (sVar2 != param_4) {
        FUN_00030648(iVar9,"Failed writing body (%zu != %zu)",sVar2,param_4);
        return 0x17;
      }
    }
  }
  if (((uint)param_2 & 2) == 0) {
    return 0;
  }
  pcVar14 = *(code **)(iVar9 + 0x174);
  if (pcVar14 == (code *)0x0) {
    if (*(int *)(iVar9 + 0x130) == 0) {
      return 0;
    }
    pcVar14 = *(code **)(iVar9 + 0x170);
  }
  sVar2 = (*pcVar14)(param_3,1,param_4,*(undefined4 *)(iVar9 + 0x130));
  if (sVar2 != 0x10000001) {
    if (sVar2 == param_4) {
      return 0;
    }
    pcVar4 = "Failed writing header";
LAB_00030bb8:
    FUN_00030648(iVar9,pcVar4);
    return 0x17;
  }
  pvVar3 = (void *)(*DAT_000515c4)(param_4);
  if (pvVar3 == (void *)0x0) {
    return 0x1b;
  }
  memcpy(pvVar3,param_3,param_4);
  *(void **)(iVar9 + 0x8550) = pvVar3;
  *(size_t *)(iVar9 + 0x8554) = param_4;
  *(undefined4 *)(iVar9 + 0x8558) = 2;
LAB_00030b94:
  *(uint *)(iVar9 + 0xf4) = *(uint *)(iVar9 + 0xf4) | 0x10;
  return 0;
}



undefined4 FUN_00030cc4(int *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    (*DAT_000515c8)();
    *param_1 = 0;
  }
  if (param_2 != 0) {
    iVar1 = (*DAT_000515d0)(param_2);
    if (iVar1 == 0) {
      return 0x1b;
    }
    *param_1 = iVar1;
  }
  return 0;
}



void * FUN_00030d30(char *param_1,char *param_2,int *param_3,int *param_4,int *param_5)

{
  char *pcVar1;
  char *pcVar2;
  void *__dest;
  void *__dest_00;
  void *__dest_01;
  uint uVar3;
  int iVar4;
  char *__n;
  uint uVar5;
  void *pvVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char *local_38;
  char *local_34;
  
  if (param_4 == (int *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = strchr(param_1,0x3a);
    if (param_1 + (int)param_2 <= pcVar1) {
      pcVar1 = (char *)0x0;
    }
  }
  local_38 = param_2;
  if ((param_5 == (int *)0x0) || (pcVar2 = strchr(param_1,0x3b), param_1 + (int)param_2 <= pcVar2))
  {
    if (pcVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      goto LAB_00031040;
    }
    pcVar2 = (char *)0x0;
LAB_00030db4:
    if (pcVar2 == (char *)0x0 || pcVar1 <= pcVar2) {
      local_38 = pcVar1 + -(int)param_1;
    }
    else {
      local_38 = pcVar2 + -(int)param_1;
    }
    if (pcVar2 <= pcVar1 || pcVar2 == (char *)0x0) {
      __n = param_1 + (int)param_2 + (-1 - (int)pcVar1);
      goto LAB_00030e10;
    }
    __n = pcVar2 + (-1 - (int)pcVar1);
  }
  else {
    if (pcVar1 != (char *)0x0) goto LAB_00030db4;
    if (pcVar2 != (char *)0x0) {
      local_38 = pcVar2 + -(int)param_1;
    }
LAB_00031040:
    __n = (char *)0x0;
LAB_00030e10:
    if (pcVar2 == (char *)0x0) {
      local_34 = (char *)0x0;
      goto LAB_00030e38;
    }
  }
  bVar7 = pcVar1 == (char *)0x0;
  bVar8 = pcVar1 != pcVar2;
  bVar9 = pcVar1 < pcVar2;
  if (bVar7 || (bVar9 || !bVar8)) {
    param_2 = param_1 + (int)param_2;
  }
  if (!bVar7 && (!bVar9 && bVar8)) {
    param_2 = pcVar1 + -(int)pcVar2;
  }
  if (bVar7 || (bVar9 || !bVar8)) {
    param_2 = param_2 + -(int)pcVar2;
  }
  local_34 = param_2 + -1;
LAB_00030e38:
  if (local_38 == (char *)0x0 || param_3 == (int *)0x0) {
    pvVar6 = (void *)0x0;
    __dest = pvVar6;
  }
  else {
    __dest = (void *)(*DAT_000515c4)(local_38 + 1);
    if (__dest == (void *)0x0) {
      pvVar6 = (void *)0x1b;
    }
    else {
      pvVar6 = (void *)0x0;
    }
  }
  iVar4 = 1 - (int)pvVar6;
  if ((void *)0x1 < pvVar6) {
    iVar4 = 0;
  }
  if (param_4 == (int *)0x0) {
    iVar4 = 0;
  }
  __dest_00 = (void *)0x0;
  if (iVar4 != 0) {
    if (__n == (char *)0x0) {
      pvVar6 = (void *)0x0;
      __dest_00 = (void *)0x0;
    }
    else {
      __dest_00 = (void *)(*DAT_000515c4)(__n + 1);
      if (__dest_00 == (void *)0x0) {
        if (__dest != (void *)0x0) {
          (*DAT_000515c8)(__dest);
          __dest = (void *)0x0;
        }
        pvVar6 = (void *)0x1b;
      }
      else {
        pvVar6 = (void *)0x0;
      }
    }
  }
  uVar3 = 1 - (int)pvVar6;
  if ((void *)0x1 < pvVar6) {
    uVar3 = 0;
  }
  if (param_5 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar3 & 1;
  }
  if (uVar5 == 0) {
    __dest_01 = (void *)0x0;
    if (uVar3 == 0) {
      return pvVar6;
    }
  }
  else {
    if (local_34 == (char *)0x0) {
      __dest_01 = (void *)0x0;
    }
    else {
      __dest_01 = (void *)(*DAT_000515c4)(local_34 + 1);
      if (__dest_01 == (void *)0x0) {
        if (__dest_00 != (void *)0x0) {
          (*DAT_000515c8)(__dest_00);
        }
        if (__dest != (void *)0x0) {
          (*DAT_000515c8)(__dest);
        }
        return (void *)0x1b;
      }
    }
    pvVar6 = (void *)0x0;
  }
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,(size_t)local_38);
    *(char *)((int)__dest + (int)local_38) = '\0';
    if (*param_3 != 0) {
      (*DAT_000515c8)();
    }
    *param_3 = (int)__dest;
  }
  if (__dest_00 != (void *)0x0) {
    memcpy(__dest_00,pcVar1 + 1,(size_t)__n);
    *(char *)((int)__dest_00 + (int)__n) = '\0';
    if (*param_4 != 0) {
      (*DAT_000515c8)();
    }
    *param_4 = (int)__dest_00;
  }
  if (__dest_01 != (void *)0x0) {
    memcpy(__dest_01,pcVar2 + 1,(size_t)local_34);
    *(char *)((int)__dest_01 + (int)local_34) = '\0';
    if (*param_5 != 0) {
      (*DAT_000515c8)();
    }
    *param_5 = (int)__dest_01;
  }
  return pvVar6;
}



void FUN_00031068(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  thunk_FUN_000295b8(param_1,0);
  thunk_FUN_000295b8(param_1,1);
  if (*(int *)(param_1 + 0x158) != -1) {
    FUN_00023428(param_1);
  }
  if (*(int *)(param_1 + 0x154) != -1) {
    FUN_00023428(param_1);
  }
  if (*(int *)(param_1 + 0x15c) != -1) {
    FUN_00023428(param_1);
  }
  if (*(int *)(param_1 + 0x160) != -1) {
    FUN_00023428(param_1);
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if (*(int *)(param_1 + 300) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 300) = 0;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  if (*(int *)(param_1 + 0x218) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  if (*(int *)(param_1 + 0x224) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  if (*(int *)(param_1 + 0x23c) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  if (*(int *)(param_1 + 0x228) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  if (*(int *)(param_1 + 0x234) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  if (*(int *)(param_1 + 0x39c) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x39c) = 0;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0x250) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x250) = 0;
  }
  FUN_0003a4c8(*(undefined4 *)(param_1 + 0x248),0);
  FUN_0003a4c8(*(undefined4 *)(param_1 + 0x24c),0);
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  if (*(int *)(param_1 + 0x474) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x474) = 0;
  }
  FUN_00028488(param_1 + 0x1a0);
  (*DAT_000515c8)(param_1);
  return;
}



void FUN_00031364(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[0x84];
  *(undefined1 *)(iVar3 + 0x10c) = 0;
  iVar2 = param_1[0x85];
  if (param_1[0x85] < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(iVar3 + 0xf0) = iVar2 + 1;
  FUN_0002a5b4(iVar3,6);
  return;
}



int FUN_00031394(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  
  FUN_000296f8(&local_2c);
  FUN_0003ab9c(*param_1,auStack_24);
  piVar1 = (int *)FUN_0003abb0(auStack_24);
  iVar4 = 0;
  iVar5 = -1;
  while (piVar1 != (int *)0x0) {
    for (piVar1 = (int *)**(int **)(*piVar1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar3 = *piVar1;
      if ((*(char *)(iVar3 + 0x40) == '\0') &&
         (iVar2 = FUN_00029758(local_2c,uStack_28,*(undefined4 *)(iVar3 + 0x144),
                               *(undefined4 *)(iVar3 + 0x148)), iVar5 < iVar2)) {
        iVar4 = iVar3;
        iVar5 = iVar2;
      }
    }
    piVar1 = (int *)FUN_0003abb0(auStack_24);
  }
  return iVar4;
}



void FUN_00031430(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[2];
    *(undefined1 *)(*piVar1 + 0x8611) = 1;
    FUN_00024a24();
    FUN_0003a420(param_1,piVar1,0);
    piVar1 = piVar2;
  }
  return;
}



void FUN_00031480(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x28;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0x2f8) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(iVar1 + 0x2f8) = 0;
    }
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 4;
  } while (iVar2 != 0);
  if (*(char *)(param_1 + 0x3f4) != '\0') {
    if (*(int *)(param_1 + 0x3f0) != 0) {
      (*DAT_000515c8)();
    }
    *(undefined1 *)(param_1 + 0x3f4) = 0;
  }
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  if (*(char *)(param_1 + 0x3ec) != '\0') {
    if (*(int *)(param_1 + 1000) != 0) {
      (*DAT_000515c8)();
    }
    *(undefined1 *)(param_1 + 0x3ec) = 0;
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  return;
}



void FUN_0003152c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  memcpy((void *)(param_1 + 0x118),(void *)(param_2 + 0x118),0x2d0);
  memset((void *)(param_1 + 0x2f8),0,0xa0);
  iVar2 = 0;
  do {
    iVar1 = FUN_00030cc4(param_1 + 0x2f8 + iVar2,*(undefined4 *)(param_2 + 0x2f8));
    if (iVar1 != 0) {
      return;
    }
    iVar2 = iVar2 + 4;
    param_2 = param_2 + 4;
  } while (iVar2 != 0xa0);
  return;
}



void FUN_00031588(undefined4 *param_1)

{
  param_1[4] = stdout;
  param_1[5] = stdin;
  *param_1 = stderr;
  param_1[0x16] = fwrite;
  param_1[0x19] = fread;
  param_1[0x56] = 5;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[3] = 0x438;
  param_1[0xc] = 0xffffffff;
  param_1[0x4a] = 1;
  param_1[0xa5] = 1;
  *(undefined1 *)(param_1 + 0x6d) = 1;
  *(undefined1 *)((int)param_1 + 0x1b5) = 1;
  param_1[0x62] = 1;
  param_1[9] = 1;
  param_1[10] = 1;
  *(undefined1 *)((int)param_1 + 0x19f) = 1;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x10] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)((int)param_1 + 0x1b6) = 0;
  param_1[0x5b] = 0x3c;
  param_1[0x5a] = 0;
  *(undefined1 *)((int)param_1 + 0x139) = 1;
  param_1[0x73] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x59) = 1;
  param_1[0x75] = 0x1a4;
  param_1[0xa1] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb1) = 1;
  *(undefined1 *)((int)param_1 + 0x2c5) = 1;
  param_1[0x76] = 0x1ed;
  param_1[0xa2] = 0xfffffbef;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  param_1[0xaf] = 0x3c;
  param_1[0xae] = 0x3c;
  param_1[0xb2] = 1000;
  return;
}



int FUN_000316b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_000515d4)(1,0x8718);
  if (iVar1 == 0) {
    return 0x1b;
  }
  *(undefined4 *)(iVar1 + 0x8714) = 0xc0dedbad;
  iVar2 = (*DAT_000515c4)(0x100);
  *(int *)(iVar1 + 0x52c) = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0x1b;
  }
  else {
    iVar2 = FUN_00031588(iVar1 + 0x118);
    *(undefined4 *)(iVar1 + 0x530) = 0x100;
    *(uint *)(iVar1 + 0x440) = *(uint *)(iVar1 + 0x440) | 0x10;
    *(undefined4 *)(iVar1 + 0x528) = 0;
    *(undefined4 *)(iVar1 + 0x8538) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x853c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x8650) = 0;
    *(undefined4 *)(iVar1 + 0x865c) = 0;
    *(undefined4 *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x3d8) = 5;
    if (iVar2 == 0) {
      *param_1 = iVar1;
      return 0;
    }
  }
  if (*(int *)(iVar1 + 0x52c) != 0) {
    (*DAT_000515c8)();
  }
  FUN_00031480(iVar1);
  (*DAT_000515c8)(iVar1);
  return iVar2;
}



uint FUN_000317bc(int param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  void *__dest;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint **ppuVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  code *pcVar13;
  undefined4 *puVar14;
  void *__src;
  uint *puVar15;
  char *pcVar16;
  bool bVar17;
  uint *local_20;
  undefined4 local_1c;
  
  local_20 = param_3;
  local_1c = param_4;
  if (param_2 == 0x2717) {
    uVar7 = FUN_00030cc4(param_1 + 0x33c,*param_3,param_3,0x2717,param_1,0x2717);
    return uVar7;
  }
  if (0x2716 < param_2) {
    if (param_2 == 0x27b8) {
      *(uint *)(param_1 + 0x1b0) = *param_3;
      return 0;
    }
    if (0x27b7 < param_2) {
      if (param_2 == 0x4e2b) {
        uVar7 = *param_3;
        if (uVar7 == 0) {
          pcVar13 = fwrite;
        }
        else {
          pcVar13 = (code *)0x1;
        }
        *(uint *)(param_1 + 0x170) = uVar7;
        if (uVar7 == 0) {
          *(undefined4 *)(param_1 + 0x184) = 0;
          *(code **)(param_1 + 0x170) = pcVar13;
        }
        else {
          *(code **)(param_1 + 0x184) = pcVar13;
        }
        return 0;
      }
      if (param_2 < 0x4e2b) {
        if (param_2 == 0x27d9) {
          *(uint *)(param_1 + 0x8668) = *param_3;
          return 0;
        }
        if (param_2 < 0x27d9) {
          if (param_2 == 0x27ca) {
            uVar7 = FUN_00030cc4(param_1 + 0x38c,*param_3,param_3,0x27ca,param_1,0x27ca);
            return uVar7;
          }
          if (param_2 < 0x27ca) {
            if (param_2 == 0x27ba) {
              uVar7 = FUN_00030cc4(param_1 + 0x364,*param_3,param_3,0x27ba,param_1,0x27ba);
              return uVar7;
            }
            if (param_2 < 0x27ba) {
              uVar7 = FUN_00030cc4(param_1 + 0x360,*param_3,param_3,0x27ba,param_1,param_2);
              return uVar7;
            }
            if (param_2 == 0x27bd) {
              uVar7 = FUN_00030cc4(param_1 + 0x368,*param_3,param_3,0x27bd,param_1,0x27bd);
              return uVar7;
            }
            if (param_2 == 0x27be) {
              uVar7 = FUN_00030cc4(param_1 + 0x36c,*param_3,param_3,0x27be,param_1,0x27be);
              return uVar7;
            }
          }
          else {
            if (param_2 == 0x27cf) {
              uVar7 = FUN_00030cc4(param_1 + 900,*param_3,param_3,0x27cf,param_1,0x27cf);
              return uVar7;
            }
            if (param_2 < 0x27cf) {
              if (param_2 == 0x27cb) {
                *(uint *)(param_1 + 0x3a4) = *param_3;
                return 0;
              }
              if (param_2 == 0x27ce) {
                uVar7 = FUN_00030cc4(param_1 + 0x380,*param_3,param_3,0x27ce,param_1,0x27ce);
                return uVar7;
              }
            }
            else {
              if (param_2 == 0x27d0) {
                uVar7 = FUN_00030cc4(param_1 + 0x388,*param_3,param_3,0x27d0,param_1,0x27d0);
                return uVar7;
              }
              if (param_2 == 0x27d3) {
                *(uint *)(param_1 + 0x134) = *param_3;
                return 0;
              }
            }
          }
        }
        else {
          if (param_2 == 0x27ec) {
            uVar7 = FUN_00030cc4(param_1 + 0x394,*param_3,param_3,0x27ec,param_1,0x27ec);
            return uVar7;
          }
          if (param_2 < 0x27ec) {
            if (param_2 == 0x27e1) {
              *(uint *)(param_1 + 0x1ac) = *param_3;
              return 0;
            }
            if (param_2 < 0x27e1) {
              if (param_2 == 0x27da) {
                *(uint *)(param_1 + 0x3c4) = *param_3;
                return 0;
              }
              if (param_2 == 0x27db) {
                uVar7 = *param_3;
                *(uint *)(param_1 + 0x234) = uVar7;
                *(uint *)(param_1 + 0x3fc) = uVar7;
                return 0;
              }
            }
            else {
              if (param_2 == 0x27e3) {
                uVar7 = FUN_0003c4c0(param_1,*param_3);
                return uVar7;
              }
              if (param_2 == 0x27e9) {
                uVar7 = FUN_00030cc4(param_1 + 0x390,*param_3,param_3,0x27e9,param_1,0x27e9);
                return uVar7;
              }
            }
          }
          else {
            if (param_2 == 0x27ef) {
              uVar7 = FUN_0003c4d8(param_1,*param_3);
              return uVar7;
            }
            if (param_2 < 0x27ef) {
              if (param_2 == 0x27ed) {
                uVar7 = FUN_0003c4c8(param_1,*param_3);
                return uVar7;
              }
              if (param_2 == 0x27ee) {
                uVar7 = FUN_0003c4d0(param_1,*param_3);
                return uVar7;
              }
            }
            else {
              if (param_2 == 0x27f0) {
                uVar7 = FUN_00030cc4(param_1 + 0x370,*param_3,param_3,0x27f0,param_1,0x27f0);
                return uVar7;
              }
              if (param_2 == 0x27f4) {
                *(uint *)(param_1 + 0x20c) = *param_3;
                return 0;
              }
            }
          }
        }
      }
      else {
        if (param_2 == 0x4ee4) {
          *(uint *)(param_1 + 0x178) = *param_3;
          return 0;
        }
        if (param_2 < 0x4ee4) {
          if (param_2 == 0x4eae) {
            *(uint *)(param_1 + 0x1b4) = *param_3;
            return 0;
          }
          if (param_2 < 0x4eae) {
            if (param_2 == 0x4e6f) {
              *(uint *)(param_1 + 0x174) = *param_3;
              return 0;
            }
            if (param_2 < 0x4e6f) {
              if (param_2 == 0x4e2c) {
                uVar7 = *param_3;
                if (uVar7 == 0) {
                  pcVar13 = fread;
                }
                else {
                  pcVar13 = (code *)0x1;
                }
                *(uint *)(param_1 + 0x17c) = uVar7;
                if (uVar7 == 0) {
                  *(undefined4 *)(param_1 + 0x180) = 0;
                  *(code **)(param_1 + 0x17c) = pcVar13;
                }
                else {
                  *(code **)(param_1 + 0x180) = pcVar13;
                }
                return 0;
              }
              if (param_2 == 0x4e58) {
                uVar7 = *param_3;
                *(uint *)(param_1 + 0x188) = uVar7;
LAB_00032f2c:
                if (uVar7 == 0) {
                  *(undefined1 *)(param_1 + 0x438) = 0;
                }
                else {
                  *(undefined1 *)(param_1 + 0x438) = 1;
                }
                return 0;
              }
            }
            else {
              if (param_2 == 0x4e7e) {
                *(uint *)(param_1 + 400) = *param_3;
                return 0;
              }
              if (param_2 == 0x4ea2) {
                *(uint *)(param_1 + 0x194) = *param_3;
                return 0;
              }
            }
          }
          else {
            if (param_2 == 0x4eb4) {
              *(uint *)(param_1 + 0x198) = *param_3;
              return 0;
            }
            if (param_2 < 0x4eb4) {
              if (param_2 == 0x4eaf) {
                *(uint *)(param_1 + 0x1b8) = *param_3;
                return 0;
              }
              if (param_2 == 0x4eb0) {
                *(uint *)(param_1 + 0x1bc) = *param_3;
                return 0;
              }
            }
            else {
              if (param_2 == 0x4ec3) {
                *(uint *)(param_1 + 0x1a0) = *param_3;
                return 0;
              }
              if (param_2 == 0x4ec7) {
                *(uint *)(param_1 + 0x158) = *param_3;
                return 0;
              }
            }
          }
        }
        else {
          if (param_2 == 0x75a3) {
            puVar14 = (undefined4 *)((int)param_3 + 7U & 0xfffffff8);
            uVar2 = puVar14[1];
            *(undefined4 *)(param_1 + 0x1e0) = *puVar14;
            *(undefined4 *)(param_1 + 0x1e4) = uVar2;
            return 0;
          }
          if (param_2 < 0x75a3) {
            if (param_2 == 0x4ee8) {
              *(uint *)(param_1 + 0x3c0) = *param_3;
              return 0;
            }
            if (param_2 < 0x4ee8) {
              if (param_2 == 0x4ee6) {
                *(uint *)(param_1 + 0x3b8) = *param_3;
                return 0;
              }
              if (param_2 == 0x4ee7) {
                *(uint *)(param_1 + 0x3bc) = *param_3;
                return 0;
              }
            }
            else {
              if (param_2 == 0x4ef0) {
                *(uint *)(param_1 + 0x1a8) = *param_3;
                return 0;
              }
              if (param_2 == 0x4efb) {
                uVar7 = *param_3;
                *(uint *)(param_1 + 0x18c) = uVar7;
                goto LAB_00032f2c;
              }
            }
          }
          else {
            if (param_2 == 0x75a8) {
              puVar15 = (uint *)((int)param_3 + 7U & 0xfffffff8);
              uVar7 = *puVar15;
              uVar12 = puVar15[1];
              iVar3 = *(int *)(param_1 + 0x164);
              bVar17 = *(uint *)(param_1 + 0x160) < uVar7;
              if ((int)(iVar3 - (uVar12 + bVar17)) < 0 !=
                  (SBORROW4(iVar3,uVar12) != SBORROW4(iVar3 - uVar12,(uint)bVar17))) {
                if (*(int *)(param_1 + 0x154) == *(int *)(param_1 + 0x334)) {
                  FUN_00030cc4(param_1 + 0x334,0,*(int *)(param_1 + 0x154),*(int *)(param_1 + 0x334)
                               ,param_1,0x75a8);
                  *(undefined4 *)(param_1 + 0x154) = 0;
                }
              }
              *(uint *)(param_1 + 0x160) = uVar7;
              *(uint *)(param_1 + 0x164) = uVar12;
              return 0;
            }
            if (param_2 < 0x75a8) {
              if (param_2 == 0x75a4) {
                puVar14 = (undefined4 *)((int)param_3 + 7U & 0xfffffff8);
                uVar2 = puVar14[1];
                *(undefined4 *)(param_1 + 0x200) = *puVar14;
                *(undefined4 *)(param_1 + 0x204) = uVar2;
                return 0;
              }
              if (param_2 == 0x75a5) {
                puVar14 = (undefined4 *)((int)param_3 + 7U & 0xfffffff8);
                uVar2 = puVar14[1];
                *(undefined4 *)(param_1 + 0x298) = *puVar14;
                *(undefined4 *)(param_1 + 0x29c) = uVar2;
                return 0;
              }
            }
            else {
              if (param_2 == 0x75c1) {
                puVar14 = (undefined4 *)((int)param_3 + 7U & 0xfffffff8);
                uVar2 = puVar14[1];
                *(undefined4 *)(param_1 + 0x1f0) = *puVar14;
                *(undefined4 *)(param_1 + 500) = uVar2;
                return 0;
              }
              if (param_2 == 0x75c2) {
                puVar14 = (undefined4 *)((int)param_3 + 7U & 0xfffffff8);
                uVar2 = puVar14[1];
                *(undefined4 *)(param_1 + 0x1f8) = *puVar14;
                *(undefined4 *)(param_1 + 0x1fc) = uVar2;
                return 0;
              }
            }
          }
        }
      }
      return 0x30;
    }
    if (param_2 == 0x275c) {
      uVar7 = FUN_00030cc4(param_1 + 0x358,*param_3,param_3,0x275c,param_1,0x275c);
      return uVar7;
    }
    if (param_2 < 0x275c) {
      if (param_2 == 0x272a) {
        uVar7 = FUN_00030cc4(param_1 + 0x324,*param_3,param_3,0x272a,param_1,0x272a);
        return uVar7;
      }
      if (0x2729 < param_2) {
        if (param_2 == 0x2737) {
          *(uint *)(param_1 + 0x21c) = *param_3;
          return 0;
        }
        if (0x2736 < param_2) {
          if (param_2 == 0x274f) {
            uVar7 = FUN_00030cc4(param_1 + 0x32c,*param_3,param_3,0x274f,param_1,0x274f);
            *(bool *)(param_1 + 0x2c9) = *(int *)(param_1 + 0x32c) != 0;
            return uVar7;
          }
          if (0x274e < param_2) {
            if (param_2 == 0x2751) {
              uVar7 = FUN_00030cc4(param_1 + 0x34c,*param_3,param_3,0x2751,param_1,0x2751);
              return uVar7;
            }
            if (param_2 != 0x2756) {
              return 0x30;
            }
            *(uint *)(param_1 + 0x230) = *param_3;
            return 0;
          }
          if (param_2 == 0x2749) {
            *(uint *)(param_1 + 0x1c0) = *param_3;
            return 0;
          }
          if (param_2 != 0x274e) {
            return 0x30;
          }
          uVar7 = FUN_00030cc4(param_1 + 0x30c,*param_3,param_3,0x274e,param_1,0x274e);
          return uVar7;
        }
        if (param_2 == 0x272f) {
          if (*param_3 == 0) {
            return 0;
          }
          iVar3 = FUN_00027950(*(undefined4 *)(param_1 + 0x3f8));
          if (iVar3 != 0) {
            *(int *)(param_1 + 0x3f8) = iVar3;
            return 0;
          }
          FUN_000279b0(*(undefined4 *)(param_1 + 0x3f8));
          *(undefined4 *)(param_1 + 0x3f8) = 0;
          return 0x1b;
        }
        if (param_2 < 0x272f) {
          if (param_2 == 0x272c) {
            *(uint *)(param_1 + 0x218) = *param_3;
            return 0;
          }
          if (param_2 != 0x272d) {
            return 0x30;
          }
          *(uint *)(param_1 + 0x130) = *param_3;
          return 0;
        }
        if (param_2 == 0x2734) {
          uVar7 = FUN_00030cc4(param_1 + 0x308,*param_3,param_3,0x2734,param_1,0x2734);
          return uVar7;
        }
        if (param_2 != 0x2735) {
          return 0x30;
        }
        uVar7 = *param_3;
        *(uint *)(param_1 + 0x118) = uVar7;
        if (uVar7 != 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x118) = stderr;
        return 0;
      }
      if (param_2 == 0x2721) {
        uVar7 = FUN_00030cc4(param_1 + 0x31c,*param_3,param_3,0x2721,param_1,0x2721);
        *(bool *)(param_1 + 0x2b6) = *(int *)(param_1 + 0x31c) != 0;
        return uVar7;
      }
      if (0x2720 < param_2) {
        if (param_2 == 0x2727) {
          *(uint *)(param_1 + 0x208) = *param_3;
          return 0;
        }
        if (0x2726 < param_2) {
          if (param_2 == 0x2728) {
            *(uint *)(param_1 + 0x210) = *param_3;
            *(undefined4 *)(param_1 + 0x240) = 3;
            *(undefined1 *)(param_1 + 0x2bf) = 0;
            return 0;
          }
          if (param_2 != 0x2729) {
            return 0x30;
          }
          uVar7 = FUN_00030cc4(param_1 + 0x2f8,*param_3,param_3,0x2729,param_1,0x2729);
          return uVar7;
        }
        if (param_2 == 0x2722) {
          uVar7 = FUN_00030cc4(param_1 + 0x35c,*param_3,param_3,0x2722,param_1,0x2722);
          return uVar7;
        }
        if (param_2 != 0x2726) {
          return 0x30;
        }
        uVar7 = FUN_00030cc4(param_1 + 0x300,*param_3,param_3,0x2726,param_1,0x2726);
        return uVar7;
      }
      if (param_2 == 0x271a) {
        *(uint *)(param_1 + 0x120) = *param_3;
        return 0;
      }
      if (param_2 < 0x271a) {
        if (param_2 != 0x2719) {
          return 0x30;
        }
        *(uint *)(param_1 + 300) = *param_3;
        return 0;
      }
      if (param_2 == 0x271f) {
        uVar7 = *param_3;
        *(uint *)(param_1 + 0x154) = uVar7;
        FUN_00030cc4(param_1 + 0x334,0,param_3,uVar7,param_1,0x271f);
        *(undefined4 *)(param_1 + 0x240) = 2;
        return 0;
      }
      if (param_2 != 0x2720) {
        return 0x30;
      }
      if (*(char *)(param_1 + 0x3f4) != '\0') {
        if (*(int *)(param_1 + 0x3f0) != 0) {
          (*DAT_000515c8)();
          *(undefined4 *)(param_1 + 0x3f0) = 0;
        }
        *(undefined1 *)(param_1 + 0x3f4) = 0;
      }
      uVar7 = FUN_00030cc4(param_1 + 0x340,*param_3);
      *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x340);
      return uVar7;
    }
    if (param_2 == 0x2774) {
      uVar7 = *param_3;
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_00026f3c(param_1,1,2);
        if (*(int *)(param_1 + 0x3c) == 3) {
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
        iVar10 = *(int *)(param_1 + 0x48);
        iVar3 = *(int *)(iVar10 + 0x1c);
        if (*(int *)(iVar10 + 0x18) == *(int *)(param_1 + 0x400)) {
          *(undefined4 *)(param_1 + 0x400) = 0;
        }
        if (iVar3 == *(int *)(param_1 + 0x8548)) {
          *(undefined4 *)(param_1 + 0x8548) = 0;
        }
        *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + -1;
        FUN_00026f84(param_1,1);
      }
      *(uint *)(param_1 + 0x48) = uVar7;
      if (uVar7 == 0) {
        return 0;
      }
      FUN_00026f3c(param_1,1,2);
      iVar3 = *(int *)(param_1 + 0x48);
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      iVar10 = *(int *)(iVar3 + 0x18);
      if (*(int *)(iVar3 + 0x14) != 0) {
        *(int *)(param_1 + 0x38) = *(int *)(iVar3 + 0x14);
        *(undefined4 *)(param_1 + 0x3c) = 3;
      }
      if (iVar10 != 0) {
        if (*(int *)(param_1 + 0x400) != 0) {
          FUN_0002c4d4();
        }
        *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x18);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x48) + 0x1c);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x20);
        *(int *)(param_1 + 0x8548) = iVar3;
      }
      FUN_00026f84(param_1,1);
      return 0;
    }
    if (param_2 < 0x2774) {
      if (param_2 == 0x2767) {
        uVar7 = FUN_00030cc4(param_1 + 800,*param_3,param_3,0x2767,param_1,0x2767);
        return uVar7;
      }
      if (0x2766 < param_2) {
        if (param_2 == 0x276d) {
          *(uint *)(param_1 + 0x220) = *param_3;
          return 0;
        }
        if (0x276c < param_2) {
          if (param_2 == 0x276f) {
            *(uint *)(param_1 + 0x11c) = *param_3;
            return 0;
          }
          if (param_2 != 0x2771) {
            return 0x30;
          }
          uVar7 = FUN_00030cc4(param_1 + 0x348,*param_3,param_3,0x2771,param_1,0x2771);
          return uVar7;
        }
        if (param_2 == 0x2768) {
          uVar7 = FUN_00030cc4(param_1 + 0x328,*param_3,param_3,0x2768,param_1,0x2768);
          return uVar7;
        }
        if (param_2 != 0x2769) {
          return 0x30;
        }
        if ((char *)*param_3 == (char *)0x0) {
          return 0;
        }
        if (*(char *)*param_3 == '\0') {
          return 0;
        }
        uVar7 = FUN_00028b54();
        return uVar7;
      }
      if (param_2 == 0x2762) {
        uVar7 = FUN_00030cc4(param_1 + 0x304,*param_3,param_3,0x2762,param_1,0x2762);
        uVar2 = FUN_0002bec4(param_1,0,*(undefined4 *)(param_1 + 0x400),
                             *(undefined1 *)(param_1 + 0x215));
        *(undefined4 *)(param_1 + 0x400) = uVar2;
        return uVar7;
      }
      if (param_2 < 0x2762) {
        if (param_2 != 0x275d) {
          return 0x30;
        }
        uVar7 = FUN_00030cc4(param_1 + 0x354,*param_3,param_3,0x275d,param_1,0x275d);
        return uVar7;
      }
      if (param_2 == 0x2763) {
        uVar7 = FUN_00030cc4(param_1 + 0x350,*param_3,param_3,0x2763,param_1,0x2763);
        return uVar7;
      }
      if (param_2 != 0x2766) {
        return 0x30;
      }
      uVar7 = FUN_00030cc4(param_1 + 0x2fc,*param_3,param_3,0x2766,param_1,0x2766);
      return uVar7;
    }
    if (param_2 == 0x2796) {
      uVar7 = FUN_00030cc4(param_1 + 0x314,*param_3,param_3,0x2796,param_1,0x2796);
      return uVar7;
    }
    if (param_2 < 0x2796) {
      if (param_2 == 0x2778) {
        *(uint *)(param_1 + 0x290) = *param_3;
        return 0;
      }
      if (0x2777 < param_2) {
        if (param_2 == 0x2786) {
          uVar7 = FUN_00030cc4(param_1 + 0x330,*param_3,param_3,0x2786,param_1,0x2786);
          return uVar7;
        }
        if (param_2 != 0x2793) {
          return 0x30;
        }
        *(uint *)(param_1 + 0x1c4) = *param_3;
        return 0;
      }
      pcVar16 = (char *)0x2776;
      if (param_2 == 0x2776) {
        pbVar5 = (byte *)*param_3;
        if (pbVar5 != (byte *)0x0) {
          param_3 = (uint *)(uint)*pbVar5;
          pcVar16 = "identity";
          if (param_3 == (uint *)0x0) {
            pbVar5 = (byte *)pcVar16;
          }
        }
        uVar7 = FUN_00030cc4(param_1 + 0x310,pbVar5,param_3,pcVar16,param_1,0x2776);
        return uVar7;
      }
      if (param_2 != 0x2777) {
        return 0x30;
      }
      *(uint *)(param_1 + 0x28c) = *param_3;
      return 0;
    }
    if (param_2 == 0x27a5) {
      *(uint *)(param_1 + 0x19c) = *param_3;
      return 0;
    }
    if (param_2 < 0x27a5) {
      if (param_2 != 0x2797) {
        if (param_2 != 0x27a3) {
          return 0x30;
        }
        uVar7 = FUN_00030cc4(param_1 + 0x318,*param_3,param_3,0x27a3,param_1,0x27a3);
        return uVar7;
      }
      uVar7 = *param_3;
      if (uVar7 == 0) {
        return 0;
      }
      iVar3 = FUN_0003cc64(uVar7,&DAT_00047356);
      if (iVar3 == 0) {
        iVar3 = FUN_0003cc64(uVar7,&DAT_0004735a);
        if (iVar3 != 0) {
          FUN_00026f3c(param_1,2,2);
          FUN_0002c464(*(undefined4 *)(param_1 + 0x400));
          FUN_00026f84(param_1,2);
          return 0;
        }
        iVar3 = FUN_0003cc64(uVar7,"FLUSH");
        if (iVar3 == 0) {
          if (*(int *)(param_1 + 0x400) == 0) {
            uVar2 = FUN_0002bec4(param_1,0,0,1);
            *(undefined4 *)(param_1 + 0x400) = uVar2;
          }
          iVar3 = (*DAT_000515d0)(uVar7);
          if (iVar3 == 0) {
            return 0x1b;
          }
          FUN_00026f3c(param_1,2,2);
          iVar10 = FUN_0003cccc("Set-Cookie:",iVar3,0xb);
          if (iVar10 == 0) {
            uVar2 = *(undefined4 *)(param_1 + 0x400);
            iVar11 = iVar3;
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + 0x400);
            iVar11 = iVar3 + 0xb;
          }
          FUN_0002b3c4(param_1,uVar2,iVar10 != 0,iVar11,0,0);
          FUN_00026f84(param_1,2);
          (*DAT_000515c8)(iVar3);
          return 0;
        }
        FUN_0002c5c8(param_1,0);
        return 0;
      }
      FUN_00026f3c(param_1,2,2);
      FUN_0002c43c(*(undefined4 *)(param_1 + 0x400));
      FUN_00026f84(param_1,2);
      return 0;
    }
    if (param_2 == 0x27b4) {
      *(uint *)(param_1 + 0x1a4) = *param_3;
      return 0;
    }
    iVar3 = 0x27b5;
    if (param_2 != 0x27b5) {
      return 0x30;
    }
    __src = (void *)*param_3;
    if (__src != (void *)0x0) {
      param_3 = *(uint **)(param_1 + 0x160);
      iVar3 = *(int *)(param_1 + 0x164);
      if (iVar3 != -1 || param_3 != (uint *)0xffffffff) {
        if (iVar3 == 0) {
          FUN_00030cc4(param_1 + 0x334,0,param_3,0,param_1,0x27b5);
          iVar3 = *(int *)(param_1 + 0x160);
          if (iVar3 == 0 && *(int *)(param_1 + 0x164) == 0) {
            iVar3 = 1;
          }
          __dest = (void *)(*DAT_000515c4)(iVar3);
          if (__dest != (void *)0x0) {
            if (*(size_t *)(param_1 + 0x160) != 0 || *(int *)(param_1 + 0x164) != 0) {
              memcpy(__dest,__src,*(size_t *)(param_1 + 0x160));
            }
            uVar7 = 0;
            *(void **)(param_1 + 0x334) = __dest;
            goto LAB_00032744;
          }
        }
        uVar7 = 0x1b;
        goto LAB_00032744;
      }
    }
    uVar7 = FUN_00030cc4(param_1 + 0x334,__src,param_3,iVar3,param_1,0x27b5);
LAB_00032744:
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x334);
    *(undefined4 *)(param_1 + 0x240) = 2;
    return uVar7;
  }
  if (param_2 == 0x6e) {
    uVar7 = *param_3;
    if (uVar7 == 1) {
      *(undefined4 *)(param_1 + 0x2a4) = 1;
      return 0;
    }
    if (uVar7 == 2) {
      *(undefined4 *)(param_1 + 0x2a4) = 2;
      return 0;
    }
    if (uVar7 == 0) {
      *(undefined4 *)(param_1 + 0x2a4) = 0;
      return 0;
    }
    return 0x30;
  }
  if (0x6e < param_2) {
    if (param_2 == 0xb2) {
      *(uint *)(param_1 + 0x1d8) = *param_3;
      return 0;
    }
    if (param_2 < 0xb3) {
      if (param_2 == 0x8c) {
        uVar2 = FUN_00027ab0(*param_3);
        *(undefined4 *)(param_1 + 0x16c) = uVar2;
        return 0;
      }
      if (0x8c < param_2) {
        if (param_2 == 0x9d) {
          cVar9 = '\x01' - (char)*param_3;
          if (1 < *param_3) {
            cVar9 = '\0';
          }
          *(char *)(param_1 + 0x2e8) = cVar9;
          return 0;
        }
        if (0x9d < param_2) {
          if (param_2 == 0xa0) {
            *(uint *)(param_1 + 0x2f0) = *param_3;
            return 0;
          }
          if (0xa0 < param_2) {
            if (param_2 == 0xa1) {
              uVar7 = FUN_00027ab0(*param_3);
              *(uint *)(param_1 + 0x14c) = uVar7 & 7;
              return 0;
            }
            if (param_2 != 0xab) {
              return 0x30;
            }
            uVar2 = FUN_00027ab8(*param_3);
            *(undefined4 *)(param_1 + 0x398) = uVar2;
            return 0;
          }
          if (param_2 == 0x9e) {
            cVar9 = '\x01' - (char)*param_3;
            if (1 < *param_3) {
              cVar9 = '\0';
            }
            *(char *)(param_1 + 0x2e9) = cVar9;
            return 0;
          }
          if (param_2 != 0x9f) {
            return 0x30;
          }
          *(uint *)(param_1 + 0x2ec) = *param_3;
          return 0;
        }
        if (param_2 == 0x9a) {
          *(uint *)(param_1 + 0x2d8) = *param_3;
          return 0;
        }
        if (0x9a < param_2) {
          if (param_2 == 0x9b) {
            *(uint *)(param_1 + 0x1c8) = *param_3;
            return 0;
          }
          if (param_2 != 0x9c) {
            return 0x30;
          }
          *(uint *)(param_1 + 0x1cc) = *param_3;
          return 0;
        }
        if (param_2 == 0x8d) {
          *(bool *)(param_1 + 0x2e1) = *param_3 != 0;
          return 0;
        }
        if (param_2 != 0x96) {
          return 0x30;
        }
        *(bool *)(param_1 + 0x27c) = *param_3 != 0;
        return 0;
      }
      if (param_2 == 0x79) {
        *(bool *)(param_1 + 0x2de) = *param_3 != 0;
        return 0;
      }
      if (0x79 < param_2) {
        if (param_2 == 0x89) {
          *(bool *)(param_1 + 0x2e0) = *param_3 != 0;
          return 0;
        }
        if (0x89 < param_2) {
          if (param_2 == 0x8a) {
            *(uint *)(param_1 + 0x2a0) = *param_3;
            return 0;
          }
          if (param_2 != 0x8b) {
            return 0x30;
          }
          uVar1 = FUN_00027abc(*param_3);
          *(undefined2 *)(param_1 + 0x168) = uVar1;
          return 0;
        }
        if (param_2 == 0x81) {
          *(uint *)(param_1 + 0x2d4) = *param_3;
          return 0;
        }
        if (param_2 != 0x88) {
          return 0x30;
        }
        *(bool *)(param_1 + 0x2df) = *param_3 != 0;
        return 0;
      }
      if (param_2 == 0x71) {
        *(uint *)(param_1 + 0x294) = *param_3;
        return 0;
      }
      if (param_2 < 0x72) {
        if (param_2 != 0x70) {
          return 0x30;
        }
        *(uint *)(param_1 + 0x1d4) = *param_3 * 1000;
        return 0;
      }
      if (param_2 == 0x72) {
        uVar7 = *param_3;
        *(uint *)(param_1 + 0x298) = uVar7;
        *(int *)(param_1 + 0x29c) = (int)uVar7 >> 0x1f;
        return 0;
      }
      if (param_2 != 0x77) {
        return 0x30;
      }
      *(uint *)(param_1 + 0x2d0) = *param_3;
      return 0;
    }
    if (param_2 == 0xd5) {
      *(bool *)(param_1 + 0x3cc) = *param_3 != 0;
      return 0;
    }
    if (param_2 < 0xd6) {
      if (param_2 == 0xc1) {
        *(uint *)(param_1 + 0x8638) = *param_3;
        return 0;
      }
      if (0xc1 < param_2) {
        if (param_2 == 0xcf) {
          *(bool *)(param_1 + 0x2ba) = *param_3 != 0;
          return 0;
        }
        if (0xcf < param_2) {
          if (param_2 == 0xd2) {
            *(uint *)(param_1 + 0x3c8) = *param_3;
            return 0;
          }
          if (param_2 != 0xd4) {
            return 0x30;
          }
          *(uint *)(param_1 + 0x1d0) = *param_3;
          return 0;
        }
        if (param_2 == 0xc2) {
          *(uint *)(param_1 + 0x8638) = *param_3;
          return 0;
        }
        if (param_2 != 0xc5) {
          return 0x30;
        }
        *(bool *)(param_1 + 0x3b4) = *param_3 != 0;
        return 0;
      }
      if (param_2 == 0xb6) {
        *(uint *)(param_1 + 0x3a0) = *param_3;
        return 0;
      }
      if (param_2 < 0xb7) {
        if (param_2 != 0xb5) {
          return 0x30;
        }
        *(uint *)(param_1 + 0x39c) = *param_3;
        return 0;
      }
      if (param_2 == 0xbc) {
        *(bool *)(param_1 + 0x2ce) = *param_3 != 0;
        return 0;
      }
      if (param_2 != 0xbd) {
        return 0x30;
      }
      if (*param_3 - 1 < 0xb) {
        uVar7 = (uint)(byte)(&DAT_000472c3)[*param_3];
      }
      else {
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x3ac) = uVar7;
      return 0;
    }
    if (param_2 == 0xe2) {
      *(bool *)(param_1 + 0x3dd) = *param_3 != 0;
      return 0;
    }
    if (param_2 < 0xe3) {
      if (param_2 == 0xd8) {
        *(byte *)(param_1 + 0x2e2) = (byte)*param_3 & 1;
        return 0;
      }
      if (0xd8 < param_2) {
        if (param_2 == 0xda) {
          *(bool *)(param_1 + 0x3a8) = *param_3 != 0;
          return 0;
        }
        if (param_2 != 0xe1) {
          return 0x30;
        }
        *(bool *)(param_1 + 0x3dc) = *param_3 != 0;
        return 0;
      }
      if (param_2 == 0xd6) {
        *(uint *)(param_1 + 0x3d0) = *param_3;
        return 0;
      }
      if (param_2 != 0xd7) {
        return 0x30;
      }
      *(uint *)(param_1 + 0x3d4) = *param_3;
      return 0;
    }
    if (param_2 == 0x2711) {
      *(uint *)(param_1 + 0x128) = *param_3;
      return 0;
    }
    if (param_2 < 0x2711) {
      if (param_2 == 0xe3) {
        *(uint *)(param_1 + 0x3e0) = *param_3;
        return 0;
      }
      if (param_2 != 0xe5) {
        return 0x30;
      }
      *(byte *)(param_1 + 0x214) = (byte)*param_3 & 1;
      return 0;
    }
    if (param_2 == 0x2712) {
      if (*(char *)(param_1 + 0x3ec) != '\0') {
        if (*(int *)(param_1 + 1000) != 0) {
          (*DAT_000515c8)();
          *(undefined4 *)(param_1 + 1000) = 0;
        }
        *(undefined1 *)(param_1 + 0x3ec) = 0;
      }
      uVar7 = FUN_00030cc4(param_1 + 0x344,*param_3);
      *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x344);
      return uVar7;
    }
    if (param_2 != 0x2715) {
      return 0x30;
    }
    pcVar16 = (char *)*param_3;
    local_20 = (uint *)0x0;
    local_1c = 0;
    if (pcVar16 != (char *)0x0) {
      sVar4 = strlen(pcVar16);
      if (param_1 == -0x368) {
        ppuVar8 = (uint **)0x0;
      }
      else {
        ppuVar8 = &local_20;
      }
      if (param_1 == -0x36c) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        puVar14 = &local_1c;
      }
      uVar7 = FUN_00030d30(pcVar16,sVar4,ppuVar8,puVar14,0);
      if (uVar7 != 0) {
        return uVar7;
      }
    }
    if (param_1 == -0x368) {
      uVar7 = 0;
    }
    else {
      if ((((local_20 == (uint *)0x0) && (pcVar16 != (char *)0x0)) && (*pcVar16 == ':')) &&
         (local_20 = (uint *)(*DAT_000515d0)(&DAT_000467ca), local_20 == (uint *)0x0)) {
        uVar7 = 0x1b;
      }
      else {
        uVar7 = 0;
      }
      if (*(int *)(param_1 + 0x368) != 0) {
        (*DAT_000515c8)();
      }
      *(uint **)(param_1 + 0x368) = local_20;
    }
    if (param_1 != -0x36c) {
      if (*(int *)(param_1 + 0x36c) != 0) {
        (*DAT_000515c8)();
      }
      *(undefined4 *)(param_1 + 0x36c) = local_1c;
      return uVar7;
    }
    return uVar7;
  }
  if (param_2 != 0x36) {
    if (0x36 < param_2) {
      if (param_2 == 0x51) {
        if (*param_3 != 1) {
          *(bool *)(param_1 + 0x251) = *param_3 != 0;
          return 0;
        }
        FUN_00030648(param_1,"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
        return 0x2b;
      }
      if (0x51 < param_2) {
        if (param_2 == 0x60) {
          *(bool *)(param_1 + 0x215) = *param_3 != 0;
          return 0;
        }
        if (0x60 < param_2) {
          if (param_2 == 0x69) {
            *(bool *)(param_1 + 699) = *param_3 != 0;
            return 0;
          }
          if (0x69 < param_2) {
            if (param_2 == 0x6a) {
              *(bool *)(param_1 + 0x2cd) = *param_3 != 0;
              return 0;
            }
            if (param_2 != 0x6b) {
              return 0x30;
            }
            uVar7 = *param_3;
            if (uVar7 == 0) {
              *(undefined4 *)(param_1 + 0x13c) = 0;
              return 0;
            }
            uVar12 = uVar7 >> 4 & 1;
            if (uVar12 != 0) {
              uVar7 = uVar7 & 0xffffffef | 2;
            }
            *(char *)(param_1 + 0x85c6) = (char)uVar12;
            uVar12 = 0;
            do {
              uVar6 = uVar12 + 1;
              if (((uVar7 & 0xffffffd3) >> (uVar12 & 0xff) & 1) != 0) {
                *(uint *)(param_1 + 0x13c) = uVar7 & 0xffffffd3;
                return 0;
              }
              uVar12 = uVar6;
            } while (uVar6 != 0x1f);
            return 4;
          }
          if (param_2 == 0x62) {
            if (*param_3 - 1 < 0x3fff) {
              *(uint *)(param_1 + 0x288) = *param_3;
              return 0;
            }
            *(undefined4 *)(param_1 + 0x288) = 0;
            return 0;
          }
          if (param_2 != 99) {
            return 0x30;
          }
          *(bool *)(param_1 + 0x2dc) = *param_3 != 0;
          return 0;
        }
        if (param_2 == 0x5a) {
          uVar7 = FUN_00028b5c();
          return uVar7;
        }
        if (0x5a < param_2) {
          if (param_2 == 0x5b) {
            *(bool *)(param_1 + 0x2dd) = *param_3 != 0;
            return 0;
          }
          if (param_2 != 0x5c) {
            return 0x30;
          }
          *(uint *)(param_1 + 0x284) = *param_3;
          return 0;
        }
        if (param_2 == 0x54) {
          uVar7 = *param_3;
          if (uVar7 != 3) {
            *(uint *)(param_1 + 0x244) = uVar7;
          }
          return (uint)(uVar7 == 3);
        }
        if (param_2 != 0x55) {
          return 0x30;
        }
        *(bool *)(param_1 + 0x2cc) = *param_3 != 0;
        return 0;
      }
      if (param_2 == 0x45) {
        *(bool *)(param_1 + 0x2b1) = *param_3 != 0;
        return 0;
      }
      if (0x45 < param_2) {
        if (param_2 == 0x4b) {
          *(bool *)(param_1 + 0x2ca) = *param_3 != 0;
          return 0;
        }
        if (0x4b < param_2) {
          if (param_2 == 0x4e) {
            *(uint *)(param_1 + 0x1cc) = *param_3 * 1000;
            return 0;
          }
          if (param_2 != 0x50) {
            return 0x30;
          }
          if (*param_3 == 0) {
            return 0;
          }
          *(undefined4 *)(param_1 + 0x240) = 1;
          *(undefined1 *)(param_1 + 0x2c1) = 0;
          *(undefined1 *)(param_1 + 0x2bf) = 0;
          return 0;
        }
        if (param_2 == 0x47) {
          *(uint *)(param_1 + 0x3d8) = *param_3;
          return 0;
        }
        if (param_2 != 0x4a) {
          return 0x30;
        }
        *(bool *)(param_1 + 0x2cb) = *param_3 != 0;
        return 0;
      }
      if (param_2 == 0x3c) {
        uVar7 = *param_3;
        iVar10 = *(int *)(param_1 + 0x164);
        iVar3 = (int)uVar7 >> 0x1f;
        bVar17 = *(uint *)(param_1 + 0x160) < uVar7;
        if ((int)(iVar10 - (iVar3 + (uint)bVar17)) < 0 !=
            (SBORROW4(iVar10,iVar3) != SBORROW4(iVar10 - iVar3,(uint)bVar17))) {
          if (*(int *)(param_1 + 0x154) == *(int *)(param_1 + 0x334)) {
            FUN_00030cc4(param_1 + 0x334,0,*(int *)(param_1 + 0x154),*(int *)(param_1 + 0x334),
                         param_1,0x3c);
            *(undefined4 *)(param_1 + 0x154) = 0;
          }
        }
        *(uint *)(param_1 + 0x160) = uVar7;
        *(int *)(param_1 + 0x164) = iVar3;
        return 0;
      }
      if (param_2 < 0x3d) {
        if (param_2 != 0x3a) {
          return 0x30;
        }
        *(bool *)(param_1 + 0x2be) = *param_3 != 0;
        return 0;
      }
      if (param_2 == 0x40) {
        *(bool *)(param_1 + 0x250) = *param_3 != 0;
        return 0;
      }
      if (param_2 != 0x44) {
        return 0x30;
      }
      *(uint *)(param_1 + 0x148) = *param_3;
      return 0;
    }
    if (param_2 == 0x29) {
      *(bool *)(param_1 + 0x2c8) = *param_3 != 0;
      return 0;
    }
    if (param_2 < 0x2a) {
      if (param_2 == 0x14) {
        *(uint *)(param_1 + 0x1ec) = *param_3;
        return 0;
      }
      if (0x14 < param_2) {
        if (param_2 == 0x20) {
          *(uint *)(param_1 + 0x248) = *param_3;
          return 0;
        }
        if (0x20 < param_2) {
          if (param_2 == 0x21) {
            *(uint *)(param_1 + 0x238) = *param_3;
            return 0;
          }
          if (param_2 != 0x22) {
            return 0x30;
          }
          *(uint *)(param_1 + 0x23c) = *param_3;
          return 0;
        }
        if (param_2 == 0x15) {
          uVar7 = *param_3;
          *(uint *)(param_1 + 0x200) = uVar7;
          *(int *)(param_1 + 0x204) = (int)uVar7 >> 0x1f;
          return 0;
        }
        if (param_2 != 0x1b) {
          return 0x30;
        }
        *(bool *)(param_1 + 0x216) = *param_3 != 0;
        return 0;
      }
      if (param_2 == 0xd) {
        *(uint *)(param_1 + 0x1c8) = *param_3 * 1000;
        return 0;
      }
      if (param_2 < 0xe) {
        if (param_2 != 3) {
          return 0x30;
        }
        *(uint *)(param_1 + 0x138) = *param_3;
        return 0;
      }
      if (param_2 == 0xe) {
        uVar7 = *param_3;
        *(uint *)(param_1 + 0x1e0) = uVar7;
        *(int *)(param_1 + 0x1e4) = (int)uVar7 >> 0x1f;
        return 0;
      }
      if (param_2 != 0x13) {
        return 0x30;
      }
      *(uint *)(param_1 + 0x1e8) = *param_3;
      return 0;
    }
    if (param_2 == 0x2f) {
      if (*param_3 != 0) {
        *(undefined4 *)(param_1 + 0x240) = 2;
        *(undefined1 *)(param_1 + 0x2bf) = 0;
        return 0;
      }
      goto LAB_00032524;
    }
    if (0x2f < param_2) {
      if (param_2 == 0x33) {
        *(uint *)(param_1 + 0x2c4) = *param_3;
        return 0;
      }
      if (0x33 < param_2) {
        if (param_2 == 0x34) {
          *(bool *)(param_1 + 0x2b9) = *param_3 != 0;
          return 0;
        }
        if (param_2 != 0x35) {
          return 0x30;
        }
        *(bool *)(param_1 + 0x2b3) = *param_3 != 0;
        return 0;
      }
      if (param_2 == 0x30) {
        *(bool *)(param_1 + 0x2b5) = *param_3 != 0;
        return 0;
      }
      if (param_2 != 0x32) {
        return 0x30;
      }
      *(bool *)(param_1 + 0x2b4) = *param_3 != 0;
      return 0;
    }
    if (param_2 == 0x2c) {
      *(bool *)(param_1 + 0x2bf) = *param_3 != 0;
      return 0;
    }
    if (param_2 < 0x2d) {
      if (param_2 == 0x2a) {
        *(bool *)(param_1 + 700) = *param_3 != 0;
        return 0;
      }
      if (param_2 != 0x2b) {
        return 0x30;
      }
      bVar17 = *param_3 != 0;
      if (bVar17) {
        uVar7 = *(uint *)(param_1 + 0x440) | 0x10;
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x440) & 0xffffffef;
      }
      *(bool *)(param_1 + 0x2b7) = bVar17;
      if (bVar17) {
        *(uint *)(param_1 + 0x440) = uVar7;
      }
      else {
        *(uint *)(param_1 + 0x440) = uVar7;
      }
      return 0;
    }
    if (param_2 == 0x2d) {
      *(bool *)(param_1 + 0x2b8) = *param_3 != 0;
      return 0;
    }
    if (param_2 != 0x2e) {
      return 0x30;
    }
  }
  uVar7 = *param_3;
  *(bool *)(param_1 + 0x2c1) = uVar7 != 0;
  if (uVar7 != 0) {
    *(undefined4 *)(param_1 + 0x240) = 4;
    *(undefined1 *)(param_1 + 0x2bf) = 0;
    return 0;
  }
LAB_00032524:
  *(undefined4 *)(param_1 + 0x240) = 1;
  return 0;
}



undefined4 FUN_00033548(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    if (param_1[0x12] != 0) {
      FUN_00029f70(iVar1);
      param_1[0x12] = 0;
    }
    FUN_000299b8(iVar1);
    if (*(code **)(param_1[0x81] + 0x30) != (code *)0x0) {
      (**(code **)(param_1[0x81] + 0x30))(param_1,param_2);
    }
    FUN_000305d4(iVar1,"Closing connection %ld\n",param_1[0x11]);
    FUN_00027ce0(*(undefined4 *)(iVar1 + 0x518),param_1);
    thunk_FUN_000295b8(param_1,0);
    iVar1 = FUN_00024a14(*(undefined4 *)(iVar1 + 0x40));
    if (iVar1 != 0) {
      FUN_00031430(param_1[0x92]);
      FUN_00031430(param_1[0x93]);
    }
    FUN_00031068(param_1);
  }
  return 0;
}



undefined4
FUN_00033600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((*(int *)(param_1[0x93] + 0xc) + *(int *)(param_1[0x92] + 0xc) == 0) &&
      (*(char *)(param_1 + 0x10) == '\0')) &&
     (((*(uint *)(param_1[0x81] + 0x3c) & 0x40000) != 0 ||
      (iVar1 = FUN_000271a8(param_1[0x55],0xffffffff,0xffffffff,0,param_4), iVar1 != 0)))) {
    *param_1 = param_2;
    FUN_000305d4(param_2,"Connection %ld seems to be dead!\n",param_1[0x11]);
    FUN_00033548(param_1,1);
    return 1;
  }
  return 0;
}



undefined4 FUN_000336ac(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0003a388(param_2,*(undefined4 *)(param_2 + 4),param_1,param_4,param_4);
  if (iVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_000336d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[2];
  }
  FUN_0003a420(param_2,piVar1,0,param_2,param_4);
  return 1;
}



void FUN_00033714(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  iVar1 = param_4;
  if (*(char *)(param_2 + 0x244) != '\0') {
    iVar1 = 0;
    if ((int *)**(int **)(param_2 + 0x24c) != (int *)0x0) {
      iVar1 = *(int *)**(int **)(param_2 + 0x24c);
    }
    param_3 = iVar1 - param_1;
    bVar2 = param_3 == 0;
  }
  bVar3 = false;
  if (*(char *)(param_2 + 0x245) != '\0') {
    iVar1 = 0;
    if ((int *)**(int **)(param_2 + 0x248) != (int *)0x0) {
      iVar1 = *(int *)**(int **)(param_2 + 0x248);
    }
    iVar1 = iVar1 - param_1;
    bVar3 = iVar1 == 0;
  }
  iVar1 = FUN_000336d0(param_1,*(undefined4 *)(param_2 + 0x24c),param_3,iVar1,param_4);
  if ((iVar1 != 0) && (bVar2)) {
    *(undefined1 *)(param_2 + 0x244) = 0;
  }
  iVar1 = FUN_000336d0(param_1,*(undefined4 *)(param_2 + 0x248));
  if (iVar1 != 0) {
    if (bVar3) {
      *(undefined1 *)(param_2 + 0x245) = 0;
    }
    return;
  }
  return;
}



undefined4 FUN_000337b4(void)

{
  return 0;
}



void FUN_000337bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(char *)(*param_1 + 0x2c8) != '\0') {
    if (*(char *)((int)param_1 + 0x1da) == '\0') {
      iVar1 = param_1[0x27];
    }
    else {
      iVar1 = param_1[0x2b];
    }
    FUN_000305d4(*param_1,"Connected to %s (%s) port %ld (#%ld)\n",iVar1,param_1 + 0x16,
                 param_1[0x2c],param_1[0x11],param_3);
  }
  return;
}



undefined4 FUN_0003385c(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if ((param_1 != 0) &&
     (pcVar2 = *(code **)(*(int *)(param_1 + 0x204) + 0x18), pcVar2 != (code *)0x0)) {
    *param_2 = 0;
    uVar1 = (*pcVar2)();
    return uVar1;
  }
  *param_2 = 1;
  return 0;
}



undefined4 FUN_0003389c(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if ((param_1 != 0) &&
     (pcVar2 = *(code **)(*(int *)(param_1 + 0x204) + 0x1c), pcVar2 != (code *)0x0)) {
    *param_2 = 0;
    uVar1 = (*pcVar2)();
    return uVar1;
  }
  *param_2 = 1;
  return 0;
}



int FUN_000338dc(int param_1,undefined1 *param_2)

{
  int iVar1;
  code *pcVar2;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    if (*(char *)(param_1 + 0x1e3) != '\0') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x1e3) != '\0') {
    if (*(int *)(*(int *)(param_1 + 0x204) + 0x18) == 0) {
      *param_2 = 1;
      return 0;
    }
    return 0;
  }
  if (((*(char *)(param_1 + 0x1e5) == '\0') || (*(char *)(param_1 + 0x1db) == '\0')) ||
     (*(int *)(param_1 + 0x480) == 2)) {
    pcVar2 = *(code **)(*(int *)(param_1 + 0x204) + 0x14);
    if (pcVar2 == (code *)0x0) {
      *param_2 = 1;
    }
    else {
      iVar1 = (*pcVar2)(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    *(undefined1 *)(param_1 + 0x1e3) = 1;
  }
  return 0;
}



void FUN_0003399c(int param_1)

{
  if (*(int *)(param_1 + 0x110) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    return;
  }
  (*DAT_000515c8)();
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}



undefined4 FUN_000339ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    FUN_00025210(param_1,0,param_3,param_4,param_4);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00025554(*(int *)(param_1 + 0x40),param_1);
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00024e10();
    }
    if (*(int *)(param_1 + 0x8600) != 0) {
      FUN_0003a4c8(*(int *)(param_1 + 0x8600),0);
      *(undefined4 *)(param_1 + 0x8600) = 0;
    }
    *(undefined4 *)(param_1 + 0x8714) = 0;
    if (*(char *)(param_1 + 0x862a) != '\0') {
      (*DAT_000515c8)(*(undefined4 *)(param_1 + 0x862c));
    }
    if (*(int *)(param_1 + 0x8620) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(param_1 + 0x8620) = 0;
    }
    *(undefined4 *)(param_1 + 0x8624) = 0;
    FUN_0003399c(param_1);
    FUN_00028a74(param_1);
    if (*(int *)(param_1 + 0x8544) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(param_1 + 0x8544) = 0;
    }
    if (*(int *)(param_1 + 0x855c) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(param_1 + 0x855c) = 0;
    }
    FUN_00028be4(param_1);
    if (*(int *)(param_1 + 0x100) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    if (*(char *)(param_1 + 0x3f4) != '\0') {
      if (*(int *)(param_1 + 0x3f0) != 0) {
        (*DAT_000515c8)();
      }
      *(undefined1 *)(param_1 + 0x3f4) = 0;
    }
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    if (*(char *)(param_1 + 0x3ec) != '\0') {
      if (*(int *)(param_1 + 1000) != 0) {
        (*DAT_000515c8)();
      }
      *(undefined1 *)(param_1 + 0x3ec) = 0;
    }
    *(undefined4 *)(param_1 + 1000) = 0;
    if (*(int *)(param_1 + 0x52c) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(param_1 + 0x52c) = 0;
    }
    FUN_0002c5c8(param_1,1);
    FUN_0003b694(param_1);
    if (*(int *)(param_1 + 0x8694) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(param_1 + 0x8694) = 0;
    }
    if (*(int *)(param_1 + 0x8698) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(param_1 + 0x8698) = 0;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00026f3c(param_1,1,2);
      *(int *)(*(int *)(param_1 + 0x48) + 4) = *(int *)(*(int *)(param_1 + 0x48) + 4) + -1;
      FUN_00026f84(param_1,1);
    }
    FUN_00031480(param_1);
    (*DAT_000515c8)(param_1);
  }
  return 0;
}



int FUN_00033c54(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *local_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  
  iVar2 = *param_1;
  local_28 = param_1;
  puStack_24 = param_2;
  uStack_20 = param_3;
  FUN_0002a5b4(iVar2,3);
  if ((*(uint *)(param_1[0x81] + 0x40) & 0x10) == 0) {
    iVar1 = *(int *)(iVar2 + 0x35c);
    *param_2 = 0;
    *(undefined1 *)((int)param_1 + 0x1ee) = 0;
    if (iVar1 != 0) {
      if (param_1[0x87] != 0) {
        (*DAT_000515c8)();
        param_1[0x87] = 0;
      }
      iVar1 = FUN_000375e8("User-Agent: %s\r\n",*(undefined4 *)(iVar2 + 0x35c));
      param_1[0x87] = iVar1;
      if (iVar1 == 0) {
        return 0x1b;
      }
    }
    *(undefined4 *)(iVar2 + 0x80) = 0;
    *(undefined4 *)(iVar2 + 0x8618) = 0;
    *(undefined4 *)(iVar2 + 0x861c) = 0;
    FUN_000296f8(&local_28);
    param_1[0x51] = (int)local_28;
    param_1[0x52] = (int)puStack_24;
    if (param_1[0x55] == -1) {
      *(undefined1 *)((int)param_1 + 0x1e1) = 0;
      iVar2 = FUN_00024024(param_1,param_1[0x12]);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      FUN_0002a5b4(iVar2,4);
      FUN_0002a5b4(iVar2,5);
      *(undefined1 *)((int)param_1 + 0x1e1) = 1;
      *param_2 = 1;
      FUN_00023220(param_1,param_1[0x55]);
      FUN_000337bc(param_1);
    }
    FUN_000296f8(&local_28);
    param_1[0x51] = (int)local_28;
    param_1[0x52] = (int)puStack_24;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}



int FUN_00033d94(int param_1,int *param_2,char *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  size_t sVar12;
  char *pcVar13;
  size_t sVar14;
  size_t __n;
  size_t sVar15;
  void *__dest;
  ulong uVar16;
  undefined *puVar17;
  int iVar18;
  int *piVar19;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined *puVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  char *pcVar27;
  undefined4 *puVar28;
  uint *__s;
  uint uVar29;
  int *piVar30;
  uint uVar31;
  int *piVar32;
  bool bVar33;
  bool bVar34;
  char *local_94;
  int *local_84;
  uint local_74;
  int local_68;
  int iStack_64;
  int local_5c;
  char *local_58;
  int local_54;
  char *local_50;
  uint local_4c;
  undefined1 auStack_48 [12];
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2b;
  
  *param_3 = '\0';
  local_5c = 0;
  local_58 = (char *)0x0;
  uVar6 = FUN_00025854(*(undefined4 *)(param_1 + 0x40));
  uVar7 = FUN_00025860(*(undefined4 *)(param_1 + 0x40));
  iVar21 = *(int *)(param_1 + 1000);
  *param_3 = '\0';
  if (iVar21 != 0) {
    piVar8 = (int *)(*DAT_000515d4)(1,0x490);
    if (piVar8 == (int *)0x0) goto LAB_00034bf4;
    piVar8[0x81] = (int)&DAT_000472d0;
    piVar8[0x55] = -1;
    piVar8[0x56] = -1;
    piVar8[0x57] = -1;
    piVar8[0x58] = -1;
    piVar8[0x11] = -1;
    piVar8[0x2c] = -1;
    piVar8[0x2d] = -1;
    *(undefined1 *)(piVar8 + 0x76) = 1;
    FUN_000296f8(&local_68);
    piVar8[0x53] = local_68;
    piVar8[0x54] = iStack_64;
    iVar21 = *(int *)(param_1 + 0x280);
    *piVar8 = param_1;
    piVar8[0x4e] = iVar21;
    iVar21 = *(int *)(param_1 + 0x368);
    *(undefined1 *)((int)piVar8 + 0x1da) = 0;
    *(bool *)(piVar8 + 0x77) = iVar21 != 0;
    uVar1 = *(undefined1 *)(param_1 + 0x2cc);
    *(undefined1 *)((int)piVar8 + 0x1db) = 0;
    *(undefined1 *)(piVar8 + 0x7a) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x2cd);
    *(undefined1 *)((int)piVar8 + 0x1dd) = 0;
    *(undefined1 *)((int)piVar8 + 0x1e9) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x250);
    *(undefined1 *)((int)piVar8 + 0x1e5) = 0;
    *(undefined1 *)(piVar8 + 0x11c) = uVar1;
    uVar9 = *(undefined4 *)(param_1 + 0x40);
    *(undefined1 *)((int)piVar8 + 0x471) = *(undefined1 *)(param_1 + 0x251);
    piVar8[0x83] = *(int *)(param_1 + 0x294);
    iVar21 = FUN_00024a14(uVar9);
    if ((iVar21 != 0) && (piVar8[0x94] == 0)) {
      iVar21 = (*DAT_000515d4)(0x4000,1);
      piVar8[0x94] = iVar21;
      if (iVar21 != 0) goto LAB_00033eb4;
LAB_00033fa0:
      FUN_0003a4c8(piVar8[0x92],0);
      FUN_0003a4c8(piVar8[0x93],0);
      piVar8[0x92] = 0;
      piVar8[0x93] = 0;
      if (piVar8[0x94] != 0) {
        (*DAT_000515c8)();
        piVar8[0x94] = 0;
      }
      if (piVar8[0x11d] != 0) {
        (*DAT_000515c8)();
        piVar8[0x11d] = 0;
      }
      (*DAT_000515c8)(piVar8);
LAB_00034bf4:
      iVar25 = 0x1b;
      goto LAB_00034bf8;
    }
LAB_00033eb4:
    iVar21 = FUN_0003a350(&DAT_00030d2c);
    piVar8[0x92] = iVar21;
    iVar21 = FUN_0003a350(&DAT_00030d2c);
    piVar8[0x93] = iVar21;
    if ((piVar8[0x92] == 0) || (iVar21 == 0)) goto LAB_00033fa0;
    if (*(int *)(param_1 + 0x30c) != 0) {
      iVar21 = (*DAT_000515d0)();
      piVar8[0x11d] = iVar21;
      if (iVar21 == 0) goto LAB_00033fa0;
    }
    piVar8[0x11f] = *(int *)(param_1 + 0x16c);
    *(undefined2 *)(piVar8 + 0x11e) = *(undefined2 *)(param_1 + 0x168);
    piVar8[0xe] = *(int *)(param_1 + 0x1a8);
    piVar8[0xf] = *(int *)(param_1 + 0x1ac);
    *param_2 = (int)piVar8;
    puVar10 = (undefined4 *)strlen(*(char **)(param_1 + 1000));
    puVar28 = &DAT_000515d4;
    if ((undefined4 *)0xff < puVar10) {
      puVar28 = puVar10;
    }
    if (puVar10 < (undefined4 *)0x100) {
      puVar28 = (undefined4 *)0x100;
    }
    if (*(int *)(param_1 + 0x8620) != 0) {
      (*DAT_000515c8)();
      *(undefined4 *)(param_1 + 0x8620) = 0;
    }
    *(undefined4 *)(param_1 + 0x8624) = 0;
    iVar21 = (*DAT_000515c4)((int)puVar28 + 2);
    *(int *)(param_1 + 0x8620) = iVar21;
    if (iVar21 == 0) goto LAB_00034bf4;
    *(int *)(param_1 + 0x8624) = iVar21;
    puVar11 = (undefined1 *)(*DAT_000515c4)((int)puVar28 + 2);
    piVar8[0x24] = (int)puVar11;
    if (puVar11 == (undefined1 *)0x0) {
      if (*(int *)(param_1 + 0x8620) != 0) {
        (*DAT_000515c8)();
        *(undefined4 *)(param_1 + 0x8620) = 0;
      }
      *(undefined4 *)(param_1 + 0x8624) = 0;
      goto LAB_00034bf4;
    }
    piVar8[0x26] = (int)puVar11;
    *puVar11 = 0;
    local_5c = (*DAT_000515d0)(&DAT_000467ca);
    local_58 = (char *)(*DAT_000515d0)(&DAT_000467ca);
    local_94 = (char *)(*DAT_000515d0)(&DAT_000467ca);
    uVar22 = (uint)(local_5c == 0 || local_58 == (char *)0x0);
    if (local_5c == 0 || local_58 == (char *)0x0) {
LAB_00034bd0:
      if (local_94 != (char *)0x0) goto LAB_00034bdc;
      goto LAB_00034bf4;
    }
    if (local_94 == (char *)0x0) goto LAB_00034bf4;
    pcVar27 = *(char **)(param_1 + 0x8624);
    local_4c = uVar22;
    memset(auStack_48,uVar22,0xc);
    iVar21 = sscanf(*(char **)(param_1 + 1000),"%15[^:]:%[^\n]",&local_4c,pcVar27);
    if ((iVar21 != 2) || (iVar21 = FUN_0003cc64(&local_4c,"file"), iVar21 == 0)) {
      bVar33 = false;
      *pcVar27 = '\0';
      pcVar13 = pcVar27;
      iVar21 = sscanf(*(char **)(param_1 + 1000),"%15[^\n:]://%[^\n/?]%[^\n]",&local_4c,piVar8[0x26]
                      ,pcVar27);
      if (1 < iVar21) {
        __s = &local_4c;
        goto LAB_000342c8;
      }
      iVar21 = sscanf(*(char **)(param_1 + 1000),"%[^\n/?]%[^\n]",piVar8[0x26],pcVar27,pcVar13);
      if (0 < iVar21) {
        iVar21 = FUN_0003cccc(&DAT_00047464,piVar8[0x26],4);
        if (iVar21 == 0) {
          iVar21 = FUN_0003cccc("DICT.",piVar8[0x26],5);
          if (iVar21 == 0) {
            iVar21 = FUN_0003cccc("LDAP.",piVar8[0x26],5);
            if (iVar21 == 0) {
              iVar21 = FUN_0003cccc("IMAP.",piVar8[0x26],5);
              if (iVar21 == 0) {
                iVar21 = FUN_0003cccc("SMTP.",piVar8[0x26],5);
                if (iVar21 == 0) {
                  iVar21 = FUN_0003cccc("POP3.",piVar8[0x26],5);
                  bVar33 = true;
                  __s = (uint *)&UNK_0004741a;
                  if (iVar21 != 0) {
                    __s = (uint *)&DAT_0004741f;
                  }
                }
                else {
                  bVar33 = true;
                  __s = (uint *)&UNK_00047424;
                }
              }
              else {
                bVar33 = true;
                __s = (uint *)&UNK_00047429;
              }
            }
            else {
              bVar33 = true;
              __s = (uint *)&UNK_0004740c;
            }
          }
          else {
            bVar33 = true;
            __s = (uint *)&UNK_00047411;
          }
        }
        else {
          bVar33 = true;
          __s = (uint *)&UNK_00047416;
        }
        goto LAB_000342c8;
      }
LAB_00034aa4:
      FUN_00030648(param_1);
      iVar25 = 3;
      goto LAB_00034be0;
    }
    if ((*pcVar27 == '/') && (pcVar27[1] == '/')) {
      sVar12 = strlen(pcVar27 + 2);
      memmove(pcVar27,pcVar27 + 2,sVar12 + 1);
    }
    if ((*pcVar27 != '/') && (pcVar13 = strchr(pcVar27,0x2f), pcVar13 != (char *)0x0)) {
      if (pcVar13[1] == '/') {
        pcVar13 = pcVar13 + 1;
      }
      sVar12 = strlen(pcVar13);
      memmove(pcVar27,pcVar13,sVar12 + 1);
    }
    bVar33 = false;
    __s = (uint *)0x459a8;
LAB_000342c8:
    pcVar26 = (char *)piVar8[0x26];
    pcVar13 = strchr(pcVar26,0x40);
    if (pcVar13 != (char *)0x0) {
      pcVar26 = pcVar13 + 1;
    }
    pcVar13 = strchr(pcVar26,0x3f);
    if (pcVar13 == (char *)0x0) {
      bVar4 = false;
      if (*pcVar27 == '\0') {
        strcpy(pcVar27,"/");
        goto LAB_00034358;
      }
    }
    else {
      sVar12 = strlen(pcVar13);
      sVar14 = strlen(pcVar27);
      memmove(pcVar27 + sVar12 + 1,pcVar27,sVar14 + 1);
      memcpy(pcVar27 + 1,pcVar13,sVar12);
      *pcVar27 = '/';
      *pcVar13 = '\0';
LAB_00034358:
      bVar4 = true;
    }
    if (*pcVar27 == '?') {
      sVar12 = strlen(pcVar27);
      memmove(pcVar27 + 1,pcVar27,sVar12 + 1);
      *pcVar27 = '/';
      goto LAB_000343e4;
    }
    pcVar13 = (char *)FUN_0003d3a8();
    if (pcVar13 == (char *)0x0) goto LAB_00034bdc;
    iVar21 = strcmp(pcVar13,pcVar27);
    if (iVar21 == 0) {
      (*DAT_000515c8)(pcVar13);
      if (bVar4) goto LAB_000343e4;
    }
    else {
      (*DAT_000515c8)(*(undefined4 *)(param_1 + 0x8620));
      *(char **)(param_1 + 0x8620) = pcVar13;
      *(char **)(param_1 + 0x8624) = pcVar13;
      pcVar27 = pcVar13;
LAB_000343e4:
      sVar12 = strlen(pcVar27);
      sVar14 = strlen(*(char **)(param_1 + 1000));
      __n = strlen((char *)piVar8[0x26]);
      if (!bVar33) {
        sVar15 = strlen((char *)__s);
        __n = __n + 3 + sVar15;
      }
      __dest = (void *)(*DAT_000515c4)(sVar14 + 2);
      if (__dest == (void *)0x0) goto LAB_00034bdc;
      memcpy(__dest,*(void **)(param_1 + 1000),__n);
      memcpy((void *)((int)__dest + __n),pcVar27,sVar12 + 1);
      if (*(char *)(param_1 + 0x3ec) != '\0') {
        if (*(int *)(param_1 + 1000) != 0) {
          (*DAT_000515c8)();
          *(undefined4 *)(param_1 + 1000) = 0;
        }
        *(undefined1 *)(param_1 + 0x3ec) = 0;
      }
      FUN_000305d4(param_1,"Rebuilt URL to: %s\n",__dest);
      *(void **)(param_1 + 1000) = __dest;
      *(undefined1 *)(param_1 + 0x3ec) = 1;
    }
    local_50 = (char *)0x0;
    local_3c = (char *)0x0;
    pcVar26 = (char *)piVar8[0x26];
    local_54 = 0;
    pcVar13 = strchr(pcVar26,0x40);
    if (pcVar13 == (char *)0x0) {
      iVar21 = 0;
    }
    else {
      iVar21 = *(int *)(param_1 + 0x2c4);
      piVar8[0x26] = (int)(pcVar13 + 1);
      if (iVar21 == 2) {
        iVar21 = 0;
      }
      else {
        iVar21 = FUN_00030d30(pcVar26,pcVar13 + 1 + (-1 - (int)pcVar26),&local_54,&local_50,
                              &local_3c);
        if (iVar21 == 0) {
          if (local_54 == 0) {
LAB_00034554:
            if (local_50 != (char *)0x0) {
              pcVar13 = (char *)FUN_000363b4(param_1,local_50,0,0);
              if (pcVar13 == (char *)0x0) goto LAB_000345c8;
              (*DAT_000515c8)(local_58);
              local_58 = pcVar13;
            }
            if (local_3c != (char *)0x0) {
              pcVar13 = (char *)FUN_000363b4(param_1,local_3c,0,0);
              if (pcVar13 == (char *)0x0) goto LAB_000345c8;
              (*DAT_000515c8)(local_94);
              local_94 = pcVar13;
            }
          }
          else {
            *(undefined1 *)((int)piVar8 + 0x1eb) = 1;
            *(undefined1 *)(piVar8 + 0x77) = 1;
            iVar25 = FUN_000363b4(param_1,local_54,0,0);
            if (iVar25 != 0) {
              (*DAT_000515c8)(local_5c);
              local_5c = iVar25;
              goto LAB_00034554;
            }
LAB_000345c8:
            iVar21 = 0x1b;
          }
        }
      }
    }
    if (local_54 != 0) {
      (*DAT_000515c8)();
      local_54 = 0;
    }
    if (local_50 != (char *)0x0) {
      (*DAT_000515c8)();
      local_50 = (char *)0x0;
    }
    if (local_3c != (char *)0x0) {
      (*DAT_000515c8)();
    }
    iVar25 = iVar21;
    if (iVar21 == 0) {
      if ((*(char *)piVar8[0x26] == '[') &&
         (pcVar13 = strchr((char *)piVar8[0x26],0x25), pcVar13 != (char *)0x0)) {
        iVar25 = strncmp("%25",pcVar13,3);
        if (iVar25 == 0) {
          iVar25 = 3;
        }
        else {
          FUN_000305d4(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
          iVar25 = 1;
        }
        uVar16 = strtoul(pcVar13 + iVar25,&local_50,10);
        pcVar26 = local_50;
        if (*local_50 == ']') {
          sVar12 = strlen(local_50);
          memmove(pcVar13,pcVar26,sVar12 + 1);
          piVar8[0x22] = uVar16;
        }
        else {
          strncpy((char *)&local_3c,pcVar13 + iVar25,0x12);
          local_2b = 0;
          pcVar26 = strchr((char *)&local_3c,0x5d);
          if (pcVar26 != (char *)0x0) {
            *pcVar26 = '\0';
            uVar22 = if_nametoindex((char *)&local_3c);
            if (uVar22 != 0) {
              sVar12 = strlen((char *)&local_3c);
              memmove(pcVar13,pcVar13 + sVar12 + iVar25,sVar12 + iVar25);
              piVar8[0x22] = uVar22;
              goto LAB_00034764;
            }
            piVar30 = __errno_location();
            pcVar13 = strerror(*piVar30);
            FUN_000305d4(param_1,"Invalid network interface: %s; %s\n",&local_3c,pcVar13);
          }
          FUN_000305d4(param_1,"Invalid IPv6 address format\n");
        }
      }
LAB_00034764:
      if (*(int *)(param_1 + 0x398) != 0) {
        piVar8[0x22] = *(int *)(param_1 + 0x398);
      }
      pcVar27 = strchr(pcVar27,0x23);
      if (pcVar27 != (char *)0x0) {
        *pcVar27 = '\0';
        pcVar27 = strchr(*(char **)(param_1 + 1000),0x23);
        if (pcVar27 != (char *)0x0) {
          *pcVar27 = '\0';
        }
      }
      puVar28 = (undefined4 *)&UNK_00047310;
      do {
        puVar28 = puVar28 + 1;
        puVar10 = (undefined4 *)*puVar28;
        if (puVar10 == (undefined4 *)0x0) goto LAB_000347d4;
        iVar25 = FUN_0003cc64(*puVar10,__s);
      } while (iVar25 == 0);
      if (((puVar10[0xf] & *(uint *)(param_1 + 0x39c)) == 0) ||
         ((*(char *)(param_1 + 0x8540) != '\0' && ((puVar10[0xf] & *(uint *)(param_1 + 0x3a0)) == 0)
          ))) {
LAB_000347d4:
        FUN_00030648(param_1,"Protocol \"%s\" not supported or disabled in libcurl",__s);
        iVar25 = 1;
        goto LAB_00034be0;
      }
      piVar8[0x82] = (int)puVar10;
      piVar8[0x81] = (int)puVar10;
      if (bVar33) {
        iVar25 = FUN_000375e8("%s://%s",*puVar10,*(undefined4 *)(param_1 + 1000));
        if (iVar25 == 0) goto LAB_00034bdc;
        if ((*(char *)(param_1 + 0x3ec) != '\0') && (*(int *)(param_1 + 1000) != 0)) {
          (*DAT_000515c8)();
        }
        *(int *)(param_1 + 1000) = iVar25;
        *(undefined1 *)(param_1 + 0x3ec) = 1;
      }
      if (((*(uint *)(piVar8[0x82] + 0x40) & 0x40) != 0) &&
         (pcVar27 = strchr(*(char **)(*piVar8 + 0x8624),0x3f), pcVar27 != (char *)0x0)) {
        *pcVar27 = '\0';
      }
      if (*(int *)(param_1 + 0x394) != 0) {
        iVar25 = (*DAT_000515d0)();
        piVar8[0x4b] = iVar25;
        if (iVar25 == 0) goto LAB_00034bdc;
      }
      if (((*(uint *)(piVar8[0x82] + 0x40) & 1) != 0) && (*(char *)((int)piVar8 + 0x1db) != '\0')) {
        *(undefined1 *)((int)piVar8 + 0x1e5) = 1;
      }
      iVar25 = sscanf((char *)piVar8[0x26],"[%*45[0123456789abcdefABCDEF:.]%c",&local_4c);
      if ((iVar25 == 1) && ((local_4c & 0xff) == 0x5d)) {
        *(undefined1 *)((int)piVar8 + 0x1de) = 1;
        iVar25 = piVar8[0x26];
        piVar8[0x26] = iVar25 + 1;
        pcVar27 = strchr((char *)(iVar25 + 1),0x5d);
        if (pcVar27 != (char *)0x0) {
          *pcVar27 = '\0';
          if (pcVar27[1] == ':') {
            pcVar27 = pcVar27 + 1;
          }
          else {
            pcVar27 = (char *)0x0;
          }
        }
      }
      else {
        pcVar27 = strrchr((char *)piVar8[0x26],0x3a);
      }
      if ((*(uint *)(param_1 + 0x138) == 0) || (*(char *)(param_1 + 0x856c) == '\0')) {
        if (pcVar27 != (char *)0x0) {
          uVar22 = strtol(pcVar27 + 1,&local_3c,10);
          if (0xffff < uVar22) goto LAB_00034aa4;
          *pcVar27 = '\0';
          if (local_3c != pcVar27 + 1) {
            iVar25 = FUN_00027a7c();
            piVar8[0x2d] = iVar25;
          }
        }
      }
      else {
        piVar8[0x2d] = *(uint *)(param_1 + 0x138) & 0xffff;
        if (pcVar27 != (char *)0x0) {
          *pcVar27 = '\0';
        }
        if (*(char *)((int)piVar8 + 0x1db) != '\0') {
          local_3c = (char *)0x0;
          local_38 = 0;
          local_34 = 0;
          if ((char)piVar8[0x7c] != '\0') {
            if (*(char *)(param_1 + 0x2b3) == '\0') {
              if (*(char *)(param_1 + 0x2b5) == '\0') {
                uVar9 = 0x49;
              }
              else {
                uVar9 = 0x44;
              }
            }
            else {
              uVar9 = 0x41;
            }
            FUN_000365a4(&local_3c,0xc,";type=%c",uVar9);
          }
          puVar20 = &DAT_00046c05;
          puVar3 = &DAT_0004676a;
          if (*(char *)((int)piVar8 + 0x1de) == '\0') {
            puVar20 = &DAT_000467ca;
            puVar3 = &DAT_000467ca;
          }
          puVar17 = &DAT_000467ca;
          if (*(char *)(param_1 + 0x8628) != '\0') {
            puVar17 = &DAT_0004860c;
          }
          iVar25 = FUN_000375e8("%s://%s%s%s:%hu%s%s%s",*(undefined4 *)piVar8[0x82],puVar20,
                                piVar8[0x26],puVar3,piVar8[0x2d],puVar17,
                                *(undefined4 *)(param_1 + 0x8624),&local_3c);
          if (iVar25 == 0) goto LAB_00034bdc;
          if ((*(char *)(param_1 + 0x3ec) != '\0') && (*(int *)(param_1 + 1000) != 0)) {
            (*DAT_000515c8)();
          }
          *(int *)(param_1 + 1000) = iVar25;
          *(undefined1 *)(param_1 + 0x3ec) = 1;
        }
      }
      if (*(int *)(param_1 + 0x368) != 0) {
        (*DAT_000515c8)(local_5c);
        local_5c = (*DAT_000515d0)(*(undefined4 *)(param_1 + 0x368));
        if (local_5c == 0) goto LAB_00034bd0;
      }
      if (*(int *)(param_1 + 0x36c) != 0) {
        (*DAT_000515c8)(local_58);
        local_58 = (char *)(*DAT_000515d0)(*(undefined4 *)(param_1 + 0x36c));
        if (local_58 == (char *)0x0) goto LAB_00034bd0;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        (*DAT_000515c8)(local_94);
        local_94 = (char *)(*DAT_000515d0)(*(undefined4 *)(param_1 + 0x370));
        if (local_94 == (char *)0x0) goto LAB_00034bf4;
      }
      *(undefined1 *)((int)piVar8 + 0x1ea) = 0;
      if (*(int *)(param_1 + 0x2c4) != 0) {
        iVar25 = FUN_00037860(piVar8[0x26],&local_5c,&local_58,*(undefined4 *)(param_1 + 0x330));
        if (iVar25 < 1) {
          if (iVar25 != 0) goto LAB_00034bd0;
          *(undefined1 *)((int)piVar8 + 0x1ea) = 1;
          *(undefined1 *)(piVar8 + 0x77) = 1;
        }
        else {
          FUN_000305d4(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n",
                       piVar8[0x26]);
        }
      }
      pcVar27 = local_58;
      if (((*(uint *)(piVar8[0x81] + 0x40) & 0x20) == 0) || ((char)piVar8[0x77] != '\0')) {
        iVar18 = (*DAT_000515d0)(local_5c);
        piVar8[0x48] = iVar18;
        iVar25 = 0;
        if (iVar18 != 0) goto LAB_00034e7c;
      }
      else {
        iVar18 = (*DAT_000515d0)("anonymous");
        piVar8[0x48] = iVar18;
        iVar25 = 0;
        if (iVar18 != 0) {
          pcVar27 = "ftp@example.com";
LAB_00034e7c:
          iVar25 = (*DAT_000515d0)(pcVar27);
        }
      }
      piVar8[0x49] = iVar25;
      if ((piVar8[0x48] != 0) && (piVar8[0x49] != 0)) {
        if (*local_94 != '\0') {
          iVar25 = (*DAT_000515d0)(local_94);
          piVar8[0x4a] = iVar25;
          if (iVar25 == 0) goto LAB_00034bdc;
        }
        iVar25 = *piVar8;
        FUN_0003399c(iVar25);
        memset((void *)(iVar25 + 0x50),0,200);
        *(undefined4 *)(iVar25 + 0x60) = 0xffffffff;
        *(undefined4 *)(iVar25 + 100) = 0xffffffff;
        piVar8[0x23] = 1;
        iVar25 = piVar8[0x81];
        if (*(code **)(iVar25 + 4) != (code *)0x0) {
          iVar25 = (**(code **)(iVar25 + 4))(piVar8);
          if (iVar25 != 0) goto LAB_00034be0;
          iVar25 = piVar8[0x81];
        }
        piVar30 = piVar8 + 0x68;
        if (piVar8[0x2c] < 0) {
          piVar8[0x2c] = *(int *)(iVar25 + 0x38);
        }
        uVar22 = piVar8[0x2d];
        bVar33 = (int)uVar22 < 0;
        if (bVar33) {
          uVar22 = (uint)*(ushort *)(piVar8[0x82] + 0x38);
        }
        piVar8[0x5a] = (int)&LAB_000307ec;
        if (bVar33) {
          piVar8[0x2d] = uVar22;
        }
        piVar8[0x5b] = (int)&LAB_000307ec;
        piVar8[0x5c] = (int)&LAB_0003071c;
        piVar8[0x5d] = (int)&LAB_0003071c;
        *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x348);
        *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x34c);
        *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x360);
        *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x364);
        *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x358);
        *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x354);
        *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x350);
        iVar25 = FUN_00028370(param_1 + 0x248,piVar30);
        if (iVar25 != 0) {
          FUN_000296f8(&local_3c);
          iVar25 = FUN_00029758(local_3c,local_38,*(undefined4 *)(*(int *)(param_1 + 0x518) + 0xc),
                                *(undefined4 *)(*(int *)(param_1 + 0x518) + 0x10));
          if (999 < iVar25) {
            FUN_00027d28(*(undefined4 *)(param_1 + 0x518),param_1,&LAB_00033694);
            iVar25 = *(int *)(param_1 + 0x518);
            *(char **)(iVar25 + 0xc) = local_3c;
            *(undefined4 *)(iVar25 + 0x10) = local_38;
          }
          if ((*(char *)(param_1 + 0x2cb) == '\0') || (*(char *)(param_1 + 0x8540) != '\0')) {
            iVar25 = FUN_00015dac(param_1,piVar8[0x81]);
            bVar33 = false;
            if (((*(uint *)(param_1 + 0x85b8) & 0x28) != 0) &&
               (bVar33 = false, (*(uint *)(piVar8[0x81] + 0x3c) & 3) != 0)) {
              bVar33 = true;
            }
            bVar5 = 0;
            if (iVar25 != 0) {
              bVar5 = FUN_00027fe0(param_1,piVar8);
              bVar5 = bVar5 ^ 1;
            }
            pcVar27 = (char *)FUN_00027be8(*(undefined4 *)(param_1 + 0x518),piVar8[0x26]);
            if (pcVar27 != (char *)0x0) {
              uVar22 = FUN_0002586c(*(undefined4 *)(param_1 + 0x40));
              FUN_000305d4(param_1,"Found bundle for host %s: %p\n",piVar8[0x26],pcVar27);
              if ((bVar5 != 0) && (*pcVar27 == '\0')) {
                FUN_000305d4(param_1,"Server doesn\'t support pipelining\n");
                bVar5 = 0;
              }
              puVar28 = (undefined4 *)**(undefined4 **)(pcVar27 + 8);
              local_84 = (int *)0x0;
              local_74 = uVar22;
LAB_000350d4:
              do {
                if (puVar28 == (undefined4 *)0x0) goto LAB_000353f4;
                piVar32 = (int *)*puVar28;
                puVar28 = (undefined4 *)puVar28[2];
                iVar25 = FUN_00033600(piVar32,param_1);
                if (iVar25 == 0) {
                  uVar29 = ((undefined4 *)piVar32[0x93])[3] + ((int *)piVar32[0x92])[3];
                  if (bVar5 == 0) {
                    if (uVar29 != 0) goto LAB_000350d4;
                    if ((piVar32[0x55] == -1) || ((char)piVar32[0x76] != '\0')) {
                      FUN_000305d4(param_1,"Connection #%ld isn\'t open enough, can\'t reuse\n",
                                   piVar32[0x11]);
                      goto LAB_000350d4;
                    }
                  }
                  else {
                    piVar19 = *(int **)piVar32[0x92];
                    piVar23 = *(int **)piVar32[0x93];
                    iVar25 = 0;
                    if (piVar19 != (int *)0x0) {
                      iVar25 = *piVar19;
                    }
                    iVar18 = iVar25;
                    if ((((piVar23 != (int *)0x0) && (iVar18 = *piVar23, iVar25 != 0)) ||
                        (iVar25 = iVar18, iVar25 != 0)) &&
                       (iVar25 = FUN_00015dac(iVar25,piVar32[0x81]), iVar25 == 0))
                    goto LAB_000350d4;
                  }
                  uVar31 = *(uint *)(piVar8[0x81] + 0x40);
                  if ((((((((uVar31 ^ *(uint *)(piVar32[0x81] + 0x40)) & 1) == 0) ||
                         ((*(uint *)(piVar32[0x81] + 0x3c) & *(uint *)(piVar8[0x81] + 0x3c)) != 0))
                        && (((uVar31 & 1) == 0 ||
                            (*(short *)(param_1 + 0x250) == (short)piVar32[0x11c])))) &&
                       (*(char *)((int)piVar8 + 0x1da) == *(char *)((int)piVar32 + 0x1da))) &&
                      ((bVar5 != 0 || ((char)piVar32[0x10] == '\0')))) &&
                     (((pcVar27 = (char *)piVar8[0x11d], pcVar27 == (char *)0x0 &&
                       ((short)piVar8[0x11e] == 0)) ||
                      (((((short)piVar32[0x11e] == (short)piVar8[0x11e] &&
                         (piVar32[0x11f] == piVar8[0x11f])) &&
                        ((char *)piVar32[0x11d] != (char *)0x0)) &&
                       ((pcVar27 != (char *)0x0 &&
                        (iVar25 = strcmp((char *)piVar32[0x11d],pcVar27), iVar25 == 0)))))))) {
                    if (((uVar31 & 0x80) == 0) || (bVar33)) {
                      iVar25 = FUN_00039e30(piVar8[0x48],piVar32[0x48]);
                      if ((iVar25 == 0) ||
                         (iVar25 = FUN_00039e30(piVar8[0x49],piVar32[0x49]), iVar25 == 0))
                      goto LAB_000350d4;
                      bVar4 = true;
                    }
                    else {
                      bVar4 = false;
                    }
                    if (((*(char *)((int)piVar8 + 0x1db) == '\0') ||
                        ((*(uint *)(piVar8[0x81] + 0x40) & 1) != 0)) ||
                       (((*(char *)((int)piVar32 + 0x1db) != '\0' &&
                         (((*(char *)((int)piVar8 + 0x1e5) != '\0' &&
                           (*(char *)((int)piVar32 + 0x1e5) != '\0')) &&
                          (iVar25 = FUN_0003cc64(piVar8[0x2a],piVar32[0x2a]), iVar25 != 0)))) &&
                        (piVar8[0x2c] == piVar32[0x2c])))) {
                      iVar25 = FUN_0003cc64(*(undefined4 *)piVar8[0x81],*(undefined4 *)piVar32[0x81]
                                           );
                      if (((iVar25 == 0) &&
                          ((*(uint *)(piVar32[0x81] + 0x3c) & *(uint *)(piVar8[0x81] + 0x3c)) == 0))
                         || ((iVar25 = FUN_0003cc64(piVar8[0x26],piVar32[0x26]), iVar25 == 0 ||
                             (piVar8[0x2d] != piVar32[0x2d])))) goto LAB_000350d4;
                      if ((*(uint *)(piVar8[0x81] + 0x40) & 1) != 0) {
                        iVar25 = FUN_000282dc(piVar30,piVar32 + 0x68);
                        if (iVar25 != 0) {
                          bVar34 = piVar32[0x5f] == 2;
                          goto LAB_000353ec;
                        }
                        goto LAB_000350d4;
                      }
                    }
                    else {
                      if (((*(char *)((int)piVar32 + 0x1da) == '\0') ||
                          (piVar8[0x4e] != piVar32[0x4e])) ||
                         ((*(char *)((int)piVar8 + 0x1e5) != *(char *)((int)piVar32 + 0x1e5) ||
                          (iVar25 = FUN_0003cc64(piVar8[0x2a],piVar32[0x2a]), iVar25 == 0))))
                      goto LAB_000350d4;
                      bVar34 = piVar8[0x2c] == piVar32[0x2c];
LAB_000353ec:
                      if (!bVar34) goto LAB_000350d4;
                    }
                    if (bVar33) {
                      if (!bVar4) goto LAB_000350d4;
                      uVar29 = local_74;
                      if (piVar32[0x9b] != 0) goto LAB_000357ec;
                    }
                    else {
                      if ((bVar5 == 0) || (uVar29 == 0)) goto LAB_00035404;
                      if (((uVar22 <= uVar29) ||
                          (iVar25 = FUN_00027e3c(param_1,piVar32), iVar25 != 0)) ||
                         (local_74 <= uVar29)) goto LAB_000350d4;
                    }
                    local_74 = uVar29;
                    local_84 = piVar32;
                  }
                }
              } while( true );
            }
          }
          goto LAB_000354e4;
        }
      }
      goto LAB_00034bdc;
    }
    goto LAB_00034be0;
  }
  iVar25 = 3;
  goto LAB_00034bf8;
LAB_000353f4:
  piVar32 = local_84;
  if (local_84 == (int *)0x0) {
LAB_000354e4:
    iVar25 = FUN_00027be8(*(undefined4 *)(param_1 + 0x518),piVar8[0x26]);
    if (iVar25 == 0 || uVar6 == 0) {
      bVar33 = false;
    }
    else if (*(uint *)(iVar25 + 4) < uVar6) {
      bVar33 = false;
    }
    else {
      FUN_000296f8(&local_3c);
      iVar18 = -1;
      piVar30 = (int *)0x0;
      for (puVar28 = (undefined4 *)**(undefined4 **)(iVar25 + 8); puVar28 != (undefined4 *)0x0;
          puVar28 = (undefined4 *)puVar28[2]) {
        piVar32 = (int *)*puVar28;
        if (((char)piVar32[0x10] == '\0') &&
           (iVar25 = FUN_00029758(local_3c,local_38,piVar32[0x51],piVar32[0x52]), iVar18 < iVar25))
        {
          piVar30 = piVar32;
          iVar18 = iVar25;
        }
      }
      if (piVar30 == (int *)0x0) {
        bVar33 = true;
      }
      else {
        *piVar30 = param_1;
        FUN_00033548(piVar30,0);
        bVar33 = false;
      }
    }
    if ((uVar7 == 0) || (*(uint *)(*(int *)(param_1 + 0x518) + 4) < uVar7)) {
LAB_000355f0:
      if (!bVar33) {
        FUN_00027c14(*(undefined4 *)(param_1 + 0x518),piVar8);
        if (((*(uint *)(param_1 + 0x85bc) & 0x28) != 0) && (*(char *)(param_1 + 0x85c4) != '\0')) {
          FUN_000305d4(param_1,"NTLM picked AND auth done set, clear picked!\n");
          *(undefined4 *)(param_1 + 0x85bc) = 0;
        }
        if (((*(uint *)(param_1 + 0x85cc) & 0x28) != 0) && (*(char *)(param_1 + 0x85d4) != '\0')) {
          FUN_000305d4(param_1,"NTLM-proxy picked AND auth done set, clear picked!\n");
          *(undefined4 *)(param_1 + 0x85cc) = 0;
        }
        goto LAB_00035668;
      }
    }
    else {
      piVar30 = (int *)FUN_00031394();
      if (piVar30 != (int *)0x0) {
        *piVar30 = param_1;
        FUN_00033548(piVar30,0);
        goto LAB_000355f0;
      }
    }
    FUN_000305d4(param_1,"No connections available.\n");
    FUN_00031068(piVar8);
    *param_2 = 0;
    iVar25 = 0x59;
  }
  else {
LAB_00035404:
    iVar25 = FUN_00015dac(param_1,piVar32[0x81]);
    if ((iVar25 != 0) &&
       (((*(int *)(piVar32[0x93] + 0xc) + *(int *)(piVar32[0x92] + 0xc) != 0 &&
         (FUN_000305d4(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",
                       piVar32[0x11]), *(uint *)(piVar32[0x122] + 4) < uVar6)) &&
        (*(uint *)(*(int *)(param_1 + 0x518) + 4) < uVar7)))) {
      FUN_000305d4(param_1,"We can reuse, but we want a new connection anyway\n");
      goto LAB_000354e4;
    }
LAB_000357ec:
    iVar25 = piVar8[0x28];
    *(undefined1 *)(piVar32 + 0x10) = 1;
    if (iVar25 != 0) {
      (*DAT_000515c8)();
    }
    FUN_00028488(piVar30);
    *piVar32 = *piVar8;
    iVar25 = piVar8[0x77];
    *(char *)(piVar32 + 0x77) = (char)iVar25;
    if ((char)iVar25 != '\0') {
      if (piVar32[0x48] != 0) {
        (*DAT_000515c8)();
        piVar32[0x48] = 0;
      }
      if (piVar32[0x49] != 0) {
        (*DAT_000515c8)();
        piVar32[0x49] = 0;
      }
      piVar32[0x48] = piVar8[0x48];
      piVar32[0x49] = piVar8[0x49];
      piVar8[0x48] = 0;
      piVar8[0x49] = 0;
    }
    cVar2 = *(char *)((int)piVar8 + 0x1dd);
    *(char *)((int)piVar32 + 0x1dd) = cVar2;
    if (cVar2 != '\0') {
      if (piVar32[0x4c] != 0) {
        (*DAT_000515c8)();
        piVar32[0x4c] = 0;
      }
      if (piVar32[0x4d] != 0) {
        (*DAT_000515c8)();
        piVar32[0x4d] = 0;
      }
      piVar32[0x4c] = piVar8[0x4c];
      piVar32[0x4d] = piVar8[0x4d];
      piVar8[0x4c] = 0;
      piVar8[0x4d] = 0;
    }
    if (piVar32[0x24] != 0) {
      (*DAT_000515c8)();
      piVar32[0x24] = 0;
    }
    iVar25 = piVar8[0x25];
    iVar18 = piVar8[0x26];
    iVar24 = piVar8[0x27];
    piVar32[0x24] = piVar8[0x24];
    piVar32[0x25] = iVar25;
    piVar32[0x26] = iVar18;
    piVar32[0x27] = iVar24;
    FUN_000231c0(piVar32);
    iVar25 = piVar8[0x48];
    *(undefined1 *)((int)piVar32 + 0x1d9) = 1;
    if (iVar25 != 0) {
      (*DAT_000515c8)();
      piVar8[0x48] = 0;
    }
    if (piVar8[0x49] != 0) {
      (*DAT_000515c8)();
      piVar8[0x49] = 0;
    }
    if (piVar8[0x4c] != 0) {
      (*DAT_000515c8)();
      piVar8[0x4c] = 0;
    }
    if (piVar8[0x4d] != 0) {
      (*DAT_000515c8)();
      piVar8[0x4d] = 0;
    }
    if (piVar8[0x11d] != 0) {
      (*DAT_000515c8)();
      piVar8[0x11d] = 0;
    }
    FUN_0003a4c8(piVar8[0x92],0);
    FUN_0003a4c8(piVar8[0x93],0);
    piVar8[0x92] = 0;
    piVar8[0x93] = 0;
    if (piVar8[0x94] != 0) {
      (*DAT_000515c8)();
      piVar8[0x94] = 0;
    }
    (*DAT_000515c8)(piVar8);
    *param_2 = (int)piVar32;
    FUN_00015d48(param_1,piVar32 + 0x24);
    if (piVar32[0x2a] == 0) {
      iVar25 = piVar32[0x27];
    }
    else {
      iVar25 = piVar32[0x2b];
    }
    FUN_000305d4(param_1,"Re-using existing connection! (#%ld) with host %s\n",piVar32[0x11],iVar25)
    ;
    piVar8 = piVar32;
LAB_00035668:
    iVar25 = *piVar8;
    *(undefined1 *)(piVar8 + 0x7b) = 0;
    *(undefined1 *)(piVar8 + 0x78) = 0;
    *(undefined1 *)(piVar8 + 0x10) = 1;
    *(undefined1 *)(iVar25 + 0x8610) = 0;
    if (*(char *)(iVar25 + 0x2bf) == '\0') {
      if (*(int *)(iVar25 + 0x240) == 5) {
        *(undefined4 *)(iVar25 + 0x240) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar25 + 0x240) = 5;
    }
    FUN_000296f8(&local_68);
    *(int *)(iVar25 + 0x88) = local_68;
    *(int *)(iVar25 + 0x8c) = iStack_64;
    *(undefined4 *)(iVar25 + 0x90) = *(undefined4 *)(iVar25 + 0x88);
    *(undefined4 *)(iVar25 + 0x94) = *(undefined4 *)(iVar25 + 0x8c);
    *(undefined1 *)(iVar25 + 0x98) = 1;
    *(int *)(iVar25 + 0xe8) = iVar25 + 0x534;
    *(int *)(iVar25 + 0xec) = iVar25 + 0x4535;
    *(undefined4 *)(iVar25 + 0xa4) = *(undefined4 *)(iVar25 + 0x52c);
    *(undefined1 *)(iVar25 + 0xf9) = 0;
    *(undefined4 *)(iVar25 + 0x70) = 0;
    *(undefined4 *)(iVar25 + 0x74) = 0;
    FUN_0003602c(iVar25);
    FUN_0002a71c(iVar25,extraout_r1,0,0);
    FUN_0002a710(iVar25,extraout_r1_00,0,0);
    *(int *)(param_1 + 0x8630) = *(int *)(param_1 + 0x200);
    *(int *)(param_1 + 0x8634) = *(int *)(param_1 + 0x204);
    if ((*(int *)(param_1 + 0x200) == 0 && *(int *)(param_1 + 0x204) == 0) &&
       (*(int *)(param_1 + 0x33c) == 0)) {
      *(undefined1 *)(param_1 + 0x8629) = 0;
    }
    else {
      if (*(char *)(param_1 + 0x862a) != '\0') {
        (*DAT_000515c8)(*(undefined4 *)(param_1 + 0x862c));
      }
      if (*(int *)(param_1 + 0x8630) == 0 && *(int *)(param_1 + 0x8634) == 0) {
        uVar9 = (*DAT_000515d0)(*(undefined4 *)(param_1 + 0x33c));
      }
      else {
        uVar9 = FUN_000375e8("%llu-");
      }
      *(undefined4 *)(param_1 + 0x862c) = uVar9;
      bVar33 = *(int *)(param_1 + 0x862c) == 0;
      *(bool *)(param_1 + 0x862a) = !bVar33;
      if (bVar33) {
LAB_00034bdc:
        iVar25 = 0x1b;
        goto LAB_00034be0;
      }
      *(undefined1 *)(param_1 + 0x8629) = 1;
    }
    piVar8[0x99] = *(int *)(param_1 + 0x17c);
    piVar8[0x9a] = *(int *)(param_1 + 300);
    piVar8[0x97] = *(int *)(param_1 + 0x158);
    piVar8[0x98] = *(int *)(param_1 + 0x1b0);
    uVar9 = FUN_000230f4(param_1,0,1);
    if (*(char *)((int)piVar8 + 0x1d9) == '\0') {
      FUN_00015d48(param_1,piVar8 + 0x24);
      if (((char *)piVar8[0x2a] == (char *)0x0) || (*(char *)piVar8[0x2a] == '\0')) {
        piVar8[0x2c] = piVar8[0x2d];
        iVar25 = FUN_00029d84(piVar8,piVar8[0x26],piVar8[0x2d],&local_3c,uVar9);
        if (iVar25 == 1) goto LAB_00035ac4;
        if (iVar25 == -2) goto LAB_00035adc;
        if (local_3c == (char *)0x0) {
          FUN_00030648(param_1,"Couldn\'t resolve host \'%s\'",piVar8[0x27]);
          iVar21 = 6;
        }
      }
      else {
        FUN_00015d48(param_1,piVar8 + 0x28);
        iVar25 = FUN_00029d84(piVar8,piVar8[0x2a],piVar8[0x2c],&local_3c,uVar9);
        if (iVar25 == 1) {
LAB_00035ac4:
          *param_3 = '\x01';
        }
        else if (iVar25 == -2) {
LAB_00035adc:
          iVar21 = 0x1c;
        }
        else if (local_3c == (char *)0x0) {
          FUN_00030648(param_1,"Couldn\'t resolve proxy \'%s\'",piVar8[0x2b]);
          iVar21 = 5;
        }
      }
      piVar8[0x12] = (int)local_3c;
      iVar25 = iVar21;
    }
    else {
      *param_3 = '\0';
      iVar25 = iVar21;
    }
  }
LAB_00034be0:
  (*DAT_000515c8)(local_94);
LAB_00034bf8:
  if (local_58 != (char *)0x0) {
    (*DAT_000515c8)();
    local_58 = (char *)0x0;
  }
  if (local_5c != 0) {
    (*DAT_000515c8)();
  }
  if (iVar25 == 0) {
    iVar21 = *param_2;
    if ((*(int *)(*(int *)(iVar21 + 0x248) + 0xc) != 0) ||
       (*(int *)(*(int *)(iVar21 + 0x24c) + 0xc) != 0)) {
      *param_4 = 1;
      return 0;
    }
    if (*param_3 != '\0') {
      return 0;
    }
    iVar25 = FUN_00033c54(iVar21,param_4);
    if (iVar25 != 0x59) {
      if (iVar25 == 0) {
        return 0;
      }
LAB_00034cb0:
      if (*param_2 == 0) {
        return iVar25;
      }
      FUN_00033548(*param_2,0);
      *param_2 = 0;
      return iVar25;
    }
  }
  else if (iVar25 != 0x59) goto LAB_00034cb0;
  *param_2 = 0;
  return 0x59;
}



int FUN_00035b80(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  piVar5 = (int *)*param_1;
  iVar6 = *piVar5;
  if (((char)piVar5[0x7b] != '\0') ||
     (((FUN_00033714(iVar6,piVar5,param_3,0,param_4),
       *(int *)(piVar5[0x93] + 0xc) + *(int *)(piVar5[0x92] + 0xc) != 0 &&
       (*(char *)(iVar6 + 0x2ca) == '\0')) && ((char)piVar5[0x76] == '\0')))) {
    return 0;
  }
  iVar2 = *(int *)(iVar6 + 0x100);
  *(undefined1 *)(piVar5 + 0x7b) = 1;
  if (iVar2 != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(iVar6 + 0x100) = 0;
  }
  if (*(int *)(iVar6 + 0xfc) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(iVar6 + 0xfc) = 0;
  }
  if (piVar5[0x12] != 0) {
    FUN_00029f70(iVar6);
    piVar5[0x12] = 0;
  }
  if ((param_2 - 0x17U < 0x14) && ((1 << (param_2 - 0x17U & 0xff) & 0x80009U) != 0)) {
    param_3 = 1;
  }
  if (*(code **)(piVar5[0x81] + 0xc) != (code *)0x0) {
    param_2 = (**(code **)(piVar5[0x81] + 0xc))(piVar5,param_2,param_3);
  }
  if (param_2 == 0) {
    iVar2 = FUN_0002af2c(piVar5);
    if (iVar2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = 0x2a;
    }
  }
  if (*(int *)(iVar6 + 0x8550) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(iVar6 + 0x8550) = 0;
  }
  if ((((*(char *)(iVar6 + 0x2ca) == '\0') || (piVar5[0x9b] == 2)) || (piVar5[0xa1] == 2)) &&
     (((char)piVar5[0x76] == '\0' && (param_3 == 0)))) {
    uVar4 = *(uint *)(*(int *)(iVar6 + 0x40) + 0x3c);
    bVar7 = (int)uVar4 < 0;
    if (bVar7) {
      uVar4 = *(uint *)(*(int *)(iVar6 + 0x40) + 0xc);
    }
    *(undefined1 *)(piVar5 + 0x10) = 0;
    if (bVar7) {
      uVar4 = uVar4 << 2;
    }
    if ((uVar4 != 0) && (uVar4 < *(uint *)(*(int *)(iVar6 + 0x518) + 4))) {
      FUN_000305d4(iVar6,"Connection cache is full, closing the oldest one.\n");
      piVar3 = (int *)FUN_00031394(*(undefined4 *)(iVar6 + 0x518));
      if (piVar3 != (int *)0x0) {
        *piVar3 = iVar6;
        FUN_00033548(piVar3,0);
        if (piVar3 == piVar5) {
          *(undefined4 *)(iVar6 + 0x528) = 0;
          goto LAB_00035dc4;
        }
      }
    }
    cVar1 = *(char *)((int)piVar5 + 0x1db);
    *(int **)(iVar6 + 0x528) = piVar5;
    if (cVar1 == '\0') {
      iVar2 = piVar5[0x27];
    }
    else {
      iVar2 = piVar5[0x2b];
    }
    FUN_000305d4(iVar6,"Connection #%ld to host %s left intact\n",piVar5[0x11],iVar2);
  }
  else {
    iVar2 = FUN_00033548(piVar5,param_3);
    if (param_2 == 0 && iVar2 != 0) {
      param_2 = iVar2;
    }
  }
LAB_00035dc4:
  *param_1 = 0;
  FUN_0003399c(iVar6);
  return param_2;
}



int FUN_00035df0(int *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  iVar3 = *piVar2;
  if (*(code **)(piVar2[0x81] + 8) != (code *)0x0) {
    iVar1 = (**(code **)(piVar2[0x81] + 8))(piVar2);
    if (iVar1 == 0x37) {
      if (*(char *)((int)piVar2 + 0x1d9) == '\0') {
        return 0x37;
      }
      if (*(int *)(iVar3 + 0x40) != 0) {
        return 0x37;
      }
      iVar3 = FUN_00039b78(param_1);
      if (iVar3 != 0) {
        return iVar3;
      }
      piVar2 = (int *)*param_1;
      iVar1 = (**(code **)(piVar2[0x81] + 8))(piVar2,param_2);
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*param_2 != '\0') {
      FUN_00031364(piVar2);
      return 0;
    }
  }
  return 0;
}



int FUN_00035e98(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  
  *param_2 = 0;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x204) + 0x10);
  if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(), iVar1 != 0)) {
    return iVar1;
  }
  if (*param_2 == 1) {
    FUN_00031364(param_1);
  }
  return 0;
}



undefined4 FUN_00035ee4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = getifaddrs(&local_14);
  piVar2 = local_14;
  if (iVar1 < 0) {
    uVar3 = 0;
  }
  else {
    for (; uVar3 = 0, piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      iVar1 = FUN_00039e30(piVar2[1],param_1);
      if (iVar1 != 0) {
        uVar3 = 1;
        break;
      }
    }
    freeifaddrs(local_14);
  }
  return uVar3;
}



// WARNING: Type propagation algorithm not settling

int FUN_00035f40(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int local_68 [4];
  char acStack_58 [64];
  
  iVar1 = getifaddrs(local_68);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    for (piVar4 = (int *)local_68[0]; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      if ((ushort *)piVar4[3] != (ushort *)0x0) {
        if (*(ushort *)piVar4[3] == param_1) {
          iVar2 = FUN_00039e30(piVar4[1],param_3);
          if (iVar2 != 0) {
            local_68[2] = 0;
            local_68[3] = 0;
            local_68[1] = 0;
            pcVar3 = inet_ntop(param_1,(void *)(piVar4[3] + 4),acStack_58,0x40);
            iVar1 = 2;
            FUN_000365a4(param_4,param_5,"%s%s",pcVar3,local_68 + 1);
            break;
          }
        }
        else if ((iVar1 == 0) && (iVar1 = FUN_00039e30(piVar4[1],param_3), iVar1 != 0)) {
          iVar1 = 1;
        }
      }
    }
    freeifaddrs(local_68[0]);
  }
  return iVar1;
}



void FUN_0003602c(int param_1)

{
  memset((void *)(param_1 + 0x520),0,8);
  return;
}



undefined4 FUN_0003603c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar4 = (undefined4 *)(param_1 + 0x520);
  if (((-1 < *(int *)(param_1 + 0x434)) && (*(int *)(param_1 + 0x1ec) != 0)) &&
     (iVar1 = FUN_0002981c(*puVar4,*(undefined4 *)(param_1 + 0x524)), iVar1 != 0)) {
    uVar2 = *(uint *)(param_1 + 0x1e8);
    iVar3 = *(int *)(param_1 + 0x434);
    iVar1 = (int)uVar2 >> 0x1f;
    bVar5 = *(uint *)(param_1 + 0x430) < uVar2;
    if ((int)(iVar3 - (iVar1 + (uint)bVar5)) < 0 !=
        (SBORROW4(iVar3,iVar1) != SBORROW4(iVar3 - iVar1,(uint)bVar5))) {
      iVar1 = FUN_00029758(param_2,param_3,*puVar4,*(undefined4 *)(param_1 + 0x524));
      iVar1 = *(int *)(param_1 + 0x1ec) * 1000 - iVar1;
      if (iVar1 < 1) {
        FUN_00030648(param_1,
                     "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds",
                     *(undefined4 *)(param_1 + 0x1e8));
        return 0x1c;
      }
      goto LAB_000360f8;
    }
  }
  *puVar4 = param_2;
  *(undefined4 *)(param_1 + 0x524) = param_3;
  if (*(int *)(param_1 + 0x1e8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x1ec) * 1000;
LAB_000360f8:
  FUN_00025754(param_1,iVar1);
  return 0;
}



int FUN_0003610c(undefined4 param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  bool bVar9;
  
  sVar1 = param_3;
  if (param_3 == 0) {
    sVar1 = strlen(param_2);
  }
  uVar5 = sVar1 + 1;
  iVar2 = (*DAT_000515c4)(uVar5);
  if (iVar2 != 0) {
    iVar6 = 0;
    uVar8 = uVar5;
    for (sVar7 = 0; sVar7 != sVar1; sVar7 = sVar7 + 1) {
      uVar4 = (uint)(byte)param_2[sVar7];
      iVar3 = iVar2;
      if (uVar4 < 0x5b) {
        if ((0x40 < uVar4) || ((0x2c < uVar4 && ((uVar4 < 0x2f || (uVar4 - 0x30 < 10))))))
        goto LAB_000361d0;
LAB_000361e0:
        uVar8 = uVar8 + 2;
        if (uVar5 < uVar8) {
          uVar5 = uVar5 << 1;
          iVar3 = (*DAT_000515cc)(iVar2,uVar5);
          if (iVar3 == 0) {
            (*DAT_000515c8)(iVar2);
            return iVar3;
          }
        }
        FUN_000365a4(iVar3 + iVar6,4,"%%%02X",uVar4,param_1,sVar1,param_3);
        iVar6 = iVar6 + 3;
      }
      else {
        if (uVar4 < 0x7b) {
          if (0x60 < uVar4) goto LAB_000361d0;
          bVar9 = uVar4 == 0x5f;
        }
        else {
          bVar9 = uVar4 == 0x7e;
        }
        if (!bVar9) goto LAB_000361e0;
LAB_000361d0:
        *(char *)(iVar2 + iVar6) = param_2[sVar7];
        iVar6 = iVar6 + 1;
      }
      iVar2 = iVar3;
    }
    *(undefined1 *)(iVar2 + iVar6) = 0;
  }
  return iVar2;
}



undefined4
FUN_00036274(undefined4 param_1,byte *param_2,size_t param_3,int *param_4,int *param_5,byte param_6)

{
  undefined1 auVar1 [4];
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 local_30 [4];
  byte *pbStack_2c;
  size_t sStack_28;
  
  local_30 = (undefined1  [4])param_1;
  pbStack_2c = param_2;
  sStack_28 = param_3;
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  iVar2 = (*DAT_000515c4)(param_3 + 1);
  if (iVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    iVar8 = 0;
    uVar7 = param_3 + 1;
    while (auVar1 = local_30, uVar6 = uVar7 - 1, uVar6 != 0) {
      uVar4 = (uint)*param_2;
      if (uVar4 == 0x25 && 2 < uVar6) {
        if (((*(ushort *)(__ctype_b + (uint)param_2[1] * 2) & 0x10) == 0) ||
           ((*(ushort *)(__ctype_b + (uint)param_2[2] * 2) & 0x10) == 0)) {
          uVar4 = 0x25;
        }
        else {
          local_30[1] = param_2[2];
          local_30[0] = param_2[1];
          local_30[3] = auVar1[3];
          local_30[2] = 0;
          strtoul(local_30,(char **)&pbStack_2c,0x10);
          uVar4 = FUN_00027a88();
          param_2 = param_2 + 2;
          uVar6 = uVar7 - 3;
        }
      }
      if (uVar4 < 0x20) {
        bVar5 = param_6 & 1;
      }
      else {
        bVar5 = 0;
      }
      if (bVar5 != 0) {
        (*DAT_000515c8)(iVar2);
        return 3;
      }
      *(char *)(iVar2 + iVar8) = (char)uVar4;
      param_2 = param_2 + 1;
      iVar8 = iVar8 + 1;
      uVar7 = uVar6;
    }
    uVar3 = 0;
    *(undefined1 *)(iVar2 + iVar8) = 0;
    if (param_5 != (int *)0x0) {
      *param_5 = iVar8;
    }
    *param_4 = iVar2;
  }
  return uVar3;
}



undefined4 FUN_000363b4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 local_14;
  
  iVar1 = FUN_00036274();
  if ((iVar1 == 0) && (in_r3 != (undefined4 *)0x0)) {
    uVar2 = FUN_00027aa0(local_14);
    *in_r3 = uVar2;
  }
  return 0;
}



uint FUN_00036444(byte *param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    uVar2 = (uint)*param_1;
    uVar1 = *(ushort *)(__ctype_b + uVar2 * 2);
    if ((uVar1 & 8) == 0) break;
    uVar3 = uVar3 * 10 + (uVar2 - 0x30);
    param_1 = param_1 + 1;
  }
  if (uVar3 != 0) {
    if (uVar2 != 0x24) {
      return uVar1 & 8;
    }
    *param_2 = param_1 + 1;
  }
  return uVar3;
}



uint FUN_000364d4(byte param_1,int *param_2)

{
  int iVar1;
  int extraout_r3;
  int iVar2;
  
  if (*param_2 == 0) {
    iVar1 = (*DAT_000515c4)(0x20);
    iVar2 = extraout_r3;
    if (iVar1 != 0) {
      iVar2 = 0x20;
    }
    *param_2 = iVar1;
    if (iVar1 == 0) {
LAB_00036514:
      param_2[3] = 1;
      return 0xffffffff;
    }
    param_2[2] = iVar2;
    param_2[1] = 0;
  }
  else if ((uint)param_2[2] <= param_2[1] + 1U) {
    iVar2 = (*DAT_000515cc)(*param_2,param_2[2] << 1);
    if (iVar2 == 0) goto LAB_00036514;
    *param_2 = iVar2;
    param_2[2] = param_2[2] << 1;
  }
  *(byte *)(*param_2 + param_2[1]) = param_1;
  param_2[1] = param_2[1] + 1;
  return (uint)param_1;
}



void FUN_000365a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  FUN_0003759c(param_1,param_2,param_3,&uStack_4,param_1,&uStack_4,param_3);
  return;
}



// WARNING: Type propagation algorithm not settling

char * FUN_000365cc(undefined4 param_1,code *param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int extraout_r2;
  char cVar15;
  uint *puVar16;
  uint extraout_r3;
  uint uVar17;
  uint uVar18;
  size_t sVar19;
  char *pcVar20;
  uint *puVar21;
  char *pcVar22;
  size_t sVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  size_t sVar27;
  char *pcVar28;
  size_t sVar29;
  bool bVar30;
  longlong lVar31;
  undefined4 *local_f78;
  size_t sStack_f74;
  char *local_f6c;
  undefined4 *local_f68;
  int local_f64;
  uint local_f58;
  byte *local_f4c;
  char local_f48 [32];
  byte *local_f28 [63];
  char acStack_e29 [513];
  uint local_c28 [3];
  size_t local_c1c [765];
  undefined1 auStack_28 [4];
  
  sVar19 = 0;
  sVar23 = 0;
  local_f78 = (undefined4 *)((int)acStack_e29 + 1);
  local_f28[0] = param_3;
LAB_00036600:
  while (pbVar14 = local_f28[0], *local_f28[0] != 0) {
    local_f28[0] = local_f28[0] + 1;
    if (*pbVar14 == 0x25) {
      if (pbVar14[1] != 0x25) {
        sVar2 = FUN_00036444(local_f28[0],local_f28);
        sVar23 = sVar23 + 1;
        uVar18 = 0;
        sVar29 = 0;
        sVar27 = 0;
        if (sVar2 == 0) {
          sVar2 = sVar23;
        }
        if ((int)sVar19 < (int)sVar2) {
          sVar19 = sVar2;
        }
LAB_00036664:
        do {
          pbVar14 = local_f28[0];
          uVar9 = (uint)*local_f28[0];
          if (uVar9 < 0x3a) {
            if (uVar9 < 0x30) {
              if (uVar9 < 0x2c) {
                if ((uVar9 < 0x2a) && (uVar9 != 0x20)) {
                  bVar30 = uVar9 == 0x23;
                  goto LAB_000366dc;
                }
              }
              else if (1 < uVar9 - 0x2d) goto LAB_000372d0;
            }
          }
          else if (uVar9 != 0x68) {
            if (uVar9 < 0x69) {
              if (uVar9 != 0x4c) {
                bVar30 = uVar9 == 0x4f;
LAB_000366dc:
                if (!bVar30) goto LAB_000372d0;
              }
            }
            else if ((uVar9 != 0x71) && (uVar9 != 0x7a)) {
              bVar30 = uVar9 == 0x6c;
              goto LAB_000366dc;
            }
          }
          local_f28[0] = local_f28[0] + 1;
          bVar1 = *pbVar14;
          if (bVar1 < 0x3a) {
            if (bVar1 < 0x31) {
              if (bVar1 == 0x2b) {
                uVar18 = uVar18 | 2;
                goto LAB_00036664;
              }
              if (bVar1 < 0x2c) {
                if (bVar1 == 0x23) {
                  uVar18 = uVar18 | 8;
                }
                else if (bVar1 == 0x2a) {
                  sVar27 = FUN_00036444(local_f28[0],local_f28);
                  sVar23 = sVar23 + 1;
                  uVar18 = uVar18 | 0x4000;
                  if (sVar27 == 0) {
                    sVar27 = sVar23;
                  }
                  if ((int)sVar19 < (int)sVar27) {
                    sVar19 = sVar27;
                  }
                }
                else if (bVar1 == 0x20) {
                  uVar18 = uVar18 | 1;
                }
                goto LAB_00036664;
              }
              if (bVar1 == 0x2e) {
                if (pbVar14[1] == 0x2a) {
                  local_f28[0] = pbVar14 + 2;
                  sVar29 = FUN_00036444(local_f28[0],local_f28);
                  sVar23 = sVar23 + 1;
                  uVar18 = uVar18 | 0x18000;
                  if (sVar29 == 0) {
                    sVar29 = sVar23;
                  }
                  if ((int)sVar19 < (int)sVar29) {
                    sVar19 = sVar29;
                  }
                }
                else {
                  sVar29 = strtol((char *)local_f28[0],(char **)local_f28,10);
                  uVar18 = uVar18 | 0x8000;
                }
                goto LAB_00036664;
              }
              if (bVar1 != 0x30) {
                if (bVar1 == 0x2d) {
                  uVar18 = uVar18 & 0xfffffeff | 4;
                }
                goto LAB_00036664;
              }
              if ((uVar18 & 4) == 0) {
                uVar18 = uVar18 | 0x100;
              }
            }
            sVar27 = strtol((char *)pbVar14,(char **)local_f28,10);
            uVar18 = uVar18 | 0x2000;
            goto LAB_00036664;
          }
          if (bVar1 != 0x68) {
            if (bVar1 < 0x69) {
              if (bVar1 == 0x4c) {
                uVar18 = uVar18 | 0x80;
                goto LAB_00036664;
              }
              if (bVar1 != 0x4f) goto LAB_00036664;
            }
            else if (bVar1 != 0x71) {
              if (bVar1 != 0x7a) {
                if (bVar1 != 0x6c) goto LAB_00036664;
                if ((uVar18 & 0x20) != 0) goto LAB_0003729c;
              }
              uVar18 = uVar18 | 0x20;
              goto LAB_00036664;
            }
LAB_0003729c:
            uVar18 = uVar18 | 0x40;
            goto LAB_00036664;
          }
          uVar18 = uVar18 | 0x10;
        } while( true );
      }
      local_f28[0] = pbVar14 + 2;
    }
  }
  puVar10 = local_c28;
  iVar3 = 0;
  while (iVar3 < (int)sVar19) {
    iVar3 = iVar3 + 1;
    if ((iVar3 < (int)sVar19) && (puVar10[6] == 9)) {
      uVar18 = *param_4;
      param_4 = param_4 + 1;
      puVar10[10] = uVar18;
      puVar10[0xb] = (int)uVar18 >> 0x1f;
    }
    puVar21 = param_4;
    switch(*puVar10) {
    case 0:
    case 1:
    case 2:
    case 4:
      puVar21 = param_4 + 1;
      puVar10[4] = *param_4;
      break;
    case 3:
      uVar18 = puVar10[1];
      if (((uVar18 & 0x240) == 0x240) || ((uVar18 & 0x40) != 0)) {
        puVar16 = (uint *)((int)param_4 + 7U & 0xfffffff8);
        puVar21 = puVar16 + 2;
        uVar18 = puVar16[1];
        puVar10[4] = *puVar16;
        puVar10[5] = uVar18;
      }
      else {
        puVar21 = param_4 + 1;
        if (((uVar18 & 0x220) == 0x220) || (((uVar18 & 0x20) == 0 && ((uVar18 & 0x200) != 0)))) {
          uVar18 = 0;
        }
        else {
          uVar18 = (int)*param_4 >> 0x1f;
        }
        puVar10[4] = *param_4;
        puVar10[5] = uVar18;
      }
      break;
    case 7:
      puVar16 = (uint *)((int)param_4 + 7U & 0xfffffff8);
      puVar21 = puVar16 + 2;
      uVar18 = puVar16[1];
      puVar10[4] = *puVar16;
      puVar10[5] = uVar18;
      break;
    case 9:
      *puVar10 = 3;
    }
    puVar10 = puVar10 + 6;
    param_4 = puVar21;
  }
  local_f64 = 0;
  local_f68 = (undefined4 *)((int)acStack_e29 + 1);
  pcVar22 = (char *)0x0;
  local_f6c = "0123456789abcdefghijklmnopqrstuvwxyz";
  local_f4c = param_3;
  do {
    while( true ) {
      while( true ) {
        if (*local_f4c == 0) {
          return pcVar22;
        }
        if (*local_f4c == 0x25) break;
        do {
          iVar3 = (*param_2)(*local_f4c,param_1);
          if (iVar3 == -1) {
            return pcVar22;
          }
          pcVar22 = pcVar22 + 1;
          pbVar13 = local_f4c + 1;
          pbVar14 = local_f4c + 1;
          local_f4c = pbVar13;
        } while ((*pbVar14 != 0) && (*pbVar14 != 0x25));
      }
      pbVar14 = local_f4c + 1;
      if (local_f4c[1] != 0x25) break;
      local_f4c = local_f4c + 2;
      iVar3 = (*param_2)(0x25,param_1);
      if (iVar3 == -1) {
        return pcVar22;
      }
      pcVar22 = pcVar22 + 1;
    }
    local_f4c = pbVar14;
    iVar4 = FUN_00036444(pbVar14,&local_f4c);
    iVar3 = local_f64;
    if (iVar4 != 0) {
      iVar3 = iVar4 + -1;
    }
    uVar18 = local_c28[iVar3 * 6 + 1];
    uVar9 = local_c28[iVar3 * 6 + 2];
    if ((uVar18 & 0x4000) != 0) {
      uVar9 = local_c1c[uVar9 * 6 + 1];
    }
    if ((uVar18 & 0x10000) == 0) {
      if ((uVar18 & 0x8000) == 0) {
        sVar19 = 0xffffffff;
        local_f64 = local_f64 + 1;
      }
      else {
        sVar19 = local_c1c[iVar3 * 6];
        local_f64 = local_f64 + 1;
      }
    }
    else {
      sVar19 = local_c1c[local_c1c[iVar3 * 6] * 6 + 1];
      local_f64 = local_f64 + 2;
    }
    local_f58 = uVar18 >> 3 & 1;
    switch(local_c28[iVar3 * 6]) {
    case 1:
      pcVar20 = (char *)local_c1c[iVar3 * 6 + 1];
      if (pcVar20 == (char *)0x0) {
        if ((int)sVar19 < 5 && sVar19 != 0xffffffff) {
          pcVar20 = "";
          sVar19 = 0;
        }
        else {
          local_c28[iVar3 * 6 + 1] = uVar18 & 0xfffffff7;
          sVar19 = 5;
          pcVar20 = "(nil)";
        }
      }
      else if (sVar19 == 0xffffffff) {
        sVar19 = strlen(pcVar20);
      }
      iVar4 = uVar9 - sVar19;
      if ((local_c28[iVar3 * 6 + 1] & 8) != 0) {
        iVar7 = (*param_2)(0x22,param_1);
        if (iVar7 == -1) {
          return pcVar22;
        }
        pcVar22 = pcVar22 + 1;
      }
      pcVar24 = pcVar22;
      iVar7 = iVar4;
      iVar6 = iVar4;
      if ((local_c28[iVar3 * 6 + 1] & 4) == 0) {
        while( true ) {
          pcVar24 = pcVar22 + (iVar4 - iVar6);
          iVar7 = iVar6 + -1;
          if (iVar6 < 1) break;
          iVar5 = (*param_2)(0x20,param_1);
          iVar6 = iVar7;
          if (iVar5 == -1) {
            return pcVar24;
          }
        }
      }
      pcVar22 = pcVar24 + sVar19;
      iVar4 = (int)pcVar20 - (int)pcVar24;
      for (; (pcVar24 != pcVar22 && (pcVar24[iVar4] != '\0')); pcVar24 = pcVar24 + 1) {
        iVar6 = (*param_2)(pcVar24[iVar4],param_1);
        if (iVar6 == -1) {
          return pcVar24;
        }
      }
      pcVar22 = pcVar24;
      if ((local_c28[iVar3 * 6 + 1] & 4) != 0) {
        for (; 0 < (int)(pcVar24 + (iVar7 - (int)pcVar22)); pcVar22 = pcVar22 + 1) {
          iVar4 = (*param_2)(0x20,param_1);
          if (iVar4 == -1) {
            return pcVar22;
          }
        }
      }
      if ((local_c28[iVar3 * 6 + 1] & 8) != 0) {
        iVar3 = (*param_2)(0x22,param_1);
        if (iVar3 == -1) {
          return pcVar22;
        }
        pcVar22 = pcVar22 + 1;
      }
      break;
    case 2:
      local_f78 = (undefined4 *)local_c1c[iVar3 * 6 + 1];
      if (local_f78 != (undefined4 *)0x0) {
        local_f6c = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        if ((uVar18 & 0x1000) == 0) {
          local_f6c = "0123456789abcdefghijklmnopqrstuvwxyz";
        }
        sStack_f74 = 0;
        iVar4 = 0x10;
        bVar30 = false;
        local_f58 = 1;
        goto LAB_00036a88;
      }
      iVar4 = uVar9 - 5;
      pcVar20 = pcVar22;
      if ((uVar18 & 4) != 0) {
        iVar7 = iVar4;
        while( true ) {
          pcVar20 = pcVar22 + ((uVar9 - 5) - iVar7);
          iVar4 = iVar7 + -1;
          if (iVar7 < 1) break;
          iVar6 = (*param_2)(0x20,param_1);
          iVar7 = iVar4;
          if (iVar6 == -1) {
            return pcVar20;
          }
        }
      }
      iVar7 = (int)&DAT_000478ca - (int)pcVar20;
      for (; pcVar20[iVar7] != '\0'; pcVar20 = pcVar20 + 1) {
        iVar6 = (*param_2)(pcVar20[iVar7],param_1);
        if (iVar6 == -1) {
          return pcVar20;
        }
      }
      pcVar22 = pcVar20;
      if ((local_c28[iVar3 * 6 + 1] & 4) == 0) {
        for (; 0 < (int)(pcVar20 + (iVar4 - (int)pcVar22)); pcVar22 = pcVar22 + 1) {
          iVar3 = (*param_2)(0x20,param_1);
          if (iVar3 == -1) {
            return pcVar22;
          }
        }
      }
      break;
    case 3:
      local_f78 = (undefined4 *)local_c1c[iVar3 * 6 + 1];
      sStack_f74 = local_c1c[iVar3 * 6 + 2];
      if ((uVar18 & 0x20000) == 0) {
        if ((uVar18 & 0x400) == 0) {
          if ((uVar18 & 0x800) == 0) {
            if ((uVar18 & 0x200) != 0) {
              iVar4 = 10;
              goto LAB_00036a84;
            }
            if ((int)sStack_f74 < 0) {
              iVar4 = 10;
              bVar30 = local_f78 != (undefined4 *)0x0;
              local_f78 = (undefined4 *)-(int)local_f78;
              sStack_f74 = -(sStack_f74 + bVar30);
              bVar30 = true;
            }
            else {
              iVar4 = 10;
              bVar30 = false;
            }
          }
          else {
            local_f6c = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            if ((uVar18 & 0x1000) == 0) {
              local_f6c = "0123456789abcdefghijklmnopqrstuvwxyz";
            }
            iVar4 = 0x10;
            bVar30 = false;
          }
        }
        else {
          iVar4 = 8;
LAB_00036a84:
          bVar30 = false;
        }
LAB_00036a88:
        lVar31 = CONCAT44(sStack_f74,local_f78);
        if (sVar19 == 0xffffffff) {
          sVar19 = 1;
        }
        pcVar20 = acStack_e29;
        while( true ) {
          sStack_f74 = (size_t)((ulonglong)lVar31 >> 0x20);
          local_f78 = (undefined4 *)lVar31;
          if (lVar31 == 0) break;
          FUN_0003fc04(local_f78,sStack_f74,iVar4,0);
          *pcVar20 = local_f6c[extraout_r2];
          lVar31 = FUN_0003fc04(local_f78,sStack_f74,iVar4,0);
          pcVar20 = pcVar20 + -1;
        }
        pcVar24 = pcVar20 + (uVar9 - (int)acStack_e29);
        pcVar28 = pcVar20 + (sVar19 - (int)acStack_e29);
        uVar18 = local_f58;
        if (iVar4 != 8) {
          uVar18 = 0;
        }
        if (uVar18 == 0) {
          if (0 < (int)pcVar28) goto LAB_00036b34;
        }
        else if ((int)pcVar28 < 1) {
          *pcVar20 = '0';
          pcVar24 = pcVar24 + -1;
          pcVar20 = pcVar20 + -1;
        }
        else {
LAB_00036b34:
          pcVar24 = pcVar24 + -(int)pcVar28;
          for (pcVar25 = pcVar28; 0 < (int)pcVar25; pcVar25 = pcVar25 + -1) {
            pcVar20[(int)pcVar25 - (int)pcVar28] = '0';
          }
          pcVar20 = pcVar20 + -((uint)pcVar28 & ~((int)pcVar28 >> 0x1f));
        }
        if (iVar4 != 0x10) {
          local_f58 = 0;
        }
        if (local_f58 != 0) {
          pcVar24 = pcVar24 + -2;
        }
        if ((bVar30) || ((local_c28[iVar3 * 6 + 1] & 3) != 0)) {
          pcVar24 = pcVar24 + -1;
        }
        pcVar28 = pcVar22;
        pcVar25 = pcVar24;
        pcVar26 = pcVar24;
        if ((local_c28[iVar3 * 6 + 1] & 0x104) == 0) {
          while( true ) {
            pcVar28 = pcVar22 + ((int)pcVar24 - (int)pcVar26);
            pcVar25 = pcVar26 + -1;
            if ((int)pcVar26 < 1) break;
            iVar4 = (*param_2)(0x20,param_1);
            pcVar26 = pcVar25;
            if (iVar4 == -1) {
              return pcVar28;
            }
          }
        }
        if (bVar30) {
          uVar12 = 0x2d;
LAB_00036bec:
          iVar4 = (*param_2)(uVar12,param_1);
          if (iVar4 == -1) {
            return pcVar28;
          }
          pcVar28 = pcVar28 + 1;
        }
        else {
          if ((local_c28[iVar3 * 6 + 1] & 2) != 0) {
            uVar12 = 0x2b;
            goto LAB_00036bec;
          }
          if ((local_c28[iVar3 * 6 + 1] & 1) != 0) {
            uVar12 = 0x20;
            goto LAB_00036bec;
          }
        }
        if (local_f58 != 0) {
          iVar4 = (*param_2)(0x30,param_1);
          if (iVar4 == -1) {
            return pcVar28;
          }
          if ((local_c28[iVar3 * 6 + 1] & 0x1000) == 0) {
            uVar12 = 0x78;
          }
          else {
            uVar12 = 0x58;
          }
          iVar4 = (*param_2)(uVar12,param_1);
          if (iVar4 == -1) {
            return pcVar28 + 1;
          }
          pcVar28 = pcVar28 + 2;
        }
        pcVar22 = pcVar28;
        pcVar24 = pcVar25;
        pcVar26 = pcVar25;
        if ((local_c28[iVar3 * 6 + 1] & 0x104) == 0x100) {
          while( true ) {
            pcVar22 = pcVar28 + ((int)pcVar25 - (int)pcVar26);
            pcVar24 = pcVar26 + -1;
            if ((int)pcVar26 < 1) break;
            iVar4 = (*param_2)(0x30,param_1);
            pcVar26 = pcVar24;
            if (iVar4 == -1) {
              return pcVar22;
            }
          }
        }
        pcVar28 = pcVar20;
        while( true ) {
          pcVar25 = pcVar28 + ((int)pcVar22 - (int)pcVar20);
          if (acStack_e29 < pcVar28 + 1) break;
          iVar4 = (*param_2)(pcVar28[1],param_1);
          pcVar28 = pcVar28 + 1;
          if (iVar4 == -1) {
            return pcVar25;
          }
        }
        pcVar22 = pcVar25;
        if ((local_c28[iVar3 * 6 + 1] & 4) != 0) {
          for (; 0 < (int)(pcVar25 + ((int)pcVar24 - (int)pcVar22)); pcVar22 = pcVar22 + 1) {
            iVar3 = (*param_2)(0x20,param_1);
            if (iVar3 == -1) {
              return pcVar22;
            }
          }
        }
      }
      else {
        pcVar20 = pcVar22;
        uVar17 = uVar9;
        if ((uVar18 & 4) == 0) {
          while( true ) {
            pcVar20 = pcVar22 + (uVar9 - uVar17);
            uVar17 = uVar17 - 1;
            if ((int)uVar17 < 1) break;
            iVar4 = (*param_2)(0x20,param_1);
            if (iVar4 == -1) {
              return pcVar20;
            }
          }
        }
        iVar4 = (*param_2)((uint)local_f78 & 0xff,param_1);
        if (iVar4 == -1) {
          return pcVar20;
        }
        pcVar22 = pcVar20 + 1;
        if ((local_c28[iVar3 * 6 + 1] & 4) != 0) {
          while (uVar17 = uVar17 - 1, 0 < (int)uVar17) {
            iVar3 = (*param_2)(0x20,param_1);
            if (iVar3 == -1) {
              return pcVar22;
            }
            pcVar22 = pcVar22 + 1;
          }
        }
      }
      break;
    case 4:
      puVar11 = (undefined4 *)local_c1c[iVar3 * 6 + 1];
      if ((uVar18 & 0x40) == 0) {
        if (((uVar18 & 0x20) == 0) && ((uVar18 & 0x10) != 0)) {
          *(short *)puVar11 = (short)pcVar22;
        }
        else {
          *puVar11 = pcVar22;
        }
      }
      else {
        *puVar11 = pcVar22;
        puVar11[1] = (int)pcVar22 >> 0x1f;
      }
      break;
    case 7:
      local_f48[0] = '%';
      local_f48[1] = '\0';
      local_f48[2] = '\0';
      local_f48[3] = '\0';
      memset(local_f48 + 4,0,0x1c);
      sVar19 = strlen(local_f48);
      bVar30 = (uVar18 & 0x2000) != 0;
      uVar9 = extraout_r3;
      if (bVar30) {
        uVar9 = local_c28[iVar3 * 6 + 2];
      }
      iVar4 = 0x20 - sVar19;
      if (!bVar30) {
        if ((uVar18 & 0x4000) == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = local_c1c[local_c28[iVar3 * 6 + 2] * 6 + 1];
        }
      }
      if ((uVar18 & 0x8000) == 0) {
        if ((uVar18 & 0x10000) == 0) {
          sVar19 = 0xffffffff;
        }
        else {
          sVar19 = local_c1c[local_c1c[iVar3 * 6] * 6 + 1];
        }
      }
      else {
        sVar19 = local_c1c[iVar3 * 6];
      }
      if ((uVar18 & 4) == 0) {
        pcVar20 = local_f48 + 1;
      }
      else {
        local_f48[1] = 0x2d;
        pcVar20 = local_f48 + 2;
      }
      if ((uVar18 & 2) != 0) {
        *pcVar20 = '+';
        pcVar20 = pcVar20 + 1;
      }
      bVar30 = (uVar18 & 1) != 0;
      if (bVar30) {
        *pcVar20 = ' ';
      }
      if (bVar30) {
        pcVar20 = pcVar20 + 1;
      }
      if ((local_c28[iVar3 * 6 + 1] & 8) != 0) {
        *pcVar20 = '#';
        pcVar20 = pcVar20 + 1;
      }
      *pcVar20 = '\0';
      if (-1 < (int)uVar9) {
        iVar7 = FUN_000365a4(pcVar20,iVar4,&DAT_000478d1);
        pcVar20 = pcVar20 + iVar7;
        iVar4 = iVar4 - iVar7;
      }
      if (-1 < (int)sVar19) {
        iVar4 = FUN_000365a4(pcVar20,iVar4,&DAT_000478d0,sVar19);
        pcVar20 = pcVar20 + iVar4;
      }
      bVar30 = (local_c28[iVar3 * 6 + 1] & 0x20) != 0;
      if (bVar30) {
        *pcVar20 = 'l';
      }
      uVar18 = local_c28[iVar3 * 6 + 1];
      if (bVar30) {
        pcVar20 = pcVar20 + 1;
      }
      if ((uVar18 & 0x40000) == 0) {
        if ((uVar18 & 0x80000) == 0) {
          cVar15 = 'f';
        }
        else if ((uVar18 & 0x1000) == 0) {
          cVar15 = 'g';
        }
        else {
          cVar15 = 'G';
        }
      }
      else if ((uVar18 & 0x1000) == 0) {
        cVar15 = 'e';
      }
      else {
        cVar15 = 'E';
      }
      *pcVar20 = cVar15;
      pcVar20[1] = '\0';
      sprintf((char *)local_f28,local_f48,local_c1c[iVar3 * 6 + 1],local_c1c[iVar3 * 6 + 2]);
      iVar3 = (int)local_f28 - (int)pcVar22;
      for (; pcVar22[iVar3] != '\0'; pcVar22 = pcVar22 + 1) {
        iVar4 = (*param_2)(pcVar22[iVar3],param_1);
        if (iVar4 == -1) {
          return pcVar22;
        }
      }
    }
    local_f4c = (byte *)*local_f68;
    local_f68 = local_f68 + 1;
  } while( true );
LAB_000372d0:
  uVar17 = sVar2 - 1;
  if (uVar9 == 0x66) {
    puVar8 = auStack_28 + uVar17 * 0x18;
    uVar12 = 7;
LAB_000372f0:
    *(undefined4 *)(puVar8 + -0xc00) = uVar12;
  }
  else {
    if (uVar9 < 0x67) {
      if (uVar9 == 0x58) {
        local_c28[uVar17 * 6] = 3;
        uVar18 = uVar18 | 0x1a00;
        goto LAB_0003731c;
      }
      if (uVar9 < 0x59) {
        if (uVar9 == 0x47) {
          local_c28[uVar17 * 6] = 7;
          uVar18 = uVar18 | 0x81000;
          goto LAB_0003731c;
        }
        if (uVar9 == 0x53) {
          uVar18 = uVar18 | 8;
          goto LAB_00037304;
        }
        if (uVar9 == 0x45) {
          local_c28[uVar17 * 6] = 7;
          uVar18 = uVar18 | 0x41000;
          goto LAB_0003731c;
        }
      }
      else {
        if (uVar9 == 100) {
LAB_00037440:
          puVar8 = auStack_28 + uVar17 * 0x18;
          uVar12 = 3;
LAB_00037318:
          *(undefined4 *)(puVar8 + -0xc00) = uVar12;
          goto LAB_0003731c;
        }
        if (100 < uVar9) {
          local_c28[uVar17 * 6] = 7;
          uVar18 = uVar18 | 0x40000;
          goto LAB_0003731c;
        }
        if (uVar9 == 99) {
          local_c28[uVar17 * 6] = 3;
          uVar18 = uVar18 | 0x20000;
          goto LAB_0003731c;
        }
      }
    }
    else {
      if (uVar9 == 0x6f) {
        local_c28[uVar17 * 6] = 3;
        uVar18 = uVar18 | 0x400;
        goto LAB_0003731c;
      }
      if (uVar9 < 0x70) {
        if (uVar9 == 0x69) goto LAB_00037440;
        if (uVar9 == 0x6e) {
          puVar8 = auStack_28 + uVar17 * 0x18;
          uVar12 = 4;
          goto LAB_000372f0;
        }
        if (uVar9 == 0x67) {
          local_c28[uVar17 * 6] = 7;
          uVar18 = uVar18 | 0x80000;
          goto LAB_0003731c;
        }
      }
      else {
        if (uVar9 == 0x73) {
LAB_00037304:
          puVar8 = auStack_28 + uVar17 * 0x18;
          uVar12 = 1;
          goto LAB_00037318;
        }
        if (uVar9 < 0x74) {
          if (uVar9 == 0x70) {
            puVar8 = auStack_28 + uVar17 * 0x18;
            uVar12 = 2;
            goto LAB_000372f0;
          }
        }
        else {
          if (uVar9 == 0x75) {
            local_c28[uVar17 * 6] = 3;
            uVar18 = uVar18 | 0x200;
            goto LAB_0003731c;
          }
          if (uVar9 == 0x78) {
            local_c28[uVar17 * 6] = 3;
            uVar18 = uVar18 | 0xa00;
            goto LAB_0003731c;
          }
        }
      }
    }
    local_c28[uVar17 * 6] = 0;
  }
LAB_0003731c:
  local_c28[uVar17 * 6 + 1] = uVar18;
  local_c28[uVar17 * 6 + 2] = sVar27;
  local_c1c[uVar17 * 6] = sVar29;
  uVar9 = uVar17;
  if ((uVar18 & 0x4000) != 0) {
    uVar9 = sVar27 - 1;
    local_c28[uVar17 * 6 + 2] = uVar9;
    local_c28[uVar9 * 6] = 9;
    local_c28[uVar9 * 6 + 1] = 0;
    local_c28[uVar9 * 6 + 2] = 0;
    local_c1c[uVar9 * 6] = 0;
  }
  if ((uVar18 & 0x10000) != 0) {
    sVar29 = sVar29 - 1;
    local_c1c[uVar9 * 6] = sVar29;
    local_c28[sVar29 * 6] = 9;
    local_c28[sVar29 * 6 + 1] = 0;
    local_c28[sVar29 * 6 + 2] = 0;
    local_c1c[sVar29 * 6] = 0;
  }
  *local_f78 = local_f28[0] + 1;
  local_f78 = local_f78 + 1;
  goto LAB_00036600;
}



void FUN_0003759c(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_14 = param_1;
  local_c = param_2;
  FUN_000365cc(&local_14,&LAB_000364a0,param_3,param_4,param_1);
  if (local_c != 0) {
    if (local_c == local_10) {
      local_14[-1] = 0;
    }
    else {
      *local_14 = 0;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00037658)
// WARNING: Removing unreachable block (ram,0x0003763c)

undefined4 FUN_000375e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_28 = 0;
  local_24 = 0;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_000365cc(&local_28,FUN_000364d4,param_1,&uStack_c,param_1,&uStack_c);
  uVar2 = 0;
  if (iVar1 != -1) {
    uVar2 = (*DAT_000515d0)(&DAT_000467ca);
  }
  return uVar2;
}



int FUN_0003769c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  iVar1 = FUN_000365cc(&local_18,FUN_000364d4,param_1,param_2);
  if ((iVar1 == -1) || (local_c != 0)) {
    iVar1 = 0;
    if (local_10 != 0) {
      (*DAT_000515c8)(local_18);
      iVar1 = 0;
    }
  }
  else if (local_10 == 0) {
    iVar1 = (*DAT_000515d0)(&DAT_000467ca);
  }
  else {
    *(undefined1 *)(local_18 + local_14) = 0;
    iVar1 = local_18;
  }
  return iVar1;
}



void FUN_000377bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000365cc(param_1,fputc,param_2,&uStack_8,param_1,&uStack_8);
  return;
}



void FUN_000377ec(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  FUN_000365cc(&local_c,&LAB_00036588,param_2,param_3,param_1);
  *local_c = 0;
  return;
}



undefined4 FUN_00037860(undefined4 param_1,int *param_2,int *param_3,char *param_4)

{
  bool bVar1;
  int iVar2;
  __uid_t __uid;
  FILE *__stream;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  passwd *local_448;
  passwd pStack_444;
  char acStack_428 [1028];
  
  bVar1 = false;
  if (((char *)*param_2 != (char *)0x0) && (bVar1 = false, *(char *)*param_2 != '\0')) {
    bVar1 = true;
  }
  if (param_4 == (char *)0x0) {
    iVar2 = FUN_0003ef9c(&DAT_000478d5);
    if (iVar2 == 0) {
      __uid = geteuid();
      iVar2 = getpwuid_r(__uid,&pStack_444,acStack_428,0x400,&local_448);
      if (iVar2 != 0) {
        return 1;
      }
      if (local_448 == (passwd *)0x0) {
        return 1;
      }
      iVar2 = (*DAT_000515d0)(pStack_444.pw_dir);
      if (iVar2 == 0) {
        return 0x1b;
      }
    }
    param_4 = (char *)FUN_000375e8("%s%s%s",iVar2,&DAT_0004860c,".netrc");
    (*DAT_000515c8)(iVar2);
    if (param_4 == (char *)0x0) {
      return 0xffffffff;
    }
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  __stream = fopen64(param_4,"r");
  if (bVar8) {
    (*DAT_000515c8)(param_4);
  }
  if (__stream == (FILE *)0x0) {
    return 1;
  }
  iVar2 = 0;
  bVar8 = false;
  bVar6 = false;
  cVar9 = '\0';
  uVar7 = 1;
  do {
    pcVar3 = fgets(acStack_428,0x100,__stream);
    if (pcVar3 == (char *)0x0) {
LAB_00037b64:
      fclose(__stream);
      return uVar7;
    }
    pcVar3 = strtok_r(acStack_428," \t\n",&pStack_444.pw_name);
    while (pcVar3 != (char *)0x0) {
      pcVar4 = (char *)*param_2;
      if ((((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) && ((char *)*param_3 != (char *)0x0)) &&
         (*(char *)*param_3 != '\0')) goto LAB_00037b64;
      if (cVar9 == '\x01') {
        iVar5 = FUN_0003cc64(param_1,pcVar3);
        if (iVar5 == 0) {
          cVar9 = '\0';
        }
        else {
          cVar9 = '\x02';
          uVar7 = 0;
        }
      }
      else if (cVar9 == '\0') {
        iVar5 = FUN_0003cc64("machine",pcVar3);
        cVar9 = iVar5 != 0;
      }
      else if (cVar9 == '\x02') {
        if (bVar6) {
          if (bVar1) {
            iVar2 = FUN_0003cc64(pcVar4,pcVar3);
          }
          else {
            (*DAT_000515c8)();
            iVar5 = (*DAT_000515d0)(pcVar3);
            *param_2 = iVar5;
            if (iVar5 == 0) {
LAB_00037a9c:
              uVar7 = 0xffffffff;
              goto LAB_00037b64;
            }
          }
          bVar6 = false;
        }
        else if (bVar8) {
          bVar8 = (bool)(bVar1 ^ 1);
          if (iVar2 != 0) {
            bVar8 = true;
          }
          if (bVar8) {
            (*DAT_000515c8)(*param_3);
            iVar5 = (*DAT_000515d0)(pcVar3);
            *param_3 = iVar5;
            if (iVar5 == 0) goto LAB_00037a9c;
          }
          else {
            iVar2 = 0;
          }
          bVar8 = false;
        }
        else {
          iVar5 = FUN_0003cc64("login",pcVar3);
          if (iVar5 == 0) {
            iVar5 = FUN_0003cc64("password",pcVar3);
            if (iVar5 == 0) {
              iVar5 = FUN_0003cc64("machine",pcVar3);
              if (iVar5 == 0) {
                cVar9 = '\x02';
              }
              else {
                iVar2 = 0;
                cVar9 = '\x01';
              }
            }
            else {
              bVar8 = true;
            }
          }
          else {
            bVar6 = true;
          }
        }
      }
      pcVar3 = strtok_r((char *)0x0," \t\n",&pStack_444.pw_name);
    }
  } while( true );
}



void FUN_00037bb0(int param_1)

{
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x866c) = 0;
  *(undefined4 *)(param_1 + 0x8670) = 0;
  *(undefined4 *)(param_1 + 0x8674) = 0;
  *(undefined4 *)(param_1 + 0x8678) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x867c) = 0;
  if (*(int *)(param_1 + 0x8694) != 0) {
    (*DAT_000515c8)();
  }
  *(undefined4 *)(param_1 + 0x8694) = 0;
  *(undefined4 *)(param_1 + 0x8680) = 0;
  *(undefined4 *)(param_1 + 0x8684) = 0;
  *(undefined4 *)(param_1 + 0x8690) = 0;
  *(undefined1 *)(param_1 + 0x869c) = 0;
  *(undefined1 *)(param_1 + 0x86d0) = 0;
  *(undefined4 *)(param_1 + 0x86cc) = 0;
  *(undefined4 *)(param_1 + 0x8700) = 0;
  return;
}



undefined4 FUN_00037c6c(int param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uStack_4;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  uVar3 = param_2 & 0xf00000;
  uStack_4 = param_4;
  if (uVar3 == 0x200000) {
    if (param_3 == (uint *)0x0) {
LAB_000380cc:
      return 0x2b;
    }
    switch(param_2 - 0x200002) {
    case 0:
      iVar1 = 0x866c;
      break;
    default:
      goto LAB_000380cc;
    case 9:
      iVar1 = 0x8680;
      break;
    case 10:
      iVar1 = 0x8684;
      break;
    case 0xb:
      uVar3 = *(uint *)(param_1 + 0x24c);
      goto LAB_000380bc;
    case 0xc:
      iVar1 = 0x8678;
      break;
    case 0x12:
      uVar3 = *(uint *)(param_1 + 0x144);
      goto LAB_000380bc;
    case 0x14:
      iVar1 = 0x8670;
      break;
    case 0x15:
      iVar1 = 0x868c;
      break;
    case 0x16:
      iVar1 = 0x8688;
      break;
    case 0x17:
      iVar1 = 0x8564;
      break;
    case 0x18:
      iVar1 = 0x8690;
      break;
    case 0x1b:
      uVar3 = FUN_00023384(param_1,0,param_2 - 0x200002,param_1,param_1,&uStack_4,param_3);
      goto LAB_000380ac;
    case 0x21:
      uVar3 = (uint)*(byte *)(param_1 + 0x867c);
      goto LAB_000380bc;
    case 0x23:
      iVar1 = 0x8638;
      break;
    case 0x24:
      iVar1 = 0x863c;
      break;
    case 0x25:
      iVar1 = 0x8640;
      break;
    case 0x26:
      iVar1 = 0x86cc;
      break;
    case 0x28:
      iVar1 = 0x8700;
    }
    uVar3 = *(uint *)(param_1 + iVar1);
LAB_000380bc:
    *param_3 = uVar3;
    return 0;
  }
  if (uVar3 < 0x200001) {
    if (uVar3 != 0x100000) {
      return 0x2b;
    }
    if (param_3 == (uint *)0x0) {
      return 0x2b;
    }
    if (param_2 == 0x10001e) {
      iVar1 = 0x8604;
    }
    else if (param_2 < 0x10001e) {
      if (param_2 != 0x100012) {
        if (param_2 == 0x100015) {
          puVar2 = *(undefined1 **)(param_1 + 0x28c);
        }
        else {
          if (param_2 != 0x100001) {
            return 0x2b;
          }
          puVar2 = *(undefined1 **)(param_1 + 1000);
          if (*(undefined1 **)(param_1 + 1000) == (undefined1 *)0x0) {
            puVar2 = &DAT_000467ca;
          }
        }
        goto LAB_00037d7c;
      }
      iVar1 = 0x8694;
    }
    else {
      if (param_2 == 0x100020) {
        puVar2 = (undefined1 *)(param_1 + 0x869c);
        goto LAB_00037d7c;
      }
      if (0x10001f < param_2) {
        if (param_2 == 0x100024) {
          puVar2 = *(undefined1 **)(param_1 + 0x380);
        }
        else {
          if (param_2 != 0x100029) {
            return 0x2b;
          }
          puVar2 = (undefined1 *)(param_1 + 0x86d0);
        }
        goto LAB_00037d7c;
      }
      iVar1 = 0x8698;
    }
    puVar2 = *(undefined1 **)(param_1 + iVar1);
LAB_00037d7c:
    *param_3 = (uint)puVar2;
    return 0;
  }
  if (uVar3 != 0x300000) {
    if (uVar3 != 0x400000) {
      return 0x2b;
    }
    if (param_3 == (uint *)0x0) {
      return 0x2b;
    }
    if (param_2 == 0x40001c) {
      uVar3 = FUN_0002c52c();
    }
    else {
      if (0x40001b < param_2) {
        if (param_2 != 0x400022) {
          if (param_2 != 0x40002b) {
            return 0x2b;
          }
          *param_3 = param_1 + 0x870c;
          *(undefined4 *)(param_1 + 0x870c) = 0;
          *(undefined4 *)(param_1 + 0x8710) = 0;
          return 0;
        }
        uVar3 = param_1 + 0x8704;
        goto LAB_000380bc;
      }
      if (param_2 != 0x40001b) {
        return 0x2b;
      }
      uVar3 = FUN_00028b64();
    }
LAB_000380ac:
    *param_3 = uVar3;
    return 0;
  }
  if (param_3 == (uint *)0x0) {
    return 0x2b;
  }
  switch(param_2) {
  case 0x300003:
    iVar1 = 0x448;
    break;
  case 0x300004:
    iVar1 = 0x460;
    break;
  case 0x300005:
    iVar1 = 0x468;
    break;
  case 0x300006:
    iVar1 = 0x478;
    break;
  case 0x300007:
    iVar1 = 0x428;
    goto LAB_00038008;
  case 0x300008:
    iVar1 = 0x420;
    goto LAB_00038008;
  case 0x300009:
    iVar1 = 0x450;
    goto LAB_00038008;
  case 0x30000a:
    iVar1 = 0x458;
    goto LAB_00038008;
  default:
    goto LAB_000380cc;
  case 0x30000f:
    if ((*(uint *)(param_1 + 0x440) & 0x40) == 0) {
LAB_00038014:
      uVar4 = 0xbff0000000000000;
      goto LAB_0003801c;
    }
    iVar1 = 0x410;
    goto LAB_00038008;
  case 0x300010:
    if ((*(uint *)(param_1 + 0x440) & 0x20) == 0) goto LAB_00038014;
    iVar1 = 0x418;
LAB_00038008:
    uVar4 = FUN_0003f564(*(undefined4 *)(param_1 + iVar1),((undefined4 *)(param_1 + iVar1))[1]);
LAB_0003801c:
    *(undefined8 *)param_3 = uVar4;
    return 0;
  case 0x300011:
    iVar1 = 0x480;
    break;
  case 0x300013:
    iVar1 = 0x488;
    break;
  case 0x300021:
    iVar1 = 0x470;
  }
  uVar3 = ((uint *)(iVar1 + param_1))[1];
  *param_3 = *(uint *)(iVar1 + param_1);
  param_3[1] = uVar3;
  return 0;
}



int FUN_0003815c(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + -1);
  bVar2 = true;
  iVar3 = 0;
  do {
    while( true ) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
      if (cVar1 == '\0') {
        return iVar3;
      }
      if (cVar1 == ' ') break;
      if (cVar1 == '?') {
        bVar2 = false;
      }
LAB_00038194:
      iVar3 = iVar3 + 1;
    }
    if (!bVar2) goto LAB_00038194;
    iVar3 = iVar3 + 3;
  } while( true );
}



void FUN_000381a0(char *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_2 + -1);
  bVar2 = true;
  do {
    while( true ) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        *param_1 = '\0';
        return;
      }
      if (cVar1 == ' ') break;
      if (cVar1 == '?') {
        bVar2 = false;
      }
      *param_1 = cVar1;
LAB_000381fc:
      param_1 = param_1 + 1;
    }
    if (!bVar2) {
      *param_1 = '+';
      goto LAB_000381fc;
    }
    *param_1 = '%';
    param_1[1] = '2';
    param_1[2] = '0';
    param_1 = param_1 + 3;
  } while( true );
}



undefined4 FUN_0003820c(int *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  size_t sVar3;
  void *__dest;
  size_t __n;
  char *pcVar4;
  int iVar5;
  size_t sVar6;
  undefined1 auStack_24 [12];
  
  iVar5 = *param_1;
  if (*(char *)(iVar5 + 0x10d) != '\0') {
    param_2 = param_2 - 0xc;
    *(int *)(iVar5 + 0x108) = *(int *)(iVar5 + 0x108) + 10;
  }
  uVar1 = (*(code *)param_1[0x99])(*(undefined4 *)(iVar5 + 0x108),1,param_2,param_1[0x9a]);
  if (uVar1 == 0x10000000) {
    FUN_00030648(iVar5,"operation aborted by callback");
    *param_3 = 0;
    uVar2 = 0x2a;
  }
  else {
    if (uVar1 == 0x10000001) {
      if ((*(uint *)(param_1[0x81] + 0x40) & 0x10) == 0) {
        *(uint *)(iVar5 + 0xf4) = *(uint *)(iVar5 + 0xf4) | 0x20;
        if (*(char *)(iVar5 + 0x10d) != '\0') {
          *(int *)(iVar5 + 0x108) = *(int *)(iVar5 + 0x108) + -10;
        }
        *param_3 = 0;
        return 0;
      }
      pcVar4 = "Read callback asked for PAUSE when not supported!";
    }
    else {
      if (uVar1 <= param_2) {
        if ((*(char *)(iVar5 + 0x10f) == '\0') && (*(char *)(iVar5 + 0x10d) != '\0')) {
          if (*(char *)(iVar5 + 0x2b3) == '\0') {
            pcVar4 = "\r\n";
            if (*(char *)(iVar5 + 0x216) != '\0') {
              pcVar4 = "\n";
            }
          }
          else {
            pcVar4 = "\n";
          }
          sVar3 = FUN_000365a4(auStack_24,0xb,&DAT_0004796f,uVar1,pcVar4);
          __dest = (void *)(*(int *)(iVar5 + 0x108) - sVar3);
          *(void **)(iVar5 + 0x108) = __dest;
          memcpy(__dest,auStack_24,sVar3);
          __n = strlen(pcVar4);
          sVar6 = uVar1 + sVar3;
          memcpy((void *)(*(int *)(iVar5 + 0x108) + sVar6),pcVar4,__n);
          if (sVar6 == sVar3) {
            *(undefined1 *)(iVar5 + 0xf8) = 1;
          }
          sVar3 = strlen(pcVar4);
          uVar1 = sVar6 + sVar3;
        }
        *param_3 = uVar1;
        return 0;
      }
      pcVar4 = "read function returned funny value";
      *param_3 = 0;
    }
    FUN_00030648(iVar5,pcVar4);
    uVar2 = 0x1a;
  }
  return uVar2;
}



undefined4 FUN_000383c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  code *extraout_r2;
  undefined4 uVar4;
  undefined4 extraout_r3;
  int iVar5;
  
  iVar5 = *param_1;
  *(undefined1 *)((int)param_1 + 0x1e7) = 0;
  *(uint *)(iVar5 + 0xf4) = *(uint *)(iVar5 + 0xf4) & 0xfffffffd;
  if ((*(int *)(iVar5 + 0x154) != 0) || (*(int *)(iVar5 + 0x240) == 3)) {
    return 0;
  }
  pcVar2 = *(code **)(iVar5 + 0x158);
  if (pcVar2 == (code *)0x0) {
    if (*(code **)(iVar5 + 0x194) == (code *)0x0) {
      pcVar2 = fread;
      uVar4 = 0;
      if ((*(code **)(iVar5 + 0x17c) == fread) &&
         (iVar1 = fseek(*(FILE **)(iVar5 + 300),0,0), pcVar2 = extraout_r2, uVar4 = extraout_r3,
         iVar1 != -1)) {
        return 0;
      }
      FUN_00030648(iVar5,"necessary data rewind wasn\'t possible",pcVar2,uVar4,param_1,param_2,
                   param_3);
      return 0x41;
    }
    iVar1 = (**(code **)(iVar5 + 0x194))(iVar5,1,*(undefined4 *)(iVar5 + 0x1c4));
    FUN_000305d4(iVar5,"the ioctl callback returned %d\n",iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar3 = "ioctl callback returned error %d";
  }
  else {
    iVar1 = (*pcVar2)(*(undefined4 *)(iVar5 + 0x1b0),pcVar2,0,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar3 = "seek callback returned error %d";
  }
  FUN_00030648(iVar5,pcVar3,iVar1);
  return 0x41;
}



undefined4 FUN_000384d8(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = *(int *)(param_1 + 0x23c), iVar2 != 0)) {
    if (*(int *)(param_1 + 0x238) == 2) {
      if (iVar2 <= param_2) {
        pcVar1 = "The requested document is not old enough\n";
        goto LAB_0003851c;
      }
    }
    else if (param_2 <= iVar2) {
      pcVar1 = "The requested document is not new enough\n";
LAB_0003851c:
      FUN_000305d4(param_1,pcVar1);
      *(undefined1 *)(param_1 + 0x867c) = 1;
      return 0;
    }
  }
  return 1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

int FUN_00038548(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int extraout_r1;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r2_04;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  bool bVar16;
  undefined4 local_38;
  undefined4 uStack_34;
  char local_2e;
  char local_2d;
  uint local_2c [2];
  
  iVar11 = *param_1;
  uVar13 = param_1[0x11a];
  param_1[0x11a] = 0;
  if ((*(uint *)(iVar11 + 0xf4) & 0x15) == 1) {
    iVar2 = param_1[0x84];
  }
  else {
    iVar2 = -1;
  }
  if ((*(uint *)(iVar11 + 0xf4) & 0x2a) == 2) {
    iVar5 = param_1[0x85];
  }
  else {
    iVar5 = -1;
  }
  if (uVar13 == 0) {
    uVar13 = FUN_000271a8(iVar2,0xffffffff,iVar5,0);
  }
  if (uVar13 == 4) {
    FUN_00030648(iVar11,"select/poll returned error");
    return 0x37;
  }
  uVar9 = 0;
  if (((*(uint *)(iVar11 + 0xf4) & 1) != 0) &&
     (((uVar13 & 1) != 0 || (uVar9 = 0, *(char *)((int)param_1 + 0x1ed) != '\0')))) {
    uVar9 = 0;
    uVar12 = 0;
    local_2e = '\0';
    *param_2 = '\0';
LAB_00038604:
    uVar14 = *(uint *)(iVar11 + 0x288);
    uVar3 = *(uint *)(iVar11 + 0x50);
    if (uVar14 == 0) {
      uVar14 = 0x4000;
    }
    if ((((*(int *)(iVar11 + 0x54) == -1 && uVar3 == 0xffffffff) ||
         (*(char *)(iVar11 + 0x98) != '\0')) ||
        (uVar6 = uVar3 - *(uint *)(iVar11 + 0x70),
        (int)(uint)(uVar6 < uVar14) <=
        (int)(*(int *)(iVar11 + 0x54) -
             (*(int *)(iVar11 + 0x74) + (uint)(uVar3 < *(uint *)(iVar11 + 0x70)))))) ||
       (uVar14 = uVar6, uVar6 != 0)) {
      iVar2 = FUN_000303f8(param_1,param_1[0x84],*(undefined4 *)(iVar11 + 0xe8),uVar14,local_2c);
      if (iVar2 == 0x51) goto LAB_00038d88;
      if (iVar2 == 0) goto LAB_0003868c;
LAB_00038dd0:
      if (iVar2 != 0) {
        return iVar2;
      }
      goto LAB_00038dd8;
    }
    local_2c[0] = 0;
LAB_0003868c:
    if (((*(int *)(iVar11 + 0x70) == 0 && *(int *)(iVar11 + 0x74) == 0) &&
        (*(int *)(iVar11 + 0x78) == 0 && *(int *)(iVar11 + 0x7c) == 0)) &&
       (FUN_0002a5b4(iVar11,7), *(int *)(iVar11 + 0xd4) != 0)) {
      FUN_000296f8(&local_38);
      *(undefined4 *)(iVar11 + 0xcc) = local_38;
      *(undefined4 *)(iVar11 + 0xd0) = uStack_34;
    }
    if (local_2c[0] == 0) {
      uVar14 = 1 - *(uint *)(iVar11 + 0xe4);
      if (1 < *(uint *)(iVar11 + 0xe4)) {
        uVar14 = 0;
      }
    }
    else {
      uVar14 = 0;
    }
    uVar14 = uVar14 & 1;
    if ((0 < (int)local_2c[0]) || (uVar14 != 0)) {
      uVar9 = *(uint *)(iVar11 + 0xe8);
      *(undefined1 *)(uVar9 + local_2c[0]) = 0;
      *(undefined4 *)(iVar11 + 0xac) = *(undefined4 *)(iVar11 + 0xe8);
      if (*(code **)(param_1[0x81] + 0x34) != (code *)0x0) {
        iVar2 = (**(code **)(param_1[0x81] + 0x34))(iVar11,param_1,local_2c,&local_2e);
        if (iVar2 != 0) {
LAB_00038dc0:
          uVar9 = 1;
          goto LAB_00038dd0;
        }
        uVar9 = extraout_r2;
        if (local_2e == '\0') goto LAB_0003872c;
        goto LAB_00038d50;
      }
LAB_0003872c:
      if (*(char *)(iVar11 + 0x98) != '\0') {
        local_2d = '\0';
        iVar2 = FUN_0002f268(iVar11,param_1,local_2c);
        if (iVar2 != 0) goto LAB_00038dc0;
        uVar9 = extraout_r2_00;
        if (((*(code **)(param_1[0x81] + 0x34) != (code *)0x0) &&
            (uVar9 = *(uint *)(iVar11 + 0x60), *(int *)(iVar11 + 100) < (int)(uint)(uVar9 == 0))) &&
           (0 < (int)local_2c[0])) {
          iVar2 = (**(code **)(param_1[0x81] + 0x34))(iVar11,param_1,local_2c,&local_2e);
          if (iVar2 != 0) goto LAB_00038dc0;
          uVar9 = extraout_r2_01;
          if (local_2e != '\0') goto LAB_00038d50;
        }
        if (local_2d != '\0') {
          if (0 < (int)local_2c[0]) {
            iVar2 = FUN_00024a14(*(undefined4 *)(*param_1 + 0x40));
            if (iVar2 == 0) {
              FUN_000305d4(iVar11,
                           "Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)\n"
                           ,local_2c[0],*(undefined4 *)(iVar11 + 0x8624));
            }
            else {
              FUN_000305d4(iVar11,"Rewinding stream by : %zd bytes on url %s (zero-length body)\n",
                           local_2c[0],*(undefined4 *)(iVar11 + 0x8624));
              param_1[0x95] = param_1[0x95] - local_2c[0];
              *(undefined1 *)((int)param_1 + 0x1ed) = 1;
            }
          }
          goto LAB_00038d50;
        }
      }
      if (((*(int *)(iVar11 + 0xac) != 0) && (*(char *)(iVar11 + 0x98) == '\0')) &&
         ((0 < (int)local_2c[0] || (uVar14 != 0)))) {
        if (((*(int *)(iVar11 + 0xe4) == 0) && (uVar14 == 0)) &&
           ((*(uint *)(param_1[0x81] + 0x3c) & 0x40003) != 0)) {
          if (*(int *)(iVar11 + 0x100) != 0) {
            uVar9 = 1;
            if ((char)param_1[0x76] != '\0') {
              *(uint *)(iVar11 + 0xf4) = *(uint *)(iVar11 + 0xf4) & 0xfffffffe;
              *param_2 = '\x01';
              goto LAB_00038dd8;
            }
            *(undefined1 *)(iVar11 + 0xf9) = 1;
            FUN_000305d4(iVar11,"Ignoring the response-body\n");
          }
          if ((((*(int *)(iVar11 + 0x8630) != 0 || *(int *)(iVar11 + 0x8634) != 0) &&
               (*(char *)(iVar11 + 0xbc) == '\0')) && (*(int *)(iVar11 + 0x240) == 1)) &&
             (*(char *)(iVar11 + 0xf9) == '\0')) {
            FUN_00030648(iVar11,"HTTP server doesn\'t seem to support byte ranges. Cannot resume.");
            return 0x21;
          }
          if (((*(int *)(iVar11 + 0x238) != 0) && (*(int *)(iVar11 + 0x862c) == 0)) &&
             (iVar2 = FUN_000384d8(iVar11,*(undefined4 *)(iVar11 + 0xe0)), iVar2 == 0)) {
            uVar9 = 1;
            *param_2 = '\x01';
            *(undefined4 *)(iVar11 + 0x866c) = 0x130;
            FUN_000305d4(iVar11,"Simulate a HTTP 304 response!\n");
            *(undefined1 *)(param_1 + 0x76) = 1;
            goto LAB_00038dd8;
          }
        }
        *(int *)(iVar11 + 0xe4) = *(int *)(iVar11 + 0xe4) + 1;
        if ((*(char *)(iVar11 + 0x2c8) != '\0') &&
           ((*(int *)(iVar11 + 0x9c) == 0 ||
            (FUN_00030518(iVar11,3,*(undefined4 *)(iVar11 + 0x52c),*(undefined4 *)(iVar11 + 0xa8),
                          param_1), *(int *)(iVar11 + 0x9c) == 1)))) {
          FUN_00030518(iVar11,3,*(undefined4 *)(iVar11 + 0xac),local_2c[0],param_1);
        }
        if (*(char *)(iVar11 + 0x10c) != '\0') {
          iVar2 = FUN_00039f30(param_1,*(undefined4 *)(iVar11 + 0xac),local_2c[0],local_2c);
          if (0 < iVar2) {
            if (iVar2 == 4) {
              FUN_00030648(iVar11,"Failed writing data");
              return 0x17;
            }
            uVar8 = FUN_0003a330();
            FUN_00030648(iVar11,"%s in chunked-encoding",uVar8);
            return 0x38;
          }
          if (iVar2 == -1) {
            iVar2 = param_1[0xc];
            *(uint *)(iVar11 + 0xf4) = *(uint *)(iVar11 + 0xf4) & 0xfffffffe;
            if (iVar2 != 0) {
              FUN_000305d4(*param_1,"Leftovers after chunking: %zu bytes\n",iVar2);
              iVar5 = FUN_00024a14(*(undefined4 *)(*param_1 + 0x40));
              if (iVar5 != 0) {
                FUN_000305d4(*param_1,"Rewinding %zu bytes\n",iVar2);
                param_1[0x95] = param_1[0x95] - iVar2;
                *(undefined1 *)((int)param_1 + 0x1ed) = 1;
              }
            }
          }
        }
        if ((*(int *)(iVar11 + 0x9c) != 0) && (*(char *)(iVar11 + 0xf9) == '\0')) {
          uVar9 = *(uint *)(iVar11 + 0x70);
          *(uint *)(iVar11 + 0x70) = uVar9 + *(uint *)(iVar11 + 0xa8);
          *(uint *)(iVar11 + 0x74) =
               *(int *)(iVar11 + 0x74) + (uint)CARRY4(uVar9,*(uint *)(iVar11 + 0xa8));
        }
        uVar9 = *(uint *)(iVar11 + 0x60);
        iVar2 = *(int *)(iVar11 + 100);
        if (iVar2 != -1 || uVar9 != 0xffffffff) {
          uVar3 = *(uint *)(iVar11 + 0x70);
          iVar5 = *(int *)(iVar11 + 0x74) + ((int)local_2c[0] >> 0x1f) +
                  (uint)CARRY4(uVar3,local_2c[0]);
          bVar16 = uVar3 + local_2c[0] < uVar9;
          if ((int)(iVar5 - (iVar2 + (uint)bVar16)) < 0 ==
              (SBORROW4(iVar5,iVar2) != SBORROW4(iVar5 - iVar2,(uint)bVar16))) {
            uVar12 = (local_2c[0] + uVar3) - uVar9;
            if ((uVar12 != 0) && (*(char *)(iVar11 + 0xf9) == '\0')) {
              iVar2 = FUN_00024a14(*(undefined4 *)(*param_1 + 0x40));
              uVar8 = *(undefined4 *)(iVar11 + 0x74);
              if (iVar2 == 0) {
                FUN_000305d4(iVar11,
                             "Excess found in a non pipelined read: excess = %zu, size = %lld, maxdownload = %lld, bytecount = %lld\n"
                             ,uVar12,uVar8,*(undefined4 *)(iVar11 + 0x50),
                             *(undefined4 *)(iVar11 + 0x54),*(undefined4 *)(iVar11 + 0x60),
                             *(undefined4 *)(iVar11 + 100),*(undefined4 *)(iVar11 + 0x70),uVar8);
              }
              else {
                FUN_000305d4(iVar11,
                             "Rewinding stream by : %zu bytes on url %s (size = %lld, maxdownload = %lld, bytecount = %lld, nread = %zd)\n"
                             ,uVar12,*(undefined4 *)(iVar11 + 0x8624),*(undefined4 *)(iVar11 + 0x50)
                             ,*(undefined4 *)(iVar11 + 0x54),*(undefined4 *)(iVar11 + 0x60),
                             *(undefined4 *)(iVar11 + 100),*(undefined4 *)(iVar11 + 0x70),uVar8,
                             local_2c[0]);
                param_1[0x95] = param_1[0x95] - uVar12;
                *(undefined1 *)((int)param_1 + 0x1ed) = 1;
              }
            }
            local_2c[0] = *(int *)(iVar11 + 0x60) - *(int *)(iVar11 + 0x70);
            if ((int)local_2c[0] < 0) {
              local_2c[0] = 0;
            }
            *(uint *)(iVar11 + 0xf4) = *(uint *)(iVar11 + 0xf4) & 0xfffffffe;
          }
        }
        uVar9 = *(uint *)(iVar11 + 0x70);
        *(uint *)(iVar11 + 0x70) = uVar9 + local_2c[0];
        *(uint *)(iVar11 + 0x74) =
             *(int *)(iVar11 + 0x74) + ((int)local_2c[0] >> 0x1f) + (uint)CARRY4(uVar9,local_2c[0]);
        FUN_0002a710(iVar11);
        uVar9 = extraout_r2_02;
        if (*(char *)(iVar11 + 0x10c) == '\0') {
          if ((local_2c[0] == 0) && (*(int *)(iVar11 + 0x9c) == 0)) {
            if (uVar14 == 0) goto LAB_00038ce4;
          }
          else if ((*(int *)(iVar11 + 0x9c) != 0) && (*(char *)(iVar11 + 0xf9) == '\0')) {
            uVar9 = *(uint *)(iVar11 + 0x60);
            if ((*(int *)(iVar11 + 100) == -1 && uVar9 == 0xffffffff) ||
               ((int)(uint)(uVar9 < *(uint *)(iVar11 + 0xa8)) <= *(int *)(iVar11 + 100))) {
              uVar8 = *(undefined4 *)(iVar11 + 0x52c);
              uVar9 = *(uint *)(iVar11 + 0xa8);
            }
            else {
              uVar8 = *(undefined4 *)(iVar11 + 0x52c);
            }
            iVar2 = FUN_00030880(param_1,1,uVar8,uVar9);
            uVar9 = extraout_r2_03;
            if (iVar2 != 0) goto LAB_00038dc0;
          }
          if ((*(uint *)(iVar11 + 0x9c) < 2) && (*(char *)(iVar11 + 0xf9) == '\0')) {
            iVar2 = FUN_00030880(param_1,1,*(undefined4 *)(iVar11 + 0xac),local_2c[0]);
            uVar9 = extraout_r2_04;
          }
          else {
            iVar2 = 0;
          }
          *(undefined4 *)(iVar11 + 0x9c) = 0;
          if (iVar2 != 0) goto LAB_00038dc0;
        }
      }
LAB_00038ce4:
      pcVar15 = *(code **)(param_1[0x81] + 0x34);
      if (((pcVar15 != (code *)0x0) && (uVar12 != 0)) &&
         (uVar9 = (uint)*(byte *)((int)param_1 + 0x1ed), uVar9 == 0)) {
        *(uint *)(iVar11 + 0xac) = *(int *)(iVar11 + 0xac) + local_2c[0];
        local_2c[0] = uVar12;
        iVar2 = (*pcVar15)(iVar11,param_1,local_2c,&local_2e);
        if (iVar2 != 0) goto LAB_00038dc0;
        if (local_2e != '\0') {
          uVar9 = *(uint *)(iVar11 + 0xf4) | 1;
          goto LAB_00038d4c;
        }
        goto LAB_00038d50;
      }
      if (uVar14 != 0) {
        uVar9 = *(uint *)(iVar11 + 0xf4);
      }
      uVar3 = *(uint *)(param_1[0x81] + 0x3c);
      if (uVar14 != 0) {
        *(uint *)(iVar11 + 0xf4) = uVar9 & 0xfffffffe;
      }
      if (((uVar3 & 0x30) == 0) && (iVar2 = thunk_FUN_00029634(param_1), iVar2 == 0))
      goto LAB_00038d50;
      uVar9 = 1;
      goto LAB_00038604;
    }
    uVar9 = *(uint *)(iVar11 + 0xf4) & 0xfffffffe;
LAB_00038d4c:
    *(uint *)(iVar11 + 0xf4) = uVar9;
LAB_00038d50:
    uVar9 = 1;
LAB_00038d88:
    if (((*(uint *)(iVar11 + 0xf4) & 3) == 2) && ((char)param_1[0x76] != '\0')) {
      FUN_000305d4(iVar11,"we are done reading and this is set to close, stop send\n");
      *(uint *)(iVar11 + 0xf4) = *(uint *)(iVar11 + 0xf4) & 0xfffffffd;
    }
LAB_00038dd8:
    if (*param_2 != '\0') {
      return 0;
    }
  }
  uVar12 = uVar9;
  if (((*(uint *)(iVar11 + 0xf4) & 2) != 0) && ((uVar13 & 2) != 0)) {
    if ((*(int *)(iVar11 + 0x70) == 0 && *(int *)(iVar11 + 0x74) == 0) &&
       (*(int *)(iVar11 + 0x78) == 0 && *(int *)(iVar11 + 0x7c) == 0)) {
      FUN_0002a5b4(iVar11,7);
    }
    uVar12 = uVar9 | 2;
    if (*(int *)(iVar11 + 0x104) == 0) {
      *(undefined4 *)(iVar11 + 0x108) = *(undefined4 *)(iVar11 + 0xec);
      if (*(char *)(iVar11 + 0xf8) == '\0') {
        if ((*(int *)(iVar11 + 0xd4) != 2) || (*(int *)(*(int *)(iVar11 + 0x110) + 0x58) != 2)) {
          if ((*(uint *)(param_1[0x81] + 0x3c) & 0x40003) == 0) {
            bVar16 = false;
          }
          else {
            bVar16 = *(int *)(*(int *)(iVar11 + 0x110) + 0x58) == 1;
          }
          iVar2 = FUN_0003820c(param_1,0x4000,local_2c);
          uVar13 = local_2c[0];
          if (iVar2 != 0) goto LAB_000390f4;
          if (local_2c[0] == 0) goto LAB_00038e40;
          if (0 < (int)local_2c[0]) {
            *(uint *)(iVar11 + 0x104) = local_2c[0];
            if ((!bVar16) &&
               ((*(char *)(iVar11 + 0x2b3) != '\0' || (*(char *)(iVar11 + 0x216) != '\0')))) {
              if (*(int *)(iVar11 + 0x855c) == 0) {
                uVar8 = (*DAT_000515c4)(0x8000);
                *(undefined4 *)(iVar11 + 0x855c) = uVar8;
              }
              if (*(int *)(iVar11 + 0x855c) == 0) {
                FUN_00030648(iVar11,"Failed to alloc scratch buffer!");
                return 0x1b;
              }
              uVar14 = 0;
              uVar9 = 0;
              do {
                cVar1 = *(char *)(*(int *)(iVar11 + 0x108) + uVar9);
                if (cVar1 == '\n') {
                  uVar3 = uVar14 + 1;
                  *(undefined1 *)(*(int *)(iVar11 + 0x855c) + uVar14) = 0xd;
                  *(undefined1 *)(*(int *)(iVar11 + 0x855c) + uVar3) = 10;
                  if (*(char *)(iVar11 + 0x216) == '\0') {
                    uVar14 = *(uint *)(iVar11 + 0x8648);
                    *(uint *)(iVar11 + 0x8648) = uVar14 + 1;
                    *(uint *)(iVar11 + 0x864c) =
                         *(int *)(iVar11 + 0x864c) + (uint)(0xfffffffe < uVar14);
                  }
                }
                else {
                  *(char *)(*(int *)(iVar11 + 0x855c) + uVar14) = cVar1;
                  uVar3 = uVar14;
                }
                uVar9 = uVar9 + 1;
                uVar14 = uVar3 + 1;
              } while (uVar9 != uVar13);
              if (uVar14 != uVar9) {
                *(uint *)(iVar11 + 0x104) = uVar14;
                *(undefined4 *)(iVar11 + 0x108) = *(undefined4 *)(iVar11 + 0x855c);
              }
            }
            goto LAB_00039014;
          }
          goto LAB_00038f04;
        }
        *(undefined4 *)(iVar11 + 0xd4) = 1;
        *(uint *)(iVar11 + 0xf4) = *(uint *)(iVar11 + 0xf4) & 0xfffffffd;
        FUN_000296f8(&local_38);
        *(undefined4 *)(iVar11 + 0xcc) = local_38;
        *(undefined4 *)(iVar11 + 0xd0) = uStack_34;
        FUN_00025210(iVar11,*(undefined4 *)(iVar11 + 0x3e0));
        uVar12 = uVar9;
      }
      else {
LAB_00038e40:
        if ((*(uint *)(iVar11 + 0xf4) & 0x20) == 0) {
LAB_00038f04:
          *(uint *)(iVar11 + 0xf4) = *(uint *)(iVar11 + 0xf4) & 0xfffffffd;
          if (*(char *)((int)param_1 + 0x1e7) != '\0') {
            iVar2 = FUN_000383c0(param_1);
            goto LAB_000390f4;
          }
        }
      }
    }
    else {
LAB_00039014:
      iVar2 = FUN_00030348(param_1,param_1[0x85],*(undefined4 *)(iVar11 + 0x108),
                           *(undefined4 *)(iVar11 + 0x104),local_2c);
      if (iVar2 == 0) {
        if (*(char *)(iVar11 + 0x2c8) != '\0') {
          FUN_00030518(iVar11,4,*(undefined4 *)(iVar11 + 0x108),local_2c[0],param_1);
        }
        iVar5 = *(uint *)(iVar11 + 0x78) + local_2c[0];
        iVar7 = *(int *)(iVar11 + 0x7c) + ((int)local_2c[0] >> 0x1f) +
                (uint)CARRY4(*(uint *)(iVar11 + 0x78),local_2c[0]);
        *(int *)(iVar11 + 0x78) = iVar5;
        *(int *)(iVar11 + 0x7c) = iVar7;
        iVar2 = *(int *)(iVar11 + 0x864c);
        if (iVar7 == iVar2 && iVar5 == *(int *)(iVar11 + 0x8648)) {
          *(undefined1 *)(iVar11 + 0xf8) = 1;
          FUN_000305d4(iVar11,"We are completely uploaded and fine\n");
          iVar2 = extraout_r1;
        }
        if (*(uint *)(iVar11 + 0x104) == local_2c[0]) {
          *(undefined4 *)(iVar11 + 0x108) = *(undefined4 *)(iVar11 + 0xec);
          *(undefined4 *)(iVar11 + 0x104) = 0;
          if (*(char *)(iVar11 + 0xf8) != '\0') {
            *(uint *)(iVar11 + 0xf4) = *(uint *)(iVar11 + 0xf4) & 0xfffffffd;
          }
        }
        else {
          *(uint *)(iVar11 + 0x104) = *(uint *)(iVar11 + 0x104) - local_2c[0];
          *(uint *)(iVar11 + 0x108) = *(int *)(iVar11 + 0x108) + local_2c[0];
        }
        FUN_0002a71c(iVar11,iVar2,*(undefined4 *)(iVar11 + 0x78),*(undefined4 *)(iVar11 + 0x7c));
      }
      else {
LAB_000390f4:
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    }
  }
  FUN_000296f8(&local_38);
  puVar10 = (undefined4 *)(iVar11 + 0x90);
  *puVar10 = local_38;
  *(undefined4 *)(iVar11 + 0x94) = uStack_34;
  if (uVar12 == 0) {
    if ((*(int *)(iVar11 + 0xd4) == 1) &&
       (iVar2 = FUN_00029758(*puVar10,*(undefined4 *)(iVar11 + 0x94),*(undefined4 *)(iVar11 + 0xcc),
                             *(undefined4 *)(iVar11 + 0xd0)), *(int *)(iVar11 + 0x3e0) <= iVar2)) {
      *(undefined4 *)(iVar11 + 0xd4) = 0;
      *(uint *)(iVar11 + 0xf4) = *(uint *)(iVar11 + 0xf4) | 2;
      FUN_000305d4(iVar11,"Done waiting for 100-continue\n");
    }
  }
  else {
    puVar4 = *(undefined4 **)(iVar11 + 0x58);
    if (puVar4 != (undefined4 *)0x0) {
      uVar8 = *(undefined4 *)(iVar11 + 0x74);
      *puVar4 = *(undefined4 *)(iVar11 + 0x70);
      puVar4[1] = uVar8;
    }
    puVar4 = *(undefined4 **)(iVar11 + 0x68);
    if (puVar4 != (undefined4 *)0x0) {
      uVar8 = *(undefined4 *)(iVar11 + 0x7c);
      *puVar4 = *(undefined4 *)(iVar11 + 0x78);
      puVar4[1] = uVar8;
    }
  }
  iVar2 = FUN_0002a790(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_0003603c(iVar11,*puVar10,*(undefined4 *)(iVar11 + 0x94));
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(int *)(iVar11 + 0xf4) == 0) {
      if (*(char *)(iVar11 + 0x2bf) == '\0') {
        uVar13 = *(uint *)(iVar11 + 0x50);
        iVar2 = *(int *)(iVar11 + 0x54);
        if (iVar2 != -1 || uVar13 != 0xffffffff) {
          uVar9 = *(uint *)(iVar11 + 0x70);
          iVar5 = *(int *)(iVar11 + 0x74);
          if (((iVar5 != iVar2 || uVar9 != uVar13) &&
              (iVar5 != *(int *)(iVar11 + 0x861c) + iVar2 +
                        (uint)CARRY4(*(uint *)(iVar11 + 0x8618),uVar13) ||
               uVar9 != *(uint *)(iVar11 + 0x8618) + uVar13)) && (*(int *)(iVar11 + 0x100) == 0)) {
            FUN_00030648(iVar11,"transfer closed with %lld bytes remaining to read",uVar13 - uVar9,
                         iVar2 - (iVar5 + (uint)(uVar13 < uVar9)));
            return 0x12;
          }
        }
        if ((*(char *)(iVar11 + 0x10c) != '\0') && (param_1[8] != 4)) {
          FUN_00030648(iVar11,"transfer closed with outstanding read data remaining");
          return 0x12;
        }
      }
      iVar2 = FUN_0002a790(param_1);
      if (iVar2 != 0) goto LAB_000391a0;
    }
    else {
      iVar2 = FUN_000230f4(iVar11,iVar11 + 0x90);
      if (iVar2 < 0) {
        if (*(int *)(iVar11 + 0x54) == -1 && *(int *)(iVar11 + 0x50) == -1) {
          uVar8 = FUN_00029758(*puVar10,*(undefined4 *)(iVar11 + 0x94),
                               *(undefined4 *)(iVar11 + 0x498),*(undefined4 *)(iVar11 + 0x49c));
          FUN_00030648(iVar11,"Operation timed out after %ld milliseconds with %lld bytes received",
                       uVar8);
        }
        else {
          uVar8 = FUN_00029758(*puVar10,*(undefined4 *)(iVar11 + 0x94),
                               *(undefined4 *)(iVar11 + 0x498),*(undefined4 *)(iVar11 + 0x49c));
          FUN_00030648(iVar11,
                       "Operation timed out after %ld milliseconds with %lld out of %lld bytes received"
                       ,uVar8);
        }
        return 0x1c;
      }
    }
    iVar2 = 0;
    *param_2 = (*(uint *)(iVar11 + 0xf4) & 0x33) == 0;
  }
  else {
LAB_000391a0:
    iVar2 = 0x2a;
  }
  return iVar2;
}



uint FUN_00039440(uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0;
  }
  uVar1 = param_1 >> 10 | param_2 << 0x16;
  iVar2 = param_2 + (param_2 >> 10) + (uint)CARRY4(param_1,uVar1);
  bVar3 = param_1 + uVar1 < param_3;
  if ((int)(iVar2 - (param_4 + (uint)bVar3)) < 0 ==
      (SBORROW4(iVar2,param_4) != SBORROW4(iVar2 - param_4,(uint)bVar3))) {
    iVar2 = param_2 - ((param_2 >> 10) + (uint)(param_1 < uVar1));
    bVar3 = param_3 < param_1 - uVar1;
    if ((int)(param_4 - (iVar2 + (uint)bVar3)) < 0 !=
        (SBORROW4(param_4,iVar2) != SBORROW4(param_4 - iVar2,(uint)bVar3))) {
      uVar1 = param_1 >> 6 | param_2 << 0x1a;
      bVar3 = CARRY4(param_1,uVar1);
      param_1 = param_1 + uVar1;
      param_2 = param_2 + (param_2 >> 6) + (uint)bVar3;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = param_1 >> 6 | param_2 << 0x1a;
    bVar3 = param_1 < uVar1;
    param_1 = param_1 - uVar1;
    param_2 = param_2 - ((param_2 >> 6) + (uint)bVar3);
    uVar1 = 1;
  }
  lVar4 = FUN_0003fbbc(param_5 * 8000,param_5 * 8000 >> 0x1f,param_1,param_2,param_4);
  if (((int)(uint)((uint)lVar4 < uVar1) <= (int)((ulonglong)lVar4 >> 0x20)) &&
     (uVar1 = (uint)lVar4, lVar4 == 0x80000000)) {
    uVar1 = 0x7fffffff;
  }
  return uVar1;
}



int FUN_00039510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 1000) == 0) {
    FUN_00030648(param_1,"No URL set!");
    return 3;
  }
  iVar1 = FUN_00028b6c(param_1,*(undefined4 *)(param_1 + 0x270),param_3,*(int *)(param_1 + 1000),
                       param_4);
  if (iVar1 != 0) {
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x8540) = 0;
  *(undefined1 *)(param_1 + 0x8560) = 0;
  *(undefined4 *)(param_1 + 0x860c) = 0;
  *(undefined1 *)(param_1 + 0x8644) = 0;
  *(undefined1 *)(param_1 + 0x85d8) = 0;
  *(undefined4 *)(param_1 + 0x85b8) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x85c8) = *(undefined4 *)(param_1 + 0x140);
  if (*(int *)(param_1 + 0x8698) != 0) {
    (*DAT_000515c8)();
  }
  *(undefined4 *)(param_1 + 0x8698) = 0;
  if (*(int *)(param_1 + 0x3f8) != 0) {
    FUN_0002c060(param_1);
  }
  if ((*(int *)(param_1 + 0x3fc) != 0) && (iVar1 = FUN_0002a084(param_1), iVar1 != 0)) {
    return iVar1;
  }
  *(undefined1 *)(param_1 + 0x856c) = 1;
  FUN_00037bb0(param_1);
  FUN_0002a6d8(param_1);
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_00025210(param_1);
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_00025210(param_1);
  }
  *(uint *)(param_1 + 0x85bc) = *(uint *)(param_1 + 0x85b8) & *(uint *)(param_1 + 0x85bc);
  *(uint *)(param_1 + 0x85cc) = *(uint *)(param_1 + 0x85c8) & *(uint *)(param_1 + 0x85cc);
  return 0;
}



undefined4 FUN_00039680(void)

{
  return 0;
}



undefined4 FUN_00039688(int param_1,char *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  size_t __n;
  undefined *puVar7;
  undefined1 extraout_r3;
  undefined1 uVar8;
  char *pcVar9;
  undefined1 uStack_39;
  undefined1 auStack_38 [20];
  
  if (param_3 == 3) {
    if ((*(int *)(param_1 + 0x148) != -1) &&
       (*(int *)(param_1 + 0x148) <= *(int *)(param_1 + 0x144))) {
      FUN_00030648(param_1,"Maximum (%ld) redirects followed");
      return 0x2f;
    }
    *(undefined1 *)(param_1 + 0x8540) = 1;
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
    if (*(char *)(param_1 + 0x2be) != '\0') {
      if (*(char *)(param_1 + 0x3f4) != '\0') {
        if (*(int *)(param_1 + 0x3f0) != 0) {
          (*DAT_000515c8)();
          *(undefined4 *)(param_1 + 0x3f0) = 0;
        }
        *(undefined1 *)(param_1 + 0x3f4) = 0;
      }
      iVar2 = (*DAT_000515d0)(*(undefined4 *)(param_1 + 1000));
      uVar8 = extraout_r3;
      if (iVar2 != 0) {
        uVar8 = 1;
      }
      *(int *)(param_1 + 0x3f0) = iVar2;
      if (iVar2 == 0) {
        return 0x1b;
      }
      *(undefined1 *)(param_1 + 0x3f4) = uVar8;
    }
  }
  iVar2 = sscanf(param_2,"%15[^?&/:]://%c",auStack_38,&uStack_39);
  if (iVar2 == 2) {
    pcVar3 = strchr(param_2,0x20);
    pcVar4 = param_2;
    if (pcVar3 != (char *)0x0) {
      iVar2 = FUN_0003815c(param_2);
      pcVar4 = (char *)(*DAT_000515c4)(iVar2 + 1);
      if (pcVar4 == (char *)0x0) {
        return 0x1b;
      }
      FUN_000381a0(pcVar4,param_2);
      (*DAT_000515c8)(param_2);
    }
    if (param_3 == 1) goto LAB_000399fc;
    *(undefined1 *)(param_1 + 0x856c) = 0;
  }
  else {
    pcVar3 = (char *)(*DAT_000515d0)(*(undefined4 *)(param_1 + 1000));
    if (pcVar3 == (char *)0x0) {
      return 0x1b;
    }
    pcVar4 = strstr(pcVar3,"//");
    pcVar5 = pcVar3;
    if (pcVar4 != (char *)0x0) {
      pcVar5 = pcVar4 + 2;
    }
    pcVar9 = param_2;
    if (*param_2 == '/') {
      if (param_2[1] == '/') {
        *pcVar5 = '\0';
        pcVar9 = param_2 + 2;
      }
      else {
        pcVar4 = strchr(pcVar5,0x2f);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = strchr(pcVar5,0x3f);
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = '\0';
          }
        }
        else {
          pcVar6 = strchr(pcVar5,0x3f);
          if (pcVar6 != (char *)0x0 && pcVar6 < pcVar4) {
            pcVar4 = pcVar6;
          }
          *pcVar4 = '\0';
        }
      }
    }
    else {
      pcVar4 = strchr(pcVar5,0x3f);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      if ((*param_2 != '?') && (pcVar4 = strrchr(pcVar5,0x2f), pcVar4 != (char *)0x0)) {
        *pcVar4 = '\0';
      }
      pcVar5 = strchr(pcVar5,0x2f);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = pcVar5 + 1;
      }
      if ((*param_2 == '.') && (param_2[1] == '/')) {
        pcVar9 = param_2 + 2;
      }
      iVar2 = 0;
      for (; ((*pcVar9 == '.' && (pcVar9[1] == '.')) && (pcVar9[2] == '/')); pcVar9 = pcVar9 + 3) {
        iVar2 = iVar2 + 1;
      }
      if (pcVar5 != (char *)0x0) {
        while (iVar2 != 0) {
          pcVar4 = strrchr(pcVar5,0x2f);
          iVar2 = iVar2 + -1;
          if (pcVar4 == (char *)0x0) {
            *pcVar5 = '\0';
            break;
          }
          *pcVar4 = '\0';
        }
      }
    }
    iVar2 = FUN_0003815c(pcVar9);
    __n = strlen(pcVar3);
    pcVar4 = (char *)(*DAT_000515c4)(iVar2 + __n + 2);
    if (pcVar4 == (char *)0x0) {
      (*DAT_000515c8)(pcVar3);
      return 0x1b;
    }
    memcpy(pcVar4,pcVar3,__n);
    if (((*pcVar9 != '/') && ((pcVar5 == (char *)0x0 || (*pcVar5 != '\0')))) && (*pcVar9 != '?')) {
      pcVar4[__n] = '/';
      __n = __n + 1;
    }
    FUN_000381a0(pcVar4 + __n,pcVar9);
    (*DAT_000515c8)(pcVar3);
    (*DAT_000515c8)(param_2);
    if (param_3 == 1) {
LAB_000399fc:
      *(char **)(param_1 + 0x8698) = pcVar4;
      return 0;
    }
  }
  if ((*(char *)(param_1 + 0x3ec) != '\0') && (*(int *)(param_1 + 1000) != 0)) {
    (*DAT_000515c8)();
  }
  *(char **)(param_1 + 1000) = pcVar4;
  *(undefined1 *)(param_1 + 0x3ec) = 1;
  FUN_000305d4(param_1,"Issue another request to this URL: \'%s\'\n",pcVar4);
  iVar2 = *(int *)(param_1 + 0x866c);
  if (iVar2 == 0x12e) {
    if (1 < *(int *)(param_1 + 0x240) - 2U) goto LAB_00039b10;
    uVar1 = *(uint *)(param_1 + 0x14c) & 2;
  }
  else {
    if (iVar2 == 0x12f) {
      if ((*(int *)(param_1 + 0x240) != 1) && ((*(uint *)(param_1 + 0x14c) & 4) == 0)) {
        *(undefined4 *)(param_1 + 0x240) = 1;
        puVar7 = &DAT_00046be4;
        if (*(char *)(param_1 + 0x2bf) != '\0') {
          puVar7 = &DAT_00046bdf;
        }
        FUN_000305d4(param_1,"Disables POST, goes with %s\n",puVar7);
      }
      goto LAB_00039b10;
    }
    if ((iVar2 != 0x12d) || (1 < *(int *)(param_1 + 0x240) - 2U)) goto LAB_00039b10;
    uVar1 = *(uint *)(param_1 + 0x14c) & 1;
  }
  if (uVar1 == 0) {
    FUN_000305d4(param_1,"Switch from POST to GET\n");
    *(undefined4 *)(param_1 + 0x240) = 1;
  }
LAB_00039b10:
  FUN_0002a5b4(param_1,10);
  FUN_0002a560(param_1);
  return 0;
}



int FUN_00039b78(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 *local_14;
  
  local_14 = (undefined4 *)*param_1;
  uVar2 = *local_14;
  uStack_18 = param_1;
  FUN_000305d4(uVar2,"Re-used connection seems dead, get a new one\n");
  *(undefined1 *)(local_14 + 0x76) = 1;
  iVar1 = FUN_00035b80(&local_14,0,0);
  *param_1 = 0;
  if (iVar1 == 0 || iVar1 == 0x37) {
    uStack_18 = (undefined4 *)CONCAT13(1,(undefined3)uStack_18);
    iVar1 = FUN_00033d94(uVar2,param_1,(int)&uStack_18 + 2,(int)&uStack_18 + 3);
    if ((iVar1 == 0) && (uStack_18._2_1_ != '\0')) {
      iVar1 = 6;
    }
  }
  return iVar1;
}



undefined4 FUN_00039c00(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *param_2 = 0;
  if ((*(char *)(iVar4 + 0x2c1) == '\0') || ((*(uint *)(param_1[0x81] + 0x3c) & 0x40003) != 0)) {
    if (*(char *)(iVar4 + 0x8644) == '\0') {
      uVar3 = *(uint *)(iVar4 + 0x80);
      if (*(uint *)(iVar4 + 0x70) + uVar3 != 0 ||
          *(int *)(iVar4 + 0x74) + ((int)uVar3 >> 0x1f) +
          (uint)CARRY4(*(uint *)(iVar4 + 0x70),uVar3) != 0) {
        return 0;
      }
      if (*(char *)((int)param_1 + 0x1d9) == '\0') {
        return 0;
      }
      if (*(char *)(iVar4 + 0x2bf) != '\0') {
        return 0;
      }
      if (*(int *)(iVar4 + 0x3ac) == 0xb) {
        return 0;
      }
    }
    FUN_000305d4(*param_1,"Connection died, retrying a fresh connect\n");
    iVar1 = (*DAT_000515d0)(*(undefined4 *)(*param_1 + 1000));
    *param_2 = iVar1;
    if (iVar1 == 0) {
      return 0x1b;
    }
    *(undefined1 *)(param_1 + 0x76) = 1;
    *(undefined1 *)(param_1 + 0x79) = 1;
    if (((*(uint *)(param_1[0x81] + 0x3c) & 3) != 0) &&
       (*(int *)(*(int *)(iVar4 + 0x110) + 0x28) != 0 ||
        *(int *)(*(int *)(iVar4 + 0x110) + 0x2c) != 0)) {
      uVar2 = FUN_000383c0(param_1);
      return uVar2;
    }
  }
  return 0;
}



void FUN_00039d0c(int *param_1,int param_2,int param_3,int param_4,char param_5,undefined4 param_6,
                 int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int *local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = param_2;
  if (param_2 != -1) {
    iVar1 = param_1[param_2 + 0x55];
  }
  if (param_7 != -1) {
    param_7 = param_1[param_7 + 0x55];
  }
  iVar2 = *param_1;
  param_1[0x84] = iVar1;
  param_1[0x85] = param_7;
  *(char *)(iVar2 + 0x10e) = param_5;
  *(int *)(iVar2 + 0x50) = param_3;
  *(int *)(iVar2 + 0x54) = param_4;
  *(undefined4 *)(iVar2 + 0x58) = param_6;
  *(undefined4 *)(iVar2 + 0x68) = param_8;
  local_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  if ((param_5 == '\0') && (*(undefined1 *)(iVar2 + 0x98) = 0, (int)(uint)(param_3 == 0) <= param_4)
     ) {
    FUN_0002a72c(iVar2);
  }
  if ((*(char *)(iVar2 + 0x10e) != '\0') || (*(char *)(iVar2 + 0x2bf) == '\0')) {
    if (param_1[0x84] != -1) {
      *(uint *)(iVar2 + 0xf4) = *(uint *)(iVar2 + 0xf4) | 1;
    }
    if (param_1[0x85] != -1) {
      if (*(char *)(iVar2 + 0x8610) != '\0') {
        if (((*(uint *)(param_1[0x81] + 0x3c) & 3) != 0) &&
           (*(int *)(*(int *)(iVar2 + 0x110) + 0x58) == 2)) {
          *(undefined4 *)(iVar2 + 0xd4) = 1;
          FUN_000296f8(&local_20);
          *(int **)(iVar2 + 0xcc) = local_20;
          *(int *)(iVar2 + 0xd0) = iStack_1c;
          FUN_00025210(iVar2,*(undefined4 *)(iVar2 + 0x3e0));
          return;
        }
        *(undefined4 *)(iVar2 + 0xd4) = 2;
      }
      *(uint *)(iVar2 + 0xf4) = *(uint *)(iVar2 + 0xf4) | 2;
    }
  }
  return;
}



int FUN_00039e30(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = strcasecmp(param_1,param_2);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}



int FUN_00039e44(char *param_1,char *param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = strncasecmp(param_1,param_2,param_3);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 FUN_00039e58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0003a350(FUN_0003f008);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_00039e80(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if ((code *)param_1[5] != (code *)0x0) {
    (*(code *)param_1[5])(param_1[4]);
    param_1[5] = 0;
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    FUN_0003a4c8(param_1[3],0);
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    (*DAT_000515c8)();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    (*DAT_000515c8)();
    param_1[2] = 0;
  }
  param_1[6] = 0;
  *param_1 = 0;
  return;
}



void FUN_00039f1c(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



undefined4 FUN_00039f30(int *param_1,byte *param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  char *apcStack_2c [2];
  
  iVar9 = *param_1;
  *param_4 = 0;
  iVar8 = (int)param_3 >> 0x1f;
  if (((*(char *)(iVar9 + 0x2e8) == '\0') || (*(char *)(iVar9 + 0xf9) != '\0')) ||
     (iVar2 = FUN_00030880(param_1,1,param_2,param_3), iVar2 == 0)) {
LAB_00039fe0:
    if (param_3 != 0 || iVar8 != 0) {
switchD_00039ff0_default:
      switch(param_1[8]) {
      case 0:
        bVar1 = *param_2;
        uVar5 = (bVar1 & 0xffffffdf) - 0x41;
        uVar7 = bVar1 - 0x30;
        bVar10 = 8 < uVar7;
        bVar11 = uVar7 == 9;
        if (9 < uVar7) {
          bVar10 = 4 < uVar5;
          bVar11 = uVar5 == 5;
        }
        iVar2 = param_1[7];
        if (!bVar10 || bVar11) {
          if (0xf < iVar2) {
            return 1;
          }
          bVar11 = param_3 == 0;
          param_3 = param_3 - 1;
          param_2 = param_2 + 1;
          iVar8 = iVar8 - (uint)bVar11;
          *(byte *)((int)param_1 + iVar2 + 8) = bVar1;
          param_1[7] = iVar2 + 1;
          goto LAB_00039fe0;
        }
        if (iVar2 == 0) {
          return 2;
        }
        *(bool *)((int)param_1 + iVar2 + 8) = !bVar10 || bVar11;
        lVar12 = strtoll((char *)(param_1 + 2),apcStack_2c,0x10);
        *(longlong *)(param_1 + 10) = lVar12;
        if ((lVar12 == 0x7fffffffffffffff) && (piVar4 = __errno_location(), *piVar4 == 0x22)) {
          return 2;
        }
        iVar2 = 1;
        break;
      case 1:
        if (*param_2 == 10) {
          if (param_1[10] != 0 || param_1[0xb] != 0) {
            iVar2 = 2;
            goto LAB_0003a09c;
          }
          param_1[8] = 5;
          param_1[0xe9] = 0;
        }
        goto LAB_0003a28c;
      case 2:
        uVar7 = param_1[10];
        iVar6 = param_1[0xb];
        iVar2 = iVar8;
        uVar5 = param_3;
        if ((int)(iVar6 - (iVar8 + (uint)(uVar7 < param_3))) < 0 !=
            (SBORROW4(iVar6,iVar8) != SBORROW4(iVar6 - iVar8,(uint)(uVar7 < param_3)))) {
          iVar2 = iVar6;
          uVar5 = uVar7;
        }
        uVar5 = FUN_00027ad0(uVar5,iVar2);
        if (((*(char *)(iVar9 + 0xf9) == '\0') && (*(char *)(iVar9 + 0x2e8) == '\0')) &&
           (iVar2 = FUN_00030880(param_1,1,param_2,uVar5), iVar2 != 0)) goto LAB_00039f8c;
        uVar7 = param_1[10];
        iVar6 = param_1[0xb];
        *param_4 = *param_4 + uVar5;
        iVar2 = uVar7 - uVar5;
        iVar6 = iVar6 - (uint)(uVar7 < uVar5);
        bVar11 = param_3 < uVar5;
        param_3 = param_3 - uVar5;
        iVar8 = iVar8 - (uint)bVar11;
        param_1[10] = iVar2;
        param_1[0xb] = iVar6;
        param_2 = param_2 + uVar5;
        if (iVar2 != 0 || iVar6 != 0) goto LAB_00039fe0;
        iVar2 = 3;
        break;
      case 3:
        if (*param_2 == 10) {
          iVar2 = 0;
          param_1[7] = 0;
          param_1[0xc] = 0;
          goto LAB_0003a09c;
        }
        if (*param_2 != 0xd) {
          return 3;
        }
        goto LAB_0003a28c;
      case 4:
        if (*param_2 != 10) {
          return 3;
        }
        iVar8 = FUN_00027ad0(param_3 - 1,iVar8 - (uint)(param_3 == 0));
        param_1[0xc] = iVar8;
        return 0xffffffff;
      case 5:
        iVar2 = param_1[0xe9];
        if (*param_2 != 0xd && *param_2 != 10) {
          iVar6 = param_1[0xe8];
          if (iVar6 <= iVar2) {
            if (iVar6 == 0) {
              param_1[0xe8] = 0x80;
              iVar2 = (*DAT_000515c4)(0x83);
            }
            else {
              param_1[0xe8] = iVar6 * 2;
              iVar2 = (*DAT_000515cc)(param_1[0xe7],iVar6 * 2 + 3);
            }
            if (iVar2 == 0) {
              return 6;
            }
            param_1[0xe7] = iVar2;
          }
          iVar2 = param_1[0xe9];
          param_1[0xe9] = iVar2 + 1;
          *(byte *)(param_1[0xe7] + iVar2) = *param_2;
          goto LAB_0003a28c;
        }
        if (iVar2 == 0) {
          iVar2 = 7;
          break;
        }
        param_1[0xe9] = iVar2 + 1;
        *(undefined1 *)(param_1[0xe7] + iVar2) = 0xd;
        iVar2 = param_1[0xe9];
        param_1[0xe9] = iVar2 + 1;
        *(undefined1 *)(param_1[0xe7] + iVar2) = 10;
        *(undefined1 *)(param_1[0xe7] + param_1[0xe9]) = 0;
        if ((*(char *)(iVar9 + 0x2e8) != '\0') ||
           (iVar2 = FUN_00030880(param_1,2,param_1[0xe7],param_1[0xe9]), iVar2 == 0))
        goto LAB_0003a1dc;
        goto LAB_00039f8c;
      case 6:
        if (*param_2 != 10) {
          return 3;
        }
        iVar2 = 7;
LAB_0003a09c:
        param_1[8] = iVar2;
        goto LAB_0003a28c;
      case 7:
        bVar1 = *param_2;
        if (bVar1 == 10 || bVar1 == 0xd) {
          if (bVar1 == 0xd) {
            bVar11 = param_3 == 0;
            param_3 = param_3 - 1;
            param_2 = param_2 + 1;
            iVar8 = iVar8 - (uint)bVar11;
          }
          iVar2 = 4;
        }
        else {
          iVar2 = 5;
        }
        break;
      default:
        goto switchD_00039ff0_default;
      }
      param_1[8] = iVar2;
      goto LAB_00039fe0;
    }
    uVar3 = 0;
  }
  else {
LAB_00039f8c:
    uVar3 = 4;
  }
  return uVar3;
LAB_0003a1dc:
  param_1[0xe9] = 0;
  param_1[8] = 6;
  if (*param_2 != 10) {
LAB_0003a28c:
    bVar11 = param_3 == 0;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
    iVar8 = iVar8 - (uint)bVar11;
  }
  goto LAB_00039fe0;
}



char * FUN_0003a330(int param_1)

{
  char *pcVar1;
  
  if (param_1 - 1U < 6) {
    pcVar1 = (&PTR_s_Too_long_hexadecimal_number_00047ea8)[param_1 - 1U];
  }
  else {
    pcVar1 = "OK";
  }
  return pcVar1;
}



void FUN_0003a350(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*DAT_000515c4)(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = 0;
    puVar1[2] = param_1;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}



undefined4 FUN_0003a388(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*DAT_000515c4)(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = param_1[3];
    *puVar1 = param_3;
    if (iVar3 == 0) {
      *param_1 = (int)puVar1;
      puVar1[1] = 0;
      puVar1[2] = 0;
      param_1[1] = (int)puVar1;
    }
    else {
      if (param_2 == 0) {
        iVar2 = *param_1;
      }
      else {
        iVar2 = *(int *)(param_2 + 8);
      }
      puVar1[2] = iVar2;
      if (param_2 == 0) {
        iVar2 = *param_1;
      }
      puVar1[1] = param_2;
      if (param_2 == 0) {
        *(undefined4 **)(iVar2 + 4) = puVar1;
        *param_1 = (int)puVar1;
      }
      else {
        if (*(int *)(param_2 + 8) == 0) {
          param_1[1] = (int)puVar1;
        }
        else {
          *(undefined4 **)(*(int *)(param_2 + 8) + 4) = puVar1;
        }
        *(undefined4 **)(param_2 + 8) = puVar1;
      }
    }
    param_1[3] = iVar3 + 1;
    return 1;
  }
  return 0;
}



undefined4 FUN_0003a420(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 1;
  }
  if (param_1[3] == 0) {
    return 1;
  }
  iVar2 = param_2[2];
  if (param_2 == (undefined4 *)*param_1) {
    *param_1 = iVar2;
    if (iVar2 == 0) {
      param_1[1] = 0;
      goto LAB_0003a480;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = param_2[1];
    *(int *)(iVar1 + 8) = iVar2;
    iVar2 = param_2[2];
    if (iVar2 == 0) {
      param_1[1] = iVar1;
      goto LAB_0003a480;
    }
  }
  *(int *)(iVar2 + 4) = iVar1;
LAB_0003a480:
  (*(code *)param_1[2])(param_3,*param_2,param_3,(code *)param_1[2],param_4);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  (*DAT_000515c8)(param_2);
  param_1[3] = param_1[3] + -1;
  return 1;
}



void FUN_0003a4c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    return;
  }
  while (*(int *)(param_1 + 0xc) != 0) {
    FUN_0003a420(param_1,*(undefined4 *)(param_1 + 4),param_2,*(int *)(param_1 + 0xc),param_4);
  }
  (*DAT_000515c8)(param_1);
  return;
}



undefined4 FUN_0003a510(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



undefined4 FUN_0003a518(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = param_1[3];
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + 8);
  if (param_2 == *param_1) {
    *param_1 = iVar3;
    if (iVar3 == 0) {
      param_1[1] = 0;
      goto LAB_0003a574;
    }
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
    *(int *)(iVar2 + 8) = iVar3;
    iVar3 = *(int *)(param_2 + 8);
    if (iVar3 == 0) {
      param_1[1] = iVar2;
      goto LAB_0003a574;
    }
  }
  *(int *)(iVar3 + 4) = iVar2;
LAB_0003a574:
  param_1[3] = iVar1 + -1;
  iVar1 = param_3[3];
  if (iVar1 == 0) {
    *param_3 = param_2;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    param_3[1] = param_2;
  }
  else {
    uVar4 = *(undefined4 *)(param_4 + 8);
    *(int *)(param_2 + 4) = param_4;
    *(undefined4 *)(param_2 + 8) = uVar4;
    if (*(int *)(param_4 + 8) == 0) {
      param_3[1] = param_2;
    }
    else {
      *(int *)(*(int *)(param_4 + 8) + 4) = param_2;
    }
    *(int *)(param_4 + 8) = param_2;
  }
  param_3[3] = iVar1 + 1;
  return 1;
}



void FUN_0003a5d4(int param_1,int *param_2)

{
  if (param_2[1] != 0) {
    (*DAT_000515c8)();
    param_2[1] = 0;
  }
  if (*param_2 != 0) {
    (**(code **)(param_1 + 0xc))();
    *param_2 = 0;
  }
  param_2[2] = 0;
  (*DAT_000515c8)(param_2);
  return;
}



undefined4 FUN_0003a638(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_3 != 0 && param_2 != 0) && (param_5 != 0 && param_4 != 0)) {
    iVar3 = 0;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[5] = 0;
    param_1[4] = param_2;
    iVar1 = (*DAT_000515c4)(param_2 << 2);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      param_1[4] = 0;
    }
    else {
      while( true ) {
        if (param_2 <= iVar3) {
          return 0;
        }
        iVar4 = *param_1;
        uVar2 = FUN_0003a350(FUN_0003a5d4);
        iVar1 = iVar3 << 2;
        *(undefined4 *)(iVar4 + iVar3 * 4) = uVar2;
        if (*(int *)(*param_1 + iVar3 * 4) == 0) break;
        iVar3 = iVar3 + 1;
      }
      for (iVar4 = 0; iVar1 = iVar1 + -4, iVar4 != iVar3; iVar4 = iVar4 + 1) {
        FUN_0003a4c8(*(undefined4 *)(*param_1 + iVar1),0);
        *(undefined4 *)(*param_1 + iVar1) = 0;
      }
      (*DAT_000515c8)(*param_1);
      *param_1 = 0;
      param_1[4] = 0;
    }
  }
  return 1;
}



int FUN_0003a73c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_2 != 0 && param_1 != 0) && (param_4 != 0 && param_3 != 0)) &&
     (iVar2 = param_2, iVar3 = param_3, iVar1 = (*DAT_000515c4)(0x18), iVar1 != 0)) {
    iVar2 = FUN_0003a638(iVar1,param_1,param_2,param_3,param_4,iVar2,iVar3);
    if (iVar2 == 0) {
      return iVar1;
    }
    (*DAT_000515c8)(iVar1);
  }
  return 0;
}



undefined4 FUN_0003a7cc(int *param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *__dest;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar3 = *param_1;
  iVar1 = (*(code *)param_1[1])(param_2,param_3,param_1[4]);
  puVar5 = *(undefined4 **)(iVar3 + iVar1 * 4);
  piVar4 = (int *)*puVar5;
  do {
    if (piVar4 == (int *)0x0) {
LAB_0003a850:
      puVar2 = (undefined4 *)(*DAT_000515c4)(0xc);
      if (puVar2 != (undefined4 *)0x0) {
        __dest = (void *)(*DAT_000515c4)(param_3);
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,param_3);
          puVar2[2] = param_3;
          puVar2[1] = __dest;
          *puVar2 = param_4;
          iVar1 = FUN_0003a388(puVar5,puVar5[1],puVar2);
          if (iVar1 != 0) {
            param_1[5] = param_1[5] + 1;
            return param_4;
          }
          (*DAT_000515c8)(puVar2[1]);
          (*DAT_000515c8)(puVar2);
          return 0;
        }
        (*DAT_000515c8)(puVar2);
      }
      return 0;
    }
    iVar1 = (*(code *)param_1[2])
                      (*(undefined4 *)(*piVar4 + 4),*(undefined4 *)(*piVar4 + 8),param_2,param_3);
    if (iVar1 != 0) {
      FUN_0003a420(puVar5,piVar4,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_0003a850;
    }
    piVar4 = (int *)piVar4[2];
  } while( true );
}



undefined4 FUN_0003a908(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_1;
  iVar1 = (*(code *)param_1[1])(param_2,param_3,param_1[4]);
  puVar4 = *(undefined4 **)(iVar2 + iVar1 * 4);
  piVar3 = (int *)*puVar4;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return 1;
    }
    iVar1 = (*(code *)param_1[2])
                      (*(undefined4 *)(*piVar3 + 4),*(undefined4 *)(*piVar3 + 8),param_2,param_3);
    if (iVar1 != 0) break;
    piVar3 = (int *)piVar3[2];
  }
  FUN_0003a420(puVar4,piVar3,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}



undefined4 FUN_0003a994(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    iVar1 = (*(code *)param_1[1])(param_2,param_3,param_1[4]);
    for (puVar3 = (undefined4 *)**(undefined4 **)(iVar2 + iVar1 * 4); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[2]) {
      puVar4 = (undefined4 *)*puVar3;
      iVar1 = (*(code *)param_1[2])(puVar4[1],puVar4[2],param_2,param_3);
      if (iVar1 != 0) {
        return *puVar4;
      }
    }
  }
  return 0;
}



void FUN_0003aa08(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (param_1[4] <= iVar1) break;
    FUN_0003a4c8(*(undefined4 *)(*param_1 + iVar1 * 4),param_1);
    *(undefined4 *)(*param_1 + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  }
  if (*param_1 != 0) {
    (*DAT_000515c8)();
    *param_1 = 0;
  }
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



void FUN_0003aa74(int *param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 != (int *)0x0) {
    for (iVar3 = 0; iVar3 < param_1[4]; iVar3 = iVar3 + 1) {
      puVar4 = *(undefined4 **)(*param_1 + iVar3 * 4);
      puVar5 = (undefined4 *)*puVar4;
      while (puVar2 = puVar5, puVar2 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)puVar2[2];
        iVar1 = (*param_3)(param_2,*(undefined4 *)*puVar2);
        if (iVar1 != 0) {
          FUN_0003a420(puVar4,puVar2,param_1);
          param_1[5] = param_1[5] + -1;
        }
      }
    }
    return;
  }
  return;
}



void FUN_0003aaf8(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_0003aa08();
  (*DAT_000515c8)(param_1);
  return;
}



undefined4 FUN_0003ab20(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 extraout_r1;
  
  pbVar2 = param_1 + param_2;
  uVar1 = 0x1505;
  for (; param_1 < pbVar2; param_1 = param_1 + 1) {
    uVar1 = (uint)*param_1 ^ uVar1 * 0x21;
  }
  FUN_0003f0f0(uVar1,param_3,param_3,param_1,param_4);
  return extraout_r1;
}



void FUN_0003ab9c(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



undefined4 FUN_0003abb0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[2] != 0) {
    param_1[2] = *(int *)(param_1[2] + 8);
  }
  if (param_1[2] == 0) {
    iVar4 = param_1[1];
    iVar3 = iVar4 << 2;
    do {
      if (((int *)*param_1)[4] <= iVar4) goto LAB_0003ac08;
      iVar4 = iVar4 + 1;
      puVar1 = (undefined4 *)(*(int *)*param_1 + iVar3);
      iVar3 = iVar3 + 4;
      iVar5 = *(int *)*puVar1;
    } while (iVar5 == 0);
    param_1[1] = iVar4;
    param_1[2] = iVar5;
  }
LAB_0003ac08:
  uVar2 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)param_1[2];
  }
  return uVar2;
}



void FUN_0003ac18(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_000515c8)();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (*DAT_000515c8)();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    (*DAT_000515c8)();
    param_1[2] = 0;
  }
  if (param_1[5] != 0) {
    (*DAT_000515c8)();
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    (*DAT_000515c8)();
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    (*DAT_000515c8)();
    param_1[7] = 0;
  }
  param_1[8] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void FUN_0003acf8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_000365a4(param_2 + iVar1 * 2,3,&DAT_00047f44,*(undefined1 *)(param_1 + iVar1));
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return;
}



undefined4 FUN_0003ad30(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  bool bVar16;
  char *pcStack_52c;
  byte local_528 [256];
  byte local_428 [1028];
  
  if (param_2 == 0) {
    piVar12 = (int *)(*param_1 + 0x8570);
  }
  else {
    piVar12 = (int *)(*param_1 + 0x8594);
  }
  iVar5 = FUN_0003cccc("Digest",param_3,6);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = *piVar12;
  FUN_0003ac18(piVar12);
  bVar3 = false;
  bVar2 = false;
  pbVar14 = (byte *)(param_3 + 6);
LAB_0003ad88:
  do {
    while ((*pbVar14 != 0 && ((*(ushort *)(__ctype_b + (uint)*pbVar14 * 2) & 0x20) != 0))) {
      pbVar14 = pbVar14 + 1;
    }
    iVar9 = 0;
    while( true ) {
      bVar1 = pbVar14[iVar9];
      if ((bVar1 == 0x3d || bVar1 == 0) || (iVar9 == 0xff)) break;
      local_528[iVar9] = bVar1;
      iVar9 = iVar9 + 1;
    }
    local_528[iVar9] = 0;
    if (bVar1 != 0x3d) {
      if ((iVar5 != 0) && ((char)piVar12[4] == '\0')) {
        return 1;
      }
      if (*piVar12 != 0) {
        return 4;
      }
      return 1;
    }
    if (pbVar14[iVar9 + 1] != 0x22) {
      iVar4 = iVar9 + 1;
    }
    else {
      iVar4 = iVar9 + 2;
    }
    uVar15 = (uint)(pbVar14[iVar9 + 1] == 0x22);
    uVar8 = 0;
    pbVar10 = local_428;
    pbVar13 = pbVar14 + iVar4;
    uVar11 = 0x3ff;
    while( true ) {
      pbVar14 = pbVar13 + 1;
      bVar1 = *pbVar13;
      if ((bVar1 == 0) || (uVar11 == 0)) break;
      pbVar13 = pbVar14;
      if (bVar1 == 0x22) {
        if ((uVar15 & (uVar8 ^ 1)) == 0) {
LAB_0003aecc:
          *pbVar10 = bVar1;
          uVar8 = 0;
          pbVar10 = pbVar10 + 1;
          uVar11 = uVar11 - 1;
        }
        else {
          uVar8 = 0;
          uVar11 = uVar8;
        }
      }
      else if (bVar1 < 0x23) {
        if (bVar1 != 10) {
          bVar16 = bVar1 == 0xd;
          goto LAB_0003aeb0;
        }
LAB_0003aedc:
        uVar11 = 0;
      }
      else {
        if (bVar1 == 0x2c) {
          bVar16 = uVar15 == 0;
LAB_0003aeb0:
          if (!bVar16) goto LAB_0003aecc;
          goto LAB_0003aedc;
        }
        if ((bVar1 != 0x5c) || (uVar8 != 0)) goto LAB_0003aecc;
        *pbVar10 = 0x5c;
        uVar8 = 1;
        pbVar10 = pbVar10 + 1;
        uVar11 = uVar11 - 1;
      }
    }
    *pbVar10 = 0;
    iVar9 = FUN_0003cc64(local_528,"nonce");
    if (iVar9 != 0) {
      iVar9 = (*DAT_000515d0)(local_428);
      *piVar12 = iVar9;
      goto LAB_0003b028;
    }
    iVar9 = FUN_0003cc64(local_528,"stale");
    if (iVar9 != 0) {
      iVar9 = FUN_0003cc64(local_428,&DAT_00047f55);
      if (iVar9 != 0) {
        *(undefined1 *)(piVar12 + 4) = 1;
        piVar12[8] = 1;
      }
      goto LAB_0003b0a8;
    }
    iVar9 = FUN_0003cc64(local_528,"realm");
    if (iVar9 == 0) {
      iVar9 = FUN_0003cc64(local_528,"opaque");
      if (iVar9 != 0) {
        iVar9 = (*DAT_000515d0)(local_428);
        piVar12[5] = iVar9;
        goto LAB_0003b028;
      }
      iVar9 = FUN_0003cc64(local_528,&DAT_00047f67);
      if (iVar9 != 0) {
        pcVar6 = (char *)(*DAT_000515d0)(local_428);
        pcVar7 = pcVar6;
        if (pcVar6 == (char *)0x0) {
          return 3;
        }
        while (pcVar7 = strtok_r(pcVar7,",",&pcStack_52c), pcVar7 != (char *)0x0) {
          iVar9 = FUN_0003cc64(pcVar7,&DAT_00047f6d);
          if (iVar9 == 0) {
            iVar9 = FUN_0003cc64(pcVar7,"auth-int");
            if (iVar9 != 0) {
              bVar3 = true;
            }
          }
          else {
            bVar2 = true;
          }
          pcVar7 = (char *)0x0;
        }
        (*DAT_000515c8)(pcVar6);
        if (bVar2) {
          pcVar7 = "auth";
        }
        else {
          if (!bVar3) goto LAB_0003b0a8;
          pcVar7 = "auth-int";
        }
        iVar9 = (*DAT_000515d0)(pcVar7);
        piVar12[6] = iVar9;
        goto LAB_0003b028;
      }
      iVar9 = FUN_0003cc64(local_528,"algorithm");
      if (iVar9 != 0) {
        iVar9 = (*DAT_000515d0)(local_428);
        piVar12[7] = iVar9;
        if (iVar9 == 0) {
          return 3;
        }
        iVar9 = FUN_0003cc64(local_428,"MD5-sess");
        if (iVar9 == 0) {
          iVar9 = FUN_0003cc64(local_428,&DAT_00047f8e);
          if (iVar9 == 0) {
            return 2;
          }
          piVar12[3] = 0;
        }
        else {
          piVar12[3] = 1;
        }
      }
    }
    else {
      iVar9 = (*DAT_000515d0)(local_428);
      piVar12[2] = iVar9;
LAB_0003b028:
      if (iVar9 == 0) {
        return 3;
      }
    }
LAB_0003b0a8:
    do {
      pbVar14 = pbVar13;
      uVar11 = (uint)*pbVar14;
      if (uVar11 == 0) goto LAB_0003ad88;
      pbVar13 = pbVar14 + 1;
    } while ((*(ushort *)(__ctype_b + uVar11 * 2) & 0x20) != 0);
    if (uVar11 == 0x2c) {
      pbVar14 = pbVar14 + 1;
    }
  } while( true );
}



// WARNING: Type propagation algorithm not settling

int FUN_0003b160(int *param_1,int param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  size_t sVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  int local_d0 [2];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [36];
  undefined1 auStack_94 [36];
  undefined1 auStack_70 [36];
  char acStack_4c [40];
  
  iVar12 = *param_1;
  if (param_2 != 0) {
    piVar10 = param_1 + 0x86;
    pcVar11 = (char *)param_1[0x4c];
    pcVar14 = (char *)param_1[0x4d];
  }
  else {
    piVar10 = param_1 + 0x89;
    pcVar11 = (char *)param_1[0x48];
    pcVar14 = (char *)param_1[0x49];
  }
  if (param_2 != 0) {
    piVar9 = (int *)(iVar12 + 0x8594);
    iVar13 = iVar12 + 0x85c8;
  }
  else {
    piVar9 = (int *)(iVar12 + 0x8570);
    iVar13 = iVar12 + 0x85b8;
  }
  local_d0[0] = 0;
  local_d0[1] = 0;
  if (*piVar10 != 0) {
    (*DAT_000515c8)();
    *piVar10 = 0;
  }
  if (pcVar11 == (char *)0x0) {
    pcVar11 = "";
  }
  if (pcVar14 == (char *)0x0) {
    pcVar14 = "";
  }
  if (*piVar9 == 0) {
    *(undefined1 *)(iVar13 + 0xc) = 0;
    return 0;
  }
  iVar8 = piVar9[8];
  *(undefined1 *)(iVar13 + 0xc) = 1;
  if (iVar8 == 0) {
    piVar9[8] = 1;
  }
  if (piVar9[1] == 0) {
    uVar2 = FUN_00028538(iVar12);
    uVar3 = FUN_00028538(iVar12);
    uVar4 = FUN_00028538(iVar12);
    uVar5 = FUN_00028538(iVar12);
    FUN_000365a4(acStack_4c,0x21,"%08x%08x%08x%08x",uVar2,uVar3,uVar4,uVar5);
    sVar6 = strlen(acStack_4c);
    iVar12 = FUN_0003d938(iVar12,acStack_4c,sVar6,local_d0,local_d0 + 1);
    if (iVar12 != 0) {
      return iVar12;
    }
    piVar9[1] = local_d0[0];
  }
  iVar12 = FUN_000375e8("%s:%s:%s",pcVar11,piVar9[2],pcVar14);
  if (iVar12 != 0) {
    FUN_0003c2a8(auStack_c8,iVar12);
    (*DAT_000515c8)(iVar12);
    FUN_0003acf8(auStack_c8,auStack_94);
    if (piVar9[3] == 1) {
      iVar12 = FUN_000375e8("%s:%s:%s",auStack_94,*piVar9,piVar9[1]);
      if (iVar12 == 0) {
        return 0x1b;
      }
      FUN_0003c2a8(auStack_c8,iVar12);
      (*DAT_000515c8)(iVar12);
      FUN_0003acf8(auStack_c8,auStack_94);
    }
    if ((*(char *)(iVar13 + 0xe) == '\0') ||
       (pcVar14 = strchr(param_4,0x3f), pcVar14 == (char *)0x0)) {
      sVar6 = strlen(param_4);
    }
    else {
      sVar6 = (int)pcVar14 - (int)param_4;
    }
    iVar13 = FUN_000375e8("%s:%.*s",param_3,sVar6,param_4);
    iVar12 = iVar13;
    if (((piVar9[6] != 0) && (iVar8 = FUN_0003cc64(piVar9[6],"auth-int"), iVar8 != 0)) &&
       (iVar12 = FUN_000375e8("%s:%s",iVar13,"d41d8cd98f00b204e9800998ecf8427e"), iVar13 != 0)) {
      (*DAT_000515c8)(iVar13);
    }
    if (iVar12 != 0) {
      FUN_0003c2a8(auStack_c8,iVar12);
      (*DAT_000515c8)(iVar12);
      FUN_0003acf8(auStack_c8,auStack_70);
      if (piVar9[6] == 0) {
        iVar12 = FUN_000375e8("%s:%s:%s",auStack_94,*piVar9,auStack_70);
      }
      else {
        iVar12 = FUN_000375e8("%s:%s:%08x:%s:%s:%s",auStack_94,*piVar9,piVar9[8],piVar9[1],piVar9[6]
                              ,auStack_70);
      }
      if (iVar12 != 0) {
        FUN_0003c2a8(auStack_c8,iVar12);
        (*DAT_000515c8)(iVar12);
        FUN_0003acf8(auStack_c8,auStack_b8);
        pcVar14 = pcVar11 + -1;
        iVar12 = 1;
        while( true ) {
          pcVar14 = pcVar14 + 1;
          cVar1 = *pcVar14;
          if (cVar1 == '\0') break;
          if (cVar1 == '\"' || cVar1 == '\\') {
            iVar12 = iVar12 + 2;
          }
          else {
            iVar12 = iVar12 + 1;
          }
        }
        pcVar7 = (char *)(*DAT_000515c4)(iVar12);
        pcVar14 = pcVar7;
        if (pcVar7 != (char *)0x0) {
          while( true ) {
            cVar1 = *pcVar11;
            if (cVar1 == '\0') break;
            if (cVar1 == '\"' || cVar1 == '\\') {
              *pcVar14 = '\\';
            }
            if (cVar1 == '\"' || cVar1 == '\\') {
              pcVar14 = pcVar14 + 1;
            }
            *pcVar14 = *pcVar11;
            pcVar14 = pcVar14 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *pcVar14 = '\0';
          if (piVar9[6] == 0) {
            pcVar11 = "";
            if (param_2 != 0) {
              pcVar11 = "Proxy-";
            }
            iVar12 = FUN_000375e8("%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%.*s\", response=\"%s\""
                                  ,pcVar11,pcVar7,piVar9[2],*piVar9,sVar6,param_4,auStack_b8);
            *piVar10 = iVar12;
          }
          else {
            pcVar11 = "";
            if (param_2 != 0) {
              pcVar11 = "Proxy-";
            }
            iVar12 = FUN_000375e8("%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%.*s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                  ,pcVar11,pcVar7,piVar9[2],*piVar9,sVar6,param_4,piVar9[1],
                                  piVar9[8],piVar9[6],auStack_b8);
            *piVar10 = iVar12;
            iVar12 = FUN_0003cc64(piVar9[6],&DAT_00047f6d);
            if (iVar12 != 0) {
              piVar9[8] = piVar9[8] + 1;
            }
          }
          (*DAT_000515c8)(pcVar7);
          if (*piVar10 != 0) {
            if (piVar9[5] != 0) {
              iVar12 = FUN_000375e8("%s, opaque=\"%s\"");
              if (iVar12 == 0) {
                return 0x1b;
              }
              (*DAT_000515c8)(*piVar10);
              *piVar10 = iVar12;
            }
            if (piVar9[7] != 0) {
              iVar12 = FUN_000375e8("%s, algorithm=\"%s\"",*piVar10);
              if (iVar12 == 0) {
                return 0x1b;
              }
              (*DAT_000515c8)(*piVar10);
              *piVar10 = iVar12;
            }
            pcVar11 = (char *)*piVar10;
            sVar6 = strlen(pcVar11);
            iVar12 = (*DAT_000515cc)(pcVar11,sVar6 + 3);
            if (iVar12 != 0) {
              strcpy((char *)(iVar12 + sVar6),"\r\n");
              *piVar10 = iVar12;
              return 0;
            }
          }
        }
      }
    }
  }
  return 0x1b;
}



void FUN_0003b694(int param_1)

{
  FUN_0003ac18(param_1 + 0x8570);
  FUN_0003ac18(param_1 + 0x8594);
  return;
}



void FUN_0003b6b0(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return;
}



void FUN_0003b6e4(undefined1 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 4) {
    *param_1 = (char)*(undefined4 *)(param_2 + uVar1);
    param_1[1] = (char)((uint)*(undefined4 *)(param_2 + uVar1) >> 8);
    param_1[2] = (char)((uint)*(undefined4 *)(param_2 + uVar1) >> 0x10);
    param_1[3] = (char)((uint)*(undefined4 *)(param_2 + uVar1) >> 0x18);
    param_1 = param_1 + 4;
  }
  return;
}



void FUN_0003b72c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_68 [17];
  
  iVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar7 = param_1[3];
  iVar1 = 0;
  iVar8 = param_2;
  do {
    iVar2 = iVar1 + 4;
    *(uint *)((int)local_68 + iVar1) =
         (uint)*(byte *)(iVar8 + 2) << 0x10 | (uint)*(byte *)(iVar8 + 1) << 8 |
         (uint)*(byte *)(param_2 + iVar1) | (uint)*(byte *)(iVar8 + 3) << 0x18;
    iVar8 = iVar8 + 4;
    iVar1 = iVar2;
  } while (iVar2 != 0x40);
  uVar9 = local_68[0] + 0xd76aa478 + iVar3 + (uVar7 & ~uVar4 | uVar5 & uVar4);
  uVar10 = uVar4 + (uVar9 >> 0x19 | uVar9 * 0x80);
  uVar9 = local_68[1] + -0x173848aa + uVar7 + (uVar5 & ~uVar10 | uVar10 & uVar4);
  uVar6 = uVar10 + (uVar9 >> 0x14 | uVar9 * 0x1000);
  uVar9 = local_68[2] + 0x242070db + uVar5 + (uVar4 & ~uVar6 | uVar6 & uVar10);
  uVar12 = uVar6 + (uVar9 >> 0xf | uVar9 * 0x20000);
  uVar9 = local_68[3] + -0x3e423112 + uVar4 + (uVar10 & ~uVar12 | uVar12 & uVar6);
  uVar9 = uVar12 + (uVar9 >> 10 | uVar9 * 0x400000);
  uVar10 = local_68[4] + -0xa83f051 + uVar10 + (uVar6 & ~uVar9 | uVar9 & uVar12);
  uVar10 = uVar9 + (uVar10 >> 0x19 | uVar10 * 0x80);
  uVar6 = local_68[5] + 0x4787c62a + uVar6 + (uVar12 & ~uVar10 | uVar10 & uVar9);
  uVar11 = uVar10 + (uVar6 >> 0x14 | uVar6 * 0x1000);
  uVar6 = local_68[6] + -0x57cfb9ed + uVar12 + (uVar9 & ~uVar11 | uVar11 & uVar10);
  uVar12 = uVar11 + (uVar6 >> 0xf | uVar6 * 0x20000);
  uVar9 = local_68[7] + -0x2b96aff + uVar9 + (uVar10 & ~uVar12 | uVar12 & uVar11);
  uVar6 = uVar12 + (uVar9 >> 10 | uVar9 * 0x400000);
  uVar9 = local_68[8] + 0x698098d8 + uVar10 + (uVar11 & ~uVar6 | uVar6 & uVar12);
  uVar9 = uVar6 + (uVar9 >> 0x19 | uVar9 * 0x80);
  uVar10 = local_68[9] + -0x74bb0851 + uVar11 + (uVar12 & ~uVar9 | uVar9 & uVar6);
  uVar11 = uVar9 + (uVar10 >> 0x14 | uVar10 * 0x1000);
  uVar10 = local_68[10] + -0xa44f + uVar12 + (uVar6 & ~uVar11 | uVar11 & uVar9);
  uVar10 = uVar11 + (uVar10 >> 0xf | uVar10 * 0x20000);
  uVar6 = local_68[0xb] + -0x76a32842 + uVar6 + (uVar9 & ~uVar10 | uVar10 & uVar11);
  uVar6 = uVar10 + (uVar6 >> 10 | uVar6 * 0x400000);
  uVar9 = local_68[0xc] + 0x6b901122 + uVar9 + (uVar11 & ~uVar6 | uVar6 & uVar10);
  uVar12 = uVar6 + (uVar9 >> 0x19 | uVar9 * 0x80);
  uVar9 = local_68[0xd] + -0x2678e6d + uVar11 + (uVar10 & ~uVar12 | uVar12 & uVar6);
  uVar11 = uVar12 + (uVar9 >> 0x14 | uVar9 * 0x1000);
  uVar9 = local_68[0xe] + -0x5986bc72 + uVar10 + (~uVar11 & uVar6 | uVar11 & uVar12);
  uVar9 = uVar11 + (uVar9 >> 0xf | uVar9 * 0x20000);
  uVar6 = local_68[0xf] + 0x49b40821 + uVar6 + (~uVar9 & uVar12 | uVar9 & uVar11);
  uVar6 = uVar9 + (uVar6 >> 10 | uVar6 * 0x400000);
  uVar10 = local_68[1] + -0x9e1da9e + uVar12 + (uVar6 & uVar11 | uVar9 & ~uVar11);
  uVar13 = uVar6 + (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar10 = local_68[6] + -0x3fbf4cc0 + uVar11 + (uVar13 & uVar9 | uVar6 & ~uVar9);
  uVar12 = uVar13 + (uVar10 >> 0x17 | uVar10 * 0x200);
  uVar9 = local_68[0xb] + 0x265e5a51 + uVar9 + (uVar12 & uVar6 | uVar13 & ~uVar6);
  uVar9 = uVar12 + (uVar9 >> 0x12 | uVar9 * 0x4000);
  uVar6 = local_68[0] + 0xe9b6c7aa + uVar6 + (uVar9 & uVar13 | uVar12 & ~uVar13);
  uVar11 = uVar9 + (uVar6 >> 0xc | uVar6 * 0x100000);
  uVar6 = local_68[5] + -0x29d0efa3 + uVar13 + (uVar11 & uVar12 | uVar9 & ~uVar12);
  uVar10 = uVar11 + (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar6 = local_68[10] + 0x2441453 + uVar12 + (uVar10 & uVar9 | uVar11 & ~uVar9);
  uVar12 = uVar10 + (uVar6 >> 0x17 | uVar6 * 0x200);
  uVar9 = local_68[0xf] + -0x275e197f + uVar9 + (uVar12 & uVar11 | uVar10 & ~uVar11);
  uVar6 = uVar12 + (uVar9 >> 0x12 | uVar9 * 0x4000);
  uVar9 = local_68[4] + -0x182c0438 + uVar11 + (uVar6 & uVar10 | uVar12 & ~uVar10);
  uVar11 = uVar6 + (uVar9 >> 0xc | uVar9 * 0x100000);
  uVar9 = local_68[9] + 0x21e1cde6 + uVar10 + (uVar11 & uVar12 | uVar6 & ~uVar12);
  uVar9 = uVar11 + (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar10 = local_68[0xe] + -0x3cc8f82a + uVar12 + (uVar9 & uVar6 | uVar11 & ~uVar6);
  uVar12 = uVar9 + (uVar10 >> 0x17 | uVar10 * 0x200);
  uVar6 = local_68[3] + -0xb2af279 + uVar6 + (uVar12 & uVar11 | uVar9 & ~uVar11);
  uVar6 = uVar12 + (uVar6 >> 0x12 | uVar6 * 0x4000);
  uVar10 = local_68[8] + 0x455a14ed + uVar11 + (uVar6 & uVar9 | uVar12 & ~uVar9);
  uVar10 = uVar6 + (uVar10 >> 0xc | uVar10 * 0x100000);
  uVar9 = local_68[0xd] + -0x561c16fb + uVar9 + (uVar10 & uVar12 | uVar6 & ~uVar12);
  uVar9 = uVar10 + (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar11 = local_68[2] + -0x3105c08 + uVar12 + (uVar9 & uVar6 | uVar10 & ~uVar6);
  uVar12 = uVar9 + (uVar11 >> 0x17 | uVar11 * 0x200);
  uVar6 = local_68[7] + 0x676f02d9 + uVar6 + (uVar12 & uVar10 | uVar9 & ~uVar10);
  uVar6 = uVar12 + (uVar6 >> 0x12 | uVar6 * 0x4000);
  uVar10 = local_68[0xc] + -0x72d5b376 + uVar10 + (uVar6 & uVar9 | uVar12 & ~uVar9);
  uVar10 = uVar6 + (uVar10 >> 0xc | uVar10 * 0x100000);
  uVar9 = local_68[5] + -0x5c6be + uVar9 + (uVar6 ^ uVar12 ^ uVar10);
  uVar11 = uVar10 + (uVar9 >> 0x1c | uVar9 * 0x10);
  uVar9 = local_68[8] + -0x788e097f + uVar12 + (uVar10 ^ uVar6 ^ uVar11);
  uVar13 = uVar11 + (uVar9 >> 0x15 | uVar9 * 0x800);
  uVar9 = local_68[0xb] + 0x6d9d6122 + uVar6 + (uVar11 ^ uVar10 ^ uVar13);
  uVar9 = uVar13 + (uVar9 >> 0x10 | uVar9 * 0x10000);
  uVar6 = local_68[0xe] + -0x21ac7f4 + uVar10 + (uVar13 ^ uVar11 ^ uVar9);
  uVar10 = uVar9 + (uVar6 >> 9 | uVar6 * 0x800000);
  uVar6 = local_68[1] + -0x5b4115bc + uVar11 + (uVar9 ^ uVar13 ^ uVar10);
  uVar12 = uVar10 + (uVar6 >> 0x1c | uVar6 * 0x10);
  uVar6 = local_68[4] + 0x4bdecfa9 + uVar13 + (uVar10 ^ uVar9 ^ uVar12);
  uVar11 = uVar12 + (uVar6 >> 0x15 | uVar6 * 0x800);
  uVar9 = local_68[7] + -0x944b4a0 + uVar9 + (uVar12 ^ uVar10 ^ uVar11);
  uVar6 = uVar11 + (uVar9 >> 0x10 | uVar9 * 0x10000);
  uVar9 = local_68[10] + -0x41404390 + uVar10 + (uVar11 ^ uVar12 ^ uVar6);
  uVar9 = uVar6 + (uVar9 >> 9 | uVar9 * 0x800000);
  uVar10 = local_68[0xd] + 0x289b7ec6 + uVar12 + (uVar6 ^ uVar11 ^ uVar9);
  uVar10 = uVar9 + (uVar10 >> 0x1c | uVar10 * 0x10);
  uVar11 = local_68[0] + 0xeaa127fa + uVar11 + (uVar9 ^ uVar6 ^ uVar10);
  uVar11 = uVar10 + (uVar11 >> 0x15 | uVar11 * 0x800);
  uVar6 = local_68[3] + -0x2b10cf7b + uVar6 + (uVar10 ^ uVar9 ^ uVar11);
  uVar12 = uVar11 + (uVar6 >> 0x10 | uVar6 * 0x10000);
  uVar9 = local_68[6] + 0x4881d05 + uVar9 + (uVar11 ^ uVar10 ^ uVar12);
  uVar9 = uVar12 + (uVar9 >> 9 | uVar9 * 0x800000);
  uVar6 = local_68[9] + -0x262b2fc7 + uVar10 + (uVar12 ^ uVar11 ^ uVar9);
  uVar10 = uVar9 + (uVar6 >> 0x1c | uVar6 * 0x10);
  uVar6 = local_68[0xc] + -0x1924661b + uVar11 + (uVar9 ^ uVar12 ^ uVar10);
  uVar11 = uVar10 + (uVar6 >> 0x15 | uVar6 * 0x800);
  uVar6 = local_68[0xf] + 0x1fa27cf8 + uVar12 + (uVar10 ^ uVar9 ^ uVar11);
  uVar12 = uVar11 + (uVar6 >> 0x10 | uVar6 * 0x10000);
  uVar9 = local_68[2] + -0x3b53a99b + uVar9 + (uVar11 ^ uVar10 ^ uVar12);
  uVar6 = uVar12 + (uVar9 >> 9 | uVar9 * 0x800000);
  uVar9 = local_68[0] + 0xf4292244 + uVar10 + ((uVar6 | ~uVar11) ^ uVar12);
  uVar9 = uVar6 + (uVar9 >> 0x1a | uVar9 * 0x40);
  uVar10 = local_68[7] + 0x432aff97 + uVar11 + ((uVar9 | ~uVar12) ^ uVar6);
  uVar10 = uVar9 + (uVar10 >> 0x16 | uVar10 * 0x400);
  uVar11 = local_68[0xe] + -0x546bdc59 + uVar12 + ((uVar10 | ~uVar6) ^ uVar9);
  uVar11 = uVar10 + (uVar11 >> 0x11 | uVar11 * 0x8000);
  uVar6 = local_68[5] + -0x36c5fc7 + uVar6 + ((uVar11 | ~uVar9) ^ uVar10);
  uVar6 = uVar11 + (uVar6 >> 0xb | uVar6 * 0x200000);
  uVar9 = local_68[0xc] + 0x655b59c3 + uVar9 + ((uVar6 | ~uVar10) ^ uVar11);
  uVar9 = uVar6 + (uVar9 >> 0x1a | uVar9 * 0x40);
  uVar10 = local_68[3] + -0x70f3336e + uVar10 + ((uVar9 | ~uVar11) ^ uVar6);
  uVar10 = uVar9 + (uVar10 >> 0x16 | uVar10 * 0x400);
  uVar11 = local_68[10] + -0x100b83 + uVar11 + ((uVar10 | ~uVar6) ^ uVar9);
  uVar11 = uVar10 + (uVar11 >> 0x11 | uVar11 * 0x8000);
  uVar6 = local_68[1] + -0x7a7ba22f + uVar6 + ((uVar11 | ~uVar9) ^ uVar10);
  uVar6 = uVar11 + (uVar6 >> 0xb | uVar6 * 0x200000);
  uVar9 = local_68[8] + 0x6fa87e4f + uVar9 + ((uVar6 | ~uVar10) ^ uVar11);
  uVar9 = uVar6 + (uVar9 >> 0x1a | uVar9 * 0x40);
  uVar10 = local_68[0xf] + -0x1d31920 + uVar10 + ((uVar9 | ~uVar11) ^ uVar6);
  uVar10 = uVar9 + (uVar10 >> 0x16 | uVar10 * 0x400);
  uVar11 = local_68[6] + -0x5cfebcec + uVar11 + ((uVar10 | ~uVar6) ^ uVar9);
  uVar11 = uVar10 + (uVar11 >> 0x11 | uVar11 * 0x8000);
  uVar6 = local_68[0xd] + 0x4e0811a1 + uVar6 + ((uVar11 | ~uVar9) ^ uVar10);
  uVar6 = uVar11 + (uVar6 >> 0xb | uVar6 * 0x200000);
  uVar9 = local_68[4] + -0x8ac817e + uVar9 + ((uVar6 | ~uVar10) ^ uVar11);
  uVar9 = uVar6 + (uVar9 >> 0x1a | uVar9 * 0x40);
  uVar10 = local_68[0xb] + -0x42c50dcb + uVar10 + ((uVar9 | ~uVar11) ^ uVar6);
  uVar10 = uVar9 + (uVar10 >> 0x16 | uVar10 * 0x400);
  uVar11 = local_68[2] + 0x2ad7d2bb + uVar11 + ((uVar10 | ~uVar6) ^ uVar9);
  uVar11 = uVar10 + (uVar11 >> 0x11 | uVar11 * 0x8000);
  uVar6 = local_68[9] + -0x14792c6f + uVar6 + ((uVar11 | ~uVar9) ^ uVar10);
  *param_1 = uVar9 + iVar3;
  param_1[1] = uVar11 + uVar4 + (uVar6 >> 0xb | uVar6 * 0x200000);
  param_1[2] = uVar11 + uVar5;
  param_1[3] = uVar10 + uVar7;
  memset(local_68,0,0x40);
  return;
}



void FUN_0003c180(int param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = param_3 * 8;
  uVar2 = uVar3 + *(uint *)(param_1 + 0x10);
  bVar4 = uVar2 < uVar3;
  if (bVar4) {
    uVar3 = *(uint *)(param_1 + 0x14);
  }
  uVar1 = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  if (bVar4) {
    *(uint *)(param_1 + 0x14) = uVar3 + 1;
  }
  uVar3 = 0x40 - uVar1;
  *(uint *)(param_1 + 0x10) = uVar2;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  if (param_3 < uVar3) {
    uVar3 = 0;
  }
  else {
    memcpy((void *)(param_1 + uVar1 + 0x18),param_2,uVar3);
    FUN_0003b72c(param_1,param_1 + 0x18);
    for (; uVar3 + 0x3f < param_3; uVar3 = uVar3 + 0x40) {
      FUN_0003b72c(param_1,(int)param_2 + uVar3);
    }
    uVar1 = 0;
  }
  memcpy((void *)(param_1 + uVar1 + 0x18),(void *)((int)param_2 + uVar3),param_3 - uVar3);
  return;
}



void FUN_0003c22c(undefined4 param_1,void *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_1;
  pvStack_14 = param_2;
  uStack_10 = param_3;
  FUN_0003b6e4(&uStack_18,(int)param_2 + 0x10,8);
  uVar1 = *(uint *)((int)param_2 + 0x10) >> 3 & 0x3f;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_0003c180(param_2,&DAT_000480dc,iVar2);
  FUN_0003c180(param_2,&uStack_18,8);
  FUN_0003b6e4(param_1,param_2,0x10);
  memset(param_2,0,0x58);
  return;
}



void FUN_0003c2a8(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [92];
  
  FUN_0003b6b0(auStack_68);
  strlen(param_2);
  uVar1 = FUN_00027aac();
  FUN_0003c180(auStack_68,param_2,uVar1);
  FUN_0003c22c(param_1,auStack_68);
  return;
}



int * FUN_0003c2f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*DAT_000515c4)(8);
  if (piVar1 != (int *)0x0) {
    iVar2 = (*DAT_000515c4)(param_1[3]);
    piVar1[1] = iVar2;
    if (iVar2 == 0) {
      (*DAT_000515c8)(piVar1);
      return (int *)0x0;
    }
    *piVar1 = (int)param_1;
    (*(code *)*param_1)();
  }
  return piVar1;
}



undefined4 FUN_0003c37c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 8))(param_2,param_1[1],param_3,*(code **)(*param_1 + 8),param_4);
  (*DAT_000515c8)(param_1[1]);
  (*DAT_000515c8)(param_1);
  return 0;
}



bool FUN_0003c3c0(int param_1)

{
  return *(int *)(param_1 + 0x20c) != 2;
}



undefined4 FUN_0003c3d0(char *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  
  local_44 = 0;
  iVar1 = inet_pton(2,param_1,auStack_40);
  if (iVar1 < 1) {
    memset(auStack_30,0,0x20);
    local_2c = 2;
    local_28 = 1;
    if (param_2 == 0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      FUN_000365a4(auStack_3c,0xc,"%d",param_2);
      puVar2 = auStack_3c;
    }
    FUN_0003cdf4(param_1,puVar2,auStack_30,&local_44);
  }
  else {
    local_44 = FUN_0003d0d0(2,auStack_40,param_1,param_2);
  }
  return local_44;
}



int FUN_0003c47c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  iVar1 = FUN_0003c3d0(param_2,param_3);
  if (iVar1 == 0) {
    FUN_000305d4(*param_1,"Curl_ipv4_resolve_r failed for %s\n",param_2);
  }
  return iVar1;
}



undefined4 FUN_0003c4c0(void)

{
  return 4;
}



undefined4 FUN_0003c4c8(void)

{
  return 4;
}



undefined4 FUN_0003c4d0(void)

{
  return 4;
}



undefined4 FUN_0003c4d8(void)

{
  return 4;
}



int FUN_0003c4e0(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  size_t sVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int extraout_r1;
  undefined4 extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  byte *__s;
  undefined **ppuVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  int local_64;
  int local_54;
  int local_50;
  int local_4c;
  byte *local_48;
  undefined1 auStack_44 [32];
  
  iVar14 = -1;
  bVar19 = false;
  iVar16 = -1;
  iVar18 = -1;
  iVar13 = -1;
  iVar17 = -1;
  local_54 = -1;
  local_50 = -1;
  local_4c = -1;
  local_64 = 7;
  pbVar12 = param_1;
LAB_0003c51c:
  do {
    if ((*pbVar12 == 0) || (local_64 = local_64 + -1, local_64 == 0)) {
      if (local_4c == -1) {
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
      }
      iVar11 = local_4c;
      iVar3 = local_50;
      iVar17 = local_54;
      if (iVar18 == -1 || iVar13 == -1) {
        return -1;
      }
      if (iVar16 == -1) {
        return -1;
      }
      if (0x7f5 < iVar16) {
        return 0x7fffffff;
      }
      if (iVar16 < 0x7b2) {
        return 0;
      }
      bVar20 = SBORROW4(iVar18,0x1f);
      iVar6 = iVar18 + -0x1f;
      bVar19 = iVar18 == 0x1f;
      if (iVar18 < 0x20) {
        bVar20 = SBORROW4(iVar13,0xb);
        iVar6 = iVar13 + -0xb;
        bVar19 = iVar13 == 0xb;
      }
      if (!bVar19 && iVar6 < 0 == bVar20) {
        return -1;
      }
      if (0x17 < local_54) {
        return -1;
      }
      if (0x3b < local_50) {
        return -1;
      }
      if (0x3c < local_4c) {
        return -1;
      }
      iVar6 = iVar13;
      if (iVar13 < 0) {
        iVar6 = FUN_0003f110(0xb - iVar13,0xc);
        iVar16 = iVar16 + iVar6;
        FUN_0003f1ec(0xb - iVar13,0xc);
        iVar6 = 0xb - extraout_r1_02;
      }
      iVar8 = iVar16;
      if (iVar13 < 2) {
        iVar8 = iVar16 + -1;
      }
      iVar13 = iVar8 + 3;
      if (-1 < iVar8) {
        iVar13 = iVar8;
      }
      iVar7 = FUN_0003f110(iVar8,0xffffff9c);
      iVar8 = FUN_0003f110(iVar8,400);
      iVar11 = ((((iVar16 + -0x7b2) * 0x16d + (iVar13 >> 2) + iVar7 + iVar8 +
                  *(int *)(&DAT_00048504 + iVar6 * 4) + iVar18 + -0x1de) * 0x18 + iVar17) * 0x3c +
               iVar3) * 0x3c + iVar11;
      if (iVar11 != -1) {
        if (iVar14 == -1) {
          iVar14 = 0;
        }
        else if ((0 < iVar14) && (0x7fffffff - iVar14 < iVar11)) {
          return 0x7fffffff;
        }
        return iVar11 + iVar14;
      }
      return -1;
    }
    do {
      __s = pbVar12;
      uVar9 = (uint)*__s;
      if (uVar9 == 0) break;
      pbVar12 = __s + 1;
    } while ((*(ushort *)(__ctype_b + uVar9 * 2) & 0x800) == 0);
    uVar2 = *(ushort *)(__ctype_b + uVar9 * 2);
    if ((uVar2 & 4) == 0) {
      pbVar12 = __s;
      if ((uVar2 & 8) != 0) {
        if ((local_4c == -1) &&
           (iVar3 = sscanf((char *)__s,"%02d:%02d:%02d",&local_54,&local_50,&local_4c), iVar3 == 3))
        {
          pbVar12 = __s + 8;
        }
        else if ((local_4c == -1) &&
                (iVar3 = sscanf((char *)__s,"%02d:%02d",&local_54,&local_50), iVar3 == 2)) {
          local_4c = 0;
          pbVar12 = __s + 5;
        }
        else {
          piVar5 = __errno_location();
          iVar11 = *piVar5;
          *piVar5 = 0;
          strtol((char *)__s,(char **)&local_48,10);
          iVar3 = *piVar5;
          if (iVar3 != iVar11) {
            *piVar5 = iVar11;
          }
          if (iVar3 != 0) {
            return -1;
          }
          iVar3 = FUN_00027ab0();
          if ((((iVar14 == -1) && ((int)local_48 - (int)__s == 4)) && (iVar3 < 0x579)) &&
             (param_1 < __s)) {
            bVar1 = __s[-1];
            if (bVar1 != 0x2b && bVar1 != 0x2d) goto LAB_0003c838;
            iVar14 = FUN_0003f110(iVar3,100);
            FUN_0003f1ec(iVar3,100);
            bVar20 = true;
            iVar11 = iVar14 * 0x3c + extraout_r1;
            iVar14 = iVar11 * 0x3c;
            if (bVar1 == 0x2b) {
              iVar14 = iVar11 * -0x3c;
            }
          }
          else {
LAB_0003c838:
            bVar20 = false;
          }
          pbVar12 = local_48;
          if (((int)local_48 - (int)__s == 8) && (iVar13 == -1 && iVar16 == -1)) {
            if (iVar18 == -1) {
              iVar16 = FUN_0003f110(iVar3,10000);
              FUN_0003f1ec(iVar3,10000);
              iVar13 = FUN_0003f110(extraout_r1_00,100);
              iVar13 = iVar13 + -1;
              FUN_0003f1ec(iVar3,100);
              bVar20 = true;
              iVar18 = extraout_r1_01;
            }
            else {
              iVar13 = -1;
              iVar16 = iVar13;
            }
          }
          if ((bool)((bVar19 ^ 1U) & (bVar20 ^ 1U))) {
            if (iVar18 == -1) {
              if (iVar3 - 1U < 0x1f) {
                bVar20 = true;
                iVar18 = iVar3;
                bVar19 = bVar20;
              }
              else {
                bVar20 = false;
                bVar19 = true;
              }
            }
            else {
              bVar20 = false;
              bVar19 = bVar20;
            }
          }
          if ((bool)(bVar19 & (bVar20 ^ 1U))) {
            if (iVar16 != -1) {
              return -1;
            }
            iVar16 = iVar3;
            if (iVar3 < 0x76c) {
              if (iVar3 < 0x47) {
                iVar16 = iVar3 + 2000;
              }
              else {
                iVar16 = iVar3 + 0x76c;
              }
            }
            bVar19 = iVar18 != -1;
          }
          else if (!bVar20) {
            return -1;
          }
        }
      }
      goto LAB_0003c51c;
    }
    local_48 = (byte *)0x0;
    memset(auStack_44,0,0x1c);
    iVar3 = sscanf((char *)__s,"%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",&local_48
                  );
    if (iVar3 == 0) {
      sVar4 = 0;
      if (iVar17 == -1) {
        ppuVar10 = &PTR_DAT_0004816c;
        goto LAB_0003c618;
      }
      bVar20 = false;
    }
    else {
      sVar4 = strlen((char *)&local_48);
      bVar20 = false;
      if (iVar17 == -1) {
        ppuVar10 = &PTR_DAT_0004816c;
        if (3 < sVar4) {
          ppuVar10 = (undefined **)&DAT_00048188;
        }
LAB_0003c618:
        iVar17 = 0;
        do {
          iVar3 = FUN_0003cc64(&local_48,ppuVar10[iVar17]);
          if (iVar3 != 0) goto LAB_0003c648;
          iVar17 = iVar17 + 1;
        } while (iVar17 != 7);
        iVar17 = -1;
LAB_0003c648:
        bVar20 = false;
        if (iVar17 != -1) {
          bVar20 = true;
        }
      }
    }
    if ((bool)(iVar13 == -1 & (bVar20 ^ 1U))) {
      iVar13 = 0;
      do {
        iVar3 = FUN_0003cc64(&local_48,(&DAT_000484d4)[iVar13]);
        if (iVar3 != 0) goto LAB_0003c694;
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0xc);
      iVar13 = -1;
LAB_0003c694:
      bVar20 = false;
      if (iVar13 != -1) {
        bVar20 = true;
      }
    }
    if ((bool)(iVar14 == -1 & (bVar20 ^ 1U))) {
      puVar15 = (undefined4 *)&DAT_000481a4;
      while (iVar14 = FUN_0003cc64(&local_48,puVar15), iVar14 == 0) {
        puVar15 = puVar15 + 3;
        if (puVar15 == &DAT_000484d4) {
          return -1;
        }
      }
      iVar14 = puVar15[2] * 0x3c;
    }
    else if (!bVar20) {
      return -1;
    }
    pbVar12 = __s + sVar4;
  } while( true );
}



undefined4 FUN_0003caf4(time_t param_1,tm *param_2,undefined4 param_3)

{
  tm *ptVar1;
  undefined4 uVar2;
  time_t local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  ptVar1 = gmtime_r(&local_c,param_2);
  if (ptVar1 == (tm *)0x0) {
    uVar2 = 0x2b;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0003cb1c(undefined4 param_1)

{
  switch(param_1) {
  case 0x61:
    return 0x41;
  case 0x62:
    param_1 = 0x42;
    break;
  case 99:
    return 0x43;
  case 100:
    return 0x44;
  case 0x65:
    return 0x45;
  case 0x66:
    return 0x46;
  case 0x67:
    return 0x47;
  case 0x68:
    return 0x48;
  case 0x69:
    return 0x49;
  case 0x6a:
    return 0x4a;
  case 0x6b:
    return 0x4b;
  case 0x6c:
    return 0x4c;
  case 0x6d:
    return 0x4d;
  case 0x6e:
    return 0x4e;
  case 0x6f:
    return 0x4f;
  case 0x70:
    return 0x50;
  case 0x71:
    return 0x51;
  case 0x72:
    return 0x52;
  case 0x73:
    return 0x53;
  case 0x74:
    return 0x54;
  case 0x75:
    return 0x55;
  case 0x76:
    return 0x56;
  case 0x77:
    return 0x57;
  case 0x78:
    return 0x58;
  case 0x79:
    return 0x59;
  case 0x7a:
    return 0x5a;
  }
  return param_1;
}



bool FUN_0003cc64(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(param_1 + -1);
  do {
    pcVar5 = param_2;
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
    if (cVar1 == '\0') break;
    cVar2 = *pcVar5;
    if (cVar2 == '\0') break;
    iVar3 = FUN_0003cb1c(cVar1);
    iVar4 = FUN_0003cb1c(cVar2);
    param_2 = pcVar5 + 1;
  } while (iVar3 == iVar4);
  iVar3 = FUN_0003cb1c(cVar1);
  iVar4 = FUN_0003cb1c(*pcVar5);
  return iVar3 == iVar4;
}



bool FUN_0003cccc(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(param_1 + -1);
  while( true ) {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
    if (cVar1 == '\0') break;
    cVar2 = *param_2;
    if (cVar2 == '\0') break;
    if (param_3 == 0) {
      return true;
    }
    iVar3 = FUN_0003cb1c(cVar1);
    iVar4 = FUN_0003cb1c(cVar2);
    if (iVar3 != iVar4) goto LAB_0003cd2c;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  }
  if (param_3 == 0) {
    return true;
  }
LAB_0003cd2c:
  iVar3 = FUN_0003cb1c(cVar1);
  iVar4 = FUN_0003cb1c(*param_2);
  return iVar3 == iVar4;
}



void FUN_0003cd58(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    uVar1 = FUN_0003cb1c(*(undefined1 *)(param_2 + iVar2));
    *(undefined1 *)(param_1 + iVar2) = uVar1;
    if (*(char *)(param_2 + iVar2) == '\0') {
      return;
    }
    iVar2 = iVar2 + 1;
  } while (param_3 != iVar2);
  return;
}



void FUN_0003cd98(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      (*DAT_000515c8)();
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      (*DAT_000515c8)();
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    (*DAT_000515c8)(param_1);
    param_1 = iVar1;
  }
  return;
}



int FUN_0003cdf4(char *param_1,addrinfo *param_2,addrinfo *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  void *__dest;
  int iVar3;
  int *piVar4;
  int *piVar5;
  addrinfo *paVar6;
  addrinfo *local_2c;
  addrinfo *paStack_28;
  
  *param_4 = 0;
  local_2c = param_2;
  paStack_28 = param_3;
  iVar1 = getaddrinfo(param_1,(char *)param_2,param_3,&local_2c);
  if (iVar1 == 0) {
    piVar4 = (int *)0x0;
    piVar5 = (int *)0x0;
    for (paVar6 = local_2c; paVar6 != (addrinfo *)0x0; paVar6 = paVar6->ai_next) {
      piVar2 = piVar5;
      if (((paVar6->ai_family == 2) && (paVar6->ai_addr != (sockaddr *)0x0)) &&
         (0xf < paVar6->ai_addrlen)) {
        piVar2 = (int *)(*DAT_000515c4)(0x20);
        if (piVar2 != (int *)0x0) {
          *piVar2 = paVar6->ai_flags;
          piVar2[1] = paVar6->ai_family;
          piVar2[2] = paVar6->ai_socktype;
          iVar3 = paVar6->ai_protocol;
          piVar2[4] = 0x10;
          piVar2[3] = iVar3;
          piVar2[6] = 0;
          piVar2[5] = 0;
          piVar2[7] = 0;
          __dest = (void *)(*DAT_000515c4)(0x10);
          piVar2[6] = (int)__dest;
          if (__dest != (void *)0x0) {
            memcpy(__dest,paVar6->ai_addr,0x10);
            if (paVar6->ai_canonname != (char *)0x0) {
              iVar3 = (*DAT_000515d0)();
              piVar2[5] = iVar3;
              if (iVar3 == 0) {
                (*DAT_000515c8)(piVar2[6]);
                goto LAB_0003cf00;
              }
            }
            if (piVar4 == (int *)0x0) {
              piVar4 = piVar2;
            }
            if (piVar5 != (int *)0x0) {
              piVar5[7] = (int)piVar2;
            }
            goto LAB_0003cf20;
          }
LAB_0003cf00:
          (*DAT_000515c8)(piVar2);
        }
        iVar1 = -10;
        break;
      }
LAB_0003cf20:
      piVar5 = piVar2;
    }
    if (local_2c != (addrinfo *)0x0) {
      freeaddrinfo(local_2c);
    }
    if (iVar1 == 0) {
      if (piVar4 == (int *)0x0) {
        iVar1 = -2;
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      FUN_0003cd98(piVar4);
      piVar4 = (int *)0x0;
    }
    *param_4 = piVar4;
  }
  return iVar1;
}



int FUN_0003cf7c(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *__src;
  undefined4 *puVar7;
  uint uVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar8 = (param_2 & 0xff) << 8 | (param_2 & 0xffff) >> 8;
    iVar4 = 0;
    iVar6 = 0;
    puVar7 = param_1;
    for (iVar5 = 0; __src = *(void **)(param_1[4] + iVar5), __src != (void *)0x0; iVar5 = iVar5 + 4)
    {
      iVar1 = (*DAT_000515d4)(1,0x20,DAT_000515d4,param_4,puVar7,uVar8,param_3);
      if (iVar1 == 0) goto LAB_0003d0b0;
      iVar2 = (*DAT_000515d0)(*param_1);
      *(int *)(iVar1 + 0x14) = iVar2;
      if (iVar2 == 0) {
LAB_0003d030:
        (*DAT_000515c8)(iVar1);
LAB_0003d0b0:
        FUN_0003cd98(iVar4);
        return 0;
      }
      puVar3 = (undefined4 *)(*DAT_000515d4)(1,0x10);
      *(undefined4 **)(iVar1 + 0x18) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        (*DAT_000515c8)(*(undefined4 *)(iVar1 + 0x14));
        goto LAB_0003d030;
      }
      iVar2 = param_1[2];
      if (iVar4 == 0) {
        iVar4 = iVar1;
      }
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x1c) = iVar1;
      }
      param_4 = 1;
      *(int *)(iVar1 + 4) = iVar2;
      *(undefined4 *)(iVar1 + 8) = 1;
      *(undefined4 *)(iVar1 + 0x10) = 0x10;
      if (iVar2 == 2) {
        param_4 = uVar8;
        memcpy(puVar3 + 1,__src,4);
        *(short *)puVar3 = (short)param_1[2];
        *(short *)((int)puVar3 + 2) = (short)param_4;
        puVar7 = puVar3;
        uVar8 = param_4;
      }
      iVar6 = iVar1;
    }
  }
  return iVar4;
}



undefined4 FUN_0003d0d0(int param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(*DAT_000515c4)(0x20);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = (*DAT_000515d0)(param_3);
  if (iVar2 == 0) {
    (*DAT_000515c8)(piVar1);
    return 0;
  }
  if (param_1 == 2) {
    pvVar3 = memcpy(piVar1 + 5,param_2,4);
    piVar1[1] = 0;
    piVar1[2] = 2;
    piVar1[3] = 4;
    piVar1[7] = 0;
    piVar1[4] = (int)(piVar1 + 6);
    *piVar1 = iVar2;
    piVar1[6] = (int)pvVar3;
    uVar4 = FUN_0003cf7c(piVar1,param_4);
    (*DAT_000515c8)(iVar2);
    (*DAT_000515c8)(piVar1);
    return uVar4;
  }
  (*DAT_000515c8)();
  (*DAT_000515c8)(piVar1);
  return 0;
}



undefined4 FUN_0003d1c8(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  pcVar3 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  iVar1 = inet_pton(2,param_1,&uStack_14);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0003d0d0(2,&uStack_14,param_1,param_2,pcVar3);
  }
  return uVar2;
}



char * FUN_0003d210(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1 + param_3 + -1;
  do {
    pcVar2 = pcVar1;
    if (pcVar2 < param_1) {
      return (char *)0x0;
    }
    pcVar1 = pcVar2 + -1;
  } while (*pcVar2 != param_2);
  return pcVar2;
}



undefined4 FUN_0003d254(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)(*DAT_000515c4)(0xc);
  *param_2 = (int)puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = 0;
    uVar2 = FUN_0003a350(&LAB_0003d248);
    *(undefined4 *)(puVar1 + 8) = uVar2;
    if (*(int *)(*param_2 + 8) != 0) {
      return 0;
    }
    (*DAT_000515c8)();
    *param_2 = 0;
  }
  return 0x1b;
}



void FUN_0003d2d0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0003a4c8(*(int *)(param_1 + 8),0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  (*DAT_000515c8)(param_1);
  return;
}



undefined4 FUN_0003d310(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0003a388(*(int *)(param_1 + 8),*(undefined4 *)(*(int *)(param_1 + 8) + 4),param_2,
                       param_4,param_4);
  if (iVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(param_2 + 0x488) = param_1;
    uVar2 = 0;
    *(int *)(param_1 + 4) = iVar1 + 1;
  }
  return uVar2;
}



undefined4 FUN_0003d34c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = (int *)piVar1[2];
  }
  FUN_0003a420(*(int **)(param_1 + 8),piVar1,0,*piVar1,param_4);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(undefined4 *)(param_2 + 0x488) = 0;
  return 1;
}



char * FUN_0003d3a8(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *__dest;
  char *__s2;
  char *pcVar7;
  
  sVar2 = strlen(param_1);
  pcVar3 = (char *)(*DAT_000515c4)(sVar2 + 1);
  if (pcVar3 != (char *)0x0) {
    __s = (char *)(*DAT_000515d0)(param_1);
    if (__s == (char *)0x0) {
      (*DAT_000515c8)(pcVar3);
      return (char *)0x0;
    }
    pcVar4 = strchr(__s,0x3f);
    __s2 = __s;
    __dest = pcVar3;
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    do {
      iVar5 = strncmp("./",__s2,2);
      if (iVar5 == 0) {
LAB_0003d468:
        __s2 = __s2 + 2;
      }
      else {
        iVar5 = strncmp("../",__s2,3);
        if (iVar5 == 0) {
          __s2 = __s2 + 3;
        }
        else {
          iVar5 = strncmp("/./",__s2,3);
          if (iVar5 == 0) goto LAB_0003d468;
          iVar5 = strcmp("/.",__s2);
          if (iVar5 == 0) {
            __s2 = __s2 + 1;
            *__s2 = '/';
          }
          else {
            iVar5 = strncmp("/../",__s2,4);
            if (iVar5 == 0) {
              __s2 = __s2 + 3;
              do {
                if (__dest <= pcVar3) break;
                pcVar6 = __dest + -1;
                __dest = __dest + -1;
              } while (*pcVar6 != '/');
            }
            else {
              iVar5 = strcmp("/..",__s2);
              if (iVar5 != 0) {
                iVar5 = strcmp(".",__s2);
                if ((iVar5 == 0) || (iVar5 = strcmp("..",__s2), iVar5 == 0)) {
                  *__s2 = '\0';
                }
                else {
                  pcVar6 = __s2 + -1;
                  do {
                    pcVar7 = __dest;
                    __s2 = pcVar6 + 2;
                    __dest = pcVar7 + 1;
                    *pcVar7 = pcVar6[1];
                    pcVar1 = pcVar6 + 2;
                    pcVar6 = pcVar6 + 1;
                  } while (*pcVar1 != '/' && *pcVar1 != '\0');
                  pcVar7[1] = '\0';
                }
                goto LAB_0003d57c;
              }
              __s2 = __s2 + 2;
              *__s2 = '/';
              do {
                if (__dest <= pcVar3) break;
                pcVar6 = __dest + -1;
                __dest = __dest + -1;
              } while (*pcVar6 != '/');
            }
            *__dest = '\0';
          }
        }
      }
LAB_0003d57c:
    } while (*__s2 != '\0');
    if (pcVar4 != (char *)0x0) {
      sVar2 = strlen(param_1 + ((int)pcVar4 - (int)__s));
      memcpy(__dest,param_1 + ((int)pcVar4 - (int)__s),sVar2 + 1);
    }
    (*DAT_000515c8)(__s);
  }
  return pcVar3;
}



undefined4
FUN_0003d5f4(int param_1,byte *param_2,size_t param_3,undefined4 *param_4,size_t *param_5)

{
  uint uVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  byte local_24 [4];
  
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  iVar2 = FUN_0003f048(param_3 << 2,3);
  __s = (char *)(*DAT_000515c4)(iVar2 + 4);
  pcVar7 = __s;
  if (__s == (char *)0x0) {
    uVar4 = 0x1b;
  }
  else {
    while (param_3 != 0) {
      iVar5 = 0;
      iVar2 = 0;
      do {
        if (param_3 == 0) {
          local_24[iVar5] = 0;
        }
        else {
          local_24[iVar5] = *param_2;
          iVar2 = iVar2 + 1;
          param_3 = param_3 - 1;
          param_2 = param_2 + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 3);
      uVar1 = (uint)(local_24[0] >> 2);
      uVar6 = (uint)(local_24[1] >> 4) | (local_24[0] & 3) << 4;
      uVar8 = (uint)(local_24[2] >> 6) | (local_24[1] & 0xf) << 2;
      if (iVar2 == 1) {
        FUN_000365a4(pcVar7,5,"%c%c==",*(undefined1 *)(param_1 + uVar1),
                     *(undefined1 *)(param_1 + uVar6));
      }
      else if (iVar2 == 2) {
        FUN_000365a4(pcVar7,5,"%c%c%c=",*(undefined1 *)(param_1 + uVar1),
                     *(undefined1 *)(param_1 + uVar6),*(undefined1 *)(param_1 + uVar8));
      }
      else {
        FUN_000365a4(pcVar7,5,"%c%c%c%c",*(undefined1 *)(param_1 + uVar1),
                     *(undefined1 *)(param_1 + uVar6),*(undefined1 *)(param_1 + uVar8),
                     *(undefined1 *)(param_1 + (local_24[2] & 0x3f)));
      }
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    *param_4 = __s;
    sVar3 = strlen(__s);
    *param_5 = sVar3;
    uVar4 = 0;
  }
  return uVar4;
}



void FUN_0003d938(void)

{
  FUN_0003d5f4("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
  return;
}



size_t FUN_0003d950(int *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  FILE *pFVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (*(int *)(iVar3 + 4) == 2) {
    if ((code *)param_1[3] == (code *)0x0) {
      return 0;
    }
    sVar1 = (*(code *)param_1[3])(param_2,1,param_3,*(undefined4 *)(iVar3 + 8));
  }
  else {
    if (param_1[2] == 0) {
      pFVar2 = fopen64(*(char **)(iVar3 + 8),"rb");
      param_1[2] = (int)pFVar2;
      if (pFVar2 == (FILE *)0x0) {
        return 0xffffffff;
      }
    }
    sVar1 = fread(param_2,1,param_3,(FILE *)param_1[2]);
  }
  if (sVar1 != 0) {
    return sVar1;
  }
  if ((FILE *)param_1[2] != (FILE *)0x0) {
    fclose((FILE *)param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = *(int *)*param_1;
  return 0;
}



void FUN_0003da14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00028538();
  uVar2 = FUN_00028538(param_1);
  FUN_000375e8("------------------------%08x%08x",uVar1,uVar2,param_4);
  return;
}



undefined4 FUN_0003da44(undefined4 *param_1,uint param_2,char *param_3,size_t param_4,uint *param_5)

{
  undefined4 *puVar1;
  void *__dest;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  stat64 sStack_88;
  
  puVar1 = (undefined4 *)(*DAT_000515c4)(0x10);
  if (puVar1 == (undefined4 *)0x0) {
LAB_0003db7c:
    uVar3 = 0x1b;
  }
  else {
    *puVar1 = 0;
    if (param_2 < 2) {
      if (param_4 == 0) {
        param_4 = strlen(param_3);
      }
      __dest = (void *)(*DAT_000515c4)(param_4 + 1);
      puVar1[2] = __dest;
      if (__dest == (void *)0x0) {
        (*DAT_000515c8)(puVar1);
        goto LAB_0003db7c;
      }
      memcpy(__dest,param_3,param_4);
      puVar1[3] = param_4;
      *(undefined1 *)(puVar1[2] + param_4) = 0;
    }
    else {
      puVar1[2] = param_3;
    }
    puVar4 = (undefined4 *)*param_1;
    puVar1[1] = param_2;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = puVar1;
    }
    *param_1 = puVar1;
    if (param_5 != (uint *)0x0) {
      if (param_2 == 3) {
        iVar2 = FUN_00039e30(&DAT_0004659b,puVar1[2]);
        if (iVar2 == 0) {
          iVar2 = stat64((char *)puVar1[2],&sStack_88);
          if ((iVar2 == 0) && ((sStack_88.st_mode & 0xf000) != 0x4000)) {
            uVar5 = *param_5;
            *param_5 = (uint)sStack_88.st_size + uVar5;
            param_5[1] = sStack_88.st_size._4_4_ + param_5[1] +
                         (uint)CARRY4((uint)sStack_88.st_size,uVar5);
            return 0;
          }
          return 0x2b;
        }
      }
      else {
        uVar5 = *param_5;
        *param_5 = uVar5 + param_4;
        param_5[1] = param_5[1] + (uint)CARRY4(uVar5,param_4);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_0003db94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_1018 [4100];
  
  FUN_0003759c(auStack_1018,0x1000,param_3);
  FUN_0003da44(param_1,0,auStack_1018,0,param_2);
  return;
}



undefined4 FUN_0003dc08(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *__s;
  
  __s = *(char **)(param_1 + 0x2c);
  if (__s == (char *)0x0) {
    pcVar3 = (char *)(*DAT_000515d0)(*(undefined4 *)(param_1 + 0xc));
    pcVar2 = DAT_000515d0;
    if (pcVar3 == (char *)0x0) {
      return 0x1b;
    }
    __xpg_basename(pcVar3);
    __s = (char *)(*pcVar2)();
    (*DAT_000515c8)(pcVar3);
    pcVar3 = __s;
    if (__s == (char *)0x0) {
      return 0x1b;
    }
  }
  else {
    pcVar3 = (char *)0x0;
  }
  pcVar4 = strchr(__s,0x5c);
  if ((pcVar4 == (char *)0x0) && (pcVar4 = strchr(__s,0x22), pcVar4 == (char *)0x0)) {
    pcVar4 = (char *)0x0;
  }
  else {
    sVar5 = strlen(__s);
    pcVar4 = (char *)(*DAT_000515c4)(sVar5 * 2 + 1);
    pcVar7 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      if (pcVar3 != (char *)0x0) {
        (*DAT_000515c8)(pcVar3);
      }
      return 0x1b;
    }
    while( true ) {
      cVar1 = *__s;
      if (cVar1 == '\0') break;
      if (cVar1 == '\\' || cVar1 == '\"') {
        *pcVar7 = '\\';
      }
      if (cVar1 == '\\' || cVar1 == '\"') {
        pcVar7 = pcVar7 + 1;
      }
      *pcVar7 = *__s;
      pcVar7 = pcVar7 + 1;
      __s = __s + 1;
    }
    *pcVar7 = '\0';
    __s = pcVar4;
  }
  uVar6 = FUN_0003db94(param_2,param_3,"; filename=\"%s\"",__s);
  if (pcVar4 != (char *)0x0) {
    (*DAT_000515c8)(pcVar4);
  }
  if (pcVar3 != (char *)0x0) {
    (*DAT_000515c8)(pcVar3);
  }
  return uVar6;
}



void * FUN_0003dd78(char *param_1,size_t param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (param_1 == (char *)0x0) {
      pvVar1 = (void *)(*DAT_000515d0)(&DAT_000467ca);
      return pvVar1;
    }
    param_2 = strlen(param_1);
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  pvVar1 = (void *)(*DAT_000515c4)(iVar2 + param_2);
  if ((pvVar1 != (void *)0x0) && (memcpy(pvVar1,param_1,param_2), iVar2 != 0)) {
    *(undefined1 *)((int)pvVar1 + param_2) = 0;
  }
  return pvVar1;
}



void FUN_0003e750(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if ((int *)*param_1 == (int *)0x0) {
    return;
  }
  do {
    piVar2 = (int *)*piVar1;
    if ((uint)piVar1[1] < 2) {
      (*DAT_000515c8)(piVar1[2]);
    }
    (*DAT_000515c8)(piVar1);
    piVar1 = piVar2;
  } while (piVar2 != (int *)0x0);
  *param_1 = 0;
  return;
}



void FUN_0003e7a8(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar1 = (int *)*param_1;
      if (param_1[9] != 0) {
        FUN_0003e7a8();
      }
      if (((param_1[10] & 4U) == 0) && (param_1[1] != 0)) {
        (*DAT_000515c8)();
      }
      if (((param_1[10] & 0x58U) == 0) && (param_1[3] != 0)) {
        (*DAT_000515c8)();
      }
      if (param_1[7] != 0) {
        (*DAT_000515c8)();
      }
      if (param_1[0xb] != 0) {
        (*DAT_000515c8)();
      }
      (*DAT_000515c8)(param_1);
      param_1 = piVar1;
    } while (piVar1 != (int *)0x0);
    return;
  }
  return;
}



uint FUN_0003e854(int param_1,undefined4 *param_2,int *param_3,char *param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FILE *__stream;
  size_t sVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 local_238;
  undefined4 local_234;
  int iStack_230;
  int iStack_22c;
  undefined1 auStack_228 [516];
  
  iStack_230 = 0;
  iStack_22c = 0;
  local_238 = 0;
  *param_2 = 0;
  if (param_3 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    piVar1 = (int *)FUN_0003da14(param_1);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0x1b;
    }
    else {
      pcVar7 = "Content-Type: multipart/form-data";
      if (param_4 != (char *)0x0) {
        pcVar7 = param_4;
      }
      piVar11 = piVar1;
      uVar2 = FUN_0003db94(&local_238,0,"%s; boundary=%s\r\n",pcVar7,piVar1);
      if (uVar2 == 0) {
        local_234 = local_238;
        iVar3 = 0;
        do {
          if (((((iStack_230 != 0 || iStack_22c != 0) &&
                (uVar2 = FUN_0003db94(&local_238,&iStack_230,"\r\n",iStack_22c,piVar11), uVar2 != 0)
                ) || (uVar2 = FUN_0003db94(&local_238,&iStack_230,"--%s\r\n",piVar1,piVar11),
                     uVar2 != 0)) ||
              ((uVar2 = FUN_0003db94(&local_238,&iStack_230,
                                     "Content-Disposition: form-data; name=\""), uVar2 != 0 ||
               (piVar11 = &iStack_230, uVar2 = FUN_0003da44(&local_238,0,param_3[1],param_3[2]),
               uVar2 != 0)))) || (uVar2 = FUN_0003db94(&local_238,&iStack_230,"\""), uVar2 != 0))
          goto LAB_0003ec84;
          if (param_3[9] != 0) {
            if (iVar3 != 0) {
              (*DAT_000515c8)(iVar3);
            }
            iVar3 = FUN_0003da14(param_1);
            if (iVar3 == 0) {
              uVar2 = 0x1b;
              goto LAB_0003ec84;
            }
            uVar2 = FUN_0003db94(&local_238,&iStack_230,
                                 "\r\nContent-Type: multipart/mixed; boundary=%s\r\n",iVar3,piVar11)
            ;
            if (uVar2 != 0) goto LAB_0003ec84;
          }
          uVar2 = 0;
          piVar9 = param_3;
          do {
            if (param_3[9] == 0) {
              if ((param_3[10] & 0x51U) != 0) {
                if ((param_3[0xb] != 0) || ((param_3[10] & 1U) != 0)) {
                  uVar2 = FUN_0003dc08(param_3,&local_238,&iStack_230);
                }
                goto LAB_0003ea28;
              }
            }
            else {
              uVar2 = FUN_0003db94(&local_238,&iStack_230,
                                   "\r\n--%s\r\nContent-Disposition: attachment",iVar3,piVar11);
              if (uVar2 != 0) goto LAB_0003ec84;
              uVar2 = FUN_0003dc08(piVar9,&local_238,&iStack_230);
LAB_0003ea28:
              if (uVar2 != 0) goto LAB_0003ec84;
              uVar2 = 0;
            }
            if ((piVar9[7] != 0) &&
               (uVar2 = FUN_0003db94(&local_238,&iStack_230,"\r\nContent-Type: %s"), uVar2 != 0))
            goto LAB_0003ec84;
            for (puVar10 = (undefined4 *)piVar9[8]; puVar10 != (undefined4 *)0x0;
                puVar10 = (undefined4 *)puVar10[1]) {
              uVar2 = FUN_0003db94(&local_238,&iStack_230,&DAT_000487f5,*puVar10);
              if (uVar2 != 0) goto LAB_0003ec84;
            }
            if ((uVar2 != 0) ||
               (uVar2 = FUN_0003db94(&local_238,&iStack_230,"\r\n\r\n"), uVar2 != 0))
            goto LAB_0003ec84;
            uVar8 = param_3[10];
            if ((uVar8 & 3) == 0) {
              if ((uVar8 & 0x10) == 0) {
                if ((uVar8 & 0x40) == 0) {
                  uVar6 = 1;
                }
                else {
                  uVar6 = 2;
                }
              }
              else {
                uVar6 = 1;
              }
LAB_0003ec04:
              piVar11 = &iStack_230;
              uVar8 = FUN_0003da44(&local_238,uVar6);
            }
            else {
              iVar4 = FUN_00039e30(&DAT_0004659b,piVar9[3]);
              __stream = stdin;
              if (iVar4 == 0) {
                __stream = fopen64((char *)piVar9[3],"rb");
              }
              if (__stream == (FILE *)0x0) {
                if (param_1 != 0) {
                  FUN_00030648(param_1,"couldn\'t open file \"%s\"",piVar9[3]);
                }
                *param_2 = 0;
                uVar8 = 0x1a;
              }
              else {
                if (__stream != stdin) {
                  fclose(__stream);
                  uVar6 = 3;
                  goto LAB_0003ec04;
                }
                do {
                  sVar5 = fread(auStack_228,1,0x200,__stream);
                  uVar8 = uVar2;
                  if (sVar5 == 0) break;
                  piVar11 = &iStack_230;
                  uVar8 = FUN_0003da44(&local_238,1,auStack_228);
                } while (uVar8 == 0);
              }
            }
            uVar2 = uVar8;
            piVar9 = (int *)piVar9[9];
            iVar4 = 1 - uVar2;
            if (1 < uVar2) {
              iVar4 = 0;
            }
            if (piVar9 == (int *)0x0) {
              iVar4 = 0;
            }
          } while (iVar4 != 0);
          if ((uVar2 != 0) ||
             ((param_3[9] != 0 &&
              (uVar2 = FUN_0003db94(&local_238,&iStack_230,"\r\n--%s--",iVar3,piVar11), uVar2 != 0))
             )) goto LAB_0003ec84;
          param_3 = (int *)*param_3;
        } while (param_3 != (int *)0x0);
        uVar2 = FUN_0003db94(&local_238,&iStack_230,"\r\n--%s--\r\n",piVar1,piVar11);
        if (uVar2 == 0) {
          *param_5 = iStack_230;
          param_5[1] = iStack_22c;
          if (iVar3 != 0) {
            (*DAT_000515c8)(iVar3);
          }
          (*DAT_000515c8)(piVar1);
          uVar2 = 0;
          *param_2 = local_234;
        }
        else {
LAB_0003ec84:
          FUN_0003e750(&local_234);
          if (iVar3 != 0) {
            (*DAT_000515c8)(iVar3);
          }
          (*DAT_000515c8)(piVar1);
        }
      }
      else {
        (*DAT_000515c8)(piVar1);
      }
    }
  }
  return uVar2;
}



bool FUN_0003ed64(int *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_2 == 0;
}



int FUN_0003ed88(undefined4 param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iStack_2034;
  undefined1 auStack_2030 [8];
  undefined1 auStack_2028 [8];
  FILE *local_2020;
  undefined1 auStack_2018 [8192];
  
  iVar1 = FUN_0003e854(0,&iStack_2034,param_1,0,auStack_2030);
  if (iVar1 == 0) {
    for (piVar4 = (int *)iStack_2034; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      if (piVar4[1] - 2U < 2) {
        FUN_0003ed64(auStack_2028,piVar4);
        do {
          uVar2 = FUN_0003d950(auStack_2028,auStack_2018,0x2000);
          if ((0x2000 < uVar2) || (uVar3 = (*param_3)(param_2,auStack_2018,uVar2), uVar2 != uVar3))
          {
            if (local_2020 != (FILE *)0x0) {
              fclose(local_2020);
            }
            goto LAB_0003ee6c;
          }
        } while (uVar2 != 0);
      }
      else {
        iVar5 = piVar4[3];
        iVar1 = (*param_3)(param_2,piVar4[2],iVar5);
        if (iVar5 != iVar1) {
LAB_0003ee6c:
          FUN_0003e750(&iStack_2034);
          return -1;
        }
      }
    }
    FUN_0003e750(&iStack_2034);
    iVar1 = 0;
  }
  return iVar1;
}



int FUN_0003eea0(int param_1,int param_2,int param_3,int *param_4)

{
  void *__src;
  size_t __n;
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t __n_00;
  
  param_3 = param_3 * param_2;
  iVar3 = 0;
  if (*param_4 != 0) {
    uVar1 = *(int *)(*param_4 + 4) - 2;
    if ((uVar1 < 2) && (iVar3 = FUN_0003d950(param_4,param_1,param_3,uVar1,param_4), iVar3 != 0)) {
      return iVar3;
    }
    iVar3 = 0;
    do {
      __n_00 = param_3 - iVar3;
      __n = *(int *)(*param_4 + 0xc) - param_4[1];
      __src = (void *)(*(int *)(*param_4 + 8) + param_4[1]);
      if (__n_00 < __n) {
        memcpy((void *)(param_1 + iVar3),__src,__n_00);
        param_4[1] = param_4[1] + __n_00;
        return param_3;
      }
      memcpy((void *)(param_1 + iVar3),__src,__n);
      iVar2 = *(int *)*param_4;
      iVar3 = iVar3 + (((int *)*param_4)[3] - param_4[1]);
      param_4[1] = 0;
      *param_4 = iVar2;
    } while ((iVar2 != 0) && (*(uint *)(iVar2 + 4) < 2));
  }
  return iVar3;
}



undefined4 FUN_0003ef74(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = piVar2[2];
    iVar3 = *piVar2;
    *param_2 = piVar2[3];
    *param_1 = iVar3;
  }
  return uVar1;
}



undefined4 FUN_0003ef9c(char *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = getenv(param_1);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    uVar2 = (*DAT_000515d0)();
    return uVar2;
  }
  return 0;
}



void FUN_0003f008(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    (*DAT_000515c8)();
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  (*DAT_000515c8)(param_2);
  return;
}



ulonglong FUN_0003f048(uint param_1,uint param_2)

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



void FUN_0003f0f0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0003f048();
    return;
  }
  raise(8);
  return;
}



ulonglong FUN_0003f110(uint param_1,uint param_2)

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



uint FUN_0003f118(uint param_1,uint param_2)

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



void FUN_0003f1ec(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0003f118();
    return;
  }
  raise(8);
  return;
}



ulonglong FUN_0003f214(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar7 = param_4 ^ 0x80000000;
  uVar10 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar9 = (int)uVar10 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar10 == uVar5 && param_1 == param_3 || uVar10 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar9 == -1) || iVar1 == -1) {
    if (iVar9 == -1 || iVar1 == -1) {
      uVar10 = param_3;
      uVar5 = uVar7;
      if (iVar9 == -1) {
        uVar10 = param_1;
        uVar5 = param_2;
      }
      if (iVar9 != -1 || iVar1 != -1) {
        param_3 = uVar10;
        uVar7 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar10 == 0 && bVar14;
      if (uVar10 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (uVar7 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != uVar7) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar10);
    }
    if (uVar10 != uVar5 || param_1 != param_3) {
      if (uVar10 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = uVar7;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar7) {
      return 0;
    }
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar10 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar10 = uVar10 | 0x80000000;
      }
      return CONCAT44(uVar10,param_1 << 1);
    }
    if (uVar10 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_0003f488:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar10 = (param_2 & 0x7fffffff) >> 0x14;
  uVar5 = (param_4 & 0x7fffffff) >> 0x14;
  uVar12 = uVar5 - uVar10;
  bVar14 = uVar12 != 0;
  if (uVar5 < uVar10) {
    uVar12 = -uVar12;
  }
  uVar11 = param_1;
  uVar8 = param_2;
  if (bVar14 && uVar10 <= uVar5) {
    uVar10 = uVar10 + uVar12;
    uVar11 = param_3;
    uVar8 = uVar7;
    param_3 = param_1;
    uVar7 = param_2;
  }
  if (0x36 < uVar12) {
    return CONCAT44(uVar8,uVar11);
  }
  uVar5 = uVar8 & 0xfffff | 0x100000;
  if ((uVar8 & 0x80000000) != 0) {
    bVar14 = uVar11 != 0;
    uVar11 = -uVar11;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar8 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar8 = -(uVar8 + bVar14);
  }
  if (uVar10 == uVar12) {
    uVar8 = uVar8 ^ 0x100000;
    if (uVar10 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar10 = 1;
    }
    else {
      uVar12 = uVar12 - 1;
    }
  }
  uVar7 = -uVar12 + 0x20;
  if ((int)uVar12 < 0x21) {
    uVar13 = param_3 << (uVar7 & 0xff);
    param_3 = param_3 >> (uVar12 & 0xff);
    uVar4 = uVar11 + param_3;
    uVar6 = uVar8 << (uVar7 & 0xff);
    uVar7 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar11,param_3) + ((int)uVar8 >> (uVar12 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar13 = uVar8 << (-uVar12 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar13 = uVar13 | 2;
    }
    uVar12 = (int)uVar8 >> (uVar12 - 0x20 & 0xff);
    uVar7 = uVar11 + uVar12;
    uVar5 = uVar5 + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar11,uVar12);
  }
  param_2 = uVar5 & 0x80000000;
  uVar12 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar13 == 0;
    uVar13 = -uVar13;
    uVar12 = -uVar7;
    uVar7 = -(uVar7 + !bVar14);
    uVar12 = -(uVar5 + (bVar14 <= uVar12));
  }
  if (0xfffff < uVar12) {
    uVar11 = uVar10 - 1;
    if (0x1fffff < uVar12) {
      bVar2 = (byte)uVar12;
      uVar12 = uVar12 >> 1;
      bVar3 = (byte)uVar7;
      uVar7 = (uint)(bVar2 & 1) << 0x1f | uVar7 >> 1;
      uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
      uVar11 = uVar10;
      if (0xffbfffff < uVar10 * 0x200000) goto LAB_0003f488;
    }
LAB_0003f330:
    bVar14 = 0x7fffffff < uVar13;
    if (uVar13 == 0x80000000) {
      bVar14 = (bool)((byte)uVar7 & 1);
    }
    return CONCAT44(uVar12 + uVar11 * 0x100000 + (uint)CARRY4(uVar7,(uint)bVar14) | param_2,
                    uVar7 + bVar14);
  }
  bVar2 = (byte)(uVar13 >> 0x1f);
  uVar13 = uVar13 << 1;
  uVar11 = uVar7 * 2;
  bVar14 = CARRY4(uVar7,uVar7);
  uVar7 = uVar7 * 2 + (uint)bVar2;
  uVar12 = uVar12 * 2 + (uint)(bVar14 || CARRY4(uVar11,(uint)bVar2));
  uVar11 = uVar10 - 2;
  if ((uVar12 & 0x100000) != 0) goto LAB_0003f330;
  uVar10 = uVar7;
  uVar8 = uVar12;
  if (uVar12 == 0) {
    uVar10 = 0;
    uVar8 = uVar7;
  }
  iVar9 = LZCOUNT(uVar8);
  if (uVar12 == 0) {
    iVar9 = iVar9 + 0x20;
  }
  uVar4 = iVar9 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = iVar9 - 0x2b;
  bVar14 = uVar6 == 0;
  uVar7 = uVar6;
  uVar12 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar12 = iVar9 - 0x1f;
    bVar14 = uVar12 == 0;
    uVar7 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar10 = uVar8 << (uVar4 & 0xff);
      uVar8 = uVar8 >> (0xc - uVar12 & 0xff);
      goto LAB_0003f3b0;
    }
  }
  if (bVar14 || (int)uVar12 < 0 != bVar15) {
    uVar13 = 0x20 - uVar7;
  }
  uVar8 = uVar8 << (uVar7 & 0xff);
  if (bVar14 || (int)uVar12 < 0 != bVar15) {
    uVar8 = uVar8 | uVar10 >> (uVar13 & 0xff);
    uVar10 = uVar10 << (uVar7 & 0xff);
  }
LAB_0003f3b0:
  if ((int)uVar4 <= (int)uVar11) {
    return CONCAT44(uVar8 + (uVar11 - uVar4) * 0x100000 | param_2,uVar10);
  }
  uVar7 = ~(uVar11 - uVar4);
  if ((int)uVar7 < 0x1f) {
    if (uVar7 - 0x13 != 0 && -0xd < (int)(uVar7 - 0x1f)) {
      uVar7 = 0xc - (uVar7 - 0x13);
      return CONCAT44(uVar5,uVar10 >> (0x20 - uVar7 & 0xff) | uVar8 << (uVar7 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar7 = uVar7 + 1;
    return CONCAT44(param_2 | uVar8 >> (uVar7 & 0xff),
                    uVar10 >> (uVar7 & 0xff) | uVar8 << (0x20 - uVar7 & 0xff));
  }
  return CONCAT44(uVar5,uVar8 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



ulonglong FUN_0003f218(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar9 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar8 = (int)uVar9 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
    if (iVar8 == -1 || iVar1 == -1) {
      uVar9 = param_3;
      uVar5 = param_4;
      if (iVar8 == -1) {
        uVar9 = param_1;
        uVar5 = param_2;
      }
      if (iVar8 != -1 || iVar1 != -1) {
        param_3 = uVar9;
        param_4 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar9 == 0 && bVar14;
      if (uVar9 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != param_4) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar9);
    }
    if (uVar9 != uVar5 || param_1 != param_3) {
      if (uVar9 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar9 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar9 = uVar9 | 0x80000000;
      }
      return CONCAT44(uVar9,param_1 << 1);
    }
    if (uVar9 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_0003f488:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = (param_2 & 0x7fffffff) >> 0x14;
  uVar5 = (param_4 & 0x7fffffff) >> 0x14;
  uVar11 = uVar5 - uVar9;
  bVar14 = uVar11 != 0;
  if (uVar5 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar7 = param_2;
  if (bVar14 && uVar9 <= uVar5) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar7 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar7,uVar10);
  }
  uVar5 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar7 = param_4 & 0xfffff | 0x100000;
  if ((param_4 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar7 = -(uVar7 + bVar14);
  }
  if (uVar9 == uVar11) {
    uVar7 = uVar7 ^ 0x100000;
    if (uVar9 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar9 = 1;
    }
    else {
      uVar11 = uVar11 - 1;
    }
  }
  uVar13 = -uVar11 + 0x20;
  if ((int)uVar11 < 0x21) {
    uVar12 = param_3 << (uVar13 & 0xff);
    param_3 = param_3 >> (uVar11 & 0xff);
    uVar4 = uVar10 + param_3;
    uVar6 = uVar7 << (uVar13 & 0xff);
    uVar13 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
    uVar13 = uVar10 + uVar11;
    uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
  }
  param_2 = uVar5 & 0x80000000;
  uVar11 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar13;
    uVar13 = -(uVar13 + !bVar14);
    uVar11 = -(uVar5 + (bVar14 <= uVar11));
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      bVar2 = (byte)uVar11;
      uVar11 = uVar11 >> 1;
      bVar3 = (byte)uVar13;
      uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
      uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_0003f488;
    }
LAB_0003f330:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (bool)((byte)uVar13 & 1);
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
                    uVar13 + bVar14);
  }
  bVar2 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar10 = uVar13 * 2;
  bVar14 = CARRY4(uVar13,uVar13);
  uVar13 = uVar13 * 2 + (uint)bVar2;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
  uVar10 = uVar9 - 2;
  if ((uVar11 & 0x100000) != 0) goto LAB_0003f330;
  uVar9 = uVar13;
  uVar7 = uVar11;
  if (uVar11 == 0) {
    uVar9 = 0;
    uVar7 = uVar13;
  }
  iVar8 = LZCOUNT(uVar7);
  if (uVar11 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar4 = iVar8 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar14 = uVar6 == 0;
  uVar11 = uVar6;
  uVar13 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar13 = iVar8 - 0x1f;
    bVar14 = uVar13 == 0;
    uVar11 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar9 = uVar7 << (uVar4 & 0xff);
      uVar7 = uVar7 >> (0xc - uVar13 & 0xff);
      goto LAB_0003f3b0;
    }
  }
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar12 = 0x20 - uVar11;
  }
  uVar7 = uVar7 << (uVar11 & 0xff);
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
    uVar9 = uVar9 << (uVar11 & 0xff);
  }
LAB_0003f3b0:
  if ((int)uVar4 <= (int)uVar10) {
    return CONCAT44(uVar7 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
  }
  uVar11 = ~(uVar10 - uVar4);
  if ((int)uVar11 < 0x1f) {
    if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
      uVar11 = 0xc - (uVar11 - 0x13);
      return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar7 << (uVar11 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar11 = uVar11 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
                    uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
  }
  return CONCAT44(uVar5,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



ulonglong FUN_0003f4c4(uint param_1)

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
      goto LAB_0003f3b0;
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
LAB_0003f3b0:
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



ulonglong FUN_0003f4e8(uint param_1)

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
      goto LAB_0003f3b0;
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
LAB_0003f3b0:
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



ulonglong FUN_0003f510(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
  uint in_r12;
  bool bVar10;
  bool bVar11;
  
  uVar2 = param_1 << 1;
  bVar10 = uVar2 == 0;
  uVar9 = param_1 & 0x80000000;
  uVar8 = (uint)((int)uVar2 >> 3) >> 1;
  uVar1 = uVar9 | uVar8;
  param_1 = param_1 << 0x1d;
  if (!bVar10) {
    param_4 = uVar2 & 0xff000000;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff000000;
  }
  if (!bVar10) {
    return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
  }
  if (uVar2 == 0 || param_4 == 0xff000000) {
    return CONCAT44(uVar1,param_1);
  }
  uVar2 = param_1;
  uVar3 = uVar8;
  if (uVar8 == 0) {
    uVar2 = 0;
    uVar3 = param_1;
  }
  iVar6 = LZCOUNT(uVar3);
  if (uVar8 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar11 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar10 = uVar4 == 0;
  uVar8 = uVar4;
  uVar5 = uVar4;
  if ((int)uVar7 < 0x20) {
    bVar11 = SCARRY4(uVar4,0xc);
    uVar5 = iVar6 - 0x1f;
    bVar10 = uVar5 == 0;
    uVar8 = uVar7;
    if (!bVar10 && -0xd < (int)uVar4) {
      uVar2 = uVar3 << (uVar7 & 0xff);
      uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
      goto LAB_0003f3b0;
    }
  }
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    in_r12 = 0x20 - uVar8;
  }
  uVar3 = uVar3 << (uVar8 & 0xff);
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
    uVar2 = uVar2 << (uVar8 & 0xff);
  }
LAB_0003f3b0:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
  }
  uVar8 = ~(0x380 - uVar7);
  if ((int)uVar8 < 0x1f) {
    if (uVar8 - 0x13 != 0 && -0xd < (int)(uVar8 - 0x1f)) {
      uVar9 = 0xc - (uVar8 - 0x13);
      return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar8 = uVar8 + 1;
    return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
                    uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
  }
  return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



ulonglong FUN_0003f564(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar11 = param_2 & 0x80000000;
  uVar4 = param_2;
  if ((int)uVar11 < 0) {
    bVar13 = param_1 != 0;
    param_1 = -param_1;
    uVar4 = -(param_2 + bVar13);
  }
  iVar10 = 0x432;
  uVar12 = 0;
  if (uVar4 >> 0x16 != 0) {
    iVar10 = 3;
    if (uVar4 >> 0x19 != 0) {
      iVar10 = 6;
    }
    if (uVar4 >> 0x1c != 0) {
      iVar10 = iVar10 + 3;
    }
    iVar10 = iVar10 - ((int)uVar4 >> 0x1f);
    uVar12 = param_1 << (0x20U - iVar10 & 0xff);
    param_1 = param_1 >> iVar10 | uVar4 << (0x20U - iVar10 & 0xff);
    uVar4 = uVar4 >> iVar10;
    iVar10 = iVar10 + 0x432;
  }
  if (0xfffff < uVar4) {
    if (0x1fffff < uVar4) {
      bVar1 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
      iVar10 = iVar10 + 1;
      if (0xffbfffff < (uint)(iVar10 * 0x200000)) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
    }
LAB_0003f330:
    bVar13 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar13 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11,
                    param_1 + bVar13);
  }
  bVar1 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar3 = param_1 * 2;
  bVar13 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
  iVar10 = iVar10 + -1;
  if ((uVar4 & 0x100000) != 0) goto LAB_0003f330;
  uVar3 = param_1;
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  iVar8 = LZCOUNT(uVar5);
  if (uVar4 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar14 = SBORROW4(uVar9,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar13 = uVar6 == 0;
  uVar4 = uVar6;
  uVar7 = uVar6;
  if ((int)uVar9 < 0x20) {
    bVar14 = SCARRY4(uVar6,0xc);
    uVar7 = iVar8 - 0x1f;
    bVar13 = uVar7 == 0;
    uVar4 = uVar9;
    if (!bVar13 && -0xd < (int)uVar6) {
      uVar3 = uVar5 << (uVar9 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar7 & 0xff);
      goto LAB_0003f3b0;
    }
  }
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar12 = 0x20 - uVar4;
  }
  uVar5 = uVar5 << (uVar4 & 0xff);
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar5 = uVar5 | uVar3 >> (uVar12 & 0xff);
    uVar3 = uVar3 << (uVar4 & 0xff);
  }
LAB_0003f3b0:
  if ((int)uVar9 <= iVar10) {
    return CONCAT44(uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11,uVar3);
  }
  uVar4 = ~(iVar10 - uVar9);
  if (0x1e < (int)uVar4) {
    return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar4 - 0x13 == 0 || (int)(uVar4 - 0x1f) < -0xc) {
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar11 | uVar5 >> (uVar4 & 0xff),
                    uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  uVar4 = 0xc - (uVar4 - 0x13);
  return CONCAT44(param_2,uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff)) &
         0x80000000ffffffff;
}



ulonglong FUN_0003f5c4(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar14 = FUN_0003f7a4();
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



ulonglong FUN_0003f7a4(int param_1,uint param_2,int param_3,uint param_4)

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



ulonglong FUN_0003f830(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar16 = FUN_0003f9c4();
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
        if ((uVar6 & 0x100000) != 0) goto LAB_0003f970;
        uVar6 = uVar6 | uVar2;
        uVar2 = 0;
        uVar11 = 0x80000000;
      }
    }
    if ((uVar6 & 0x100000) == 0) {
      uVar6 = uVar6 | uVar2;
      uVar2 = 0;
    }
LAB_0003f970:
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



ulonglong FUN_0003f9c4(int param_1,uint param_2,int param_3,uint param_4)

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
LAB_0003f80c:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar2 == in_r12) {
      param_1 = param_3;
      uVar3 = param_4;
      if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
LAB_0003f7c0:
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
      if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) goto LAB_0003f80c;
      if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) goto LAB_0003f7c0;
    }
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}



uint FUN_0003fa44(uint param_1,uint param_2,uint param_3,uint param_4)

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



void FUN_0003facc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0003fae8(param_3,param_4,param_1,param_2);
  return;
}



undefined4 FUN_0003fae8(undefined4 param_1)

{
  FUN_0003fa44();
  return param_1;
}



undefined1 FUN_0003fafc(void)

{
  undefined1 in_ZR;
  
  FUN_0003fae8();
  return in_ZR;
}



bool FUN_0003fb10(void)

{
  undefined1 in_CY;
  
  FUN_0003fae8();
  return !(bool)in_CY;
}



bool FUN_0003fb24(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  FUN_0003fae8();
  return !(bool)in_CY || (bool)in_ZR;
}



bool FUN_0003fb38(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  FUN_0003facc();
  return !(bool)in_CY || (bool)in_ZR;
}



bool FUN_0003fb4c(void)

{
  undefined1 in_CY;
  
  FUN_0003facc();
  return !(bool)in_CY;
}



uint FUN_0003fb60(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_2 * 2 + 0x200000;
  if (param_2 * 2 < 0xffe00000) {
    if (-1 < iVar2) {
      return 0;
    }
    uVar1 = iVar2 >> 0x15;
    uVar3 = -uVar1 - 0x3e1;
    if (uVar1 < 0xfffffc20 && uVar3 != 0) {
      uVar1 = (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar3 & 0xff);
      if ((param_2 & 0x80000000) != 0) {
        uVar1 = -uVar1;
      }
      return uVar1;
    }
  }
  else if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    return 0;
  }
  param_2 = param_2 & 0x80000000;
  if (param_2 == 0) {
    param_2 = 0x7fffffff;
  }
  return param_2;
}



void FUN_0003fbbc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0003fcfc();
    return;
  }
  raise(8);
  return;
}



void FUN_0003fc04(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0003fd38();
    return;
  }
  raise(8);
  return;
}



undefined8 FUN_0003fc50(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0003fb10(param_1,param_2,0,0);
  if (iVar1 != 0) {
    uVar2 = FUN_0003fc94(param_1,param_2 + -0x80000000);
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = FUN_0003fc94(param_1,param_2);
  return uVar2;
}



undefined8 FUN_0003fc94(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_0003f5c4(param_1,param_2,0,0x3df00000);
  uVar1 = FUN_0003fd74();
  uVar3 = FUN_0003f4c4();
  uVar3 = FUN_0003f5c4((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0x41f00000);
  FUN_0003f214(param_1,param_2,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar2 = FUN_0003fd74();
  return CONCAT44(uVar1,uVar2);
}



void FUN_0003fcfc(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_0003fdc8();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = param_2 - ((int)((ulonglong)lVar2 >> 0x20) + (uint)(param_1 < uVar1));
  return;
}



void FUN_0003fd38(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00040260();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = param_2 - ((int)((ulonglong)lVar2 >> 0x20) + (uint)(param_1 < uVar1));
  return;
}



uint FUN_0003fd74(uint param_1,uint param_2)

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



undefined8 FUN_0003fdc8(uint param_1,uint param_2,uint param_3,uint param_4)

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
        param_3 = FUN_0003f048(1,0);
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
        iVar6 = FUN_0003f048(uVar5,uVar12);
        uVar3 = (param_3 & 0xffff) * iVar6;
        FUN_0003f0f0(uVar5,uVar12);
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
        uVar8 = FUN_0003f048(uVar5 - uVar3,uVar12);
        uVar10 = uVar8 * (param_3 & 0xffff);
        FUN_0003f0f0(uVar5 - uVar3,uVar12);
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
      iVar2 = FUN_0003f048(iVar6,uVar12);
      uVar9 = (param_3 & 0xffff) * iVar2;
      FUN_0003f0f0(iVar6,uVar12);
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
      uVar8 = FUN_0003f048(uVar5 - uVar9,uVar12);
      uVar10 = uVar8 * (param_3 & 0xffff);
      FUN_0003f0f0(uVar5 - uVar9,uVar12);
      uVar5 = param_1 & 0xffff | extraout_r1_04 << 0x10;
      uVar12 = uVar8;
      if (uVar5 < uVar10) {
        uVar12 = uVar8 - 1;
        if ((!CARRY4(uVar5,param_3)) && (uVar5 + param_3 < uVar10)) {
          uVar12 = uVar8 - 2;
        }
      }
      uVar12 = uVar12 | iVar6 << 0x10;
      goto LAB_00040240;
    }
    iVar6 = LZCOUNT(param_3);
    if (iVar6 != 0) {
      param_3 = param_3 << iVar6;
      param_2 = param_1 >> (0x20U - iVar6 & 0xff) | param_2 << iVar6;
      param_1 = param_1 << iVar6;
    }
    uVar12 = param_3 >> 0x10;
    iVar2 = FUN_0003f048(param_2,uVar12);
    uVar9 = (param_3 & 0xffff) * iVar2;
    FUN_0003f0f0(param_2,uVar12);
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
    uVar3 = FUN_0003f048(uVar5 - uVar9,uVar12);
    uVar8 = uVar3 * (param_3 & 0xffff);
    FUN_0003f0f0(uVar5 - uVar9,uVar12);
    uVar5 = param_1 & 0xffff | extraout_r1_00 << 0x10;
    uVar12 = uVar3;
    if (uVar5 < uVar8) {
      uVar12 = uVar3 - 1;
      if ((!CARRY4(uVar5,param_3)) && (uVar5 + param_3 < uVar8)) {
        uVar12 = uVar3 - 2;
      }
    }
    uVar12 = uVar12 | iVar6 << 0x10;
LAB_00040230:
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
        iVar4 = FUN_0003f048(uVar5,uVar12);
        uVar8 = (uVar3 & 0xffff) * iVar4;
        FUN_0003f0f0(uVar5,uVar12);
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
        uVar10 = FUN_0003f048(uVar5 - uVar8,uVar12);
        uVar11 = uVar10 * (uVar3 & 0xffff);
        FUN_0003f0f0(uVar5 - uVar8,uVar12);
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
           (uVar3 = 0, (uint)lVar1 <= param_1 << iVar6 || uVar9 != uVar5)) goto LAB_00040240;
        uVar12 = uVar12 - 1;
        goto LAB_00040230;
      }
      bVar13 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar13 = param_3 <= param_1;
      }
      if (bVar13) {
        uVar3 = 0;
        uVar12 = 1;
        goto LAB_00040240;
      }
    }
    uVar3 = 0;
    uVar12 = uVar3;
  }
LAB_00040240:
  if (uVar7 != 0) {
    bVar13 = uVar12 != 0;
    uVar12 = -uVar12;
    uVar3 = -(uVar3 + bVar13);
  }
  return CONCAT44(uVar3,uVar12);
}



undefined8 FUN_00040260(uint param_1,uint param_2,uint param_3,uint param_4)

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
        param_3 = FUN_0003f048(1,0,0,0,param_1,param_2,0);
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
        iVar7 = FUN_0003f048(uVar5,uVar6);
        uVar8 = (param_3 & 0xffff) * iVar7;
        FUN_0003f0f0(uVar5,uVar6);
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
        uVar3 = FUN_0003f048(uVar5 - uVar8,uVar6);
        uVar10 = uVar3 * (param_3 & 0xffff);
        FUN_0003f0f0(uVar5 - uVar8,uVar6);
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
      iVar2 = FUN_0003f048(iVar7,uVar6);
      uVar11 = (param_3 & 0xffff) * iVar2;
      FUN_0003f0f0(iVar7,uVar6);
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
      uVar3 = FUN_0003f048(uVar5 - uVar11,uVar6);
      uVar10 = uVar3 * (param_3 & 0xffff);
      FUN_0003f0f0(uVar5 - uVar11,uVar6);
      uVar6 = uVar9 & 0xffff | extraout_r1_04 << 0x10;
      uVar9 = uVar3;
      if (uVar6 < uVar10) {
        uVar9 = uVar3 - 1;
        if ((!CARRY4(uVar6,param_3)) && (uVar6 + param_3 < uVar10)) {
          uVar9 = uVar3 - 2;
        }
      }
      uVar9 = uVar9 | iVar7 << 0x10;
      goto LAB_00040658;
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
    iVar2 = FUN_0003f048(uVar9,uVar5,param_3,iVar7,param_1,param_2,param_3);
    uVar11 = (uVar6 & 0xffff) * iVar2;
    FUN_0003f0f0(uVar9,uVar5);
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
    uVar3 = FUN_0003f048(uVar9 - uVar11,uVar5);
    uVar10 = uVar3 * (uVar6 & 0xffff);
    FUN_0003f0f0(uVar9 - uVar11,uVar5);
    uVar5 = uVar8 & 0xffff | extraout_r1_00 << 0x10;
    uVar9 = uVar3;
    if (uVar5 < uVar10) {
      uVar9 = uVar3 - 1;
      if ((!CARRY4(uVar5,uVar6)) && (uVar5 + uVar6 < uVar10)) {
        uVar9 = uVar3 - 2;
      }
    }
    uVar9 = uVar9 | iVar7 << 0x10;
LAB_00040648:
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
        iVar4 = FUN_0003f048(uVar6,uVar9);
        uVar5 = (uVar8 & 0xffff) * iVar4;
        FUN_0003f0f0(uVar6,uVar9);
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
        uVar6 = FUN_0003f048(iVar4,uVar9);
        uVar3 = uVar6 * (uVar8 & 0xffff);
        FUN_0003f0f0(iVar4,uVar9);
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
           (uVar8 = 0, (uint)lVar1 <= param_1 << iVar7 || uVar6 != uVar5)) goto LAB_00040658;
        uVar9 = uVar9 - 1;
        goto LAB_00040648;
      }
      bVar12 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar12 = param_3 <= param_1;
      }
      if (bVar12) {
        uVar9 = 1;
        uVar8 = 0;
        goto LAB_00040658;
      }
    }
    uVar9 = 0;
    uVar8 = uVar9;
  }
LAB_00040658:
  return CONCAT44(uVar8,uVar9);
}



void _fini(void)

{
  return;
}


