/* Generated from posixwin.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: posixwin.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file posixwin.c
   unit: posix
*/

#include "chicken.h"

#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

#if (defined(HAVE_WINSOCK2_H) && defined(HAVE_WS2TCPIP_H))
# include <winsock2.h>
# include <ws2tcpip.h>
#else
# include <winsock.h>
#endif

#include <signal.h>
#include <errno.h>
#include <io.h>
#include <stdio.h>
#include <process.h>
#include <fcntl.h>
#include <direct.h>
#include <utime.h>
#include <time.h>

#define ARG_MAX		256
#define PIPE_BUF	512
#ifndef ENV_MAX
# define ENV_MAX	1024
#endif

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS char *C_exec_env[ ENV_MAX ];
static C_TLS struct group *C_group;
static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct tm C_tm;

/* pipe handles */
static C_TLS HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static C_TLS HANDLE C_save0, C_save1; /* saved I/O handles */
static C_TLS char C_rdbuf; /* one-char buffer for read */
static C_TLS int C_exstatus;

/* platform information; initialized for cached testing */
static C_TLS char C_hostname[256] = "";
static C_TLS char C_osver[16] = "";
static C_TLS char C_osrel[16] = "";
static C_TLS char C_processor[16] = "";
static C_TLS char C_shlcmd[256] = "";

/* Windows NT or better */
static int C_isNT = 0;

/* Current user name */
static C_TLS TCHAR C_username[255 + 1] = "";

/* Directory Operations */

#define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#define C_chdir(str)	    C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)	    C_fix(rmdir(C_c_string(str)))

#ifndef __WATCOMC__
/* DIRENT stuff */
struct dirent
{
    char *		d_name;
};

typedef struct
{
    struct _finddata_t	fdata;
    int			handle;
    struct dirent	current;
} DIR;

static DIR * C_fcall
opendir(const char *name)
{
    int name_len = strlen(name);
    DIR *dir = (DIR *)malloc(sizeof(DIR));
    char *what;
    if (!dir)
    {
	errno = ENOMEM;
	return NULL;
    }
    what = (char *)malloc(name_len + 3);
    if (!what)
    {
	free(dir);
	errno = ENOMEM;
	return NULL;
    }
    strcpy(what, name);
    if (strchr("\\/", name[name_len - 1]))
	strcat(what, "*");
    else
	strcat(what, "\\*");

    dir->handle = _findfirst(what, &dir->fdata);
    if (dir->handle == -1)
    {
	free(what);
	free(dir);
	return NULL;
    }
    dir->current.d_name = NULL; /* as the first-time indicator */
    free(what);
    return dir;
}

static int C_fcall
closedir(DIR * dir)
{
    if (dir)
    {
	int res = _findclose(dir->handle);
	free(dir);
	return res;
    }
    return -1;
}

static struct dirent * C_fcall
readdir(DIR * dir)
{
    if (dir)
    {
	if (!dir->current.d_name /* first time after opendir */
	     || _findnext(dir->handle, &dir->fdata) != -1)
	{
	    dir->current.d_name = dir->fdata.name;
	    return &dir->current;
	}
    }
    return NULL;
}
#endif /* ifndef __WATCOMC__ */

#ifdef __WATCOMC__
# define mktemp _mktemp
/* there is no P_DETACH in Watcom CRTL */
# define P_DETACH P_NOWAIT
#endif

#define C_opendir(x,h)		C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)		(closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)		C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b)	(strcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, _popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)			     C_fix(_pclose(C_port_file(p)))

#define C_chmod(fn, m)	    C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)	    C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_pipe(d, m)	    C_fix(_pipe(C_pipefds, PIPE_BUF, C_unfix(m)))
#define C_close(fd)	    C_fix(close(C_unfix(fd)))

#define C_getenventry(i)   environ[ i ]

#define C_putenv(s)	    C_fix(putenv((char *)C_data_pointer(s)))
#define C_lstat(fn)	    C_stat(fn)

static C_word C_fcall
C_setenv(C_word x, C_word y)
{
    char *sx = C_data_pointer(x),
	 *sy = C_data_pointer(y);
    int n1 = C_strlen(sx),
	n2 = C_strlen(sy);
    char *buf = (char *)C_malloc(n1 + n2 + 2);
    if (buf == NULL)
	return(C_fix(0));
    else
    {
	C_strcpy(buf, sx);
	buf[ n1 ] = '=';
	C_strcpy(buf + n1 + 1, sy);
	return(C_fix(putenv(buf)));
    }
}

static void C_fcall
C_set_arg_string(char **where, int i, char *dat, int len)
{
    char *ptr;
    if (dat)
    {
	ptr = (char *)C_malloc(len + 1);
	C_memcpy(ptr, dat, len);
	ptr[ len ] = '\0';
        /* Can't barf() here, so the NUL byte check happens in Scheme */
    }
    else
	ptr = NULL;
    where[ i ] = ptr;
}

static void C_fcall
C_free_arg_string(char **where) {
  while (*where) C_free(*(where++));
}

#define C_set_exec_arg(i, a, len)	C_set_arg_string(C_exec_args, i, a, len)
#define C_set_exec_env(i, a, len)	C_set_arg_string(C_exec_env, i, a, len)

#define C_free_exec_args()		(C_free_arg_string(C_exec_args), C_SCHEME_TRUE)
#define C_free_exec_env()		(C_free_arg_string(C_exec_env), C_SCHEME_TRUE)

#define C_execvp(f)	    C_fix(execvp(C_data_pointer(f), (const char *const *)C_exec_args))
#define C_execve(f)	    C_fix(execve(C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

/* MS replacement for the fork-exec pair */
#define C_spawnvp(m, f)	    C_fix(spawnvp(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args))
#define C_spawnvpe(m, f)    C_fix(spawnvpe(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)	    C_fix(mktemp(C_c_string(t)))

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(p)          C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int(n), C_unfix(w)))
#define C_lseek(fd, o, w)   C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#define C_flushall()	    C_fix(_flushall())

#define C_umask(m)          C_fix(_umask(C_unfix(m)))

#define C_ctime(n)	    (C_secs = (n), ctime(&C_secs))

#define C_tm_set_08(v) \
        (memset(&C_tm, 0, sizeof(struct tm)), \
        C_tm.tm_sec = C_unfix(C_block_item(v, 0)), \
        C_tm.tm_min = C_unfix(C_block_item(v, 1)), \
        C_tm.tm_hour = C_unfix(C_block_item(v, 2)), \
        C_tm.tm_mday = C_unfix(C_block_item(v, 3)), \
        C_tm.tm_mon = C_unfix(C_block_item(v, 4)), \
        C_tm.tm_year = C_unfix(C_block_item(v, 5)), \
        C_tm.tm_wday = C_unfix(C_block_item(v, 6)), \
        C_tm.tm_yday = C_unfix(C_block_item(v, 7)), \
        C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE))

#define C_tm_set(v) (C_tm_set_08(v), &C_tm)

#define C_asctime(v)    (asctime(C_tm_set(v)))
#define C_a_mktime(ptr, c, v)  C_flonum(ptr, mktime(C_tm_set(v)))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

/*
  mapping from Win32 error codes to errno
*/

typedef struct
{
    DWORD   win32;
    int	    libc;
} errmap_t;

static errmap_t errmap[] =
{
    {ERROR_INVALID_FUNCTION,	  EINVAL},
    {ERROR_FILE_NOT_FOUND,	  ENOENT},
    {ERROR_PATH_NOT_FOUND,	  ENOENT},
    {ERROR_TOO_MANY_OPEN_FILES,	  EMFILE},
    {ERROR_ACCESS_DENIED,	  EACCES},
    {ERROR_INVALID_HANDLE,	  EBADF},
    {ERROR_ARENA_TRASHED,	  ENOMEM},
    {ERROR_NOT_ENOUGH_MEMORY,	  ENOMEM},
    {ERROR_INVALID_BLOCK,	  ENOMEM},
    {ERROR_BAD_ENVIRONMENT,	  E2BIG},
    {ERROR_BAD_FORMAT,		  ENOEXEC},
    {ERROR_INVALID_ACCESS,	  EINVAL},
    {ERROR_INVALID_DATA,	  EINVAL},
    {ERROR_INVALID_DRIVE,	  ENOENT},
    {ERROR_CURRENT_DIRECTORY,	  EACCES},
    {ERROR_NOT_SAME_DEVICE,	  EXDEV},
    {ERROR_NO_MORE_FILES,	  ENOENT},
    {ERROR_LOCK_VIOLATION,	  EACCES},
    {ERROR_BAD_NETPATH,		  ENOENT},
    {ERROR_NETWORK_ACCESS_DENIED, EACCES},
    {ERROR_BAD_NET_NAME,	  ENOENT},
    {ERROR_FILE_EXISTS,		  EEXIST},
    {ERROR_CANNOT_MAKE,		  EACCES},
    {ERROR_FAIL_I24,		  EACCES},
    {ERROR_INVALID_PARAMETER,	  EINVAL},
    {ERROR_NO_PROC_SLOTS,	  EAGAIN},
    {ERROR_DRIVE_LOCKED,	  EACCES},
    {ERROR_BROKEN_PIPE,		  EPIPE},
    {ERROR_DISK_FULL,		  ENOSPC},
    {ERROR_INVALID_TARGET_HANDLE, EBADF},
    {ERROR_INVALID_HANDLE,	  EINVAL},
    {ERROR_WAIT_NO_CHILDREN,	  ECHILD},
    {ERROR_CHILD_NOT_COMPLETE,	  ECHILD},
    {ERROR_DIRECT_ACCESS_HANDLE,  EBADF},
    {ERROR_NEGATIVE_SEEK,	  EINVAL},
    {ERROR_SEEK_ON_DEVICE,	  EACCES},
    {ERROR_DIR_NOT_EMPTY,	  ENOTEMPTY},
    {ERROR_NOT_LOCKED,		  EACCES},
    {ERROR_BAD_PATHNAME,	  ENOENT},
    {ERROR_MAX_THRDS_REACHED,	  EAGAIN},
    {ERROR_LOCK_FAILED,		  EACCES},
    {ERROR_ALREADY_EXISTS,	  EEXIST},
    {ERROR_FILENAME_EXCED_RANGE,  ENOENT},
    {ERROR_NESTING_NOT_ALLOWED,	  EAGAIN},
    {ERROR_NOT_ENOUGH_QUOTA,	  ENOMEM},
    {0, 0}
};

static void C_fcall
set_errno(DWORD w32err)
{
    errmap_t *map = errmap;
    for (; errmap->win32; ++map)
    {
	if (errmap->win32 == w32err)
	{
	    errno = errmap->libc;
	    return;
	}
    }
}

static int C_fcall
set_last_errno()
{
    set_errno(GetLastError());
    return 0;
}

/* Functions for creating process with redirected I/O */

static int C_fcall
zero_handles()
{
    C_rd0 = C_wr0 = C_wr0_ = INVALID_HANDLE_VALUE;
    C_rd1 = C_wr1 = C_rd1_ = INVALID_HANDLE_VALUE;
    C_save0 = C_save1 = INVALID_HANDLE_VALUE;
    return 1;
}

static int C_fcall
close_handles()
{
    if (C_rd0 != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd0);
    if (C_rd1 != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd1);
    if (C_wr0 != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr0);
    if (C_wr1 != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr1);
    if (C_rd1_ != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd1_);
    if (C_wr0_ != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr0_);
    if (C_save0 != INVALID_HANDLE_VALUE)
    {
	SetStdHandle(STD_INPUT_HANDLE, C_save0);
	CloseHandle(C_save0);
    }
    if (C_save1 != INVALID_HANDLE_VALUE)
    {
	SetStdHandle(STD_OUTPUT_HANDLE, C_save1);
	CloseHandle(C_save1);
    }
    return zero_handles();
}

static int C_fcall
redir_io()
{
    SECURITY_ATTRIBUTES sa;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = NULL;

    zero_handles();

    C_save0 = GetStdHandle(STD_INPUT_HANDLE);
    C_save1 = GetStdHandle(STD_OUTPUT_HANDLE);
    if (!CreatePipe(&C_rd0, &C_wr0, &sa, 0)
	    || !SetStdHandle(STD_INPUT_HANDLE, C_rd0)
	    || !DuplicateHandle(GetCurrentProcess(), C_wr0, GetCurrentProcess(),
		&C_wr0_, 0, FALSE, DUPLICATE_SAME_ACCESS)
	    || !CreatePipe(&C_rd1, &C_wr1, &sa, 0)
	    || !SetStdHandle(STD_OUTPUT_HANDLE, C_wr1)
	    || !DuplicateHandle(GetCurrentProcess(), C_rd1, GetCurrentProcess(),
		&C_rd1_, 0, FALSE, DUPLICATE_SAME_ACCESS))
    {
	set_last_errno();
	close_handles();
	return 0;
    }

    CloseHandle(C_wr0);
    C_wr0 = INVALID_HANDLE_VALUE;
    CloseHandle(C_rd1);
    C_rd1 = INVALID_HANDLE_VALUE;
    return 1;
}

static int C_fcall
run_process(char *cmdline)
{
    PROCESS_INFORMATION pi;
    STARTUPINFO si;

    ZeroMemory(&pi, sizeof(PROCESS_INFORMATION));
    ZeroMemory(&si, sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);

    C_wr0_ = C_rd1_ = INVALID_HANDLE_VALUE; /* these handles are saved */

    if (CreateProcess(NULL, cmdline, NULL, NULL, TRUE, 0, NULL,
		      NULL, &si, &pi))
    {
	CloseHandle(pi.hThread);

	SetStdHandle(STD_INPUT_HANDLE, C_save0);
	SetStdHandle(STD_OUTPUT_HANDLE, C_save1);
	C_save0 = C_save1 = INVALID_HANDLE_VALUE;

	CloseHandle(C_rd0);
	CloseHandle(C_wr1);
	C_rd0 = C_wr1 = INVALID_HANDLE_VALUE;
	return (int)pi.hProcess;
    }
    else
	return set_last_errno();
}

static int C_fcall
pipe_write(int hpipe, void* buf, int count)
{
    DWORD done = 0;
    if (WriteFile((HANDLE)hpipe, buf, count, &done, NULL))
	return 1;
    else
	return set_last_errno();
}

static int C_fcall
pipe_read(int hpipe)
{
    DWORD done = 0;
    /* TODO:
    if (!pipe_ready(hpipe))
	go_to_sleep;
    */
    if (ReadFile((HANDLE)hpipe, &C_rdbuf, 1, &done, NULL))
    {
	if (done > 0) /* not EOF yet */
	    return 1;
	else
	    return -1;
    }
    return set_last_errno();
}

static int C_fcall
pipe_ready(int hpipe)
{
    DWORD avail = 0;
    if (PeekNamedPipe((HANDLE)hpipe, NULL, 0, NULL, &avail, NULL) && avail)
	return 1;
    else
    {
	Sleep(0); /* give pipe a chance */
	if (PeekNamedPipe((HANDLE)hpipe, NULL, 0, NULL, &avail, NULL))
	    return (avail > 0);
	else
	    return 0;
    }
}

#define C_zero_handles() C_fix(zero_handles())
#define C_close_handles() C_fix(close_handles())
#define C_redir_io() (redir_io() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_run_process(cmdline) C_fix(run_process(C_c_string(cmdline)))
#define C_pipe_write(h, b, n) (pipe_write(C_unfix(h), C_c_string(b), C_unfix(n)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_pipe_read(h) C_fix(pipe_read(C_unfix(h)))
#define C_pipe_ready(h) (pipe_ready(C_unfix(h)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define close_handle(h) CloseHandle((HANDLE)h)

static int C_fcall
process_wait(int h, int t)
{
    if (WaitForSingleObject((HANDLE)h, (t ? 0 : INFINITE)) == WAIT_OBJECT_0)
    {
	DWORD ret;
	if (GetExitCodeProcess((HANDLE)h, &ret))
	{
	    CloseHandle((HANDLE)h);
	    C_exstatus = ret;
	    return 1;
	}
    }
    return set_last_errno();
}

#define C_process_wait(p, t) (process_wait(C_unfix(p), C_truep(t)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sleep(t) (Sleep(C_unfix(t) * 1000), C_SCHEME_UNDEFINED)

static int C_fcall
get_hostname()
{
    /* Do we already have hostname? */
    if (strlen(C_hostname))
    {
	return 1;
    }
    else
    {
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(1, 1), &wsa) == 0)
	{
	    int nok = gethostname(C_hostname, sizeof(C_hostname));
	    WSACleanup();
	    return !nok;
	}
	return 0;
    }
}

