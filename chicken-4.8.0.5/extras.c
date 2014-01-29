/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:46
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file extras.c
   unit: extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[133];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,100,111,108,111,111,112,56,52,32,120,56,54,32,105,56,55,32,120,115,56,56,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,115,108,117,114,112,32,112,111,114,116,56,51,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,102,105,108,101,32,46,32,116,109,112,54,56,54,57,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,17),40,114,97,110,100,111,109,105,122,101,32,46,32,110,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,114,97,110,100,111,109,32,110,49,48,48,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,14),40,102,95,49,49,54,50,32,114,108,49,50,48,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,49,50,52,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,108,105,110,101,32,46,32,97,114,103,115,49,48,55,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,110,115,49,52,57,32,110,49,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,100,111,114,101,97,100,32,112,111,114,116,49,52,55,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,108,105,110,101,115,32,46,32,112,111,114,116,45,97,110,100,45,109,97,120,49,52,49,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,108,105,110,101,32,115,116,114,49,53,57,32,46,32,112,111,114,116,49,54,48,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,55,55,32,110,49,55,56,32,109,49,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,57,49,32,110,49,57,50,32,109,49,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,33,32,110,49,54,56,32,100,101,115,116,49,54,57,32,112,111,114,116,49,55,48,32,115,116,97,114,116,49,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,39),40,114,101,97,100,45,115,116,114,105,110,103,33,32,110,50,49,49,32,100,101,115,116,50,49,50,32,46,32,116,109,112,50,49,48,50,49,51,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,47,112,111,114,116,32,110,50,51,50,32,112,50,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,114,101,97,100,45,115,116,114,105,110,103,32,46,32,116,109,112,50,53,53,50,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,27),40,114,101,97,100,45,98,117,102,102,101,114,101,100,32,46,32,116,109,112,50,55,50,50,55,51,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,116,111,107,101,110,32,112,114,101,100,50,56,50,32,46,32,112,111,114,116,50,56,51,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,21),40,102,95,49,55,53,51,32,110,51,49,48,32,112,111,114,116,51,49,49,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,17),40,102,95,49,55,56,53,32,37,110,50,57,57,51,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,8),40,102,95,49,55,56,57,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,115,116,114,105,110,103,32,115,50,57,55,32,46,32,109,111,114,101,50,57,56,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,23),40,114,101,97,100,45,98,121,116,101,32,46,32,116,109,112,51,51,48,51,51,49,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,119,114,105,116,101,45,98,121,116,101,32,98,121,116,101,51,52,53,32,46,32,116,109,112,51,52,52,51,52,54,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,18),40,114,101,97,100,45,109,97,99,114,111,63,32,108,51,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,111,117,116,32,115,116,114,51,57,53,32,99,111,108,51,57,54,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,24),40,119,114,45,101,120,112,114,32,101,120,112,114,52,48,54,32,99,111,108,52,48,55,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,52,49,49,32,99,111,108,52,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,119,114,45,108,115,116,32,108,52,48,56,32,99,111,108,52,48,57,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,102,95,50,50,52,50,32,97,52,51,54,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,105,52,50,49,32,106,52,50,50,32,99,111,108,52,50,51,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,14),40,102,95,50,51,49,55,32,99,110,52,52,55,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,52,53,52,32,105,52,53,54,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,18),40,119,114,32,111,98,106,51,57,57,32,99,111,108,52,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,115,112,97,99,101,115,32,110,52,57,48,32,99,111,108,52,57,49,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,105,110,100,101,110,116,32,116,111,52,57,50,32,99,111,108,52,57,51,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,15),40,102,95,50,53,57,54,32,115,116,114,53,48,53,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,38),40,112,114,32,111,98,106,52,57,54,32,99,111,108,52,57,55,32,101,120,116,114,97,52,57,56,32,112,112,45,112,97,105,114,52,57,57,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,33),40,112,112,45,101,120,112,114,32,101,120,112,114,53,48,57,32,99,111,108,53,49,48,32,101,120,116,114,97,53,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,44),40,112,112,45,99,97,108,108,32,101,120,112,114,53,49,52,32,99,111,108,53,49,53,32,101,120,116,114,97,53,49,54,32,112,112,45,105,116,101,109,53,49,55,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,41),40,112,112,45,108,105,115,116,32,108,53,50,48,32,99,111,108,53,50,49,32,101,120,116,114,97,53,50,50,32,112,112,45,105,116,101,109,53,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,53,51,49,32,99,111,108,53,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,50),40,112,112,45,100,111,119,110,32,108,53,50,53,32,99,111,108,49,53,50,54,32,99,111,108,50,53,50,55,32,101,120,116,114,97,53,50,56,32,112,112,45,105,116,101,109,53,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,49,32,114,101,115,116,53,53,48,32,99,111,108,49,53,53,49,32,99,111,108,50,53,53,50,32,99,111,108,51,53,53,51,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,50,32,114,101,115,116,53,53,56,32,99,111,108,49,53,53,57,32,99,111,108,50,53,54,48,32,99,111,108,51,53,54,49,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,31),40,116,97,105,108,51,32,114,101,115,116,53,54,54,32,99,111,108,49,53,54,55,32,99,111,108,50,53,54,56,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,70),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,53,52,48,32,99,111,108,53,52,49,32,101,120,116,114,97,53,52,50,32,110,97,109,101,100,63,53,52,51,32,112,112,45,49,53,52,52,32,112,112,45,50,53,52,53,32,112,112,45,51,53,52,54,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,35),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,53,55,57,32,99,111,108,53,56,48,32,101,120,116,114,97,53,56,49,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,35),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,53,56,50,32,99,111,108,53,56,51,32,101,120,116,114,97,53,56,52,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,31),40,112,112,45,105,102,32,101,120,112,114,53,56,53,32,99,111,108,53,56,54,32,101,120,116,114,97,53,56,55,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,111,110,100,32,101,120,112,114,53,56,56,32,99,111,108,53,56,57,32,101,120,116,114,97,53,57,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,97,115,101,32,101,120,112,114,53,57,49,32,99,111,108,53,57,50,32,101,120,116,114,97,53,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,112,112,45,97,110,100,32,101,120,112,114,53,57,52,32,99,111,108,53,57,53,32,101,120,116,114,97,53,57,54,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,32),40,112,112,45,108,101,116,32,101,120,112,114,53,57,55,32,99,111,108,53,57,56,32,101,120,116,114,97,53,57,57,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,34),40,112,112,45,98,101,103,105,110,32,101,120,112,114,54,48,51,32,99,111,108,54,48,52,32,101,120,116,114,97,54,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,31),40,112,112,45,100,111,32,101,120,112,114,54,48,54,32,99,111,108,54,48,55,32,101,120,116,114,97,54,48,56,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,15),40,115,116,121,108,101,32,104,101,97,100,54,48,57,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,18),40,112,112,32,111,98,106,52,54,55,32,99,111,108,52,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,53),40,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,51,53,53,32,100,105,115,112,108,97,121,63,51,53,54,32,119,105,100,116,104,51,53,55,32,111,117,116,112,117,116,51,53,56,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,49,52,32,115,54,54,50,41,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,30),40,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,54,53,57,32,46,32,111,112,116,54,54,48,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,109,115,103,54,55,52,32,97,114,103,115,54,55,53,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,40),40,102,112,114,105,110,116,102,48,32,108,111,99,54,54,55,32,112,111,114,116,54,54,56,32,109,115,103,54,54,57,32,97,114,103,115,54,55,48,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,35),40,102,112,114,105,110,116,102,32,112,111,114,116,55,49,53,32,102,115,116,114,55,49,54,32,46,32,97,114,103,115,55,49,55,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,26),40,112,114,105,110,116,102,32,102,115,116,114,55,49,57,32,46,32,97,114,103,115,55,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,27),40,115,112,114,105,110,116,102,32,102,115,116,114,55,50,50,32,46,32,97,114,103,115,55,50,51,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,32),40,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,55,50,53,32,46,32,97,114,103,115,55,50,54,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1728)
static void C_ccall f_1728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1720)
static void C_ccall f_1720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1294)
static void C_ccall f_1294(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1154)
static void C_fcall f_1154(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3351)
static C_word C_fcall f_3351(C_word t0,C_word t1);
C_noret_decl(f_1610)
static void C_fcall f_1610(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_976)
static void C_ccall f_976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_fcall f_2686(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_fcall f_2435(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1007)
static void C_fcall f_1007(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1177)
static void C_fcall f_1177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1172)
static void C_ccall f_1172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1540)
static void C_fcall f_1540(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2485)
static void C_fcall f_2485(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3114)
static void C_ccall f_3114(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2035)
static void C_fcall f_2035(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1933)
static C_word C_fcall f_1933(C_word t0);
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_fcall f_2489(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3107)
static void C_fcall f_3107(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3174)
static void C_fcall f_3174(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3166)
static C_word C_fcall f_3166(C_word t0);
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_ccall f_3112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2166)
static void C_ccall f_2166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_fcall f_3124(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2783)
static void C_fcall f_2783(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3128)
static void C_ccall f_3128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2787)
static void C_fcall f_2787(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3192)
static void C_fcall f_3192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_fcall f_2976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_fcall f_1870(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1874)
static void C_fcall f_1874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3158)
static void C_fcall f_3158(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2986)
static void C_fcall f_2986(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_fcall f_1972(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1990)
static void C_fcall f_1990(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1994)
static void C_fcall f_1994(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2001)
static void C_ccall f_2001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2211)
static void C_fcall f_2211(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_fcall f_2018(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2709)
static void C_fcall f_2709(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2204)
static void C_fcall f_2204(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_fcall f_2724(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3294)
static void C_ccall f_3294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2718)
static void C_fcall f_2718(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2150)
static void C_ccall f_2150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1304)
static void C_fcall f_1304(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1316)
static void C_ccall f_1316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_fcall f_2822(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_fcall f_1901(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_fcall f_2857(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1769)
static void C_fcall f_1769(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_fcall f_1237(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2551)
static void C_fcall f_2551(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1579)
static void C_ccall f_1579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1409)
static void C_fcall f_1409(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1413)
static void C_ccall f_1413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_fcall f_2519(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2657)
static void C_ccall f_2657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1714)
static void C_ccall f_1714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1710)
static void C_fcall f_1710(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1461)
static void C_fcall f_1461(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1468)
static void C_fcall f_1468(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1154)
static void C_fcall trf_1154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1154(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1154(t0,t1);}

C_noret_decl(trf_1610)
static void C_fcall trf_1610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1610(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1610(t0,t1);}

