/* Generated from files.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:46
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: files.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file files.c
   unit: files
*/

#include "chicken.h"

#include <unistd.h>
#include <errno.h>

#ifndef _WIN32
# include <sys/stat.h>
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#else
# define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[106];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,21),40,100,101,108,101,116,101,45,102,105,108,101,42,32,102,105,108,101,54,50,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,100,57,50,32,108,57,51,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,99,111,112,121,32,111,114,105,103,102,105,108,101,55,48,32,110,101,119,102,105,108,101,55,49,32,46,32,116,109,112,54,57,55,50,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,49,51,50,32,108,49,51,51,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,46),40,102,105,108,101,45,109,111,118,101,32,111,114,105,103,102,105,108,101,49,49,48,32,110,101,119,102,105,108,101,49,49,49,32,46,32,116,109,112,49,48,57,49,49,50,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,26),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,63,32,112,110,49,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,14),40,102,95,49,48,50,55,32,99,104,49,55,51,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,17),40,99,104,111,112,45,112,100,115,32,115,116,114,49,54,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,115,49,56,49,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,49,55,57,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,27),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,49,56,53,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,102,95,49,49,55,51,32,99,104,50,48,56,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,45),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,49,57,50,32,100,105,114,49,57,51,32,102,105,108,101,49,57,52,32,101,120,116,49,57,53,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,43),40,109,97,107,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,50,49,56,32,102,105,108,101,50,49,57,32,46,32,116,109,112,50,49,55,50,50,48,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,52),40,109,97,107,101,45,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,50,51,49,32,102,105,108,101,50,51,50,32,46,32,116,109,112,50,51,48,50,51,51,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,15),40,102,95,49,50,51,57,32,100,105,114,50,53,48,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,100,101,99,111,109,112,111,115,101,45,112,97,116,104,110,97,109,101,32,112,110,50,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,8),40,102,95,49,51,49,57,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,48),40,102,95,49,51,50,52,32,100,105,114,50,53,56,50,53,57,50,54,52,32,102,105,108,101,50,54,48,50,54,49,50,54,53,32,101,120,116,50,54,50,50,54,51,50,54,54,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,100,105,114,101,99,116,111,114,121,32,112,110,50,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,8),40,102,95,49,51,51,51,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,48),40,102,95,49,51,51,56,32,100,105,114,50,55,50,50,55,51,50,55,56,32,102,105,108,101,50,55,52,50,55,53,50,55,57,32,101,120,116,50,55,54,50,55,55,50,56,48,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,21),40,112,97,116,104,110,97,109,101,45,102,105,108,101,32,112,110,50,55,49,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,8),40,102,95,49,51,52,55,41};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,48),40,102,95,49,51,53,50,32,100,105,114,50,56,54,50,56,55,50,57,50,32,102,105,108,101,50,56,56,50,56,57,50,57,51,32,101,120,116,50,57,48,50,57,49,50,57,52,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,101,120,116,101,110,115,105,111,110,32,112,110,50,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,8),40,102,95,49,51,54,49,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,48),40,102,95,49,51,54,54,32,100,105,114,51,48,48,51,48,49,51,48,54,32,102,105,108,101,51,48,50,51,48,51,51,48,55,32,101,120,116,51,48,52,51,48,53,51,48,56,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,100,105,114,101,99,116,111,114,121,32,112,110,50,57,57,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,8),40,102,95,49,51,55,56,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,48),40,102,95,49,51,56,51,32,100,105,114,51,49,52,51,49,53,51,50,48,32,102,105,108,101,51,49,54,51,49,55,51,50,49,32,101,120,116,51,49,56,51,49,57,51,50,50,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,101,120,116,101,110,115,105,111,110,32,112,110,51,49,51,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,8),40,102,95,49,51,57,53,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,46),40,102,95,49,52,48,48,32,95,51,50,57,51,51,48,51,51,53,32,102,105,108,101,51,51,49,51,51,50,51,51,54,32,101,120,116,51,51,51,51,51,52,51,51,55,41,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,100,105,114,101,99,116,111,114,121,32,112,110,51,50,55,32,100,105,114,51,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,8),40,102,95,49,52,49,50,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,45),40,102,95,49,52,49,55,32,100,105,114,51,52,52,51,52,53,51,53,48,32,95,51,52,54,51,52,55,51,53,49,32,101,120,116,51,52,56,51,52,57,51,53,50,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,37),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,102,105,108,101,32,112,110,51,52,50,32,102,105,108,101,51,52,51,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,8),40,102,95,49,52,50,57,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,46),40,102,95,49,52,51,52,32,100,105,114,51,53,57,51,54,48,51,54,53,32,102,105,108,101,51,54,49,51,54,50,51,54,54,32,95,51,54,51,51,54,52,51,54,55,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,101,120,116,101,110,115,105,111,110,32,112,110,51,53,55,32,101,120,116,51,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,9),40,116,101,109,112,100,105,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,13),40,102,95,49,52,57,51,32,112,52,48,53,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,35),40,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,102,105,108,101,32,46,32,116,109,112,51,57,53,51,57,54,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,28),40,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,18),40,97,100,100,112,97,114,116,32,112,97,114,116,115,52,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,54,56,32,112,52,54,52,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,53,52,32,103,52,54,49,52,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,14),40,102,95,49,55,53,48,32,99,104,52,56,49,41,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,105,52,52,51,32,112,114,101,118,52,52,52,32,112,97,114,116,115,52,52,53,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,40),40,110,111,114,109,97,108,105,122,101,45,112,97,116,104,110,97,109,101,32,112,97,116,104,52,51,49,32,46,32,116,109,112,52,51,48,52,51,50,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,24),40,100,105,114,101,99,116,111,114,121,45,110,117,108,108,63,32,100,105,114,52,57,54,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,28),40,100,101,99,111,109,112,111,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,53,48,53,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,14),40,102,95,49,57,55,54,32,112,110,49,52,57,41,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,14),40,102,95,49,57,56,50,32,114,116,49,53,48,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,14),40,102,95,49,57,57,49,32,114,116,49,53,50,41,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,30),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,49,53,55,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,19),40,114,111,111,116,45,111,114,105,103,105,110,32,114,116,49,53,56,41,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,22),40,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,49,53,57,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_875)
static void C_ccall f_875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_875)
static void C_ccall f_875r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1282)
static void C_ccall f_1282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1285)
static void C_ccall f_1285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1412)
static void C_ccall f_1412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1574)
static C_word C_fcall f_1574(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1355)
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1199)
static void C_ccall f_1199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_932)
static void C_ccall f_932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1724)
static void C_ccall f_1724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1372)
static void C_ccall f_1372(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_911)
static void C_fcall f_911(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_784)
static void C_ccall f_784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_788)
static void C_ccall f_788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_fcall f_1115(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1693)
static void C_fcall f_1693(C_word t0,C_word t1) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_790)
static void C_ccall f_790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_792)
static void C_ccall f_792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1626)
static void C_fcall f_1626(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1135)
static void C_ccall f_1135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(C_files_toplevel)
C_externexport void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_909)
static void C_ccall f_909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_ccall f_901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1141)
static void C_fcall f_1141(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1157)
static void C_ccall f_1157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1665)
static void C_ccall f_1665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1039)
static void C_fcall f_1039(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1005)
static void C_fcall f_1005(C_word t0,C_word t1) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1207)
static void C_ccall f_1207(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1207)
static void C_ccall f_1207r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1758)
static void C_fcall f_1758(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_831)
static void C_ccall f_831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_fcall f_1086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1027)
static void C_ccall f_1027(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1224)
static void C_ccall f_1224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_809)
static void C_ccall f_809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_800)
static void C_fcall f_800(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1236)
static void C_ccall f_1236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1238)
static void C_ccall f_1238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_811)
static void C_ccall f_811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_fcall f_1048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_748)
static void C_ccall f_748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_752)
static void C_ccall f_752(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_750)
static void C_ccall f_750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_ccall f_1972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_991)
static void C_fcall f_991(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1873)
static C_word C_fcall f_1873(C_word t0);
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1551)
static void C_ccall f_1551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1554)
static void C_ccall f_1554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1523)
static void C_fcall f_1523(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1017)
static void C_ccall f_1017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_fcall f_1715(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1188)
static void C_ccall f_1188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1188)
static void C_ccall f_1188r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1333)
static void C_ccall f_1333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1327)
static void C_ccall f_1327(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1635)
static void C_fcall f_1635(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1440)
static void C_fcall f_1440(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1493)
static void C_ccall f_1493(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1533)
static void C_ccall f_1533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_893)
static void C_ccall f_893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_fcall f_1475(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2000)
static void C_ccall f_2000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1276)
static void C_ccall f_1276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1804)
static void C_fcall f_1804(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_911)
static void C_fcall trf_911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_911(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_911(t0,t1,t2,t3);}