static int C_fcall
sysinfo()
{
    /* Do we need to build the sysinfo? */
    if (!strlen(C_osrel))
    {
	OSVERSIONINFO ovf;
	ZeroMemory(&ovf, sizeof(ovf));
	ovf.dwOSVersionInfoSize = sizeof(ovf);
	if (get_hostname() && GetVersionEx(&ovf))
	{
	    SYSTEM_INFO si;
	    _snprintf(C_osver, sizeof(C_osver) - 1, "%d.%d.%d",
			ovf.dwMajorVersion, ovf.dwMinorVersion, ovf.dwBuildNumber);
	    strncpy(C_osrel, "Win", sizeof(C_osrel) - 1);
	    switch (ovf.dwPlatformId)
	    {
	    case VER_PLATFORM_WIN32s:
		strncpy(C_osrel, "Win32s", sizeof(C_osrel) - 1);
		break;
	    case VER_PLATFORM_WIN32_WINDOWS:
		if (ovf.dwMajorVersion == 4)
		{
		    if (ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win95", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 10)
			strncpy(C_osrel, "Win98", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 90)
			strncpy(C_osrel, "WinMe", sizeof(C_osrel) - 1);
		}
		break;
	    case VER_PLATFORM_WIN32_NT:
		C_isNT = 1;
		if (ovf.dwMajorVersion == 6)
		    strncpy(C_osrel, "WinVista", sizeof(C_osrel) - 1);
		else if (ovf.dwMajorVersion == 5)
		{
		    if (ovf.dwMinorVersion == 2)
			strncpy(C_osrel, "WinServer2003", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 1)
			strncpy(C_osrel, "WinXP", sizeof(C_osrel) - 1);
		    else if ( ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win2000", sizeof(C_osrel) - 1);
		}
		else if (ovf.dwMajorVersion <= 4)
		   strncpy(C_osrel, "WinNT", sizeof(C_osrel) - 1);
		break;
	    }
	    GetSystemInfo(&si);
	    strncpy(C_processor, "Unknown", sizeof(C_processor) - 1);
	    switch (si.wProcessorArchitecture)
	    {
	    case PROCESSOR_ARCHITECTURE_INTEL:
		strncpy(C_processor, "x86", sizeof(C_processor) - 1);
		break;
#	    ifdef PROCESSOR_ARCHITECTURE_IA64
	    case PROCESSOR_ARCHITECTURE_IA64:
		strncpy(C_processor, "IA64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_AMD64
	    case PROCESSOR_ARCHITECTURE_AMD64:
		strncpy(C_processor, "x64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_IA32_ON_WIN64
	    case PROCESSOR_ARCHITECTURE_IA32_ON_WIN64:
		strncpy(C_processor, "WOW64", sizeof(C_processor) - 1);
		break;
#	    endif
	    }
	}
	else
	    return set_last_errno();
    }
    return 1;
}

static int C_fcall
get_shlcmd()
{
    /* Do we need to build the shell command pathname? */
    if (!strlen(C_shlcmd))
    {
	if (sysinfo())
	{
	    char *cmdnam = C_isNT ? "\\cmd.exe" : "\\command.com";
	    UINT len = GetSystemDirectory(C_shlcmd, sizeof(C_shlcmd) - strlen(cmdnam));
	    if (len)
		strcpy(C_shlcmd + len, cmdnam);
	    else
		return set_last_errno();
	}
	else
	    return 0;
    }
    return 1;
}

#define C_get_hostname() (get_hostname() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sysinfo() (sysinfo() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_get_shlcmd() (get_shlcmd() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* GetUserName */

static int C_fcall
get_user_name()
{
    if (!strlen(C_username))
    {
	DWORD bufCharCount = sizeof(C_username) / sizeof(C_username[0]);
	if (!GetUserName(C_username, &bufCharCount))
	    return set_last_errno();
    }
    return 1;
}

#define C_get_user_name() (get_user_name() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* User Information */

#if 0
static int C_fcall
get_netinfo()
{
    HINSTANCE hNet = 0,
	      hLoc = 0;

    if (isNT)
	hNet = LoadLibrary("netapi32.dll");
    else
    {
	hLoc = LoadLibrary("rlocal32.dll");
	hNet = LoadLibrary("radmin32.dll");
	//hNet = LoadLibrary("netapi.dll");
    }

    if (!hNet)
	return 0;

    
}
#endif

/*
    Spawn a process directly.
    Params:
    app		Command to execute.
    cmdlin	Command line (arguments).
    env		Environment for the new process (may be NULL).
    handle, stdin, stdout, stderr
		Spawned process info are returned in integers.
		When spawned process shares standard io stream with the parent
		process the respective value in handle, stdin, stdout, stderr
		is -1.
    params	A bitmask controling operation.
		Bit 1: Child & parent share standard input if this bit is set.
		Bit 2: Share standard output if bit is set.
		Bit 3: Share standard error if bit is set.

    Returns: zero return value indicates failure.
*/
static int C_fcall
C_process(const char * app, const char * cmdlin, const char ** env,
	  int * phandle,
	  int * pstdin_fd, int * pstdout_fd, int * pstderr_fd,
	  int params)
{
    int i;
    int success = TRUE;
    const int f_share_io[3] = { params & 1, params & 2, params & 4};
    int io_fds[3] = { -1, -1, -1 };
    HANDLE
	child_io_handles[3] = { NULL, NULL, NULL },
	standard_io_handles[3] = {
	    GetStdHandle(STD_INPUT_HANDLE),
	    GetStdHandle(STD_OUTPUT_HANDLE),
	    GetStdHandle(STD_ERROR_HANDLE)};
    const char modes[3] = "rww";
    HANDLE cur_process = GetCurrentProcess(), child_process = NULL;
    void* envblk = NULL;

    /****** create io handles & fds ***/

    for (i=0; i<3 && success; ++i)
    {
	if (f_share_io[i])
	{
	    success = DuplicateHandle(
		cur_process, standard_io_handles[i],
		cur_process, &child_io_handles[i],
		0, FALSE, DUPLICATE_SAME_ACCESS);
	}
	else
	{
	    HANDLE a, b;
	    success = CreatePipe(&a,&b,NULL,0);
	    if(success)
	    {
		HANDLE parent_end;
		if (modes[i]=='r') { child_io_handles[i]=a; parent_end=b; }
		else		   { parent_end=a; child_io_handles[i]=b; }
		success = (io_fds[i] = _open_osfhandle((long)parent_end,0)) >= 0;
	    }
	}
    }

    /****** make handles inheritable */

    for (i=0; i<3 && success; ++i)
	success = SetHandleInformation(child_io_handles[i], HANDLE_FLAG_INHERIT, -1);

#if 0 /* Requires a sorted list by key! */
    /****** create environment block if necessary ****/

    if (env && success)
    {
	char** p;
	int len = 0;

	for (p = env; *p; ++p) len += strlen(*p) + 1;

	if (envblk = C_malloc(len + 1))
	{
	    char* pb = (char*)envblk;
	    for (p = env; *p; ++p)
	    {
		strcpy(pb, *p);
		pb += strlen(*p) + 1;
	    }
	    *pb = '\0';
            /* This _should_ already have been checked for embedded NUL bytes */
	}
	else
	    success = FALSE;
    }
#endif

    /****** finally spawn process ****/

    if (success)
    {
	PROCESS_INFORMATION pi;
	STARTUPINFO si;

	ZeroMemory(&pi,sizeof pi);
	ZeroMemory(&si,sizeof si);
	si.cb = sizeof si;
	si.dwFlags = STARTF_USESTDHANDLES;
	si.hStdInput = child_io_handles[0];
	si.hStdOutput = child_io_handles[1];
	si.hStdError = child_io_handles[2];

	/* FIXME passing 'app' param causes failure & possible stack corruption */
	success = CreateProcess(
	    NULL, (char*)cmdlin, NULL, NULL, TRUE, 0, envblk, NULL, &si, &pi);

	if (success)
	{
	    child_process=pi.hProcess;
	    CloseHandle(pi.hThread);
	}
	else
	    set_last_errno();
    }
    else
	set_last_errno();

    /****** cleanup & return *********/

    /* parent must close child end */
    for (i=0; i<3; ++i) CloseHandle(child_io_handles[i]);

    if (success)
    {
	*phandle = (int)child_process;
	*pstdin_fd = io_fds[0];
	*pstdout_fd = io_fds[1];
	*pstderr_fd = io_fds[2];
    }
    else
    {
	for (i=0; i<3; ++i) _close(io_fds[i]);
    }

    return success;
}

static int set_file_mtime(char *filename, C_word tm)
{
  struct _utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return _utime(filename, &tb);
}

#include <signal.h>
#include <errno.h>
#include <math.h>

#include <sys/types.h>
#include <sys/stat.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

#define C_curdir(buf)       (getcwd(C_c_string(buf), 1024) ? C_fix(strlen(C_c_string(buf))) : C_SCHEME_FALSE)

static C_TLS struct stat C_statbuf;

#define C_stat_type         (C_statbuf.st_mode & S_IFMT)
#define C_stat(fn)          C_fix(stat((char *)C_data_pointer(fn), &C_statbuf))
#define C_fstat(f)          C_fix(fstat(C_unfix(f), &C_statbuf))

#ifndef S_IFSOCK
# define S_IFSOCK           0140000
#endif

#define C_strftime(v, f) \
        (strftime(C_time_string, sizeof(C_time_string), C_c_string(f), C_tm_set(v)) ? C_time_string : NULL)

#define C_C_fileno(p)	    C_fix(fileno(C_port_file(p)))

#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_C_fileno(p)       C_fix(fileno(C_port_file(p)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

#ifndef S_IFLNK
#define S_IFLNK S_IFREG
#endif

#ifndef S_IFREG
#define S_IFREG S_IFREG
#endif

#ifndef S_IFDIR
#define S_IFDIR S_IFREG
#endif

#ifndef S_IFCHR
#define S_IFCHR S_IFREG
#endif

#ifndef S_IFBLK
#define S_IFBLK S_IFREG
#endif

#ifndef S_IFSOCK
#define S_IFSOCK S_IFREG
#endif

#ifndef S_IFIFO
#define S_IFIFO S_IFREG
#endif


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[404];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,102,95,50,49,54,52,32,97,54,52,54,55,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,41),40,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,54,57,32,108,111,99,55,48,32,109,115,103,55,49,32,46,32,97,114,103,115,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,115,116,97,116,32,102,105,108,101,56,52,32,108,105,110,107,56,53,32,101,114,114,56,54,32,108,111,99,56,55,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,26),40,102,105,108,101,45,115,116,97,116,32,102,57,57,32,46,32,116,109,112,57,56,49,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,49,50,53,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,49,50,56,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,111,119,110,101,114,32,102,49,51,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,32,102,49,51,52,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,102,105,108,101,45,115,105,122,101,32,102,49,51,55,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,116,121,112,101,32,102,105,108,101,49,52,53,32,46,32,116,109,112,49,52,52,49,52,54,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,23),40,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,105,108,101,49,54,52,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,16),40,102,95,50,51,55,53,32,102,105,108,101,49,54,54,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,16),40,102,95,50,51,56,52,32,102,105,108,101,49,54,56,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,102,95,50,51,57,51,32,102,105,108,101,49,55,48,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,102,95,50,52,48,50,32,102,105,108,101,49,55,50,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,102,95,50,52,49,49,32,102,105,108,101,49,55,52,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,49,55,54,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,109,111,100,101,32,105,110,112,49,56,50,32,109,49,56,51,32,108,111,99,49,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,32,108,111,99,49,57,52,32,102,100,49,57,53,32,105,110,112,49,57,54,32,114,49,57,55,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,21),40,102,95,50,52,56,50,32,102,100,50,48,48,32,46,32,109,50,48,49,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,21),40,102,95,50,52,57,53,32,102,100,50,48,51,32,46,32,109,50,48,52,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,16),40,102,95,50,53,48,56,32,112,111,114,116,50,49,48,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,24),40,102,95,50,53,53,50,32,111,108,100,50,49,56,32,46,32,110,101,119,50,49,57,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,51,48,50,51,49,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,114,109,100,105,114,32,100,105,114,50,53,56,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,102,95,50,54,51,57,32,102,50,55,52,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,52,32,103,50,55,49,50,56,49,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,38),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,53,48,32,46,32,116,109,112,50,52,57,50,53,49,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,57,51,50,57,52,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,8),40,102,95,50,56,51,55,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,102,95,50,56,55,50,32,109,51,53,55,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,51,52,57,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,47),40,102,95,50,56,52,50,32,100,105,114,51,51,50,51,51,51,51,51,56,32,102,105,108,51,51,52,51,51,53,51,51,57,32,101,120,116,51,51,54,51,51,55,51,52,48,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,51,51,48,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,17),40,103,108,111,98,32,46,32,112,97,116,104,115,51,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,8),40,102,95,50,57,56,56,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,102,95,50,57,57,51,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,49,51,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,102,115,51,56,54,32,114,51,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,54,54,32,120,51,56,52,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,15),40,102,95,51,48,56,54,32,46,32,95,51,55,56,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,15),40,102,95,51,48,55,55,32,46,32,95,51,55,55,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,49,49,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,49,52,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,49,55,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,50,48,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,18),40,102,95,51,49,50,53,32,120,52,50,48,32,121,52,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,50,51,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,15),40,102,95,51,49,51,50,32,46,32,95,52,49,56,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,51,48,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,31),40,102,105,110,100,45,102,105,108,101,115,32,100,105,114,52,49,53,32,46,32,116,109,112,52,49,52,52,49,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,52,52,55,32,116,109,52,52,56,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,33),40,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,116,109,112,52,53,53,52,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,31),40,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,116,109,112,52,54,56,52,54,57,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,16),40,102,95,51,49,57,57,32,97,52,55,56,52,56,49,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,29),40,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,116,109,112,52,56,55,52,56,56,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,27),40,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,52,57,55,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,102,95,51,50,53,56,32,97,53,48,51,53,48,54,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,24),40,102,95,51,50,54,52,32,97,53,48,57,53,49,50,32,97,53,48,56,53,49,51,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,32),40,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,53,50,48,32,46,32,116,109,112,53,49,57,53,50,49,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,53,51,52,32,112,114,111,99,53,51,53,41,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,20),40,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,8),40,102,95,51,51,54,48,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,34),40,102,95,51,51,54,53,32,101,112,105,100,53,53,57,32,101,110,111,114,109,53,54,48,32,101,99,111,100,101,53,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,24),40,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,53,52,52,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,54,51,48,32,102,108,97,103,115,54,51,49,32,46,32,109,111,100,101,54,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,18),40,102,105,108,101,45,99,108,111,115,101,32,102,100,54,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,37),40,102,105,108,101,45,114,101,97,100,32,102,100,54,52,53,32,115,105,122,101,54,52,54,32,46,32,98,117,102,102,101,114,54,52,55,41,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,38),40,102,105,108,101,45,119,114,105,116,101,32,102,100,54,53,55,32,98,117,102,102,101,114,54,53,56,32,46,32,115,105,122,101,54,53,57,41,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,26),40,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,54,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,25),40,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,110,97,109,101,54,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,17),40,102,95,51,53,57,51,32,102,110,97,109,101,54,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,16),40,102,95,51,53,57,49,32,110,97,109,101,54,56,51,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,54,57,48,32,112,111,115,54,57,49,32,46,32,119,104,101,110,99,101,54,57,50,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,16),40,102,95,51,54,57,57,32,110,97,109,101,55,52,53,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,102,95,51,54,57,50,32,110,97,109,101,55,52,50,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,13),40,102,95,51,54,56,54,32,120,55,51,57,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,50,57,32,103,55,51,54,55,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,16),40,102,95,51,54,56,48,32,110,97,109,101,55,50,52,41};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,16),40,102,95,51,55,53,48,32,110,97,109,101,55,53,53,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,55,49,52,32,46,32,116,109,112,55,49,51,55,49,53,41,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,55,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,26),40,99,104,101,99,107,32,99,109,100,55,55,48,32,105,110,112,55,55,49,32,114,55,55,50,41,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,55,55,54,32,46,32,109,55,55,55,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,55,56,53,32,46,32,109,55,56,54,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,55,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,27),40,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,55,57,57,41,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,8),40,102,95,51,57,52,56,41};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,21),40,102,95,51,57,53,51,32,46,32,114,101,115,117,108,116,115,56,49,53,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,47),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,56,49,49,32,112,114,111,99,56,49,50,32,46,32,109,111,100,101,56,49,51,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,8),40,102,95,51,57,55,48,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,21),40,102,95,51,57,55,53,32,46,32,114,101,115,117,108,116,115,56,50,50,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,48),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,56,49,56,32,112,114,111,99,56,49,57,32,46,32,109,111,100,101,56,50,48,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,8),40,102,95,51,57,57,50,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,21),40,102,95,52,48,48,50,32,46,32,114,101,115,117,108,116,115,56,51,55,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,8),40,102,95,51,57,57,55,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,49,48,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,48),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,56,50,53,32,116,104,117,110,107,56,50,54,32,46,32,109,111,100,101,56,50,55,41};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,50,52,41};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,21),40,102,95,52,48,51,52,32,46,32,114,101,115,117,108,116,115,56,53,52,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,50,57,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,52,50,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,47),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,56,52,50,32,116,104,117,110,107,56,52,51,32,46,32,109,111,100,101,56,52,52,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,112,105,112,101,32,46,32,116,109,112,56,54,51,56,54,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,32),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,57,51,56,32,109,57,51,57,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,57,52,52,32,97,99,99,57,52,53,32,108,111,99,57,52,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,57,53,48,41,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,57,53,49,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,34),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,57,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,25),40,109,111,100,101,32,105,110,112,57,54,49,32,109,57,54,50,32,108,111,99,57,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,25),40,99,104,101,99,107,32,102,100,57,55,51,32,105,110,112,57,55,52,32,114,57,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,57,55,57,32,46,32,109,57,56,48,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,57,56,50,32,46,32,109,57,56,51,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,22),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,57,56,57,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,34),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,57,57,53,32,46,32,110,101,119,57,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,24),40,115,101,116,101,110,118,32,118,97,114,49,48,48,52,32,118,97,108,49,48,48,53,41};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,18),40,117,110,115,101,116,101,110,118,32,118,97,114,49,48,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,18),40,102,95,52,51,55,48,32,97,49,48,49,53,49,48,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,12),40,115,99,97,110,32,106,49,48,50,52,41,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,48,50,49,41,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,27),40,103,101,116,45,101,110,118,105,114,111,110,109,101,110,116,45,118,97,114,105,97,98,108,101,115,41,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,18),40,102,95,52,52,52,53,32,97,49,48,51,51,49,48,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,18),40,95,101,120,105,116,32,46,32,99,111,100,101,49,48,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,25),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,49,48,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,49,48,52,52,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,50),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,49,48,52,54,32,109,111,100,101,49,48,52,55,32,46,32,115,105,122,101,49,48,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,14),40,102,95,52,53,54,52,32,115,49,48,54,55,41,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,105,108,115,116,49,48,55,54,32,111,108,115,116,49,48,55,55,41};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,37),40,36,113,117,111,116,101,45,97,114,103,115,45,108,105,115,116,32,108,115,116,49,48,54,52,32,101,120,97,99,116,102,49,48,54,53,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,38),40,102,95,52,54,51,48,32,97,49,48,56,54,49,48,57,48,32,97,49,48,56,53,49,48,57,49,32,97,49,48,56,52,49,48,57,50,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,38),40,102,95,52,54,52,56,32,97,49,48,57,54,49,49,48,48,32,97,49,48,57,53,49,49,48,49,32,97,49,48,57,52,49,49,48,50,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,49,48,56,32,108,49,49,49,48,32,105,49,49,49,49,41};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,50),40,102,95,52,54,54,54,32,108,111,99,49,49,48,52,32,108,115,116,49,49,48,53,32,97,114,103,118,101,99,45,115,101,116,116,101,114,49,49,48,54,32,105,100,120,49,49,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,67),40,36,101,120,101,99,45,115,101,116,117,112,32,108,111,99,49,49,49,55,32,102,105,108,101,110,97,109,101,49,49,49,56,32,97,114,103,108,115,116,49,49,49,57,32,101,110,118,108,115,116,49,49,50,48,32,101,120,97,99,116,102,49,49,50,49,41,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,53),40,36,101,120,101,99,45,116,101,97,114,100,111,119,110,32,108,111,99,49,49,51,48,32,109,115,103,49,49,51,49,32,102,105,108,101,110,97,109,101,49,49,51,50,32,114,101,115,49,49,51,51,41,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,44),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,49,49,52,51,32,46,32,116,109,112,49,49,52,50,49,49,52,52,41,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,51),40,112,114,111,99,101,115,115,45,115,112,97,119,110,32,109,111,100,101,49,49,54,52,32,102,105,108,101,110,97,109,101,49,49,54,53,32,46,32,116,109,112,49,49,54,51,49,49,54,54,41,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,49,49,56,54,41,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,114,117,110,32,102,49,49,56,56,32,46,32,97,114,103,115,49,49,56,57,41,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,88),40,102,95,52,57,50,52,32,97,49,50,48,48,49,50,49,48,32,97,49,49,57,57,49,50,49,49,32,97,49,49,57,56,49,50,49,50,32,97,49,49,57,55,49,50,49,51,32,97,49,49,57,54,49,50,49,52,32,97,49,49,57,53,49,50,49,53,32,97,49,49,57,52,49,50,49,54,32,97,49,49,57,51,49,50,49,55,41};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,97),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,49,50,51,48,32,99,109,100,49,50,51,49,32,97,114,103,115,49,50,51,50,32,101,110,118,49,50,51,51,32,115,116,100,111,117,116,102,49,50,51,52,32,115,116,100,105,110,102,49,50,51,53,32,115,116,100,101,114,114,102,49,50,51,54,32,46,32,116,109,112,49,50,50,57,49,50,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,22),40,102,95,53,48,54,57,32,103,49,51,49,49,49,51,49,50,49,51,49,51,41,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,57,56,32,103,49,51,48,53,49,51,49,55,41,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,16),40,102,95,53,48,54,53,32,108,115,116,49,50,57,53,41};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,8),40,102,95,53,49,48,55,41};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,39),40,102,95,53,49,49,50,32,105,110,49,51,50,52,32,111,117,116,49,51,50,53,32,112,105,100,49,51,50,54,32,101,114,114,49,51,50,55,41,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,61),40,102,95,53,48,54,51,32,108,111,99,49,50,56,56,32,101,114,114,63,49,50,56,57,32,99,109,100,49,50,57,48,32,97,114,103,115,49,50,57,49,32,101,110,118,49,50,57,50,32,101,120,97,99,116,102,49,50,57,51,41,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,49,51,51,54,32,46,32,116,109,112,49,51,51,53,49,51,51,55,41,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,49,51,53,53,32,46,32,116,109,112,49,51,53,52,49,51,53,54,41};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,51,55,49,32,110,111,104,97,110,103,49,51,55,50,41,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,17),40,115,108,101,101,112,32,97,49,51,55,52,49,51,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,31),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,42,32,46,32,95,49,52,49,50,49,52,49,54,41,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,31),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,46,32,95,49,52,49,57,49,52,50,51,41,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,102,105,102,111,32,46,32,95,49,52,50,53,49,52,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,28),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,32,46,32,95,49,52,51,49,49,52,51,53,41,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,52,51,55,49,52,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,40),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,103,114,111,117,112,45,105,100,32,46,32,95,49,52,52,51,49,52,52,55,41};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,39),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,105,100,32,46,32,95,49,52,52,57,49,52,53,51,41,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,41),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,32,46,32,95,49,52,53,53,49,52,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,30),40,99,117,114,114,101,110,116,45,103,114,111,117,112,45,105,100,32,46,32,95,49,52,54,49,49,52,54,53,41,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,117,115,101,114,45,105,100,32,46,32,95,49,52,54,55,49,52,55,49,41,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,46,32,95,49,52,55,51,49,52,55,55,41};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,105,110,107,32,46,32,95,49,52,55,57,49,52,56,51,41,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,111,99,107,32,46,32,95,49,52,56,53,49,52,56,57,41,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,46,32,95,49,52,57,49,49,52,57,53,41};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,115,101,108,101,99,116,32,46,32,95,49,52,57,55,49,53,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,28),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,46,32,95,49,53,48,51,49,53,48,55,41,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,46,32,95,49,53,48,57,49,53,49,51,41,0,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,117,110,108,111,99,107,32,46,32,95,49,53,49,53,49,53,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,24),40,103,101,116,45,103,114,111,117,112,115,32,46,32,95,49,53,50,49,49,53,50,53,41};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,31),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,53,50,55,49,53,51,49,41,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,31),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,46,32,95,49,53,51,51,49,53,51,55,41,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,40),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,46,32,95,49,53,51,57,49,53,52,51,41};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,31),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,32,46,32,95,49,53,52,53,49,53,52,57,41,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,26),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,95,49,53,53,49,49,53,53,53,41,0,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,32,46,32,95,49,53,53,55,49,53,54,49,41,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,46,32,95,49,53,54,51,49,53,54,55,41,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,32),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,53,54,57,49,53,55,51,41};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,24),40,115,101,116,45,97,108,97,114,109,33,32,46,32,95,49,53,55,53,49,53,55,57,41};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,27),40,115,101,116,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,53,56,49,49,53,56,53,41,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,25),40,115,101,116,45,103,114,111,117,112,115,33,32,46,32,95,49,53,56,55,49,53,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,35),40,115,101,116,45,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,53,57,51,49,53,57,55,41,0,0,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,33),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,46,32,95,49,53,57,57,49,54,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,54,48,53,49,54,48,57,41,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,117,115,101,114,45,105,100,33,32,46,32,95,49,54,49,49,49,54,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,25),40,115,105,103,110,97,108,45,109,97,115,107,32,46,32,95,49,54,49,55,49,54,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,26),40,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,54,50,51,49,54,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,46,32,95,49,54,50,57,49,54,51,51,41,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,46,32,95,49,54,51,53,49,54,51,57,41,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,27),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,46,32,95,49,54,52,49,49,54,52,53,41,0,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,36),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,46,32,95,49,54,52,55,49,54,53,49,41,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,30),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,54,53,51,49,54,53,55,41,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,31),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,46,32,95,49,54,53,57,49,54,54,51,41,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,26),40,115,116,114,105,110,103,45,62,116,105,109,101,32,46,32,95,49,54,54,53,49,54,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,13),40,102,105,102,111,63,32,95,49,54,55,50,41,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,95,49,54,55,52,41,0,0,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,16),40,102,95,53,54,48,50,32,112,111,114,116,55,48,50,41};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,15),40,102,95,53,54,51,57,32,115,105,103,53,52,48,41,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,52,55,32,46,32,116,109,112,52,51,49,52,51,50,41,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,14),40,102,95,53,54,55,48,32,117,109,52,52,52,41,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,13),40,102,95,53,54,55,53,32,102,49,48,56,41,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,24),40,102,95,53,54,56,52,32,97,49,49,54,49,50,48,32,97,49,49,53,49,50,49,41};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,18),40,102,95,53,54,56,48,32,102,49,49,48,32,116,49,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k5264 */
static C_word C_fcall stub1375(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1375(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_sleep(t0));
return C_r;}

/* from k4955 */
static C_word C_fcall stub1201(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7) C_regparm;
C_regparm static C_word C_fcall stub1201(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
int *t3=(int *)C_c_pointer_or_null(C_a3);
int *t4=(int *)C_c_pointer_or_null(C_a4);
int *t5=(int *)C_c_pointer_or_null(C_a5);
int *t6=(int *)C_c_pointer_or_null(C_a6);
int t7=(int )C_unfix(C_a7);
C_r=C_mk_bool(C_process(t0,t1,t2,t3,t4,t5,t6,t7));
return C_r;}

/* from k4658 */
static C_word C_fcall stub1097(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1097(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from k4640 */
static C_word C_fcall stub1087(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1087(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k4448 */
static C_word C_fcall stub1034(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1034(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1028(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1028(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);
C_return(z);
C_ret:
#undef return

return C_r;}

/* from k4377 */
static C_word C_fcall stub1016(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1016(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from f_3264 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static C_word C_fcall stub510(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub510(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from f_3258 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static C_word C_fcall stub504(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub504(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k3206 */
static C_word C_fcall stub479(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub479(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k5687 */
static C_word C_fcall stub117(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub117(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k2171 */
static C_word C_fcall stub65(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub65(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_2748)
static void C_fcall f_2748(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_fcall f_2742(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_fcall f_2468(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4278)
static void C_ccall f_4278(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4278)
static void C_ccall f_4278r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2432)
static void C_fcall f_2432(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4248)
static void C_fcall f_4248(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3208)
static void C_ccall f_3208(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3208)
static void C_ccall f_3208r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3270)
static void C_ccall f_3270(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3270)
static void C_ccall f_3270r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3531)
static void C_ccall f_3531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4328)
static void C_fcall f_4328(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5367)
static void C_ccall f_5367(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5331)
static void C_ccall f_5331(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5337)
static void C_ccall f_5337(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5343)
static void C_ccall f_5343(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5349)
static void C_ccall f_5349(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2382)
static void C_ccall f_2382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3527)
static void C_fcall f_3527(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5397)
static void C_ccall f_5397(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5373)
static void C_ccall f_5373(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4212)
static void C_fcall f_4212(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5379)
static void C_ccall f_5379(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5385)
static void C_ccall f_5385(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2728)
static void C_fcall f_2728(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5314)
static void C_ccall f_5314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5319)
static void C_ccall f_5319(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5325)
static void C_ccall f_5325(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3691)
static void C_ccall f_3691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5305)
static void C_ccall f_5305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4512)
static void C_fcall f_4512(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5505)
static void C_ccall f_5505(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3618)
static void C_fcall f_3618(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5511)
static void C_ccall f_5511(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4599)
static void C_fcall f_4599(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4666)
static void C_ccall f_4666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4676)
static void C_fcall f_4676(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5136)
static void C_ccall f_5136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5132)
static void C_ccall f_5132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5107)
static void C_ccall f_5107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5100)
static void C_ccall f_5100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5112)
static void C_ccall f_5112(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4625)
static void C_ccall f_4625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5565)
static void C_ccall f_5565(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5578)
static void C_ccall f_5578(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4197)
static void C_ccall f_4197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5559)
static void C_ccall f_5559(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5053)
static void C_ccall f_5053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4186)
static void C_ccall f_4186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5078)
static void C_fcall f_5078(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4559)
static void C_fcall f_4559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2189)
static void C_fcall f_2189(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4572)
static C_word C_fcall f_4572(C_word t0,C_word t1);
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5260)
static void C_ccall f_5260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4769)
static void C_ccall f_4769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2154)
static void C_ccall f_2154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2152)
static void C_ccall f_2152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5292)
static void C_ccall f_5292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5295)
static void C_ccall f_5295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3037)
static void C_ccall f_3037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5298)
static void C_ccall f_5298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4721)
static void C_ccall f_4721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4171)
static void C_fcall f_4171(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3114)
static void C_ccall f_3114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4738)
static void C_fcall f_4738(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4742)
static void C_ccall f_4742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t10) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5445)
static void C_ccall f_5445(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5457)
static void C_ccall f_5457(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4708)
static void C_fcall f_4708(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5451)
static void C_ccall f_5451(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5475)
static void C_ccall f_5475(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3816)
static void C_fcall f_3816(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5481)
static void C_ccall f_5481(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5487)
static void C_ccall f_5487(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5710)
static void C_ccall f_5710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3833)
static void C_ccall f_3833(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3833)
static void C_ccall f_3833r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_fcall f_2823(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5493)
static void C_ccall f_5493(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2558)
static void C_fcall f_2558(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3434)
static void C_fcall f_3434(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4903)
static void C_fcall f_4903(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5403)
static void C_ccall f_5403(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2664)
static void C_fcall f_2664(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2508)
static void C_ccall f_2508(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5415)
static void C_ccall f_5415(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4501)
static void C_fcall f_4501(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4504)
static void C_ccall f_4504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5421)
static void C_ccall f_5421(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3852)
static void C_ccall f_3852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_fcall f_2615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4413)
static void C_ccall f_4413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2853)
static void C_fcall f_2853(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2845)
static void C_ccall f_2845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3137)
static void C_ccall f_3137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3139)
static void C_fcall f_3139(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3125)
static void C_ccall f_3125(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4499)
static void C_ccall f_4499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3927)
static void C_ccall f_3927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3784)
static void C_ccall f_3784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5670)
static void C_ccall f_5670(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5678)
static void C_ccall f_5678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3915)
static void C_ccall f_3915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5698)
static void C_ccall f_5698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4487)
static void C_ccall f_4487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2919)
static void C_fcall f_2919(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_fcall f_2917(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4263)
static void C_ccall f_4263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3295)
static void C_ccall f_3295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2927)
static void C_fcall f_2927(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4873)
static void C_ccall f_4873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3750)
static void C_ccall f_3750(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4385)
static void C_fcall f_4385(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4389)
static void C_ccall f_4389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4893)
static void C_ccall f_4893(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4899)
static void C_ccall f_4899(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4899)
static void C_ccall f_4899r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4397)
static void C_fcall f_4397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3728)
static void C_fcall f_3728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4335)
static void C_ccall f_4335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2748)
static void C_fcall trf_2748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2748(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2748(t0,t1);}

C_noret_decl(trf_2742)
static void C_fcall trf_2742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2742(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2742(t0,t1);}

C_noret_decl(trf_2468)
static void C_fcall trf_2468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2468(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2468(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2432)
static void C_fcall trf_2432(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2432(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2432(t0,t1,t2,t3);}

C_noret_decl(trf_4248)
static void C_fcall trf_4248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4248(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4248(t0,t1,t2,t3);}

C_noret_decl(trf_4328)
static void C_fcall trf_4328(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4328(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4328(t0,t1);}

C_noret_decl(trf_3527)
static void C_fcall trf_3527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3527(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3527(t0,t1);}

C_noret_decl(trf_4212)
static void C_fcall trf_4212(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4212(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4212(t0,t1,t2,t3);}

C_noret_decl(trf_2728)
static void C_fcall trf_2728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2728(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2728(t0,t1);}

C_noret_decl(trf_4512)
static void C_fcall trf_4512(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4512(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4512(t0,t1);}

C_noret_decl(trf_3618)
static void C_fcall trf_3618(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3618(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3618(t0,t1);}

C_noret_decl(trf_4599)
static void C_fcall trf_4599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4599(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4599(t0,t1,t2,t3);}

C_noret_decl(trf_4676)
static void C_fcall trf_4676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4676(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4676(t0,t1,t2,t3);}

C_noret_decl(trf_5078)
static void C_fcall trf_5078(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5078(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5078(t0,t1,t2);}

C_noret_decl(trf_4559)
static void C_fcall trf_4559(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4559(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4559(t0,t1,t2);}

C_noret_decl(trf_2189)
static void C_fcall trf_2189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2189(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2189(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4171)
static void C_fcall trf_4171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4171(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4171(t0,t1,t2,t3);}

C_noret_decl(trf_4738)
static void C_fcall trf_4738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4738(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4738(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4708)
static void C_fcall trf_4708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4708(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4708(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3816)
static void C_fcall trf_3816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3816(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3816(t0,t1,t2,t3);}

C_noret_decl(trf_2823)
static void C_fcall trf_2823(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2823(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2823(t0,t1,t2);}

C_noret_decl(trf_2558)
static void C_fcall trf_2558(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2558(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2558(t0,t1);}

C_noret_decl(trf_3434)
static void C_fcall trf_3434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3434(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3434(t0,t1);}

C_noret_decl(trf_4903)
static void C_fcall trf_4903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4903(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4903(t0,t1);}

C_noret_decl(trf_2664)
static void C_fcall trf_2664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2664(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2664(t0,t1,t2);}

C_noret_decl(trf_4501)
static void C_fcall trf_4501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4501(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4501(t0,t1);}

C_noret_decl(trf_2615)
static void C_fcall trf_2615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2615(t0,t1);}

C_noret_decl(trf_2853)
static void C_fcall trf_2853(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2853(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2853(t0,t1,t2);}

C_noret_decl(trf_3139)
static void C_fcall trf_3139(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3139(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3139(t0,t1,t2);}

C_noret_decl(trf_2919)
static void C_fcall trf_2919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2919(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2919(t0,t1);}

C_noret_decl(trf_2917)
static void C_fcall trf_2917(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2917(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2917(t0,t1);}

C_noret_decl(trf_2927)
static void C_fcall trf_2927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2927(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2927(t0,t1,t2,t3);}

C_noret_decl(trf_4385)
static void C_fcall trf_4385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4385(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4385(t0,t1,t2);}

C_noret_decl(trf_4397)
static void C_fcall trf_4397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4397(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4397(t0,t1,t2);}

C_noret_decl(trf_3728)
static void C_fcall trf_3728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3728(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3728(t0,t1,t2);}

C_noret_decl(tr10)
static void C_fcall tr10(C_proc10 k) C_regparm C_noret;
C_regparm static void C_fcall tr10(C_proc10 k){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
(k)(10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(tr8)
static void C_fcall tr8(C_proc8 k) C_regparm C_noret;
C_regparm static void C_fcall tr8(C_proc8 k){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
(k)(8,t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr9r)
static void C_fcall tr9r(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9r(C_proc9 k){
int n;
C_word *a,t9;
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
n=C_rest_count(0);
a=C_alloc(n*3);
t9=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr2r)
static void C_fcall tr2r(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2r(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n*3);
t2=C_restore_rest(a,n);
(k)(t0,t1,t2);}

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

/* k2746 in k2741 in k2737 in loop in k2713 in k2710 in k2708 in k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2748(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2748,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posix-common.scm:367: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2728(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2757,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:368: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2728(t3,t2);}}

/* k2741 in k2737 in loop in k2713 in k2710 in k2708 in k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2742(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2742,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_make_character(46),((C_word*)t0)[5]);
if(C_truep(t3)){
t4=C_i_not(t1);
if(C_truep(t4)){
t5=t2;
f_2748(t5,t4);}
else{
t5=C_eqp(C_make_character(46),t1);
if(C_truep(t5)){
t6=C_eqp(C_fix(2),((C_word*)t0)[6]);
t7=t2;
f_2748(t7,(C_truep(t6)?t6:C_i_not(((C_word*)t0)[7])));}
else{
t6=t2;
f_2748(t6,C_i_not(((C_word*)t0)[7]));}}}
else{
t4=t2;
f_2748(t4,C_SCHEME_FALSE);}}

/* k3251 in k3246 in local-time->seconds in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:477: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],lf[112],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k3569 in k3563 in k3559 in file-mkstemp in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1018: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* check in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2468(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2468,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:262: posix-error */
t6=lf[3];
f_2173(6,t6,t1,lf[10],t2,lf[51],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2480,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:263: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(6,*((C_word*)lf[52]+1),t6,t4,*((C_word*)lf[53]+1),lf[54],lf[55]);}}

/* f_3258 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3258(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3258,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=stub504(t3,t2);
/* posix-common.scm:481: ##sys#peek-c-string */
t5=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,C_fix(0));}

/* k3577 in k3559 in file-mkstemp in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1017: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[161],lf[162],((C_word*)t0)[3]);}

/* k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2944,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3037,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:413: pathname-file */
t3=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:422: pproc */
t3=((C_word*)t0)[9];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}}

/* k4275 in open-input-file* in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4276,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posixwin.scm:1363: check */
f_4248(((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* open-output-file* in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4278(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4278r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4278r(t0,t1,t2,t3);}}

static void C_ccall f_4278r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[57]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4289,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1367: mode */
f_4212(t5,C_SCHEME_FALSE,t3,lf[57]);}

/* k3283 in k3276 in time->string in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posix-common.scm:489: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[115],lf[116],((C_word*)t0)[3]);}}

/* k2438 in mode in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:251: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4302 in k4319 in k4294 in port->fileno in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* mode in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2432(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2432,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2439,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[44]);
if(C_truep(t8)){
t9=t2;
if(C_truep(t9)){
/* posix-common.scm:255: ##sys#error */
t10=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t5,lf[46],t7);}
else{
/* posix-common.scm:251: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[47],t4);}}
else{
/* posix-common.scm:256: ##sys#error */
t9=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,lf[48],t7);}}
else{
if(C_truep(t2)){
/* posix-common.scm:251: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[49],t4);}
else{
/* posix-common.scm:251: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[50],t4);}}}

/* check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4248(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4248,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4252,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1354: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}

/* seconds->string in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3208(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3208r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3208r(t0,t1,t2);}}

static void C_ccall f_3208r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3213,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:466: current-seconds */
t4=*((C_word*)lf[107]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=t3;
f_3213(2,t4,C_i_car(t2));}}

/* time->string in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3270(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3270r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3270r(t0,t1,t2,t3);}}

static void C_ccall f_3270r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3277,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:484: check-time-vector */
f_3139(t6,lf[115],t2);}

/* k3276 in time->string in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3277,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[115]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3284,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3293,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:488: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,((C_word*)t0)[2],lf[115]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3295,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:490: asctime */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}

/* f_3593 */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3593,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f_3591 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3591,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3593,a[2]=t2,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));}

/* process-spawn in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4813(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4813r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4813r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4813r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4829,a[2]=t10,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1549: $exec-setup */
t18=lf[305];
f_4708(t18,t17,lf[310],t3,t6,t10,t14);}

/* k4307 in k4319 in k4294 in port->fileno in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1376: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[58],lf[279],((C_word*)t0)[3]);}

/* k2713 in k2710 in k2708 in k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2714,2,t0,t1);}
t2=C_opendir(t1,((C_word*)t0)[2]);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posix-common.scm:352: posix-error */
t3=lf[3];
f_2173(6,t3,((C_word*)t0)[3],lf[10],lf[29],lf[78],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li28),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2728(t6,((C_word*)t0)[3]);}}

/* port->fileno in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4291(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4291,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4295,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1371: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(4,*((C_word*)lf[63]+1),t3,t2,lf[58]);}

/* k4294 in port->fileno in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1372: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),t2,((C_word*)t0)[3],C_fix(0));}

/* k2710 in k2708 in k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2787,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:350: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[4]);}

/* k4319 in k4294 in port->fileno in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4320,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posixwin.scm:1378: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[15],lf[58],lf[278],((C_word*)t0)[3]);}
else{
t2=C_C_fileno(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4308,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1375: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* duplicate-fileno in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4322r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4322r(t0,t1,t2,t3);}}

static void C_ccall f_4322r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[64]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4328,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_4328(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[64]);
t8=t5;
f_4328(t8,C_dup2(t2,t6));}}

/* k2408 */
static void C_ccall f_2409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[32],t1));}

/* k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:346: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(2,*((C_word*)lf[79]+1),t2);}

/* k2708 in k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2711,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:347: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(2,*((C_word*)lf[79]+1),t2);}

/* k2399 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[30],t1));}

/* f_2402 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2402,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:230: file-type */
t4=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k3535 in k3526 in k3524 in file-write in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1006: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[10],lf[158],lf[159],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3530 in k3526 in k3524 in file-write in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4327 in duplicate-fileno in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4328(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4328,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4330,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4335,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1389: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* current-effective-user-id in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5355(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5355,2,t0,t1);}
/* posixwin.scm:1701: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[341],lf[0]);}

/* file-execute-access? in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4203,3,t0,t1,t2);}
/* posixwin.scm:1328: check */
f_4171(t1,t2,C_fix((C_word)2),lf[270]);}