C_noret_decl(trf_2686)
static void C_fcall trf_2686(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2686(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2686(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2435)
static void C_fcall trf_2435(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2435(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2435(t0,t1,t2);}

C_noret_decl(trf_1007)
static void C_fcall trf_1007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1007(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1007(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1177)
static void C_fcall trf_1177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1177(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1177(t0,t1,t2);}

C_noret_decl(trf_1540)
static void C_fcall trf_1540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1540(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1540(t0,t1);}

C_noret_decl(trf_2485)
static void C_fcall trf_2485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2485(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2485(t0,t1,t2,t3);}

C_noret_decl(trf_2035)
static void C_fcall trf_2035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2035(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2035(t0,t1,t2,t3);}

C_noret_decl(trf_2489)
static void C_fcall trf_2489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2489(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2489(t0,t1,t2,t3);}

C_noret_decl(trf_3107)
static void C_fcall trf_3107(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3107(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3107(t0,t1);}

C_noret_decl(trf_3174)
static void C_fcall trf_3174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3174(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3174(t0,t1);}

C_noret_decl(trf_3124)
static void C_fcall trf_3124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3124(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3124(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2783)
static void C_fcall trf_2783(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2783(void *dummy){
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
f_2783(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_2787)
static void C_fcall trf_2787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2787(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2787(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3192)
static void C_fcall trf_3192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3192(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3192(t0,t1);}

C_noret_decl(trf_2976)
static void C_fcall trf_2976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2976(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2976(t0,t1,t2);}

C_noret_decl(trf_1870)
static void C_fcall trf_1870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1870(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1870(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1874)
static void C_fcall trf_1874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1874(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1874(t0,t1);}

C_noret_decl(trf_3158)
static void C_fcall trf_3158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3158(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3158(t0,t1,t2,t3);}

C_noret_decl(trf_2986)
static void C_fcall trf_2986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2986(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2986(t0,t1);}

C_noret_decl(trf_1972)
static void C_fcall trf_1972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1972(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1972(t0,t1,t2,t3);}

C_noret_decl(trf_1990)
static void C_fcall trf_1990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1990(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1990(t0,t1,t2,t3);}

C_noret_decl(trf_1994)
static void C_fcall trf_1994(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1994(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1994(t0,t1,t2,t3);}

C_noret_decl(trf_2211)
static void C_fcall trf_2211(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2211(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2211(t0,t1);}

C_noret_decl(trf_2018)
static void C_fcall trf_2018(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2018(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2018(t0,t1,t2,t3);}

C_noret_decl(trf_2709)
static void C_fcall trf_2709(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2709(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2709(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2204)
static void C_fcall trf_2204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2204(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2204(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2724)
static void C_fcall trf_2724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2724(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2724(t0,t1,t2,t3);}

C_noret_decl(trf_2718)
static void C_fcall trf_2718(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2718(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2718(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1304)
static void C_fcall trf_1304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1304(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1304(t0,t1,t2,t3);}

C_noret_decl(trf_2822)
static void C_fcall trf_2822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2822(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2822(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1901)
static void C_fcall trf_1901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1901(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1901(t0,t1);}

C_noret_decl(trf_2857)
static void C_fcall trf_2857(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2857(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2857(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1769)
static void C_fcall trf_1769(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1769(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1769(t0,t1);}

C_noret_decl(trf_1237)
static void C_fcall trf_1237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1237(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1237(t0,t1);}

C_noret_decl(trf_2551)
static void C_fcall trf_2551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2551(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2551(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1409)
static void C_fcall trf_1409(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1409(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1409(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2519)
static void C_fcall trf_2519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2519(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2519(t0,t1,t2,t3);}

C_noret_decl(trf_1710)
static void C_fcall trf_1710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1710(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1710(t0,t1);}

C_noret_decl(trf_1461)
static void C_fcall trf_1461(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1461(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1461(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1468)
static void C_fcall trf_1468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1468(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1468(t0,t1);}

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

/* pp-case in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2930,5,t0,t1,t2,t3,t4);}
/* extras.scm:519: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2783(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* k1727 in k1718 in k1713 in loop in k1704 in k1702 in read-token in k979 in k977 in k975 */
static void C_ccall f_1728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:235: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3312 in k3310 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3313,2,t0,t1);}
t2=C_i_check_list_2(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3317,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:613: rec */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3158(t4,t3,((C_word*)t0)[6],t1);}

/* k1721 in k1718 in k1713 in loop in k1704 in k1702 in read-token in k979 in k977 in k975 */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:236: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1710(t2,((C_word*)t0)[3]);}

/* k3316 in k3312 in k3310 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:624: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3192(t2,((C_word*)t0)[3]);}

/* k1718 in k1713 in loop in k1704 in k1702 in read-token in k979 in k977 in k975 */
static void C_ccall f_1720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1720,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1728,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:235: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t3,((C_word*)t0)[5]);}
else{
/* extras.scm:237: get-output-string */
t2=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k3310 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:611: next */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3174(t3,t2);}

/* pp-and in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2936,5,t0,t1,t2,t3,t4);}
/* extras.scm:522: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2686(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* f_1162 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1162,3,t0,t1,t2);}
/* extras.scm:87: rl */
t3=t2;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* pp-cond in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2924,5,t0,t1,t2,t3,t4);}
/* extras.scm:516: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2686(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* k2086 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:312: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1990(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3088 in generic-write in k979 in k977 in k975 */
static void C_ccall f_3089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:558: pp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2485(t3,t2,((C_word*)t0)[5],C_fix(0));}

/* write-string in k979 in k977 in k975 */
static void C_ccall f_1748(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_1748r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1748r(t0,t1,t2,t3);}}

static void C_ccall f_1748r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(12);
t4=C_i_check_string_2(t2,lf[29]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1753,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1785,a[2]=t5,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1789,a[2]=t6,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* extras.scm:242: def-n303 */
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t1);}
else{
t8=C_i_car(t3);
t9=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* extras.scm:242: def-port304 */
t10=t6;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* extras.scm:242: body301 */
t12=t5;
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,t8,t10);}}}

/* k2575 in k2563 in k2561 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:420: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* doread in read-lines in k979 in k977 in k975 */
static void C_ccall f_1294(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1294,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_fix(1000000000));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1304,a[2]=t5,a[3]=t2,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1304(t7,t1,C_SCHEME_END_OF_LIST,t3);}

/* pp-let in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2942,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_car(t5);
t7=C_i_symbolp(t6);
/* extras.scm:527: pp-general */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2783(t8,t1,t2,t3,t4,t7,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:527: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2783(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}}

/* k1755 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1756,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_check_exact_2(((C_word*)t0)[2],lf[29]):C_SCHEME_UNDEFINED);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_slot(t3,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1766,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1769,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
t7=C_block_size(((C_word*)t0)[5]);
t8=t6;
f_1769(t8,C_fixnum_lessp(((C_word*)t0)[2],t7));}
else{
t7=t6;
f_1769(t7,C_SCHEME_FALSE);}}

/* f_1753 in write-string in k979 in k977 in k975 */
static void C_ccall f_1753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1753,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1756,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:243: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),t4,t3,C_SCHEME_TRUE,lf[29]);}

/* k2633 in pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2635,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=f_1933(((C_word*)t0)[2]);
/* extras.scm:429: out */
t6=((C_word*)((C_word*)t0)[8])[1];
f_1972(t6,t4,t5,((C_word*)t0)[9]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2657,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* extras.scm:434: style */
t4=((C_word*)((C_word*)t0)[12])[1];
f_2976(t4,t3,t2);}
else{
/* extras.scm:441: pp-list */
t3=((C_word*)((C_word*)t0)[13])[1];
f_2709(t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2628,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2635,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* extras.scm:427: read-macro? */
f_1874(t5,t2);}

/* k1153 in read-line in k979 in k977 in k975 */
static void C_fcall f_1154(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1154,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1156,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:86: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[11]);}

/* k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1156,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(8));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:87: g118 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[4],t3);}
else{
t4=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:C_fix(256));
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:90: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t6,((C_word*)t5)[1]);}}

/* k2590 in k2563 in k2561 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2591,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:423: out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1972(t3,t2,lf[88],((C_word*)t0)[7]);}

/* f_2596 in k2561 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2596,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_string_length(t2);
t6=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_greaterp(((C_word*)((C_word*)t0)[3])[1],C_fix(0)));}

/* k2593 in k2590 in k2563 in k2561 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:423: pp-list */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2709(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k1613 in loop in k1604 in k1602 in k1582 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1614,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
/* extras.scm:201: get-output-string */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1625,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:203: write-string */
t4=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[5],t1,((C_word*)t0)[3]);}}

/* skip in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static C_word C_fcall f_3351(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=f_3166(((C_word*)((C_word*)t0)[2])[1]);
t6=t2;
t1=t6;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
return(t3);}}

/* loop in k1604 in k1602 in k1582 in read-string/port in k979 in k977 in k975 */
static void C_fcall f_1610(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1610,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1614,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:198: ##sys#read-string! */
t3=*((C_word*)lf[24]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(2048),((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0));}

/* k2310 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:360: char-name */
t3=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k2312 in k2310 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:360: g445 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:364: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1972(t3,t2,lf[64],((C_word*)t0)[3]);}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(65535)))){
/* extras.scm:367: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1972(t3,t2,lf[65],((C_word*)t0)[3]);}
else{
/* extras.scm:367: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1972(t3,t2,lf[66],((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:369: make-string */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[6]);}}}}

/* f_2317 in k2312 in k2310 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2317,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
/* extras.scm:362: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1972(t4,t1,t3,((C_word*)t0)[3]);}

/* k2339 in k2333 in k2312 in k2310 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:365: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_extras_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("extras_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(862)){
C_save(t1);
C_rereclaim2(862*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,133);
lf[0]=C_h_intern(&lf[0],4,"read");
lf[1]=C_h_intern(&lf[1],9,"read-file");
lf[2]=C_h_intern(&lf[2],18,"\003sysstandard-input");
lf[3]=C_h_intern(&lf[3],16,"\003sysfast-reverse");
lf[4]=C_h_intern(&lf[4],20,"call-with-input-file");
lf[5]=C_h_intern(&lf[5],5,"port\077");
lf[6]=C_h_intern(&lf[6],9,"randomize");
lf[7]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[8]=C_h_intern(&lf[8],11,"\003sysflo2fix");
lf[9]=C_h_intern(&lf[9],15,"current-seconds");
lf[10]=C_h_intern(&lf[10],6,"random");
lf[11]=C_h_intern(&lf[11],9,"read-line");
lf[12]=C_h_intern(&lf[12],13,"\003syssubstring");
lf[13]=C_h_intern(&lf[13],15,"\003sysread-char-0");
lf[14]=C_h_intern(&lf[14],9,"peek-char");
lf[15]=C_h_intern(&lf[15],17,"\003sysstring-append");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_h_intern(&lf[17],15,"\003sysmake-string");
lf[18]=C_h_intern(&lf[18],20,"\003syscheck-input-port");
lf[19]=C_h_intern(&lf[19],10,"read-lines");
lf[20]=C_h_intern(&lf[20],10,"write-line");
lf[21]=C_h_intern(&lf[21],19,"\003sysstandard-output");
lf[22]=C_h_intern(&lf[22],16,"\003syswrite-char-0");
lf[23]=C_h_intern(&lf[23],21,"\003syscheck-output-port");
lf[24]=C_h_intern(&lf[24],16,"\003sysread-string!");
lf[25]=C_h_intern(&lf[25],12,"read-string!");
lf[26]=C_h_intern(&lf[26],20,"\003sysread-string/port");
lf[27]=C_h_intern(&lf[27],11,"read-string");
lf[28]=C_h_intern(&lf[28],17,"get-output-string");
lf[29]=C_h_intern(&lf[29],12,"write-string");
lf[30]=C_h_intern(&lf[30],18,"open-output-string");
lf[31]=C_h_intern(&lf[31],13,"read-buffered");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[33]=C_h_intern(&lf[33],10,"read-token");
lf[34]=C_h_intern(&lf[34],15,"\003syspeek-char-0");
lf[35]=C_h_intern(&lf[35],9,"read-byte");
lf[36]=C_h_intern(&lf[36],10,"write-byte");
lf[38]=C_h_intern(&lf[38],5,"quote");
lf[39]=C_h_intern(&lf[39],10,"quasiquote");
lf[40]=C_h_intern(&lf[40],7,"unquote");
lf[41]=C_h_intern(&lf[41],16,"unquote-splicing");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001`");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\002,@");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\003 . ");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\002()");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\005#!eof");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[54]=C_h_intern(&lf[54],12,"vector->list");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\002#t");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[57]=C_h_intern(&lf[57],18,"\003sysnumber->string");
lf[58]=C_h_intern(&lf[58],9,"\003sysprint");
lf[59]=C_h_intern(&lf[59],21,"\003sysprocedure->string");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376B\000\000\002\134t\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376B\000\000\002\134n\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376B\000\000\002\134r\376\377\016");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\001x");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001u");
lf[67]=C_h_intern(&lf[67],9,"char-name");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002#\134");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\016#<unspecified>");
lf[70]=C_h_intern(&lf[70],19,"\003syspointer->string");
lf[71]=C_h_intern(&lf[71],28,"\003sysarbitrary-unbound-symbol");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\020#<unbound value>");
lf[73]=C_h_intern(&lf[73],19,"\003sysuser-print-hook");
lf[74]=C_h_intern(&lf[74],13,"string-append");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\007#<port ");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\003#${");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[81]=C_h_intern(&lf[81],23,"\003syslambda-info->string");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\016#<lambda info ");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\025#<unprintable object>");
lf[84]=C_h_intern(&lf[84],11,"\003sysnumber\077");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[87]=C_h_intern(&lf[87],21,"reverse-string-append");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[89]=C_h_intern(&lf[89],3,"max");
lf[90]=C_h_intern(&lf[90],28,"\003syssymbol->qualified-string");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[98]=C_h_intern(&lf[98],6,"lambda");
lf[99]=C_h_intern(&lf[99],2,"if");
lf[100]=C_h_intern(&lf[100],4,"set!");
lf[101]=C_h_intern(&lf[101],4,"cond");
lf[102]=C_h_intern(&lf[102],4,"case");
lf[103]=C_h_intern(&lf[103],3,"and");
lf[104]=C_h_intern(&lf[104],2,"or");
lf[105]=C_h_intern(&lf[105],3,"let");
lf[106]=C_h_intern(&lf[106],5,"begin");
lf[107]=C_h_intern(&lf[107],2,"do");
lf[108]=C_h_intern(&lf[108],4,"let\052");
lf[109]=C_h_intern(&lf[109],6,"letrec");
lf[110]=C_h_intern(&lf[110],6,"define");
lf[111]=C_h_intern(&lf[111],18,"pretty-print-width");
lf[112]=C_h_intern(&lf[112],12,"pretty-print");
lf[113]=C_h_intern(&lf[113],7,"display");
lf[114]=C_h_intern(&lf[114],2,"pp");
lf[116]=C_h_intern(&lf[116],9,"\003syserror");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[118]=C_h_intern(&lf[118],5,"write");
lf[119]=C_h_intern(&lf[119],16,"\003sysflush-output");
lf[120]=C_h_intern(&lf[120],7,"newline");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\037illegal format-string character");
lf[122]=C_h_intern(&lf[122],13,"\003systty-port\077");
lf[123]=C_h_intern(&lf[123],7,"fprintf");
lf[124]=C_h_intern(&lf[124],6,"printf");
lf[125]=C_h_intern(&lf[125],7,"sprintf");
lf[126]=C_h_intern(&lf[126],6,"format");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\023illegal destination");
lf[128]=C_h_intern(&lf[128],12,"output-port\077");
lf[129]=C_h_intern(&lf[129],17,"register-feature!");
lf[130]=C_h_intern(&lf[130],7,"srfi-28");
lf[131]=C_h_intern(&lf[131],14,"make-parameter");
lf[132]=C_h_intern(&lf[132],6,"extras");
C_register_lf2(lf,133,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_976,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2347 in k2312 in k2310 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:368: number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[5],C_fix(16));}

/* k977 in k975 */
static void C_ccall f_978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:37: register-feature! */
t3=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[132]);}

