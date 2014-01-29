/* Generated from posixunix.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:46
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: posixunix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file posixunix.c
   unit: posix
*/

#include "chicken.h"


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

static C_TLS int C_wait_status;

#include <unistd.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <utime.h>

#if defined(__sun__) && defined(__svr4__)
# include <sys/tty.h>
#endif

#ifdef HAVE_GRP_H
#include <grp.h>
#endif

#include <sys/mman.h>
#include <time.h>

#ifndef O_FSYNC
# define O_FSYNC O_SYNC
#endif

#ifndef PIPE_BUF
# ifdef __CYGWIN__
#  define PIPE_BUF       _POSIX_PIPE_BUF
# else
#  define PIPE_BUF 1024
# endif
#endif

#ifndef O_BINARY
# define O_BINARY        0
#endif
#ifndef O_TEXT
# define O_TEXT          0
#endif

#ifndef ARG_MAX
# define ARG_MAX 256
#endif

#ifndef MAP_FILE
# define MAP_FILE    0
#endif

#ifndef MAP_ANON
# define MAP_ANON    0
#endif

#if defined(HAVE_CRT_EXTERNS_H)
# include <crt_externs.h>
# define C_getenventry(i)       ((*_NSGetEnviron())[ i ])
#elif defined(C_MACOSX)
# define C_getenventry(i)       NULL
#else
extern char **environ;
# define C_getenventry(i)       (environ[ i ])
#endif

#ifndef ENV_MAX
# define ENV_MAX        1024
#endif

#ifndef FILENAME_MAX
# define FILENAME_MAX          1024
#endif

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS char *C_exec_env[ ENV_MAX ];
static C_TLS struct utsname C_utsname;
static C_TLS struct flock C_flock;
static C_TLS DIR *temphandle;
static C_TLS struct passwd *C_user;
#ifdef HAVE_GRP_H
static C_TLS struct group *C_group;
#else
static C_TLS struct {
  char *gr_name, gr_passwd;
  int gr_gid;
  char *gr_mem[ 1 ];
} C_group = { "", "", 0, { "" } };
#endif
static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct tm C_tm;
static C_TLS fd_set C_fd_sets[ 2 ];
static C_TLS struct timeval C_timeval;
static C_TLS char C_hostbuf[ 256 ];
static C_TLS struct stat C_statbuf;

#define C_mkdir(str)        C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#define C_fchdir(fd)        C_fix(fchdir(C_unfix(fd)))
#define C_chdir(str)        C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

#define C_opendir(x,h)      C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)       (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b)    (strcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(pclose(C_port_file(p)))

#define C_fork              fork
#define C_waitpid(id, o)    C_fix(waitpid(C_unfix(id), &C_wait_status, C_unfix(o)))
#define C_getppid           getppid
#define C_kill(id, s)       C_fix(kill(C_unfix(id), C_unfix(s)))
#define C_getuid            getuid
#define C_getgid            getgid
#define C_geteuid           geteuid
#define C_getegid           getegid
#define C_chown(fn, u, g)   C_fix(chown(C_data_pointer(fn), C_unfix(u), C_unfix(g)))
#define C_chmod(fn, m)      C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setuid(id)        C_fix(setuid(C_unfix(id)))
#define C_setgid(id)        C_fix(setgid(C_unfix(id)))
#define C_seteuid(id)       C_fix(seteuid(C_unfix(id)))
#define C_setegid(id)       C_fix(setegid(C_unfix(id)))
#define C_setsid(dummy)     C_fix(setsid())
#define C_setpgid(x, y)     C_fix(setpgid(C_unfix(x), C_unfix(y)))
#define C_getpgid(x)        C_fix(getpgid(C_unfix(x)))
#define C_symlink(o, n)     C_fix(symlink(C_data_pointer(o), C_data_pointer(n)))
#define C_do_readlink(f, b)    C_fix(readlink(C_data_pointer(f), C_data_pointer(b), FILENAME_MAX))
#define C_getpwnam(n)       C_mk_bool((C_user = getpwnam((char *)C_data_pointer(n))) != NULL)
#define C_getpwuid(u)       C_mk_bool((C_user = getpwuid(C_unfix(u))) != NULL)
#ifdef HAVE_GRP_H
#define C_getgrnam(n)       C_mk_bool((C_group = getgrnam((char *)C_data_pointer(n))) != NULL)
#define C_getgrgid(u)       C_mk_bool((C_group = getgrgid(C_unfix(u))) != NULL)
#else
#define C_getgrnam(n)       C_SCHEME_FALSE
#define C_getgrgid(n)       C_SCHEME_FALSE
#endif
#define C_pipe(d)           C_fix(pipe(C_pipefds))
#define C_truncate(f, n)    C_fix(truncate((char *)C_data_pointer(f), C_num_to_int(n)))
#define C_ftruncate(f, n)   C_fix(ftruncate(C_unfix(f), C_num_to_int(n)))
#define C_uname             C_fix(uname(&C_utsname))
#define C_alarm             alarm
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)     C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_close(fd)         C_fix(close(C_unfix(fd)))
#define C_sleep             sleep
#define C_umask(m)          C_fix(umask(C_unfix(m)))

#define C_lstat(fn)         C_fix(lstat((char *)C_data_pointer(fn), &C_statbuf))

#ifdef C_GNU_ENV
# define C_unsetenv(s)      (unsetenv((char *)C_data_pointer(s)), C_SCHEME_TRUE)
# define C_setenv(x, y)     C_fix(setenv((char *)C_data_pointer(x), (char *)C_data_pointer(y), 1))
#else
# define C_unsetenv(s)      C_fix(putenv((char *)C_data_pointer(s)))
static C_word C_fcall C_setenv(C_word x, C_word y) {
  char *sx = C_data_pointer(x),
       *sy = C_data_pointer(y);
  int n1 = C_strlen(sx), n2 = C_strlen(sy);
  char *buf = (char *)C_malloc(n1 + n2 + 2);
  if(buf == NULL) return(C_fix(0));
  else {
    C_strcpy(buf, sx);
    buf[ n1 ] = '=';
    C_strcpy(buf + n1 + 1, sy);
    return(C_fix(putenv(buf)));
  }
}
#endif

static void C_fcall C_set_arg_string(char **where, int i, char *a, int len) {
  char *ptr;
  if(a != NULL) {
    ptr = (char *)C_malloc(len + 1);
    C_memcpy(ptr, a, len);
    ptr[ len ] = '\0';
    /* Can't barf() here, so the NUL byte check happens in Scheme */
  }
  else ptr = NULL;
  where[ i ] = ptr;
}

static void C_fcall C_free_arg_string(char **where) {
  while((*where) != NULL) C_free(*(where++));
}

static void C_set_timeval(C_word num, struct timeval *tm)
{
  if((num & C_FIXNUM_BIT) != 0) {
    tm->tv_sec = C_unfix(num);
    tm->tv_usec = 0;
  }
  else {
    double i;
    tm->tv_usec = (int)(modf(C_flonum_magnitude(num), &i) * 1000000);
    tm->tv_sec = (int)i;
  }
}

#define C_set_exec_arg(i, a, len)	C_set_arg_string(C_exec_args, i, a, len)
#define C_free_exec_args()		C_free_arg_string(C_exec_args)
#define C_set_exec_env(i, a, len)	C_set_arg_string(C_exec_env, i, a, len)
#define C_free_exec_env()		C_free_arg_string(C_exec_env)

#define C_execvp(f)         C_fix(execvp(C_data_pointer(f), C_exec_args))
#define C_execve(f)         C_fix(execve(C_data_pointer(f), C_exec_args, C_exec_env))

#if defined(__FreeBSD__) || defined(C_MACOSX) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__sgi__) || defined(sgi) || defined(__DragonFly__) || defined(__SUNPRO_C)
static C_TLS int C_uw;
# define C_WIFEXITED(n)      (C_uw = C_unfix(n), C_mk_bool(WIFEXITED(C_uw)))
# define C_WIFSIGNALED(n)    (C_uw = C_unfix(n), C_mk_bool(WIFSIGNALED(C_uw)))
# define C_WIFSTOPPED(n)     (C_uw = C_unfix(n), C_mk_bool(WIFSTOPPED(C_uw)))
# define C_WEXITSTATUS(n)    (C_uw = C_unfix(n), C_fix(WEXITSTATUS(C_uw)))
# define C_WTERMSIG(n)       (C_uw = C_unfix(n), C_fix(WTERMSIG(C_uw)))
# define C_WSTOPSIG(n)       (C_uw = C_unfix(n), C_fix(WSTOPSIG(C_uw)))
#else
# define C_WIFEXITED(n)      C_mk_bool(WIFEXITED(C_unfix(n)))
# define C_WIFSIGNALED(n)    C_mk_bool(WIFSIGNALED(C_unfix(n)))
# define C_WIFSTOPPED(n)     C_mk_bool(WIFSTOPPED(C_unfix(n)))
# define C_WEXITSTATUS(n)    C_fix(WEXITSTATUS(C_unfix(n)))
# define C_WTERMSIG(n)       C_fix(WTERMSIG(C_unfix(n)))
# define C_WSTOPSIG(n)       C_fix(WSTOPSIG(C_unfix(n)))
#endif

#ifdef __CYGWIN__
# define C_mkfifo(fn, m)    C_fix(-1);
#else
# define C_mkfifo(fn, m)    C_fix(mkfifo((char *)C_data_pointer(fn), C_unfix(m)))
#endif

#define C_flock_setup(t, s, n) (C_flock.l_type = C_unfix(t), C_flock.l_start = C_num_to_int(s), C_flock.l_whence = SEEK_SET, C_flock.l_len = C_num_to_int(n), C_SCHEME_UNDEFINED)
#define C_flock_test(p)     (fcntl(fileno(C_port_file(p)), F_GETLK, &C_flock) >= 0 ? (C_flock.l_type == F_UNLCK ? C_fix(0) : C_fix(C_flock.l_pid)) : C_SCHEME_FALSE)
#define C_flock_lock(p)     C_fix(fcntl(fileno(C_port_file(p)), F_SETLK, &C_flock))
#define C_flock_lockw(p)    C_fix(fcntl(fileno(C_port_file(p)), F_SETLKW, &C_flock))

static C_TLS sigset_t C_sigset;
#define C_sigemptyset(d)    (sigemptyset(&C_sigset), C_SCHEME_UNDEFINED)
#define C_sigaddset(s)      (sigaddset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigdelset(s)      (sigdelset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigismember(s)    C_mk_bool(sigismember(&C_sigset, C_unfix(s)))
#define C_sigprocmask_set(d)        C_fix(sigprocmask(SIG_SETMASK, &C_sigset, NULL))
#define C_sigprocmask_block(d)      C_fix(sigprocmask(SIG_BLOCK, &C_sigset, NULL))
#define C_sigprocmask_unblock(d)    C_fix(sigprocmask(SIG_UNBLOCK, &C_sigset, NULL))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)        C_fix(mkstemp(C_c_string(t)))

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(p)          C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#define C_zero_fd_set(i)      FD_ZERO(&C_fd_sets[ i ])
#define C_set_fd_set(i, fd)   FD_SET(fd, &C_fd_sets[ i ])
#define C_test_fd_set(i, fd)  FD_ISSET(fd, &C_fd_sets[ i ])
#define C_C_select(m)         C_fix(select(C_unfix(m), &C_fd_sets[ 0 ], &C_fd_sets[ 1 ], NULL, NULL))
#define C_C_select_t(m, t)    (C_set_timeval(t, &C_timeval), \
			       C_fix(select(C_unfix(m), &C_fd_sets[ 0 ], &C_fd_sets[ 1 ], NULL, &C_timeval)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#if defined(__SVR4) || defined(C_MACOSX)
/* Seen here: http://lists.samba.org/archive/samba-technical/2002-November/025571.html */

static time_t C_timegm(struct tm *t)
{
  time_t tl, tb;
  struct tm *tg;

  tl = mktime (t);
  if (tl == -1)
    {
      t->tm_hour--;
      tl = mktime (t);
      if (tl == -1)
        return -1; /* can't deal with output from strptime */
      tl += 3600;
    }
  tg = gmtime (&tl);
  tg->tm_isdst = 0;
  tb = mktime (tg);
  if (tb == -1)
    {
      tg->tm_hour--;
      tb = mktime (tg);
      if (tb == -1)
        return -1; /* can't deal with output from gmtime */
      tb += 3600;
    }
  return (tl - (tb - tl));
}
#else
#define C_timegm timegm
#endif

#define cpy_tmvec_to_tmstc08(ptm, v) \
    (memset((ptm), 0, sizeof(struct tm)), \
    (ptm)->tm_sec = C_unfix(C_block_item((v), 0)), \
    (ptm)->tm_min = C_unfix(C_block_item((v), 1)), \
    (ptm)->tm_hour = C_unfix(C_block_item((v), 2)), \
    (ptm)->tm_mday = C_unfix(C_block_item((v), 3)), \
    (ptm)->tm_mon = C_unfix(C_block_item((v), 4)), \
    (ptm)->tm_year = C_unfix(C_block_item((v), 5)), \
    (ptm)->tm_wday = C_unfix(C_block_item((v), 6)), \
    (ptm)->tm_yday = C_unfix(C_block_item((v), 7)), \
    (ptm)->tm_isdst = (C_block_item((v), 8) != C_SCHEME_FALSE))

#define cpy_tmvec_to_tmstc9(ptm, v) \
    (((struct tm *)ptm)->tm_gmtoff = -C_unfix(C_block_item((v), 9)))

#define cpy_tmstc08_to_tmvec(v, ptm) \
    (C_set_block_item((v), 0, C_fix(((struct tm *)ptm)->tm_sec)), \
    C_set_block_item((v), 1, C_fix((ptm)->tm_min)), \
    C_set_block_item((v), 2, C_fix((ptm)->tm_hour)), \
    C_set_block_item((v), 3, C_fix((ptm)->tm_mday)), \
    C_set_block_item((v), 4, C_fix((ptm)->tm_mon)), \
    C_set_block_item((v), 5, C_fix((ptm)->tm_year)), \
    C_set_block_item((v), 6, C_fix((ptm)->tm_wday)), \
    C_set_block_item((v), 7, C_fix((ptm)->tm_yday)), \
    C_set_block_item((v), 8, ((ptm)->tm_isdst ? C_SCHEME_TRUE : C_SCHEME_FALSE)))

#define cpy_tmstc9_to_tmvec(v, ptm) \
    (C_set_block_item((v), 9, C_fix(-(ptm)->tm_gmtoff)))

#define C_tm_set_08(v)  cpy_tmvec_to_tmstc08( &C_tm, (v) )
#define C_tm_set_9(v)   cpy_tmvec_to_tmstc9( &C_tm, (v) )

#define C_tm_get_08(v)  cpy_tmstc08_to_tmvec( (v), &C_tm )
#define C_tm_get_9(v)   cpy_tmstc9_to_tmvec( (v), &C_tm )

#if !defined(C_GNU_ENV) || defined(__CYGWIN__) || defined(__uClinux__)

static struct tm *
C_tm_set( C_word v )
{
  C_tm_set_08( v );
  return &C_tm;
}

static C_word
C_tm_get( C_word v )
{
  C_tm_get_08( v );
  return v;
}

#else

static struct tm *
C_tm_set( C_word v )
{
  C_tm_set_08( v );
  C_tm_set_9( v );
  return &C_tm;
}

static C_word
C_tm_get( C_word v )
{
  C_tm_get_08( v );
  C_tm_get_9( v );
  return v;
}

#endif

#define C_asctime(v)    (asctime(C_tm_set(v)))
#define C_a_mktime(ptr, c, v)  C_flonum(ptr, mktime(C_tm_set(v)))
#define C_a_timegm(ptr, c, v)  C_flonum(ptr, C_timegm(C_tm_set(v)))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

#ifdef __linux__
extern char *strptime(const char *s, const char *format, struct tm *tm);
extern pid_t getpgid(pid_t pid);
#endif

#define C_strptime(s, f, v) \
        (strptime(C_c_string(s), C_c_string(f), &C_tm) ? C_tm_get(v) : C_SCHEME_FALSE)

static gid_t *C_groups = NULL;

#define C_get_gid(n)      C_fix(C_groups[ C_unfix(n) ])
#define C_set_gid(n, id)  (C_groups[ C_unfix(n) ] = C_unfix(id), C_SCHEME_UNDEFINED)
#define C_set_groups(n)   C_fix(setgroups(C_unfix(n), C_groups))

#ifdef TIOCGWINSZ
static int get_tty_size(int p, int *rows, int *cols)
{
 struct winsize tty_size;
 int r;

 memset(&tty_size, 0, sizeof tty_size);

 r = ioctl(p, TIOCGWINSZ, &tty_size);
 if (r == 0) {
    *rows = tty_size.ws_row;
    *cols = tty_size.ws_col;
 }
 return r;
}
#else
static int get_tty_size(int p, int *rows, int *cols)
{
 *rows = *cols = 0;
 return -1;
}
#endif

static int set_file_mtime(char *filename, C_word tm)
{
  struct utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return utime(filename, &tb);
}

static C_word C_i_fifo_p(C_word name) 
{
  struct stat buf;
  int res;

  res = stat(C_c_string(name), &buf);

  if(res != 0) {
#ifdef __CYGWIN__
    return C_SCHEME_FALSE;
#else
    if(errno == ENOENT) return C_fix(0);
    else return C_fix(res);
#endif
  }

  if((buf.st_mode & S_IFMT) == S_IFIFO) return C_SCHEME_TRUE;
  else return C_SCHEME_FALSE;
}


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

static C_TLS C_word lf[462];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,102,95,50,54,49,49,32,97,54,52,54,55,41,0,0};
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
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,24),40,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,105,108,101,49,54,54,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,23),40,98,108,111,99,107,45,100,101,118,105,99,101,63,32,102,105,108,101,49,54,56,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,97,99,116,101,114,45,100,101,118,105,99,101,63,32,102,105,108,101,49,55,48,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,102,95,50,56,52,57,32,102,105,108,101,49,55,50,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,17),40,115,111,99,107,101,116,63,32,102,105,108,101,49,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,49,55,54,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,109,111,100,101,32,105,110,112,49,56,50,32,109,49,56,51,32,108,111,99,49,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,32,108,111,99,49,57,52,32,102,100,49,57,53,32,105,110,112,49,57,54,32,114,49,57,55,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,50,48,48,32,46,32,109,50,48,49,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,50,48,51,32,46,32,109,50,48,52,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,22),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,50,49,48,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,34),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,50,49,56,32,46,32,110,101,119,50,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,51,48,50,51,49,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,114,109,100,105,114,32,100,105,114,50,53,56,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,56,54,32,102,50,55,52,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,52,32,103,50,55,49,50,56,49,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,38),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,53,48,32,46,32,116,109,112,50,52,57,50,53,49,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,57,51,50,57,52,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,8),40,102,95,51,50,56,52,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,102,95,51,51,49,57,32,109,51,53,55,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,51,52,57,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,47),40,102,95,51,50,56,57,32,100,105,114,51,51,50,51,51,51,51,51,56,32,102,105,108,51,51,52,51,51,53,51,51,57,32,101,120,116,51,51,54,51,51,55,51,52,48,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,51,51,48,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,17),40,103,108,111,98,32,46,32,112,97,116,104,115,51,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,8),40,102,95,51,52,51,53,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,102,95,51,52,52,48,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,8),40,102,95,51,52,54,48,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,102,115,51,56,54,32,114,51,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,13),40,102,95,51,53,49,51,32,120,51,56,52,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,51,51,32,46,32,95,51,55,56,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,50,52,32,46,32,95,51,55,55,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,8),40,102,95,51,53,53,56,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,8),40,102,95,51,53,54,49,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,8),40,102,95,51,53,54,52,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,8),40,102,95,51,53,54,55,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,18),40,102,95,51,53,55,50,32,120,52,50,48,32,121,52,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,8),40,102,95,51,53,55,48,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,55,57,32,46,32,95,52,49,56,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,8),40,102,95,51,53,55,55,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,31),40,102,105,110,100,45,102,105,108,101,115,32,100,105,114,52,49,53,32,46,32,116,109,112,52,49,52,52,49,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,52,52,55,32,116,109,52,52,56,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,33),40,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,116,109,112,52,53,53,52,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,31),40,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,116,109,112,52,54,56,52,54,57,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,16),40,102,95,51,54,52,54,32,97,52,55,56,52,56,49,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,29),40,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,116,109,112,52,56,55,52,56,56,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,27),40,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,52,57,55,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,102,95,51,55,48,53,32,97,53,48,51,53,48,54,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,24),40,102,95,51,55,49,49,32,97,53,48,57,53,49,50,32,97,53,48,56,53,49,51,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,26),40,102,95,51,55,49,55,32,116,109,53,50,48,32,46,32,116,109,112,53,49,57,53,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,53,51,52,32,112,114,111,99,53,51,53,41,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,20),40,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,8),40,102,95,51,56,48,55,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,34),40,102,95,51,56,49,50,32,101,112,105,100,53,53,57,32,101,110,111,114,109,53,54,48,32,101,99,111,100,101,53,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,24),40,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,53,52,52,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,102,105,108,101,45,110,111,110,98,108,111,99,107,105,110,103,33,32,97,54,48,52,54,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,108,101,45,115,101,108,101,99,116,45,111,110,101,32,97,54,48,57,54,49,50,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,32),40,102,95,51,57,48,48,32,97,54,53,51,54,53,54,32,97,54,53,50,54,53,55,32,97,54,53,49,54,53,56,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,39),40,102,105,108,101,45,99,111,110,116,114,111,108,32,102,100,54,54,52,32,99,109,100,54,54,53,32,46,32,116,109,112,54,54,51,54,54,54,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,54,55,55,32,102,108,97,103,115,54,55,56,32,46,32,109,111,100,101,54,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,18),40,102,105,108,101,45,99,108,111,115,101,32,102,100,54,56,55,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,37),40,102,105,108,101,45,114,101,97,100,32,102,100,54,57,48,32,115,105,122,101,54,57,49,32,46,32,98,117,102,102,101,114,54,57,50,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,38),40,102,105,108,101,45,119,114,105,116,101,32,102,100,55,48,49,32,98,117,102,102,101,114,55,48,50,32,46,32,115,105,122,101,55,48,51,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,26),40,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,55,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,16),40,102,95,52,48,56,52,32,97,55,50,50,55,50,53,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,24),40,102,95,52,48,56,57,32,97,55,50,55,55,51,48,32,97,55,50,54,55,51,49,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,24),40,102,95,52,48,57,55,32,97,55,51,51,55,51,54,32,97,55,51,50,55,51,55,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,14),40,102,95,52,49,55,52,32,102,100,56,52,50,41,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,51,50,32,103,56,51,57,56,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,14),40,102,95,52,50,49,57,32,102,100,56,50,49,41,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,49,49,32,103,56,49,56,56,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,14),40,102,95,52,50,55,53,32,102,100,55,57,48,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,56,48,32,103,55,56,55,55,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,14),40,102,95,52,51,49,56,32,102,100,55,54,50,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,53,50,32,103,55,53,57,55,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,115,101,108,101,99,116,32,102,100,115,114,55,51,56,32,102,100,115,119,55,51,57,32,46,32,116,105,109,101,111,117,116,55,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,56,53,55,32,112,111,115,56,53,56,32,46,32,119,104,101,110,99,101,56,53,57,41,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,23),40,102,95,52,52,52,56,32,108,111,99,56,57,55,32,110,97,109,101,56,57,56,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,100,105,114,56,57,51,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,8),40,102,95,52,52,55,53,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,48),40,102,95,52,52,56,48,32,100,105,114,57,48,49,57,48,50,57,48,55,32,102,105,108,101,57,48,51,57,48,52,57,48,56,32,101,120,116,57,48,53,57,48,54,57,48,57,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,23),40,102,95,52,52,56,56,32,108,111,99,57,49,53,32,110,97,109,101,57,49,54,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,56,56,49,32,46,32,116,109,112,56,56,48,56,56,50,41,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,57,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,25),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,42,32,102,100,57,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,108,111,99,57,51,51,32,99,109,100,57,51,52,32,105,110,112,57,51,53,32,114,57,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,57,51,57,32,46,32,109,57,52,48,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,57,52,56,32,46,32,109,57,52,57,41};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,57,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,27),40,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,57,54,49,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,8),40,102,95,52,54,57,54,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,21),40,102,95,52,55,48,49,32,46,32,114,101,115,117,108,116,115,57,55,54,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,47),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,57,55,50,32,112,114,111,99,57,55,51,32,46,32,109,111,100,101,57,55,52,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,8),40,102,95,52,55,49,56,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,21),40,102,95,52,55,50,51,32,46,32,114,101,115,117,108,116,115,57,56,51,41,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,48),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,57,55,57,32,112,114,111,99,57,56,48,32,46,32,109,111,100,101,57,56,49,41};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,8),40,102,95,52,55,52,48,41};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,21),40,102,95,52,55,53,48,32,46,32,114,101,115,117,108,116,115,57,57,56,41,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,8),40,102,95,52,55,52,53,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,8),40,102,95,52,55,53,56,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,48),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,57,56,54,32,116,104,117,110,107,57,56,55,32,46,32,109,111,100,101,57,56,56,41};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,8),40,102,95,52,55,55,50,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,22),40,102,95,52,55,56,50,32,46,32,114,101,115,117,108,116,115,49,48,49,53,41,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,8),40,102,95,52,55,55,55,41};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,8),40,102,95,52,55,57,48,41};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,50),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,49,48,48,51,32,116,104,117,110,107,49,48,48,52,32,46,32,109,111,100,101,49,48,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,13),40,99,114,101,97,116,101,45,112,105,112,101,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,14),40,102,95,52,56,52,53,32,115,49,48,54,49,41,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,53,49,32,103,49,48,53,56,49,48,54,52,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,27),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,115,49,48,52,56,41,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,115,105,103,115,49,48,55,51,32,109,97,115,107,49,48,55,52,41};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,13),40,115,105,103,110,97,108,45,109,97,115,107,41,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,24),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,115,105,103,49,48,55,56,41};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,22),40,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,49,48,56,49,41,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,24),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,115,105,103,49,48,56,53,41};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,41),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,117,115,101,114,49,49,49,55,32,46,32,116,109,112,49,49,49,54,49,49,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,49,53,54,41,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,43),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,103,114,111,117,112,49,49,52,51,32,46,32,116,109,112,49,49,52,50,49,49,52,52,41,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,49,55,53,41,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,12),40,103,101,116,45,103,114,111,117,112,115,41,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,49,49,56,50,32,108,115,116,49,49,56,52,32,105,49,49,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,22),40,115,101,116,45,103,114,111,117,112,115,33,32,108,115,116,48,49,49,56,49,41,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,28),40,102,95,53,50,53,57,32,97,49,49,57,53,49,49,57,57,32,97,49,49,57,52,49,50,48,48,41,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,35),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,117,115,101,114,49,50,48,50,32,105,100,49,50,48,51,41,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,34),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,49,50,52,55,32,109,49,50,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,42),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,102,110,49,50,53,50,32,117,105,100,49,50,53,51,32,103,105,100,49,50,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,36),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,49,50,53,57,32,97,99,99,49,50,54,48,32,108,111,99,49,50,54,49,41,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,50,54,53,41};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,50,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,35),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,50,54,55,41,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,16),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,41};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,111,108,100,49,50,56,55,32,110,101,119,49,50,56,56,41,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,44),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,49,50,57,56,32,46,32,116,109,112,49,50,57,55,49,50,57,57,41,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,28),40,102,95,53,53,50,48,32,97,49,51,49,50,49,51,49,55,32,97,49,51,49,49,49,51,49,56,41,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,108,105,110,107,32,111,108,100,49,51,50,49,32,110,101,119,49,51,50,50,41,0,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,8),40,102,95,53,53,56,55,41};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,8),40,102,95,53,54,49,52,41};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,8),40,102,95,53,54,50,49,41};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,8),40,102,95,53,55,50,50,41};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,8),40,102,95,53,55,51,51,41};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,8),40,102,95,53,55,52,52,41};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,8),40,102,95,53,55,54,52,41};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,110,49,51,57,56,32,109,49,51,57,57,32,115,116,97,114,116,49,52,48,48,41,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,42),40,102,95,53,55,55,50,32,112,111,114,116,49,51,57,51,32,110,49,51,57,52,32,100,101,115,116,49,51,57,53,32,115,116,97,114,116,49,51,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,24),40,102,95,53,56,52,55,32,99,117,114,49,52,49,56,32,112,116,114,49,52,49,57,41};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,8),40,102,95,53,57,49,51,41};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,43),40,102,95,53,57,49,56,32,100,101,115,116,49,52,51,56,49,52,51,57,49,52,52,50,32,99,111,110,116,63,49,52,52,48,49,52,52,49,49,52,52,51,41,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,49,52,49,54,41,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,27),40,102,95,53,56,51,57,32,112,111,114,116,49,52,49,51,32,108,105,109,105,116,49,52,49,52,41,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,17),40,102,95,53,57,51,56,32,112,111,114,116,49,52,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,62),40,35,35,115,121,115,35,99,117,115,116,111,109,45,105,110,112,117,116,45,112,111,114,116,32,108,111,99,49,51,51,49,32,110,97,109,49,51,51,50,32,102,100,49,51,51,51,32,46,32,116,109,112,49,51,51,48,49,51,51,52,41,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,22),40,112,111,107,101,32,115,116,114,49,52,55,56,32,108,101,110,49,52,55,57,41,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,16),40,102,95,54,49,48,49,32,115,116,114,49,53,49,50,41};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,8),40,102,95,54,49,48,54,41};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,8),40,102,95,54,49,50,54,41};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,16),40,102,95,54,49,51,51,32,115,116,114,49,52,57,53,41};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,32,114,101,109,49,53,48,48,32,115,116,97,114,116,49,53,48,49,32,108,101,110,49,53,48,50,41};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,16),40,102,95,54,49,52,54,32,115,116,114,49,52,57,56,41};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,63),40,35,35,115,121,115,35,99,117,115,116,111,109,45,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,49,52,54,48,32,110,97,109,49,52,54,49,32,102,100,49,52,54,50,32,46,32,116,109,112,49,52,53,57,49,52,54,51,41,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,102,110,97,109,101,49,53,50,48,32,111,102,102,49,53,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,32,112,111,114,116,49,53,50,56,32,97,114,103,115,49,53,50,57,32,108,111,99,49,53,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,30),40,101,114,114,32,109,115,103,49,53,52,53,32,108,111,99,107,49,53,52,54,32,108,111,99,49,53,52,55,41,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,108,111,99,107,32,112,111,114,116,49,53,52,56,32,46,32,97,114,103,115,49,53,52,57,41,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,40),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,112,111,114,116,49,53,53,49,32,46,32,97,114,103,115,49,53,53,50,41};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,14),40,102,95,54,52,48,49,32,99,49,53,54,52,41,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,36),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,112,111,114,116,49,53,53,52,32,46,32,97,114,103,115,49,53,53,53,41,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,22),40,102,105,108,101,45,117,110,108,111,99,107,32,108,111,99,107,49,53,55,49,41,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,102,105,102,111,32,102,110,97,109,101,49,53,55,53,32,46,32,109,111,100,101,49,53,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,20),40,102,105,102,111,63,32,102,105,108,101,110,97,109,101,49,53,56,49,41,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,24),40,115,101,116,101,110,118,32,118,97,114,49,53,56,57,32,118,97,108,49,53,57,48,41};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,18),40,117,110,115,101,116,101,110,118,32,118,97,114,49,53,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,18),40,102,95,54,53,52,52,32,97,49,54,48,48,49,54,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,12),40,115,99,97,110,32,106,49,54,48,57,41,0,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,54,48,54,41,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,27),40,103,101,116,45,101,110,118,105,114,111,110,109,101,110,116,45,118,97,114,105,97,98,108,101,115,41,0,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,68),40,102,95,54,54,50,48,32,97,49,54,50,56,49,54,51,50,32,97,49,54,50,55,49,54,51,51,32,97,49,54,50,54,49,54,51,52,32,97,49,54,50,53,49,54,51,53,32,97,49,54,50,52,49,54,51,54,32,97,49,54,50,51,49,54,51,55,41,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,72),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,97,100,100,114,49,54,52,48,32,108,101,110,49,54,52,49,32,112,114,111,116,49,54,52,50,32,102,108,97,103,49,54,52,51,32,102,100,49,54,52,52,32,46,32,111,102,102,49,54,52,53,41};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,28),40,102,95,54,54,56,54,32,97,49,54,53,53,49,54,53,57,32,97,49,54,53,52,49,54,54,48,41,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,43),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,109,109,97,112,49,54,54,50,32,46,32,108,101,110,49,54,54,51,41,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,37),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,109,109,97,112,49,54,54,55,41,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,120,49,54,55,48,41,0,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,18),40,102,95,54,55,52,51,32,97,49,54,55,52,49,54,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,28),40,102,95,54,55,52,57,32,97,49,54,56,48,49,54,56,51,32,97,49,54,55,57,49,54,56,52,41,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,35),40,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,49,54,57,49,32,46,32,116,109,112,49,54,57,48,49,54,57,50,41,0,0,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,38),40,102,95,54,56,48,51,32,97,49,55,48,56,49,55,49,49,32,97,49,55,48,55,49,55,49,50,32,97,49,55,48,54,49,55,49,51,41,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,36),40,115,116,114,105,110,103,45,62,116,105,109,101,32,116,105,109,49,55,49,57,32,46,32,116,109,112,49,55,49,56,49,55,50,48,41,0,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,26),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,49,55,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,18),40,102,95,54,56,53,55,32,97,49,55,51,56,49,55,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,18),40,95,101,120,105,116,32,46,32,99,111,100,101,49,55,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,22),40,115,101,116,45,97,108,97,114,109,33,32,97,49,55,52,52,49,55,52,55,41,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,50),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,49,55,52,57,32,109,111,100,101,49,55,53,48,32,46,32,115,105,122,101,49,55,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,25),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,49,55,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,116,101,114,109,105,110,97,108,45,99,104,101,99,107,32,99,97,108,108,101,114,49,55,54,55,32,112,111,114,116,49,55,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,18),40,102,95,54,57,55,57,32,97,49,55,55,51,49,55,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,112,111,114,116,49,55,55,56,41};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,38),40,102,95,54,57,57,56,32,97,49,55,56,52,49,55,56,55,32,97,49,55,56,51,49,55,56,56,32,97,49,55,56,50,49,55,56,57,41,0,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,49,55,57,48,41};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,8),40,102,95,55,48,51,55,41};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,8),40,102,95,55,48,53,52,41};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,18),40,102,95,55,48,56,49,32,97,49,56,50,51,49,56,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,26),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,116,104,117,110,107,49,56,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,38),40,102,95,55,48,57,54,32,97,49,56,51,54,49,56,52,48,32,97,49,56,51,53,49,56,52,49,32,97,49,56,51,52,49,56,52,50,41,0,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,8),40,102,95,55,49,49,52,41};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,38),40,102,95,55,49,49,54,32,97,49,56,52,56,49,56,53,50,32,97,49,56,52,55,49,56,53,51,32,97,49,56,52,54,49,56,53,52,41,0,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,8),40,102,95,55,49,51,52,41};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,25),40,100,111,108,111,111,112,49,56,56,48,32,101,108,49,56,56,50,32,105,49,56,56,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li224[] C_aligned={C_lihdr(0,0,25),40,100,111,108,111,111,112,49,56,55,54,32,97,108,49,56,55,56,32,105,49,56,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li225[] C_aligned={C_lihdr(0,0,44),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,49,56,54,51,32,46,32,116,109,112,49,56,54,50,49,56,54,52,41,0,0,0,0};
static C_char C_TLS li226[] C_aligned={C_lihdr(0,0,8),40,102,95,55,50,56,57,41};
static C_char C_TLS li227[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,57,48,51,32,110,111,104,97,110,103,49,57,48,52,41,0};
static C_char C_TLS li228[] C_aligned={C_lihdr(0,0,19),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0};
static C_char C_TLS li229[] C_aligned={C_lihdr(0,0,17),40,115,108,101,101,112,32,97,49,57,49,53,49,57,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li230[] C_aligned={C_lihdr(0,0,33),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,105,100,49,57,50,48,32,46,32,115,105,103,49,57,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li231[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li232[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,49,57,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li233[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,114,117,110,32,102,49,57,51,51,32,46,32,97,114,103,115,49,57,51,52,41,0,0};
static C_char C_TLS li234[] C_aligned={C_lihdr(0,0,33),40,102,95,55,51,57,52,32,108,111,99,49,57,52,50,32,102,100,49,57,52,51,32,115,116,100,102,100,49,57,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li235[] C_aligned={C_lihdr(0,0,8),40,102,95,55,52,50,50,41};
static C_char C_TLS li236[] C_aligned={C_lihdr(0,0,30),40,102,95,55,52,50,55,32,95,49,57,53,55,32,102,108,103,49,57,53,56,32,99,111,100,49,57,53,57,41,0,0};
static C_char C_TLS li237[] C_aligned={C_lihdr(0,0,8),40,102,95,55,52,48,56,41};
static C_char C_TLS li238[] C_aligned={C_lihdr(0,0,61),40,102,95,55,52,48,54,32,108,111,99,49,57,53,48,32,112,105,100,49,57,53,49,32,99,108,115,118,101,99,49,57,53,50,32,105,100,120,49,57,53,51,32,105,100,120,97,49,57,53,52,32,105,100,120,98,49,57,53,53,41,0,0,0};
static C_char C_TLS li239[] C_aligned={C_lihdr(0,0,8),40,102,95,55,52,52,56,41};
static C_char C_TLS li240[] C_aligned={C_lihdr(0,0,20),40,102,95,55,52,53,51,32,105,49,57,54,52,32,111,49,57,54,53,41,0,0,0,0};
static C_char C_TLS li241[] C_aligned={C_lihdr(0,0,25),40,102,95,55,52,52,48,32,108,111,99,49,57,54,49,32,112,111,114,116,49,57,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li242[] C_aligned={C_lihdr(0,0,41),40,102,95,55,52,53,55,32,108,111,99,49,57,54,54,32,112,105,112,101,49,57,54,55,32,112,111,114,116,49,57,54,56,32,102,100,49,57,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li243[] C_aligned={C_lihdr(0,0,44),40,102,95,55,52,54,54,32,108,111,99,49,57,55,52,32,112,105,112,101,49,57,55,53,32,112,111,114,116,49,57,55,54,32,115,116,100,102,100,49,57,55,55,41,0,0,0,0};
static C_char C_TLS li244[] C_aligned={C_lihdr(0,0,17),40,102,95,55,52,55,56,32,112,105,112,101,49,57,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li245[] C_aligned={C_lihdr(0,0,8),40,102,95,55,53,48,57,41};
static C_char C_TLS li246[] C_aligned={C_lihdr(0,0,75),40,115,112,97,119,110,32,108,111,99,49,57,56,55,32,99,109,100,49,57,56,56,32,97,114,103,115,49,57,56,57,32,101,110,118,49,57,57,48,32,115,116,100,111,117,116,102,49,57,57,49,32,115,116,100,105,110,102,49,57,57,50,32,115,116,100,101,114,114,102,49,57,57,51,41,0,0,0,0,0};
static C_char C_TLS li247[] C_aligned={C_lihdr(0,0,73),40,102,95,55,53,50,54,32,108,111,99,50,48,48,48,32,112,105,100,50,48,48,49,32,99,109,100,50,48,48,50,32,112,105,112,101,50,48,48,51,32,115,116,100,102,50,48,48,52,32,115,116,100,102,100,50,48,48,53,32,111,110,45,99,108,111,115,101,50,48,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li248[] C_aligned={C_lihdr(0,0,73),40,102,95,55,53,51,54,32,108,111,99,50,48,48,56,32,112,105,100,50,48,48,57,32,99,109,100,50,48,49,48,32,112,105,112,101,50,48,49,49,32,115,116,100,102,50,48,49,50,32,115,116,100,102,100,50,48,49,51,32,111,110,45,99,108,111,115,101,50,48,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li249[] C_aligned={C_lihdr(0,0,8),40,102,95,55,53,53,50,41};
static C_char C_TLS li250[] C_aligned={C_lihdr(0,0,51),40,102,95,55,53,53,55,32,105,110,112,105,112,101,50,48,50,51,32,111,117,116,112,105,112,101,50,48,50,52,32,101,114,114,112,105,112,101,50,48,50,53,32,112,105,100,50,48,50,54,41,0,0,0,0,0};
static C_char C_TLS li251[] C_aligned={C_lihdr(0,0,83),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,50,48,49,54,32,99,109,100,50,48,49,55,32,97,114,103,115,50,48,49,56,32,101,110,118,50,48,49,57,32,115,116,100,111,117,116,102,50,48,50,48,32,115,116,100,105,110,102,50,48,50,49,32,115,116,100,101,114,114,102,50,48,50,50,41,0,0,0,0,0};
static C_char C_TLS li252[] C_aligned={C_lihdr(0,0,22),40,102,95,55,53,57,55,32,103,50,48,53,52,50,48,53,53,50,48,53,54,41,0,0};
static C_char C_TLS li253[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,52,49,32,103,50,48,52,56,50,48,54,48,41,0,0,0};
static C_char C_TLS li254[] C_aligned={C_lihdr(0,0,16),40,102,95,55,53,57,51,32,108,115,116,50,48,51,56,41};
static C_char C_TLS li255[] C_aligned={C_lihdr(0,0,8),40,102,95,55,54,51,53,41};
static C_char C_TLS li256[] C_aligned={C_lihdr(0,0,56),40,102,95,55,53,57,49,32,108,111,99,50,48,51,49,32,101,114,114,63,50,48,51,50,32,99,109,100,50,48,51,51,32,97,114,103,115,50,48,51,52,32,101,110,118,50,48,51,53,32,107,50,48,51,54,41};
static C_char C_TLS li257[] C_aligned={C_lihdr(0,0,32),40,102,95,55,54,54,57,32,105,50,48,56,54,32,111,50,48,56,55,32,112,50,48,56,56,32,101,50,48,56,57,41};
static C_char C_TLS li258[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,50,48,55,52,32,46,32,116,109,112,50,48,55,51,50,48,55,53,41,0};
static C_char C_TLS li259[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,50,48,57,53,32,46,32,116,109,112,50,48,57,52,50,48,57,54,41};
static C_char C_TLS li260[] C_aligned={C_lihdr(0,0,18),40,102,95,55,55,51,55,32,97,50,49,49,48,50,49,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li261[] C_aligned={C_lihdr(0,0,29),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,100,105,114,50,49,49,54,41,0,0,0};
static C_char C_TLS li262[] C_aligned={C_lihdr(0,0,16),40,102,95,55,55,55,48,32,112,105,100,49,50,55,54,41};
static C_char C_TLS li263[] C_aligned={C_lihdr(0,0,25),40,102,95,55,55,56,53,32,112,105,100,49,50,56,49,32,112,103,105,100,49,50,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li264[] C_aligned={C_lihdr(0,0,8),40,102,95,55,56,48,52,41};
static C_char C_TLS li265[] C_aligned={C_lihdr(0,0,15),40,102,95,55,56,48,55,32,105,100,49,49,48,57,41,0};
static C_char C_TLS li266[] C_aligned={C_lihdr(0,0,8),40,102,95,55,56,50,49,41};
static C_char C_TLS li267[] C_aligned={C_lihdr(0,0,15),40,102,95,55,56,50,52,32,105,100,49,49,48,52,41,0};
static C_char C_TLS li268[] C_aligned={C_lihdr(0,0,8),40,102,95,55,56,51,56,41};
static C_char C_TLS li269[] C_aligned={C_lihdr(0,0,15),40,102,95,55,56,52,49,32,105,100,49,48,57,57,41,0};
static C_char C_TLS li270[] C_aligned={C_lihdr(0,0,8),40,102,95,55,56,53,53,41};
static C_char C_TLS li271[] C_aligned={C_lihdr(0,0,15),40,102,95,55,56,53,56,32,105,100,49,48,57,52,41,0};
static C_char C_TLS li272[] C_aligned={C_lihdr(0,0,16),40,102,95,55,56,55,50,32,112,111,114,116,56,54,57,41};
static C_char C_TLS li273[] C_aligned={C_lihdr(0,0,15),40,102,95,55,57,48,57,32,115,105,103,53,52,48,41,0};
static C_char C_TLS li274[] C_aligned={C_lihdr(0,0,20),40,102,95,55,57,49,55,32,46,32,116,109,112,52,51,49,52,51,50,41,0,0,0,0};
static C_char C_TLS li275[] C_aligned={C_lihdr(0,0,14),40,102,95,55,57,52,48,32,117,109,52,52,52,41,0,0};
static C_char C_TLS li276[] C_aligned={C_lihdr(0,0,13),40,102,95,55,57,52,53,32,102,49,48,56,41,0,0,0};
static C_char C_TLS li277[] C_aligned={C_lihdr(0,0,24),40,102,95,55,57,53,52,32,97,49,49,54,49,50,48,32,97,49,49,53,49,50,49,41};
static C_char C_TLS li278[] C_aligned={C_lihdr(0,0,18),40,102,95,55,57,53,48,32,102,49,49,48,32,116,49,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li279[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k7740 */
static C_word C_fcall stub2111(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2111(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from k7317 */
static C_word C_fcall stub1916(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1916(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_sleep(t0));
return C_r;}

/* from parent-process-id in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1912(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1912(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from f_7134 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1856(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1856(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_env();
return C_r;}

/* from k7126 */
static C_word C_fcall stub1849(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1849(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from f_7114 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1844(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1844(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k7106 */
static C_word C_fcall stub1837(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1837(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k7084 */
static C_word C_fcall stub1824(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1824(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from f_7054 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1811(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1811(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1804(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1804(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
if(gethostname(C_hostbuf, 256) == -1) C_return(NULL);else C_return(C_hostbuf);
C_ret:
#undef return

return C_r;}

/* from k7007 */
static C_word C_fcall stub1785(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1785(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k6986 */
static C_word C_fcall stub1774(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1774(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k6879 */
static C_word C_fcall stub1745(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1745(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

/* from k6860 */
static C_word C_fcall stub1739(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1739(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1733(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1733(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;

#if !defined(__CYGWIN__) && !defined(__SVR4) && !defined(__uClinux__) && !defined(__hpux__)
time_t clock = time(NULL);struct tm *ltm = C_localtime(&clock);char *z = ltm ? (char *)ltm->tm_zone : 0;
#else
char *z = (daylight ? tzname[1] : tzname[0]);
#endif
C_return(z);
C_ret:
#undef return

return C_r;}

/* from f_6803 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1709(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1709(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
C_r=((C_word)C_strptime(t0,t1,t2));
return C_r;}

/* from f_6749 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1681(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1681(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from f_6743 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1675(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1675(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k6693 */
static C_word C_fcall stub1656(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1656(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k6639 */
static C_word C_fcall stub1629(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub1629(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from k6551 */
static C_word C_fcall stub1601(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1601(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k5527 in k5523 */
static C_word C_fcall stub1313(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1313(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from k5266 */
static C_word C_fcall stub1196(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1196(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)initgroups(t0,t1));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub1166(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1166(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
if(C_groups != NULL) C_free(C_groups);C_groups = (gid_t *)C_malloc(sizeof(gid_t) * n);if(C_groups == NULL) C_return(0);else C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1161(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1161(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
C_return(getgroups(n, C_groups));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1133(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1133(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
C_return(C_group->gr_mem[ i ]);
C_ret:
#undef return

return C_r;}

/* from f_7804 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1107(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1107(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from f_7821 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1102(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1102(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from f_7838 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1097(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1097(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from f_7855 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub1092(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1092(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

/* from k4103 */
static C_word C_fcall stub734(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub734(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mk_bool(C_test_fd_set(t0,t1));
return C_r;}

/* from k4095 */
static C_word C_fcall stub728(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub728(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_set_fd_set(t0,t1);
return C_r;}

/* from k4087 */
static C_word C_fcall stub723(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub723(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_zero_fd_set(t0);
return C_r;}

/* from k3909 */
static C_word C_fcall stub654(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub654(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub610(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub610(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;struct timeval tm;FD_ZERO(&in);FD_SET(fd, &in);tm.tv_sec = tm.tv_usec = 0;if(select(fd + 1, &in, NULL, NULL, &tm) == -1) C_return(-1);else C_return(FD_ISSET(fd, &in) ? 1 : 0);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub605(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub605(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) C_return(0);C_return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

/* from f_3711 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub510(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub510(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from f_3705 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static C_word C_fcall stub504(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub504(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k3653 */
static C_word C_fcall stub479(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub479(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k7957 */
static C_word C_fcall stub117(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub117(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k2618 */
static C_word C_fcall stub65(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub65(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2672)
static void C_ccall f_2672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_7917)
static void C_ccall f_7917(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7917)
static void C_ccall f_7917r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4427)
static void C_ccall f_4427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2636)
static void C_fcall f_2636(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7909)
static void C_ccall f_7909(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4438)
static void C_fcall f_4438(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6252)
static void C_ccall f_6252(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2915)
static void C_fcall f_2915(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7980)
static void C_ccall f_7980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4863)
static void C_fcall f_4863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5117)
static void C_ccall f_5117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_fcall f_5104(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7968)
static void C_ccall f_7968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7959)
static void C_ccall f_7959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7954)
static void C_ccall f_7954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7950)
static void C_ccall f_7950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7945)
static void C_ccall f_7945(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6030)
static void C_fcall f_6030(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7948)
static void C_ccall f_7948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6036)
static void C_ccall f_6036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7940)
static void C_ccall f_7940(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6028)
static void C_ccall f_6028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6012)
static void C_ccall f_6012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6012)
static void C_ccall f_6012r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_6467)
static void C_ccall f_6467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3005)
static void C_fcall f_3005(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6479)
static void C_ccall f_6479(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6486)
static void C_ccall f_6486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7798)
static void C_ccall f_7798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_fcall f_4445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7770)
static void C_ccall f_7770(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6464)
static void C_ccall f_6464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7775)
static void C_ccall f_7775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5403)
static void C_ccall f_5403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5400)
static void C_ccall f_5400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4726)
static void C_ccall f_4726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5432)
static void C_ccall f_5432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7780)
static void C_ccall f_7780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7785)
static void C_ccall f_7785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5055)
static void C_ccall f_5055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5053)
static void C_ccall f_5053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5085)
static void C_fcall f_5085(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7886)
static void C_ccall f_7886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7402)
static void C_ccall f_7402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7406)
static void C_ccall f_7406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7408)
static void C_ccall f_7408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7877)
static void C_ccall f_7877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6780)
static void C_ccall f_6780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7875)
static void C_ccall f_7875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4889)
static void C_fcall f_4889(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7453)
static void C_ccall f_7453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7457)
static void C_ccall f_7457(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7060)
static void C_ccall f_7060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6778)
static void C_ccall f_6778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7056)
static void C_ccall f_7056(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7056)
static void C_ccall f_7056r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5154)
static void C_ccall f_5154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5096)
static void C_ccall f_5096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5650)
static void C_ccall f_5650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5652)
static void C_ccall f_5652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7557)
static void C_ccall f_7557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7552)
static void C_ccall f_7552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7546)
static void C_ccall f_7546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6304)
static void C_fcall f_6304(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7536)
static void C_ccall f_7536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_7539)
static void C_ccall f_7539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7215)
static void C_ccall f_7215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7516)
static void C_ccall f_7516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7514)
static void C_ccall f_7514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7512)
static void C_ccall f_7512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7509)
static void C_ccall f_7509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7507)
static void C_ccall f_7507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7504)
static void C_ccall f_7504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5632)
static void C_ccall f_5632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4180)
static void C_ccall f_4180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7081)
static void C_ccall f_7081(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7080)
static void C_ccall f_7080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5274)
static void C_ccall f_5274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7569)
static void C_ccall f_7569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7566)
static void C_ccall f_7566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5264)
static void C_ccall f_5264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4125)
static void C_fcall f_4125(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4758)
static void C_ccall f_4758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6652)
static void C_ccall f_6652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6654)
static void C_ccall f_6654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6656)
static void C_ccall f_6656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6650)
static void C_fcall f_6650(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5288)
static void C_ccall f_5288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6268)
static void C_ccall f_6268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4745)
static void C_ccall f_4745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6262)
static void C_fcall f_6262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4571)
static void C_fcall f_4571(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7529)
static void C_ccall f_7529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7526)
static void C_ccall f_7526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6277)
static void C_ccall f_6277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7525)
static void C_ccall f_7525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4772)
static void C_ccall f_4772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7522)
static void C_ccall f_7522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6274)
static void C_ccall f_6274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6288)
static void C_fcall f_6288(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6668)
static void C_ccall f_6668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4785)
static void C_ccall f_4785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4782)
static void C_ccall f_4782(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4782)
static void C_ccall f_4782r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6644)
static void C_ccall f_6644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_6644)
static void C_ccall f_6644r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_6648)
static void C_ccall f_6648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4032)
static void C_fcall f_4032(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6988)
static void C_ccall f_6988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7591)
static void C_ccall f_7591(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7597)
static void C_ccall f_7597(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7593)
static void C_ccall f_7593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6992)
static void C_ccall f_6992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6998)
static void C_ccall f_6998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4613)
static void C_ccall f_4613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7581)
static void C_ccall f_7581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7440)
static void C_ccall f_7440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7448)
static void C_ccall f_7448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7572)
static void C_ccall f_7572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3625)
static void C_ccall f_3625(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3625)
static void C_ccall f_3625r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7578)
static void C_ccall f_7578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7575)
static void C_ccall f_7575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4673)
static void C_ccall f_4673(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7422)
static void C_ccall f_7422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7427)
static void C_ccall f_7427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5938)
static void C_ccall f_5938(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6844)
static void C_ccall f_6844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6593)
static void C_ccall f_6593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6596)
static void C_ccall f_6596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6849)
static void C_ccall f_6849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4965)
static void C_ccall f_4965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4968)
static void C_ccall f_4968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6834)
static void C_ccall f_6834(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6838)
static void C_ccall f_6838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6346)
static void C_fcall f_6346(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6571)
static void C_fcall f_6571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7233)
static void C_ccall f_7233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3270)
static void C_fcall f_3270(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4373)
static void C_ccall f_4373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5844)
static void C_fcall f_5844(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4995)
static void C_ccall f_4995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5913)
static void C_ccall f_5913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6823)
static void C_ccall f_6823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6820)
static void C_ccall f_6820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6114)
static void C_ccall f_6114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5847)
static void C_ccall f_5847(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4659)
static void C_ccall f_4659(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6101)
static void C_ccall f_6101(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5839)
static void C_ccall f_5839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6805)
static void C_ccall f_6805(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6805)
static void C_ccall f_6805r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6803)
static void C_ccall f_6803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6862)
static void C_ccall f_6862(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6862)
static void C_ccall f_6862r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6449)
static void C_fcall f_6449(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6443)
static void C_ccall f_6443(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6443)
static void C_ccall f_6443r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7866)
static void C_ccall f_7866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7394)
static void C_ccall f_7394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5779)
static void C_fcall f_5779(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7858)
static void C_ccall f_7858(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7382)
static void C_ccall f_7382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7385)
static void C_ccall f_7385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7855)
static void C_ccall f_7855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7849)
static void C_ccall f_7849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3694)
static void C_ccall f_3694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7841)
static void C_ccall f_7841(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6418)
static void C_ccall f_6418(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7838)
static void C_ccall f_7838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7364)
static void C_ccall f_7364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7362)
static void C_fcall f_7362(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7832)
static void C_ccall f_7832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4109)
static void C_fcall f_4109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4330)
static void C_fcall f_4330(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7821)
static void C_ccall f_7821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7824)
static void C_ccall f_7824(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5781)
static void C_fcall f_5781(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4361)
static void C_fcall f_4361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7815)
static void C_ccall f_7815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7807)
static void C_ccall f_7807(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4976)
static void C_ccall f_4976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4971)
static void C_ccall f_4971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7698)
static void C_ccall f_7698(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7698)
static void C_ccall f_7698r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7313)
static void C_ccall f_7313(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6875)
static void C_ccall f_6875(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5021)
static void C_ccall f_5021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5024)
static void C_ccall f_5024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6886)
static void C_ccall f_6886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5015)
static void C_ccall f_5015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6888)
static void C_fcall f_6888(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5043)
static void C_ccall f_5043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5018)
static void C_ccall f_5018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6899)
static void C_fcall f_6899(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3945)
static void C_fcall f_3945(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_fcall f_2879(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6133)
static void C_ccall f_6133(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7043)
static void C_ccall f_7043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7047)
static void C_ccall f_7047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7049)
static void C_ccall f_7049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4287)
static void C_fcall f_4287(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6126)
static void C_ccall f_6126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7032)
static void C_ccall f_7032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7035)
static void C_ccall f_7035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7037)
static void C_ccall f_7037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5562)
static void C_ccall f_5562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5562)
static void C_ccall f_5562r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3374)
static void C_fcall f_3374(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7028)
static void C_ccall f_7028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6146)
static void C_ccall f_6146(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6145)
static void C_ccall f_6145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7013)
static void C_ccall f_7013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2813)
static void C_ccall f_2813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7009)
static void C_ccall f_7009(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7116)
static void C_ccall f_7116(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7114)
static void C_ccall f_7114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7104)
static void C_ccall f_7104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5520)
static void C_ccall f_5520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5211)
static void C_ccall f_5211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5216)
static void C_fcall f_5216(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6093)
static void C_fcall f_6093(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6401)
static void C_ccall f_6401(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3315)
static void C_ccall f_3315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5177)
static void C_ccall f_5177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6099)
static void C_ccall f_6099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5163)
static void C_fcall f_5163(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_fcall f_3300(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5185)
static void C_ccall f_5185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5335)
static void C_ccall f_5335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6743)
static void C_ccall f_6743(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6749)
static void C_ccall f_6749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6361)
static void C_ccall f_6361(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6361)
static void C_ccall f_6361r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6365)
static void C_ccall f_6365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6737)
static void C_ccall f_6737(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3366)
static void C_fcall f_3366(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_fcall f_3364(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6377)
static void C_ccall f_6377(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6377)
static void C_ccall f_6377r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5354)
static void C_ccall f_5354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4236)
static void C_fcall f_4236(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6769)
static void C_ccall f_6769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5359)
static void C_ccall f_5359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5004)
static void C_fcall f_5004(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6393)
static void C_ccall f_6393(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6393)
static void C_ccall f_6393r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6397)
static void C_ccall f_6397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6704)
static void C_fcall f_6704(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7198)
static void C_fcall f_7198(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7191)
static void C_ccall f_7191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7185)
static void C_ccall f_7185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7183)
static void C_ccall f_7183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6728)
static void C_ccall f_6728(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7173)
static void C_ccall f_7173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7352)
static void C_ccall f_7352(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7358)
static void C_ccall f_7358(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7358)
static void C_ccall f_7358r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7171)
static void C_ccall f_7171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6716)
static void C_ccall f_6716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7343)
static void C_ccall f_7343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7169)
static void C_ccall f_7169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7347)
static void C_ccall f_7347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7160)
static void C_fcall f_7160(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7324)
static void C_fcall f_7324(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7320)
static void C_ccall f_7320(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7320)
static void C_ccall f_7320r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5472)
static void C_ccall f_5472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5466)
static void C_ccall f_5466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6698)
static void C_ccall f_6698(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6698)
static void C_ccall f_6698r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7474)
static void C_ccall f_7474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7478)
static void C_ccall f_7478(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7155)
static void C_ccall f_7155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7465)
static void C_ccall f_7465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7466)
static void C_ccall f_7466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3062)
static void C_fcall f_3062(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6686)
static void C_ccall f_6686(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7136)
static void C_ccall f_7136(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7136)
static void C_ccall f_7136r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4191)
static void C_fcall f_4191(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7124)
static void C_ccall f_7124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3484)
static void C_ccall f_3484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3161)
static void C_ccall f_3161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6958)
static void C_fcall f_6958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7630)
static void C_ccall f_7630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7635)
static void C_ccall f_7635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7494)
static void C_ccall f_7494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7496)
static void C_ccall f_7496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7498)
static void C_ccall f_7498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6947)
static void C_ccall f_6947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7669)
static void C_ccall f_7669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6945)
static void C_ccall f_6945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7490)
static void C_fcall f_7490(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3496)
static void C_ccall f_3496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5752)
static void C_ccall f_5752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3195)
static void C_fcall f_3195(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3037)
static void C_ccall f_3037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5744)
static void C_ccall f_5744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6979)
static void C_ccall f_6979(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7648)
static void C_ccall f_7648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6962)
static void C_ccall f_6962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7628)
static void C_ccall f_7628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3460)
static void C_ccall f_3460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7654)
static void C_ccall f_7654(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7654)
static void C_ccall f_7654r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7652)
static void C_ccall f_7652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3572)
static void C_ccall f_3572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7606)
static void C_fcall f_7606(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3547)
static void C_ccall f_3547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7289)
static void C_ccall f_7289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7737)
static void C_ccall f_7737(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5720)
static void C_ccall f_5720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7273)
static void C_ccall f_7273(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6553)
static void C_ccall f_6553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6559)
static void C_fcall f_6559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7765)
static void C_ccall f_7765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7615)
static void C_ccall f_7615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6161)
static void C_fcall f_6161(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3111)
static void C_fcall f_3111(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5385)
static void C_fcall f_5385(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5383)
static void C_ccall f_5383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6544)
static void C_ccall f_6544(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7749)
static void C_ccall f_7749(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7742)
static void C_ccall f_7742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_fcall f_3175(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3586)
static void C_fcall f_3586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6563)
static void C_ccall f_6563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3189)
static void C_fcall f_3189(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6519)
static void C_ccall f_6519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6533)
static void C_ccall f_6533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6530)
static void C_ccall f_6530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;