/* current-effective-user-name in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5361(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5361,2,t0,t1);}
/* posixwin.scm:1702: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[342],lf[0]);}

/* current-group-id in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5367(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5367,2,t0,t1);}
/* posixwin.scm:1703: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[343],lf[0]);}

/* k2479 in check in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_2482 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2482r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2482r(t0,t1,t2,t3);}}

static void C_ccall f_2482r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[56]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2493,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:269: mode */
f_2432(t5,C_SCHEME_TRUE,t3,lf[56]);}

/* k2417 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[33],t1));}

/* f_2411 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2411(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2411,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2418,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:233: file-type */
t4=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k3499 in k3489 in k3487 in file-read in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:993: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[10],lf[155],lf[156],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* create-fifo in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5331(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5331,2,t0,t1);}
/* posixwin.scm:1697: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[337],lf[0]);}

/* create-session in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5337(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5337,2,t0,t1);}
/* posixwin.scm:1698: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[338],lf[0]);}

/* create-symbolic-link in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5343(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5343,2,t0,t1);}
/* posixwin.scm:1699: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[339],lf[0]);}

/* current-effective-group-id in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5349(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5349,2,t0,t1);}
/* posixwin.scm:1700: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[340],lf[0]);}

/* k2381 */
static void C_ccall f_2382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[28],t1));}

/* k3524 in file-write in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3525,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_3527(t4,C_u_i_car(t3));}
else{
t3=t2;
f_3527(t3,C_block_size(((C_word*)t0)[3]));}}

/* f_2375 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2375,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2382,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:221: file-type */
t4=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k3526 in k3524 in file-write in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_3527(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3527,NULL,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[158]);
t3=C_write(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3531,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(C_fix(-1),t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3536,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1005: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}
else{
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}}

/* file-lock in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5391(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5391,2,t0,t1);}
/* posixwin.scm:1707: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[347],lf[0]);}

/* file-lock/blocking in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5397(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5397,2,t0,t1);}
/* posixwin.scm:1708: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[348],lf[0]);}

/* k2426 in directory? in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[29],t1));}

/* directory? in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2420,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2427,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:236: file-type */
t4=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* file-write in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3519r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3519r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3519r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=C_i_check_exact_2(t2,lf[158]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3525,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;
f_3525(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm:1000: ##sys#signal-hook */
t7=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[15],lf[158],lf[160],t3);}}
else{
/* posixwin.scm:1000: ##sys#signal-hook */
t7=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[15],lf[158],lf[160],t3);}}

/* f_2384 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2384,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2391,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:224: file-type */
t4=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* current-user-id in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5373(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5373,2,t0,t1);}
/* posixwin.scm:1704: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[344],lf[0]);}

/* mode in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4212(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4212,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4219,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[44]);
if(C_truep(t8)){
t9=t2;
if(C_truep(t9)){
/* posixwin.scm:1348: ##sys#error */
t10=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t5,lf[271],t7);}
else{
/* posixwin.scm:1344: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[272],t4);}}
else{
/* posixwin.scm:1349: ##sys#error */
t9=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,lf[273],t7);}}
else{
if(C_truep(t2)){
/* posixwin.scm:1344: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[274],t4);}
else{
/* posixwin.scm:1344: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[275],t4);}}}

/* f_2495 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2495r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2495r(t0,t1,t2,t3);}}

static void C_ccall f_2495r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[57]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2506,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:273: mode */
f_2432(t5,C_SCHEME_FALSE,t3,lf[57]);}

/* map-file-to-memory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5379(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5379,2,t0,t1);}
/* posixwin.scm:1705: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[345],lf[0]);}

/* k4218 in mode in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1344: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4828 in process-spawn in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
t2=C_spawnvpe(((C_word*)t0)[3],t1);
/* posixwin.scm:1550: $exec-teardown */
f_4738(((C_word*)t0)[4],lf[310],lf[311],((C_word*)t0)[5],t2);}
else{
t2=C_spawnvp(((C_word*)t0)[3],t1);
/* posixwin.scm:1550: $exec-teardown */
f_4738(((C_word*)t0)[4],lf[310],lf[311],((C_word*)t0)[5],t2);}}

/* k2492 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2493,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:269: check */
f_2468(((C_word*)t0)[4],lf[56],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* regular-file? in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2366(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2366,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2373,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:218: file-type */
t4=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* file-link in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5385(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5385,2,t0,t1);}
/* posixwin.scm:1706: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[346],lf[0]);}

/* k2737 in loop in k2713 in k2710 in k2708 in k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2738,2,t0,t1);}
t2=C_i_string_ref(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[4],C_fix(1)))){
t4=t1;
t5=t3;
f_2742(t5,C_subchar(t4,C_fix(1)));}
else{
t4=t3;
f_2742(t4,C_SCHEME_FALSE);}}

/* loop in k2713 in k2710 in k2708 in k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2728(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2728,NULL,2,t0,t1);}
t2=C_readdir(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_null_pointerp(((C_word*)t0)[3]))){
t3=C_closedir(((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_foundfile(((C_word*)t0)[3],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:360: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[68]+1)))(5,*((C_word*)lf[68]+1),t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* f_4002 */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4002r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4002r(t0,t1,t2);}}

static void C_ccall f_4002r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4005,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1194: close-input-pipe */
t4=*((C_word*)lf[187]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k5313 in current-user-name in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1684: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[332],lf[333]);}

/* change-directory* in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5319(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5319,2,t0,t1);}
/* posixwin.scm:1695: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[334],lf[0]);}

/* k4004 */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_4010 in k3986 in with-input-from-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4010,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[196]+1));
t3=C_mutate((C_word*)lf[196]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* change-file-owner in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5325(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5325,2,t0,t1);}
/* posixwin.scm:1696: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[336],lf[0]);}

/* k4018 in with-output-to-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4019,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4024,a[2]=t5,a[3]=t3,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4029,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4042,a[2]=t3,a[3]=t5,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1198: ##sys#dynamic-wind */
t9=*((C_word*)lf[91]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

/* with-output-to-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4015(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4015r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4015r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4015r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4019,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[186]+1),t2,t4);}

/* k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word t158;
C_word t159;
C_word t160;
C_word t161;
C_word t162;
C_word t163;
C_word t164;
C_word t165;
C_word t166;
C_word t167;
C_word t168;
C_word t169;
C_word t170;
C_word t171;
C_word t172;
C_word t173;
C_word t174;
C_word t175;
C_word t176;
C_word t177;
C_word t178;
C_word t179;
C_word t180;
C_word t181;
C_word t182;
C_word t183;
C_word t184;
C_word t185;
C_word t186;
C_word t187;
C_word t188;
C_word t189;
C_word t190;
C_word t191;
C_word t192;
C_word t193;
C_word t194;
C_word t195;
C_word t196;
C_word t197;
C_word ab[339],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3666,2,t0,t1);}
t2=C_mutate((C_word*)lf[172]+1 /* (set! file-position ...) */,t1);
t3=C_mutate((C_word*)lf[173]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[67]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3776,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
t6=C_mutate((C_word*)lf[182]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3833,a[2]=t5,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[186]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3870,a[2]=t5,a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[187]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3907,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[190]+1 /* (set! close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3923,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[193]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3939,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[194]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3961,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[195]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3983,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[197]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4015,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[199]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4047,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[201]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t16=C_mutate((C_word*)lf[202]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t17=C_mutate((C_word*)lf[203]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t18=C_mutate((C_word*)lf[204]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t19=C_mutate((C_word*)lf[205]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t20=C_mutate((C_word*)lf[206]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t21=C_mutate((C_word*)lf[207]+1 /* (set! signal/break ...) */,C_fix((C_word)SIGBREAK));
t22=C_set_block_item(lf[208] /* signal/alrm */,0,C_fix(0));
t23=C_set_block_item(lf[209] /* signal/chld */,0,C_fix(0));
t24=C_set_block_item(lf[210] /* signal/cont */,0,C_fix(0));
t25=C_set_block_item(lf[211] /* signal/hup */,0,C_fix(0));
t26=C_set_block_item(lf[212] /* signal/io */,0,C_fix(0));
t27=C_set_block_item(lf[213] /* signal/kill */,0,C_fix(0));
t28=C_set_block_item(lf[214] /* signal/pipe */,0,C_fix(0));
t29=C_set_block_item(lf[215] /* signal/prof */,0,C_fix(0));
t30=C_set_block_item(lf[216] /* signal/quit */,0,C_fix(0));
t31=C_set_block_item(lf[217] /* signal/stop */,0,C_fix(0));
t32=C_set_block_item(lf[218] /* signal/trap */,0,C_fix(0));
t33=C_set_block_item(lf[219] /* signal/tstp */,0,C_fix(0));
t34=C_set_block_item(lf[220] /* signal/urg */,0,C_fix(0));
t35=C_set_block_item(lf[221] /* signal/usr1 */,0,C_fix(0));
t36=C_set_block_item(lf[222] /* signal/usr2 */,0,C_fix(0));
t37=C_set_block_item(lf[223] /* signal/vtalrm */,0,C_fix(0));
t38=C_set_block_item(lf[224] /* signal/winch */,0,C_fix(0));
t39=C_set_block_item(lf[225] /* signal/xcpu */,0,C_fix(0));
t40=C_set_block_item(lf[226] /* signal/xfsz */,0,C_fix(0));
t41=C_a_i_list7(&a,7,*((C_word*)lf[201]+1),*((C_word*)lf[202]+1),*((C_word*)lf[203]+1),*((C_word*)lf[204]+1),*((C_word*)lf[205]+1),*((C_word*)lf[206]+1),*((C_word*)lf[207]+1));
t42=C_mutate((C_word*)lf[227]+1 /* (set! signals-list ...) */,t41);
t43=C_mutate((C_word*)lf[228]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t44=C_mutate((C_word*)lf[229]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t45=C_mutate((C_word*)lf[230]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t46=C_mutate((C_word*)lf[231]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t47=C_mutate((C_word*)lf[232]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t48=C_mutate((C_word*)lf[233]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t49=C_mutate((C_word*)lf[234]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t50=C_mutate((C_word*)lf[235]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t51=C_mutate((C_word*)lf[236]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t52=C_mutate((C_word*)lf[237]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t53=C_mutate((C_word*)lf[238]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t54=C_mutate((C_word*)lf[239]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t55=C_mutate((C_word*)lf[240]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t56=C_mutate((C_word*)lf[241]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t57=C_mutate((C_word*)lf[242]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t58=C_mutate((C_word*)lf[243]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t59=C_mutate((C_word*)lf[244]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t60=C_mutate((C_word*)lf[245]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t61=C_mutate((C_word*)lf[246]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t62=C_mutate((C_word*)lf[247]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t63=C_mutate((C_word*)lf[248]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t64=C_mutate((C_word*)lf[249]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t65=C_mutate((C_word*)lf[250]+1 /* (set! errno/nxio ...) */,C_fix((C_word)ENXIO));
t66=C_mutate((C_word*)lf[251]+1 /* (set! errno/2big ...) */,C_fix((C_word)E2BIG));
t67=C_mutate((C_word*)lf[252]+1 /* (set! errno/xdev ...) */,C_fix((C_word)EXDEV));
t68=C_mutate((C_word*)lf[253]+1 /* (set! errno/nodev ...) */,C_fix((C_word)ENODEV));
t69=C_mutate((C_word*)lf[254]+1 /* (set! errno/nfile ...) */,C_fix((C_word)ENFILE));
t70=C_mutate((C_word*)lf[255]+1 /* (set! errno/notty ...) */,C_fix((C_word)ENOTTY));
t71=C_mutate((C_word*)lf[256]+1 /* (set! errno/fbig ...) */,C_fix((C_word)EFBIG));
t72=C_mutate((C_word*)lf[257]+1 /* (set! errno/mlink ...) */,C_fix((C_word)EMLINK));
t73=C_mutate((C_word*)lf[258]+1 /* (set! errno/dom ...) */,C_fix((C_word)EDOM));
t74=C_mutate((C_word*)lf[259]+1 /* (set! errno/range ...) */,C_fix((C_word)ERANGE));
t75=C_mutate((C_word*)lf[260]+1 /* (set! errno/deadlk ...) */,C_fix((C_word)EDEADLK));
t76=C_mutate((C_word*)lf[261]+1 /* (set! errno/nametoolong ...) */,C_fix((C_word)ENAMETOOLONG));
t77=C_mutate((C_word*)lf[262]+1 /* (set! errno/nolck ...) */,C_fix((C_word)ENOLCK));
t78=C_mutate((C_word*)lf[263]+1 /* (set! errno/nosys ...) */,C_fix((C_word)ENOSYS));
t79=C_mutate((C_word*)lf[264]+1 /* (set! errno/notempty ...) */,C_fix((C_word)ENOTEMPTY));
t80=C_mutate((C_word*)lf[265]+1 /* (set! errno/ilseq ...) */,C_fix((C_word)EILSEQ));
t81=C_mutate((C_word*)lf[266]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4145,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t82=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4171,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp);
t83=C_mutate((C_word*)lf[268]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4191,a[2]=t82,a[3]=((C_word)li107),tmp=(C_word)a,a+=4,tmp));
t84=C_mutate((C_word*)lf[269]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4197,a[2]=t82,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp));
t85=C_mutate((C_word*)lf[270]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4203,a[2]=t82,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp));
t86=C_mutate((C_word*)lf[41]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)0));
t87=C_mutate((C_word*)lf[42]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)1));
t88=C_mutate((C_word*)lf[43]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)2));
t89=C_SCHEME_UNDEFINED;
t90=(*a=C_VECTOR_TYPE|1,a[1]=t89,tmp=(C_word)a,a+=2,tmp);
t91=C_SCHEME_UNDEFINED;
t92=(*a=C_VECTOR_TYPE|1,a[1]=t91,tmp=(C_word)a,a+=2,tmp);
t93=C_set_block_item(t90,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t94=C_set_block_item(t92,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4248,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[56]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4265,a[2]=t92,a[3]=t90,a[4]=((C_word)li112),tmp=(C_word)a,a+=5,tmp));
t96=C_mutate((C_word*)lf[57]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4278,a[2]=t92,a[3]=t90,a[4]=((C_word)li113),tmp=(C_word)a,a+=5,tmp));
t97=C_mutate((C_word*)lf[58]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4291,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t98=C_mutate((C_word*)lf[64]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4322,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[281]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4347,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t100=C_mutate((C_word*)lf[282]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4361,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t101=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4370,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
t102=C_mutate((C_word*)lf[283]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4379,a[2]=t101,a[3]=((C_word)li121),tmp=(C_word)a,a+=4,tmp));
t103=C_mutate((C_word*)lf[285]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4437,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t104=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4445,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
t105=C_mutate((C_word*)lf[286]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4450,a[2]=t104,a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp));
t106=C_mutate((C_word*)lf[287]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4463,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t107=C_mutate((C_word*)lf[288]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4480,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t108=C_mutate((C_word*)lf[290]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4495,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t109=C_mutate((C_word*)lf[296]+1 /* (set! spawn/overlay ...) */,C_fix((C_word)P_OVERLAY));
t110=C_mutate((C_word*)lf[297]+1 /* (set! spawn/wait ...) */,C_fix((C_word)P_WAIT));
t111=C_mutate((C_word*)lf[298]+1 /* (set! spawn/nowait ...) */,C_fix((C_word)P_NOWAIT));
t112=C_mutate((C_word*)lf[299]+1 /* (set! spawn/nowaito ...) */,C_fix((C_word)P_NOWAITO));
t113=C_mutate((C_word*)lf[300]+1 /* (set! spawn/detach ...) */,C_fix((C_word)P_DETACH));
t114=C_mutate(&lf[301] /* (set! $quote-args-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4559,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t115=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4630,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
t116=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4648,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
t117=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4666,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
t118=C_mutate(&lf[305] /* (set! $exec-setup ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4708,a[2]=t117,a[3]=t116,a[4]=t115,a[5]=((C_word)li136),tmp=(C_word)a,a+=6,tmp));
t119=C_mutate(&lf[307] /* (set! $exec-teardown ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4738,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t120=C_mutate((C_word*)lf[308]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4753,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t121=C_mutate((C_word*)lf[310]+1 /* (set! process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4813,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t122=C_mutate((C_word*)lf[312]+1 /* (set! ##sys#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4873,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t123=C_mutate((C_word*)lf[316]+1 /* (set! ##sys#shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4893,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t124=C_mutate((C_word*)lf[318]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4899,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t125=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4924,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
t126=C_mutate((C_word*)lf[319]+1 /* (set! ##sys#process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4984,a[2]=t125,a[3]=((C_word)li144),tmp=(C_word)a,a+=4,tmp));
t127=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5063,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp);
t128=C_mutate((C_word*)lf[324]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5138,a[2]=t127,a[3]=((C_word)li151),tmp=(C_word)a,a+=4,tmp));
t129=C_mutate((C_word*)lf[325]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5193,a[2]=t127,a[3]=((C_word)li152),tmp=(C_word)a,a+=4,tmp));
t130=C_mutate((C_word*)lf[123]+1 /* (set! ##sys#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5248,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t131=C_mutate((C_word*)lf[326]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5260,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t132=C_mutate((C_word*)lf[327]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5267,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t133=C_mutate((C_word*)lf[329]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5279,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t134=C_mutate((C_word*)lf[332]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5305,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t135=C_mutate((C_word*)lf[334]+1 /* (set! change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5319,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t136=C_mutate((C_word*)lf[336]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5325,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t137=C_mutate((C_word*)lf[337]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5331,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t138=C_mutate((C_word*)lf[338]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5337,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t139=C_mutate((C_word*)lf[339]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5343,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t140=C_mutate((C_word*)lf[340]+1 /* (set! current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5349,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t141=C_mutate((C_word*)lf[341]+1 /* (set! current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5355,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t142=C_mutate((C_word*)lf[342]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5361,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t143=C_mutate((C_word*)lf[343]+1 /* (set! current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5367,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t144=C_mutate((C_word*)lf[344]+1 /* (set! current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5373,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t145=C_mutate((C_word*)lf[345]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5379,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t146=C_mutate((C_word*)lf[346]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5385,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t147=C_mutate((C_word*)lf[347]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5391,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t148=C_mutate((C_word*)lf[348]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5397,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t149=C_mutate((C_word*)lf[349]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5403,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t150=C_mutate((C_word*)lf[350]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5409,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t151=C_mutate((C_word*)lf[351]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5415,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t152=C_mutate((C_word*)lf[352]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5421,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t153=C_mutate((C_word*)lf[353]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5427,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t154=C_mutate((C_word*)lf[354]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5433,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t155=C_mutate((C_word*)lf[355]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5439,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp));
t156=C_mutate((C_word*)lf[356]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5445,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t157=C_mutate((C_word*)lf[357]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5451,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t158=C_mutate((C_word*)lf[358]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5457,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t159=C_mutate((C_word*)lf[359]+1 /* (set! process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5463,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t160=C_mutate((C_word*)lf[360]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5469,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t161=C_mutate((C_word*)lf[361]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5475,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t162=C_mutate((C_word*)lf[362]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5481,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t163=C_mutate((C_word*)lf[363]+1 /* (set! set-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5487,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t164=C_mutate((C_word*)lf[364]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5493,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t165=C_mutate((C_word*)lf[365]+1 /* (set! set-process-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5499,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t166=C_mutate((C_word*)lf[366]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5505,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t167=C_mutate((C_word*)lf[367]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5511,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp));
t168=C_mutate((C_word*)lf[368]+1 /* (set! set-user-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5517,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp));
t169=C_mutate((C_word*)lf[369]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5523,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp));
t170=C_mutate((C_word*)lf[370]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5529,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp));
t171=C_mutate((C_word*)lf[371]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5535,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t172=C_mutate((C_word*)lf[372]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5541,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t173=C_mutate((C_word*)lf[373]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5547,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t174=C_mutate((C_word*)lf[374]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5553,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t175=C_mutate((C_word*)lf[375]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5559,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t176=C_mutate((C_word*)lf[376]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5565,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t177=C_mutate((C_word*)lf[377]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5571,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp));
t178=C_set_block_item(lf[378] /* errno/wouldblock */,0,C_fix(0));
t179=C_mutate((C_word*)lf[38]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5578,a[2]=((C_word)li201),tmp=(C_word)a,a+=3,tmp));
t180=C_mutate((C_word*)lf[379]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5582,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t181=C_set_block_item(lf[380] /* map/anonymous */,0,C_fix(0));
t182=C_set_block_item(lf[381] /* map/file */,0,C_fix(0));
t183=C_set_block_item(lf[382] /* map/fixed */,0,C_fix(0));
t184=C_set_block_item(lf[383] /* map/private */,0,C_fix(0));
t185=C_set_block_item(lf[384] /* map/shared */,0,C_fix(0));
t186=C_set_block_item(lf[385] /* open/fsync */,0,C_fix(0));
t187=C_set_block_item(lf[386] /* open/noctty */,0,C_fix(0));
t188=C_set_block_item(lf[387] /* open/nonblock */,0,C_fix(0));
t189=C_set_block_item(lf[388] /* open/sync */,0,C_fix(0));
t190=C_set_block_item(lf[389] /* perm/isgid */,0,C_fix(0));
t191=C_set_block_item(lf[390] /* perm/isuid */,0,C_fix(0));
t192=C_set_block_item(lf[391] /* perm/isvtx */,0,C_fix(0));
t193=C_set_block_item(lf[392] /* prot/exec */,0,C_fix(0));
t194=C_set_block_item(lf[393] /* prot/none */,0,C_fix(0));
t195=C_set_block_item(lf[394] /* prot/read */,0,C_fix(0));
t196=C_set_block_item(lf[395] /* prot/write */,0,C_fix(0));
t197=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t197+1)))(2,t197,C_SCHEME_UNDEFINED);}

/* create-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3668(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3668r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3668r(t0,t1,t2,t3);}}

static void C_ccall f_3668r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[173]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3677,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1103: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t7,t2);}

/* f_4024 in k4018 in with-output-to-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4024,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[198]+1));
t3=C_mutate((C_word*)lf[198]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_4029 in k4018 in with-output-to-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4034,a[2]=((C_word*)t0)[2],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1201: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* k3689 */
static void C_ccall f_3691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3691,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3692,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1097: g740 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* f_3692 in k3689 */
static void C_ccall f_3692(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3692,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3698,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1088: ##sys#file-exists? */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(6,*((C_word*)lf[175]+1),t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* f_3699 in k3696 */
static void C_ccall f_3699(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3699,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3714,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1082: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,t2,lf[173]);}

/* k3696 */
static void C_ccall f_3698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3698,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3699,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1089: g743 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* current-user-name in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5305,2,t0,t1);}
if(C_truep(C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_username),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5314,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1683: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t2);}}

/* k5299 in system-information in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1675: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[329],lf[331]);}

/* f_3680 in k3676 in create-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3680(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3680,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1092: string-split */
t4=*((C_word*)lf[177]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[178]);}

/* k3682 */
static void C_ccall f_3683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3683,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3686,a[2]=t3,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t5=t1;
t6=C_u_i_cdr(t5);
t7=C_i_check_list_2(t6,lf[74]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3728,a[2]=t9,a[3]=t4,a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3728(t11,((C_word*)t0)[2],t6);}

/* f_3686 in k3682 */
static void C_ccall f_3686(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3686,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3691,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1096: string-append */
t4=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)((C_word*)t0)[2])[1],lf[176],t2);}

/* k4510 in k4502 in k4500 in k4498 in set-buffering-mode! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4512(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm:1465: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[290],lf[291],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* signal-mask in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5523(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5523,2,t0,t1);}
/* posixwin.scm:1729: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[369],lf[0]);}

/* signal-mask! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5529,2,t0,t1);}
/* posixwin.scm:1730: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[370],lf[0]);}

/* k3676 in create-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3680,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1105: g722 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3750,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1106: g753 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t1);}}

/* k3678 in k3676 in create-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* set-root-directory! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5505(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5505,2,t0,t1);}
/* posixwin.scm:1726: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[366],lf[0]);}

/* k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3612,2,t0,t1);}
t2=C_mutate((C_word*)lf[39]+1 /* (set! socket? ...) */,t1);
t3=C_mutate((C_word*)lf[166]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3614,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3666,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5602,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1062: getter-with-setter */
t6=*((C_word*)lf[398]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,*((C_word*)lf[166]+1),lf[399]);}

/* set-file-position! in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3614r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3614r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3614r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3618,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_3618(t7,C_u_i_car(t6));}
else{
t6=t5;
f_3618(t6,C_fix((C_word)SEEK_SET));}}

/* k3617 in set-file-position! in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_3618(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3618,NULL,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[166]);
t3=C_i_check_exact_2(t1,lf[166]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3624,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
/* posixwin.scm:1051: ##sys#signal-hook */
t6=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t4,lf[170],lf[166],lf[171],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t6=t4;
f_3624(2,t6,C_SCHEME_UNDEFINED);}}

/* k4691 in doloop1108 */
static void C_ccall f_4693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_4676(t5,((C_word*)t0)[5],t3,t4);}

/* set-user-id! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5517(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5517,2,t0,t1);}
/* posixwin.scm:1728: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[368],lf[0]);}

/* k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3600,2,t0,t1);}
t2=C_mutate((C_word*)lf[37]+1 /* (set! character-device? ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1041: stat-type */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}

/* k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3604,2,t0,t1);}
t2=C_mutate((C_word*)lf[36]+1 /* (set! block-device? ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1042: stat-type */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[38]);}