/* k975 */
static void C_ccall f_976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* read-string in k979 in k977 in k975 */
static void C_ccall f_1631(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_1631r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1631r(t0,t1,t2);}}

static void C_ccall f_1631r(C_word t0,C_word t1,C_word t2){
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
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[2]+1):C_i_car(t6));
if(C_truep(C_i_nullp(t6))){
/* extras.scm:207: ##sys#read-string/port */
t9=*((C_word*)lf[26]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,t4,t8);}
else{
t9=C_i_cdr(t6);
/* extras.scm:207: ##sys#read-string/port */
t10=*((C_word*)lf[26]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,t4,t8);}}

/* k2333 in k2312 in k2310 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:365: number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[5],C_fix(16));}

/* read-line in k979 in k977 in k975 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1146r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1146r(t0,t1,t2);}}

static void C_ccall f_1146r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):*((C_word*)lf[2]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1154,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t6=C_i_cdr(t2);
t7=C_i_pairp(t6);
t8=t5;
f_1154(t8,(C_truep(t7)?C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t6=t5;
f_1154(t6,C_SCHEME_FALSE);}}

/* read-file in k979 in k977 in k975 */
static void C_ccall f_982(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_982r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_982r(t0,t1,t2);}}

static void C_ccall f_982r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(10);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?((C_word*)t0)[2]:C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_SCHEME_FALSE:C_i_car(t10));
t13=C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_998,a[2]=t12,a[3]=t8,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1043,a[2]=t15,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:51: port? */
t17=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,t4);}

/* k979 in k977 in k975 */
static void C_ccall f_980(C_word c,C_word t0,C_word t1){
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
C_word ab[52],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_980,2,t0,t1);}
t2=*((C_word*)lf[0]+1);
t3=C_mutate((C_word*)lf[1]+1 /* (set! read-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_982,a[2]=t2,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[6]+1 /* (set! randomize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1087,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[10]+1 /* (set! random ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1109,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[11]+1 /* (set! read-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1146,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[19]+1 /* (set! read-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1284,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[20]+1 /* (set! write-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1368,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1392,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[25]+1 /* (set! read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1511,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[26]+1 /* (set! ##sys#read-string/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1579,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[27]+1 /* (set! read-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1631,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[31]+1 /* (set! read-buffered ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1670,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[33]+1 /* (set! read-token ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1696,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[29]+1 /* (set! write-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1748,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[35]+1 /* (set! read-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[36]+1 /* (set! write-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1847,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[37] /* (set! generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3101,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:564: make-parameter */
t20=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t20+1)))(3,t20,t19,C_fix(79));}

/* k1604 in k1602 in k1582 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1605,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1610(t5,((C_word*)t0)[4]);}

/* k1602 in k1582 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1605,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,C_fix(2048),C_make_character(32));}

/* k2365 in k2312 in k2310 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:369: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1041 in read-file in k979 in k977 in k975 */
static void C_ccall f_1043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm:52: slurp */
t2=((C_word*)t0)[2];
f_998(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
/* extras.scm:53: call-with-input-file */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* slurp in read-file in k979 in k977 in k975 */
static void C_ccall f_998(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_998,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:47: reader */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2353 in k2347 in k2312 in k2310 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:368: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1624 in k1613 in loop in k1604 in k1602 in k1582 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:204: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1610(t2,((C_word*)t0)[3]);}

/* k2689 in pp-call in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2690,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:449: pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2718(t5,((C_word*)t0)[5],t3,t1,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2380 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:371: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2412,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(3));
/* extras.scm:378: string-append */
t4=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[75],t3,lf[76]);}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2426,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:380: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1972(t3,t2,lf[79],((C_word*)t0)[4]);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:390: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1972(t3,t2,lf[82],((C_word*)t0)[4]);}
else{
/* extras.scm:393: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],lf[83],((C_word*)t0)[4]);}}}}

/* k2425 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2426,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2435,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word)li37),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_2435(t7,t3,C_fix(0));}

/* pp-call in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2686(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2686,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2690,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2707,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:447: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1972(t9,t8,lf[91],t3);}

/* k2680 in k2656 in k2633 in pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:439: pp-general */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2783(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[7])[1]);}
else{
/* extras.scm:440: pp-call */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2686(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}

/* random in k979 in k977 in k975 */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1109,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[10]);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}
else{
t5=C_random_fixnum(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1102 in randomize in k979 in k977 in k975 */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1103,2,t0,t1);}
t2=C_a_i_flonum_quotient(&a,2,t1,lf[7]);
/* extras.scm:60: ##sys#flo2fix */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(3,*((C_word*)lf[8]+1),((C_word*)t0)[2],t2);}

/* k2417 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:378: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2429 in k2425 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:388: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],lf[77],((C_word*)t0)[4]);}

/* doloop454 in k2425 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2435(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2435,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_subbyte(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2446,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_lessp(t3,C_fix(16)))){
/* extras.scm:386: out */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1972(t5,t4,lf[78],((C_word*)t0)[6]);}
else{
t5=t4;
f_2446(2,t5,C_SCHEME_UNDEFINED);}}}

/* k1522 in read-string! in k979 in k977 in k975 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1523,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[2],lf[25]);
t3=(C_truep(((C_word*)((C_word*)t0)[3])[1])?C_i_check_exact_2(((C_word*)((C_word*)t0)[3])[1],lf[25]):C_SCHEME_UNDEFINED);
t4=C_block_size(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1540,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t6=C_fixnum_plus(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t7=t5;
f_1540(t7,C_fixnum_less_or_equal_p(t6,t4));}
else{
t6=t5;
f_1540(t6,C_SCHEME_FALSE);}}

/* doloop84 in k1004 in slurp in read-file in k979 in k977 in k975 */
static void C_fcall f_1007(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1007,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm:50: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t1,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1025,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:47: reader */
t8=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[5]);}}

/* k1004 in slurp in read-file in k979 in k977 in k975 */
static void C_ccall f_1005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1005,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1007,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1007(t5,((C_word*)t0)[5],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* k2447 in k2445 in doloop454 in k2425 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2435(t3,((C_word*)t0)[4],t2);}

/* k2445 in doloop454 in k2425 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:387: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),t3,((C_word*)t0)[7],C_fix(16));}

/* k2397 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:376: ##sys#user-print-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(5,*((C_word*)lf[73]+1),t2,((C_word*)t0)[5],C_SCHEME_TRUE,t1);}

/* loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_fcall f_1177(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1177,NULL,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm:93: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t1,((C_word*)((C_word*)t0)[3])[1],C_fix(0),t2);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1189,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:94: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t4,((C_word*)t0)[4]);}}

/* k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1172,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1177,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word)li6),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1177(t6,((C_word*)t0)[5],C_fix(0));}

/* k1538 in k1522 in read-string! in k979 in k977 in k975 */
static void C_fcall f_1540(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[25]);
/* extras.scm:181: ##sys#read-string! */
t3=*((C_word*)lf[24]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2]);}
else{
t2=C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[2]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_i_check_exact_2(((C_word*)t0)[2],lf[25]);
/* extras.scm:181: ##sys#read-string! */
t5=*((C_word*)lf[24]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* k1024 in doloop84 in k1004 in slurp in read-file in k979 in k977 in k975 */
static void C_ccall f_1025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1025,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[5])[1];
f_1007(t4,((C_word*)t0)[6],t1,t2,t3);}

/* k2468 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2477,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:391: ##sys#lambda-info->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(3,*((C_word*)lf[81]+1),t3,((C_word*)t0)[5]);}

/* pretty-print in k3099 in k979 in k977 in k975 */
static void C_ccall f_3103(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3103r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3103r(t0,t1,t2,t3);}}

static void C_ccall f_3103r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3107,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_3107(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3107(t5,*((C_word*)lf[21]+1));}}

/* k3099 in k979 in k977 in k975 */
static void C_ccall f_3101(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3101,2,t0,t1);}
t2=C_mutate((C_word*)lf[111]+1 /* (set! pretty-print-width ...) */,t1);
t3=C_mutate((C_word*)lf[112]+1 /* (set! pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3103,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[114]+1 /* (set! pp ...) */,*((C_word*)lf[112]+1));
t5=C_mutate(&lf[115] /* (set! fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3124,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[123]+1 /* (set! fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3419,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[124]+1 /* (set! printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3425,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[125]+1 /* (set! sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3431,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[126]+1 /* (set! format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3437,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3478,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:648: register-feature! */
t11=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[130]);}

/* pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2485(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[152],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2485,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2489,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2519,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li42),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2628,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t19,a[7]=t13,a[8]=t39,a[9]=t15,a[10]=((C_word*)t0)[7],a[11]=((C_word)li43),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2686,a[2]=t17,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2709,a[2]=t17,a[3]=((C_word*)t0)[2],a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2718,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2783,a[2]=t9,a[3]=t7,a[4]=t17,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2906,a[2]=t15,a[3]=t11,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2912,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2918,a[2]=t19,a[3]=t11,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2924,a[2]=t13,a[3]=t21,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2930,a[2]=t19,a[3]=t11,a[4]=t21,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2936,a[2]=t13,a[3]=t11,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2961,a[2]=t19,a[3]=t11,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2967,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2976,a[2]=t23,a[3]=t25,a[4]=t27,a[5]=t29,a[6]=t31,a[7]=t33,a[8]=t35,a[9]=t37,a[10]=((C_word)li61),tmp=(C_word)a,a+=11,tmp));
/* extras.scm:555: pr */
t58=((C_word*)t9)[1];
f_2551(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* k2457 in k2445 in doloop454 in k2425 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:387: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3116 */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k2032 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2033,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2035,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2035(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* f_3114 in k3111 in k3106 in pretty-print in k3099 in k979 in k977 in k975 */
static void C_ccall f_3114(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3114,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:568: display */
t4=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[2]);}

/* loop in k2032 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2035(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2035,NULL,4,t0,t1,t2,t3);}
t4=t3;
if(C_truep(t4)){
if(C_truep(C_i_pairp(t2))){
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2056,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=t2;
t9=C_u_i_car(t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2061,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:315: out */
t11=((C_word*)((C_word*)t0)[4])[1];
f_1972(t11,t10,lf[46],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:316: out */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1972(t5,t1,lf[47],t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2076,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2079,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:317: out */
t7=((C_word*)((C_word*)t0)[4])[1];
f_1972(t7,t6,lf[49],t3);}}}
else{
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* read-macro-prefix in generic-write in k979 in k977 in k975 */
static C_word C_fcall f_1933(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
t2=C_i_car(t1);
t3=t1;
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[38]);
if(C_truep(t5)){
return(lf[42]);}
else{
t6=C_eqp(t2,lf[39]);
if(C_truep(t6)){
return(lf[43]);}
else{
t7=C_eqp(t2,lf[40]);
if(C_truep(t7)){
return(lf[44]);}
else{
t8=C_eqp(t2,lf[41]);
return((C_truep(t8)?lf[45]:C_SCHEME_UNDEFINED));}}}}

