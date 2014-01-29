/* Generated from setup-download.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: setup-download.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -emit-import-library setup-download -output-file setup-download.c
   used units: library eval extras irregex posix utils srfi_2d1 data_2dstructures tcp srfi_2d13 files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externimport void C_ccall C_tcp_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[255];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,34),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,100,32,102,115,116,114,49,56,57,32,97,114,103,115,49,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,40),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,103,101,116,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,57),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,101,120,105,115,116,105,110,103,45,118,101,114,115,105,111,110,32,101,103,103,50,48,49,32,118,101,114,115,105,111,110,50,48,50,32,118,115,50,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,8),40,102,95,49,53,49,50,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,49,54,32,102,51,56,55,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,55,55,32,103,51,56,52,51,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,102,95,49,54,52,57,32,103,51,55,48,51,55,49,51,55,50,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,34),40,102,95,49,53,52,53,32,115,114,99,51,49,53,51,49,54,51,50,50,32,118,101,114,51,49,55,51,49,56,51,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,59),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,111,99,97,116,101,45,101,103,103,47,108,111,99,97,108,32,101,103,103,50,57,50,32,100,105,114,50,57,51,32,46,32,116,109,112,50,57,49,50,57,52,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,8),40,102,95,49,55,51,50,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,8),40,102,95,49,55,56,49,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,102,95,49,55,55,54,32,101,120,52,49,55,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,8),40,102,95,49,55,57,52,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,8),40,102,95,49,56,48,52,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,21),40,102,95,49,55,57,57,32,46,32,97,114,103,115,52,49,49,52,49,57,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,8),40,102,95,49,55,56,57,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,102,95,49,55,55,49,32,107,52,49,48,52,49,54,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,18),40,102,95,49,55,53,49,32,114,101,116,117,114,110,52,48,57,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,38),40,102,95,49,55,51,55,32,108,111,99,51,57,57,52,48,48,52,48,51,32,118,101,114,115,105,111,110,52,48,49,52,48,50,52,48,52,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,15),40,102,95,49,55,50,55,32,101,103,103,51,57,56,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,46),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,103,97,116,104,101,114,45,101,103,103,45,105,110,102,111,114,109,97,116,105,111,110,32,100,105,114,51,57,54,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,66),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,109,97,107,101,45,115,118,110,45,108,115,45,99,109,100,32,117,97,114,103,52,50,54,32,112,97,114,103,52,50,55,32,112,110,97,109,52,50,56,32,116,109,112,52,50,53,52,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,8),40,102,95,50,48,55,56,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,38),40,102,95,50,49,48,51,32,102,105,108,101,100,105,114,53,54,53,53,54,54,53,55,48,32,118,101,114,53,54,55,53,54,56,53,55,49,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,13),40,102,95,50,49,54,48,32,102,53,54,51,41,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,58),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,111,99,97,116,101,45,101,103,103,47,115,118,110,32,101,103,103,53,52,49,32,114,101,112,111,53,52,50,32,46,32,116,109,112,53,52,48,53,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,39),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,100,101,99,111,110,115,116,114,117,99,116,45,117,114,108,32,117,114,108,53,56,54,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,8),40,102,95,50,51,49,49,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,8),40,102,95,50,56,52,53,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,13),40,102,95,50,54,56,54,32,109,55,54,52,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,8),40,102,95,50,56,49,57,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,20),40,103,101,116,45,102,105,108,101,115,32,102,105,108,101,115,55,55,57,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,33),40,102,95,50,56,53,48,32,105,110,56,49,51,56,49,52,56,49,55,32,111,117,116,56,49,53,56,49,54,56,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,50),40,102,95,50,51,49,54,32,104,111,115,116,54,50,56,54,50,57,54,51,52,32,112,111,114,116,54,51,48,54,51,49,54,51,53,32,108,111,99,110,54,51,50,54,51,51,54,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,58),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,111,99,97,116,101,45,101,103,103,47,104,116,116,112,32,101,103,103,54,48,51,32,117,114,108,54,48,52,32,46,32,116,109,112,54,48,50,54,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,8),40,102,95,50,52,55,56,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,102,95,50,52,56,49,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,8),40,102,95,50,52,56,52,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,8),40,102,95,50,52,56,55,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,78),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,109,97,107,101,45,72,84,84,80,45,71,69,84,47,49,46,49,32,108,111,99,97,116,105,111,110,54,53,57,32,117,115,101,114,45,97,103,101,110,116,54,54,48,32,104,111,115,116,54,54,49,32,116,109,112,54,53,56,54,54,50,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,53),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,114,101,115,112,111,110,115,101,45,109,97,116,99,104,45,99,111,100,101,63,32,109,114,115,112,54,55,52,32,99,111,100,101,54,55,53,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,8),40,102,95,50,53,51,50,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,20),40,103,101,116,45,99,104,117,110,107,115,32,100,97,116,97,56,53,53,41,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,8),40,102,95,50,54,49,50,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,37),40,102,95,50,54,49,55,32,105,110,112,120,55,50,48,55,50,49,55,50,52,32,111,117,116,112,120,55,50,50,55,50,51,55,50,53,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,33),40,102,95,50,53,52,53,32,105,110,55,48,51,55,48,52,55,49,51,32,111,117,116,55,48,53,55,48,54,55,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,100),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,104,116,116,112,45,99,111,110,110,101,99,116,32,104,111,115,116,54,56,48,32,112,111,114,116,54,56,49,32,108,111,99,110,54,56,50,32,112,114,111,120,121,45,104,111,115,116,54,56,51,32,112,114,111,120,121,45,112,111,114,116,54,56,52,32,112,114,111,120,121,45,117,115,101,114,45,112,97,115,115,54,56,53,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,39),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,99,104,101,99,107,45,101,103,103,45,110,97,109,101,32,110,97,109,101,56,55,49,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,50,52,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,51,51,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,55,50,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,8),40,102,95,51,48,56,49,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,80),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,114,101,116,114,105,101,118,101,45,101,120,116,101,110,115,105,111,110,32,110,97,109,101,56,55,56,32,116,114,97,110,115,112,111,114,116,56,55,57,32,108,111,99,97,116,105,111,110,56,56,48,32,46,32,116,109,112,56,55,55,56,56,49,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,48,51,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,19),40,102,95,49,51,56,53,32,103,50,51,51,50,51,52,50,51,53,41,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,49,51,32,103,50,50,53,50,51,57,41,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,13),40,102,95,49,56,53,54,32,115,52,55,54,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,53,57,32,103,52,55,49,52,55,56,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,8),40,102,95,50,56,54,50,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,8),40,102,95,50,56,55,51,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,33),40,102,95,50,56,56,49,32,105,110,56,51,56,56,51,57,56,52,50,32,111,117,116,56,52,48,56,52,49,56,52,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,50),40,102,95,50,56,54,55,32,104,111,115,116,56,50,54,56,50,55,56,51,50,32,112,111,114,116,56,50,56,56,50,57,56,51,51,32,108,111,99,110,56,51,48,56,51,49,56,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,48,56,41};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,52,55,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,69),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,105,115,116,45,101,120,116,101,110,115,105,111,110,115,32,116,114,97,110,115,112,111,114,116,57,51,54,32,108,111,99,97,116,105,111,110,57,51,55,32,46,32,116,109,112,57,51,53,57,51,56,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,54,55,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,19),40,102,95,49,52,52,49,32,103,50,55,52,50,55,53,50,55,54,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,53,52,32,103,50,54,54,50,56,48,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,13),40,102,95,49,57,54,49,32,115,53,50,55,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,49,48,32,103,53,50,50,53,50,57,41,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,8),40,102,95,51,49,55,50,41};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,8),40,102,95,51,50,48,48,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,85),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,105,115,116,45,101,120,116,101,110,115,105,111,110,45,118,101,114,115,105,111,110,115,32,110,97,109,101,57,54,54,32,116,114,97,110,115,112,111,114,116,57,54,55,32,108,111,99,97,116,105,111,110,57,54,56,32,46,32,116,109,112,57,54,53,57,54,57,41,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2234)
static void C_fcall f_2234(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1872)
static void C_fcall f_1872(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_fcall f_2523(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2583)
static void C_fcall f_2583(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2550)
static void C_ccall f_2550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1845)
static void C_ccall f_1845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1849)
static void C_ccall f_1849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1804)
static void C_ccall f_1804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f3384)
static void C_ccall f3384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f3388)
static void C_ccall f3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1809)
static void C_fcall f_1809(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1551)
static void C_ccall f_1551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1346)
static void C_fcall f_1346(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2694)
static void C_fcall f_2694(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1306)
static void C_ccall f_1306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1304)
static void C_ccall f_1304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1318)
static void C_fcall f_1318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1452)
static void C_fcall f_1452(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2845)
static void C_ccall f_2845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1718)
static void C_ccall f_1718(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1385)
static void C_ccall f_1385(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_fcall f_1396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1629)
static void C_fcall f_1629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2914)
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2979)
static void C_fcall f_2979(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1967)
static void C_ccall f_1967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1436)
static void C_ccall f_1436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1430)
static void C_ccall f_1430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1977)
static void C_fcall f_1977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2753)
static void C_fcall f_2753(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1285)
static void C_ccall f_1285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2706)
static void C_fcall f_2706(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2665)
static void C_fcall f_2665(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2063)
static void C_ccall f_2063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2069)
static void C_ccall f_2069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2071)
static void C_ccall f_2071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2078)
static void C_ccall f_2078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2445)
static void C_fcall f_2445(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2089)
static void C_ccall f_2089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2741)
static void C_fcall f_2741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2502)
static void C_fcall f_2502(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1331)
static void C_ccall f_1331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1333)
static void C_fcall f_1333(C_word t0) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2152)
static void C_ccall f_2152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;

C_noret_decl(trf_2234)
static void C_fcall trf_2234(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2234(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2234(t0,t1);}

C_noret_decl(trf_1872)
static void C_fcall trf_1872(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1872(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1872(t0,t1,t2);}

C_noret_decl(trf_2523)
static void C_fcall trf_2523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2523(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2523(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2583)
static void C_fcall trf_2583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2583(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2583(t0,t1);}

C_noret_decl(trf_1809)
static void C_fcall trf_1809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1809(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1809(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1346)
static void C_fcall trf_1346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1346(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1346(t0,t1,t2,t3);}

C_noret_decl(trf_2694)
static void C_fcall trf_2694(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2694(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2694(t0,t1);}

C_noret_decl(trf_1318)
static void C_fcall trf_1318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1318(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1318(t0,t1,t2);}

C_noret_decl(trf_1452)
static void C_fcall trf_1452(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1452(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1452(t0,t1,t2);}

C_noret_decl(trf_1396)
static void C_fcall trf_1396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1396(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1396(t0,t1,t2);}

C_noret_decl(trf_1629)
static void C_fcall trf_1629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1629(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1629(t0,t1,t2);}

C_noret_decl(trf_2914)
static void C_fcall trf_2914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2914(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2914(t0,t1,t2);}

C_noret_decl(trf_2979)
static void C_fcall trf_2979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2979(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2979(t0,t1);}

C_noret_decl(trf_1977)
static void C_fcall trf_1977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1977(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1977(t0,t1,t2);}

C_noret_decl(trf_2753)
static void C_fcall trf_2753(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2753(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2753(t0,t1);}

C_noret_decl(trf_2706)
static void C_fcall trf_2706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2706(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2706(t0,t1);}

C_noret_decl(trf_2665)
static void C_fcall trf_2665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2665(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2665(t0,t1);}

C_noret_decl(trf_2445)
static void C_fcall trf_2445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2445(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2445(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2741)
static void C_fcall trf_2741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2741(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2741(t0,t1,t2);}

C_noret_decl(trf_2502)
static void C_fcall trf_2502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2502(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2502(t0,t1,t2);}

C_noret_decl(trf_1333)
static void C_fcall trf_1333(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1333(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_1333(t0);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

/* k2547 */
static void C_ccall f_2548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2550,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2638,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:299: make-HTTP-GET/1.1");
f_2445(t3,((C_word*)t0)[7],C_retrieve2(lf[1],"setup-download#\052chicken-install-user-agent\052"),((C_word*)t0)[8],C_a_i_list(&a,8,lf[164],((C_word*)t0)[9],lf[161],lf[185],lf[138],((C_word*)t0)[5],lf[178],((C_word*)t0)[6]));}

/* f_2545 in k2526 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2545,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=t3;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2548,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:297: d");
f_1318(t8,lf[186],C_a_i_list(&a,1,((C_word*)t0)[4]));}

/* k1861 */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#string-append");
((C_proc4)C_fast_retrieve_symbol_proc(lf[216]))(4,*((C_word*)lf[216]+1),((C_word*)t0)[2],t1,lf[217]);}

