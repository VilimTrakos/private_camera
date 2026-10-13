typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef ushort sa_family_t;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[40];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef struct stat64 stat64, *Pstat64;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef ulong __ino_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef __quad_t __blkcnt64_t;

typedef struct timespec timespec, *Ptimespec;

typedef __u_quad_t __ino64_t;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat64 {
    __dev_t st_dev;
    uint __pad1;
    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    uint __pad2;
    __off64_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __ino64_t st_ino;
};

typedef struct addrinfo addrinfo, *Paddrinfo;

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef struct sockaddr sockaddr, *Psockaddr;

struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr *ai_addr;
    char *ai_canonname;
    struct addrinfo *ai_next;
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef struct _IO_FILE FILE;

typedef int __jmp_buf[6];

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef long __suseconds_t;

typedef long __clock_t;

typedef int __clockid_t;

typedef uint __useconds_t;

typedef struct pollfd pollfd, *Ppollfd;

struct pollfd {
    int fd;
    short events;
    short revents;
};

typedef ulong nfds_t;

typedef struct passwd passwd, *Ppasswd;

struct passwd {
    char *pw_name;
    char *pw_passwd;
    __uid_t pw_uid;
    __gid_t pw_gid;
    char *pw_gecos;
    char *pw_dir;
    char *pw_shell;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[36];
    long __align;
};

typedef ulong pthread_t;

typedef union _union_1031 _union_1031, *P_union_1031;

typedef struct _struct_1032 _struct_1032, *P_struct_1032;

typedef struct _struct_1033 _struct_1033, *P_struct_1033;

typedef struct _struct_1034 _struct_1034, *P_struct_1034;

typedef struct _struct_1035 _struct_1035, *P_struct_1035;

typedef struct _struct_1036 _struct_1036, *P_struct_1036;

typedef struct _struct_1037 _struct_1037, *P_struct_1037;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

struct _struct_1032 {
    __pid_t si_pid;
    __uid_t si_uid;
};

union sigval {
    int sival_int;
    void *sival_ptr;
};

struct _struct_1033 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

struct _struct_1035 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct _struct_1037 {
    long si_band;
    int si_fd;
};

struct _struct_1036 {
    void *si_addr;
};

struct _struct_1034 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

union _union_1031 {
    int _pad[29];
    struct _struct_1032 _kill;
    struct _struct_1033 _timer;
    struct _struct_1034 _rt;
    struct _struct_1035 _sigchld;
    struct _struct_1036 _sigfault;
    struct _struct_1037 _sigpoll;
};

typedef struct siginfo siginfo, *Psiginfo;

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1031 _sifields;
};

typedef struct siginfo siginfo_t;

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef __time_t time_t;

typedef __clockid_t clockid_t;

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timezone *__timezone_ptr_t;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char *tm_zone;
};

typedef struct sigaction sigaction, *Psigaction;

typedef union _union_1051 _union_1051, *P_union_1051;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

typedef void (*__sighandler_t)(int);

struct __sigset_t {
    ulong __val[32];
};

union _union_1051 {
    __sighandler_t sa_handler;
    void (*sa_sigaction)(int, siginfo_t *, void *);
};

struct sigaction {
    union _union_1051 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer)(void);
};

typedef struct in_addr in_addr, *Pin_addr;

typedef uint uint32_t;

typedef uint32_t in_addr_t;

struct in_addr {
    in_addr_t s_addr;
};

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef long __fd_mask;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[32];
};

typedef int (*__compar_fn_t)(void *, void *);