C_noret_decl(trf_1115)
static void C_fcall trf_1115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1115(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1115(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1693)
static void C_fcall trf_1693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1693(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1693(t0,t1);}

C_noret_decl(trf_1626)
static void C_fcall trf_1626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1626(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1626(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1141)
static void C_fcall trf_1141(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1141(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1141(t0,t1);}

C_noret_decl(trf_1039)
static void C_fcall trf_1039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1039(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1039(t0,t1);}

C_noret_decl(trf_1005)
static void C_fcall trf_1005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1005(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1005(t0,t1);}

C_noret_decl(trf_1758)
static void C_fcall trf_1758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1758(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1758(t0,t1);}

C_noret_decl(trf_1086)
static void C_fcall trf_1086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1086(t0,t1,t2);}

C_noret_decl(trf_800)
static void C_fcall trf_800(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_800(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_800(t0,t1,t2,t3);}

C_noret_decl(trf_1048)
static void C_fcall trf_1048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1048(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1048(t0,t1,t2);}

C_noret_decl(trf_991)
static void C_fcall trf_991(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_991(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_991(t0,t1);}

C_noret_decl(trf_1523)
static void C_fcall trf_1523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1523(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1523(t0,t1);}

C_noret_decl(trf_1715)
static void C_fcall trf_1715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1715(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1715(t0,t1,t2);}

C_noret_decl(trf_1635)
static void C_fcall trf_1635(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1635(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1635(t0,t1);}

C_noret_decl(trf_1440)
static void C_fcall trf_1440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1440(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1440(t0,t1);}

C_noret_decl(trf_1475)
static void C_fcall trf_1475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1475(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1475(t0,t1);}

C_noret_decl(trf_1804)
static void C_fcall trf_1804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1804(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1804(t0,t1);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

/* file-move in k749 in k747 in k745 */
static void C_ccall f_875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_875r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_875r(t0,t1,t2,t3,t4);}}

static void C_ccall f_875r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(1024):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_string_2(t2,lf[17]);
t14=C_i_check_string_2(t3,lf[17]);
t15=C_i_check_number_2(t10,lf[17]);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_893,a[2]=t2,a[3]=t10,a[4]=t1,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t10))){
if(C_truep(C_fixnum_greaterp(t10,C_fix(0)))){
t17=t16;
f_893(2,t17,C_SCHEME_UNDEFINED);}
else{
/* files.scm:108: ##sys#error */
t17=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,lf[17],lf[20],t10);}}
else{
/* files.scm:108: ##sys#error */
t17=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,lf[17],lf[20],t10);}}

/* k1281 in k1278 in k1275 in k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:243: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1284 in k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:244: strip-pds */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* root-directory in k1999 in k749 in k747 in k745 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2012,3,t0,t1,t2);}
if(C_truep(t2)){
/* files.scm:154: irregex-match-substring */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_fix(1));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1286 in k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1287,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1296,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:250: irregex-match-substring */
t4=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_fix(1));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:253: strip-pds */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}

/* f_1412 in pathname-replace-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1412,2,t0,t1);}
/* files.scm:287: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1417 in pathname-replace-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1417,5,t0,t1,t2,t3,t4);}
/* files.scm:288: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,((C_word*)t0)[2],t4);}

/* addpart in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static C_word C_fcall f_1574(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
if(C_truep(C_i_string_equal_p(lf[76],t1))){
t3=t2;
return(t3);}
else{
t3=t1;
if(C_truep(C_u_i_string_equal_p(lf[77],t3))){
t4=C_i_nullp(t2);
if(C_truep(t4)){
return((C_truep(t4)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}
else{
t5=C_i_car(t2);
t6=C_i_string_equal_p(lf[78],t5);
return((C_truep(t6)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}}
else{
return(C_a_i_cons(&a,2,t1,t2));}}}

/* pathname-replace-extension in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1423,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1429,a[2]=t2,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1434,a[2]=t3,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
/* files.scm:291: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* f_1429 in pathname-replace-extension in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1429,2,t0,t1);}
/* files.scm:292: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1352 in pathname-extension in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1352,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* pathname-strip-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1355,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1361,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1366,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* files.scm:271: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1517,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1523,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1523(t5,t1);}

/* k1198 in make-pathname in k990 in k749 in k747 in k745 */
static void C_ccall f_1199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:214: _make-pathname */
f_1115(((C_word*)t0)[3],lf[29],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* f_1361 in pathname-strip-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1361,2,t0,t1);}
/* files.scm:272: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k931 in k925 in loop in k908 in k902 in k900 in k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* files.scm:133: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_911(t3,((C_word*)t0)[5],t1,t2);}

/* k936 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
f_897(2,t2,((C_word*)t0)[2]);}
else{
/* files.scm:116: ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[17],lf[18],((C_word*)t0)[4]);}}
else{
t2=((C_word*)t0)[3];
f_897(2,t2,C_SCHEME_FALSE);}}

/* f_1366 in pathname-strip-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1366,5,t0,t1,t2,t3,t4);}
/* files.scm:273: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,C_SCHEME_FALSE,t3,t4);}

/* k1723 in for-each-loop454 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1715(t3,((C_word*)t0)[4],t2);}

/* pathname-strip-extension in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1372(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1372,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1378,a[2]=t2,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1383,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* files.scm:276: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k1670 */
static void C_ccall f_1671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:383: display */
t2=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k945 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:113: ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[17],lf[19],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_895(2,t2,C_SCHEME_UNDEFINED);}}

/* k919 in loop in k908 in k902 in k900 in k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:128: close-output-port */
t3=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k1683 in k1681 in k1678 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1686,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm:387: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[85]+1)))(3,*((C_word*)lf[85]+1),t2,t1);}

/* k1685 in k1683 in k1681 in k1678 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1686,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_string_equal_p(((C_word*)t0)[2],((C_word*)t2)[1]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1693,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1704,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_string(&a,1,((C_word*)t0)[6]);
/* files.scm:390: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t4,t5,((C_word*)t2)[1]);}
else{
t4=t3;
f_1693(t4,C_SCHEME_UNDEFINED);}}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t2)[1]);}}

/* loop in k908 in k902 in k900 in k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_fcall f_911(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_911,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_920,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* files.scm:127: close-input-port */
t6=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_926,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* files.scm:132: write-string */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[7],t2,((C_word*)t0)[3]);}}

/* k1678 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[7],((C_word*)t0)[8]);
if(C_truep(t3)){
/* files.scm:385: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t2,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t4=t2;
f_1682(2,t4,C_SCHEME_UNDEFINED);}}

/* k1681 in k1678 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1682,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:386: get-output-string */
t3=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_831,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:81: file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_825,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* files.scm:87: directory-exists? */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:89: open-input-file */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[10]);}

/* k787 in k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_790,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:90: open-output-file */
t3=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[10]);}

/* _make-pathname in k990 in k749 in k747 in k745 */
static void C_fcall f_1115(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1115,NULL,5,t1,t2,t3,t4,t5);}
t6=(C_truep(t5)?t5:lf[34]);
t7=(C_truep(t4)?t4:lf[35]);
t8=C_i_check_string_2(t3,t2);
t9=C_i_check_string_2(t7,t2);
t10=C_i_check_string_2(t6,t2);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1135,a[2]=t1,a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1157,a[2]=t7,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
t13=C_block_size(t3);
if(C_truep(C_fixnum_greater_or_equal_p(t13,C_fix(1)))){
t14=C_block_size(t7);
if(C_truep(C_fixnum_greater_or_equal_p(t14,C_fix(1)))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1173,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t16=C_subchar(t7,C_fix(0));
/* files.scm:203: g206 */
t17=t15;
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t12,t16);}
else{
t15=t12;
f_1157(2,t15,C_SCHEME_FALSE);}}
else{
t14=t12;
f_1157(2,t14,C_SCHEME_FALSE);}}