C_noret_decl(trf_2636)
static void C_fcall trf_2636(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2636(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2636(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4438)
static void C_fcall trf_4438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4438(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4438(t0,t1,t2);}

C_noret_decl(trf_2915)
static void C_fcall trf_2915(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2915(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2915(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4863)
static void C_fcall trf_4863(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4863(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4863(t0,t1,t2);}

C_noret_decl(trf_5104)
static void C_fcall trf_5104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5104(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5104(t0,t1,t2);}

C_noret_decl(trf_6030)
static void C_fcall trf_6030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6030(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6030(t0,t1,t2,t3);}

C_noret_decl(trf_3005)
static void C_fcall trf_3005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3005(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3005(t0,t1);}

C_noret_decl(trf_4445)
static void C_fcall trf_4445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4445(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4445(t0,t1);}

C_noret_decl(trf_5085)
static void C_fcall trf_5085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5085(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5085(t0,t1);}

C_noret_decl(trf_4889)
static void C_fcall trf_4889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4889(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4889(t0,t1,t2,t3);}

C_noret_decl(trf_6304)
static void C_fcall trf_6304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6304(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6304(t0,t1);}

C_noret_decl(trf_4125)
static void C_fcall trf_4125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4125(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4125(t0,t1);}

C_noret_decl(trf_6650)
static void C_fcall trf_6650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6650(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6650(t0,t1);}

C_noret_decl(trf_6262)
static void C_fcall trf_6262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6262(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6262(t0,t1);}

C_noret_decl(trf_4571)
static void C_fcall trf_4571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4571(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4571(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6288)
static void C_fcall trf_6288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6288(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6288(t0,t1,t2,t3);}

C_noret_decl(trf_4032)
static void C_fcall trf_4032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4032(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4032(t0,t1);}

C_noret_decl(trf_6346)
static void C_fcall trf_6346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6346(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6346(t0,t1,t2,t3);}

C_noret_decl(trf_6571)
static void C_fcall trf_6571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6571(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6571(t0,t1,t2);}

C_noret_decl(trf_3270)
static void C_fcall trf_3270(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3270(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3270(t0,t1,t2);}

C_noret_decl(trf_5844)
static void C_fcall trf_5844(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5844(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5844(t0,t1,t2);}

C_noret_decl(trf_6449)
static void C_fcall trf_6449(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6449(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6449(t0,t1);}

C_noret_decl(trf_5779)
static void C_fcall trf_5779(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5779(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5779(t0,t1);}

C_noret_decl(trf_7362)
static void C_fcall trf_7362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7362(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7362(t0,t1);}

C_noret_decl(trf_4109)
static void C_fcall trf_4109(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4109(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4109(t0,t1);}

C_noret_decl(trf_4330)
static void C_fcall trf_4330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4330(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4330(t0,t1,t2);}

C_noret_decl(trf_5781)
static void C_fcall trf_5781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5781(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5781(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4361)
static void C_fcall trf_4361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4361(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4361(t0,t1);}

C_noret_decl(trf_6888)
static void C_fcall trf_6888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6888(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6888(t0,t1);}

C_noret_decl(trf_6899)
static void C_fcall trf_6899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6899(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6899(t0,t1);}

C_noret_decl(trf_3945)
static void C_fcall trf_3945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3945(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3945(t0,t1);}

C_noret_decl(trf_2879)
static void C_fcall trf_2879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2879(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2879(t0,t1,t2,t3);}

C_noret_decl(trf_4287)
static void C_fcall trf_4287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4287(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4287(t0,t1,t2);}

C_noret_decl(trf_3374)
static void C_fcall trf_3374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3374(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3374(t0,t1,t2,t3);}

C_noret_decl(trf_5216)
static void C_fcall trf_5216(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5216(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5216(t0,t1,t2,t3);}

C_noret_decl(trf_6093)
static void C_fcall trf_6093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6093(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6093(t0,t1);}

C_noret_decl(trf_5163)
static void C_fcall trf_5163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5163(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5163(t0,t1,t2);}

C_noret_decl(trf_3300)
static void C_fcall trf_3300(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3300(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3300(t0,t1,t2);}

C_noret_decl(trf_3366)
static void C_fcall trf_3366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3366(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3366(t0,t1);}

C_noret_decl(trf_3364)
static void C_fcall trf_3364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3364(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3364(t0,t1);}

C_noret_decl(trf_4236)
static void C_fcall trf_4236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4236(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4236(t0,t1,t2);}

C_noret_decl(trf_5004)
static void C_fcall trf_5004(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5004(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5004(t0,t1);}

C_noret_decl(trf_6704)
static void C_fcall trf_6704(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6704(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6704(t0,t1);}

C_noret_decl(trf_7198)
static void C_fcall trf_7198(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7198(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7198(t0,t1,t2,t3);}

C_noret_decl(trf_7160)
static void C_fcall trf_7160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7160(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7160(t0,t1,t2,t3);}

C_noret_decl(trf_7324)
static void C_fcall trf_7324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7324(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7324(t0,t1);}

C_noret_decl(trf_3062)
static void C_fcall trf_3062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3062(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3062(t0,t1);}

C_noret_decl(trf_4191)
static void C_fcall trf_4191(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4191(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4191(t0,t1,t2);}

C_noret_decl(trf_6958)
static void C_fcall trf_6958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6958(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6958(t0,t1,t2);}

C_noret_decl(trf_7490)
static void C_fcall trf_7490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7490(void *dummy){
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
f_7490(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3195)
static void C_fcall trf_3195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3195(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3195(t0,t1);}

C_noret_decl(trf_7606)
static void C_fcall trf_7606(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7606(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7606(t0,t1,t2);}

C_noret_decl(trf_6559)
static void C_fcall trf_6559(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6559(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6559(t0,t1,t2);}

C_noret_decl(trf_6161)
static void C_fcall trf_6161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6161(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6161(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3111)
static void C_fcall trf_3111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3111(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3111(t0,t1,t2);}

C_noret_decl(trf_5385)
static void C_fcall trf_5385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5385(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5385(t0,t1,t2,t3);}

C_noret_decl(trf_3175)
static void C_fcall trf_3175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3175(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3175(t0,t1);}

C_noret_decl(trf_3586)
static void C_fcall trf_3586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3586(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3586(t0,t1,t2);}

C_noret_decl(trf_3189)
static void C_fcall trf_3189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3189(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3189(t0,t1);}

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
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
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

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

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr7r)
static void C_fcall tr7r(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7r(C_proc7 k){
int n;
C_word *a,t7;
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
n=C_rest_count(0);
a=C_alloc(n*3);
t7=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7);}

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

/* k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
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
C_save_and_reclaim((void*)tr2,(void*)f_2697,2,t0,t1);}
t2=C_mutate((C_word*)lf[16]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate((C_word*)lf[17]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2699,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[18]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2705,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[19]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2711,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[20]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2717,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[21]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2723,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[22]+1 /* (set! file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[30]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2813,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[31]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2822,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[32]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2831,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[33]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2840,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[34]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2849,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[35]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2858,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[36]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2867,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[37]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)STDIN_FILENO));
t17=C_mutate((C_word*)lf[38]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)STDOUT_FILENO));
t18=C_mutate((C_word*)lf[39]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)STDERR_FILENO));
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2879,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t24=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2915,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[52]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2929,a[2]=t22,a[3]=t20,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t26=C_mutate((C_word*)lf[53]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2942,a[2]=t22,a[3]=t20,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t27=C_mutate((C_word*)lf[54]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2955,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[60]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[62]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[67]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[25]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3140,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[76]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3264,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[71]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3539,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3584,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7917,a[2]=((C_word)li274),tmp=(C_word)a,a+=3,tmp);
t36=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7940,a[2]=((C_word)li275),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:437: getter-with-setter */
t37=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t37+1)))(5,t37,t34,t35,t36,lf[458]);}

/* file-access-time in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2699,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:199: ##sys#stat */
f_2636(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);}

/* k2668 in stat in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:161: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2662 in stat in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2640(2,t2,(C_truep(((C_word*)t0)[3])?C_lstat(t1):C_stat(t1)));}

/* file-stat in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2677r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2677r(t0,t1,t2,t3);}}

static void C_ccall f_2677r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2684,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:178: ##sys#stat */
f_2636(t6,t2,t5,C_SCHEME_TRUE,lf[15]);}

/* k2671 in stat in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:162: ##sys#platform-fixup-pathname */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),((C_word*)t0)[2],t1);}

/* create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4411r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4411r(t0,t1,t2,t3);}}

static void C_ccall f_4411r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[186]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4420,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:767: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t7,t2);}

/* k2639 in stat in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:173: posix-error */
t2=lf[1];
f_2620(6,t2,((C_word*)t0)[3],lf[8],((C_word*)t0)[4],lf[9],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}}

/* k2623 in posix-error in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:120: strerror */
t4=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* duplicate-fileno in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2999r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2999r(t0,t1,t2,t3);}}

static void C_ccall f_2999r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[60]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3005,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_3005(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[60]);
t8=t5;
f_3005(t8,C_dup2(t2,t6));}}

/* k2993 in k2958 in port->fileno in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2994,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posix-common.scm:289: posix-error */
t2=lf[1];
f_2620(6,t2,((C_word*)t0)[2],lf[13],lf[54],lf[56],((C_word*)t0)[3]);}
else{
t2=C_C_fileno(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:287: posix-error */
t4=lf[1];
f_2620(6,t4,t3,lf[8],lf[54],lf[57],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* posix-error in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_2620r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2620r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2620r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2624,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:119: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t6);}

/* f_7917 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7917(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_7917r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7917r(t0,t1,t2);}}

static void C_ccall f_7917r(C_word t0,C_word t1,C_word t2){
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
t5=(C_truep(t4)?C_i_check_exact_2(t4,lf[98]):C_SCHEME_UNDEFINED);
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

/* k4421 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4422,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_block_size(t1);
t4=C_eqp(C_fix(0),t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4427,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_4427(2,t6,t4);}
else{
/* posixunix.scm:769: file-exists? */
t6=*((C_word*)lf[189]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t1);}}

/* k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4427,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4436,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4475,a[2]=((C_word*)t0)[3],a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4480,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:771: ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4488,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:776: g913 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],lf[186],((C_word*)t0)[3]);}}}

/* ##sys#stat in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_2636(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2636,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2640,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;
f_2640(2,t7,C_fstat(t2));}
else{
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2663,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2669,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2672,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:163: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t9,t2);}
else{
/* posix-common.scm:169: ##sys#signal-hook */
t7=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[13],t5,lf[14],t2);}}}

/* k2632 in k2623 in posix-error in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:120: string-append */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[4],t1);}

/* k2629 in k2623 in posix-error in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[2],*((C_word*)lf[2]+1),((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* f_7909 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7909(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7909,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[116]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(*((C_word*)lf[115]+1),t2));}

/* k3411 in k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:415: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3374(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3413 in k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
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
f_3374(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k2978 in k2993 in k2958 in port->fileno in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2970 in k2958 in port->fileno in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(0)));}

/* k3422 in k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3424,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3435,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3440,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word)li37),tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3460,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:418: ##sys#dynamic-wind */
t10=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3469,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3472,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:421: pproc */
t4=((C_word*)t0)[9];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[7]);}}

/* k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4409(C_word c,C_word t0,C_word t1){
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
C_word ab[143],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4409,2,t0,t1);}
t2=C_mutate((C_word*)lf[185]+1 /* (set! file-position ...) */,t1);
t3=C_mutate((C_word*)lf[186]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4411,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[63]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4518,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[191]+1 /* (set! change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4538,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4571,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
t7=C_mutate((C_word*)lf[195]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4585,a[2]=t6,a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[199]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4622,a[2]=t6,a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[200]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4659,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[203]+1 /* (set! close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4673,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[206]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[207]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4709,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[208]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4731,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[210]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4763,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[212]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4795,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[214]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t17=C_mutate((C_word*)lf[215]+1 /* (set! signal/kill ...) */,C_fix((C_word)SIGKILL));
t18=C_mutate((C_word*)lf[216]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t19=C_mutate((C_word*)lf[217]+1 /* (set! signal/hup ...) */,C_fix((C_word)SIGHUP));
t20=C_mutate((C_word*)lf[218]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t21=C_mutate((C_word*)lf[219]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t22=C_mutate((C_word*)lf[220]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t23=C_mutate((C_word*)lf[221]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t24=C_mutate((C_word*)lf[222]+1 /* (set! signal/trap ...) */,C_fix((C_word)SIGTRAP));
t25=C_mutate((C_word*)lf[223]+1 /* (set! signal/quit ...) */,C_fix((C_word)SIGQUIT));
t26=C_mutate((C_word*)lf[224]+1 /* (set! signal/alrm ...) */,C_fix((C_word)SIGALRM));
t27=C_mutate((C_word*)lf[225]+1 /* (set! signal/vtalrm ...) */,C_fix((C_word)SIGVTALRM));
t28=C_mutate((C_word*)lf[226]+1 /* (set! signal/prof ...) */,C_fix((C_word)SIGPROF));
t29=C_mutate((C_word*)lf[227]+1 /* (set! signal/io ...) */,C_fix((C_word)SIGIO));
t30=C_mutate((C_word*)lf[228]+1 /* (set! signal/urg ...) */,C_fix((C_word)SIGURG));
t31=C_mutate((C_word*)lf[229]+1 /* (set! signal/chld ...) */,C_fix((C_word)SIGCHLD));
t32=C_mutate((C_word*)lf[230]+1 /* (set! signal/cont ...) */,C_fix((C_word)SIGCONT));
t33=C_mutate((C_word*)lf[231]+1 /* (set! signal/stop ...) */,C_fix((C_word)SIGSTOP));
t34=C_mutate((C_word*)lf[232]+1 /* (set! signal/tstp ...) */,C_fix((C_word)SIGTSTP));
t35=C_mutate((C_word*)lf[233]+1 /* (set! signal/pipe ...) */,C_fix((C_word)SIGPIPE));
t36=C_mutate((C_word*)lf[234]+1 /* (set! signal/xcpu ...) */,C_fix((C_word)SIGXCPU));
t37=C_mutate((C_word*)lf[235]+1 /* (set! signal/xfsz ...) */,C_fix((C_word)SIGXFSZ));
t38=C_mutate((C_word*)lf[236]+1 /* (set! signal/usr1 ...) */,C_fix((C_word)SIGUSR1));
t39=C_mutate((C_word*)lf[237]+1 /* (set! signal/usr2 ...) */,C_fix((C_word)SIGUSR2));
t40=C_mutate((C_word*)lf[238]+1 /* (set! signal/winch ...) */,C_fix((C_word)SIGWINCH));
t41=C_a_i_list(&a,25,*((C_word*)lf[214]+1),*((C_word*)lf[215]+1),*((C_word*)lf[216]+1),*((C_word*)lf[217]+1),*((C_word*)lf[218]+1),*((C_word*)lf[219]+1),*((C_word*)lf[220]+1),*((C_word*)lf[221]+1),*((C_word*)lf[222]+1),*((C_word*)lf[223]+1),*((C_word*)lf[224]+1),*((C_word*)lf[225]+1),*((C_word*)lf[226]+1),*((C_word*)lf[227]+1),*((C_word*)lf[228]+1),*((C_word*)lf[229]+1),*((C_word*)lf[230]+1),*((C_word*)lf[231]+1),*((C_word*)lf[232]+1),*((C_word*)lf[233]+1),*((C_word*)lf[234]+1),*((C_word*)lf[235]+1),*((C_word*)lf[236]+1),*((C_word*)lf[237]+1),*((C_word*)lf[238]+1));
t42=C_mutate((C_word*)lf[239]+1 /* (set! signals-list ...) */,t41);
t43=C_mutate((C_word*)lf[240]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4840,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[242]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4883,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[243]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4911,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[244]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4917,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[246]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4933,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[248]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4949,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t49=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t50=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7855,a[2]=((C_word)li270),tmp=(C_word)a,a+=3,tmp);
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7858,a[2]=((C_word)li271),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1007: getter-with-setter */
t52=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t52+1)))(5,t52,t49,t50,t51,lf[454]);}

/* k4435 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4436,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4438,a[2]=t3,a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4438(t5,((C_word*)t0)[2],t1);}

/* loop in k4435 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4438(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4438,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4445,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4473,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:773: directory? */
t5=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t4=t3;
f_4445(t4,C_SCHEME_FALSE);}}

