typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
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

typedef struct tnp tnp, *Ptnp;

struct tnp { // PlaceHolder Class Structure
};

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

typedef void *__gnuc_va_list;

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef long __time_t;

typedef __time_t time_t;

typedef int __clockid_t;

typedef __clockid_t clockid_t;

typedef struct timeval timeval, *Ptimeval;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timespec timespec, *Ptimespec;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
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

typedef struct in_addr in_addr, *Pin_addr;

typedef uint uint32_t;

typedef uint32_t in_addr_t;

struct in_addr {
    in_addr_t s_addr;
};

typedef struct _IO_FILE FILE;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef long __fd_mask;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[32];
};

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef uint __useconds_t;

typedef struct hostent hostent, *Phostent;

struct hostent {
    char *h_name;
    char **h_aliases;
    int h_addrtype;
    int h_length;
    char **h_addr_list;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct __pthread_internal_slist __pthread_internal_slist, *P__pthread_internal_slist;

struct __pthread_internal_slist {
    struct __pthread_internal_slist *__next;
};

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef union _union_13 _union_13, *P_union_13;

typedef struct __pthread_internal_slist __pthread_slist_t;

union _union_13 {
    int __spins;
    __pthread_slist_t __list;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    int __kind;
    uint __nusers;
    union _union_13 field5_0x14;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[24];
    long __align;
};

typedef union pthread_mutexattr_t pthread_mutexattr_t, *Ppthread_mutexattr_t;

union pthread_mutexattr_t {
    char __size[4];
    int __align;
};

typedef ulong pthread_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[36];
    long __align;
};

typedef struct __STDIO_FILE_STRUCT __STDIO_FILE_STRUCT, *P__STDIO_FILE_STRUCT;

struct __STDIO_FILE_STRUCT { // PlaceHolder Structure
};

typedef struct st_PPPP_TimerElement_t st_PPPP_TimerElement_t, *Pst_PPPP_TimerElement_t;

struct st_PPPP_TimerElement_t { // PlaceHolder Structure
};

typedef struct sockaddr_in6 sockaddr_in6, *Psockaddr_in6;

struct sockaddr_in6 { // PlaceHolder Structure
};

typedef struct sockaddr_in sockaddr_in, *Psockaddr_in;

struct sockaddr_in { // PlaceHolder Structure
};

typedef struct st_PPPP_NetInfo st_PPPP_NetInfo, *Pst_PPPP_NetInfo;

struct st_PPPP_NetInfo { // PlaceHolder Structure
};

typedef struct sockaddr_storage sockaddr_storage, *Psockaddr_storage;

struct sockaddr_storage { // PlaceHolder Structure
};

typedef struct st_PPPP_DevLgn st_PPPP_DevLgn, *Pst_PPPP_DevLgn;

struct st_PPPP_DevLgn { // PlaceHolder Structure
};

typedef struct st_PPPP_P2PReq st_PPPP_P2PReq, *Pst_PPPP_P2PReq;

struct st_PPPP_P2PReq { // PlaceHolder Structure
};

typedef struct st_PPPP_SessionHeaderV2 st_PPPP_SessionHeaderV2, *Pst_PPPP_SessionHeaderV2;

struct st_PPPP_SessionHeaderV2 { // PlaceHolder Structure
};

typedef undefined SESSION_RESET_FLAG;

typedef struct st_PPPP_LanNotify st_PPPP_LanNotify, *Pst_PPPP_LanNotify;

