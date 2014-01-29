;;;; posixwin.scm - Miscellaneous file- and process-handling routines, available on Windows
;
; Copyright (c) 2008-2013, The Chicken Team
; Copyright (c) 2000-2007, Felix L. Winkelmann
; All rights reserved.
;
; Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following
; conditions are met:
;
;   Redistributions of source code must retain the above copyright notice, this list of conditions and the following
;     disclaimer.
;   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
;     disclaimer in the documentation and/or other materials provided with the distribution.
;   Neither the name of the author nor the names of its contributors may be used to endorse or promote
;     products derived from this software without specific prior written permission.
;
; THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
; OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
; AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR
; CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
; CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
; SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
; THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
; POSSIBILITY OF SUCH DAMAGE.


; Not implemented:
;
; open/noctty  open/nonblock  open/fsync  open/sync
; perm/isvtx  perm/isuid  perm/isgid
; file-select
; symbolic-link?
; set-signal-mask!  signal-mask	 signal-masked?	 signal-mask!  signal-unmask!
; user-information group-information  get-groups  set-groups!  initialize-groups
; errno/wouldblock
; change-directory*
; change-file-owner
; current-user-id  current-group-id  current-effective-user-id	current-effective-group-id
; current-effective-user-name
; set-user-id!	set-group-id!
; create-session
; process-group-id  set-process-group-id!
; create-symbolic-link	read-symbolic-link
; file-truncate
; file-lock  file-lock/blocking	 file-unlock  file-test-lock
; create-fifo  fifo?
; prot/...
; map/...
; map-file-to-memory  unmap-file-from-memory  memory-mapped-file-pointer  memory-mapped-file?
; set-alarm!
; terminal-port?  terminal-name
; process-fork	process-wait
; parent-process-id
; process-signal


; Issues
;
; - Use of a UTF8 encoded string will not work properly. Windows uses a
; 16-bit UNICODE character string encoding and specialized system calls
; and/or structure settings for the use of such strings.