/* file-truncate in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6252(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6252,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[351]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6262,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6268,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6274,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6277,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1481: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t8,t2);}
else{
if(C_truep(C_fixnump(t2))){
t7=C_ftruncate(t2,t3);
t8=t5;
f_6262(t8,C_fixnum_lessp(t7,C_fix(0)));}
else{
/* posixunix.scm:1483: ##sys#error */
t7=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[351],lf[353],t2);}}}

/* check in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_2915(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2915,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:262: posix-error */
t6=lf[1];
f_2620(6,t6,t1,lf[8],t2,lf[47],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2927,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:263: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(6,*((C_word*)lf[48]+1),t6,t4,*((C_word*)lf[49]+1),lf[50],lf[51]);}}

/* k2926 in check in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* open-input-file* in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2929(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2929r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2929r(t0,t1,t2,t3);}}

static void C_ccall f_2929r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[52]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2940,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:269: mode */
f_2879(t5,C_SCHEME_TRUE,t3,lf[52]);}

/* k7979 */
static void C_ccall f_7980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:191: g113 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* for-each-loop1051 in set-signal-mask! in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4863(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4863,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4872,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posixunix.scm:954: g1052 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5116 in k5107 in loop in k5098 in k5095 in k5084 in group-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5117,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4849 in set-signal-mask! in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_sigprocmask_set(C_fix(0));
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:960: posix-error */
t3=lf[1];
f_2620(5,t3,((C_word*)t0)[2],lf[120],lf[240],lf[241]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5101 in k5098 in k5095 in k5084 in group-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1082: g1153 */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_fix((C_word)C_group->gr_gid),t1);}

/* loop in k5098 in k5095 in k5084 in group-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_5104(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5104,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5108,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub1133(t5,t6);
/* posixunix.scm:1079: ##sys#peek-c-string */
t8=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k5107 in loop in k5098 in k5095 in k5084 in group-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5108,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5117,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm:1096: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5104(t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* k7966 */
static void C_ccall f_7968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:194: posix-error */
t2=lf[1];
f_2620(7,t2,((C_word*)t0)[2],lf[8],lf[459],lf[460],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* set-signal-mask! in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4840,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[240]);
t4=C_sigemptyset(C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4845,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
t6=t2;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4851,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4863,a[2]=t9,a[3]=t5,a[4]=((C_word)li119),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4863(t11,t7,t6);}

/* f_4845 in set-signal-mask! in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4845(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4845,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[240]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_sigaddset(t2));}

/* k7957 */
static void C_ccall f_7959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub117(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3]));}

/* f_7954 */
static void C_ccall f_7954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7954,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7959,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t5=C_i_foreign_string_argumentp(t2);
/* posix-common.scm:191: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t4,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub117(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t3));}}

/* f_7950 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7950,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[459]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7954,a[2]=((C_word)li277),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7968,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7980,a[2]=t5,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:192: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t7,t2);}

/* f_7945 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7945(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7945,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7948,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:188: ##sys#stat */
f_2636(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[16]);}

/* poke in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6030(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6030,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6036,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word)li166),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_6036(2,t7,t1);}

/* k7947 */
static void C_ccall f_7948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7948,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* loop in poke in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6036,2,t0,t1);}
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
t4=C_fix((C_word)errno);
t5=C_i_eqvp(t4,C_fix((C_word)EWOULDBLOCK));
t6=(C_truep(t5)?t5:C_i_eqvp(t4,C_fix((C_word)EAGAIN)));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6054,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1430: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[333]+1)))(2,*((C_word*)lf[333]+1),t7);}
else{
if(C_truep(C_i_eqvp(t4,C_fix((C_word)EINTR)))){
/* posixunix.scm:1433: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[337]+1)))(3,*((C_word*)lf[337]+1),t1,((C_word*)((C_word*)t0)[6])[1]);}
else{
/* posixunix.scm:1435: posix-error */
t7=lf[1];
f_2620(7,t7,t1,((C_word*)t0)[7],lf[8],lf[348],((C_word*)t0)[2],((C_word*)t0)[8]);}}}
else{
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6084,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1437: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),t4,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}}

/* f_7940 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7940(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7940,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[98]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_umask(t2));}

/* k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6028(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6028,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6030,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li167),tmp=(C_word)a,a+=7,tmp));
t7=C_fixnump(((C_word*)t0)[5]);
t8=(C_truep(t7)?((C_word*)t0)[5]:C_block_size(((C_word*)t0)[5]));
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6093,a[2]=t5,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t10=C_eqp(C_fix(0),t8);
if(C_truep(t10)){
t11=t9;
f_6093(t11,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6133,a[2]=t3,a[3]=((C_word)li171),tmp=(C_word)a,a+=4,tmp));}
else{
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6145,a[2]=t9,a[3]=t8,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
/* posixunix.scm:1444: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(3,*((C_word*)lf[66]+1),t11,((C_word*)t0)[5]);}
else{
t12=t11;
f_6145(2,t12,((C_word*)t0)[5]);}}}

/* ##sys#custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_6012r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6012r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6012r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word *a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?*((C_word*)lf[330]+1):C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6028,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t11,a[6]=t1,a[7]=t15,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
/* posixunix.scm:1422: ##sys#file-nonblocking! */
t19=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t18,t4);}
else{
t19=t18;
f_6028(2,t19,C_SCHEME_UNDEFINED);}}

/* k6466 in k6448 in create-fifo in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1540: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[364]);}

/* k3004 in duplicate-fileno in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3005(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3005,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3007,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:300: posix-error */
t3=lf[1];
f_2620(6,t3,t2,lf[8],lf[60],lf[61],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k3006 in k3004 in duplicate-fileno in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2611,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate(&lf[1] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2620,a[2]=t2,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#posix-error ...) */,lf[1]);
t5=C_mutate(&lf[7] /* (set! ##sys#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2636,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[15]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2677,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7945,a[2]=((C_word)li276),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7950,a[2]=((C_word)li278),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:186: getter-with-setter */
t10=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t8,t9,lf[461]);}

/* fifo? in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6479(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6479,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[34]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6486,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6519,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1548: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t5,t2);}

/* k2600 in k2598 */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2602 in k2600 in k2598 */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k6485 in fifo? in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_fifo_p(t1);
switch(t2){
case C_SCHEME_TRUE:
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);
case C_SCHEME_FALSE:
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);
case C_fix(0):
/* posixunix.scm:1551: ##sys#signal-hook */
t3=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[8],lf[34],lf[366],((C_word*)t0)[3]);
default:
/* posixunix.scm:1553: posix-error */
t3=lf[1];
f_2620(6,t3,((C_word*)t0)[2],lf[8],lf[34],lf[367],((C_word*)t0)[3]);}}

/* f_2611 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2611(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2611,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=stub65(t3,t4);
/* posix-common.scm:116: ##sys#peek-c-string */
t6=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* k4460 */
static void C_ccall f_4461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posixunix.scm:762: posix-error */
t4=lf[1];
f_2620(6,t4,((C_word*)t0)[2],lf[8],((C_word*)t0)[3],lf[187],((C_word*)t0)[4]);}}

/* k4466 in k4443 in loop in k4435 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:774: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4438(t2,((C_word*)t0)[3],t1);}

/* k7797 */
static void C_ccall f_7798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1243: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[440],lf[441],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5887 */
static void C_ccall f_5888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_substring_copy(((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],C_fix(0));
t3=C_slot(((C_word*)t0)[5],C_fix(5));
t4=C_fixnum_plus(t3,((C_word*)t0)[6]);
t5=C_i_set_i_slot(((C_word*)t0)[5],C_fix(5),t4);
if(C_truep(((C_word*)t0)[7])){
/* posixunix.scm:1389: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[343]+1)))(4,*((C_word*)lf[343]+1),((C_word*)t0)[8],((C_word*)t0)[7],t1);}
else{
t6=t1;
t7=((C_word*)t0)[8];
f_5852(2,t7,t6);}}

/* f_4448 in k4446 in k4443 in loop in k4435 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4448,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4461,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:761: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t3,t2);}

/* k4446 in k4443 in loop in k4435 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4448,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:775: g895 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[186],((C_word*)t0)[3]);}

/* k4443 in loop in k4435 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4445,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4467,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:774: pathname-directory */
t4=*((C_word*)lf[188]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_7770 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7770(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7770,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[318]);
t4=C_getpgid(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7775,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7780,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1235: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}}

/* k6463 in k6448 in create-fifo in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mkfifo(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1541: posix-error */
t3=lf[1];
f_2620(7,t3,((C_word*)t0)[3],lf[8],lf[364],lf[365],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7774 */
static void C_ccall f_7775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_4475 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4475,2,t0,t1);}
/* posixunix.scm:771: decompose-pathname */
t2=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k4472 in loop in k4435 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4445(t2,C_i_not(t1));}

/* file-write-access? in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5411(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5411,3,t0,t1,t2);}
/* posixunix.scm:1219: check */
f_5385(t1,t2,C_fix((C_word)W_OK),lf[314]);}

/* file-execute-access? in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5417(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5417,3,t0,t1,t2);}
/* posixunix.scm:1220: check */
f_5385(t1,t2,C_fix((C_word)X_OK),lf[315]);}

/* k5402 in check in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1215: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5399 in check in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5400,2,t0,t1);}
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5393,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* posixunix.scm:1216: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}}

/* file-read-access? in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5405(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5405,3,t0,t1,t2);}
/* posixunix.scm:1218: check */
f_5385(t1,t2,C_fix((C_word)R_OK),lf[313]);}

/* f_4723 in k4712 in call-with-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4723(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4723r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4723r(t0,t1,t2);}}

static void C_ccall f_4723r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4726,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:857: close-output-pipe */
t4=*((C_word*)lf[203]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4725 */
static void C_ccall f_4726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5431 in create-session in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1226: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[316],lf[317]);}

/* ##sys#file-nonblocking! in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3850(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3850,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub605(C_SCHEME_UNDEFINED,t3));}

/* k7779 */
static void C_ccall f_7780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1236: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[318],lf[439],((C_word*)t0)[3]);}

/* ##sys#file-select-one in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3857(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3857,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub610(C_SCHEME_UNDEFINED,t3));}

/* f_4488 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4488,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4501,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:761: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t3,t2);}

/* f_7785 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7785,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[440]);
t5=C_i_check_exact_2(t3,lf[440]);
t6=C_setpgid(t2,t3);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7798,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1242: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t7);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* f_4480 in k4425 in k4419 in create-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4480,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
/* posixunix.scm:772: make-pathname */
t5=*((C_word*)lf[78]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,t4);}
else{
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* current-effective-user-name in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5062,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5065,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1072: current-effective-user-id */
t4=*((C_word*)lf[252]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5052 in current-user-name in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1069: user-information */
t2=*((C_word*)lf[255]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5084 in group-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_5085(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5085,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[256]+1):*((C_word*)lf[257]+1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5096,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_group->gr_name),C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* group-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5078(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_5078r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5078r(t0,t1,t2,t3);}}

static void C_ccall f_5078r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5085,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;
f_5085(t7,C_getgrgid(t2));}
else{
t7=C_i_check_string_2(t2,lf[260]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5128,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1087: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t8,t2,lf[260]);}}

/* k4766 in with-output-to-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4767,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4772,a[2]=t5,a[3]=t3,a[4]=((C_word)li112),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4777,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4790,a[2]=t3,a[3]=t5,a[4]=((C_word)li115),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:869: ##sys#dynamic-wind */
t9=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

/* with-output-to-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4763r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4763r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4763r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4767,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[199]+1),t2,t4);}

/* k3104 in k3084 in k3079 in delete-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:339: rmdir */
f_3062(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3099 in k3093 */
static void C_ccall f_3101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:333: g275 */
f_3062(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=*((C_word*)lf[69]+1);
/* posix-common.scm:333: g275 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(3,*((C_word*)lf[69]+1),((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k7884 */
static void C_ccall f_7886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[51]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];
f_7875(2,t5,t4);}
else{
t4=((C_word*)t0)[3];
f_7875(2,t4,C_fix(-1));}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[3];
f_7875(2,t3,t2);}
else{
/* posixunix.scm:750: ##sys#signal-hook */
t2=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[13],lf[185],lf[456],((C_word*)t0)[2]);}}}

/* k4712 in call-with-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4718,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4723,a[2]=t1,a[3]=((C_word)li105),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:854: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}

/* f_4718 in k4712 in call-with-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4718,2,t0,t1);}
/* posixunix.scm:855: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

/* k7401 */
static void C_ccall f_7402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1875: file-close */
t2=*((C_word*)lf[164]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_7406 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word ab[9],*a=ab;
if(c!=8) C_bad_argc_2(c,8,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_7406,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7408,a[2]=t4,a[3]=t5,a[4]=t6,a[5]=t7,a[6]=t3,a[7]=t2,a[8]=((C_word)li237),tmp=(C_word)a,a+=9,tmp));}

/* f_7408 */
static void C_ccall f_7408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7408,2,t0,t1);}
t2=C_i_vector_set(((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);
t3=C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[4]);
t4=(C_truep(t3)?C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7422,a[2]=((C_word*)t0)[6],a[3]=((C_word)li235),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7427,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word)li236),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1882: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_7872 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7872(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7872,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7875,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7886,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:743: port? */
t5=*((C_word*)lf[182]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k7876 in k7874 */
static void C_ccall f_7877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k6779 in k6761 in time->string in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posixunix.scm:1652: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),((C_word*)t0)[2],t1,C_fix(0),t3);}
else{
/* posixunix.scm:1653: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],lf[391],((C_word*)t0)[3]);}}

/* k7874 */
static void C_ccall f_7875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7877,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posixunix.scm:752: posix-error */
t3=lf[1];
f_2620(6,t3,t2,lf[8],lf[185],lf[455],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* f_4701 in k4690 in call-with-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4701r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4701r(t0,t1,t2);}}

static void C_ccall f_4701r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4704,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:848: close-input-pipe */
t4=*((C_word*)lf[200]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* signal-mask in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4883,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4889,a[2]=t3,a[3]=((C_word)li121),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4889(t5,t1,*((C_word*)lf[239]+1),C_SCHEME_END_OF_LIST);}

/* k4703 */
static void C_ccall f_4704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* call-with-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4709r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4709r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4709r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4713,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[199]+1),t2,t4);}

/* loop in signal-mask in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4889(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4889,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_sigismember(t4))){
t7=C_a_i_cons(&a,2,t4,t3);
/* posixunix.scm:967: loop */
t11=t1;
t12=t6;
t13=t7;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t7=t3;
/* posixunix.scm:967: loop */
t11=t1;
t12=t6;
t13=t7;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}

/* with-input-from-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4731(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4731r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4731r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4731r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4735,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[195]+1),t2,t4);}

/* k4871 in for-each-loop1051 in set-signal-mask! in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4863(t3,((C_word*)t0)[4],t2);}

/* k4734 in with-input-from-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4735(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4735,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4740,a[2]=t5,a[3]=t3,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4745,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li109),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4758,a[2]=t3,a[3]=t5,a[4]=((C_word)li110),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:861: ##sys#dynamic-wind */
t9=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

/* f_7453 */
static void C_ccall f_7453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7453,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* f_7457 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7457(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_7457,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(t4)){
t6=C_i_car(t3);
t7=t3;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7465,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1894: file-close */
t10=*((C_word*)lf[164]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t8);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k7059 in process-fork in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7060,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm:1762: posix-error */
t3=lf[1];
f_2620(5,t3,((C_word*)t0)[2],lf[120],lf[416],lf[417]);}
else{
t3=C_i_pairp(((C_word*)t0)[3]);
t4=(C_truep(t3)?C_eqp(t1,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7080,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1759: g1819 */
t7=t5;
((C_proc2)C_fast_retrieve_proc(t7))(2,t7,t6);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}}}

/* k6777 in k6761 in time->string in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1648: strftime */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* process-fork in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7056(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_7056r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7056r(t0,t1,t2);}}

static void C_ccall f_7056r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7060,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1761: fork */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_7054 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7054,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1811(C_SCHEME_UNDEFINED));}

/* k5127 in group-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5085(t2,C_getgrnam(t1));}

/* k5153 in get-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
if(C_truep(stub1166(C_SCHEME_UNDEFINED,t3))){
t4=t2;
f_5156(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:1116: ##sys#error */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[261],lf[263]);}}

/* k5155 in k5153 in get-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=stub1161(C_SCHEME_UNDEFINED,t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5185,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1118: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t5);}
else{
t5=t2;
f_5158(2,t5,C_SCHEME_UNDEFINED);}}

/* get-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5150,2,t0,t1);}
t2=C_fix((C_word)getgroups(0, C_groups));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5154,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5202,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1113: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=t3;
f_5154(2,t4,C_SCHEME_UNDEFINED);}}

/* k5157 in k5155 in k5153 in get-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5158,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5163,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5163(t5,((C_word*)t0)[3],C_fix(0));}

/* k5095 in k5084 in group-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5096,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_group->gr_passwd),C_fix(0));}

/* k5098 in k5095 in k5084 in group-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5104,a[2]=t4,a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5104(t6,t2,C_fix(0));}

/* k2743 in file-type in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[23]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[24]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[25]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[26]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[27]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[28]);}
else{
t3=C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[29]:lf[23]));}}}}}}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5049 in current-user-name in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* k5649 in loop */
static void C_ccall f_5650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5650,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1317: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[333]+1)))(2,*((C_word*)lf[333]+1),t2);}

/* k5651 in k5649 in loop */
static void C_ccall f_5652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1318: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5632(2,t2,((C_word*)t0)[3]);}

/* f_7557 in process in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[27],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_7557,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_not(((C_word*)t0)[2]);
t7=C_i_not(((C_word*)t0)[3]);
t8=C_i_not(((C_word*)t0)[4]);
t9=C_a_i_vector3(&a,3,t6,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7566,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[8],a[10]=t9,a[11]=((C_word*)t0)[9],a[12]=t3,a[13]=((C_word*)t0)[3],tmp=(C_word)a,a+=14,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7581,a[2]=((C_word*)t0)[5],a[3]=t10,a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:1937: make-on-close */
t12=((C_word*)t0)[8];
((C_proc8)(void*)(*((C_word*)t12+1)))(8,t12,t11,((C_word*)t0)[6],t5,t9,C_fix(0),C_fix(1),C_fix(2));}

/* f_7552 in process in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7552,2,t0,t1);}
/* posixunix.scm:1930: spawn */
t2=((C_word*)t0)[2];
f_7490(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k5064 in current-effective-user-name in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1072: user-information */
t2=*((C_word*)lf[255]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5061 in current-effective-user-name in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* k2726 in file-size in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2727,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_double_to_num(&a,C_statbuf.st_size));}

/* file-type in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2729(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2729r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2729r(t0,t1,t2,t3);}}

static void C_ccall f_2729r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2745,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:206: ##sys#stat */
f_2636(t12,t2,t5,t9,lf[22]);}

/* ##sys#process in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[22],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_7546,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7552,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,a[7]=t6,a[8]=t7,a[9]=t8,a[10]=((C_word)li249),tmp=(C_word)a,a+=11,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7557,a[2]=t7,a[3]=t6,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word)li250),tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1870: ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}

/* file-size in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2723(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2723,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:203: ##sys#stat */
f_2636(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);}

/* k2720 in file-permissions in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* k6299 in setup in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6300,2,t0,t1);}
t2=C_i_check_number_2(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6304,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)((C_word*)t0)[5])[1]);
if(C_truep(t4)){
t5=C_set_block_item(((C_word*)t0)[5],0,C_fix(0));
t6=t3;
f_6304(t6,t5);}
else{
t5=t3;
f_6304(t5,C_i_check_number_2(((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[3]));}}

/* k6303 in k6299 in setup in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6304(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6304,NULL,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t4=C_flock_setup(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[354],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]));}

/* f_7536 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_7536,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7539,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1926: connect-parent */
t10=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,t2,t5,t6,t7);}

/* k7538 */
static void C_ccall f_7539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1927: ##sys#custom-output-port */
t2=*((C_word*)lf[347]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_TRUE,C_fix(0),((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7213 in doloop1880 in k7168 in doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_7215(C_word c,C_word t0,C_word t1){
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
f_7198(t5,((C_word*)t0)[5],t3,t4);}

/* f_4174 in k4160 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4174(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4174,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4180,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:710: fd_test */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(1),t2);}

/* f_5614 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5614,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k7515 in k7513 in k7511 */
static void C_ccall f_7516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1919: process-execute */
t2=*((C_word*)lf[419]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k7513 in k7511 */
static void C_ccall f_7514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7522,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1918: swapped-ends */
t4=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[10]);}

/* k4160 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4164,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
/* posixunix.scm:708: fd_test */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[3]);}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4174,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[3];
t7=C_i_check_list_2(t6,lf[70]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4189,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4191,a[2]=t10,a[3]=t5,a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_4191(t12,t8,t6);}}
else{
/* posixunix.scm:699: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}}

/* k7511 */
static void C_ccall f_7512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7525,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1917: swapped-ends */
t4=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[12]);}

/* k4163 in k4160 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:699: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4062 in file-mkstemp in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4063,2,t0,t1);}
t2=C_mkstemp(t1);
t3=C_block_size(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4067,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
/* posixunix.scm:652: posix-error */
t6=lf[1];
f_2620(6,t6,t4,lf[8],lf[172],lf[173],((C_word*)t0)[3]);}
else{
t6=t4;
f_4067(2,t6,C_SCHEME_UNDEFINED);}}

/* k4066 in k4062 in file-mkstemp in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* posixunix.scm:653: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),t2,((C_word*)t0)[5],C_fix(0),t3);}

/* k5602 in k5589 */
static void C_ccall f_5604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
/* posixunix.scm:1301: posix-error */
t2=lf[1];
f_2620(7,t2,((C_word*)t0)[2],lf[8],((C_word*)t0)[3],lf[331],((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* f_3812 in process-wait in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3812(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3812,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:522: posix-error */
t6=lf[1];
f_2620(6,t6,t1,lf[120],lf[118],lf[121],((C_word*)t0)[2]);}
else{
/* posix-common.scm:523: values */
C_values(5,0,t1,t2,t3,t4);}}

/* f_3807 in process-wait in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3807,2,t0,t1);}
/* posix-common.scm:520: ##sys#process-wait */
t2=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_7509 in k7503 in k7497 in k7495 in k7493 in spawn in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_7509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7512,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1916: connect-child */
t3=((C_word*)t0)[5];
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[6],((C_word*)t0)[12],((C_word*)t0)[13],*((C_word*)lf[37]+1));}

/* k7506 in k7503 in k7497 in k7495 in k7493 in spawn in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_7507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1912: values */
C_values(6,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k7503 in k7497 in k7495 in k7493 in spawn in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7509,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word)li245),tmp=(C_word)a,a+=15,tmp);
/* posixunix.scm:1914: process-fork */
t4=*((C_word*)lf[416]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4113(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4113,2,t0,t1);}
t2=C_i_not(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4118,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=t3;
f_4118(2,t4,t2);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[2]);
/* posixunix.scm:670: fd_set */
t5=((C_word*)t0)[8];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,C_fix(0),((C_word*)t0)[2]);}
else{
t4=C_i_check_list_2(((C_word*)t0)[2],lf[174]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4318,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word)li84),tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[2];
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4330,a[2]=t8,a[3]=t5,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4330(t10,t3,t6);}}}

/* k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:666: fd_zero */
t3=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(1));}

/* k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4118(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4118,2,t0,t1);}
t2=C_i_not(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4123,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_4123(2,t4,t2);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[2]);
/* posixunix.scm:682: fd_set */
t5=((C_word*)t0)[8];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,C_fix(1),((C_word*)t0)[2]);}
else{
t4=C_i_check_list_2(((C_word*)t0)[2],lf[174]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4275,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[2];
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4287,a[2]=t8,a[3]=t5,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4287(t10,t3,t6);}}}

/* file-mkstemp in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4057(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4057,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[172]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4063,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:648: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t2,lf[172]);}

/* f_7096 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7096,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7104,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t7=C_i_foreign_string_argumentp(t3);
/* posixunix.scm:1772: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t6,t7);}
else{
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub1837(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,t7));}}

/* loop */
static void C_ccall f_5632(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5632,2,t0,t1);}
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=C_fix((C_word)errno);
t5=C_i_eqvp(t4,C_fix((C_word)EWOULDBLOCK));
t6=(C_truep(t5)?t5:C_i_eqvp(t4,C_fix((C_word)EAGAIN)));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5650,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1316: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[334]+1)))(5,*((C_word*)lf[334]+1),t7,*((C_word*)lf[335]+1),((C_word*)t0)[2],lf[336]);}
else{
if(C_truep(C_i_eqvp(t4,C_fix((C_word)EINTR)))){
/* posixunix.scm:1320: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[337]+1)))(3,*((C_word*)lf[337]+1),t1,((C_word*)((C_word*)t0)[5])[1]);}
else{
/* posixunix.scm:1321: posix-error */
t7=lf[1];
f_2620(7,t7,t1,lf[8],((C_word*)t0)[6],lf[338],((C_word*)t0)[2],((C_word*)t0)[7]);}}}
else{
t4=(C_truep(((C_word*)t0)[8])?C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5682,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1325: more? */
t6=((C_word*)t0)[8];
((C_proc2)C_fast_retrieve_proc(t6))(2,t6,t5);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[9])+1,t2);
t6=C_set_block_item(((C_word*)t0)[10],0,C_fix(0));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* k4178 */
static void C_ccall f_4180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4180,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4187 in k4160 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
/* posixunix.scm:699: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* f_7081 in k7078 in k7059 in process-fork in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7081(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7081,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1824(C_SCHEME_UNDEFINED,t3));}

/* k7078 in k7059 in process-fork in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7081,a[2]=((C_word)li217),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1759: g1821 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_fix(0));}

/* f_5621 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5621,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5632,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[2],a[11]=((C_word)li151),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_5632(2,t5,t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* initialize-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5274,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[268]);
t5=C_i_check_exact_2(t3,lf[268]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5294,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1143: init */
t7=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* k7568 in k7565 */
static void C_ccall f_7569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7575,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:1942: make-on-close */
t4=((C_word*)t0)[10];
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t3,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[11],C_fix(2),C_fix(0),C_fix(1));}

/* k7565 */
static void C_ccall f_7566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7569,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7578,a[2]=((C_word*)t0)[11],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:1939: make-on-close */
t4=((C_word*)t0)[9];
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t3,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[10],C_fix(1),C_fix(0),C_fix(2));}

/* k5262 */
static void C_ccall f_5264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1196(C_SCHEME_UNDEFINED,t1,t2));}

/* k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_i_check_number_2(((C_word*)t0)[6],lf[174]);
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],C_fix(1));
t5=t2;
f_4125(t5,C_C_select_t(t4,((C_word*)t0)[6]));}
else{
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],C_fix(1));
t4=t2;
f_4125(t4,C_C_select(t3));}}

/* k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4125(C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4125,NULL,2,t0,t1);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:696: posix-error */
t2=lf[1];
f_2620(7,t2,((C_word*)t0)[2],lf[8],lf[174],lf[175],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_i_pairp(((C_word*)t0)[3]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
/* posixunix.scm:697: values */
C_values(4,0,((C_word*)t0)[2],t4,C_SCHEME_END_OF_LIST);}
else{
/* posixunix.scm:697: values */
C_values(4,0,((C_word*)t0)[2],t4,C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
/* posixunix.scm:702: fd_test */
t4=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(0),((C_word*)t0)[3]);}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4219,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word)li80),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[3];
t8=C_i_check_list_2(t7,lf[70]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4234,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4236,a[2]=t11,a[3]=t6,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_4236(t13,t9,t7);}}
else{
t4=t3;
f_4161(2,t4,C_SCHEME_FALSE);}}}}

/* k5293 in initialize-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5294,2,t0,t1);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1144: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_4750 */
static void C_ccall f_4750(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4750r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4750r(t0,t1,t2);}}

static void C_ccall f_4750r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4753,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:866: close-input-pipe */
t4=*((C_word*)lf[200]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* f_4758 in k4734 in with-input-from-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4758,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[209]+1));
t3=C_mutate((C_word*)lf[209]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k4752 */
static void C_ccall f_4753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* create-session in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5423,2,t0,t1);}
t2=C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5427,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5432,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1225: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k6651 in k6649 in k6647 in map-file-to-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:1618: mmap */
t3=((C_word*)t0)[9];
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k6653 in k6651 in k6649 in k6647 in map-file-to-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6654,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6656,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6668,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[2],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1619: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[383]+1)))(3,*((C_word*)lf[383]+1),t3,t1);}

/* k6655 in k6653 in k6651 in k6649 in k6647 in map-file-to-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_6656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6656,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[381],((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5439,2,t0,t1);}
t2=C_mutate((C_word*)lf[318]+1 /* (set! process-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[319]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5441,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5472,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(4,*((C_word*)lf[66]+1),t4,t5,C_make_character(32));}

/* k6649 in k6647 in map-file-to-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6650(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6650,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_blockp(((C_word*)t0)[4]))){
if(C_truep(C_specialp(((C_word*)t0)[4]))){
t3=t2;
f_6652(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:1617: ##sys#signal-hook */
t3=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[13],lf[380],lf[384],((C_word*)t0)[4]);}}
else{
/* posixunix.scm:1617: ##sys#signal-hook */
t3=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[13],lf[380],lf[384],((C_word*)t0)[4]);}}

/* k5589 */
static void C_ccall f_5590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5590,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_5604(2,t5,t3);}
else{
/* posixunix.scm:1299: rx= */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[332]+1)))(4,*((C_word*)lf[332]+1),t4,C_fix((C_word)errno),C_fix((C_word)EAGAIN));}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(1),t1));}}

/* k5287 in k5293 in initialize-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1145: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[268],lf[269],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6267 in file-truncate in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6262(t2,C_fixnum_lessp(t1,C_fix(0)));}

/* f_4740 in k4734 in with-input-from-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4740,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[209]+1));
t3=C_mutate((C_word*)lf[209]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_4745 in k4734 in with-input-from-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4750,a[2]=((C_word*)t0)[2],a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:864: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* k5426 in create-session in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k6260 in file-truncate in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6262(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1485: posix-error */
t2=lf[1];
f_2620(7,t2,((C_word*)t0)[2],lf[8],lf[351],lf[352],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* check in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4571(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4571,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posixunix.scm:801: posix-error */
t6=lf[1];
f_2620(6,t6,t1,lf[8],t2,lf[193],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4583,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:802: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(6,*((C_word*)lf[48]+1),t6,t4,*((C_word*)lf[49]+1),lf[194],lf[51]);}}

/* k7528 */
static void C_ccall f_7529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1923: ##sys#custom-input-port */
t2=*((C_word*)lf[329]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_TRUE,C_fix(256),((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_7526 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_7526,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7529,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1922: connect-parent */
t10=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,t2,t5,t6,t7);}

/* k6276 in file-truncate in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1481: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[351]);}

/* k7524 in k7511 */
static void C_ccall f_7525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1917: connect-child */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],*((C_word*)lf[38]+1));}

/* f_4772 in k4766 in with-output-to-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4772,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[211]+1));
t3=C_mutate((C_word*)lf[211]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k7521 in k7513 in k7511 */
static void C_ccall f_7522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1918: connect-child */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],*((C_word*)lf[39]+1));}

/* f_4777 in k4766 in with-output-to-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4782,a[2]=((C_word*)t0)[2],a[3]=((C_word)li113),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:872: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* create-symbolic-link in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5441(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5441,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[319]);
t5=C_i_check_string_2(t3,lf[319]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5460,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5469,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1255: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t7,t2);}

/* k6273 in file-truncate in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_truncate(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_6262(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* setup in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6288(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6288,NULL,4,t1,t2,t3,t4);}
t5=C_i_nullp(t3);
t6=(C_truep(t5)?C_fix(0):C_i_car(t3));
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_i_car(t8));
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6300,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t11,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1498: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[355]+1)))(4,*((C_word*)lf[355]+1),t14,t2,t4);}

/* k6667 in k6653 in k6651 in k6649 in k6647 in map-file-to-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_6668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6668,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm:1620: posix-error */
t3=lf[1];
f_2620(11,t3,((C_word*)t0)[2],lf[8],lf[380],lf[382],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
t3=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record3(&a,3,lf[381],((C_word*)t0)[10],((C_word*)t0)[4]));}}

/* k4596 in open-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:809: check */
f_4571(((C_word*)t0)[3],lf[195],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* create-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4799,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_pipe(C_SCHEME_FALSE);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:883: posix-error */
t4=lf[1];
f_2620(5,t4,t2,lf[8],lf[212],lf[213]);}
else{
/* posixunix.scm:884: values */
C_values(4,0,t1,C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k4798 in create-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:884: values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* f_4790 in k4766 in with-output-to-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4790,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[211]+1));
t3=C_mutate((C_word*)lf[211]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k4582 in check in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* open-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4585(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4585r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4585r(t0,t1,t2,t3);}}

static void C_ccall f_4585r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[195]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[196]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4598,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[196]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:813: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t9,t2,lf[195]);}
else{
t9=C_eqp(t6,lf[197]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4613,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:814: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t10,t2,lf[195]);}
else{
/* posixunix.scm:798: ##sys#error */
t10=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[198],t6);}}}

/* k4784 */
static void C_ccall f_4785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_4782 */
static void C_ccall f_4782(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4782r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4782r(t0,t1,t2);}}

static void C_ccall f_4782r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4785,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:874: close-output-pipe */
t4=*((C_word*)lf[203]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4633 in open-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:820: check */
f_4571(((C_word*)t0)[3],lf[199],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* f_5587 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5590,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1296: ##sys#file-select-one */
t3=*((C_word*)lf[123]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5586(C_word c,C_word t0,C_word t1){
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
C_word ab[79],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5586,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li149),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5614,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=((C_word)li150),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5621,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[6],a[10]=((C_word)li152),tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5718,a[2]=t10,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5722,a[2]=t5,a[3]=t7,a[4]=t8,a[5]=((C_word)li153),tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5733,a[2]=t5,a[3]=t3,a[4]=t6,a[5]=((C_word)li154),tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5744,a[2]=t10,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word)li155),tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5764,a[2]=t7,a[3]=t8,a[4]=((C_word)li156),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5772,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=t8,a[6]=((C_word)li158),tmp=(C_word)a,a+=7,tmp);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5839,a[2]=t5,a[3]=t3,a[4]=t8,a[5]=t1,a[6]=((C_word)li163),tmp=(C_word)a,a+=7,tmp);
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5938,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=((C_word)li164),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1341: make-input-port */
t19=*((C_word*)lf[346]+1);
((C_proc9)(void*)(*((C_word*)t19+1)))(9,t19,t11,t12,t13,t14,t15,t16,t17,t18);}

/* map-file-to-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(c<7) C_bad_min_argc_2(c,7,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr7r,(void*)f_6644r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest(a,C_rest_count(0));
f_6644r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_6644r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(9);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6648,a[2]=t1,a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=((C_word*)t0)[2],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;
f_6648(2,t10,t2);}
else{
/* posixunix.scm:1614: ##sys#null-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[385]+1)))(2,*((C_word*)lf[385]+1),t8);}}

/* k6647 in map-file-to-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[8]))){
t3=((C_word*)t0)[8];
t4=t2;
f_6650(t4,C_u_i_car(t3));}
else{
t3=t2;
f_6650(t3,C_fix(0));}}

/* k4535 in change-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:782: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[63]);}

/* k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5582,2,t0,t1);}
t2=C_fixnump(((C_word*)t0)[2]);
t3=(C_truep(t2)?((C_word*)t0)[2]:C_block_size(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5586,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
/* posixunix.scm:1291: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(3,*((C_word*)lf[66]+1),t4,((C_word*)t0)[2]);}
else{
t5=t4;
f_5586(2,t5,((C_word*)t0)[2]);}}

/* change-directory* in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4538(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4538,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[191]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4544,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_fchdir(t2);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}
else{
/* posixunix.scm:790: posix-error */
t7=lf[1];
f_2620(6,t7,t4,lf[8],lf[191],lf[192],t2);}}

/* k4035 in k4031 in k4029 in file-write in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4031 in k4029 in file-write in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4032(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4032,NULL,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[169]);
t3=C_write(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(C_fix(-1),t3);
if(C_truep(t5)){
/* posixunix.scm:642: posix-error */
t6=lf[1];
f_2620(7,t6,t4,lf[8],lf[169],lf[170],((C_word*)t0)[2],t1);}
else{
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}}

/* k4029 in file-write in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_4032(t4,C_u_i_car(t3));}
else{
t3=t2;
f_4032(t3,C_block_size(((C_word*)t0)[3]));}}

/* terminal-name in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6988(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6988,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6992,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1725: ##sys#terminal-check */
f_6958(t3,lf[408],t2);}

/* open-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4622(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4622r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4622r(t0,t1,t2,t3);}}

static void C_ccall f_4622r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[199]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[196]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4635,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[196]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4641,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:824: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t9,t2,lf[199]);}
else{
t9=C_eqp(t6,lf[197]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4650,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:825: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t10,t2,lf[199]);}
else{
/* posixunix.scm:798: ##sys#error */
t10=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[198],t6);}}}

/* f_7591 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7591(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[23],*a=ab;
if(c!=8) C_bad_argc_2(c,8,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_7591,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7593,a[2]=t2,a[3]=((C_word)li254),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_string_2(((C_word*)t8)[1],t2);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7628,a[2]=t2,a[3]=t8,a[4]=t9,a[5]=t6,a[6]=t3,a[7]=t1,a[8]=t7,a[9]=t10,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixunix.scm:1957: chkstrlst */
t13=t10;
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,((C_word*)t9)[1]);}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7648,a[2]=t9,a[3]=t8,a[4]=t12,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1959: ##sys#shell-command-arguments */
t14=*((C_word*)lf[429]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,((C_word*)t8)[1]);}}