/* set-signal-mask! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5511(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5511,2,t0,t1);}
/* posixwin.scm:1727: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[367],lf[0]);}

/* k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3608,2,t0,t1);}
t2=C_mutate((C_word*)lf[38]+1 /* (set! fifo? ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1043: stat-type */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[39]);}

/* k3623 in k3617 in set-file-position! in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3636,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1052: port? */
t4=*((C_word*)lf[169]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* set-signal-handler! in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3318,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[118]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_vector_set(*((C_word*)lf[119]+1),t2,t3));}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_set(*((C_word*)lf[119]+1),t2,t3));}}

/* loop in $quote-args-list in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4599(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4599,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm:1500: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[302]+1)))(3,*((C_word*)lf[302]+1),t1,t3);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4622,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4625,a[2]=t7,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm:1505: needs-quoting? */
t9=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}}

/* k5086 in for-each-loop1298 */
static void C_ccall f_5087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5078(t3,((C_word*)t0)[4],t2);}

/* f_4666 in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4666,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(t3)){
t6=C_i_check_list_2(t3,t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4676,a[2]=t4,a[3]=t2,a[4]=t8,a[5]=((C_word)li134),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_4676(t10,t1,t3,t5);}
else{
/* posixwin.scm:1525: argvec-setter */
t6=t4;
((C_proc5)C_fast_retrieve_proc(t6))(5,t6,t1,t5,C_SCHEME_FALSE,C_fix(0));}}

/* doloop1108 */
static void C_fcall f_4676(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4676,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm:1521: argvec-setter */
t4=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4693,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_block_size(t4);
/* posixwin.scm:1524: argvec-setter */
t8=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t8))(5,t8,t6,t3,t4,t7);}}

/* k5134 in k5130 */
static void C_ccall f_5136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5100(2,t3,t2);}

/* process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5138(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_5138r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5138r(t0,t1,t2,t3);}}

static void C_ccall f_5138r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
if(C_truep(C_i_nullp(t11))){
/* posixwin.scm:1641: %process */
t14=((C_word*)t0)[2];
((C_proc8)(void*)(*((C_word*)t14+1)))(8,t14,t1,lf[324],C_SCHEME_FALSE,t2,t5,t9,t13);}
else{
t14=C_i_cdr(t11);
/* posixwin.scm:1641: %process */
t15=((C_word*)t0)[2];
((C_proc8)(void*)(*((C_word*)t15+1)))(8,t15,t1,lf[324],C_SCHEME_FALSE,t2,t5,t9,t13);}}

/* k5130 */
static void C_ccall f_5132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5132,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5136,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1633: ##sys#shell-command */
t4=*((C_word*)lf[312]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* memory-mapped-file? in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5582(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5582,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* f_5107 in k5101 in k5099 */
static void C_ccall f_5107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5107,2,t0,t1);}
/* posixwin.scm:1635: ##sys#process */
t2=*((C_word*)lf[319]+1);
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}

/* k5101 in k5099 */
static void C_ccall f_5102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li148),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5112,a[2]=((C_word*)t0)[6],a[3]=((C_word)li149),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1635: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[8],t2,t3);}

/* k5099 */
static void C_ccall f_5100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:1634: chkstrlst */
t3=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_5102(2,t3,C_SCHEME_UNDEFINED);}}

/* f_5112 in k5101 in k5099 */
static void C_ccall f_5112(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5112,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm:1637: values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixwin.scm:1638: values */
C_values(5,0,t1,t2,t3,t4);}}

/* k4623 in loop in $quote-args-list in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4625,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm:1505: string-append */
t2=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[303],((C_word*)t0)[3],lf[304]);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
/* posixwin.scm:1502: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4599(t3,((C_word*)t0)[6],((C_word*)t0)[7],t2);}}

/* k4621 in loop in $quote-args-list in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4622,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* posixwin.scm:1502: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4599(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* utc-time->seconds in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5565(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5565,2,t0,t1);}
/* posixwin.scm:1736: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[376],lf[0]);}

/* k3628 in k3623 in k3617 in set-file-position! in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixwin.scm:1059: posix-error */
t2=lf[3];
f_2173(7,t2,((C_word*)t0)[2],lf[10],lf[166],lf[167],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k3634 in k3623 in k3617 in set-file-position! in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[55]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
f_3630(2,t5,t4);}
else{
t4=((C_word*)t0)[5];
f_3630(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_3630(2,t3,t2);}
else{
/* posixwin.scm:1058: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[15],lf[166],lf[168],((C_word*)t0)[2]);}}}

/* k4636 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1087(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* f_4630 in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4630,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4638,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t7=C_i_foreign_string_argumentp(t3);
/* posixwin.scm:1512: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t6,t7);}
else{
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub1087(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,t7));}}

/* string->time in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5571(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5571,2,t0,t1);}
/* posixwin.scm:1737: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[377],lf[0]);}

/* fifo? in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5578(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5578,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* f_5069 */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5069,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k3181 in seconds->utc-time in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[108]);
/* posix-common.scm:462: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[106]+1)))(4,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* signal-unmask! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5541,2,t0,t1);}
/* posixwin.scm:1732: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[372],lf[0]);}

/* terminal-name in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5547(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5547,2,t0,t1);}
/* posixwin.scm:1733: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[373],lf[0]);}

/* f_5063 in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5063(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[25],*a=ab;
if(c!=8) C_bad_argc_2(c,8,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_5063,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5065,a[2]=t2,a[3]=((C_word)li147),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5100,a[2]=t2,a[3]=t8,a[4]=t9,a[5]=t6,a[6]=t3,a[7]=t10,a[8]=t1,a[9]=t11,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm:1629: chkstrlst */
t14=t11;
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5132,a[2]=t9,a[3]=t8,a[4]=t13,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1632: ##sys#shell-command-arguments */
t16=*((C_word*)lf[316]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,((C_word*)t8)[1]);}}

/* f_5065 */
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5065,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5069,a[2]=((C_word*)t0)[2],a[3]=((C_word)li145),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5078,a[2]=t7,a[3]=t4,a[4]=((C_word)li146),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_5078(t9,t1,t5);}

/* file-read-access? in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4191(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4191,3,t0,t1,t2);}
/* posixwin.scm:1326: check */
f_4171(t1,t2,C_fix((C_word)2),lf[268]);}

/* file-write-access? in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4197,3,t0,t1,t2);}
/* posixwin.scm:1327: check */
f_4171(t1,t2,C_fix((C_word)4),lf[269]);}

/* unmap-file-from-memory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5553(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5553,2,t0,t1);}
/* posixwin.scm:1734: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[374],lf[0]);}

/* user-information in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5559(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5559,2,t0,t1);}
/* posixwin.scm:1735: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[375],lf[0]);}

/* signal-masked? in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5535,2,t0,t1);}
/* posixwin.scm:1731: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[371],lf[0]);}

/* k5052 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1600: string-intersperse */
t2=*((C_word*)lf[323]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4188 in check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1323: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4185 in check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4186,2,t0,t1);}
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* posixwin.scm:1324: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}}

/* for-each-loop1298 */
static void C_fcall f_5078(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5078,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5087,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posixwin.scm:1626: g1299 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* seconds->utc-time in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3178(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3178r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3178r(t0,t1,t2);}}

static void C_ccall f_3178r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3183,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:460: current-seconds */
t4=*((C_word*)lf[107]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[108]);
/* posix-common.scm:462: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[106]+1)))(4,*((C_word*)lf[106]+1),t1,t4,C_SCHEME_TRUE);}}

/* $quote-args-list in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4559(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4559,NULL,3,t1,t2,t3);}
if(C_truep(t3)){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4564,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4599,a[2]=t6,a[3]=t4,a[4]=((C_word)li130),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4599(t8,t1,t2,C_SCHEME_END_OF_LIST);}}

/* ##sys#stat in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2189(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2189,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2193,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;
f_2193(2,t7,C_fstat(t2));}
else{
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2216,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2222,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2225,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:163: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t9,t2);}
else{
/* posix-common.scm:169: ##sys#signal-hook */
t7=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[15],t5,lf[16],t2);}}}

/* k2182 in k2176 in posix-error in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[2],*((C_word*)lf[4]+1),((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k2185 in k2176 in posix-error in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:120: string-append */
t2=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[6],t1);}

/* k3160 in seconds->local-time in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[105]);
/* posix-common.scm:458: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[106]+1)))(4,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* f_4564 in $quote-args-list in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4564(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4564,3,t0,t1,t2);}
t3=C_i_string_length(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4572,a[2]=t3,a[3]=t2,a[4]=((C_word)li128),tmp=(C_word)a,a+=5,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4572(t4,C_fix(0)));}

/* k5040 in k5037 in k5034 in k5031 in k5028 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1604: c-process */
t2=((C_word*)t0)[2];
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t1);}

/* k2192 in stat in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:173: posix-error */
t2=lf[3];
f_2173(6,t2,((C_word*)t0)[3],lf[10],((C_word*)t0)[4],lf[11],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}}

/* loop */
static C_word C_fcall f_4572(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return(C_SCHEME_FALSE);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t1);
if(C_truep(C_u_i_char_whitespacep(t3))){
return(C_SCHEME_TRUE);}
else{
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}}

/* f_3199 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3199(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3199,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_integer_argumentp(t2);
t5=stub479(t3,t4);
/* posix-common.scm:465: ##sys#peek-c-string */
t6=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* f_2164 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2164,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=stub65(t3,t4);
/* posix-common.scm:116: ##sys#peek-c-string */
t6=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* f_4648 in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4648,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4656,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t7=C_i_foreign_string_argumentp(t3);
/* posixwin.scm:1513: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t6,t7);}
else{
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub1097(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,t7));}}

/* ##sys#process-wait in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5248(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5248,4,t0,t1,t2,t3);}
if(C_truep(C_process_wait(t2,t3))){
/* posixwin.scm:1650: values */
C_values(5,0,t1,t2,C_SCHEME_TRUE,C_fix((C_word)C_exstatus));}
else{
/* posixwin.scm:1651: values */
C_values(5,0,t1,C_fix(-1),C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2164,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate(&lf[3] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2173,a[2]=t2,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#posix-error ...) */,lf[3]);
t5=C_mutate(&lf[9] /* (set! ##sys#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2189,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[17]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2230,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2250,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5675,a[2]=((C_word)li207),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5680,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:186: getter-with-setter */
t10=*((C_word*)lf[398]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t8,t9,lf[403]);}

/* k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2176 in posix-error in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2186,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:120: strerror */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* sleep in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5260,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1375(C_SCHEME_UNDEFINED,t3));}

/* k4654 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1097(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* posix-error in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_2173r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2173r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2173r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2177,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:119: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}

/* k4165 in change-file-mode in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4166,2,t0,t1);}
t2=C_chmod(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1313: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4168 in change-file-mode in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1312: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[266]);}

/* get-host-name in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5267,2,t0,t1);}
if(C_truep(C_get_hostname())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
/* posixwin.scm:1664: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[327],lf[328]);}}

/* process-wait in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_3340r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3340r(t0,t1,t2);}}

static void C_ccall f_3340r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a=C_alloc(9);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t11=(C_truep(t4)?t4:C_fix(-1));
t12=C_i_check_exact_2(t11,lf[122]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3360,a[2]=t11,a[3]=t8,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3365,a[2]=t11,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:520: ##sys#call-with-values */
C_call_with_values(4,0,t1,t13,t14);}

/* k4768 in process-execute in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
t2=C_execve(t1);
/* posixwin.scm:1545: $exec-teardown */
f_4738(((C_word*)t0)[3],lf[308],lf[309],((C_word*)t0)[4],t2);}
else{
t2=C_execvp(t1);
/* posixwin.scm:1545: $exec-teardown */
f_4738(((C_word*)t0)[3],lf[308],lf[309],((C_word*)t0)[4],t2);}}

/* k3010 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:419: glob */
t2=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_3013 in k2975 in k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in ... */
static void C_ccall f_3013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3013,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k2153 in k2151 */
static void C_ccall f_2154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2155 in k2153 in k2151 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* system-information in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5279,2,t0,t1);}
if(C_truep(C_sysinfo())){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5289,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5300,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1674: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t2);}}

/* current-process-id in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3334,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fudge(C_fix(33)));}

/* k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3332,2,t0,t1);}
t2=C_mutate((C_word*)lf[120]+1 /* (set! signal-handler ...) */,t1);
t3=C_mutate((C_word*)lf[121]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3334,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[122]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3340,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[126]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t6=C_mutate((C_word*)lf[127]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t7=C_mutate((C_word*)lf[128]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t8=C_mutate((C_word*)lf[129]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t9=C_mutate((C_word*)lf[130]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDWR));
t10=C_mutate((C_word*)lf[131]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t11=C_mutate((C_word*)lf[132]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t12=C_mutate((C_word*)lf[133]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t13=C_mutate((C_word*)lf[134]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t14=C_mutate((C_word*)lf[135]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t15=C_mutate((C_word*)lf[136]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t16=C_mutate((C_word*)lf[137]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t17=C_mutate((C_word*)lf[138]+1 /* (set! open/noinherit ...) */,C_fix((C_word)O_NOINHERIT));
t18=C_mutate((C_word*)lf[139]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IREAD));
t19=C_mutate((C_word*)lf[140]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWRITE));
t20=C_mutate((C_word*)lf[141]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IEXEC));
t21=C_mutate((C_word*)lf[142]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IREAD));
t22=C_mutate((C_word*)lf[143]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWRITE));
t23=C_mutate((C_word*)lf[144]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IEXEC));
t24=C_mutate((C_word*)lf[145]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IREAD));
t25=C_mutate((C_word*)lf[146]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWRITE));
t26=C_mutate((C_word*)lf[147]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IEXEC));
t27=C_mutate((C_word*)lf[148]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t28=C_mutate((C_word*)lf[149]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t29=C_mutate((C_word*)lf[150]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t30=C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IREAD));
t31=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),t30);
t32=C_mutate((C_word*)lf[151]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3430,a[2]=t31,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp));
t33=C_mutate((C_word*)lf[153]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3462,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[155]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3480,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[158]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3519,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[161]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3554,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[163]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t38=C_mutate((C_word*)lf[164]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t39=C_mutate((C_word*)lf[165]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t40=C_mutate((C_word*)lf[35]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3586,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3591,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp);
t42=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3600,a[2]=((C_word*)t0)[2],a[3]=t41,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1040: stat-type */
t43=t41;
((C_proc3)(void*)(*((C_word*)t43+1)))(3,t43,t42,lf[37]);}

/* seconds->local-time in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3157(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3157r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3157r(t0,t1,t2);}}

static void C_ccall f_3157r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3162,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:456: current-seconds */
t4=*((C_word*)lf[107]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[105]);
/* posix-common.scm:458: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[106]+1)))(4,*((C_word*)lf[106]+1),t1,t4,C_SCHEME_FALSE);}}

/* k2151 */
static void C_ccall f_2152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2154,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3003 in k2998 */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:420: action */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:419: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2927(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k5291 in k5288 in system-information in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osver),C_fix(0));}

/* k3001 in k2998 */
static void C_ccall f_3002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:419: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2927(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5294 in k5291 in k5288 in system-information in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_processor),C_fix(0));}

/* k5288 in system-information in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5292,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osrel),C_fix(0));}

/* f_3365 in process-wait in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3365,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:522: posix-error */
t6=lf[3];
f_2173(6,t6,t1,lf[124],lf[122],lf[125],((C_word*)t0)[2]);}
else{
/* posix-common.scm:523: values */
C_values(5,0,t1,t2,t3,t4);}}

/* k2296 in file-type in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[27]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[28]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[29]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[30]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[31]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[32]);}
else{
t3=C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[33]:lf[27]));}}}}}}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_3360 in process-wait in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3360,2,t0,t1);}
/* posix-common.scm:520: ##sys#process-wait */
t2=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5028 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixwin.scm:1606: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[321]+1)))(6,*((C_word*)lf[321]+1),t2,((C_word*)t0)[11],C_fix(0),C_SCHEME_FALSE,lf[322]);}

/* k5022 in k4996 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1616: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[124],((C_word*)t0)[3],lf[320],((C_word*)t0)[4]);}

/* k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3037,2,t0,t1);}
if(C_truep((C_truep(C_i_equalp(t1,lf[88]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t1,lf[89]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posix-common.scm:413: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2927(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:414: symbolic-link? */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}}

/* k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3031,2,t0,t1);}
t2=(C_truep(t1)?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2965,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2968,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:415: pproc */
t5=((C_word*)t0)[9];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[7]);}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2977,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:416: lproc */
t4=((C_word*)t0)[11];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[7]);}}

/* k4158 in k4165 in change-file-mode in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1314: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[10],lf[266],lf[267],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5297 in k5294 in k5291 in k5288 in system-information in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5298,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list5(&a,5,lf[330],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1));}

/* k3455 in k3433 in file-open in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:970: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[151]);}

/* k4713 in $exec-setup in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_block_size(t1);
/* posixwin.scm:1529: setarg */
t4=((C_word*)t0)[8];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,C_fix(0),t1,t3);}

/* k4718 in k4715 in k4713 in $exec-setup in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1531: build-exec-argvec */
t3=((C_word*)t0)[5];
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}

/* k3449 in k3442 in k3433 in file-open in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:973: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[10],lf[151],lf[152],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4715 in k4713 in $exec-setup in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4717,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4730,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[9])){
/* posixwin.scm:1530: $quote-args-list */
f_4559(t3,((C_word*)t0)[9],((C_word*)t0)[10]);}
else{
/* posixwin.scm:1530: build-exec-argvec */
t4=((C_word*)t0)[5];
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[8],C_fix(1));}}

/* k3023 in k2975 in k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in ... */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:421: action */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:421: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2927(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k3021 in k2975 in k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in ... */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:421: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2927(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3442 in k3433 in file-open in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3443,2,t0,t1);}
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3445,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3450,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:972: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k3444 in k3442 in k3433 in file-open in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4726 in k4720 in k4718 in k4715 in k4713 in $exec-setup in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1533: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4720 in k4718 in k4715 in k4713 in $exec-setup in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4721,2,t0,t1);}
t2=C_flushall();
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1533: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[4]);}

/* check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4171(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4171,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4186,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4189,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1323: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t7,t2);}

/* k4178 in k4185 in check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_3117 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3117,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_3111 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3111,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_3114 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3114,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k3897 in open-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3898,2,t0,t1);}
t2=open_binary_output_pipe(&a,1,t1);
/* posixwin.scm:1146: check */
f_3816(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* $exec-teardown in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4738(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4738,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4742,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:1536: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}

/* k4729 in k4715 in k4713 in $exec-setup in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1530: build-exec-argvec */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],C_fix(1));}

/* change-file-mode in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4145,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[266]);
t5=C_i_check_exact_2(t3,lf[266]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4166,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4169,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1312: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t7,t2);}

/* k3881 in open-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1146: check */
f_3816(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k3888 in open-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3889,2,t0,t1);}
t2=open_text_output_pipe(&a,1,t1);
/* posixwin.scm:1146: check */
f_3816(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* file-close in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3462,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[153]);
t4=C_close(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3474,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:980: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4741 in $exec-teardown in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_free_exec_args();
t3=C_free_exec_env();
t4=C_eqp(((C_word*)t0)[2],C_fix(-1));
if(C_truep(t4)){
/* posixwin.scm:1540: ##sys#error */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4991,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=((*(int *)C_data_pointer(t2))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(1));
t5=((*(int *)C_data_pointer(t4))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t6=C_a_i_bytevector(&a,1,C_fix(1));
t7=((*(int *)C_data_pointer(t6))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t8=C_a_i_bytevector(&a,1,C_fix(1));
t9=((*(int *)C_data_pointer(t8))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4997,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t8,a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=((C_word*)t0)[5],a[9]=t6,a[10]=((C_word*)t0)[6],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[7],a[3]=t10,a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[3],a[9]=t8,a[10]=t6,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* posixwin.scm:1605: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[321]+1)))(6,*((C_word*)lf[321]+1),t11,t2,C_fix(0),C_SCHEME_FALSE,lf[322]);}

/* k4996 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4997,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm:1610: open-input-file* */
t3=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[9]))));}
else{
t3=t2;
f_5006(2,t3,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1615: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t2);}}

/* k2236 in file-stat in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2237,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),*((C_word*)lf[18]+1),*((C_word*)lf[19]+1)));}

/* initialize-groups in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5439(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5439,2,t0,t1);}
/* posixwin.scm:1715: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[355],lf[0]);}

/* file-stat in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2230(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2230r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2230r(t0,t1,t2,t3);}}

static void C_ccall f_2230r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:178: ##sys#stat */
f_2189(t6,t2,t5,C_SCHEME_TRUE,lf[17]);}

/* k2886 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:386: make-pathname */
t2=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* group-information in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5433,2,t0,t1);}
/* posixwin.scm:1714: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[354],lf[0]);}

/* k2880 in k2877 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2881,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* ##sys#process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...){
C_word tmp;
C_word t9;
va_list v;
C_word *a,c2=c;
C_save_rest(t8,c2,9);
if(c<9) C_bad_min_argc_2(c,9,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr9r,(void*)f_4984r,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
else{
a=C_alloc((c-9)*3);
t9=C_restore_rest(a,C_rest_count(0));
f_4984r(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}}

static void C_ccall f_4984r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a=C_alloc(15);
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4991,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t6,a[6]=t2,a[7]=((C_word*)t0)[2],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5053,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
t14=C_a_i_cons(&a,2,t3,t4);
/* posixwin.scm:1600: $quote-args-list */
f_4559(t13,t14,t11);}

/* k2877 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2881,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* posix-common.scm:387: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2853(t4,t2,t3);}

/* memory-mapped-file-pointer in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5445(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5445,2,t0,t1);}
/* posixwin.scm:1716: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[356],lf[0]);}

/* process-fork in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5457(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5457,2,t0,t1);}
/* posixwin.scm:1718: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[358],lf[0]);}

/* f_2872 in k2867 in loop in k2850 in k2844 */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2872,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2878,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2887,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:386: irregex-match-substring */
t5=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* $exec-setup in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4708(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4708,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t3,t2);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4714,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=t6,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1528: pathname-strip-directory */
t9=*((C_word*)lf[306]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}

/* k2867 in loop in k2850 in k2844 */
static void C_ccall f_2868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2868,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:378: g355 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* posix-common.scm:388: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2853(t4,((C_word*)t0)[5],t3);}}

/* open-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3870(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3870r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3870r(t0,t1,t2,t3);}}

static void C_ccall f_3870r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(10);
t4=C_i_check_string_2(t2,lf[186]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[183]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3883,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[183]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3889,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1149: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t9,t2,lf[186]);}
else{
t9=C_eqp(t6,lf[184]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3898,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1150: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t10,t2,lf[186]);}
else{
/* posixwin.scm:1124: ##sys#error */
t10=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[185],t6);}}}

/* parent-process-id in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5451(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5451,2,t0,t1);}
/* posixwin.scm:1717: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[357],lf[0]);}

/* process-signal in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5469(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5469,2,t0,t1);}
/* posixwin.scm:1720: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[360],lf[0]);}

/* file-size in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2276(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2276,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2280,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:203: ##sys#stat */
f_2189(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[25]);}