/* k2470 in k2468 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:392: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],lf[80],((C_word*)t0)[4]);}

/* spaces in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2489(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2489,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
if(C_truep(C_i_greaterp(t2,C_fix(7)))){
t4=C_a_i_minus(&a,2,t2,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:400: out */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1972(t6,t5,lf[85],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:401: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t4,lf[86],C_fix(0),t2);}}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3106 in pretty-print in k3099 in k979 in k977 in k975 */
static void C_fcall f_3107(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3107,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3109,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3112,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:568: pretty-print-width */
t4=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3108 in k3106 in pretty-print in k3099 in k979 in k977 in k975 */
static void C_ccall f_3109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k1980 in out in generic-write in k979 in k977 in k975 */
static void C_ccall f_1982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1982,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_plus(&a,2,((C_word*)t0)[4],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2476 in k2468 in k2410 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:391: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2055 in loop in k2032 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:315: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2035(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* next in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_fcall f_3174(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3174,NULL,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:592: ##sys#error */
t2=*((C_word*)lf[116]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],lf[117]);}
else{
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* pp-lambda in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2912(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2912,5,t0,t1,t2,t3,t4);}
/* extras.scm:510: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2783(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* fetch in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static C_word C_fcall f_3166(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t1=C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
return(t1);}

/* pp-if in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2918,5,t0,t1,t2,t3,t4);}
/* extras.scm:513: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2783(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* k2903 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:498: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1990(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2075 in loop in k2032 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:317: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],lf[48],t1);}

/* pp-expr-list in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2906,5,t0,t1,t2,t3,t4);}
/* extras.scm:507: pp-list */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2709(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1189,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* extras.scm:98: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[2]);}}
else{
t2=t1;
switch(t2){
case C_make_character(10):
/* extras.scm:100: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[2]);
case C_make_character(13):
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1221,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:102: peek-char */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);
default:
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1237,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],((C_word*)((C_word*)t0)[7])[1]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1250,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1257,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:110: make-string */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)((C_word*)t0)[7])[1]);}
else{
t4=t3;
f_1237(t4,C_SCHEME_UNDEFINED);}}}}

/* k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3130,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3132,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3158,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3158(t6,t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3131 in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3132,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3153,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:627: get-output-string */
t5=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}
else{
/* extras.scm:625: get-output-string */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* randomize in k979 in k977 in k975 */
static void C_ccall f_1087(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1087r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1087r(t0,t1,t2);}}

static void C_ccall f_1087r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1091,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1103,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:60: current-seconds */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=C_i_check_exact_2(t4,lf[6]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_randomize(t4));}}

/* k2060 in loop in k2032 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:315: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1990(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2768 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:469: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],lf[94],t1);}

/* k2078 in loop in k2032 in wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:317: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1990(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3406 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3130(2,t2,((C_word*)t0)[3]);}
else{
/* extras.scm:581: open-output-string */
t2=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k1090 in randomize in k979 in k977 in k975 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_exact_2(t1,lf[6]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_randomize(t1));}

/* k2171 in k2165 in k2163 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:329: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3111 in k3106 in pretty-print in k3099 in k979 in k977 in k975 */
static void C_ccall f_3112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3112,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3114,a[2]=((C_word*)t0)[2],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:568: generic-write */
f_1870(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1,t2);}

/* k2163 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:328: ##sys#print */
t3=*((C_word*)lf[58]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,t1);}

/* k2165 in k2163 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2166,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:329: get-output-string */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* fprintf0 in k3099 in k979 in k977 in k975 */
static void C_fcall f_3124(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3124,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3128,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
/* extras.scm:578: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),t6,t3,C_SCHEME_TRUE,t2);}
else{
t7=t6;
f_3128(2,t7,C_SCHEME_UNDEFINED);}}

/* pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2783(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2783,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2787,a[2]=t6,a[3]=t4,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2822,a[2]=t7,a[3]=t4,a[4]=t14,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li49),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t8,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=t2;
t20=C_u_i_cdr(t19);
t21=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2866,a[2]=t5,a[3]=t20,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2904,a[2]=((C_word*)t0)[5],a[3]=t21,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:498: out */
t23=((C_word*)((C_word*)t0)[6])[1];
f_1972(t23,t22,lf[97],t3);}

/* k2780 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:471: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],lf[95],t1);}

/* write-byte in k979 in k977 in k975 */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1847r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1847r(t0,t1,t2,t3);}}

static void C_ccall f_1847r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[21]+1):C_i_car(t3));
t6=C_i_check_exact_2(t2,lf[36]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1856,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:263: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),t7,t5,C_SCHEME_TRUE,lf[36]);}

/* k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3408,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:579: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[122]+1)))(3,*((C_word*)lf[122]+1),t3,((C_word*)t0)[2]);}
else{
/* extras.scm:581: open-output-string */
t4=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* tail1 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2787(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2787,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t9,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[5],a[3]=t12,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:482: indent */
t14=((C_word*)((C_word*)t0)[6])[1];
f_2519(t14,t13,t5,t4);}
else{
/* extras.scm:483: tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2822(t7,t1,t2,t3,t4,t5);}}

/* k2771 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2772,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* extras.scm:470: pr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2551(t3,((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}

/* loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_fcall f_3192(C_word t0,C_word t1){
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
loop:
a=C_alloc(11);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3192,NULL,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=f_3166(((C_word*)((C_word*)t0)[4])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3203,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=f_3166(((C_word*)((C_word*)t0)[4])[1]);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3225,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:602: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3174(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3237,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:603: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3174(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3249,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:604: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3174(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3261,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3264,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:605: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3174(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3276,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3279,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:606: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3174(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3291,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3294,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:607: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3174(t10,t9);
case C_make_character(33):
/* extras.scm:608: ##sys#flush-output */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[119]+1)))(3,*((C_word*)lf[119]+1),t3,((C_word*)t0)[6]);
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3311,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:610: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3174(t9,t8);
case C_make_character(126):
/* extras.scm:614: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t3,C_make_character(126),((C_word*)t0)[6]);
default:
t8=C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm:615: newline */
t10=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t3,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=f_3166(((C_word*)((C_word*)t0)[4])[1]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t12=f_3351(t11,t10);
/* extras.scm:624: loop */
t25=t1;
t1=t25;
goto loop;}
else{
/* extras.scm:622: ##sys#error */
t10=*((C_word*)lf[116]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t3,((C_word*)t0)[8],lf[121],t6);}}}}
else{
/* extras.scm:623: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t3,t2,((C_word*)t0)[6]);}}}

/* k2777 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:471: indent */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2519(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1855 in write-byte in k979 in k977 in k975 */
static void C_ccall f_1856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_make_character(C_unfix(((C_word*)t0)[2]));
/* extras.scm:264: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* style in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2976(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2976,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,lf[98]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2986,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_2986(t5,t3);}
else{
t5=C_eqp(t2,lf[108]);
if(C_truep(t5)){
t6=t4;
f_2986(t6,t5);}
else{
t6=C_eqp(t2,lf[109]);
t7=t4;
f_2986(t7,(C_truep(t6)?t6:C_eqp(t2,lf[110])));}}}

/* k2131 in k2128 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:323: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2018(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* generic-write in k979 in k977 in k975 */
static void C_fcall f_1870(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[43],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1870,NULL,5,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1874,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1933,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1972,a[2]=t5,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1990,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t3,a[7]=((C_word)li38),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2485,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=t13,a[6]=t9,a[7]=t7,a[8]=((C_word)li62),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3089,a[2]=t11,a[3]=t1,a[4]=t15,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t21,C_fix(1),C_make_character(10));}
else{
/* extras.scm:559: wr */
t21=((C_word*)t13)[1];
f_1990(t21,t1,t2,C_fix(0));}}

/* pp-begin in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2961,5,t0,t1,t2,t3,t4);}
/* extras.scm:530: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2783(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-do in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2967,5,t0,t1,t2,t3,t4);}
/* extras.scm:533: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2783(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* read-macro? in generic-write in k979 in k977 in k975 */
static void C_fcall f_1874(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1874,NULL,2,t1,t2);}
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_eqp(t3,lf[38]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1901,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_1901(t8,t6);}
else{
t8=C_eqp(t3,lf[39]);
if(C_truep(t8)){
t9=t7;
f_1901(t9,t8);}
else{
t9=C_eqp(t3,lf[40]);
t10=t7;
f_1901(t10,(C_truep(t9)?t9:C_eqp(t3,lf[41])));}}}

/* k2399 in k2397 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:377: get-output-string */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k2128 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:323: out */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1972(t3,t2,lf[53],((C_word*)t0)[5]);}

/* k2876 in k2865 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2877,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:503: tail1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2787(t4,((C_word*)t0)[4],((C_word*)t0)[5],t2,t1,t3);}

/* k2405 in k2399 in k2397 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:377: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_fcall f_3158(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3158,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_check_string_2(t2,((C_word*)t0)[2]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_block_size(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3166,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3174,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3192,a[2]=t7,a[3]=t8,a[4]=t10,a[5]=t16,a[6]=((C_word*)t0)[3],a[7]=t12,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[4],a[10]=((C_word)li68),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_3192(t18,t1);}

/* k2984 in style in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2986(C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[99]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[100]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)((C_word*)t0)[5])[1]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[101]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)((C_word*)t0)[6])[1]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[102]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)((C_word*)t0)[7])[1]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[103]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[104]));
if(C_truep(t7)){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)((C_word*)t0)[8])[1]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[105]);
if(C_truep(t8)){
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)((C_word*)t0)[9])[1]);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[106]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,((C_word*)((C_word*)t0)[10])[1]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[107]);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?((C_word*)((C_word*)t0)[11])[1]:C_SCHEME_FALSE));}}}}}}}}

/* k3152 in k3131 in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:627: ##sys#print */
t2=*((C_word*)lf[58]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2865 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2866,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2877,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:502: out */
t7=((C_word*)((C_word*)t0)[8])[1];
f_1972(t7,t6,lf[96],t1);}
else{
t3=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(2));
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:504: tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2787(t5,((C_word*)t0)[6],((C_word*)t0)[3],t3,t1,t4);}}

/* out in generic-write in k979 in k977 in k975 */
static void C_fcall f_1972(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1972,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1982,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:300: output */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1827 in read-byte in k979 in k977 in k975 */
static void C_ccall f_1828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:256: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[3]);}

/* read-byte in k979 in k977 in k975 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1821r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1821r(t0,t1,t2);}}

static void C_ccall f_1821r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1828,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:255: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t5,t4,C_SCHEME_TRUE,lf[35]);}

/* k2009 in k1999 in wr-expr in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:306: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1990(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2262 */
static void C_ccall f_2263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:349: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1829 in k1827 in read-byte in k979 in k977 in k975 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_eofp(t1))){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_character_code(t1)));}}

/* wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_1990(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1990,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1994,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word)li31),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:320: wr-expr */
t9=t4;
f_1994(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:321: wr-lst */
t9=((C_word*)t6)[1];
f_2018(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:322: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1972(t9,t1,lf[52],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2129,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:323: vector->list */
t10=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:324: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1972(t9,t1,lf[55],t3);}
else{
/* extras.scm:324: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1972(t9,t1,lf[56],t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2150,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:325: ##sys#number? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[84]+1)))(3,*((C_word*)lf[84]+1),t9,t2);}}}}}}

/* wr-expr in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_1994(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1994,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2001,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:305: read-macro? */
f_1874(t4,t2);}

/* k1999 in wr-expr in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2001,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2010,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=f_1933(((C_word*)t0)[2]);
/* extras.scm:306: out */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1972(t6,t4,t5,((C_word*)t0)[7]);}
else{
/* extras.scm:307: wr-lst */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2018(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k2209 in loop in k2201 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2211(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2211,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_i_char_equalp(t2,C_make_character(92));
t4=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(34)));
if(C_truep(t4)){
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2230,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2233,a[2]=((C_word*)t0)[6],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2236,a[2]=((C_word*)t0)[6],a[3]=t7,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:341: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t8,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[3]);}
else{
t5=C_u_i_assq(t2,lf[61]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word)li34),tmp=(C_word)a,a+=9,tmp);
/* extras.scm:343: g434 */
t7=t6;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[5],t5);}
else{
t6=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:353: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2204(t7,((C_word*)t0)[5],((C_word*)t0)[8],t6,((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:355: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t3,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[3]);}}

/* wr-lst in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2018(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2018,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t7=t2;
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2087,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:312: out */
t10=((C_word*)((C_word*)t0)[3])[1];
f_1972(t10,t9,lf[50],t3);}
else{
t7=t6;
f_2033(2,t7,C_SCHEME_FALSE);}}
else{
/* extras.scm:318: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1972(t4,t1,lf[51],t3);}}

/* pp-list in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2709(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2709,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2713,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:455: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1972(t7,t6,lf[92],t3);}

/* k2706 in pp-call in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:447: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1990(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2888 in k2865 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:502: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1990(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2201 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2202,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2204,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2204(t5,((C_word*)t0)[4],C_fix(0),C_fix(0),t1);}

/* loop in k2201 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_fcall f_2204(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2204,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2211,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=C_i_string_length(((C_word*)t0)[2]);
t7=t5;
f_2211(t7,C_fixnum_lessp(t3,t6));}
else{
t6=t5;
f_2211(t6,C_SCHEME_FALSE);}}

/* k2183 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:330: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2724(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2724,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1)):C_fix(0));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2743,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=t2;
t10=C_u_i_car(t9);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t10,a[5]=t7,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:465: indent */
t12=((C_word*)((C_word*)t0)[6])[1];
f_2519(t12,t11,((C_word*)t0)[7],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:467: out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_1972(t4,t1,lf[93],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2769,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2778,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2781,a[2]=((C_word*)t0)[8],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:471: indent */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2519(t8,t7,((C_word*)t0)[7],t3);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2229 in k2209 in loop in k2201 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:338: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2204(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2232 in k2209 in loop in k2201 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:340: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],lf[60],t1);}

/* k2235 in k2209 in loop in k2201 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:341: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2712 in pp-list in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:456: pp-down */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2718(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3293 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:607: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),((C_word*)t0)[2],t1,C_fix(16));}

/* pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2718(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2718,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2724,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word)li46),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_2724(t10,t1,t2,t3);}

/* k3290 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:607: display */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* write-line in k979 in k977 in k975 */
static void C_ccall f_1368(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1368r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1368r(t0,t1,t2,t3);}}

static void C_ccall f_1368r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[21]+1):C_slot(t3,C_fix(0)));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1374,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:140: ##sys#check-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),t5,t4,C_SCHEME_TRUE,lf[20]);}

/* k3263 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:605: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),((C_word*)t0)[2],t1,C_fix(2));}

/* k3260 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:605: display */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2742 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:464: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2724(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2747 in loop in pp-down in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:465: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2551(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2155 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:325: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2150(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2150,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:325: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t2,((C_word*)t0)[5]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:327: open-output-string */
t3=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:330: ##sys#procedure->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t2,((C_word*)t0)[5]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:332: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:333: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1972(t3,t2,lf[63],((C_word*)t0)[4]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,C_fix(1),t3);}
else{
t2=C_fix(C_character_code(((C_word*)t0)[5]));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:359: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1972(t4,t3,lf[68],((C_word*)t0)[4]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[5]))){
/* extras.scm:370: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],lf[69],((C_word*)t0)[4]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:371: ##sys#pointer->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(3,*((C_word*)lf[70]+1),t2,((C_word*)t0)[5]);}
else{
t2=C_slot(lf[71],C_fix(0));
t3=C_eqp(((C_word*)t0)[5],t2);
if(C_truep(t3)){
/* extras.scm:373: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1972(t4,((C_word*)t0)[3],lf[72],((C_word*)t0)[4]);}
else{
if(C_truep(C_structurep(((C_word*)t0)[5]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:375: open-output-string */
t5=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:378: port? */
t5=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}}}}}}}}}

/* loop in doread in read-lines in k979 in k977 in k975 */
static void C_fcall f_1304(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1304,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm:124: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t1,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1316,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:125: read-line */
t6=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}}

/* k3202 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:624: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3192(t2,((C_word*)t0)[3]);}

/* k1315 in loop in doread in read-lines in k979 in k977 in k975 */
static void C_ccall f_1316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1316,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* extras.scm:127: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* extras.scm:128: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1304(t4,((C_word*)t0)[2],t2,t3);}}

/* k3236 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:603: display */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2804 in tail1 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:482: tail2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2822(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k2807 in tail1 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:482: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2551(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2280 in k2209 in loop in k2201 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:354: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],lf[62],t1);}

/* k2283 in k2209 in loop in k2201 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:355: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* tail2 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2822(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2822,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t9,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[5],a[3]=t12,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:490: indent */
t14=((C_word*)((C_word*)t0)[6])[1];
f_2519(t14,t13,t5,t4);}
else{
/* extras.scm:491: tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2857(t7,t1,t2,t3,t4);}}

/* k1344 in read-lines in k979 in k977 in k975 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:133: doread */
t2=((C_word*)t0)[2];
f_1294(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3248 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:604: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k1248 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
f_1237(t5,t4);}

/* k1256 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:110: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* k3278 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:606: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),((C_word*)t0)[2],t1,C_fix(8));}

/* k3275 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:606: display */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k1899 in read-macro? in generic-write in k979 in k977 in k975 */
static void C_fcall f_1901(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t3));}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2842 in tail2 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:490: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2551(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2839 in tail2 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:490: tail3 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2857(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2256 in k2244 */
static void C_ccall f_2257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:350: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2204(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* tail3 in pp-general in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2857(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2857,NULL,5,t0,t1,t2,t3,t4);}
/* extras.scm:494: pp-down */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2718(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1373 in write-line in k979 in k977 in k975 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1374,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[2],lf[20]);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_slot(t3,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:136: g162 */
t6=t4;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2244 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2245,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2257,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_cdr(((C_word*)t0)[5]);
/* extras.scm:352: out */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1972(t6,t4,t5,t1);}

/* f_2242 in k2209 in loop in k2201 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2242(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2242,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2263,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:349: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t4,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[2]);}

/* k1379 in k1373 in write-line in k979 in k977 in k975 */
static void C_ccall f_1381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:143: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* read-string! in k979 in k977 in k975 */
static void C_ccall f_1511(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_1511r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1511r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1511r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(9);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[2]+1):C_i_car(t4));
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1523,a[2]=t3,a[3]=t5,a[4]=t11,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:174: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t14,t7,C_SCHEME_TRUE,lf[25]);}

/* ##sys#read-string! in k979 in k977 in k975 */
static void C_ccall f_1392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1392,6,t0,t1,t2,t3,t4,t5);}
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fix(0));}
else{
t7=C_slot(t4,C_fix(2));
t8=C_slot(t7,C_fix(7));
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1409,a[2]=t4,a[3]=t10,a[4]=t8,a[5]=t3,a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_1409(t12,t1,t5,t2,C_fix(0));}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1461,a[2]=t10,a[3]=t3,a[4]=t4,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_1461(t12,t1,t5,t2,C_fix(0));}}}

/* k1765 in k1755 */
static void C_ccall f_1766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:242: g312 */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1767 in k1755 */
static void C_fcall f_1769(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* extras.scm:248: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
/* extras.scm:242: g312 */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[6],((C_word*)t0)[7],t2);}}

/* k3224 in loop in rec in k3129 in k3127 in fprintf0 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:602: write */
t2=*((C_word*)lf[118]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k1236 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_fcall f_1237(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_setsubchar(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:113: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1177(t4,((C_word*)t0)[6],t3);}

/* k2304 in k2148 in wr in generic-write in k979 in k977 in k975 */
static void C_ccall f_2305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:357: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2533 in indent in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm:407: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2489(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_1785 in write-string in k979 in k977 in k975 */
static void C_ccall f_1785(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1785,3,t0,t1,t2);}
/* extras.scm:242: body301 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[21]+1));}

/* f_1789 in write-string in k979 in k977 in k975 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1789,2,t0,t1);}
/* extras.scm:242: def-port304 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* printf in k3099 in k979 in k977 in k975 */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3425r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3425r(t0,t1,t2,t3);}}

static void C_ccall f_3425r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm:633: fprintf0 */
f_3124(t1,lf[124],*((C_word*)lf[21]+1),t2,t3);}

/* k2563 in k2561 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2564,2,t0,t1);}
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2576,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:420: reverse-string-append */
t3=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* extras.scm:422: pp-pair */
t2=((C_word*)t0)[8];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[9]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2591,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:423: vector->list */
t3=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}}}

/* k2561 in pr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2562,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2564,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:414: generic-write */
f_1870(t3,((C_word*)t0)[6],((C_word*)t0)[11],C_SCHEME_FALSE,t4);}

/* fprintf in k3099 in k979 in k977 in k975 */
static void C_ccall f_3419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3419r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3419r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3419r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
/* extras.scm:630: fprintf0 */
f_3124(t1,lf[123],t2,t3,t4);}

/* pr in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2551(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2551,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2562,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
t11=C_a_i_minus(&a,2,((C_word*)t0)[6],t3);
t12=C_a_i_minus(&a,2,t11,t4);
t13=C_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm:413: max */
t14=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t10,t13,C_fix(50));}
else{
/* extras.scm:424: wr */
t8=((C_word*)((C_word*)t0)[7])[1];
f_1990(t8,t1,t2,t3);}}

/* k3443 in format in k3099 in k979 in k977 in k975 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* ##sys#read-string/port in k979 in k977 in k975 */
static void C_ccall f_1579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1579,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1583,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:187: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t4,t3,C_SCHEME_TRUE,lf[27]);}

/* loop in read-string! in k979 in k977 in k975 */
static void C_fcall f_1409(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1409,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1413,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:154: rdstring */
t6=((C_word*)t0)[4];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t5,((C_word*)t0)[2],t3,((C_word*)t0)[5],t2);}

/* read-lines in k979 in k977 in k975 */
static void C_ccall f_1284(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_1284r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1284r(t0,t1,t2);}}

static void C_ccall f_1284r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(9);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_slot(t2,C_fix(0)):*((C_word*)lf[2]+1));
t5=C_i_pairp(t2);
t6=(C_truep(t5)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
t7=C_i_pairp(t6);
t8=(C_truep(t7)?C_slot(t6,C_fix(0)):C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1294,a[2]=t8,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(t4))){
/* extras.scm:130: call-with-input-file */
t10=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,t4,t9);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1345,a[2]=t9,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:132: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t10,t4,C_SCHEME_TRUE,lf[19]);}}

/* format in k3099 in k979 in k977 in k975 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_3437r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3437r(t0,t1,t2,t3);}}

static void C_ccall f_3437r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(12);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3444,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
if(C_truep(t6)){
if(C_truep(C_booleanp(t2))){
C_apply(4,0,t1,*((C_word*)lf[124]+1),((C_word*)t4)[1]);}
else{
if(C_truep(C_i_stringp(t2))){
t7=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t8=C_set_block_item(t4,0,t7);
C_apply(4,0,t1,*((C_word*)lf[125]+1),((C_word*)t4)[1]);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3469,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:643: output-port? */
t8=*((C_word*)lf[128]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}}}
else{
C_apply(4,0,t1,*((C_word*)lf[125]+1),((C_word*)t4)[1]);}}

/* sprintf in k3099 in k979 in k977 in k975 */
static void C_ccall f_3431(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3431r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3431r(t0,t1,t2,t3);}}

static void C_ccall f_3431r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm:636: fprintf0 */
f_3124(t1,lf[125],C_SCHEME_FALSE,t2,t3);}

/* k1582 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1583,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[27]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:189: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t3,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1603,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:195: open-output-string */
t3=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1412 in loop in read-string! in k979 in k977 in k975 */
static void C_ccall f_1413(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(5));
t3=C_fixnum_plus(t2,t1);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t3);
t5=C_eqp(t1,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_i_not(((C_word*)t0)[5]);
t7=(C_truep(t6)?t6:C_fixnum_lessp(t1,((C_word*)t0)[5]));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[6],t1);
t9=(C_truep(((C_word*)t0)[5])?C_fixnum_difference(((C_word*)t0)[5],t1):C_SCHEME_FALSE);
t10=C_fixnum_plus(((C_word*)t0)[3],t1);
/* extras.scm:159: loop */
t11=((C_word*)((C_word*)t0)[7])[1];
f_1409(t11,((C_word*)t0)[4],t8,t9,t10);}
else{
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fixnum_plus(t1,((C_word*)t0)[3]));}}}

/* read-buffered in k979 in k977 in k975 */
static void C_ccall f_1670(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1670r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1670r(t0,t1,t2);}}

static void C_ccall f_1670r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1677,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:217: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t5,t4,C_SCHEME_TRUE,lf[31]);}

/* k1676 in read-buffered in k979 in k977 in k975 */
static void C_ccall f_1677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(9));
if(C_truep(t3)){
/* extras.scm:220: rb */
t4=t3;
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[32]);}}

/* k3091 in k3088 in generic-write in k979 in k977 in k975 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:558: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3467 in format in k3099 in k979 in k977 in k975 */
static void C_ccall f_3469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3469,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
C_apply(4,0,((C_word*)t0)[4],*((C_word*)lf[123]+1),((C_word*)((C_word*)t0)[3])[1]);}
else{
/* extras.scm:645: ##sys#error */
t2=*((C_word*)lf[116]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[126],lf[127],((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}}

/* k1589 in k1582 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:190: ##sys#read-string! */
t3=*((C_word*)lf[24]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],t1,((C_word*)t0)[4],C_fix(0));}