/* k1864 in k1850 in k1848 in k1846 in k1844 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1865,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[219]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1872,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li59),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1872(t7,t3,t1);}

/* f_3103 in setup-download#list-extensions in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3103,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_3108 in setup-download#list-extensions in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3108(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3108,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[207]);
if(C_truep(t3)){
t4=t1;
t5=((C_word*)t0)[3];
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1385,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1391,a[2]=t4,a[3]=t9,a[4]=t7,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:85: directory");
t12=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t5);}
else{
t4=C_eqp(t2,lf[208]);
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[3];
t7=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1845,a[2]=t5,a[3]=t6,a[4]=t13,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
C_trace("setup-download.scm:159: string-append");
t17=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,lf[224],t9,lf[225]);}
else{
t17=t16;
f_1845(2,t17,lf[226]);}}
else{
t5=C_eqp(t2,lf[209]);
if(C_truep(t5)){
t6=t1;
t7=((C_word*)t0)[3];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2862,a[2]=t7,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:383: ##sys#call-with-values");
C_call_with_values(4,0,t6,t8,t9);}
else{
C_trace("setup-download.scm:460: error");
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[229],((C_word*)t0)[2]);}}}}

/* k2237 in setup-download#deconstruct-url in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2244,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
C_trace("setup-download.scm:223: irregex-match-substring");
t3=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fix(2));}
else{
t3=t2;
f_2244(2,t3,((C_word*)t0)[3]);}}

/* k2514 in k2511 in setup-download#response-match-code? in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_string_equal_p(((C_word*)t0)[3],t1));}

/* k2511 in setup-download#response-match-code? in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:286: irregex-match-substring");
t3=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],C_fix(1));}

/* setup-download#deconstruct-url in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_fcall f_2234(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2234,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2238,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:221: irregex-match");
t4=C_fast_retrieve(lf[96]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[97],t2);}

/* k1868 in k1864 in k1850 in k1848 in k1846 in k1844 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:163: string-concatenate");
t2=C_fast_retrieve(lf[215]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop459 in k1864 in k1850 in k1848 in k1846 in k1844 */
static void C_fcall f_1872(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1872,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1897,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-download.scm:164: g465");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2526 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li42),tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word)li47),tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:296: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[8],t2,t3);}

/* setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_fcall f_2523(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2523,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2527,a[2]=t5,a[3]=t2,a[4]=t6,a[5]=t3,a[6]=t4,a[7]=t7,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2641,a[2]=t8,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2643,a[2]=t9,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:294: open-output-string");
t11=C_fast_retrieve(lf[35]);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
C_trace("setup-download.scm:292: d");
f_1318(t8,lf[187],C_a_i_list(&a,3,t2,t3,lf[190]));}}

/* setup-download#list-extension-versions in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_3152r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3152r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3152r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(9);
t6=C_i_get_keyword(lf[200],t5,C_SCHEME_FALSE);
t7=C_i_get_keyword(lf[202],t5,C_SCHEME_FALSE);
t8=C_i_get_keyword(lf[203],t5,C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3162,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t4,a[6]=t7,a[7]=t8,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:463: check-egg-name");
f_2979(t9,t2);}

/* loop in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_fcall f_2583(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2583,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2587,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:321: read-line");
t3=C_fast_retrieve(lf[111]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k2010 in k1945 in k1943 */
static void C_ccall f_2011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:170: make-pathname");
t2=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2579 in k2576 in k2574 in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace("setup-download.scm:331: values");
C_values(4,0,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* k2586 in loop in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:322: string-null?");
t3=C_fast_retrieve(lf[176]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1821 in setup-download#make-svn-ls-cmd in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:152: conc");
t2=C_fast_retrieve(lf[64]);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[65],((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* f_3147 in setup-download#list-extensions in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3147,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
t3=t1;
if(C_truep(C_i_stringp(t3))){
C_trace("setup-download.scm:283: irregex-match");
t4=C_fast_retrieve(lf[96]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[183],t3);}
else{
t4=t2;
f_2558(2,t4,C_SCHEME_FALSE);}}

/* k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2554,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2556,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("setup-download.scm:305: read-line");
t5=C_fast_retrieve(lf[111]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* k2551 in k2549 in k2547 */
static void C_ccall f_2552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:303: d");
f_1318(t2,lf[184],C_SCHEME_END_OF_LIST);}

/* k2549 in k2547 */
static void C_ccall f_2550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:302: flush-output");
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2558,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,tmp=(C_word)a,a+=14,tmp);
C_trace("setup-download.scm:307: d");
f_1318(t2,lf[182],C_a_i_list(&a,1,((C_word*)t0)[12]));}

/* k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2565,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2573,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:327: d");
f_1318(t2,lf[173],C_SCHEME_END_OF_LIST);}
else{
C_trace("setup-download.scm:331: values");
C_values(4,0,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[5])[1]);}}

/* k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2583(t6,t2);}

/* k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t2,a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
C_trace("setup-download.scm:309: response-match-code?");
f_2502(t3,((C_word*)t0)[13],C_fix(407));}

/* k1506 in k1504 in k1502 in k1500 in setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li3),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1545,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:94: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[8],t2,t3);}

/* k1945 in k1943 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2008,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2011,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:170: string-append");
t5=*((C_word*)lf[67]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],lf[238]);}

/* k1943 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-download.scm:169: string-append");
t3=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[239],((C_word*)t0)[5],lf[240]);}
else{
t3=t2;
f_1946(2,t3,lf[241]);}}

/* k1844 */
static void C_ccall f_1845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1847,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-download.scm:160: string-append");
t3=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[221],((C_word*)t0)[4],lf[222]);}
else{
t3=t2;
f_1847(2,t3,lf[223]);}}

/* k1846 in k1844 */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1849,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:161: make-svn-ls-cmd");
f_1809(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* k1848 in k1846 in k1844 */
static void C_ccall f_1849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1851,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:162: d");
f_1318(t2,lf[220],C_a_i_list(&a,1,t1));}

/* f_2532 in k2526 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2532,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(C_truep(t2)?t2:((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
if(C_truep(t4)){
C_trace("setup-download.scm:296: tcp-connect");
t5=C_fast_retrieve(lf[166]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}
else{
t5=((C_word*)t0)[5];
C_trace("setup-download.scm:296: tcp-connect");
t6=C_fast_retrieve(lf[166]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t3,t5);}}

/* k1949 in k1947 in k1945 in k1943 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1950,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[235]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1961,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1970,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:176: with-input-from-pipe");
t8=C_fast_retrieve(lf[84]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[3],C_fast_retrieve(lf[85]));}}

/* k1850 in k1848 in k1846 in k1844 */
static void C_ccall f_1851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1851,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1856,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:165: with-input-from-pipe");
t8=C_fast_retrieve(lf[84]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[3],C_fast_retrieve(lf[85]));}

/* f_1856 in k1850 in k1848 in k1846 in k1844 */
static void C_ccall f_1856(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1856,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:164: string-chomp");
t4=C_fast_retrieve(lf[171]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[218]);}

/* k1947 in k1945 in k1943 */
static void C_ccall f_1948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:171: with-input-from-pipe");
t3=C_fast_retrieve(lf[84]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fast_retrieve(lf[85]));}

/* f_1961 in k1949 in k1947 in k1945 in k1943 */
static void C_ccall f_1961(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1961,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1967,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:175: string-chomp");
t4=C_fast_retrieve(lf[171]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[237]);}

/* f_1804 */
static void C_ccall f_1804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1804,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f3384 in k2601 in k2591 in k2586 in loop in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f3384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:325: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2583(t2,((C_word*)t0)[3]);}

/* f3388 in k2601 in k2591 in k2586 in loop in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f3388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:325: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2583(t2,((C_word*)t0)[3]);}

/* setup-download#make-svn-ls-cmd in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_fcall f_1809(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1809,NULL,5,t1,t2,t3,t4,t5);}
t6=C_i_get_keyword(lf[61],t5,C_SCHEME_FALSE);
t7=(C_truep(t6)?lf[62]:lf[63]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1822,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:152: qs");
t9=C_fast_retrieve(lf[38]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}

/* k2007 in k1945 in k1943 */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:170: make-svn-ls-cmd");
f_1809(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}

/* k2001 in map-loop510 in k1969 in k1949 in k1947 in k1945 in k1943 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2002,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1977(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1977(t6,((C_word*)t0)[5],t5);}}

/* k3205 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:54: conc");
t2=C_fast_retrieve(lf[64]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[248],t1);}

/* f_3200 in k3161 in setup-download#list-extension-versions in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3200,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k1550 */
static void C_ccall f_1551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1608,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:111: normalize-pathname");
t4=C_fast_retrieve(lf[39]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k1552 in k1550 */
static void C_ccall f_1553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1605,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:112: normalize-pathname");
t4=C_fast_retrieve(lf[39]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k1554 in k1552 in k1550 */
static void C_ccall f_1555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[5],"setup-download#\052windows-shell\052"))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1576,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:114: open-output-string");
t4=C_fast_retrieve(lf[35]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1590,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:115: open-output-string");
t4=C_fast_retrieve(lf[35]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1556 in k1554 in k1552 in k1550 */
static void C_ccall f_1557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:116: d");
f_1318(t2,lf[30],C_a_i_list(&a,1,t1));}

/* k1558 in k1556 in k1554 in k1552 in k1550 */
static void C_ccall f_1559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:117: system");
t3=C_fast_retrieve(lf[29]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* f_2819 in k2816 in k2804 in k2802 in k2800 in k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
C_trace("setup-download.scm:375: g798");
t2=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* setup-download#existing-version in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_fcall f_1346(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1346,NULL,4,t1,t2,t3,t4);}
if(C_truep(t3)){
if(C_truep(C_i_member(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
C_trace("setup-download.scm:76: error");
t5=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[16],t2,t3);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1361,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:77: sort");
t6=C_fast_retrieve(lf[17]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,C_fast_retrieve(lf[18]));}}

/* k2816 in k2804 in k2802 in k2800 in k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2817,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[2],a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:375: with-output-to-file");
t3=C_fast_retrieve(lf[123]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],t1,t2,lf[124]);}

/* k1343 in k1341 in k1336 in setup-download#get-temporary-directory in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1575 in k1554 in k1552 in k1550 */
static void C_ccall f_1576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1576,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1578,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:114: display");
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[34],t2);}

/* k1573 in k1558 in k1556 in k1554 in k1552 in k1550 */
static void C_ccall f_1574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
C_trace("setup-download.scm:118: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
C_trace("setup-download.scm:119: values");
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[28]);}}

/* k1341 in k1336 in setup-download#get-temporary-directory in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1344,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:69: temporary-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[11]))(3,*((C_word*)lf[11]+1),t2,t1);}

/* k1581 in k1579 in k1577 in k1575 in k1554 in k1552 in k1550 */
static void C_ccall f_1582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1582,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:114: display");
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1579 in k1577 in k1575 in k1554 in k1552 in k1550 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[5]);}

/* k1583 in k1581 in k1579 in k1577 in k1575 in k1554 in k1552 in k1550 */
static void C_ccall f_1585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:114: get-output-string");
t2=C_fast_retrieve(lf[31]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1577 in k1575 in k1554 in k1552 in k1550 */
static void C_ccall f_1578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:114: display");
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}

/* f_1512 in k1506 in k1504 in k1502 in k1500 in setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in ... */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1512,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1521,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:103: make-pathname");
t3=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1523,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:104: make-pathname");
t3=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[27]);}}

/* k1360 in setup-download#existing-version in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(t1))){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_car(t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2692 in k2688 */
static void C_fcall f_2694(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2694,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("setup-download.scm:350: open-input-string");
t2=C_fast_retrieve(lf[101]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_i_string_equal_p(((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t4=t2;
f_2706(t4,C_i_not(t3));}
else{
t3=t2;
f_2706(t3,C_SCHEME_FALSE);}}}

/* k1522 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1525,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-download.scm:82: warning");
t4=C_fast_retrieve(lf[25]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[26],t3,((C_word*)t0)[5]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t2;
f_1525(2,t5,t4);}}

/* k1524 in k1522 */
static void C_ccall f_1525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1525,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1540,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:106: file-exists?");
t4=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k1520 */
static void C_ccall f_1521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:103: values");
C_values(4,0,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2346 in k2343 */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
C_trace("setup-download.scm:236: string-append");
t2=*((C_word*)lf[67]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[130],((C_word*)t0)[5],((C_word*)t0)[6],lf[131],t1,lf[132]);}
else{
C_trace("setup-download.scm:236: string-append");
t2=*((C_word*)lf[67]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[130],((C_word*)t0)[5],((C_word*)t0)[6],lf[131],t1,lf[133]);}}

/* k2343 */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:240: ->string");
t3=C_fast_retrieve(lf[134]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_retrieve2(lf[3],"setup-download#\052mode\052"));}

/* k1446 in k1434 in k1429 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1452,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li69),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1452(t6,t2,t1);}

/* k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:51: tcp-write-timeout");
t3=C_fast_retrieve(lf[250]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(30000));}

/* k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:50: tcp-read-timeout");
t3=C_fast_retrieve(lf[251]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(30000));}

/* k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1308,2,t0,t1);}
t2=lf[0] /* setup-download#*quiet* */ =C_SCHEME_FALSE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3206,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:54: chicken-version");
t5=C_fast_retrieve(lf[249]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* f_2850 in k2322 in k2320 in k2318 */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2850,4,t0,t1,t2,t3);}
t4=t1;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2663,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:334: d");
f_1318(t5,lf[129],C_SCHEME_END_OF_LIST);}

/* k1529 in k1524 in k1522 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-download.scm:107: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],lf[21]);}
else{
C_trace("setup-download.scm:108: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[4],lf[22]);}}

/* f_1441 in k1434 in k1429 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1441,3,t0,t1,t2);}
C_trace("setup-download.scm:91: g277");
t3=*((C_word*)lf[67]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[231]);}

/* k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1304,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:49: tcp-connect-timeout");
t3=C_fast_retrieve(lf[252]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(30000));}

/* f_2862 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2862,2,t0,t1);}
C_trace("setup-download.scm:384: deconstruct-url");
f_2234(t1,((C_word*)t0)[2]);}

/* f_2867 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2867,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2873,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=((C_word)li61),tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2881,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:383: ##sys#call-with-values");
C_call_with_values(4,0,t1,t5,t6);}

/* f_3033 in k3018 in k3014 in setup-download#retrieve-extension in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3033,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[207]);
if(C_truep(t3)){
C_trace("setup-download.scm:441: locate-egg/local");
((C_proc7)C_fast_retrieve_symbol_proc(lf[19]))(7,*((C_word*)lf[19]+1),t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t4=C_eqp(t2,lf[208]);
if(C_truep(t4)){
C_trace("setup-download.scm:443: locate-egg/svn");
((C_proc8)C_fast_retrieve_symbol_proc(lf[66]))(8,*((C_word*)lf[66]+1),t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t5=C_eqp(t2,lf[209]);
if(C_truep(t5)){
C_trace("setup-download.scm:445: locate-egg/http");
((C_proc10)C_fast_retrieve_symbol_proc(lf[98]))(10,*((C_word*)lf[98]+1),t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[13]);}
else{
C_trace("setup-download.scm:447: error");
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[210],((C_word*)t0)[2]);}}}}

/* f_1545 in k1506 in k1504 in k1502 in k1500 in setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in ... */
static void C_ccall f_1545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1545,4,t0,t1,t2,t3);}
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1551,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:110: create-directory");
t5=C_fast_retrieve(lf[40]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1610,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1615,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1649,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1656,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:123: directory");
t8=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
C_trace("setup-download.scm:129: values");
C_values(4,0,t1,t2,t3);}}}