/* k1505 in k1502 in k1496 in loop in create-temporary-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:317: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[64],t1);}

/* k1745 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1746,2,t0,t1);}
t2=f_1574(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_1635(t4,t3);}

/* k925 in loop in k908 in k902 in k900 in k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:133: read-string! */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k1692 in k1685 in k1683 in k1681 in k1678 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_fcall f_1693(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1693,NULL,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1700,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:392: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}}

/* k921 in k919 in loop in k908 in k902 in k900 in k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:129: delete-file */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k923 in k921 in k919 in loop in k908 in k902 in k900 in k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k789 in k787 in k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_792,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* files.scm:91: make-string */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1502 in k1496 in loop in create-temporary-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_fudge(C_fix(33));
/* files.scm:321: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[65]+1)))(3,*((C_word*)lf[65]+1),t2,t3);}

/* k1295 in k1286 in k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm:251: irregex-match-substring */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],C_fix(2));}

/* k791 in k789 in k787 in k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm:92: read-string! */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3]);}

/* k1499 in k1496 in loop in create-temporary-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:315: make-pathname */
t2=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k797 in k791 in k789 in k787 in k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_798,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li1),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_800(t5,((C_word*)t0)[6],t1,C_fix(0));}

/* f_1750 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1750,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_memq(t2,lf[89]));}

/* k1754 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1756,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[6])[1]))){
t3=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[9],0,C_SCHEME_TRUE);
t5=t2;
f_1758(t5,t4);}
else{
t4=t2;
f_1758(t4,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_1758(t3,C_SCHEME_UNDEFINED);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1804,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[6])[1]))){
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[2];
t5=C_subchar(t3,t4);
t6=C_i_char_equalp(t5,C_make_character(58));
t7=t2;
f_1804(t7,(C_truep(t6)?C_eqp(lf[74],((C_word*)t0)[11]):C_SCHEME_FALSE));}
else{
t3=t2;
f_1804(t3,C_SCHEME_FALSE);}}}

/* loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_fcall f_1626(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1626,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1635,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1746,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* files.scm:369: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),t7,((C_word*)t0)[7],t3,t2);}
else{
t7=t6;
f_1635(t7,C_SCHEME_UNDEFINED);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1750,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1756,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[3],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
t8=C_i_string_ref(((C_word*)t0)[7],t2);
/* files.scm:394: g479 */
t9=t6;
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}}

/* k1298 in k1295 in k1286 in k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:249: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_FALSE);}

/* k1134 in _make-pathname in k990 in k749 in k747 in k745 */
static void C_ccall f_1135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1135,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[4]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t4=C_subchar(((C_word*)t0)[4],C_fix(0));
t5=C_i_char_equalp(t4,C_make_character(46));
t6=t2;
f_1141(t6,C_i_not(t5));}
else{
t4=t2;
f_1141(t4,C_SCHEME_FALSE);}}

/* f_1400 in pathname-replace-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1400,5,t0,t1,t2,t3,t4);}
/* files.scm:283: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t3,t4);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_files_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("files_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(638)){
C_save(t1);
C_rereclaim2(638*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,106);
lf[0]=C_h_intern(&lf[0],12,"delete-file\052");
lf[1]=C_h_intern(&lf[1],11,"delete-file");
lf[2]=C_h_intern(&lf[2],12,"file-exists\077");
lf[3]=C_h_intern(&lf[3],9,"file-copy");
lf[4]=C_h_intern(&lf[4],17,"close-output-port");
lf[5]=C_h_intern(&lf[5],16,"close-input-port");
lf[6]=C_h_intern(&lf[6],12,"read-string!");
lf[7]=C_h_intern(&lf[7],12,"write-string");
lf[8]=C_h_intern(&lf[8],11,"make-string");
lf[9]=C_h_intern(&lf[9],16,"open-output-file");
lf[10]=C_h_intern(&lf[10],7,"\000binary");
lf[11]=C_h_intern(&lf[11],15,"open-input-file");
lf[12]=C_h_intern(&lf[12],9,"\003syserror");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\030can not copy directories");
lf[14]=C_h_intern(&lf[14],17,"directory-exists\077");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000#newfile exists but clobber is false");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000/invalid blocksize given: not a positive integer");
lf[17]=C_h_intern(&lf[17],9,"file-move");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000#newfile exists but clobber is false");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\030can not move directories");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000/invalid blocksize given: not a positive integer");
lf[24]=C_h_intern(&lf[24],18,"absolute-pathname\077");
lf[25]=C_h_intern(&lf[25],19,"irregex-match-data\077");
lf[27]=C_h_intern(&lf[27],13,"\003syssubstring");
lf[28]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[29]=C_h_intern(&lf[29],13,"make-pathname");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[31]=C_h_intern(&lf[31],13,"string-append");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[38]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[39]=C_h_intern(&lf[39],22,"make-absolute-pathname");
lf[40]=C_h_intern(&lf[40],17,"\003sysstring-append");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[44]=C_h_intern(&lf[44],18,"decompose-pathname");
lf[45]=C_h_intern(&lf[45],23,"irregex-match-substring");
lf[46]=C_h_intern(&lf[46],14,"irregex-search");
lf[47]=C_h_intern(&lf[47],18,"pathname-directory");
lf[48]=C_h_intern(&lf[48],13,"pathname-file");
lf[49]=C_h_intern(&lf[49],18,"pathname-extension");
lf[50]=C_h_intern(&lf[50],24,"pathname-strip-directory");
lf[51]=C_h_intern(&lf[51],24,"pathname-strip-extension");
lf[52]=C_h_intern(&lf[52],26,"pathname-replace-directory");
lf[53]=C_h_intern(&lf[53],21,"pathname-replace-file");
lf[54]=C_h_intern(&lf[54],26,"pathname-replace-extension");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\004temp");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\004/tmp");
lf[57]=C_h_intern(&lf[57],24,"get-environment-variable");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\003TMP");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\004TEMP");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\006TMPDIR");
lf[61]=C_h_intern(&lf[61],21,"create-temporary-file");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\003tmp");
lf[63]=C_h_intern(&lf[63],21,"call-with-output-file");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[65]=C_h_intern(&lf[65],18,"\003sysnumber->string");
lf[66]=C_h_intern(&lf[66],26,"create-temporary-directory");
lf[67]=C_h_intern(&lf[67],15,"\003syssignal-hook");
lf[68]=C_h_intern(&lf[68],11,"\000file-error");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000$cannot create temporary directory - ");
lf[70]=C_h_intern(&lf[70],17,"\003syspeek-c-string");
lf[71]=C_h_intern(&lf[71],17,"\003sysmake-c-string");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[73]=C_h_intern(&lf[73],7,"mingw32");
lf[74]=C_h_intern(&lf[74],7,"windows");
lf[75]=C_h_intern(&lf[75],4,"unix");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[79]=C_h_intern(&lf[79],18,"normalize-pathname");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[82]=C_h_intern(&lf[82],7,"display");
lf[83]=C_h_intern(&lf[83],16,"\003syswrite-char-0");
lf[84]=C_h_intern(&lf[84],8,"for-each");
lf[85]=C_h_intern(&lf[85],20,"\003sysexpand-home-path");
lf[86]=C_h_intern(&lf[86],17,"get-output-string");
lf[87]=C_h_intern(&lf[87],16,"\003sysfast-reverse");
lf[88]=C_h_intern(&lf[88],18,"open-output-string");
lf[89]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[90]=C_h_intern(&lf[90],15,"directory-null\077");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[93]=C_h_intern(&lf[93],12,"string-split");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[95]=C_h_intern(&lf[95],19,"decompose-directory");
lf[96]=C_h_intern(&lf[96],14,"build-platform");
lf[97]=C_h_intern(&lf[97],7,"irregex");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\034^(.\052[\134/\134\134])\077((\134.)\077[^\134/\134\134]+)$");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000&^(.\052[\134/\134\134])\077([^\134/\134\134]+)(\134.([^\134/\134\134.]+))$");
lf[100]=C_h_intern(&lf[100],20,"\003syswindows-platform");
lf[101]=C_h_intern(&lf[101],13,"irregex-match");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\026([A-Za-z]:)\077([\134/\134\134]).\052");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\012([\134/\134\134]).\052");
lf[104]=C_h_intern(&lf[104],17,"register-feature!");
lf[105]=C_h_intern(&lf[105],5,"files");
C_register_lf2(lf,106,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_746,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k908 in k902 in k900 in k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_909,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li3),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_911(t5,((C_word*)t0)[7],t1,C_fix(0));}

/* pathname-replace-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1406,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1412,a[2]=t2,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1417,a[2]=t3,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
/* files.scm:286: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* k902 in k900 in k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_903,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* files.scm:123: read-string! */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],t1,((C_word*)t0)[4]);}