/* k2273 in file-permissions in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* k3860 in open-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3861,2,t0,t1);}
t2=open_binary_input_pipe(&a,1,t1);
/* posixwin.scm:1136: check */
f_3816(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* process-group-id in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5463,2,t0,t1);}
/* posixwin.scm:1719: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[359],lf[0]);}

/* file-permissions in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2270,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2274,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:202: ##sys#stat */
f_2189(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_posix_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3144)){
C_save(t1);
C_rereclaim2(3144*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,404);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000/this function is not available on this platform");
lf[2]=C_h_intern(&lf[2],17,"\003syspeek-c-string");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_h_intern(&lf[5],13,"string-append");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[7]=C_h_intern(&lf[7],16,"\003sysupdate-errno");
lf[8]=C_h_intern(&lf[8],15,"\003sysposix-error");
lf[10]=C_h_intern(&lf[10],11,"\000file-error");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[12]=C_h_intern(&lf[12],17,"\003sysmake-c-string");
lf[13]=C_h_intern(&lf[13],27,"\003sysplatform-fixup-pathname");
lf[14]=C_h_intern(&lf[14],20,"\003sysexpand-home-path");
lf[15]=C_h_intern(&lf[15],11,"\000type-error");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\052bad argument type - not a fixnum or string");
lf[17]=C_h_intern(&lf[17],9,"file-stat");
lf[18]=C_h_intern(&lf[18],16,"_stat_st_blksize");
lf[19]=C_h_intern(&lf[19],15,"_stat_st_blocks");
lf[20]=C_h_intern(&lf[20],22,"file-modification-time");
lf[21]=C_h_intern(&lf[21],16,"file-access-time");
lf[22]=C_h_intern(&lf[22],16,"file-change-time");
lf[23]=C_h_intern(&lf[23],10,"file-owner");
lf[24]=C_h_intern(&lf[24],16,"file-permissions");
lf[25]=C_h_intern(&lf[25],9,"file-size");
lf[26]=C_h_intern(&lf[26],9,"file-type");
lf[27]=C_h_intern(&lf[27],12,"regular-file");
lf[28]=C_h_intern(&lf[28],13,"symbolic-link");
lf[29]=C_h_intern(&lf[29],9,"directory");
lf[30]=C_h_intern(&lf[30],16,"character-device");
lf[31]=C_h_intern(&lf[31],12,"block-device");
lf[32]=C_h_intern(&lf[32],4,"fifo");
lf[33]=C_h_intern(&lf[33],6,"socket");
lf[34]=C_h_intern(&lf[34],13,"regular-file\077");
lf[35]=C_h_intern(&lf[35],14,"symbolic-link\077");
lf[36]=C_h_intern(&lf[36],13,"block-device\077");
lf[37]=C_h_intern(&lf[37],17,"character-device\077");
lf[38]=C_h_intern(&lf[38],5,"fifo\077");
lf[39]=C_h_intern(&lf[39],7,"socket\077");
lf[40]=C_h_intern(&lf[40],10,"directory\077");
lf[41]=C_h_intern(&lf[41],12,"fileno/stdin");
lf[42]=C_h_intern(&lf[42],13,"fileno/stdout");
lf[43]=C_h_intern(&lf[43],13,"fileno/stderr");
lf[44]=C_h_intern(&lf[44],7,"\000append");
lf[45]=C_h_intern(&lf[45],9,"\003syserror");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[52]=C_h_intern(&lf[52],13,"\003sysmake-port");
lf[53]=C_h_intern(&lf[53],21,"\003sysstream-port-class");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[55]=C_h_intern(&lf[55],6,"stream");
lf[56]=C_h_intern(&lf[56],16,"open-input-file\052");
lf[57]=C_h_intern(&lf[57],17,"open-output-file\052");
lf[58]=C_h_intern(&lf[58],12,"port->fileno");
lf[59]=C_h_intern(&lf[59],13,"\003sysport-data");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[62]=C_h_intern(&lf[62],25,"\003syspeek-unsigned-integer");
lf[63]=C_h_intern(&lf[63],19,"\003syscheck-open-port");
lf[64]=C_h_intern(&lf[64],16,"duplicate-fileno");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file-descriptor");
lf[66]=C_h_intern(&lf[66],17,"current-directory");
lf[67]=C_h_intern(&lf[67],16,"change-directory");
lf[68]=C_h_intern(&lf[68],13,"\003syssubstring");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[70]=C_h_intern(&lf[70],15,"\003sysmake-string");
lf[71]=C_h_intern(&lf[71],16,"delete-directory");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[73]=C_h_intern(&lf[73],11,"delete-file");
lf[74]=C_h_intern(&lf[74],8,"for-each");
lf[75]=C_h_intern(&lf[75],10,"find-files");
lf[76]=C_h_intern(&lf[76],9,"\000dotfiles");
lf[77]=C_h_intern(&lf[77],16,"\000follow-symlinks");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[79]=C_h_intern(&lf[79],16,"\003sysmake-pointer");
lf[80]=C_h_intern(&lf[80],4,"glob");
lf[81]=C_h_intern(&lf[81],18,"decompose-pathname");
lf[82]=C_h_intern(&lf[82],13,"make-pathname");
lf[83]=C_h_intern(&lf[83],23,"irregex-match-substring");
lf[84]=C_h_intern(&lf[84],13,"irregex-match");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[86]=C_h_intern(&lf[86],16,"\003sysglob->regexp");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[91]=C_h_intern(&lf[91],16,"\003sysdynamic-wind");
lf[92]=C_h_intern(&lf[92],13,"pathname-file");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\002\077\052");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[95]=C_h_intern(&lf[95],7,"irregex");
lf[96]=C_h_intern(&lf[96],8,"irregex\077");
lf[97]=C_h_intern(&lf[97],15,"\003sysget-keyword");
lf[98]=C_h_intern(&lf[98],6,"\000limit");
lf[99]=C_h_intern(&lf[99],5,"\000seed");
lf[100]=C_h_intern(&lf[100],7,"\000action");
lf[101]=C_h_intern(&lf[101],5,"\000test");
lf[102]=C_h_intern(&lf[102],18,"file-creation-mode");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[105]=C_h_intern(&lf[105],19,"seconds->local-time");
lf[106]=C_h_intern(&lf[106],18,"\003sysdecode-seconds");
lf[107]=C_h_intern(&lf[107],15,"current-seconds");
lf[108]=C_h_intern(&lf[108],17,"seconds->utc-time");
lf[109]=C_h_intern(&lf[109],15,"seconds->string");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[111]=C_h_intern(&lf[111],19,"local-time->seconds");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[113]=C_h_intern(&lf[113],3,"fp=");
lf[114]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[115]=C_h_intern(&lf[115],12,"time->string");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[118]=C_h_intern(&lf[118],19,"set-signal-handler!");
lf[119]=C_h_intern(&lf[119],17,"\003syssignal-vector");
lf[120]=C_h_intern(&lf[120],14,"signal-handler");
lf[121]=C_h_intern(&lf[121],18,"current-process-id");
lf[122]=C_h_intern(&lf[122],12,"process-wait");
lf[123]=C_h_intern(&lf[123],16,"\003sysprocess-wait");
lf[124]=C_h_intern(&lf[124],14,"\000process-error");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[126]=C_h_intern(&lf[126],8,"pipe/buf");
lf[127]=C_h_intern(&lf[127],11,"open/rdonly");
lf[128]=C_h_intern(&lf[128],11,"open/wronly");
lf[129]=C_h_intern(&lf[129],9,"open/rdwr");
lf[130]=C_h_intern(&lf[130],9,"open/read");
lf[131]=C_h_intern(&lf[131],10,"open/write");
lf[132]=C_h_intern(&lf[132],10,"open/creat");
lf[133]=C_h_intern(&lf[133],11,"open/append");
lf[134]=C_h_intern(&lf[134],9,"open/excl");
lf[135]=C_h_intern(&lf[135],10,"open/trunc");
lf[136]=C_h_intern(&lf[136],11,"open/binary");
lf[137]=C_h_intern(&lf[137],9,"open/text");
lf[138]=C_h_intern(&lf[138],14,"open/noinherit");
lf[139]=C_h_intern(&lf[139],10,"perm/irusr");
lf[140]=C_h_intern(&lf[140],10,"perm/iwusr");
lf[141]=C_h_intern(&lf[141],10,"perm/ixusr");
lf[142]=C_h_intern(&lf[142],10,"perm/irgrp");
lf[143]=C_h_intern(&lf[143],10,"perm/iwgrp");
lf[144]=C_h_intern(&lf[144],10,"perm/ixgrp");
lf[145]=C_h_intern(&lf[145],10,"perm/iroth");
lf[146]=C_h_intern(&lf[146],10,"perm/iwoth");
lf[147]=C_h_intern(&lf[147],10,"perm/ixoth");
lf[148]=C_h_intern(&lf[148],10,"perm/irwxu");
lf[149]=C_h_intern(&lf[149],10,"perm/irwxg");
lf[150]=C_h_intern(&lf[150],10,"perm/irwxo");
lf[151]=C_h_intern(&lf[151],9,"file-open");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[153]=C_h_intern(&lf[153],10,"file-close");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[155]=C_h_intern(&lf[155],9,"file-read");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[158]=C_h_intern(&lf[158],10,"file-write");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[161]=C_h_intern(&lf[161],12,"file-mkstemp");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[163]=C_h_intern(&lf[163],8,"seek/set");
lf[164]=C_h_intern(&lf[164],8,"seek/end");
lf[165]=C_h_intern(&lf[165],8,"seek/cur");
lf[166]=C_h_intern(&lf[166],18,"set-file-position!");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[169]=C_h_intern(&lf[169],5,"port\077");
lf[170]=C_h_intern(&lf[170],13,"\000bounds-error");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid negative port position");
lf[172]=C_h_intern(&lf[172],13,"file-position");
lf[173]=C_h_intern(&lf[173],16,"create-directory");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[175]=C_h_intern(&lf[175],16,"\003sysfile-exists\077");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[177]=C_h_intern(&lf[177],12,"string-split");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[182]=C_h_intern(&lf[182],15,"open-input-pipe");
lf[183]=C_h_intern(&lf[183],5,"\000text");
lf[184]=C_h_intern(&lf[184],7,"\000binary");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[186]=C_h_intern(&lf[186],16,"open-output-pipe");
lf[187]=C_h_intern(&lf[187],16,"close-input-pipe");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[189]=C_h_intern(&lf[189],20,"\003syscheck-input-port");
lf[190]=C_h_intern(&lf[190],17,"close-output-pipe");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[192]=C_h_intern(&lf[192],21,"\003syscheck-output-port");
lf[193]=C_h_intern(&lf[193],20,"call-with-input-pipe");
lf[194]=C_h_intern(&lf[194],21,"call-with-output-pipe");
lf[195]=C_h_intern(&lf[195],20,"with-input-from-pipe");
lf[196]=C_h_intern(&lf[196],18,"\003sysstandard-input");
lf[197]=C_h_intern(&lf[197],19,"with-output-to-pipe");
lf[198]=C_h_intern(&lf[198],19,"\003sysstandard-output");
lf[199]=C_h_intern(&lf[199],11,"create-pipe");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[201]=C_h_intern(&lf[201],11,"signal/term");
lf[202]=C_h_intern(&lf[202],10,"signal/int");
lf[203]=C_h_intern(&lf[203],10,"signal/fpe");
lf[204]=C_h_intern(&lf[204],10,"signal/ill");
lf[205]=C_h_intern(&lf[205],11,"signal/segv");
lf[206]=C_h_intern(&lf[206],11,"signal/abrt");
lf[207]=C_h_intern(&lf[207],12,"signal/break");
lf[208]=C_h_intern(&lf[208],11,"signal/alrm");
lf[209]=C_h_intern(&lf[209],11,"signal/chld");
lf[210]=C_h_intern(&lf[210],11,"signal/cont");
lf[211]=C_h_intern(&lf[211],10,"signal/hup");
lf[212]=C_h_intern(&lf[212],9,"signal/io");
lf[213]=C_h_intern(&lf[213],11,"signal/kill");
lf[214]=C_h_intern(&lf[214],11,"signal/pipe");
lf[215]=C_h_intern(&lf[215],11,"signal/prof");
lf[216]=C_h_intern(&lf[216],11,"signal/quit");
lf[217]=C_h_intern(&lf[217],11,"signal/stop");
lf[218]=C_h_intern(&lf[218],11,"signal/trap");
lf[219]=C_h_intern(&lf[219],11,"signal/tstp");
lf[220]=C_h_intern(&lf[220],10,"signal/urg");
lf[221]=C_h_intern(&lf[221],11,"signal/usr1");
lf[222]=C_h_intern(&lf[222],11,"signal/usr2");
lf[223]=C_h_intern(&lf[223],13,"signal/vtalrm");
lf[224]=C_h_intern(&lf[224],12,"signal/winch");
lf[225]=C_h_intern(&lf[225],11,"signal/xcpu");
lf[226]=C_h_intern(&lf[226],11,"signal/xfsz");
lf[227]=C_h_intern(&lf[227],12,"signals-list");
lf[228]=C_h_intern(&lf[228],10,"errno/perm");
lf[229]=C_h_intern(&lf[229],11,"errno/noent");
lf[230]=C_h_intern(&lf[230],10,"errno/srch");
lf[231]=C_h_intern(&lf[231],10,"errno/intr");
lf[232]=C_h_intern(&lf[232],8,"errno/io");
lf[233]=C_h_intern(&lf[233],12,"errno/noexec");
lf[234]=C_h_intern(&lf[234],10,"errno/badf");
lf[235]=C_h_intern(&lf[235],11,"errno/child");
lf[236]=C_h_intern(&lf[236],11,"errno/nomem");
lf[237]=C_h_intern(&lf[237],11,"errno/acces");
lf[238]=C_h_intern(&lf[238],11,"errno/fault");
lf[239]=C_h_intern(&lf[239],10,"errno/busy");
lf[240]=C_h_intern(&lf[240],11,"errno/exist");
lf[241]=C_h_intern(&lf[241],12,"errno/notdir");
lf[242]=C_h_intern(&lf[242],11,"errno/isdir");
lf[243]=C_h_intern(&lf[243],11,"errno/inval");
lf[244]=C_h_intern(&lf[244],11,"errno/mfile");
lf[245]=C_h_intern(&lf[245],11,"errno/nospc");
lf[246]=C_h_intern(&lf[246],11,"errno/spipe");
lf[247]=C_h_intern(&lf[247],10,"errno/pipe");
lf[248]=C_h_intern(&lf[248],11,"errno/again");
lf[249]=C_h_intern(&lf[249],10,"errno/rofs");
lf[250]=C_h_intern(&lf[250],10,"errno/nxio");
lf[251]=C_h_intern(&lf[251],10,"errno/2big");
lf[252]=C_h_intern(&lf[252],10,"errno/xdev");
lf[253]=C_h_intern(&lf[253],11,"errno/nodev");
lf[254]=C_h_intern(&lf[254],11,"errno/nfile");
lf[255]=C_h_intern(&lf[255],11,"errno/notty");
lf[256]=C_h_intern(&lf[256],10,"errno/fbig");
lf[257]=C_h_intern(&lf[257],11,"errno/mlink");
lf[258]=C_h_intern(&lf[258],9,"errno/dom");
lf[259]=C_h_intern(&lf[259],11,"errno/range");
lf[260]=C_h_intern(&lf[260],12,"errno/deadlk");
lf[261]=C_h_intern(&lf[261],17,"errno/nametoolong");
lf[262]=C_h_intern(&lf[262],11,"errno/nolck");
lf[263]=C_h_intern(&lf[263],11,"errno/nosys");
lf[264]=C_h_intern(&lf[264],14,"errno/notempty");
lf[265]=C_h_intern(&lf[265],11,"errno/ilseq");
lf[266]=C_h_intern(&lf[266],16,"change-file-mode");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[268]=C_h_intern(&lf[268],17,"file-read-access\077");
lf[269]=C_h_intern(&lf[269],18,"file-write-access\077");
lf[270]=C_h_intern(&lf[270],20,"file-execute-access\077");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file descriptor");
lf[281]=C_h_intern(&lf[281],6,"setenv");
lf[282]=C_h_intern(&lf[282],8,"unsetenv");
lf[283]=C_h_intern(&lf[283],25,"get-environment-variables");
lf[284]=C_h_intern(&lf[284],9,"substring");
lf[285]=C_h_intern(&lf[285],27,"local-timezone-abbreviation");
lf[286]=C_h_intern(&lf[286],5,"_exit");
lf[287]=C_h_intern(&lf[287],14,"terminal-port\077");
lf[288]=C_h_intern(&lf[288],13,"terminal-size");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[290]=C_h_intern(&lf[290],19,"set-buffering-mode!");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[292]=C_h_intern(&lf[292],5,"\000full");
lf[293]=C_h_intern(&lf[293],5,"\000line");
lf[294]=C_h_intern(&lf[294],5,"\000none");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[296]=C_h_intern(&lf[296],13,"spawn/overlay");
lf[297]=C_h_intern(&lf[297],10,"spawn/wait");
lf[298]=C_h_intern(&lf[298],12,"spawn/nowait");
lf[299]=C_h_intern(&lf[299],13,"spawn/nowaito");
lf[300]=C_h_intern(&lf[300],12,"spawn/detach");
lf[302]=C_h_intern(&lf[302],16,"\003sysfast-reverse");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[306]=C_h_intern(&lf[306],24,"pathname-strip-directory");
lf[308]=C_h_intern(&lf[308],15,"process-execute");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[310]=C_h_intern(&lf[310],13,"process-spawn");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot spawn process");
lf[312]=C_h_intern(&lf[312],17,"\003sysshell-command");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve system directory");
lf[314]=C_h_intern(&lf[314],24,"get-environment-variable");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\007COMSPEC");
lf[316]=C_h_intern(&lf[316],27,"\003sysshell-command-arguments");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\002/c");
lf[318]=C_h_intern(&lf[318],11,"process-run");
lf[319]=C_h_intern(&lf[319],11,"\003sysprocess");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[321]=C_h_intern(&lf[321],17,"\003sysmake-locative");
lf[322]=C_h_intern(&lf[322],8,"location");
lf[323]=C_h_intern(&lf[323],18,"string-intersperse");
lf[324]=C_h_intern(&lf[324],7,"process");
lf[325]=C_h_intern(&lf[325],8,"process\052");
lf[326]=C_h_intern(&lf[326],5,"sleep");
lf[327]=C_h_intern(&lf[327],13,"get-host-name");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[329]=C_h_intern(&lf[329],18,"system-information");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\007windows");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system-information");
lf[332]=C_h_intern(&lf[332],17,"current-user-name");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current user-name");
lf[334]=C_h_intern(&lf[334],17,"change-directory\052");
lf[335]=C_h_intern(&lf[335],5,"error");
lf[336]=C_h_intern(&lf[336],17,"change-file-owner");
lf[337]=C_h_intern(&lf[337],11,"create-fifo");
lf[338]=C_h_intern(&lf[338],14,"create-session");
lf[339]=C_h_intern(&lf[339],20,"create-symbolic-link");
lf[340]=C_h_intern(&lf[340],26,"current-effective-group-id");
lf[341]=C_h_intern(&lf[341],25,"current-effective-user-id");
lf[342]=C_h_intern(&lf[342],27,"current-effective-user-name");
lf[343]=C_h_intern(&lf[343],16,"current-group-id");
lf[344]=C_h_intern(&lf[344],15,"current-user-id");
lf[345]=C_h_intern(&lf[345],18,"map-file-to-memory");
lf[346]=C_h_intern(&lf[346],9,"file-link");
lf[347]=C_h_intern(&lf[347],9,"file-lock");
lf[348]=C_h_intern(&lf[348],18,"file-lock/blocking");
lf[349]=C_h_intern(&lf[349],11,"file-select");
lf[350]=C_h_intern(&lf[350],14,"file-test-lock");
lf[351]=C_h_intern(&lf[351],13,"file-truncate");
lf[352]=C_h_intern(&lf[352],11,"file-unlock");
lf[353]=C_h_intern(&lf[353],10,"get-groups");
lf[354]=C_h_intern(&lf[354],17,"group-information");
lf[355]=C_h_intern(&lf[355],17,"initialize-groups");
lf[356]=C_h_intern(&lf[356],26,"memory-mapped-file-pointer");
lf[357]=C_h_intern(&lf[357],17,"parent-process-id");
lf[358]=C_h_intern(&lf[358],12,"process-fork");
lf[359]=C_h_intern(&lf[359],16,"process-group-id");
lf[360]=C_h_intern(&lf[360],14,"process-signal");
lf[361]=C_h_intern(&lf[361],18,"read-symbolic-link");
lf[362]=C_h_intern(&lf[362],10,"set-alarm!");
lf[363]=C_h_intern(&lf[363],13,"set-group-id!");
lf[364]=C_h_intern(&lf[364],11,"set-groups!");
lf[365]=C_h_intern(&lf[365],21,"set-process-group-id!");
lf[366]=C_h_intern(&lf[366],19,"set-root-directory!");
lf[367]=C_h_intern(&lf[367],16,"set-signal-mask!");
lf[368]=C_h_intern(&lf[368],12,"set-user-id!");
lf[369]=C_h_intern(&lf[369],11,"signal-mask");
lf[370]=C_h_intern(&lf[370],12,"signal-mask!");
lf[371]=C_h_intern(&lf[371],14,"signal-masked\077");
lf[372]=C_h_intern(&lf[372],14,"signal-unmask!");
lf[373]=C_h_intern(&lf[373],13,"terminal-name");
lf[374]=C_h_intern(&lf[374],22,"unmap-file-from-memory");
lf[375]=C_h_intern(&lf[375],16,"user-information");
lf[376]=C_h_intern(&lf[376],17,"utc-time->seconds");
lf[377]=C_h_intern(&lf[377],12,"string->time");
lf[378]=C_h_intern(&lf[378],16,"errno/wouldblock");
lf[379]=C_h_intern(&lf[379],19,"memory-mapped-file\077");
lf[380]=C_h_intern(&lf[380],13,"map/anonymous");
lf[381]=C_h_intern(&lf[381],8,"map/file");
lf[382]=C_h_intern(&lf[382],9,"map/fixed");
lf[383]=C_h_intern(&lf[383],11,"map/private");
lf[384]=C_h_intern(&lf[384],10,"map/shared");
lf[385]=C_h_intern(&lf[385],10,"open/fsync");
lf[386]=C_h_intern(&lf[386],11,"open/noctty");
lf[387]=C_h_intern(&lf[387],13,"open/nonblock");
lf[388]=C_h_intern(&lf[388],9,"open/sync");
lf[389]=C_h_intern(&lf[389],10,"perm/isgid");
lf[390]=C_h_intern(&lf[390],10,"perm/isuid");
lf[391]=C_h_intern(&lf[391],10,"perm/isvtx");
lf[392]=C_h_intern(&lf[392],9,"prot/exec");
lf[393]=C_h_intern(&lf[393],9,"prot/none");
lf[394]=C_h_intern(&lf[394],9,"prot/read");
lf[395]=C_h_intern(&lf[395],10,"prot/write");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[398]=C_h_intern(&lf[398],18,"getter-with-setter");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\024(file-position port)");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\031(file-creation-mode mode)");
lf[401]=C_h_intern(&lf[401],26,"set-file-modification-time");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\032(file-modification-time f)");
C_register_lf2(lf,404,create_ptable());
t2=C_mutate(&lf[0] /* (set! c1417 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2152,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* read-symbolic-link in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5475(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5475,2,t0,t1);}
/* posixwin.scm:1721: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[361],lf[0]);}

/* check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_3816(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3816,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3820,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1126: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}

/* file-type in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2282(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2282r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2282r(t0,t1,t2,t3);}}

static void C_ccall f_2282r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_TRUE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2298,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:206: ##sys#stat */
f_2189(t12,t2,t5,t9,lf[26]);}

/* k3473 in file-close in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:981: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[153],lf[154],((C_word*)t0)[3]);}

/* k2279 in file-size in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2280,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_double_to_num(&a,C_statbuf.st_size));}

/* k2559 in k2557 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_2837 in conc-loop in glob in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2837,2,t0,t1);}
/* posix-common.scm:379: decompose-pathname */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* file-change-time in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2258,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2262,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:200: ##sys#stat */
f_2189(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);}

/* k2255 in file-access-time in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2256,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* set-alarm! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5481(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5481,2,t0,t1);}
/* posixwin.scm:1722: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[362],lf[0]);}

/* set-group-id! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5487(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5487,2,t0,t1);}
/* posixwin.scm:1723: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[363],lf[0]);}

/* set-process-group-id! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5499(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5499,2,t0,t1);}
/* posixwin.scm:1725: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[365],lf[0]);}

/* k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word ab[89],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2250,2,t0,t1);}
t2=C_mutate((C_word*)lf[20]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate((C_word*)lf[21]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2252,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[22]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2258,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[23]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2264,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[24]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[25]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2276,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[26]+1 /* (set! file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2282,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[34]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2366,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[35]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2375,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[36]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2384,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[37]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2393,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[38]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2402,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[39]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2411,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[40]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2420,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[41]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)STDIN_FILENO));
t17=C_mutate((C_word*)lf[42]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)STDOUT_FILENO));
t18=C_mutate((C_word*)lf[43]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)STDERR_FILENO));
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2432,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t24=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2468,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[56]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2482,a[2]=t22,a[3]=t20,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t26=C_mutate((C_word*)lf[57]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2495,a[2]=t22,a[3]=t20,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t27=C_mutate((C_word*)lf[58]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2508,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[64]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2552,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[66]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2575,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[71]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2608,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[29]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2693,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[80]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2817,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[75]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3092,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5647,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp);
t36=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5670,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:437: getter-with-setter */
t37=*((C_word*)lf[398]+1);
((C_proc5)(void*)(*((C_word*)t37+1)))(5,t37,t34,t35,t36,lf[400]);}

/* file-access-time in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2252,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2256,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:199: ##sys#stat */
f_2189(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);}

/* k5709 */
static void C_ccall f_5710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:191: g113 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4914 in k4902 in process-run in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1571: ##sys#shell-command-arguments */
t3=*((C_word*)lf[316]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4917 in k4914 in k4902 in process-run in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1571: process-spawn */
t2=*((C_word*)lf[310]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[298]+1),((C_word*)t0)[3],t1);}

/* k3830 in k3819 in check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* open-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3833(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3833r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3833r(t0,t1,t2,t3);}}

static void C_ccall f_3833r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(10);
t4=C_i_check_string_2(t2,lf[182]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[183]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3846,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[183]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3852,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1139: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t9,t2,lf[182]);}
else{
t9=C_eqp(t6,lf[184]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3861,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1140: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t10,t2,lf[182]);}
else{
/* posixwin.scm:1124: ##sys#error */
t10=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[185],t6);}}}

/* k2267 in file-owner in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* conc-loop in glob in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2823(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2823,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2837,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2842,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:378: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* file-owner in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2264,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2268,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:201: ##sys#stat */
f_2189(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[23]);}

/* set-groups! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5493(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5493,2,t0,t1);}
/* posixwin.scm:1724: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[364],lf[0]);}

/* k2546 in k2511 */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2547,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posix-common.scm:289: posix-error */
t2=lf[3];
f_2173(6,t2,((C_word*)t0)[2],lf[15],lf[58],lf[60],((C_word*)t0)[3]);}
else{
t2=C_C_fileno(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:287: posix-error */
t4=lf[3];
f_2173(6,t4,t3,lf[10],lf[58],lf[61],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k3491 in k3489 in k3487 in file-read in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3492,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k2261 in file-change-time in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2262,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* k3489 in k3487 in file-read in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3490,2,t0,t1);}
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3500,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:992: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list2(&a,2,((C_word*)t0)[3],t2));}}

/* process-execute in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4753(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4753r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4753r(t0,t1,t2,t3);}}

static void C_ccall f_4753r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4769,a[2]=t9,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1544: $exec-setup */
t17=lf[305];
f_4708(t17,t16,lf[308],t2,t5,t9,t13);}

/* k3819 in check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3820,2,t0,t1);}
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posixwin.scm:1128: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],lf[180],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1129: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(6,*((C_word*)lf[52]+1),t2,((C_word*)t0)[5],*((C_word*)lf[53]+1),lf[181],lf[55]);}}

/* glob in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_2817r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2817r(t0,t1,t2);}}

static void C_ccall f_2817r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2823,a[2]=t4,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2823(t6,t1,t2);}

/* file-read in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3480r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3480r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3480r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(5);
t5=C_i_check_exact_2(t2,lf[155]);
t6=C_i_check_exact_2(t3,lf[155]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3488,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t4;
t9=t7;
f_3488(2,t9,C_u_i_car(t8));}
else{
t8=t3;
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t7,t8,C_make_character(32));}}

/* k2557 */
static void C_fcall f_2558(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2558,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2560,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:300: posix-error */
t3=lf[3];
f_2173(6,t3,t2,lf[10],lf[64],lf[65],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k3487 in file-read in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3490,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_byteblockp(t1))){
t3=t2;
f_3490(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm:989: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[15],lf[155],lf[157],t1);}}
else{
/* posixwin.scm:989: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[15],lf[155],lf[157],t1);}}

/* f_2552 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2552(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2552r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2552r(t0,t1,t2,t3);}}

static void C_ccall f_2552r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[64]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2558,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_2558(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[64]);
t8=t5;
f_2558(t8,C_dup2(t2,t6));}}

/* k3433 in file-open in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_3434(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3434,NULL,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[2],lf[151]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[151]);
t4=C_i_check_exact_2(t1,lf[151]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3443,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3456,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:970: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t6,((C_word*)t0)[2]);}

/* file-open in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3430r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3430r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3430r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3434,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_3434(t7,C_u_i_car(t6));}
else{
t6=t5;
f_3434(t6,((C_word*)t0)[2]);}}

/* directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2693r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2693r(t0,t1,t2);}}

static void C_ccall f_2693r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2697,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:343: current-directory */
t4=*((C_word*)lf[66]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=t3;
f_2697(2,t4,C_i_car(t2));}}

/* k4902 in process-run in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4903(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4903,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm:1570: process-spawn */
t2=*((C_word*)lf[310]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[298]+1),((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1571: ##sys#shell-command */
t3=*((C_word*)lf[312]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2697,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_check_string_2(t1,lf[29]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2707,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t9,C_fix(256),C_make_character(32));}

/* k2672 in for-each-loop264 in k2637 in k2632 in delete-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2664(t3,((C_word*)t0)[4],t2);}

/* f_4924 in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word ab[10],*a=ab;
if(c!=10) C_bad_argc_2(c,10,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_4924,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4929,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t7,a[7]=t8,a[8]=t9,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
t11=C_i_foreign_string_argumentp(t2);
/* posixwin.scm:1594: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t10,t11);}
else{
t11=t10;
f_4929(2,t11,C_SCHEME_FALSE);}}

/* k4927 */
static void C_ccall f_4929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4929,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
t4=C_i_foreign_string_argumentp(t2);
/* posixwin.scm:1594: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t3,t4);}
else{
t4=t3;
f_4933(2,t4,C_SCHEME_FALSE);}}

/* k5011 in k5008 in k5005 in k4996 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1609: values */
C_values(6,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[5]))),t1);}