/* setup-download#d in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_fcall f_1318(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1318,NULL,3,t1,t2,t3);}
t4=(C_truep(C_retrieve2(lf[0],"setup-download#\052quiet\052"))?*((C_word*)lf[7]+1):*((C_word*)lf[8]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1324,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t5,*((C_word*)lf[10]+1),t4,t2,t3);}

/* k1538 in k1524 in k1522 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-download.scm:106: directory?");
t2=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
C_trace("setup-download.scm:108: values");
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[5],lf[22]);}}

/* map-loop254 in k1446 in k1434 in k1429 */
static void C_fcall f_1452(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1452,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1477,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-download.scm:91: g260");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1448 in k1446 in k1434 in k1429 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:90: string-concatenate");
t2=C_fast_retrieve(lf[215]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1313,2,t0,t1);}
t2=C_mutate(&lf[1] /* (set! setup-download#*chicken-install-user-agent* ...) */,t1);
t3=lf[2] /* setup-download#*trunk* */ =C_SCHEME_FALSE;;
t4=C_mutate(&lf[3] /* (set! setup-download#*mode* ...) */,lf[4]);
t5=C_mutate(&lf[5] /* (set! setup-download#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t6=C_mutate(&lf[6] /* (set! setup-download#d ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1318,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1331,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:64: make-parameter");
t8=C_fast_retrieve(lf[247]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_SCHEME_FALSE);}

/* k2324 in k2322 in k2320 in k2318 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("setup-download.scm:247: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t2);}
else{
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-download.scm:247: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
C_trace("setup-download.scm:247: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],lf[99]);}}}

/* k2320 in k2318 */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2323,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2338,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:243: file-exists?");
t4=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k2322 in k2320 in k2318 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[6];
t5=((C_word*)t0)[7];
t6=((C_word*)t0)[3];
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2845,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word)li28),tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2850,a[2]=t6,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:378: ##sys#call-with-values");
C_call_with_values(4,0,t2,t7,t8);}

/* f_2873 */
static void C_ccall f_2873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2879,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:388: string-append");
t3=*((C_word*)lf[67]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],lf[227]);}

/* f_3024 in k3018 in k3014 in setup-download#retrieve-extension in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3024,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#\052trunk\052"));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_retrieve2(lf[3],"setup-download#\052mode\052"));
t5=C_mutate(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate(&lf[2] /* (set! setup-download#*trunk* ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate(&lf[3] /* (set! setup-download#*mode* ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}

/* k2878 */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:386: http-connect");
f_2523(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* f_1789 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1794,a[2]=((C_word*)t0)[2],a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1799,a[2]=((C_word*)t0)[3],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:142: ##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* k1597 in k1595 in k1593 in k1591 in k1589 in k1554 in k1552 in k1550 */
static void C_ccall f_1599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:115: get-output-string");
t2=C_fast_retrieve(lf[31]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2336 in k2320 in k2318 */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_2323(2,t2,C_SCHEME_UNDEFINED);}
else{
C_trace("setup-download.scm:243: create-directory");
t2=C_fast_retrieve(lf[40]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k1595 in k1593 in k1591 in k1589 in k1554 in k1552 in k1550 */
static void C_ccall f_1596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1596,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:115: display");
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1591 in k1589 in k1554 in k1552 in k1550 */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:115: display");
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}

/* k1593 in k1591 in k1589 in k1554 in k1552 in k1550 */
static void C_ccall f_1594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:115: display");
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[36],((C_word*)t0)[5]);}

/* k1589 in k1554 in k1552 in k1550 */
static void C_ccall f_1590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1590,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1592,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:115: display");
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[37],t2);}

/* k1476 in map-loop254 in k1446 in k1434 in k1429 */
static void C_ccall f_1477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1477,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1452(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1452(t6,((C_word*)t0)[5],t5);}}

/* f_1781 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1784,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:144: warning");
t3=C_fast_retrieve(lf[25]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[51],((C_word*)t0)[3]);}

/* k2800 in k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:373: read");
t3=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}

/* k1783 */
static void C_ccall f_1784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:147: return");
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],C_SCHEME_FALSE);}

/* k2806 in k2804 in k2802 in k2800 in k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2808,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
C_trace("setup-download.scm:376: get-files");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2741(t3,((C_word*)t0)[5],t2);}

/* k2804 in k2802 in k2800 in k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2817,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:375: make-pathname");
t4=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k2802 in k2800 in k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("read-string/port");
t3=C_fast_retrieve(lf[125]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[7]);}

/* k2304 in setup-download#locate-egg/http in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2311,a[2]=((C_word*)t0)[2],a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li34),tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:232: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[9],t2,t3);}

/* k2896 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:396: abort");
t2=C_fast_retrieve(lf[112]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_1751 in k1744 in k1739 */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1751,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1757,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:140: string->symbol");
t4=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k1756 */
static void C_ccall f_1757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1757,2,t0,t1);}
t2=C_a_i_list2(&a,2,lf[50],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1766,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1771,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:142: call-with-current-continuation");
t5=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k2318 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:242: make-pathname");
t3=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* f_2316 in k2304 in setup-download#locate-egg/http in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2316,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2319,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("setup-download.scm:239: string-append");
t7=*((C_word*)lf[67]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,lf[135],((C_word*)t0)[2]);}
else{
t7=t6;
f_2344(2,t7,lf[136]);}}

/* f_2311 in k2304 in setup-download#locate-egg/http in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2311,2,t0,t1);}
C_trace("setup-download.scm:235: deconstruct-url");
f_2234(t1,((C_word*)t0)[2]);}

/* k1500 in setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1503,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:96: make-pathname");
t3=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[48]);}

/* k1504 in k1502 in k1500 in setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1507,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
C_trace("setup-download.scm:100: make-pathname");
t3=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[4]);}
else{
t3=t2;
f_1507(2,t3,C_SCHEME_FALSE);}}

/* k1502 in k1500 in setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1505,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_retrieve2(lf[2],"setup-download#\052trunk\052");
if(C_truep(C_retrieve2(lf[2],"setup-download#\052trunk\052"))){
t4=t2;
f_1505(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1668,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:98: file-exists?");
t5=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t1);}}

/* f_1771 in k1756 */
static void C_ccall f_1771(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1771,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1789,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:142: with-exception-handler");
t5=C_fast_retrieve(lf[54]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* f_1776 */
static void C_ccall f_1776(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1776,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:142: k410");
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_3081 in setup-download#retrieve-extension in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3081,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[4]);}

/* setup-download#list-extensions in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+24)){
C_save_and_reclaim((void*)tr4r,(void*)f_3084r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3084r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3084r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(24);
t5=C_i_get_keyword(lf[200],t4,C_SCHEME_FALSE);
t6=C_i_get_keyword(lf[202],t4,C_SCHEME_FALSE);
t7=C_i_get_keyword(lf[203],t4,C_SCHEME_FALSE);
t8=C_i_get_keyword(lf[138],t4,C_SCHEME_FALSE);
t9=C_i_get_keyword(lf[178],t4,C_SCHEME_FALSE);
t10=C_i_get_keyword(lf[139],t4,C_SCHEME_FALSE);
t11=t5;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3103,a[2]=t14,a[3]=t12,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3108,a[2]=t2,a[3]=t3,a[4]=t6,a[5]=t7,a[6]=t8,a[7]=t9,a[8]=t10,a[9]=((C_word)li64),tmp=(C_word)a,a+=10,tmp);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3147,a[2]=t12,a[3]=t14,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:449: ##sys#dynamic-wind");
t18=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t1,t15,t16,t17);}

/* f_2845 in k2322 in k2320 in k2318 */
static void C_ccall f_2845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2845,2,t0,t1);}
C_trace("setup-download.scm:380: http-connect");
f_2523(t1,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k1744 in k1739 */
static void C_ccall f_1746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1746,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:138: call/cc");
t3=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1739 */
static void C_ccall f_1740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:137: file-exists?");
t3=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1666 in k1502 in k1500 in setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1668,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:98: directory?");
t3=C_fast_retrieve(lf[23]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
f_1505(2,t2,C_SCHEME_FALSE);}}

/* setup-download#gather-egg-information in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1718(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1718,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1722,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:132: directory");
t4=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1767 in k1765 in k1756 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1769,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* f_1385 */
static void C_ccall f_1385(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1385,3,t0,t1,t2);}
C_trace("setup-download.scm:85: g236");
t3=*((C_word*)lf[67]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[214]);}

/* k1679 in k1672 in k1666 in k1502 in k1500 in setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in ... */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:99: existing-version");
f_1346(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1765 in k1756 */
static void C_ccall f_1766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:142: g414");
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* f_1737 */
static void C_ccall f_1737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1737,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1740,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:136: make-pathname");
t5=C_fast_retrieve(lf[20]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,((C_word*)t0)[2],lf[58]);}

/* k1392 in k1390 */
static void C_ccall f_1394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:85: string-concatenate");
t2=C_fast_retrieve(lf[215]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop213 in k1390 */
static void C_fcall f_1396(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1396,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-download.scm:85: g219");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1390 */
static void C_ccall f_1391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1394,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li57),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1396(t6,t2,t1);}

/* k2936 in k2954 in k2917 in get-chunks in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:414: string-concatenate-reverse");
t2=C_fast_retrieve(lf[167]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1655 */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:123: filter");
t2=C_fast_retrieve(lf[46]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_1732 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1732,2,t0,t1);}
C_trace("setup-download.scm:135: locate-egg/local");
((C_proc4)C_fast_retrieve_symbol_proc(lf[19]))(4,*((C_word*)lf[19]+1),t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2899 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:402: make-property-condition");
t3=C_fast_retrieve(lf[114]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[115]);}

/* k2905 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:398: make-property-condition");
t2=C_fast_retrieve(lf[114]);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[116],lf[117],t1,lf[118],((C_word*)t0)[3]);}

/* k2902 in k2899 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:397: make-composite-condition");
t2=C_fast_retrieve(lf[113]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2887 in k2885 in k2883 */
static void C_ccall f_2888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2885 in k2883 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:392: close-output-port");
t3=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k2883 */
static void C_ccall f_2884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2886,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:391: close-input-port");
t3=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* f_2881 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2881,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2884,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:390: read-all");
t5=C_fast_retrieve(lf[228]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* for-each-loop377 in k1614 */
static void C_fcall f_1629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1629,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1638,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-download.scm:123: g378");
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_3072 in k3018 in k3014 in setup-download#retrieve-extension in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3072,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#\052trunk\052"));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_retrieve2(lf[3],"setup-download#\052mode\052"));
t5=C_mutate(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate(&lf[2] /* (set! setup-download#*trunk* ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate(&lf[3] /* (set! setup-download#*mode* ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}

/* k2917 in get-chunks in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:409: string-chomp");
t3=C_fast_retrieve(lf[171]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[172]);}

/* get-chunks in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2914,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2918,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:406: read-line");
t4=C_fast_retrieve(lf[111]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k1672 in k1666 in k1502 in k1500 in setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_1674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1674,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:99: directory");
t3=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
f_1505(2,t2,C_SCHEME_FALSE);}}

/* setup-download#locate-egg/local in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_1485r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1485r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1485r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
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
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1501,a[2]=t2,a[3]=t6,a[4]=t14,a[5]=t1,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:95: make-pathname");
t18=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t17,t3,t2);}

/* k1482 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:88: make-pathname");
t2=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_1727 in k1721 in setup-download#gather-egg-information in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1727,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1732,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1737,a[2]=t2,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:134: ##sys#call-with-values");
C_call_with_values(4,0,t1,t3,t4);}

/* k2790 in k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2799,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:369: make-pathname");
t4=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2792 in k2790 in k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:370: get-files");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2741(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2798 in k2790 in k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:369: create-directory");
t2=C_fast_retrieve(lf[40]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1721 in setup-download#gather-egg-information in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1727,a[2]=((C_word*)t0)[2],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:133: filter-map");
t3=C_fast_retrieve(lf[59]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,t1);}

/* f_1649 */
static void C_ccall f_1649(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1649,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[44]);
C_trace("setup-download.scm:123: g373");
t4=C_fast_retrieve(lf[44]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[45],t2);}

/* setup-download#check-egg-name in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_fcall f_2979(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2979,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2986,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep((C_truep(C_i_equalp(t4,lf[194]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[195]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[196]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
C_trace("setup-download.scm:429: error");
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[193],t2);}
else{
C_trace("setup-download.scm:425: string-index");
t5=C_fast_retrieve(lf[197]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve2(lf[191],"setup-download#slashes"));}}

/* f_1616 in k1614 */
static void C_ccall f_1616(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1616,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1619,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:126: d");
f_1318(t3,lf[42],C_a_i_list(&a,1,t2));}

/* k1614 */
static void C_ccall f_1615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1616,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t3=C_i_check_list_2(t1,lf[43]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1629,a[2]=t5,a[3]=t2,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1629(t7,((C_word*)t0)[2],t1);}

/* k1609 */
static void C_ccall f_1610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:129: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1420 in map-loop213 in k1390 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1421,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1396(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1396(t6,((C_word*)t0)[5],t5);}}

/* k1618 */
static void C_ccall f_1619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:127: delete-file*");
t2=C_fast_retrieve(lf[41]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_3172 in k3161 in setup-download#list-extension-versions in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3172,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[207]);
if(C_truep(t3)){
t4=t1;
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1430,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1483,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:88: string-append");
t9=*((C_word*)lf[67]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t5,lf[234]);}
else{
t4=C_eqp(t2,lf[208]);
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[4];
t8=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1944,a[2]=t5,a[3]=t7,a[4]=t6,a[5]=t14,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
C_trace("setup-download.scm:168: string-append");
t18=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t17,lf[242],t10,lf[243]);}
else{
t18=t17;
f_1944(2,t18,lf[244]);}}
else{
C_trace("setup-download.scm:471: error");
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[245],((C_word*)t0)[2]);}}}

/* k1973 in k1969 in k1949 in k1947 in k1945 in k1943 */
static void C_ccall f_1975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:174: string-concatenate");
t2=C_fast_retrieve(lf[215]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1969 in k1949 in k1947 in k1945 in k1943 */
static void C_ccall f_1970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1970,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[219]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1977,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li71),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1977(t7,t3,t1);}

/* k2943 in k2941 in k2954 in k2917 in get-chunks in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:418: read-line");
t3=C_fast_retrieve(lf[111]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k2941 in k2954 in k2917 in get-chunks in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2944,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:417: d");
f_1318(t2,lf[169],C_SCHEME_END_OF_LIST);}

/* k2945 in k2943 in k2941 in k2954 in k2917 in get-chunks in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2946,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
C_trace("setup-download.scm:419: get-chunks");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2914(t3,((C_word*)t0)[5],t2);}

/* k1966 */
static void C_ccall f_1967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#string-append");
((C_proc4)C_fast_retrieve_symbol_proc(lf[216]))(4,*((C_word*)lf[216]+1),((C_word*)t0)[2],t1,lf[236]);}

/* k1434 in k1429 */
static void C_ccall f_1436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1436,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1441,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1447,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:91: directory");
t8=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[232]);}}

/* k3014 in setup-download#retrieve-extension in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3015,2,t0,t1);}
t2=C_i_get_keyword(lf[206],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
C_trace("setup-download.scm:435: check-egg-name");
f_2979(t3,((C_word*)t0)[6]);}

/* k1429 */
static void C_ccall f_1430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1436,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:89: directory-exists?");
t3=C_fast_retrieve(lf[233]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2162 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-download.scm:189: irregex-match-substring");
t2=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(1));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3018 in k3014 in setup-download#retrieve-extension in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3019,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[3];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[4];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3024,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t3,a[6]=t5,a[7]=t7,a[8]=((C_word)li50),tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3033,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word)li51),tmp=(C_word)a,a+=15,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3072,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=((C_word)li52),tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:436: ##sys#dynamic-wind");
t17=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,((C_word*)t0)[17],t14,t15,t16);}