/* k900 in k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_903,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm:122: make-string */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k1139 in k1134 in _make-pathname in k990 in k749 in k747 in k745 */
static void C_fcall f_1141(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:199: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[36],((C_word*)t0)[5]);}
else{
/* files.scm:199: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[37],((C_word*)t0)[5]);}}

/* k1155 in _make-pathname in k990 in k749 in k747 in k745 */
static void C_ccall f_1157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
/* files.scm:204: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1),t2);}
else{
t2=((C_word*)t0)[3];
f_1135(2,t2,((C_word*)t0)[2]);}}

/* k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(t1);
/* files.scm:379: display */
t4=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1665,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* files.scm:378: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(3,*((C_word*)lf[87]+1),t2,((C_word*)((C_word*)t0)[8])[1]);}

/* f_1668 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1668,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1671,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm:382: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1667(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
t5=C_i_check_list_2(t4,lf[84]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1680,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1715,a[2]=t8,a[3]=t2,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1715(t10,t6,t4);}

/* conc-dirs in k990 in k749 in k747 in k745 */
static void C_fcall f_1039(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1039,NULL,2,t1,t2);}
t3=C_i_check_list_2(t2,lf[29]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1048,a[2]=t5,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1048(t7,t1,t2);}

/* k1002 in absolute-pathname? in k990 in k749 in k747 in k745 */
static void C_ccall f_1003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:158: irregex-match-data? */
t2=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* chop-pds in k990 in k749 in k747 in k745 */
static void C_fcall f_1005(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1005,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1017,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(1)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1027,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t6=C_fixnum_difference(t3,C_fix(1));
t7=C_subchar(t2,t6);
/* files.scm:166: g171 */
t8=t5;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t4,t7);}
else{
t5=t4;
f_1017(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k823 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:88: ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[3],lf[13],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_786(2,t2,C_SCHEME_UNDEFINED);}}

/* make-absolute-pathname in k990 in k749 in k747 in k745 */
static void C_ccall f_1207(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1207r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1207r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1207r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1218,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* files.scm:220: canonicalize-dirs */
t8=((C_word*)((C_word*)t0)[3])[1];
f_1086(t8,t7,t2);}

/* k1757 in k1754 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_fcall f_1758(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1758,NULL,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* files.scm:398: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1626(t5,((C_word*)t0)[5],t3,t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1788,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* files.scm:401: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),t5,((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1610(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_1610r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1610r(t0,t1,t2,t3);}}

static void C_ccall f_1610r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?((C_word*)t0)[2]:C_i_car(t3));
t6=C_eqp(t5,lf[74]);
t7=(C_truep(t6)?C_make_character(92):C_make_character(47));
t8=C_i_check_string_2(t2,lf[79]);
t9=C_block_size(t2);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1626,a[2]=t9,a[3]=t13,a[4]=t11,a[5]=t7,a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=t15,a[9]=t5,a[10]=((C_word)li51),tmp=(C_word)a,a+=11,tmp));
t17=((C_word*)t15)[1];
f_1626(t17,t1,C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* k1217 in make-absolute-pathname in k990 in k749 in k747 in k745 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1218,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1224,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* files.scm:221: absolute-pathname? */
t4=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k829 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
f_784(2,t2,((C_word*)t0)[2]);}
else{
/* files.scm:83: ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[3],lf[15],((C_word*)t0)[4]);}}
else{
t2=((C_word*)t0)[3];
f_784(2,t2,C_SCHEME_FALSE);}}

/* canonicalize-dirs in k990 in k749 in k747 in k745 */
static void C_fcall f_1086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1086,NULL,3,t0,t1,t2);}
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[33]);}
else{
if(C_truep(C_i_stringp(t2))){
t5=C_a_i_list1(&a,1,t2);
/* files.scm:190: conc-dirs */
f_1039(t1,t5);}
else{
/* files.scm:191: conc-dirs */
f_1039(t1,t2);}}}

/* f_1027 in chop-pds in k990 in k749 in k747 in k745 */
static void C_ccall f_1027(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1027,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_memq(t2,lf[28]));}

/* k1222 in k1217 in make-absolute-pathname in k990 in k749 in k747 in k745 */
static void C_ccall f_1224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
/* files.scm:218: _make-pathname */
f_1115(((C_word*)t0)[4],lf[39],t2,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* files.scm:223: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[7],lf[41],((C_word*)t0)[2]);}}

/* k1219 in k1217 in make-absolute-pathname in k990 in k749 in k747 in k745 */
static void C_ccall f_1221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:218: _make-pathname */
f_1115(((C_word*)t0)[3],lf[39],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k808 in loop in k797 in k791 in k789 in k787 in k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_809,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:97: close-output-port */
t3=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* loop in k797 in k791 in k789 in k787 in k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_fcall f_800(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_800,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_809,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm:96: close-input-port */
t6=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_813,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* files.scm:100: write-string */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[6],t2,((C_word*)t0)[2]);}}

/* k1076 in k1073 in loop in conc-dirs in k990 in k749 in k747 in k745 */
static void C_ccall f_1077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:183: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[32],t1);}

/* k1073 in loop in conc-dirs in k990 in k749 in k747 in k745 */
static void C_ccall f_1074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1074,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1077,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* files.scm:186: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1048(t5,t2,t4);}

/* k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1236,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1238,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* files.scm:230: irregex */
t3=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[98]);}

/* k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1238(C_word c,C_word t0,C_word t1){
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
C_word ab[52],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1239,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[44]+1 /* (set! decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1252,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate((C_word*)lf[47]+1 /* (set! pathname-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1313,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[48]+1 /* (set! pathname-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1327,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[49]+1 /* (set! pathname-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1341,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[50]+1 /* (set! pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1355,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[51]+1 /* (set! pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1372,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[52]+1 /* (set! pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1389,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[53]+1 /* (set! pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1406,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[54]+1 /* (set! pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1423,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=lf[55];
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1440,a[2]=t13,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t16=C_mutate((C_word*)lf[61]+1 /* (set! create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1463,a[2]=t14,a[3]=t15,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t17=C_mutate((C_word*)lf[66]+1 /* (set! create-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1517,a[2]=t14,a[3]=t15,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp));
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1972,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* files.scm:351: build-platform */
t19=*((C_word*)lf[96]+1);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}

/* k818 in k812 in loop in k797 in k791 in k789 in k787 in k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* files.scm:101: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_800(t3,((C_word*)t0)[5],t1,t2);}

/* f_1239 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1239(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1239,3,t0,t1,t2);}
if(C_truep(t2)){
t3=t2;
if(C_truep((C_truep(C_i_equalp(t3,lf[42]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[43]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
/* files.scm:236: chop-pds */
f_1005(t1,t2);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k810 in k808 in loop in k797 in k791 in k789 in k787 in k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k812 in loop in k797 in k791 in k789 in k787 in k785 in k783 in k781 in file-copy in k749 in k747 in k745 */
static void C_ccall f_813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:101: read-string! */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* loop in conc-dirs in k990 in k749 in k747 in k745 */
static void C_fcall f_1048(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1048,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[30]);}
else{
t3=C_i_car(t2);
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t2;
t7=C_u_i_cdr(t6);
/* files.scm:182: loop */
t12=t1;
t13=t7;
t1=t12;
t2=t13;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1074,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* files.scm:184: chop-pds */
f_1005(t6,t8);}}}

/* file-copy in k749 in k747 in k745 */
static void C_ccall f_764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_764r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_764r(t0,t1,t2,t3,t4);}}

static void C_ccall f_764r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(1024):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_string_2(t2,lf[3]);
t14=C_i_check_string_2(t3,lf[3]);
t15=C_i_check_number_2(t10,lf[3]);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_782,a[2]=t10,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t10))){
if(C_truep(C_fixnum_greaterp(t10,C_fix(0)))){
t17=t16;
f_782(2,t17,C_SCHEME_UNDEFINED);}
else{
/* files.scm:77: ##sys#error */
t17=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,lf[3],lf[16],t10);}}
else{
/* files.scm:77: ##sys#error */
t17=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,lf[3],lf[16],t10);}}