struct st_PPPP_LanNotify { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyPort_EX st_PPPP_RlyPort_EX, *Pst_PPPP_RlyPort_EX;

struct st_PPPP_RlyPort_EX { // PlaceHolder Structure
};

typedef struct st_PPPP_SDevLgn st_PPPP_SDevLgn, *Pst_PPPP_SDevLgn;

struct st_PPPP_SDevLgn { // PlaceHolder Structure
};

typedef struct st_PPPP_PunchPkt st_PPPP_PunchPkt, *Pst_PPPP_PunchPkt;

struct st_PPPP_PunchPkt { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyServerReq st_PPPP_RlyServerReq, *Pst_PPPP_RlyServerReq;

struct st_PPPP_RlyServerReq { // PlaceHolder Structure
};

typedef struct __the_SLL __the_SLL, *P__the_SLL;

struct __the_SLL { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyTCPTo st_PPPP_RlyTCPTo, *Pst_PPPP_RlyTCPTo;

struct st_PPPP_RlyTCPTo { // PlaceHolder Structure
};

typedef struct st_PPPP_R2PMPBody st_PPPP_R2PMPBody, *Pst_PPPP_R2PMPBody;

struct st_PPPP_R2PMPBody { // PlaceHolder Structure
};

typedef struct st_PPPP_NoticeTo_EX st_PPPP_NoticeTo_EX, *Pst_PPPP_NoticeTo_EX;

struct st_PPPP_NoticeTo_EX { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyPortAck st_PPPP_RlyPortAck, *Pst_PPPP_RlyPortAck;

struct st_PPPP_RlyPortAck { // PlaceHolder Structure
};

typedef struct st_PPPP_SDevReport st_PPPP_SDevReport, *Pst_PPPP_SDevReport;

struct st_PPPP_SDevReport { // PlaceHolder Structure
};

typedef struct st_PPPP_SessionHeader st_PPPP_SessionHeader, *Pst_PPPP_SessionHeader;

struct st_PPPP_SessionHeader { // PlaceHolder Structure
};

typedef struct st_PPPP_P2PReq_EX st_PPPP_P2PReq_EX, *Pst_PPPP_P2PReq_EX;

struct st_PPPP_P2PReq_EX { // PlaceHolder Structure
};

typedef struct st_PPPP_ServerConfigReq st_PPPP_ServerConfigReq, *Pst_PPPP_ServerConfigReq;

struct st_PPPP_ServerConfigReq { // PlaceHolder Structure
};

typedef struct __the_SLL_Element __the_SLL_Element, *P__the_SLL_Element;

struct __the_SLL_Element { // PlaceHolder Structure
};

typedef struct st_PPPP_EasyTCPStart st_PPPP_EasyTCPStart, *Pst_PPPP_EasyTCPStart;

struct st_PPPP_EasyTCPStart { // PlaceHolder Structure
};

typedef struct st_PPPP_SDevSessionReport st_PPPP_SDevSessionReport, *Pst_PPPP_SDevSessionReport;

struct st_PPPP_SDevSessionReport { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyRdy st_PPPP_RlyRdy, *Pst_PPPP_RlyRdy;

struct st_PPPP_RlyRdy { // PlaceHolder Structure
};

typedef struct st_PPPP_R2PMPReq st_PPPP_R2PMPReq, *Pst_PPPP_R2PMPReq;

struct st_PPPP_R2PMPReq { // PlaceHolder Structure
};

typedef struct st_PPPP_PunchPkt_EX st_PPPP_PunchPkt_EX, *Pst_PPPP_PunchPkt_EX;

struct st_PPPP_PunchPkt_EX { // PlaceHolder Structure
};

typedef struct st_PPPP_PunchTo st_PPPP_PunchTo, *Pst_PPPP_PunchTo;

struct st_PPPP_PunchTo { // PlaceHolder Structure
};

typedef struct st_PPPP_ServerConfig st_PPPP_ServerConfig, *Pst_PPPP_ServerConfig;

struct st_PPPP_ServerConfig { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyTCPToAck st_PPPP_RlyTCPToAck, *Pst_PPPP_RlyTCPToAck;

struct st_PPPP_RlyTCPToAck { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyTCPReq st_PPPP_RlyTCPReq, *Pst_PPPP_RlyTCPReq;

struct st_PPPP_RlyTCPReq { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyPkt st_PPPP_RlyPkt, *Pst_PPPP_RlyPkt;

struct st_PPPP_RlyPkt { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyTo_EX st_PPPP_RlyTo_EX, *Pst_PPPP_RlyTo_EX;

struct st_PPPP_RlyTo_EX { // PlaceHolder Structure
};

typedef struct st_PPPP_LanSearch st_PPPP_LanSearch, *Pst_PPPP_LanSearch;

struct st_PPPP_LanSearch { // PlaceHolder Structure
};

typedef struct st_PPPP_P2PServerReq st_PPPP_P2PServerReq, *Pst_PPPP_P2PServerReq;

struct st_PPPP_P2PServerReq { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyTCPTo_EX st_PPPP_RlyTCPTo_EX, *Pst_PPPP_RlyTCPTo_EX;

struct st_PPPP_RlyTCPTo_EX { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyTo st_PPPP_RlyTo, *Pst_PPPP_RlyTo;

struct st_PPPP_RlyTo { // PlaceHolder Structure
};

typedef struct st_PPPP_PunchTo_EX st_PPPP_PunchTo_EX, *Pst_PPPP_PunchTo_EX;

struct st_PPPP_PunchTo_EX { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyRdy_EX st_PPPP_RlyRdy_EX, *Pst_PPPP_RlyRdy_EX;

struct st_PPPP_RlyRdy_EX { // PlaceHolder Structure
};

typedef struct st_PPPP_ConnectReport st_PPPP_ConnectReport, *Pst_PPPP_ConnectReport;

struct st_PPPP_ConnectReport { // PlaceHolder Structure
};

typedef struct st_PPPP_DRWAckHeader st_PPPP_DRWAckHeader, *Pst_PPPP_DRWAckHeader;

struct st_PPPP_DRWAckHeader { // PlaceHolder Structure
};

typedef struct st_PPPP_P2PRdy_EX st_PPPP_P2PRdy_EX, *Pst_PPPP_P2PRdy_EX;

struct st_PPPP_P2PRdy_EX { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyToAck st_PPPP_RlyToAck, *Pst_PPPP_RlyToAck;

struct st_PPPP_RlyToAck { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyReq st_PPPP_RlyReq, *Pst_PPPP_RlyReq;

struct st_PPPP_RlyReq { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyTCPPkt st_PPPP_RlyTCPPkt, *Pst_PPPP_RlyTCPPkt;

struct st_PPPP_RlyTCPPkt { // PlaceHolder Structure
};

typedef struct st_PPPP_Report st_PPPP_Report, *Pst_PPPP_Report;

struct st_PPPP_Report { // PlaceHolder Structure
};

typedef struct pppp_sha1_ctx pppp_sha1_ctx, *Ppppp_sha1_ctx;

struct pppp_sha1_ctx { // PlaceHolder Structure
};

typedef struct st_PPPP_R2PMPStart st_PPPP_R2PMPStart, *Pst_PPPP_R2PMPStart;

struct st_PPPP_R2PMPStart { // PlaceHolder Structure
};

typedef struct st_PPPP_NoticePing st_PPPP_NoticePing, *Pst_PPPP_NoticePing;

struct st_PPPP_NoticePing { // PlaceHolder Structure
};

typedef struct st_PPPP_DRWHeader st_PPPP_DRWHeader, *Pst_PPPP_DRWHeader;

struct st_PPPP_DRWHeader { // PlaceHolder Structure
};

typedef struct st_PPPP_RlyTCPStart st_PPPP_RlyTCPStart, *Pst_PPPP_RlyTCPStart;

struct st_PPPP_RlyTCPStart { // PlaceHolder Structure
};

typedef struct st_PPPP_P2PRdy st_PPPP_P2PRdy, *Pst_PPPP_P2PRdy;

struct st_PPPP_P2PRdy { // PlaceHolder Structure
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

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
void yi_p2p_on_stop_replay(void);
int vsprintf(char *__s,char *__format,__gnuc_va_list __arg);
void yi_p2p_on_has_record(void);
void tnp::over_time_receive(int param_1,char *param_2,int param_3,sockaddr_in *param_4,uint param_5);
void tnp::PPPP_DRWAck_Send(int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort *param_5,ushort param_6);
void yi_p2p_on_get_dev_info(void);
void tnp::PPPP_Proto_Send_R2PMPStart(int param_1,sockaddr_in *param_2,sockaddr_in *param_3,char param_4,char *param_5);
int memcmp(void *__s1,void *__s2,size_t __n);
void PPPP_DoListen_TCP(int param_1,uint param_2);
void tnp::PPPP_Proto_Send_ProbeAck2(int param_1,sockaddr_in *param_2,char *param_3,uint param_4);
void PPPP__IncomingConnectionCallback(void);
int ioctl(int __fd,ulong __request,...);
void tnp::PPPP_Proto_Send_HelloToAck(int param_1,sockaddr_in *param_2);
void tnp::PPPP_Proto_Write_RlyPort_EX(st_PPPP_RlyPort_EX *param_1,char *param_2,uint param_3,char *param_4,char *param_5,char *param_6);
void tnp::AddrCompare(sockaddr_in *param_1,sockaddr_in *param_2);
void tnp::PPPP_MakeSha1(char *param_1,int param_2,char *param_3,int param_4,char *param_5);
void tnp::PPPP__Send_Report(int param_1,uchar param_2,char *param_3);
void tnp::PPPP_Proto_Read_LanSearch(st_PPPP_LanSearch *param_1,char *param_2,uint *param_3,char *param_4,uchar *param_5);
void PPPP__Timer_Delete(uint param_1);
pthread_t pthread_self(void);
void tnp::SetSocketBlock(int param_1);
void tnp::PPPP_Proto_Write_SDevLgn(st_PPPP_SDevLgn *param_1,char *param_2,uint param_3,char *param_4);
void tnp::PPPP_Proto_Read_LanNotify(st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4);
void yi_p2p_on_get_ap_conf(void);
void tnp::PPPP_Proto_Read_PunchPkt_EX(st_PPPP_PunchPkt_EX *param_1,char *param_2,uint *param_3,char *param_4,uchar *param_5,uint *param_6,char *param_7);
void tnp::sll_Remove_ByIndex(__the_SLL *param_1,uint param_2);
void tnp::PPPP__DeviceInfoList_Get(char *param_1,uint param_2);
void tnp::pppp_hmac_sha1(void *param_1,int param_2,void *param_3,int param_4,void *param_5);
int sscanf(char *__s,char *__format,...);
int gettimeofday(timeval *__tv,__timezone_ptr_t __tz);
void tnp::PPPP__Update_SessionState(int param_1,uchar param_2);
void tnp::PPPP_Proto_Send_P2PRdy(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
void srand(uint __seed);
void tnp::pppp_sha1_init_ctx(pppp_sha1_ctx *param_1);
void PPPP_Send_NoticeToAck(void);
void yi_p2p_on_set_voice_ctrl(void);
void PPPP_Check_DevOnline(void);
void tnp::PPPP_Proto_Send_RlyPortAck(int param_1,sockaddr_in *param_2,uint param_3,ushort param_4,char param_5);
void trans_json_ex_s(void);
void tnp::PPPP_Proto_Write_RlyTCPStart(st_PPPP_RlyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char *param_5);
void PPPP__Timer_Thread_Check(void);
int snprintf(char *__s,size_t __maxlen,char *__format,...);
void yi_p2p_on_get_ptz_reset_time(void);
void __deregister_frame_info(void);
void tnp::pppp_sha1_process_block(void *param_1,uint param_2,pppp_sha1_ctx *param_3);
void PPPP__Send_Report_SuperDevice_ExitThread(char param_1,char param_2);
void tnp::ConnectAddress(int param_1,sockaddr_in *param_2);
void check_log_to_server_status(void);
void yi_p2p_on_stop_viewing(void);
void tnp::PPPP__Check_SessionDataReady(char *param_1,ushort param_2,ushort *param_3,ushort *param_4,uchar *param_5);
int strcmp(char *__s1,char *__s2);
void tnp::PPPP_Proto_Send_AliveAck(int param_1,char param_2,sockaddr_in *param_3);
void tnp::PPPP__Decode_ServerString(char *param_1,sockaddr_in *param_2,int param_3);
time_t time(time_t *__timer);
void tnp::PPPP_Proto_Read_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint *param_3,char *param_4);
void PPPP_Set_R2PMPCallback(void);
void tnp::PPPP__Send_ErrorReport(int param_1,uchar param_2,char *param_3);
void tnp::PPPP_Proto_Read_PunchTo_EX(st_PPPP_PunchTo_EX *param_1,sockaddr_in *param_2,uchar *param_3,uchar *param_4,uint *param_5,char *param_6);
void * memset(void *__s,int __c,size_t __n);
void tnp::PPPP__Check_ValidDID(char *param_1);
ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len);
void PPPP_TryRelay(int param_1,char param_2);
void tnp::PPPP__Parse_DID(char *param_1,char *param_2,int param_3,int *param_4,char *param_5,int param_6);
void tnp::PPPP_Proto_Write_ConnectReport(st_PPPP_ConnectReport *param_1,char *param_2,char param_3,char *param_4,int param_5);
void PPPP_Initialize(void);
void yi_p2p_on_ptz_preset_add(void);
void PPPP_LoginStatus_Check(void);
void yi_p2p_on_alert_events(void);
void tnp::PPPP_Proto_Write_R2PMPBody(st_PPPP_R2PMPBody *param_1,char *param_2,uint param_3,char *param_4,uint param_5,char *param_6);
void AesSetKeyDirect(void);
void tnp::PPPP_Proto_Send_SDevReport(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char *param_6,uint param_7,char *param_8,char param_9,char *param_10);
void yi_p2p_on_is_power_on(void);
void yi_p2p_on_get_record_events(void);
void tnp::PPPP_Proto_Write_P2PReq(st_PPPP_P2PReq *param_1,char *param_2,uint param_3,char *param_4,sockaddr_in *param_5);
void * malloc(size_t __size);
void tnp::PPPP_Proto_Read_RlyPkt(st_PPPP_RlyPkt *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,uint *param_6);
void yi_p2p_on_set_abnormal_sound_sensitivity(void);
void tnp::PPPP_Proto_Read_PunchPkt(st_PPPP_PunchPkt *param_1,char *param_2,uint *param_3,char *param_4);
void PPPP_NetworkDetect(void);
void tnp::pppp_memxor(void *param_1,void *param_2,uint param_3);
void tnp::PPPP_Proto_Recv_ALL(int param_1,sockaddr_in *param_2,uint param_3,uchar *param_4,ushort *param_5,char *param_6,ushort param_7,uchar *param_8);
void tnp::PPPP_Proto_Send_RlyHelloSDev(int param_1,sockaddr_in *param_2);
void * memmove(void *__dest,void *__src,size_t __n);
void PPPP__Timer_Push(st_PPPP_TimerElement_t *param_1);
hostent * gethostbyname(char *__name);
void tnp::PPPP_DRW_Write_Header(st_PPPP_DRWHeader *param_1,uchar param_2,ushort param_3);
void yi_p2p_on_set_viewpoint_trace(void);
void tnp::PPPP_Proto_Send_RlyPort_EX(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char *param_6);
int pthread_join(pthread_t __th,void **__thread_return);
void tnp::pppp_sha1_finish_ctx(pppp_sha1_ctx *param_1,void *param_2);
int rand(void);
void yi_p2p_on_ptz_set_cruise_stay_time(void);
void tnp::PPPP__R2PMP_Start(int param_1);
int strncmp(char *__s1,char *__s2,size_t __n);
void tnp::CreateWorkerThread(_func_void_ptr_void_ptr *param_1,void *param_2);
void pthread_exit(void *__retval);
int system(char *__command);
void tnp::PPPP_Proto_Read_NoticeTo_EX(st_PPPP_NoticeTo_EX *param_1,char *param_2,uint *param_3,char *param_4,ulonglong *param_5,ushort *param_6,char *param_7,uint *param_8);
void tnp::PPPP_Proto_Send_RlyPkt(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char param_6,uint param_7);
ssize_t recv(int __fd,void *__buf,size_t __n,int __flags);
void yi_p2p_on_new_session(void);
void PPPP_SetNoticeToCallback(void);
void PPPP_Close(void);
void yi_p2p_on_ptz_set_cruise_period(void);
void tnp::PPPP_Proto_Read_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint *param_3);
char * strcpy(char *__dest,char *__src);
void tnp::PPPP_Proto_Send_DevLgn_EX(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,char param_7,sockaddr_in *param_8,char *param_9,char param_10);
void tnp::PPPP_Proto_Read_ServerConfig(st_PPPP_ServerConfig *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,uint *param_6,char *param_7);
void AesSetKey(void);
void tnp::sll_Remove_ByNumber(__the_SLL *param_1,uint param_2);
void tnp::PPPP_Proto_Send_EasyTCPStart(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char param_6,char *param_7);
void PPPP_DoWakeup(char *param_1,char *param_2,char *param_3);
void PPPP_TrySendConnectReport(uint param_1,int param_2);
int clock_gettime(clockid_t __clock_id,timespec *__tp);
void tnp::PPPP__Set_SessionReady(int param_1,char param_2);
void yi_p2p_on_sync_dev_ability(void);
void yi_p2p_on_speaker_stop(void);
void tnp::PPPP__Send_Alive(uint param_1,int param_2,char param_3,sockaddr_in *param_4);
void yi_p2p_on_sync_info_from_server(void);
void tnp::ntohAddr(sockaddr_in *param_1,sockaddr_in *param_2);
void tnp::RecvFromAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4);
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,void *__arg);
void tnp::PPPP_Proto_Read_RlyPortAck(st_PPPP_RlyPortAck *param_1,uint *param_2,ushort *param_3,char *param_4);
void PPPP__Timer_Pop(void);
void tnp::PPPP__DeviceInfoList_Clear(void);
size_t strnlen(char *__string,size_t __maxlen);
void tnp::ClearSocketEnv(void);
int fclose(FILE *__stream);
void tnp::PPPP_Proto_Write_SDevSessionReport(st_PPPP_SDevSessionReport *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char *param_6,uint param_7,char *param_8,char param_9,uint param_10,uint param_11,uint param_12,uint param_13,uint param_14);
void PPPP__CheckP2PResult(int param_1);
void tnp::BroadcastMessage(char *param_1,int param_2,int param_3,ushort param_4);
void tnp::PPPP_Proto_Read_RlyTCPTo(st_PPPP_RlyTCPTo *param_1,sockaddr_in *param_2,char *param_3);
void tnp::PPPP_Proto_Write_RlyReq(st_PPPP_RlyReq *param_1,char *param_2,uint param_3,char *param_4,sockaddr_in *param_5,uint param_6);
void tnp::PPPP__DeviceInfoList_Init(void);
void tnp::PPPP_Proto_Send_NoticePingAck(int param_1,char param_2,sockaddr_in *param_3,st_PPPP_NoticePing *param_4);
void tnp::PPPP_Proto_Send_RlyTCPPkt(int param_1,sockaddr_in *param_2,char *param_3,char param_4);
uint sleep(uint __seconds);
void yi_p2p_on_set_replay_time(void);
void tnp::PPPP__Write_Block(int param_1,uchar param_2,char *param_3,int param_4);
void yi_p2p_on_reset_device(void);
void tnp::PPPP_Proto_Write_PunchPkt(st_PPPP_PunchPkt *param_1,char *param_2,uint param_3,char *param_4);
void yi_p2p_on_ptz_preset_call(void);
void yi_p2p_on_set_motion_record(void);
void yi_p2p_on_set_record_plan_time(void);
void tnp::MUTEX_RELEASE(pthread_mutex_t *param_1);
char * strstr(char *__haystack,char *__needle);
int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg);
void PPPP_Connect_LanOnly(void);
void tnp::PPPP_Proto_Read_R2PMPStart(st_PPPP_R2PMPStart *param_1,sockaddr_in *param_2,char *param_3,uint *param_4,char *param_5);
void tnp::PPPP_Proto_Recv_TCP(int param_1,char *param_2,ushort param_3,ushort *param_4,uint param_5);
void tnp::PPPP_DRWAck_Write_Header(st_PPPP_DRWAckHeader *param_1,uchar param_2,ushort param_3);
void tnp::IndexCompare(ushort param_1,ushort param_2);
void tnp::PPPP_Proto_Send_RlyTCPStart(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char *param_6);
void tnp::PPPP_Proto_Send_RlyServerReq(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6);
void tnp::PPPP_Proto_Send_Report(int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,char param_6,char param_7,short param_8,char *param_9);
void tnp::PPPP__Resolve_P2PServer(char *param_1,sockaddr_in *param_2,sockaddr_in *param_3);
void tnp::PPPP__Close_Inner(uint param_1);
void tnp::sll_Move_ByNumber(__the_SLL *param_1,__the_SLL *param_2,uint param_3);
void tnp::PPPP_DebugTrace(uint param_1,char *param_2,...);
void yi_p2p_on_set_abnormal_sound(void);
void tnp::SendMessageByTCP(char *param_1,int param_2,int param_3);
void tnp::PPPP__Get_LocalAddress(sockaddr_in *param_1,sockaddr_in *param_2);
int getsockname(int __fd,sockaddr *__addr,socklen_t *__len);
void PPPP__Start_Proto_Lan(int param_1);
void yi_p2p_check_buf(void);
void yi_p2p_on_set_lapse_video(void);
void tnp::MUTEX_DESTROY(pthread_mutex_t *param_1);
void tnp::PPPP_Proto_Read_RlyTo_EX(st_PPPP_RlyTo_EX *param_1,sockaddr_in *param_2,uint *param_3,char *param_4);
char * strchr(char *__s,int __c);
void PPPP_TryRelayByUDP(int param_1,int param_2);
void tnp::PPPP_Proto_Write_RlyPortAck(st_PPPP_RlyPortAck *param_1,uint param_2,ushort param_3,char param_4);
void tnp::PPPP__DeviceInfoList_UnInit(void);
void yi_p2p_on_get_record_events_month(void);
void yi_p2p_on_get_white_led_status(void);
void tnp::MUTEX_LOCK(pthread_mutex_t *param_1);
void tnp::PPPP_Proto_Write_RlyPkt(st_PPPP_RlyPkt *param_1,char *param_2,uint param_3,char *param_4,char param_5,uint param_6);
int pthread_mutex_destroy(pthread_mutex_t *__mutex);
void PPPP_Send_Login(void);
int bind(int __fd,sockaddr *__addr,socklen_t __len);
void yi_p2p_on_get_factory_test_info(void);
void tnp::pppp_bin_to_string(char *param_1,int param_2,char *param_3);
void tnp::PPPP_Proto_Read_RlyRdy_EX(st_PPPP_RlyRdy_EX *param_1,char *param_2,uint *param_3,char *param_4,char *param_5);
void PPPP__Send_Report_SuperDevice_Connect(char *param_1);
void tnp::PPPP_Proto_Write_ServerConfigReq(st_PPPP_ServerConfigReq *param_1,char *param_2,uint param_3,char *param_4,uint param_5,char *param_6);
void tnp::PPPP__DoNetWorkDetect(st_PPPP_NetInfo *param_1,ushort param_2,char *param_3);
void tnp::sll_DeInit(__the_SLL *param_1);
void PPPP_Connect(void);
void tnp::PPPP_Proto_Generate_SDevSessionReport(char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char *param_6,uint param_7,char *param_8,char param_9,uint param_10,uint param_11,uint param_12,uint param_13,uint param_14);
void tnp::PPPP__DeviceInfoList_Add(char *param_1,uint param_2,char *param_3);
void tnp::PPPP_Proto_Send_HelloWithBody(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char param_6);
void tnp::MUTEX_TRYLOCK(pthread_mutex_t *param_1);
void AesEncryptDirect(void);
tm * localtime_r(time_t *__timer,tm *__tp);
void tnp::PPPP_Proto_Write_P2PRdy_EX(st_PPPP_P2PRdy_EX *param_1,char *param_2,uint param_3,char *param_4,uint param_5,char *param_6);
FILE * popen(char *__command,char *__modes);
int printf(char *__format,...);
void yi_p2p_on_ptz_preset_del(void);
void tnp::PPPP_Proto_Send_Close(int param_1,char param_2,sockaddr_in *param_3);
void PPPP_ForceClose(void);
void tnp::PPPP_MakeSha1_2(char *param_1,int param_2,char *param_3,int param_4,char *param_5);
void PPPP__Send_NoticeToAckError(int param_1,ulonglong param_2,char param_3);
void tnp::sll_Put(__the_SLL *param_1,__the_SLL_Element *param_2);
void tnp::PPPP_Proto_Read_NoticePing(st_PPPP_NoticePing *param_1,char *param_2,uint *param_3,char *param_4);
void yi_p2p_on_process_ability_sets(void);
void tnp::PPPP__Start_TCP_For_Session(int param_1,sockaddr *param_2,int param_3);
void yi_p2p_on_ptz_jump_to_point(void);
void PPPP__Timer_UnInit(void);
void yi_p2p_on_ptz_set_cruise(void);
void yi_p2p_on_get_record_events_day(void);
void tnp::PPPP_DRW_Send(int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort param_5,char *param_6,ushort param_7);
void yi_p2p_on_set_baby_cry(void);
void tnp::PPPP_Proto_Send_RlyReq(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,sockaddr_in *param_6,uint param_7);
char * strncpy(char *__dest,char *__src,size_t __n);
void yi_p2p_on_restart_ap(void);
void PPPP__EnableInsecureMode(void);
void tnp::PPPP_Proto_Send_PunchPkt(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
void tnp::PPPP_Proto_Send_DevOnline(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
void tnp::PPPP_Proto_Send_ConnectReport(int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,char *param_6,int param_7);
void tnp::PPPP_Proto_Write_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint param_3,char *param_4);
void tnp::PPPP__ResetSuperDevice(void);
void tnp::CreateSocket(char param_1);
void tnp::PPPP__Calculate_LossRate(int param_1,uint *param_2);
void yi_p2p_on_set_light(void);
void yi_p2p_on_set_mirror_flip(void);
void tnp::UpdateNetwork(void);
void __cxa_finalize(void);
void tnp::SllIndexCompare(uint param_1,uint param_2,uint param_3);
void tnp::SetSocketBroadcast(int param_1);
void __register_frame_info(void);
void tnp::PPPP_Proto_Write_LanSearch(st_PPPP_LanSearch *param_1,char *param_2,uint param_3,char *param_4);
void AesDecryptDirect(void);
void yi_p2p_on_set_day_night_mode(void);
void tnp::PPPP_Proto_Send_PunchPkt_EX(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,uint param_6,char *param_7);
void PPPP_DoListen_UDP(int param_1,uint param_2,ushort param_3,char param_4);
void __thiscall tnp::PPPP_Proto_Send_NoticeToAck(tnp *this,int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,ulonglong param_7,ushort param_8,char *param_9,char *param_10,uchar param_11,char param_12);
void tnp::PPPP_Proto_Write_Header(st_PPPP_SessionHeader *param_1,uchar param_2,ushort param_3);
void PPPP_Check_Buffer(void);
int raise(int __sig);
void yi_p2p_on_set_wifi_info(void);
void PPPP__Check_Device_Working(void);
void PPPP_TryRelayByTCP(int param_1,int param_2);
int fprintf(FILE *__stream,char *__format,...);
void PPPP_TryWakeUp(char *param_1,int param_2,char *param_3,int param_4,uint param_5,uint param_6);
void PPPP_GetAPIVersion(void);
void tnp::PPPP_Proto_Send_ServerConfigReq(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,uint param_6,char *param_7);
void tnp::PPPP__Resolve_HostName(char *param_1,sockaddr_in *param_2);
void tnp::SendMessage(char *param_1,int param_2,int param_3,sockaddr_in *param_4);
ssize_t send(int __fd,void *__buf,size_t __n,int __flags);
void yi_p2p_on_set_ap_conf(void);
void yi_p2p_on_auth(void);
void tnp::PPPP__Halt_TCP_For_Session(int param_1);
void yi_p2p_on_ptz_direction_ctrl_stop(void);
void tnp::PPPP_Proto_Send_P2PReq_EX(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,sockaddr_in *param_6,char *param_7);
int ferror(FILE *__stream);
void PPPP_Set_IncomingConnectionCallback(void);
void tnp::PPPP_Proto_Write_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint param_3,char *param_4);
void tnp::PPPP_Proto_Read_R2PMPReq(st_PPPP_R2PMPReq *param_1,sockaddr_in *param_2,sockaddr_in *param_3,uint *param_4,char *param_5);
void tnp::WaitThreadExit(ulong *param_1);
void tnp::PPPP__Set_SessionState(int param_1,uchar param_2);
void PPPP_Read(void);
int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr);
void tnp::PPPP_DRWAck_Read_Header(st_PPPP_DRWAckHeader *param_1,uchar *param_2,ushort *param_3);
void yi_p2p_on_set_audio_mode(void);
void tnp::MUTEX_INIT(pthread_mutex_t *param_1);
void tnp::PPPP__Check_RemoteAddr(int param_1,sockaddr_in *param_2);
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);
int socket(int __domain,int __type,int __protocol);
void tnp::PPPP_Proto_Send_LanSearch(int param_1,ushort param_2,char *param_3,uint param_4,char *param_5);
void tnp::TryBindPort(int param_1,ushort *param_2);
int close(int __fd);
void PPPP_TryP2P(int param_1,char param_2);
void tnp::SetSocketNonBlock(int param_1);
void PPPP__Timer_Timeout(void);
void tnp::PPPP_MakeNonce(char *param_1,int param_2);
void tnp::PPPP_Proto_Send_DevLgn_Proxy(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,char param_7,sockaddr_in *param_8,char *param_9,char param_10,char *param_11,uint param_12,char *param_13,char *param_14,uchar param_15);
void tnp::sll_element_Allocate(uint param_1,uint param_2);
void tnp::PPPP_Proto_Read_Header(st_PPPP_SessionHeader *param_1,uchar *param_2,ushort *param_3);
void tnp::PPPP_Proto_Send_RlyRdy(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
void yi_remote_manual_reboot(void);
void tnp::PPPP_Proto_Write_P2PReq_EX(st_PPPP_P2PReq_EX *param_1,char *param_2,uint param_3,char *param_4,sockaddr_in *param_5,char *param_6);
void tnp::PPPP_Proto_Write_R2PMPStart(st_PPPP_R2PMPStart *param_1,sockaddr_in *param_2,char param_3,char *param_4);
void tnp::sll_Search_ByNumber(__the_SLL *param_1,uint param_2);
void * calloc(size_t __nmemb,size_t __size);
void tnp::PPPP__ConnectWithNonBlockSocket(int param_1,sockaddr *param_2,int param_3);
void yi_p2p_on_start_viewing(void);
void tnp::PPPP_Proto_Read_PunchTo(st_PPPP_PunchTo *param_1,sockaddr_in *param_2);
void tnp::sll_Search_ByIndex(__the_SLL *param_1,uint param_2,uint *param_3);
void PPPP__Timer_RemoveMaxElapse(void);
void yi_p2p_on_set_alarm_sensitivity(void);
void tnp::PPPP__Update_SessionP2PServer(int param_1,sockaddr_in *param_2);
void tnp::PPPP_Proto_Write_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint param_3);
void tnp::PPPP_Proto_Write_RlyTCPReq(st_PPPP_RlyTCPReq *param_1,char *param_2,uint param_3,char *param_4,sockaddr_in *param_5,char *param_6);
void tnp::PPPP_Proto_Write_RlyTCPPkt(st_PPPP_RlyTCPPkt *param_1,char *param_2,char param_3);
int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen);
void tnp::DetachThread(ulong *param_1);
void tnp::over_time_receive_tcp(int param_1,char *param_2,int param_3,uint param_4);
void yi_p2p_on_panorama_capture_start(void);
void yi_report_debug_strings(void);
void yi_p2p_on_set_encode_mode(void);
int inet_aton(char *__cp,in_addr *__inp);
void PPPP__InitP2PTCPSocketInfo(void);
void tnp::PPPP_Proto_Write_RlyServerReq(st_PPPP_RlyServerReq *param_1,char *param_2,uint param_3,char *param_4);
void tnp::GetIP(int param_1,char *param_2);
void tnp::PPPP__Set_ConnectKey(uint param_1,char *param_2);
void tnp::sll_Put_Free(__the_SLL *param_1,__the_SLL_Element *param_2,char param_3);
void yi_p2p_on_ptz_home(void);
void yi_p2p_on_set_alarm_sound(void);
void tnp::mSecSleep(uint param_1);
void PPPP__App_UnInit(void);
void PPPP__GetLanOnlyFlag(void);
int fputc(int __c,FILE *__stream);
void yi_p2p_on_panorama_capture_abort(void);
void yi_p2p_on_get_white_led_time(void);
void yi_p2p_on_get_device_param_conf(void);
void PPPP_Set_LogFilename(void);
void yi_p2p_on_ptz_direction_ctrl(void);
void tnp::PPPP_DRW_Read_Header(st_PPPP_DRWHeader *param_1,uchar *param_2,ushort *param_3);
void tnp::PPPP__Calculate_P2PPktLossRatio(uint param_1);
void tnp::PPPP_Proto_Send_RlyHelloSDevAck(int param_1,sockaddr_in *param_2);
void tnp::pppp_sha1_process_bytes(void *param_1,uint param_2,pppp_sha1_ctx *param_3);
void tnp::PPPP_IsEmpty(char *param_1);
void tnp::PPPP_Proto_Send_SDevLgn(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
void yi_p2p_on_sync_time(void);
void tnp::PPPP_Proto_Write_P2PServerReq(st_PPPP_P2PServerReq *param_1,char *param_2,uint param_3,char *param_4,char param_5,char *param_6,char *param_7);
void yi_p2p_on_get_video_backup_state(void);
void PPPP_Get_PeerBandwidthInfo(void);
void tnp::PPPP_Proto_Write_HeaderV2(st_PPPP_SessionHeaderV2 *param_1,uchar param_2,ushort param_3,char param_4,char *param_5,uint param_6,char *param_7);
int * __errno_location(void);
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);
void yi_p2p_on_update(void);
void PPPP__CloseTCPSessionSocket(int param_1);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
int fcntl(int __fd,int __cmd,...);
void tnp::PPPP__Connect_TCPServer(sockaddr_in *param_1,int param_2,int *param_3,int param_4,int param_5);
void tnp::PPPP__Reset_Session(void);
void PPPP_Listen_Break(void);
void tnp::PPPP_Proto_Send_R2PMPBody(int param_1,sockaddr_in *param_2,uchar param_3,char *param_4,uint param_5,char *param_6,uint param_7,char *param_8);
void PPPP_Listen(void);
int fputs(char *__s,FILE *__stream);
void yi_p2p_on_set_video_backup(void);
void tnp::PPPP_Proto_Write_SDevReport(st_PPPP_SDevReport *param_1,char *param_2,uint param_3,char *param_4,char *param_5,uint param_6,char *param_7,char param_8,char *param_9);
void tnp::PPPP_Proto_Read_RlyTCPTo_EX(st_PPPP_RlyTCPTo_EX *param_1,sockaddr_in *param_2,char *param_3,char *param_4);
void PPPP_Write(void);
void tnp::PPPP__R2PMP_Success(int param_1,sockaddr_in *param_2);
void tnp::PPPP_MakeSha1_EX(char *param_1,int param_2,char *param_3,int param_4,char *param_5);
void tnp::PPPP__ExitSuperDevice(char param_1);
int pthread_mutex_lock(pthread_mutex_t *__mutex);
void yi_p2p_on_set_device_param_conf(void);
void tnp::PPPP_Proto_Send_WakeUp(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,char *param_7);
void tnp::PPPP_Proto_Read_LanNotifyAck(st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4);
void PPPP__ResetP2PTCPSocketInfo(void);
void PPPP__Device_Init(void);
void yi_p2p_on_set_mic_volume(void);
tm * localtime(time_t *__timer);
void yi_p2p_on_get_panorama_capture_schedule(void);
int feof(FILE *__stream);
void yi_p2p_on_get_record_plan_time(void);
void tnp::PPPP_DecodeString(char *param_1,char *param_2,int param_3);
void tnp::PPPP__Update_P2PServer(sockaddr_in *param_1,sockaddr_in *param_2,sockaddr_in *param_3);
void AesCbcDecrypt(void);
void PPPP__HelloToIpEqual(ulong param_1,ulong param_2,ulong param_3,ulong param_4);
void yi_p2p_on_set_white_led_time(void);
void PPPP__Device_UnInit(void);
void yi_p2p_on_set_high_resolution(void);
void tnp::PPPP_Proto_Read_P2PRdy_EX(st_PPPP_P2PRdy_EX *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,char *param_6);
ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len);
void yi_p2p_on_ptz_set_motion_track(void);
void yi_p2p_on_set_sd_record_stop(void);
void tnp::getCurTime(void);
void free(void *__ptr);
void yi_p2p_on_get_motion_detect_cfg(void);
void tnp::PPPP_Proto_Send_RlyTCPToAck(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,char *param_7,char param_8,char param_9);
void PPPP__Generate_SeqNum(void);
int pclose(FILE *__stream);
int atoi(char *__nptr);
void tnp::PPPP_Proto_Write_PunchPkt_EX(st_PPPP_PunchPkt_EX *param_1,char *param_2,uint param_3,char *param_4,uint param_5,char *param_6);
void tnp::PPPP_Proto_Write_RlyToAck(st_PPPP_RlyToAck *param_1,char *param_2,uint param_3,char *param_4,char param_5,uint param_6,char param_7);
void yi_p2p_on_set_power(void);
time_t mktime(tm *__tp);
char * inet_ntoa(in_addr __in);
void yi_p2p_on_get_realtime_state(void);
void tnp::PPPP_Proto_Write_DevLgn(st_PPPP_DevLgn *param_1,char *param_2,uint param_3,char *param_4,char param_5,sockaddr_in *param_6);
void PPPP_Share_Bandwidth(void);
void tnp::PPPP_Proto_Send_Hello(int param_1,sockaddr_in *param_2);
void tnp::PPPP_Proto_Write_EasyTCPStart(st_PPPP_EasyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char param_5);
void PPPP__EnableSecureMode(void);
void error_at_line(void);
void tnp::IndexDistanse(ushort param_1,ushort param_2);
void tnp::PPPP_Proto_Read_R2PMPBody(st_PPPP_R2PMPBody *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,char *param_6);
void yi_p2p_on_speaker_start(void);
char * strerror(int __errnum);
FILE * fopen(char *__filename,char *__modes);
void tnp::PPPP_Proto_Send_Probe(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char param_5);
int pthread_detach(pthread_t __th);
void tnp::sll_Init(__the_SLL *param_1,uint param_2);
void PPPP__NoticeToCallback(ulonglong param_1,char *param_2,uint param_3);
int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout);
void yi_p2p_on_set_ldc(void);
void yi_p2p_on_get_version(void);
long atol(char *__nptr);
void yi_p2p_get_replay_speed(void);
void tnp::setup_listen_port(ushort param_1);
void PPPP_Connect_Break_All(void);
tm * gmtime_r(time_t *__timer,tm *__tp);
void tnp::PPPP_Proto_Read_RlyPort_EX(st_PPPP_RlyPort_EX *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,char *param_6);
int sprintf(char *__s,char *__format,...);
void yi_p2p_on_set_light_switch_mode(void);
void PPPP_DoListen(char *param_1,uint param_2,ushort param_3,char param_4,char *param_5,char *param_6);
void AesCbcEncrypt(void);
void PPPP__Timer_Clear(void);
void PPPP__Timer_Init(void);
void * memcpy(void *__dest,void *__src,size_t __n);
void tnp::PPPP_Proto_Send_RlyToAck(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char param_6,uint param_7,char param_8);
void PPPP_DoConnect(char *param_1,char param_2,ushort param_3,char *param_4,char *param_5,char param_6);
int pthread_mutex_trylock(pthread_mutex_t *__mutex);
void PPPP__SessionHandler_Is_Full(void);
void PPPP_Get_APIVersion(void);
void tnp::PPPP_Proto_Read_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint *param_3,char *param_4);
void tnp::PPPP__Resolve_SessionP2PServer(int param_1,char *param_2);
void yi_p2p_get_frame_data_offset(void);
void tnp::PPPP__Dump_SessionInfo(int param_1);
void tnp::PPPP_Proto_Send_RlyHello(int param_1,sockaddr_in *param_2);
void yi_p2p_on_set_alarm_ring(void);
void tnp::PPPP_Proto_Send_P2PRdy_EX(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,uint param_6,char *param_7);
void tnp::SendToAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4);
size_t strlen(char *__s);
void yi_p2p_on_set_ptz_reset_time(void);
void tnp::sll_element_Free(__the_SLL_Element *param_1);
void yi_p2p_on_set_human_motion(void);
void tnp::getCurSecond(long param_1,uint param_2);
void tnp::CloseSocket(int param_1);
int usleep(__useconds_t __useconds);
void PPPP__SetP2PTCPSocketInfo(int param_1,char *param_2,uint param_3,char *param_4);
void tnp::InitSocketEnv(void);
void yi_p2p_on_format_sd(void);
void yi_p2p_on_set_motion_detect(void);
void yi_p2p_on_alert_days(void);
void tnp::PPPP_Proto_Send_RlyTCPReq(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,sockaddr_in *param_7,char *param_8);
void PPPP_SendNoticeToAck(void);
void PPPP_DeInitialize(void);
void PPPP__App_Init(void);
void PPPP_Set_NoticeToCallback(void);
void tnp::htonAddr(sockaddr_in *param_1,sockaddr_in *param_2);
void tnp::PPPP_Proto_Write_Report(st_PPPP_Report *param_1,char *param_2,char param_3,char param_4,char param_5,short param_6,char *param_7);
void PPPP__Send_SessionReport_SuperDevice(char param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);
void tnp::PPPP_Proto_Write_RlyTCPToAck(st_PPPP_RlyTCPToAck *param_1,char *param_2,uint param_3,char *param_4,char *param_5,char param_6,char param_7);
void tnp::LanIfNum(void);
undefined4 processEntry entry(undefined4 param_1);
undefined4 FUN_0001ba48(void);
void FUN_0001bac0(ushort *param_1);
void FUN_0001bbd4(void);
void _FINI_0(void);
void _INIT_0(void);
void FUN_0001be5c(uint param_1,uint param_2,uint *param_3);
uint * FUN_0001d4c0(uint *param_1,uint *param_2);
void FUN_0001d594(void *param_1,uint param_2,int param_3);
void FUN_0001d70c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0001d780(FILE *param_1,undefined4 param_2);
undefined4 FUN_0001d8d0(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
longlong FUN_0001db70(void);
char * FUN_0001dbc8(char *param_1,char *param_2,int param_3);
char * FUN_0001dc2c(byte *param_1,char *param_2,int param_3);
void FUN_0001dd84(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4);
void FUN_0001de64(undefined4 param_1,undefined4 param_2,char *param_3);
void FUN_0001e664(int param_1,int param_2,int param_3,void *param_4,ushort param_5);
undefined4 FUN_0001e764(int param_1,uint param_2,uint param_3,int param_4);
void FUN_0001e8d4(char *param_1,char *param_2,undefined4 param_3);
undefined4 FUN_0001e92c(int param_1);
void FUN_0001e9ec(int param_1,int param_2,int param_3);
undefined4 yi_p2p_init(undefined4 param_1,char param_2);
void yi_p2p_deinit(void);
undefined4 yi_p2p_listen(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 yi_p2p_reply_record_events(uint param_1,int param_2,time_t *param_3,int param_4);
int yi_p2p_check_buf(int param_1,undefined1 param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 yi_p2p_get_frame_data_offset(void);
void yi_p2p_reply_set_motion_detect(undefined4 param_1,undefined4 param_2,uint *param_3);
void yi_p2p_reply_motion_detect_cfg(undefined4 param_1,undefined4 param_2,uint *param_3);
void yi_p2p_reply_set_video_backup(undefined4 param_1,undefined4 param_2,byte param_3);
void yi_p2p_reply_video_backup_state(undefined4 param_1,undefined4 param_2,void *param_3);
void yi_p2p_reply_ptz_preset_add(undefined4 param_1,undefined4 param_2,void *param_3);
void yi_p2p_reply_ptz_preset_del(undefined4 param_1,undefined4 param_2,void *param_3);
void yi_p2p_reply_ptz_preset_call(undefined4 param_1,undefined4 param_2,void *param_3);
void yi_p2p_reply_panorama_capture_start(undefined4 param_1,undefined4 param_2,void *param_3);
void yi_p2p_reply_panorama_capture_schedule(undefined4 param_1,undefined4 param_2,void *param_3);
void yi_p2p_reply_dev_info(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4);
void yi_p2p_reply_factory_test_info(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void yi_p2p_reply_version(undefined4 param_1,undefined4 param_2,char *param_3);
void yi_p2p_reply_update(undefined4 param_1,undefined4 param_2,char *param_3);
void FUN_0001fcbc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int yi_p2p_send_frame_data(int param_1,uint *param_2,void *param_3,int param_4);
size_t yi_p2p_recv_audio_data(int param_1,byte *param_2,uint *param_3);
undefined4 yi_p2p_do_auth(int param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5,undefined1 *param_6);
undefined4 yi_p2p_process_ability_sets(undefined4 param_1,uint param_2,undefined4 param_3,int param_4);
bool yi_p2p_is_alive(int param_1);
int yi_p2p_count_session(void);
int yi_p2p_count_viewer(void);
void yi_p2p_share_bandwidth(void);
void yi_p2p_get_login_status(uint *param_1);
undefined4 yi_p2p_release_session(int param_1);
undefined1 yi_p2p_is_audio_requested(int param_1);
undefined1 yi_p2p_is_video_requested(int param_1);
undefined1 yi_p2p_is_replay(int param_1);
void yi_p2p_set_replay_failed(int param_1);
undefined4 yi_p2p_get_resolution(int param_1);
uint yi_p2p_get_replay_speed(int param_1);
int FUN_0002111c(int *param_1);
undefined4 yi_p2p_reply_ap_conf(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5);
undefined4 yi_p2p_reply_device_param_conf(undefined4 param_1,undefined4 param_2,char *param_3);
undefined4 yi_p2p_reply_alert_days(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4);
undefined4 yi_p2p_reply_alert_events(undefined4 param_1,undefined4 param_2,uint param_3);
undefined4 yi_p2p_login_status_check(int param_1);
void yi_p2p_listen_break(void);
int yi_p2p_reply_record_events_day(uint param_1,int param_2,time_t *param_3,int param_4);
int yi_p2p_reply_record_events_month(undefined4 param_1,undefined4 param_2,int param_3,uint param_4);
uint yi_p2p_process_msg(int param_1);
undefined4 PPPP_Get_APIVersion(void);
undefined4 PPPP_NetworkDetect(st_PPPP_NetInfo *param_1,ushort param_2,undefined4 param_3,undefined4 param_4);
int PPPP_Check(uint param_1,undefined4 *param_2);
undefined4 PPPP_Close(uint param_1);
undefined4 PPPP_ForceClose(uint param_1);
int PPPP_Read(uint param_1,uint param_2,void *param_3,size_t *param_4,uint param_5);
int PPPP_Check_Buffer(uint param_1,uint param_2,int *param_3,int *param_4);
size_t PPPP_Write(uint param_1,uint param_2,void *param_3,size_t param_4);
void PPPP_Config_Debug(int param_1,undefined4 param_2);
void tnp::PPPP_Update_Network(void);
undefined4 PPPP_Set_LogFilename(char *param_1);
undefined4 PPPP_Initialize(char *param_1,uint param_2);
undefined4 PPPP_DeInitialize(void);
void PPPP_GetAPIVersion(void);
void PPPP_Set_Log_Filename(void);
void tnp::PPPP_Thread_R2PMP_Callback(void *param_1);
void PPPP_Thread_Recv_Proto_App(void *param_1);
void PPPP_Thread_Recv_Proto_App_TCP(void *param_1);
void tnp::PPPP__R2PMPCallback(int param_1);
undefined4 PPPP__CheckP2PResult(int param_1);
size_t PPPP_Probe(char *param_1,int param_2,char *param_3,size_t param_4);
uint * PPPP_Check_DevOnline(char *param_1,char *param_2,int param_3,uint *param_4);
int PPPP_TryWakeUp(char *param_1,int param_2,char *param_3,int param_4,uint param_5,uint param_6);
undefined1 PPPP_TryP2P(int param_1,char param_2);
undefined4 PPPP_TryRelayByUDP(int param_1,int param_2);
undefined4 PPPP_TryRelayByTCP(int param_1,int param_2);
uint PPPP_TryRelay(int param_1,char param_2);
undefined4 PPPP__GetLanOnlyFlag(void);
undefined4 PPPP_TrySendConnectReport(uint param_1,int param_2);
void * PPPP_DoConnect(char *param_1,char param_2,ushort param_3,char *param_4,char *param_5,char param_6);
int PPPP_DoWakeup(char *param_1,char *param_2,char *param_3);
void PPPP_Connect(char *param_1,char param_2,ushort param_3,char *param_4,char *param_5);
void PPPP_WakeUp_And_Connect(char *param_1,char param_2,ushort param_3,char *param_4,char *param_5);
void PPPP_WakeUp(char *param_1,char *param_2,char *param_3);
void PPPP_Connect_With_DefaultFlag(char *param_1,ushort param_2,char *param_3,char *param_4);
void PPPP_Connect_LanOnly(char *param_1);
undefined4 PPPP__App_Init(void);
undefined4 PPPP__App_UnInit(void);
undefined4 PPPP_Connect_Break(char *param_1);
undefined4 PPPP_Connect_Break_All(void);
undefined4 PPPP_Set_R2PMPCallback(undefined4 param_1);
void PPPP_CheckDevOnline(void);
void PPPP_ConnectByServer(void);
void PPPP_ConnectOnlyLanSearch(void);
void PPPP_SetR2PMPCallback(void);
void PPPP__thread_callback(void *param_1);
void PPPP_Thread_check_UDP(void *param_1);
void PPPP_Thread_Recv_Proto_LanSearch(void *param_1);
void FUN_0002e8c8(undefined4 param_1);
void tnp::PPPP__ExitSuperDevice(char param_1);
void tnp::PPPP__ResetSuperDevice(void);
undefined1 PPPP__ShareBandwidth(void);
undefined1 PPPP__AnotherDeviceInLan(void);
void PPPP__IncomingConnectionCallback(void);
void PPPP__NoticeToCallback(ulonglong param_1,char *param_2,uint param_3);
void PPPP__InitP2PTCPSocketInfo(void);
undefined4 PPPP__SetP2PTCPSocketInfo(int param_1,char *param_2,uint param_3,char *param_4);
void PPPP__ResetP2PTCPSocketInfo(void);
undefined4 PPPP__SessionHandler_Is_Full(void);
byte PPPP__EnableSecureMode(void);
byte PPPP__EnableInsecureMode(void);
void PPPP_Thread_Recv_Proto_LanMsg(void *param_1);
undefined4 PPPP_Parse_Address(char *param_1,char *param_2,int param_3);
undefined4 PPPP_LoginStatus_Check(int param_1);
undefined4 PPPP_Share_Bandwidth(uint param_1);
undefined4 PPPP__Check_Device_Working(void);
undefined4 PPPP__Send_Report_SuperDevice_Connect(char *param_1);
undefined4 PPPP__Send_Report_SuperDevice_ExitThread(char param_1,char param_2);
bool PPPP__HelloToIpEqual(ulong param_1,ulong param_2,ulong param_3,ulong param_4);
void PPPP__Send_NoticeToAckError(int param_1,ulonglong param_2,char param_3);
void PPPP_Thread_Recv_Proto_Device(void *param_1);
void PPPP_Thread_Recv_Proto_Device_TCP(void *param_1);
undefined4 PPPP__Start_Proto_Lan(int param_1);
undefined4 PPPP_DoListen_UDP(int param_1,uint param_2,ushort param_3,char param_4);
void PPPP__CloseTCPSessionSocket(int param_1);
undefined4 PPPP_DoListen_TCP(int param_1,uint param_2);
undefined4 PPPP_Listen_Break(void);
int PPPP_Send_Login(void);
undefined4 PPPP_IsConnecting(void);
undefined4 PPPP_Set_IncomingConnectionCallback(undefined4 param_1);
undefined4 PPPP_Set_NoticeToCallback(undefined4 param_1);
int PPPP_Send_NoticeToAck(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 PPPP_Get_Statistics(uint param_1,undefined2 *param_2);
undefined4 PPPP_Get_PeerBandwidthInfo(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
void PPPP__Timer_Init(void);
undefined4 PPPP__Device_Init(void);
void PPPP__Timer_Thread_Check(void);
void * PPPP_DoListen(char *param_1,uint param_2,ushort param_3,char param_4,char *param_5,char *param_6);
void PPPP_Listen(char *param_1,uint param_2,ushort param_3,char param_4,char *param_5,char *param_6);
undefined4 PPPP_Listen_Proxy(char *param_1,char *param_2,void *param_3,size_t param_4,uint param_5,ushort param_6,char param_7,char *param_8,char *param_9);
undefined4 PPPP__Timer_Push(st_PPPP_TimerElement_t *param_1);
int PPPP__Timer_Pop(void);
void PPPP__Timer_Delete(uint param_1);
undefined4 PPPP__Timer_Timeout(void);
void PPPP__Timer_RemoveMaxElapse(void);
void PPPP__thread_timer(void *param_1);
void PPPP__Timer_Clear(void);
void PPPP__Timer_UnInit(void);
undefined4 PPPP__Device_UnInit(void);
int PPPP__Generate_SeqNum(void);
undefined4 PPPP__Send_SessionReport_SuperDevice(char param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);
void PPPP_Thread_SuperDevice(void *param_1);
void PPPP_SendLogin(void);
void PPPP_GetPeerBandwidthInfo(void);
void PPPP_SetIncomingConnectionCallback(void);
void PPPP_SetNoticeToCallback(void);
void PPPP_SendNoticeToAck(void);
void tnp::PPPP__DeviceInfoList_Init(void);
undefined4 tnp::PPPP__DeviceInfoList_Add(char *param_1,uint param_2,char *param_3);
char * tnp::PPPP__DeviceInfoList_Get(char *param_1,uint param_2);
void tnp::PPPP__DeviceInfoList_Clear(void);
void tnp::PPPP__DeviceInfoList_UnInit(void);
int tnp::PPPP__ConnectWithNonBlockSocket(int param_1,sockaddr *param_2,int param_3);
undefined4 tnp::PPPP__Set_ConnectKey(uint param_1,char *param_2);
void tnp::PPPP__Set_SessionState(int param_1,uchar param_2);
void tnp::PPPP__Reset_Session(int param_1,int param_2);
void tnp::PPPP__DIDFormat(char *param_1,char *param_2);
undefined4 tnp::PPPP__Check_ValidDID(char *param_1);
undefined4 tnp::PPPP__Parse_DID(char *param_1,char *param_2,int param_3,int *param_4,char *param_5,int param_6);
undefined4 tnp::PPPP__Check_RemoteAddr(int param_1,sockaddr_in *param_2);
undefined4 tnp::PPPP__Check_SessionDataReady(char *param_1,ushort param_2,ushort *param_3,ushort *param_4,uchar *param_5);
undefined4 tnp::PPPP__Get_LocalAddress(sockaddr_in *param_1,sockaddr_in *param_2);
undefined4 tnp::PPPP__Resolve_HostName(char *param_1,sockaddr_in *param_2);
undefined4 tnp::PPPP__Decode_ServerString(char *param_1,sockaddr_in *param_2,int param_3);
void tnp::PPPP__Update_P2PServer(sockaddr_in *param_1,sockaddr_in *param_2,sockaddr_in *param_3);
undefined4 tnp::PPPP__Resolve_P2PServer(char *param_1,sockaddr_in *param_2,sockaddr_in *param_3);
void tnp::PPPP__Update_SessionP2PServer(int param_1,sockaddr_in *param_2);
undefined4 tnp::PPPP__Resolve_SessionP2PServer(int param_1,char *param_2);
undefined4 tnp::PPPP__DoNetWorkDetect(st_PPPP_NetInfo *param_1,ushort param_2,char *param_3);
int tnp::PPPP__Connect_TCPServer(sockaddr_in *param_1,int param_2,int *param_3,int param_4,int param_5);
void tnp::PPPP__Halt_TCP_For_Session(int param_1);
void tnp::PPPP__Update_SessionState(int param_1,uchar param_2);
void tnp::PPPP__Set_SessionReady(int param_1,char param_2);
int tnp::PPPP__Start_TCP_For_Session(int param_1,sockaddr *param_2,int param_3);
undefined4 tnp::PPPP__Close_Inner(uint param_1);
void tnp::PPPP__R2PMP_Start(int param_1);
void tnp::PPPP__R2PMP_Success(int param_1,sockaddr_in *param_2);
void tnp::PPPP__Send_Alive(uint param_1,int param_2,char param_3,sockaddr_in *param_4);
undefined4 tnp::PPPP__Send_Report(int param_1,uchar param_2,char *param_3);
void tnp::PPPP_Thread_Recv_TCP(void *param_1);
undefined4 tnp::PPPP__Send_ErrorReport(int param_1,uchar param_2,char *param_3);
int tnp::PPPP__Write_Block(int param_1,uchar param_2,char *param_3,int param_4);
uint tnp::PPPP__Calculate_P2PPktLossRatio(uint param_1);
undefined4 tnp::PPPP__Calculate_LossRate(int param_1,uint *param_2);
void tnp::PPPP__Calculate_Bitrate(int param_1,int param_2,uint param_3,uint param_4,uint *param_5);
void tnp::PPPP__Dump_SessionInfo(int param_1);
void tnp::PPPP_Thread_Recv_DRW(void *param_1);
void tnp::PPPP_Thread_Send_DRW(void *param_1);
uint tnp::SllIndexCompare(uint param_1,uint param_2,uint param_3);
undefined4 tnp::IndexCompare(ushort param_1,ushort param_2);
void tnp::IndexDistanse(ushort param_1,ushort param_2);
uint * tnp::sll_element_Allocate(uint param_1,uint param_2);
void tnp::sll_element_Free(__the_SLL_Element *param_1);
void tnp::sll_Dump(__the_SLL *param_1,int param_2);
void tnp::sll_Init(__the_SLL *param_1,uint param_2);
void tnp::sll_DeInit(__the_SLL *param_1);
undefined4 tnp::sll_Put_Free(__the_SLL *param_1,__the_SLL_Element *param_2,char param_3);
void tnp::sll_Put(__the_SLL *param_1,__the_SLL_Element *param_2);
undefined4 tnp::sll_Search_ByIndex(__the_SLL *param_1,uint param_2,uint *param_3);
void tnp::sll_Search_ByNumber(__the_SLL *param_1,uint param_2);
void tnp::sll_Remove_ByIndex(__the_SLL *param_1,uint param_2);
void tnp::sll_Remove_ByNumber(__the_SLL *param_1,uint param_2);
__the_SLL_Element * tnp::sll_Move_ByNumber(__the_SLL *param_1,__the_SLL *param_2,uint param_3);
undefined4 tnp::MUTEX_INIT(pthread_mutex_t *param_1);
void tnp::MUTEX_DESTROY(pthread_mutex_t *param_1);
void tnp::MUTEX_LOCK(pthread_mutex_t *param_1);
void tnp::MUTEX_TRYLOCK(pthread_mutex_t *param_1);
void tnp::MUTEX_RELEASE(pthread_mutex_t *param_1);
void tnp::mSecSleep(uint param_1);
void tnp::SetSocketNonBlock(int param_1);
void tnp::SetSocketBlock(int param_1);
void tnp::SetSocketBroadcast(int param_1);
pthread_t tnp::CreateWorkerThread(_func_void_ptr_void_ptr *param_1,void *param_2);
int tnp::DetachThread(ulong *param_1);
void tnp::WaitThreadExit(ulong *param_1);
undefined4 tnp::InitSocketEnv(void);
void tnp::ClearSocketEnv(void);
void tnp::pppp_sha1_init_ctx(pppp_sha1_ctx *param_1);
void * tnp::pppp_sha1_read_ctx(pppp_sha1_ctx *param_1,void *param_2);
void tnp::pppp_sha1_process_block(void *param_1,uint param_2,pppp_sha1_ctx *param_3);
void tnp::pppp_sha1_finish_ctx(pppp_sha1_ctx *param_1,void *param_2);
void tnp::pppp_sha1_process_bytes(void *param_1,uint param_2,pppp_sha1_ctx *param_3);
void tnp::pppp_sha1_buffer(char *param_1,uint param_2,void *param_3);
undefined4 tnp::pppp_sha1_stream(__STDIO_FILE_STRUCT *param_1,void *param_2);
void tnp::pppp_memxor(void *param_1,void *param_2,uint param_3);
undefined4 tnp::pppp_hmac_sha1(void *param_1,int param_2,void *param_3,int param_4,void *param_5);
void tnp::pppp_bin_to_string(char *param_1,int param_2,char *param_3);
void tnp::PPPP_MakeSha1(char *param_1,int param_2,char *param_3,int param_4,char *param_5);
void tnp::PPPP_MakeSha1_2(char *param_1,int param_2,char *param_3,int param_4,char *param_5);
void tnp::PPPP_MakeSha1_EX(char *param_1,int param_2,char *param_3,int param_4,char *param_5);
void tnp::PPPP_MakeNonce(char *param_1,int param_2);
int tnp::getTickCount(void);
longlong tnp::getCurTime(void);
uint tnp::getCurSecond(long param_1,uint param_2);
void tnp::PPPP_DebugTrace(uint param_1,char *param_2,...);
char * tnp::PPPP_Log(char *param_1,char *param_2,...);
char * tnp::trim(char *param_1);
undefined4 tnp::PPPP_EncodeString(char *param_1,char *param_2,int param_3);
undefined4 tnp::PPPP_DecodeString(char *param_1,char *param_2,int param_3);
int tnp::PPPP_IsEmpty(char *param_1);
ssize_t tnp::over_time_receive_tcp(int param_1,char *param_2,int param_3,uint param_4);
int tnp::SendMessageByTCP(char *param_1,int param_2,int param_3);
void tnp::CloseSocket(int param_1);
int tnp::CreateSocket(char param_1);
int tnp::setup_listen_port(ushort param_1);
undefined4 tnp::TryBindPort(int param_1,ushort *param_2);
void tnp::ConnectAddress(int param_1,sockaddr_in *param_2);
void tnp::SendToAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4);
int tnp::SendMessage(char *param_1,int param_2,int param_3,sockaddr_in *param_4);
ssize_t tnp::RecvFromAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4);
undefined4 tnp::over_time_receive(int param_1,char *param_2,int param_3,sockaddr_in *param_4,uint param_5);
sockaddr_in * tnp::ToAddrV6(sockaddr_in *param_1,sockaddr_in6 *param_2);
sockaddr_in6 * tnp::ToAddrV4(sockaddr_in6 *param_1,sockaddr_in *param_2);
sockaddr_storage * tnp::GetAddrInfo(sockaddr_storage *param_1,char *param_2,ushort *param_3);
bool tnp::AddrCompare(sockaddr_in *param_1,sockaddr_in *param_2);
void tnp::UpdateNetwork(void);
uint tnp::LanIfNum(void);
undefined4 tnp::GetIP(int param_1,char *param_2);
void tnp::BroadcastMessage(char *param_1,int param_2,int param_3,ushort param_4);
void tnp::htonAddr(sockaddr_in *param_1,sockaddr_in *param_2);
void tnp::ntohAddr(sockaddr_in *param_1,sockaddr_in *param_2);
undefined4 tnp::PPPP_Proto_Recv_TCP(int param_1,char *param_2,ushort param_3,ushort *param_4,uint param_5);
undefined4 tnp::PPPP_Proto_Read_Header(st_PPPP_SessionHeader *param_1,uchar *param_2,ushort *param_3);
undefined4 tnp::PPPP_Proto_Recv_ALL(int param_1,sockaddr_in *param_2,uint param_3,uchar *param_4,ushort *param_5,char *param_6,ushort param_7,uchar *param_8);
undefined4 tnp::PPPP_Proto_Verify_Header(char *param_1,int param_2,st_PPPP_SessionHeaderV2 *param_3);
void tnp::PPPP_Proto_Write_Header(st_PPPP_SessionHeader *param_1,uchar param_2,ushort param_3);
void tnp::PPPP_Proto_Write_HeaderV2(st_PPPP_SessionHeaderV2 *param_1,uchar param_2,ushort param_3,char param_4,char *param_5,uint param_6,char *param_7);
int tnp::PPPP_Proto_Send_SignErrorAck(int param_1,char param_2,sockaddr_in *param_3,uchar param_4,char param_5,char param_6);
void tnp::PPPP_Proto_Write_P2PServerReq(st_PPPP_P2PServerReq *param_1,char *param_2,uint param_3,char *param_4,char param_5,char *param_6,char *param_7);
int tnp::PPPP_Proto_Send_P2PServerReq(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,char param_7,char *param_8);
undefined4 tnp::PPPP_Proto_Read_ServerConfig(st_PPPP_ServerConfig *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,uint *param_6,char *param_7);
void tnp::PPPP_Proto_Write_ServerConfigReq(st_PPPP_ServerConfigReq *param_1,char *param_2,uint param_3,char *param_4,uint param_5,char *param_6);
int tnp::PPPP_Proto_Send_ServerConfigReq(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,uint param_6,char *param_7);
int tnp::PPPP_Proto_Send_Hello(int param_1,sockaddr_in *param_2);
int tnp::PPPP_Proto_Send_HelloWithBody(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char param_6);
int tnp::PPPP_Proto_Send_HelloAck(int param_1,sockaddr_in *param_2,sockaddr_in *param_3);
void tnp::PPPP_Proto_Read_DevLgn(st_PPPP_DevLgn *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,uchar *param_6,sockaddr_in *param_7);
void tnp::PPPP_Proto_Write_DevLgn(st_PPPP_DevLgn *param_1,char *param_2,uint param_3,char *param_4,char param_5,sockaddr_in *param_6);
int tnp::PPPP_Proto_Send_DevLgn_EX(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,char param_7,sockaddr_in *param_8,char *param_9,char param_10);
int tnp::PPPP_Proto_Send_DevLgn_Proxy(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,char param_7,sockaddr_in *param_8,char *param_9,char param_10,char *param_11,uint param_12,char *param_13,char *param_14,uchar param_15);
void tnp::PPPP_Proto_Read_LanSearch(st_PPPP_LanSearch *param_1,char *param_2,uint *param_3,char *param_4,uchar *param_5);
void tnp::PPPP_Proto_Write_LanSearch(st_PPPP_LanSearch *param_1,char *param_2,uint param_3,char *param_4);
void tnp::PPPP_Proto_Send_LanSearch(int param_1,ushort param_2,char *param_3,uint param_4,char *param_5);
void tnp::PPPP_Proto_Read_P2PReq(st_PPPP_P2PReq *param_1,char *param_2,uint *param_3,char *param_4,sockaddr_in *param_5);
void tnp::PPPP_Proto_Write_P2PReq(st_PPPP_P2PReq *param_1,char *param_2,uint param_3,char *param_4,sockaddr_in *param_5);
void tnp::PPPP_Proto_Write_P2PReq_EX(st_PPPP_P2PReq_EX *param_1,char *param_2,uint param_3,char *param_4,sockaddr_in *param_5,char *param_6);
int tnp::PPPP_Proto_Send_P2PReq(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,sockaddr_in *param_6);
int tnp::PPPP_Proto_Send_P2PReq_EX(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,sockaddr_in *param_6,char *param_7);
int tnp::PPPP_Proto_Send_P2PReqAck(int param_1,sockaddr_in *param_2,char param_3);
void tnp::PPPP_Proto_Read_PunchTo(st_PPPP_PunchTo *param_1,sockaddr_in *param_2);
undefined4 tnp::PPPP_Proto_Read_PunchTo_EX(st_PPPP_PunchTo_EX *param_1,sockaddr_in *param_2,uchar *param_3,uchar *param_4,uint *param_5,char *param_6);
int tnp::PPPP_Proto_Send_PunchTo(int param_1,sockaddr_in *param_2,sockaddr_in *param_3);
void tnp::PPPP_Proto_Read_PunchPkt(st_PPPP_PunchPkt *param_1,char *param_2,uint *param_3,char *param_4);
undefined4 tnp::PPPP_Proto_Read_PunchPkt_EX(st_PPPP_PunchPkt_EX *param_1,char *param_2,uint *param_3,char *param_4,uchar *param_5,uint *param_6,char *param_7);
void tnp::PPPP_Proto_Write_PunchPkt(st_PPPP_PunchPkt *param_1,char *param_2,uint param_3,char *param_4);
void tnp::PPPP_Proto_Write_PunchPkt_EX(st_PPPP_PunchPkt_EX *param_1,char *param_2,uint param_3,char *param_4,uint param_5,char *param_6);
int tnp::PPPP_Proto_Send_PunchPkt(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
int tnp::PPPP_Proto_Send_PunchPkt_EX(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,uint param_6,char *param_7);
void tnp::PPPP_Proto_Read_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint *param_3,char *param_4);
undefined4 tnp::PPPP_Proto_Read_P2PRdy_EX(st_PPPP_P2PRdy_EX *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,char *param_6);
void tnp::PPPP_Proto_Write_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint param_3,char *param_4);
void tnp::PPPP_Proto_Write_P2PRdy_EX(st_PPPP_P2PRdy_EX *param_1,char *param_2,uint param_3,char *param_4,uint param_5,char *param_6);
int tnp::PPPP_Proto_Send_P2PRdy(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
int tnp::PPPP_Proto_Send_P2PRdy_EX(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,uint param_6,char *param_7);
int tnp::PPPP_Proto_Send_P2PRdy_Ack(int param_1,sockaddr_in *param_2);
void tnp::PPPP_Proto_Write_RlyServerReq(st_PPPP_RlyServerReq *param_1,char *param_2,uint param_3,char *param_4);
int tnp::PPPP_Proto_Send_RlyServerReq(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6);
int tnp::PPPP_Proto_Send_RlyHello(int param_1,sockaddr_in *param_2);
int tnp::PPPP_Proto_Send_RlyHelloAck(int param_1,sockaddr_in *param_2);
void tnp::PPPP_Proto_Read_RlyPort_EX(st_PPPP_RlyPort_EX *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,char *param_6);
void tnp::PPPP_Proto_Write_RlyPort_EX(st_PPPP_RlyPort_EX *param_1,char *param_2,uint param_3,char *param_4,char *param_5,char *param_6);
int tnp::PPPP_Proto_Send_RlyPort_EX(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char *param_6);
void tnp::PPPP_Proto_Read_RlyPortAck(st_PPPP_RlyPortAck *param_1,uint *param_2,ushort *param_3,char *param_4);
void tnp::PPPP_Proto_Write_RlyPortAck(st_PPPP_RlyPortAck *param_1,uint param_2,ushort param_3,char param_4);
int tnp::PPPP_Proto_Send_RlyPortAck(int param_1,sockaddr_in *param_2,uint param_3,ushort param_4,char param_5);
void tnp::PPPP_Proto_Read_RlyReq(st_PPPP_RlyReq *param_1,char *param_2,uint *param_3,char *param_4,sockaddr_in *param_5,uint *param_6);
void tnp::PPPP_Proto_Write_RlyReq(st_PPPP_RlyReq *param_1,char *param_2,uint param_3,char *param_4,sockaddr_in *param_5,uint param_6);
int tnp::PPPP_Proto_Send_RlyReq(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,sockaddr_in *param_6,uint param_7);
int tnp::PPPP_Proto_Send_RlyReqAck(int param_1,sockaddr_in *param_2,char param_3);
void tnp::PPPP_Proto_Read_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint *param_3);
undefined4 tnp::PPPP_Proto_Read_RlyTo_EX(st_PPPP_RlyTo_EX *param_1,sockaddr_in *param_2,uint *param_3,char *param_4);
void tnp::PPPP_Proto_Write_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint param_3);
int tnp::PPPP_Proto_Send_RlyTo(int param_1,sockaddr_in *param_2,sockaddr_in *param_3,uint param_4);
void tnp::PPPP_Proto_Write_RlyToAck(st_PPPP_RlyToAck *param_1,char *param_2,uint param_3,char *param_4,char param_5,uint param_6,char param_7);
int tnp::PPPP_Proto_Send_RlyToAck(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char param_6,uint param_7,char param_8);
void tnp::PPPP_Proto_Read_RlyPkt(st_PPPP_RlyPkt *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,uint *param_6);
void tnp::PPPP_Proto_Write_RlyPkt(st_PPPP_RlyPkt *param_1,char *param_2,uint param_3,char *param_4,char param_5,uint param_6);
int tnp::PPPP_Proto_Send_RlyPkt(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char param_6,uint param_7);
void tnp::PPPP_Proto_Read_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint *param_3,char *param_4);
undefined4 tnp::PPPP_Proto_Read_RlyRdy_EX(st_PPPP_RlyRdy_EX *param_1,char *param_2,uint *param_3,char *param_4,char *param_5);
void tnp::PPPP_Proto_Write_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint param_3,char *param_4);
int tnp::PPPP_Proto_Send_RlyRdy(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
void tnp::PPPP_Proto_Write_RlyTCPStart(st_PPPP_RlyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char *param_5);
int tnp::PPPP_Proto_Send_RlyTCPStart(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char *param_6);
void tnp::PPPP_Proto_Write_RlyTCPReq(st_PPPP_RlyTCPReq *param_1,char *param_2,uint param_3,char *param_4,sockaddr_in *param_5,char *param_6);
int tnp::PPPP_Proto_Send_RlyTCPReq(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,sockaddr_in *param_7,char *param_8);
void tnp::PPPP_Proto_Read_RlyTCPTo(st_PPPP_RlyTCPTo *param_1,sockaddr_in *param_2,char *param_3);
undefined4 tnp::PPPP_Proto_Read_RlyTCPTo_EX(st_PPPP_RlyTCPTo_EX *param_1,sockaddr_in *param_2,char *param_3,char *param_4);
void tnp::PPPP_Proto_Write_RlyTCPToAck(st_PPPP_RlyTCPToAck *param_1,char *param_2,uint param_3,char *param_4,char *param_5,char param_6,char param_7);
int tnp::PPPP_Proto_Send_RlyTCPToAck(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,char *param_7,char param_8,char param_9);
void tnp::PPPP_Proto_Write_RlyTCPPkt(st_PPPP_RlyTCPPkt *param_1,char *param_2,char param_3);
int tnp::PPPP_Proto_Send_RlyTCPPkt(int param_1,sockaddr_in *param_2,char *param_3,char param_4);
undefined4 tnp::PPPP_Proto_Read_R2PMPReq(st_PPPP_R2PMPReq *param_1,sockaddr_in *param_2,sockaddr_in *param_3,uint *param_4,char *param_5);
undefined4 tnp::PPPP_Proto_Read_R2PMPStart(st_PPPP_R2PMPStart *param_1,sockaddr_in *param_2,char *param_3,uint *param_4,char *param_5);
void tnp::PPPP_Proto_Write_R2PMPStart(st_PPPP_R2PMPStart *param_1,sockaddr_in *param_2,char param_3,char *param_4);
int tnp::PPPP_Proto_Send_R2PMPStart(int param_1,sockaddr_in *param_2,sockaddr_in *param_3,char param_4,char *param_5);
undefined4 tnp::PPPP_Proto_Read_R2PMPBody(st_PPPP_R2PMPBody *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,char *param_6);
void tnp::PPPP_Proto_Write_R2PMPBody(st_PPPP_R2PMPBody *param_1,char *param_2,uint param_3,char *param_4,uint param_5,char *param_6);
int tnp::PPPP_Proto_Send_R2PMPBody(int param_1,sockaddr_in *param_2,uchar param_3,char *param_4,uint param_5,char *param_6,uint param_7,char *param_8);
void tnp::PPPP_Proto_Read_R2PMPPkt(st_PPPP_R2PMPBody *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,char *param_6);
void tnp::PPPP_Proto_Read_R2PMPRdy(st_PPPP_R2PMPBody *param_1,char *param_2,uint *param_3,char *param_4,uint *param_5,char *param_6);
void tnp::PPPP_Proto_Send_R2PMPPkt(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,uint param_6,char *param_7);
void tnp::PPPP_Proto_Send_R2PMPRdy(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,uint param_6,char *param_7);
void tnp::PPPP_Proto_Write_EasyTCPStart(st_PPPP_EasyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char param_5);
int tnp::PPPP_Proto_Send_EasyTCPStart(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char param_6,char *param_7);
int tnp::PPPP_Proto_Send_Alive(int param_1,char param_2,sockaddr_in *param_3);
int tnp::PPPP_Proto_Send_AliveAck(int param_1,char param_2,sockaddr_in *param_3);
undefined4 tnp::PPPP_DRW_Read_Header(st_PPPP_DRWHeader *param_1,uchar *param_2,ushort *param_3);
void tnp::PPPP_DRW_Write_Header(st_PPPP_DRWHeader *param_1,uchar param_2,ushort param_3);
int tnp::PPPP_DRW_Send(int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort param_5,char *param_6,ushort param_7);
undefined4 tnp::PPPP_DRWAck_Read_Header(st_PPPP_DRWAckHeader *param_1,uchar *param_2,ushort *param_3);
void tnp::PPPP_DRWAck_Write_Header(st_PPPP_DRWAckHeader *param_1,uchar param_2,ushort param_3);
int tnp::PPPP_DRWAck_Send(int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort *param_5,ushort param_6);
int tnp::PPPP_Proto_Send_Close(int param_1,char param_2,sockaddr_in *param_3);
int tnp::PPPP_Proto_Send_Probe(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char param_5);
int tnp::PPPP_Proto_Send_ProbeAck2(int param_1,sockaddr_in *param_2,char *param_3,uint param_4);
int tnp::PPPP_Proto_Send_DevOnline(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
int tnp::PPPP_Proto_Send_WakeUp(int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,char *param_7);
void tnp::PPPP_Proto_Read_NoticePing(st_PPPP_NoticePing *param_1,char *param_2,uint *param_3,char *param_4);
int tnp::PPPP_Proto_Send_NoticePingAck(int param_1,char param_2,sockaddr_in *param_3,st_PPPP_NoticePing *param_4);
void tnp::PPPP_Proto_Read_NoticeTo_EX(st_PPPP_NoticeTo_EX *param_1,char *param_2,uint *param_3,char *param_4,ulonglong *param_5,ushort *param_6,char *param_7,uint *param_8);
int __thiscall tnp::PPPP_Proto_Send_NoticeToAck(tnp *this,int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,char *param_6,ulonglong param_7,ushort param_8,char *param_9,char *param_10,uchar param_11,char param_12);
int tnp::PPPP_Proto_Send_QueryDID(int param_1,sockaddr_in *param_2,char *param_3);
int tnp::PPPP_Proto_Send_QueryDIDAck(int param_1,sockaddr_in *param_2,char *param_3);
int tnp::PPPP_Proto_Send_HelloTo(int param_1,sockaddr_in *param_2,sockaddr_in *param_3,sockaddr_in *param_4);
int tnp::PPPP_Proto_Send_HelloToAck(int param_1,sockaddr_in *param_2);
void tnp::PPPP_Proto_Read_LanNotify(st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4);
void tnp::PPPP_Proto_Send_LanNotify(int param_1,ushort param_2,char *param_3,uint param_4,char *param_5);
void tnp::PPPP_Proto_Read_LanNotifyAck(st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4);
int tnp::PPPP_Proto_Send_LanNotifyAck(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
int tnp::PPPP_Proto_Send_RlyHelloSDev(int param_1,sockaddr_in *param_2);
int tnp::PPPP_Proto_Send_RlyHelloSDevAck(int param_1,sockaddr_in *param_2);
int tnp::PPPP_Proto_Send_SDevRun(int param_1,sockaddr_in *param_2);
void tnp::PPPP_Proto_Read_SDevLgn(st_PPPP_SDevLgn *param_1,char *param_2,uint *param_3,char *param_4);
void tnp::PPPP_Proto_Write_SDevLgn(st_PPPP_SDevLgn *param_1,char *param_2,uint param_3,char *param_4);
int tnp::PPPP_Proto_Send_SDevLgn(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);
int tnp::PPPP_Proto_Send_SDevLgnAck(int param_1,sockaddr_in *param_2,sockaddr_in *param_3);
int tnp::PPPP_Proto_Send_BitrateInfo(int param_1,char param_2,sockaddr_in *param_3,uint param_4,uint param_5);
void tnp::PPPP_Proto_Write_ConnectReport(st_PPPP_ConnectReport *param_1,char *param_2,char param_3,char *param_4,int param_5);
int tnp::PPPP_Proto_Send_ConnectReport(int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,char *param_6,int param_7);
void tnp::PPPP_Proto_Write_Report(st_PPPP_Report *param_1,char *param_2,char param_3,char param_4,char param_5,short param_6,char *param_7);
int tnp::PPPP_Proto_Send_Report(int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,char param_6,char param_7,short param_8,char *param_9);
void tnp::PPPP_Proto_Write_SDevReport(st_PPPP_SDevReport *param_1,char *param_2,uint param_3,char *param_4,char *param_5,uint param_6,char *param_7,char param_8,char *param_9);
int tnp::PPPP_Proto_Send_SDevReport(int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,char *param_6,uint param_7,char *param_8,char param_9,char *param_10);
void tnp::PPPP_Proto_Write_SDevSessionReport(st_PPPP_SDevSessionReport *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char *param_6,uint param_7,char *param_8,char param_9,uint param_10,uint param_11,uint param_12,uint param_13,uint param_14);
undefined4 tnp::PPPP_Proto_Generate_SDevSessionReport(char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char *param_6,uint param_7,char *param_8,char param_9,uint param_10,uint param_11,uint param_12,uint param_13,uint param_14);
undefined4 tnp::PPPP_Proto_Generate_SendDataReport(char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char param_6,char param_7);
uint FUN_00046810(uint param_1);
void FUN_0004682c(int param_1);
void FUN_00046854(uint *param_1,void *param_2,void *param_3);
void FUN_00046d64(uint *param_1,void *param_2,void *param_3);
void FUN_00047294(uint param_1,uint param_2);
undefined4 AesSetIV(int param_1,void *param_2);
undefined4 AesSetKey(uint *param_1,void *param_2,uint param_3,undefined4 param_4,int param_5);
undefined4 AesSetKeyDirect(uint *param_1,void *param_2,uint param_3,undefined4 param_4,int param_5);
void AesEncryptDirect(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void AesDecryptDirect(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 AesCbcEncrypt(int param_1,int param_2,int param_3,uint param_4);
undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4);
void AesCbcDecryptWithKey(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void AesCtrEncrypt(int param_1,byte *param_2,byte *param_3,uint param_4);
ulonglong FUN_00047b90(uint param_1,uint param_2);
void FUN_00047c38(undefined4 param_1,int param_2);
ulonglong FUN_00047c58(uint param_1,uint param_2);
uint FUN_00047c60(uint param_1,uint param_2);
void FUN_00047d34(undefined4 param_1,int param_2);
ulonglong FUN_0004800c(uint param_1);
ulonglong FUN_00048030(uint param_1);
ulonglong FUN_0004810c(undefined4 param_1,uint param_2,uint param_3,uint param_4);
ulonglong FUN_000482ec(int param_1,uint param_2,int param_3,uint param_4);
ulonglong FUN_00048378(undefined4 param_1,uint param_2,uint param_3,uint param_4);
ulonglong FUN_0004850c(int param_1,uint param_2,int param_3,uint param_4);
uint FUN_0004858c(uint param_1,uint param_2,uint param_3,uint param_4);
void FUN_00048614(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00048630(undefined4 param_1);
undefined1 FUN_00048644(void);
bool FUN_00048658(void);
bool FUN_0004866c(void);
bool FUN_00048680(void);
bool FUN_00048694(void);
uint FUN_000486a8(uint param_1,uint param_2);
void FUN_000486fc(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
void FUN_00048748(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5);
void FUN_00048784(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5);
undefined8 FUN_000487c0(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 FUN_00048c58(uint param_1,uint param_2,uint param_3,uint param_4);
void _fini(void);
undefined yi_p2p_on_stop_replay();
int vsprintf(char * __s, char * __format, __gnuc_va_list __arg);
undefined yi_p2p_on_has_record();
undefined yi_p2p_on_get_dev_info();
int memcmp(void * __s1, void * __s2, size_t __n);
int ioctl(int __fd, ulong __request, ...);
int connect(int __fd, sockaddr * __addr, socklen_t __len);
pthread_t pthread_self(void);
undefined yi_p2p_on_get_ap_conf();
int sscanf(char * __s, char * __format, ...);
int gettimeofday(timeval * __tv, __timezone_ptr_t __tz);
void srand(uint __seed);
undefined yi_p2p_on_set_voice_ctrl();
undefined trans_json_ex_s();
int snprintf(char * __s, size_t __maxlen, char * __format, ...);
undefined yi_p2p_on_get_ptz_reset_time();
undefined __deregister_frame_info();
undefined check_log_to_server_status();
undefined yi_p2p_on_stop_viewing();
int strcmp(char * __s1, char * __s2);
time_t time(time_t * __timer);
void * memset(void * __s, int __c, size_t __n);
ssize_t recvfrom(int __fd, void * __buf, size_t __n, int __flags, sockaddr * __addr, socklen_t * __addr_len);
undefined yi_p2p_on_ptz_preset_add();
undefined yi_p2p_on_alert_events();
undefined yi_p2p_on_is_power_on();
undefined yi_p2p_on_get_record_events();
void * malloc(size_t __size);
undefined yi_p2p_on_set_abnormal_sound_sensitivity();
void * memmove(void * __dest, void * __src, size_t __n);
hostent * gethostbyname(char * __name);
undefined _Jv_RegisterClasses();
undefined yi_p2p_on_set_viewpoint_trace();
int pthread_join(pthread_t __th, void * * __thread_return);
int rand(void);
undefined yi_p2p_on_ptz_set_cruise_stay_time();
int strncmp(char * __s1, char * __s2, size_t __n);
void pthread_exit(void * __retval);
int system(char * __command);
ssize_t recv(int __fd, void * __buf, size_t __n, int __flags);
undefined yi_p2p_on_new_session();
undefined yi_p2p_on_ptz_set_cruise_period();
char * strcpy(char * __dest, char * __src);
int clock_gettime(clockid_t __clock_id, timespec * __tp);
undefined yi_p2p_on_sync_dev_ability();
undefined yi_p2p_on_speaker_stop();
undefined yi_p2p_on_sync_info_from_server();
int pthread_create(pthread_t * __newthread, pthread_attr_t * __attr, __start_routine * __start_routine, void * __arg);
size_t strnlen(char * __string, size_t __maxlen);
int fclose(FILE * __stream);
uint sleep(uint __seconds);
undefined yi_p2p_on_set_replay_time();
undefined yi_p2p_on_reset_device();
undefined yi_p2p_on_ptz_preset_call();
undefined yi_p2p_on_set_motion_record();
undefined yi_p2p_on_set_record_plan_time();
char * strstr(char * __haystack, char * __needle);
int vfprintf(FILE * __s, char * __format, __gnuc_va_list __arg);
undefined yi_p2p_on_set_abnormal_sound();
int getsockname(int __fd, sockaddr * __addr, socklen_t * __len);
undefined yi_p2p_on_set_lapse_video();
char * strchr(char * __s, int __c);
undefined yi_p2p_on_get_record_events_month();
undefined yi_p2p_on_get_white_led_status();
int pthread_mutex_destroy(pthread_mutex_t * __mutex);
undefined __aeabi_unwind_cpp_pr0();
int bind(int __fd, sockaddr * __addr, socklen_t __len);
undefined yi_p2p_on_get_factory_test_info();
tm * localtime_r(time_t * __timer, tm * __tp);
FILE * popen(char * __command, char * __modes);
int printf(char * __format, ...);
undefined yi_p2p_on_ptz_preset_del();
undefined yi_p2p_on_process_ability_sets();
undefined yi_p2p_on_ptz_jump_to_point();
undefined yi_p2p_on_ptz_set_cruise();
undefined yi_p2p_on_get_record_events_day();
undefined yi_p2p_on_set_baby_cry();
char * strncpy(char * __dest, char * __src, size_t __n);
undefined yi_p2p_on_restart_ap();
undefined yi_p2p_on_set_light();
undefined yi_p2p_on_set_mirror_flip();
undefined __cxa_finalize();
undefined __register_frame_info();
undefined yi_p2p_on_set_day_night_mode();
int raise(int __sig);
undefined yi_p2p_on_set_wifi_info();
int fprintf(FILE * __stream, char * __format, ...);
ssize_t send(int __fd, void * __buf, size_t __n, int __flags);
undefined yi_p2p_on_set_ap_conf();
undefined yi_p2p_on_auth();
undefined __aeabi_unwind_cpp_pr1();
undefined yi_p2p_on_ptz_direction_ctrl_stop();
int ferror(FILE * __stream);
int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr);
undefined yi_p2p_on_set_audio_mode();
size_t fread(void * __ptr, size_t __size, size_t __n, FILE * __stream);
int socket(int __domain, int __type, int __protocol);
int close(int __fd);
undefined yi_remote_manual_reboot();
void * calloc(size_t __nmemb, size_t __size);
undefined yi_p2p_on_start_viewing();
undefined yi_p2p_on_set_alarm_sensitivity();
int getsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t * __optlen);
undefined yi_p2p_on_panorama_capture_start();
undefined yi_report_debug_strings();
undefined yi_p2p_on_set_encode_mode();
int inet_aton(char * __cp, in_addr * __inp);
undefined yi_p2p_on_ptz_home();
undefined yi_p2p_on_set_alarm_sound();
int fputc(int __c, FILE * __stream);
undefined yi_p2p_on_panorama_capture_abort();
undefined yi_p2p_on_get_white_led_time();
undefined yi_p2p_on_get_device_param_conf();
undefined yi_p2p_on_ptz_direction_ctrl();
undefined yi_p2p_on_sync_time();
undefined yi_p2p_on_get_video_backup_state();
int * __errno_location(void);
int setsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t __optlen);
undefined yi_p2p_on_update();
int pthread_mutex_unlock(pthread_mutex_t * __mutex);
int fcntl(int __fd, int __cmd, ...);
int fputs(char * __s, FILE * __stream);
undefined yi_p2p_on_set_video_backup();
int pthread_mutex_lock(pthread_mutex_t * __mutex);
undefined yi_p2p_on_set_device_param_conf();
undefined yi_p2p_on_set_mic_volume();
tm * localtime(time_t * __timer);
undefined yi_p2p_on_get_panorama_capture_schedule();
int feof(FILE * __stream);
undefined yi_p2p_on_get_record_plan_time();
undefined yi_p2p_on_set_white_led_time();
undefined yi_p2p_on_set_high_resolution();
ssize_t sendto(int __fd, void * __buf, size_t __n, int __flags, sockaddr * __addr, socklen_t __addr_len);
undefined yi_p2p_on_ptz_set_motion_track();
undefined yi_p2p_on_set_sd_record_stop();
void free(void * __ptr);
undefined yi_p2p_on_get_motion_detect_cfg();
int pclose(FILE * __stream);
int atoi(char * __nptr);
undefined yi_p2p_on_set_power();
time_t mktime(tm * __tp);
char * inet_ntoa(in_addr __in);
undefined yi_p2p_on_get_realtime_state();
undefined error_at_line();
undefined yi_p2p_on_speaker_start();
char * strerror(int __errnum);
FILE * fopen(char * __filename, char * __modes);
int pthread_detach(pthread_t __th);
int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, timeval * __timeout);
undefined yi_p2p_on_set_ldc();
undefined yi_p2p_on_get_version();
long atol(char * __nptr);
tm * gmtime_r(time_t * __timer, tm * __tp);
int sprintf(char * __s, char * __format, ...);
undefined yi_p2p_on_set_light_switch_mode();
void * memcpy(void * __dest, void * __src, size_t __n);
int pthread_mutex_trylock(pthread_mutex_t * __mutex);
undefined yi_p2p_on_set_alarm_ring();
size_t strlen(char * __s);
undefined yi_p2p_on_set_ptz_reset_time();
undefined yi_p2p_on_set_human_motion();
int usleep(__useconds_t __useconds);
undefined yi_p2p_on_format_sd();
undefined yi_p2p_on_set_motion_detect();
undefined yi_p2p_on_alert_days();