/* f_2160 in k2070 in k2068 in k2066 in k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in ... */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2160,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2163,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:188: irregex-search");
t4=C_fast_retrieve(lf[82]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[83],t2);}

/* k3161 in setup-download#list-extension-versions in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3162,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3167,a[2]=t5,a[3]=t3,a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li72),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3200,a[2]=t3,a[3]=t5,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:464: ##sys#dynamic-wind");
t9=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[8],t6,t7,t8);}

/* f_3167 in k3161 in setup-download#list-extension-versions in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_3167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3167,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k2954 in k2917 in get-chunks in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2955,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(16));
if(C_truep(t2)){
if(C_truep(C_i_zerop(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:413: d");
f_1318(t3,lf[168],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("read-string/port");
t4=C_fast_retrieve(lf[125]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[5]);}}
else{
C_trace("setup-download.scm:411: error");
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],lf[170]);}}

/* k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2959,2,t0,t1);}
t2=C_mutate(&lf[191] /* (set! setup-download#slashes ...) */,t1);
t3=C_mutate(&lf[192] /* (set! setup-download#check-egg-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[198]+1 /* (set! setup-download#retrieve-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2991,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[213]+1 /* (set! setup-download#list-extensions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3084,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[230]+1 /* (set! setup-download#list-extension-versions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3152,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_UNDEFINED);}

/* map-loop510 in k1969 in k1949 in k1947 in k1945 in k1943 */
static void C_fcall f_1977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1977,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2002,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-download.scm:175: g516");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2171 in k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2172,2,t0,t1);}
C_trace("setup-download.scm:181: make-svn-ls-cmd");
f_1809(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_a_i_list(&a,2,lf[61],C_SCHEME_TRUE));}

/* k1637 in for-each-loop377 in k1614 */
static void C_ccall f_1638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1629(t3,((C_word*)t0)[4],t2);}

/* k2751 in k2746 in k2744 in get-files in k2662 */
static void C_fcall f_2753(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2753,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[3];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2897,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2900,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2906,a[2]=t8,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:400: string-append");
t10=*((C_word*)lf[67]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,lf[119],t2);}
else{
t2=C_eofp(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_i_not(((C_word*)t0)[2]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2772,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:362: close-input-port");
t5=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:367: string-suffix?");
t5=C_fast_retrieve(lf[44]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[127],((C_word*)t0)[2]);}
else{
C_trace("setup-download.scm:366: error");
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],lf[128],((C_word*)t0)[2]);}}}}

/* k1604 in k1552 in k1550 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:112: qs");
t2=C_fast_retrieve(lf[38]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1607 in k1550 */
static void C_ccall f_1608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:111: qs");
t2=C_fast_retrieve(lf[38]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1278 */
static void C_ccall f_1279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1281,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* setup-download#locate-egg/http in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2277r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2277r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2277r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word *a=C_alloc(10);
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
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
t21=C_i_nullp(t20);
t22=(C_truep(t21)?C_SCHEME_FALSE:C_i_car(t20));
t23=C_i_nullp(t20);
t24=(C_truep(t23)?C_SCHEME_END_OF_LIST:C_i_cdr(t20));
t25=C_i_nullp(t24);
t26=(C_truep(t25)?C_SCHEME_FALSE:C_i_car(t24));
t27=C_i_nullp(t24);
t28=(C_truep(t27)?C_SCHEME_END_OF_LIST:C_i_cdr(t24));
t29=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2306,a[2]=t3,a[3]=t6,a[4]=t18,a[5]=t22,a[6]=t26,a[7]=t2,a[8]=t14,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t10)){
t30=t29;
f_2306(2,t30,t10);}
else{
C_trace("setup-download.scm:234: get-temporary-directory");
f_1333(t29);}}

/* k2605 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2607,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[9],a[10]=((C_word)li46),tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:310: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[10],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2632,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:318: response-match-code?");
f_2502(t2,((C_word*)t0)[12],C_fix(200));}}

/* k2601 in k2591 in k2586 in loop in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3384,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:324: d");
f_1318(t3,lf[174],C_a_i_list(&a,1,((C_word*)t0)[5]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3388,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:324: d");
f_1318(t2,lf[174],C_a_i_list(&a,1,((C_word*)t0)[5]));}}

/* k2984 in setup-download#check-egg-name in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
C_trace("setup-download.scm:429: error");
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[193],((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1282 in k1280 in k1278 */
static void C_ccall f_1283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1285,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1287,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1280 in k1278 */
static void C_ccall f_1281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* f_2617 in k2605 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2617(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[34],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2617,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2626,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:313: make-HTTP-GET/1.1");
f_2445(t6,((C_word*)t0)[4],C_retrieve2(lf[1],"setup-download#\052chicken-install-user-agent\052"),((C_word*)t0)[5],C_a_i_list(&a,10,lf[164],((C_word*)t0)[6],lf[161],lf[177],lf[138],((C_word*)t0)[7],lf[178],((C_word*)t0)[8],lf[139],((C_word*)t0)[9]));}

/* f_2612 in k2605 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2612,2,t0,t1);}
C_trace("setup-download.scm:310: tcp-connect");
t2=C_fast_retrieve(lf[166]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* setup-download#retrieve-extension in k2957 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2991(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr5r,(void*)f_2991r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2991r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2991r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(20);
t6=C_i_get_keyword(lf[199],t5,C_SCHEME_FALSE);
t7=C_i_get_keyword(lf[200],t5,C_SCHEME_FALSE);
t8=C_i_get_keyword(lf[201],t5,C_SCHEME_FALSE);
t9=C_i_get_keyword(lf[202],t5,C_SCHEME_FALSE);
t10=C_i_get_keyword(lf[203],t5,C_SCHEME_FALSE);
t11=C_i_get_keyword(lf[204],t5,C_SCHEME_FALSE);
t12=C_i_get_keyword(lf[138],t5,C_SCHEME_FALSE);
t13=C_i_get_keyword(lf[178],t5,C_SCHEME_FALSE);
t14=C_i_get_keyword(lf[139],t5,C_SCHEME_FALSE);
t15=C_i_get_keyword(lf[205],t5,C_SCHEME_FALSE);
t16=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3015,a[2]=t5,a[3]=t7,a[4]=t15,a[5]=t3,a[6]=t2,a[7]=t4,a[8]=t6,a[9]=t8,a[10]=t9,a[11]=t10,a[12]=t11,a[13]=t12,a[14]=t13,a[15]=t14,a[16]=t1,tmp=(C_word)a,a+=17,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3081,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:431: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[158]+1)))(5,*((C_word*)lf[158]+1),t16,lf[212],t5,t17);}

/* k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:27: ##sys#require");
((C_proc3)C_fast_retrieve_symbol_proc(lf[253]))(3,*((C_word*)lf[253]+1),t2,lf[254]);}

/* k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1293,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2625 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:312: display");
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k2260 in k2257 in k2243 in k2237 in setup-download#deconstruct-url in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2261,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_2247(2,t3,t2);}
else{
C_trace("setup-download.scm:227: error");
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[95],t1);}}

/* k2637 in k2547 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:298: display");
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k2630 in k2605 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2632,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_2562(2,t3,t2);}
else{
t2=C_a_i_list(&a,1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2437,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2440,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:252: make-property-condition");
t5=C_fast_retrieve(lf[114]);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t4,lf[116],lf[117],lf[181],lf[118],t2);}}

/* k2591 in k2586 in loop in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2593,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
C_trace("setup-download.scm:289: irregex-match");
t4=C_fast_retrieve(lf[96]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[175],t3);}}

/* k2648 in k2646 in k2644 in k2642 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:294: display");
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k2646 in k2644 in k2642 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[4]);}

/* k2640 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2641,2,t0,t1);}
C_trace("setup-download.scm:292: d");
f_1318(((C_word*)t0)[2],lf[187],C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k2644 in k2642 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2645,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:294: display");
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[4]);}

/* k2642 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2643,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2645,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:294: display");
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[189],t2);}

/* k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in ... */
static void C_ccall f_2654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:294: get-output-string");
t2=C_fast_retrieve(lf[31]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2127 in k2105 */
static void C_ccall f_2128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(C_retrieve2(lf[3],"setup-download#\052mode\052"),lf[79]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2136,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:209: create-directory");
t5=C_fast_retrieve(lf[40]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t4=t2;
f_2131(2,t4,((C_word*)t0)[5]);}}

/* k2124 in k2109 in k2107 in k2105 */
static void C_ccall f_2125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
C_trace("setup-download.scm:214: values");
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
C_trace("setup-download.scm:215: values");
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[74]);}}

/* k2650 in k2648 in k2646 in k2644 in k2642 in setup-download#http-connect in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in ... */
static void C_ccall f_2651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2651,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:294: display");
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[188],((C_word*)t0)[4]);}

/* k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2914,a[2]=t5,a[3]=t3,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2914(t7,t2,C_SCHEME_END_OF_LIST);}

/* k2707 in k2704 in k2692 in k2688 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
C_trace("setup-download.scm:350: open-input-string");
t3=C_fast_retrieve(lf[101]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2574 in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:329: close-input-port");
t3=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k2704 in k2692 in k2688 */
static void C_fcall f_2706(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2706,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:346: warning");
t3=C_fast_retrieve(lf[25]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[104],((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[5]);
C_trace("setup-download.scm:350: open-input-string");
t3=C_fast_retrieve(lf[101]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2662 */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2663,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2665,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2741,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word)li32),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_2741(t10,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* skip in k2662 */
static void C_fcall f_2665(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2665,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2669,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:337: read-line");
t3=C_fast_retrieve(lf[111]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k2576 in k2574 in k2572 in k2563 in k2561 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:330: open-input-string");
t3=C_fast_retrieve(lf[101]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k2135 in k2127 in k2105 */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
C_trace("setup-download.scm:218: conc");
t4=C_fast_retrieve(lf[64]);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[4],t2,C_make_character(47),t3,lf[80]);}

/* k2130 in k2127 in k2105 */
static void C_ccall f_2131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(C_retrieve2(lf[0],"setup-download#\052quiet\052"))?lf[76]:lf[77]);
C_trace("setup-download.scm:155: conc");
t6=C_fast_retrieve(lf[64]);
((C_proc15)(void*)(*((C_word*)t6+1)))(15,t6,((C_word*)t0)[5],lf[78],t2,C_make_character(32),t3,C_make_character(32),C_make_character(34),t4,C_make_character(34),C_make_character(32),C_make_character(34),t1,C_make_character(34),t5);}

/* k2668 in skip in k2662 */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2669,2,t0,t1);}
t2=C_eofp(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_2677(2,t4,t2);}
else{
C_trace("setup-download.scm:339: irregex-match");
t4=C_fast_retrieve(lf[96]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[110],t1);}}