/* k1787 in k1757 in k1754 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1788,2,t0,t1);}
t2=f_1574(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1]);
/* files.scm:399: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1626(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}

/* decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1252(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1252,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[44]);
t4=C_block_size(t2);
t5=C_eqp(C_fix(0),t4);
if(C_truep(t5)){
/* files.scm:240: values */
C_values(5,0,t1,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1267,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* files.scm:241: irregex-search */
t7=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],t2);}}

/* k1937 in k1953 in k1947 in k1945 in k1943 in decompose-directory in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1938,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* files.scm:451: values */
C_values(5,0,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* k745 */
static void C_ccall f_746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_748,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k747 in k745 */
static void C_ccall f_748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_748,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:58: register-feature! */
t3=*((C_word*)lf[104]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[105]);}

/* k1947 in k1945 in k1943 in decompose-directory in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:451: root-directory */
t3=lf[23];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1267,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1276,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1285,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:244: irregex-match-substring */
t4=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_fix(1));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:247: irregex-search */
t3=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k1945 in k1943 in decompose-directory in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm:450: root-origin */
t3=lf[22];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1943 in decompose-directory in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1946,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* files.scm:449: absolute-pathname-root */
t3=lf[21];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k757 in delete-file* in k749 in k747 in k745 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:68: delete-file */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* delete-file* in k749 in k747 in k745 */
static void C_ccall f_752(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_752,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_759,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:68: file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k749 in k747 in k745 */
static void C_ccall f_750(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_750,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! delete-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_752,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! file-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_764,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[17]+1 /* (set! file-move ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_875,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=lf[21] /* absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t6=lf[22] /* root-origin */ =C_SCHEME_UNDEFINED;;
t7=lf[23] /* root-directory */ =C_SCHEME_UNDEFINED;;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[100]+1))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1974,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* files.scm:147: irregex */
t10=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[102]);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2000,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* files.scm:151: irregex */
t10=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[103]);}}

/* k1953 in k1947 in k1945 in k1943 in decompose-directory in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1954,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_FALSE:((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
if(C_truep(t4)){
t5=C_i_car(t3);
t6=C_block_size(t4);
if(C_truep(C_substring_compare(t4,t5,C_fix(0),C_fix(0),t6))){
t7=C_u_i_cdr(t3);
t8=C_block_size(t5);
t9=C_block_size(t8);
t10=C_eqp(t6,t9);
if(C_truep(t10)){
/* files.scm:451: values */
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[3],t1,t7);}
else{
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1938,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* files.scm:447: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),t11,t5,t6,t8);}}
else{
/* files.scm:451: values */
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[3],t1,t3);}}
else{
/* files.scm:451: values */
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[3],t1,t3);}}

/* k1452 in k1446 in tempdir in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1453,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:306: get-environment-variable */
t3=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[58]);}}

/* k1457 in k1452 in k1446 in tempdir in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t2=lf[56];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* create-temporary-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1463(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_1463r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1463r(t0,t1,t2);}}

static void C_ccall f_1463r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(9);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?lf[62]:C_i_car(t2));
t5=C_i_check_string_2(t4,lf[61]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1475,a[2]=t7,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1475(t9,t1);}

/* pathname-extension in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1341,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1347,a[2]=t2,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1352,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* files.scm:266: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* f_1338 in pathname-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1338,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* f_1976 in k1973 in k749 in k747 in k745 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1976,3,t0,t1,t2);}
/* files.scm:148: irregex-match */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k1973 in k749 in k747 in k745 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1974,2,t0,t1);}
t2=C_mutate(&lf[21] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1976,a[2]=t1,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[22] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1982,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[23] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1991,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_991(t5,t4);}

/* k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1972,2,t0,t1);}
t2=C_eqp(t1,lf[73]);
t3=(C_truep(t2)?lf[74]:lf[75]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1574,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[79]+1 /* (set! normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1610,a[2]=t3,a[3]=t4,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp));
t6=C_mutate((C_word*)lf[90]+1 /* (set! directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1864,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[95]+1 /* (set! decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1902,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}

/* f_1347 in pathname-extension in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1347,2,t0,t1);}
/* files.scm:267: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* absolute-pathname? in k990 in k749 in k747 in k745 */
static void C_ccall f_993(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_993,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[24]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1003,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm:158: absolute-pathname-root */
t5=lf[21];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k990 in k749 in k747 in k745 */
static void C_fcall f_991(C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_991,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[24]+1 /* (set! absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_993,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[26] /* (set! chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1005,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1039,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1086,a[2]=t5,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1115,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[29]+1 /* (set! make-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1188,a[2]=t9,a[3]=t7,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[39]+1 /* (set! make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1207,a[2]=t9,a[3]=t7,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1236,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:229: irregex */
t16=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,lf[99]);}

/* loop in k1870 in directory-null? in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static C_word C_fcall f_1873(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_i_equalp(t3,lf[91]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[92]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k1870 in directory-null? in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1873,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1873(t1));}

/* k1702 in k1685 in k1683 in k1681 in k1678 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1693(t3,t2);}

/* k1698 in k1692 in k1685 in k1683 in k1681 in k1678 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* f_1982 in k1973 in k749 in k747 in k745 */
static void C_ccall f_1982(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1982,3,t0,t1,t2);}
if(C_truep(t2)){
/* files.scm:149: irregex-match-substring */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_fix(1));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1550 in k1538 in k1531 in k1526 in loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:342: ##sys#signal-hook */
t2=*((C_word*)lf[67]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[68],lf[66],t1,((C_word*)t0)[3]);}

/* k1553 in k1538 in k1531 in k1526 in loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:344: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[2],lf[69],t1);}

/* k1556 in loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1560,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1563,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:334: number->string */
C_number_to_string(4,0,t3,((C_word*)t0)[4],C_fix(16));}

/* f_1991 in k1973 in k749 in k747 in k745 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1991,3,t0,t1,t2);}
if(C_truep(t2)){
/* files.scm:150: irregex-match-substring */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_fix(2));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1395 in pathname-replace-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1395,2,t0,t1);}
/* files.scm:282: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_fcall f_1523(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1523,NULL,2,t0,t1);}
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1527,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1557,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:331: tempdir */
t5=((C_word*)t0)[4];
f_1440(t5,t4);}

/* k1526 in loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm:337: directory-exists? */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1015 in chop-pds in k990 in k749 in k747 in k745 */
static void C_ccall f_1017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* files.scm:167: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* f_1383 in pathname-strip-extension in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1383,5,t0,t1,t2,t3,t4);}
/* files.scm:278: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}

/* f_1378 in pathname-strip-extension in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1378,2,t0,t1);}
/* files.scm:277: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* for-each-loop454 in k1666 in k1664 in k1662 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_fcall f_1715(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1715,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1724,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* files.scm:380: g455 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* directory-null? in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1864(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1864,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1871,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(t2))){
t4=t3;
f_1871(2,t4,t2);}
else{
t4=t2;
t5=C_i_check_string_2(t4,lf[90]);
/* files.scm:416: string-split */
t6=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,lf[94],C_SCHEME_TRUE);}}

/* pathname-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1313(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1313,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1319,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1324,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* files.scm:256: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* pathname-replace-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1389(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1389,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1395,a[2]=t2,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1400,a[2]=t3,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* files.scm:281: ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* f_1324 in pathname-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1324(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1324,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* f_1319 in pathname-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1319,2,t0,t1);}
/* files.scm:257: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* decompose-directory in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1902,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1944,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_i_check_string_2(t4,lf[95]);
/* files.scm:416: string-split */
t6=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,lf[94],C_SCHEME_FALSE);}

/* f_1173 in _make-pathname in k990 in k749 in k747 in k745 */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1173,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_memq(t2,lf[38]));}

/* make-pathname in k990 in k749 in k747 in k745 */
static void C_ccall f_1188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1188r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1188r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1188r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1199,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* files.scm:214: canonicalize-dirs */
t8=((C_word*)((C_word*)t0)[3])[1];
f_1086(t8,t7,t2);}