/* f_7597 */
static void C_ccall f_7597(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7597,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k4525 in k4523 in change-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_7593 */
static void C_ccall f_7593(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_7593,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7597,a[2]=((C_word*)t0)[2],a[3]=((C_word)li252),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7606,a[2]=t7,a[3]=t4,a[4]=((C_word)li253),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_7606(t9,t1,t5);}

/* k4523 in change-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_chdir(t1);
t4=C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}
else{
/* posixunix.scm:784: posix-error */
t5=lf[1];
f_2620(6,t5,t2,lf[8],lf[63],lf[190],((C_word*)t0)[3]);}}

/* k6991 in terminal-name in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_C_fileno(((C_word*)t0)[2]);
/* posixunix.scm:1726: ttyname */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t2);}

/* file-write in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4024r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4024r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4024r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=C_i_check_exact_2(t2,lf[169]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4030,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;
f_4030(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:637: ##sys#signal-hook */
t7=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[13],lf[169],lf[171],t3);}}
else{
/* posixunix.scm:637: ##sys#signal-hook */
t7=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[13],lf[169],lf[171],t3);}}

/* f_6998 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6998,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_pointer_argumentp(t3);
t7=C_i_foreign_pointer_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub1785(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k4612 in open-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4613,2,t0,t1);}
t2=open_binary_input_pipe(&a,1,t1);
/* posixunix.scm:809: check */
f_4571(((C_word*)t0)[3],lf[195],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k7580 */
static void C_ccall f_7581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1936: input-port */
t2=((C_word*)t0)[2];
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],*((C_word*)lf[37]+1),t1);}

/* f_6620 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[5],*a=ab;
if(c!=8) C_bad_argc_2(c,8,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_6620,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=C_a_i_bytevector(&a,1,C_fix(3));
t9=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t10=C_i_foreign_integer_argumentp(t3);
t11=C_i_foreign_fixnum_argumentp(t4);
t12=C_i_foreign_fixnum_argumentp(t5);
t13=C_i_foreign_fixnum_argumentp(t6);
t14=C_i_foreign_integer_argumentp(t7);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,stub1629(t8,t9,t10,t11,t12,t13,t14));}

/* f_7440 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7440,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7448,a[2]=((C_word)li239),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7453,a[2]=((C_word)li240),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1887: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* f_7448 */
static void C_ccall f_7448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7448,2,t0,t1);}
/* posixunix.scm:1889: create-pipe */
t2=*((C_word*)lf[212]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* k4603 in open-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4604,2,t0,t1);}
t2=open_text_input_pipe(&a,1,t1);
/* posixunix.scm:809: check */
f_4571(((C_word*)t0)[3],lf[195],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k7571 in k7568 in k7565 */
static void C_ccall f_7572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1935: values */
C_values(6,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* seconds->utc-time in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3625(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3625r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3625r(t0,t1,t2);}}

static void C_ccall f_3625r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3630,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:460: current-seconds */
t4=*((C_word*)lf[103]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[104]);
/* posix-common.scm:462: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[102]+1)))(4,*((C_word*)lf[102]+1),t1,t4,C_SCHEME_TRUE);}}

/* k7577 in k7565 */
static void C_ccall f_7578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1938: output-port */
t2=((C_word*)t0)[2];
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],*((C_word*)lf[38]+1),t1);}

/* k7574 in k7568 in k7565 */
static void C_ccall f_7575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1941: input-port */
t2=((C_word*)t0)[2];
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],*((C_word*)lf[39]+1),t1);}

/* k4543 in change-directory* in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_4084 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4084,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub723(C_SCHEME_UNDEFINED,t3));}

/* f_4089 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4089,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub728(C_SCHEME_UNDEFINED,t4,t5));}

/* k4676 in close-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4677,2,t0,t1);}
t2=close_pipe(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4679,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:839: posix-error */
t5=lf[1];
f_2620(6,t5,t3,lf[8],lf[203],lf[204],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k4678 in k4676 in close-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* close-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4673(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4673,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4677,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:836: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(5,*((C_word*)lf[205]+1),t3,t2,C_SCHEME_TRUE,lf[203]);}

/* file-change-time in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2705,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:200: ##sys#stat */
f_2636(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[18]);}

/* k2708 in file-change-time in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2709,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* k2702 in file-access-time in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2703,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* k4072 in k4066 in k4062 in file-mkstemp in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:653: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_7422 */
static void C_ccall f_7422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7422,2,t0,t1);}
/* posixunix.scm:1882: process-wait */
t2=*((C_word*)lf[118]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_7427 */
static void C_ccall f_7427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7427,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* posixunix.scm:1884: ##sys#signal-hook */
t5=*((C_word*)lf[2]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t1,lf[120],((C_word*)t0)[2],lf[432],((C_word*)t0)[3],t4);}}

/* k2714 in file-owner in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* k4662 in close-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4663,2,t0,t1);}
t2=close_pipe(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4665,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:832: posix-error */
t5=lf[1];
f_2620(6,t5,t3,lf[8],lf[200],lf[201],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* file-permissions in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2717,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2721,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:202: ##sys#stat */
f_2636(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[20]);}

/* k4664 in k4662 in close-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* file-owner in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2711,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:201: ##sys#stat */
f_2636(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[19]);}

/* signal-unmask! in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4933,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[246]);
t4=C_sigdelset(t2);
t5=C_sigprocmask_unblock(C_fix(0));
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
/* posixunix.scm:983: posix-error */
t6=lf[1];
f_2620(5,t6,t1,lf[120],lf[246],lf[247]);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3663 in k3658 in seconds->string in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:470: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),((C_word*)t0)[2],t1,C_fix(0),t3);}
else{
/* posix-common.scm:471: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[105],lf[106],((C_word*)t0)[3]);}}

/* k3658 in seconds->string in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3660,2,t0,t1);}
t2=C_i_check_number_2(t1,lf[105]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3664,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:468: ctime */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* f_5938 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5938(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5938,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[345]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1413: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}}

/* k3628 in seconds->utc-time in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[104]);
/* posix-common.scm:462: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[102]+1)))(4,*((C_word*)lf[102]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k3607 in seconds->local-time in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[101]);
/* posix-common.scm:458: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[102]+1)))(4,*((C_word*)lf[102]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k5926 in loop */
static void C_ccall f_5927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:1408: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5844(t2,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* k4952 in system-information in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4959,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.sysname),C_fix(0));}

/* k4958 in k4952 in system-information in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4962,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.nodename),C_fix(0));}

/* seconds->local-time in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3604(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3604r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3604r(t0,t1,t2);}}

static void C_ccall f_3604r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3609,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:456: current-seconds */
t4=*((C_word*)lf[103]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[101]);
/* posix-common.scm:458: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[102]+1)))(4,*((C_word*)lf[102]+1),t1,t4,C_SCHEME_FALSE);}}

/* system-information in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4953,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_fix((C_word)C_uname),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4976,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:998: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t3);}
else{
t3=t2;
f_4953(2,t3,C_SCHEME_UNDEFINED);}}

/* k6586 in k6595 in k6592 in scan in k6562 in loop in get-environment-variables in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_6587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6587,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6842 in k6837 in utc-time->seconds in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1666: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[394],lf[395],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k6592 in scan in k6562 in loop in get-environment-variables in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6596,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=C_block_size(((C_word*)t0)[6]);
/* posixunix.scm:1581: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),t2,((C_word*)t0)[6],t3,t4);}

/* k6595 in k6592 in scan in k6562 in loop in get-environment-variables in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_6596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6596,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6587,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* posixunix.scm:1582: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6559(t5,t3,t4);}

/* local-timezone-abbreviation in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6849,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1733(t2);
/* posixunix.scm:1670: ##sys#peek-c-string */
t4=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,C_fix(0));}

/* k4961 in k4958 in k4952 in system-information in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.release),C_fix(0));}

/* k4964 in k4961 in k4958 in k4952 in system-information in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.version),C_fix(0));}

/* k4967 in k4964 in k4961 in k4958 in k4952 in system-information in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.machine),C_fix(0));}

/* utc-time->seconds in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6834(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6834,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6838,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1663: check-time-vector */
f_3586(t3,lf[394],t2);}

/* k6837 in utc-time->seconds in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6838,2,t0,t1);}
t2=C_a_timegm(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6844,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1665: fp= */
t4=*((C_word*)lf[109]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[110],t2);}

/* err in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6346(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6346,NULL,4,t1,t2,t3,t4);}
t5=C_slot(t3,C_fix(1));
t6=C_slot(t3,C_fix(2));
t7=C_slot(t3,C_fix(3));
/* posixunix.scm:1506: posix-error */
t8=lf[1];
f_2620(8,t8,t1,lf[8],t4,t2,t5,t6,t7);}

/* scan in k6562 in loop in get-environment-variables in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6571(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6571,NULL,3,t0,t1,t2);}
t3=C_subchar(((C_word*)t0)[2],t2);
if(C_truep(C_i_char_equalp(C_make_character(61),t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6593,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1580: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),t4,((C_word*)t0)[2],C_fix(0),t2);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm:1583: scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k7231 in doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7233(C_word c,C_word t0,C_word t1){
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
f_7160(t5,((C_word*)t0)[5],t3,t4);}

/* k5945 */
static void C_ccall f_5946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* conc-loop in glob in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3270(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3270,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3284,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3289,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:378: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* k4371 in k4366 in k4360 in set-file-position! in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm:738: posix-error */
t2=lf[1];
f_2620(7,t2,((C_word*)t0)[2],lf[8],lf[179],lf[180],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k4377 in k4366 in k4360 in set-file-position! in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[51]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
f_4373(2,t5,t4);}
else{
t4=((C_word*)t0)[5];
f_4373(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_4373(2,t3,t2);}
else{
/* posixunix.scm:737: ##sys#signal-hook */
t2=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[13],lf[179],lf[181],((C_word*)t0)[2]);}}}

/* f_3284 in conc-loop in glob in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3284,2,t0,t1);}
/* posix-common.scm:379: decompose-pathname */
t2=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_3289 in conc-loop in glob in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3289,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3352,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t7=t3;
/* posix-common.scm:380: make-pathname */
t8=*((C_word*)lf[78]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}
else{
/* posix-common.scm:380: make-pathname */
t7=*((C_word*)lf[78]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,C_SCHEME_FALSE,lf[83],t4);}}

/* loop */
static void C_fcall f_5844(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5844,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word)li159),tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5913,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word)li160),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5918,a[2]=((C_word*)t0)[7],a[3]=((C_word)li161),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1400: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1406: fetch */
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* user-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4997(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_4997r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4997r(t0,t1,t2,t3);}}

static void C_ccall f_4997r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5004,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;
f_5004(t7,C_getpwuid(t2));}
else{
t7=C_i_check_string_2(t2,lf[255]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5035,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1057: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t8,t2,lf[255]);}}

/* k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4995(C_word c,C_word t0,C_word t1){
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
C_word ab[58],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4995,2,t0,t1);}
t2=C_mutate((C_word*)lf[254]+1 /* (set! current-effective-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[255]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4997,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[258]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5043,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[259]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5055,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[260]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5078,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[261]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5150,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[265]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5207,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5259,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
t10=C_mutate((C_word*)lf[268]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5274,a[2]=t9,a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate((C_word*)lf[270]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t12=C_mutate((C_word*)lf[271]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t13=C_mutate((C_word*)lf[272]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t14=C_mutate((C_word*)lf[273]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t15=C_mutate((C_word*)lf[274]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t16=C_mutate((C_word*)lf[275]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t17=C_mutate((C_word*)lf[276]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t18=C_mutate((C_word*)lf[277]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t19=C_mutate((C_word*)lf[278]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t20=C_mutate((C_word*)lf[279]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t21=C_mutate((C_word*)lf[280]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t22=C_mutate((C_word*)lf[281]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t23=C_mutate((C_word*)lf[282]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t24=C_mutate((C_word*)lf[283]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t25=C_mutate((C_word*)lf[284]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t26=C_mutate((C_word*)lf[285]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t27=C_mutate((C_word*)lf[286]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t28=C_mutate((C_word*)lf[287]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t29=C_mutate((C_word*)lf[288]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t30=C_mutate((C_word*)lf[289]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t31=C_mutate((C_word*)lf[290]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t32=C_mutate((C_word*)lf[291]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t33=C_mutate((C_word*)lf[292]+1 /* (set! errno/wouldblock ...) */,C_fix((C_word)EWOULDBLOCK));
t34=C_set_block_item(lf[293] /* errno/2big */,0,C_fix(0));
t35=C_set_block_item(lf[294] /* errno/deadlk */,0,C_fix(0));
t36=C_set_block_item(lf[295] /* errno/dom */,0,C_fix(0));
t37=C_set_block_item(lf[296] /* errno/fbig */,0,C_fix(0));
t38=C_set_block_item(lf[297] /* errno/ilseq */,0,C_fix(0));
t39=C_set_block_item(lf[298] /* errno/mlink */,0,C_fix(0));
t40=C_set_block_item(lf[299] /* errno/nametoolong */,0,C_fix(0));
t41=C_set_block_item(lf[300] /* errno/nfile */,0,C_fix(0));
t42=C_set_block_item(lf[301] /* errno/nodev */,0,C_fix(0));
t43=C_set_block_item(lf[302] /* errno/nolck */,0,C_fix(0));
t44=C_set_block_item(lf[303] /* errno/nosys */,0,C_fix(0));
t45=C_set_block_item(lf[304] /* errno/notempty */,0,C_fix(0));
t46=C_set_block_item(lf[305] /* errno/notty */,0,C_fix(0));
t47=C_set_block_item(lf[306] /* errno/nxio */,0,C_fix(0));
t48=C_set_block_item(lf[307] /* errno/range */,0,C_fix(0));
t49=C_set_block_item(lf[308] /* errno/xdev */,0,C_fix(0));
t50=C_mutate((C_word*)lf[309]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5335,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[311]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5359,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t52=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5385,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
t53=C_mutate((C_word*)lf[313]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5405,a[2]=t52,a[3]=((C_word)li141),tmp=(C_word)a,a+=4,tmp));
t54=C_mutate((C_word*)lf[314]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5411,a[2]=t52,a[3]=((C_word)li142),tmp=(C_word)a,a+=4,tmp));
t55=C_mutate((C_word*)lf[315]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5417,a[2]=t52,a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp));
t56=C_mutate((C_word*)lf[316]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5423,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5439,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7770,a[2]=((C_word)li262),tmp=(C_word)a,a+=3,tmp);
t59=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7785,a[2]=((C_word)li263),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1230: getter-with-setter */
t60=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t60+1)))(5,t60,t57,t58,t59,lf[443]);}

/* k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4991,2,t0,t1);}
t2=C_mutate((C_word*)lf[253]+1 /* (set! current-group-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7804,a[2]=((C_word)li264),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7807,a[2]=((C_word)li265),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1035: getter-with-setter */
t6=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,t5,lf[446]);}

/* k3297 in k3291 */
static void C_ccall f_3298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3298,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3300(t5,((C_word*)t0)[6],t1);}

/* f_5913 in loop */
static void C_ccall f_5913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5913,2,t0,t1);}
/* posixunix.scm:1401: ##sys#scan-buffer-line */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[344]+1)))(6,*((C_word*)lf[344]+1),t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);}

/* k3291 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=((C_word*)t0)[4];
/* posix-common.scm:381: directory */
t4=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_TRUE);}
else{
/* posix-common.scm:381: directory */
t3=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[81],C_SCHEME_TRUE);}}

/* k6822 in k6819 in string->time in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6823,2,t0,t1);}
t2=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
/* posixunix.scm:1660: strptime */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);}

/* k6819 in string->time in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1660: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[4]);}

/* k6113 */
static void C_ccall f_6114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1469: on-close */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}

/* k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4987,2,t0,t1);}
t2=C_mutate((C_word*)lf[252]+1 /* (set! current-effective-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7821,a[2]=((C_word)li266),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7824,a[2]=((C_word)li267),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1026: getter-with-setter */
t6=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,t5,lf[449]);}

/* f_5918 in loop */
static void C_ccall f_5918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5918,4,t0,t1,t2,t3);}
if(C_truep(t3)){
/* posixunix.scm:1403: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5844(t4,t1,t2);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_5847 in loop */
static void C_ccall f_5847(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5847,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t6=C_eqp(C_fix(0),t4);
if(C_truep(t6)){
t7=((C_word*)t0)[6];
t8=t5;
f_5852(2,t8,(C_truep(t7)?t7:lf[342]));}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5888,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:1383: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(3,*((C_word*)lf[66]+1),t7,t4);}}

/* k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4983,2,t0,t1);}
t2=C_mutate((C_word*)lf[251]+1 /* (set! current-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7838,a[2]=((C_word)li268),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7841,a[2]=((C_word)li269),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1016: getter-with-setter */
t6=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,t5,lf[452]);}

/* k4649 in open-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4650,2,t0,t1);}
t2=open_binary_output_pipe(&a,1,t1);
/* posixunix.scm:820: check */
f_4571(((C_word*)t0)[3],lf[199],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* close-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4659(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4659,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4663,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:829: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[202]+1)))(5,*((C_word*)lf[202]+1),t3,t2,C_SCHEME_TRUE,lf[200]);}

/* k5860 in k5851 */
static void C_ccall f_5861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
/* posixunix.scm:1394: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* change-directory in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4518(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4518,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[63]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4524,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4536,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:782: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t5,t2);}

/* f_6101 in k6091 in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6101(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6101,3,t0,t1,t2);}
/* posixunix.scm:1464: store */
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,t2);}

/* f_6106 in k6091 in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6106,2,t0,t1);}
if(C_truep(C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6114,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_close(((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:1468: posix-error */
t4=lf[1];
f_2620(7,t4,t2,lf[8],((C_word*)t0)[5],lf[349],((C_word*)t0)[4],((C_word*)t0)[6]);}
else{
/* posixunix.scm:1469: on-close */
t4=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}}}

/* f_5839 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5839,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t5,a[8]=((C_word)li162),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_5844(t7,t1,C_SCHEME_FALSE);}

/* k2855 */
static void C_ccall f_2856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[28],t1));}

/* socket? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2858,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:233: file-type */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k4640 in open-output-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4641,2,t0,t1);}
t2=open_text_output_pipe(&a,1,t1);
/* posixunix.scm:820: check */
f_4571(((C_word*)t0)[3],lf[199],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k5851 */
static void C_ccall f_5852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5852,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_eqp(((C_word*)t0)[4],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1393: fetch */
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[8],C_fix(4));
t5=C_fixnum_plus(t4,C_fix(1));
t6=C_i_set_i_slot(((C_word*)t0)[8],C_fix(4),t5);
t7=C_i_set_i_slot(((C_word*)t0)[8],C_fix(5),C_fix(0));
/* posixunix.scm:1398: values */
C_values(4,0,((C_word*)t0)[6],t1,C_SCHEME_FALSE);}}

/* k4500 */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posixunix.scm:762: posix-error */
t4=lf[1];
f_2620(6,t4,((C_word*)t0)[2],lf[8],((C_word*)t0)[3],lf[187],((C_word*)t0)[4]);}}

/* string->time in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6805(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6805r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6805r(t0,t1,t2,t3);}}

static void C_ccall f_6805r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[393]:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[392]);
t7=C_i_check_string_2(t5,lf[392]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6820,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1660: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t8,t2,lf[392]);}

/* f_4097 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4097(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4097,4,t0,t1,t2,t3);}
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub734(C_SCHEME_UNDEFINED,t4,t5));}

/* f_6803 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6803,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub1709(C_SCHEME_UNDEFINED,t2,t3,t4));}

/* k2864 in socket? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[29],t1));}

/* directory? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2867,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2874,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:236: file-type */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2837 in block-device? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[27],t1));}

/* block-device? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2831,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2838,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:224: file-type */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* _exit in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6862(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_6862r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6862r(t0,t1,t2);}}

static void C_ccall f_6862r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
/* posixunix.scm:1686: ex0 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
/* posixunix.scm:1686: ex0 */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,C_fix(0));}}

/* k2846 in character-device? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[26],t1));}

/* f_2849 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2849,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:230: file-type */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* f_4696 in k4690 in call-with-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4696,2,t0,t1);}
/* posixunix.scm:846: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

/* k4690 in call-with-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4696,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4701,a[2]=t1,a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:845: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}

/* character-device? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2840,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2847,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:227: file-type */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* seconds->string in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3655r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3655r(t0,t1,t2);}}

static void C_ccall f_3655r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3660,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:466: current-seconds */
t4=*((C_word*)lf[103]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=t3;
f_3660(2,t4,C_i_car(t2));}}

/* k5821 in loop in k5777 */
static void C_ccall f_5822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posixunix.scm:1374: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5781(t3,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* f_6857 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6857(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6857,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1739(C_SCHEME_UNDEFINED,t3));}

/* call-with-input-pipe in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4687(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4687r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4687r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4687r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4691,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[195]+1),t2,t4);}

/* k6448 in create-fifo in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6449(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6449,NULL,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[364]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6464,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6467,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1540: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t4,((C_word*)t0)[3]);}

/* create-fifo in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6443(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_6443r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6443r(t0,t1,t2,t3);}}

static void C_ccall f_6443r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_string_2(t2,lf[364]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6449,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=t5;
f_6449(t7,C_u_i_car(t6));}
else{
t6=C_fixnum_or(C_fix((C_word)S_IRWXG),C_fix((C_word)S_IRWXO));
t7=t5;
f_6449(t7,C_fixnum_or(C_fix((C_word)S_IRWXU),t6));}}

/* k3203 in k3193 in k3188 in k3184 in loop in k3160 in k3157 in k3155 in k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3204,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7865 */
static void C_ccall f_7866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1012: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[447],lf[453],((C_word*)t0)[3]);}

/* f_7394 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7394,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,t3);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7402,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1874: duplicate-fileno */
t7=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,t4);}}

/* signal-masked? in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4911,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[243]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_sigismember(t2));}

/* signal-mask! in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4917(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4917,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[244]);
t4=C_sigaddset(t2);
t5=C_sigprocmask_block(C_fix(0));
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
/* posixunix.scm:977: posix-error */
t6=lf[1];
f_2620(5,t6,t1,lf[120],lf[244],lf[245]);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5777 */
static void C_fcall f_5779(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5779,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word)li157),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_5781(t5,((C_word*)t0)[7],t1,C_fix(0),((C_word*)t0)[8]);}

/* f_7858 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7858(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7858,3,t0,t1,t2);}
t3=C_setuid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7866,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1011: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k7381 in k7363 in k7361 in process-run in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7385,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1848: ##sys#shell-command-arguments */
t3=*((C_word*)lf[429]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k7384 in k7381 in k7363 in k7361 in process-run in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1848: process-execute */
t2=*((C_word*)lf[419]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_3646 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3646(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3646,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_integer_argumentp(t2);
t5=stub479(t3,t4);
/* posix-common.scm:465: ##sys#peek-c-string */
t6=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* f_7855 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7855,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1092(C_SCHEME_UNDEFINED));}

/* f_5772 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5772,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t7=t6;
f_5779(t7,t3);}
else{
t7=C_block_size(t4);
t8=t6;
f_5779(t8,C_fixnum_difference(t7,t5));}}

/* f_4318 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4318(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4318,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[174]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_i_fixnum_max(((C_word*)((C_word*)t0)[2])[1],t2));
/* posixunix.scm:677: fd_set */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,C_fix(0),t2);}

/* local-time->seconds in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3690(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3690,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3694,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:474: check-time-vector */
f_3586(t3,lf[107],t2);}

/* k7848 */
static void C_ccall f_7849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1021: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[450],lf[451],((C_word*)t0)[3]);}

/* k3693 in local-time->seconds in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3694,2,t0,t1);}
t2=C_a_mktime(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3700,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:476: fp= */
t4=*((C_word*)lf[109]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[110],t2);}

/* f_7841 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7841(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7841,3,t0,t1,t2);}
t3=C_seteuid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7849,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1020: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* file-unlock in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6418(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6418,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[354],lf[362]);
t4=C_slot(t2,C_fix(2));
t5=C_slot(t2,C_fix(3));
t6=C_flock_setup(C_fix((C_word)F_UNLCK),t4,t5);
t7=C_slot(t2,C_fix(1));
t8=C_flock_lock(t7);
if(C_truep(C_fixnum_lessp(t8,C_fix(0)))){
/* posixunix.scm:1530: posix-error */
t9=lf[1];
f_2620(6,t9,t1,lf[8],lf[362],lf[363],t2);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* k3233 in k3157 in k3155 in k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:350: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[25]);}

/* f_7838 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7838,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1097(C_SCHEME_UNDEFINED));}

/* k7363 in k7361 in process-run in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7364,2,t0,t1);}
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm:1846: process-execute */
t3=*((C_word*)lf[419]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1848: ##sys#shell-command */
t4=*((C_word*)lf[425]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7361 in process-run in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_7362(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7362,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7364,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1844: process-fork */
t3=*((C_word*)lf[416]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7831 */
static void C_ccall f_7832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1031: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[447],lf[448],((C_word*)t0)[3]);}

/* k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4109(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4109,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* posixunix.scm:665: fd_zero */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(0));}

/* for-each-loop752 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4330(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4330,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4339,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posixunix.scm:673: g753 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4338 in for-each-loop752 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4330(t3,((C_word*)t0)[4],t2);}

/* file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr4r,(void*)f_4105r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4105r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4105r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(11);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4109,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t4;
t9=t7;
f_4109(t9,C_u_i_car(t8));}
else{
t8=t7;
f_4109(t8,C_SCHEME_FALSE);}}

/* f_7821 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7821,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1102(C_SCHEME_UNDEFINED));}

/* f_7824 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7824(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7824,3,t0,t1,t2);}
t3=C_setgid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7832,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1030: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* loop in k5777 */
static void C_fcall f_5781(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5781,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t6=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t10=C_substring_copy(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],t9,t4);
t11=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t13=C_fixnum_difference(t2,t8);
t14=C_fixnum_plus(t3,t8);
t15=C_fixnum_plus(t4,t8);
/* posixunix.scm:1369: loop */
t19=t1;
t20=t13;
t21=t14;
t22=t15;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5822,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1371: fetch */
t7=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* k3730 in k3723 */
static void C_ccall f_3731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posix-common.scm:489: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],lf[112],((C_word*)t0)[3]);}}

/* k4360 in set-file-position! in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4361,NULL,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[179]);
t3=C_i_check_exact_2(t1,lf[179]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4367,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
/* posixunix.scm:730: ##sys#signal-hook */
t6=*((C_word*)lf[2]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t4,lf[183],lf[179],lf[184],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t6=t4;
f_4367(2,t6,C_SCHEME_UNDEFINED);}}

/* k4366 in k4360 in set-file-position! in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:731: port? */
t4=*((C_word*)lf[182]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k7814 */
static void C_ccall f_7815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1040: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[444],lf[445],((C_word*)t0)[3]);}

/* set-file-position! in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4357r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4357r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4357r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4361,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_4361(t7,C_u_i_car(t6));}
else{
t6=t5;
f_4361(t6,C_fix((C_word)SEEK_SET));}}

/* glob in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_3264r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3264r(t0,t1,t2);}}

static void C_ccall f_3264r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3270,a[2]=t4,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3270(t6,t1,t2);}

/* f_7807 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7807(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7807,3,t0,t1,t2);}
t3=C_setegid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7815,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1039: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_7804 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7804,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1107(C_SCHEME_UNDEFINED));}

/* f_3711 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3711,4,t0,t1,t2,t3);}
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=stub510(t4,t2,t3);
/* posix-common.scm:482: ##sys#peek-c-string */
t6=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* k4975 in system-information in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:999: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[248],lf[250]);}

/* f_3717 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3717(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3717r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3717r(t0,t1,t2,t3);}}

static void C_ccall f_3717r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3724,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:484: check-time-vector */
f_3586(t6,lf[111],t2);}

/* k4970 in k4967 in k4964 in k4961 in k4958 in k4952 in system-information in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4971,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1));}

/* process* in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7698(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_7698r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7698r(t0,t1,t2,t3);}}

static void C_ccall f_7698r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
if(C_truep(C_i_nullp(t7))){
/* posixunix.scm:1972: %process */
t10=((C_word*)t0)[2];
((C_proc8)(void*)(*((C_word*)t10+1)))(8,t10,t1,lf[435],C_SCHEME_TRUE,t2,t5,t9,*((C_word*)lf[436]+1));}
else{
t10=C_i_cdr(t7);
/* posixunix.scm:1972: %process */
t11=((C_word*)t0)[2];
((C_proc8)(void*)(*((C_word*)t11+1)))(8,t11,t1,lf[435],C_SCHEME_TRUE,t2,t5,t9,*((C_word*)lf[436]+1));}}

/* k3723 */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3724,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[111]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3731,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3740,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:488: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,((C_word*)t0)[2],lf[111]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:490: asctime */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}

/* k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3779(C_word c,C_word t0,C_word t1){
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
C_word ab[67],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3779,2,t0,t1);}
t2=C_mutate((C_word*)lf[116]+1 /* (set! signal-handler ...) */,t1);
t3=C_mutate((C_word*)lf[117]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3781,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[118]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3787,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[122]+1 /* (set! ##sys#file-nonblocking! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3850,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[123]+1 /* (set! ##sys#file-select-one ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3857,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[124]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t8=C_mutate((C_word*)lf[125]+1 /* (set! fcntl/dupfd ...) */,C_fix((C_word)F_DUPFD));
t9=C_mutate((C_word*)lf[126]+1 /* (set! fcntl/getfd ...) */,C_fix((C_word)F_GETFD));
t10=C_mutate((C_word*)lf[127]+1 /* (set! fcntl/setfd ...) */,C_fix((C_word)F_SETFD));
t11=C_mutate((C_word*)lf[128]+1 /* (set! fcntl/getfl ...) */,C_fix((C_word)F_GETFL));
t12=C_mutate((C_word*)lf[129]+1 /* (set! fcntl/setfl ...) */,C_fix((C_word)F_SETFL));
t13=C_mutate((C_word*)lf[130]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t14=C_mutate((C_word*)lf[131]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t15=C_mutate((C_word*)lf[132]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t16=C_mutate((C_word*)lf[133]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDONLY));
t17=C_mutate((C_word*)lf[134]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t18=C_mutate((C_word*)lf[135]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t19=C_mutate((C_word*)lf[136]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t20=C_mutate((C_word*)lf[137]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t21=C_mutate((C_word*)lf[138]+1 /* (set! open/noctty ...) */,C_fix((C_word)O_NOCTTY));
t22=C_mutate((C_word*)lf[139]+1 /* (set! open/nonblock ...) */,C_fix((C_word)O_NONBLOCK));
t23=C_mutate((C_word*)lf[140]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t24=C_mutate((C_word*)lf[141]+1 /* (set! open/sync ...) */,C_fix((C_word)O_FSYNC));
t25=C_mutate((C_word*)lf[142]+1 /* (set! open/fsync ...) */,C_fix((C_word)O_FSYNC));
t26=C_mutate((C_word*)lf[143]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t27=C_mutate((C_word*)lf[144]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t28=C_mutate((C_word*)lf[145]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IRUSR));
t29=C_mutate((C_word*)lf[146]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWUSR));
t30=C_mutate((C_word*)lf[147]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IXUSR));
t31=C_mutate((C_word*)lf[148]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IRGRP));
t32=C_mutate((C_word*)lf[149]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWGRP));
t33=C_mutate((C_word*)lf[150]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IXGRP));
t34=C_mutate((C_word*)lf[151]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IROTH));
t35=C_mutate((C_word*)lf[152]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWOTH));
t36=C_mutate((C_word*)lf[153]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IXOTH));
t37=C_mutate((C_word*)lf[154]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IRWXU));
t38=C_mutate((C_word*)lf[155]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IRWXG));
t39=C_mutate((C_word*)lf[156]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IRWXO));
t40=C_mutate((C_word*)lf[157]+1 /* (set! perm/isvtx ...) */,C_fix((C_word)S_ISVTX));
t41=C_mutate((C_word*)lf[158]+1 /* (set! perm/isuid ...) */,C_fix((C_word)S_ISUID));
t42=C_mutate((C_word*)lf[159]+1 /* (set! perm/isgid ...) */,C_fix((C_word)S_ISGID));
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3900,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t44=C_mutate((C_word*)lf[160]+1 /* (set! file-control ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3911,a[2]=t43,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp));
t45=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRGRP),C_fix((C_word)S_IROTH));
t46=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRWXU),t45);
t47=C_mutate((C_word*)lf[162]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3941,a[2]=t46,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp));
t48=C_mutate((C_word*)lf[164]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3971,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[166]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3987,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[169]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4024,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[172]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4057,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t52=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4084,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
t53=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4089,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
t54=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4097,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
t55=C_mutate((C_word*)lf[174]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4105,a[2]=t54,a[3]=t53,a[4]=t52,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));
t56=C_mutate((C_word*)lf[176]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t57=C_mutate((C_word*)lf[177]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t58=C_mutate((C_word*)lf[178]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t59=C_mutate((C_word*)lf[179]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4357,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4409,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7872,a[2]=((C_word)li272),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:741: getter-with-setter */
t62=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t62+1)))(5,t62,t60,t61,*((C_word*)lf[179]+1),lf[457]);}

/* k3698 in k3693 in local-time->seconds in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:477: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[107],lf[108],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* f_3705 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3705(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3705,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=stub504(t3,t2);
/* posix-common.scm:481: ##sys#peek-c-string */
t5=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,C_fix(0));}

/* sleep in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7313(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7313,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1916(C_SCHEME_UNDEFINED,t3));}

/* parent-process-id in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7309,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1912(C_SCHEME_UNDEFINED));}

/* set-alarm! in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6875(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6875,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1745(C_SCHEME_UNDEFINED,t3));}

/* k5020 in k5017 in k5014 in k5003 in user-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_dir),C_fix(0));}

/* k5023 in k5020 in k5017 in k5014 in k5003 in user-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_shell),C_fix(0));}

/* k5026 in k5023 in k5020 in k5017 in k5014 in k5003 in user-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1052: g1127 */
t2=((C_word*)t0)[2];
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_fix((C_word)C_user->pw_uid),C_fix((C_word)C_user->pw_gid),((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k3955 in k3953 in k3944 in file-open in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3953 in k3944 in file-open in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3954,2,t0,t1);}
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3956,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:612: posix-error */
t5=lf[1];
f_2620(8,t5,t3,lf[8],lf[162],lf[163],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k6885 in set-buffering-mode! in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_6888(t4,C_u_i_car(t3));}
else{
t3=t2;
f_6888(t3,C_fix((C_word)BUFSIZ));}}

/* set-buffering-mode! in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_6882r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6882r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6882r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6886,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1697: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[355]+1)))(4,*((C_word*)lf[355]+1),t5,t2,lf[399]);}

/* k5014 in k5003 in user-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5015,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_passwd),C_fix(0));}

/* k3964 in k3944 in file-open in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:610: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[162]);}

/* k6889 in k6887 in k6885 in set-buffering-mode! in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6891,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[399]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6899,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[4],C_fix(7));
t5=C_eqp(lf[51],t4);
if(C_truep(t5)){
t6=C_setvbuf(((C_word*)t0)[4],t1,((C_word*)t0)[2]);
t7=t3;
f_6899(t7,C_fixnum_lessp(t6,C_fix(0)));}
else{
t6=t3;
f_6899(t6,C_SCHEME_TRUE);}}

/* k6887 in k6885 in set-buffering-mode! in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6888(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6888,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6891,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,lf[401]);
if(C_truep(t4)){
t5=t3;
f_6891(2,t5,C_fix((C_word)_IOFBF));}
else{
t5=C_eqp(t2,lf[402]);
if(C_truep(t5)){
t6=C_fix((C_word)_IOLBF);
t7=t3;
f_6891(2,t7,t6);}
else{
t6=C_eqp(t2,lf[403]);
if(C_truep(t6)){
t7=t3;
f_6891(2,t7,C_fix((C_word)_IONBF));}
else{
/* posixunix.scm:1703: ##sys#error */
t7=*((C_word*)lf[41]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t3,lf[399],lf[404],((C_word*)t0)[2],((C_word*)t0)[4]);}}}}

/* current-user-name in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5050,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5053,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1069: current-user-id */
t4=*((C_word*)lf[251]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5017 in k5014 in k5003 in user-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_gecos),C_fix(0));}

/* k6897 in k6889 in k6887 in k6885 in set-buffering-mode! in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6899(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1709: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[399],lf[400],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5034 in user-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5004(t2,C_getpwnam(t1));}

/* file-open in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3941(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3941r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3941r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3941r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3945,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_3945(t7,C_u_i_car(t6));}
else{
t6=t5;
f_3945(t6,((C_word*)t0)[2]);}}

/* k3944 in file-open in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3945(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3945,NULL,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[2],lf[162]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[162]);
t4=C_i_check_exact_2(t1,lf[162]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3954,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3965,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:610: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t6,((C_word*)t0)[2]);}

/* mode in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_2879(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2879,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2886,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[40]);
if(C_truep(t8)){
t9=t2;
if(C_truep(t9)){
/* posix-common.scm:255: ##sys#error */
t10=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t5,lf[42],t7);}
else{
/* posix-common.scm:251: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t1,lf[43],t4);}}
else{
/* posix-common.scm:256: ##sys#error */
t9=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,lf[44],t7);}}
else{
if(C_truep(t2)){
/* posix-common.scm:251: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t1,lf[45],t4);}
else{
/* posix-common.scm:251: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t1,lf[46],t4);}}}

/* k2873 in directory? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[25],t1));}

/* k6083 in loop in poke in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
/* posixunix.scm:1437: poke */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6030(t3,((C_word*)t0)[5],t1,t2);}

/* k2885 in mode in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:251: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_6133 in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6133(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6133,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_block_size(t2);
/* posixunix.scm:1443: poke */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6030(t4,t1,t2,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3391,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3484,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:413: pathname-file */
t3=*((C_word*)lf[88]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:422: pproc */
t3=((C_word*)t0)[9];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}}

/* get-host-name in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7047,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1750: getit */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7046 in get-host-name in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7049,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
/* posixunix.scm:1752: posix-error */
t3=lf[1];
f_2620(5,t3,t2,lf[410],lf[414],lf[415]);}}

