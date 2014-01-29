/* Generated from scheduler.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:47
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: scheduler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file scheduler.c
   unit: scheduler
*/

#include "chicken.h"

#ifdef HAVE_ERRNO_H
# include <errno.h>
# define C_signal_interrupted_p     C_mk_bool(errno == EINTR)
#else
# define C_signal_interrupted_p     C_SCHEME_FALSE
#endif

#ifdef _WIN32
# if (defined(HAVE_WINSOCK2_H) && defined(HAVE_WS2TCPIP_H))
#  include <winsock2.h>
#  include <ws2tcpip.h>
# else
#  include <winsock.h>
# endif
/* Beware: winsock2.h must come BEFORE windows.h */
# define C_msleep(n)     (Sleep(C_unfix(n)), C_SCHEME_TRUE)
#else
# include <unistd.h>
# include <sys/types.h>
# include <sys/time.h>
# include <time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
#ifdef __CYGWIN__
  if(usleep(C_unfix(ms) * 1000) == -1) return C_SCHEME_FALSE;
#else
  struct timespec ts;
  unsigned long mss = C_unfix(ms);
  ts.tv_sec = mss / 1000;
  ts.tv_nsec = (mss % 1000) * 1000000;
  
  if(nanosleep(&ts, NULL) == -1) return C_SCHEME_FALSE;
#endif
  return C_SCHEME_TRUE;
}
#endif

#ifdef HAVE_POSIX_POLL
#  include <poll.h>
#  include <assert.h>

static int C_fdset_nfds;
static struct pollfd *C_fdset_set = NULL;

C_inline int C_fd_ready(int fd, int pos, int what) {
  assert(fd == C_fdset_set[pos].fd); /* Must match position in ##sys#fd-list! */
  return(C_fdset_set[pos].revents & what);
}

#define C_fd_input_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLIN|POLLERR|POLLHUP|POLLNVAL))
#define C_fd_output_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLOUT|POLLERR|POLLHUP|POLLNVAL))

C_inline int C_ready_fds_timeout(int to, double tm) {
  return poll(C_fdset_set, C_fdset_nfds, to ? (int)tm : -1);
}

C_inline void C_prepare_fdset(int length) {
  /* TODO: Only realloc when needed? */
  C_fdset_set = realloc(C_fdset_set, sizeof(struct pollfd) * length);
  if (C_fdset_set == NULL)
    C_halt(C_SCHEME_FALSE); /* Ugly: no message */
  C_fdset_nfds = 0;
}

/* This *must* be called in order, so position will match ##sys#fd-list */
C_inline void C_fdset_add(int fd, int input, int output) {
  C_fdset_set[C_fdset_nfds].events = ((input ? POLLIN : 0) | (output ? POLLOUT : 0));
  C_fdset_set[C_fdset_nfds++].fd = fd;
}

#else

/* Shouldn't we include <sys/select.h> here? */
static fd_set C_fdset_input, C_fdset_output;

#define C_fd_input_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_input))
#define C_fd_output_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_output))

C_inline int C_ready_fds_timeout(int to, double tm) {
  struct timeval timeout;
  timeout.tv_sec = tm / 1000;
  timeout.tv_usec = fmod(tm, 1000) * 1000;
  /* we use FD_SETSIZE, but really should use max fd */
  return select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL);
}

C_inline void C_prepare_fdset(int length) {
  FD_ZERO(&C_fdset_input);
  FD_ZERO(&C_fdset_output);
}