/* k2675 in k2668 in skip in k2662 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2677,2,t0,t1);}
if(C_truep(t1)){
C_trace("setup-download.scm:340: open-input-string");
t2=C_fast_retrieve(lf[101]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[102]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2682,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:341: irregex-match");
t3=C_fast_retrieve(lf[96]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[109],((C_word*)t0)[3]);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1090)){
C_save(t1);
C_rereclaim2(1090*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,255);
lf[4]=C_h_intern(&lf[4],7,"default");
lf[7]=C_h_intern(&lf[7],18,"\003sysstandard-error");
lf[8]=C_h_intern(&lf[8],19,"\003sysstandard-output");
lf[9]=C_h_intern(&lf[9],12,"flush-output");
lf[10]=C_h_intern(&lf[10],7,"fprintf");
lf[11]=C_h_intern(&lf[11],34,"setup-download#temporary-directory");
lf[13]=C_h_intern(&lf[13],26,"create-temporary-directory");
lf[15]=C_h_intern(&lf[15],5,"error");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\021version not found");
lf[17]=C_h_intern(&lf[17],4,"sort");
lf[18]=C_h_intern(&lf[18],20,"setup-api#version>=\077");
lf[19]=C_h_intern(&lf[19],31,"setup-download#locate-egg/local");
lf[20]=C_h_intern(&lf[20],13,"make-pathname");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[23]=C_h_intern(&lf[23],10,"directory\077");
lf[24]=C_h_intern(&lf[24],12,"file-exists\077");
lf[25]=C_h_intern(&lf[25],7,"warning");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000-extension has no such version - using default");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[29]=C_h_intern(&lf[29],6,"system");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[31]=C_h_intern(&lf[31],17,"get-output-string");
lf[32]=C_h_intern(&lf[32],7,"display");
lf[33]=C_h_intern(&lf[33],19,"\003syswrite-char/port");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\006xcopy ");
lf[35]=C_h_intern(&lf[35],18,"open-output-string");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\003/\052 ");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\006cp -r ");
lf[38]=C_h_intern(&lf[38],2,"qs");
lf[39]=C_h_intern(&lf[39],18,"normalize-pathname");
lf[40]=C_h_intern(&lf[40],16,"create-directory");
lf[41]=C_h_intern(&lf[41],12,"delete-file\052");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\0006 deleting stale file `~a\047 from local build directory~%");
lf[43]=C_h_intern(&lf[43],8,"for-each");
lf[44]=C_h_intern(&lf[44],14,"string-suffix\077");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\003.so");
lf[46]=C_h_intern(&lf[46],6,"filter");
lf[47]=C_h_intern(&lf[47],9,"directory");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\004tags");
lf[49]=C_h_intern(&lf[49],37,"setup-download#gather-egg-information");
lf[50]=C_h_intern(&lf[50],7,"version");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000.extension has syntactically invalid .meta file");
lf[52]=C_h_intern(&lf[52],20,"with-input-from-file");
lf[53]=C_h_intern(&lf[53],4,"read");
lf[54]=C_h_intern(&lf[54],22,"with-exception-handler");
lf[55]=C_h_intern(&lf[55],30,"call-with-current-continuation");
lf[56]=C_h_intern(&lf[56],14,"string->symbol");
lf[57]=C_h_intern(&lf[57],7,"call/cc");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[59]=C_h_intern(&lf[59],10,"filter-map");
lf[61]=C_h_intern(&lf[61],11,"\000recursive\077");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\004 -R ");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[64]=C_h_intern(&lf[64],4,"conc");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\007svn ls ");
lf[66]=C_h_intern(&lf[66],29,"setup-download#locate-egg/svn");
lf[67]=C_h_intern(&lf[67],13,"string-append");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\005tags/");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\006trunk/");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\005 1>&2");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\013svn export ");
lf[79]=C_h_intern(&lf[79],4,"meta");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\005.meta");
lf[81]=C_h_intern(&lf[81],23,"irregex-match-substring");
lf[82]=C_h_intern(&lf[82],14,"irregex-search");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\016^tags/([^/]+)/");
lf[84]=C_h_intern(&lf[84],20,"with-input-from-pipe");
lf[85]=C_h_intern(&lf[85],10,"read-lines");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\047checking available versions ...~%  ~a~%");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\020not a valid port");
lf[96]=C_h_intern(&lf[96],13,"irregex-match");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000$(http://)\077([^/:]+)(:([^:/]+))\077(/.\052)\077");
lf[98]=C_h_intern(&lf[98],30,"setup-download#locate-egg/http");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[101]=C_h_intern(&lf[101],17,"open-input-string");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000 files-versions are not identical");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000=unrecognized file-information - possibly corrupt transmission");
lf[107]=C_h_intern(&lf[107],12,"string-every");
lf[108]=C_h_intern(&lf[108],19,"char-set:whitespace");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\031 \052#\134|[- ]\052([^- ]\052) \052\134|#.\052");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\011 \052#!eof \052");
lf[111]=C_h_intern(&lf[111],9,"read-line");
lf[112]=C_h_intern(&lf[112],5,"abort");
lf[113]=C_h_intern(&lf[113],24,"make-composite-condition");
lf[114]=C_h_intern(&lf[114],23,"make-property-condition");
lf[115]=C_h_intern(&lf[115],20,"setup-download-error");
lf[116]=C_h_intern(&lf[116],3,"exn");
lf[117]=C_h_intern(&lf[117],7,"message");
lf[118]=C_h_intern(&lf[118],9,"arguments");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\011[Server] ");
lf[120]=C_h_intern(&lf[120],17,"close-output-port");
lf[121]=C_h_intern(&lf[121],16,"close-input-port");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[123]=C_h_intern(&lf[123],19,"with-output-to-file");
lf[124]=C_h_intern(&lf[124],7,"\000binary");
lf[125]=C_h_intern(&lf[125],20,"\003sysread-string/port");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\0001invalid file name - possibly corrupt transmission");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\023reading files ...~%");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\006\077name=");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\006&mode=");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\012&tests=yes");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[134]=C_h_intern(&lf[134],8,"->string");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\011&version=");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[138]=C_h_intern(&lf[138],11,"\000proxy-host");
lf[139]=C_h_intern(&lf[139],16,"\000proxy-user-pass");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\004GET ");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\011 HTTP/1.1");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\014Connection: ");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\014User-Agent: ");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\010Accept: ");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\006Host: ");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\020Content-length: ");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\033Proxy-Authorization: Basic ");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\007http://");
lf[158]=C_h_intern(&lf[158],15,"\003sysget-keyword");
lf[159]=C_h_intern(&lf[159],15,"\000content-length");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[161]=C_h_intern(&lf[161],7,"\000accept");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\005close");
lf[163]=C_h_intern(&lf[163],11,"\000connection");
lf[164]=C_h_intern(&lf[164],5,"\000port");
lf[166]=C_h_intern(&lf[166],11,"tcp-connect");
lf[167]=C_h_intern(&lf[167],26,"string-concatenate-reverse");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\002~%");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000/invalid response from server - please try again");
lf[171]=C_h_intern(&lf[171],12,"string-chomp");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\001\015");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\017reading chunks ");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\004~a~%");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000$[Tt]ransfer-[Ee]ncoding:\134s\052chunked.\052");
lf[176]=C_h_intern(&lf[176],12,"string-null\077");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\003\052/\052");
lf[178]=C_h_intern(&lf[178],11,"\000proxy-port");
lf[179]=C_h_intern(&lf[179],6,"signal");
lf[180]=C_h_intern(&lf[180],10,"http-fetch");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid response from server");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\004~a~%");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\034HTTP/[0-9.]+\134s+([0-9]+)\134s+.\052");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\026reading response ...~%");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\003\052/\052");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\023requesting ~s ...~%");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000&connecting to host ~s, port ~a ~a...~%");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\005(via ");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid extension name");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[197]=C_h_intern(&lf[197],12,"string-index");
lf[198]=C_h_intern(&lf[198],33,"setup-download#retrieve-extension");
lf[199]=C_h_intern(&lf[199],8,"\000version");
lf[200]=C_h_intern(&lf[200],6,"\000quiet");
lf[201]=C_h_intern(&lf[201],12,"\000destination");
lf[202]=C_h_intern(&lf[202],9,"\000username");
lf[203]=C_h_intern(&lf[203],9,"\000password");
lf[204]=C_h_intern(&lf[204],6,"\000tests");
lf[205]=C_h_intern(&lf[205],6,"\000trunk");
lf[206]=C_h_intern(&lf[206],6,"\000clean");
lf[207]=C_h_intern(&lf[207],5,"local");
lf[208]=C_h_intern(&lf[208],3,"svn");
lf[209]=C_h_intern(&lf[209],4,"http");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\0001cannot retrieve extension - unsupported transport");
lf[211]=C_h_intern(&lf[211],16,"\003sysdynamic-wind");
lf[212]=C_h_intern(&lf[212],5,"\000mode");
lf[213]=C_h_intern(&lf[213],30,"setup-download#list-extensions");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[215]=C_h_intern(&lf[215],18,"string-concatenate");
lf[216]=C_h_intern(&lf[216],17,"\003sysstring-append");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[219]=C_h_intern(&lf[219],3,"map");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\047listing extension directory ...~%  ~a~%");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\007\077list=1");
lf[228]=C_h_intern(&lf[228],8,"read-all");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000.cannot list extensions - unsupported transport");
lf[230]=C_h_intern(&lf[230],38,"setup-download#list-extension-versions");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\010unknown\012");
lf[233]=C_h_intern(&lf[233],17,"directory-exists\077");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\005/tags");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\010unknown\012");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\005/tags");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000.cannot list extensions - unsupported transport");
lf[246]=C_h_intern(&lf[246],8,"char-set");
lf[247]=C_h_intern(&lf[247],14,"make-parameter");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\020chicken-install ");
lf[249]=C_h_intern(&lf[249],15,"chicken-version");
lf[250]=C_h_intern(&lf[250],17,"tcp-write-timeout");
lf[251]=C_h_intern(&lf[251],16,"tcp-read-timeout");
lf[252]=C_h_intern(&lf[252],19,"tcp-connect-timeout");
lf[253]=C_h_intern(&lf[253],11,"\003sysrequire");
lf[254]=C_h_intern(&lf[254],9,"setup-api");
C_register_lf2(lf,255,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1279,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* f_2686 in k2681 in k2675 in k2668 in skip in k2662 */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2686,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2689,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:343: irregex-match-substring");
t4=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(1));}

/* k2681 in k2675 in k2668 in skip in k2662 */
static void C_ccall f_2682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2682,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:335: g762");
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2727,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:351: string-every");
t3=C_fast_retrieve(lf[107]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fast_retrieve(lf[108]),((C_word*)t0)[2]);}}

/* k2688 */
static void C_ccall f_2689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2689,2,t0,t1);}
t2=C_i_string_equal_p(lf[103],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_2694(t4,t2);}
else{
t4=t1;
t5=t3;
f_2694(t5,C_u_i_string_equal_p(lf[105],t4));}}

/* k2257 in k2243 in k2237 in setup-download#deconstruct-url in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2259,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:225: irregex-match-substring");
t3=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],C_fix(4));}
else{
t2=((C_word*)t0)[2];
f_2247(2,t2,C_fix(80));}}

/* k2249 in k2246 in k2243 in k2237 in setup-download#deconstruct-url in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_2250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("setup-download.scm:222: values");
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2);}
else{
C_trace("setup-download.scm:222: values");
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[94]);}}

/* k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
C_trace("setup-download.scm:180: string-append");
t3=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[87],((C_word*)t0)[7],lf[88]);}
else{
t3=t2;
f_2065(2,t3,lf[89]);}}

/* k2436 in k2630 in k2605 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:250: signal");
t2=C_fast_retrieve(lf[179]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2066 in k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:182: d");
f_1318(t2,lf[86],C_a_i_list(&a,1,t1));}

/* k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2172,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:181: make-pathname");
t4=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k2068 in k2066 in k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_2069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:183: with-input-from-pipe");
t3=C_fast_retrieve(lf[84]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[9],C_fast_retrieve(lf[85]));}

/* k2246 in k2243 in k2237 in setup-download#deconstruct-url in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-download.scm:229: irregex-match-substring");
t3=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],C_fix(5));}
else{
t3=t2;
f_2250(2,t3,C_SCHEME_FALSE);}}

/* k2072 in k2070 in k2068 in k2066 in k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in ... */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2078,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li22),tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2103,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word)li23),tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:183: ##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[9],t2,t3);}

/* k2070 in k2068 in k2066 in k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in ... */
static void C_ccall f_2071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2073,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2158,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2160,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:186: filter-map");
t5=C_fast_retrieve(lf[59]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}

/* k2243 in k2237 in setup-download#deconstruct-url in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2244,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2247,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2259,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("setup-download.scm:224: irregex-match-substring");
t4=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(3));}
else{
t4=t3;
f_2259(2,t4,C_SCHEME_FALSE);}}

/* k2448 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2484,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:258: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[158]+1)))(5,*((C_word*)lf[158]+1),t2,lf[163],((C_word*)t0)[2],t3);}

/* f_2078 in k2072 in k2070 in k2068 in k2066 in k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in ... */
static void C_ccall f_2078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2078,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2087,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:193: string-append");
t3=*((C_word*)lf[67]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[68],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2089,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-download.scm:82: warning");
t4=C_fast_retrieve(lf[25]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[26],t3,((C_word*)t0)[5]);}
else{
if(C_truep(C_i_member(lf[69],((C_word*)t0)[3]))){
C_trace("setup-download.scm:197: values");
C_values(4,0,t1,lf[70],lf[71]);}
else{
C_trace("setup-download.scm:198: values");
C_values(4,0,t1,lf[72],lf[73]);}}}}

/* k2439 in k2630 in k2605 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:256: make-property-condition");
t3=C_fast_retrieve(lf[114]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[180]);}

/* k2442 in k2439 in k2630 in k2605 in k2559 in k2557 in k2555 in k2553 in k2551 in k2549 in k2547 */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:251: make-composite-condition");
t2=C_fast_retrieve(lf[113]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_fcall f_2445(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2445,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2449,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2487,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:258: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[158]+1)))(5,*((C_word*)lf[158]+1),t6,lf[164],t5,t7);}

/* k2454 in k2452 in k2450 in k2448 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2455,2,t0,t1);}
t2=C_i_get_keyword(lf[138],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_i_get_keyword(lf[139],((C_word*)t0)[2],C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2467,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=t3,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
C_trace("setup-download.scm:268: string-append");
t5=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[157],((C_word*)t0)[7],((C_word*)t0)[9]);}
else{
t5=t4;
f_2467(2,t5,((C_word*)t0)[9]);}}

/* k2086 */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:193: values");
C_values(4,0,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2452 in k2450 in k2448 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2478,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:258: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[158]+1)))(5,*((C_word*)lf[158]+1),t2,lf[159],((C_word*)t0)[2],t3);}

/* k2088 */
static void C_ccall f_2089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_member(lf[69],((C_word*)t0)[2]))){
C_trace("setup-download.scm:197: values");
C_values(4,0,((C_word*)t0)[3],lf[70],lf[71]);}
else{
C_trace("setup-download.scm:198: values");
C_values(4,0,((C_word*)t0)[3],lf[72],lf[73]);}}

/* k2450 in k2448 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2481,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:258: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[158]+1)))(5,*((C_word*)lf[158]+1),t2,lf[161],((C_word*)t0)[2],t3);}

/* k2787 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2789,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:368: d");
f_1318(t2,lf[122],C_a_i_list(&a,1,((C_word*)t0)[6]));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2801,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:372: d");
f_1318(t2,lf[126],C_a_i_list(&a,1,((C_word*)t0)[6]));}}

/* k2105 */
static void C_ccall f_2106(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2108,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2142,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(C_retrieve2(lf[3],"setup-download#\052mode\052"),lf[79]);
if(C_truep(t5)){
t6=((C_word*)t0)[8];
t7=((C_word*)t0)[6];
C_trace("setup-download.scm:218: conc");
t8=C_fast_retrieve(lf[64]);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t4,t6,C_make_character(47),t7,lf[80]);}
else{
t6=((C_word*)t0)[8];
C_trace("setup-download.scm:202: conc");
t7=C_fast_retrieve(lf[64]);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t3,((C_word*)t0)[7],C_make_character(47),((C_word*)t0)[6],C_make_character(47),t6);}}

/* k2107 in k2105 */
static void C_ccall f_2108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2108,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:212: d");
f_1318(t2,lf[75],C_a_i_list(&a,1,t1));}

/* k2466 in k2454 in k2452 in k2450 in k2448 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in ... */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2470,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[9])){
C_trace("setup-download.scm:276: string-append");
t3=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[154],((C_word*)t0)[9],lf[155]);}
else{
t3=t2;
f_2470(2,t3,lf[156]);}}

/* f_2103 in k2072 in k2070 in k2068 in k2066 in k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in ... */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2103,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2106,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2152,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[6])){
C_trace("setup-download.scm:199: make-pathname");
t6=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
C_trace("setup-download.scm:199: get-temporary-directory");
f_1333(t5);}}

/* k1896 in map-loop459 in k1864 in k1850 in k1848 in k1846 in k1844 */
static void C_ccall f_1897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1897,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1872(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1872(t6,((C_word*)t0)[5],t5);}}

/* k2469 in k2466 in k2454 in k2452 in k2450 in k2448 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in ... */
static void C_ccall f_2470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:265: conc");
t2=C_fast_retrieve(lf[64]);
((C_proc25)(void*)(*((C_word*)t2+1)))(25,t2,((C_word*)t0)[2],lf[140],((C_word*)t0)[3],lf[141],lf[142],lf[143],((C_word*)t0)[4],lf[144],lf[145],((C_word*)t0)[5],lf[146],lf[147],((C_word*)t0)[6],lf[148],lf[149],((C_word*)t0)[7],C_make_character(58),((C_word*)t0)[8],lf[150],t1,lf[151],((C_word*)t0)[9],lf[152],lf[153]);}

/* f_2478 in k2452 in k2450 in k2448 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 in ... */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2478,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}