/* k7048 in k7046 in get-host-name in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* for-each-loop780 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4287(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4287,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4296,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posixunix.scm:685: g781 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_6126 in k6091 in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6126,2,t0,t1);}
/* posixunix.scm:1471: store */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* k7031 in k7012 in terminal-size in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1739: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[412]+1)))(6,*((C_word*)lf[412]+1),t2,((C_word*)t0)[5],C_fix(0),C_SCHEME_FALSE,lf[413]);}

/* k7034 in k7031 in k7012 in terminal-size in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1737: ttysize */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* f_7037 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7037,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1804(t2);
/* posixunix.scm:1746: ##sys#peek-c-string */
t4=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,C_fix(0));}

/* f_4275 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4275(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4275,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[174]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_i_fixnum_max(((C_word*)((C_word*)t0)[2])[1],t2));
/* posixunix.scm:689: fd_set */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,C_fix(1),t2);}

/* k5559 in file-link in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:1284: posix-error */
t2=lf[1];
f_2620(7,t2,((C_word*)t0)[2],lf[8],lf[327],lf[328],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##sys#custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_5562r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5562r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5562r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word *a=C_alloc(9);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?*((C_word*)lf[330]+1):C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=C_i_nullp(t17);
t19=(C_truep(t18)?C_SCHEME_FALSE:C_i_car(t17));
t20=C_i_nullp(t17);
t21=(C_truep(t20)?C_SCHEME_END_OF_LIST:C_i_cdr(t17));
t22=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5582,a[2]=t11,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t19,a[7]=t1,a[8]=t15,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t7)){
/* posixunix.scm:1289: ##sys#file-nonblocking! */
t23=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t23+1)))(3,t23,t22,t4);}
else{
t23=t22;
f_5582(2,t23,C_SCHEME_UNDEFINED);}}

/* loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3374(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3374,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3391,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:412: directory? */
t7=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}}

/* k7027 in k7012 in terminal-size in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
/* posixunix.scm:1740: values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[3]))),C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))));}
else{
/* posixunix.scm:1741: posix-error */
t3=lf[1];
f_2620(6,t3,((C_word*)t0)[2],lf[410],lf[409],lf[411],((C_word*)t0)[5]);}}

/* k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3372,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3374,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li39),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_3374(t5,((C_word*)t0)[7],t1,((C_word*)t0)[8]);}

/* f_6146 in k6144 in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6146(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6146,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_fixnum_difference(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t4=C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6161,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word)li172),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6161(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:1460: poke */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6030(t3,t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}}

/* k6144 in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6145,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[2];
f_6093(t4,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6146,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li173),tmp=(C_word)a,a+=7,tmp));}

/* k7012 in terminal-size in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7013,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7028,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_C_fileno(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7032,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1738: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[412]+1)))(6,*((C_word*)lf[412]+1),t6,t2,C_fix(0),C_SCHEME_FALSE,lf[413]);}

/* regular-file? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2813,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:218: file-type */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2828 in symbolic-link? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[24],t1));}

/* terminal-size in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7009(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7009,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7013,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1733: ##sys#terminal-check */
f_6958(t3,lf[409],t2);}

/* k2819 in regular-file? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[23],t1));}

/* symbolic-link? in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2822,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2829,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:221: file-type */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* f_7116 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7116(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7116,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7124,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t7=C_i_foreign_string_argumentp(t3);
/* posixunix.scm:1774: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t6,t7);}
else{
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub1849(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,t7));}}

/* f_7114 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7114,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1844(C_SCHEME_UNDEFINED));}

/* k7102 */
static void C_ccall f_7104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1837(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* f_5520 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5520,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5525,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t5=C_i_foreign_string_argumentp(t2);
/* posixunix.scm:1279: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t4,t5);}
else{
t5=t4;
f_5525(2,t5,C_SCHEME_FALSE);}}

/* k5527 in k5523 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1313(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1));}

/* k5523 */
static void C_ccall f_5525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5525,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5529,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=C_i_foreign_string_argumentp(t2);
/* posixunix.scm:1279: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t3,t4);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1313(C_SCHEME_UNDEFINED,t1,C_SCHEME_FALSE));}}

/* k5210 in set-groups! in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5211,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5216,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li134),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5216(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop1182 in k5210 in set-groups! in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_5216(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5216,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_set_groups(t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5231,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1132: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_i_check_exact_2(t4,lf[265]);
t6=C_set_gid(t3,t4);
t7=C_slot(t2,C_fix(1));
t8=C_fixnum_plus(t3,C_fix(1));
t12=t1;
t13=t7;
t14=t8;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* k5511 in read-symbolic-link in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1268: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[322]);}

/* k6091 in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6093(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6093,NULL,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6097,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6101,a[2]=((C_word*)t0)[2],a[3]=((C_word)li168),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6106,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word)li169),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6126,a[2]=((C_word*)t0)[2],a[3]=((C_word)li170),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1462: make-output-port */
t9=*((C_word*)lf[350]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t5,t6,t7,t8);}

/* f_6401 in k6396 in file-test-lock in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6401(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6401,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5201 in get-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1114: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[261],lf[264]);}

/* set-groups! in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5207(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5207,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5211,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_length(t2);
t5=C_i_foreign_fixnum_argumentp(t4);
if(C_truep(stub1166(C_SCHEME_UNDEFINED,t5))){
t6=t3;
f_5211(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:1127: ##sys#error */
t6=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[265],lf[267]);}}

/* k4295 in for-each-loop780 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4287(t3,((C_word*)t0)[4],t2);}

/* set-signal-handler! in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3765,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[114]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_vector_set(*((C_word*)lf[115]+1),t2,t3));}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_set(*((C_word*)lf[115]+1),t2,t3));}}

/* file-link in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5542,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[326]);
t5=C_i_check_string_2(t3,lf[326]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5560,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1283: link */
t7=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* f_4219 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4219(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4219,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4225,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:704: fd_test */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(0),t2);}

/* f_3319 in k3314 in loop in k3297 in k3291 */
static void C_ccall f_3319(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3319,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3325,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3334,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:386: irregex-match-substring */
t5=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3314 in loop in k3297 in k3291 */
static void C_ccall f_3315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3315,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:378: g355 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* posix-common.scm:388: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3300(t4,((C_word*)t0)[5],t3);}}

/* k6095 in k6091 in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6097,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6099,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1472: set-port-name! */
t4=*((C_word*)lf[340]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[4]);}

/* k5176 in loop in k5157 in k5155 in k5153 in get-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5177,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6098 in k6095 in k6091 in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k4199 in for-each-loop832 in k4160 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4191(t3,((C_word*)t0)[4],t2);}

/* k3327 in k3324 */
static void C_ccall f_3328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3328,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3324 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3328,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* posix-common.scm:387: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3300(t4,t2,t3);}

/* loop in k5157 in k5155 in k5153 in get-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_5163(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5163,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_get_gid(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5177,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm:1123: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k3741 in k3723 */
static void C_ccall f_3742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:492: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),((C_word*)t0)[2],t1,C_fix(0),t3);}
else{
/* posix-common.scm:493: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],lf[113],((C_word*)t0)[3]);}}

/* k3739 in k3723 */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:488: strftime */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6053 in loop in poke in k6027 in custom-output-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1431: poke */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6030(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* loop in k3297 in k3291 */
static void C_fcall f_3300(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3300,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* posix-common.scm:382: conc-loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3270(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3315,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* posix-common.scm:383: irregex-match */
t5=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[6],t4);}}

/* k5184 in k5155 in k5153 in get-groups in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1119: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[261],lf[262]);}

/* change-file-mode in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5335,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[309]);
t5=C_i_check_exact_2(t3,lf[309]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5354,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5357,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1197: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t7,t2);}

/* f_6743 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6743(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6743,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=stub1675(t3,t2);
/* posixunix.scm:1641: ##sys#peek-c-string */
t5=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,C_fix(0));}

/* f_6749 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6749,4,t0,t1,t2,t3);}
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=stub1681(t4,t2,t3);
/* posixunix.scm:1642: ##sys#peek-c-string */
t6=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* k5501 in k5496 in k5482 in read-symbolic-link in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1275: read-symbolic-link */
t2=*((C_word*)lf[322]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[324]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* file-lock in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6361(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6361r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6361r(t0,t1,t2,t3);}}

static void C_ccall f_6361r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6365,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1509: setup */
f_6288(t4,t2,t3,lf[356]);}

/* k6364 in file-lock in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_flock_lock(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1511: err */
f_6346(((C_word*)t0)[4],lf[357],t1,lf[356]);}
else{
t3=t1;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3351 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:380: ##sys#glob->regexp */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t1);}

/* k3998 in k3996 in k3994 in file-read in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3999,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k4244 in for-each-loop811 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4236(t3,((C_word*)t0)[4],t2);}

/* k3996 in k3994 in file-read in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3997,2,t0,t1);}
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3999,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:630: posix-error */
t5=lf[1];
f_2620(7,t5,t3,lf[8],lf[166],lf[167],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list2(&a,2,((C_word*)t0)[3],t2));}}

/* memory-mapped-file? in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6737(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6737,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[381]));}

/* k3994 in file-read in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3997,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_byteblockp(t1))){
t3=t2;
f_3997(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:627: ##sys#signal-hook */
t3=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[13],lf[166],lf[168],t1);}}
else{
/* posixunix.scm:627: ##sys#signal-hook */
t3=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[13],lf[166],lf[168],t1);}}

/* k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3366(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3366,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3502,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[8])){
/* posix-common.scm:406: make-pathname */
t4=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[9],lf[89]);}
else{
/* posix-common.scm:406: make-pathname */
t4=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[9],lf[90]);}}

/* k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3364(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3364,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_i_stringp(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3510,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3510(2,t5,t3);}
else{
/* posix-common.scm:402: irregex? */
t5=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}}

/* file-lock/blocking in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6377(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6377r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6377r(t0,t1,t2,t3);}}

static void C_ccall f_6377r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6381,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1515: setup */
f_6288(t4,t2,t3,lf[358]);}

/* k5353 in change-file-mode in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_chmod(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1198: posix-error */
t3=lf[1];
f_2620(7,t3,((C_word*)t0)[3],lf[8],lf[309],lf[310],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* current-process-id in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3781,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fudge(C_fix(33)));}

/* k4232 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_4234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
f_4161(2,t3,t2);}

/* k6761 in time->string in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6762,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[111]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6769,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6778,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1648: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,((C_word*)t0)[2],lf[111]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6780,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1650: asctime */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}

/* for-each-loop811 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4236(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4236,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4245,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posixunix.scm:703: g812 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6768 in k6761 in time->string in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posixunix.scm:1649: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],lf[390],((C_word*)t0)[3]);}}

/* change-file-owner in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5359,5,t0,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,lf[311]);
t6=C_i_check_exact_2(t3,lf[311]);
t7=C_i_check_exact_2(t4,lf[311]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5380,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5383,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1205: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t9,t2);}

/* k5356 in change-file-mode in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1197: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[309]);}

/* k3333 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:386: make-pathname */
t2=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* process-wait in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3787(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_3787r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3787r(t0,t1,t2);}}

static void C_ccall f_3787r(C_word t0,C_word t1,C_word t2){
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
t12=C_i_check_exact_2(t11,lf[118]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3807,a[2]=t11,a[3]=t8,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3812,a[2]=t11,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:520: ##sys#call-with-values */
C_call_with_values(4,0,t1,t13,t14);}

/* k6380 in file-lock/blocking in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_flock_lockw(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1517: err */
f_6346(((C_word*)t0)[4],lf[359],t1,lf[358]);}
else{
t3=t1;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* file-close in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3971,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[164]);
t4=C_close(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* posixunix.scm:619: posix-error */
t5=lf[1];
f_2620(6,t5,t1,lf[8],lf[164],lf[165],t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k5003 in user-information in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_5004(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5004,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[256]+1):*((C_word*)lf[257]+1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5015,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_user->pw_name),C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* time->string in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6755(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_6755r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6755r(t0,t1,t2,t3);}}

static void C_ccall f_6755r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6762,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1644: check-time-vector */
f_3586(t6,lf[111],t2);}

/* k4223 */
static void C_ccall f_4225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4225,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* file-test-lock in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6393(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6393r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6393r(t0,t1,t2,t3);}}

static void C_ccall f_6393r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6397,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1521: setup */
f_6288(t4,t2,t3,lf[360]);}

/* k6396 in file-test-lock in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6397,2,t0,t1);}
t2=C_flock_test(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6401,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1520: g1562 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[3],t2);}
else{
/* posixunix.scm:1523: err */
f_6346(((C_word*)t0)[3],lf[361],t1,lf[360]);}}

/* file-read in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3987r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3987r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3987r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(5);
t5=C_i_check_exact_2(t2,lf[166]);
t6=C_i_check_exact_2(t3,lf[166]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3995,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t4;
t9=t7;
f_3995(2,t9,C_u_i_car(t8));}
else{
t8=t3;
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(4,*((C_word*)lf[66]+1),t7,t8,C_make_character(32));}}

/* k6703 in unmap-file-from-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6704(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6704,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm:1628: munmap */
t4=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* doloop1880 in k7168 in doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_fcall f_7198(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7198,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixunix.scm:1790: setenv */
t4=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,lf[419]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7215,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_block_size(t4);
/* posixunix.scm:1793: setenv */
t8=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,t3,t4,t7);}}

/* k7190 in k7170 in k7168 in doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_7191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1794: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[419]);}

/* k2598 */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k7184 in k7182 in k7172 in k7170 in k7168 in doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in ... */
static void C_ccall f_7185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1801: posix-error */
t2=lf[1];
f_2620(6,t2,((C_word*)t0)[2],lf[120],lf[419],lf[420],((C_word*)t0)[3]);}

/* k7182 in k7172 in k7170 in k7168 in doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in ... */
static void C_ccall f_7183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1800: freeenv */
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* memory-mapped-file-pointer in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6728(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6728,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[381],lf[388]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* k3508 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3510,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:403: irregex */
t3=*((C_word*)lf[91]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_3366(t2,((C_word*)t0)[3]);}}

/* k3511 in k3508 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3512,2,t0,t1);}
t2=((C_word*)t0)[2];
f_3366(t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3513,a[2]=t1,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp));}

/* f_3513 in k3511 in k3508 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3513,3,t0,t1,t2);}
/* posix-common.scm:404: irregex-match */
t3=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k7172 in k7170 in k7168 in doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_7173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7173,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_execve(t1):C_execvp(t1));
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7183,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1799: freeargs */
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* ##sys#shell-command-arguments in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7352(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7352,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list2(&a,2,lf[430],t2));}

/* process-run in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7358(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7358r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7358r(t0,t1,t2,t3);}}

static void C_ccall f_7358r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7362,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_7362(t6,C_u_i_car(t5));}
else{
t5=t4;
f_7362(t5,C_SCHEME_FALSE);}}

/* k7170 in k7168 in doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_7171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7191,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1794: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t3,((C_word*)t0)[4]);}

/* k6715 in k6703 in unmap-file-from-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posixunix.scm:1629: posix-error */
t3=lf[1];
f_2620(7,t3,((C_word*)t0)[2],lf[8],lf[386],lf[387],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* ##sys#shell-command in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7347,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1836: get-environment-variable */
t3=*((C_word*)lf[427]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[428]);}

/* k7168 in doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_check_list_2(((C_word*)t0)[2],lf[419]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7198,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word)li223),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7198(t7,t2,((C_word*)t0)[2],C_fix(0));}
else{
t3=t2;
f_7171(2,t3,C_SCHEME_UNDEFINED);}}

/* k7346 in shell-command in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[426]);}}

/* doloop1876 in k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_7160(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7160,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7169,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1785: setarg */
t5=((C_word*)t0)[7];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,lf[419]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7233,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_block_size(t4);
/* posixunix.scm:1804: setarg */
t8=((C_word*)t0)[7];
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,t3,t4,t7);}}

/* file-control in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3911r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3911r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3911r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(5);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_check_exact_2(t2,lf[160]);
t8=C_i_check_exact_2(t3,lf[160]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3922,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:598: fcntl */
t10=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,t2,t3,t6);}

/* k7323 in process-signal in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_7324(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[423]);
t3=C_i_check_exact_2(t1,lf[423]);
t4=C_kill(((C_word*)t0)[2],t1);
t5=C_eqp(t4,C_fix(-1));
if(C_truep(t5)){
/* posixunix.scm:1833: posix-error */
t6=lf[1];
f_2620(7,t6,((C_word*)t0)[3],lf[120],lf[423],lf[424],((C_word*)t0)[2],t1);}
else{
t6=C_SCHEME_UNDEFINED;
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3921 in file-control in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,C_fix(-1));
if(C_truep(t2)){
/* posixunix.scm:600: posix-error */
t3=lf[1];
f_2620(7,t3,((C_word*)t0)[2],lf[8],lf[160],lf[161],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* process-signal in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7320(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7320r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7320r(t0,t1,t2,t3);}}

static void C_ccall f_7320r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7324,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_7324(t6,C_u_i_car(t5));}
else{
t5=t4;
f_7324(t5,C_fix((C_word)SIGTERM));}}

/* k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3553(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3553,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
t8=((C_word*)t0)[8];
t9=C_i_check_string_2(t3,lf[71]);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3364,a[2]=t1,a[3]=t5,a[4]=t11,a[5]=t2,a[6]=t6,a[7]=t8,a[8]=t3,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t7)){
if(C_truep(C_fixnump(t7))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3533,a[2]=t11,a[3]=t7,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
t14=t12;
f_3364(t14,t13);}
else{
t13=t12;
f_3364(t13,t7);}}
else{
t13=t12;
f_3364(t13,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));}}

/* k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3558,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(5,*((C_word*)lf[93]+1),t2,lf[73],((C_word*)t0)[8],t3);}

/* f_3558 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3558,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_3524 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3524,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k5459 in create-symbolic-link in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5463,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5466,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1256: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t3,((C_word*)t0)[4]);}

/* f_3900 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3900,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=C_i_foreign_integer_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub654(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* f_3533 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3533(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3533,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]));}

/* k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5472(C_word c,C_word t0,C_word t1){
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
C_word ab[257],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5472,2,t0,t1);}
t2=C_mutate((C_word*)lf[322]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5473,a[2]=t1,a[3]=((C_word)li146),tmp=(C_word)a,a+=4,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5520,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp);
t4=C_mutate((C_word*)lf[326]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5542,a[2]=t3,a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[329]+1 /* (set! ##sys#custom-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5562,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[347]+1 /* (set! ##sys#custom-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6012,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[351]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6252,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6288,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6346,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[356]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6361,a[2]=t11,a[3]=t9,a[4]=((C_word)li178),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate((C_word*)lf[358]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6377,a[2]=t11,a[3]=t9,a[4]=((C_word)li179),tmp=(C_word)a,a+=5,tmp));
t16=C_mutate((C_word*)lf[360]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6393,a[2]=t11,a[3]=t9,a[4]=((C_word)li181),tmp=(C_word)a,a+=5,tmp));
t17=C_mutate((C_word*)lf[362]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6418,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[364]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6443,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[34]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6479,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[368]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6521,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[369]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6535,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6544,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp);
t23=C_mutate((C_word*)lf[370]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6553,a[2]=t22,a[3]=((C_word)li190),tmp=(C_word)a,a+=4,tmp));
t24=C_mutate((C_word*)lf[371]+1 /* (set! prot/read ...) */,C_fix((C_word)PROT_READ));
t25=C_mutate((C_word*)lf[372]+1 /* (set! prot/write ...) */,C_fix((C_word)PROT_WRITE));
t26=C_mutate((C_word*)lf[373]+1 /* (set! prot/exec ...) */,C_fix((C_word)PROT_EXEC));
t27=C_mutate((C_word*)lf[374]+1 /* (set! prot/none ...) */,C_fix((C_word)PROT_NONE));
t28=C_mutate((C_word*)lf[375]+1 /* (set! map/fixed ...) */,C_fix((C_word)MAP_FIXED));
t29=C_mutate((C_word*)lf[376]+1 /* (set! map/shared ...) */,C_fix((C_word)MAP_SHARED));
t30=C_mutate((C_word*)lf[377]+1 /* (set! map/private ...) */,C_fix((C_word)MAP_PRIVATE));
t31=C_mutate((C_word*)lf[378]+1 /* (set! map/anonymous ...) */,C_fix((C_word)MAP_ANON));
t32=C_mutate((C_word*)lf[379]+1 /* (set! map/file ...) */,C_fix((C_word)MAP_FILE));
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6620,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp);
t34=C_mutate((C_word*)lf[380]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6644,a[2]=t33,a[3]=((C_word)li192),tmp=(C_word)a,a+=4,tmp));
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6686,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp);
t36=C_mutate((C_word*)lf[386]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6698,a[2]=t35,a[3]=((C_word)li194),tmp=(C_word)a,a+=4,tmp));
t37=C_mutate((C_word*)lf[388]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6728,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[389]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6737,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6743,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp);
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6749,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp);
t41=C_mutate((C_word*)lf[111]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6755,a[2]=t40,a[3]=t39,a[4]=((C_word)li199),tmp=(C_word)a,a+=5,tmp));
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6803,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp);
t43=C_mutate((C_word*)lf[392]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6805,a[2]=t42,a[3]=((C_word)li201),tmp=(C_word)a,a+=4,tmp));
t44=C_mutate((C_word*)lf[394]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6834,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[396]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6849,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp));
t46=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6857,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp);
t47=C_mutate((C_word*)lf[397]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6862,a[2]=t46,a[3]=((C_word)li205),tmp=(C_word)a,a+=4,tmp));
t48=C_mutate((C_word*)lf[398]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6875,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[399]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6882,a[2]=((C_word)li207),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[405]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6941,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate(&lf[406] /* (set! ##sys#terminal-check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6958,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp));
t52=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6979,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp);
t53=C_mutate((C_word*)lf[408]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6988,a[2]=t52,a[3]=((C_word)li211),tmp=(C_word)a,a+=4,tmp));
t54=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6998,a[2]=((C_word)li212),tmp=(C_word)a,a+=3,tmp);
t55=C_mutate((C_word*)lf[409]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7009,a[2]=t54,a[3]=((C_word)li213),tmp=(C_word)a,a+=4,tmp));
t56=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7037,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp);
t57=C_mutate((C_word*)lf[414]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7043,a[2]=t56,a[3]=((C_word)li215),tmp=(C_word)a,a+=4,tmp));
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7054,a[2]=((C_word)li216),tmp=(C_word)a,a+=3,tmp);
t59=C_mutate((C_word*)lf[416]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7056,a[2]=t58,a[3]=((C_word)li218),tmp=(C_word)a,a+=4,tmp));
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7096,a[2]=((C_word)li219),tmp=(C_word)a,a+=3,tmp);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7114,a[2]=((C_word)li220),tmp=(C_word)a,a+=3,tmp);
t62=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7116,a[2]=((C_word)li221),tmp=(C_word)a,a+=3,tmp);
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7134,a[2]=((C_word)li222),tmp=(C_word)a,a+=3,tmp);
t64=*((C_word*)lf[418]+1);
t65=C_mutate((C_word*)lf[419]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7136,a[2]=t63,a[3]=t61,a[4]=t62,a[5]=t60,a[6]=t64,a[7]=((C_word)li225),tmp=(C_word)a,a+=8,tmp));
t66=C_mutate((C_word*)lf[119]+1 /* (set! ##sys#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7273,a[2]=((C_word)li227),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[421]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7309,a[2]=((C_word)li228),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[422]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7313,a[2]=((C_word)li229),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[423]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7320,a[2]=((C_word)li230),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[425]+1 /* (set! ##sys#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7343,a[2]=((C_word)li231),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[429]+1 /* (set! ##sys#shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7352,a[2]=((C_word)li232),tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[431]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7358,a[2]=((C_word)li233),tmp=(C_word)a,a+=3,tmp));
t73=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7394,a[2]=((C_word)li234),tmp=(C_word)a,a+=3,tmp);
t74=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7406,a[2]=((C_word)li238),tmp=(C_word)a,a+=3,tmp);
t75=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7440,a[2]=((C_word)li241),tmp=(C_word)a,a+=3,tmp);
t76=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7457,a[2]=((C_word)li242),tmp=(C_word)a,a+=3,tmp);
t77=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7466,a[2]=t73,a[3]=((C_word)li243),tmp=(C_word)a,a+=4,tmp);
t78=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7478,a[2]=((C_word)li244),tmp=(C_word)a,a+=3,tmp);
t79=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7490,a[2]=t77,a[3]=t78,a[4]=t75,a[5]=((C_word)li246),tmp=(C_word)a,a+=6,tmp);
t80=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7526,a[2]=t76,a[3]=((C_word)li247),tmp=(C_word)a,a+=4,tmp);
t81=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7536,a[2]=t76,a[3]=((C_word)li248),tmp=(C_word)a,a+=4,tmp);
t82=C_mutate((C_word*)lf[433]+1 /* (set! ##sys#process ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7546,a[2]=t79,a[3]=t80,a[4]=t74,a[5]=t81,a[6]=((C_word)li251),tmp=(C_word)a,a+=7,tmp));
t83=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7591,a[2]=((C_word)li256),tmp=(C_word)a,a+=3,tmp);
t84=C_mutate((C_word*)lf[434]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7654,a[2]=t83,a[3]=((C_word)li258),tmp=(C_word)a,a+=4,tmp));
t85=C_mutate((C_word*)lf[435]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7698,a[2]=t83,a[3]=((C_word)li259),tmp=(C_word)a,a+=4,tmp));
t86=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7737,a[2]=((C_word)li260),tmp=(C_word)a,a+=3,tmp);
t87=C_mutate((C_word*)lf[437]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7749,a[2]=t86,a[3]=((C_word)li261),tmp=(C_word)a,a+=4,tmp));
t88=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t88+1)))(2,t88,C_SCHEME_UNDEFINED);}

/* read-symbolic-link in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5473(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_5473r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5473r(t0,t1,t2,t3);}}

static void C_ccall f_5473r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(9);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[322]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5483,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5512,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1268: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t8,t2);}

/* find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3539(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3539r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3539r(t0,t1,t2,t3);}}

static void C_ccall f_3539r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3543,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3577,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(5,*((C_word*)lf[93]+1),t4,lf[97],t3,t5);}

/* k3501 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:406: glob */
t2=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5462 in k5459 in create-symbolic-link in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_symlink(((C_word*)t0)[2],t1);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1258: posix-error */
t3=lf[1];
f_2620(7,t3,((C_word*)t0)[3],lf[8],lf[320],lf[321],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5465 in k5459 in create-symbolic-link in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1256: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[319]);}

/* k5468 in create-symbolic-link in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1255: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[319]);}

/* k5496 in k5482 in read-symbolic-link in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5503,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixunix.scm:1274: symbolic-link? */
t3=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5482 in read-symbolic-link in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5483,2,t0,t1);}
t2=C_do_readlink(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
/* posixunix.scm:1272: posix-error */
t3=lf[1];
f_2620(6,t3,((C_word*)t0)[4],lf[8],lf[322],lf[323],((C_word*)t0)[5]);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5497,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1273: substring */
t4=*((C_word*)lf[325]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],C_fix(0),t2);}}

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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3374)){
C_save(t1);
C_rereclaim2(3374*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,462);
lf[0]=C_h_intern(&lf[0],17,"\003syspeek-c-string");
lf[2]=C_h_intern(&lf[2],15,"\003syssignal-hook");
lf[3]=C_h_intern(&lf[3],13,"string-append");
lf[4]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[5]=C_h_intern(&lf[5],16,"\003sysupdate-errno");
lf[6]=C_h_intern(&lf[6],15,"\003sysposix-error");
lf[8]=C_h_intern(&lf[8],11,"\000file-error");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[10]=C_h_intern(&lf[10],17,"\003sysmake-c-string");
lf[11]=C_h_intern(&lf[11],27,"\003sysplatform-fixup-pathname");
lf[12]=C_h_intern(&lf[12],20,"\003sysexpand-home-path");
lf[13]=C_h_intern(&lf[13],11,"\000type-error");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\052bad argument type - not a fixnum or string");
lf[15]=C_h_intern(&lf[15],9,"file-stat");
lf[16]=C_h_intern(&lf[16],22,"file-modification-time");
lf[17]=C_h_intern(&lf[17],16,"file-access-time");
lf[18]=C_h_intern(&lf[18],16,"file-change-time");
lf[19]=C_h_intern(&lf[19],10,"file-owner");
lf[20]=C_h_intern(&lf[20],16,"file-permissions");
lf[21]=C_h_intern(&lf[21],9,"file-size");
lf[22]=C_h_intern(&lf[22],9,"file-type");
lf[23]=C_h_intern(&lf[23],12,"regular-file");
lf[24]=C_h_intern(&lf[24],13,"symbolic-link");
lf[25]=C_h_intern(&lf[25],9,"directory");
lf[26]=C_h_intern(&lf[26],16,"character-device");
lf[27]=C_h_intern(&lf[27],12,"block-device");
lf[28]=C_h_intern(&lf[28],4,"fifo");
lf[29]=C_h_intern(&lf[29],6,"socket");
lf[30]=C_h_intern(&lf[30],13,"regular-file\077");
lf[31]=C_h_intern(&lf[31],14,"symbolic-link\077");
lf[32]=C_h_intern(&lf[32],13,"block-device\077");
lf[33]=C_h_intern(&lf[33],17,"character-device\077");
lf[34]=C_h_intern(&lf[34],5,"fifo\077");
lf[35]=C_h_intern(&lf[35],7,"socket\077");
lf[36]=C_h_intern(&lf[36],10,"directory\077");
lf[37]=C_h_intern(&lf[37],12,"fileno/stdin");
lf[38]=C_h_intern(&lf[38],13,"fileno/stdout");
lf[39]=C_h_intern(&lf[39],13,"fileno/stderr");
lf[40]=C_h_intern(&lf[40],7,"\000append");
lf[41]=C_h_intern(&lf[41],9,"\003syserror");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[48]=C_h_intern(&lf[48],13,"\003sysmake-port");
lf[49]=C_h_intern(&lf[49],21,"\003sysstream-port-class");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[51]=C_h_intern(&lf[51],6,"stream");
lf[52]=C_h_intern(&lf[52],16,"open-input-file\052");
lf[53]=C_h_intern(&lf[53],17,"open-output-file\052");
lf[54]=C_h_intern(&lf[54],12,"port->fileno");
lf[55]=C_h_intern(&lf[55],13,"\003sysport-data");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[58]=C_h_intern(&lf[58],25,"\003syspeek-unsigned-integer");
lf[59]=C_h_intern(&lf[59],19,"\003syscheck-open-port");
lf[60]=C_h_intern(&lf[60],16,"duplicate-fileno");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file-descriptor");
lf[62]=C_h_intern(&lf[62],17,"current-directory");
lf[63]=C_h_intern(&lf[63],16,"change-directory");
lf[64]=C_h_intern(&lf[64],13,"\003syssubstring");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[66]=C_h_intern(&lf[66],15,"\003sysmake-string");
lf[67]=C_h_intern(&lf[67],16,"delete-directory");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[69]=C_h_intern(&lf[69],11,"delete-file");
lf[70]=C_h_intern(&lf[70],8,"for-each");
lf[71]=C_h_intern(&lf[71],10,"find-files");
lf[72]=C_h_intern(&lf[72],9,"\000dotfiles");
lf[73]=C_h_intern(&lf[73],16,"\000follow-symlinks");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[75]=C_h_intern(&lf[75],16,"\003sysmake-pointer");
lf[76]=C_h_intern(&lf[76],4,"glob");
lf[77]=C_h_intern(&lf[77],18,"decompose-pathname");
lf[78]=C_h_intern(&lf[78],13,"make-pathname");
lf[79]=C_h_intern(&lf[79],23,"irregex-match-substring");
lf[80]=C_h_intern(&lf[80],13,"irregex-match");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[82]=C_h_intern(&lf[82],16,"\003sysglob->regexp");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[87]=C_h_intern(&lf[87],16,"\003sysdynamic-wind");
lf[88]=C_h_intern(&lf[88],13,"pathname-file");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\002\077\052");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[91]=C_h_intern(&lf[91],7,"irregex");
lf[92]=C_h_intern(&lf[92],8,"irregex\077");
lf[93]=C_h_intern(&lf[93],15,"\003sysget-keyword");
lf[94]=C_h_intern(&lf[94],6,"\000limit");
lf[95]=C_h_intern(&lf[95],5,"\000seed");
lf[96]=C_h_intern(&lf[96],7,"\000action");
lf[97]=C_h_intern(&lf[97],5,"\000test");
lf[98]=C_h_intern(&lf[98],18,"file-creation-mode");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[101]=C_h_intern(&lf[101],19,"seconds->local-time");
lf[102]=C_h_intern(&lf[102],18,"\003sysdecode-seconds");
lf[103]=C_h_intern(&lf[103],15,"current-seconds");
lf[104]=C_h_intern(&lf[104],17,"seconds->utc-time");
lf[105]=C_h_intern(&lf[105],15,"seconds->string");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[107]=C_h_intern(&lf[107],19,"local-time->seconds");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[109]=C_h_intern(&lf[109],3,"fp=");
lf[110]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[111]=C_h_intern(&lf[111],12,"time->string");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[114]=C_h_intern(&lf[114],19,"set-signal-handler!");
lf[115]=C_h_intern(&lf[115],17,"\003syssignal-vector");
lf[116]=C_h_intern(&lf[116],14,"signal-handler");
lf[117]=C_h_intern(&lf[117],18,"current-process-id");
lf[118]=C_h_intern(&lf[118],12,"process-wait");
lf[119]=C_h_intern(&lf[119],16,"\003sysprocess-wait");
lf[120]=C_h_intern(&lf[120],14,"\000process-error");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[122]=C_h_intern(&lf[122],21,"\003sysfile-nonblocking!");
lf[123]=C_h_intern(&lf[123],19,"\003sysfile-select-one");
lf[124]=C_h_intern(&lf[124],8,"pipe/buf");
lf[125]=C_h_intern(&lf[125],11,"fcntl/dupfd");
lf[126]=C_h_intern(&lf[126],11,"fcntl/getfd");
lf[127]=C_h_intern(&lf[127],11,"fcntl/setfd");
lf[128]=C_h_intern(&lf[128],11,"fcntl/getfl");
lf[129]=C_h_intern(&lf[129],11,"fcntl/setfl");
lf[130]=C_h_intern(&lf[130],11,"open/rdonly");
lf[131]=C_h_intern(&lf[131],11,"open/wronly");
lf[132]=C_h_intern(&lf[132],9,"open/rdwr");
lf[133]=C_h_intern(&lf[133],9,"open/read");
lf[134]=C_h_intern(&lf[134],10,"open/write");
lf[135]=C_h_intern(&lf[135],10,"open/creat");
lf[136]=C_h_intern(&lf[136],11,"open/append");
lf[137]=C_h_intern(&lf[137],9,"open/excl");
lf[138]=C_h_intern(&lf[138],11,"open/noctty");
lf[139]=C_h_intern(&lf[139],13,"open/nonblock");
lf[140]=C_h_intern(&lf[140],10,"open/trunc");
lf[141]=C_h_intern(&lf[141],9,"open/sync");
lf[142]=C_h_intern(&lf[142],10,"open/fsync");
lf[143]=C_h_intern(&lf[143],11,"open/binary");
lf[144]=C_h_intern(&lf[144],9,"open/text");
lf[145]=C_h_intern(&lf[145],10,"perm/irusr");
lf[146]=C_h_intern(&lf[146],10,"perm/iwusr");
lf[147]=C_h_intern(&lf[147],10,"perm/ixusr");
lf[148]=C_h_intern(&lf[148],10,"perm/irgrp");
lf[149]=C_h_intern(&lf[149],10,"perm/iwgrp");
lf[150]=C_h_intern(&lf[150],10,"perm/ixgrp");
lf[151]=C_h_intern(&lf[151],10,"perm/iroth");
lf[152]=C_h_intern(&lf[152],10,"perm/iwoth");
lf[153]=C_h_intern(&lf[153],10,"perm/ixoth");
lf[154]=C_h_intern(&lf[154],10,"perm/irwxu");
lf[155]=C_h_intern(&lf[155],10,"perm/irwxg");
lf[156]=C_h_intern(&lf[156],10,"perm/irwxo");
lf[157]=C_h_intern(&lf[157],10,"perm/isvtx");
lf[158]=C_h_intern(&lf[158],10,"perm/isuid");
lf[159]=C_h_intern(&lf[159],10,"perm/isgid");
lf[160]=C_h_intern(&lf[160],12,"file-control");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot control file");
lf[162]=C_h_intern(&lf[162],9,"file-open");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[164]=C_h_intern(&lf[164],10,"file-close");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[166]=C_h_intern(&lf[166],9,"file-read");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[169]=C_h_intern(&lf[169],10,"file-write");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[172]=C_h_intern(&lf[172],12,"file-mkstemp");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[174]=C_h_intern(&lf[174],11,"file-select");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\006failed");
lf[176]=C_h_intern(&lf[176],8,"seek/set");
lf[177]=C_h_intern(&lf[177],8,"seek/end");
lf[178]=C_h_intern(&lf[178],8,"seek/cur");
lf[179]=C_h_intern(&lf[179],18,"set-file-position!");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[182]=C_h_intern(&lf[182],5,"port\077");
lf[183]=C_h_intern(&lf[183],13,"\000bounds-error");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid negative port position");
lf[185]=C_h_intern(&lf[185],13,"file-position");
lf[186]=C_h_intern(&lf[186],16,"create-directory");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[188]=C_h_intern(&lf[188],18,"pathname-directory");
lf[189]=C_h_intern(&lf[189],12,"file-exists\077");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[191]=C_h_intern(&lf[191],17,"change-directory\052");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[195]=C_h_intern(&lf[195],15,"open-input-pipe");
lf[196]=C_h_intern(&lf[196],5,"\000text");
lf[197]=C_h_intern(&lf[197],7,"\000binary");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[199]=C_h_intern(&lf[199],16,"open-output-pipe");
lf[200]=C_h_intern(&lf[200],16,"close-input-pipe");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[202]=C_h_intern(&lf[202],20,"\003syscheck-input-port");
lf[203]=C_h_intern(&lf[203],17,"close-output-pipe");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[205]=C_h_intern(&lf[205],21,"\003syscheck-output-port");
lf[206]=C_h_intern(&lf[206],20,"call-with-input-pipe");
lf[207]=C_h_intern(&lf[207],21,"call-with-output-pipe");
lf[208]=C_h_intern(&lf[208],20,"with-input-from-pipe");
lf[209]=C_h_intern(&lf[209],18,"\003sysstandard-input");
lf[210]=C_h_intern(&lf[210],19,"with-output-to-pipe");
lf[211]=C_h_intern(&lf[211],19,"\003sysstandard-output");
lf[212]=C_h_intern(&lf[212],11,"create-pipe");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[214]=C_h_intern(&lf[214],11,"signal/term");
lf[215]=C_h_intern(&lf[215],11,"signal/kill");
lf[216]=C_h_intern(&lf[216],10,"signal/int");
lf[217]=C_h_intern(&lf[217],10,"signal/hup");
lf[218]=C_h_intern(&lf[218],10,"signal/fpe");
lf[219]=C_h_intern(&lf[219],10,"signal/ill");
lf[220]=C_h_intern(&lf[220],11,"signal/segv");
lf[221]=C_h_intern(&lf[221],11,"signal/abrt");
lf[222]=C_h_intern(&lf[222],11,"signal/trap");
lf[223]=C_h_intern(&lf[223],11,"signal/quit");
lf[224]=C_h_intern(&lf[224],11,"signal/alrm");
lf[225]=C_h_intern(&lf[225],13,"signal/vtalrm");
lf[226]=C_h_intern(&lf[226],11,"signal/prof");
lf[227]=C_h_intern(&lf[227],9,"signal/io");
lf[228]=C_h_intern(&lf[228],10,"signal/urg");
lf[229]=C_h_intern(&lf[229],11,"signal/chld");
lf[230]=C_h_intern(&lf[230],11,"signal/cont");
lf[231]=C_h_intern(&lf[231],11,"signal/stop");
lf[232]=C_h_intern(&lf[232],11,"signal/tstp");
lf[233]=C_h_intern(&lf[233],11,"signal/pipe");
lf[234]=C_h_intern(&lf[234],11,"signal/xcpu");
lf[235]=C_h_intern(&lf[235],11,"signal/xfsz");
lf[236]=C_h_intern(&lf[236],11,"signal/usr1");
lf[237]=C_h_intern(&lf[237],11,"signal/usr2");
lf[238]=C_h_intern(&lf[238],12,"signal/winch");
lf[239]=C_h_intern(&lf[239],12,"signals-list");
lf[240]=C_h_intern(&lf[240],16,"set-signal-mask!");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot set signal mask");
lf[242]=C_h_intern(&lf[242],11,"signal-mask");
lf[243]=C_h_intern(&lf[243],14,"signal-masked\077");
lf[244]=C_h_intern(&lf[244],12,"signal-mask!");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot block signal");
lf[246]=C_h_intern(&lf[246],14,"signal-unmask!");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot unblock signal");
lf[248]=C_h_intern(&lf[248],18,"system-information");
lf[249]=C_h_intern(&lf[249],25,"\003syspeek-nonnull-c-string");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system information");
lf[251]=C_h_intern(&lf[251],15,"current-user-id");
lf[252]=C_h_intern(&lf[252],25,"current-effective-user-id");
lf[253]=C_h_intern(&lf[253],16,"current-group-id");
lf[254]=C_h_intern(&lf[254],26,"current-effective-group-id");
lf[255]=C_h_intern(&lf[255],16,"user-information");
lf[256]=C_h_intern(&lf[256],6,"vector");
lf[257]=C_h_intern(&lf[257],4,"list");
lf[258]=C_h_intern(&lf[258],17,"current-user-name");
lf[259]=C_h_intern(&lf[259],27,"current-effective-user-name");
lf[260]=C_h_intern(&lf[260],17,"group-information");
lf[261]=C_h_intern(&lf[261],10,"get-groups");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[265]=C_h_intern(&lf[265],11,"set-groups!");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot set supplementary group ids");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[268]=C_h_intern(&lf[268],17,"initialize-groups");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000)cannot initialize supplementary group ids");
lf[270]=C_h_intern(&lf[270],10,"errno/perm");
lf[271]=C_h_intern(&lf[271],11,"errno/noent");
lf[272]=C_h_intern(&lf[272],10,"errno/srch");
lf[273]=C_h_intern(&lf[273],10,"errno/intr");
lf[274]=C_h_intern(&lf[274],8,"errno/io");
lf[275]=C_h_intern(&lf[275],12,"errno/noexec");
lf[276]=C_h_intern(&lf[276],10,"errno/badf");
lf[277]=C_h_intern(&lf[277],11,"errno/child");
lf[278]=C_h_intern(&lf[278],11,"errno/nomem");
lf[279]=C_h_intern(&lf[279],11,"errno/acces");
lf[280]=C_h_intern(&lf[280],11,"errno/fault");
lf[281]=C_h_intern(&lf[281],10,"errno/busy");
lf[282]=C_h_intern(&lf[282],12,"errno/notdir");
lf[283]=C_h_intern(&lf[283],11,"errno/isdir");
lf[284]=C_h_intern(&lf[284],11,"errno/inval");
lf[285]=C_h_intern(&lf[285],11,"errno/mfile");
lf[286]=C_h_intern(&lf[286],11,"errno/nospc");
lf[287]=C_h_intern(&lf[287],11,"errno/spipe");
lf[288]=C_h_intern(&lf[288],10,"errno/pipe");
lf[289]=C_h_intern(&lf[289],11,"errno/again");
lf[290]=C_h_intern(&lf[290],10,"errno/rofs");
lf[291]=C_h_intern(&lf[291],11,"errno/exist");
lf[292]=C_h_intern(&lf[292],16,"errno/wouldblock");
lf[293]=C_h_intern(&lf[293],10,"errno/2big");
lf[294]=C_h_intern(&lf[294],12,"errno/deadlk");
lf[295]=C_h_intern(&lf[295],9,"errno/dom");
lf[296]=C_h_intern(&lf[296],10,"errno/fbig");
lf[297]=C_h_intern(&lf[297],11,"errno/ilseq");
lf[298]=C_h_intern(&lf[298],11,"errno/mlink");
lf[299]=C_h_intern(&lf[299],17,"errno/nametoolong");
lf[300]=C_h_intern(&lf[300],11,"errno/nfile");
lf[301]=C_h_intern(&lf[301],11,"errno/nodev");
lf[302]=C_h_intern(&lf[302],11,"errno/nolck");
lf[303]=C_h_intern(&lf[303],11,"errno/nosys");
lf[304]=C_h_intern(&lf[304],14,"errno/notempty");
lf[305]=C_h_intern(&lf[305],11,"errno/notty");
lf[306]=C_h_intern(&lf[306],10,"errno/nxio");
lf[307]=C_h_intern(&lf[307],11,"errno/range");
lf[308]=C_h_intern(&lf[308],10,"errno/xdev");
lf[309]=C_h_intern(&lf[309],16,"change-file-mode");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[311]=C_h_intern(&lf[311],17,"change-file-owner");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot change file owner");
lf[313]=C_h_intern(&lf[313],17,"file-read-access\077");
lf[314]=C_h_intern(&lf[314],18,"file-write-access\077");
lf[315]=C_h_intern(&lf[315],20,"file-execute-access\077");
lf[316]=C_h_intern(&lf[316],14,"create-session");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot create session");
lf[318]=C_h_intern(&lf[318],16,"process-group-id");
lf[319]=C_h_intern(&lf[319],20,"create-symbolic-link");
lf[320]=C_h_intern(&lf[320],18,"create-symbol-link");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create symbolic link");
lf[322]=C_h_intern(&lf[322],18,"read-symbolic-link");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot read symbolic link");
lf[324]=C_h_intern(&lf[324],12,"canonicalize");
lf[325]=C_h_intern(&lf[325],9,"substring");
lf[326]=C_h_intern(&lf[326],9,"file-link");
lf[327]=C_h_intern(&lf[327],9,"hard-link");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\032could not create hard link");
lf[329]=C_h_intern(&lf[329],21,"\003syscustom-input-port");
lf[330]=C_h_intern(&lf[330],4,"void");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\015cannot select");
lf[332]=C_h_intern(&lf[332],3,"rx=");
lf[333]=C_h_intern(&lf[333],17,"\003systhread-yield!");
lf[334]=C_h_intern(&lf[334],25,"\003systhread-block-for-i/o!");
lf[335]=C_h_intern(&lf[335],18,"\003syscurrent-thread");
lf[336]=C_h_intern(&lf[336],6,"\000input");
lf[337]=C_h_intern(&lf[337],22,"\003sysdispatch-interrupt");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[340]=C_h_intern(&lf[340],14,"set-port-name!");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[343]=C_h_intern(&lf[343],17,"\003sysstring-append");
lf[344]=C_h_intern(&lf[344],20,"\003sysscan-buffer-line");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[346]=C_h_intern(&lf[346],15,"make-input-port");
lf[347]=C_h_intern(&lf[347],22,"\003syscustom-output-port");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot write");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[350]=C_h_intern(&lf[350],16,"make-output-port");
lf[351]=C_h_intern(&lf[351],13,"file-truncate");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot truncate file");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[354]=C_h_intern(&lf[354],4,"lock");
lf[355]=C_h_intern(&lf[355],14,"\003syscheck-port");
lf[356]=C_h_intern(&lf[356],9,"file-lock");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[358]=C_h_intern(&lf[358],18,"file-lock/blocking");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[360]=C_h_intern(&lf[360],14,"file-test-lock");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[362]=C_h_intern(&lf[362],11,"file-unlock");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[364]=C_h_intern(&lf[364],11,"create-fifo");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create FIFO");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\023file does not exist");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000(system error while trying to access file");
lf[368]=C_h_intern(&lf[368],6,"setenv");
lf[369]=C_h_intern(&lf[369],8,"unsetenv");
lf[370]=C_h_intern(&lf[370],25,"get-environment-variables");
lf[371]=C_h_intern(&lf[371],9,"prot/read");
lf[372]=C_h_intern(&lf[372],10,"prot/write");
lf[373]=C_h_intern(&lf[373],9,"prot/exec");
lf[374]=C_h_intern(&lf[374],9,"prot/none");
lf[375]=C_h_intern(&lf[375],9,"map/fixed");
lf[376]=C_h_intern(&lf[376],10,"map/shared");
lf[377]=C_h_intern(&lf[377],11,"map/private");
lf[378]=C_h_intern(&lf[378],13,"map/anonymous");
lf[379]=C_h_intern(&lf[379],8,"map/file");
lf[380]=C_h_intern(&lf[380],18,"map-file-to-memory");
lf[381]=C_h_intern(&lf[381],4,"mmap");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot map file to memory");
lf[383]=C_h_intern(&lf[383],20,"\003syspointer->address");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000)bad argument type - not a foreign pointer");
lf[385]=C_h_intern(&lf[385],16,"\003sysnull-pointer");
lf[386]=C_h_intern(&lf[386],22,"unmap-file-from-memory");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot unmap file from memory");
lf[388]=C_h_intern(&lf[388],26,"memory-mapped-file-pointer");
lf[389]=C_h_intern(&lf[389],19,"memory-mapped-file\077");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[392]=C_h_intern(&lf[392],12,"string->time");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\027%a %b %e %H:%M:%S %Z %Y");
lf[394]=C_h_intern(&lf[394],17,"utc-time->seconds");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[396]=C_h_intern(&lf[396],27,"local-timezone-abbreviation");
lf[397]=C_h_intern(&lf[397],5,"_exit");
lf[398]=C_h_intern(&lf[398],10,"set-alarm!");
lf[399]=C_h_intern(&lf[399],19,"set-buffering-mode!");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[401]=C_h_intern(&lf[401],5,"\000full");
lf[402]=C_h_intern(&lf[402],5,"\000line");
lf[403]=C_h_intern(&lf[403],5,"\000none");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[405]=C_h_intern(&lf[405],14,"terminal-port\077");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[408]=C_h_intern(&lf[408],13,"terminal-name");
lf[409]=C_h_intern(&lf[409],13,"terminal-size");
lf[410]=C_h_intern(&lf[410],6,"\000error");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\036Unable to get size of terminal");
lf[412]=C_h_intern(&lf[412],17,"\003sysmake-locative");
lf[413]=C_h_intern(&lf[413],8,"location");
lf[414]=C_h_intern(&lf[414],13,"get-host-name");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[416]=C_h_intern(&lf[416],12,"process-fork");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create child process");
lf[418]=C_h_intern(&lf[418],24,"pathname-strip-directory");
lf[419]=C_h_intern(&lf[419],15,"process-execute");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[421]=C_h_intern(&lf[421],17,"parent-process-id");
lf[422]=C_h_intern(&lf[422],5,"sleep");
lf[423]=C_h_intern(&lf[423],14,"process-signal");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000 could not send signal to process");
lf[425]=C_h_intern(&lf[425],17,"\003sysshell-command");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\007/bin/sh");
lf[427]=C_h_intern(&lf[427],24,"get-environment-variable");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000\005SHELL");
lf[429]=C_h_intern(&lf[429],27,"\003sysshell-command-arguments");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[431]=C_h_intern(&lf[431],11,"process-run");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\025abnormal process exit");
lf[433]=C_h_intern(&lf[433],11,"\003sysprocess");
lf[434]=C_h_intern(&lf[434],7,"process");
lf[435]=C_h_intern(&lf[435],8,"process\052");
lf[436]=C_h_intern(&lf[436],6,"values");
lf[437]=C_h_intern(&lf[437],19,"set-root-directory!");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\037unable to change root directory");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve process group ID");
lf[440]=C_h_intern(&lf[440],21,"set-process-group-id!");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot set process group ID");
lf[442]=C_h_intern(&lf[442],18,"getter-with-setter");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\026(process-group-id pid)");
lf[444]=C_h_intern(&lf[444],26,"effective-group-id!-setter");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot set effective group ID");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\034(current-effective-group-id)");
lf[447]=C_h_intern(&lf[447],12,"set-user-id!");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot set group ID");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\022(current-group-id)");
lf[450]=C_h_intern(&lf[450],25,"effective-user-id!-setter");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot set effective user ID");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\033(current-effective-used-id)");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot set user ID");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\021(current-user-id)");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\024(file-position port)");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\031(file-creation-mode mode)");
lf[459]=C_h_intern(&lf[459],26,"set-file-modification-time");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\032(file-modification-time f)");
C_register_lf2(lf,462,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2599,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3093 */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3095,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[69]+1);
/* posix-common.scm:333: g275 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(3,*((C_word*)lf[69]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3101,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:335: directory? */
t3=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* unmap-file-from-memory in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6698(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6698r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6698r(t0,t1,t2,t3);}}