C_inline void C_fdset_add(int fd, int input, int output) {
  if (input) FD_SET(fd, &C_fdset_input);
  if (output) FD_SET(fd, &C_fdset_output);
}
#endif

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[52];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,50,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,24),40,102,95,49,54,57,54,32,97,52,50,53,52,50,56,32,97,52,50,52,52,50,57,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,116,104,114,101,97,100,115,52,53,49,32,107,101,101,112,52,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,110,52,51,55,32,112,111,115,52,51,56,32,108,115,116,52,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,102,95,49,52,54,56,32,97,51,51,52,51,51,55,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,32),40,102,95,49,53,51,52,32,97,51,54,56,51,55,49,32,97,51,54,55,51,55,50,32,97,51,54,54,51,55,51,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,102,95,49,52,56,55,32,116,51,53,51,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,52,51,32,103,51,53,48,51,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,51,57,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,51,52,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,49,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,16),40,35,35,115,121,115,35,115,99,104,101,100,117,108,101,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,19),40,35,35,115,121,115,35,114,101,97,100,121,45,113,117,101,117,101,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,97,100,100,45,116,111,45,114,101,97,100,121,45,113,117,101,117,101,32,116,104,114,101,97,100,49,54,55,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,48,51,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,49,57,55,32,115,116,97,116,101,49,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,118,50,48,55,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,114,101,109,111,118,101,45,102,114,111,109,45,116,105,109,101,111,117,116,45,108,105,115,116,32,116,50,48,52,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,116,108,50,49,54,32,112,114,101,118,50,49,55,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,105,109,101,111,117,116,33,32,116,50,49,50,32,116,109,50,49,51,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,101,114,109,105,110,97,116,105,111,110,33,32,116,50,50,55,32,116,50,50,50,56,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,53,56,32,116,50,50,57,56,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,56,56,32,103,50,57,53,51,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,14),40,102,95,49,50,55,52,32,116,50,50,54,53,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,53,32,103,50,54,50,50,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,53,53,32,109,50,53,49,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,52,49,32,103,50,52,56,50,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,116,104,114,101,97,100,45,107,105,108,108,33,32,116,50,55,57,32,115,50,56,48,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,97,115,105,99,45,117,110,98,108,111,99,107,33,32,116,51,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,8),40,102,95,49,52,53,51,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,100,101,102,97,117,108,116,45,101,120,99,101,112,116,105,111,110,45,104,97,110,100,108,101,114,32,97,114,103,51,49,55,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,52,48,56,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,105,47,111,33,32,116,52,48,52,32,102,100,52,48,53,32,105,47,111,52,48,54,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,52,54,57,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,99,108,101,97,114,45,105,47,111,45,115,116,97,116,101,45,102,111,114,45,116,104,114,101,97,100,33,32,116,52,54,54,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,39),40,102,95,50,48,57,49,32,113,117,101,117,101,52,57,51,32,97,114,103,52,57,52,32,118,97,108,52,57,53,32,105,110,105,116,52,57,54,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,53,48,55,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,49,48,32,105,53,49,49,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,48,51,32,105,53,48,52,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,48,48,32,105,53,48,49,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,97,108,108,45,116,104,114,101,97,100,115,32,46,32,116,109,112,52,56,51,52,56,52,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,101,116,99,104,45,97,110,100,45,99,108,101,97,114,45,116,104,114,101,97,100,115,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,114,101,115,116,111,114,101,45,116,104,114,101,97,100,115,32,118,101,99,53,50,50,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,116,104,114,101,97,100,45,117,110,98,108,111,99,107,33,32,116,53,50,55,41,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from f_1696 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static C_word C_fcall stub426(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub426(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_truep(C_a0);
double t1=(double )C_c_double(C_a1);
C_r=C_fix((C_word)C_ready_fds_timeout(t0,t1));
return C_r;}

/* from f_1534 */
static C_word C_fcall stub369(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub369(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_truep(C_a1);
int t2=(int )C_truep(C_a2);
C_fdset_add(t0,t1,t2);
return C_r;}

/* from f_1468 in k820 in loop1 in k811 in schedule */
static C_word C_fcall stub335(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub335(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_prepare_fdset(t0);
return C_r;}

C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_817)
static void C_fcall f_817(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1529)
static void C_ccall f_1529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1695)
static void C_fcall f_1695(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1472)
static void C_ccall f_1472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1477)
static void C_fcall f_1477(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1508)
static void C_fcall f_1508(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1838)
static void C_fcall f_1838(C_word t0,C_word t1) C_noret;
C_noret_decl(f_932)
static void C_fcall f_932(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_832)
static void C_fcall f_832(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1282)
static void C_fcall f_1282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_821)
static void C_ccall f_821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1305)
static void C_fcall f_1305(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2139)
static void C_fcall f_2139(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2130)
static void C_ccall f_2130(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_828)
static void C_fcall f_828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externexport void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1358)
static void C_ccall f_1358(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1351)
static void C_ccall f_1351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1171)
static void C_fcall f_1171(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1090)
static void C_ccall f_1090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1162)
static void C_fcall f_1162(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1645)
static void C_fcall f_1645(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1334)
static void C_fcall f_1334(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1336)
static void C_ccall f_1336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1153)
static void C_ccall f_1153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1151)
static void C_fcall f_1151(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1147)
static void C_ccall f_1147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1721)
static void C_fcall f_1721(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1375)
static void C_fcall f_1375(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static C_word C_fcall f_1115(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1980)
static void C_fcall f_1980(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2063)
static void C_ccall f_2063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1747)
static void C_fcall f_1747(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2048)
static void C_fcall f_2048(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1919)
static void C_fcall f_1919(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1904)
static void C_fcall f_1904(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2025)
static void C_fcall f_2025(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_888)
static void C_fcall f_888(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_fcall f_2002(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_817)
static void C_fcall trf_817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_817(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_817(t0,t1);}

C_noret_decl(trf_1695)
static void C_fcall trf_1695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1695(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1695(t0,t1);}

C_noret_decl(trf_1477)
static void C_fcall trf_1477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1477(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1477(t0,t1,t2);}

C_noret_decl(trf_1508)
static void C_fcall trf_1508(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1508(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1508(t0,t1,t2);}

C_noret_decl(trf_1838)
static void C_fcall trf_1838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1838(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1838(t0,t1);}

C_noret_decl(trf_932)
static void C_fcall trf_932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_932(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_932(t0,t1);}

C_noret_decl(trf_832)
static void C_fcall trf_832(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_832(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_832(t0,t1);}

C_noret_decl(trf_1282)
static void C_fcall trf_1282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1282(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1282(t0,t1,t2);}

C_noret_decl(trf_1305)
static void C_fcall trf_1305(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1305(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1305(t0,t1,t2);}

C_noret_decl(trf_2139)
static void C_fcall trf_2139(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2139(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2139(t0,t1);}

C_noret_decl(trf_828)
static void C_fcall trf_828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_828(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_828(t0,t1);}

C_noret_decl(trf_1171)
static void C_fcall trf_1171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1171(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1171(t0,t1);}

C_noret_decl(trf_1162)
static void C_fcall trf_1162(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1162(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1162(t0,t1,t2,t3);}

C_noret_decl(trf_1645)
static void C_fcall trf_1645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1645(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1645(t0,t1,t2);}

C_noret_decl(trf_1334)
static void C_fcall trf_1334(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1334(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1334(t0,t1);}

C_noret_decl(trf_1151)
static void C_fcall trf_1151(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1151(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1151(t0,t1);}

C_noret_decl(trf_1721)
static void C_fcall trf_1721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1721(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1721(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1375)
static void C_fcall trf_1375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1375(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1375(t0,t1,t2);}

C_noret_decl(trf_1980)
static void C_fcall trf_1980(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1980(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1980(t0,t1,t2,t3);}

C_noret_decl(trf_1747)
static void C_fcall trf_1747(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1747(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1747(t0,t1,t2,t3);}

C_noret_decl(trf_2048)
static void C_fcall trf_2048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2048(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2048(t0,t1,t2,t3);}

C_noret_decl(trf_1919)
static void C_fcall trf_1919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1919(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1919(t0,t1,t2);}

C_noret_decl(trf_1904)
static void C_fcall trf_1904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1904(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1904(t0,t1);}

C_noret_decl(trf_2025)
static void C_fcall trf_2025(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2025(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2025(t0,t1,t2);}

C_noret_decl(trf_888)
static void C_fcall trf_888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_888(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_888(t0,t1,t2);}

C_noret_decl(trf_2002)
static void C_fcall trf_2002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2002(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2002(t0,t1,t2,t3);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

/* k811 in schedule */
static void C_ccall f_812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_812,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_817,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_817(t5,((C_word*)t0)[3]);}

/* loop1 in k811 in schedule */
static void C_fcall f_817(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_817,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_821,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[10]))){
t3=t2;
f_821(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_888,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_888(t7,t2,lf[10]);}}

/* k1528 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:391: g332 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* f_1696 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1696,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub426(C_SCHEME_UNDEFINED,t2,t3));}

/* k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_fcall f_1695(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1695,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1696,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* scheduler.scm:445: g422 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],t1);}
else{
/* scheduler.scm:445: g422 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],t1);}}

/* k1470 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1472,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1477,a[2]=t3,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1477(t5,((C_word*)t0)[2],*((C_word*)lf[11]+1));}

/* loop in k1470 in k820 in loop1 in k811 in schedule */
static void C_fcall f_1477(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1477,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_caar(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1487,a[2]=t3,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1501,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1508,a[2]=t10,a[3]=t4,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1508(t12,t8,t7);}}

/* ##sys#thread-block-for-i/o! */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1629,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1633,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1645,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1645(t9,t5,*((C_word*)lf[11]+1));}

/* for-each-loop343 in loop in k1470 in k820 in loop1 in k811 in schedule */
static void C_fcall f_1508(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1508,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1517,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:395: g344 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1499 in loop in k1470 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:401: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1477(t4,((C_word*)t0)[4],t3);}

/* f_1487 in loop in k1470 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1487(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1487,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
t4=C_slot(t3,C_fix(1));
t5=t1;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1534,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t7=C_eqp(t4,C_SCHEME_TRUE);
t8=(C_truep(t7)?t7:C_eqp(t4,lf[19]));
if(C_truep(t8)){
/* scheduler.scm:407: fdset-add! */
t9=t6;
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t5,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_FALSE);}
else{
t9=C_eqp(t4,C_SCHEME_FALSE);
t10=(C_truep(t9)?t9:C_eqp(t4,lf[20]));
if(C_truep(t10)){
/* scheduler.scm:408: fdset-add! */
t11=t6;
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t5,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t11=C_eqp(t4,lf[21]);
if(C_truep(t11)){
/* scheduler.scm:409: fdset-add! */
t12=t6;
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t5,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE);}
else{
t12=C_halt(lf[25]);
t13=t5;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}}}

/* k1836 in loop2 in loop in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_fcall f_1838(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1838,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(((C_word*)t0)[6],C_fix(4)))){
/* scheduler.scm:487: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t3=t2;
f_1840(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* scheduler.scm:490: loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1747(t5,((C_word*)t0)[4],t3,t4);}}

/* k930 in loop in loop1 in k811 in schedule */
static void C_fcall f_932(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_932,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_caar(lf[10]);
t3=C_a_i_flonum_difference(&a,2,t2,((C_word*)t0)[2]);
t4=C_quickflonumtruncate(t3);
t5=C_i_fixnum_max(C_fix(0),t4);
if(C_truep(C_msleep(t5))){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_mk_bool(C_signal_interrupted_p);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##sys#thread-kill! */
static void C_ccall f_1325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1325,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1329,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(8));
if(C_truep(C_i_nullp(t6))){
t7=C_SCHEME_UNDEFINED;
t8=t4;
f_1329(2,t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1255,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1305,a[2]=t9,a[3]=t7,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_1305(t11,t4,t6);}}

/* k1328 in thread-kill! */
static void C_ccall f_1329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1329,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(11));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(t2,lf[38]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1402,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(2));
/* scheduler.scm:342: ##sys#delq */
t6=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[2],t5);}
else{
if(C_truep(C_i_structurep(t2,lf[40]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1417,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(12));
/* scheduler.scm:344: ##sys#delq */
t6=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[2],t5);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t3;
f_1334(t5,t4);}}}

/* k831 in loop2 in k822 in k820 in loop1 in k811 in schedule */
static void C_fcall f_832(C_word t0,C_word t1){
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
C_word *a;
t2=t1;
if(C_truep(t2)){
t3=C_slot(t1,C_fix(3));
t4=C_eqp(t3,lf[8]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
t6=t1;
t7=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#current-thread ...) */,t6);
t8=C_i_setslot(t6,C_fix(3),lf[9]);
t9=C_slot(t6,C_fix(5));
t10=C_slot(t9,C_fix(0));
t11=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#dynamic-winds ...) */,t10);
t12=C_slot(t9,C_fix(1));
t13=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,t12);
t14=C_slot(t9,C_fix(2));
t15=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#standard-output ...) */,t14);
t16=C_slot(t9,C_fix(3));
t17=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#standard-error ...) */,t16);
t18=C_slot(t9,C_fix(4));
t19=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#current-exception-handler ...) */,t18);
t20=C_slot(t9,C_fix(5));
t21=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#current-parameter-vector ...) */,t20);
t22=C_slot(t6,C_fix(9));
t23=C_set_initial_timer_interrupt_period(t22);
t24=C_slot(t6,C_fix(1));
/* scheduler.scm:158: g118 */
t25=t24;
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,t5);}
else{
/* scheduler.scm:224: loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_828(t5,((C_word*)t0)[2]);}}
else{
if(C_truep(C_i_nullp(lf[10]))){
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_halt(lf[12]));}
else{
/* scheduler.scm:222: loop1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_817(t3,((C_word*)t0)[2]);}}
else{
/* scheduler.scm:222: loop1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_817(t3,((C_word*)t0)[2]);}}}

/* k1313 in for-each-loop241 in thread-kill! */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1305(t3,((C_word*)t0)[4],t2);}

/* k2140 in k2137 in thread-unblock! */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:564: ##sys#clear-i/o-state-for-thread! */
f_1904(t2,((C_word*)t0)[3]);}

/* k2142 in k2140 in k2137 in thread-unblock! */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:565: ##sys#thread-basic-unblock! */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1689,2,t0,t1);}
t2=C_i_pairp(lf[10]);
t3=C_i_pairp(lf[13]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_truep(t2)?C_i_not(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_u_i_caar(lf[10]);
t7=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t8=C_a_i_flonum_difference(&a,2,t6,t7);
t9=t4;
f_1695(t9,C_i_flonum_max(lf[24],t8));}
else{
t6=t4;
f_1695(t6,lf[24]);}}

/* k1416 in k1328 in thread-kill! */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1334(t2,C_i_setslot(((C_word*)t0)[3],C_fix(12),t1));}

/* k822 in k820 in loop1 in k811 in schedule */
static void C_ccall f_823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_823,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_828,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_828(t5,((C_word*)t0)[3]);}