/* f_1333 in pathname-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1333,2,t0,t1);}
/* files.scm:262: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1327(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1327,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1333,a[2]=t2,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1338,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* files.scm:261: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* f_1434 in pathname-replace-extension in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1434(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1434,5,t0,t1,t2,t3,t4);}
/* files.scm:293: make-pathname */
t5=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,((C_word*)t0)[2]);}

/* k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_fcall f_1635(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1635,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1643,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t3=C_a_i_string(&a,1,((C_word*)t0)[6]);
/* files.scm:372: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,t3,lf[80]);}
else{
t3=C_a_i_string(&a,1,((C_word*)t0)[6]);
/* files.scm:373: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[81],t3);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1663,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* files.scm:377: open-output-string */
t3=*((C_word*)lf[88]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* tempdir in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_fcall f_1440(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1440,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1447,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm:304: get-environment-variable */
t4=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[60]);}}

/* k1496 in loop in create-temporary-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1500,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1503,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:319: number->string */
C_number_to_string(4,0,t3,((C_word*)t0)[5],C_fix(16));}

/* k1446 in tempdir in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1447,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:305: get-environment-variable */
t3=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[59]);}}

/* f_1493 in k1483 in k1478 in loop in create-temporary-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1493(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1493,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k1565 in k1562 in k1556 in loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:332: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[72],t1);}

/* k1642 in k1634 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* files.scm:375: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}
else{
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1562 in k1556 in loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_fudge(C_fix(33));
/* files.scm:336: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[65]+1)))(3,*((C_word*)lf[65]+1),t2,t3);}

/* k1559 in k1556 in loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:330: make-pathname */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1538 in k1531 in k1526 in loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1539,2,t0,t1);}
t2=C_mkdir(t1);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1554,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k1301 in k1286 in k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:250: strip-pds */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k1531 in k1526 in loop in create-temporary-directory in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1533,2,t0,t1);}
if(C_truep(t1)){
/* files.scm:338: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1523(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1539,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:339: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[71]+1)))(4,*((C_word*)lf[71]+1),t2,((C_word*)t0)[4],lf[66]);}}

/* k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_893,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_947,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* files.scm:112: directory-exists? */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_938,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm:114: file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k1307 in k1286 in k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:253: values */
C_values(5,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:120: open-input-file */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[10]);}

/* k898 in k896 in k894 in k892 in file-move in k749 in k747 in k745 */
static void C_ccall f_899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_899,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_901,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* files.scm:121: open-output-file */
t3=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[10]);}

/* loop in create-temporary-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_fcall f_1475(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1475,NULL,2,t0,t1);}
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1479,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1497,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* files.scm:316: tempdir */
t5=((C_word*)t0)[5];
f_1440(t5,t4);}

/* k1478 in loop in create-temporary-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm:323: file-exists? */
t3=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* root-origin in k1999 in k749 in k747 in k745 */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2008,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* k1999 in k749 in k747 in k745 */
static void C_ccall f_2000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2000,2,t0,t1);}
t2=C_mutate(&lf[21] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2002,a[2]=t1,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[22] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2008,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[23] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2012,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_991(t5,t4);}

/* absolute-pathname-root in k1999 in k749 in k747 in k745 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2002,3,t0,t1,t2);}
/* files.scm:152: irregex-match */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k1275 in k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1279,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:245: irregex-match-substring */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],C_fix(2));}

/* k1278 in k1275 in k1266 in decompose-pathname in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm:246: irregex-match-substring */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],C_fix(4));}

/* k1802 in k1754 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_fcall f_1804(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1804,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* files.scm:405: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(5,*((C_word*)lf[27]+1),t2,((C_word*)t0)[6],C_fix(0),t3);}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* files.scm:407: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1626(t3,((C_word*)t0)[5],t2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[8])[1]);}}

/* k1483 in k1478 in loop in create-temporary-file in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1485,2,t0,t1);}
if(C_truep(t1)){
/* files.scm:324: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1475(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1493,a[2]=((C_word*)t0)[4],a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
/* files.scm:325: call-with-output-file */
t3=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}}