(declare
  (unit posix)
  (uses scheduler irregex extras utils files ports)
  (disable-interrupts)
  (hide $quote-args-list $exec-setup $exec-teardown)
  (not inline ##sys#interrupt-hook ##sys#user-interrupt-hook)
  (foreign-declare #<<EOF
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
EOF
) )


;;; common code

(include "posix-common.scm")


;;; Lo-level I/O:

(define-foreign-variable _pipe_buf int "PIPE_BUF")

(define pipe/buf _pipe_buf)

(define-foreign-variable _o_rdonly int "O_RDONLY")
(define-foreign-variable _o_wronly int "O_WRONLY")
(define-foreign-variable _o_rdwr int "O_RDWR")
(define-foreign-variable _o_creat int "O_CREAT")
(define-foreign-variable _o_append int "O_APPEND")
(define-foreign-variable _o_excl int "O_EXCL")
(define-foreign-variable _o_trunc int "O_TRUNC")
(define-foreign-variable _o_binary int "O_BINARY")
(define-foreign-variable _o_text int "O_TEXT")
(define-foreign-variable _o_noinherit int "O_NOINHERIT")

(define open/rdonly _o_rdonly)
(define open/wronly _o_wronly)
(define open/rdwr _o_rdwr)
(define open/read _o_rdwr)
(define open/write _o_wronly)
(define open/creat _o_creat)
(define open/append _o_append)
(define open/excl _o_excl)
(define open/trunc _o_trunc)
(define open/binary _o_binary)
(define open/text _o_text)
(define open/noinherit _o_noinherit)

(define-foreign-variable _s_irusr int "S_IREAD")
(define-foreign-variable _s_iwusr int "S_IWRITE")
(define-foreign-variable _s_ixusr int "S_IEXEC")
(define-foreign-variable _s_irgrp int "S_IREAD")
(define-foreign-variable _s_iwgrp int "S_IWRITE")
(define-foreign-variable _s_ixgrp int "S_IEXEC")
(define-foreign-variable _s_iroth int "S_IREAD")
(define-foreign-variable _s_iwoth int "S_IWRITE")
(define-foreign-variable _s_ixoth int "S_IEXEC")
(define-foreign-variable _s_irwxu int "S_IREAD | S_IWRITE | S_IEXEC")
(define-foreign-variable _s_irwxg int "S_IREAD | S_IWRITE | S_IEXEC")
(define-foreign-variable _s_irwxo int "S_IREAD | S_IWRITE | S_IEXEC")

(define perm/irusr _s_irusr)
(define perm/iwusr _s_iwusr)
(define perm/ixusr _s_ixusr)
(define perm/irgrp _s_irgrp)
(define perm/iwgrp _s_iwgrp)
(define perm/ixgrp _s_ixgrp)
(define perm/iroth _s_iroth)
(define perm/iwoth _s_iwoth)
(define perm/ixoth _s_ixoth)
(define perm/irwxu _s_irwxu)
(define perm/irwxg _s_irwxg)
(define perm/irwxo _s_irwxo)

(define file-open
  (let ([defmode (bitwise-ior _s_irwxu (fxior _s_irgrp _s_iroth))] )
    (lambda (filename flags . mode)
      (let ([mode (if (pair? mode) (car mode) defmode)])
	(##sys#check-string filename 'file-open)
	(##sys#check-exact flags 'file-open)
	(##sys#check-exact mode 'file-open)
	(let ([fd (##core#inline "C_open" (##sys#make-c-string (##sys#expand-home-path filename) 'file-open) flags mode)])
	  (when (eq? -1 fd)
	    (##sys#update-errno)
	    (##sys#signal-hook #:file-error 'file-open "cannot open file" filename flags mode) )
	  fd) ) ) ) )

(define file-close
  (lambda (fd)
    (##sys#check-exact fd 'file-close)
    (when (fx< (##core#inline "C_close" fd) 0)
      (##sys#update-errno)
      (##sys#signal-hook #:file-error 'file-close "cannot close file" fd) ) ) )

(define file-read
  (lambda (fd size . buffer)
    (##sys#check-exact fd 'file-read)
    (##sys#check-exact size 'file-read)
    (let ([buf (if (pair? buffer) (car buffer) (make-string size))])
      (unless (and (##core#inline "C_blockp" buf) (##core#inline "C_byteblockp" buf))
	(##sys#signal-hook #:type-error 'file-read "bad argument type - not a string or blob" buf) )
      (let ([n (##core#inline "C_read" fd buf size)])
	(when (eq? -1 n)
	  (##sys#update-errno)
	  (##sys#signal-hook #:file-error 'file-read "cannot read from file" fd size) )
	(list buf n) ) ) ) )

(define file-write
  (lambda (fd buffer . size)
    (##sys#check-exact fd 'file-write)
    (unless (and (##core#inline "C_blockp" buffer) (##core#inline "C_byteblockp" buffer))
      (##sys#signal-hook #:type-error 'file-write "bad argument type - not a string or blob" buffer) )
    (let ([size (if (pair? size) (car size) (##sys#size buffer))])
      (##sys#check-exact size 'file-write)
      (let ([n (##core#inline "C_write" fd buffer size)])
	(when (eq? -1 n)
	  (##sys#update-errno)
	  (##sys#signal-hook #:file-error 'file-write "cannot write to file" fd size) )
	n) ) ) )

(define file-mkstemp
  (lambda (template)
    (##sys#check-string template 'file-mkstemp)
    (let* ([buf (##sys#make-c-string template 'file-mkstemp)]
	   [fd (##core#inline "C_mkstemp" buf)]
	   [path-length (string-length buf)])
      (when (eq? -1 fd)
	(##sys#update-errno)
	(##sys#signal-hook #:file-error 'file-mkstemp "cannot create temporary file" template) )
      (values fd (##sys#substring buf 0 (fx- path-length 1) ) ) ) ) )


;;; File attribute access:

(define-foreign-variable _seek_set int "SEEK_SET")
(define-foreign-variable _seek_cur int "SEEK_CUR")
(define-foreign-variable _seek_end int "SEEK_END")

(define seek/set _seek_set)
(define seek/end _seek_end)
(define seek/cur _seek_cur)

(define (symbolic-link? fname)
  (##sys#check-string fname 'symbolic-link?)
  #f)

(let ((stat-type
       (lambda (name)
	 (lambda (fname)
	   (##sys#check-string fname name)
	   #f))))
  (set! character-device? (stat-type 'character-device?))
  (set! block-device? (stat-type 'block-device?))
  (set! fifo? (stat-type 'fifo?))
  (set! socket? (stat-type 'socket?)))

(define set-file-position!
   (lambda (port pos . whence)
     (let ((whence (if (pair? whence) (car whence) _seek_set)))
       (##sys#check-exact pos 'set-file-position!)
       (##sys#check-exact whence 'set-file-position!)
       (when (negative? pos)
         (##sys#signal-hook #:bounds-error 'set-file-position! "invalid negative port position" pos port))
       (unless (cond ((port? port)
		      (and (eq? (##sys#slot port 7) 'stream)
			   (##core#inline "C_fseek" port pos whence) ) )
		     ((fixnum? port)
		      (##core#inline "C_lseek" port pos whence))
		     (else
		      (##sys#signal-hook #:type-error 'set-file-position! "invalid file" port)) )
	 (posix-error #:file-error 'set-file-position! "cannot set file position" port pos) ) ) ) )

(define file-position
  (getter-with-setter
   (lambda (port)
     (let ((pos (cond ((port? port)
		       (if (eq? (##sys#slot port 7) 'stream)
			   (##core#inline "C_ftell" port) 
			   -1) )
		      ((fixnum? port)
		       (##core#inline "C_lseek" port 0 _seek_cur))
		      (else
		       (##sys#signal-hook #:type-error 'file-position "invalid file" port)) ) ) )
       (when (< pos 0)
	 (posix-error #:file-error 'file-position "cannot retrieve file position of port" port) )
       pos) )
   set-file-position!
   "(file-position port)") )		; doesn't accept WHENCE


;;; Directory stuff:

(define-inline (create-directory-helper name)
  (unless (fx= 0 (##core#inline "C_mkdir" (##sys#make-c-string name 'create-directory)))
    (##sys#update-errno)
    (##sys#signal-hook #:file-error 'create-directory
		       "cannot create directory" name)))

(define-inline (create-directory-helper-silent name)
  (unless (##sys#file-exists? name #f #t #f)
    (create-directory-helper name)))

(define-inline (create-directory-helper-parents name)
  (let* ((l   (string-split name "/\\"))
	 (c   (car l)))
    (for-each
     (lambda (x)
       (set! c (string-append c "/" x))
       (create-directory-helper-silent c))
     (cdr l))))

(define create-directory
  (lambda (name #!optional parents?)
    (##sys#check-string name 'create-directory)
    (let ((name (##sys#expand-home-path name)))
      (if parents?
          (create-directory-helper-parents name)
          (create-directory-helper name))
      name)))

(define change-directory
  (lambda (name)
    (##sys#check-string name 'change-directory)
    (let ((sname (##sys#make-c-string (##sys#expand-home-path name) 'change-directory)))
      (unless (fx= 0 (##core#inline "C_chdir" sname))
	(##sys#update-errno)
	(##sys#signal-hook
	 #:file-error 'change-directory "cannot change current directory" name) )
      name)))


;;; Pipes:

(let ()
  (define (mode arg) (if (pair? arg) (##sys#slot arg 0) '###text))
  (define (badmode m) (##sys#error "illegal input/output mode specifier" m))
  (define (check cmd inp r)
    (##sys#update-errno)
    (if (##sys#null-pointer? r)
	(##sys#signal-hook #:file-error "cannot open pipe" cmd)
	(let ([port (##sys#make-port inp ##sys#stream-port-class "(pipe)" 'stream)])
	  (##core#inline "C_set_file_ptr" port r)
	  port) ) )
  (set! open-input-pipe
    (lambda (cmd . m)
      (##sys#check-string cmd 'open-input-pipe)
      (let ([m (mode m)])
	(check
	 cmd #t
	 (case m
	   ((###text) (##core#inline_allocate ("open_text_input_pipe" 2) (##sys#make-c-string cmd 'open-input-pipe)))
	   ((###binary) (##core#inline_allocate ("open_binary_input_pipe" 2) (##sys#make-c-string cmd 'open-input-pipe)))
	   (else (badmode m)) ) ) ) ) )
  (set! open-output-pipe
    (lambda (cmd . m)
      (##sys#check-string cmd 'open-output-pipe)
      (let ((m (mode m)))
	(check
	 cmd #f
	 (case m
	   ((###text) (##core#inline_allocate ("open_text_output_pipe" 2) (##sys#make-c-string cmd 'open-output-pipe)))
	   ((###binary) (##core#inline_allocate ("open_binary_output_pipe" 2) (##sys#make-c-string cmd 'open-output-pipe)))
	   (else (badmode m)) ) ) ) ) )
  (set! close-input-pipe
    (lambda (port)
      (##sys#check-input-port port #t 'close-input-pipe)
      (let ((r (##core#inline "close_pipe" port)))
	(##sys#update-errno)
	(when (eq? -1 r)
	  (##sys#signal-hook #:file-error 'close-input-pipe "error while closing pipe" port) )
	r)))
  (set! close-output-pipe
    (lambda (port)
      (##sys#check-output-port port #t 'close-output-pipe)
      (let ((r (##core#inline "close_pipe" port)))
	(##sys#update-errno)
	(when (eq? -1 r)
	  (##sys#signal-hook #:file-error 'close-output-pipe "error while closing pipe" port) )
	r))))

(define call-with-input-pipe
  (lambda (cmd proc . mode)
    (let ([p (apply open-input-pipe cmd mode)])
      (##sys#call-with-values
       (lambda () (proc p))
       (lambda results
	 (close-input-pipe p)
	 (apply values results) ) ) ) ) )

(define call-with-output-pipe
  (lambda (cmd proc . mode)
    (let ([p (apply open-output-pipe cmd mode)])
      (##sys#call-with-values
       (lambda () (proc p))
       (lambda results
	 (close-output-pipe p)
	 (apply values results) ) ) ) ) )

(define with-input-from-pipe
  (lambda (cmd thunk . mode)
    (let ([p (apply open-input-pipe cmd mode)])
      (fluid-let ((##sys#standard-input p))
	(##sys#call-with-values
	 thunk
	 (lambda results
	   (close-input-pipe p)
	   (apply values results) ) ) ) ) ) )

(define with-output-to-pipe
  (lambda (cmd thunk . mode)
    (let ([p (apply open-output-pipe cmd mode)])
      (fluid-let ((##sys#standard-output p))
	(##sys#call-with-values
	 thunk
	 (lambda results
	   (close-output-pipe p)
	   (apply values results) ) ) ) ) ) )


;;; Pipe primitive:

(define-foreign-variable _pipefd0 int "C_pipefds[ 0 ]")
(define-foreign-variable _pipefd1 int "C_pipefds[ 1 ]")

(define create-pipe
  (lambda (#!optional (mode (fxior open/binary open/noinherit)))
    (when (fx< (##core#inline "C_pipe" #f mode) 0)
      (##sys#update-errno)
      (##sys#signal-hook #:file-error 'create-pipe "cannot create pipe") )
    (values _pipefd0 _pipefd1) ) )

;;; Signal processing:

(define-foreign-variable _nsig int "NSIG")
(define-foreign-variable _sigterm int "SIGTERM")
(define-foreign-variable _sigint int "SIGINT")
(define-foreign-variable _sigfpe int "SIGFPE")
(define-foreign-variable _sigill int "SIGILL")
(define-foreign-variable _sigsegv int "SIGSEGV")
(define-foreign-variable _sigabrt int "SIGABRT")
(define-foreign-variable _sigbreak int "SIGBREAK")

(define signal/term _sigterm)
(define signal/int _sigint)
(define signal/fpe _sigfpe)
(define signal/ill _sigill)
(define signal/segv _sigsegv)
(define signal/abrt _sigabrt)
(define signal/break _sigbreak)
(define signal/alrm 0)
(define signal/chld 0)
(define signal/cont 0)
(define signal/hup 0)
(define signal/io 0)
(define signal/kill 0)
(define signal/pipe 0)
(define signal/prof 0)
(define signal/quit 0)
(define signal/stop 0)
(define signal/trap 0)
(define signal/tstp 0)
(define signal/urg 0)
(define signal/usr1 0)
(define signal/usr2 0)
(define signal/vtalrm 0)
(define signal/winch 0)
(define signal/xcpu 0)
(define signal/xfsz 0)

(define signals-list
  (list
    signal/term signal/int signal/fpe signal/ill
    signal/segv signal/abrt signal/break))


;;; More errno codes:


(define errno/perm _eperm)
(define errno/noent _enoent)
(define errno/srch _esrch)
(define errno/intr _eintr)
(define errno/io _eio)
(define errno/noexec _enoexec)
(define errno/badf _ebadf)
(define errno/child _echild)
(define errno/nomem _enomem)
(define errno/acces _eacces)
(define errno/fault _efault)
(define errno/busy _ebusy)
(define errno/exist _eexist)
(define errno/notdir _enotdir)
(define errno/isdir _eisdir)
(define errno/inval _einval)
(define errno/mfile _emfile)
(define errno/nospc _enospc)
(define errno/spipe _espipe)
(define errno/pipe _epipe)
(define errno/again _eagain)
(define errno/rofs _erofs)
(define errno/nxio _enxio)
(define errno/2big _e2big)
(define errno/xdev _exdev)
(define errno/nodev _enodev)
(define errno/nfile _enfile)
(define errno/notty _enotty)
(define errno/fbig _efbig)
(define errno/mlink _emlink)
(define errno/dom _edom)
(define errno/range _erange)
(define errno/deadlk _edeadlk)
(define errno/nametoolong _enametoolong)
(define errno/nolck _enolck)
(define errno/nosys _enosys)
(define errno/notempty _enotempty)
(define errno/ilseq _eilseq)

;;; Permissions and owners:

(define change-file-mode
  (lambda (fname m)
    (##sys#check-string fname 'change-file-mode)
    (##sys#check-exact m 'change-file-mode)
    (when (fx< (##core#inline "C_chmod" (##sys#make-c-string (##sys#expand-home-path fname) 'change-file-mode) m) 0)
      (##sys#update-errno)
      (##sys#signal-hook #:file-error 'change-file-mode "cannot change file mode" fname m) ) ) )

(define-foreign-variable _r_ok int "2")
(define-foreign-variable _w_ok int "4")
(define-foreign-variable _x_ok int "2")

(let ()
  (define (check filename acc loc)
    (##sys#check-string filename loc)
    (let ([r (fx= 0 (##core#inline "C_test_access" (##sys#make-c-string (##sys#expand-home-path filename) loc) acc))])
      (unless r (##sys#update-errno))
      r) )
  (set! file-read-access? (lambda (filename) (check filename _r_ok 'file-read-access?)))
  (set! file-write-access? (lambda (filename) (check filename _w_ok 'file-write-access?)))
  (set! file-execute-access? (lambda (filename) (check filename _x_ok 'file-execute-access?))) )

(define-foreign-variable _filename_max int "FILENAME_MAX")

;;; Using file-descriptors:

(define-foreign-variable _stdin_fileno int "0")
(define-foreign-variable _stdout_fileno int "1")
(define-foreign-variable _stderr_fileno int "2")

(define fileno/stdin _stdin_fileno)
(define fileno/stdout _stdout_fileno)
(define fileno/stderr _stderr_fileno)

(let ()
  (define (mode inp m loc)
    (##sys#make-c-string
     (cond [(pair? m)
	    (let ([m (car m)])
	      (case m
		[(###append) (if (not inp) "a" (##sys#error "invalid mode for input file" m))]
		[else (##sys#error "invalid mode argument" m)] ) ) ]
	   [inp "r"]
	   [else "w"] )
     loc) )
  (define (check fd inp r)
    (##sys#update-errno)
    (if (##sys#null-pointer? r)
	(##sys#signal-hook #:file-error "cannot open file" fd)
	(let ([port (##sys#make-port inp ##sys#stream-port-class "(fdport)" 'stream)])
	  (##core#inline "C_set_file_ptr" port r)
	  port) ) )
  (set! open-input-file*
    (lambda (fd . m)
      (##sys#check-exact fd 'open-input-file*)
      (check fd #t (##core#inline_allocate ("C_fdopen" 2) fd (mode #t m 'open-input-file*))) ) )
  (set! open-output-file*
    (lambda (fd . m)
      (##sys#check-exact fd 'open-output-file*)
      (check fd #f (##core#inline_allocate ("C_fdopen" 2) fd (mode #f m 'open-output-file*)) ) ) ) )

(define port->fileno
  (lambda (port)
    (##sys#check-open-port port 'port->fileno)
    (if (not (zero? (##sys#peek-unsigned-integer port 0)))
	(let ([fd (##core#inline "C_C_fileno" port)])
	  (when (fx< fd 0)
	    (##sys#update-errno)
	    (##sys#signal-hook #:file-error 'port->fileno "cannot access file-descriptor of port" port) )
	  fd)
	(##sys#signal-hook #:type-error 'port->fileno "port has no attached file" port) ) ) )

(define duplicate-fileno
  (lambda (old . new)
    (##sys#check-exact old duplicate-fileno)
    (let ([fd (if (null? new)
		  (##core#inline "C_dup" old)
		  (let ([n (car new)])
		    (##sys#check-exact n 'duplicate-fileno)
		    (##core#inline "C_dup2" old n) ) ) ] )
      (when (fx< fd 0)
	(##sys#update-errno)
	(##sys#signal-hook #:file-error 'duplicate-fileno "cannot duplicate file descriptor" old) )
      fd) ) )


;;; Environment access:

(define setenv
  (lambda (var val)
    (##sys#check-string var 'setenv)
    (##sys#check-string val 'setenv)
    (##core#inline "C_setenv" (##sys#make-c-string var 'setenv) (##sys#make-c-string val 'setenv))
    (##core#undefined) ) )

(define (unsetenv var)
  (##sys#check-string var 'unsetenv)
  (##core#inline "C_putenv" (##sys#make-c-string var 'unsetenv))
  (##core#undefined) )

(define get-environment-variables
  (let ([get (foreign-lambda c-string "C_getenventry" int)])
    (lambda ()
      (let loop ([i 0])
	(let ([entry (get i)])
	  (if entry
	      (let scan ([j 0])
		(if (char=? #\= (##core#inline "C_subchar" entry j))
		    (cons (cons (substring entry 0 j) (substring entry (fx+ j 1) (##sys#size entry))) (loop (fx+ i 1)))
		    (scan (fx+ j 1)) ) )
	      '() ) ) ) ) ) )


;;; Time related things:

(define local-timezone-abbreviation
  (foreign-lambda* c-string ()
   "char *z = (_daylight ? _tzname[1] : _tzname[0]);\n"
   "C_return(z);") )


;;; Other things:

(define _exit
  (let ([ex0 (foreign-lambda void "_exit" int)])
    (lambda code
      (ex0 (if (pair? code) (car code) 0)) ) ) )

(define (terminal-port? port)
  (##sys#check-open-port port 'terminal-port?)
  (let ([fp (##sys#peek-unsigned-integer port 0)])
    (and (not (eq? 0 fp)) (##core#inline "C_tty_portp" port) ) ) )

(define (terminal-size port)
  (if (terminal-port? port)
      (values 0 0)
      (##sys#error 'terminal-size "port is not connected to a terminal" port)))

(define-foreign-variable _iofbf int "_IOFBF")
(define-foreign-variable _iolbf int "_IOLBF")
(define-foreign-variable _ionbf int "_IONBF")
(define-foreign-variable _bufsiz int "BUFSIZ")

(define set-buffering-mode!
  (lambda (port mode . size)
    (##sys#check-open-port port 'set-buffering-mode!)
    (let ([size (if (pair? size) (car size) _bufsiz)]
	  [mode (case mode
		  [(###full) _iofbf]
		  [(###line) _iolbf]
		  [(###none) _ionbf]
		  [else (##sys#error 'set-buffering-mode! "invalid buffering-mode" mode port)] ) ] )
      (##sys#check-exact size 'set-buffering-mode!)
      (when (fx< (if (eq? 'stream (##sys#slot port 7))
		     (##core#inline "C_setvbuf" port mode size)
		     -1)
		 0)
	(##sys#error 'set-buffering-mode! "cannot set buffering mode" port mode size) ) ) ) )

;;; Process handling:

(define-foreign-variable _p_overlay int "P_OVERLAY")
(define-foreign-variable _p_wait int "P_WAIT")
(define-foreign-variable _p_nowait int "P_NOWAIT")
(define-foreign-variable _p_nowaito int "P_NOWAITO")
(define-foreign-variable _p_detach int "P_DETACH")

(define spawn/overlay _p_overlay)
(define spawn/wait _p_wait)
(define spawn/nowait _p_nowait)
(define spawn/nowaito _p_nowaito)
(define spawn/detach _p_detach)

; Windows uses a commandline style for process arguments. Thus any
; arguments with embedded whitespace will parse incorrectly. Must
; string-quote such arguments.
(define $quote-args-list
  (lambda (lst exactf)
    (if exactf
	lst
	(let ([needs-quoting?
					; This is essentially (string-any char-whitespace? s) but we don't
					; want a SRFI-13 dependency. (Do we?)
	       (lambda (s)
		 (let ([len (string-length s)])
		   (let loop ([i 0])
		     (cond
		      [(fx= i len) #f]
		      [(char-whitespace? (string-ref s i)) #t]
		      [else (loop (fx+ i 1))]))))])
	  (let loop ([ilst lst] [olst '()])
	    (if (null? ilst)
		(##sys#fast-reverse olst)
		(let ([str (car ilst)])
		  (loop
		   (cdr ilst)
		   (cons
		    (if (needs-quoting? str) (string-append "\"" str "\"") str)
		    olst)) ) ) ) ) ) ) )

(define $exec-setup
  ;; NOTE: We use c-string here instead of scheme-object.
  ;; Because set_exec_* make a copy, this implies a double copy.
  ;; At least it's secure, we can worry about performance later, if at all
  (let ([setarg (foreign-lambda void "C_set_exec_arg" int c-string int)]
	[setenv (foreign-lambda void "C_set_exec_env" int c-string int)]
	[build-exec-argvec
	  (lambda (loc lst argvec-setter idx)
	    (if lst
	      (begin
		(##sys#check-list lst loc)
		(do ([l lst (cdr l)]
		     [i idx (fx+ i 1)] )
		    ((null? l) (argvec-setter i #f 0))
		  (let ([s (car l)])
		    (##sys#check-string s loc)
		    (argvec-setter i s (##sys#size s)) ) ) )
	      (argvec-setter idx #f 0) ) )])
    (lambda (loc filename arglst envlst exactf)
      (##sys#check-string filename loc)
      (let ([s (pathname-strip-directory filename)])
	(setarg 0 s (##sys#size s)) )
      (build-exec-argvec loc (and arglst ($quote-args-list arglst exactf)) setarg 1)
      (build-exec-argvec loc envlst setenv 0)
      (##core#inline "C_flushall")
      (##sys#make-c-string (##sys#expand-home-path filename) loc) ) ) )

(define ($exec-teardown loc msg filename res)
  (##sys#update-errno)
  (##core#inline "C_free_exec_args")
  (##core#inline "C_free_exec_env")
  (if (fx= res -1)
      (##sys#error loc msg filename)
      res ) )

(define (process-execute filename #!optional arglst envlst exactf)
  (let ([prg ($exec-setup 'process-execute filename arglst envlst exactf)])
    ($exec-teardown 'process-execute "cannot execute process" filename
      (if envlst (##core#inline "C_execve" prg) (##core#inline "C_execvp" prg))) ) )

(define (process-spawn mode filename #!optional arglst envlst exactf)
  (let ([prg ($exec-setup 'process-spawn filename arglst envlst exactf)])
    ($exec-teardown 'process-spawn "cannot spawn process" filename
      (if envlst (##core#inline "C_spawnvpe" mode prg) (##core#inline "C_spawnvp" mode prg))) ) )

(define-foreign-variable _shlcmd c-string "C_shlcmd")

(define (##sys#shell-command)
  (or (get-environment-variable "COMSPEC")
      (if (##core#inline "C_get_shlcmd")
	  _shlcmd
	  (begin
	    (##sys#update-errno)
	    (##sys#error '##sys#shell-command "cannot retrieve system directory") ) ) ) )

(define (##sys#shell-command-arguments cmdlin)
  (list "/c" cmdlin) )

(define process-run
  (lambda (f . args)
    (let ([args (if (pair? args) (car args) #f)])
      (if args
	  (process-spawn spawn/nowait f args)
	  (process-spawn spawn/nowait (##sys#shell-command) (##sys#shell-command-arguments f)) ) ) ) )

;;; Run subprocess connected with pipes:
(define-foreign-variable _rdbuf char "C_rdbuf")
(define-foreign-variable _wr0 int "C_wr0_")
(define-foreign-variable _rd1 int "C_rd1_")

; from original by Mejedi
;; ##sys#process
; loc		 caller procedure symbol
; cmd		 pathname or commandline
; args		 string-list or '()
; env		 string-list or #f (currently ignored)
; stdoutf	 #f then share, or #t then create
; stdinf	 #f then share, or #t then create
; stderrf	 #f then share, or #t then create
;
; (values stdin-input-port? stdout-output-port? pid stderr-input-port?)
; where stdin-input-port?, etc. is a port or #f, indicating no port created.

(define ##sys#process
  ;; XXX TODO: When environment is implemented, check for embedded NUL bytes!
  (let ([c-process
	  (foreign-lambda bool "C_process" c-string c-string c-pointer
	    (c-pointer int) (c-pointer int) (c-pointer int) (c-pointer int) int)])
    ; The environment list must be sorted & include current directory
    ; information for the system drives. i.e !C:=...
    ; For now any environment is ignored.
    (lambda (loc cmd args env stdoutf stdinf stderrf #!optional exactf)
      (let ([cmdlin (string-intersperse ($quote-args-list (cons cmd args) exactf))])
	(let-location ([handle int -1]
		       [stdin_fd int -1] [stdout_fd int -1] [stderr_fd int -1])
	  (let ([res
		  (c-process cmd cmdlin #f
		    (location handle)
		    (location stdin_fd) (location stdout_fd) (location stderr_fd)
		    (+ (if stdinf 0 1) (if stdoutf 0 2) (if stderrf 0 4)))])
	    (if res
	      (values
		(and stdoutf (open-input-file* stdout_fd)) ;Parent stdin
		(and stdinf (open-output-file* stdin_fd))  ;Parent stdout
		handle
		(and stderrf (open-input-file* stderr_fd)))
	      (begin
		(##sys#update-errno)
		(##sys#signal-hook #:process-error loc "cannot execute process" cmdlin))) ) ) ) ) ) )

(define process)
(define process*)

(let ([%process
	(lambda (loc err? cmd args env exactf)
	  (let ([chkstrlst
		 (lambda (lst)
		   (##sys#check-list lst loc)
		   (for-each (cut ##sys#check-string <> loc) lst) )])
	    (##sys#check-string cmd loc)
	    (if args
	      (chkstrlst args)
	      (begin
		(set! exactf #t)
		(set! args (##sys#shell-command-arguments cmd))
		(set! cmd (##sys#shell-command)) ) )
	    (when env (chkstrlst env))
	    (receive [in out pid err] (##sys#process loc cmd args env #t #t err? exactf)
	      (if err?
		(values in out pid err)
		(values in out pid) ) ) ) )] )
  (set! process
    (lambda (cmd #!optional args env exactf)
      (%process 'process #f cmd args env exactf) ))
  (set! process*
    (lambda (cmd #!optional args env exactf)
      (%process 'process* #t cmd args env exactf) )) )

(define-foreign-variable _exstatus int "C_exstatus")

(define (##sys#process-wait pid nohang)
  (if (##core#inline "C_process_wait" pid nohang)
    (values pid #t _exstatus)
    (values -1 #f #f) ) )

(define sleep (foreign-lambda int "C_sleep" int))

(define-foreign-variable _hostname c-string "C_hostname")
(define-foreign-variable _osver c-string "C_osver")
(define-foreign-variable _osrel c-string "C_osrel")
(define-foreign-variable _processor c-string "C_processor")

(define get-host-name
  (lambda ()
    (if (##core#inline "C_get_hostname")
      _hostname
      (##sys#error 'get-host-name "cannot retrieve host-name") ) ) )


;;; Getting system-, group- and user-information:

(define system-information
  (lambda ()
    (if (##core#inline "C_sysinfo")
      (list "windows" _hostname _osrel _osver _processor)
      (begin
	(##sys#update-errno)
	(##sys#error 'system-information "cannot retrieve system-information") ) ) ) )

(define-foreign-variable _username c-string "C_username")

(define (current-user-name)
  (if (##core#inline "C_get_user_name")
      _username
      (begin
	(##sys#update-errno)
	(##sys#error 'current-user-name "cannot retrieve current user-name") ) ) )


;;; unimplemented stuff:

(define-syntax define-unimplemented
  (syntax-rules ()
    [(_ ?name)
     (define (?name . _)
       (error '?name (##core#immutable '"this function is not available on this platform")) ) ] ) )

(define-unimplemented change-directory*)
(define-unimplemented change-file-owner)
(define-unimplemented create-fifo)
(define-unimplemented create-session)
(define-unimplemented create-symbolic-link)
(define-unimplemented current-effective-group-id)
(define-unimplemented current-effective-user-id)
(define-unimplemented current-effective-user-name)
(define-unimplemented current-group-id)
(define-unimplemented current-user-id)
(define-unimplemented map-file-to-memory)
(define-unimplemented file-link)
(define-unimplemented file-lock)
(define-unimplemented file-lock/blocking)
(define-unimplemented file-select)
(define-unimplemented file-test-lock)
(define-unimplemented file-truncate)
(define-unimplemented file-unlock)
(define-unimplemented get-groups)
(define-unimplemented group-information)
(define-unimplemented initialize-groups)
(define-unimplemented memory-mapped-file-pointer)
(define-unimplemented parent-process-id)
(define-unimplemented process-fork)
(define-unimplemented process-group-id)
(define-unimplemented process-signal)
(define-unimplemented read-symbolic-link)
(define-unimplemented set-alarm!)
(define-unimplemented set-group-id!)
(define-unimplemented set-groups!)
(define-unimplemented set-process-group-id!)
(define-unimplemented set-root-directory!)
(define-unimplemented set-signal-mask!)
(define-unimplemented set-user-id!)
(define-unimplemented signal-mask)
(define-unimplemented signal-mask!)
(define-unimplemented signal-masked?)
(define-unimplemented signal-unmask!)
(define-unimplemented terminal-name)
(define-unimplemented unmap-file-from-memory)
(define-unimplemented user-information)
(define-unimplemented utc-time->seconds)
(define-unimplemented string->time)

(define errno/wouldblock 0)

(define (fifo? _) #f)
(define (memory-mapped-file? _) #f)

(define map/anonymous 0)
(define map/file 0)
(define map/fixed 0)
(define map/private 0)
(define map/shared 0)
(define open/fsync 0)
(define open/noctty 0)
(define open/nonblock 0)
(define open/sync 0)
(define perm/isgid 0)
(define perm/isuid 0)
(define perm/isvtx 0)
(define prot/exec 0)
(define prot/none 0)
(define prot/read 0)
(define prot/write 0)