/* for-each-loop255 */
static void C_fcall f_1282(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1282,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1291,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:328: g256 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k820 in loop1 in k811 in schedule */
static void C_ccall f_821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_821,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_i_set_i_slot(*((C_word*)lf[15]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:229: ##sys#thread-unblock! */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,*((C_word*)lf[15]+1));}
else{
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
t3=C_SCHEME_UNDEFINED;
t4=t2;
f_823(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1689,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1468,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1472,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1529,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:392: ##sys#length */
t7=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,*((C_word*)lf[11]+1));}}}

/* for-each-loop241 in thread-kill! */
static void C_fcall f_1305(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1305,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1314,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:321: g242 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2137 in thread-unblock! */
static void C_fcall f_2139(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2139,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:563: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##sys#thread-unblock! */
static void C_ccall f_2130(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2130,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(3));
t4=C_eqp(lf[32],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2139,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_2139(t6,t4);}
else{
t6=C_slot(t2,C_fix(3));
t7=t5;
f_2139(t7,C_eqp(lf[51],t6));}}

/* loop2 in k822 in k820 in loop1 in k811 in schedule */
static void C_fcall f_828(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_828,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_832,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=lf[13];
if(C_truep(C_i_nullp(lf[13]))){
t4=t2;
f_832(t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(1));
t5=C_mutate(&lf[13] /* (set! ready-queue-head ...) */,t4);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
t7=lf[14] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t8=C_u_i_car(t3);
t9=t2;
f_832(t9,t8);}
else{
t7=C_u_i_car(t3);
t8=t2;
f_832(t8,t7);}}}

/* k1401 in k1328 in thread-kill! */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1334(t2,C_i_setslot(((C_word*)t0)[3],C_fix(2),t1));}

/* k1290 in for-each-loop255 */
static void C_ccall f_1291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1282(t3,((C_word*)t0)[4],t2);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("scheduler_toplevel"));
C_check_nursery_minimum(49);
if(!C_demand(49)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(414)){
C_save(t1);
C_rereclaim2(414*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(49);
C_initialize_lf(lf,52);
lf[0]=C_h_intern(&lf[0],12,"\003sysschedule");
lf[1]=C_h_intern(&lf[1],18,"\003syscurrent-thread");
lf[2]=C_h_intern(&lf[2],17,"\003sysdynamic-winds");
lf[3]=C_h_intern(&lf[3],18,"\003sysstandard-input");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],18,"\003sysstandard-error");
lf[6]=C_h_intern(&lf[6],29,"\003syscurrent-exception-handler");
lf[7]=C_h_intern(&lf[7],28,"\003syscurrent-parameter-vector");
lf[8]=C_h_intern(&lf[8],5,"ready");
lf[9]=C_h_intern(&lf[9],7,"running");
lf[11]=C_h_intern(&lf[11],11,"\003sysfd-list");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\010deadlock");
lf[15]=C_h_intern(&lf[15],21,"\003sysprimordial-thread");
lf[16]=C_h_intern(&lf[16],19,"\003systhread-unblock!");
lf[17]=C_h_intern(&lf[17],25,"\003systhread-basic-unblock!");
lf[18]=C_h_intern(&lf[18],28,"\003sysremove-from-timeout-list");
lf[19]=C_h_intern(&lf[19],6,"\000input");
lf[20]=C_h_intern(&lf[20],7,"\000output");
lf[21]=C_h_intern(&lf[21],4,"\000all");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000!fdset-test: invalid i/o direction");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\0007thread is registered for I/O on unknown file-descriptor");
lf[24]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000 fdset-set: invalid i/o direction");
lf[26]=C_h_intern(&lf[26],10,"\003syslength");
lf[28]=C_h_intern(&lf[28],22,"\003sysadd-to-ready-queue");
lf[29]=C_h_intern(&lf[29],15,"\003sysready-queue");
lf[30]=C_h_intern(&lf[30],18,"\003sysinterrupt-hook");
lf[31]=C_h_intern(&lf[31],29,"\003systhread-block-for-timeout!");
lf[32]=C_h_intern(&lf[32],7,"blocked");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\0000##sys#thread-block-for-timeout!: invalid timeout");
lf[34]=C_h_intern(&lf[34],33,"\003systhread-block-for-termination!");
lf[35]=C_h_intern(&lf[35],4,"dead");
lf[36]=C_h_intern(&lf[36],10,"terminated");
lf[37]=C_h_intern(&lf[37],16,"\003systhread-kill!");
lf[38]=C_h_intern(&lf[38],18,"condition-variable");
lf[39]=C_h_intern(&lf[39],8,"\003sysdelq");
lf[40]=C_h_intern(&lf[40],6,"thread");
lf[41]=C_h_intern(&lf[41],29,"\003sysdefault-exception-handler");
lf[42]=C_h_intern(&lf[42],10,"\003syssignal");
lf[43]=C_h_intern(&lf[43],26,"\003sysshow-exception-warning");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\011in thread");
lf[45]=C_h_intern(&lf[45],25,"\003systhread-block-for-i/o!");
lf[46]=C_h_intern(&lf[46],15,"\003sysall-threads");
lf[47]=C_h_intern(&lf[47],3,"i/o");
lf[48]=C_h_intern(&lf[48],7,"timeout");
lf[49]=C_h_intern(&lf[49],27,"\003sysfetch-and-clear-threads");
lf[50]=C_h_intern(&lf[50],19,"\003sysrestore-threads");
lf[51]=C_h_intern(&lf[51],8,"sleeping");
C_register_lf2(lf,52,create_ptable());
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#schedule ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_787,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t3=lf[13] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[14] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_992,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#add-to-ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_996,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[30]+1);
t8=C_mutate((C_word*)lf[30]+1 /* (set! ##sys#interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1086,a[2]=t7,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t9=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t10=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#remove-from-timeout-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1109,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#thread-block-for-timeout! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1147,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[34]+1 /* (set! ##sys#thread-block-for-termination! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1212,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[37]+1 /* (set! ##sys#thread-kill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1325,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[17]+1 /* (set! ##sys#thread-basic-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1422,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[41]+1 /* (set! ##sys#default-exception-handler ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1433,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t16=C_set_block_item(lf[11] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t17=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#thread-block-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1629,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[27] /* (set! ##sys#clear-i/o-state-for-thread! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1904,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#all-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1965,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[49]+1 /* (set! ##sys#fetch-and-clear-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2100,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[50]+1 /* (set! ##sys#restore-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2110,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[16]+1 /* (set! ##sys#thread-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2130,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t23=t1;
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,C_SCHEME_UNDEFINED);}

/* k1780 in loop2 in loop in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1781,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* ##sys#restore-threads */
static void C_ccall f_2110(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2110,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_mutate(&lf[13] /* (set! ready-queue-head ...) */,t3);
t5=C_slot(t2,C_fix(1));
t6=C_mutate(&lf[14] /* (set! ready-queue-tail ...) */,t5);
t7=C_slot(t2,C_fix(2));
t8=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t7);
t9=C_slot(t2,C_fix(3));
t10=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}