/* file-select in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5403(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5403,2,t0,t1);}
/* posixwin.scm:1709: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[349],lf[0]);}

/* k2511 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2512,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(lf[33],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2524,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:283: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:284: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),t4,((C_word*)t0)[2],C_fix(0));}}

/* file-test-lock in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5409(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5409,2,t0,t1);}
/* posixwin.scm:1710: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[350],lf[0]);}

/* for-each-loop264 in k2637 in k2632 in delete-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2664(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2664,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2673,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:328: g265 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* current-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_2575r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2575r(t0,t1,t2);}}

static void C_ccall f_2575r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
if(C_truep(t4)){
/* posix-common.scm:308: change-directory */
t5=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2588,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t5,C_fix(1024),C_make_character(32));}}

/* k2505 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:273: check */
f_2468(((C_word*)t0)[4],lf[57],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* f_2508 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2508(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2508,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2512,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:277: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(4,*((C_word*)lf[63]+1),t3,t2,lf[58]);}

/* file-truncate in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5415(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5415,2,t0,t1);}
/* posixwin.scm:1711: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[351],lf[0]);}

/* k4500 in k4498 in set-buffering-mode! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4501(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4501,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4504,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,lf[292]);
if(C_truep(t4)){
t5=t3;
f_4504(2,t5,C_fix((C_word)_IOFBF));}
else{
t5=C_eqp(t2,lf[293]);
if(C_truep(t5)){
t6=C_fix((C_word)_IOLBF);
t7=t3;
f_4504(2,t7,t6);}
else{
t6=C_eqp(t2,lf[294]);
if(C_truep(t6)){
t7=t3;
f_4504(2,t7,C_fix((C_word)_IONBF));}
else{
/* posixwin.scm:1459: ##sys#error */
t7=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t3,lf[290],lf[295],((C_word*)t0)[2],((C_word*)t0)[4]);}}}}

/* k5034 in k5031 in k5028 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixwin.scm:1606: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[321]+1)))(6,*((C_word*)lf[321]+1),t2,((C_word*)t0)[11],C_fix(0),C_SCHEME_FALSE,lf[322]);}

/* k4502 in k4500 in k4498 in set-buffering-mode! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4504,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[290]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4512,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[4],C_fix(7));
t5=C_eqp(lf[55],t4);
if(C_truep(t5)){
t6=C_setvbuf(((C_word*)t0)[4],t1,((C_word*)t0)[2]);
t7=t3;
f_4512(t7,C_fixnum_lessp(t6,C_fix(0)));}
else{
t6=t3;
f_4512(t6,C_SCHEME_TRUE);}}

/* k5037 in k5034 in k5031 in k5028 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t3=(C_truep(((C_word*)t0)[9])?C_fix(0):C_fix(1));
t4=(C_truep(((C_word*)t0)[10])?C_fix(0):C_fix(2));
if(C_truep(((C_word*)t0)[11])){
/* posixwin.scm:1607: + */
C_plus(5,0,t2,t3,t4,C_fix(0));}
else{
/* posixwin.scm:1607: + */
C_plus(5,0,t2,t3,t4,C_fix(4));}}

/* k5031 in k5028 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixwin.scm:1606: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[321]+1)))(6,*((C_word*)lf[321]+1),t2,((C_word*)t0)[11],C_fix(0),C_SCHEME_FALSE,lf[322]);}

/* get-groups in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5427,2,t0,t1);}
/* posixwin.scm:1713: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[353],lf[0]);}

/* file-unlock in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5421(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5421,2,t0,t1);}
/* posixwin.scm:1712: error */
t2=*((C_word*)lf[335]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[352],lf[0]);}

/* k5008 in k5005 in k4996 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:1613: open-input-file* */
t3=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6]))));}
else{
/* posixwin.scm:1609: values */
C_values(6,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))),C_SCHEME_FALSE);}}

/* k5005 in k4996 in k4990 in process in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5009,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posixwin.scm:1611: open-output-file* */
t3=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[7]))));}
else{
t3=t2;
f_5009(2,t3,C_SCHEME_FALSE);}}

/* k2523 in k2511 */
static void C_ccall f_2524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(0)));}

/* k4931 in k4927 */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
t2=((C_word*)t0)[2];
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
t5=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t6=((C_word*)t0)[4];
t7=(C_truep(t6)?C_i_foreign_pointer_argumentp(t6):C_SCHEME_FALSE);
t8=((C_word*)t0)[5];
t9=(C_truep(t8)?C_i_foreign_pointer_argumentp(t8):C_SCHEME_FALSE);
t10=((C_word*)t0)[6];
t11=(C_truep(t10)?C_i_foreign_pointer_argumentp(t10):C_SCHEME_FALSE);
t12=C_i_foreign_fixnum_argumentp(((C_word*)t0)[7]);
t13=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,stub1201(C_SCHEME_UNDEFINED,((C_word*)t0)[9],t1,t3,t5,t7,t9,t11,t12));}

/* k3851 in open-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3852,2,t0,t1);}
t2=open_text_input_pipe(&a,1,t1);
/* posixwin.scm:1136: check */
f_3816(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k3844 in open-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1136: check */
f_3816(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* k2531 in k2546 in k2511 */
static void C_ccall f_2532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* rmdir in delete-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2615(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2615,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2619,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:322: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t3,t2);}

/* k2618 in rmdir in delete-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_rmdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posix-common.scm:324: posix-error */
t4=lf[3];
f_2173(6,t4,((C_word*)t0)[2],lf[10],lf[71],lf[72],((C_word*)t0)[3]);}}

/* k2587 in current-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2588,2,t0,t1);}
t2=C_curdir(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2590,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:312: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}

/* k4412 in k4421 in k4418 in scan in k4388 in loop in get-environment-variables in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4413,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* loop in k2850 in k2844 */
static void C_fcall f_2853(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2853,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* posix-common.scm:382: conc-loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2823(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2868,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* posix-common.scm:383: irregex-match */
t5=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[6],t4);}}

/* k2850 in k2844 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2851,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2853(t5,((C_word*)t0)[6],t1);}

/* k4418 in scan in k4388 in loop in get-environment-variables in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4422,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=C_block_size(((C_word*)t0)[6]);
/* posixwin.scm:1416: substring */
t5=*((C_word*)lf[284]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,((C_word*)t0)[6],t3,t4);}

/* delete-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2608r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2608r(t0,t1,t2,t3);}}

static void C_ccall f_2608r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2615,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_string_2(t2,lf[71]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2633,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:326: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t8,t2);}

/* k2221 in stat in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:161: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2224 in stat in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:162: ##sys#platform-fixup-pathname */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),((C_word*)t0)[2],t1);}

/* k4421 in k4418 in scan in k4388 in loop in get-environment-variables in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4422,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4413,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* posixwin.scm:1416: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4385(t5,t3,t4);}

/* k2589 in k2587 in current-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:314: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[68]+1)))(5,*((C_word*)lf[68]+1),((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2]);}
else{
/* posix-common.scm:315: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],lf[66],lf[69]);}}

/* k2844 */
static void C_ccall f_2845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=((C_word*)t0)[4];
/* posix-common.scm:381: directory */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_TRUE);}
else{
/* posix-common.scm:381: directory */
t3=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[85],C_SCHEME_TRUE);}}

/* f_2842 in conc-loop in glob in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2842,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2905,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t7=t3;
/* posix-common.scm:380: make-pathname */
t8=*((C_word*)lf[82]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}
else{
/* posix-common.scm:380: make-pathname */
t7=*((C_word*)lf[82]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,C_SCHEME_FALSE,lf[87],t4);}}

/* k2215 in stat in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2193(2,t2,(C_truep(((C_word*)t0)[3])?C_lstat(t1):C_stat(t1)));}

/* k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3106,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
t8=((C_word*)t0)[8];
t9=C_i_check_string_2(t3,lf[75]);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2917,a[2]=t1,a[3]=t5,a[4]=t11,a[5]=t2,a[6]=t6,a[7]=t8,a[8]=t3,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t7)){
if(C_truep(C_fixnump(t7))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3086,a[2]=t11,a[3]=t7,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
t14=t12;
f_2917(t14,t13);}
else{
t13=t12;
f_2917(t13,t7);}}
else{
t13=t12;
f_2917(t13,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3077,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));}}

/* k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3114,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t2,lf[76],((C_word*)t0)[7],t3);}

/* k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3111,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t2,lf[77],((C_word*)t0)[8],t3);}

/* k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3117,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t2,lf[98],((C_word*)t0)[6],t3);}

/* k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3137,2,t0,t1);}
t2=C_mutate((C_word*)lf[102]+1 /* (set! file-creation-mode ...) */,t1);
t3=C_mutate(&lf[103] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3139,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[105]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3157,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[108]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3178,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3199,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
t7=C_mutate((C_word*)lf[109]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3208,a[2]=t6,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[111]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3243,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3258,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3264,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
t11=C_mutate((C_word*)lf[115]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3270,a[2]=t10,a[3]=t9,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[118]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3318,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5639,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:504: getter-with-setter */
t15=*((C_word*)lf[398]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,*((C_word*)lf[118]+1));}

/* f_3132 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3132,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k2657 in k2637 in k2632 in delete-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:339: rmdir */
f_2615(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f_3130 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3130,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3132,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));}

/* k2652 in k2646 */
static void C_ccall f_2654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:333: g275 */
f_2615(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=*((C_word*)lf[73]+1);
/* posix-common.scm:333: g275 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* check-time-vector in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_3139(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3139,NULL,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:454: ##sys#error */
t6=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[104],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_3125 */
static void C_ccall f_3125(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3125,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* f_3123 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3123,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3125,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));}

/* f_3120 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3120,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* k2646 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2648,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[73]+1);
/* posix-common.scm:333: g275 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2654,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:335: directory? */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* f_2639 in k2637 in k2632 in delete-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2639(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2639,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2648,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:334: symbolic-link? */
t4=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2637 in k2632 in delete-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2639,a[2]=((C_word*)t0)[2],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[74]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2664,a[2]=t6,a[3]=t2,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2664(t8,t4,t1);}

/* k2632 in delete-directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2633,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:328: find-files */
t3=*((C_word*)lf[75]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,t1,lf[76],C_SCHEME_TRUE,lf[77],C_SCHEME_FALSE);}
else{
/* posix-common.scm:340: rmdir */
f_2615(((C_word*)t0)[4],t1);}}

/* with-input-from-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_3983r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3983r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3983r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3987,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[182]+1),t2,t4);}

/* k3986 in with-input-from-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3987,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3992,a[2]=t5,a[3]=t3,a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3997,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li96),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4010,a[2]=t3,a[3]=t5,a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1188: ##sys#dynamic-wind */
t9=*((C_word*)lf[91]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

/* set-buffering-mode! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4495(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4495r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4495r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4495r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4499,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1453: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(4,*((C_word*)lf[63]+1),t5,t2,lf[290]);}

/* k4498 in set-buffering-mode! in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4499,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_4501(t4,C_u_i_car(t3));}
else{
t3=t2;
f_4501(t3,C_fix((C_word)BUFSIZ));}}

/* f_3970 in k3964 in call-with-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3970,2,t0,t1);}
/* posixwin.scm:1182: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

/* f_3975 in k3964 in call-with-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3975r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3975r(t0,t1,t2);}}

static void C_ccall f_3975r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3978,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1184: close-output-pipe */
t4=*((C_word*)lf[190]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* call-with-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_3961r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3961r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3961r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3965,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[186]+1),t2,t4);}

/* k3964 in call-with-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3975,a[2]=t1,a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1181: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}

/* k3977 */
static void C_ccall f_3978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_3992 in k3986 in with-input-from-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3992,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[196]+1));
t3=C_mutate((C_word*)lf[196]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_3997 in k3986 in with-input-from-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4002,a[2]=((C_word*)t0)[2],a[3]=((C_word)li95),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1191: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* k3930 in k3928 in k3926 in close-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* close-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3907,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3911,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1154: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[189]+1)))(5,*((C_word*)lf[189]+1),t3,t2,C_SCHEME_TRUE,lf[187]);}

/* close-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3923(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3923,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3927,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1162: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[192]+1)))(5,*((C_word*)lf[192]+1),t3,t2,C_SCHEME_TRUE,lf[190]);}

/* call-with-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_3939r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3939r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3939r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3943,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[182]+1),t2,t4);}

/* f_3953 in k3942 in call-with-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3953r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3953r(t0,t1,t2);}}

static void C_ccall f_3953r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3956,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1175: close-input-pipe */
t4=*((C_word*)lf[187]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k3928 in k3926 in close-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[3]);
if(C_truep(t3)){
/* posixwin.scm:1166: ##sys#signal-hook */
t4=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[10],lf[190],lf[191],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}

/* k3788 in k3781 in change-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1115: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[67],lf[179],((C_word*)t0)[3]);}

/* k3926 in close-output-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3927,2,t0,t1);}
t2=close_pipe(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3929,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1164: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}

/* k3781 in change-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_chdir(t1);
t4=C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3789,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1114: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}}

/* k3783 in k3781 in change-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* local-timezone-abbreviation in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4437,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1028(t2);
/* posixwin.scm:1424: ##sys#peek-c-string */
t4=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,C_fix(0));}

/* k2998 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:420: pproc */
t4=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[5]);}

/* change-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3776(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3776,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[67]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3782,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3796,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1112: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t5,t2);}

/* f_2993 in k2975 in k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in ... */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:419: make-pathname */
t4=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[90]);}

/* k3211 in seconds->string in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3213,2,t0,t1);}
t2=C_i_check_number_2(t1,lf[109]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3217,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:468: ctime */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k3216 in k3211 in seconds->string in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:470: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[68]+1)))(5,*((C_word*)lf[68]+1),((C_word*)t0)[2],t1,C_fix(0),t3);}
else{
/* posix-common.scm:471: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[109],lf[110],((C_word*)t0)[3]);}}

/* f_4445 in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4445(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4445,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1034(C_SCHEME_UNDEFINED,t3));}

/* k2984 in k2975 in k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in ... */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:417: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2927(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_2988 in k2975 in k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in ... */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2988,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_5670 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5670(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5670,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[102]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_umask(t2));}

/* f_5675 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5675(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5675,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5678,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:188: ##sys#stat */
f_2189(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[20]);}

/* _exit in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4450(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_4450r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4450r(t0,t1,t2);}}

static void C_ccall f_4450r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
/* posixwin.scm:1434: ex0 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
/* posixwin.scm:1434: ex0 */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,C_fix(0));}}

/* k5677 */
static void C_ccall f_5678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5678,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* k3910 in close-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3911,2,t0,t1);}
t2=close_pipe(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1156: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}

/* k3914 in k3912 in k3910 in close-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3912 in k3910 in close-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[3]);
if(C_truep(t3)){
/* posixwin.scm:1158: ##sys#signal-hook */
t4=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[10],lf[187],lf[188],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}

/* k3795 in change-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1112: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[67]);}

/* f_5680 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5680,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[401]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5684,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5698,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5710,a[2]=t5,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:192: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t7,t2);}

/* f_5684 */
static void C_ccall f_5684(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5684,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5689,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t5=C_i_foreign_string_argumentp(t2);
/* posix-common.scm:191: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t4,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub117(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t3));}}

/* k5687 */
static void C_ccall f_5689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub117(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3]));}

/* k4466 in terminal-port? in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1438: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),t2,((C_word*)t0)[3],C_fix(0));}

/* k4468 in k4466 in terminal-port? in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_tty_portp(((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* terminal-port? in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4463,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4467,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1437: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(4,*((C_word*)lf[63]+1),t3,t2,lf[287]);}

/* k4358 in k4355 in setenv in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_setenv(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k4355 in setenv in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4359,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1400: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,((C_word*)t0)[3],lf[281]);}

/* k5696 */
static void C_ccall f_5698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:194: posix-error */
t2=lf[3];
f_2173(7,t2,((C_word*)t0)[2],lf[10],lf[401],lf[402],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* unsetenv in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4361(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4361,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[282]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4368,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1405: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,t2,lf[282]);}

/* k4367 in unsetenv in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_putenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* terminal-size in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4480,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4487,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1442: terminal-port? */
t4=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4485 in terminal-size in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm:1443: values */
C_values(4,0,((C_word*)t0)[2],C_fix(0),C_fix(0));}
else{
/* posixwin.scm:1444: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[288],lf[289],((C_word*)t0)[3]);}}

/* k3764 */
static void C_ccall f_3765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3765,2,t0,t1);}
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1083: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}}

/* k2975 in k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 in ... */
static void C_ccall f_2977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2977,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2988,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word)li37),tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3013,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:418: ##sys#dynamic-wind */
t10=*((C_word*)lf[91]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3025,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:421: pproc */
t4=((C_word*)t0)[9];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[7]);}}

/* k3706 in k3713 */
static void C_ccall f_3707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1084: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[173],lf[174],((C_word*)t0)[3]);}

/* k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3096,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3123,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t2,lf[100],((C_word*)t0)[4],t3);}

/* find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3092r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3092r(t0,t1,t2,t3);}}

static void C_ccall f_3092r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3096,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3130,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t4,lf[101],t3,t5);}

/* k3942 in call-with-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3948,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3953,a[2]=t1,a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1172: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}

/* k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3120,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t2,lf[99],((C_word*)t0)[5],t3);}

/* k2964 in k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 in ... */
static void C_ccall f_2965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:415: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2927(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2966 in k3029 in k3036 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 in ... */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:415: action */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:415: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2927(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k3955 */
static void C_ccall f_3956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_3086 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3086(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3086,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]));}

/* k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2919(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2919,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[8])){
/* posix-common.scm:406: make-pathname */
t4=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[9],lf[93]);}
else{
/* posix-common.scm:406: make-pathname */
t4=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[9],lf[94]);}}

/* k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2917(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2917,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_i_stringp(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3063,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3063(2,t5,t3);}
else{
/* posix-common.scm:402: irregex? */
t5=*((C_word*)lf[96]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}}

/* f_3948 in k3942 in call-with-input-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3948,2,t0,t1);}
/* posixwin.scm:1173: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

/* open-input-file* in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4265(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4265r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4265r(t0,t1,t2,t3);}}

static void C_ccall f_4265r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[56]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4276,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1363: mode */
f_4212(t5,C_SCHEME_TRUE,t3,lf[56]);}

/* k4262 in k4251 in check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3292 in k3276 in time->string in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:488: strftime */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3294 in k3276 in time->string in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:492: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[68]+1)))(5,*((C_word*)lf[68]+1),((C_word*)t0)[2],t1,C_fix(0),t3);}
else{
/* posix-common.scm:493: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[115],lf[117],((C_word*)t0)[3]);}}

/* k2904 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:380: ##sys#glob->regexp */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t1);}

/* k3563 in k3559 in file-mkstemp in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3564,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* posixwin.scm:1018: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[68]+1)))(5,*((C_word*)lf[68]+1),t2,((C_word*)t0)[5],C_fix(0),t3);}

/* k3559 in file-mkstemp in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3560,2,t0,t1);}
t2=C_mkstemp(t1);
t3=C_i_string_length(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3564,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3578,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1016: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}
else{
t6=t4;
f_3564(2,t6,C_SCHEME_UNDEFINED);}}

/* k3713 */
static void C_ccall f_3714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3714,2,t0,t1);}
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1083: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}}

/* f_4042 in k4018 in with-output-to-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4042,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[198]+1));
t3=C_mutate((C_word*)lf[198]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* create-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4047(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_4047r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4047r(t0,t1,t2);}}

static void C_ccall f_4047r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_fixnum_or(*((C_word*)lf[136]+1),*((C_word*)lf[138]+1)):C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4054,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_pipe(C_SCHEME_FALSE,t4);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4062,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1216: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t7);}
else{
/* posixwin.scm:1218: values */
C_values(4,0,t1,C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k5606 in k5604 */
static void C_ccall f_5607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* file-mkstemp in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3554,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[161]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3560,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1012: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,t2,lf[161]);}

/* k3054 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:406: glob */
t2=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5604 */
static void C_ccall f_5605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posixwin.scm:1073: posix-error */
t3=lf[3];
f_2173(6,t3,t2,lf[10],lf[172],lf[396],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* f_5602 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5602(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5602,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5605,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5616,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1064: port? */
t5=*((C_word*)lf[169]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2925,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2927,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li39),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_2927(t5,((C_word*)t0)[7],t1,((C_word*)t0)[8]);}

/* loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_2927(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2927,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2944,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:412: directory? */
t7=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}}

/* k4053 in create-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1218: values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* k4251 in check in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4252,2,t0,t1);}
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posixwin.scm:1356: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],lf[276],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1357: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(6,*((C_word*)lf[52]+1),t2,((C_word*)t0)[5],*((C_word*)lf[53]+1),lf[277],lf[55]);}}

/* k3736 in for-each-loop729 in k3682 */
static void C_ccall f_3737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3728(t3,((C_word*)t0)[4],t2);}

/* k5614 */
static void C_ccall f_5616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[55]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];
f_5605(2,t5,t4);}
else{
t4=((C_word*)t0)[3];
f_5605(2,t4,C_fix(-1));}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[3];
f_5605(2,t3,t2);}
else{
/* posixwin.scm:1071: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[15],lf[172],lf[397],((C_word*)t0)[2]);}}}

/* k3041 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3043,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:422: action */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
/* posix-common.scm:423: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2927(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* k3048 in k3041 in k2942 in loop in k2924 in k2918 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:422: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2927(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k4061 in create-pipe in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1217: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[10],lf[199],lf[200]);}

/* f_3077 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3077,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* ##sys#shell-command in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4877,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1556: get-environment-variable */
t3=*((C_word*)lf[314]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[315]);}

/* k4876 in shell-command in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4877,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_get_shlcmd())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_shlcmd),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1560: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t2);}}}

/* f_4370 in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4370(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4370,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=stub1016(t3,t4);
/* posixwin.scm:1409: ##sys#peek-c-string */
t6=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* get-environment-variables in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4379,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4385,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4385(t5,t1,C_fix(0));}

/* k3757 in k3764 */
static void C_ccall f_3758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1084: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[173],lf[174],((C_word*)t0)[3]);}

/* f_5639 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5639(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5639,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[120]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(*((C_word*)lf[119]+1),t2));}

/* k3061 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3063,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3065,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:403: irregex */
t3=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_2919(t2,((C_word*)t0)[3]);}}

/* f_3066 in k3064 in k3061 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3066,3,t0,t1,t2);}
/* posix-common.scm:404: irregex-match */
t3=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k3064 in k3061 in k2916 in k3105 in k3103 in k3101 in k3099 in k3097 in k3095 in find-files in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3065,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2919(t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3066,a[2]=t1,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp));}

/* k4887 in k4876 in shell-command in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1561: ##sys#error */
t2=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[312],lf[313]);}

/* f_3750 in k3676 in create-directory in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3750(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3750,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3765,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1082: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,t2,lf[173]);}

/* loop in get-environment-variables in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4385(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4385,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4389,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1412: get */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4388 in loop in get-environment-variables in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4389,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4397,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word)li119),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_4397(t5,((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* f_5647 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5647(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5647r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5647r(t0,t1,t2);}}

static void C_ccall f_5647r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(C_truep(t4)?C_i_check_exact_2(t4,lf[102]):C_SCHEME_UNDEFINED);
if(C_truep(t4)){
t6=C_umask(t4);
if(C_truep(t4)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_umask(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t6);}}
else{
t6=C_umask(C_fix(0));
if(C_truep(t4)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_umask(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t6);}}}

/* ##sys#shell-command-arguments in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4893(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4893,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list2(&a,2,lf[317],t2));}

/* process-run in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4899(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4899r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4899r(t0,t1,t2,t3);}}

static void C_ccall f_4899r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4903,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_4903(t6,C_u_i_car(t5));}
else{
t5=t4;
f_4903(t5,C_SCHEME_FALSE);}}

/* scan in k4388 in loop in get-environment-variables in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_fcall f_4397(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4397,NULL,3,t0,t1,t2);}
t3=C_subchar(((C_word*)t0)[2],t2);
if(C_truep(C_i_char_equalp(C_make_character(61),t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4419,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:1416: substring */
t5=*((C_word*)lf[284]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],C_fix(0),t2);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* posixwin.scm:1417: scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k2786 in k2710 in k2708 in k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:350: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[29]);}

/* f_4034 */
static void C_ccall f_4034(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4034r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4034r(t0,t1,t2);}}

static void C_ccall f_4034r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4037,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1204: close-output-pipe */
t4=*((C_word*)lf[190]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* for-each-loop729 in k3682 */
static void C_fcall f_3728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3728,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3737,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posixwin.scm:1105: g730 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4036 */
static void C_ccall f_4037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4329 in k4327 in duplicate-fileno in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4334 in k4327 in duplicate-fileno in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1390: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[64],lf[280],((C_word*)t0)[3]);}

/* process* in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_5193(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_5193r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5193r(t0,t1,t2,t3);}}

static void C_ccall f_5193r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
if(C_truep(C_i_nullp(t11))){
/* posixwin.scm:1644: %process */
t14=((C_word*)t0)[2];
((C_proc8)(void*)(*((C_word*)t14+1)))(8,t14,t1,lf[325],C_SCHEME_TRUE,t2,t5,t9,t13);}
else{
t14=C_i_cdr(t11);
/* posixwin.scm:1644: %process */
t15=((C_word*)t0)[2];
((C_proc8)(void*)(*((C_word*)t15+1)))(8,t15,t1,lf[325],C_SCHEME_TRUE,t2,t5,t9,t13);}}

/* local-time->seconds in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3243(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3243,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3247,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:474: check-time-vector */
f_3139(t3,lf[111],t2);}

/* k3246 in local-time->seconds in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3247,2,t0,t1);}
t2=C_a_mktime(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3253,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:476: fp= */
t4=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[114],t2);}

/* k2390 */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[31],t1));}

/* f_2393 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2393,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2400,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:227: file-type */
t4=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* setenv in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4347(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4347,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[281]);
t5=C_i_check_string_2(t3,lf[281]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4356,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1400: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,t2,lf[281]);}