/* k1591 in k1589 in k1582 in read-string/port in k979 in k977 in k975 */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
/* extras.scm:193: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),t1);}}

/* k1220 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1221,2,t0,t1);}
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:104: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[5]);}
else{
/* extras.scm:106: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[4]);}}

/* k1228 in k1220 in k1188 in loop in k1171 in k1155 in k1153 in read-line in k979 in k977 in k975 */
static void C_ccall f_1229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:105: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[4]);}

/* k2510 in spaces in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:400: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2489(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* indent in pp in generic-write in k979 in k977 in k975 */
static void C_fcall f_2519(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2519,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep(C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t5,C_fix(1),C_make_character(10));}
else{
t4=C_a_i_minus(&a,2,t2,t3);
/* extras.scm:408: spaces */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2489(t5,t1,t4,t3);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2516 in spaces in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:401: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* read-token in k979 in k977 in k975 */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1696r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1696r(t0,t1,t2,t3);}}

static void C_ccall f_1696r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[2]+1):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1703,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:229: ##sys#check-input-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t6,t5,C_SCHEME_TRUE,lf[33]);}

/* k2656 in k2633 in pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2657,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm:436: proc */
t2=t1;
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2681,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:437: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[90]+1)))(3,*((C_word*)lf[90]+1),t2,((C_word*)t0)[9]);}}

/* k2540 in indent in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:407: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1972(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3477 in k3099 in k979 in k977 in k975 */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k1704 in k1702 in read-token in k979 in k977 in k975 */
static void C_ccall f_1705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1705,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1710,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1710(t5,((C_word*)t0)[4]);}

/* k1702 in read-token in k979 in k977 in k975 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:230: open-output-string */
t3=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2643 in k2633 in pp-expr in pp in generic-write in k979 in k977 in k975 */
static void C_ccall f_2644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:428: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2551(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k1713 in loop in k1704 in k1702 in read-token in k979 in k977 in k975 */
static void C_ccall f_1714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1720(2,t3,C_SCHEME_FALSE);}
else{
/* extras.scm:233: pred */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* loop in k1704 in k1702 in read-token in k979 in k977 in k975 */
static void C_fcall f_1710(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1710,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1714,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:232: ##sys#peek-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(3,*((C_word*)lf[34]+1),t2,((C_word*)t0)[4]);}

/* loop in read-string! in k979 in k977 in k975 */
static void C_fcall f_1461(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1461,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1465,a[2]=t4,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:162: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t5,((C_word*)t0)[4]);}

/* k1464 in loop in read-string! in k979 in k977 in k975 */
static void C_ccall f_1465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1468(t3,C_fix(0));}
else{
t3=C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[5],t1);
t4=t2;
f_1468(t4,C_fix(1));}}