/* ##sys#interrupt-hook */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1086,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1090,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(t2,C_fix(255));
if(C_truep(t5)){
t6=*((C_word*)lf[1]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1103,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
t8=C_i_setslot(*((C_word*)lf[1]+1),C_fix(1),t7);
/* scheduler.scm:276: ##sys#schedule */
t9=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t4);}
else{
/* scheduler.scm:277: oldhook */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t2,t3);}}

/* f_1358 in k1337 in k1335 in k1332 in k1328 in thread-kill! */
static void C_ccall f_1358(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1358,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
/* scheduler.scm:357: ##sys#thread-basic-unblock! */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1349 in k1337 in k1335 in k1332 in k1328 in thread-kill! */
static void C_ccall f_1351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(12),C_SCHEME_END_OF_LIST));}

/* ##sys#fetch-and-clear-threads */
static void C_ccall f_2100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2100,2,t0,t1);}
t2=C_a_i_vector4(&a,4,lf[13],lf[14],*((C_word*)lf[11]+1),lf[10]);
t3=lf[13] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[14] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_set_block_item(lf[11] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t6=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}

/* k1169 in loop in k1150 in thread-block-for-timeout! */
static void C_fcall f_1171(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1171,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_setslot(((C_word*)t0)[2],C_fix(1),t3));}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* scheduler.scm:304: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1162(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5]);}}

/* k1089 in interrupt-hook */
static void C_ccall f_1090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:277: oldhook */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* loop in k1150 in thread-block-for-timeout! */
static void C_fcall f_1162(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1162,NULL,4,t0,t1,t2,t3);}
t4=C_i_nullp(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1171,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_1171(t6,t4);}
else{
t6=C_u_i_caar(t2);
t7=t5;
f_1171(t7,C_flonum_lessp(((C_word*)t0)[2],t6));}}

/* ##sys#schedule */
static void C_ccall f_787(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_787,2,t0,t1);}
t2=*((C_word*)lf[1]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_slot(*((C_word*)lf[1]+1),C_fix(3));
t6=C_slot(*((C_word*)lf[1]+1),C_fix(5));
t7=C_i_setslot(t6,C_fix(0),*((C_word*)lf[2]+1));
t8=C_i_setslot(t6,C_fix(1),*((C_word*)lf[3]+1));
t9=C_i_setslot(t6,C_fix(2),*((C_word*)lf[4]+1));
t10=C_i_setslot(t6,C_fix(3),*((C_word*)lf[5]+1));
t11=C_i_setslot(t6,C_fix(4),*((C_word*)lf[6]+1));
t12=C_i_setslot(t6,C_fix(5),*((C_word*)lf[7]+1));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_812,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t14=C_eqp(t5,lf[9]);
t15=(C_truep(t14)?t14:C_eqp(t5,lf[8]));
if(C_truep(t15)){
t16=C_i_set_i_slot(*((C_word*)lf[1]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:174: ##sys#add-to-ready-queue */
t17=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t13,*((C_word*)lf[1]+1));}
else{
t16=t13;
f_812(2,t16,C_SCHEME_UNDEFINED);}}

/* loop in thread-block-for-i/o! */
static void C_fcall f_1645(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1645,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,*((C_word*)lf[11]+1));
t5=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=C_u_i_cdr(t3);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_setslot(t3,C_fix(1),t7));}
else{
t6=t2;
t7=C_u_i_cdr(t6);
/* scheduler.scm:429: loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* f_1534 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1534,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub369(C_SCHEME_UNDEFINED,t2,t3,t4));}

/* k1332 in k1328 in thread-kill! */
static void C_fcall f_1334(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1334,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:345: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1337 in k1335 in k1332 in k1328 in thread-kill! */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1338,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),((C_word*)t0)[3]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_FALSE);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_END_OF_LIST);
t6=C_slot(((C_word*)t0)[2],C_fix(12));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1351,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_set_i_slot(((C_word*)t0)[2],C_fix(12),C_SCHEME_END_OF_LIST));}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1358,a[2]=((C_word*)t0)[2],a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1375,a[2]=t10,a[3]=t8,a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1375(t12,t7,t6);}}

/* k1335 in k1332 in k1328 in thread-kill! */
static void C_ccall f_1336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:346: ##sys#clear-i/o-state-for-thread! */
f_1904(t2,((C_word*)t0)[2]);}

/* k1152 in k1150 in thread-block-for-timeout! */
static void C_ccall f_1153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[32]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_setslot(((C_word*)t0)[2],C_fix(4),((C_word*)t0)[4]));}

/* k1150 in thread-block-for-timeout! */
static void C_fcall f_1151(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1151,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1162,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1162(t6,t2,lf[10],C_SCHEME_FALSE);}

/* k1632 in thread-block-for-i/o! */
static void C_ccall f_1633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1633,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[32]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(((C_word*)t0)[2],C_fix(11),t4));}

/* f_1274 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1274,3,t0,t1,t2);}
/* scheduler.scm:331: ##sys#thread-unblock! */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* ##sys#thread-block-for-timeout! */
static void C_ccall f_1147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1147,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1151,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_flonump(t3))){
t5=t3;
t6=t4;
f_1151(t6,(C_truep(C_flonum_greaterp(t5,lf[24]))?C_SCHEME_UNDEFINED:C_halt(lf[33])));}
else{
t5=t4;
f_1151(t5,C_halt(lf[33]));}}

/* f_1468 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1468(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1468,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub335(C_SCHEME_UNDEFINED,t2));}

/* k1516 in for-each-loop343 in loop in k1470 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1508(t3,((C_word*)t0)[4],t2);}

/* k1265 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(3),C_SCHEME_END_OF_LIST));}

/* loop in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_fcall f_1721(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t23;
C_word t24;
C_word t25;
C_word *a;
loop:
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1721,NULL,5,t0,t1,t2,t3,t4);}
t5=C_i_zerop(t2);
t6=(C_truep(t5)?t5:C_i_nullp(t4));
if(C_truep(t6)){
t7=t4;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_u_i_car(t4);
t8=C_u_i_car(t7);
t9=C_fd_input_ready(t8,t3);
t10=C_fd_output_ready(t8,t3);
t11=(C_truep(t9)?t9:t10);
if(C_truep(t11)){
t12=C_u_i_cdr(t7);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1747,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t8,a[7]=t14,a[8]=t9,a[9]=t10,a[10]=((C_word)li2),tmp=(C_word)a,a+=11,tmp));
t16=((C_word*)t14)[1];
f_1747(t16,t1,t12,C_SCHEME_END_OF_LIST);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1878,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t13=C_a_i_plus(&a,2,t3,C_fix(1));
t14=t4;
t15=C_u_i_cdr(t14);
/* scheduler.scm:491: loop */
t22=t12;
t23=t2;
t24=t13;
t25=t15;
t1=t22;
t2=t23;
t3=t24;
t4=t25;
goto loop;}}}