typedef enum Elf_SectionHeaderType_ARM {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_ARM_EXIDX=1879048193,
    SHT_ARM_PREEMPTMAP=1879048194,
    SHT_ARM_ATTRIBUTES=1879048195,
    SHT_ARM_DEBUGOVERLAY=1879048196,
    SHT_ARM_OVERLAYSECTION=1879048197
} Elf_SectionHeaderType_ARM;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_ARM sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_ARM {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_ARM_EXIDX=1879048192
} Elf_ProgramHeaderType_ARM;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_ARM p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef enum Elf32_DynTag_ARM {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf32_DynTag_ARM;

typedef struct Elf32_Dyn_ARM Elf32_Dyn_ARM, *PElf32_Dyn_ARM;

struct Elf32_Dyn_ARM {
    enum Elf32_DynTag_ARM d_tag;
    dword d_val;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx);
int clock_gettime(clockid_t __clock_id,timespec *__tp);
char * strcpy(char *__dest,char *__src);
char * strtok_r(char *__s,char *__delim,char **__save_ptr);
void CyaSSL_pending(void);
FILE * popen(char *__command,char *__modes);
int printf(char *__format,...);
ssize_t recv(int __fd,void *__buf,size_t __n,int __flags);
int connect(int __fd,sockaddr *__addr,socklen_t __len);
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,void *__arg);
char * strerror(int __errnum);
__uid_t geteuid(void);
int inet_pton(int __af,char *__cp,void *__buf);
void CyaSSL_check_domain_name(void);
void CyaSSL_write(void);
int stat64(char *__file,stat64 *__buf);
char * __xpg_basename(char *__path);
void * memmove(void *__dest,void *__src,size_t __n);
int pclose(FILE *__stream);
int snprintf(char *__s,size_t __maxlen,char *__format,...);
void InitRng(void);
long atol(char *__nptr);
void cJSON_GetArraySize(void);
void CyaSSL_read(void);
char * getenv(char *__name);
void gen_uidstring(void);
void sha1_finish_ctx(void);
double floor(double __x);
int usleep(__useconds_t __useconds);
void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar);
char * fgets(char *__s,int __n,FILE *__stream);
void __xpg_strerror_r(void);
void error_at_line(void);
void gen_pwdstring(void);
void fcntl64(void);
int prctl(int __option,...);
void * memcpy(void *__dest,void *__src,size_t __n);
void CyaSSL_set_fd(void);
void perror(char *__s);
int puts(char *__s);
void __cxa_finalize(void);
int tolower(int __c);
void sha1_process_bytes(void);
int system(char *__command);
int feof(FILE *__stream);
int remove(char *__filename);
void siglongjmp(__jmp_buf_tag *__env,int __val);
uint sleep(uint __seconds);
void CyaSSL_CTX_free(void);
longlong strtoll(char *__nptr,char **__endptr,int __base);
void CyaSSL_CTX_load_verify_locations(void);
void yi_p2p_on_get_white_led_status(void);
ulong strtoul(char *__nptr,char **__endptr,int __base);
int socket(int __domain,int __type,int __protocol);
int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout);
void trans_json(void);
void cJSON_DetachItemFromArray(void);
void CyaSSL_Init(void);
int fflush(FILE *__stream);
void CyaSSL_connect(void);
void hmac_sha1(void);
void CyaSSL_free(void);
int strncasecmp(char *__s1,char *__s2,size_t __n);
ssize_t send(int __fd,void *__buf,size_t __n,int __flags);
void cJSON_DetachItemFromObject(void);
void freeaddrinfo(addrinfo *__ai);
void cJSON_Parse(void);
tm * gmtime_r(time_t *__timer,tm *__tp);
void sha1_process_block(void);
uint alarm(uint __seconds);
long strtol(char *__nptr,char **__endptr,int __base);
void __sigsetjmp(void);
void cJSON_GetObjectItem(void);
int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len);
char * strrchr(char *__s,int __c);
void cJSON_GetStrObjItem(void);
ssize_t write(int __fd,void *__buf,size_t __n);
double atof(char *__nptr);
int fprintf(FILE *__stream,char *__format,...);
int bind(int __fd,sockaddr *__addr,socklen_t __len);
void CyaSSLv3_client_method(void);
uint if_nametoindex(char *__ifname);
void __deregister_frame_info(void);
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);
void memset_s(void);
int fseek(FILE *__stream,long __off,int __whence);
void cJSON_GetArrayItem(void);
void URLEncode(void);
void yi_make_ap_p2p_id(void);
void * memchr(void *__s,int __c,size_t __n);
void CyaSSL_shutdown(void);
void AesSetKey(void);
time_t mktime(tm *__tp);
void cJSON_Duplicate(void);
void strhex2byte(void);
int ferror(FILE *__stream);
char * strstr(char *__haystack,char *__needle);
void base64_encode(void);
ssize_t read(int __fd,void *__buf,size_t __nbytes);
int strncmp(char *__s1,char *__s2,size_t __n);
double pow(double __x,double __y);
void gen_hmac(void);
char * strncpy(char *__dest,char *__src,size_t __n);
void AesCbcEncrypt(void);
int strcasecmp(char *__s1,char *__s2);
void yi_p2p_on_get_white_led_time(void);
void * realloc(void *__ptr,size_t __size);
void memxor(void);
void sha1_init_ctx(void);
int memcmp(void *__s1,void *__s2,size_t __n);
int listen(int __fd,int __n);
void trans_json_ex_s(void);
int sscanf(char *__s,char *__format,...);
int sigaction(int __sig,sigaction *__act,sigaction *__oact);
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);
int gettimeofday(timeval *__tv,__timezone_ptr_t __tz);
void cJSON_Delete(void);
FILE * fopen(char *__filename,char *__modes);
void * memset(void *__s,int __c,size_t __n);
long ftell(FILE *__stream);
void CyaSSLv23_client_method(void);
void cJSON_CreateArray(void);
int fclose(FILE *__stream);
char * inet_ntoa(in_addr __in);
void CyaSSL_get_error(void);
time_t time(time_t *__timer);
int poll(pollfd *__fds,nfds_t __nfds,int __timeout);
void CyaSSL_ERR_error_string(void);
void CyaSSL_get_session(void);
int getpwuid_r(__uid_t __uid,passwd *__resultbuf,char *__buffer,size_t __buflen,passwd **__result);
int strcmp(char *__s1,char *__s2);
void cJSON_CreateNumber(void);
int sprintf(char *__s,char *__format,...);
void CyaSSL_CTX_use_PrivateKey_file(void);
int getpeername(int __fd,sockaddr *__addr,socklen_t *__len);
void getifaddrs(void);
void CyaSSL_CTX_new(void);
int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen);
void freeifaddrs(void);
int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai);
void cJSON_CreateString(void);
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);
void CyaSSL_set_session(void);
void rewind(FILE *__stream);
void CyaSSL_new(void);
void yi_on_ap_bind_info(void);
int * __errno_location(void);
void RNG_GenerateBlock(void);
void exit(int __status);
char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len);
void AesCbcDecrypt(void);
void CyaTLSv1_2_client_method(void);
int atoi(char *__nptr);
void get_cur_time_ms(void);
void yi_on_ap_sync_time(void);
size_t strlen(char *__s);
int open(char *__file,int __oflag,...);
void CyaTLSv1_1_client_method(void);
char * strchr(char *__s,int __c);
int fputs(char *__s,FILE *__stream);
void CyaTLSv1_client_method(void);
int pthread_join(pthread_t __th,void **__thread_return);
void __register_frame_info(void);
int close(int __fd);
void CyaSSL_CTX_use_certificate_file(void);
void CyaSSL_CTX_set_verify(void);
int raise(int __sig);
void free(void *__ptr);
void yi_on_ap_preview(void);
int getsockname(int __fd,sockaddr *__addr,socklen_t *__len);
FILE * fopen64(char *__filename,char *__modes);
undefined4 processEntry entry(undefined4 param_1);
int FUN_00015cc4(int param_1,int param_2,undefined4 param_3);
void FUN_00015d48(undefined4 param_1,int param_2);
bool FUN_00015dac(int param_1,int param_2);
void FUN_00015df8(void);
void _FINI_0(void);
void _INIT_0(void);
int FUN_00016000(int param_1,int param_2);
size_t FUN_000161c0(void *param_1,int param_2,int param_3,undefined4 *param_4);
size_t FUN_00016228(void *param_1,size_t param_2,size_t param_3,FILE *param_4);
int FUN_00016260(void);
undefined4 FUN_00016284(char *param_1,int param_2,char *param_3,char *param_4);
undefined4 FUN_00016408(int param_1);
int yi_sync_time(char *param_1,int param_2,undefined4 *param_3);
undefined4 yi_check_need_update(int param_1,char *param_2);
undefined4 yi_get_update_info(int param_1,char *param_2);
undefined4 yi_download_file(undefined4 param_1,char *param_2,undefined4 param_3);
undefined4 yi_gen_presigned_url(int param_1,char *param_2);
undefined4 yi_event_upload(int param_1,char *param_2);
undefined4 yi_event_update(int param_1,char *param_2);
undefined4 yi_check_did_valid(int param_1);
int yi_reset_server(int param_1,int param_2);
undefined4 yi_do_check_region(undefined4 param_1,undefined4 *param_2);
int yi_do_login(int param_1,uint *param_2);
int yi_do_bindkey(int param_1,int param_2);
undefined4 yi_get_dev_info(int param_1,int *param_2,int param_3);
undefined4 yi_do_tnp_online(int param_1,undefined4 param_2,int param_3);
undefined4 yi_report_tnp_status(int param_1);
void yi_cloud_crypt_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 yi_cloud_get_version(void);
void yi_make_ap_ssid(char *param_1,int param_2);
void yi_make_ap_p2p_id(void *param_1,void *param_2);
undefined4 yi_ap_listen_start(char *param_1,int param_2,int param_3,int param_4);
void yi_ap_listen_stop(void);
uint FUN_0001bc5c(byte *param_1,byte *param_2);
int FUN_0001bcf0(byte *param_1);
void * FUN_0001be08(void);
int FUN_0001be40(int *param_1,int param_2);
undefined4 * FUN_0001bef8(void *param_1);
void * FUN_0001bf3c(char *param_1);
int FUN_0001bf80(int *param_1);
undefined1 * FUN_0001c26c(byte *param_1,int param_2);
byte * FUN_0001c50c(undefined4 *param_1,undefined4 *param_2,char *param_3);
byte * FUN_0001c864(int param_1,byte *param_2);
char * FUN_0001d4d0(int param_1,int param_2,int param_3,int *param_4);
undefined4 cJSON_GetErrorPtr(void);
void cJSON_InitHooks(int *param_1);
void cJSON_Delete(int *param_1);
int cJSON_ParseWithOpts(byte *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
int cJSON_Parse(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void cJSON_Print(undefined4 param_1);
void cJSON_PrintUnformatted(undefined4 param_1);
void cJSON_PrintBuffered(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int cJSON_GetArraySize(int param_1);
void cJSON_GetArrayItem(int param_1,int param_2);
int cJSON_GetObjectItem(int param_1,undefined4 param_2);
void cJSON_AddItemToArray(int param_1,int param_2);
void cJSON_AddItemToObject(int param_1,undefined4 param_2,int param_3);
void cJSON_AddItemToObjectCS(int param_1,undefined4 param_2,int param_3);
void cJSON_AddItemReferenceToArray(int param_1,undefined4 param_2);
void cJSON_AddItemReferenceToObject(int param_1,undefined4 param_2,undefined4 param_3);
int * cJSON_DetachItemFromArray(int param_1,int param_2);
void cJSON_DeleteItemFromArray(void);
undefined4 cJSON_DetachItemFromObject(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void cJSON_DeleteItemFromObject(void);
void cJSON_InsertItemInArray(int param_1,int param_2,undefined4 *param_3);
void cJSON_ReplaceItemInArray(int param_1,int param_2,int *param_3);
void cJSON_ReplaceItemInObject(int param_1,undefined4 param_2,int *param_3);
void cJSON_CreateNull(void);
void cJSON_CreateTrue(void);
void cJSON_CreateFalse(void);
void cJSON_CreateBool(int param_1);
int cJSON_CreateNumber(undefined4 param_1,undefined4 param_2);
int cJSON_CreateString(undefined4 param_1);
void cJSON_CreateArray(void);
void cJSON_CreateObject(void);
int cJSON_CreateIntArray(int param_1,int param_2);
int cJSON_CreateFloatArray(int param_1,int param_2);
int cJSON_CreateDoubleArray(int param_1,int param_2);
int cJSON_CreateStringArray(int param_1,int param_2);
int cJSON_Duplicate(int param_1,int param_2);
void cJSON_Minify(char *param_1);
undefined4 cJSON_GetIntObjItem(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
undefined4 cJSON_GetStrObjItem(undefined4 param_1,undefined4 param_2);
void memset_s(void *param_1,uint param_2,int param_3,uint param_4);
void memcpy_s(void *param_1,uint param_2,void *param_3,uint param_4);
longlong get_cur_time_ms(void);
undefined1 * base64_encode(byte *param_1,undefined1 *param_2,int param_3);
int base64_decode(char *param_1,int param_2);
uint strhex2byte(int param_1,byte *param_2);
int gen_pwdstring(undefined4 param_1,undefined4 param_2,int param_3);
int gen_uidstring(char *param_1,undefined4 param_2,int param_3);
void sha1_init_ctx(undefined4 *param_1);
uint * sha1_read_ctx(uint *param_1,uint *param_2);
void sha1_process_block(uint param_1,uint param_2,uint *param_3);
uint * sha1_finish_ctx(uint *param_1,uint *param_2);
void sha1_process_bytes(void *param_1,uint param_2,int param_3);
void sha1_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 sha1_stream(FILE *param_1,undefined4 param_2);
void memxor(byte *param_1,byte *param_2,int param_3);
undefined4 hmac_sha1(undefined1 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int URLEncode(int param_1,size_t param_2,int param_3,size_t param_4);
undefined4 gen_hmac(char *param_1,char *param_2,undefined4 param_3);
undefined4 trans_json(int param_1,char *param_2,char *param_3);
undefined4 trans_json_ex(byte *param_1,char *param_2,char *param_3,undefined4 param_4);
undefined4 trans_json_ex_s(byte *param_1,int param_2,char *param_3,char *param_4);
uint FUN_00021370(uint param_1);
void FUN_0002138c(int param_1);
void FUN_000213b4(uint *param_1,void *param_2,void *param_3);
void FUN_000218c4(uint *param_1,void *param_2,void *param_3);
void FUN_00021df4(uint param_1,uint param_2);
undefined4 AesSetIV(int param_1,void *param_2);
undefined4 AesSetKey(uint *param_1,void *param_2,uint param_3,void *param_4,int param_5);
undefined4 AesSetKeyDirect(uint *param_1,void *param_2,uint param_3,void *param_4,int param_5);
void AesEncryptDirect(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void AesDecryptDirect(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 AesCbcEncrypt(int param_1,int param_2,int param_3,uint param_4);
undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4);
void AesCbcDecryptWithKey(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void AesCtrEncrypt(int param_1,byte *param_2,byte *param_3,uint param_4);
undefined4 FUN_000226f0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00022750(uint param_1);
int FUN_000227fc(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
undefined4 FUN_000228d4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00022920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00022954(int param_1);
void FUN_00022b2c(int param_1);
void FUN_00022b38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_00022b64(int param_1);
void FUN_00022d14(int param_1);
int FUN_00022db8(int param_1,uint param_2,undefined4 param_3);
int FUN_00022f68(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);
bool FUN_00023000(int param_1,int *param_2);
undefined4 FUN_00023064(short *param_1,char *param_2,uint *param_3,undefined4 param_4);
int FUN_000230f4(int param_1,int *param_2,int param_3);
void FUN_000231c0(int *param_1);
void FUN_00023220(undefined4 *param_1,int param_2);
int FUN_00023384(int param_1,int *param_2,undefined4 param_3,uint param_4);
undefined4 FUN_00023428(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00023498(int *param_1,int param_2,int *param_3,int *param_4);
int FUN_00023534(int *param_1,undefined4 param_2,int *param_3);
int FUN_00023c28(int param_1,int param_2,int param_3);
int FUN_00023cdc(int *param_1,int param_2,undefined1 *param_3,undefined1 param_4);
int FUN_00024024(int *param_1,int *param_2,undefined4 param_3);
undefined4 FUN_00024148(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00024164(undefined4 param_1,undefined4 param_2);
void FUN_00024180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_000241bc(undefined4 *param_1,void *param_2,undefined4 param_3,undefined4 param_4);
void FUN_00024288(int param_1,int param_2);
void FUN_000242a4(int *param_1,int *param_2);
undefined4 FUN_0002432c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4);
uint FUN_000243f0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);
void FUN_000244fc(int param_1,int param_2);
undefined4 FUN_000247e4(int param_1,int param_2,undefined4 param_3);
undefined4 * FUN_000248b0(undefined4 param_1,undefined4 param_2);
byte FUN_00024a14(int param_1);
void FUN_00024a24(int param_1);
undefined4 FUN_00024b38(int *param_1,int param_2,int param_3,int param_4,int *param_5);
undefined4 FUN_00024e10(int *param_1);
undefined4 FUN_00024f2c(int *param_1,undefined4 *param_2);
void FUN_00024f9c(int *param_1,undefined4 param_2);
undefined4 FUN_00025010(int *param_1,uint param_2,int param_3,undefined4 param_4);
undefined4 FUN_000251b8(int *param_1,undefined4 *param_2);
void FUN_00025210(int param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_000253d4(int *param_1,undefined4 *param_2);
undefined4 FUN_00025554(int *param_1,int *param_2);
void FUN_00025754(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_00025854(int param_1);
undefined4 FUN_00025860(int param_1);
undefined4 FUN_0002586c(int param_1);
undefined8 FUN_00025878(int param_1);
undefined8 FUN_00025890(int param_1);
undefined4 FUN_000258a8(int param_1);
undefined4 FUN_000258b0(int param_1);
void FUN_000258b8(int param_1);
undefined4 FUN_00025910(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_000267e4(int *param_1,int *param_2);
int FUN_0002693c(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5);
int FUN_00026b60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int FUN_00026b9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_00026bdc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00026c14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00026f3c(int param_1,uint param_2);
undefined4 FUN_00026f84(int param_1,uint param_2);
char * FUN_00026fc8(uint param_1);
char * FUN_00027028(int param_1,undefined4 param_2);
undefined4 FUN_000270e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_000271a8(int param_1,int param_2,int param_3,int param_4);
int FUN_000273a8(pollfd *param_1,nfds_t param_2,int param_3,undefined4 param_4);
void FUN_00027500(int param_1,int param_2,int *param_3);
undefined4 * FUN_0002762c(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
int * FUN_00027710(int param_1,int param_2,int param_3,undefined4 *param_4);
undefined4 FUN_00027808(int param_1,int *param_2,int *param_3);
undefined4 * FUN_000278f4(undefined4 *param_1,undefined4 param_2);
int FUN_00027950(undefined4 param_1,undefined4 param_2);
void FUN_000279b0(int *param_1);
int FUN_000279fc(undefined4 *param_1);
void FUN_00027a44(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined2 FUN_00027a7c(undefined2 param_1);
undefined1 FUN_00027a88(undefined1 param_1);
uint FUN_00027aa0(uint param_1);
void FUN_00027aac(void);
uint FUN_00027ab0(uint param_1);
void FUN_00027ab8(void);
undefined2 FUN_00027abc(undefined2 param_1);
void FUN_00027ad0(void);
void FUN_00027ae4(undefined4 *param_1,int param_2);
int * FUN_00027b38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00027bb4(undefined4 *param_1);
void FUN_00027be8(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4);
int FUN_00027c14(int param_1,int *param_2,undefined4 param_3);
void FUN_00027ce0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_00027d28(undefined4 *param_1,undefined4 param_2,code *param_3);
undefined4 FUN_00027da0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00027de0(undefined4 param_1,int *param_2);
bool FUN_00027e3c(int param_1,int param_2);
undefined4 FUN_00027f24(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_00027f74(int param_1,int param_2);
undefined4 FUN_00027fe0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00028064(int param_1,int *param_2);
undefined4 FUN_00028184(int param_1,undefined4 param_2);
undefined4 FUN_00028214(int param_1,int *param_2);
bool FUN_000282a8(int param_1,int param_2);
undefined4 FUN_000282dc(int *param_1,int *param_2);
bool FUN_00028370(undefined4 *param_1,undefined4 *param_2);
void FUN_00028488(int param_1);
uint FUN_00028538(undefined4 param_1);
undefined4 FUN_00028600(void);
int FUN_00028680(undefined4 *param_1,int param_2,char *param_3);
undefined4 FUN_000286c8(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4);
void FUN_00028808(int *param_1);
void FUN_00028858(int *param_1,int param_2);
undefined4 FUN_000288f4(int *param_1,int param_2,int param_3,undefined4 param_4);
int FUN_00028a74(int param_1);
void thunk_FUN_000295b8(int param_1,int param_2);
undefined4 FUN_00028b0c(int param_1,int param_2);
undefined4 FUN_00028b54(void);
undefined4 FUN_00028b5c(void);
undefined4 FUN_00028b64(void);
undefined4 FUN_00028b6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00028bd8(void);
bool thunk_FUN_00029634(int param_1,int param_2);
void FUN_00028be4(int param_1);
bool FUN_00028c64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_00028dc8(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5);
int FUN_00028e64(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5);
undefined4 FUN_00028f1c(char *param_1);
void FUN_000295b8(int param_1,int param_2);
void FUN_00029604(void);
bool FUN_00029634(int param_1,int param_2);
undefined4 FUN_0002965c(int param_1,int param_2);
int FUN_0002968c(int *param_1,int param_2,undefined1 *param_3);
undefined4 FUN_000296b4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
__time_t * FUN_000296f8(__time_t *param_1);
int FUN_00029758(int param_1,int param_2,int param_3,int param_4);
void FUN_00029794(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_0002981c(undefined4 param_1);
bool FUN_00029834(int *param_1,int param_2);
byte * FUN_00029868(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined * FUN_00029904(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int FUN_00029964(int param_1);
char * FUN_00029980(int param_1,char *param_2,socklen_t param_3);
void FUN_000299b8(int param_1,time_t param_2,undefined4 param_3,undefined4 param_4);
int FUN_00029a3c(int *param_1,time_t param_2,undefined4 param_3,int *param_4);
int FUN_00029b18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00029bf0(int *param_1,int param_2,undefined4 param_3,int *param_4);
undefined4 FUN_00029d84(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5);
void FUN_00029f70(int param_1,undefined4 *param_2);
void FUN_0002a014(void);
void FUN_0002a034(undefined4 param_1,undefined4 param_2);
void FUN_0002a04c(void);
undefined4 FUN_0002a084(int param_1);
void FUN_0002a1f8(char *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 FUN_0002a360(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4);
void FUN_0002a560(int param_1);
void FUN_0002a5b4(int param_1,undefined4 param_2,int param_3,undefined4 param_4);
void FUN_0002a6d8(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0002a710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0002a71c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0002a72c(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0002a75c(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_0002a790(int *param_1);
void FUN_0002af2c(int *param_1);
void FUN_0002af7c(int param_1);
void FUN_0002b03c(int *param_1,undefined4 param_2);
void FUN_0002b080(int *param_1);
bool FUN_0002b108(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4);
int FUN_0002b178(int *param_1,int *param_2);
char * FUN_0002b230(void);
void FUN_0002b2e8(int param_1);
undefined4 *FUN_0002b3c4(undefined4 param_1,undefined4 *param_2,char *param_3,char *param_4,char *param_5,char *param_6);
int FUN_0002bec4(undefined4 param_1,char *param_2,int param_3,undefined1 param_4);
void FUN_0002c060(int param_1);
undefined4 * FUN_0002c0c0(int *param_1,char *param_2,undefined4 param_3,int param_4);
void FUN_0002c3f8(int *param_1,int param_2);
void FUN_0002c43c(undefined4 *param_1);
void FUN_0002c464(int *param_1);
void FUN_0002c4d4(int *param_1);
int FUN_0002c52c(int param_1);
void FUN_0002c5c8(int param_1,int param_2);
undefined4 FUN_0002c774(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0002c7b4(uint *param_1);
undefined1 FUN_0002c820(int *param_1);
uint FUN_0002c8dc(void *param_1,int param_2,int param_3,int *param_4);
undefined4 FUN_0002c9b4(int *param_1);
int FUN_0002cb64(int *param_1,int param_2,int param_3);
bool FUN_0002ccb0(int param_1,int *param_2);
int FUN_0002ccfc(int param_1,undefined1 *param_2);
bool FUN_0002cd34(undefined4 *param_1,undefined4 param_2);
undefined4 FUN_0002cd98(int param_1,int param_2,size_t param_3);
undefined4 FUN_0002ce70(int *param_1,char *param_2);
undefined4 FUN_0002cec8(int *param_1,char *param_2);
void * FUN_0002cf3c(byte *param_1);
int FUN_0002d038(int *param_1);
int FUN_0002d23c(int *param_1,undefined4 param_2,int param_3,int param_4);
void FUN_0002d4dc(int *param_1,int param_2,byte *param_3,byte *param_4);
void FUN_0002d65c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_0002d67c(int *param_1,int *param_2,int *param_3,int param_4,int param_5);
undefined4 FUN_0002d860(int *param_1,void *param_2,uint param_3);
undefined4 FUN_0002d990(int *param_1,undefined4 param_2);
undefined4 FUN_0002da1c(int param_1,char *param_2,char *param_3);
int FUN_0002db04(int *param_1,int param_2,undefined4 param_3);
int FUN_0002dd04(int param_1,undefined4 param_2);
uint FUN_0002de00(int *param_1,undefined1 *param_2);
int FUN_0002f268(int param_1,int param_2,size_t *param_3,char *param_4);
undefined4 FUN_000302d4(int param_1,uint param_2,void *param_3,size_t param_4);
undefined4 FUN_00030348(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5);
undefined4 FUN_000303b8(int param_1,void *param_2,size_t param_3,ssize_t *param_4);
undefined4 FUN_000303f8(int *param_1,int param_2,void *param_3,uint param_4,size_t *param_5);
void FUN_00030518(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_000305d4(int param_1,undefined4 param_2);
void FUN_00030648(int param_1,undefined4 param_2);
undefined4 FUN_00030880(int *param_1,byte *param_2,char *param_3,size_t param_4);
undefined4 FUN_00030cc4(int *param_1,int param_2);
void * FUN_00030d30(char *param_1,char *param_2,int *param_3,int *param_4,int *param_5);
void FUN_00031068(int param_1);
void FUN_00031364(int *param_1);
int FUN_00031394(undefined4 *param_1);
void FUN_00031430(undefined4 *param_1);
void FUN_00031480(int param_1);
void FUN_0003152c(int param_1,int param_2);
void FUN_00031588(undefined4 *param_1);
int FUN_000316b0(int *param_1);
uint FUN_000317bc(int param_1,uint param_2,uint *param_3,undefined4 param_4);
undefined4 FUN_00033548(int *param_1,undefined4 param_2);
undefined4 FUN_00033600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_000336ac(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_000336d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);
void FUN_00033714(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_000337b4(void);
void FUN_000337bc(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0003385c(int param_1,undefined1 *param_2);
undefined4 FUN_0003389c(int param_1,undefined1 *param_2);
int FUN_000338dc(int param_1,undefined1 *param_2);
void FUN_0003399c(int param_1);
undefined4 FUN_000339ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_00033c54(int *param_1,undefined1 *param_2,undefined4 param_3);
int FUN_00033d94(int param_1,int *param_2,char *param_3,undefined1 *param_4);
int FUN_00035b80(int *param_1,int param_2,int param_3,undefined4 param_4);
int FUN_00035df0(int *param_1,char *param_2);
int FUN_00035e98(int param_1,int *param_2);
undefined4 FUN_00035ee4(undefined4 param_1,int *param_2,undefined4 param_3);
int FUN_00035f40(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0003602c(int param_1);
undefined4 FUN_0003603c(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_0003610c(undefined4 param_1,char *param_2,size_t param_3);
undefined4 FUN_00036274(undefined4 param_1,byte *param_2,size_t param_3,int *param_4,int *param_5,byte param_6);
undefined4 FUN_000363b4(void);
uint FUN_00036444(byte *param_1,undefined4 *param_2);
uint FUN_000364d4(byte param_1,int *param_2);
void FUN_000365a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
char * FUN_000365cc(undefined4 param_1,code *param_2,byte *param_3,uint *param_4);
void FUN_0003759c(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_000375e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_0003769c(undefined4 param_1,undefined4 param_2);
void FUN_000377bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_000377ec(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00037860(undefined4 param_1,int *param_2,int *param_3,char *param_4);
void FUN_00037bb0(int param_1);
undefined4 FUN_00037c6c(int param_1,uint param_2,uint *param_3,undefined4 param_4);
int FUN_0003815c(int param_1);
void FUN_000381a0(char *param_1,int param_2);
undefined4 FUN_0003820c(int *param_1,uint param_2,uint *param_3);
undefined4 FUN_000383c0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_000384d8(int param_1,int param_2);
int FUN_00038548(int *param_1,char *param_2);
uint FUN_00039440(uint param_1,int param_2,uint param_3,int param_4,int param_5);
int FUN_00039510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00039680(void);
undefined4 FUN_00039688(int param_1,char *param_2,int param_3);
int FUN_00039b78(undefined4 *param_1);
undefined4 FUN_00039c00(int *param_1,int *param_2);
void FUN_00039d0c(int *param_1,int param_2,int param_3,int param_4,char param_5,undefined4 param_6,int param_7,undefined4 param_8);
int FUN_00039e30(char *param_1,char *param_2);
int FUN_00039e44(char *param_1,char *param_2,size_t param_3);
undefined4 FUN_00039e58(int param_1);
void FUN_00039e80(undefined4 *param_1);
void FUN_00039f1c(int param_1);
undefined4 FUN_00039f30(int *param_1,byte *param_2,uint param_3,int *param_4);
char * FUN_0003a330(int param_1);
void FUN_0003a350(undefined4 param_1);
undefined4 FUN_0003a388(int *param_1,int param_2,undefined4 param_3);
undefined4 FUN_0003a420(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_0003a4c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0003a510(int param_1);
undefined4 FUN_0003a518(int *param_1,int param_2,int *param_3,int param_4);
void FUN_0003a5d4(int param_1,int *param_2);
undefined4 FUN_0003a638(int *param_1,int param_2,int param_3,int param_4,int param_5);
int FUN_0003a73c(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_0003a7cc(int *param_1,void *param_2,size_t param_3,undefined4 param_4);
undefined4 FUN_0003a908(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0003a994(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0003aa08(int *param_1);
void FUN_0003aa74(int *param_1,undefined4 param_2,code *param_3);
void FUN_0003aaf8(int param_1);
undefined4 FUN_0003ab20(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_0003ab9c(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_0003abb0(int *param_1);
void FUN_0003ac18(int *param_1);
void FUN_0003acf8(int param_1,int param_2);
undefined4 FUN_0003ad30(int *param_1,int param_2,int param_3);
int FUN_0003b160(int *param_1,int param_2,undefined4 param_3,char *param_4);
void FUN_0003b694(int param_1);
void FUN_0003b6b0(undefined4 *param_1);
void FUN_0003b6e4(undefined1 *param_1,int param_2,uint param_3);
void FUN_0003b72c(int *param_1,int param_2);
void FUN_0003c180(int param_1,void *param_2,uint param_3);
void FUN_0003c22c(undefined4 param_1,void *param_2,undefined4 param_3);
void FUN_0003c2a8(undefined4 param_1,char *param_2);
int * FUN_0003c2f0(undefined4 *param_1);
undefined4 FUN_0003c37c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
bool FUN_0003c3c0(int param_1);
undefined4 FUN_0003c3d0(char *param_1,int param_2);
int FUN_0003c47c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
undefined4 FUN_0003c4c0(void);
undefined4 FUN_0003c4c8(void);
undefined4 FUN_0003c4d0(void);
undefined4 FUN_0003c4d8(void);
int FUN_0003c4e0(byte *param_1);
undefined4 FUN_0003caf4(time_t param_1,tm *param_2,undefined4 param_3);
undefined4 FUN_0003cb1c(undefined4 param_1);
bool FUN_0003cc64(int param_1,char *param_2);
bool FUN_0003cccc(int param_1,char *param_2,int param_3);
void FUN_0003cd58(int param_1,int param_2,int param_3);
void FUN_0003cd98(int param_1);
int FUN_0003cdf4(char *param_1,addrinfo *param_2,addrinfo *param_3,undefined4 *param_4);
int FUN_0003cf7c(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4);
undefined4 FUN_0003d0d0(int param_1,void *param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0003d1c8(char *param_1,undefined4 param_2,undefined4 param_3);
char * FUN_0003d210(char *param_1,char param_2,int param_3);
undefined4 FUN_0003d254(undefined4 param_1,int *param_2);
void FUN_0003d2d0(int param_1);
undefined4 FUN_0003d310(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0003d34c(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
char * FUN_0003d3a8(char *param_1);
undefined4 FUN_0003d5f4(int param_1,byte *param_2,size_t param_3,undefined4 *param_4,size_t *param_5);
void FUN_0003d938(void);
size_t FUN_0003d950(int *param_1,void *param_2,size_t param_3);
void FUN_0003da14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0003da44(undefined4 *param_1,uint param_2,char *param_3,size_t param_4,uint *param_5);
void FUN_0003db94(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0003dc08(int param_1,undefined4 param_2,undefined4 param_3);
void * FUN_0003dd78(char *param_1,size_t param_2);
void FUN_0003e750(int *param_1);
void FUN_0003e7a8(int *param_1);
uint FUN_0003e854(int param_1,undefined4 *param_2,int *param_3,char *param_4,int *param_5);
bool FUN_0003ed64(int *param_1,int param_2);
int FUN_0003ed88(undefined4 param_1,undefined4 param_2,code *param_3);
int FUN_0003eea0(int param_1,int param_2,int param_3,int *param_4);
undefined4 FUN_0003ef74(int *param_1,undefined4 *param_2);
undefined4 FUN_0003ef9c(char *param_1);
void FUN_0003f008(undefined4 param_1,int param_2);
ulonglong FUN_0003f048(uint param_1,uint param_2);
void FUN_0003f0f0(undefined4 param_1,int param_2);
ulonglong FUN_0003f110(uint param_1,uint param_2);
uint FUN_0003f118(uint param_1,uint param_2);
void FUN_0003f1ec(undefined4 param_1,int param_2);
ulonglong FUN_0003f214(uint param_1,uint param_2,uint param_3,uint param_4);
ulonglong FUN_0003f218(uint param_1,uint param_2,uint param_3,uint param_4);
ulonglong FUN_0003f4c4(uint param_1);
ulonglong FUN_0003f4e8(uint param_1);
ulonglong FUN_0003f510(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4);
ulonglong FUN_0003f564(uint param_1,uint param_2);
ulonglong FUN_0003f5c4(undefined4 param_1,uint param_2,uint param_3,uint param_4);
ulonglong FUN_0003f7a4(int param_1,uint param_2,int param_3,uint param_4);
ulonglong FUN_0003f830(undefined4 param_1,uint param_2,uint param_3,uint param_4);
ulonglong FUN_0003f9c4(int param_1,uint param_2,int param_3,uint param_4);
uint FUN_0003fa44(uint param_1,uint param_2,uint param_3,uint param_4);
void FUN_0003facc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0003fae8(undefined4 param_1);
undefined1 FUN_0003fafc(void);
bool FUN_0003fb10(void);
bool FUN_0003fb24(void);
bool FUN_0003fb38(void);
bool FUN_0003fb4c(void);
uint FUN_0003fb60(uint param_1,uint param_2);
void FUN_0003fbbc(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
void FUN_0003fc04(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
undefined8 FUN_0003fc50(undefined4 param_1,int param_2);
undefined8 FUN_0003fc94(undefined4 param_1,undefined4 param_2);
void FUN_0003fcfc(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5);
void FUN_0003fd38(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5);
uint FUN_0003fd74(uint param_1,uint param_2);
undefined8 FUN_0003fdc8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 FUN_00040260(uint param_1,uint param_2,uint param_3,uint param_4);
void _fini(void);
int clock_gettime(clockid_t __clock_id, timespec * __tp);
char * strcpy(char * __dest, char * __src);
char * strtok_r(char * __s, char * __delim, char * * __save_ptr);
undefined CyaSSL_pending();
FILE * popen(char * __command, char * __modes);
int printf(char * __format, ...);
ssize_t recv(int __fd, void * __buf, size_t __n, int __flags);
int connect(int __fd, sockaddr * __addr, socklen_t __len);
int pthread_create(pthread_t * __newthread, pthread_attr_t * __attr, __start_routine * __start_routine, void * __arg);
char * strerror(int __errnum);
__uid_t geteuid(void);
int inet_pton(int __af, char * __cp, void * __buf);
undefined CyaSSL_check_domain_name();
undefined CyaSSL_write();
int stat64(char * __file, stat64 * __buf);
char * __xpg_basename(char * __path);
void * memmove(void * __dest, void * __src, size_t __n);
int pclose(FILE * __stream);
int snprintf(char * __s, size_t __maxlen, char * __format, ...);
undefined InitRng();
long atol(char * __nptr);
undefined CyaSSL_read();
char * getenv(char * __name);
double floor(double __x);
int usleep(__useconds_t __useconds);
void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar);
char * fgets(char * __s, int __n, FILE * __stream);
undefined __xpg_strerror_r();
undefined error_at_line();
undefined fcntl64();
int prctl(int __option, ...);
void * memcpy(void * __dest, void * __src, size_t __n);
undefined CyaSSL_set_fd();
void perror(char * __s);
int puts(char * __s);
undefined __cxa_finalize();
int tolower(int __c);
int system(char * __command);
int feof(FILE * __stream);
void * malloc(size_t __size);
int remove(char * __filename);
void siglongjmp(__jmp_buf_tag * __env, int __val);
uint sleep(uint __seconds);
undefined CyaSSL_CTX_free();
longlong strtoll(char * __nptr, char * * __endptr, int __base);
undefined CyaSSL_CTX_load_verify_locations();
undefined yi_p2p_on_get_white_led_status();
ulong strtoul(char * __nptr, char * * __endptr, int __base);
int socket(int __domain, int __type, int __protocol);
int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, timeval * __timeout);
undefined CyaSSL_Init();
int fflush(FILE * __stream);
undefined CyaSSL_connect();
undefined CyaSSL_free();
int strncasecmp(char * __s1, char * __s2, size_t __n);
ssize_t send(int __fd, void * __buf, size_t __n, int __flags);
void freeaddrinfo(addrinfo * __ai);
tm * gmtime_r(time_t * __timer, tm * __tp);
uint alarm(uint __seconds);
long strtol(char * __nptr, char * * __endptr, int __base);
undefined __sigsetjmp();
int accept(int __fd, sockaddr * __addr, socklen_t * __addr_len);
char * strrchr(char * __s, int __c);
void * calloc(size_t __nmemb, size_t __size);
ssize_t write(int __fd, void * __buf, size_t __n);
double atof(char * __nptr);
int fprintf(FILE * __stream, char * __format, ...);
int bind(int __fd, sockaddr * __addr, socklen_t __len);
undefined CyaSSLv3_client_method();
uint if_nametoindex(char * __ifname);
undefined __deregister_frame_info();
int setsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t __optlen);
int fseek(FILE * __stream, long __off, int __whence);
void * memchr(void * __s, int __c, size_t __n);
undefined CyaSSL_shutdown();
time_t mktime(tm * __tp);
int ferror(FILE * __stream);
char * strstr(char * __haystack, char * __needle);
ssize_t read(int __fd, void * __buf, size_t __nbytes);
int strncmp(char * __s1, char * __s2, size_t __n);
double pow(double __x, double __y);
char * strncpy(char * __dest, char * __src, size_t __n);
int strcasecmp(char * __s1, char * __s2);
undefined yi_p2p_on_get_white_led_time();
void * realloc(void * __ptr, size_t __size);
int memcmp(void * __s1, void * __s2, size_t __n);
int listen(int __fd, int __n);
int sscanf(char * __s, char * __format, ...);
int sigaction(int __sig, sigaction * __act, sigaction * __oact);
size_t fread(void * __ptr, size_t __size, size_t __n, FILE * __stream);
char * strdup(char * __s);
int gettimeofday(timeval * __tv, __timezone_ptr_t __tz);
FILE * fopen(char * __filename, char * __modes);
void * memset(void * __s, int __c, size_t __n);
long ftell(FILE * __stream);
undefined CyaSSLv23_client_method();
int fclose(FILE * __stream);
char * inet_ntoa(in_addr __in);
undefined CyaSSL_get_error();
time_t time(time_t * __timer);
int poll(pollfd * __fds, nfds_t __nfds, int __timeout);
undefined CyaSSL_ERR_error_string();
undefined CyaSSL_get_session();
int getpwuid_r(__uid_t __uid, passwd * __resultbuf, char * __buffer, size_t __buflen, passwd * * __result);
int strcmp(char * __s1, char * __s2);
int sprintf(char * __s, char * __format, ...);
undefined CyaSSL_CTX_use_PrivateKey_file();
int getpeername(int __fd, sockaddr * __addr, socklen_t * __len);
undefined getifaddrs();
int fputc(int __c, FILE * __stream);
undefined CyaSSL_CTX_new();
int getsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t * __optlen);
undefined freeifaddrs();
int getaddrinfo(char * __name, char * __service, addrinfo * __req, addrinfo * * __pai);
size_t fwrite(void * __ptr, size_t __size, size_t __n, FILE * __s);
undefined CyaSSL_set_session();
void rewind(FILE * __stream);
undefined CyaSSL_new();
undefined yi_on_ap_bind_info();
int * __errno_location(void);
undefined RNG_GenerateBlock();
void exit(int __status);
char * inet_ntop(int __af, void * __cp, char * __buf, socklen_t __len);
undefined CyaTLSv1_2_client_method();
int atoi(char * __nptr);
undefined yi_on_ap_sync_time();
size_t strlen(char * __s);
int open(char * __file, int __oflag, ...);
undefined CyaTLSv1_1_client_method();
char * strchr(char * __s, int __c);
int fputs(char * __s, FILE * __stream);
undefined CyaTLSv1_client_method();
undefined _Jv_RegisterClasses();
int pthread_join(pthread_t __th, void * * __thread_return);
undefined __register_frame_info();
int close(int __fd);
undefined CyaSSL_CTX_use_certificate_file();
undefined CyaSSL_CTX_set_verify();
int raise(int __sig);
void free(void * __ptr);
undefined yi_on_ap_preview();
int getsockname(int __fd, sockaddr * __addr, socklen_t * __len);
FILE * fopen64(char * __filename, char * __modes);