/* k1466 in k1464 in loop in read-string! in k979 in k977 in k975 */
static void C_fcall f_1468(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[5],t1);
t6=(C_truep(((C_word*)t0)[4])?C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t7=C_fixnum_plus(((C_word*)t0)[2],t1);
/* extras.scm:170: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1461(t8,((C_word*)t0)[3],t5,t6,t7);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_plus(t1,((C_word*)t0)[2]));}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[233] = {
{"f_2930:extras_2escm",(void*)f_2930},
{"f_1728:extras_2escm",(void*)f_1728},
{"f_3313:extras_2escm",(void*)f_3313},
{"f_1722:extras_2escm",(void*)f_1722},
{"f_3317:extras_2escm",(void*)f_3317},
{"f_1720:extras_2escm",(void*)f_1720},
{"f_3311:extras_2escm",(void*)f_3311},
{"f_2936:extras_2escm",(void*)f_2936},
{"f_1162:extras_2escm",(void*)f_1162},
{"f_2924:extras_2escm",(void*)f_2924},
{"f_2087:extras_2escm",(void*)f_2087},
{"f_3089:extras_2escm",(void*)f_3089},
{"f_1748:extras_2escm",(void*)f_1748},
{"f_2576:extras_2escm",(void*)f_2576},
{"f_1294:extras_2escm",(void*)f_1294},
{"f_2942:extras_2escm",(void*)f_2942},
{"f_1756:extras_2escm",(void*)f_1756},
{"f_1753:extras_2escm",(void*)f_1753},
{"f_2635:extras_2escm",(void*)f_2635},
{"f_2628:extras_2escm",(void*)f_2628},
{"f_1154:extras_2escm",(void*)f_1154},
{"f_1156:extras_2escm",(void*)f_1156},
{"f_2591:extras_2escm",(void*)f_2591},
{"f_2596:extras_2escm",(void*)f_2596},
{"f_2594:extras_2escm",(void*)f_2594},
{"f_1614:extras_2escm",(void*)f_1614},
{"f_3351:extras_2escm",(void*)f_3351},
{"f_1610:extras_2escm",(void*)f_1610},
{"f_2311:extras_2escm",(void*)f_2311},
{"f_2313:extras_2escm",(void*)f_2313},
{"f_2317:extras_2escm",(void*)f_2317},
{"f_2340:extras_2escm",(void*)f_2340},
{"toplevel:extras_2escm",(void*)C_extras_toplevel},
{"f_2348:extras_2escm",(void*)f_2348},
{"f_978:extras_2escm",(void*)f_978},
{"f_976:extras_2escm",(void*)f_976},
{"f_1631:extras_2escm",(void*)f_1631},
{"f_2334:extras_2escm",(void*)f_2334},
{"f_1146:extras_2escm",(void*)f_1146},
{"f_982:extras_2escm",(void*)f_982},
{"f_980:extras_2escm",(void*)f_980},
{"f_1605:extras_2escm",(void*)f_1605},
{"f_1603:extras_2escm",(void*)f_1603},
{"f_2366:extras_2escm",(void*)f_2366},
{"f_1043:extras_2escm",(void*)f_1043},
{"f_998:extras_2escm",(void*)f_998},
{"f_2354:extras_2escm",(void*)f_2354},
{"f_1625:extras_2escm",(void*)f_1625},
{"f_2690:extras_2escm",(void*)f_2690},
{"f_2381:extras_2escm",(void*)f_2381},
{"f_2412:extras_2escm",(void*)f_2412},
{"f_2426:extras_2escm",(void*)f_2426},
{"f_2686:extras_2escm",(void*)f_2686},
{"f_2681:extras_2escm",(void*)f_2681},
{"f_1109:extras_2escm",(void*)f_1109},
{"f_1103:extras_2escm",(void*)f_1103},
{"f_2418:extras_2escm",(void*)f_2418},
{"f_2430:extras_2escm",(void*)f_2430},
{"f_2435:extras_2escm",(void*)f_2435},
{"f_1523:extras_2escm",(void*)f_1523},
{"f_1007:extras_2escm",(void*)f_1007},
{"f_1005:extras_2escm",(void*)f_1005},
{"f_2449:extras_2escm",(void*)f_2449},
{"f_2446:extras_2escm",(void*)f_2446},
{"f_2398:extras_2escm",(void*)f_2398},
{"f_1177:extras_2escm",(void*)f_1177},
{"f_1172:extras_2escm",(void*)f_1172},
{"f_1540:extras_2escm",(void*)f_1540},
{"f_1025:extras_2escm",(void*)f_1025},
{"f_2469:extras_2escm",(void*)f_2469},
{"f_3103:extras_2escm",(void*)f_3103},
{"f_3101:extras_2escm",(void*)f_3101},
{"f_2485:extras_2escm",(void*)f_2485},
{"f_2458:extras_2escm",(void*)f_2458},
{"f_3117:extras_2escm",(void*)f_3117},
{"f_2033:extras_2escm",(void*)f_2033},
{"f_3114:extras_2escm",(void*)f_3114},
{"f_2035:extras_2escm",(void*)f_2035},
{"f_1933:extras_2escm",(void*)f_1933},
{"f_2471:extras_2escm",(void*)f_2471},
{"f_2489:extras_2escm",(void*)f_2489},
{"f_3107:extras_2escm",(void*)f_3107},
{"f_3109:extras_2escm",(void*)f_3109},
{"f_1982:extras_2escm",(void*)f_1982},
{"f_2477:extras_2escm",(void*)f_2477},
{"f_2056:extras_2escm",(void*)f_2056},
{"f_3174:extras_2escm",(void*)f_3174},
{"f_2912:extras_2escm",(void*)f_2912},
{"f_3166:extras_2escm",(void*)f_3166},
{"f_2918:extras_2escm",(void*)f_2918},
{"f_2904:extras_2escm",(void*)f_2904},
{"f_2076:extras_2escm",(void*)f_2076},
{"f_2906:extras_2escm",(void*)f_2906},
{"f_1189:extras_2escm",(void*)f_1189},
{"f_3130:extras_2escm",(void*)f_3130},
{"f_3132:extras_2escm",(void*)f_3132},
{"f_1087:extras_2escm",(void*)f_1087},
{"f_2061:extras_2escm",(void*)f_2061},
{"f_2769:extras_2escm",(void*)f_2769},
{"f_2079:extras_2escm",(void*)f_2079},
{"f_3408:extras_2escm",(void*)f_3408},
{"f_1091:extras_2escm",(void*)f_1091},
{"f_2172:extras_2escm",(void*)f_2172},
{"f_3112:extras_2escm",(void*)f_3112},
{"f_2164:extras_2escm",(void*)f_2164},
{"f_2166:extras_2escm",(void*)f_2166},
{"f_3124:extras_2escm",(void*)f_3124},
{"f_2783:extras_2escm",(void*)f_2783},
{"f_2781:extras_2escm",(void*)f_2781},
{"f_1847:extras_2escm",(void*)f_1847},
{"f_3128:extras_2escm",(void*)f_3128},
{"f_2787:extras_2escm",(void*)f_2787},
{"f_2772:extras_2escm",(void*)f_2772},
{"f_3192:extras_2escm",(void*)f_3192},
{"f_2778:extras_2escm",(void*)f_2778},
{"f_1856:extras_2escm",(void*)f_1856},
{"f_2976:extras_2escm",(void*)f_2976},
{"f_2132:extras_2escm",(void*)f_2132},
{"f_1870:extras_2escm",(void*)f_1870},
{"f_2961:extras_2escm",(void*)f_2961},
{"f_2967:extras_2escm",(void*)f_2967},
{"f_1874:extras_2escm",(void*)f_1874},
{"f_2400:extras_2escm",(void*)f_2400},
{"f_2129:extras_2escm",(void*)f_2129},
{"f_2877:extras_2escm",(void*)f_2877},
{"f_2406:extras_2escm",(void*)f_2406},
{"f_3158:extras_2escm",(void*)f_3158},
{"f_2986:extras_2escm",(void*)f_2986},
{"f_3153:extras_2escm",(void*)f_3153},
{"f_2866:extras_2escm",(void*)f_2866},
{"f_1972:extras_2escm",(void*)f_1972},
{"f_1828:extras_2escm",(void*)f_1828},
{"f_1821:extras_2escm",(void*)f_1821},
{"f_2010:extras_2escm",(void*)f_2010},
{"f_2263:extras_2escm",(void*)f_2263},
{"f_1830:extras_2escm",(void*)f_1830},
{"f_1990:extras_2escm",(void*)f_1990},
{"f_1994:extras_2escm",(void*)f_1994},
{"f_2001:extras_2escm",(void*)f_2001},
{"f_2211:extras_2escm",(void*)f_2211},
{"f_2018:extras_2escm",(void*)f_2018},
{"f_2709:extras_2escm",(void*)f_2709},
{"f_2707:extras_2escm",(void*)f_2707},
{"f_2889:extras_2escm",(void*)f_2889},
{"f_2202:extras_2escm",(void*)f_2202},
{"f_2204:extras_2escm",(void*)f_2204},
{"f_2184:extras_2escm",(void*)f_2184},
{"f_2724:extras_2escm",(void*)f_2724},
{"f_2230:extras_2escm",(void*)f_2230},
{"f_2233:extras_2escm",(void*)f_2233},
{"f_2236:extras_2escm",(void*)f_2236},
{"f_2713:extras_2escm",(void*)f_2713},
{"f_3294:extras_2escm",(void*)f_3294},
{"f_2718:extras_2escm",(void*)f_2718},
{"f_3291:extras_2escm",(void*)f_3291},
{"f_1368:extras_2escm",(void*)f_1368},
{"f_3264:extras_2escm",(void*)f_3264},
{"f_3261:extras_2escm",(void*)f_3261},
{"f_2743:extras_2escm",(void*)f_2743},
{"f_2748:extras_2escm",(void*)f_2748},
{"f_2156:extras_2escm",(void*)f_2156},
{"f_2150:extras_2escm",(void*)f_2150},
{"f_1304:extras_2escm",(void*)f_1304},
{"f_3203:extras_2escm",(void*)f_3203},
{"f_1316:extras_2escm",(void*)f_1316},
{"f_3237:extras_2escm",(void*)f_3237},
{"f_2805:extras_2escm",(void*)f_2805},
{"f_2808:extras_2escm",(void*)f_2808},
{"f_2281:extras_2escm",(void*)f_2281},
{"f_2284:extras_2escm",(void*)f_2284},
{"f_2822:extras_2escm",(void*)f_2822},
{"f_1345:extras_2escm",(void*)f_1345},
{"f_3249:extras_2escm",(void*)f_3249},
{"f_1250:extras_2escm",(void*)f_1250},
{"f_1257:extras_2escm",(void*)f_1257},
{"f_3279:extras_2escm",(void*)f_3279},
{"f_3276:extras_2escm",(void*)f_3276},
{"f_1901:extras_2escm",(void*)f_1901},
{"f_2843:extras_2escm",(void*)f_2843},
{"f_2840:extras_2escm",(void*)f_2840},
{"f_2257:extras_2escm",(void*)f_2257},
{"f_2857:extras_2escm",(void*)f_2857},
{"f_1374:extras_2escm",(void*)f_1374},
{"f_2245:extras_2escm",(void*)f_2245},
{"f_2242:extras_2escm",(void*)f_2242},
{"f_1381:extras_2escm",(void*)f_1381},
{"f_1511:extras_2escm",(void*)f_1511},
{"f_1392:extras_2escm",(void*)f_1392},
{"f_1766:extras_2escm",(void*)f_1766},
{"f_1769:extras_2escm",(void*)f_1769},
{"f_3225:extras_2escm",(void*)f_3225},
{"f_1237:extras_2escm",(void*)f_1237},
{"f_2305:extras_2escm",(void*)f_2305},
{"f_2535:extras_2escm",(void*)f_2535},
{"f_1785:extras_2escm",(void*)f_1785},
{"f_1789:extras_2escm",(void*)f_1789},
{"f_3425:extras_2escm",(void*)f_3425},
{"f_2564:extras_2escm",(void*)f_2564},
{"f_2562:extras_2escm",(void*)f_2562},
{"f_3419:extras_2escm",(void*)f_3419},
{"f_2551:extras_2escm",(void*)f_2551},
{"f_3444:extras_2escm",(void*)f_3444},
{"f_1579:extras_2escm",(void*)f_1579},
{"f_1409:extras_2escm",(void*)f_1409},
{"f_1284:extras_2escm",(void*)f_1284},
{"f_3437:extras_2escm",(void*)f_3437},
{"f_3431:extras_2escm",(void*)f_3431},
{"f_1583:extras_2escm",(void*)f_1583},
{"f_1413:extras_2escm",(void*)f_1413},
{"f_1670:extras_2escm",(void*)f_1670},
{"f_1677:extras_2escm",(void*)f_1677},
{"f_3092:extras_2escm",(void*)f_3092},
{"f_3469:extras_2escm",(void*)f_3469},
{"f_1590:extras_2escm",(void*)f_1590},
{"f_1592:extras_2escm",(void*)f_1592},
{"f_1221:extras_2escm",(void*)f_1221},
{"f_1229:extras_2escm",(void*)f_1229},
{"f_2511:extras_2escm",(void*)f_2511},
{"f_2519:extras_2escm",(void*)f_2519},
{"f_2517:extras_2escm",(void*)f_2517},
{"f_1696:extras_2escm",(void*)f_1696},
{"f_2657:extras_2escm",(void*)f_2657},
{"f_2541:extras_2escm",(void*)f_2541},
{"f_3478:extras_2escm",(void*)f_3478},
{"f_1705:extras_2escm",(void*)f_1705},
{"f_1703:extras_2escm",(void*)f_1703},
{"f_2644:extras_2escm",(void*)f_2644},
{"f_1714:extras_2escm",(void*)f_1714},
{"f_1710:extras_2escm",(void*)f_1710},
{"f_1461:extras_2escm",(void*)f_1461},
{"f_1465:extras_2escm",(void*)f_1465},
{"f_1468:extras_2escm",(void*)f_1468},
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
o|eliminated procedure checks: 37 
o|specializations:
o|  11 (eqv? (not float) *)
o|  1 (current-output-port)
o|  3 (make-string fixnum char)
o|  1 (assq * list)
o|  5 (car pair)
o|  13 (cdr pair)
o|  1 (make-string fixnum)
o|  23 (eqv? * (not float))
o|  1 (fp/ float float)
o|Removed `not' forms: 5 
o|inlining procedure: k1010 
o|inlining procedure: k1010 
o|inlining procedure: k1032 
o|inlining procedure: k1032 
o|inlining procedure: k1038 
o|inlining procedure: k1038 
o|inlining procedure: k1090 
o|substituted constant variable: a1104 
o|inlining procedure: k1090 
o|inlining procedure: k1114 
o|inlining procedure: k1114 
o|removed side-effect free assignment to unused variable: fixup103 
o|inlining procedure: k1159 
o|inlining procedure: k1159 
o|inlining procedure: k1180 
o|inlining procedure: k1180 
o|inlining procedure: k1196 
o|inlining procedure: k1196 
o|inlining procedure: k1205 
o|inlining procedure: k1205 
o|inlining procedure: k1222 
o|inlining procedure: k1222 
o|substituted constant variable: a1259 
o|substituted constant variable: a1261 
o|inlining procedure: k1268 
o|inlining procedure: k1268 
o|inlining procedure: k1307 
o|inlining procedure: k1307 
o|inlining procedure: k1335 
o|inlining procedure: k1335 
o|inlining procedure: k1395 
o|inlining procedure: k1395 
o|inlining procedure: k1416 
o|inlining procedure: k1416 
o|inlining procedure: k1469 
o|inlining procedure: k1469 
o|inlining procedure: k1584 
o|inlining procedure: k1584 
o|inlining procedure: k1615 
o|inlining procedure: k1615 
o|substituted constant variable: a1629 
o|inlining procedure: k1640 
o|inlining procedure: k1640 
o|inlining procedure: k1680 
o|inlining procedure: k1680 
o|inlining procedure: k1715 
o|inlining procedure: k1715 
o|inlining procedure: k1765 
o|inlining procedure: k1765 
o|inlining procedure: k1793 
o|inlining procedure: k1793 
o|inlining procedure: k1831 
o|inlining procedure: k1831 
o|inlining procedure: k1894 
o|contracted procedure: "(extras.scm:285) length1?366" 
o|inlining procedure: k1881 
o|inlining procedure: k1881 
o|inlining procedure: k1894 
o|inlining procedure: k1907 
o|inlining procedure: k1907 
o|substituted constant variable: a1919 
o|substituted constant variable: a1921 
o|substituted constant variable: a1923 
o|substituted constant variable: a1925 
o|inlining procedure: k1939 
o|inlining procedure: k1939 
o|inlining procedure: k1951 
o|inlining procedure: k1951 
o|substituted constant variable: a1964 
o|substituted constant variable: a1966 
o|substituted constant variable: a1968 
o|substituted constant variable: a1970 
o|inlining procedure: k1975 
o|inlining procedure: k1975 
o|inlining procedure: k1997 
o|inlining procedure: "(extras.scm:306) read-macro-body360" 
o|inlining procedure: k1997 
o|inlining procedure: k2021 
o|contracted procedure: k2040 
o|inlining procedure: k2038 
o|inlining procedure: k2062 
o|inlining procedure: k2062 
o|inlining procedure: k2038 
o|inlining procedure: k2021 
o|inlining procedure: k2091 
o|inlining procedure: k2091 
o|inlining procedure: k2109 
o|inlining procedure: k2109 
o|inlining procedure: k2133 
o|inlining procedure: k2143 
o|inlining procedure: k2143 
o|inlining procedure: k2133 
o|inlining procedure: k2157 
o|inlining procedure: k2157 
o|inlining procedure: k2185 
o|inlining procedure: k2207 
o|substituted constant variable: a2238 
o|inlining procedure: k2239 
o|inlining procedure: k2239 
o|inlining procedure: k2207 
o|inlining procedure: k2185 
o|inlining procedure: k2297 
o|substituted constant variable: a2306 
o|inlining procedure: k2297 
o|inlining procedure: k2327 
o|inlining procedure: k2327 
o|inlining procedure: k2356 
o|inlining procedure: k2356 
o|inlining procedure: k2367 
o|inlining procedure: k2367 
o|inlining procedure: k2382 
o|inlining procedure: k2382 
o|inlining procedure: k2407 
o|inlining procedure: k2407 
o|inlining procedure: k2438 
o|inlining procedure: k2438 
o|inlining procedure: k2465 
o|inlining procedure: k2465 
o|inlining procedure: k2492 
o|inlining procedure: k2492 
o|inlining procedure: k2522 
o|inlining procedure: k2530 
o|inlining procedure: k2530 
o|substituted constant variable: a2542 
o|substituted constant variable: a2543 
o|inlining procedure: k2522 
o|inlining procedure: k2554 
o|inlining procedure: k2577 
o|inlining procedure: k2577 
o|substituted constant variable: max-expr-width488 
o|inlining procedure: k2554 
o|inlining procedure: k2631 
o|inlining procedure: "(extras.scm:428) read-macro-body360" 
o|inlining procedure: k2631 
o|inlining procedure: k2658 
o|inlining procedure: k2658 
o|substituted constant variable: max-call-head-width487 
o|inlining procedure: k2691 
o|inlining procedure: k2691 
o|inlining procedure: k2727 
o|inlining procedure: k2755 
o|inlining procedure: k2755 
o|inlining procedure: k2727 
o|inlining procedure: k2790 
o|inlining procedure: k2790 
o|inlining procedure: k2825 
o|inlining procedure: k2825 
o|inlining procedure: k2867 
o|substituted constant variable: indent-general486 
o|inlining procedure: k2867 
o|substituted constant variable: indent-general486 
o|inlining procedure: k2979 
o|inlining procedure: k2979 
o|inlining procedure: k2995 
o|inlining procedure: k2995 
o|inlining procedure: k3007 
o|inlining procedure: k3007 
o|inlining procedure: k3021 
o|inlining procedure: k3021 
o|substituted constant variable: a3034 
o|substituted constant variable: a3036 
o|substituted constant variable: a3038 
o|substituted constant variable: a3043 
o|substituted constant variable: a3045 
o|substituted constant variable: a3047 
o|substituted constant variable: a3049 
o|substituted constant variable: a3054 
o|substituted constant variable: a3056 
o|inlining procedure: k3059 
o|inlining procedure: k3059 
o|substituted constant variable: a3071 
o|substituted constant variable: a3073 
o|substituted constant variable: a3075 
o|substituted constant variable: a3077 
o|inlining procedure: k3081 
o|substituted constant variable: a3093 
o|substituted constant variable: a3094 
o|inlining procedure: k3081 
o|contracted procedure: k3136 
o|inlining procedure: k3133 
o|inlining procedure: k3133 
o|inlining procedure: k3177 
o|inlining procedure: k3177 
o|inlining procedure: k3195 
o|inlining procedure: k3195 
o|inlining procedure: k3214 
o|inlining procedure: k3214 
o|inlining procedure: k3238 
o|inlining procedure: k3238 
o|inlining procedure: k3265 
o|inlining procedure: k3265 
o|inlining procedure: k3295 
o|inlining procedure: k3295 
o|inlining procedure: k3318 
o|inlining procedure: k3318 
o|inlining procedure: k3338 
o|inlining procedure: k3354 
o|inlining procedure: k3354 
o|inlining procedure: k3338 
o|substituted constant variable: a3376 
o|substituted constant variable: a3378 
o|substituted constant variable: a3380 
o|substituted constant variable: a3382 
o|substituted constant variable: a3384 
o|substituted constant variable: a3386 
o|substituted constant variable: a3388 
o|substituted constant variable: a3390 
o|substituted constant variable: a3392 
o|substituted constant variable: a3394 
o|substituted constant variable: a3396 
o|contracted procedure: k3445 
o|inlining procedure: k3443 
o|inlining procedure: k3454 
o|propagated global variable: r34553660 sprintf 
o|inlining procedure: k3454 
o|inlining procedure: k3443 
o|propagated global variable: a34423662 sprintf 
o|replaced variables: 445 
o|removed binding forms: 90 
o|substituted constant variable: r10333482 
o|converted assignments to bindings: (slurp82) 
o|substituted constant variable: r11153493 
o|substituted constant variable: r12693506 
o|converted assignments to bindings: (doread146) 
o|substituted constant variable: f_13943511 
o|substituted constant variable: r16813530 
o|substituted constant variable: f_18803541 
o|substituted constant variable: r18953542 
o|removed side-effect free assignment to unused variable: read-macro-body360 
o|substituted constant variable: r19403545 
o|substituted constant variable: r19523547 
o|substituted constant variable: f_19743550 
o|substituted constant variable: a21423569 
o|substituted constant variable: a21423570 
o|substituted constant variable: a23553584 
o|substituted constant variable: a23553585 
o|substituted constant variable: r25313600 
o|substituted constant variable: f_25213601 
o|substituted constant variable: r26923616 
o|substituted constant variable: f_27263620 
o|removed side-effect free assignment to unused variable: indent-general486 
o|removed side-effect free assignment to unused variable: max-call-head-width487 
o|removed side-effect free assignment to unused variable: max-expr-width488 
o|inlining procedure: k3202 
o|inlining procedure: k3443 
o|propagated global variable: a34423714 printf 
o|inlining procedure: k3443 
o|propagated global variable: a34423715 sprintf 
o|inlining procedure: k3443 
o|propagated global variable: a34423716 fprintf 
o|simplifications: ((let . 2)) 
o|replaced variables: 13 
o|removed binding forms: 420 
o|inlining procedure: k2947 
o|inlining procedure: k3406 
o|removed binding forms: 43 
o|substituted constant variable: named?6013739 
o|substituted constant variable: r34073746 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 49) (##core#call . 271)) 
o|  call simplifications:
o|    apply	5
o|    char-upcase
o|    char-whitespace?	2
o|    ##sys#check-list
o|    <
o|    >	5
o|    -	5
o|    vector?	2
o|    boolean?	2
o|    symbol?	3
o|    procedure?
o|    char?
o|    ##sys#generic-structure?
o|    ##sys#byte
o|    fx>	2
o|    number->string	2
o|    string-ref
o|    string-length	4
o|    +	12
o|    integer->char
o|    char->integer	2
o|    ##sys#size	4
o|    fx<=
o|    ##sys#setislot
o|    not	2
o|    fx<	7
o|    ##sys#check-string	4
o|    string?	3
o|    fx-	5
o|    pair?	17
o|    cadr	3
o|    ##sys#slot	20
o|    char=?	3
o|    fx=
o|    eq?	44
o|    ##sys#check-exact	7
o|    car	23
o|    null?	28
o|    cdr	10
o|    eof-object?	7
o|    fx>=	5
o|    fx+	16
o|    cons	5
o|contracted procedure: k1080 
o|contracted procedure: k985 
o|contracted procedure: k1074 
o|contracted procedure: k987 
o|contracted procedure: k1068 
o|contracted procedure: k989 
o|contracted procedure: k1062 
o|contracted procedure: k991 
o|contracted procedure: k1056 
o|contracted procedure: k993 
o|contracted procedure: k1050 
o|contracted procedure: k995 
o|contracted procedure: k1012 
o|contracted procedure: k1014 
o|contracted procedure: k1027 
o|contracted procedure: k1030 
o|contracted procedure: k1092 
o|contracted procedure: k1094 
o|contracted procedure: k1112 
o|contracted procedure: k1117 
o|contracted procedure: k1149 
o|contracted procedure: k1151 
o|contracted procedure: k1266 
o|contracted procedure: k1157 
o|contracted procedure: k1169 
o|contracted procedure: k1182 
o|contracted procedure: k1193 
o|contracted procedure: k1199 
o|contracted procedure: k1208 
o|contracted procedure: k1217 
o|contracted procedure: k1225 
o|contracted procedure: k1242 
o|contracted procedure: k1244 
o|contracted procedure: k1252 
o|contracted procedure: k1278 
o|contracted procedure: k1271 
o|contracted procedure: k1361 
o|contracted procedure: k1287 
o|contracted procedure: k1355 
o|contracted procedure: k1289 
o|contracted procedure: k1349 
o|contracted procedure: k1291 
o|contracted procedure: k1300 
o|contracted procedure: k1309 
o|contracted procedure: k1320 
o|contracted procedure: k1330 
o|contracted procedure: k1333 
o|contracted procedure: k1338 
o|contracted procedure: k1371 
o|contracted procedure: k1375 
o|contracted procedure: k1386 
o|contracted procedure: k1377 
o|contracted procedure: k1397 
o|contracted procedure: k1508 
o|contracted procedure: k1400 
o|contracted procedure: k1455 
o|contracted procedure: k1452 
o|contracted procedure: k1414 
o|contracted procedure: k1419 
o|contracted procedure: k1425 
o|contracted procedure: k1427 
o|contracted procedure: k1434 
o|contracted procedure: k1437 
o|contracted procedure: k1440 
o|contracted procedure: k1472 
o|contracted procedure: k1478 
o|contracted procedure: k1480 
o|contracted procedure: k1487 
o|contracted procedure: k1490 
o|contracted procedure: k1493 
o|contracted procedure: k1504 
o|contracted procedure: k1572 
o|contracted procedure: k1514 
o|contracted procedure: k1566 
o|contracted procedure: k1516 
o|contracted procedure: k1560 
o|contracted procedure: k1518 
o|contracted procedure: k1554 
o|contracted procedure: k1520 
o|contracted procedure: k1524 
o|contracted procedure: k1526 
o|contracted procedure: k1528 
o|contracted procedure: k1533 
o|contracted procedure: k1542 
o|contracted procedure: k1549 
o|contracted procedure: k1587 
o|contracted procedure: k1596 
o|contracted procedure: k1618 
o|contracted procedure: k1663 
o|contracted procedure: k1634 
o|contracted procedure: k1657 
o|contracted procedure: k1636 
o|contracted procedure: k1651 
o|contracted procedure: k1638 
o|contracted procedure: k1645 
o|contracted procedure: k1640 
o|contracted procedure: k1689 
o|contracted procedure: k1673 
o|contracted procedure: k1687 
o|contracted procedure: k1678 
o|contracted procedure: k1741 
o|contracted procedure: k1699 
o|contracted procedure: k1732 
o|contracted procedure: k1751 
o|contracted procedure: k1757 
o|contracted procedure: k1780 
o|contracted procedure: k1759 
o|contracted procedure: k1777 
o|contracted procedure: k1796 
o|contracted procedure: k1802 
o|contracted procedure: k1808 
o|contracted procedure: k1814 
o|contracted procedure: k1840 
o|contracted procedure: k1824 
o|contracted procedure: k1834 
o|contracted procedure: k1863 
o|contracted procedure: k1850 
o|contracted procedure: k1853 
o|contracted procedure: k1861 
o|contracted procedure: k1891 
o|contracted procedure: k1897 
o|contracted procedure: k1883 
o|contracted procedure: k1905 
o|contracted procedure: k1910 
o|contracted procedure: k1936 
o|contracted procedure: k1942 
o|contracted procedure: k1948 
o|contracted procedure: k1954 
o|contracted procedure: k1960 
o|contracted procedure: k1987 
o|contracted procedure: k2006 
o|contracted procedure: k2023 
o|contracted procedure: k2046 
o|contracted procedure: k2065 
o|contracted procedure: k2094 
o|contracted procedure: k2103 
o|contracted procedure: k2112 
o|contracted procedure: k2121 
o|contracted procedure: k2136 
o|contracted procedure: k2160 
o|contracted procedure: k2176 
o|contracted procedure: k2188 
o|contracted procedure: k2212 
o|contracted procedure: k2217 
o|contracted procedure: k2219 
o|contracted procedure: k2226 
o|contracted procedure: k2250 
o|contracted procedure: k2253 
o|contracted procedure: k2259 
o|contracted procedure: k2271 
o|contracted procedure: k2289 
o|contracted procedure: k2294 
o|contracted procedure: k2308 
o|contracted procedure: k2322 
o|contracted procedure: k2330 
o|contracted procedure: k2344 
o|contracted procedure: k2358 
o|contracted procedure: k2482 
o|contracted procedure: k2385 
o|contracted procedure: k2394 
o|contracted procedure: k2420 
o|contracted procedure: k2427 
o|contracted procedure: k2440 
o|contracted procedure: k2443 
o|contracted procedure: k2454 
o|contracted procedure: k2459 
o|contracted procedure: k2494 
o|contracted procedure: k2500 
o|contracted procedure: k2507 
o|contracted procedure: k2527 
o|contracted procedure: k2548 
o|contracted procedure: k2556 
o|contracted procedure: k2558 
o|contracted procedure: k2568 
o|contracted procedure: k2580 
o|contracted procedure: k2599 
o|contracted procedure: k2610 
o|contracted procedure: k2603 
o|contracted procedure: k2619 
o|contracted procedure: k2616 
o|contracted procedure: k2613 
o|contracted procedure: k2640 
o|contracted procedure: k2648 
o|contracted procedure: k2653 
o|contracted procedure: k2677 
o|contracted procedure: k2667 
o|contracted procedure: k2700 
o|contracted procedure: k2703 
o|contracted procedure: k2732 
o|contracted procedure: k2749 
o|contracted procedure: k2736 
o|contracted procedure: k2758 
o|contracted procedure: k2774 
o|contracted procedure: k2792 
o|contracted procedure: k2795 
o|contracted procedure: k2809 
o|contracted procedure: k2798 
o|contracted procedure: k2827 
o|contracted procedure: k2830 
o|contracted procedure: k2844 
o|contracted procedure: k2833 
o|contracted procedure: k2862 
o|contracted procedure: k2870 
o|contracted procedure: k2873 
o|contracted procedure: k2882 
o|contracted procedure: k2885 
o|contracted procedure: k2894 
o|contracted procedure: k2897 
o|contracted procedure: k2945 
o|contracted procedure: k2952 
o|contracted procedure: k2947 
o|contracted procedure: k2982 
o|contracted procedure: k2990 
o|contracted procedure: k2992 
o|contracted procedure: k2998 
o|contracted procedure: k3004 
o|contracted procedure: k3010 
o|contracted procedure: k3012 
o|contracted procedure: k3018 
o|contracted procedure: k3024 
o|contracted procedure: k3030 
o|contracted procedure: k3057 
o|contracted procedure: k3062 
o|contracted procedure: k3118 
o|contracted procedure: k3145 
o|contracted procedure: k3161 
o|contracted procedure: k3163 
o|contracted procedure: k3170 
o|contracted procedure: k3182 
o|contracted procedure: k3185 
o|contracted procedure: k3197 
o|contracted procedure: k3400 
o|contracted procedure: k3207 
o|contracted procedure: k3212 
o|contracted procedure: k3217 
o|contracted procedure: k3229 
o|contracted procedure: k3241 
o|contracted procedure: k3253 
o|contracted procedure: k3268 
o|contracted procedure: k3283 
o|contracted procedure: k3298 
o|contracted procedure: k3307 
o|contracted procedure: k3314 
o|contracted procedure: k3321 
o|contracted procedure: k3330 
o|contracted procedure: k3341 
o|contracted procedure: k3356 
o|contracted procedure: k3366 
o|contracted procedure: k3451 
o|contracted procedure: k3457 
o|contracted procedure: k3461 
o|contracted procedure: k3471 
o|simplifications: ((let . 48)) 
o|removed binding forms: 252 
o|inlining procedure: k1090 
o|inlining procedure: k1530 
o|inlining procedure: k1530 
o|replaced variables: 21 
o|simplifications: ((let . 8) (if . 1)) 
o|removed binding forms: 21 
o|contracted procedure: k3332 
o|removed binding forms: 1 
o|direct leaf routine/allocation: read-macro-prefix361 0 
o|direct leaf routine/allocation: fetch678 0 
o|contracted procedure: "(extras.scm:306) k2012" 
o|contracted procedure: "(extras.scm:429) k2646" 
o|contracted procedure: "(extras.scm:598) k3200" 
o|contracted procedure: "(extras.scm:600) k3210" 
o|contracted procedure: "(extras.scm:618) k3348" 
o|contracted procedure: "(extras.scm:620) k3363" 
o|removed binding forms: 6 
o|direct leaf routine/allocation: skip700 0 
o|inlining procedure: k3202 
o|converted assignments to bindings: (skip700) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (fprintf0 rec673 next679 loop684 k3106 pp364 k2984 tail1547 tail3549 tail2548 indent470 loop530 pp-down475 style489 pp-call473 pp-general476 pr471 generic-write pp-list474 spaces469 doloop454455 k2209 loop420 wr-expr404 loop410 read-macro?359 wr-lst405 out362 wr363 k1899 k1767 loop290 loop242 k1538 k1466 loop190 loop176 loop148 k1153 k1236 loop123 doloop8485) 
o|calls to known targets: 182 
o|identified direct recursive calls: f_3351 1 
o|identified direct recursive calls: f_3192 1 
o|fast box initializations: 43 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1933 
o|dropping unused closure argument: f_3124 
o|dropping unused closure argument: f_1870 
o|dropping unused closure argument: f_1874 
*/
/* end of file */