/* ##sys#ready-queue */
static void C_ccall f_992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_992,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[13]);}

/* ##sys#add-to-ready-queue */
static void C_ccall f_996(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_996,3,t0,t1,t2);}
t3=C_i_setslot(t2,C_fix(3),lf[8]);
t4=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=C_eqp(C_SCHEME_END_OF_LIST,lf[13]);
if(C_truep(t5)){
t6=C_mutate(&lf[13] /* (set! ready-queue-head ...) */,t4);
t7=C_mutate(&lf[14] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=C_i_setslot(lf[14],C_fix(1),t4);
t7=C_mutate(&lf[14] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* ##sys#all-threads */
static void C_ccall f_1965(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_1965r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1965r(t0,t1,t2);}}

static void C_ccall f_1965r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(10);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2091,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp):C_u_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_slot(t2,C_fix(1)));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_u_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_slot(t6,C_fix(1)));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1980,a[2]=t12,a[3]=t4,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_1980(t14,t1,lf[13],t8);}

/* k1717 in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];
f_823(2,t3,t2);}

/* k1383 in for-each-loop288 in k1337 in k1335 in k1332 in k1328 in thread-kill! */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1375(t3,((C_word*)t0)[4],t2);}

/* for-each-loop288 in k1337 in k1335 in k1332 in k1328 in thread-kill! */
static void C_fcall f_1375(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1375,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1384,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:353: g289 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1700,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_i_set_i_slot(*((C_word*)lf[15]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:229: ##sys#thread-unblock! */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],*((C_word*)lf[15]+1));}
else{
if(C_truep(C_fixnum_greaterp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1719,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1721,a[2]=t5,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1721(t7,t3,t1,C_fix(0),*((C_word*)lf[11]+1));}
else{
t3=((C_word*)t0)[2];
f_823(2,t3,C_SCHEME_UNDEFINED);}}}

/* loop in remove-from-timeout-list */
static C_word C_fcall f_1115(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_truep(C_i_nullp(t1))){
t3=t1;
return(t3);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_slot(t3,C_fix(1));
t6=C_eqp(t5,((C_word*)t0)[2]);
if(C_truep(t6)){
if(C_truep(t2)){
return(C_i_setslot(t2,C_fix(1),t4));}
else{
t7=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t4);
return(t7);}}
else{
t10=t4;
t11=t1;
t1=t10;
t2=t11;
goto loop;}}}

/* ##sys#default-exception-handler */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1433,3,t0,t1,t2);}
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1437,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_abort_on_thread_exceptions))){
t5=*((C_word*)lf[15]+1);
t6=C_slot(*((C_word*)lf[15]+1),C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1453,a[2]=t6,a[3]=t2,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
t8=C_i_setslot(*((C_word*)lf[15]+1),C_fix(1),t7);
/* scheduler.scm:379: ##sys#thread-unblock! */
t9=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t4,*((C_word*)lf[15]+1));}
else{
/* scheduler.scm:381: ##sys#show-exception-warning */
t5=*((C_word*)lf[43]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,lf[44],*((C_word*)lf[1]+1));}}

/* k1436 in default-exception-handler */
static void C_ccall f_1437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1437,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(7),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1441,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:383: ##sys#thread-kill! */
t4=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[36]);}

/* f_2091 in all-threads */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2091,6,t0,t1,t2,t3,t4,t5);}
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,t4,t5));}

/* loop in all-threads */
static void C_fcall f_1980(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1980,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1995,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* scheduler.scm:524: cns */
t9=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t6,lf[8],C_SCHEME_FALSE,t8,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2002,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2002(t7,t1,*((C_word*)lf[11]+1),t3);}}

/* f_1103 in interrupt-hook */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1103,2,t0,t1);}
/* scheduler.scm:275: oldhook */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* ##sys#remove-from-timeout-list */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1109,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1115,a[2]=t2,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1115(t3,lf[10],C_SCHEME_FALSE));}

/* ##sys#thread-basic-unblock! */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1422,3,t0,t1,t2);}
t3=C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t4=C_i_set_i_slot(t2,C_fix(4),C_SCHEME_FALSE);
/* scheduler.scm:365: ##sys#add-to-ready-queue */
t5=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}

/* k1994 in loop in all-threads */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:524: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1980(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_1453 in default-exception-handler */
static void C_ccall f_1453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1456,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:377: ##sys#signal */
t3=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1954 in loop in clear-i/o-state-for-thread! */
static void C_ccall f_1955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1955,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k1455 */
static void C_ccall f_1456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:378: ptx */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_1255 in thread-kill! */
static void C_ccall f_1255(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1255,3,t0,t1,t2);}
t3=C_i_set_i_slot(t2,C_fix(2),C_SCHEME_FALSE);
t4=C_i_set_i_slot(t2,C_fix(4),C_SCHEME_TRUE);
t5=C_i_set_i_slot(t2,C_fix(5),C_SCHEME_FALSE);
t6=C_slot(t2,C_fix(3));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1267,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_set_i_slot(t2,C_fix(3),C_SCHEME_END_OF_LIST));}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1282,a[2]=t10,a[3]=t8,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1282(t12,t7,t6);}}

/* k2062 in loop in loop in loop in all-threads */
static void C_ccall f_2063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:534: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2048(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1440 in k1436 in default-exception-handler */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:384: ##sys#schedule */
t2=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* loop2 in loop in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_fcall f_1747(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(15);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1747,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:467: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1721(t7,t1,t4,t5,t6);}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1781,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t7=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t8=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:469: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_1721(t9,t5,t6,t7,t8);}}
else{
t4=C_u_i_car(t2);
t5=C_slot(t4,C_fix(11));
if(C_truep(C_slot(t4,C_fix(13)))){
t6=t2;
t7=C_u_i_cdr(t6);
/* scheduler.scm:475: loop2 */
t28=t1;
t29=t7;
t30=t3;
t1=t28;
t2=t29;
t3=t30;
goto loop;}
else{
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_car(t5);
t7=C_eqp(((C_word*)t0)[6],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1838,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=C_u_i_cdr(t5);
t10=C_eqp(t9,C_SCHEME_TRUE);
t11=(C_truep(t10)?t10:C_eqp(t9,lf[19]));
if(C_truep(t11)){
t12=t8;
f_1838(t12,((C_word*)t0)[8]);}
else{
t12=C_eqp(t9,C_SCHEME_FALSE);
t13=(C_truep(t12)?t12:C_eqp(t9,lf[20]));
if(C_truep(t13)){
t14=t8;
f_1838(t14,((C_word*)t0)[9]);}
else{
t14=C_eqp(t9,lf[21]);
if(C_truep(t14)){
t15=t8;
f_1838(t15,(C_truep(((C_word*)t0)[8])?((C_word*)t0)[8]:((C_word*)t0)[9]));}
else{
t15=C_halt(lf[22]);
t16=t8;
f_1838(t16,t15);}}}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_halt(lf[23]));}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1813,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(t4,C_fix(4)))){
/* scheduler.scm:480: ##sys#remove-from-timeout-list */
t7=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t7=t6;
f_1813(2,t7,C_SCHEME_UNDEFINED);}}}}}

/* k1877 in loop in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1878,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* loop in loop in loop in all-threads */
static void C_fcall f_2048(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2048,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2063,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_caar(t2);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
/* scheduler.scm:534: cns */
t11=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t6,lf[48],t7,t10,t3);}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2040 in loop in loop in loop in all-threads */
static void C_ccall f_2041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:531: cns */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[47],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k1839 in k1836 in loop2 in loop in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:488: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k1841 in k1839 in k1836 in loop2 in loop in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:489: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1747(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* k1915 in clear-i/o-state-for-thread! */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* loop in clear-i/o-state-for-thread! */
static void C_fcall f_1919(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1919,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1938,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_cdr(t3);
/* scheduler.scm:506: ##sys#delq */
t8=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[3],t7);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1955,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* scheduler.scm:511: loop */
t12=t6;
t13=t8;
t1=t12;
t2=t13;
goto loop;}}}