/* k4288 in open-output-file* in k3664 in k3610 in k3606 in k3602 in k3598 in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_4289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4289,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posixwin.scm:1367: check */
f_4248(((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k2756 in k2746 in k2741 in k2737 in loop in k2713 in k2710 in k2708 in k2706 in k2696 in directory in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2757,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_3264 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3264,4,t0,t1,t2,t3);}
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=stub510(t4,t2,t3);
/* posix-common.scm:482: ##sys#peek-c-string */
t6=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* symbolic-link? in k3330 in k3135 in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_3586(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3586,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[35]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* k2372 in regular-file? in k2248 in k2161 in k2159 in k2157 in k2155 in k2153 in k2151 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[27],t1));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[463] = {
{"f_2748:posixwin_2escm",(void*)f_2748},
{"f_2742:posixwin_2escm",(void*)f_2742},
{"f_3253:posixwin_2escm",(void*)f_3253},
{"f_3570:posixwin_2escm",(void*)f_3570},
{"f_2468:posixwin_2escm",(void*)f_2468},
{"f_3258:posixwin_2escm",(void*)f_3258},
{"f_3578:posixwin_2escm",(void*)f_3578},
{"f_2944:posixwin_2escm",(void*)f_2944},
{"f_4276:posixwin_2escm",(void*)f_4276},
{"f_4278:posixwin_2escm",(void*)f_4278},
{"f_3284:posixwin_2escm",(void*)f_3284},
{"f_2439:posixwin_2escm",(void*)f_2439},
{"f_4303:posixwin_2escm",(void*)f_4303},
{"f_2432:posixwin_2escm",(void*)f_2432},
{"f_4248:posixwin_2escm",(void*)f_4248},
{"f_3208:posixwin_2escm",(void*)f_3208},
{"f_3270:posixwin_2escm",(void*)f_3270},
{"f_3277:posixwin_2escm",(void*)f_3277},
{"f_3593:posixwin_2escm",(void*)f_3593},
{"f_3591:posixwin_2escm",(void*)f_3591},
{"f_4813:posixwin_2escm",(void*)f_4813},
{"f_4308:posixwin_2escm",(void*)f_4308},
{"f_2714:posixwin_2escm",(void*)f_2714},
{"f_4291:posixwin_2escm",(void*)f_4291},
{"f_4295:posixwin_2escm",(void*)f_4295},
{"f_2711:posixwin_2escm",(void*)f_2711},
{"f_4320:posixwin_2escm",(void*)f_4320},
{"f_4322:posixwin_2escm",(void*)f_4322},
{"f_2409:posixwin_2escm",(void*)f_2409},
{"f_2707:posixwin_2escm",(void*)f_2707},
{"f_2709:posixwin_2escm",(void*)f_2709},
{"f_2400:posixwin_2escm",(void*)f_2400},
{"f_2402:posixwin_2escm",(void*)f_2402},
{"f_3536:posixwin_2escm",(void*)f_3536},
{"f_3531:posixwin_2escm",(void*)f_3531},
{"f_4328:posixwin_2escm",(void*)f_4328},
{"f_5355:posixwin_2escm",(void*)f_5355},
{"f_4203:posixwin_2escm",(void*)f_4203},
{"f_5361:posixwin_2escm",(void*)f_5361},
{"f_5367:posixwin_2escm",(void*)f_5367},
{"f_2480:posixwin_2escm",(void*)f_2480},
{"f_2482:posixwin_2escm",(void*)f_2482},
{"f_2418:posixwin_2escm",(void*)f_2418},
{"f_2411:posixwin_2escm",(void*)f_2411},
{"f_3500:posixwin_2escm",(void*)f_3500},
{"f_5331:posixwin_2escm",(void*)f_5331},
{"f_5337:posixwin_2escm",(void*)f_5337},
{"f_5343:posixwin_2escm",(void*)f_5343},
{"f_5349:posixwin_2escm",(void*)f_5349},
{"f_2382:posixwin_2escm",(void*)f_2382},
{"f_3525:posixwin_2escm",(void*)f_3525},
{"f_2375:posixwin_2escm",(void*)f_2375},
{"f_3527:posixwin_2escm",(void*)f_3527},
{"f_5391:posixwin_2escm",(void*)f_5391},
{"f_5397:posixwin_2escm",(void*)f_5397},
{"f_2427:posixwin_2escm",(void*)f_2427},
{"f_2420:posixwin_2escm",(void*)f_2420},
{"f_3519:posixwin_2escm",(void*)f_3519},
{"f_2384:posixwin_2escm",(void*)f_2384},
{"f_5373:posixwin_2escm",(void*)f_5373},
{"f_4212:posixwin_2escm",(void*)f_4212},
{"f_2495:posixwin_2escm",(void*)f_2495},
{"f_5379:posixwin_2escm",(void*)f_5379},
{"f_4219:posixwin_2escm",(void*)f_4219},
{"f_4829:posixwin_2escm",(void*)f_4829},
{"f_2493:posixwin_2escm",(void*)f_2493},
{"f_2366:posixwin_2escm",(void*)f_2366},
{"f_5385:posixwin_2escm",(void*)f_5385},
{"f_2738:posixwin_2escm",(void*)f_2738},
{"f_2728:posixwin_2escm",(void*)f_2728},
{"f_4002:posixwin_2escm",(void*)f_4002},
{"f_5314:posixwin_2escm",(void*)f_5314},
{"f_5319:posixwin_2escm",(void*)f_5319},
{"f_4005:posixwin_2escm",(void*)f_4005},
{"f_4010:posixwin_2escm",(void*)f_4010},
{"f_5325:posixwin_2escm",(void*)f_5325},
{"f_4019:posixwin_2escm",(void*)f_4019},
{"f_4015:posixwin_2escm",(void*)f_4015},
{"f_3666:posixwin_2escm",(void*)f_3666},
{"f_3668:posixwin_2escm",(void*)f_3668},
{"f_4024:posixwin_2escm",(void*)f_4024},
{"f_4029:posixwin_2escm",(void*)f_4029},
{"f_3691:posixwin_2escm",(void*)f_3691},
{"f_3692:posixwin_2escm",(void*)f_3692},
{"f_3699:posixwin_2escm",(void*)f_3699},
{"f_3698:posixwin_2escm",(void*)f_3698},
{"f_5305:posixwin_2escm",(void*)f_5305},
{"f_5300:posixwin_2escm",(void*)f_5300},
{"f_3680:posixwin_2escm",(void*)f_3680},
{"f_3683:posixwin_2escm",(void*)f_3683},
{"f_3686:posixwin_2escm",(void*)f_3686},
{"f_4512:posixwin_2escm",(void*)f_4512},
{"f_5523:posixwin_2escm",(void*)f_5523},
{"f_5529:posixwin_2escm",(void*)f_5529},
{"f_3677:posixwin_2escm",(void*)f_3677},
{"f_3679:posixwin_2escm",(void*)f_3679},
{"f_5505:posixwin_2escm",(void*)f_5505},
{"f_3612:posixwin_2escm",(void*)f_3612},
{"f_3614:posixwin_2escm",(void*)f_3614},
{"f_3618:posixwin_2escm",(void*)f_3618},
{"f_4693:posixwin_2escm",(void*)f_4693},
{"f_5517:posixwin_2escm",(void*)f_5517},
{"f_3600:posixwin_2escm",(void*)f_3600},
{"f_3604:posixwin_2escm",(void*)f_3604},
{"f_5511:posixwin_2escm",(void*)f_5511},
{"f_3608:posixwin_2escm",(void*)f_3608},
{"f_3624:posixwin_2escm",(void*)f_3624},
{"f_3318:posixwin_2escm",(void*)f_3318},
{"f_4599:posixwin_2escm",(void*)f_4599},
{"f_5087:posixwin_2escm",(void*)f_5087},
{"f_4666:posixwin_2escm",(void*)f_4666},
{"f_4676:posixwin_2escm",(void*)f_4676},
{"f_5136:posixwin_2escm",(void*)f_5136},
{"f_5138:posixwin_2escm",(void*)f_5138},
{"f_5132:posixwin_2escm",(void*)f_5132},
{"f_5582:posixwin_2escm",(void*)f_5582},
{"f_5107:posixwin_2escm",(void*)f_5107},
{"f_5102:posixwin_2escm",(void*)f_5102},
{"f_5100:posixwin_2escm",(void*)f_5100},
{"f_5112:posixwin_2escm",(void*)f_5112},
{"f_4625:posixwin_2escm",(void*)f_4625},
{"f_4622:posixwin_2escm",(void*)f_4622},
{"f_5565:posixwin_2escm",(void*)f_5565},
{"f_3630:posixwin_2escm",(void*)f_3630},
{"f_3636:posixwin_2escm",(void*)f_3636},
{"f_4638:posixwin_2escm",(void*)f_4638},
{"f_4630:posixwin_2escm",(void*)f_4630},
{"f_5571:posixwin_2escm",(void*)f_5571},
{"f_5578:posixwin_2escm",(void*)f_5578},
{"f_5069:posixwin_2escm",(void*)f_5069},
{"f_3183:posixwin_2escm",(void*)f_3183},
{"f_5541:posixwin_2escm",(void*)f_5541},
{"f_5547:posixwin_2escm",(void*)f_5547},
{"f_5063:posixwin_2escm",(void*)f_5063},
{"f_5065:posixwin_2escm",(void*)f_5065},
{"f_4191:posixwin_2escm",(void*)f_4191},
{"f_4197:posixwin_2escm",(void*)f_4197},
{"f_5553:posixwin_2escm",(void*)f_5553},
{"f_5559:posixwin_2escm",(void*)f_5559},
{"f_5535:posixwin_2escm",(void*)f_5535},
{"f_5053:posixwin_2escm",(void*)f_5053},
{"f_4189:posixwin_2escm",(void*)f_4189},
{"f_4186:posixwin_2escm",(void*)f_4186},
{"f_5078:posixwin_2escm",(void*)f_5078},
{"f_3178:posixwin_2escm",(void*)f_3178},
{"f_4559:posixwin_2escm",(void*)f_4559},
{"f_2189:posixwin_2escm",(void*)f_2189},
{"f_2183:posixwin_2escm",(void*)f_2183},
{"f_2186:posixwin_2escm",(void*)f_2186},
{"f_3162:posixwin_2escm",(void*)f_3162},
{"f_4564:posixwin_2escm",(void*)f_4564},
{"f_5041:posixwin_2escm",(void*)f_5041},
{"f_2193:posixwin_2escm",(void*)f_2193},
{"f_4572:posixwin_2escm",(void*)f_4572},
{"f_3199:posixwin_2escm",(void*)f_3199},
{"f_2164:posixwin_2escm",(void*)f_2164},
{"f_4648:posixwin_2escm",(void*)f_4648},
{"f_5248:posixwin_2escm",(void*)f_5248},
{"f_2162:posixwin_2escm",(void*)f_2162},
{"f_2160:posixwin_2escm",(void*)f_2160},
{"f_2177:posixwin_2escm",(void*)f_2177},
{"f_5260:posixwin_2escm",(void*)f_5260},
{"f_4656:posixwin_2escm",(void*)f_4656},
{"f_2173:posixwin_2escm",(void*)f_2173},
{"f_4166:posixwin_2escm",(void*)f_4166},
{"f_4169:posixwin_2escm",(void*)f_4169},
{"f_5267:posixwin_2escm",(void*)f_5267},
{"f_3340:posixwin_2escm",(void*)f_3340},
{"f_4769:posixwin_2escm",(void*)f_4769},
{"f_3011:posixwin_2escm",(void*)f_3011},
{"f_3013:posixwin_2escm",(void*)f_3013},
{"f_2154:posixwin_2escm",(void*)f_2154},
{"f_2156:posixwin_2escm",(void*)f_2156},
{"f_2158:posixwin_2escm",(void*)f_2158},
{"f_5279:posixwin_2escm",(void*)f_5279},
{"f_3334:posixwin_2escm",(void*)f_3334},
{"f_3332:posixwin_2escm",(void*)f_3332},
{"f_3157:posixwin_2escm",(void*)f_3157},
{"f_2152:posixwin_2escm",(void*)f_2152},
{"f_3005:posixwin_2escm",(void*)f_3005},
{"f_5292:posixwin_2escm",(void*)f_5292},
{"f_3002:posixwin_2escm",(void*)f_3002},
{"f_5295:posixwin_2escm",(void*)f_5295},
{"f_5289:posixwin_2escm",(void*)f_5289},
{"f_3365:posixwin_2escm",(void*)f_3365},
{"f_2298:posixwin_2escm",(void*)f_2298},
{"f_3360:posixwin_2escm",(void*)f_3360},
{"f_5029:posixwin_2escm",(void*)f_5029},
{"f_5023:posixwin_2escm",(void*)f_5023},
{"f_3037:posixwin_2escm",(void*)f_3037},
{"f_3031:posixwin_2escm",(void*)f_3031},
{"f_4159:posixwin_2escm",(void*)f_4159},
{"f_5298:posixwin_2escm",(void*)f_5298},
{"f_3456:posixwin_2escm",(void*)f_3456},
{"f_4714:posixwin_2escm",(void*)f_4714},
{"f_4719:posixwin_2escm",(void*)f_4719},
{"f_3450:posixwin_2escm",(void*)f_3450},
{"f_4717:posixwin_2escm",(void*)f_4717},
{"f_3025:posixwin_2escm",(void*)f_3025},
{"f_3022:posixwin_2escm",(void*)f_3022},
{"f_3443:posixwin_2escm",(void*)f_3443},
{"f_3445:posixwin_2escm",(void*)f_3445},
{"f_4727:posixwin_2escm",(void*)f_4727},
{"f_4721:posixwin_2escm",(void*)f_4721},
{"f_4171:posixwin_2escm",(void*)f_4171},
{"f_4179:posixwin_2escm",(void*)f_4179},
{"f_3117:posixwin_2escm",(void*)f_3117},
{"f_3111:posixwin_2escm",(void*)f_3111},
{"f_3114:posixwin_2escm",(void*)f_3114},
{"f_3898:posixwin_2escm",(void*)f_3898},
{"f_4738:posixwin_2escm",(void*)f_4738},
{"f_4730:posixwin_2escm",(void*)f_4730},
{"f_4145:posixwin_2escm",(void*)f_4145},
{"f_3883:posixwin_2escm",(void*)f_3883},
{"f_3889:posixwin_2escm",(void*)f_3889},
{"f_3462:posixwin_2escm",(void*)f_3462},
{"f_4742:posixwin_2escm",(void*)f_4742},
{"f_4991:posixwin_2escm",(void*)f_4991},
{"f_4997:posixwin_2escm",(void*)f_4997},
{"f_2237:posixwin_2escm",(void*)f_2237},
{"f_5439:posixwin_2escm",(void*)f_5439},
{"f_2230:posixwin_2escm",(void*)f_2230},
{"f_2887:posixwin_2escm",(void*)f_2887},
{"f_5433:posixwin_2escm",(void*)f_5433},
{"f_2881:posixwin_2escm",(void*)f_2881},
{"f_4984:posixwin_2escm",(void*)f_4984},
{"f_2878:posixwin_2escm",(void*)f_2878},
{"f_5445:posixwin_2escm",(void*)f_5445},
{"f_5457:posixwin_2escm",(void*)f_5457},
{"f_2872:posixwin_2escm",(void*)f_2872},
{"f_4708:posixwin_2escm",(void*)f_4708},
{"f_2868:posixwin_2escm",(void*)f_2868},
{"f_3870:posixwin_2escm",(void*)f_3870},
{"f_5451:posixwin_2escm",(void*)f_5451},
{"f_5469:posixwin_2escm",(void*)f_5469},
{"f_2276:posixwin_2escm",(void*)f_2276},
{"f_2274:posixwin_2escm",(void*)f_2274},
{"f_3861:posixwin_2escm",(void*)f_3861},
{"f_5463:posixwin_2escm",(void*)f_5463},
{"f_2270:posixwin_2escm",(void*)f_2270},
{"toplevel:posixwin_2escm",(void*)C_posix_toplevel},
{"f_5475:posixwin_2escm",(void*)f_5475},
{"f_3816:posixwin_2escm",(void*)f_3816},
{"f_2282:posixwin_2escm",(void*)f_2282},
{"f_3474:posixwin_2escm",(void*)f_3474},
{"f_2280:posixwin_2escm",(void*)f_2280},
{"f_2560:posixwin_2escm",(void*)f_2560},
{"f_2837:posixwin_2escm",(void*)f_2837},
{"f_2258:posixwin_2escm",(void*)f_2258},
{"f_2256:posixwin_2escm",(void*)f_2256},
{"f_5481:posixwin_2escm",(void*)f_5481},
{"f_5487:posixwin_2escm",(void*)f_5487},
{"f_5499:posixwin_2escm",(void*)f_5499},
{"f_2250:posixwin_2escm",(void*)f_2250},
{"f_2252:posixwin_2escm",(void*)f_2252},
{"f_5710:posixwin_2escm",(void*)f_5710},
{"f_4915:posixwin_2escm",(void*)f_4915},
{"f_4918:posixwin_2escm",(void*)f_4918},
{"f_3831:posixwin_2escm",(void*)f_3831},
{"f_3833:posixwin_2escm",(void*)f_3833},
{"f_2268:posixwin_2escm",(void*)f_2268},
{"f_2823:posixwin_2escm",(void*)f_2823},
{"f_2264:posixwin_2escm",(void*)f_2264},
{"f_5493:posixwin_2escm",(void*)f_5493},
{"f_2547:posixwin_2escm",(void*)f_2547},
{"f_3492:posixwin_2escm",(void*)f_3492},
{"f_2262:posixwin_2escm",(void*)f_2262},
{"f_3490:posixwin_2escm",(void*)f_3490},
{"f_4753:posixwin_2escm",(void*)f_4753},
{"f_3820:posixwin_2escm",(void*)f_3820},
{"f_2817:posixwin_2escm",(void*)f_2817},
{"f_3480:posixwin_2escm",(void*)f_3480},
{"f_2558:posixwin_2escm",(void*)f_2558},
{"f_3488:posixwin_2escm",(void*)f_3488},
{"f_2552:posixwin_2escm",(void*)f_2552},
{"f_3434:posixwin_2escm",(void*)f_3434},
{"f_3430:posixwin_2escm",(void*)f_3430},
{"f_2693:posixwin_2escm",(void*)f_2693},
{"f_4903:posixwin_2escm",(void*)f_4903},
{"f_2697:posixwin_2escm",(void*)f_2697},
{"f_2673:posixwin_2escm",(void*)f_2673},
{"f_4924:posixwin_2escm",(void*)f_4924},
{"f_4929:posixwin_2escm",(void*)f_4929},
{"f_5012:posixwin_2escm",(void*)f_5012},
{"f_5403:posixwin_2escm",(void*)f_5403},
{"f_2512:posixwin_2escm",(void*)f_2512},
{"f_5409:posixwin_2escm",(void*)f_5409},
{"f_2664:posixwin_2escm",(void*)f_2664},
{"f_2575:posixwin_2escm",(void*)f_2575},
{"f_2506:posixwin_2escm",(void*)f_2506},
{"f_2508:posixwin_2escm",(void*)f_2508},
{"f_5415:posixwin_2escm",(void*)f_5415},
{"f_4501:posixwin_2escm",(void*)f_4501},
{"f_5035:posixwin_2escm",(void*)f_5035},
{"f_4504:posixwin_2escm",(void*)f_4504},
{"f_5038:posixwin_2escm",(void*)f_5038},
{"f_5032:posixwin_2escm",(void*)f_5032},
{"f_5427:posixwin_2escm",(void*)f_5427},
{"f_5421:posixwin_2escm",(void*)f_5421},
{"f_5009:posixwin_2escm",(void*)f_5009},
{"f_5006:posixwin_2escm",(void*)f_5006},
{"f_2524:posixwin_2escm",(void*)f_2524},
{"f_4933:posixwin_2escm",(void*)f_4933},
{"f_3852:posixwin_2escm",(void*)f_3852},
{"f_3846:posixwin_2escm",(void*)f_3846},
{"f_2532:posixwin_2escm",(void*)f_2532},
{"f_2615:posixwin_2escm",(void*)f_2615},
{"f_2619:posixwin_2escm",(void*)f_2619},
{"f_2588:posixwin_2escm",(void*)f_2588},
{"f_4413:posixwin_2escm",(void*)f_4413},
{"f_2853:posixwin_2escm",(void*)f_2853},
{"f_2851:posixwin_2escm",(void*)f_2851},
{"f_4419:posixwin_2escm",(void*)f_4419},
{"f_2608:posixwin_2escm",(void*)f_2608},
{"f_2222:posixwin_2escm",(void*)f_2222},
{"f_2225:posixwin_2escm",(void*)f_2225},
{"f_4422:posixwin_2escm",(void*)f_4422},
{"f_2590:posixwin_2escm",(void*)f_2590},
{"f_2845:posixwin_2escm",(void*)f_2845},
{"f_2842:posixwin_2escm",(void*)f_2842},
{"f_2216:posixwin_2escm",(void*)f_2216},
{"f_3106:posixwin_2escm",(void*)f_3106},
{"f_3102:posixwin_2escm",(void*)f_3102},
{"f_3104:posixwin_2escm",(void*)f_3104},
{"f_3100:posixwin_2escm",(void*)f_3100},
{"f_3137:posixwin_2escm",(void*)f_3137},
{"f_3132:posixwin_2escm",(void*)f_3132},
{"f_2659:posixwin_2escm",(void*)f_2659},
{"f_3130:posixwin_2escm",(void*)f_3130},
{"f_2654:posixwin_2escm",(void*)f_2654},
{"f_3139:posixwin_2escm",(void*)f_3139},
{"f_3125:posixwin_2escm",(void*)f_3125},
{"f_3123:posixwin_2escm",(void*)f_3123},
{"f_3120:posixwin_2escm",(void*)f_3120},
{"f_2648:posixwin_2escm",(void*)f_2648},
{"f_2639:posixwin_2escm",(void*)f_2639},
{"f_2638:posixwin_2escm",(void*)f_2638},
{"f_2633:posixwin_2escm",(void*)f_2633},
{"f_3983:posixwin_2escm",(void*)f_3983},
{"f_3987:posixwin_2escm",(void*)f_3987},
{"f_4495:posixwin_2escm",(void*)f_4495},
{"f_4499:posixwin_2escm",(void*)f_4499},
{"f_3970:posixwin_2escm",(void*)f_3970},
{"f_3975:posixwin_2escm",(void*)f_3975},
{"f_3961:posixwin_2escm",(void*)f_3961},
{"f_3965:posixwin_2escm",(void*)f_3965},
{"f_3978:posixwin_2escm",(void*)f_3978},
{"f_3992:posixwin_2escm",(void*)f_3992},
{"f_3997:posixwin_2escm",(void*)f_3997},
{"f_3931:posixwin_2escm",(void*)f_3931},
{"f_3907:posixwin_2escm",(void*)f_3907},
{"f_3923:posixwin_2escm",(void*)f_3923},
{"f_3939:posixwin_2escm",(void*)f_3939},
{"f_3953:posixwin_2escm",(void*)f_3953},
{"f_3929:posixwin_2escm",(void*)f_3929},
{"f_3789:posixwin_2escm",(void*)f_3789},
{"f_3927:posixwin_2escm",(void*)f_3927},
{"f_3782:posixwin_2escm",(void*)f_3782},
{"f_3784:posixwin_2escm",(void*)f_3784},
{"f_4437:posixwin_2escm",(void*)f_4437},
{"f_2999:posixwin_2escm",(void*)f_2999},
{"f_3776:posixwin_2escm",(void*)f_3776},
{"f_2993:posixwin_2escm",(void*)f_2993},
{"f_3213:posixwin_2escm",(void*)f_3213},
{"f_3217:posixwin_2escm",(void*)f_3217},
{"f_4445:posixwin_2escm",(void*)f_4445},
{"f_2986:posixwin_2escm",(void*)f_2986},
{"f_2988:posixwin_2escm",(void*)f_2988},
{"f_5670:posixwin_2escm",(void*)f_5670},
{"f_5675:posixwin_2escm",(void*)f_5675},
{"f_4450:posixwin_2escm",(void*)f_4450},
{"f_5678:posixwin_2escm",(void*)f_5678},
{"f_3911:posixwin_2escm",(void*)f_3911},
{"f_3915:posixwin_2escm",(void*)f_3915},
{"f_3913:posixwin_2escm",(void*)f_3913},
{"f_3796:posixwin_2escm",(void*)f_3796},
{"f_5680:posixwin_2escm",(void*)f_5680},
{"f_5684:posixwin_2escm",(void*)f_5684},
{"f_5689:posixwin_2escm",(void*)f_5689},
{"f_4467:posixwin_2escm",(void*)f_4467},
{"f_4469:posixwin_2escm",(void*)f_4469},
{"f_4463:posixwin_2escm",(void*)f_4463},
{"f_4359:posixwin_2escm",(void*)f_4359},
{"f_4356:posixwin_2escm",(void*)f_4356},
{"f_5698:posixwin_2escm",(void*)f_5698},
{"f_4361:posixwin_2escm",(void*)f_4361},
{"f_4368:posixwin_2escm",(void*)f_4368},
{"f_4480:posixwin_2escm",(void*)f_4480},
{"f_4487:posixwin_2escm",(void*)f_4487},
{"f_3765:posixwin_2escm",(void*)f_3765},
{"f_2977:posixwin_2escm",(void*)f_2977},
{"f_3707:posixwin_2escm",(void*)f_3707},
{"f_3096:posixwin_2escm",(void*)f_3096},
{"f_3092:posixwin_2escm",(void*)f_3092},
{"f_3943:posixwin_2escm",(void*)f_3943},
{"f_3098:posixwin_2escm",(void*)f_3098},
{"f_2965:posixwin_2escm",(void*)f_2965},
{"f_2968:posixwin_2escm",(void*)f_2968},
{"f_3956:posixwin_2escm",(void*)f_3956},
{"f_3086:posixwin_2escm",(void*)f_3086},
{"f_2919:posixwin_2escm",(void*)f_2919},
{"f_2917:posixwin_2escm",(void*)f_2917},
{"f_3948:posixwin_2escm",(void*)f_3948},
{"f_4265:posixwin_2escm",(void*)f_4265},
{"f_4263:posixwin_2escm",(void*)f_4263},
{"f_3293:posixwin_2escm",(void*)f_3293},
{"f_3295:posixwin_2escm",(void*)f_3295},
{"f_2905:posixwin_2escm",(void*)f_2905},
{"f_3564:posixwin_2escm",(void*)f_3564},
{"f_3560:posixwin_2escm",(void*)f_3560},
{"f_3714:posixwin_2escm",(void*)f_3714},
{"f_4042:posixwin_2escm",(void*)f_4042},
{"f_4047:posixwin_2escm",(void*)f_4047},
{"f_5607:posixwin_2escm",(void*)f_5607},
{"f_3554:posixwin_2escm",(void*)f_3554},
{"f_3055:posixwin_2escm",(void*)f_3055},
{"f_5605:posixwin_2escm",(void*)f_5605},
{"f_5602:posixwin_2escm",(void*)f_5602},
{"f_2925:posixwin_2escm",(void*)f_2925},
{"f_2927:posixwin_2escm",(void*)f_2927},
{"f_4054:posixwin_2escm",(void*)f_4054},
{"f_4252:posixwin_2escm",(void*)f_4252},
{"f_3737:posixwin_2escm",(void*)f_3737},
{"f_5616:posixwin_2escm",(void*)f_5616},
{"f_3043:posixwin_2escm",(void*)f_3043},
{"f_3049:posixwin_2escm",(void*)f_3049},
{"f_4062:posixwin_2escm",(void*)f_4062},
{"f_3077:posixwin_2escm",(void*)f_3077},
{"f_4873:posixwin_2escm",(void*)f_4873},
{"f_4877:posixwin_2escm",(void*)f_4877},
{"f_4370:posixwin_2escm",(void*)f_4370},
{"f_4379:posixwin_2escm",(void*)f_4379},
{"f_3758:posixwin_2escm",(void*)f_3758},
{"f_5639:posixwin_2escm",(void*)f_5639},
{"f_3063:posixwin_2escm",(void*)f_3063},
{"f_3066:posixwin_2escm",(void*)f_3066},
{"f_3065:posixwin_2escm",(void*)f_3065},
{"f_4888:posixwin_2escm",(void*)f_4888},
{"f_3750:posixwin_2escm",(void*)f_3750},
{"f_4385:posixwin_2escm",(void*)f_4385},
{"f_4389:posixwin_2escm",(void*)f_4389},
{"f_5647:posixwin_2escm",(void*)f_5647},
{"f_4893:posixwin_2escm",(void*)f_4893},
{"f_4899:posixwin_2escm",(void*)f_4899},
{"f_4397:posixwin_2escm",(void*)f_4397},
{"f_2787:posixwin_2escm",(void*)f_2787},
{"f_4034:posixwin_2escm",(void*)f_4034},
{"f_3728:posixwin_2escm",(void*)f_3728},
{"f_4037:posixwin_2escm",(void*)f_4037},
{"f_4330:posixwin_2escm",(void*)f_4330},
{"f_4335:posixwin_2escm",(void*)f_4335},
{"f_5193:posixwin_2escm",(void*)f_5193},
{"f_3243:posixwin_2escm",(void*)f_3243},
{"f_3247:posixwin_2escm",(void*)f_3247},
{"f_2391:posixwin_2escm",(void*)f_2391},
{"f_2393:posixwin_2escm",(void*)f_2393},
{"f_4347:posixwin_2escm",(void*)f_4347},
{"f_4289:posixwin_2escm",(void*)f_4289},
{"f_2757:posixwin_2escm",(void*)f_2757},
{"f_3264:posixwin_2escm",(void*)f_3264},
{"f_3586:posixwin_2escm",(void*)f_3586},
{"f_2373:posixwin_2escm",(void*)f_2373},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
S|applied compiler syntax:
S|  for-each		3
o|eliminated procedure checks: 141 
o|specializations:
o|  1 (##sys#check-list (or pair list) *)
o|  4 (##sys#foreign-fixnum-argument fixnum)
o|  1 (negative? fixnum)
o|  4 (cdr pair)
o|  1 (string-ref string fixnum)
o|  3 (make-string fixnum)
o|  9 (eqv? * (not float))
o|  9 (car pair)
o|dropping redundant toplevel assignment: process 
o|dropping redundant toplevel assignment: process* 
o|safe globals: (file-stat ##sys#stat ##sys#posix-error posix-error c1417) 
o|Removed `not' forms: 6 
o|inlining procedure: k2194 
o|inlining procedure: k2194 
o|inlining procedure: k2209 
o|inlining procedure: k2209 
o|inlining procedure: k2293 
o|inlining procedure: k2305 
o|inlining procedure: k2305 
o|inlining procedure: k2317 
o|inlining procedure: k2317 
o|inlining procedure: k2329 
o|inlining procedure: k2329 
o|inlining procedure: k2293 
o|inlining procedure: k2438 
o|contracted procedure: k2453 
o|inlining procedure: k2450 
o|inlining procedure: k2450 
o|substituted constant variable: a2463 
o|inlining procedure: k2438 
o|inlining procedure: k2471 
o|inlining procedure: k2471 
o|inlining procedure: k2513 
o|inlining procedure: k2513 
o|inlining procedure: k2531 
o|inlining procedure: k2531 
o|inlining procedure: k2559 
o|inlining procedure: k2559 
o|inlining procedure: k2581 
o|inlining procedure: k2581 
o|substituted constant variable: a2600 
o|inlining procedure: k2620 
o|inlining procedure: k2620 
o|inlining procedure: k2641 
o|propagated global variable: g2752765739 delete-file 
o|inlining procedure: k2641 
o|inlining procedure: k2634 
o|inlining procedure: k2667 
o|inlining procedure: k2667 
o|inlining procedure: k2634 
o|inlining procedure: k2715 
o|inlining procedure: k2715 
o|inlining procedure: k2731 
o|inlining procedure: k2731 
o|inlining procedure: k2763 
o|inlining procedure: k2763 
o|substituted constant variable: a2784 
o|substituted constant variable: a2788 
o|inlining procedure: k2826 
o|inlining procedure: k2826 
o|inlining procedure: k2856 
o|inlining procedure: k2856 
o|inlining procedure: k2900 
o|inlining procedure: k2900 
o|inlining procedure: k2907 
o|inlining procedure: k2907 
o|contracted procedure: "(posix-common.scm:431) find-files" 
o|inlining procedure: k2930 
o|inlining procedure: k2930 
o|inlining procedure: k2945 
o|inlining procedure: k2945 
o|inlining procedure: k2964 
o|inlining procedure: k2964 
o|inlining procedure: k2972 
o|inlining procedure: k3001 
o|inlining procedure: k3001 
o|inlining procedure: k2972 
o|inlining procedure: k3021 
o|inlining procedure: k3021 
o|inlining procedure: k3038 
o|inlining procedure: k3038 
o|inlining procedure: k3057 
o|inlining procedure: k3057 
o|contracted procedure: k3074 
o|inlining procedure: k3080 
o|inlining procedure: k3080 
o|inlining procedure: k3144 
o|inlining procedure: k3144 
o|inlining procedure: k3218 
o|inlining procedure: k3218 
o|inlining procedure: k3248 
o|inlining procedure: k3248 
o|inlining procedure: k3278 
o|inlining procedure: k3278 
o|inlining procedure: k3367 
o|inlining procedure: k3367 
o|inlining procedure: k3444 
o|inlining procedure: k3444 
o|inlining procedure: k3467 
o|inlining procedure: k3467 
o|inlining procedure: k3491 
o|inlining procedure: k3491 
o|inlining procedure: k3530 
o|inlining procedure: k3530 
o|inlining procedure: k3625 
o|inlining procedure: k3625 
o|inlining procedure: k3637 
o|inlining procedure: k3637 
o|inlining procedure: k3646 
o|inlining procedure: k3646 
o|inlining procedure: k3694 
o|inlining procedure: k3701 
o|inlining procedure: k3701 
o|inlining procedure: k3694 
o|inlining procedure: k3731 
o|inlining procedure: k3731 
o|inlining procedure: k3678 
o|inlining procedure: k3752 
o|inlining procedure: k3752 
o|inlining procedure: k3678 
o|inlining procedure: k3783 
o|inlining procedure: k3783 
o|inlining procedure: k3801 
o|inlining procedure: k3801 
o|inlining procedure: k3821 
o|inlining procedure: k3821 
o|inlining procedure: k3844 
o|inlining procedure: k3844 
o|inlining procedure: "(posixwin.scm:1141) badmode766" 
o|substituted constant variable: a3866 
o|substituted constant variable: a3868 
o|inlining procedure: k3881 
o|inlining procedure: k3881 
o|inlining procedure: "(posixwin.scm:1151) badmode766" 
o|substituted constant variable: a3903 
o|substituted constant variable: a3905 
o|inlining procedure: k3914 
o|inlining procedure: k3914 
o|inlining procedure: k3930 
o|inlining procedure: k3930 
o|inlining procedure: k4053 
o|inlining procedure: k4053 
o|inlining procedure: k4152 
o|inlining procedure: k4152 
o|inlining procedure: k4178 
o|inlining procedure: k4178 
o|inlining procedure: k4218 
o|contracted procedure: k4233 
o|inlining procedure: k4230 
o|inlining procedure: k4230 
o|substituted constant variable: a4243 
o|inlining procedure: k4218 
o|inlining procedure: k4253 
o|inlining procedure: k4253 
o|inlining procedure: k4296 
o|inlining procedure: k4296 
o|inlining procedure: k4329 
o|inlining procedure: k4329 
o|inlining procedure: k4390 
o|inlining procedure: k4400 
o|inlining procedure: k4400 
o|inlining procedure: k4390 
o|inlining procedure: k4456 
o|inlining procedure: k4456 
o|inlining procedure: k4470 
o|inlining procedure: k4470 
o|inlining procedure: k4483 
o|inlining procedure: k4483 
o|inlining procedure: k4507 
o|inlining procedure: k4507 
o|inlining procedure: k4517 
o|inlining procedure: k4517 
o|inlining procedure: k4528 
o|inlining procedure: k4528 
o|substituted constant variable: a4544 
o|substituted constant variable: a4546 
o|substituted constant variable: a4548 
o|inlining procedure: k4562 
o|inlining procedure: k4575 
o|inlining procedure: k4575 
o|inlining procedure: k4562 
o|inlining procedure: k4602 
o|inlining procedure: k4602 
o|inlining procedure: k4621 
o|inlining procedure: k4621 
o|inlining procedure: k4668 
o|inlining procedure: k4679 
o|inlining procedure: k4679 
o|inlining procedure: k4668 
o|inlining procedure: k4729 
o|inlining procedure: k4729 
o|inlining procedure: k4743 
o|inlining procedure: k4743 
o|inlining procedure: k4774 
o|inlining procedure: k4774 
o|inlining procedure: k4834 
o|inlining procedure: k4834 
o|inlining procedure: k4878 
o|inlining procedure: k4878 
o|inlining procedure: k4904 
o|inlining procedure: k4904 
o|substituted constant variable: g124412451252 
o|substituted constant variable: g124412451252 
o|substituted constant variable: g124412451252 
o|substituted constant variable: g124612471253 
o|substituted constant variable: g124612471253 
o|substituted constant variable: g124612471253 
o|substituted constant variable: g124812491254 
o|substituted constant variable: g124812491254 
o|substituted constant variable: g124812491254 
o|substituted constant variable: g125012511255 
o|substituted constant variable: g125012511255 
o|substituted constant variable: g125012511255 
o|inlining procedure: k4998 
o|inlining procedure: k5011 
o|inlining procedure: k5011 
o|inlining procedure: k4998 
o|inlining procedure: k5049 
o|inlining procedure: k5049 
o|inlining procedure: k5081 
o|inlining procedure: k5081 
o|inlining procedure: k5114 
o|inlining procedure: k5114 
o|inlining procedure: k5251 
o|inlining procedure: k5251 
o|inlining procedure: k5270 
o|inlining procedure: k5270 
o|inlining procedure: k5282 
o|inlining procedure: k5282 
o|inlining procedure: k5308 
o|inlining procedure: k5308 
o|inlining procedure: k5606 
o|inlining procedure: k5606 
o|inlining procedure: k5617 
o|inlining procedure: k5617 
o|inlining procedure: k5626 
o|inlining procedure: k5626 
o|inlining procedure: k5658 
o|inlining procedure: k5658 
o|inlining procedure: k5687 
o|inlining procedure: k5687 
o|inlining procedure: k5699 
o|inlining procedure: k5699 
o|replaced variables: 519 
o|removed binding forms: 307 
o|substituted constant variable: r21955712 
o|substituted constant variable: r23065716 
o|substituted constant variable: r23185718 
o|substituted constant variable: r23305720 
o|substituted constant variable: r22945722 
o|inlining procedure: k2438 
o|substituted constant variable: r24515725 
o|inlining procedure: k2438 
o|inlining procedure: k2438 
o|inlining procedure: k2641 
o|inlining procedure: k2641 
o|propagated global variable: g2752765956 delete-file 
o|converted assignments to bindings: (rmdir257) 
o|substituted constant variable: r27325753 
o|substituted constant variable: f_28255757 
o|substituted constant variable: r29015763 
o|substituted constant variable: r29015763 
o|substituted constant variable: r29085767 
o|substituted constant variable: r29085767 
o|substituted constant variable: a30565783 
o|substituted constant variable: a30565784 
o|substituted constant variable: loc371 
o|substituted constant variable: r36385814 
o|substituted constant variable: f_38005830 
o|removed side-effect free assignment to unused variable: badmode766 
o|inlining procedure: k3844 
o|inlining procedure: k3881 
o|inlining procedure: k4218 
o|substituted constant variable: r42315869 
o|inlining procedure: k4218 
o|inlining procedure: k4218 
o|inlining procedure: k4302 
o|substituted constant variable: r43915880 
o|substituted constant variable: a44555882 
o|substituted constant variable: r44715883 
o|substituted constant variable: a45165890 
o|folded constant expression: (fx< (quote -1) (quote 0)) 
o|substituted constant variable: f_45745894 
o|substituted constant variable: a47285906 
o|substituted constant variable: a50105919 
o|substituted constant variable: a50485921 
o|substituted constant variable: a50485922 
o|converted assignments to bindings: (check943) 
o|substituted constant variable: r56185938 
o|substituted constant variable: r56885945 
o|substituted constant variable: r56885945 
o|simplifications: ((let . 2)) 
o|replaced variables: 16 
o|removed binding forms: 512 
o|substituted constant variable: a24375949 
o|substituted constant variable: a24375950 
o|substituted constant variable: a24375951 
o|inlining procedure: k2766 
o|inlining procedure: k3324 
o|inlining procedure: k3324 
o|inlining procedure: k3504 
o|inlining procedure: k3504 
o|inlining procedure: k3547 
o|inlining procedure: k3547 
o|substituted constant variable: a42175983 
o|substituted constant variable: a42175984 
o|substituted constant variable: a42175985 
o|inlining procedure: k5151 
o|inlining procedure: k5206 
o|inlining procedure: k5655 
o|inlining procedure: k5655 
o|replaced variables: 2 
o|removed binding forms: 54 
o|substituted constant variable: tmp3193216015 
o|substituted constant variable: tmp3193216015 
o|substituted constant variable: a33236026 
o|substituted constant variable: r35056029 
o|substituted constant variable: r35486031 
o|substituted constant variable: r56566051 
o|simplifications: ((let . 2)) 
o|removed binding forms: 14 
o|removed conditional forms: 3 
o|removed binding forms: 5 
o|simplifications: ((if . 55) (##core#call . 360)) 
o|  call simplifications:
o|    bitwise-ior
o|    <
o|    +	2
o|    ##sys#foreign-pointer-argument	5
o|    ##sys#foreign-string-argument	5
o|    char-whitespace?
o|    char=?
o|    fxior	2
o|    string-length	2
o|    list	5
o|    values	11
o|    ##sys#fudge
o|    vector-set!	2
o|    fx-	3
o|    ##sys#foreign-integer-argument
o|    ##sys#check-number	4
o|    ##sys#check-vector
o|    ##sys#size	7
o|    member
o|    fx+	6
o|    ##sys#call-with-values	7
o|    string-ref	2
o|    fx>
o|    not	4
o|    cons	8
o|    ##sys#check-string	21
o|    ##sys#check-list	4
o|    fx=	8
o|    zero?	2
o|    ##sys#slot	15
o|    ##sys#check-exact	24
o|    ##sys#null-pointer?	5
o|    pair?	13
o|    eq?	30
o|    cdr	20
o|    ##sys#eqv?	7
o|    null?	54
o|    car	36
o|    vector
o|    fixnum?	4
o|    string?	2
o|    fx<	12
o|    apply	9
o|    ##sys#foreign-fixnum-argument	9
o|contracted procedure: k2171 
o|contracted procedure: k2197 
o|contracted procedure: k2206 
o|contracted procedure: k2212 
o|contracted procedure: k2241 
o|contracted procedure: k2233 
o|contracted procedure: k2359 
o|contracted procedure: k2285 
o|contracted procedure: k2353 
o|contracted procedure: k2287 
o|contracted procedure: k2347 
o|contracted procedure: k2289 
o|contracted procedure: k2341 
o|contracted procedure: k2291 
o|contracted procedure: k2302 
o|contracted procedure: k2308 
o|contracted procedure: k2314 
o|contracted procedure: k2320 
o|contracted procedure: k2326 
o|contracted procedure: k2332 
o|contracted procedure: k2338 
o|contracted procedure: k2440 
o|contracted procedure: k2447 
o|contracted procedure: k2473 
o|contracted procedure: k2485 
o|contracted procedure: k2498 
o|contracted procedure: k2549 
o|contracted procedure: k2516 
o|contracted procedure: k2528 
o|contracted procedure: k2533 
o|contracted procedure: k2555 
o|contracted procedure: k2561 
o|contracted procedure: k2567 
o|contracted procedure: k2570 
o|contracted procedure: k2572 
o|contracted procedure: k2601 
o|contracted procedure: k2578 
o|contracted procedure: k2686 
o|contracted procedure: k2611 
o|contracted procedure: k2623 
o|contracted procedure: k2630 
o|contracted procedure: k2655 
o|contracted procedure: k2669 
o|contracted procedure: k2678 
o|contracted procedure: k2681 
o|contracted procedure: k2801 
o|contracted procedure: k2698 
o|contracted procedure: k2795 
o|contracted procedure: k2700 
o|contracted procedure: k2789 
o|contracted procedure: k2702 
o|contracted procedure: k2704 
o|contracted procedure: k2718 
o|contracted procedure: k2734 
o|contracted procedure: k2739 
o|contracted procedure: k2758 
o|contracted procedure: k2761 
o|contracted procedure: k2774 
o|contracted procedure: k2766 
o|contracted procedure: k2780 
o|contracted procedure: k2807 
o|contracted procedure: k2828 
o|contracted procedure: k2831 
o|contracted procedure: k2858 
o|contracted procedure: k2865 
o|contracted procedure: k2883 
o|contracted procedure: k2897 
o|contracted procedure: k2914 
o|contracted procedure: k2932 
o|contracted procedure: k2935 
o|contracted procedure: k2937 
o|contracted procedure: k2948 
o|contracted procedure: k2957 
o|contracted procedure: k2982 
o|contracted procedure: k3059 
o|contracted procedure: k3083 
o|contracted procedure: k3142 
o|contracted procedure: k3154 
o|contracted procedure: k3147 
o|contracted procedure: k3163 
o|contracted procedure: k3168 
o|contracted procedure: k3184 
o|contracted procedure: k3189 
o|contracted procedure: k3206 
o|contracted procedure: k3214 
o|contracted procedure: k3228 
o|contracted procedure: k3225 
o|contracted procedure: k3233 
o|contracted procedure: k3311 
o|contracted procedure: k3273 
o|contracted procedure: k3281 
o|contracted procedure: k3306 
o|contracted procedure: k3303 
o|contracted procedure: k3321 
o|contracted procedure: k3396 
o|contracted procedure: k3343 
o|contracted procedure: k3390 
o|contracted procedure: k3345 
o|contracted procedure: k3384 
o|contracted procedure: k3347 
o|contracted procedure: k3378 
o|contracted procedure: k3349 
o|contracted procedure: k3351 
o|contracted procedure: k3354 
o|contracted procedure: k3369 
o|contracted procedure: k5636 
o|contracted procedure: k3428 
o|contracted procedure: k3435 
o|contracted procedure: k3437 
o|contracted procedure: k3439 
o|contracted procedure: k3446 
o|contracted procedure: k3457 
o|contracted procedure: k3465 
o|contracted procedure: k3470 
o|contracted procedure: k3483 
o|contracted procedure: k3485 
o|contracted procedure: k3496 
o|contracted procedure: k3510 
o|contracted procedure: k3522 
o|contracted procedure: k3528 
o|contracted procedure: k3532 
o|contracted procedure: k3540 
o|contracted procedure: k3557 
o|contracted procedure: k3561 
o|contracted procedure: k3572 
o|contracted procedure: k3574 
o|contracted procedure: k3589 
o|contracted procedure: k3595 
o|contracted procedure: k3619 
o|contracted procedure: k3621 
o|contracted procedure: k3644 
o|contracted procedure: k3640 
o|contracted procedure: k3649 
o|contracted procedure: k3659 
o|contracted procedure: k3769 
o|contracted procedure: k3671 
o|contracted procedure: k3674 
o|contracted procedure: k3684 
o|contracted procedure: k3703 
o|contracted procedure: k3722 
o|contracted procedure: k3733 
o|contracted procedure: k3742 
o|contracted procedure: k3745 
o|contracted procedure: k3754 
o|contracted procedure: k3779 
o|contracted procedure: k3785 
o|contracted procedure: k3803 
o|contracted procedure: k3824 
o|contracted procedure: k3836 
o|contracted procedure: k3847 
o|contracted procedure: k3856 
o|contracted procedure: k3873 
o|contracted procedure: k3884 
o|contracted procedure: k3893 
o|contracted procedure: k3916 
o|contracted procedure: k3932 
o|contracted procedure: k4067 
o|contracted procedure: k4050 
o|contracted procedure: k4058 
o|contracted procedure: k4103 
o|contracted procedure: k4148 
o|contracted procedure: k4150 
o|contracted procedure: k4155 
o|contracted procedure: k4174 
o|contracted procedure: k4176 
o|contracted procedure: k4220 
o|contracted procedure: k4227 
o|contracted procedure: k4256 
o|contracted procedure: k4268 
o|contracted procedure: k4281 
o|contracted procedure: k4299 
o|contracted procedure: k4304 
o|contracted procedure: k4325 
o|contracted procedure: k4331 
o|contracted procedure: k4339 
o|contracted procedure: k4342 
o|contracted procedure: k4344 
o|contracted procedure: k4350 
o|contracted procedure: k4352 
o|contracted procedure: k4364 
o|contracted procedure: k4377 
o|contracted procedure: k4402 
o|contracted procedure: k4409 
o|contracted procedure: k4415 
o|contracted procedure: k4424 
o|contracted procedure: k4427 
o|contracted procedure: k4433 
o|contracted procedure: k4448 
o|contracted procedure: k4458 
o|contracted procedure: k4473 
o|contracted procedure: k4505 
o|contracted procedure: k4523 
o|contracted procedure: k4519 
o|contracted procedure: k4525 
o|contracted procedure: k4531 
o|contracted procedure: k4537 
o|contracted procedure: k4549 
o|contracted procedure: k4566 
o|contracted procedure: k4577 
o|contracted procedure: k4593 
o|contracted procedure: k4583 
o|contracted procedure: k4590 
o|contracted procedure: k4604 
o|contracted procedure: k4610 
o|inlining procedure: k4618 
o|inlining procedure: k4618 
o|contracted procedure: k4633 
o|contracted procedure: k4640 
o|contracted procedure: k4646 
o|contracted procedure: k4651 
o|contracted procedure: k4658 
o|contracted procedure: k4664 
o|contracted procedure: k4670 
o|contracted procedure: k4681 
o|contracted procedure: k4687 
o|contracted procedure: k4689 
o|contracted procedure: k4700 
o|contracted procedure: k4703 
o|contracted procedure: k4711 
o|contracted procedure: k4735 
o|contracted procedure: k4746 
o|contracted procedure: k4806 
o|contracted procedure: k4756 
o|contracted procedure: k4800 
o|contracted procedure: k4758 
o|contracted procedure: k4794 
o|contracted procedure: k4760 
o|contracted procedure: k4788 
o|contracted procedure: k4762 
o|contracted procedure: k4782 
o|contracted procedure: k4764 
o|contracted procedure: k4776 
o|contracted procedure: k4766 
o|contracted procedure: k4866 
o|contracted procedure: k4816 
o|contracted procedure: k4860 
o|contracted procedure: k4818 
o|contracted procedure: k4854 
o|contracted procedure: k4820 
o|contracted procedure: k4848 
o|contracted procedure: k4822 
o|contracted procedure: k4842 
o|contracted procedure: k4824 
o|contracted procedure: k4836 
o|contracted procedure: k4826 
o|contracted procedure: k4919 
o|contracted procedure: k4935 
o|contracted procedure: k4939 
o|contracted procedure: k4943 
o|contracted procedure: k4947 
o|contracted procedure: k4951 
o|contracted procedure: k4955 
o|contracted procedure: k4976 
o|contracted procedure: k4982 
o|contracted procedure: k5057 
o|contracted procedure: k4987 
o|contracted procedure: k5043 
o|contracted procedure: k5046 
o|contracted procedure: k5055 
o|contracted procedure: k5067 
o|contracted procedure: k5083 
o|contracted procedure: k5092 
o|contracted procedure: k5095 
o|contracted procedure: k5097 
o|contracted procedure: k5186 
o|contracted procedure: k5141 
o|contracted procedure: k5180 
o|contracted procedure: k5143 
o|contracted procedure: k5174 
o|contracted procedure: k5145 
o|contracted procedure: k5168 
o|contracted procedure: k5147 
o|contracted procedure: k5162 
o|contracted procedure: k5149 
o|contracted procedure: k5156 
o|contracted procedure: k5151 
o|contracted procedure: k5241 
o|contracted procedure: k5196 
o|contracted procedure: k5235 
o|contracted procedure: k5198 
o|contracted procedure: k5229 
o|contracted procedure: k5200 
o|contracted procedure: k5223 
o|contracted procedure: k5202 
o|contracted procedure: k5217 
o|contracted procedure: k5204 
o|contracted procedure: k5211 
o|contracted procedure: k5206 
o|contracted procedure: k5264 
o|contracted procedure: k5608 
o|contracted procedure: k5624 
o|contracted procedure: k5620 
o|contracted procedure: k5629 
o|contracted procedure: k5641 
o|contracted procedure: k5663 
o|contracted procedure: k5649 
o|contracted procedure: k5652 
o|contracted procedure: k5672 
o|contracted procedure: k5682 
o|contracted procedure: k5694 
o|contracted procedure: k5702 
o|simplifications: ((if . 1) (let . 58)) 
o|removed binding forms: 299 
o|inlining procedure: k3160 
o|inlining procedure: k3181 
o|inlining procedure: "(posixwin.scm:1135) mode765" 
o|inlining procedure: "(posixwin.scm:1145) mode765" 
o|inlining procedure: k4636 
o|inlining procedure: k4654 
o|replaced variables: 11 
o|removed binding forms: 1 
o|removed side-effect free assignment to unused variable: mode765 
o|substituted constant variable: r46376207 
o|substituted constant variable: r46556209 
o|replaced variables: 6 
o|removed binding forms: 7 
o|converted assignments to bindings: (check767) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 8 
o|contracted procedure: k3838 
o|contracted procedure: k3875 
o|removed binding forms: 2 
o|replaced variables: 6 
o|removed binding forms: 4 
o|direct leaf routine/allocation: loop1069 0 
o|converted assignments to bindings: (loop1069) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (for-each-loop12981316 k4902 $exec-setup $exec-teardown $quote-args-list doloop11081109 loop1075 k4500 k4510 scan1023 loop1020 k4327 mode959 check960 check943 check767 for-each-loop729748 k3617 k3526 k3433 check-time-vector k2916 k2918 loop385 loop348 conc-loop329 k2741 k2746 loop308 for-each-loop264280 rmdir257 k2557 mode180 check181 ##sys#stat) 
o|calls to known targets: 135 
o|unused rest argument: _378 f_3086 
o|unused rest argument: _377 f_3077 
o|unused rest argument: _418 f_3132 
o|identified direct recursive calls: f_4397 1 
o|identified direct recursive calls: f_4572 1 
o|unused rest argument: _14121416 f_5319 
o|unused rest argument: _14191423 f_5325 
o|unused rest argument: _14251429 f_5331 
o|unused rest argument: _14311435 f_5337 
o|unused rest argument: _14371441 f_5343 
o|unused rest argument: _14431447 f_5349 
o|unused rest argument: _14491453 f_5355 
o|unused rest argument: _14551459 f_5361 
o|unused rest argument: _14611465 f_5367 
o|unused rest argument: _14671471 f_5373 
o|unused rest argument: _14731477 f_5379 
o|unused rest argument: _14791483 f_5385 
o|unused rest argument: _14851489 f_5391 
o|unused rest argument: _14911495 f_5397 
o|unused rest argument: _14971501 f_5403 
o|unused rest argument: _15031507 f_5409 
o|unused rest argument: _15091513 f_5415 
o|unused rest argument: _15151519 f_5421 
o|unused rest argument: _15211525 f_5427 
o|unused rest argument: _15271531 f_5433 
o|unused rest argument: _15331537 f_5439 
o|unused rest argument: _15391543 f_5445 
o|unused rest argument: _15451549 f_5451 
o|unused rest argument: _15511555 f_5457 
o|unused rest argument: _15571561 f_5463 
o|unused rest argument: _15631567 f_5469 
o|unused rest argument: _15691573 f_5475 
o|unused rest argument: _15751579 f_5481 
o|unused rest argument: _15811585 f_5487 
o|unused rest argument: _15871591 f_5493 
o|unused rest argument: _15931597 f_5499 
o|unused rest argument: _15991603 f_5505 
o|unused rest argument: _16051609 f_5511 
o|unused rest argument: _16111615 f_5517 
o|unused rest argument: _16171621 f_5523 
o|unused rest argument: _16231627 f_5529 
o|unused rest argument: _16291633 f_5535 
o|unused rest argument: _16351639 f_5541 
o|unused rest argument: _16411645 f_5547 
o|unused rest argument: _16471651 f_5553 
o|unused rest argument: _16531657 f_5559 
o|unused rest argument: _16591663 f_5565 
o|unused rest argument: _16651669 f_5571 
o|fast box initializations: 15 
o|fast global references: 73 
o|fast global assignments: 7 
o|dropping unused closure argument: f_2468 
o|dropping unused closure argument: f_2432 
o|dropping unused closure argument: f_4248 
o|dropping unused closure argument: f_4212 
o|dropping unused closure argument: f_4559 
o|dropping unused closure argument: f_2189 
o|dropping unused closure argument: f_4171 
o|dropping unused closure argument: f_4738 
o|dropping unused closure argument: f_3816 
o|dropping unused closure argument: f_2615 
o|dropping unused closure argument: f_3139 
*/
/* end of file */