static void C_ccall f_6698r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[381],lf[386]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6704,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=t5;
f_6704(t7,C_u_i_car(t6));}
else{
t6=t5;
f_6704(t6,C_slot(t2,C_fix(2)));}}

/* k7473 */
static void C_ccall f_7474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1901: replace-fd */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* f_7478 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7478(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7478,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_cdr(t2);
t4=t2;
t5=C_u_i_car(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,t3,t5));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5230 in doloop1182 in k5210 in set-groups! in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1133: ##sys#error */
t2=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[265],lf[266],((C_word*)t0)[3]);}

/* k7153 in k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7155,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word)li224),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_7160(t5,((C_word*)t0)[8],((C_word*)t0)[9],C_fix(1));}

/* k7151 in process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=C_block_size(t1);
/* posixunix.scm:1781: setarg */
t4=((C_word*)t0)[7];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,C_fix(0),t1,t3);}

/* k7464 */
static void C_ccall f_7465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_7466 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_7466,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(t4)){
t6=C_i_car(t3);
t7=t3;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7474,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t6,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1900: file-close */
t10=*((C_word*)lf[164]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* rmdir in delete-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3062(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3062,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3066,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:322: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t3,t2);}

/* f_6686 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6686(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6686,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=C_i_foreign_integer_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub1656(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_integer_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub1656(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* delete-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3055r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3055r(t0,t1,t2,t3);}}

static void C_ccall f_3055r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_string_2(t2,lf[67]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3080,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:326: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t8,t2);}

/* f_5259 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5259(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5259,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5264,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t5=C_i_foreign_string_argumentp(t2);
/* posixunix.scm:1139: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t4,t5);}
else{
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub1196(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t5));}}

/* f_7134 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7134,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1856(C_SCHEME_UNDEFINED));}

/* process-execute in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7136(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_7136r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7136r(t0,t1,t2,t3);}}

static void C_ccall f_7136r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_check_string_2(t2,lf[419]);
t13=C_i_check_list_2(t5,lf[419]);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7152,a[2]=t9,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=t5,tmp=(C_word)a,a+=10,tmp);
/* posixunix.scm:1780: pathname-strip-directory */
t15=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t2);}

/* k3065 in rmdir in delete-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1){
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
t4=lf[1];
f_2620(6,t4,((C_word*)t0)[2],lf[8],lf[67],lf[68],((C_word*)t0)[3]);}}

/* k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:346: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[75]+1)))(2,*((C_word*)lf[75]+1),t2);}

/* k3155 in k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3158,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:347: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[75]+1)))(2,*((C_word*)lf[75]+1),t2);}

/* k3157 in k3155 in k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3234,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:350: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t3,((C_word*)t0)[4]);}

/* k3470 in k3422 in k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_3472(C_word c,C_word t0,C_word t1){
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
f_3374(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* for-each-loop832 in k4160 in k4124 in k4121 in k4116 in k4112 in k4110 in k4108 in file-select in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_4191(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4191,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4200,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posixunix.scm:709: g833 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3468 in k3422 in k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_3469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:421: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3374(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3079 in delete-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3080,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3085,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:328: find-files */
t3=*((C_word*)lf[71]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,t1,lf[72],C_SCHEME_TRUE,lf[73],C_SCHEME_FALSE);}
else{
/* posix-common.scm:340: rmdir */
f_3062(((C_word*)t0)[4],t1);}}

/* k7122 */
static void C_ccall f_7124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1849(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3484,2,t0,t1);}
if(C_truep((C_truep(C_i_equalp(t1,lf[84]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t1,lf[85]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posix-common.scm:413: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3374(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3478,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:414: symbolic-link? */
t3=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}}

/* k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3478,2,t0,t1);}
t2=(C_truep(t1)?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:415: pproc */
t5=((C_word*)t0)[9];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[7]);}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:416: lproc */
t4=((C_word*)t0)[11];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[7]);}}

/* k3160 in k3157 in k3155 in k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3161,2,t0,t1);}
t2=C_opendir(t1,((C_word*)t0)[2]);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posix-common.scm:352: posix-error */
t3=lf[1];
f_2620(6,t3,((C_word*)t0)[3],lf[8],lf[25],lf[74],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li28),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3175(t6,((C_word*)t0)[3]);}}

/* f_3086 in k3084 in k3079 in delete-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3086(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3086,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3095,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:334: symbolic-link? */
t4=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3084 in k3079 in delete-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3085(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[2],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[70]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3111,a[2]=t6,a[3]=t2,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3111(t8,t4,t1);}

/* f_5733 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5733,2,t0,t1);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm:1351: ready? */
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k3488 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3490,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:422: action */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
/* posix-common.scm:423: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3374(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* ##sys#terminal-check in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6958(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6958,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6962,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1717: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),t4,t3,t2);}

/* current-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3022r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3022r(t0,t1,t2);}}

static void C_ccall f_3022r(C_word t0,C_word t1,C_word t2){
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
t5=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(4,*((C_word*)lf[66]+1),t5,C_fix(1024),C_make_character(32));}}

/* k7629 in k7627 */
static void C_ccall f_7630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7630,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7635,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li255),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1962: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[7],t2,((C_word*)t0)[8]);}

/* f_7635 in k7629 in k7627 */
static void C_ccall f_7635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7635,2,t0,t1);}
/* posixunix.scm:1963: ##sys#process */
t2=*((C_word*)lf[433]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k7493 in spawn in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7496,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm:1910: needed-pipe */
t3=((C_word*)t0)[12];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[10]);}

/* k7495 in k7493 in spawn in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm:1911: needed-pipe */
t3=((C_word*)t0)[13];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k7497 in k7495 in k7493 in spawn in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* posixunix.scm:1913: swapped-ends */
t3=((C_word*)t0)[10];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[12]);}

/* k6946 in k6944 in terminal-port? in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6947(C_word c,C_word t0,C_word t1){
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

/* f_7669 in process in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_7669,6,t0,t1,t2,t3,t4,t5);}
/* posixunix.scm:1969: values */
C_values(5,0,t1,t2,t3,t4);}

/* k6944 in terminal-port? in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1713: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[58]+1)))(4,*((C_word*)lf[58]+1),t2,((C_word*)t0)[3],C_fix(0));}

/* terminal-port? in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6941(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6941,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6945,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1712: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),t3,t2,lf[405]);}

/* spawn in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_7490(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7490,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7494,a[2]=t1,a[3]=t3,a[4]=t4,a[5]=t5,a[6]=((C_word*)t0)[2],a[7]=t2,a[8]=t8,a[9]=((C_word*)t0)[3],a[10]=t6,a[11]=t7,a[12]=((C_word*)t0)[4],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1909: needed-pipe */
t10=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t2,t7);}

/* k3495 in k3488 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:422: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3374(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5751 */
static void C_ccall f_5752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1357: on-close */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}

/* k3431 in k3422 in k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_3433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:417: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3374(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_3435 in k3422 in k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_3435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3435,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* port->fileno in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2955,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2959,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:277: ##sys#check-open-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),t3,t2,lf[54]);}

/* k2958 in port->fileno in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2959,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(lf[29],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2971,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:283: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(3,*((C_word*)lf[55]+1),t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2994,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:284: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[58]+1)))(4,*((C_word*)lf[58]+1),t4,((C_word*)t0)[2],C_fix(0));}}

/* k3193 in k3188 in k3184 in loop in k3160 in k3157 in k3155 in k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3195(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3195,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posix-common.scm:367: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3175(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3204,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:368: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3175(t3,t2);}}

/* k3036 in k3034 in current-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:314: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2]);}
else{
/* posix-common.scm:315: ##sys#signal-hook */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[8],lf[62],lf[65]);}}

/* k3034 in current-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3035,2,t0,t1);}
t2=C_curdir(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3037,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:312: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t3);}

/* f_5744 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5744,2,t0,t1);}
if(C_truep(C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5752,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_close(((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:1356: posix-error */
t4=lf[1];
f_2620(7,t4,t2,lf[8],((C_word*)t0)[5],lf[341],((C_word*)t0)[4],((C_word*)t0)[6]);}
else{
/* posixunix.scm:1357: on-close */
t4=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}}}

/* f_6979 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6979(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6979,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=stub1774(t3,t4);
/* posixunix.scm:1723: ##sys#peek-nonnull-c-string */
t6=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* k7646 */
static void C_ccall f_7648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7648,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7652,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1960: ##sys#shell-command */
t4=*((C_word*)lf[425]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k6961 in terminal-check in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(lf[51],t2);
t4=(C_truep(t3)?C_tty_portp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* posixunix.scm:1720: ##sys#error */
t5=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],((C_word*)t0)[4],lf[407],((C_word*)t0)[2]);}}

/* k3445 */
static void C_ccall f_3446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:420: pproc */
t4=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[5]);}

/* f_3440 in k3422 in k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3446,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3458,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:419: make-pathname */
t4=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[86]);}

/* open-output-file* in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2942r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2942r(t0,t1,t2,t3);}}

static void C_ccall f_2942r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[53]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2953,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:273: mode */
f_2879(t5,C_SCHEME_FALSE,t3,lf[53]);}

/* k2939 in open-input-file* in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2940,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:269: check */
f_2915(((C_word*)t0)[4],lf[52],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3450 in k3445 */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
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
f_3374(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k3448 in k3445 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:419: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3374(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_5764 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1359: fetch */
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7627 */
static void C_ccall f_7628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm:1961: chkstrlst */
t3=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_7630(2,t3,C_SCHEME_UNDEFINED);}}

/* f_3460 in k3422 in k3476 in k3483 in k3389 in loop in k3371 in k3365 in k3363 in k3552 in k3550 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_3460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3460,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5766 */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1360: peek */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3457 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:419: glob */
t2=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_3564 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3564,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_3561 in k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3561,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_3567 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3567,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* process in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7654(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_7654r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7654r(t0,t1,t2,t3);}}

static void C_ccall f_7654r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7669,a[2]=((C_word)li257),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1967: %process */
t13=((C_word*)t0)[2];
((C_proc8)(void*)(*((C_word*)t13+1)))(8,t13,t1,lf[434],C_SCHEME_FALSE,t2,t5,t9,t12);}

/* k5716 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5718,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5720,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1417: set-port-name! */
t4=*((C_word*)lf[340]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[4]);}

/* k7650 in k7646 */
static void C_ccall f_7652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_7628(2,t3,t2);}

/* f_3572 */
static void C_ccall f_3572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3572,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* f_3570 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3570,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3572,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));}

/* f_3579 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3579,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3577 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3577,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3579,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));}

/* for-each-loop2041 */
static void C_fcall f_7606(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7606,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7615,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posixunix.scm:1954: g2042 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3570,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(5,*((C_word*)lf[93]+1),t2,lf[96],((C_word*)t0)[4],t3);}

/* k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3567,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(5,*((C_word*)lf[93]+1),t2,lf[95],((C_word*)t0)[5],t3);}

/* k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3564,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(5,*((C_word*)lf[93]+1),t2,lf[94],((C_word*)t0)[6],t3);}

/* k3548 in k3546 in k3544 in k3542 in find-files in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3561,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:425: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(5,*((C_word*)lf[93]+1),t2,lf[72],((C_word*)t0)[7],t3);}

/* f_7289 in process-wait in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7289,2,t0,t1);}
/* posixunix.scm:1814: ##sys#process-wait */
t2=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_7737 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7737(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7737,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7742,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=C_i_foreign_string_argumentp(t2);
/* posixunix.scm:1980: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t3,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub2111(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2952 in open-output-file* in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2953,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:273: check */
f_2915(((C_word*)t0)[4],lf[53],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* f_5722 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5725,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1343: fetch */
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5719 in k5716 in k5585 in k5581 in custom-input-port in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3144(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3144,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_check_string_2(t1,lf[25]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3154,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(4,*((C_word*)lf[66]+1),t9,C_fix(256),C_make_character(32));}

/* k5688 in k5680 in loop */
static void C_ccall f_5689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5683 in k5680 in loop */
static void C_ccall f_5684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1328: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5632(2,t2,((C_word*)t0)[3]);}

/* k5726 in k5724 */
static void C_ccall f_5727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* ##sys#process-wait in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7273(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7273,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=C_waitpid(t2,t4);
t6=C_WIFEXITED(C_fix((C_word)C_wait_status));
t7=C_eqp(t5,C_fix(-1));
t8=(C_truep(t7)?C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7289,a[2]=t2,a[3]=t3,a[4]=((C_word)li226),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1813: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[337]+1)))(3,*((C_word*)lf[337]+1),t1,t9);}
else{
if(C_truep(t6)){
t9=C_WEXITSTATUS(C_fix((C_word)C_wait_status));
/* posixunix.scm:1815: values */
C_values(5,0,t1,t5,t6,t9);}
else{
if(C_truep(C_WIFSIGNALED(C_fix((C_word)C_wait_status)))){
t9=C_WTERMSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1815: values */
C_values(5,0,t1,t5,t6,t9);}
else{
t9=C_WSTOPSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1815: values */
C_values(5,0,t1,t5,t6,t9);}}}}

/* k5724 */
static void C_ccall f_5725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1344: peek */
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3140(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3140r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3140r(t0,t1,t2);}}

static void C_ccall f_3140r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3144,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:343: current-directory */
t4=*((C_word*)lf[62]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=t3;
f_3144(2,t4,C_i_car(t2));}}

/* k5392 in k5399 in check in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5680 in loop */
static void C_ccall f_5682(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5682,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1327: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[333]+1)))(2,*((C_word*)lf[333]+1),t2);}
else{
t2=C_read(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5689,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t7=(C_truep(t6)?t6:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t7)){
t8=C_set_block_item(t3,0,C_fix(0));
t9=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t10=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
/* posixunix.scm:1334: posix-error */
t8=lf[1];
f_2620(7,t8,t4,lf[8],((C_word*)t0)[9],lf[339],((C_word*)t0)[4],((C_word*)t0)[10]);}}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t7=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}}