/* k917 in loop in loop1 in k811 in schedule */
static void C_ccall f_918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:191: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* ##sys#thread-block-for-termination! */
static void C_ccall f_1212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1212,4,t0,t1,t2,t3);}
t4=C_slot(t3,C_fix(3));
t5=C_eqp(t4,lf[35]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[36]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_slot(t3,C_fix(12));
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_i_setslot(t3,C_fix(12),t8);
t10=C_i_setslot(t2,C_fix(3),lf[32]);
t11=C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_i_setslot(t2,C_fix(11),t3));}}

/* k2018 in loop in loop in all-threads */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:527: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2002(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##sys#clear-i/o-state-for-thread! */
static void C_fcall f_1904(C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1904,NULL,2,t1,t2);}
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_slot(t2,C_fix(11));
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1917,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1919,a[2]=t5,a[3]=t2,a[4]=t8,a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_1919(t10,t6,*((C_word*)lf[11]+1));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* loop in loop in loop in all-threads */
static void C_fcall f_2025(C_word t0,C_word t1,C_word t2){
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
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2025,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2041,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
/* scheduler.scm:531: loop */
t9=t4;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}

/* loop in loop1 in k811 in schedule */
static void C_fcall f_888(C_word t0,C_word t1,C_word t2){
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
C_word t16;
C_word t17;
C_word t18;
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_888,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_caar(t2);
t4=t2;
t5=C_u_i_car(t4);
t6=C_u_i_cdr(t5);
t7=C_slot(t6,C_fix(4));
if(C_truep(C_i_equalp(t3,t7))){
if(C_truep(C_flonum_greater_or_equal_p(((C_word*)t0)[2],t3))){
t8=C_i_set_i_slot(t6,C_fix(13),C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_918,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:190: ##sys#clear-i/o-state-for-thread! */
f_1904(t9,t6);}
else{
t8=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t2);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[13]))){
t10=C_i_nullp(*((C_word*)lf[11]+1));
t11=t9;
f_932(t11,(C_truep(t10)?C_i_pairp(lf[10]):C_SCHEME_FALSE));}
else{
t10=t9;
f_932(t10,C_SCHEME_FALSE);}}}
else{
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:210: loop */
t17=t1;
t18=t9;
t1=t17;
t2=t18;
goto loop;}}}