/* k2109 in k2107 in k2105 */
static void C_ccall f_2110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:213: system");
t3=C_fast_retrieve(lf[29]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k2773 in k2771 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* f_2484 in k2448 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2484,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[162]);}

/* k2771 in k2751 in k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:363: close-output-port");
t3=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* f_2481 in k2450 in k2448 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[160]);}

/* f_2487 in setup-download#make-HTTP-GET/1.1 in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(80));}

/* k2746 in k2744 in get-files in k2662 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2753,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t1))){
t3=t1;
t4=C_u_i_car(t3);
t5=t2;
f_2753(t5,C_eqp(lf[15],t4));}
else{
t3=t2;
f_2753(t3,C_SCHEME_FALSE);}}

/* get-files in k2662 */
static void C_fcall f_2741(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2741,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2745,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:357: skip");
t4=((C_word*)((C_word*)t0)[7])[1];
f_2665(t4,t3);}

/* k2744 in get-files in k2662 */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:358: read");
t3=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1323 in setup-download#d in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:62: flush-output");
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* setup-download#response-match-code? in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_fcall f_2502(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2502,NULL,3,t1,t2,t3);}
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2512,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:286: number->string");
C_number_to_string(3,0,t4,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2141 in k2105 */
static void C_ccall f_2142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:202: conc");
t2=C_fast_retrieve(lf[64]);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_make_character(47),((C_word*)t0)[4],C_make_character(47),t1);}

/* k1336 in setup-download#get-temporary-directory in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1337,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:68: create-temporary-directory");
t3=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_1331(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1331,2,t0,t1);}
t2=C_mutate((C_word*)lf[11]+1 /* (set! setup-download#temporary-directory ...) */,t1);
t3=C_mutate(&lf[12] /* (set! setup-download#get-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1333,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[14] /* (set! setup-download#existing-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1346,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[19]+1 /* (set! setup-download#locate-egg/local ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1485,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[49]+1 /* (set! setup-download#gather-egg-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1718,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[60] /* (set! setup-download#make-svn-ls-cmd ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1809,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[66]+1 /* (set! setup-download#locate-egg/svn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2043,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[93] /* (set! setup-download#deconstruct-url ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2234,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[98]+1 /* (set! setup-download#locate-egg/http ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2277,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[137] /* (set! setup-download#make-HTTP-GET/1.1 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2445,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[165] /* (set! setup-download#response-match-code? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2502,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[100] /* (set! setup-download#http-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2523,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2959,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:421: char-set");
t15=C_fast_retrieve(lf[246]);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,C_make_character(92),C_make_character(47));}

/* setup-download#get-temporary-directory in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_fcall f_1333(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1333,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1337,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:67: temporary-directory");
((C_proc2)C_fast_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t2);}

/* k2725 in k2681 in k2675 in k2668 in skip in k2662 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-download.scm:352: skip");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2665(t2,((C_word*)t0)[3]);}
else{
C_trace("setup-download.scm:354: error");
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[106],((C_word*)t0)[4]);}}

/* f_1799 */
static void C_ccall f_1799(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1799r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1799r(t0,t1,t2);}}

static void C_ccall f_1799r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1804,a[2]=t2,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:142: k410");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_1794 */
static void C_ccall f_1794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1794,2,t0,t1);}
C_trace("setup-download.scm:148: with-input-from-file");
t2=C_fast_retrieve(lf[52]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],*((C_word*)lf[53]+1));}