/* k1806 in k1802 in k1754 in loop in normalize-pathname in k1971 in k1237 in k1235 in k990 in k749 in k747 in k745 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* files.scm:406: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1626(t5,((C_word*)t0)[5],t3,t4,C_SCHEME_END_OF_LIST);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[166] = {
{"f_875:files_2escm",(void*)f_875},
{"f_1282:files_2escm",(void*)f_1282},
{"f_1285:files_2escm",(void*)f_1285},
{"f_2012:files_2escm",(void*)f_2012},
{"f_1287:files_2escm",(void*)f_1287},
{"f_1412:files_2escm",(void*)f_1412},
{"f_1417:files_2escm",(void*)f_1417},
{"f_1574:files_2escm",(void*)f_1574},
{"f_1423:files_2escm",(void*)f_1423},
{"f_1429:files_2escm",(void*)f_1429},
{"f_1352:files_2escm",(void*)f_1352},
{"f_1355:files_2escm",(void*)f_1355},
{"f_1517:files_2escm",(void*)f_1517},
{"f_1199:files_2escm",(void*)f_1199},
{"f_1361:files_2escm",(void*)f_1361},
{"f_932:files_2escm",(void*)f_932},
{"f_938:files_2escm",(void*)f_938},
{"f_1366:files_2escm",(void*)f_1366},
{"f_1724:files_2escm",(void*)f_1724},
{"f_1372:files_2escm",(void*)f_1372},
{"f_1671:files_2escm",(void*)f_1671},
{"f_947:files_2escm",(void*)f_947},
{"f_920:files_2escm",(void*)f_920},
{"f_1684:files_2escm",(void*)f_1684},
{"f_1686:files_2escm",(void*)f_1686},
{"f_911:files_2escm",(void*)f_911},
{"f_1680:files_2escm",(void*)f_1680},
{"f_1682:files_2escm",(void*)f_1682},
{"f_782:files_2escm",(void*)f_782},
{"f_784:files_2escm",(void*)f_784},
{"f_786:files_2escm",(void*)f_786},
{"f_788:files_2escm",(void*)f_788},
{"f_1115:files_2escm",(void*)f_1115},
{"f_1506:files_2escm",(void*)f_1506},
{"f_1746:files_2escm",(void*)f_1746},
{"f_926:files_2escm",(void*)f_926},
{"f_1693:files_2escm",(void*)f_1693},
{"f_922:files_2escm",(void*)f_922},
{"f_924:files_2escm",(void*)f_924},
{"f_790:files_2escm",(void*)f_790},
{"f_1503:files_2escm",(void*)f_1503},
{"f_1296:files_2escm",(void*)f_1296},
{"f_792:files_2escm",(void*)f_792},
{"f_1500:files_2escm",(void*)f_1500},
{"f_798:files_2escm",(void*)f_798},
{"f_1750:files_2escm",(void*)f_1750},
{"f_1756:files_2escm",(void*)f_1756},
{"f_1626:files_2escm",(void*)f_1626},
{"f_1299:files_2escm",(void*)f_1299},
{"f_1135:files_2escm",(void*)f_1135},
{"f_1400:files_2escm",(void*)f_1400},
{"toplevel:files_2escm",(void*)C_files_toplevel},
{"f_909:files_2escm",(void*)f_909},
{"f_1406:files_2escm",(void*)f_1406},
{"f_903:files_2escm",(void*)f_903},
{"f_901:files_2escm",(void*)f_901},
{"f_1141:files_2escm",(void*)f_1141},
{"f_1157:files_2escm",(void*)f_1157},
{"f_1665:files_2escm",(void*)f_1665},
{"f_1663:files_2escm",(void*)f_1663},
{"f_1668:files_2escm",(void*)f_1668},
{"f_1667:files_2escm",(void*)f_1667},
{"f_1039:files_2escm",(void*)f_1039},
{"f_1003:files_2escm",(void*)f_1003},
{"f_1005:files_2escm",(void*)f_1005},
{"f_825:files_2escm",(void*)f_825},
{"f_1207:files_2escm",(void*)f_1207},
{"f_1758:files_2escm",(void*)f_1758},
{"f_1610:files_2escm",(void*)f_1610},
{"f_1218:files_2escm",(void*)f_1218},
{"f_831:files_2escm",(void*)f_831},
{"f_1086:files_2escm",(void*)f_1086},
{"f_1027:files_2escm",(void*)f_1027},
{"f_1224:files_2escm",(void*)f_1224},
{"f_1221:files_2escm",(void*)f_1221},
{"f_809:files_2escm",(void*)f_809},
{"f_800:files_2escm",(void*)f_800},
{"f_1077:files_2escm",(void*)f_1077},
{"f_1074:files_2escm",(void*)f_1074},
{"f_1236:files_2escm",(void*)f_1236},
{"f_1238:files_2escm",(void*)f_1238},
{"f_819:files_2escm",(void*)f_819},
{"f_1239:files_2escm",(void*)f_1239},
{"f_811:files_2escm",(void*)f_811},
{"f_813:files_2escm",(void*)f_813},
{"f_1048:files_2escm",(void*)f_1048},
{"f_764:files_2escm",(void*)f_764},
{"f_1788:files_2escm",(void*)f_1788},
{"f_1252:files_2escm",(void*)f_1252},
{"f_1938:files_2escm",(void*)f_1938},
{"f_746:files_2escm",(void*)f_746},
{"f_748:files_2escm",(void*)f_748},
{"f_1948:files_2escm",(void*)f_1948},
{"f_1267:files_2escm",(void*)f_1267},
{"f_1946:files_2escm",(void*)f_1946},
{"f_1944:files_2escm",(void*)f_1944},
{"f_759:files_2escm",(void*)f_759},
{"f_752:files_2escm",(void*)f_752},
{"f_750:files_2escm",(void*)f_750},
{"f_1954:files_2escm",(void*)f_1954},
{"f_1453:files_2escm",(void*)f_1453},
{"f_1458:files_2escm",(void*)f_1458},
{"f_1463:files_2escm",(void*)f_1463},
{"f_1341:files_2escm",(void*)f_1341},
{"f_1338:files_2escm",(void*)f_1338},
{"f_1976:files_2escm",(void*)f_1976},
{"f_1974:files_2escm",(void*)f_1974},
{"f_1972:files_2escm",(void*)f_1972},
{"f_1347:files_2escm",(void*)f_1347},
{"f_993:files_2escm",(void*)f_993},
{"f_991:files_2escm",(void*)f_991},
{"f_1873:files_2escm",(void*)f_1873},
{"f_1871:files_2escm",(void*)f_1871},
{"f_1704:files_2escm",(void*)f_1704},
{"f_1700:files_2escm",(void*)f_1700},
{"f_1982:files_2escm",(void*)f_1982},
{"f_1551:files_2escm",(void*)f_1551},
{"f_1554:files_2escm",(void*)f_1554},
{"f_1557:files_2escm",(void*)f_1557},
{"f_1991:files_2escm",(void*)f_1991},
{"f_1395:files_2escm",(void*)f_1395},
{"f_1523:files_2escm",(void*)f_1523},
{"f_1527:files_2escm",(void*)f_1527},
{"f_1017:files_2escm",(void*)f_1017},
{"f_1383:files_2escm",(void*)f_1383},
{"f_1378:files_2escm",(void*)f_1378},
{"f_1715:files_2escm",(void*)f_1715},
{"f_1864:files_2escm",(void*)f_1864},
{"f_1313:files_2escm",(void*)f_1313},
{"f_1389:files_2escm",(void*)f_1389},
{"f_1324:files_2escm",(void*)f_1324},
{"f_1319:files_2escm",(void*)f_1319},
{"f_1902:files_2escm",(void*)f_1902},
{"f_1173:files_2escm",(void*)f_1173},
{"f_1188:files_2escm",(void*)f_1188},
{"f_1333:files_2escm",(void*)f_1333},
{"f_1327:files_2escm",(void*)f_1327},
{"f_1434:files_2escm",(void*)f_1434},
{"f_1635:files_2escm",(void*)f_1635},
{"f_1440:files_2escm",(void*)f_1440},
{"f_1497:files_2escm",(void*)f_1497},
{"f_1447:files_2escm",(void*)f_1447},
{"f_1493:files_2escm",(void*)f_1493},
{"f_1566:files_2escm",(void*)f_1566},
{"f_1643:files_2escm",(void*)f_1643},
{"f_1563:files_2escm",(void*)f_1563},
{"f_1560:files_2escm",(void*)f_1560},
{"f_1539:files_2escm",(void*)f_1539},
{"f_1302:files_2escm",(void*)f_1302},
{"f_1533:files_2escm",(void*)f_1533},
{"f_893:files_2escm",(void*)f_893},
{"f_895:files_2escm",(void*)f_895},
{"f_1308:files_2escm",(void*)f_1308},
{"f_897:files_2escm",(void*)f_897},
{"f_899:files_2escm",(void*)f_899},
{"f_1475:files_2escm",(void*)f_1475},
{"f_1479:files_2escm",(void*)f_1479},
{"f_2008:files_2escm",(void*)f_2008},
{"f_2000:files_2escm",(void*)f_2000},
{"f_2002:files_2escm",(void*)f_2002},
{"f_1276:files_2escm",(void*)f_1276},
{"f_1279:files_2escm",(void*)f_1279},
{"f_1804:files_2escm",(void*)f_1804},
{"f_1485:files_2escm",(void*)f_1485},
{"f_1808:files_2escm",(void*)f_1808},
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
S|  for-each		1
o|eliminated procedure checks: 41 
o|specializations:
o|  1 (string-ref string fixnum)
o|  1 (string=? string string)
o|  1 (car pair)
o|  5 (cdr pair)
o|  1 (zero? fixnum)
o|  3 (memq * list)
o|dropping redundant toplevel assignment: make-pathname 
o|dropping redundant toplevel assignment: make-absolute-pathname 
o|dropping redundant toplevel assignment: create-temporary-file 
o|dropping redundant toplevel assignment: create-temporary-directory 
o|Removed `not' forms: 3 
o|inlining procedure: k755 
o|inlining procedure: k755 
o|inlining procedure: k803 
o|inlining procedure: k803 
o|inlining procedure: k832 
o|inlining procedure: k832 
o|inlining procedure: k914 
o|inlining procedure: k914 
o|inlining procedure: k939 
o|inlining procedure: k939 
o|inlining procedure: k1008 
o|substituted constant variable: a1030 
o|inlining procedure: k1008 
o|inlining procedure: k1051 
o|inlining procedure: k1051 
o|inlining procedure: k1089 
o|inlining procedure: k1089 
o|inlining procedure: k1137 
o|inlining procedure: k1137 
o|substituted constant variable: a1176 
o|inlining procedure: k1167 
o|inlining procedure: k1167 
o|inlining procedure: k1219 
o|inlining procedure: k1219 
o|inlining procedure: k1241 
o|inlining procedure: k1241 
o|inlining procedure: k1257 
o|inlining procedure: k1257 
o|inlining procedure: k1288 
o|inlining procedure: k1288 
o|inlining procedure: k1443 
o|inlining procedure: k1443 
o|inlining procedure: k1454 
o|inlining procedure: k1454 
o|inlining procedure: k1480 
o|inlining procedure: k1480 
o|inlining procedure: k1528 
o|inlining procedure: k1528 
o|inlining procedure: k1577 
o|inlining procedure: k1577 
o|substituted constant variable: a1585 
o|inlining procedure: k1587 
o|inlining procedure: k1587 
o|inlining procedure: k1629 
o|inlining procedure: k1644 
o|inlining procedure: k1644 
o|inlining procedure: k1687 
o|inlining procedure: k1687 
o|inlining procedure: k1718 
o|inlining procedure: k1718 
o|inlining procedure: k1629 
o|substituted constant variable: a1753 
o|inlining procedure: k1759 
o|inlining procedure: k1759 
o|inlining procedure: k1789 
o|inlining procedure: k1789 
o|inlining procedure: k1799 
o|inlining procedure: k1799 
o|inlining procedure: k1830 
o|inlining procedure: k1830 
o|inlining procedure: k1878 
o|inlining procedure: k1878 
o|contracted procedure: "(files.scm:451) strip-origin-prefix506" 
o|contracted procedure: k1911 
o|inlining procedure: k1909 
o|contracted procedure: k1921 
o|inlining procedure: k1927 
o|inlining procedure: k1927 
o|inlining procedure: k1909 
o|substituted constant variable: patt2246 
o|substituted constant variable: patt1245 
o|inlining procedure: k1985 
o|inlining procedure: k1985 
o|inlining procedure: k1994 
o|inlining procedure: k1994 
o|inlining procedure: k2015 
o|inlining procedure: k2015 
o|replaced variables: 203 
o|removed binding forms: 64 
o|substituted constant variable: f_7542021 
o|substituted constant variable: f_10072031 
o|substituted constant variable: f_10502032 
o|substituted constant variable: f_10882034 
o|substituted constant variable: a11362036 
o|substituted constant variable: a11362037 
o|substituted constant variable: r11682039 
o|substituted constant variable: f_12402045 
o|inlining procedure: k1448 
o|inlining procedure: k1448 
o|inlining procedure: k1448 
o|inlining procedure: k1448 
o|inlining procedure: k1687 
o|inlining procedure: k1687 
o|substituted constant variable: r17902074 
o|substituted constant variable: r18312079 
o|converted assignments to bindings: (addpart417) 
o|converted assignments to bindings: (tempdir376) 
o|substituted constant variable: f_19842087 
o|substituted constant variable: f_19932089 
o|substituted constant variable: f_20142091 
o|simplifications: ((let . 2)) 
o|replaced variables: 17 
o|removed binding forms: 186 
o|removed conditional forms: 1 
o|inlining procedure: k838 
o|inlining procedure: k951 
o|inlining procedure: k1956 
o|inlining procedure: k1956 
o|inlining procedure: k1956 
o|replaced variables: 6 
o|removed binding forms: 32 
o|substituted constant variable: r8392138 
o|substituted constant variable: r9522141 
o|simplifications: ((let . 1)) 
o|replaced variables: 1 
o|removed binding forms: 5 
o|removed conditional forms: 2 
o|removed binding forms: 3 
o|simplifications: ((if . 20) (##core#call . 141)) 
o|  call simplifications:
o|    list?
o|    string-ref
o|    pair?
o|    ##sys#slot	2
o|    string	3
o|    string=?	3
o|    cons	3
o|    number->string	2
o|    ##sys#fudge	2
o|    ##sys#call-with-values	8
o|    values	8
o|    member	2
o|    fx>	2
o|    char=?	2
o|    not	2
o|    string?
o|    list
o|    ##sys#check-list	2
o|    string-length
o|    eq?	5
o|    ##sys#size	10
o|    fx>=	4
o|    fx-	2
o|    car	13
o|    null?	20
o|    cdr	5
o|    ##sys#check-string	12
o|    ##sys#check-number	2
o|    integer?	2
o|    >	2
o|    fx=	7
o|    fx+	10
o|contracted procedure: k868 
o|contracted procedure: k767 
o|contracted procedure: k862 
o|contracted procedure: k769 
o|contracted procedure: k856 
o|contracted procedure: k771 
o|contracted procedure: k850 
o|contracted procedure: k773 
o|contracted procedure: k775 
o|contracted procedure: k777 
o|contracted procedure: k779 
o|contracted procedure: k805 
o|contracted procedure: k821 
o|contracted procedure: k844 
o|contracted procedure: k838 
o|substituted constant variable: g2208 
o|contracted procedure: k981 
o|contracted procedure: k878 
o|contracted procedure: k975 
o|contracted procedure: k880 
o|contracted procedure: k969 
o|contracted procedure: k882 
o|contracted procedure: k963 
o|contracted procedure: k884 
o|contracted procedure: k886 
o|contracted procedure: k888 
o|contracted procedure: k890 
o|contracted procedure: k916 
o|contracted procedure: k934 
o|contracted procedure: k957 
o|contracted procedure: k951 
o|substituted constant variable: g2212 
o|contracted procedure: k996 
o|contracted procedure: k1010 
o|contracted procedure: k1022 
o|contracted procedure: k1024 
o|contracted procedure: k1036 
o|contracted procedure: k1042 
o|contracted procedure: k1053 
o|contracted procedure: k1056 
o|contracted procedure: k1083 
o|contracted procedure: k1061 
o|contracted procedure: k1091 
o|contracted procedure: k1093 
o|contracted procedure: k1099 
o|contracted procedure: k1106 
o|contracted procedure: k1118 
o|contracted procedure: k1121 
o|contracted procedure: k1124 
o|contracted procedure: k1126 
o|contracted procedure: k1128 
o|contracted procedure: k1153 
o|contracted procedure: k1142 
o|contracted procedure: k1149 
o|contracted procedure: k1162 
o|contracted procedure: k1185 
o|contracted procedure: k1164 
o|contracted procedure: k1182 
o|contracted procedure: k1170 
o|contracted procedure: k1200 
o|contracted procedure: k1191 
o|contracted procedure: k1228 
o|contracted procedure: k1210 
o|contracted procedure: k1246 
o|contracted procedure: k1255 
o|contracted procedure: k1310 
o|contracted procedure: k1260 
o|contracted procedure: k1510 
o|contracted procedure: k1466 
o|contracted procedure: k1469 
o|contracted procedure: k1508 
o|contracted procedure: k1543 
o|contracted procedure: k1568 
o|contracted procedure: k1967 
o|contracted procedure: k1571 
o|contracted procedure: k1579 
o|contracted procedure: k1590 
o|inlining procedure: k1592 
o|contracted procedure: k1605 
o|inlining procedure: k1592 
o|contracted procedure: k1848 
o|contracted procedure: k1613 
o|contracted procedure: k1845 
o|contracted procedure: k1616 
o|contracted procedure: k1618 
o|contracted procedure: k1620 
o|contracted procedure: k1631 
o|contracted procedure: k1639 
o|contracted procedure: k1654 
o|contracted procedure: k1660 
o|contracted procedure: k1676 
o|contracted procedure: k1689 
o|contracted procedure: k1706 
o|contracted procedure: k1708 
o|contracted procedure: k1720 
o|contracted procedure: k1729 
o|contracted procedure: k1732 
o|contracted procedure: k1735 
o|contracted procedure: k1737 
o|contracted procedure: k1762 
o|contracted procedure: k1769 
o|contracted procedure: k1772 
o|contracted procedure: k1778 
o|contracted procedure: k1781 
o|contracted procedure: k1793 
o|contracted procedure: k1789 
o|contracted procedure: k1813 
o|contracted procedure: k1816 
o|contracted procedure: k1819 
o|contracted procedure: k1825 
o|contracted procedure: k1827 
o|contracted procedure: k1833 
o|contracted procedure: k1843 
o|contracted procedure: k1858 
o|contracted procedure: k1876 
o|contracted procedure: k1893 
o|contracted procedure: k1884 
o|contracted procedure: k1895 
o|contracted procedure: k1961 
o|contracted procedure: k1959 
o|contracted procedure: k1914 
o|contracted procedure: k1916 
o|contracted procedure: k1925 
o|contracted procedure: k1940 
o|contracted procedure: k1930 
o|contracted procedure: k1956 
o|simplifications: ((if . 2) (let . 21)) 
o|removed binding forms: 122 
o|inlining procedure: "(files.scm:422) split-directory" 
o|inlining procedure: "(files.scm:448) split-directory" 
o|replaced variables: 14 
o|removed binding forms: 3 
o|removed side-effect free assignment to unused variable: split-directory 
o|substituted constant variable: loc4912262 
o|substituted constant variable: keep?4932264 
o|substituted constant variable: loc4912267 
o|substituted constant variable: keep?4932269 
o|replaced variables: 2 
o|removed binding forms: 10 
o|removed binding forms: 7 
o|direct leaf routine/allocation: addpart417 9 
o|direct leaf routine/allocation: loop497 0 
o|contracted procedure: "(files.scm:369) k1741" 
o|contracted procedure: "(files.scm:401) k1784" 
o|converted assignments to bindings: (loop497) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|customizable procedures: (k990 k1802 k1757 loop442 k1634 for-each-loop454466 k1692 loop408 tempdir376 loop402 canonicalize-dirs177 _make-pathname178 k1139 conc-dirs176 chop-pds loop180 loop131 loop91) 
o|calls to known targets: 56 
o|identified direct recursive calls: f_1048 1 
o|identified direct recursive calls: f_1873 1 
o|fast box initializations: 10 
o|fast global references: 6 
o|fast global assignments: 10 
o|dropping unused closure argument: f_1574 
o|dropping unused closure argument: f_1115 
o|dropping unused closure argument: f_1039 
o|dropping unused closure argument: f_1005 
o|dropping unused closure argument: f_1873 
*/
/* end of file */