/* k1812 in loop2 in loop in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:481: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k1814 in k1812 in loop2 in loop in k1698 in k1694 in k1688 in k820 in loop1 in k811 in schedule */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:482: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1747(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* loop in loop in all-threads */
static void C_fcall f_2002(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2002,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_caar(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2025,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t12,a[6]=((C_word)li36),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_2025(t14,t7,t10);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2048,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2048(t7,t1,lf[10],t3);}}

/* k1937 in loop in clear-i/o-state-for-thread! */
static void C_ccall f_1938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_i_setslot(((C_word*)t0)[4],C_fix(1),t1);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k919 in k917 in loop in loop1 in k811 in schedule */
static void C_ccall f_920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:192: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_888(t4,((C_word*)t0)[4],t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[97] = {
{"f_812:scheduler_2escm",(void*)f_812},
{"f_817:scheduler_2escm",(void*)f_817},
{"f_1529:scheduler_2escm",(void*)f_1529},
{"f_1696:scheduler_2escm",(void*)f_1696},
{"f_1695:scheduler_2escm",(void*)f_1695},
{"f_1472:scheduler_2escm",(void*)f_1472},
{"f_1477:scheduler_2escm",(void*)f_1477},
{"f_1629:scheduler_2escm",(void*)f_1629},
{"f_1508:scheduler_2escm",(void*)f_1508},
{"f_1501:scheduler_2escm",(void*)f_1501},
{"f_1487:scheduler_2escm",(void*)f_1487},
{"f_1838:scheduler_2escm",(void*)f_1838},
{"f_932:scheduler_2escm",(void*)f_932},
{"f_1325:scheduler_2escm",(void*)f_1325},
{"f_1329:scheduler_2escm",(void*)f_1329},
{"f_832:scheduler_2escm",(void*)f_832},
{"f_1314:scheduler_2escm",(void*)f_1314},
{"f_2141:scheduler_2escm",(void*)f_2141},
{"f_2143:scheduler_2escm",(void*)f_2143},
{"f_1689:scheduler_2escm",(void*)f_1689},
{"f_1417:scheduler_2escm",(void*)f_1417},
{"f_823:scheduler_2escm",(void*)f_823},
{"f_1282:scheduler_2escm",(void*)f_1282},
{"f_821:scheduler_2escm",(void*)f_821},
{"f_1305:scheduler_2escm",(void*)f_1305},
{"f_2139:scheduler_2escm",(void*)f_2139},
{"f_2130:scheduler_2escm",(void*)f_2130},
{"f_828:scheduler_2escm",(void*)f_828},
{"f_1402:scheduler_2escm",(void*)f_1402},
{"f_1291:scheduler_2escm",(void*)f_1291},
{"toplevel:scheduler_2escm",(void*)C_scheduler_toplevel},
{"f_1781:scheduler_2escm",(void*)f_1781},
{"f_2110:scheduler_2escm",(void*)f_2110},
{"f_1086:scheduler_2escm",(void*)f_1086},
{"f_1358:scheduler_2escm",(void*)f_1358},
{"f_1351:scheduler_2escm",(void*)f_1351},
{"f_2100:scheduler_2escm",(void*)f_2100},
{"f_1171:scheduler_2escm",(void*)f_1171},
{"f_1090:scheduler_2escm",(void*)f_1090},
{"f_1162:scheduler_2escm",(void*)f_1162},
{"f_787:scheduler_2escm",(void*)f_787},
{"f_1645:scheduler_2escm",(void*)f_1645},
{"f_1534:scheduler_2escm",(void*)f_1534},
{"f_1334:scheduler_2escm",(void*)f_1334},
{"f_1338:scheduler_2escm",(void*)f_1338},
{"f_1336:scheduler_2escm",(void*)f_1336},
{"f_1153:scheduler_2escm",(void*)f_1153},
{"f_1151:scheduler_2escm",(void*)f_1151},
{"f_1633:scheduler_2escm",(void*)f_1633},
{"f_1274:scheduler_2escm",(void*)f_1274},
{"f_1147:scheduler_2escm",(void*)f_1147},
{"f_1468:scheduler_2escm",(void*)f_1468},
{"f_1517:scheduler_2escm",(void*)f_1517},
{"f_1267:scheduler_2escm",(void*)f_1267},
{"f_1721:scheduler_2escm",(void*)f_1721},
{"f_992:scheduler_2escm",(void*)f_992},
{"f_996:scheduler_2escm",(void*)f_996},
{"f_1965:scheduler_2escm",(void*)f_1965},
{"f_1719:scheduler_2escm",(void*)f_1719},
{"f_1384:scheduler_2escm",(void*)f_1384},
{"f_1375:scheduler_2escm",(void*)f_1375},
{"f_1700:scheduler_2escm",(void*)f_1700},
{"f_1115:scheduler_2escm",(void*)f_1115},
{"f_1433:scheduler_2escm",(void*)f_1433},
{"f_1437:scheduler_2escm",(void*)f_1437},
{"f_2091:scheduler_2escm",(void*)f_2091},
{"f_1980:scheduler_2escm",(void*)f_1980},
{"f_1103:scheduler_2escm",(void*)f_1103},
{"f_1109:scheduler_2escm",(void*)f_1109},
{"f_1422:scheduler_2escm",(void*)f_1422},
{"f_1995:scheduler_2escm",(void*)f_1995},
{"f_1453:scheduler_2escm",(void*)f_1453},
{"f_1955:scheduler_2escm",(void*)f_1955},
{"f_1456:scheduler_2escm",(void*)f_1456},
{"f_1255:scheduler_2escm",(void*)f_1255},
{"f_2063:scheduler_2escm",(void*)f_2063},
{"f_1441:scheduler_2escm",(void*)f_1441},
{"f_1747:scheduler_2escm",(void*)f_1747},
{"f_1878:scheduler_2escm",(void*)f_1878},
{"f_2048:scheduler_2escm",(void*)f_2048},
{"f_2041:scheduler_2escm",(void*)f_2041},
{"f_1840:scheduler_2escm",(void*)f_1840},
{"f_1842:scheduler_2escm",(void*)f_1842},
{"f_1917:scheduler_2escm",(void*)f_1917},
{"f_1919:scheduler_2escm",(void*)f_1919},
{"f_918:scheduler_2escm",(void*)f_918},
{"f_1212:scheduler_2escm",(void*)f_1212},
{"f_2020:scheduler_2escm",(void*)f_2020},
{"f_1904:scheduler_2escm",(void*)f_1904},
{"f_2025:scheduler_2escm",(void*)f_2025},
{"f_888:scheduler_2escm",(void*)f_888},
{"f_1813:scheduler_2escm",(void*)f_1813},
{"f_1815:scheduler_2escm",(void*)f_1815},
{"f_2002:scheduler_2escm",(void*)f_2002},
{"f_1938:scheduler_2escm",(void*)f_1938},
{"f_920:scheduler_2escm",(void*)f_920},
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
S|  ##sys#for-each		1
o|eliminated procedure checks: 102 
o|specializations:
o|  1 (fpmax float float)
o|  10 (eqv? * (not float))
o|  1 (fp> float float)
o|  2 (car pair)
o|  19 (cdr pair)
o|  4 (cdar (pair pair *))
o|Removed `not' forms: 5 
o|contracted procedure: k836 
o|inlining procedure: k833 
o|contracted procedure: "(scheduler.scm:223) switch116" 
o|contracted procedure: "(scheduler.scm:163) restore-thread-state-buffer" 
o|inlining procedure: k833 
o|contracted procedure: "(scheduler.scm:218) remove-from-ready-queue" 
o|inlining procedure: k1017 
o|inlining procedure: k1017 
o|propagated global variable: first-pair175 ready-queue-head 
o|inlining procedure: k872 
o|inlining procedure: k872 
o|contracted procedure: "(scheduler.scm:215) unblock-threads-for-i/o" 
o|inlining procedure: k1701 
o|inlining procedure: k1701 
o|inlining procedure: k1724 
o|inlining procedure: k1724 
o|inlining procedure: k1750 
o|inlining procedure: k1750 
o|inlining procedure: k1806 
o|inlining procedure: k1833 
o|inlining procedure: k1833 
o|contracted procedure: "(scheduler.scm:485) fdset-test" 
o|inlining procedure: k1587 
o|inlining procedure: k1587 
o|inlining procedure: k1603 
o|inlining procedure: k1603 
o|substituted constant variable: a1613 
o|substituted constant variable: a1618 
o|substituted constant variable: a1620 
o|substituted constant variable: a1625 
o|substituted constant variable: a1627 
o|inlining procedure: k1806 
o|inlining procedure: k1888 
o|inlining procedure: k1888 
o|substituted constant variable: a1896 
o|contracted procedure: "(scheduler.scm:436) create-fdset" 
o|inlining procedure: k1480 
o|contracted procedure: "(scheduler.scm:399) fdset-set" 
o|inlining procedure: k1536 
o|inlining procedure: k1536 
o|inlining procedure: k1558 
o|inlining procedure: k1558 
o|substituted constant variable: a1568 
o|substituted constant variable: a1573 
o|substituted constant variable: a1575 
o|substituted constant variable: a1580 
o|substituted constant variable: a1582 
o|inlining procedure: k1480 
o|inlining procedure: k1511 
o|inlining procedure: k1511 
o|inlining procedure: k891 
o|inlining procedure: k891 
o|inlining procedure: k909 
o|inlining procedure: k909 
o|contracted procedure: k939 
o|inlining procedure: k936 
o|inlining procedure: k936 
o|inlining procedure: k953 
o|inlining procedure: k953 
o|contracted procedure: "(scheduler.scm:170) update-thread-state-buffer" 
o|propagated global variable: ct124 ##sys#current-thread 
o|inlining procedure: k1003 
o|inlining procedure: k1003 
o|inlining procedure: k1089 
o|propagated global variable: ct199 ##sys#current-thread 
o|inlining procedure: k1089 
o|inlining procedure: k1118 
o|inlining procedure: k1118 
o|inlining procedure: k1133 
o|inlining procedure: k1133 
o|inlining procedure: k1165 
o|inlining procedure: k1165 
o|inlining procedure: k1203 
o|substituted constant variable: a1210 
o|inlining procedure: k1203 
o|inlining procedure: k1217 
o|inlining procedure: k1217 
o|inlining procedure: k1349 
o|inlining procedure: k1360 
o|inlining procedure: k1360 
o|inlining procedure: k1349 
o|inlining procedure: k1378 
o|inlining procedure: k1378 
o|inlining procedure: k1406 
o|inlining procedure: k1406 
o|contracted procedure: "(scheduler.scm:338) abandon-mutexes" 
o|inlining procedure: k1249 
o|inlining procedure: k1265 
o|inlining procedure: k1265 
o|inlining procedure: k1285 
o|inlining procedure: k1285 
o|inlining procedure: k1249 
o|inlining procedure: k1308 
o|inlining procedure: k1308 
o|propagated global variable: pt323 ##sys#primordial-thread 
o|propagated global variable: ct318 ##sys#current-thread 
o|inlining procedure: k1648 
o|inlining procedure: k1648 
o|inlining procedure: k1907 
o|inlining procedure: k1922 
o|inlining procedure: k1922 
o|inlining procedure: k1939 
o|inlining procedure: k1939 
o|inlining procedure: k1907 
o|inlining procedure: k1983 
o|inlining procedure: k1983 
o|inlining procedure: k2005 
o|inlining procedure: k2028 
o|inlining procedure: k2028 
o|inlining procedure: k2005 
o|inlining procedure: k2051 
o|inlining procedure: k2051 
o|inlining procedure: k2133 
o|inlining procedure: k2133 
o|replaced variables: 172 
o|removed binding forms: 71 
o|substituted constant variable: r10182158 
o|inlining procedure: k1026 
o|inlining procedure: k1026 
o|substituted constant variable: r9372192 
o|substituted constant variable: r9542197 
o|substituted constant variable: r12042217 
o|substituted constant variable: f_19212255 
o|simplifications: ((let . 1)) 
o|replaced variables: 47 
o|removed binding forms: 189 
o|removed conditional forms: 1 
o|inlining procedure: k842 
o|removed binding forms: 38 
o|contracted procedure: k797 
o|substituted constant variable: r8432334 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 16) (##core#call . 217)) 
o|  call simplifications:
o|    vector
o|    list
o|    ##sys#structure?	2
o|    flonum?
o|    fp<
o|    fx=	2
o|    set-cdr!	3
o|    equal?
o|    fp>=
o|    fxmax
o|    ##sys#setislot	18
o|    not
o|    caar	7
o|    fp-	2
o|    fx>
o|    zero?
o|    pair?	12
o|    car	12
o|    cons	15
o|    sub1	2
o|    add1	3
o|    cdr	7
o|    null?	25
o|    eq?	24
o|    ##sys#setslot	26
o|    ##sys#slot	47
o|contracted procedure: k807 
o|contracted procedure: k1040 
o|propagated global variable: ct124 ##sys#current-thread 
o|contracted procedure: k1042 
o|contracted procedure: k1044 
o|contracted procedure: k1046 
o|contracted procedure: k1048 
o|contracted procedure: k1050 
o|contracted procedure: k809 
o|contracted procedure: k867 
o|contracted procedure: k857 
o|contracted procedure: k795 
o|contracted procedure: k1059 
o|contracted procedure: k1062 
o|contracted procedure: k1066 
o|contracted procedure: k1070 
o|contracted procedure: k1074 
o|contracted procedure: k1078 
o|contracted procedure: k1082 
o|contracted procedure: k800 
o|contracted procedure: k802 
o|contracted procedure: k848 
o|contracted procedure: k842 
o|contracted procedure: k1020 
o|contracted procedure: k1023 
o|contracted procedure: k1029 
o|inlining procedure: "(scheduler.scm:213) force-primordial" 
o|contracted procedure: k875 
o|contracted procedure: k1690 
o|contracted procedure: k1692 
o|contracted procedure: k1704 
o|inlining procedure: "(scheduler.scm:450) force-primordial" 
o|contracted procedure: k1713 
o|contracted procedure: k1726 
o|contracted procedure: k1728 
o|contracted procedure: k1731 
o|contracted procedure: k1733 
o|contracted procedure: k1738 
o|contracted procedure: k1752 
o|contracted procedure: k1758 
o|contracted procedure: k1765 
o|contracted procedure: k1768 
o|contracted procedure: k1771 
o|contracted procedure: k1777 
o|contracted procedure: k1783 
o|contracted procedure: k1786 
o|contracted procedure: k1789 
o|contracted procedure: k1791 
o|contracted procedure: k1793 
o|contracted procedure: k1798 
o|contracted procedure: k1809 
o|contracted procedure: k1868 
o|contracted procedure: k1830 
o|contracted procedure: k1848 
o|contracted procedure: k1860 
o|contracted procedure: k1590 
o|contracted procedure: k1592 
o|contracted procedure: k1598 
o|contracted procedure: k1600 
o|contracted procedure: k1606 
o|contracted procedure: k1821 
o|contracted procedure: k1880 
o|contracted procedure: k1891 
o|contracted procedure: k1894 
o|contracted procedure: k1898 
o|contracted procedure: k1482 
o|contracted procedure: k1485 
o|contracted procedure: k1489 
o|contracted procedure: k1495 
o|contracted procedure: k1539 
o|contracted procedure: k1541 
o|contracted procedure: k1550 
o|contracted procedure: k1552 
o|contracted procedure: k1561 
o|contracted procedure: k1513 
o|contracted procedure: k1522 
o|contracted procedure: k1525 
o|contracted procedure: k881 
o|contracted procedure: k893 
o|contracted procedure: k897 
o|contracted procedure: k901 
o|contracted procedure: k906 
o|contracted procedure: k912 
o|contracted procedure: k915 
o|contracted procedure: k933 
o|contracted procedure: k948 
o|contracted procedure: k944 
o|contracted procedure: k950 
o|contracted procedure: k956 
o|contracted procedure: k967 
o|contracted procedure: k969 
o|contracted procedure: k972 
o|propagated global variable: ct124 ##sys#current-thread 
o|propagated global variable: ct124 ##sys#current-thread 
o|contracted procedure: k984 
o|contracted procedure: k999 
o|contracted procedure: k1001 
o|contracted procedure: k1006 
o|contracted procedure: k1003 
o|contracted procedure: k1094 
o|contracted procedure: k1097 
o|contracted procedure: k1120 
o|contracted procedure: k1123 
o|contracted procedure: k1125 
o|contracted procedure: k1144 
o|contracted procedure: k1130 
o|contracted procedure: k1154 
o|contracted procedure: k1156 
o|contracted procedure: k1167 
o|contracted procedure: k1182 
o|contracted procedure: k1179 
o|contracted procedure: k1189 
o|contracted procedure: k1185 
o|contracted procedure: k1195 
o|contracted procedure: k1201 
o|contracted procedure: k1206 
o|contracted procedure: k1215 
o|contracted procedure: k1220 
o|contracted procedure: k1222 
o|contracted procedure: k1238 
o|contracted procedure: k1235 
o|contracted procedure: k1225 
o|contracted procedure: k1227 
o|contracted procedure: k1229 
o|contracted procedure: k1330 
o|contracted procedure: k1339 
o|contracted procedure: k1341 
o|contracted procedure: k1343 
o|contracted procedure: k1345 
o|contracted procedure: k1347 
o|contracted procedure: k1355 
o|contracted procedure: k1369 
o|contracted procedure: k1362 
o|contracted procedure: k1380 
o|contracted procedure: k1389 
o|contracted procedure: k1392 
o|contracted procedure: k1394 
o|contracted procedure: k1404 
o|contracted procedure: k1409 
o|contracted procedure: k1419 
o|contracted procedure: k1247 
o|contracted procedure: k1252 
o|contracted procedure: k1257 
o|contracted procedure: k1259 
o|contracted procedure: k1261 
o|contracted procedure: k1263 
o|contracted procedure: k1271 
o|contracted procedure: k1287 
o|contracted procedure: k1296 
o|contracted procedure: k1299 
o|contracted procedure: k1310 
o|contracted procedure: k1319 
o|contracted procedure: k1322 
o|contracted procedure: k1425 
o|contracted procedure: k1427 
o|contracted procedure: k1438 
o|contracted procedure: k1445 
o|contracted procedure: k1447 
o|propagated global variable: pt323 ##sys#primordial-thread 
o|propagated global variable: pt323 ##sys#primordial-thread 
o|contracted procedure: k1634 
o|contracted procedure: k1636 
o|contracted procedure: k1642 
o|contracted procedure: k1650 
o|contracted procedure: k1658 
o|contracted procedure: k1654 
o|contracted procedure: k1660 
o|contracted procedure: k1682 
o|contracted procedure: k1665 
o|contracted procedure: k1672 
o|contracted procedure: k1962 
o|contracted procedure: k1909 
o|contracted procedure: k1959 
o|contracted procedure: k1912 
o|contracted procedure: k1924 
o|contracted procedure: k1927 
o|contracted procedure: k1929 
o|contracted procedure: k1934 
o|contracted procedure: k1942 
o|contracted procedure: k1946 
o|contracted procedure: k2088 
o|contracted procedure: k1968 
o|contracted procedure: k2082 
o|contracted procedure: k1970 
o|contracted procedure: k2076 
o|contracted procedure: k1972 
o|contracted procedure: k2070 
o|contracted procedure: k1974 
o|contracted procedure: k1985 
o|contracted procedure: k2007 
o|contracted procedure: k2016 
o|contracted procedure: k2030 
o|contracted procedure: k2037 
o|contracted procedure: k2053 
o|contracted procedure: k2065 
o|contracted procedure: k2103 
o|contracted procedure: k2114 
o|contracted procedure: k2118 
o|contracted procedure: k2122 
o|contracted procedure: k2126 
o|contracted procedure: k2154 
o|contracted procedure: k2135 
o|contracted procedure: k2151 
o|simplifications: ((let . 36)) 
o|removed binding forms: 196 
o|inlining procedure: "(scheduler.scm:213) force-primordial" 
o|inlining procedure: "(scheduler.scm:450) force-primordial" 
o|replaced variables: 13 
o|removed side-effect free assignment to unused variable: ##sys#force-primordial 
o|replaced variables: 2 
o|removed binding forms: 10 
o|removed binding forms: 3 
o|direct leaf routine/allocation: loop205 0 
o|converted assignments to bindings: (loop205) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (k2137 loop509 loop506 loop502 loop499 loop468 loop407 for-each-loop241274 for-each-loop255266 k1332 for-each-loop288299 k1150 k1169 loop215 k930 ##sys#clear-i/o-state-for-thread! loop133 for-each-loop343355 loop338 k1694 k1836 loop2450 loop436 k831 loop1131 loop2148) 
o|calls to known targets: 72 
o|identified direct recursive calls: f_1747 1 
o|identified direct recursive calls: f_1721 1 
o|identified direct recursive calls: f_888 1 
o|identified direct recursive calls: f_1115 1 
o|identified direct recursive calls: f_1645 1 
o|identified direct recursive calls: f_1919 1 
o|identified direct recursive calls: f_2025 1 
o|fast box initializations: 17 
o|fast global references: 24 
o|fast global assignments: 19 
o|dropping unused closure argument: f_1904 
*/
/* end of file */