/* k2157 in k2070 in k2068 in k2066 in k2064 in k2062 in setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in ... */
static void C_ccall f_2158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:184: existing-version");
f_1346(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2150 */
static void C_ccall f_2152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download.scm:199: make-pathname");
t2=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* setup-download#locate-egg/svn in k1329 in k1311 in k1307 in k1305 in k1303 in k1300 in k1298 in k1296 in k1294 in k1292 in k1290 in k1288 in k1286 in k1284 in k1282 in k1280 in k1278 */
static void C_ccall f_2043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_2043r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2043r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2043r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(8);
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
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2063,a[2]=t2,a[3]=t6,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=t18,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
C_trace("setup-download.scm:179: string-append");
t22=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t22+1)))(5,t22,t21,lf[90],t14,lf[91]);}
else{
t22=t21;
f_2063(2,t22,lf[92]);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[287] = {
{"f_2548:setup_2ddownload_2escm",(void*)f_2548},
{"f_2545:setup_2ddownload_2escm",(void*)f_2545},
{"f_1862:setup_2ddownload_2escm",(void*)f_1862},
{"f_1865:setup_2ddownload_2escm",(void*)f_1865},
{"f_3103:setup_2ddownload_2escm",(void*)f_3103},
{"f_3108:setup_2ddownload_2escm",(void*)f_3108},
{"f_2238:setup_2ddownload_2escm",(void*)f_2238},
{"f_2515:setup_2ddownload_2escm",(void*)f_2515},
{"f_2512:setup_2ddownload_2escm",(void*)f_2512},
{"f_2234:setup_2ddownload_2escm",(void*)f_2234},
{"f_1870:setup_2ddownload_2escm",(void*)f_1870},
{"f_1872:setup_2ddownload_2escm",(void*)f_1872},
{"f_2527:setup_2ddownload_2escm",(void*)f_2527},
{"f_2523:setup_2ddownload_2escm",(void*)f_2523},
{"f_3152:setup_2ddownload_2escm",(void*)f_3152},
{"f_2583:setup_2ddownload_2escm",(void*)f_2583},
{"f_2011:setup_2ddownload_2escm",(void*)f_2011},
{"f_2581:setup_2ddownload_2escm",(void*)f_2581},
{"f_2587:setup_2ddownload_2escm",(void*)f_2587},
{"f_1822:setup_2ddownload_2escm",(void*)f_1822},
{"f_3147:setup_2ddownload_2escm",(void*)f_3147},
{"f_2556:setup_2ddownload_2escm",(void*)f_2556},
{"f_2554:setup_2ddownload_2escm",(void*)f_2554},
{"f_2552:setup_2ddownload_2escm",(void*)f_2552},
{"f_2550:setup_2ddownload_2escm",(void*)f_2550},
{"f_2558:setup_2ddownload_2escm",(void*)f_2558},
{"f_2565:setup_2ddownload_2escm",(void*)f_2565},
{"f_2562:setup_2ddownload_2escm",(void*)f_2562},
{"f_2560:setup_2ddownload_2escm",(void*)f_2560},
{"f_1507:setup_2ddownload_2escm",(void*)f_1507},
{"f_1946:setup_2ddownload_2escm",(void*)f_1946},
{"f_1944:setup_2ddownload_2escm",(void*)f_1944},
{"f_1845:setup_2ddownload_2escm",(void*)f_1845},
{"f_1847:setup_2ddownload_2escm",(void*)f_1847},
{"f_1849:setup_2ddownload_2escm",(void*)f_1849},
{"f_2532:setup_2ddownload_2escm",(void*)f_2532},
{"f_1950:setup_2ddownload_2escm",(void*)f_1950},
{"f_1851:setup_2ddownload_2escm",(void*)f_1851},
{"f_1856:setup_2ddownload_2escm",(void*)f_1856},
{"f_1948:setup_2ddownload_2escm",(void*)f_1948},
{"f_1961:setup_2ddownload_2escm",(void*)f_1961},
{"f_1804:setup_2ddownload_2escm",(void*)f_1804},
{"f3384:setup_2ddownload_2escm",(void*)f3384},
{"f3388:setup_2ddownload_2escm",(void*)f3388},
{"f_1809:setup_2ddownload_2escm",(void*)f_1809},
{"f_2008:setup_2ddownload_2escm",(void*)f_2008},
{"f_2002:setup_2ddownload_2escm",(void*)f_2002},
{"f_3206:setup_2ddownload_2escm",(void*)f_3206},
{"f_3200:setup_2ddownload_2escm",(void*)f_3200},
{"f_1551:setup_2ddownload_2escm",(void*)f_1551},
{"f_1553:setup_2ddownload_2escm",(void*)f_1553},
{"f_1555:setup_2ddownload_2escm",(void*)f_1555},
{"f_1557:setup_2ddownload_2escm",(void*)f_1557},
{"f_1559:setup_2ddownload_2escm",(void*)f_1559},
{"f_2819:setup_2ddownload_2escm",(void*)f_2819},
{"f_1346:setup_2ddownload_2escm",(void*)f_1346},
{"f_2817:setup_2ddownload_2escm",(void*)f_2817},
{"f_1344:setup_2ddownload_2escm",(void*)f_1344},
{"f_1576:setup_2ddownload_2escm",(void*)f_1576},
{"f_1574:setup_2ddownload_2escm",(void*)f_1574},
{"f_1342:setup_2ddownload_2escm",(void*)f_1342},
{"f_1582:setup_2ddownload_2escm",(void*)f_1582},
{"f_1580:setup_2ddownload_2escm",(void*)f_1580},
{"f_1585:setup_2ddownload_2escm",(void*)f_1585},
{"f_1578:setup_2ddownload_2escm",(void*)f_1578},
{"f_1512:setup_2ddownload_2escm",(void*)f_1512},
{"f_1361:setup_2ddownload_2escm",(void*)f_1361},
{"f_2694:setup_2ddownload_2escm",(void*)f_2694},
{"f_1523:setup_2ddownload_2escm",(void*)f_1523},
{"f_1525:setup_2ddownload_2escm",(void*)f_1525},
{"f_1521:setup_2ddownload_2escm",(void*)f_1521},
{"f_2347:setup_2ddownload_2escm",(void*)f_2347},
{"f_2344:setup_2ddownload_2escm",(void*)f_2344},
{"f_1447:setup_2ddownload_2escm",(void*)f_1447},
{"f_1306:setup_2ddownload_2escm",(void*)f_1306},
{"f_1304:setup_2ddownload_2escm",(void*)f_1304},
{"f_1308:setup_2ddownload_2escm",(void*)f_1308},
{"f_2850:setup_2ddownload_2escm",(void*)f_2850},
{"f_1531:setup_2ddownload_2escm",(void*)f_1531},
{"f_1441:setup_2ddownload_2escm",(void*)f_1441},
{"f_1301:setup_2ddownload_2escm",(void*)f_1301},
{"f_2862:setup_2ddownload_2escm",(void*)f_2862},
{"f_2867:setup_2ddownload_2escm",(void*)f_2867},
{"f_3033:setup_2ddownload_2escm",(void*)f_3033},
{"f_1545:setup_2ddownload_2escm",(void*)f_1545},
{"f_1318:setup_2ddownload_2escm",(void*)f_1318},
{"f_1540:setup_2ddownload_2escm",(void*)f_1540},
{"f_1452:setup_2ddownload_2escm",(void*)f_1452},
{"f_1450:setup_2ddownload_2escm",(void*)f_1450},
{"f_1313:setup_2ddownload_2escm",(void*)f_1313},
{"f_2325:setup_2ddownload_2escm",(void*)f_2325},
{"f_2321:setup_2ddownload_2escm",(void*)f_2321},
{"f_2323:setup_2ddownload_2escm",(void*)f_2323},
{"f_2873:setup_2ddownload_2escm",(void*)f_2873},
{"f_3024:setup_2ddownload_2escm",(void*)f_3024},
{"f_2879:setup_2ddownload_2escm",(void*)f_2879},
{"f_1789:setup_2ddownload_2escm",(void*)f_1789},
{"f_1599:setup_2ddownload_2escm",(void*)f_1599},
{"f_2338:setup_2ddownload_2escm",(void*)f_2338},
{"f_1596:setup_2ddownload_2escm",(void*)f_1596},
{"f_1592:setup_2ddownload_2escm",(void*)f_1592},
{"f_1594:setup_2ddownload_2escm",(void*)f_1594},
{"f_1590:setup_2ddownload_2escm",(void*)f_1590},
{"f_1477:setup_2ddownload_2escm",(void*)f_1477},
{"f_1781:setup_2ddownload_2escm",(void*)f_1781},
{"f_2801:setup_2ddownload_2escm",(void*)f_2801},
{"f_1784:setup_2ddownload_2escm",(void*)f_1784},
{"f_2808:setup_2ddownload_2escm",(void*)f_2808},
{"f_2805:setup_2ddownload_2escm",(void*)f_2805},
{"f_2803:setup_2ddownload_2escm",(void*)f_2803},
{"f_2306:setup_2ddownload_2escm",(void*)f_2306},
{"f_2897:setup_2ddownload_2escm",(void*)f_2897},
{"f_1751:setup_2ddownload_2escm",(void*)f_1751},
{"f_1757:setup_2ddownload_2escm",(void*)f_1757},
{"f_2319:setup_2ddownload_2escm",(void*)f_2319},
{"f_2316:setup_2ddownload_2escm",(void*)f_2316},
{"f_2311:setup_2ddownload_2escm",(void*)f_2311},
{"f_1501:setup_2ddownload_2escm",(void*)f_1501},
{"f_1505:setup_2ddownload_2escm",(void*)f_1505},
{"f_1503:setup_2ddownload_2escm",(void*)f_1503},
{"f_1771:setup_2ddownload_2escm",(void*)f_1771},
{"f_1776:setup_2ddownload_2escm",(void*)f_1776},
{"f_3081:setup_2ddownload_2escm",(void*)f_3081},
{"f_3084:setup_2ddownload_2escm",(void*)f_3084},
{"f_2845:setup_2ddownload_2escm",(void*)f_2845},
{"f_1746:setup_2ddownload_2escm",(void*)f_1746},
{"f_1740:setup_2ddownload_2escm",(void*)f_1740},
{"f_1668:setup_2ddownload_2escm",(void*)f_1668},
{"f_1718:setup_2ddownload_2escm",(void*)f_1718},
{"f_1769:setup_2ddownload_2escm",(void*)f_1769},
{"f_1385:setup_2ddownload_2escm",(void*)f_1385},
{"f_1680:setup_2ddownload_2escm",(void*)f_1680},
{"f_1766:setup_2ddownload_2escm",(void*)f_1766},
{"f_1737:setup_2ddownload_2escm",(void*)f_1737},
{"f_1394:setup_2ddownload_2escm",(void*)f_1394},
{"f_1396:setup_2ddownload_2escm",(void*)f_1396},
{"f_1391:setup_2ddownload_2escm",(void*)f_1391},
{"f_2937:setup_2ddownload_2escm",(void*)f_2937},
{"f_1656:setup_2ddownload_2escm",(void*)f_1656},
{"f_1732:setup_2ddownload_2escm",(void*)f_1732},
{"f_2900:setup_2ddownload_2escm",(void*)f_2900},
{"f_2906:setup_2ddownload_2escm",(void*)f_2906},
{"f_2903:setup_2ddownload_2escm",(void*)f_2903},
{"f_2888:setup_2ddownload_2escm",(void*)f_2888},
{"f_2886:setup_2ddownload_2escm",(void*)f_2886},
{"f_2884:setup_2ddownload_2escm",(void*)f_2884},
{"f_2881:setup_2ddownload_2escm",(void*)f_2881},
{"f_1629:setup_2ddownload_2escm",(void*)f_1629},
{"f_3072:setup_2ddownload_2escm",(void*)f_3072},
{"f_2918:setup_2ddownload_2escm",(void*)f_2918},
{"f_2914:setup_2ddownload_2escm",(void*)f_2914},
{"f_1674:setup_2ddownload_2escm",(void*)f_1674},
{"f_1485:setup_2ddownload_2escm",(void*)f_1485},
{"f_1483:setup_2ddownload_2escm",(void*)f_1483},
{"f_1727:setup_2ddownload_2escm",(void*)f_1727},
{"f_2791:setup_2ddownload_2escm",(void*)f_2791},
{"f_2793:setup_2ddownload_2escm",(void*)f_2793},
{"f_2799:setup_2ddownload_2escm",(void*)f_2799},
{"f_1722:setup_2ddownload_2escm",(void*)f_1722},
{"f_1649:setup_2ddownload_2escm",(void*)f_1649},
{"f_2979:setup_2ddownload_2escm",(void*)f_2979},
{"f_1616:setup_2ddownload_2escm",(void*)f_1616},
{"f_1615:setup_2ddownload_2escm",(void*)f_1615},
{"f_1610:setup_2ddownload_2escm",(void*)f_1610},
{"f_1421:setup_2ddownload_2escm",(void*)f_1421},
{"f_1619:setup_2ddownload_2escm",(void*)f_1619},
{"f_3172:setup_2ddownload_2escm",(void*)f_3172},
{"f_1975:setup_2ddownload_2escm",(void*)f_1975},
{"f_1970:setup_2ddownload_2escm",(void*)f_1970},
{"f_2944:setup_2ddownload_2escm",(void*)f_2944},
{"f_2942:setup_2ddownload_2escm",(void*)f_2942},
{"f_2946:setup_2ddownload_2escm",(void*)f_2946},
{"f_1967:setup_2ddownload_2escm",(void*)f_1967},
{"f_1436:setup_2ddownload_2escm",(void*)f_1436},
{"f_3015:setup_2ddownload_2escm",(void*)f_3015},
{"f_1430:setup_2ddownload_2escm",(void*)f_1430},
{"f_2163:setup_2ddownload_2escm",(void*)f_2163},
{"f_3019:setup_2ddownload_2escm",(void*)f_3019},
{"f_2160:setup_2ddownload_2escm",(void*)f_2160},
{"f_3162:setup_2ddownload_2escm",(void*)f_3162},
{"f_3167:setup_2ddownload_2escm",(void*)f_3167},
{"f_2955:setup_2ddownload_2escm",(void*)f_2955},
{"f_2959:setup_2ddownload_2escm",(void*)f_2959},
{"f_1977:setup_2ddownload_2escm",(void*)f_1977},
{"f_2172:setup_2ddownload_2escm",(void*)f_2172},
{"f_1638:setup_2ddownload_2escm",(void*)f_1638},
{"f_2753:setup_2ddownload_2escm",(void*)f_2753},
{"f_1605:setup_2ddownload_2escm",(void*)f_1605},
{"f_1608:setup_2ddownload_2escm",(void*)f_1608},
{"f_1279:setup_2ddownload_2escm",(void*)f_1279},
{"f_2277:setup_2ddownload_2escm",(void*)f_2277},
{"f_2607:setup_2ddownload_2escm",(void*)f_2607},
{"f_2603:setup_2ddownload_2escm",(void*)f_2603},
{"f_2986:setup_2ddownload_2escm",(void*)f_2986},
{"f_1283:setup_2ddownload_2escm",(void*)f_1283},
{"f_1285:setup_2ddownload_2escm",(void*)f_1285},
{"f_1287:setup_2ddownload_2escm",(void*)f_1287},
{"f_1289:setup_2ddownload_2escm",(void*)f_1289},
{"f_1281:setup_2ddownload_2escm",(void*)f_1281},
{"f_2617:setup_2ddownload_2escm",(void*)f_2617},
{"f_2612:setup_2ddownload_2escm",(void*)f_2612},
{"f_2991:setup_2ddownload_2escm",(void*)f_2991},
{"f_1293:setup_2ddownload_2escm",(void*)f_1293},
{"f_1295:setup_2ddownload_2escm",(void*)f_1295},
{"f_1297:setup_2ddownload_2escm",(void*)f_1297},
{"f_1299:setup_2ddownload_2escm",(void*)f_1299},
{"f_1291:setup_2ddownload_2escm",(void*)f_1291},
{"f_2626:setup_2ddownload_2escm",(void*)f_2626},
{"f_2261:setup_2ddownload_2escm",(void*)f_2261},
{"f_2638:setup_2ddownload_2escm",(void*)f_2638},
{"f_2632:setup_2ddownload_2escm",(void*)f_2632},
{"f_2593:setup_2ddownload_2escm",(void*)f_2593},
{"f_2649:setup_2ddownload_2escm",(void*)f_2649},
{"f_2647:setup_2ddownload_2escm",(void*)f_2647},
{"f_2641:setup_2ddownload_2escm",(void*)f_2641},
{"f_2645:setup_2ddownload_2escm",(void*)f_2645},
{"f_2643:setup_2ddownload_2escm",(void*)f_2643},
{"f_2654:setup_2ddownload_2escm",(void*)f_2654},
{"f_2128:setup_2ddownload_2escm",(void*)f_2128},
{"f_2125:setup_2ddownload_2escm",(void*)f_2125},
{"f_2651:setup_2ddownload_2escm",(void*)f_2651},
{"f_2573:setup_2ddownload_2escm",(void*)f_2573},
{"f_2708:setup_2ddownload_2escm",(void*)f_2708},
{"f_2575:setup_2ddownload_2escm",(void*)f_2575},
{"f_2706:setup_2ddownload_2escm",(void*)f_2706},
{"f_2663:setup_2ddownload_2escm",(void*)f_2663},
{"f_2665:setup_2ddownload_2escm",(void*)f_2665},
{"f_2577:setup_2ddownload_2escm",(void*)f_2577},
{"f_2136:setup_2ddownload_2escm",(void*)f_2136},
{"f_2131:setup_2ddownload_2escm",(void*)f_2131},
{"f_2669:setup_2ddownload_2escm",(void*)f_2669},
{"f_2677:setup_2ddownload_2escm",(void*)f_2677},
{"toplevel:setup_2ddownload_2escm",(void*)C_toplevel},
{"f_2686:setup_2ddownload_2escm",(void*)f_2686},
{"f_2682:setup_2ddownload_2escm",(void*)f_2682},
{"f_2689:setup_2ddownload_2escm",(void*)f_2689},
{"f_2259:setup_2ddownload_2escm",(void*)f_2259},
{"f_2250:setup_2ddownload_2escm",(void*)f_2250},
{"f_2063:setup_2ddownload_2escm",(void*)f_2063},
{"f_2437:setup_2ddownload_2escm",(void*)f_2437},
{"f_2067:setup_2ddownload_2escm",(void*)f_2067},
{"f_2065:setup_2ddownload_2escm",(void*)f_2065},
{"f_2069:setup_2ddownload_2escm",(void*)f_2069},
{"f_2247:setup_2ddownload_2escm",(void*)f_2247},
{"f_2073:setup_2ddownload_2escm",(void*)f_2073},
{"f_2071:setup_2ddownload_2escm",(void*)f_2071},
{"f_2244:setup_2ddownload_2escm",(void*)f_2244},
{"f_2449:setup_2ddownload_2escm",(void*)f_2449},
{"f_2078:setup_2ddownload_2escm",(void*)f_2078},
{"f_2440:setup_2ddownload_2escm",(void*)f_2440},
{"f_2443:setup_2ddownload_2escm",(void*)f_2443},
{"f_2445:setup_2ddownload_2escm",(void*)f_2445},
{"f_2455:setup_2ddownload_2escm",(void*)f_2455},
{"f_2087:setup_2ddownload_2escm",(void*)f_2087},
{"f_2453:setup_2ddownload_2escm",(void*)f_2453},
{"f_2089:setup_2ddownload_2escm",(void*)f_2089},
{"f_2451:setup_2ddownload_2escm",(void*)f_2451},
{"f_2789:setup_2ddownload_2escm",(void*)f_2789},
{"f_2106:setup_2ddownload_2escm",(void*)f_2106},
{"f_2108:setup_2ddownload_2escm",(void*)f_2108},
{"f_2467:setup_2ddownload_2escm",(void*)f_2467},
{"f_2103:setup_2ddownload_2escm",(void*)f_2103},
{"f_1897:setup_2ddownload_2escm",(void*)f_1897},
{"f_2470:setup_2ddownload_2escm",(void*)f_2470},
{"f_2478:setup_2ddownload_2escm",(void*)f_2478},
{"f_2110:setup_2ddownload_2escm",(void*)f_2110},
{"f_2774:setup_2ddownload_2escm",(void*)f_2774},
{"f_2484:setup_2ddownload_2escm",(void*)f_2484},
{"f_2772:setup_2ddownload_2escm",(void*)f_2772},
{"f_2481:setup_2ddownload_2escm",(void*)f_2481},
{"f_2487:setup_2ddownload_2escm",(void*)f_2487},
{"f_2747:setup_2ddownload_2escm",(void*)f_2747},
{"f_2741:setup_2ddownload_2escm",(void*)f_2741},
{"f_2745:setup_2ddownload_2escm",(void*)f_2745},
{"f_1324:setup_2ddownload_2escm",(void*)f_1324},
{"f_2502:setup_2ddownload_2escm",(void*)f_2502},
{"f_2142:setup_2ddownload_2escm",(void*)f_2142},
{"f_1337:setup_2ddownload_2escm",(void*)f_1337},
{"f_1331:setup_2ddownload_2escm",(void*)f_1331},
{"f_1333:setup_2ddownload_2escm",(void*)f_1333},
{"f_2727:setup_2ddownload_2escm",(void*)f_2727},
{"f_1799:setup_2ddownload_2escm",(void*)f_1799},
{"f_1794:setup_2ddownload_2escm",(void*)f_1794},
{"f_2158:setup_2ddownload_2escm",(void*)f_2158},
{"f_2152:setup_2ddownload_2escm",(void*)f_2152},
{"f_2043:setup_2ddownload_2escm",(void*)f_2043},
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
o|hiding nonexported module bindings: setup-download#constant180 
o|hiding nonexported module bindings: setup-download#*quiet* 
o|hiding nonexported module bindings: setup-download#*chicken-install-user-agent* 
o|hiding nonexported module bindings: setup-download#*trunk* 
o|hiding nonexported module bindings: setup-download#*mode* 
o|hiding nonexported module bindings: setup-download#*windows-shell* 
o|hiding nonexported module bindings: setup-download#d 
o|hiding nonexported module bindings: setup-download#get-temporary-directory 
o|hiding nonexported module bindings: setup-download#existing-version 
o|hiding nonexported module bindings: setup-download#when-no-such-version-warning 
o|hiding nonexported module bindings: setup-download#list-eggs/local 
o|hiding nonexported module bindings: setup-download#list-egg-versions/local 
o|hiding nonexported module bindings: setup-download#make-svn-ls-cmd 
o|hiding nonexported module bindings: setup-download#make-svn-export-cmd 
o|hiding nonexported module bindings: setup-download#list-eggs/svn 
o|hiding nonexported module bindings: setup-download#list-egg-versions/svn 
o|hiding nonexported module bindings: setup-download#metafile 
o|hiding nonexported module bindings: setup-download#deconstruct-url 
o|hiding nonexported module bindings: setup-download#network-failure 
o|hiding nonexported module bindings: setup-download#make-HTTP-GET/1.1 
o|hiding nonexported module bindings: setup-download#match-http-response 
o|hiding nonexported module bindings: setup-download#response-match-code? 
o|hiding nonexported module bindings: setup-download#match-chunked-transfer-encoding 
o|hiding nonexported module bindings: setup-download#http-connect 
o|hiding nonexported module bindings: setup-download#http-retrieve-files 
o|hiding nonexported module bindings: setup-download#http-fetch 
o|hiding nonexported module bindings: setup-download#list-eggs/http 
o|hiding nonexported module bindings: setup-download#throw-server-error 
o|hiding nonexported module bindings: setup-download#read-chunks 
o|hiding nonexported module bindings: setup-download#slashes 
o|hiding nonexported module bindings: setup-download#valid-extension-name? 
o|hiding nonexported module bindings: setup-download#check-egg-name 
S|applied compiler syntax:
S|  for-each		1
S|  sprintf		3
S|  map		4
o|eliminated procedure checks: 27 
o|specializations:
o|  8 (eqv? * (not float))
o|  1 (cddr (pair * pair))
o|  1 (string=? string string)
o|  2 (string-append string string)
o|  2 (zero? fixnum)
o|  2 (##sys#check-list (or pair list) *)
o|  2 (car pair)
o|  1 (current-output-port)
o|  1 (current-error-port)
o|Removed `not' forms: 4 
o|merged explicitly consed rest parameter: args190 
o|inlining procedure: k1338 
o|inlining procedure: k1338 
o|inlining procedure: k1349 
o|inlining procedure: k1349 
o|inlining procedure: k1373 
o|inlining procedure: k1373 
o|inlining procedure: k1514 
o|inlining procedure: k1514 
o|inlining procedure: k1547 
o|consed rest parameter at call site: "(setup-download.scm:116) setup-download#d" 2 
o|inlining procedure: k1547 
o|consed rest parameter at call site: "(setup-download.scm:126) setup-download#d" 2 
o|inlining procedure: k1632 
o|inlining procedure: k1632 
o|propagated global variable: g373374 string-suffix? 
o|contracted procedure: k1660 
o|propagated global variable: r1661 setup-download#*trunk* 
o|inlining procedure: k1663 
o|inlining procedure: k1663 
o|inlining procedure: k1741 
o|inlining procedure: k1741 
o|merged explicitly consed rest parameter: tmp425429 
o|inlining procedure: k2080 
o|inlining procedure: k2080 
o|inlining procedure: k2111 
o|inlining procedure: k2111 
o|consed rest parameter at call site: "(setup-download.scm:212) setup-download#d" 2 
o|contracted procedure: "(setup-download.scm:200) setup-download#make-svn-export-cmd" 
o|inlining procedure: "(setup-download.scm:210) setup-download#metafile" 
o|inlining procedure: k2141 
o|inlining procedure: "(setup-download.scm:205) setup-download#metafile" 
o|inlining procedure: k2141 
o|inlining procedure: k2150 
o|inlining procedure: k2150 
o|inlining procedure: k2164 
o|inlining procedure: k2164 
o|consed rest parameter at call site: "(setup-download.scm:182) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:181) setup-download#make-svn-ls-cmd" 4 
o|inlining procedure: k2251 
o|inlining procedure: k2251 
o|inlining procedure: k2264 
o|inlining procedure: k2264 
o|substituted constant variable: setup-download#constant180 
o|inlining procedure: k2330 
o|inlining procedure: k2330 
o|contracted procedure: "(setup-download.scm:245) setup-download#http-fetch" 
o|contracted procedure: "(setup-download.scm:381) setup-download#http-retrieve-files" 
o|inlining procedure: k2670 
o|inlining procedure: k2670 
o|inlining procedure: k2695 
o|inlining procedure: k2695 
o|substituted constant variable: a2717 
o|inlining procedure: k2722 
o|inlining procedure: k2722 
o|inlining procedure: k2748 
o|contracted procedure: "(setup-download.scm:360) setup-download#throw-server-error" 
o|inlining procedure: k2748 
o|inlining procedure: k2775 
o|consed rest parameter at call site: "(setup-download.scm:368) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:372) setup-download#d" 2 
o|inlining procedure: k2775 
o|consed rest parameter at call site: "(setup-download.scm:334) setup-download#d" 2 
o|inlining procedure: k2349 
o|inlining procedure: k2349 
o|merged explicitly consed rest parameter: tmp658662 
o|removed call to pure procedure with unused result: "(setup-download.scm:258) get-keyword" 
o|inlining procedure: k2505 
o|inlining procedure: k2505 
o|inlining procedure: k2541 
o|inlining procedure: k2541 
o|inlining procedure: k2566 
o|contracted procedure: "(setup-download.scm:328) setup-download#read-chunks" 
o|contracted procedure: k2924 
o|inlining procedure: k2921 
o|consed rest parameter at call site: "(setup-download.scm:413) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:417) setup-download#d" 2 
o|inlining procedure: k2921 
o|consed rest parameter at call site: "(setup-download.scm:327) setup-download#d" 2 
o|inlining procedure: k2566 
o|inlining procedure: k2588 
o|inlining procedure: k2588 
o|consed rest parameter at call site: "(setup-download.scm:324) setup-download#d" 2 
o|contracted procedure: "(setup-download.scm:323) setup-download#match-chunked-transfer-encoding" 
o|consed rest parameter at call site: "(setup-download.scm:313) setup-download#make-HTTP-GET/1.1" 4 
o|inlining procedure: k2627 
o|inlining procedure: k2627 
o|contracted procedure: "(setup-download.scm:319) setup-download#network-failure" 
o|consed rest parameter at call site: "(setup-download.scm:307) setup-download#d" 2 
o|contracted procedure: "(setup-download.scm:306) setup-download#match-http-response" 
o|inlining procedure: k2493 
o|inlining procedure: k2493 
o|consed rest parameter at call site: "(setup-download.scm:303) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:299) setup-download#make-HTTP-GET/1.1" 4 
o|consed rest parameter at call site: "(setup-download.scm:297) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:292) setup-download#d" 2 
o|inlining procedure: k2640 
o|consed rest parameter at call site: "(setup-download.scm:292) setup-download#d" 2 
o|inlining procedure: k2640 
o|consed rest parameter at call site: "(setup-download.scm:292) setup-download#d" 2 
o|inlining procedure: k2982 
o|inlining procedure: k2982 
o|contracted procedure: "(setup-download.scm:428) setup-download#valid-extension-name?" 
o|inlining procedure: k2964 
o|inlining procedure: k2964 
o|inlining procedure: k3035 
o|inlining procedure: k3035 
o|inlining procedure: k3053 
o|inlining procedure: k3053 
o|substituted constant variable: a3066 
o|substituted constant variable: a3068 
o|substituted constant variable: a3070 
o|inlining procedure: k3110 
o|contracted procedure: "(setup-download.scm:454) setup-download#list-eggs/local" 
o|inlining procedure: k1399 
o|inlining procedure: k1399 
o|inlining procedure: k3110 
o|contracted procedure: "(setup-download.scm:456) setup-download#list-eggs/svn" 
o|substituted constant variable: a1863 
o|inlining procedure: k1875 
o|inlining procedure: k1875 
o|consed rest parameter at call site: "(setup-download.scm:162) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:161) setup-download#make-svn-ls-cmd" 4 
o|inlining procedure: k3128 
o|contracted procedure: "(setup-download.scm:458) setup-download#list-eggs/http" 
o|inlining procedure: k3128 
o|substituted constant variable: a3141 
o|substituted constant variable: a3143 
o|substituted constant variable: a3145 
o|inlining procedure: k3174 
o|contracted procedure: "(setup-download.scm:467) setup-download#list-egg-versions/local" 
o|inlining procedure: k1431 
o|inlining procedure: k1455 
o|inlining procedure: k1455 
o|inlining procedure: k1431 
o|inlining procedure: k3174 
o|contracted procedure: "(setup-download.scm:469) setup-download#list-egg-versions/svn" 
o|inlining procedure: k1951 
o|inlining procedure: k1951 
o|substituted constant variable: a1968 
o|inlining procedure: k1980 
o|inlining procedure: k1980 
o|consed rest parameter at call site: "(setup-download.scm:170) setup-download#make-svn-ls-cmd" 4 
o|substituted constant variable: a3196 
o|substituted constant variable: a3198 
o|replaced variables: 290 
o|removed binding forms: 89 
o|removed side-effect free assignment to unused variable: setup-download#constant180 
o|substituted constant variable: r16643220 
o|substituted constant variable: r17423222 
o|substituted constant variable: r21653246 
o|removed side-effect free assignment to unused variable: setup-download#metafile 
o|substituted constant variable: r22523249 
o|substituted constant variable: r22523249 
o|inlining procedure: k2330 
o|inlining procedure: k2330 
o|inlining procedure: k2695 
o|inlining procedure: k2695 
o|substituted constant variable: a23483275 
o|substituted constant variable: a23483276 
o|contracted procedure: k2458 
o|substituted constant variable: f_25043278 
o|substituted constant variable: f_24923300 
o|substituted constant variable: a26393302 
o|substituted constant variable: f_29633305 
o|substituted constant variable: r14323323 
o|substituted constant variable: r19523325 
o|replaced variables: 28 
o|removed binding forms: 299 
o|inlining procedure: "(setup-download.scm:105) setup-download#when-no-such-version-warning" 
o|inlining procedure: k1609 
o|inlining procedure: "(setup-download.scm:195) setup-download#when-no-such-version-warning" 
o|inlining procedure: k2594 
o|inlining procedure: k2594 
o|inlining procedure: k2984 
o|replaced variables: 5 
o|removed binding forms: 52 
o|Removed `not' forms: 1 
o|removed side-effect free assignment to unused variable: setup-download#when-no-such-version-warning 
o|substituted constant variable: r23313335 
o|substituted constant variable: r29853392 
o|replaced variables: 5 
o|removed binding forms: 7 
o|removed conditional forms: 1 
o|removed binding forms: 6 
o|simplifications: ((if . 39) (##core#call . 190)) 
o|  call simplifications:
o|    ##sys#setslot	4
o|    zero?
o|    number->string
o|    string?	2
o|    read-string	2
o|    cadr
o|    eof-object?	2
o|    string=?	3
o|    not	2
o|    string->number	2
o|    ##sys#get-keyword	23
o|    list
o|    ##sys#apply
o|    cons	8
o|    car	17
o|    null?	35
o|    cdr	17
o|    ##sys#call-with-values	10
o|    ##sys#check-list	3
o|    ##sys#slot	10
o|    write-char	2
o|    eq?	13
o|    values	19
o|    pair?	7
o|    member	3
o|    apply
o|contracted procedure: k1321 
o|contracted procedure: k1354 
o|contracted procedure: k1365 
o|contracted procedure: k1711 
o|contracted procedure: k1488 
o|contracted procedure: k1705 
o|contracted procedure: k1490 
o|contracted procedure: k1699 
o|contracted procedure: k1492 
o|contracted procedure: k1693 
o|contracted procedure: k1494 
o|contracted procedure: k1687 
o|contracted procedure: k1496 
o|contracted procedure: k1681 
o|contracted procedure: k1498 
o|inlining procedure: k1529 
o|contracted procedure: k1563 
o|contracted procedure: k1623 
o|contracted procedure: k1634 
o|contracted procedure: k1643 
o|contracted procedure: k1646 
o|contracted procedure: k1762 
o|contracted procedure: k1759 
o|contracted procedure: k1812 
o|contracted procedure: k1818 
o|contracted procedure: k2221 
o|contracted procedure: k2046 
o|contracted procedure: k2215 
o|contracted procedure: k2048 
o|contracted procedure: k2209 
o|contracted procedure: k2050 
o|contracted procedure: k2203 
o|contracted procedure: k2052 
o|contracted procedure: k2197 
o|contracted procedure: k2054 
o|contracted procedure: k2191 
o|contracted procedure: k2056 
o|contracted procedure: k2185 
o|contracted procedure: k2058 
o|contracted procedure: k2179 
o|contracted procedure: k2060 
o|contracted procedure: k2093 
o|contracted procedure: k2114 
o|contracted procedure: k1830 
o|contracted procedure: k2132 
o|contracted procedure: k2143 
o|contracted procedure: k2262 
o|contracted procedure: k2423 
o|contracted procedure: k2280 
o|contracted procedure: k2417 
o|contracted procedure: k2282 
o|contracted procedure: k2411 
o|contracted procedure: k2284 
o|contracted procedure: k2405 
o|contracted procedure: k2286 
o|contracted procedure: k2399 
o|contracted procedure: k2288 
o|contracted procedure: k2393 
o|contracted procedure: k2290 
o|contracted procedure: k2387 
o|contracted procedure: k2292 
o|contracted procedure: k2381 
o|contracted procedure: k2294 
o|contracted procedure: k2375 
o|contracted procedure: k2296 
o|contracted procedure: k2369 
o|contracted procedure: k2298 
o|contracted procedure: k2363 
o|contracted procedure: k2300 
o|contracted procedure: k2357 
o|contracted procedure: k2302 
o|contracted procedure: k2673 
o|contracted procedure: k2690 
o|contracted procedure: k2715 
o|contracted procedure: k2758 
o|contracted procedure: k2766 
o|contracted procedure: k2768 
o|contracted procedure: k2778 
o|contracted procedure: k2813 
o|contracted procedure: k2830 
o|contracted procedure: k2456 
o|contracted procedure: k2460 
o|contracted procedure: k2537 
o|contracted procedure: k2919 
o|contracted procedure: k2933 
o|contracted procedure: k2951 
o|contracted procedure: k2495 
o|contracted procedure: k2966 
o|contracted procedure: k2994 
o|contracted procedure: k2996 
o|contracted procedure: k2998 
o|contracted procedure: k3000 
o|contracted procedure: k3002 
o|contracted procedure: k3004 
o|contracted procedure: k3006 
o|contracted procedure: k3008 
o|contracted procedure: k3010 
o|contracted procedure: k3012 
o|contracted procedure: k3016 
o|contracted procedure: k3038 
o|contracted procedure: k3047 
o|contracted procedure: k3056 
o|contracted procedure: k3087 
o|contracted procedure: k3089 
o|contracted procedure: k3091 
o|contracted procedure: k3093 
o|contracted procedure: k3095 
o|contracted procedure: k3097 
o|contracted procedure: k3113 
o|contracted procedure: k1401 
o|contracted procedure: k1404 
o|contracted procedure: k1413 
o|contracted procedure: k1423 
o|contracted procedure: k3122 
o|contracted procedure: k1925 
o|contracted procedure: k1836 
o|contracted procedure: k1919 
o|contracted procedure: k1838 
o|contracted procedure: k1913 
o|contracted procedure: k1840 
o|contracted procedure: k1907 
o|contracted procedure: k1842 
o|contracted procedure: k1866 
o|contracted procedure: k1877 
o|contracted procedure: k1880 
o|contracted procedure: k1889 
o|contracted procedure: k1899 
o|contracted procedure: k3131 
o|contracted procedure: k3155 
o|contracted procedure: k3157 
o|contracted procedure: k3159 
o|contracted procedure: k3177 
o|contracted procedure: k1457 
o|contracted procedure: k1460 
o|contracted procedure: k1469 
o|contracted procedure: k1479 
o|contracted procedure: k3186 
o|contracted procedure: k2036 
o|contracted procedure: k1935 
o|contracted procedure: k2030 
o|contracted procedure: k1937 
o|contracted procedure: k2024 
o|contracted procedure: k1939 
o|contracted procedure: k2018 
o|contracted procedure: k1941 
o|contracted procedure: k1954 
o|contracted procedure: k1971 
o|contracted procedure: k1982 
o|contracted procedure: k1985 
o|contracted procedure: k1994 
o|contracted procedure: k2004 
o|simplifications: ((if . 1) (let . 14)) 
o|removed binding forms: 150 
o|substituted constant variable: r15303474 
o|inlining procedure: k2088 
o|inlining procedure: k1406 
o|inlining procedure: k1406 
o|inlining procedure: k1882 
o|inlining procedure: k1882 
o|inlining procedure: k1462 
o|inlining procedure: k1462 
o|inlining procedure: k1987 
o|inlining procedure: k1987 
o|replaced variables: 21 
o|removed conditional forms: 1 
o|removed binding forms: 24 
o|removed binding forms: 1 
o|customizable procedures: (map-loop510528 map-loop254279 map-loop459477 map-loop213238 setup-download#check-egg-name setup-download#response-match-code? setup-download#make-HTTP-GET/1.1 loop730 get-chunks854 k2751 get-files778 skip752 k2692 k2704 setup-download#http-connect setup-download#deconstruct-url setup-download#make-svn-ls-cmd setup-download#get-temporary-directory setup-download#existing-version for-each-loop377389 setup-download#d) 
o|calls to known targets: 90 
o|fast box initializations: 9 
o|fast global references: 56 
o|fast global assignments: 25 
o|dropping unused closure argument: f_2234 
o|dropping unused closure argument: f_2523 
o|dropping unused closure argument: f_1809 
o|dropping unused closure argument: f_1346 
o|dropping unused closure argument: f_1318 
o|dropping unused closure argument: f_2979 
o|dropping unused closure argument: f_2445 
o|dropping unused closure argument: f_2502 
o|dropping unused closure argument: f_1333 
*/
/* end of file */