/* get-environment-variables in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6553,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6559,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li189),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_6559(t5,t1,C_fix(0));}

/* loop in get-environment-variables in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_6559(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6559,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6563,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1576: get */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k7764 in set-root-directory! in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:1984: posix-error */
t2=lf[1];
f_2620(6,t2,((C_word*)t0)[2],lf[8],lf[437],lf[438],((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k7614 in for-each-loop2041 */
static void C_ccall f_7615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7606(t3,((C_word*)t0)[4],t2);}

/* loop */
static void C_fcall f_6161(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6161,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1450: poke */
t7=((C_word*)((C_word*)t0)[5])[1];
f_6030(t7,t6,((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
if(C_truep(C_fixnum_lessp(t2,t4))){
t6=C_substring_copy(((C_word*)t0)[7],((C_word*)t0)[6],t3,t2,((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_difference(t4,t2);
/* posixunix.scm:1455: loop */
t13=t1;
t14=C_fix(0);
t15=t2;
t16=t7;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}
else{
t6=C_substring_copy(((C_word*)t0)[7],((C_word*)t0)[6],t3,t4,((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t4);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}}

/* for-each-loop264 in k3084 in k3079 in delete-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3111(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3111,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3120,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:328: g265 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* check in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_5385(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5385,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5400,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5403,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1215: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t7,t2);}

/* k5382 in change-file-owner in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1205: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[311]);}

/* k5379 in change-file-owner in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_chown(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1206: posix-error */
t3=lf[1];
f_2620(8,t3,((C_word*)t0)[4],lf[8],lf[311],lf[312],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_6544 in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6544(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6544,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=stub1601(t3,t4);
/* posixunix.scm:1573: ##sys#peek-c-string */
t6=*((C_word*)lf[0]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* k6541 in unsetenv in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_unsetenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k6169 in loop */
static void C_ccall f_6170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
/* posixunix.scm:1452: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6161(t3,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),((C_word*)t0)[6]);}

/* k3119 in for-each-loop264 in k3084 in k3079 in delete-directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3111(t3,((C_word*)t0)[4],t2);}

/* set-root-directory! in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_7749(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7749,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[437]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7765,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1983: chroot */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3584(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3584,2,t0,t1);}
t2=C_mutate((C_word*)lf[98]+1 /* (set! file-creation-mode ...) */,t1);
t3=C_mutate(&lf[99] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3586,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[101]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3604,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[104]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3625,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3646,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
t7=C_mutate((C_word*)lf[105]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3655,a[2]=t6,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[107]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3690,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3705,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3711,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
t11=C_mutate((C_word*)lf[111]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3717,a[2]=t10,a[3]=t9,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[114]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3765,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3779,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7909,a[2]=((C_word)li273),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:504: getter-with-setter */
t15=*((C_word*)lf[442]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,*((C_word*)lf[114]+1));}

/* k7740 */
static void C_ccall f_7742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub2111(C_SCHEME_UNDEFINED,t1));}

/* loop in k3160 in k3157 in k3155 in k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3175(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3175,NULL,2,t0,t1);}
t2=C_readdir(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_null_pointerp(((C_word*)t0)[3]))){
t3=C_closedir(((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_foundfile(((C_word*)t0)[3],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3185,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:360: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* check-time-vector in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3586(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3586,NULL,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:454: ##sys#error */
t6=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[100],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6562 in loop in get-environment-variables in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6563,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6571,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word)li188),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_6571(t5,((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* k3184 in loop in k3160 in k3157 in k3155 in k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_3185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3185,2,t0,t1);}
t2=C_i_string_ref(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[4],C_fix(1)))){
t4=t1;
t5=t3;
f_3189(t5,C_subchar(t4,C_fix(1)));}
else{
t4=t3;
f_3189(t4,C_SCHEME_FALSE);}}

/* k3188 in k3184 in loop in k3160 in k3157 in k3155 in k3153 in k3143 in directory in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_fcall f_3189(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3189,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_make_character(46),((C_word*)t0)[5]);
if(C_truep(t3)){
t4=C_i_not(t1);
if(C_truep(t4)){
t5=t2;
f_3195(t5,t4);}
else{
t5=C_eqp(C_make_character(46),t1);
if(C_truep(t5)){
t6=C_eqp(C_fix(2),((C_word*)t0)[6]);
t7=t2;
f_3195(t7,(C_truep(t6)?t6:C_i_not(((C_word*)t0)[7])));}
else{
t6=t2;
f_3195(t6,C_i_not(((C_word*)t0)[7]));}}}
else{
t4=t2;
f_3195(t4,C_SCHEME_FALSE);}}

/* k6518 in fifo? in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1548: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,lf[34]);}

/* unsetenv in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6535,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[369]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6542,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1569: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t2,lf[369]);}

/* k6532 in k6529 in setenv in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_setenv(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k6529 in setenv in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6533,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1564: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,((C_word*)t0)[3],lf[368]);}

/* k2683 in file-stat in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2684,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blocks)));}

/* setenv in k5471 in k5437 in k4993 in k4989 in k4985 in k4981 in k4407 in k3777 in k3582 in k2695 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 */
static void C_ccall f_6521(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6521,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[368]);
t5=C_i_check_string_2(t3,lf[368]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6530,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1564: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t6,t2,lf[368]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[661] = {
{"f_2697:posixunix_2escm",(void*)f_2697},
{"f_2699:posixunix_2escm",(void*)f_2699},
{"f_2669:posixunix_2escm",(void*)f_2669},
{"f_2663:posixunix_2escm",(void*)f_2663},
{"f_2677:posixunix_2escm",(void*)f_2677},
{"f_2672:posixunix_2escm",(void*)f_2672},
{"f_4411:posixunix_2escm",(void*)f_4411},
{"f_2640:posixunix_2escm",(void*)f_2640},
{"f_2624:posixunix_2escm",(void*)f_2624},
{"f_2999:posixunix_2escm",(void*)f_2999},
{"f_2994:posixunix_2escm",(void*)f_2994},
{"f_2620:posixunix_2escm",(void*)f_2620},
{"f_7917:posixunix_2escm",(void*)f_7917},
{"f_4422:posixunix_2escm",(void*)f_4422},
{"f_4420:posixunix_2escm",(void*)f_4420},
{"f_4427:posixunix_2escm",(void*)f_4427},
{"f_2636:posixunix_2escm",(void*)f_2636},
{"f_2633:posixunix_2escm",(void*)f_2633},
{"f_2630:posixunix_2escm",(void*)f_2630},
{"f_7909:posixunix_2escm",(void*)f_7909},
{"f_3412:posixunix_2escm",(void*)f_3412},
{"f_3415:posixunix_2escm",(void*)f_3415},
{"f_2979:posixunix_2escm",(void*)f_2979},
{"f_2971:posixunix_2escm",(void*)f_2971},
{"f_3424:posixunix_2escm",(void*)f_3424},
{"f_4409:posixunix_2escm",(void*)f_4409},
{"f_4436:posixunix_2escm",(void*)f_4436},
{"f_4438:posixunix_2escm",(void*)f_4438},
{"f_6252:posixunix_2escm",(void*)f_6252},
{"f_2915:posixunix_2escm",(void*)f_2915},
{"f_2927:posixunix_2escm",(void*)f_2927},
{"f_2929:posixunix_2escm",(void*)f_2929},
{"f_7980:posixunix_2escm",(void*)f_7980},
{"f_4863:posixunix_2escm",(void*)f_4863},
{"f_5117:posixunix_2escm",(void*)f_5117},
{"f_4851:posixunix_2escm",(void*)f_4851},
{"f_5102:posixunix_2escm",(void*)f_5102},
{"f_5104:posixunix_2escm",(void*)f_5104},
{"f_5108:posixunix_2escm",(void*)f_5108},
{"f_7968:posixunix_2escm",(void*)f_7968},
{"f_4840:posixunix_2escm",(void*)f_4840},
{"f_4845:posixunix_2escm",(void*)f_4845},
{"f_7959:posixunix_2escm",(void*)f_7959},
{"f_7954:posixunix_2escm",(void*)f_7954},
{"f_7950:posixunix_2escm",(void*)f_7950},
{"f_7945:posixunix_2escm",(void*)f_7945},
{"f_6030:posixunix_2escm",(void*)f_6030},
{"f_7948:posixunix_2escm",(void*)f_7948},
{"f_6036:posixunix_2escm",(void*)f_6036},
{"f_7940:posixunix_2escm",(void*)f_7940},
{"f_6028:posixunix_2escm",(void*)f_6028},
{"f_6012:posixunix_2escm",(void*)f_6012},
{"f_6467:posixunix_2escm",(void*)f_6467},
{"f_3005:posixunix_2escm",(void*)f_3005},
{"f_3007:posixunix_2escm",(void*)f_3007},
{"f_2605:posixunix_2escm",(void*)f_2605},
{"f_2607:posixunix_2escm",(void*)f_2607},
{"f_2609:posixunix_2escm",(void*)f_2609},
{"f_6479:posixunix_2escm",(void*)f_6479},
{"f_2601:posixunix_2escm",(void*)f_2601},
{"f_2603:posixunix_2escm",(void*)f_2603},
{"f_6486:posixunix_2escm",(void*)f_6486},
{"f_2611:posixunix_2escm",(void*)f_2611},
{"f_4461:posixunix_2escm",(void*)f_4461},
{"f_4467:posixunix_2escm",(void*)f_4467},
{"f_7798:posixunix_2escm",(void*)f_7798},
{"f_5888:posixunix_2escm",(void*)f_5888},
{"f_4448:posixunix_2escm",(void*)f_4448},
{"f_4447:posixunix_2escm",(void*)f_4447},
{"f_4445:posixunix_2escm",(void*)f_4445},
{"f_7770:posixunix_2escm",(void*)f_7770},
{"f_6464:posixunix_2escm",(void*)f_6464},
{"f_7775:posixunix_2escm",(void*)f_7775},
{"f_4475:posixunix_2escm",(void*)f_4475},
{"f_4473:posixunix_2escm",(void*)f_4473},
{"f_5411:posixunix_2escm",(void*)f_5411},
{"f_5417:posixunix_2escm",(void*)f_5417},
{"f_5403:posixunix_2escm",(void*)f_5403},
{"f_5400:posixunix_2escm",(void*)f_5400},
{"f_5405:posixunix_2escm",(void*)f_5405},
{"f_4723:posixunix_2escm",(void*)f_4723},
{"f_4726:posixunix_2escm",(void*)f_4726},
{"f_5432:posixunix_2escm",(void*)f_5432},
{"f_3850:posixunix_2escm",(void*)f_3850},
{"f_7780:posixunix_2escm",(void*)f_7780},
{"f_3857:posixunix_2escm",(void*)f_3857},
{"f_4488:posixunix_2escm",(void*)f_4488},
{"f_7785:posixunix_2escm",(void*)f_7785},
{"f_4480:posixunix_2escm",(void*)f_4480},
{"f_5055:posixunix_2escm",(void*)f_5055},
{"f_5053:posixunix_2escm",(void*)f_5053},
{"f_5085:posixunix_2escm",(void*)f_5085},
{"f_5078:posixunix_2escm",(void*)f_5078},
{"f_4767:posixunix_2escm",(void*)f_4767},
{"f_4763:posixunix_2escm",(void*)f_4763},
{"f_3106:posixunix_2escm",(void*)f_3106},
{"f_3101:posixunix_2escm",(void*)f_3101},
{"f_7886:posixunix_2escm",(void*)f_7886},
{"f_4713:posixunix_2escm",(void*)f_4713},
{"f_4718:posixunix_2escm",(void*)f_4718},
{"f_7402:posixunix_2escm",(void*)f_7402},
{"f_7406:posixunix_2escm",(void*)f_7406},
{"f_7408:posixunix_2escm",(void*)f_7408},
{"f_7872:posixunix_2escm",(void*)f_7872},
{"f_7877:posixunix_2escm",(void*)f_7877},
{"f_6780:posixunix_2escm",(void*)f_6780},
{"f_7875:posixunix_2escm",(void*)f_7875},
{"f_4701:posixunix_2escm",(void*)f_4701},
{"f_4883:posixunix_2escm",(void*)f_4883},
{"f_4704:posixunix_2escm",(void*)f_4704},
{"f_4709:posixunix_2escm",(void*)f_4709},
{"f_4889:posixunix_2escm",(void*)f_4889},
{"f_4731:posixunix_2escm",(void*)f_4731},
{"f_4872:posixunix_2escm",(void*)f_4872},
{"f_4735:posixunix_2escm",(void*)f_4735},
{"f_7453:posixunix_2escm",(void*)f_7453},
{"f_7457:posixunix_2escm",(void*)f_7457},
{"f_7060:posixunix_2escm",(void*)f_7060},
{"f_6778:posixunix_2escm",(void*)f_6778},
{"f_7056:posixunix_2escm",(void*)f_7056},
{"f_7054:posixunix_2escm",(void*)f_7054},
{"f_5128:posixunix_2escm",(void*)f_5128},
{"f_5154:posixunix_2escm",(void*)f_5154},
{"f_5156:posixunix_2escm",(void*)f_5156},
{"f_5150:posixunix_2escm",(void*)f_5150},
{"f_5158:posixunix_2escm",(void*)f_5158},
{"f_5096:posixunix_2escm",(void*)f_5096},
{"f_5099:posixunix_2escm",(void*)f_5099},
{"f_2745:posixunix_2escm",(void*)f_2745},
{"f_5050:posixunix_2escm",(void*)f_5050},
{"f_5650:posixunix_2escm",(void*)f_5650},
{"f_5652:posixunix_2escm",(void*)f_5652},
{"f_7557:posixunix_2escm",(void*)f_7557},
{"f_7552:posixunix_2escm",(void*)f_7552},
{"f_5065:posixunix_2escm",(void*)f_5065},
{"f_5062:posixunix_2escm",(void*)f_5062},
{"f_2727:posixunix_2escm",(void*)f_2727},
{"f_2729:posixunix_2escm",(void*)f_2729},
{"f_7546:posixunix_2escm",(void*)f_7546},
{"f_2723:posixunix_2escm",(void*)f_2723},
{"f_2721:posixunix_2escm",(void*)f_2721},
{"f_6300:posixunix_2escm",(void*)f_6300},
{"f_6304:posixunix_2escm",(void*)f_6304},
{"f_7536:posixunix_2escm",(void*)f_7536},
{"f_7539:posixunix_2escm",(void*)f_7539},
{"f_7215:posixunix_2escm",(void*)f_7215},
{"f_4174:posixunix_2escm",(void*)f_4174},
{"f_5614:posixunix_2escm",(void*)f_5614},
{"f_7516:posixunix_2escm",(void*)f_7516},
{"f_7514:posixunix_2escm",(void*)f_7514},
{"f_4161:posixunix_2escm",(void*)f_4161},
{"f_7512:posixunix_2escm",(void*)f_7512},
{"f_4164:posixunix_2escm",(void*)f_4164},
{"f_4063:posixunix_2escm",(void*)f_4063},
{"f_4067:posixunix_2escm",(void*)f_4067},
{"f_5604:posixunix_2escm",(void*)f_5604},
{"f_3812:posixunix_2escm",(void*)f_3812},
{"f_3807:posixunix_2escm",(void*)f_3807},
{"f_7509:posixunix_2escm",(void*)f_7509},
{"f_7507:posixunix_2escm",(void*)f_7507},
{"f_7504:posixunix_2escm",(void*)f_7504},
{"f_4113:posixunix_2escm",(void*)f_4113},
{"f_4111:posixunix_2escm",(void*)f_4111},
{"f_4118:posixunix_2escm",(void*)f_4118},
{"f_4057:posixunix_2escm",(void*)f_4057},
{"f_7096:posixunix_2escm",(void*)f_7096},
{"f_5632:posixunix_2escm",(void*)f_5632},
{"f_4180:posixunix_2escm",(void*)f_4180},
{"f_4189:posixunix_2escm",(void*)f_4189},
{"f_7081:posixunix_2escm",(void*)f_7081},
{"f_7080:posixunix_2escm",(void*)f_7080},
{"f_5621:posixunix_2escm",(void*)f_5621},
{"f_5274:posixunix_2escm",(void*)f_5274},
{"f_7569:posixunix_2escm",(void*)f_7569},
{"f_7566:posixunix_2escm",(void*)f_7566},
{"f_5264:posixunix_2escm",(void*)f_5264},
{"f_4123:posixunix_2escm",(void*)f_4123},
{"f_4125:posixunix_2escm",(void*)f_4125},
{"f_5294:posixunix_2escm",(void*)f_5294},
{"f_4750:posixunix_2escm",(void*)f_4750},
{"f_4758:posixunix_2escm",(void*)f_4758},
{"f_4753:posixunix_2escm",(void*)f_4753},
{"f_5423:posixunix_2escm",(void*)f_5423},
{"f_6652:posixunix_2escm",(void*)f_6652},
{"f_6654:posixunix_2escm",(void*)f_6654},
{"f_6656:posixunix_2escm",(void*)f_6656},
{"f_5439:posixunix_2escm",(void*)f_5439},
{"f_6650:posixunix_2escm",(void*)f_6650},
{"f_5590:posixunix_2escm",(void*)f_5590},
{"f_5288:posixunix_2escm",(void*)f_5288},
{"f_6268:posixunix_2escm",(void*)f_6268},
{"f_4740:posixunix_2escm",(void*)f_4740},
{"f_4745:posixunix_2escm",(void*)f_4745},
{"f_5427:posixunix_2escm",(void*)f_5427},
{"f_6262:posixunix_2escm",(void*)f_6262},
{"f_4571:posixunix_2escm",(void*)f_4571},
{"f_7529:posixunix_2escm",(void*)f_7529},
{"f_7526:posixunix_2escm",(void*)f_7526},
{"f_6277:posixunix_2escm",(void*)f_6277},
{"f_7525:posixunix_2escm",(void*)f_7525},
{"f_4772:posixunix_2escm",(void*)f_4772},
{"f_7522:posixunix_2escm",(void*)f_7522},
{"f_4777:posixunix_2escm",(void*)f_4777},
{"f_5441:posixunix_2escm",(void*)f_5441},
{"f_6274:posixunix_2escm",(void*)f_6274},
{"f_6288:posixunix_2escm",(void*)f_6288},
{"f_6668:posixunix_2escm",(void*)f_6668},
{"f_4598:posixunix_2escm",(void*)f_4598},
{"f_4795:posixunix_2escm",(void*)f_4795},
{"f_4799:posixunix_2escm",(void*)f_4799},
{"f_4790:posixunix_2escm",(void*)f_4790},
{"f_4583:posixunix_2escm",(void*)f_4583},
{"f_4585:posixunix_2escm",(void*)f_4585},
{"f_4785:posixunix_2escm",(void*)f_4785},
{"f_4782:posixunix_2escm",(void*)f_4782},
{"f_4635:posixunix_2escm",(void*)f_4635},
{"f_5587:posixunix_2escm",(void*)f_5587},
{"f_5586:posixunix_2escm",(void*)f_5586},
{"f_6644:posixunix_2escm",(void*)f_6644},
{"f_6648:posixunix_2escm",(void*)f_6648},
{"f_4536:posixunix_2escm",(void*)f_4536},
{"f_5582:posixunix_2escm",(void*)f_5582},
{"f_4538:posixunix_2escm",(void*)f_4538},
{"f_4036:posixunix_2escm",(void*)f_4036},
{"f_4032:posixunix_2escm",(void*)f_4032},
{"f_4030:posixunix_2escm",(void*)f_4030},
{"f_6988:posixunix_2escm",(void*)f_6988},
{"f_4622:posixunix_2escm",(void*)f_4622},
{"f_7591:posixunix_2escm",(void*)f_7591},
{"f_7597:posixunix_2escm",(void*)f_7597},
{"f_4526:posixunix_2escm",(void*)f_4526},
{"f_7593:posixunix_2escm",(void*)f_7593},
{"f_4524:posixunix_2escm",(void*)f_4524},
{"f_6992:posixunix_2escm",(void*)f_6992},
{"f_4024:posixunix_2escm",(void*)f_4024},
{"f_6998:posixunix_2escm",(void*)f_6998},
{"f_4613:posixunix_2escm",(void*)f_4613},
{"f_7581:posixunix_2escm",(void*)f_7581},
{"f_6620:posixunix_2escm",(void*)f_6620},
{"f_7440:posixunix_2escm",(void*)f_7440},
{"f_7448:posixunix_2escm",(void*)f_7448},
{"f_4604:posixunix_2escm",(void*)f_4604},
{"f_7572:posixunix_2escm",(void*)f_7572},
{"f_3625:posixunix_2escm",(void*)f_3625},
{"f_7578:posixunix_2escm",(void*)f_7578},
{"f_7575:posixunix_2escm",(void*)f_7575},
{"f_4544:posixunix_2escm",(void*)f_4544},
{"f_4084:posixunix_2escm",(void*)f_4084},
{"f_4089:posixunix_2escm",(void*)f_4089},
{"f_4677:posixunix_2escm",(void*)f_4677},
{"f_4679:posixunix_2escm",(void*)f_4679},
{"f_4673:posixunix_2escm",(void*)f_4673},
{"f_2705:posixunix_2escm",(void*)f_2705},
{"f_2709:posixunix_2escm",(void*)f_2709},
{"f_2703:posixunix_2escm",(void*)f_2703},
{"f_4073:posixunix_2escm",(void*)f_4073},
{"f_7422:posixunix_2escm",(void*)f_7422},
{"f_7427:posixunix_2escm",(void*)f_7427},
{"f_2715:posixunix_2escm",(void*)f_2715},
{"f_4663:posixunix_2escm",(void*)f_4663},
{"f_2717:posixunix_2escm",(void*)f_2717},
{"f_4665:posixunix_2escm",(void*)f_4665},
{"f_2711:posixunix_2escm",(void*)f_2711},
{"f_4933:posixunix_2escm",(void*)f_4933},
{"f_3664:posixunix_2escm",(void*)f_3664},
{"f_3660:posixunix_2escm",(void*)f_3660},
{"f_5938:posixunix_2escm",(void*)f_5938},
{"f_3630:posixunix_2escm",(void*)f_3630},
{"f_3609:posixunix_2escm",(void*)f_3609},
{"f_5927:posixunix_2escm",(void*)f_5927},
{"f_4953:posixunix_2escm",(void*)f_4953},
{"f_4959:posixunix_2escm",(void*)f_4959},
{"f_3604:posixunix_2escm",(void*)f_3604},
{"f_4949:posixunix_2escm",(void*)f_4949},
{"f_6587:posixunix_2escm",(void*)f_6587},
{"f_6844:posixunix_2escm",(void*)f_6844},
{"f_6593:posixunix_2escm",(void*)f_6593},
{"f_6596:posixunix_2escm",(void*)f_6596},
{"f_6849:posixunix_2escm",(void*)f_6849},
{"f_4962:posixunix_2escm",(void*)f_4962},
{"f_4965:posixunix_2escm",(void*)f_4965},
{"f_4968:posixunix_2escm",(void*)f_4968},
{"f_6834:posixunix_2escm",(void*)f_6834},
{"f_6838:posixunix_2escm",(void*)f_6838},
{"f_6346:posixunix_2escm",(void*)f_6346},
{"f_6571:posixunix_2escm",(void*)f_6571},
{"f_7233:posixunix_2escm",(void*)f_7233},
{"f_5946:posixunix_2escm",(void*)f_5946},
{"f_3270:posixunix_2escm",(void*)f_3270},
{"f_4373:posixunix_2escm",(void*)f_4373},
{"f_4379:posixunix_2escm",(void*)f_4379},
{"f_3284:posixunix_2escm",(void*)f_3284},
{"f_3289:posixunix_2escm",(void*)f_3289},
{"f_5844:posixunix_2escm",(void*)f_5844},
{"f_4997:posixunix_2escm",(void*)f_4997},
{"f_4995:posixunix_2escm",(void*)f_4995},
{"f_4991:posixunix_2escm",(void*)f_4991},
{"f_3298:posixunix_2escm",(void*)f_3298},
{"f_5913:posixunix_2escm",(void*)f_5913},
{"f_3292:posixunix_2escm",(void*)f_3292},
{"f_6823:posixunix_2escm",(void*)f_6823},
{"f_6820:posixunix_2escm",(void*)f_6820},
{"f_6114:posixunix_2escm",(void*)f_6114},
{"f_4987:posixunix_2escm",(void*)f_4987},
{"f_5918:posixunix_2escm",(void*)f_5918},
{"f_5847:posixunix_2escm",(void*)f_5847},
{"f_4983:posixunix_2escm",(void*)f_4983},
{"f_4650:posixunix_2escm",(void*)f_4650},
{"f_4659:posixunix_2escm",(void*)f_4659},
{"f_5861:posixunix_2escm",(void*)f_5861},
{"f_4518:posixunix_2escm",(void*)f_4518},
{"f_6101:posixunix_2escm",(void*)f_6101},
{"f_6106:posixunix_2escm",(void*)f_6106},
{"f_5839:posixunix_2escm",(void*)f_5839},
{"f_2856:posixunix_2escm",(void*)f_2856},
{"f_2858:posixunix_2escm",(void*)f_2858},
{"f_4641:posixunix_2escm",(void*)f_4641},
{"f_5852:posixunix_2escm",(void*)f_5852},
{"f_4501:posixunix_2escm",(void*)f_4501},
{"f_6805:posixunix_2escm",(void*)f_6805},
{"f_4097:posixunix_2escm",(void*)f_4097},
{"f_6803:posixunix_2escm",(void*)f_6803},
{"f_2865:posixunix_2escm",(void*)f_2865},
{"f_2867:posixunix_2escm",(void*)f_2867},
{"f_2838:posixunix_2escm",(void*)f_2838},
{"f_2831:posixunix_2escm",(void*)f_2831},
{"f_6862:posixunix_2escm",(void*)f_6862},
{"f_2847:posixunix_2escm",(void*)f_2847},
{"f_2849:posixunix_2escm",(void*)f_2849},
{"f_4696:posixunix_2escm",(void*)f_4696},
{"f_4691:posixunix_2escm",(void*)f_4691},
{"f_2840:posixunix_2escm",(void*)f_2840},
{"f_3655:posixunix_2escm",(void*)f_3655},
{"f_5822:posixunix_2escm",(void*)f_5822},
{"f_6857:posixunix_2escm",(void*)f_6857},
{"f_4687:posixunix_2escm",(void*)f_4687},
{"f_6449:posixunix_2escm",(void*)f_6449},
{"f_6443:posixunix_2escm",(void*)f_6443},
{"f_3204:posixunix_2escm",(void*)f_3204},
{"f_7866:posixunix_2escm",(void*)f_7866},
{"f_7394:posixunix_2escm",(void*)f_7394},
{"f_4911:posixunix_2escm",(void*)f_4911},
{"f_4917:posixunix_2escm",(void*)f_4917},
{"f_5779:posixunix_2escm",(void*)f_5779},
{"f_7858:posixunix_2escm",(void*)f_7858},
{"f_7382:posixunix_2escm",(void*)f_7382},
{"f_7385:posixunix_2escm",(void*)f_7385},
{"f_3646:posixunix_2escm",(void*)f_3646},
{"f_7855:posixunix_2escm",(void*)f_7855},
{"f_5772:posixunix_2escm",(void*)f_5772},
{"f_4318:posixunix_2escm",(void*)f_4318},
{"f_3690:posixunix_2escm",(void*)f_3690},
{"f_7849:posixunix_2escm",(void*)f_7849},
{"f_3694:posixunix_2escm",(void*)f_3694},
{"f_7841:posixunix_2escm",(void*)f_7841},
{"f_6418:posixunix_2escm",(void*)f_6418},
{"f_3234:posixunix_2escm",(void*)f_3234},
{"f_7838:posixunix_2escm",(void*)f_7838},
{"f_7364:posixunix_2escm",(void*)f_7364},
{"f_7362:posixunix_2escm",(void*)f_7362},
{"f_7832:posixunix_2escm",(void*)f_7832},
{"f_4109:posixunix_2escm",(void*)f_4109},
{"f_4330:posixunix_2escm",(void*)f_4330},
{"f_4339:posixunix_2escm",(void*)f_4339},
{"f_4105:posixunix_2escm",(void*)f_4105},
{"f_7821:posixunix_2escm",(void*)f_7821},
{"f_7824:posixunix_2escm",(void*)f_7824},
{"f_5781:posixunix_2escm",(void*)f_5781},
{"f_3731:posixunix_2escm",(void*)f_3731},
{"f_4361:posixunix_2escm",(void*)f_4361},
{"f_4367:posixunix_2escm",(void*)f_4367},
{"f_7815:posixunix_2escm",(void*)f_7815},
{"f_4357:posixunix_2escm",(void*)f_4357},
{"f_3264:posixunix_2escm",(void*)f_3264},
{"f_7807:posixunix_2escm",(void*)f_7807},
{"f_7804:posixunix_2escm",(void*)f_7804},
{"f_3711:posixunix_2escm",(void*)f_3711},
{"f_4976:posixunix_2escm",(void*)f_4976},
{"f_3717:posixunix_2escm",(void*)f_3717},
{"f_4971:posixunix_2escm",(void*)f_4971},
{"f_7698:posixunix_2escm",(void*)f_7698},
{"f_3724:posixunix_2escm",(void*)f_3724},
{"f_3779:posixunix_2escm",(void*)f_3779},
{"f_3700:posixunix_2escm",(void*)f_3700},
{"f_3705:posixunix_2escm",(void*)f_3705},
{"f_7313:posixunix_2escm",(void*)f_7313},
{"f_7309:posixunix_2escm",(void*)f_7309},
{"f_6875:posixunix_2escm",(void*)f_6875},
{"f_5021:posixunix_2escm",(void*)f_5021},
{"f_5024:posixunix_2escm",(void*)f_5024},
{"f_5027:posixunix_2escm",(void*)f_5027},
{"f_3956:posixunix_2escm",(void*)f_3956},
{"f_3954:posixunix_2escm",(void*)f_3954},
{"f_6886:posixunix_2escm",(void*)f_6886},
{"f_6882:posixunix_2escm",(void*)f_6882},
{"f_5015:posixunix_2escm",(void*)f_5015},
{"f_3965:posixunix_2escm",(void*)f_3965},
{"f_6891:posixunix_2escm",(void*)f_6891},
{"f_6888:posixunix_2escm",(void*)f_6888},
{"f_5043:posixunix_2escm",(void*)f_5043},
{"f_5018:posixunix_2escm",(void*)f_5018},
{"f_6899:posixunix_2escm",(void*)f_6899},
{"f_5035:posixunix_2escm",(void*)f_5035},
{"f_3941:posixunix_2escm",(void*)f_3941},
{"f_3945:posixunix_2escm",(void*)f_3945},
{"f_2879:posixunix_2escm",(void*)f_2879},
{"f_2874:posixunix_2escm",(void*)f_2874},
{"f_6084:posixunix_2escm",(void*)f_6084},
{"f_2886:posixunix_2escm",(void*)f_2886},
{"f_6133:posixunix_2escm",(void*)f_6133},
{"f_3391:posixunix_2escm",(void*)f_3391},
{"f_7043:posixunix_2escm",(void*)f_7043},
{"f_7047:posixunix_2escm",(void*)f_7047},
{"f_7049:posixunix_2escm",(void*)f_7049},
{"f_4287:posixunix_2escm",(void*)f_4287},
{"f_6126:posixunix_2escm",(void*)f_6126},
{"f_7032:posixunix_2escm",(void*)f_7032},
{"f_7035:posixunix_2escm",(void*)f_7035},
{"f_7037:posixunix_2escm",(void*)f_7037},
{"f_4275:posixunix_2escm",(void*)f_4275},
{"f_5560:posixunix_2escm",(void*)f_5560},
{"f_5562:posixunix_2escm",(void*)f_5562},
{"f_3374:posixunix_2escm",(void*)f_3374},
{"f_7028:posixunix_2escm",(void*)f_7028},
{"f_3372:posixunix_2escm",(void*)f_3372},
{"f_6146:posixunix_2escm",(void*)f_6146},
{"f_6145:posixunix_2escm",(void*)f_6145},
{"f_7013:posixunix_2escm",(void*)f_7013},
{"f_2813:posixunix_2escm",(void*)f_2813},
{"f_2829:posixunix_2escm",(void*)f_2829},
{"f_7009:posixunix_2escm",(void*)f_7009},
{"f_2820:posixunix_2escm",(void*)f_2820},
{"f_2822:posixunix_2escm",(void*)f_2822},
{"f_7116:posixunix_2escm",(void*)f_7116},
{"f_7114:posixunix_2escm",(void*)f_7114},
{"f_7104:posixunix_2escm",(void*)f_7104},
{"f_5520:posixunix_2escm",(void*)f_5520},
{"f_5529:posixunix_2escm",(void*)f_5529},
{"f_5525:posixunix_2escm",(void*)f_5525},
{"f_5211:posixunix_2escm",(void*)f_5211},
{"f_5216:posixunix_2escm",(void*)f_5216},
{"f_5512:posixunix_2escm",(void*)f_5512},
{"f_6093:posixunix_2escm",(void*)f_6093},
{"f_6401:posixunix_2escm",(void*)f_6401},
{"f_5202:posixunix_2escm",(void*)f_5202},
{"f_5207:posixunix_2escm",(void*)f_5207},
{"f_4296:posixunix_2escm",(void*)f_4296},
{"f_3765:posixunix_2escm",(void*)f_3765},
{"f_5542:posixunix_2escm",(void*)f_5542},
{"f_4219:posixunix_2escm",(void*)f_4219},
{"f_3319:posixunix_2escm",(void*)f_3319},
{"f_3315:posixunix_2escm",(void*)f_3315},
{"f_6097:posixunix_2escm",(void*)f_6097},
{"f_5177:posixunix_2escm",(void*)f_5177},
{"f_6099:posixunix_2escm",(void*)f_6099},
{"f_4200:posixunix_2escm",(void*)f_4200},
{"f_3328:posixunix_2escm",(void*)f_3328},
{"f_3325:posixunix_2escm",(void*)f_3325},
{"f_5163:posixunix_2escm",(void*)f_5163},
{"f_3742:posixunix_2escm",(void*)f_3742},
{"f_3740:posixunix_2escm",(void*)f_3740},
{"f_6054:posixunix_2escm",(void*)f_6054},
{"f_3300:posixunix_2escm",(void*)f_3300},
{"f_5185:posixunix_2escm",(void*)f_5185},
{"f_5335:posixunix_2escm",(void*)f_5335},
{"f_6743:posixunix_2escm",(void*)f_6743},
{"f_6749:posixunix_2escm",(void*)f_6749},
{"f_5503:posixunix_2escm",(void*)f_5503},
{"f_6361:posixunix_2escm",(void*)f_6361},
{"f_6365:posixunix_2escm",(void*)f_6365},
{"f_3352:posixunix_2escm",(void*)f_3352},
{"f_3999:posixunix_2escm",(void*)f_3999},
{"f_4245:posixunix_2escm",(void*)f_4245},
{"f_3997:posixunix_2escm",(void*)f_3997},
{"f_6737:posixunix_2escm",(void*)f_6737},
{"f_3995:posixunix_2escm",(void*)f_3995},
{"f_3366:posixunix_2escm",(void*)f_3366},
{"f_3364:posixunix_2escm",(void*)f_3364},
{"f_6377:posixunix_2escm",(void*)f_6377},
{"f_5354:posixunix_2escm",(void*)f_5354},
{"f_3781:posixunix_2escm",(void*)f_3781},
{"f_4234:posixunix_2escm",(void*)f_4234},
{"f_6762:posixunix_2escm",(void*)f_6762},
{"f_4236:posixunix_2escm",(void*)f_4236},
{"f_6769:posixunix_2escm",(void*)f_6769},
{"f_5359:posixunix_2escm",(void*)f_5359},
{"f_5357:posixunix_2escm",(void*)f_5357},
{"f_3334:posixunix_2escm",(void*)f_3334},
{"f_3787:posixunix_2escm",(void*)f_3787},
{"f_6381:posixunix_2escm",(void*)f_6381},
{"f_3971:posixunix_2escm",(void*)f_3971},
{"f_5004:posixunix_2escm",(void*)f_5004},
{"f_6755:posixunix_2escm",(void*)f_6755},
{"f_4225:posixunix_2escm",(void*)f_4225},
{"f_6393:posixunix_2escm",(void*)f_6393},
{"f_6397:posixunix_2escm",(void*)f_6397},
{"f_3987:posixunix_2escm",(void*)f_3987},
{"f_6704:posixunix_2escm",(void*)f_6704},
{"f_7198:posixunix_2escm",(void*)f_7198},
{"f_7191:posixunix_2escm",(void*)f_7191},
{"f_2599:posixunix_2escm",(void*)f_2599},
{"f_7185:posixunix_2escm",(void*)f_7185},
{"f_7183:posixunix_2escm",(void*)f_7183},
{"f_6728:posixunix_2escm",(void*)f_6728},
{"f_3510:posixunix_2escm",(void*)f_3510},
{"f_3512:posixunix_2escm",(void*)f_3512},
{"f_3513:posixunix_2escm",(void*)f_3513},
{"f_7173:posixunix_2escm",(void*)f_7173},
{"f_7352:posixunix_2escm",(void*)f_7352},
{"f_7358:posixunix_2escm",(void*)f_7358},
{"f_7171:posixunix_2escm",(void*)f_7171},
{"f_6716:posixunix_2escm",(void*)f_6716},
{"f_7343:posixunix_2escm",(void*)f_7343},
{"f_7169:posixunix_2escm",(void*)f_7169},
{"f_7347:posixunix_2escm",(void*)f_7347},
{"f_7160:posixunix_2escm",(void*)f_7160},
{"f_3911:posixunix_2escm",(void*)f_3911},
{"f_7324:posixunix_2escm",(void*)f_7324},
{"f_3922:posixunix_2escm",(void*)f_3922},
{"f_7320:posixunix_2escm",(void*)f_7320},
{"f_3553:posixunix_2escm",(void*)f_3553},
{"f_3551:posixunix_2escm",(void*)f_3551},
{"f_3558:posixunix_2escm",(void*)f_3558},
{"f_3524:posixunix_2escm",(void*)f_3524},
{"f_5460:posixunix_2escm",(void*)f_5460},
{"f_3900:posixunix_2escm",(void*)f_3900},
{"f_3533:posixunix_2escm",(void*)f_3533},
{"f_5472:posixunix_2escm",(void*)f_5472},
{"f_5473:posixunix_2escm",(void*)f_5473},
{"f_3539:posixunix_2escm",(void*)f_3539},
{"f_3502:posixunix_2escm",(void*)f_3502},
{"f_5463:posixunix_2escm",(void*)f_5463},
{"f_5466:posixunix_2escm",(void*)f_5466},
{"f_5469:posixunix_2escm",(void*)f_5469},
{"f_5497:posixunix_2escm",(void*)f_5497},
{"f_5483:posixunix_2escm",(void*)f_5483},
{"toplevel:posixunix_2escm",(void*)C_posix_toplevel},
{"f_3095:posixunix_2escm",(void*)f_3095},
{"f_6698:posixunix_2escm",(void*)f_6698},
{"f_7474:posixunix_2escm",(void*)f_7474},
{"f_7478:posixunix_2escm",(void*)f_7478},
{"f_5231:posixunix_2escm",(void*)f_5231},
{"f_7155:posixunix_2escm",(void*)f_7155},
{"f_7152:posixunix_2escm",(void*)f_7152},
{"f_7465:posixunix_2escm",(void*)f_7465},
{"f_7466:posixunix_2escm",(void*)f_7466},
{"f_3062:posixunix_2escm",(void*)f_3062},
{"f_6686:posixunix_2escm",(void*)f_6686},
{"f_3055:posixunix_2escm",(void*)f_3055},
{"f_5259:posixunix_2escm",(void*)f_5259},
{"f_7134:posixunix_2escm",(void*)f_7134},
{"f_7136:posixunix_2escm",(void*)f_7136},
{"f_3066:posixunix_2escm",(void*)f_3066},
{"f_3154:posixunix_2escm",(void*)f_3154},
{"f_3156:posixunix_2escm",(void*)f_3156},
{"f_3158:posixunix_2escm",(void*)f_3158},
{"f_3472:posixunix_2escm",(void*)f_3472},
{"f_4191:posixunix_2escm",(void*)f_4191},
{"f_3469:posixunix_2escm",(void*)f_3469},
{"f_3080:posixunix_2escm",(void*)f_3080},
{"f_7124:posixunix_2escm",(void*)f_7124},
{"f_3484:posixunix_2escm",(void*)f_3484},
{"f_3478:posixunix_2escm",(void*)f_3478},
{"f_3161:posixunix_2escm",(void*)f_3161},
{"f_3086:posixunix_2escm",(void*)f_3086},
{"f_3085:posixunix_2escm",(void*)f_3085},
{"f_5733:posixunix_2escm",(void*)f_5733},
{"f_3490:posixunix_2escm",(void*)f_3490},
{"f_6958:posixunix_2escm",(void*)f_6958},
{"f_3022:posixunix_2escm",(void*)f_3022},
{"f_7630:posixunix_2escm",(void*)f_7630},
{"f_7635:posixunix_2escm",(void*)f_7635},
{"f_7494:posixunix_2escm",(void*)f_7494},
{"f_7496:posixunix_2escm",(void*)f_7496},
{"f_7498:posixunix_2escm",(void*)f_7498},
{"f_6947:posixunix_2escm",(void*)f_6947},
{"f_7669:posixunix_2escm",(void*)f_7669},
{"f_6945:posixunix_2escm",(void*)f_6945},
{"f_6941:posixunix_2escm",(void*)f_6941},
{"f_7490:posixunix_2escm",(void*)f_7490},
{"f_3496:posixunix_2escm",(void*)f_3496},
{"f_5752:posixunix_2escm",(void*)f_5752},
{"f_3433:posixunix_2escm",(void*)f_3433},
{"f_3435:posixunix_2escm",(void*)f_3435},
{"f_2955:posixunix_2escm",(void*)f_2955},
{"f_2959:posixunix_2escm",(void*)f_2959},
{"f_3195:posixunix_2escm",(void*)f_3195},
{"f_3037:posixunix_2escm",(void*)f_3037},
{"f_3035:posixunix_2escm",(void*)f_3035},
{"f_5744:posixunix_2escm",(void*)f_5744},
{"f_6979:posixunix_2escm",(void*)f_6979},
{"f_7648:posixunix_2escm",(void*)f_7648},
{"f_6962:posixunix_2escm",(void*)f_6962},
{"f_3446:posixunix_2escm",(void*)f_3446},
{"f_3440:posixunix_2escm",(void*)f_3440},
{"f_2942:posixunix_2escm",(void*)f_2942},
{"f_2940:posixunix_2escm",(void*)f_2940},
{"f_3452:posixunix_2escm",(void*)f_3452},
{"f_3449:posixunix_2escm",(void*)f_3449},
{"f_5764:posixunix_2escm",(void*)f_5764},
{"f_7628:posixunix_2escm",(void*)f_7628},
{"f_3460:posixunix_2escm",(void*)f_3460},
{"f_5767:posixunix_2escm",(void*)f_5767},
{"f_3458:posixunix_2escm",(void*)f_3458},
{"f_3564:posixunix_2escm",(void*)f_3564},
{"f_3561:posixunix_2escm",(void*)f_3561},
{"f_3567:posixunix_2escm",(void*)f_3567},
{"f_7654:posixunix_2escm",(void*)f_7654},
{"f_5718:posixunix_2escm",(void*)f_5718},
{"f_7652:posixunix_2escm",(void*)f_7652},
{"f_3572:posixunix_2escm",(void*)f_3572},
{"f_3570:posixunix_2escm",(void*)f_3570},
{"f_3579:posixunix_2escm",(void*)f_3579},
{"f_3577:posixunix_2escm",(void*)f_3577},
{"f_7606:posixunix_2escm",(void*)f_7606},
{"f_3543:posixunix_2escm",(void*)f_3543},
{"f_3545:posixunix_2escm",(void*)f_3545},
{"f_3547:posixunix_2escm",(void*)f_3547},
{"f_3549:posixunix_2escm",(void*)f_3549},
{"f_7289:posixunix_2escm",(void*)f_7289},
{"f_7737:posixunix_2escm",(void*)f_7737},
{"f_2953:posixunix_2escm",(void*)f_2953},
{"f_5722:posixunix_2escm",(void*)f_5722},
{"f_5720:posixunix_2escm",(void*)f_5720},
{"f_3144:posixunix_2escm",(void*)f_3144},
{"f_5689:posixunix_2escm",(void*)f_5689},
{"f_5684:posixunix_2escm",(void*)f_5684},
{"f_5727:posixunix_2escm",(void*)f_5727},
{"f_7273:posixunix_2escm",(void*)f_7273},
{"f_5725:posixunix_2escm",(void*)f_5725},
{"f_3140:posixunix_2escm",(void*)f_3140},
{"f_5393:posixunix_2escm",(void*)f_5393},
{"f_5682:posixunix_2escm",(void*)f_5682},
{"f_6553:posixunix_2escm",(void*)f_6553},
{"f_6559:posixunix_2escm",(void*)f_6559},
{"f_7765:posixunix_2escm",(void*)f_7765},
{"f_7615:posixunix_2escm",(void*)f_7615},
{"f_6161:posixunix_2escm",(void*)f_6161},
{"f_3111:posixunix_2escm",(void*)f_3111},
{"f_5385:posixunix_2escm",(void*)f_5385},
{"f_5383:posixunix_2escm",(void*)f_5383},
{"f_5380:posixunix_2escm",(void*)f_5380},
{"f_6544:posixunix_2escm",(void*)f_6544},
{"f_6542:posixunix_2escm",(void*)f_6542},
{"f_6170:posixunix_2escm",(void*)f_6170},
{"f_3120:posixunix_2escm",(void*)f_3120},
{"f_7749:posixunix_2escm",(void*)f_7749},
{"f_3584:posixunix_2escm",(void*)f_3584},
{"f_7742:posixunix_2escm",(void*)f_7742},
{"f_3175:posixunix_2escm",(void*)f_3175},
{"f_3586:posixunix_2escm",(void*)f_3586},
{"f_6563:posixunix_2escm",(void*)f_6563},
{"f_3185:posixunix_2escm",(void*)f_3185},
{"f_3189:posixunix_2escm",(void*)f_3189},
{"f_6519:posixunix_2escm",(void*)f_6519},
{"f_6535:posixunix_2escm",(void*)f_6535},
{"f_6533:posixunix_2escm",(void*)f_6533},
{"f_6530:posixunix_2escm",(void*)f_6530},
{"f_2684:posixunix_2escm",(void*)f_2684},
{"f_6521:posixunix_2escm",(void*)f_6521},
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
S|  for-each		7
o|eliminated procedure checks: 275 
o|specializations:
o|  1 (negative? fixnum)
o|  4 (##sys#check-list (or pair list) *)
o|  6 (cdr pair)
o|  1 (string-ref string fixnum)
o|  4 (make-string fixnum)
o|  11 (eqv? * (not float))
o|  14 (car pair)
o|dropping redundant toplevel assignment: process 
o|dropping redundant toplevel assignment: process* 
o|safe globals: (file-stat ##sys#stat ##sys#posix-error posix-error) 
o|Removed `not' forms: 7 
o|inlining procedure: k2641 
o|inlining procedure: k2641 
o|inlining procedure: k2656 
o|inlining procedure: k2656 
o|inlining procedure: k2740 
o|inlining procedure: k2752 
o|inlining procedure: k2752 
o|inlining procedure: k2764 
o|inlining procedure: k2764 
o|inlining procedure: k2776 
o|inlining procedure: k2776 
o|inlining procedure: k2740 
o|inlining procedure: k2885 
o|contracted procedure: k2900 
o|inlining procedure: k2897 
o|inlining procedure: k2897 
o|substituted constant variable: a2910 
o|inlining procedure: k2885 
o|inlining procedure: k2918 
o|inlining procedure: k2918 
o|inlining procedure: k2960 
o|inlining procedure: k2960 
o|inlining procedure: k2978 
o|inlining procedure: k2978 
o|inlining procedure: k3006 
o|inlining procedure: k3006 
o|inlining procedure: k3028 
o|inlining procedure: k3028 
o|substituted constant variable: a3047 
o|inlining procedure: k3067 
o|inlining procedure: k3067 
o|inlining procedure: k3088 
o|propagated global variable: g2752768009 delete-file 
o|inlining procedure: k3088 
o|inlining procedure: k3081 
o|inlining procedure: k3114 
o|inlining procedure: k3114 
o|inlining procedure: k3081 
o|inlining procedure: k3162 
o|inlining procedure: k3162 
o|inlining procedure: k3178 
o|inlining procedure: k3178 
o|inlining procedure: k3210 
o|inlining procedure: k3210 
o|substituted constant variable: a3231 
o|substituted constant variable: a3235 
o|inlining procedure: k3273 
o|inlining procedure: k3273 
o|inlining procedure: k3303 
o|inlining procedure: k3303 
o|inlining procedure: k3347 
o|inlining procedure: k3347 
o|inlining procedure: k3354 
o|inlining procedure: k3354 
o|contracted procedure: "(posix-common.scm:431) find-files" 
o|inlining procedure: k3377 
o|inlining procedure: k3377 
o|inlining procedure: k3392 
o|inlining procedure: k3392 
o|inlining procedure: k3411 
o|inlining procedure: k3411 
o|inlining procedure: k3419 
o|inlining procedure: k3448 
o|inlining procedure: k3448 
o|inlining procedure: k3419 
o|inlining procedure: k3468 
o|inlining procedure: k3468 
o|inlining procedure: k3485 
o|inlining procedure: k3485 
o|inlining procedure: k3504 
o|inlining procedure: k3504 
o|contracted procedure: k3521 
o|inlining procedure: k3527 
o|inlining procedure: k3527 
o|inlining procedure: k3591 
o|inlining procedure: k3591 
o|inlining procedure: k3665 
o|inlining procedure: k3665 
o|inlining procedure: k3695 
o|inlining procedure: k3695 
o|inlining procedure: k3725 
o|inlining procedure: k3725 
o|inlining procedure: k3814 
o|inlining procedure: k3814 
o|inlining procedure: k3923 
o|inlining procedure: k3923 
o|inlining procedure: k3955 
o|inlining procedure: k3955 
o|inlining procedure: k3976 
o|inlining procedure: k3976 
o|inlining procedure: k3998 
o|inlining procedure: k3998 
o|inlining procedure: k4035 
o|inlining procedure: k4035 
o|inlining procedure: k4126 
o|inlining procedure: k4126 
o|inlining procedure: k4148 
o|inlining procedure: k4148 
o|inlining procedure: k4163 
o|inlining procedure: k4176 
o|inlining procedure: k4176 
o|inlining procedure: k4194 
o|inlining procedure: k4194 
o|inlining procedure: k4163 
o|inlining procedure: k4210 
o|inlining procedure: k4221 
o|inlining procedure: k4221 
o|inlining procedure: k4210 
o|inlining procedure: k4239 
o|inlining procedure: k4239 
o|inlining procedure: k4263 
o|inlining procedure: k4263 
o|inlining procedure: k4290 
o|inlining procedure: k4290 
o|inlining procedure: k4306 
o|inlining procedure: k4306 
o|inlining procedure: k4333 
o|inlining procedure: k4333 
o|inlining procedure: k4368 
o|inlining procedure: k4368 
o|inlining procedure: k4380 
o|inlining procedure: k4380 
o|inlining procedure: k4389 
o|inlining procedure: k4389 
o|inlining procedure: k4421 
o|inlining procedure: k4421 
o|inlining procedure: k4450 
o|inlining procedure: k4450 
o|inlining procedure: k4441 
o|inlining procedure: k4441 
o|inlining procedure: k4482 
o|inlining procedure: k4482 
o|inlining procedure: k4490 
o|inlining procedure: k4490 
o|inlining procedure: k4525 
o|inlining procedure: k4525 
o|inlining procedure: k4543 
o|inlining procedure: k4543 
o|inlining procedure: k4556 
o|inlining procedure: k4556 
o|inlining procedure: k4574 
o|inlining procedure: k4574 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: "(posixunix.scm:815) badmode929" 
o|substituted constant variable: a4618 
o|substituted constant variable: a4620 
o|inlining procedure: k4633 
o|inlining procedure: k4633 
o|inlining procedure: "(posixunix.scm:826) badmode929" 
o|substituted constant variable: a4655 
o|substituted constant variable: a4657 
o|inlining procedure: k4664 
o|inlining procedure: k4664 
o|inlining procedure: k4678 
o|inlining procedure: k4678 
o|inlining procedure: k4798 
o|inlining procedure: k4798 
o|inlining procedure: k4852 
o|inlining procedure: k4852 
o|inlining procedure: k4866 
o|inlining procedure: k4866 
o|inlining procedure: k4892 
o|inlining procedure: k4892 
o|inlining procedure: k4905 
o|inlining procedure: k4905 
o|inlining procedure: k4922 
o|inlining procedure: k4922 
o|inlining procedure: k4938 
o|inlining procedure: k4938 
o|inlining procedure: k5005 
o|inlining procedure: k5005 
o|inlining procedure: k5086 
o|inlining procedure: k5109 
o|inlining procedure: k5109 
o|contracted procedure: "(posixunix.scm:1094) group-member" 
o|inlining procedure: k5086 
o|inlining procedure: k5166 
o|inlining procedure: k5166 
o|contracted procedure: "(posixunix.scm:1117) _get-groups" 
o|inlining procedure: "(posixunix.scm:1115) _ensure-groups" 
o|inlining procedure: k5219 
o|inlining procedure: k5219 
o|inlining procedure: "(posixunix.scm:1126) _ensure-groups" 
o|inlining procedure: k5281 
o|inlining procedure: k5281 
o|inlining procedure: k5342 
o|inlining procedure: k5342 
o|inlining procedure: k5368 
o|inlining procedure: k5368 
o|inlining procedure: k5392 
o|inlining procedure: k5392 
o|inlining procedure: k5426 
o|inlining procedure: k5426 
o|inlining procedure: k5448 
o|inlining procedure: k5448 
o|inlining procedure: k5484 
o|inlining procedure: k5484 
o|inlining procedure: k5527 
o|inlining procedure: k5527 
o|inlining procedure: k5549 
o|inlining procedure: k5549 
o|inlining procedure: k5591 
o|inlining procedure: k5591 
o|inlining procedure: k5616 
o|inlining procedure: k5616 
o|inlining procedure: k5623 
o|inlining procedure: k5635 
o|inlining procedure: k5656 
o|inlining procedure: k5656 
o|inlining procedure: k5635 
o|inlining procedure: k5677 
o|inlining procedure: k5677 
o|inlining procedure: k5695 
o|inlining procedure: k5695 
o|inlining procedure: k5623 
o|inlining procedure: k5737 
o|inlining procedure: k5737 
o|inlining procedure: k5746 
o|inlining procedure: k5746 
o|inlining procedure: k5784 
o|inlining procedure: k5784 
o|inlining procedure: k5823 
o|inlining procedure: k5823 
o|inlining procedure: k5854 
o|inlining procedure: k5854 
o|inlining procedure: k5884 
o|inlining procedure: k5884 
o|inlining procedure: k5891 
o|inlining procedure: k5891 
o|inlining procedure: k5903 
o|inlining procedure: k5920 
o|inlining procedure: k5920 
o|inlining procedure: k5903 
o|inlining procedure: k5940 
o|inlining procedure: k5940 
o|inlining procedure: k6039 
o|inlining procedure: k6058 
o|inlining procedure: k6058 
o|inlining procedure: k6039 
o|inlining procedure: k6108 
o|inlining procedure: k6108 
o|inlining procedure: k6136 
o|inlining procedure: k6136 
o|inlining procedure: k6149 
o|inlining procedure: k6164 
o|inlining procedure: k6164 
o|inlining procedure: k6149 
o|inlining procedure: k6257 
o|inlining procedure: k6257 
o|inlining procedure: k6267 
o|inlining procedure: k6267 
o|inlining procedure: k6366 
o|inlining procedure: k6366 
o|inlining procedure: k6382 
o|inlining procedure: k6382 
o|inlining procedure: k6403 
o|inlining procedure: k6403 
o|inlining procedure: k6398 
o|inlining procedure: k6398 
o|inlining procedure: k6429 
o|inlining procedure: k6429 
o|inlining procedure: k6452 
o|inlining procedure: k6452 
o|inlining procedure: k6487 
o|inlining procedure: k6487 
o|inlining procedure: k6499 
o|inlining procedure: k6499 
o|substituted constant variable: a6512 
o|substituted constant variable: a6514 
o|substituted constant variable: a6516 
o|inlining procedure: k6564 
o|inlining procedure: k6574 
o|inlining procedure: k6574 
o|inlining procedure: k6564 
o|inlining procedure: k6655 
o|inlining procedure: k6655 
o|contracted procedure: k6679 
o|inlining procedure: k6705 
o|inlining procedure: k6705 
o|inlining procedure: k6763 
o|inlining procedure: k6763 
o|inlining procedure: k6839 
o|inlining procedure: k6839 
o|inlining procedure: k6868 
o|inlining procedure: k6868 
o|inlining procedure: k6894 
o|inlining procedure: k6894 
o|inlining procedure: k6904 
o|inlining procedure: k6904 
o|inlining procedure: k6915 
o|inlining procedure: k6915 
o|substituted constant variable: a6931 
o|substituted constant variable: a6933 
o|substituted constant variable: a6935 
o|inlining procedure: k6948 
o|inlining procedure: k6948 
o|inlining procedure: k6963 
o|inlining procedure: k6963 
o|inlining procedure: k7014 
o|inlining procedure: k7014 
o|inlining procedure: k7048 
o|inlining procedure: k7048 
o|inlining procedure: k7061 
o|inlining procedure: k7061 
o|inlining procedure: k7163 
o|inlining procedure: k7201 
o|inlining procedure: k7201 
o|inlining procedure: k7163 
o|inlining procedure: k7279 
o|inlining procedure: k7279 
o|inlining procedure: k7297 
o|inlining procedure: k7297 
o|inlining procedure: k7329 
o|inlining procedure: k7329 
o|inlining procedure: k7348 
o|inlining procedure: k7348 
o|inlining procedure: k7365 
o|inlining procedure: k7365 
o|inlining procedure: k7396 
o|inlining procedure: k7396 
o|inlining procedure: k7412 
o|inlining procedure: k7429 
o|inlining procedure: k7429 
o|inlining procedure: k7412 
o|inlining procedure: k7442 
o|inlining procedure: k7442 
o|inlining procedure: k7459 
o|inlining procedure: k7459 
o|inlining procedure: k7468 
o|inlining procedure: k7468 
o|inlining procedure: k7480 
o|inlining procedure: k7480 
o|inlining procedure: k7530 
o|inlining procedure: k7530 
o|inlining procedure: k7540 
o|inlining procedure: k7540 
o|inlining procedure: k7609 
o|inlining procedure: k7609 
o|inlining procedure: k7740 
o|inlining procedure: k7740 
o|inlining procedure: k7754 
o|inlining procedure: k7754 
o|inlining procedure: k7774 
o|inlining procedure: k7774 
o|inlining procedure: k7791 
o|inlining procedure: k7791 
o|inlining procedure: k7809 
o|inlining procedure: k7809 
o|inlining procedure: k7826 
o|inlining procedure: k7826 
o|inlining procedure: k7843 
o|inlining procedure: k7843 
o|inlining procedure: k7860 
o|inlining procedure: k7860 
o|inlining procedure: k7876 
o|inlining procedure: k7876 
o|inlining procedure: k7887 
o|inlining procedure: k7887 
o|inlining procedure: k7896 
o|inlining procedure: k7896 
o|inlining procedure: k7928 
o|inlining procedure: k7928 
o|inlining procedure: k7957 
o|inlining procedure: k7957 
o|inlining procedure: k7969 
o|inlining procedure: k7969 
o|replaced variables: 707 
o|removed binding forms: 334 
o|substituted constant variable: r26427982 
o|substituted constant variable: r27537986 
o|substituted constant variable: r27657988 
o|substituted constant variable: r27777990 
o|substituted constant variable: r27417992 
o|inlining procedure: k2885 
o|substituted constant variable: r28987995 
o|inlining procedure: k2885 
o|inlining procedure: k2885 
o|inlining procedure: k3088 
o|inlining procedure: k3088 
o|propagated global variable: g2752768388 delete-file 
o|converted assignments to bindings: (rmdir257) 
o|substituted constant variable: r31798023 
o|substituted constant variable: f_32728027 
o|substituted constant variable: r33488033 
o|substituted constant variable: r33488033 
o|substituted constant variable: r33558037 
o|substituted constant variable: r33558037 
o|substituted constant variable: a35038053 
o|substituted constant variable: a35038054 
o|substituted constant variable: loc371 
o|substituted constant variable: a41478085 
o|substituted constant variable: a41478086 
o|inlining procedure: k4163 
o|substituted constant variable: a41628092 
o|substituted constant variable: r43818110 
o|substituted constant variable: f_45558128 
o|removed side-effect free assignment to unused variable: badmode929 
o|inlining procedure: k4596 
o|inlining procedure: k4633 
o|substituted constant variable: r50068174 
o|substituted constant variable: r51108177 
o|substituted constant variable: r50878178 
o|removed side-effect free assignment to unused variable: _ensure-groups 
o|substituted constant variable: f_51658179 
o|substituted constant variable: r55288209 
o|substituted constant variable: r55288209 
o|substituted constant variable: f_56158215 
o|inlining procedure: k5688 
o|inlining procedure: k5688 
o|inlining procedure: k5751 
o|substituted constant variable: r58858238 
o|substituted constant variable: f_59398245 
o|inlining procedure: k6113 
o|inlining procedure: k6267 
o|substituted constant variable: f_64028267 
o|substituted constant variable: r64888275 
o|substituted constant variable: r65658282 
o|substituted constant variable: a68678298 
o|substituted constant variable: a69038302 
o|folded constant expression: (fx< (quote -1) (quote 0)) 
o|substituted constant variable: r69498305 
o|inlining procedure: k7297 
o|inlining procedure: k7297 
o|substituted constant variable: r73498326 
o|substituted constant variable: f_74418336 
o|substituted constant variable: f_74588338 
o|substituted constant variable: f_74798342 
o|substituted constant variable: r75318344 
o|substituted constant variable: r75418346 
o|substituted constant variable: r77418351 
o|substituted constant variable: r77418351 
o|converted assignments to bindings: (check1258) 
o|substituted constant variable: r78888370 
o|substituted constant variable: r79588377 
o|substituted constant variable: r79588377 
o|simplifications: ((let . 2)) 
o|replaced variables: 30 
o|removed binding forms: 711 
o|substituted constant variable: a28848381 
o|substituted constant variable: a28848382 
o|substituted constant variable: a28848383 
o|inlining procedure: k3213 
o|inlining procedure: k3771 
o|inlining procedure: k3771 
o|inlining procedure: k4009 
o|inlining procedure: k4009 
o|inlining procedure: k4050 
o|inlining procedure: k4050 
o|inlining procedure: k5190 
o|inlining procedure: k5192 
o|inlining procedure: k5249 
o|inlining procedure: k5262 
o|inlining procedure: k5501 
o|inlining procedure: k6669 
o|inlining procedure: k6669 
o|inlining procedure: k6689 
o|inlining procedure: k7707 
o|inlining procedure: k7925 
o|inlining procedure: k7925 
o|replaced variables: 3 
o|removed binding forms: 91 
o|substituted constant variable: tmp3193218504 
o|substituted constant variable: tmp3193218504 
o|substituted constant variable: a37708515 
o|substituted constant variable: r40108518 
o|substituted constant variable: r40518520 
o|substituted constant variable: r52638544 
o|substituted constant variable: r55028548 
o|substituted constant variable: r66708564 
o|substituted constant variable: r66908565 
o|substituted constant variable: r79268579 
o|simplifications: ((let . 5)) 
o|removed binding forms: 15 
o|removed conditional forms: 5 
o|removed binding forms: 9 
o|simplifications: ((if . 78) (##core#call . 641)) 
o|  call simplifications:
o|    bitwise-ior	2
o|    <
o|    vector-ref	2
o|    make-vector
o|    ##sys#structure?
o|    ##sys#foreign-pointer-argument	4
o|    char=?
o|    fxior	2
o|    ##sys#check-structure	3
o|    ##sys#make-structure	3
o|    ##sys#setislot	3
o|    ##sys#foreign-string-argument	7
o|    length
o|    fx>=	4
o|    list	5
o|    values	18
o|    ##sys#fudge
o|    vector-set!	3
o|    fx-	11
o|    ##sys#foreign-integer-argument	6
o|    ##sys#check-number	8
o|    ##sys#check-vector
o|    ##sys#size	16
o|    member
o|    fx+	20
o|    ##sys#call-with-values	12
o|    string-ref
o|    fx>
o|    not	10
o|    cons	12
o|    ##sys#check-string	35
o|    ##sys#check-list	9
o|    fx=	30
o|    zero?
o|    ##sys#slot	40
o|    ##sys#check-exact	39
o|    ##sys#null-pointer?	4
o|    pair?	24
o|    eq?	41
o|    cdr	24
o|    ##sys#eqv?	13
o|    null?	65
o|    car	47
o|    vector	2
o|    fixnum?	15
o|    string?	3
o|    fx<	49
o|    apply	9
o|    ##sys#foreign-fixnum-argument	30
o|contracted procedure: k2618 
o|contracted procedure: k2644 
o|contracted procedure: k2653 
o|contracted procedure: k2659 
o|contracted procedure: k2688 
o|contracted procedure: k2680 
o|contracted procedure: k2806 
o|contracted procedure: k2732 
o|contracted procedure: k2800 
o|contracted procedure: k2734 
o|contracted procedure: k2794 
o|contracted procedure: k2736 
o|contracted procedure: k2788 
o|contracted procedure: k2738 
o|contracted procedure: k2749 
o|contracted procedure: k2755 
o|contracted procedure: k2761 
o|contracted procedure: k2767 
o|contracted procedure: k2773 
o|contracted procedure: k2779 
o|contracted procedure: k2785 
o|contracted procedure: k2887 
o|contracted procedure: k2894 
o|contracted procedure: k2920 
o|contracted procedure: k2932 
o|contracted procedure: k2945 
o|contracted procedure: k2996 
o|contracted procedure: k2963 
o|contracted procedure: k2975 
o|contracted procedure: k2980 
o|contracted procedure: k3002 
o|contracted procedure: k3008 
o|contracted procedure: k3014 
o|contracted procedure: k3017 
o|contracted procedure: k3019 
o|contracted procedure: k3048 
o|contracted procedure: k3025 
o|contracted procedure: k3133 
o|contracted procedure: k3058 
o|contracted procedure: k3070 
o|contracted procedure: k3077 
o|contracted procedure: k3102 
o|contracted procedure: k3116 
o|contracted procedure: k3125 
o|contracted procedure: k3128 
o|contracted procedure: k3248 
o|contracted procedure: k3145 
o|contracted procedure: k3242 
o|contracted procedure: k3147 
o|contracted procedure: k3236 
o|contracted procedure: k3149 
o|contracted procedure: k3151 
o|contracted procedure: k3165 
o|contracted procedure: k3181 
o|contracted procedure: k3186 
o|contracted procedure: k3205 
o|contracted procedure: k3208 
o|contracted procedure: k3221 
o|contracted procedure: k3213 
o|contracted procedure: k3227 
o|contracted procedure: k3254 
o|contracted procedure: k3275 
o|contracted procedure: k3278 
o|contracted procedure: k3305 
o|contracted procedure: k3312 
o|contracted procedure: k3330 
o|contracted procedure: k3344 
o|contracted procedure: k3361 
o|contracted procedure: k3379 
o|contracted procedure: k3382 
o|contracted procedure: k3384 
o|contracted procedure: k3395 
o|contracted procedure: k3404 
o|contracted procedure: k3429 
o|contracted procedure: k3506 
o|contracted procedure: k3530 
o|contracted procedure: k3589 
o|contracted procedure: k3601 
o|contracted procedure: k3594 
o|contracted procedure: k3610 
o|contracted procedure: k3615 
o|contracted procedure: k3631 
o|contracted procedure: k3636 
o|contracted procedure: k3653 
o|contracted procedure: k3661 
o|contracted procedure: k3675 
o|contracted procedure: k3672 
o|contracted procedure: k3680 
o|contracted procedure: k3758 
o|contracted procedure: k3720 
o|contracted procedure: k3728 
o|contracted procedure: k3753 
o|contracted procedure: k3750 
o|contracted procedure: k3768 
o|contracted procedure: k3843 
o|contracted procedure: k3790 
o|contracted procedure: k3837 
o|contracted procedure: k3792 
o|contracted procedure: k3831 
o|contracted procedure: k3794 
o|contracted procedure: k3825 
o|contracted procedure: k3796 
o|contracted procedure: k3798 
o|contracted procedure: k3801 
o|contracted procedure: k3816 
o|contracted procedure: k3854 
o|contracted procedure: k3861 
o|contracted procedure: k3903 
o|contracted procedure: k3906 
o|contracted procedure: k3909 
o|contracted procedure: k3932 
o|contracted procedure: k3914 
o|contracted procedure: k3917 
o|contracted procedure: k3919 
o|contracted procedure: k3926 
o|contracted procedure: k7906 
o|contracted procedure: k3939 
o|contracted procedure: k3946 
o|contracted procedure: k3948 
o|contracted procedure: k3950 
o|contracted procedure: k3957 
o|contracted procedure: k3966 
o|contracted procedure: k3974 
o|contracted procedure: k3979 
o|contracted procedure: k3990 
o|contracted procedure: k3992 
o|contracted procedure: k4003 
o|contracted procedure: k4015 
o|contracted procedure: k4027 
o|contracted procedure: k4033 
o|contracted procedure: k4037 
o|contracted procedure: k4043 
o|contracted procedure: k4060 
o|contracted procedure: k4064 
o|contracted procedure: k4075 
o|contracted procedure: k4077 
o|contracted procedure: k4087 
o|contracted procedure: k4092 
o|contracted procedure: k4095 
o|contracted procedure: k4100 
o|contracted procedure: k4103 
o|contracted procedure: k4114 
o|contracted procedure: k4119 
o|contracted procedure: k4129 
o|contracted procedure: k4138 
o|contracted procedure: k4153 
o|contracted procedure: k4145 
o|contracted procedure: k4150 
o|contracted procedure: k4168 
o|contracted procedure: k4182 
o|contracted procedure: k4185 
o|contracted procedure: k4196 
o|contracted procedure: k4205 
o|contracted procedure: k4208 
o|contracted procedure: k4213 
o|contracted procedure: k4227 
o|contracted procedure: k4230 
o|contracted procedure: k4241 
o|contracted procedure: k4250 
o|contracted procedure: k4253 
o|contracted procedure: k4255 
o|contracted procedure: k4258 
o|contracted procedure: k4261 
o|contracted procedure: k4266 
o|contracted procedure: k4273 
o|contracted procedure: k4277 
o|contracted procedure: k4292 
o|contracted procedure: k4301 
o|contracted procedure: k4304 
o|contracted procedure: k4309 
o|contracted procedure: k4316 
o|contracted procedure: k4320 
o|contracted procedure: k4335 
o|contracted procedure: k4344 
o|contracted procedure: k4347 
o|contracted procedure: k4349 
o|contracted procedure: k4362 
o|contracted procedure: k4364 
o|contracted procedure: k4387 
o|contracted procedure: k4383 
o|contracted procedure: k4392 
o|contracted procedure: k4402 
o|contracted procedure: k4511 
o|contracted procedure: k4414 
o|contracted procedure: k4417 
o|contracted procedure: k4509 
o|contracted procedure: k4423 
o|contracted procedure: k4452 
o|contracted procedure: k4492 
o|contracted procedure: k4521 
o|contracted procedure: k4527 
o|contracted procedure: k4541 
o|contracted procedure: k4545 
o|contracted procedure: k4558 
o|contracted procedure: k4576 
o|contracted procedure: k4588 
o|contracted procedure: k4599 
o|contracted procedure: k4608 
o|contracted procedure: k4625 
o|contracted procedure: k4636 
o|contracted procedure: k4645 
o|contracted procedure: k4666 
o|contracted procedure: k4680 
o|contracted procedure: k4803 
o|contracted procedure: k4836 
o|contracted procedure: k4843 
o|contracted procedure: k4847 
o|contracted procedure: k4855 
o|contracted procedure: k4868 
o|contracted procedure: k4877 
o|contracted procedure: k4880 
o|contracted procedure: k4894 
o|contracted procedure: k4897 
o|contracted procedure: k4905 
o|contracted procedure: k4914 
o|contracted procedure: k4920 
o|contracted procedure: k4925 
o|contracted procedure: k4936 
o|contracted procedure: k4941 
o|contracted procedure: k4972 
o|contracted procedure: k5036 
o|contracted procedure: k5000 
o|contracted procedure: k5008 
o|contracted procedure: k5028 
o|contracted procedure: k5031 
o|contracted procedure: k5129 
o|contracted procedure: k5081 
o|contracted procedure: k5089 
o|contracted procedure: k5119 
o|contracted procedure: k5075 
o|contracted procedure: k5121 
o|contracted procedure: k5124 
o|contracted procedure: k5168 
o|contracted procedure: k5179 
o|contracted procedure: k5140 
o|contracted procedure: k5181 
o|contracted procedure: k51478185 
o|contracted procedure: k5198 
o|contracted procedure: k5221 
o|contracted procedure: k5227 
o|contracted procedure: k5236 
o|contracted procedure: k5238 
o|contracted procedure: k5244 
o|contracted procedure: k5247 
o|contracted procedure: k5256 
o|contracted procedure: k51478192 
o|contracted procedure: k5266 
o|contracted procedure: k5272 
o|contracted procedure: k52668547 
o|contracted procedure: k5277 
o|contracted procedure: k5279 
o|contracted procedure: k5284 
o|contracted procedure: k5338 
o|contracted procedure: k5340 
o|contracted procedure: k5345 
o|contracted procedure: k5362 
o|contracted procedure: k5364 
o|contracted procedure: k5366 
o|contracted procedure: k5371 
o|contracted procedure: k5388 
o|contracted procedure: k5390 
o|contracted procedure: k5428 
o|contracted procedure: k5444 
o|contracted procedure: k5446 
o|contracted procedure: k5451 
o|contracted procedure: k5513 
o|contracted procedure: k5476 
o|contracted procedure: k5479 
o|contracted procedure: k5487 
o|contracted procedure: k5534 
o|contracted procedure: k5540 
o|contracted procedure: k5545 
o|contracted procedure: k5547 
o|contracted procedure: k5552 
o|contracted procedure: k6005 
o|contracted procedure: k5565 
o|contracted procedure: k5999 
o|contracted procedure: k5567 
o|contracted procedure: k5993 
o|contracted procedure: k5569 
o|contracted procedure: k5987 
o|contracted procedure: k5571 
o|contracted procedure: k5981 
o|contracted procedure: k5573 
o|contracted procedure: k5975 
o|contracted procedure: k5575 
o|contracted procedure: k5969 
o|contracted procedure: k5577 
o|contracted procedure: k5963 
o|contracted procedure: k5579 
o|contracted procedure: k5954 
o|contracted procedure: k5583 
o|contracted procedure: k5594 
o|contracted procedure: k5600 
o|contracted procedure: k5618 
o|contracted procedure: k5625 
o|contracted procedure: k5638 
o|contracted procedure: k5644 
o|contracted procedure: k5646 
o|contracted procedure: k5659 
o|contracted procedure: k5674 
o|contracted procedure: k5692 
o|contracted procedure: k5698 
o|contracted procedure: k5700 
o|contracted procedure: k5729 
o|contracted procedure: k5735 
o|contracted procedure: k5748 
o|contracted procedure: k5756 
o|contracted procedure: k5786 
o|contracted procedure: k5792 
o|contracted procedure: k5795 
o|contracted procedure: k5818 
o|contracted procedure: k5797 
o|contracted procedure: k5800 
o|contracted procedure: k5803 
o|contracted procedure: k5810 
o|contracted procedure: k5813 
o|contracted procedure: k5816 
o|contracted procedure: k5826 
o|contracted procedure: k5836 
o|contracted procedure: k5849 
o|contracted procedure: k5857 
o|contracted procedure: k5866 
o|contracted procedure: k5879 
o|contracted procedure: k5876 
o|contracted procedure: k5868 
o|contracted procedure: k5870 
o|contracted procedure: k5881 
o|contracted procedure: k5901 
o|contracted procedure: k5898 
o|contracted procedure: k5889 
o|contracted procedure: k5906 
o|contracted procedure: k5931 
o|contracted procedure: k5942 
o|contracted procedure: k5948 
o|contracted procedure: k6245 
o|contracted procedure: k6015 
o|contracted procedure: k6239 
o|contracted procedure: k6017 
o|contracted procedure: k6233 
o|contracted procedure: k6019 
o|contracted procedure: k6227 
o|contracted procedure: k6021 
o|contracted procedure: k6221 
o|contracted procedure: k6023 
o|contracted procedure: k6215 
o|contracted procedure: k6025 
o|contracted procedure: k6042 
o|contracted procedure: k6048 
o|contracted procedure: k6050 
o|contracted procedure: k6061 
o|contracted procedure: k6076 
o|contracted procedure: k6086 
o|contracted procedure: k6206 
o|contracted procedure: k6089 
o|contracted procedure: k6110 
o|contracted procedure: k6118 
o|contracted procedure: k6130 
o|contracted procedure: k6142 
o|contracted procedure: k6155 
o|contracted procedure: k6158 
o|contracted procedure: k6166 
o|contracted procedure: k6178 
o|contracted procedure: k6185 
o|contracted procedure: k6188 
o|contracted procedure: k6194 
o|contracted procedure: k6200 
o|contracted procedure: k6255 
o|contracted procedure: k6269 
o|contracted procedure: k6281 
o|contracted procedure: k6339 
o|contracted procedure: k6291 
o|contracted procedure: k6333 
o|contracted procedure: k6293 
o|contracted procedure: k6327 
o|contracted procedure: k6295 
o|contracted procedure: k6321 
o|contracted procedure: k6297 
o|contracted procedure: k6301 
o|contracted procedure: k6311 
o|contracted procedure: k6306 
o|contracted procedure: k6314 
o|contracted procedure: k6352 
o|contracted procedure: k6355 
o|contracted procedure: k6358 
o|contracted procedure: k6369 
o|contracted procedure: k6385 
o|contracted procedure: k6405 
o|contracted procedure: k6421 
o|contracted procedure: k6424 
o|contracted procedure: k6427 
o|contracted procedure: k6440 
o|contracted procedure: k6432 
o|contracted procedure: k6446 
o|contracted procedure: k6450 
o|contracted procedure: k6455 
o|contracted procedure: k6468 
o|contracted procedure: k6476 
o|contracted procedure: k6482 
o|contracted procedure: k6490 
o|contracted procedure: k6496 
o|contracted procedure: k6502 
o|contracted procedure: k6524 
o|contracted procedure: k6526 
o|contracted procedure: k6538 
o|contracted procedure: k6551 
o|contracted procedure: k6576 
o|contracted procedure: k6583 
o|contracted procedure: k6589 
o|contracted procedure: k6598 
o|contracted procedure: k6601 
o|contracted procedure: k6607 
o|contracted procedure: k6623 
o|contracted procedure: k6627 
o|contracted procedure: k6630 
o|contracted procedure: k6633 
o|contracted procedure: k6636 
o|contracted procedure: k6639 
o|contracted procedure: k6660 
o|contracted procedure: k6675 
o|contracted procedure: k6689 
o|contracted procedure: k6693 
o|contracted procedure: k66938568 
o|contracted procedure: k6701 
o|contracted procedure: k6708 
o|contracted procedure: k6718 
o|contracted procedure: k6720 
o|contracted procedure: k6731 
o|contracted procedure: k6796 
o|contracted procedure: k6758 
o|contracted procedure: k6766 
o|contracted procedure: k6791 
o|contracted procedure: k6788 
o|contracted procedure: k6827 
o|contracted procedure: k6808 
o|contracted procedure: k6811 
o|contracted procedure: k6813 
o|contracted procedure: k6825 
o|substituted constant variable: g8776 
o|substituted constant variable: g8776 
o|substituted constant variable: g8776 
o|substituted constant variable: g8776 
o|substituted constant variable: g8776 
o|substituted constant variable: g8776 
o|substituted constant variable: g8776 
o|substituted constant variable: g8776 
o|substituted constant variable: g8776 
o|substituted constant variable: g8776 
o|contracted procedure: k6860 
o|contracted procedure: k6870 
o|contracted procedure: k6879 
o|contracted procedure: k6892 
o|contracted procedure: k6910 
o|contracted procedure: k6906 
o|contracted procedure: k6912 
o|contracted procedure: k6918 
o|contracted procedure: k6924 
o|contracted procedure: k6936 
o|contracted procedure: k6951 
o|contracted procedure: k6976 
o|contracted procedure: k6972 
o|contracted procedure: k6966 
o|contracted procedure: k6986 
o|contracted procedure: k7001 
o|contracted procedure: k7004 
o|contracted procedure: k7007 
o|contracted procedure: k7017 
o|contracted procedure: k7064 
o|contracted procedure: k7089 
o|contracted procedure: k7073 
o|contracted procedure: k7076 
o|contracted procedure: k7084 
o|contracted procedure: k7099 
o|contracted procedure: k7106 
o|contracted procedure: k7112 
o|contracted procedure: k7119 
o|contracted procedure: k7126 
o|contracted procedure: k7132 
o|contracted procedure: k7266 
o|contracted procedure: k7139 
o|contracted procedure: k7260 
o|contracted procedure: k7141 
o|contracted procedure: k7254 
o|contracted procedure: k7143 
o|contracted procedure: k7248 
o|contracted procedure: k7145 
o|contracted procedure: k7147 
o|contracted procedure: k7149 
o|contracted procedure: k7165 
o|contracted procedure: k7174 
o|contracted procedure: k7179 
o|contracted procedure: k7192 
o|contracted procedure: k7203 
o|contracted procedure: k7209 
o|contracted procedure: k7211 
o|contracted procedure: k7222 
o|contracted procedure: k7225 
o|contracted procedure: k7227 
o|contracted procedure: k7229 
o|contracted procedure: k7240 
o|contracted procedure: k7243 
o|contracted procedure: k7246 
o|contracted procedure: k7277 
o|contracted procedure: k7302 
o|contracted procedure: k7282 
o|contracted procedure: k7317 
o|contracted procedure: k7325 
o|contracted procedure: k7327 
o|contracted procedure: k7332 
o|contracted procedure: k7338 
o|contracted procedure: k7368 
o|contracted procedure: k7389 
o|contracted procedure: k7398 
o|contracted procedure: k7410 
o|contracted procedure: k7434 
o|contracted procedure: k7415 
o|contracted procedure: k7461 
o|contracted procedure: k7470 
o|contracted procedure: k7486 
o|contracted procedure: k7583 
o|contracted procedure: k7586 
o|contracted procedure: k7589 
o|contracted procedure: k7559 
o|contracted procedure: k7595 
o|contracted procedure: k7611 
o|contracted procedure: k7620 
o|contracted procedure: k7623 
o|contracted procedure: k7625 
o|contracted procedure: k7691 
o|contracted procedure: k7657 
o|contracted procedure: k7685 
o|contracted procedure: k7659 
o|contracted procedure: k7679 
o|contracted procedure: k7661 
o|contracted procedure: k7673 
o|contracted procedure: k7663 
o|contracted procedure: k7730 
o|contracted procedure: k7701 
o|contracted procedure: k7724 
o|contracted procedure: k7703 
o|contracted procedure: k7718 
o|contracted procedure: k7705 
o|contracted procedure: k7712 
o|contracted procedure: k7707 
o|contracted procedure: k7747 
o|contracted procedure: k7752 
o|contracted procedure: k7757 
o|contracted procedure: k7767 
o|contracted procedure: k7772 
o|contracted procedure: k7776 
o|contracted procedure: k7787 
o|contracted procedure: k7789 
o|contracted procedure: k7794 
o|contracted procedure: k7811 
o|contracted procedure: k7828 
o|contracted procedure: k7845 
o|contracted procedure: k7862 
o|contracted procedure: k7878 
o|contracted procedure: k7894 
o|contracted procedure: k7890 
o|contracted procedure: k7899 
o|contracted procedure: k7911 
o|contracted procedure: k7933 
o|contracted procedure: k7919 
o|contracted procedure: k7922 
o|contracted procedure: k7942 
o|contracted procedure: k7952 
o|contracted procedure: k7964 
o|contracted procedure: k7972 
o|simplifications: ((if . 1) (let . 115)) 
o|removed binding forms: 559 
o|inlining procedure: k3607 
o|inlining procedure: k3628 
o|inlining procedure: "(posixunix.scm:808) mode928" 
o|inlining procedure: "(posixunix.scm:819) mode928" 
o|inlining procedure: k7102 
o|inlining procedure: k7122 
o|replaced variables: 12 
o|removed binding forms: 1 
o|removed side-effect free assignment to unused variable: mode928 
o|substituted constant variable: r71038888 
o|substituted constant variable: r71238890 
o|replaced variables: 6 
o|removed binding forms: 8 
o|converted assignments to bindings: (check930) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 8 
o|contracted procedure: k4590 
o|contracted procedure: k4627 
o|removed binding forms: 2 
o|replaced variables: 6 
o|removed binding forms: 4 
o|customizable procedures: (for-each-loop20412059 spawn1981 k7361 k7323 doloop18761877 doloop18801881 ##sys#terminal-check k6887 k6897 k6703 k6649 scan1608 loop1605 k6448 setup1526 err1527 k6303 k6260 loop1499 k6091 poke1476 loop1415 k5777 loop1397 check1258 doloop11821183 loop1174 k5084 loop1155 k5003 loop1072 for-each-loop10511063 check930 k4443 loop892 k4360 k4108 for-each-loop752765 for-each-loop780793 k4124 for-each-loop811822 for-each-loop832843 k4031 k3944 check-time-vector k3363 k3365 loop385 loop348 conc-loop329 k3188 k3193 loop308 for-each-loop264280 rmdir257 k3004 mode180 check181 ##sys#stat) 
o|calls to known targets: 254 
o|unused rest argument: _378 f_3533 
o|unused rest argument: _377 f_3524 
o|unused rest argument: _418 f_3579 
o|identified direct recursive calls: f_4889 2 
o|identified direct recursive calls: f_5163 1 
o|identified direct recursive calls: f_5216 1 
o|identified direct recursive calls: f_5781 1 
o|identified direct recursive calls: f_6161 1 
o|identified direct recursive calls: f_6571 1 
o|fast box initializations: 30 
o|fast global references: 68 
o|fast global assignments: 4 
o|dropping unused closure argument: f_2636 
o|dropping unused closure argument: f_2915 
o|dropping unused closure argument: f_4571 
o|dropping unused closure argument: f_6288 
o|dropping unused closure argument: f_6346 
o|dropping unused closure argument: f_2879 
o|dropping unused closure argument: f_3062 
o|dropping unused closure argument: f_6958 
o|dropping unused closure argument: f_5385 
o|dropping unused closure argument: f_3586 
*/
/* end of file */
