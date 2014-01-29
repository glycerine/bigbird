/* Generated from srfi-69.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:46
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: srfi-69.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-69.c -extend ./private-namespace.scm
   unit: srfi_2d69
*/

#include "chicken.h"

#define C_rnd_fix() (C_fix(rand()))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[119];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,110,117,109,98,101,114,45,104,97,115,104,45,104,111,111,107,32,111,98,106,57,56,32,114,110,100,57,57,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,15),40,102,95,49,55,53,52,32,102,120,110,49,50,53,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,22),40,102,95,49,55,52,53,32,104,115,104,49,50,48,32,108,105,109,49,50,49,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,23),40,102,95,49,55,57,53,32,98,121,116,118,101,99,49,52,55,32,105,49,52,56,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,23),40,102,95,49,56,48,55,32,98,121,116,118,101,99,49,53,49,32,105,49,53,50,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,23),40,102,95,49,56,49,57,32,98,121,116,118,101,99,49,53,53,32,105,49,53,54,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,23),40,102,95,49,56,51,49,32,98,121,116,118,101,99,49,53,57,32,105,49,54,48,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,23),40,102,95,49,56,52,51,32,98,121,116,118,101,99,49,54,51,32,105,49,54,52,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,23),40,102,95,49,56,53,53,32,98,121,116,118,101,99,49,54,55,32,105,49,54,56,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,23),40,102,95,49,56,54,55,32,98,121,116,118,101,99,49,55,49,32,105,49,55,50,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,23),40,102,95,49,56,55,54,32,98,121,116,118,101,99,49,55,53,32,105,49,55,54,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,15),40,102,95,49,56,56,49,32,119,114,100,49,55,57,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,22),40,102,95,49,55,56,49,32,111,98,106,49,51,53,32,114,110,100,49,51,54,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,22),40,102,95,49,55,55,49,32,111,98,106,49,50,56,32,114,110,100,49,50,57,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,32),40,110,117,109,98,101,114,45,104,97,115,104,32,111,98,106,49,48,54,32,46,32,116,109,112,49,48,53,49,48,55,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,15),40,102,95,49,57,52,56,32,102,120,110,50,48,55,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,22),40,102,95,49,57,51,57,32,104,115,104,50,48,50,32,108,105,109,50,48,51,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,22),40,102,95,49,57,54,53,32,111,98,106,50,49,48,32,114,110,100,50,49,49,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,36),40,111,98,106,101,99,116,45,117,105,100,45,104,97,115,104,32,111,98,106,49,56,56,32,46,32,116,109,112,49,56,55,49,56,57,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,15),40,102,95,50,48,50,49,32,102,120,110,50,51,56,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,22),40,102,95,50,48,49,50,32,104,115,104,50,51,51,32,108,105,109,50,51,52,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,22),40,102,95,50,48,52,48,32,115,116,114,50,52,53,32,114,110,100,50,52,54,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,102,95,50,48,51,56,32,111,98,106,50,52,49,32,114,110,100,50,52,50,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,32),40,115,121,109,98,111,108,45,104,97,115,104,32,111,98,106,50,49,57,32,46,32,116,109,112,50,49,56,50,50,48,41};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,99,104,101,99,107,45,107,101,121,119,111,114,100,32,120,50,53,48,32,46,32,121,50,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,15),40,102,95,50,49,50,52,32,102,120,110,50,55,56,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,22),40,102,95,50,49,49,53,32,104,115,104,50,55,51,32,108,105,109,50,55,52,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,22),40,102,95,50,49,52,51,32,115,116,114,50,56,53,32,114,110,100,50,56,54,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,22),40,102,95,50,49,52,49,32,111,98,106,50,56,49,32,114,110,100,50,56,50,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,33),40,107,101,121,119,111,114,100,45,104,97,115,104,32,111,98,106,50,53,57,32,46,32,116,109,112,50,53,56,50,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,15),40,102,95,50,51,48,49,32,102,120,110,51,51,53,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,22),40,102,95,50,50,57,50,32,104,115,104,51,51,48,32,108,105,109,51,51,49,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,22),40,102,95,50,50,52,54,32,115,116,114,51,48,49,32,114,110,100,51,48,50,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,22),40,102,95,50,50,52,52,32,111,98,106,50,57,55,32,114,110,100,50,57,56,41,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,15),40,102,95,50,50,54,48,32,111,98,106,51,48,53,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,22),40,102,95,50,50,55,49,32,111,98,106,51,48,56,32,114,110,100,51,48,57,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,29),40,101,113,63,45,104,97,115,104,32,111,98,106,51,49,54,32,46,32,116,109,112,51,49,53,51,49,55,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,15),40,102,95,50,53,56,53,32,102,120,110,52,51,49,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,22),40,102,95,50,53,55,54,32,104,115,104,52,50,54,32,108,105,109,52,50,55,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,22),40,102,95,50,52,49,51,32,115,116,114,51,53,48,32,114,110,100,51,53,49,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,22),40,102,95,50,52,49,49,32,111,98,106,51,52,54,32,114,110,100,51,52,55,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,23),40,102,95,50,52,52,52,32,98,121,116,118,101,99,51,54,54,32,105,51,54,55,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,23),40,102,95,50,52,53,54,32,98,121,116,118,101,99,51,55,48,32,105,51,55,49,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,23),40,102,95,50,52,54,56,32,98,121,116,118,101,99,51,55,52,32,105,51,55,53,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,23),40,102,95,50,52,56,48,32,98,121,116,118,101,99,51,55,56,32,105,51,55,57,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,23),40,102,95,50,52,57,50,32,98,121,116,118,101,99,51,56,50,32,105,51,56,51,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,23),40,102,95,50,53,48,52,32,98,121,116,118,101,99,51,56,54,32,105,51,56,55,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,23),40,102,95,50,53,49,54,32,98,121,116,118,101,99,51,57,48,32,105,51,57,49,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,23),40,102,95,50,53,50,53,32,98,121,116,118,101,99,51,57,52,32,105,51,57,53,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,15),40,102,95,50,53,51,48,32,119,114,100,51,57,56,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,22),40,102,95,50,52,51,48,32,111,98,106,51,53,52,32,114,110,100,51,53,53,41,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,102,95,50,53,52,52,32,111,98,106,52,48,49,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,22),40,102,95,50,53,53,53,32,111,98,106,52,48,52,32,114,110,100,52,48,53,41,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,30),40,101,113,118,63,45,104,97,115,104,32,111,98,106,52,49,50,32,46,32,116,109,112,52,49,49,52,49,51,41,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,104,115,104,52,52,54,32,105,52,52,55,32,108,101,110,52,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,53),40,118,101,99,116,111,114,45,104,97,115,104,32,111,98,106,52,51,57,32,115,101,101,100,52,52,48,32,100,101,112,116,104,52,52,49,32,115,116,97,114,116,52,52,50,32,114,110,100,52,52,51,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,15),40,102,95,50,54,57,57,32,111,98,106,52,55,48,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,15),40,102,95,50,54,57,55,32,111,98,106,52,54,52,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,15),40,102,95,50,54,57,53,32,111,98,106,52,53,56,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,15),40,102,95,50,55,51,55,32,111,98,106,52,55,51,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,46),40,114,101,99,117,114,115,105,118,101,45,97,116,111,109,105,99,45,104,97,115,104,32,111,98,106,52,53,48,32,100,101,112,116,104,52,53,49,32,114,110,100,52,53,50,41,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,22),40,102,95,50,56,49,57,32,115,116,114,52,56,54,32,114,110,100,52,56,55,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,22),40,102,95,50,56,49,55,32,111,98,106,52,56,50,32,114,110,100,52,56,51,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,53,48,32,98,121,116,118,101,99,53,48,50,32,105,53,48,51,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,54,50,32,98,121,116,118,101,99,53,48,54,32,105,53,48,55,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,55,52,32,98,121,116,118,101,99,53,49,48,32,105,53,49,49,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,56,54,32,98,121,116,118,101,99,53,49,52,32,105,53,49,53,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,57,56,32,98,121,116,118,101,99,53,49,56,32,105,53,49,57,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,23),40,102,95,50,57,49,48,32,98,121,116,118,101,99,53,50,50,32,105,53,50,51,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,23),40,102,95,50,57,50,50,32,98,121,116,118,101,99,53,50,54,32,105,53,50,55,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,23),40,102,95,50,57,51,49,32,98,121,116,118,101,99,53,51,48,32,105,53,51,49,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,15),40,102,95,50,57,51,54,32,119,114,100,53,51,52,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,22),40,102,95,50,56,51,54,32,111,98,106,52,57,48,32,114,110,100,52,57,49,41,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,15),40,102,95,50,57,53,48,32,111,98,106,53,51,55,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,15),40,102,95,50,57,54,52,32,111,98,106,53,52,48,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,22),40,102,95,50,57,54,57,32,115,116,114,53,52,51,32,114,110,100,53,52,52,41,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,22),40,102,95,50,57,56,48,32,111,98,106,53,52,55,32,114,110,100,53,52,56,41,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,22),40,102,95,51,48,48,50,32,111,98,106,53,53,49,32,114,110,100,53,53,50,41,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,15),40,102,95,51,48,50,55,32,111,98,106,53,53,53,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,22),40,102,95,51,48,51,50,32,111,98,106,53,53,56,32,114,110,100,53,53,57,41,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,15),40,102,95,51,48,53,55,32,111,98,106,53,54,50,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,22),40,102,95,51,48,54,50,32,111,98,106,53,54,53,32,114,110,100,53,54,54,41,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,22),40,102,95,51,48,55,50,32,111,98,106,53,54,57,32,114,110,100,53,55,48,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,39),40,114,101,99,117,114,115,105,118,101,45,104,97,115,104,32,111,98,106,52,55,52,32,100,101,112,116,104,52,55,53,32,114,110,100,52,55,54,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,28),40,42,101,113,117,97,108,63,45,104,97,115,104,32,111,98,106,52,51,52,32,114,110,100,52,51,53,41,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,15),40,102,95,51,49,48,53,32,102,120,110,53,57,57,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,22),40,102,95,51,48,57,54,32,104,115,104,53,57,52,32,108,105,109,53,57,53,41,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,32),40,101,113,117,97,108,63,45,104,97,115,104,32,111,98,106,53,56,48,32,46,32,116,109,112,53,55,57,53,56,49,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,15),40,102,95,51,49,56,52,32,102,120,110,54,51,56,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,22),40,102,95,51,49,55,53,32,104,115,104,54,51,51,32,108,105,109,54,51,52,41,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,22),40,102,95,51,50,48,49,32,115,116,114,54,52,49,32,114,110,100,54,52,50,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,104,97,115,104,32,115,116,114,54,48,56,32,46,32,116,109,112,54,48,55,54,48,57,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,15),40,102,95,51,51,48,56,32,102,120,110,54,56,49,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,22),40,102,95,51,50,57,57,32,104,115,104,54,55,54,32,108,105,109,54,55,55,41,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,22),40,102,95,51,51,50,53,32,115,116,114,54,56,52,32,114,110,100,54,56,53,41,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,35),40,115,116,114,105,110,103,45,99,105,45,104,97,115,104,32,115,116,114,54,53,49,32,46,32,116,109,112,54,53,48,54,53,50,41,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,43),40,104,97,115,104,45,116,97,98,108,101,45,99,97,110,111,110,105,99,97,108,45,108,101,110,103,116,104,32,116,97,98,55,48,52,32,114,101,113,55,48,53,41,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,27),40,102,95,51,52,52,52,32,111,98,106,101,99,116,55,50,55,32,98,111,117,110,100,55,50,56,41,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,27),40,102,95,51,52,52,57,32,111,98,106,101,99,116,55,50,57,32,98,111,117,110,100,55,51,48,41,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,27),40,102,95,51,52,53,52,32,111,98,106,101,99,116,55,51,49,32,98,111,117,110,100,55,51,50,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,38),40,42,109,97,107,101,45,104,97,115,104,45,102,117,110,99,116,105,111,110,32,117,115,101,114,45,102,117,110,99,116,105,111,110,55,50,53,41,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,86),40,42,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,116,101,115,116,55,52,51,32,104,97,115,104,55,52,52,32,108,101,110,55,52,53,32,109,105,110,45,108,111,97,100,55,52,54,32,109,97,120,45,108,111,97,100,55,52,55,32,105,110,105,116,105,97,108,55,53,48,32,116,109,112,55,52,50,55,53,49,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,8),40,102,95,51,53,48,51,41};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,15),40,102,95,51,54,49,53,32,109,115,103,56,49,57,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,8),40,102,95,51,54,55,56,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,97,114,103,115,56,49,54,41,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,33),40,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,46,32,97,114,103,117,109,101,110,116,115,48,55,55,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,20),40,104,97,115,104,45,116,97,98,108,101,63,32,111,98,106,56,53,49,41,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,23),40,104,97,115,104,45,116,97,98,108,101,45,115,105,122,101,32,104,116,56,53,51,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,39),40,104,97,115,104,45,116,97,98,108,101,45,101,113,117,105,118,97,108,101,110,99,101,45,102,117,110,99,116,105,111,110,32,104,116,56,53,54,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,32),40,104,97,115,104,45,116,97,98,108,101,45,104,97,115,104,45,102,117,110,99,116,105,111,110,32,104,116,56,53,57,41};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,27),40,104,97,115,104,45,116,97,98,108,101,45,109,105,110,45,108,111,97,100,32,104,116,56,54,50,41,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,27),40,104,97,115,104,45,116,97,98,108,101,45,109,97,120,45,108,111,97,100,32,104,116,56,54,53,41,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,28),40,104,97,115,104,45,116,97,98,108,101,45,119,101,97,107,45,107,101,121,115,32,104,116,56,54,56,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,30),40,104,97,115,104,45,116,97,98,108,101,45,119,101,97,107,45,118,97,108,117,101,115,32,104,116,56,55,49,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,31),40,104,97,115,104,45,116,97,98,108,101,45,104,97,115,45,105,110,105,116,105,97,108,63,32,104,116,56,55,52,41,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,105,110,105,116,105,97,108,32,104,116,56,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,56,57,49,41};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,56,55,32,105,56,56,57,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,40),40,104,97,115,104,45,116,97,98,108,101,45,114,101,115,105,122,101,33,32,104,116,57,48,48,32,118,101,99,57,48,49,32,108,101,110,57,48,50,41};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,21),40,99,111,112,121,45,108,111,111,112,32,98,117,99,107,101,116,57,49,56,41,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,49,52,32,105,57,49,54,41};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,24),40,42,104,97,115,104,45,116,97,98,108,101,45,99,111,112,121,32,104,116,57,48,57,41};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,23),40,104,97,115,104,45,116,97,98,108,101,45,99,111,112,121,32,104,116,57,50,54,41,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,13),40,102,95,52,49,53,52,32,110,57,54,49,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,13),40,102,95,52,49,54,52,32,110,57,54,52,41,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,24),40,102,95,52,49,52,52,32,104,116,57,53,49,32,110,101,119,115,105,122,57,53,50,41};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,55,52,41};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,56,51,41};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,8),40,102,95,52,51,52,49,41};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,53),40,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,32,104,116,57,51,53,32,107,101,121,57,51,54,32,102,117,110,99,57,51,55,32,46,32,116,109,112,57,51,52,57,51,56,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,14),40,102,95,52,51,54,53,32,110,49,48,49,52,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,14),40,102,95,52,51,55,53,32,110,49,48,49,55,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,26),40,102,95,52,51,53,53,32,104,116,49,48,48,52,32,110,101,119,115,105,122,49,48,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,50,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,58),40,42,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,47,100,101,102,97,117,108,116,32,104,116,57,57,55,32,107,101,121,57,57,56,32,102,117,110,99,57,57,57,32,100,101,102,49,48,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,60),40,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,47,100,101,102,97,117,108,116,32,104,116,49,48,52,54,32,107,101,121,49,48,52,55,32,102,117,110,99,49,48,52,56,32,100,101,102,49,48,52,57,41,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,14),40,102,95,52,53,54,55,32,110,49,48,55,48,41,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,14),40,102,95,52,53,55,55,32,110,49,48,55,51,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,26),40,102,95,52,53,53,55,32,104,116,49,48,54,48,32,110,101,119,115,105,122,49,48,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,56,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,40),40,104,97,115,104,45,116,97,98,108,101,45,115,101,116,33,32,104,116,49,48,53,52,32,107,101,121,49,48,53,53,32,118,97,108,49,48,53,54,41};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,47),40,104,97,115,104,45,116,97,98,108,101,45,114,101,102,47,100,101,102,97,117,108,116,32,104,116,49,49,50,54,32,107,101,121,49,49,50,55,32,100,101,102,49,49,50,56,41,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,101,120,105,115,116,115,63,32,104,116,49,49,52,52,32,107,101,121,49,49,52,53,41,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,49,56,56,32,98,117,99,107,101,116,49,49,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,100,101,108,101,116,101,33,32,104,116,49,49,54,57,32,107,101,121,49,49,55,48,41,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,50,48,55,32,98,117,99,107,101,116,49,50,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,50,48,51,32,105,49,50,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,36),40,104,97,115,104,45,116,97,98,108,101,45,114,101,109,111,118,101,33,32,104,116,49,49,57,56,32,102,117,110,99,49,49,57,57,41,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,99,108,101,97,114,33,32,104,116,49,50,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,14),40,102,95,53,49,56,51,32,120,49,50,51,53,41,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,49,50,51,49,32,108,115,116,49,50,51,51,41,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,50,50,56,32,105,49,50,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,36),40,42,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,33,32,104,116,49,49,50,50,52,32,104,116,50,49,50,50,53,41,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,33,32,104,116,49,49,50,52,49,32,104,116,50,49,50,52,50,41,0,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,34),40,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,32,104,116,49,49,50,52,54,32,104,116,50,49,50,52,55,41,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,53,56,32,108,115,116,49,50,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,53,53,32,108,115,116,49,50,53,54,41,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,62,97,108,105,115,116,32,104,116,49,50,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,14),40,102,95,53,50,57,54,32,120,49,50,56,49,41,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,14),40,102,95,53,50,56,53,32,120,49,50,56,48,41,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,55,48,32,103,49,50,55,55,49,50,56,52,41,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,40),40,97,108,105,115,116,45,62,104,97,115,104,45,116,97,98,108,101,32,97,108,105,115,116,49,50,54,53,32,46,32,114,101,115,116,49,50,54,54,41};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,57,56,32,108,115,116,49,50,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,57,53,32,108,115,116,49,50,57,54,41,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,24),40,104,97,115,104,45,116,97,98,108,101,45,107,101,121,115,32,104,116,49,50,57,49,41};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,51,49,50,32,108,115,116,49,51,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,51,48,57,32,108,115,116,49,51,49,48,41,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,118,97,108,117,101,115,32,104,116,49,51,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,19),40,102,95,53,52,54,48,32,98,117,99,107,101,116,49,51,51,56,41,0,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,50,56,32,103,49,51,51,53,49,51,52,48,41,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,51,50,51,32,105,49,51,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,38),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,104,116,49,51,49,57,32,112,114,111,99,49,51,50,48,41,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,50,32,98,117,99,107,101,116,49,51,53,54,32,97,99,99,49,51,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,51,53,51,32,97,99,99,49,51,53,52,41,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,43),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,108,100,32,104,116,49,51,52,55,32,102,117,110,99,49,51,52,56,32,105,110,105,116,49,51,52,57,41,0,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,42),40,104,97,115,104,45,116,97,98,108,101,45,102,111,108,100,32,104,116,49,51,54,50,32,102,117,110,99,49,51,54,51,32,105,110,105,116,49,51,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,37),40,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,104,116,49,51,54,56,32,112,114,111,99,49,51,54,57,41,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,33),40,104,97,115,104,45,116,97,98,108,101,45,119,97,108,107,32,104,116,49,51,55,51,32,112,114,111,99,49,51,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,26),40,102,95,53,54,48,54,32,107,49,51,56,48,32,118,49,51,56,49,32,97,49,51,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,32),40,104,97,115,104,45,116,97,98,108,101,45,109,97,112,32,104,116,49,51,55,56,32,102,117,110,99,49,51,55,57,41};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,24),40,102,95,53,54,49,54,32,104,116,49,51,56,53,32,112,111,114,116,49,51,56,54,41};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,8),40,102,95,53,55,51,53,41};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,36),40,97,53,54,50,56,32,104,116,49,49,48,50,32,107,101,121,49,49,48,51,32,46,32,116,109,112,49,49,48,49,49,49,48,52,41,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5008)
static void C_ccall f_5008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5242)
static void C_fcall f_5242(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3308)
static void C_ccall f_3308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3964)
static void C_fcall f_3964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4950)
static C_word C_fcall f_4950(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4283)
static void C_fcall f_4283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3477)
static void C_fcall f_3477(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3460)
static void C_ccall f_3460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_fcall f_4042(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2690)
static void C_fcall f_2690(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5160)
static void C_fcall f_5160(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4020)
static void C_fcall f_4020(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5200)
static void C_ccall f_5200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2836)
static void C_ccall f_2836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5227)
static void C_fcall f_5227(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5121)
static void C_ccall f_5121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5129)
static void C_fcall f_5129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3406)
static C_word C_fcall f_3406(C_word t0,C_word t1);
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_fcall f_3400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5214)
static void C_ccall f_5214(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5140)
static void C_fcall f_5140(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5493)
static void C_ccall f_5493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5149)
static void C_ccall f_5149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4890)
static void C_fcall f_4890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2021)
static void C_ccall f_2021(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4749)
static void C_ccall f_4749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5284)
static void C_ccall f_5284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5285)
static void C_ccall f_5285(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5452)
static void C_fcall f_5452(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4500)
static void C_ccall f_4500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5484)
static void C_fcall f_5484(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2083)
static void C_ccall f_2083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2898)
static void C_ccall f_2898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5296)
static void C_ccall f_5296(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_ccall f_3649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4539)
static void C_ccall f_4539(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4798)
static void C_fcall f_4798(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4197)
static void C_ccall f_4197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1971)
static void C_ccall f_1971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4179)
static void C_fcall f_4179(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3944)
static void C_fcall f_3944(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4173)
static void C_ccall f_4173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4763)
static C_word C_fcall f_4763(C_word t0,C_word t1);
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5115)
static void C_ccall f_5115(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5698)
static void C_fcall f_5698(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4592)
static void C_fcall f_4592(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5353)
static void C_fcall f_5353(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4856)
static C_word C_fcall f_4856(C_word t0,C_word t1);
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_fcall f_3575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3573)
static void C_fcall f_3573(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_fcall f_3571(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5660)
static void C_fcall f_5660(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5606)
static void C_ccall f_5606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5601)
static void C_ccall f_5601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4350)
static void C_fcall f_4350(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2914)
static void C_ccall f_2914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4576)
static void C_ccall f_4576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5646)
static void C_ccall f_5646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5638)
static void C_ccall f_5638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5314)
static void C_ccall f_5314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5411)
static void C_fcall f_5411(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5303)
static void C_ccall f_5303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5305)
static void C_fcall f_5305(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5441)
static void C_fcall f_5441(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5579)
static void C_ccall f_5579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5568)
static void C_ccall f_5568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5562)
static void C_ccall f_5562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5338)
static void C_fcall f_5338(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3829)
static void C_ccall f_3829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5595)
static void C_ccall f_5595(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5325)
static void C_ccall f_5325(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5584)
static void C_ccall f_5584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3715)
static void C_fcall f_3715(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5089)
static void C_ccall f_5089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4443)
static void C_fcall f_4443(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5396)
static void C_fcall f_5396(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5383)
static void C_ccall f_5383(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externexport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4647)
static void C_fcall f_4647(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4632)
static void C_ccall f_4632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5515)
static void C_fcall f_5515(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4690)
static void C_fcall f_4690(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5504)
static void C_fcall f_5504(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4092)
static void C_fcall f_4092(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4390)
static void C_fcall f_4390(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5072)
static void C_fcall f_5072(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4135)
static void C_fcall f_4135(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5061)
static void C_ccall f_5061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2516)
static void C_ccall f_2516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2504)
static void C_ccall f_2504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4491)
static void C_fcall f_4491(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2508)
static void C_ccall f_2508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4991)
static void C_fcall f_4991(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4374)
static void C_ccall f_4374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5049)
static void C_fcall f_5049(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1724)
static void C_ccall f_1724(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1721)
static void C_ccall f_1721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3694)
static void C_fcall f_3694(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3678)
static void C_ccall f_3678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2460)
static void C_ccall f_2460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2648)
static void C_fcall f_2648(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4110)
static void C_ccall f_4110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3688)
static void C_ccall f_3688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_fcall f_2633(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_fcall f_2629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4232)
static void C_fcall f_4232(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5530)
static void C_fcall f_5530(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1754)
static void C_ccall f_1754(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1730)
static void C_ccall f_1730(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1730)
static void C_ccall f_1730r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5735)
static void C_ccall f_5735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3605)
static void C_fcall f_3605(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5189)
static void C_ccall f_5189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_5242)
static void C_fcall trf_5242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5242(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5242(t0,t1,t2,t3);}

C_noret_decl(trf_3964)
static void C_fcall trf_3964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3964(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3964(t0,t1,t2);}

C_noret_decl(trf_4283)
static void C_fcall trf_4283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4283(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4283(t0,t1,t2);}

C_noret_decl(trf_3477)
static void C_fcall trf_3477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3477(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_3477(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_4042)
static void C_fcall trf_4042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4042(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4042(t0,t1,t2);}

C_noret_decl(trf_2690)
static void C_fcall trf_2690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2690(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2690(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5160)
static void C_fcall trf_5160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5160(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5160(t0,t1,t2);}

C_noret_decl(trf_4020)
static void C_fcall trf_4020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4020(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4020(t0,t1);}

C_noret_decl(trf_5227)
static void C_fcall trf_5227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5227(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5227(t0,t1,t2,t3);}

C_noret_decl(trf_5129)
static void C_fcall trf_5129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5129(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5129(t0,t1,t2);}

C_noret_decl(trf_3400)
static void C_fcall trf_3400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3400(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3400(t0,t1,t2);}

C_noret_decl(trf_5140)
static void C_fcall trf_5140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5140(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5140(t0,t1,t2);}

C_noret_decl(trf_4890)
static void C_fcall trf_4890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4890(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4890(t0,t1,t2);}

C_noret_decl(trf_5452)
static void C_fcall trf_5452(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5452(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5452(t0,t1,t2);}

C_noret_decl(trf_5484)
static void C_fcall trf_5484(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5484(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5484(t0,t1,t2);}

C_noret_decl(trf_4798)
static void C_fcall trf_4798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4798(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4798(t0,t1,t2);}

C_noret_decl(trf_4179)
static void C_fcall trf_4179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4179(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4179(t0,t1);}

C_noret_decl(trf_3944)
static void C_fcall trf_3944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3944(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3944(t0,t1,t2);}

C_noret_decl(trf_5698)
static void C_fcall trf_5698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5698(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5698(t0,t1,t2);}

C_noret_decl(trf_4592)
static void C_fcall trf_4592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4592(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4592(t0,t1);}

C_noret_decl(trf_5353)
static void C_fcall trf_5353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5353(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5353(t0,t1,t2,t3);}

C_noret_decl(trf_3575)
static void C_fcall trf_3575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3575(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3575(t0,t1);}

C_noret_decl(trf_3573)
static void C_fcall trf_3573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3573(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3573(t0,t1);}

C_noret_decl(trf_3571)
static void C_fcall trf_3571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3571(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3571(t0,t1);}

C_noret_decl(trf_5660)
static void C_fcall trf_5660(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5660(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5660(t0,t1,t2);}

C_noret_decl(trf_4350)
static void C_fcall trf_4350(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4350(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4350(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2743)
static void C_fcall trf_2743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2743(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2743(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5411)
static void C_fcall trf_5411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5411(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5411(t0,t1,t2,t3);}

C_noret_decl(trf_5305)
static void C_fcall trf_5305(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5305(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5305(t0,t1,t2);}

C_noret_decl(trf_5441)
static void C_fcall trf_5441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5441(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5441(t0,t1,t2);}

C_noret_decl(trf_5338)
static void C_fcall trf_5338(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5338(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5338(t0,t1,t2,t3);}

C_noret_decl(trf_3715)
static void C_fcall trf_3715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3715(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3715(t0,t1);}

C_noret_decl(trf_4443)
static void C_fcall trf_4443(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4443(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4443(t0,t1,t2);}

C_noret_decl(trf_5396)
static void C_fcall trf_5396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5396(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5396(t0,t1,t2,t3);}

C_noret_decl(trf_4647)
static void C_fcall trf_4647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4647(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4647(t0,t1,t2);}

C_noret_decl(trf_5515)
static void C_fcall trf_5515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5515(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5515(t0,t1,t2,t3);}

C_noret_decl(trf_4690)
static void C_fcall trf_4690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4690(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4690(t0,t1,t2);}

C_noret_decl(trf_5504)
static void C_fcall trf_5504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5504(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5504(t0,t1,t2,t3);}

C_noret_decl(trf_4092)
static void C_fcall trf_4092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4092(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4092(t0,t1,t2);}

C_noret_decl(trf_4390)
static void C_fcall trf_4390(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4390(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4390(t0,t1);}

C_noret_decl(trf_5072)
static void C_fcall trf_5072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5072(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5072(t0,t1,t2,t3);}

C_noret_decl(trf_4135)
static void C_fcall trf_4135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4135(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4135(t0,t1);}

C_noret_decl(trf_4491)
static void C_fcall trf_4491(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4491(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4491(t0,t1,t2);}

C_noret_decl(trf_4991)
static void C_fcall trf_4991(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4991(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4991(t0,t1,t2,t3);}

C_noret_decl(trf_5049)
static void C_fcall trf_5049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5049(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5049(t0,t1,t2);}

C_noret_decl(trf_3694)
static void C_fcall trf_3694(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3694(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3694(t0,t1);}

C_noret_decl(trf_2648)
static void C_fcall trf_2648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2648(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2648(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2633)
static void C_fcall trf_2633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2633(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2633(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2629)
static void C_fcall trf_2629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2629(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2629(t0,t1,t2);}

C_noret_decl(trf_4232)
static void C_fcall trf_4232(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4232(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4232(t0,t1,t2);}

C_noret_decl(trf_5530)
static void C_fcall trf_5530(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5530(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5530(t0,t1,t2,t3);}

C_noret_decl(trf_3605)
static void C_fcall trf_3605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3605(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3605(t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

/* hash-table-delete! in k4733 in k1720 */
static void C_ccall f_4921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4921,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[33],lf[92]);
t5=C_slot(t2,C_fix(1));
t6=C_block_size(t5);
t7=C_slot(t2,C_fix(10));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4933,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:924: hash */
t9=t7;
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t8,t3,t6);}

/* k5006 in loop in k4932 in hash-table-delete! in k4733 in k1720 */
static void C_ccall f_5008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]):C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3]));
t3=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t4=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
/* srfi-69.scm:954: loop */
t2=((C_word*)((C_word*)t0)[9])[1];
f_4991(t2,((C_word*)t0)[8],((C_word*)t0)[10],((C_word*)t0)[3]);}}

/* loop2 in loop in hash-table->alist in k4733 in k1720 */
static void C_fcall f_5242(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5242,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1020: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5227(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(0));
t7=C_slot(t5,C_fix(1));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,t3);
/* srfi-69.scm:1021: loop2 */
t12=t1;
t13=t4;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* k4714 in loop in k4631 in k4620 in hash-table-set! in k1720 */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]));}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:829: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4690(t3,((C_word*)t0)[2],t2);}}

/* k4932 in hash-table-delete! in k4733 in k1720 */
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4933,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_slot(((C_word*)t0)[2],C_fix(2));
t4=C_fixnum_difference(t3,C_fix(1));
t5=C_slot(((C_word*)t0)[3],t1);
t6=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4950,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=((C_word)li151),tmp=(C_word)a,a+=8,tmp);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,f_4950(t7,C_SCHEME_FALSE,t5));}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4991,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t8,a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=((C_word)li152),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_4991(t10,((C_word*)t0)[6],C_SCHEME_FALSE,t5);}}

/* f_3308 */
static void C_ccall f_3308(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3308,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_negate(t2));}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_1795 */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1795,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k1797 */
static void C_ccall f_1799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1807,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1811,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:146: g149 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(6));}

/* k3122 in equal?-hash in k1720 */
static void C_ccall f_3123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:342: g592 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* loop in doloop887 in k4006 in k4004 in hash-table-resize! in k1720 */
static void C_fcall f_3964(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3964,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3977,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:637: hash */
t6=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,t4,((C_word*)t0)[5]);}}

/* string-hash in k1720 */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_3150r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3150r(t0,t1,t2,t3);}}

static void C_ccall f_3150r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(11);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
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
t16=C_i_nullp(t15);
t17=(C_truep(t16)?lf[0]:C_i_car(t15));
t18=C_i_nullp(t15);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t15));
t20=C_i_check_string_2(t2,lf[20]);
t21=C_i_check_exact_2(t5,lf[20]);
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3174,a[2]=t1,a[3]=t5,a[4]=t17,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
t23=(C_truep(t13)?t13:C_block_size(t2));
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3210,a[2]=t22,a[3]=t2,a[4]=t9,a[5]=t23,tmp=(C_word)a,a+=6,tmp);
t25=C_block_size(t2);
/* srfi-69.scm:354: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(6,*((C_word*)lf[22]+1),t24,t9,C_fix(0),t25,lf[20]);}
else{
t23=t22;
f_3174(2,t23,t2);}}

/* hash-table-resize! in k1720 */
static void C_ccall f_3999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3999,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_times(t4,C_fix(2));
t6=C_i_fixnum_min(C_fix(1073741823),t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4005,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:646: hash-table-canonical-length */
f_3400(t7,lf[25],t6);}

/* loop in k4932 in hash-table-delete! in k4733 in k1720 */
static C_word C_fcall f_4950(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
t5=C_slot(t3,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(C_truep(t1)?C_i_setslot(t1,C_fix(1),t4):C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t4));
t8=C_i_set_i_slot(((C_word*)t0)[5],C_fix(2),((C_word*)t0)[6]);
return(C_SCHEME_TRUE);}
else{
t10=t2;
t11=t4;
t1=t10;
t2=t11;
goto loop;}}}

/* k3488 in k3480 in *make-hash-table in k1720 */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* loop in k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_fcall f_4283(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4283,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4305,a[2]=((C_word*)t0)[8],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:742: thunk */
t5=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4313,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=t2,a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:747: test */
t6=((C_word*)t0)[11];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}

/* k3480 in *make-hash-table in k1720 */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3482,2,t0,t1);}
t2=C_a_i_record(&a,11,lf[33],t1,C_fix(0),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[6],C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3489,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:448: *make-hash-function */
t4=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* *make-hash-table in k1720 */
static void C_fcall f_3477(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3477,NULL,8,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3482,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=t6,a[6]=t7,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t8))){
/* srfi-69.scm:445: make-vector */
t10=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t4,C_SCHEME_END_OF_LIST);}
else{
t10=t9;
f_3482(2,t10,C_i_car(t8));}}

/* k4291 in loop in k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4292,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=t1;
t7=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4219(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4219,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],t1);
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4232,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t5,a[11]=((C_word)li128),tmp=(C_word)a,a+=12,tmp));
t7=((C_word*)t5)[1];
f_4232(t7,((C_word*)t0)[10],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t5,a[11]=((C_word*)t0)[4],a[12]=((C_word)li129),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_4283(t7,((C_word*)t0)[10],t2);}}

/* k3459 in k3457 */
static void C_ccall f_3460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(C_truep(t2)?C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* srfi-69.scm:436: ##sys#signal-hook */
t4=*((C_word*)lf[4]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,((C_word*)t0)[4],lf[29],lf[19],lf[30],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* f_2699 */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2699,3,t0,t1,t2);}
t3=C_blockp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_not(t3));}

/* f_2697 */
static void C_ccall f_2697(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2697,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2699,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2706,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:213: g468 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5170 in doloop1231 in doloop1228 in *hash-table-merge! in k4733 in k1720 */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5160(t3,((C_word*)t0)[4],t2);}

/* doloop914 in k4027 in *hash-table-copy in k1720 */
static void C_fcall f_4042(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4042,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_slot(((C_word*)t0)[3],C_fix(3));
t4=C_slot(((C_word*)t0)[3],C_fix(4));
t5=C_slot(((C_word*)t0)[3],C_fix(2));
t6=C_slot(((C_word*)t0)[3],C_fix(5));
t7=C_slot(((C_word*)t0)[3],C_fix(6));
t8=C_slot(((C_word*)t0)[3],C_fix(9));
/* srfi-69.scm:674: *make-hash-table */
f_3477(t1,t3,t4,t5,t6,t7,t8,C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[6],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4092,a[2]=t6,a[3]=((C_word)li121),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4092(t8,t3,t4);}}

/* f_2874 in k2864 in k2852 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2874,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* recursive-atomic-hash in *equal?-hash in k1720 */
static void C_fcall f_2690(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2690,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2695,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2724,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:309: g456 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k2876 in k2864 in k2852 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2886,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2890,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:146: g512 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],C_fix(4));}

/* f_2695 in recursive-atomic-hash in *equal?-hash in k1720 */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2695,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2715,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:241: g462 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4202 */
static void C_ccall f_4203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:658: g959 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4209,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(10));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4219,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:723: hash */
t7=t2;
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[4],t5);}

/* k3457 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3460,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:433: ##sys#check-exact */
t3=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,lf[19],((C_word*)t0)[4]);}

/* f_3454 in *make-hash-function in k1720 */
static void C_ccall f_3454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3454,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3458,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:432: user-function */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,t2,t3);}

/* doloop1231 in doloop1228 in *hash-table-merge! in k4733 in k1720 */
static void C_fcall f_5160(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5160,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5172,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t3,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5183,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
t7=C_slot(t3,C_fix(1));
/* srfi-69.scm:996: *hash-table-update!/default */
t8=lf[85];
f_4350(t8,t4,((C_word*)t0)[3],t5,t6,t7);}}

/* f_2850 */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2850,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k2675 in loop in vector-hash in *equal?-hash in k1720 */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:301: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_2648(t6,((C_word*)t0)[7],t3,t4,t5);}

/* *hash-table-copy in k1720 */
static void C_fcall f_4020(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4020,NULL,2,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_block_size(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4028,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:671: make-vector */
t6=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,C_SCHEME_END_OF_LIST);}

/* k2852 */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2862,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2866,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:146: g504 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(6));}

/* k4027 in *hash-table-copy in k1720 */
static void C_ccall f_4028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4042,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word)li122),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4042(t6,t2,C_fix(0));}

/* hash-table-merge in k4733 in k1720 */
static void C_ccall f_5200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5200,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[33],lf[98]);
t5=C_i_check_structure_2(t3,lf[33],lf[98]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5212,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1006: *hash-table-copy */
f_4020(t6,t2);}

/* f_2886 in k2876 in k2864 in k2852 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2886,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* f_2836 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_2836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2836,4,t0,t1,t2,t3);}
if(C_truep(C_i_flonump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2850,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2854,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:146: g500 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,C_fix(7));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2943,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:147: ##sys#number-hash-hook */
t6=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}}

/* f_2862 in k2852 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2862,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* loop in hash-table->alist in k4733 in k1720 */
static void C_fcall f_5227(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5227,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5242,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word)li164),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5242(t8,t1,t4,t3);}}

/* k2864 in k2852 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2874,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2878,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:146: g508 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_fix(5));}

/* k5120 in hash-table-clear! in k4733 in k1720 */
static void C_ccall f_5121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_fix(0)));}

/* f_3105 */
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3105,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_negate(t2));}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* *hash-table-merge! in k4733 in k1720 */
static void C_fcall f_5129(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5129,NULL,3,t1,t2,t3);}
t4=C_slot(t3,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5140,a[2]=t5,a[3]=t2,a[4]=t7,a[5]=t4,a[6]=((C_word)li160),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_5140(t9,t1,C_fix(0));}

/* f_1807 in k1797 */
static void C_ccall f_1807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1807,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* loop in hash-table-canonical-length in k1720 */
static C_word C_fcall f_3406(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
t2=C_slot(t1,C_fix(0));
t3=C_slot(t1,C_fix(1));
t4=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t4)){
if(C_truep(t4)){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}
else{
if(C_truep(C_i_nullp(t3))){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}}

/* k5211 in hash-table-merge in k4733 in k1720 */
static void C_ccall f_5212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1006: *hash-table-merge! */
f_5129(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* hash-table-canonical-length in k1720 */
static void C_fcall f_3400(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3400,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3406,a[2]=t3,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_3406(t4,t2));}

/* hash-table->alist in k4733 in k1720 */
static void C_ccall f_5214(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5214,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[99]);
t4=C_slot(t2,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5227,a[2]=t5,a[3]=t4,a[4]=t7,a[5]=((C_word)li165),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_5227(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* f_1819 in k1809 in k1797 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1819,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k1809 in k1797 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1819,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1823,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:146: g153 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_fix(5));}

/* doloop1228 in *hash-table-merge! in k4733 in k1720 */
static void C_fcall f_5140(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5140,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5149,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5160,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word)li159),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5160(t8,t3,t4);}}

/* k5492 in for-each-loop1328 in doloop1323 in *hash-table-for-each in k4733 in k1720 */
static void C_ccall f_5493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5484(t3,((C_word*)t0)[4],t2);}

/* k1821 in k1809 in k1797 */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1831,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1835,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:146: g157 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],C_fix(4));}

/* k5148 in doloop1228 in *hash-table-merge! in k4733 in k1720 */
static void C_ccall f_5149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5140(t3,((C_word*)t0)[4],t2);}

/* k4263 in loop in k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k5714 in loop in k5645 in k5637 in a5628 in k1720 */
static void C_ccall f_5716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:863: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5698(t3,((C_word*)t0)[2],t2);}}

/* k3115 */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_and(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_modulo(t2,((C_word*)t0)[4]));}

/* loop in k4841 in hash-table-exists? in k4733 in k1720 */
static void C_fcall f_4890(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4890,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4901,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:912: test */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[4],t5);}}

/* f_1939 in object-uid-hash in k1720 */
static void C_ccall f_1939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1939,4,t0,t1,t2,t3);}
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1948,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1960,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:120: g205 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* f_2021 */
static void C_ccall f_2021(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2021,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_negate(t2));}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4748 in hash-table-ref/default in k4733 in k1720 */
static void C_ccall f_4749(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4749,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li145),tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4763(t4,t3));}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word)li146),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4798(t7,((C_word*)t0)[7],t3);}}

/* ##sys#check-keyword in k1720 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2076r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2076r(t0,t1,t2,t3);}}

static void C_ccall f_2076r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2083,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:192: keyword? */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3173 in string-hash in k1720 */
static void C_ccall f_3174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3175,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3201,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3205,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:358: g639 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t1,((C_word*)t0)[4]);}

/* f_3175 in k3173 in string-hash in k1720 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3175,4,t0,t1,t2,t3);}
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3184,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3196,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:120: g636 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* f_3444 in *make-hash-function in k1720 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3444,4,t0,t1,t2,t3);}
/* srfi-69.scm:428: user-function */
t4=((C_word*)t0)[2];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,t1,t2,t3,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* f_3449 in *make-hash-function in k1720 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3449,4,t0,t1,t2,t3);}
/* srfi-69.scm:430: user-function */
t4=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,t2,t3,((C_word*)t0)[3]);}

/* k4733 in k1720 */
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
C_word ab[63],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4735,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1 /* (set! hash-table-ref ...) */,t1);
t3=*((C_word*)lf[35]+1);
t4=C_mutate((C_word*)lf[90]+1 /* (set! hash-table-ref/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4737,a[2]=t3,a[3]=((C_word)li147),tmp=(C_word)a,a+=4,tmp));
t5=*((C_word*)lf[35]+1);
t6=C_mutate((C_word*)lf[91]+1 /* (set! hash-table-exists? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4830,a[2]=t5,a[3]=((C_word)li150),tmp=(C_word)a,a+=4,tmp));
t7=*((C_word*)lf[35]+1);
t8=C_mutate((C_word*)lf[92]+1 /* (set! hash-table-delete! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4921,a[2]=t7,a[3]=((C_word)li153),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[93]+1 /* (set! hash-table-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5032,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[94]+1 /* (set! hash-table-clear! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5115,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[96] /* (set! *hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5129,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[97]+1 /* (set! hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5189,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[98]+1 /* (set! hash-table-merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5200,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[99]+1 /* (set! hash-table->alist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5214,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[100]+1 /* (set! alist->hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5278,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[101]+1 /* (set! hash-table-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5325,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[102]+1 /* (set! hash-table-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5383,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[103] /* (set! *hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5441,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[105] /* (set! *hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5504,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[106]+1 /* (set! hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5562,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[107]+1 /* (set! hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5573,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[108]+1 /* (set! hash-table-walk ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5584,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[109]+1 /* (set! hash-table-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5595,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5616,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:1121: ##sys#register-record-printer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t24,lf[33],t25);}

/* hash-table-ref/default in k4733 in k1720 */
static void C_ccall f_4737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4737,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[33],lf[90]);
t6=C_slot(t2,C_fix(1));
t7=C_slot(t2,C_fix(3));
t8=C_slot(t2,C_fix(10));
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4749,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t6,a[5]=t4,a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t10=C_block_size(t6);
/* srfi-69.scm:874: hash */
t11=t8;
((C_proc4)C_fast_retrieve_proc(t11))(4,t11,t9,t3,t10);}

/* symbol-hash in k1720 */
static void C_ccall f_1997(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_1997r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1997r(t0,t1,t2,t3);}}

static void C_ccall f_1997r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(11);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[0]:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_check_symbol_2(t2,lf[8]);
t13=C_i_check_exact_2(t5,lf[8]);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2012,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2038,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2050,a[2]=t14,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:187: g239 */
t17=t15;
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t16,t2,t9);}

/* k5283 in alist->hash-table in k4733 in k1720 */
static void C_ccall f_5284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5285,a[2]=t1,a[3]=((C_word)li168),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5303,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5305,a[2]=t6,a[3]=t2,a[4]=((C_word)li169),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5305(t8,t4,t3);}

/* f_5285 in k5283 in alist->hash-table in k4733 in k1720 */
static void C_ccall f_5285(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5285,3,t0,t1,t2);}
t3=C_i_check_pair_2(t2,lf[100]);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5296,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp);
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:1032: *hash-table-update!/default */
t7=lf[85];
f_4350(t7,t1,((C_word*)t0)[2],t4,t5,t6);}

/* f_1965 in object-uid-hash in k1720 */
static void C_ccall f_1965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1965,4,t0,t1,t2,t3);}
/* srfi-69.scm:167: *equal?-hash */
f_2629(t1,t2,t3);}

/* doloop1323 in *hash-table-for-each in k4733 in k1720 */
static void C_fcall f_5452(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5452,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5460,a[2]=((C_word*)t0)[3],a[3]=((C_word)li177),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[104]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5476,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5484,a[2]=t8,a[3]=t3,a[4]=((C_word)li178),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_5484(t10,t6,t4);}}

/* k1958 */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_and(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_modulo(t2,((C_word*)t0)[4]));}

/* k4499 in loop in k4429 in k4418 in *hash-table-update!/default in k1720 */
static void C_ccall f_4500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4500,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=t1;
t7=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k2048 in symbol-hash in k1720 */
static void C_ccall f_2050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:187: g231 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3628 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:563: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3605(t3,((C_word*)t0)[4],t2);}

/* alist->hash-table in k4733 in k1720 */
static void C_ccall f_5278(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5278r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5278r(t0,t1,t2,t3);}}

static void C_ccall f_5278r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=C_i_check_list_2(t2,lf[100]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5284,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t5,*((C_word*)lf[41]+1),t3);}

/* k4006 in k4004 in hash-table-resize! in k1720 */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4007,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(10));
t4=((C_word*)t0)[4];
t5=t1;
t6=C_block_size(t4);
t7=C_block_size(t5);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3944,a[2]=t6,a[3]=t9,a[4]=t4,a[5]=t5,a[6]=t3,a[7]=t7,a[8]=((C_word)li119),tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_3944(t11,t2,C_fix(0));}

/* k4004 in hash-table-resize! in k1720 */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:647: make-vector */
t3=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_SCHEME_END_OF_LIST);}

/* k4008 in k4006 in k4004 in hash-table-resize! in k1720 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]));}

/* for-each-loop1328 in doloop1323 in *hash-table-for-each in k4733 in k1720 */
static void C_fcall f_5484(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5484,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5493,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-69.scm:1075: g1329 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2081 in check-keyword in k1720 */
static void C_ccall f_2083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* srfi-69.scm:193: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],C_SCHEME_FALSE,lf[11],((C_word*)t0)[4]);}
else{
t2=C_i_car(((C_word*)t0)[3]);
/* srfi-69.scm:193: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[10],t2,lf[11],((C_word*)t0)[4]);}}}

/* f_3184 */
static void C_ccall f_3184(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3184,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_negate(t2));}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4029 in k4027 in *hash-table-copy in k1720 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_setslot(t1,C_fix(2),t2);
t4=C_slot(((C_word*)t0)[2],C_fix(10));
t5=C_i_setslot(t1,C_fix(10),t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* k5474 in doloop1323 in *hash-table-for-each in k4733 in k1720 */
static void C_ccall f_5476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5452(t3,((C_word*)t0)[4],t2);}

/* f_1948 */
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1948,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_negate(t2));}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_3615 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3615(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3615,3,t0,t1,t2);}
/* srfi-69.scm:527: error */
t3=*((C_word*)lf[46]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[41],t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2888 in k2876 in k2864 in k2852 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2898,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2902,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:146: g516 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[6],C_fix(3));}

/* k3785 in k3780 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_fixnum_min(C_fix(1073741823),((C_word*)t0)[2]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=((C_word*)t0)[5];
f_3575(t6,t5);}

/* f_2898 in k2888 in k2876 in k2864 in k2852 */
static void C_ccall f_2898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2898,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* f_5296 */
static void C_ccall f_5296(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5296,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3780 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3782,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3575(t3,t2);}
else{
t2=C_i_check_exact_2(((C_word*)t0)[3],lf[41]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)t0)[3]))){
t4=t3;
f_3786(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm:518: error */
t4=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[41],lf[67],((C_word*)t0)[3]);}}}

/* k3639 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:563: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3605(t4,((C_word*)t0)[6],t3);}

/* k3648 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:563: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3605(t4,((C_word*)t0)[6],t3);}

/* k4544 in hash-table-update!/default in k1720 */
static void C_ccall f_4545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:795: *hash-table-update!/default */
t2=lf[85];
f_4350(t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3194 */
static void C_ccall f_3196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_and(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_modulo(t2,((C_word*)t0)[4]));}

/* hash-table-update!/default in k1720 */
static void C_ccall f_4539(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4539,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_structure_2(t2,lf[33],lf[86]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4545,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:794: ##sys#check-closure */
t8=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t4,lf[86]);}

/* f_3299 in k3297 in string-ci-hash in k1720 */
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3299,4,t0,t1,t2,t3);}
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3308,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3320,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:120: g679 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k3297 in string-ci-hash in k1720 */
static void C_ccall f_3298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3299,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3325,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3329,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:370: g682 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t1,((C_word*)t0)[4]);}

/* k4161 */
static void C_ccall f_4163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4164,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4197,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_times(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
/* srfi-69.scm:659: floor */
t6=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* f_4164 in k4161 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4164,3,t0,t1,t2);}
if(C_truep(C_immp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_inexact_to_exact(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2134 */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_and(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_modulo(t2,((C_word*)t0)[4]));}

/* f_5460 in doloop1323 in *hash-table-for-each in k4733 in k1720 */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5460,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* srfi-69.scm:1081: proc */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* loop in k4748 in hash-table-ref/default in k4733 in k1720 */
static void C_fcall f_4798(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4798,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4813,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:889: test */
t6=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[5],t5);}}

/* keyword-hash in k1720 */
static void C_ccall f_2100(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_2100r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2100r(t0,t1,t2,t3);}}

static void C_ccall f_2100r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[0]:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2112,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:206: ##sys#check-keyword */
t13=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t12,t2,lf[13]);}

/* k4196 in k4161 */
static void C_ccall f_4197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:659: g962 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k1969 in object-uid-hash in k1720 */
static void C_ccall f_1971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:172: g200 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3708 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[3];
if(C_truep(C_flonum_lessp(lf[57],t4))){
t5=((C_word*)t0)[3];
t6=t3;
f_3715(t6,C_flonum_lessp(t5,lf[58]));}
else{
t5=t3;
f_3715(t5,C_SCHEME_FALSE);}}

/* k4177 in k4171 in k4161 */
static void C_fcall f_4179(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:662: hash-table-resize! */
t2=*((C_word*)lf[78]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* doloop887 in k4006 in k4004 in hash-table-resize! in k1720 */
static void C_fcall f_3944(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3944,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3953,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3964,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li118),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3964(t8,t3,t4);}}

/* k4171 in k4161 */
static void C_ccall f_4173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=t2;
f_4179(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[7],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4179(t3,C_SCHEME_FALSE);}}

/* loop in k4748 in hash-table-ref/default in k4733 in k1720 */
static C_word C_fcall f_4763(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
return(t2);}
else{
t2=C_slot(t1,C_fix(0));
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[3],t3);
if(C_truep(t4)){
return(C_slot(t2,C_fix(1)));}
else{
t5=C_slot(t1,C_fix(1));
t8=t5;
t1=t8;
goto loop;}}}

/* k2704 */
static void C_ccall f_2706(C_word c,C_word t0,C_word t1){
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
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_symbolp(((C_word*)t0)[3]));}}

/* k3976 in loop in doloop887 in k4006 in k4004 in hash-table-resize! in k1720 */
static void C_ccall f_3977(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3977,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_slot(((C_word*)t0)[4],t1);
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_i_setslot(((C_word*)t0)[4],t1,t5);
t7=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:640: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_3964(t8,((C_word*)t0)[7],t7);}

/* k1833 in k1821 in k1809 in k1797 */
static void C_ccall f_1835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1843,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1847,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:146: g161 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[6],C_fix(3));}

/* f_1831 in k1821 in k1809 in k1797 */
static void C_ccall f_1831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1831,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* f_1843 in k1833 in k1821 in k1809 in k1797 */
static void C_ccall f_1843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1843,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k2725 in k2722 in recursive-atomic-hash in *equal?-hash in k1720 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:311: recursive-hash */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2743(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_xor(C_fix(99),((C_word*)t0)[6]));}}

/* k3952 in doloop887 in k4006 in k4004 in hash-table-resize! in k1720 */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3944(t3,((C_word*)t0)[4],t2);}

/* k1845 in k1833 in k1821 in k1809 in k1797 */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1855,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1859,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:146: g165 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[7],C_fix(2));}

/* k2722 in recursive-atomic-hash in *equal?-hash in k1720 */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_2727(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2737,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:310: g471 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,((C_word*)t0)[5]);}}

/* f_1855 in k1845 in k1833 in k1821 in k1809 in k1797 */
static void C_ccall f_1855(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1855,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k3595 in k3589 in k3581 in k3578 in k3576 in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
/* srfi-69.scm:579: *make-hash-table */
f_3477(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[9])[1],C_SCHEME_END_OF_LIST);}

/* hash-table-clear! in k4733 in k1720 */
static void C_ccall f_5115(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5115,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[94]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5121,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(1));
/* srfi-69.scm:983: vector-fill! */
t6=*((C_word*)lf[95]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,C_SCHEME_END_OF_LIST);}

/* k1857 in k1845 in k1833 in k1821 in k1809 in k1797 */
static void C_ccall f_1859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1867,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1871,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:146: g169 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[8],C_fix(1));}

/* hash-table-exists? in k4733 in k1720 */
static void C_ccall f_4830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4830,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[33],lf[91]);
t5=C_slot(t2,C_fix(1));
t6=C_slot(t2,C_fix(3));
t7=C_slot(t2,C_fix(10));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4842,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t5,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t9=C_block_size(t5);
/* srfi-69.scm:900: hash */
t10=t7;
((C_proc4)C_fast_retrieve_proc(t10))(4,t10,t8,t3,t9);}

/* k3589 in k3581 in k3578 in k3576 in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3590,2,t0,t1);}
if(C_truep(t1)){
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* srfi-69.scm:579: *make-hash-table */
f_3477(((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1],C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:576: warning */
t3=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[41],lf[45]);}}

/* loop in k5645 in k5637 in a5628 in k1720 */
static void C_fcall f_5698(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5698,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* srfi-69.scm:859: def */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5716,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:861: test */
t6=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[5],t5);}}

/* k2713 */
static void C_ccall f_2715(C_word c,C_word t0,C_word t1){
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
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_numberp(((C_word*)t0)[3]));}}

/* string-ci-hash in k1720 */
static void C_ccall f_3274(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_3274r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3274r(t0,t1,t2,t3);}}

static void C_ccall f_3274r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(11);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
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
t16=C_i_nullp(t15);
t17=(C_truep(t16)?lf[0]:C_i_car(t15));
t18=C_i_nullp(t15);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t15));
t20=C_i_check_string_2(t2,lf[23]);
t21=C_i_check_exact_2(t5,lf[23]);
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3298,a[2]=t1,a[3]=t5,a[4]=t17,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
t23=(C_truep(t13)?t13:C_block_size(t2));
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3334,a[2]=t22,a[3]=t2,a[4]=t9,a[5]=t23,tmp=(C_word)a,a+=6,tmp);
t25=C_block_size(t2);
/* srfi-69.scm:366: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(6,*((C_word*)lf[22]+1),t24,t9,C_fix(0),t25,lf[20]);}
else{
t23=t22;
f_3298(2,t23,t2);}}

/* f_1867 in k1857 in k1845 in k1833 in k1821 in k1809 in k1797 */
static void C_ccall f_1867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1867,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* *make-hash-function in k1720 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[41],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3428,3,t0,t1,t2);}
t3=t2;
t4=C_a_i_list(&a,10,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11]);
if(C_truep(C_u_i_memq(t3,t4))){
t5=C_rnd_fix();
t6=t2;
t7=C_a_i_list2(&a,2,((C_word*)t0)[6],((C_word*)t0)[7]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_truep(C_u_i_memq(t6,t7))?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3444,a[2]=t2,a[3]=t5,a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3449,a[2]=t2,a[3]=t5,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp)));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3454,a[2]=t2,a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1869 in k1857 in k1845 in k1833 in k1821 in k1809 in k1797 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1876,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1880,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:146: g173 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[9],C_fix(0));}

/* f_1876 in k1869 in k1857 in k1845 in k1833 in k1821 in k1809 in k1797 */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1876,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k4811 in loop in k4748 in hash-table-ref/default in k4733 in k1720 */
static void C_ccall f_4813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:891: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4798(t3,((C_word*)t0)[2],t2);}}

/* k1878 in k1869 in k1857 in k1845 in k1833 in k1821 in k1809 in k1797 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_fixnum_shift_left(t1,C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[2],t2);
t4=C_fixnum_shift_left(t3,C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[3],t4);
t6=C_fixnum_shift_left(t5,C_fix(1));
t7=C_fixnum_plus(((C_word*)t0)[4],t6);
t8=C_fixnum_shift_left(t7,C_fix(1));
t9=C_fixnum_plus(((C_word*)t0)[5],t8);
t10=C_fixnum_shift_left(t9,C_fix(1));
t11=C_fixnum_plus(((C_word*)t0)[6],t10);
t12=C_fixnum_shift_left(t11,C_fix(1));
t13=C_fixnum_plus(((C_word*)t0)[7],t12);
t14=C_fixnum_shift_left(t13,C_fix(1));
t15=C_fixnum_plus(((C_word*)t0)[8],t14);
t16=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_fixnum_times(C_fix(331804471),t15));}

/* f_1881 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1881,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(t2));}

/* k1887 */
static void C_ccall f_1888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:147: g177 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k1892 in k1741 in number-hash in k1720 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:158: g118 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4590 in k4584 in k4574 */
static void C_fcall f_4592(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:662: hash-table-resize! */
t2=*((C_word*)lf[78]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop2 in loop in hash-table-keys in k4733 in k1720 */
static void C_fcall f_5353(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5353,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1048: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5338(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(0));
t7=C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm:1049: loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* f_2292 in eq?-hash in k1720 */
static void C_ccall f_2292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2292,4,t0,t1,t2,t3);}
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2301,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2313,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:120: g333 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k3581 in k3578 in k3576 in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3583,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* srfi-69.scm:579: *make-hash-table */
f_3477(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:572: hash-for-test */
t4=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4841 in hash-table-exists? in k4733 in k1720 */
static void C_ccall f_4842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4842,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4856,a[2]=((C_word*)t0)[5],a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4856(t4,t3));}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4890,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word)li149),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4890(t7,((C_word*)t0)[6],t3);}}

/* f_2038 in symbol-hash in k1720 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2038,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2040,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(1));
/* srfi-69.scm:181: g243 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,t3);}

/* k2031 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_and(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_modulo(t2,((C_word*)t0)[4]));}

/* loop in k4841 in hash-table-exists? in k4733 in k1720 */
static C_word C_fcall f_4856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_slot(t1,C_fix(0));
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t4);}
else{
t5=C_slot(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}}

/* k3578 in k3576 in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:569: hash-table-canonical-length */
f_3400(t2,lf[25],((C_word*)((C_word*)t0)[2])[1]);}

/* k3576 in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3600,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:566: fp< */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]);}

/* k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_fcall f_3575(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3575,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[11],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li106),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3605(t6,t2,((C_word*)((C_word*)t0)[12])[1]);}

/* k3572 in k3570 in make-hash-table in k1720 */
static void C_fcall f_3573(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3573,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
t3=t2;
f_3575(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_i_car(((C_word*)((C_word*)t0)[12])[1]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3782,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:515: keyword? */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* k3570 in make-hash-table in k1720 */
static void C_fcall f_3571(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3571,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
t3=t2;
f_3573(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_i_car(((C_word*)((C_word*)t0)[12])[1]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3811,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:509: keyword? */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* eq?-hash in k1720 */
static void C_ccall f_2279(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_2279r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2279r(t0,t1,t2,t3);}}

static void C_ccall f_2279r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[0]:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_check_exact_2(t5,lf[14]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2292,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2319,a[2]=t13,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(t2))){
t15=C_fixnum_xor(t2,t9);
/* srfi-69.scm:234: g328 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);}
else{
if(C_truep(C_charp(t2))){
t15=C_fix(C_character_code(t2));
t16=C_fixnum_xor(t15,t9);
/* srfi-69.scm:234: g328 */
t17=t13;
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t1,t16,t5);}
else{
switch(t2){
case C_SCHEME_TRUE:
t15=C_fixnum_xor(C_fix(256),t9);
/* srfi-69.scm:234: g328 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);
case C_SCHEME_FALSE:
t15=C_fixnum_xor(C_fix(257),t9);
/* srfi-69.scm:234: g328 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);
default:
if(C_truep(C_i_nullp(t2))){
t15=C_fixnum_xor(C_fix(258),t9);
/* srfi-69.scm:234: g328 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);}
else{
if(C_truep(C_eofp(t2))){
t15=C_fixnum_xor(C_fix(259),t9);
/* srfi-69.scm:234: g328 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);}
else{
if(C_truep(C_i_symbolp(t2))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2244,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:225: g295 */
t16=t15;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,t2,t9);}
else{
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2260,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2267,a[2]=t9,a[3]=t13,a[4]=t1,a[5]=t5,a[6]=t14,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:228: g303 */
t17=t15;
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,t2);}}}}}}}

/* f_2271 in k2265 in eq?-hash in k1720 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2271,4,t0,t1,t2,t3);}
/* srfi-69.scm:167: *equal?-hash */
f_2629(t1,t2,t3);}

/* f_2246 */
static void C_ccall f_2246(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2246,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_string_hash(t2,t3));}

/* f_2244 in eq?-hash in k1720 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2244,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2246,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(1));
/* srfi-69.scm:181: g299 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,t3);}

/* loop in k5645 in k5637 in a5628 in k1720 */
static void C_fcall f_5660(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5660,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* srfi-69.scm:851: def */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_slot(t3,C_fix(1)));}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:855: loop */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* eqv?-hash in k1720 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_2563r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2563r(t0,t1,t2,t3);}}

static void C_ccall f_2563r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[0]:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_check_exact_2(t5,lf[16]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2576,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2603,a[2]=t13,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(t2))){
t15=C_fixnum_xor(t2,t9);
/* srfi-69.scm:261: g424 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);}
else{
if(C_truep(C_charp(t2))){
t15=C_fix(C_character_code(t2));
t16=C_fixnum_xor(t15,t9);
/* srfi-69.scm:261: g424 */
t17=t13;
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t1,t16,t5);}
else{
switch(t2){
case C_SCHEME_TRUE:
t15=C_fixnum_xor(C_fix(256),t9);
/* srfi-69.scm:261: g424 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);
case C_SCHEME_FALSE:
t15=C_fixnum_xor(C_fix(257),t9);
/* srfi-69.scm:261: g424 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);
default:
if(C_truep(C_i_nullp(t2))){
t15=C_fixnum_xor(C_fix(258),t9);
/* srfi-69.scm:261: g424 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);}
else{
if(C_truep(C_eofp(t2))){
t15=C_fixnum_xor(C_fix(259),t9);
/* srfi-69.scm:261: g424 */
t16=t13;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t15,t5);}
else{
if(C_truep(C_i_symbolp(t2))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2411,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:251: g344 */
t16=t15;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,t2,t9);}
else{
if(C_truep(C_i_numberp(t2))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2430,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:254: g352 */
t16=t15;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,t2,t9);}
else{
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2544,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2551,a[2]=t9,a[3]=t13,a[4]=t1,a[5]=t5,a[6]=t14,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:255: g399 */
t17=t15;
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,t2);}}}}}}}}

/* k4519 in k4516 in loop in k4429 in k4418 in *hash-table-update!/default in k1720 */
static void C_ccall f_4520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k2265 in eq?-hash in k1720 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2267,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_xor(C_fix(262),((C_word*)t0)[2]);
/* srfi-69.scm:234: g328 */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2271,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:229: g306 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[2]);}}

/* f_2260 in eq?-hash in k1720 */
static void C_ccall f_2260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2260,3,t0,t1,t2);}
t3=C_blockp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_not(t3));}

/* f_2012 in symbol-hash in k1720 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2012,4,t0,t1,t2,t3);}
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2021,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2033,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:120: g236 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k2595 */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_and(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_modulo(t2,((C_word*)t0)[4]));}

/* k4516 in loop in k4429 in k4418 in *hash-table-update!/default in k1720 */
static void C_ccall f_4518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4518,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:787: func */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:790: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4491(t3,((C_word*)t0)[3],t2);}}

/* f_2040 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2040,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_string_hash(t2,t3));}

/* f_5606 in k5600 in hash-table-map in k4733 in k1720 */
static void C_ccall f_5606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5606,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5612,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1116: func */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,t2,t3);}

/* k5600 in hash-table-map in k4733 in k1720 */
static void C_ccall f_5601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5606,a[2]=((C_word*)t0)[2],a[3]=((C_word)li187),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1116: *hash-table-fold */
f_5504(((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST);}

/* f_2585 */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2585,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_negate(t2));}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_2922 in k2912 in k2900 in k2888 in k2876 in k2864 in k2852 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2922,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* f_2910 in k2900 in k2888 in k2876 in k2864 in k2852 */
static void C_ccall f_2910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2910,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* *hash-table-update!/default in k1720 */
static void C_fcall f_4350(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4350,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_slot(t2,C_fix(2));
t7=C_fixnum_plus(t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4355,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4420,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t7,a[6]=t4,a[7]=t5,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:757: g1002 */
t10=t8;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t2,t7);}

/* k2912 in k2900 in k2888 in k2876 in k2864 in k2852 */
static void C_ccall f_2914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2914,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2926,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:146: g524 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[8],C_fix(1));}

/* f_4355 in *hash-table-update!/default in k1720 */
static void C_ccall f_4355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4355,4,t0,t1,t2,t3);}
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(5));
t6=C_slot(t2,C_fix(6));
t7=C_block_size(t4);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4365,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4374,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t7,a[6]=t3,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4414,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_a_i_times(&a,2,t7,t5);
/* srfi-69.scm:658: floor */
t12=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}

/* k2924 in k2912 in k2900 in k2888 in k2876 in k2864 in k2852 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2931,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2935,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:146: g528 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[9],C_fix(0));}

/* f_4577 in k4574 */
static void C_ccall f_4577(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4577,3,t0,t1,t2);}
if(C_truep(C_immp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_inexact_to_exact(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4574 */
static void C_ccall f_4576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4577,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4610,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_times(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
/* srfi-69.scm:659: floor */
t6=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k5645 in k5637 in a5628 in k1720 */
static void C_ccall f_5646(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5646,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5660,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word)li191),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5660(t7,((C_word*)t0)[7],t3);}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5698,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word)li192),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5698(t7,((C_word*)t0)[7],t3);}}

/* recursive-hash in *equal?-hash in k1720 */
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2743,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(4)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(99),t4));}
else{
if(C_truep(C_fixnump(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(t2,t4));}
else{
if(C_truep(C_charp(t2))){
t5=C_fix(C_character_code(t2));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_xor(t5,t4));}
else{
switch(t2){
case C_SCHEME_TRUE:
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(256),t4));
case C_SCHEME_FALSE:
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(257),t4));
default:
if(C_truep(C_i_nullp(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(258),t4));}
else{
if(C_truep(C_eofp(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_xor(C_fix(259),t4));}
else{
if(C_truep(C_i_symbolp(t2))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2817,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:324: g480 */
t6=t5;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t2,t4);}
else{
if(C_truep(C_i_numberp(t2))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2836,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:327: g488 */
t6=t5;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t2,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2950,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2957,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:328: g535 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}}}}}}}}}

/* k4584 in k4574 */
static void C_ccall f_4586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=t2;
f_4592(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[7],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4592(t3,C_SCHEME_FALSE);}}

/* f_3503 in make-hash-table in k1720 */
static void C_ccall f_3503(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3503,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=(C_truep(t2)?t2:C_eqp(*((C_word*)lf[35]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}
else{
t4=C_eqp(((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);
t5=(C_truep(t4)?t4:C_eqp(*((C_word*)lf[36]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)t0)[6]);}
else{
t6=C_eqp(((C_word*)t0)[7],((C_word*)((C_word*)t0)[3])[1]);
t7=(C_truep(t6)?t6:C_eqp(*((C_word*)lf[37]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)t0)[8]);}
else{
t8=C_eqp(((C_word*)t0)[9],((C_word*)((C_word*)t0)[3])[1]);
t9=(C_truep(t8)?t8:C_eqp(*((C_word*)lf[38]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,((C_word*)t0)[10]);}
else{
t10=C_eqp(((C_word*)t0)[11],((C_word*)((C_word*)t0)[3])[1]);
t11=(C_truep(t10)?t10:C_eqp(*((C_word*)lf[39]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,((C_word*)t0)[12]);}
else{
t12=C_eqp(((C_word*)t0)[13],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?((C_word*)t0)[14]:C_SCHEME_FALSE));}
else{
t13=C_eqp(*((C_word*)lf[40]+1),((C_word*)((C_word*)t0)[3])[1]);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_truep(t13)?((C_word*)t0)[14]:C_SCHEME_FALSE));}}}}}}}

/* make-hash-table in k1720 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+49)){
C_save_and_reclaim((void*)tr2r,(void*)f_3500r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3500r(t0,t1,t2);}}

static void C_ccall f_3500r(C_word t0,C_word t1,C_word t2){
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
C_word t19;
C_word t20;
C_word t21;
C_word *a=C_alloc(49);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=*((C_word*)lf[37]+1);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(307);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=lf[42];
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=lf[43];
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word)li103),tmp=(C_word)a,a+=16,tmp);
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3571,a[2]=t10,a[3]=t8,a[4]=t1,a[5]=t6,a[6]=t14,a[7]=t16,a[8]=t12,a[9]=((C_word*)t0)[7],a[10]=t17,a[11]=t2,a[12]=t4,tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_nullp(((C_word*)t4)[1]))){
t19=t18;
f_3571(t19,C_SCHEME_UNDEFINED);}
else{
t19=C_i_car(((C_word*)t4)[1]);
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3829,a[2]=t18,a[3]=t6,a[4]=t19,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:503: keyword? */
t21=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t21+1)))(3,t21,t20,t19);}}

/* f_2737 in k2722 in recursive-atomic-hash in *equal?-hash in k1720 */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2737,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_byteblockp(t2));}

/* f_2817 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2817,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(1));
/* srfi-69.scm:181: g484 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,t3);}

/* f_2819 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2819,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_string_hash(t2,t3));}

/* k5637 in a5628 in k1720 */
static void C_ccall f_5638(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5638,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=C_slot(((C_word*)t0)[2],C_fix(10));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5646,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t6=C_block_size(t2);
/* srfi-69.scm:846: hash */
t7=t4;
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[5],t6);}

/* f_2576 in eqv?-hash in k1720 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2576,4,t0,t1,t2,t3);}
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2585,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2597,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:120: g429 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* f_4557 in hash-table-set! in k1720 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4557,4,t0,t1,t2,t3);}
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(5));
t6=C_slot(t2,C_fix(6));
t7=C_block_size(t4);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4567,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4576,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t7,a[6]=t3,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4616,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_a_i_times(&a,2,t7,t5);
/* srfi-69.scm:658: floor */
t12=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}

/* hash-table-set! in k1720 */
static void C_ccall f_4550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4550,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[33],lf[87]);
t6=C_slot(t2,C_fix(2));
t7=C_fixnum_plus(t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4557,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4622,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t4,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:802: g1058 */
t10=t8;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t2,t7);}

/* f_4567 */
static void C_ccall f_4567(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4567,3,t0,t1,t2);}
if(C_truep(C_immp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_inexact_to_exact(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4304 in loop in k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:742: func */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k2111 in keyword-hash in k1720 */
static void C_ccall f_2112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2112,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[13]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2115,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2141,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2153,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:208: g279 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5313 in for-each-loop1270 in k5283 in alist->hash-table in k4733 in k1720 */
static void C_ccall f_5314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5305(t3,((C_word*)t0)[4],t2);}

/* loop2 in loop in hash-table-values in k4733 in k1720 */
static void C_fcall f_5411(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5411,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1063: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5396(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(1));
t7=C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm:1064: loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* f_2124 */
static void C_ccall f_2124(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2124,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_negate(t2));}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_2143 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2143,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_string_hash(t2,t3));}

/* f_2141 in k2111 in keyword-hash in k1720 */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2141,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2143,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(1));
/* srfi-69.scm:202: g283 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,t3);}

/* hash-table-for-each in k4733 in k1720 */
static void C_ccall f_5573(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5573,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[33],lf[107]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5579,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1105: ##sys#check-closure */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[107]);}

/* k5301 in k5283 in alist->hash-table in k4733 in k1720 */
static void C_ccall f_5303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* for-each-loop1270 in k5283 in alist->hash-table in k4733 in k1720 */
static void C_fcall f_5305(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5305,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5314,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-69.scm:1028: g1271 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* *hash-table-for-each in k4733 in k1720 */
static void C_fcall f_5441(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5441,NULL,3,t1,t2,t3);}
t4=C_slot(t2,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5452,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=t7,a[6]=((C_word)li179),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_5452(t9,t1,C_fix(0));}

/* f_2115 in k2111 in keyword-hash in k1720 */
static void C_ccall f_2115(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2115,4,t0,t1,t2,t3);}
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2124,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2136,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:120: g276 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k5578 in hash-table-for-each in k4733 in k1720 */
static void C_ccall f_5579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1106: *hash-table-for-each */
f_5441(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5567 in hash-table-fold in k4733 in k1720 */
static void C_ccall f_5568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1101: *hash-table-fold */
f_5504(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* hash-table-fold in k4733 in k1720 */
static void C_ccall f_5562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5562,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[33],lf[106]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5568,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:1100: ##sys#check-closure */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,lf[106]);}

/* loop in hash-table-keys in k4733 in k1720 */
static void C_fcall f_5338(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5338,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5353,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word)li171),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5353(t8,t1,t4,t3);}}

/* k3827 in make-hash-table in k1720 */
static void C_ccall f_3829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3829,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3571(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3831,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:504: ##sys#check-closure */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[41]);}}

/* hash-table-map in k4733 in k1720 */
static void C_ccall f_5595(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5595,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[33],lf[109]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5601,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1115: ##sys#check-closure */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[109]);}

/* k5589 in hash-table-walk in k4733 in k1720 */
static void C_ccall f_5590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1111: *hash-table-for-each */
f_5441(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* hash-table-keys in k4733 in k1720 */
static void C_ccall f_5325(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5325,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[101]);
t4=C_slot(t2,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5338,a[2]=t5,a[3]=t4,a[4]=t7,a[5]=((C_word)li172),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_5338(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* f_4341 in hash-table-update! in k1720 */
static void C_ccall f_4341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4341,2,t0,t1);}
/* srfi-69.scm:710: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[83],lf[81],lf[84],((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3809 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3811,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3573(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3813,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:510: ##sys#check-closure */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[41]);}}

/* k3812 in k3809 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_3573(t5,t4);}

/* k4407 in k4372 */
static void C_ccall f_4408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:659: g1015 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* hash-table-walk in k4733 in k1720 */
static void C_ccall f_5584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5584,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[33],lf[108]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5590,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1110: ##sys#check-closure */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[108]);}

/* k3710 in k3708 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:563: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3605(t4,((C_word*)t0)[6],t3);}

/* k3713 in k3708 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_fcall f_3715(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:563: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3605(t4,((C_word*)t0)[6],t3);}
else{
/* srfi-69.scm:555: error */
t2=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[7],lf[41],lf[61],((C_word*)t0)[3]);}}

/* k5087 in loop in doloop1203 in k5037 in hash-table-remove! in k4733 in k1720 */
static void C_ccall f_5089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]):C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3]));
t3=C_fixnum_difference(((C_word*)((C_word*)t0)[6])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
/* srfi-69.scm:977: loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_5072(t2,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[3]);}}

/* f_2456 in k2446 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2456,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k2446 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2456,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2460,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:146: g368 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(6));}

/* f_2444 */
static void C_ccall f_2444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2444,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k4311 in loop in k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4313,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:748: func */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:751: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4283(t3,((C_word*)t0)[3],t2);}}

/* k4314 in k4311 in loop in k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k5553 in fold2 in loop in *hash-table-fold in k4733 in k1720 */
static void C_ccall f_5554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1095: fold2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5530(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2900 in k2888 in k2876 in k2864 in k2852 */
static void C_ccall f_2902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2910,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2914,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:146: g520 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[7],C_fix(2));}

/* f_2430 in eqv?-hash in k1720 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2430,4,t0,t1,t2,t3);}
if(C_truep(C_i_flonump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2444,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2448,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:146: g364 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,C_fix(7));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2530,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2537,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:147: ##sys#number-hash-hook */
t6=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}}

/* loop in k4429 in k4418 in *hash-table-update!/default in k1720 */
static void C_fcall f_4443(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(9);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4443,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:768: func */
t4=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[9]);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4472,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t3,C_fix(1));
/* srfi-69.scm:774: func */
t8=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t6,t7);}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:777: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* loop in hash-table-values in k4733 in k1720 */
static void C_fcall f_5396(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5396,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5411,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word)li174),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5411(t8,t1,t4,t3);}}

/* k4429 in k4418 in *hash-table-update!/default in k1720 */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4430,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],t1);
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4443,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t5,a[11]=((C_word)li135),tmp=(C_word)a,a+=12,tmp));
t7=((C_word*)t5)[1];
f_4443(t7,((C_word*)t0)[10],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4491,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t5,a[11]=((C_word*)t0)[4],a[12]=((C_word)li136),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_4491(t7,((C_word*)t0)[10],t2);}}

/* hash-table-values in k4733 in k1720 */
static void C_ccall f_5383(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5383,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[102]);
t4=C_slot(t2,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5396,a[2]=t5,a[3]=t4,a[4]=t7,a[5]=((C_word)li175),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_5396(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d69_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d69_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(955)){
C_save(t1);
C_rereclaim2(955*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,119);
lf[1]=C_h_intern(&lf[1],20,"\003sysnumber-hash-hook");
lf[3]=C_h_intern(&lf[3],11,"number-hash");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_h_intern(&lf[5],5,"\000type");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid number");
lf[7]=C_h_intern(&lf[7],15,"object-uid-hash");
lf[8]=C_h_intern(&lf[8],11,"symbol-hash");
lf[9]=C_h_intern(&lf[9],17,"\003syscheck-keyword");
lf[10]=C_h_intern(&lf[10],11,"\000type-error");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a keyword");
lf[12]=C_h_intern(&lf[12],8,"keyword\077");
lf[13]=C_h_intern(&lf[13],12,"keyword-hash");
lf[14]=C_h_intern(&lf[14],8,"eq\077-hash");
lf[15]=C_h_intern(&lf[15],16,"hash-by-identity");
lf[16]=C_h_intern(&lf[16],9,"eqv\077-hash");
lf[17]=C_h_intern(&lf[17],11,"input-port\077");
lf[18]=C_h_intern(&lf[18],11,"equal\077-hash");
lf[19]=C_h_intern(&lf[19],4,"hash");
lf[20]=C_h_intern(&lf[20],11,"string-hash");
lf[21]=C_h_intern(&lf[21],13,"\003syssubstring");
lf[22]=C_h_intern(&lf[22],15,"\003syscheck-range");
lf[23]=C_h_intern(&lf[23],14,"string-ci-hash");
lf[24]=C_h_intern(&lf[24],14,"string-hash-ci");
lf[26]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\0013\376\003\000\000\002\376\377\001\000\000\002i\376\003\000\000\002\376\377\001\000\000\004\325\376\003\000\000\002\376\377\001\000\000\011\255\376\003\000\000\002\376\377\001\000\000\023]\376\003\000\000\002\376\377\001\000\000&\303\376\003\000\000\002\376\377\001"
"\000\000M\215\376\003\000\000\002\376\377\001\000\000\233\035\376\003\000\000\002\376\377\001\000\0016\077\376\003\000\000\002\376\377\001\000\002l\201\376\003\000\000\002\376\377\001\000\004\331\005\376\003\000\000\002\376\377\001\000\011\262\025\376\003\000\000\002\376\377\001\000\023dA\376\003\000\000"
"\002\376\377\001\000&\310\205\376\003\000\000\002\376\377\001\000M\221\037\376\003\000\000\002\376\377\001\000\233\042I\376\003\000\000\002\376\377\001\0016D\277\376\003\000\000\002\376\377\001\002l\211\207\376\003\000\000\002\376\377\001\004\331\023\027\376\003\000\000\002\376\377\001\011\262&1"
"\376\003\000\000\002\376\377\001\023dLq\376\003\000\000\002\376\377\001&\310\230\373\376\003\000\000\002\376\377\001\077\377\377\377\376\377\016");
lf[28]=C_h_intern(&lf[28],19,"\052make-hash-function");
lf[29]=C_h_intern(&lf[29],13,"\000bounds-error");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\030Hash value out of bounds");
lf[31]=C_h_intern(&lf[31],15,"\003syscheck-exact");
lf[33]=C_h_intern(&lf[33],10,"hash-table");
lf[34]=C_h_intern(&lf[34],11,"make-vector");
lf[35]=C_h_intern(&lf[35],3,"eq\077");
lf[36]=C_h_intern(&lf[36],4,"eqv\077");
lf[37]=C_h_intern(&lf[37],6,"equal\077");
lf[38]=C_h_intern(&lf[38],8,"string=\077");
lf[39]=C_h_intern(&lf[39],11,"string-ci=\077");
lf[40]=C_h_intern(&lf[40],1,"=");
lf[41]=C_h_intern(&lf[41],15,"make-hash-table");
lf[42]=C_decode_literal(C_heaptop,"\376U0.5\000");
lf[43]=C_decode_literal(C_heaptop,"\376U0.8000000000000000444089209850062616169452667236328125\000");
lf[44]=C_h_intern(&lf[44],7,"warning");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\033user test without user hash");
lf[46]=C_h_intern(&lf[46],5,"error");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\036min-load greater than max-load");
lf[48]=C_h_intern(&lf[48],3,"fp<");
lf[49]=C_h_intern(&lf[49],5,"\000test");
lf[50]=C_h_intern(&lf[50],17,"\003syscheck-closure");
lf[51]=C_h_intern(&lf[51],5,"\000hash");
lf[52]=C_h_intern(&lf[52],5,"\000size");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[54]=C_h_intern(&lf[54],8,"\000initial");
lf[55]=C_h_intern(&lf[55],9,"\000min-load");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid min-load");
lf[57]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[58]=C_decode_literal(C_heaptop,"\376U1.0\000");
lf[59]=C_h_intern(&lf[59],17,"\003syscheck-inexact");
lf[60]=C_h_intern(&lf[60],9,"\000max-load");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid max-load");
lf[62]=C_h_intern(&lf[62],10,"\000weak-keys");
lf[63]=C_h_intern(&lf[63],12,"\000weak-values");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\017unknown keyword");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\025missing keyword value");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\017missing keyword");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[68]=C_h_intern(&lf[68],11,"hash-table\077");
lf[69]=C_h_intern(&lf[69],15,"hash-table-size");
lf[70]=C_h_intern(&lf[70],31,"hash-table-equivalence-function");
lf[71]=C_h_intern(&lf[71],24,"hash-table-hash-function");
lf[72]=C_h_intern(&lf[72],19,"hash-table-min-load");
lf[73]=C_h_intern(&lf[73],19,"hash-table-max-load");
lf[74]=C_h_intern(&lf[74],20,"hash-table-weak-keys");
lf[75]=C_h_intern(&lf[75],22,"hash-table-weak-values");
lf[76]=C_h_intern(&lf[76],23,"hash-table-has-initial\077");
lf[77]=C_h_intern(&lf[77],18,"hash-table-initial");
lf[78]=C_h_intern(&lf[78],18,"hash-table-resize!");
lf[80]=C_h_intern(&lf[80],15,"hash-table-copy");
lf[81]=C_h_intern(&lf[81],18,"hash-table-update!");
lf[82]=C_h_intern(&lf[82],5,"floor");
lf[83]=C_h_intern(&lf[83],13,"\000access-error");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[86]=C_h_intern(&lf[86],26,"hash-table-update!/default");
lf[87]=C_h_intern(&lf[87],15,"hash-table-set!");
lf[88]=C_h_intern(&lf[88],19,"\003sysundefined-value");
lf[89]=C_h_intern(&lf[89],14,"hash-table-ref");
lf[90]=C_h_intern(&lf[90],22,"hash-table-ref/default");
lf[91]=C_h_intern(&lf[91],18,"hash-table-exists\077");
lf[92]=C_h_intern(&lf[92],18,"hash-table-delete!");
lf[93]=C_h_intern(&lf[93],18,"hash-table-remove!");
lf[94]=C_h_intern(&lf[94],17,"hash-table-clear!");
lf[95]=C_h_intern(&lf[95],12,"vector-fill!");
lf[97]=C_h_intern(&lf[97],17,"hash-table-merge!");
lf[98]=C_h_intern(&lf[98],16,"hash-table-merge");
lf[99]=C_h_intern(&lf[99],17,"hash-table->alist");
lf[100]=C_h_intern(&lf[100],17,"alist->hash-table");
lf[101]=C_h_intern(&lf[101],15,"hash-table-keys");
lf[102]=C_h_intern(&lf[102],17,"hash-table-values");
lf[104]=C_h_intern(&lf[104],8,"for-each");
lf[106]=C_h_intern(&lf[106],15,"hash-table-fold");
lf[107]=C_h_intern(&lf[107],19,"hash-table-for-each");
lf[108]=C_h_intern(&lf[108],15,"hash-table-walk");
lf[109]=C_h_intern(&lf[109],14,"hash-table-map");
lf[110]=C_h_intern(&lf[110],9,"\003sysprint");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\002)>");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\016#<hash-table (");
lf[113]=C_h_intern(&lf[113],27,"\003sysregister-record-printer");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[115]=C_h_intern(&lf[115],18,"getter-with-setter");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\035(hash-table-ref ht key . def)");
lf[117]=C_h_intern(&lf[117],17,"register-feature!");
lf[118]=C_h_intern(&lf[118],7,"srfi-69");
C_register_lf2(lf,119,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1721,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:40: register-feature! */
t3=*((C_word*)lf[117]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* f_2411 in eqv?-hash in k1720 */
static void C_ccall f_2411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2411,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2413,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(1));
/* srfi-69.scm:181: g348 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,t3);}

/* f_2413 */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2413,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_string_hash(t2,t3));}

/* hash-table? in k1720 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3838,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[33]));}

/* loop in k4631 in k4620 in hash-table-set! in k1720 */
static void C_fcall f_4647(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4647,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(((C_word*)t0)[7],C_fix(2),((C_word*)t0)[8]));}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_setslot(t3,C_fix(1),((C_word*)t0)[3]));}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:819: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k3830 in k3827 in make-hash-table in k1720 */
static void C_ccall f_3831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_3571(t5,t4);}

/* k3209 in string-hash in k1720 */
static void C_ccall f_3210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* srfi-69.scm:355: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(6,*((C_word*)lf[22]+1),t2,((C_word*)t0)[5],C_fix(0),t3,lf[20]);}

/* k3211 in k3209 in string-hash in k1720 */
static void C_ccall f_3212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:356: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(5,*((C_word*)lf[21]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4631 in k4620 in hash-table-set! in k1720 */
static void C_ccall f_4632(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4632,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4636,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4647,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t6,a[10]=((C_word)li142),tmp=(C_word)a,a+=11,tmp));
t8=((C_word*)t6)[1];
f_4647(t8,t3,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4690,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t6,a[10]=((C_word*)t0)[5],a[11]=((C_word)li143),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_4690(t8,t3,t2);}}

/* k4635 in k4631 in k4620 in hash-table-set! in k1720 */
static void C_ccall f_4636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[88]+1));}

/* f_3057 in k3029 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_3057(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3057,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_specialp(t2));}

/* loop in *hash-table-fold in k4733 in k1720 */
static void C_fcall f_5515(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5515,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5530,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word)li181),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_5530(t8,t1,t4,t3);}}

/* f_3201 in k3173 in string-hash in k1720 */
static void C_ccall f_3201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3201,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_string_hash(t2,t3));}

/* k3203 in k3173 in string-hash in k1720 */
static void C_ccall f_3205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:358: g631 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4620 in hash-table-set! in k1720 */
static void C_ccall f_4622(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4622,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(10));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4632,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:807: hash */
t7=t2;
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[5],t5);}

/* loop in k4631 in k4620 in hash-table-set! in k1720 */
static void C_fcall f_4690(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4690,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(((C_word*)t0)[7],C_fix(2),((C_word*)t0)[8]));}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4716,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:827: test */
t6=((C_word*)t0)[10];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}

/* k3042 */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_fixnum_plus(((C_word*)t0)[3],C_fix(260)):C_fixnum_plus(((C_word*)t0)[3],C_fix(261))));}

/* k4086 in doloop914 in k4027 in *hash-table-copy in k1720 */
static void C_ccall f_4087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4042(t4,((C_word*)t0)[5],t3);}

/* hash-table-weak-values in k1720 */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3898,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[75]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(8)));}

/* *hash-table-fold in k4733 in k1720 */
static void C_fcall f_5504(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5504,NULL,4,t1,t2,t3,t4);}
t5=C_slot(t2,C_fix(1));
t6=C_block_size(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5515,a[2]=t6,a[3]=t5,a[4]=t8,a[5]=t3,a[6]=((C_word)li182),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_5515(t10,t1,C_fix(0),t4);}

/* copy-loop in doloop914 in k4027 in *hash-table-copy in k1720 */
static void C_fcall f_4092(C_word t0,C_word t1,C_word t2){
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
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4092,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=C_a_i_cons(&a,2,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4110,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_slot(t2,C_fix(1));
/* srfi-69.scm:686: copy-loop */
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k4609 in k4574 */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:659: g1071 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k4615 */
static void C_ccall f_4616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:658: g1068 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* hash-table-max-load in k1720 */
static void C_ccall f_3880(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3880,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[73]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* f_3032 in k3029 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_3032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3032,4,t0,t1,t2,t3);}
t4=C_peek_fixnum(t2,C_fix(0));
t5=C_fixnum_shift_left(t4,C_fix(4));
t6=C_fixnum_xor(t5,t3);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3044,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:281: input-port? */
t8=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k3029 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3031,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3032,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:332: g556 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3057,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:333: g560 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}}

/* hash-table-weak-keys in k1720 */
static void C_ccall f_3889(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3889,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[74]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(7)));}

/* hash-table-min-load in k1720 */
static void C_ccall f_3871(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3871,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[72]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(5)));}

/* k4382 in k4372 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=t2;
f_4390(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[7],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4390(t3,C_SCHEME_FALSE);}}

/* k4388 in k4382 in k4372 */
static void C_fcall f_4390(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:662: hash-table-resize! */
t2=*((C_word*)lf[78]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2518 in k2506 in k2494 in k2482 in k2470 in k2458 in k2446 */
static void C_ccall f_2520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2525,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2529,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:146: g392 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[9],C_fix(0));}

/* k2536 */
static void C_ccall f_2537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:147: g396 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* f_4365 */
static void C_ccall f_4365(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4365,3,t0,t1,t2);}
if(C_truep(C_immp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_inexact_to_exact(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2549 in eqv?-hash in k1720 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_xor(C_fix(262),((C_word*)t0)[2]);
/* srfi-69.scm:261: g424 */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2555,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:256: g402 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[2]);}}

/* k2527 in k2518 in k2506 in k2494 in k2482 in k2470 in k2458 in k2446 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_fixnum_shift_left(t1,C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[2],t2);
t4=C_fixnum_shift_left(t3,C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[3],t4);
t6=C_fixnum_shift_left(t5,C_fix(1));
t7=C_fixnum_plus(((C_word*)t0)[4],t6);
t8=C_fixnum_shift_left(t7,C_fix(1));
t9=C_fixnum_plus(((C_word*)t0)[5],t8);
t10=C_fixnum_shift_left(t9,C_fix(1));
t11=C_fixnum_plus(((C_word*)t0)[6],t10);
t12=C_fixnum_shift_left(t11,C_fix(1));
t13=C_fixnum_plus(((C_word*)t0)[7],t12);
t14=C_fixnum_shift_left(t13,C_fix(1));
t15=C_fixnum_plus(((C_word*)t0)[8],t14);
t16=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_fixnum_times(C_fix(331804471),t15));}

/* f_2525 in k2518 in k2506 in k2494 in k2482 in k2470 in k2458 in k2446 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2525,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4141,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_fixnum_plus(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:718: g949 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],t3);}

/* f_4144 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4144,4,t0,t1,t2,t3);}
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(5));
t6=C_slot(t2,C_fix(6));
t7=C_block_size(t4);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4154,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4163,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t7,a[6]=t3,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4203,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_a_i_times(&a,2,t7,t5);
/* srfi-69.scm:658: floor */
t12=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}

/* f_2555 in k2549 in eqv?-hash in k1720 */
static void C_ccall f_2555(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2555,4,t0,t1,t2,t3);}
/* srfi-69.scm:167: *equal?-hash */
f_2629(t1,t2,t3);}

/* loop in doloop1203 in k5037 in hash-table-remove! in k4733 in k1720 */
static void C_fcall f_5072(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5072,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5089,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
t7=C_slot(t4,C_fix(0));
t8=C_slot(t4,C_fix(1));
/* srfi-69.scm:970: func */
t9=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t6,t7,t8);}}

/* k5620 in k5618 */
static void C_ccall f_5621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1126: ##sys#print */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* a5628 in k1720 */
static void C_ccall f_5629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_5629r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5629r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5629r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(12);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5735,a[2]=t3,a[3]=t2,a[4]=((C_word)li190),tmp=(C_word)a,a+=5,tmp):C_i_car(t4));
t7=C_i_check_structure_2(t2,lf[33],lf[89]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5638,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:842: ##sys#check-closure */
t9=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t6,lf[89]);}

/* hash-table-update! in k1720 */
static void C_ccall f_4130(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr5r,(void*)f_4130r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_4130r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_4130r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4135,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t5))){
t7=C_slot(t2,C_fix(9));
if(C_truep(t7)){
t8=t6;
f_4135(t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4341,a[2]=t3,a[3]=t2,a[4]=((C_word)li130),tmp=(C_word)a,a+=5,tmp);
t9=t6;
f_4135(t9,t8);}}
else{
t7=t6;
f_4135(t7,C_i_car(t5));}}

/* k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:716: ##sys#check-closure */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],lf[81]);}

/* k4133 in hash-table-update! in k1720 */
static void C_fcall f_4135(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4135,NULL,2,t0,t1);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[33],lf[81]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:715: ##sys#check-closure */
t4=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[81]);}

/* f_2544 in eqv?-hash in k1720 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2544,3,t0,t1,t2);}
t3=C_blockp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_not(t3));}

/* k5060 in doloop1203 in k5037 in hash-table-remove! in k4733 in k1720 */
static void C_ccall f_5061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5049(t3,((C_word*)t0)[4],t2);}

/* k5611 */
static void C_ccall f_5612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5612,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,t1,((C_word*)t0)[3]));}

/* k5613 in k4733 in k1720 */
static void C_ccall f_5614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_5616 in k4733 in k1720 */
static void C_ccall f_5616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5616,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5619,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1124: ##sys#print */
t5=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[112],C_SCHEME_FALSE,t3);}

/* k5618 */
static void C_ccall f_5619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(2));
/* srfi-69.scm:1125: ##sys#print */
t4=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2942 */
static void C_ccall f_2943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:147: g532 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* f_2931 in k2924 in k2912 in k2900 in k2888 in k2876 in k2864 in k2852 */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2931,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* f_2936 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2936,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(t2));}

/* k2933 in k2924 in k2912 in k2900 in k2888 in k2876 in k2864 in k2852 */
static void C_ccall f_2935(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_fixnum_shift_left(t1,C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[2],t2);
t4=C_fixnum_shift_left(t3,C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[3],t4);
t6=C_fixnum_shift_left(t5,C_fix(1));
t7=C_fixnum_plus(((C_word*)t0)[4],t6);
t8=C_fixnum_shift_left(t7,C_fix(1));
t9=C_fixnum_plus(((C_word*)t0)[5],t8);
t10=C_fixnum_shift_left(t9,C_fix(1));
t11=C_fixnum_plus(((C_word*)t0)[6],t10);
t12=C_fixnum_shift_left(t11,C_fix(1));
t13=C_fixnum_plus(((C_word*)t0)[7],t12);
t14=C_fixnum_shift_left(t13,C_fix(1));
t15=C_fixnum_plus(((C_word*)t0)[8],t14);
t16=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_fixnum_times(C_fix(331804471),t15));}

/* f_4154 */
static void C_ccall f_4154(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4154,3,t0,t1,t2);}
if(C_truep(C_immp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_inexact_to_exact(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_3325 in k3297 in string-ci-hash in k1720 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3325,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_string_ci_hash(t2,t3));}

/* k3318 */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_and(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_modulo(t2,((C_word*)t0)[4]));}

/* f_2969 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2969,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_string_hash(t2,t3));}

/* k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2968,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2969,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:329: g541 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:330: g545 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3002,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:331: g549 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:332: g553 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}}}}

/* f_2964 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2964,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_byteblockp(t2));}

/* f_2516 in k2506 in k2494 in k2482 in k2470 in k2458 in k2446 */
static void C_ccall f_2516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2516,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* hash-table-remove! in k4733 in k1720 */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5032,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[33],lf[93]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5038,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:960: ##sys#check-closure */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[93]);}

/* k5037 in hash-table-remove! in k4733 in k1720 */
static void C_ccall f_5038(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5038,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_block_size(t2);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5049,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t7,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word)li155),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_5049(t9,((C_word*)t0)[4],C_fix(0));}

/* f_3027 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3027,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_portp(t2));}

/* f_2530 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2530,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(t2));}

/* f_2950 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2950,3,t0,t1,t2);}
t3=C_blockp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_not(t3));}

/* k3327 in k3297 in string-ci-hash in k1720 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:370: g674 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2957,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_xor(C_fix(262),((C_word*)t0)[3]));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2964,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:329: g538 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}}

/* f_2504 in k2494 in k2482 in k2470 in k2458 in k2446 */
static void C_ccall f_2504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2504,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k3010 in k3016 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(((C_word*)t0)[3],t1));}

/* loop in k4429 in k4418 in *hash-table-update!/default in k1720 */
static void C_fcall f_4491(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4491,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:781: func */
t4=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[9]);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4518,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=t2,a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:786: test */
t6=((C_word*)t0)[11];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}

/* k3016 */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3017,2,t0,t1);}
t2=C_fixnum_shift_left(t1,C_fix(16));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:277: recursive-atomic-hash */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2690(t5,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2506 in k2494 in k2482 in k2470 in k2458 in k2446 */
static void C_ccall f_2508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2516,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2520,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:146: g388 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[8],C_fix(1));}

/* f_3002 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_3002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3002,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3017,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* srfi-69.scm:276: recursive-atomic-hash */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2690(t6,t4,t5,((C_word*)t0)[3],t3);}

/* loop in k4932 in hash-table-delete! in k4733 in k1720 */
static void C_fcall f_4991(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4991,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5008,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
t7=C_slot(t4,C_fix(0));
/* srfi-69.scm:947: test */
t8=((C_word*)t0)[7];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t6,((C_word*)t0)[8],t7);}}

/* f_4375 in k4372 */
static void C_ccall f_4375(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4375,3,t0,t1,t2);}
if(C_truep(C_immp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_inexact_to_exact(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4372 */
static void C_ccall f_4374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4375,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4408,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_times(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
/* srfi-69.scm:659: floor */
t6=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* doloop1203 in k5037 in hash-table-remove! in k4733 in k1720 */
static void C_fcall f_5049(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5049,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),((C_word*)((C_word*)t0)[4])[1]));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5061,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[6],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5072,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[7],a[7]=((C_word)li154),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_5072(t8,t3,C_SCHEME_FALSE,t4);}}

/* k4418 in *hash-table-update!/default in k1720 */
static void C_ccall f_4420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4420,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(10));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4430,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:762: hash */
t7=t2;
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[4],t5);}

/* f_3062 in k3059 in k3029 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_3062(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3062,4,t0,t1,t2,t3);}
t4=C_peek_fixnum(t2,C_fix(0));
/* srfi-69.scm:286: vector-hash */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2633(t5,t1,t2,t4,((C_word*)t0)[3],C_fix(1),t3);}

/* k3059 in k3029 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:333: g563 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:334: g567 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* ##sys#number-hash-hook in k1720 */
static void C_ccall f_1724(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1724,4,t0,t1,t2,t3);}
/* srfi-69.scm:143: *equal?-hash */
f_2629(t1,t2,t3);}

/* f_2301 */
static void C_ccall f_2301(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2301,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_negate(t2));}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1720 */
static void C_ccall f_1721(C_word c,C_word t0,C_word t1){
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
C_word ab[131],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1721,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! hash-default-randomization ...) */,C_rnd_fix());
t3=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#number-hash-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1724,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[3]+1 /* (set! number-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1730,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! object-uid-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1926,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[8]+1 /* (set! symbol-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1997,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[9]+1 /* (set! ##sys#check-keyword ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2076,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[13]+1 /* (set! keyword-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2100,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[14]+1 /* (set! eq?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2279,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[15]+1 /* (set! hash-by-identity ...) */,*((C_word*)lf[14]+1));
t11=C_mutate((C_word*)lf[16]+1 /* (set! eqv?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[2] /* (set! *equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[18]+1 /* (set! equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3083,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[19]+1 /* (set! hash ...) */,*((C_word*)lf[18]+1));
t15=C_mutate((C_word*)lf[20]+1 /* (set! string-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3150,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[23]+1 /* (set! string-ci-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3274,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[24]+1 /* (set! string-hash-ci ...) */,*((C_word*)lf[23]+1));
t18=C_mutate(&lf[25] /* (set! constant701 ...) */,lf[26]);
t19=C_mutate(&lf[27] /* (set! hash-table-canonical-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3400,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t20=*((C_word*)lf[14]+1);
t21=*((C_word*)lf[16]+1);
t22=*((C_word*)lf[18]+1);
t23=*((C_word*)lf[19]+1);
t24=*((C_word*)lf[20]+1);
t25=*((C_word*)lf[24]+1);
t26=*((C_word*)lf[3]+1);
t27=*((C_word*)lf[7]+1);
t28=*((C_word*)lf[8]+1);
t29=*((C_word*)lf[13]+1);
t30=C_mutate((C_word*)lf[28]+1 /* (set! *make-hash-function ...) */,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3428,a[2]=t20,a[3]=t21,a[4]=t22,a[5]=t23,a[6]=t24,a[7]=t25,a[8]=t26,a[9]=t27,a[10]=t28,a[11]=t29,a[12]=((C_word)li101),tmp=(C_word)a,a+=13,tmp));
t31=C_mutate(&lf[32] /* (set! *make-hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3477,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t32=*((C_word*)lf[35]+1);
t33=*((C_word*)lf[36]+1);
t34=*((C_word*)lf[37]+1);
t35=*((C_word*)lf[38]+1);
t36=*((C_word*)lf[39]+1);
t37=*((C_word*)lf[40]+1);
t38=*((C_word*)lf[14]+1);
t39=*((C_word*)lf[16]+1);
t40=*((C_word*)lf[18]+1);
t41=*((C_word*)lf[19]+1);
t42=*((C_word*)lf[20]+1);
t43=*((C_word*)lf[24]+1);
t44=*((C_word*)lf[3]+1);
t45=C_mutate((C_word*)lf[41]+1 /* (set! make-hash-table ...) */,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3500,a[2]=t32,a[3]=t38,a[4]=t33,a[5]=t39,a[6]=t34,a[7]=t40,a[8]=t35,a[9]=t42,a[10]=t36,a[11]=t43,a[12]=t37,a[13]=t44,a[14]=((C_word)li107),tmp=(C_word)a,a+=15,tmp));
t46=C_mutate((C_word*)lf[68]+1 /* (set! hash-table? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3838,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[69]+1 /* (set! hash-table-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3844,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[70]+1 /* (set! hash-table-equivalence-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3853,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[71]+1 /* (set! hash-table-hash-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3862,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[72]+1 /* (set! hash-table-min-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3871,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[73]+1 /* (set! hash-table-max-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3880,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[74]+1 /* (set! hash-table-weak-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3889,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[75]+1 /* (set! hash-table-weak-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3898,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[76]+1 /* (set! hash-table-has-initial? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3907,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[77]+1 /* (set! hash-table-initial ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3919,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[78]+1 /* (set! hash-table-resize! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3999,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate(&lf[79] /* (set! *hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4020,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[80]+1 /* (set! hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4121,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t59=*((C_word*)lf[35]+1);
t60=C_mutate((C_word*)lf[81]+1 /* (set! hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4130,a[2]=t59,a[3]=((C_word)li131),tmp=(C_word)a,a+=4,tmp));
t61=*((C_word*)lf[35]+1);
t62=C_mutate(&lf[85] /* (set! *hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4350,a[2]=t61,a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp));
t63=C_mutate((C_word*)lf[86]+1 /* (set! hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4539,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t64=*((C_word*)lf[35]+1);
t65=C_mutate((C_word*)lf[87]+1 /* (set! hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4550,a[2]=t64,a[3]=((C_word)li144),tmp=(C_word)a,a+=4,tmp));
t66=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t67=*((C_word*)lf[35]+1);
t68=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5629,a[2]=t67,a[3]=((C_word)li193),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:835: getter-with-setter */
t69=*((C_word*)lf[115]+1);
((C_proc5)(void*)(*((C_word*)t69+1)))(5,t69,t66,t68,*((C_word*)lf[87]+1),lf[116]);}

/* k4413 */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:658: g1012 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k2494 in k2482 in k2470 in k2458 in k2446 */
static void C_ccall f_2496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2504,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2508,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:146: g384 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[7],C_fix(2));}

/* f_2492 in k2482 in k2470 in k2458 in k2446 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2492,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k3692 in k3687 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_fcall f_3694(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:563: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3605(t4,((C_word*)t0)[6],t3);}
else{
/* srfi-69.scm:550: error */
t2=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[7],lf[41],lf[56],((C_word*)t0)[3]);}}

/* f_2480 in k2470 in k2458 in k2446 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2480,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* k3689 in k3687 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:563: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3605(t4,((C_word*)t0)[6],t3);}

/* k2482 in k2470 in k2458 in k2446 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2484,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2492,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2496,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:146: g380 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[6],C_fix(3));}

/* k3335 in k3333 in string-ci-hash in k1720 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:368: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(5,*((C_word*)lf[21]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3333 in string-ci-hash in k1720 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* srfi-69.scm:367: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(6,*((C_word*)lf[22]+1),t2,((C_word*)t0)[5],C_fix(0),t3,lf[20]);}

/* k2151 in k2111 in keyword-hash in k1720 */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:208: g271 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2318 in eq?-hash in k1720 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:234: g328 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2470 in k2458 in k2446 */
static void C_ccall f_2472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2480,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2484,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:146: g376 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],C_fix(4));}

/* k2311 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_and(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_modulo(t2,((C_word*)t0)[4]));}

/* f_2468 in k2458 in k2446 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2468,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_subbyte(t2,t3));}

/* f_3678 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3678,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2458 in k2446 */
static void C_ccall f_2460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2468,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2472,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:146: g372 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_fix(5));}

/* f_3096 in equal?-hash in k1720 */
static void C_ccall f_3096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3096,4,t0,t1,t2,t3);}
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3105,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3117,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:120: g597 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* f_2980 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2980,4,t0,t1,t2,t3);}
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2989,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t2,C_fix(0));
/* srfi-69.scm:273: recursive-atomic-hash */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2690(t7,t5,t6,((C_word*)t0)[3],t3);}

/* hash-table-copy in k1720 */
static void C_ccall f_4121(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4121,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[80]);
/* srfi-69.scm:695: *hash-table-copy */
f_4020(t1,t2);}

/* k2988 */
static void C_ccall f_2989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(((C_word*)t0)[3],t1));}

/* equal?-hash in k1720 */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3083r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3083r(t0,t1,t2,t3);}}

static void C_ccall f_3083r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[0]:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_check_exact_2(t5,lf[19]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3096,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3123,a[2]=t13,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:342: *equal?-hash */
f_2629(t14,t2,t9);}

/* loop in vector-hash in *equal?-hash in k1720 */
static void C_fcall f_2648(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2648,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_fixnum_shift_left(t2,C_fix(4));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2676,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[2],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t8=C_slot(((C_word*)t0)[3],t3);
t9=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:303: recursive-hash */
t10=((C_word*)((C_word*)t0)[5])[1];
f_2743(t10,t7,t8,t9,((C_word*)t0)[6]);}}

/* k4109 in copy-loop in doloop914 in k4027 in *hash-table-copy in k1720 */
static void C_ccall f_4110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4110,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_3072 in k3059 in k3029 in k2966 in k2955 in recursive-hash in *equal?-hash in k1720 */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3072,4,t0,t1,t2,t3);}
/* srfi-69.scm:289: vector-hash */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2633(t4,t1,t2,C_fix(0),((C_word*)t0)[3],C_fix(0),t3);}

/* k4471 in loop in k4429 in k4418 in *hash-table-update!/default in k1720 */
static void C_ccall f_4472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k3687 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3688,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[3];
if(C_truep(C_flonum_lessp(lf[57],t4))){
t5=((C_word*)t0)[3];
t6=t3;
f_3694(t6,C_flonum_lessp(t5,lf[58]));}
else{
t5=t3;
f_3694(t5,C_SCHEME_FALSE);}}

/* vector-hash in *equal?-hash in k1720 */
static void C_fcall f_2633(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2633,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_block_size(t2);
t8=C_fixnum_xor(t3,t6);
t9=C_fixnum_plus(t7,t8);
t10=C_i_fixnum_min(C_fix(4),t7);
t11=C_fixnum_difference(t10,t5);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2648,a[2]=t13,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=((C_word)li54),tmp=(C_word)a,a+=8,tmp));
t15=((C_word*)t13)[1];
f_2648(t15,t1,t9,t5,t11);}

/* k4253 in loop in k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:729: func */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* *equal?-hash in k1720 */
static void C_fcall f_2629(C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2629,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=t9,a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2690,a[2]=t9,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2743,a[2]=t7,a[3]=t5,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp));
/* srfi-69.scm:337: recursive-hash */
t13=((C_word*)t9)[1];
f_2743(t13,t1,t2,C_fix(0),t3);}

/* k4451 in loop in k4429 in k4418 in *hash-table-update!/default in k1720 */
static void C_ccall f_4452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4452,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=t1;
t7=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k4240 in loop in k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_ccall f_4241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4241,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=t1;
t7=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k3659 in k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_fixnum_min(C_fix(1073741823),((C_word*)t0)[2]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:563: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3605(t5,((C_word*)t0)[6],t4);}

/* f_1771 in k1741 in number-hash in k1720 */
static void C_ccall f_1771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1771,4,t0,t1,t2,t3);}
if(C_truep(C_fixnump(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fixnum_xor(t2,t3));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:151: g133 */
t5=t4;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}}

/* loop in k4218 in k4207 in k4140 in k4138 in k4133 in hash-table-update! in k1720 */
static void C_fcall f_4232(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(13);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4232,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4254,a[2]=((C_word*)t0)[8],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:729: thunk */
t5=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4264,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t3,C_fix(1));
/* srfi-69.scm:735: func */
t8=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t6,t7);}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:738: loop */
t12=t1;
t13=t6;
t1=t12;
t2=t13;
goto loop;}}}

/* f_1781 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1781,4,t0,t1,t2,t3);}
if(C_truep(C_i_flonump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1795,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1799,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:146: g145 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,C_fix(7));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1881,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1888,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:147: ##sys#number-hash-hook */
t6=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}}

/* k2602 in eqv?-hash in k1720 */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:261: g424 */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* fold2 in loop in *hash-table-fold in k4733 in k1720 */
static void C_fcall f_5530(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5530,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1093: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5515(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5554,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t4,C_fix(0));
t8=C_slot(t4,C_fix(1));
/* srfi-69.scm:1096: func */
t9=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t9))(5,t9,t6,t7,t8,t3);}}

/* f_1754 */
static void C_ccall f_1754(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1754,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_negate(t2));}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* object-uid-hash in k1720 */
static void C_ccall f_1926(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_1926r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1926r(t0,t1,t2,t3);}}

static void C_ccall f_1926r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(11);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[0]:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_check_exact_2(t5,lf[7]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1939,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1965,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1971,a[2]=t13,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:172: g208 */
t16=t14;
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t15,t2,t9);}

/* k1764 */
static void C_ccall f_1766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_and(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_modulo(t2,((C_word*)t0)[4]));}

/* hash-table-hash-function in k1720 */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3862,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[71]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(4)));}

/* k3626 in k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(((C_word*)t0)[5],lf[49]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3640,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:535: ##sys#check-closure */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t1,lf[41]);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[51]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3649,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:538: ##sys#check-closure */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t1,lf[41]);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[52]);
if(C_truep(t5)){
t6=C_i_check_exact_2(t1,lf[41]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3660,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(C_fix(0),t1))){
t8=t7;
f_3660(2,t8,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm:543: error */
t8=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[41],lf[53],t1);}}
else{
t6=C_eqp(((C_word*)t0)[5],lf[54]);
if(C_truep(t6)){
t7=C_mutate(((C_word *)((C_word*)t0)[9])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3678,a[2]=t1,a[3]=((C_word)li105),tmp=(C_word)a,a+=4,tmp));
t8=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:563: loop */
t9=((C_word*)((C_word*)t0)[3])[1];
f_3605(t9,((C_word*)t0)[4],t8);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[55]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3688,a[2]=((C_word*)t0)[10],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:548: ##sys#check-inexact */
t9=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t1,lf[41]);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[60]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3709,a[2]=((C_word*)t0)[11],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:553: ##sys#check-inexact */
t10=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t1,lf[41]);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[62]);
if(C_truep(t9)){
if(C_truep(t1)){
t10=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:563: loop */
t11=((C_word*)((C_word*)t0)[3])[1];
f_3605(t11,((C_word*)t0)[4],t10);}
else{
t10=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:563: loop */
t11=((C_word*)((C_word*)t0)[3])[1];
f_3605(t11,((C_word*)t0)[4],t10);}}
else{
t10=C_eqp(((C_word*)t0)[5],lf[63]);
if(C_truep(t10)){
if(C_truep(t1)){
t11=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:563: loop */
t12=((C_word*)((C_word*)t0)[3])[1];
f_3605(t12,((C_word*)t0)[4],t11);}
else{
t11=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:563: loop */
t12=((C_word*)((C_word*)t0)[3])[1];
f_3605(t12,((C_word*)t0)[4],t11);}}
else{
/* srfi-69.scm:562: invarg-err */
t11=((C_word*)t0)[12];
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t2,lf[64]);}}}}}}}}}

/* k3622 in loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3624,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3627,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t4;
f_3627(2,t5,C_u_i_car(t3));}
else{
/* srfi-69.scm:532: invarg-err */
t5=((C_word*)t0)[12];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[65]);}}
else{
/* srfi-69.scm:564: invarg-err */
t2=((C_word*)t0)[12];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],lf[66]);}}

/* number-hash in k1720 */
static void C_ccall f_1730(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1730r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1730r(t0,t1,t2,t3);}}

static void C_ccall f_1730r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[0]:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1742,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(t2))){
t13=t12;
f_1742(2,t13,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm:156: ##sys#signal-hook */
t13=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t13+1)))(6,t13,t12,lf[5],lf[3],lf[6],t2);}}

/* hash-table-equivalence-function in k1720 */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3853,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[70]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* hash-table-has-initial? in k1720 */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3907,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[76]);
t4=C_slot(t2,C_fix(9));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* f_1745 in k1741 in number-hash in k1720 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1745,4,t0,t1,t2,t3);}
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1754,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1766,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:120: g123 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k1741 in number-hash in k1720 */
static void C_ccall f_1742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1742,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1745,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1771,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1894,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:158: g126 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* f_5735 in a5628 in k1720 */
static void C_ccall f_5735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5735,2,t0,t1);}
/* srfi-69.scm:838: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[83],lf[89],lf[114],((C_word*)t0)[2],((C_word*)t0)[3]);}

/* hash-table-size in k1720 */
static void C_ccall f_3844(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3844,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[69]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(2)));}

/* loop in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_fcall f_3605(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3605,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3615,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3624,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=t4,tmp=(C_word)a,a+=13,tmp);
/* srfi-69.scm:528: keyword? */
t6=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}}

/* k3598 in k3576 in k3574 in k3572 in k3570 in make-hash-table in k1720 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:567: error */
t2=*((C_word*)lf[46]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[41],lf[47],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=((C_word*)t0)[2];
f_3579(2,t2,C_SCHEME_UNDEFINED);}}

/* f_5183 in doloop1231 in doloop1228 in *hash-table-merge! in k4733 in k1720 */
static void C_ccall f_5183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5183,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* hash-table-merge! in k4733 in k1720 */
static void C_ccall f_5189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5189,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[33],lf[97]);
t5=C_i_check_structure_2(t3,lf[33],lf[97]);
/* srfi-69.scm:1001: *hash-table-merge! */
f_5129(t1,t2,t3);}

/* k4900 in loop in k4841 in hash-table-exists? in k4733 in k1720 */
static void C_ccall f_4901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:913: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4890(t3,((C_word*)t0)[2],t2);}}

/* hash-table-initial in k1720 */
static void C_ccall f_3919(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3919,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[33],lf[77]);
t4=C_slot(t2,C_fix(9));
if(C_truep(t4)){
/* srfi-69.scm:624: thunk */
t5=t4;
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t1);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[376] = {
{"f_4921:srfi_2d69_2escm",(void*)f_4921},
{"f_5008:srfi_2d69_2escm",(void*)f_5008},
{"f_5242:srfi_2d69_2escm",(void*)f_5242},
{"f_4716:srfi_2d69_2escm",(void*)f_4716},
{"f_4933:srfi_2d69_2escm",(void*)f_4933},
{"f_3308:srfi_2d69_2escm",(void*)f_3308},
{"f_1795:srfi_2d69_2escm",(void*)f_1795},
{"f_1799:srfi_2d69_2escm",(void*)f_1799},
{"f_3123:srfi_2d69_2escm",(void*)f_3123},
{"f_3964:srfi_2d69_2escm",(void*)f_3964},
{"f_3150:srfi_2d69_2escm",(void*)f_3150},
{"f_3999:srfi_2d69_2escm",(void*)f_3999},
{"f_4950:srfi_2d69_2escm",(void*)f_4950},
{"f_3489:srfi_2d69_2escm",(void*)f_3489},
{"f_4283:srfi_2d69_2escm",(void*)f_4283},
{"f_3482:srfi_2d69_2escm",(void*)f_3482},
{"f_3477:srfi_2d69_2escm",(void*)f_3477},
{"f_4292:srfi_2d69_2escm",(void*)f_4292},
{"f_4219:srfi_2d69_2escm",(void*)f_4219},
{"f_3460:srfi_2d69_2escm",(void*)f_3460},
{"f_2699:srfi_2d69_2escm",(void*)f_2699},
{"f_2697:srfi_2d69_2escm",(void*)f_2697},
{"f_5172:srfi_2d69_2escm",(void*)f_5172},
{"f_4042:srfi_2d69_2escm",(void*)f_4042},
{"f_2874:srfi_2d69_2escm",(void*)f_2874},
{"f_2690:srfi_2d69_2escm",(void*)f_2690},
{"f_2878:srfi_2d69_2escm",(void*)f_2878},
{"f_2695:srfi_2d69_2escm",(void*)f_2695},
{"f_4203:srfi_2d69_2escm",(void*)f_4203},
{"f_4209:srfi_2d69_2escm",(void*)f_4209},
{"f_3458:srfi_2d69_2escm",(void*)f_3458},
{"f_3454:srfi_2d69_2escm",(void*)f_3454},
{"f_5160:srfi_2d69_2escm",(void*)f_5160},
{"f_2850:srfi_2d69_2escm",(void*)f_2850},
{"f_2676:srfi_2d69_2escm",(void*)f_2676},
{"f_4020:srfi_2d69_2escm",(void*)f_4020},
{"f_2854:srfi_2d69_2escm",(void*)f_2854},
{"f_4028:srfi_2d69_2escm",(void*)f_4028},
{"f_5200:srfi_2d69_2escm",(void*)f_5200},
{"f_2886:srfi_2d69_2escm",(void*)f_2886},
{"f_2836:srfi_2d69_2escm",(void*)f_2836},
{"f_2862:srfi_2d69_2escm",(void*)f_2862},
{"f_5227:srfi_2d69_2escm",(void*)f_5227},
{"f_2866:srfi_2d69_2escm",(void*)f_2866},
{"f_5121:srfi_2d69_2escm",(void*)f_5121},
{"f_3105:srfi_2d69_2escm",(void*)f_3105},
{"f_5129:srfi_2d69_2escm",(void*)f_5129},
{"f_1807:srfi_2d69_2escm",(void*)f_1807},
{"f_3406:srfi_2d69_2escm",(void*)f_3406},
{"f_5212:srfi_2d69_2escm",(void*)f_5212},
{"f_3400:srfi_2d69_2escm",(void*)f_3400},
{"f_5214:srfi_2d69_2escm",(void*)f_5214},
{"f_1819:srfi_2d69_2escm",(void*)f_1819},
{"f_1811:srfi_2d69_2escm",(void*)f_1811},
{"f_5140:srfi_2d69_2escm",(void*)f_5140},
{"f_5493:srfi_2d69_2escm",(void*)f_5493},
{"f_1823:srfi_2d69_2escm",(void*)f_1823},
{"f_5149:srfi_2d69_2escm",(void*)f_5149},
{"f_4264:srfi_2d69_2escm",(void*)f_4264},
{"f_5716:srfi_2d69_2escm",(void*)f_5716},
{"f_3117:srfi_2d69_2escm",(void*)f_3117},
{"f_4890:srfi_2d69_2escm",(void*)f_4890},
{"f_1939:srfi_2d69_2escm",(void*)f_1939},
{"f_2021:srfi_2d69_2escm",(void*)f_2021},
{"f_4749:srfi_2d69_2escm",(void*)f_4749},
{"f_2076:srfi_2d69_2escm",(void*)f_2076},
{"f_3174:srfi_2d69_2escm",(void*)f_3174},
{"f_3175:srfi_2d69_2escm",(void*)f_3175},
{"f_3444:srfi_2d69_2escm",(void*)f_3444},
{"f_3449:srfi_2d69_2escm",(void*)f_3449},
{"f_4735:srfi_2d69_2escm",(void*)f_4735},
{"f_4737:srfi_2d69_2escm",(void*)f_4737},
{"f_1997:srfi_2d69_2escm",(void*)f_1997},
{"f_5284:srfi_2d69_2escm",(void*)f_5284},
{"f_5285:srfi_2d69_2escm",(void*)f_5285},
{"f_1965:srfi_2d69_2escm",(void*)f_1965},
{"f_5452:srfi_2d69_2escm",(void*)f_5452},
{"f_1960:srfi_2d69_2escm",(void*)f_1960},
{"f_4500:srfi_2d69_2escm",(void*)f_4500},
{"f_2050:srfi_2d69_2escm",(void*)f_2050},
{"f_3630:srfi_2d69_2escm",(void*)f_3630},
{"f_5278:srfi_2d69_2escm",(void*)f_5278},
{"f_4007:srfi_2d69_2escm",(void*)f_4007},
{"f_4005:srfi_2d69_2escm",(void*)f_4005},
{"f_4009:srfi_2d69_2escm",(void*)f_4009},
{"f_5484:srfi_2d69_2escm",(void*)f_5484},
{"f_2083:srfi_2d69_2escm",(void*)f_2083},
{"f_3184:srfi_2d69_2escm",(void*)f_3184},
{"f_4030:srfi_2d69_2escm",(void*)f_4030},
{"f_5476:srfi_2d69_2escm",(void*)f_5476},
{"f_1948:srfi_2d69_2escm",(void*)f_1948},
{"f_3615:srfi_2d69_2escm",(void*)f_3615},
{"f_2890:srfi_2d69_2escm",(void*)f_2890},
{"f_3786:srfi_2d69_2escm",(void*)f_3786},
{"f_2898:srfi_2d69_2escm",(void*)f_2898},
{"f_5296:srfi_2d69_2escm",(void*)f_5296},
{"f_3782:srfi_2d69_2escm",(void*)f_3782},
{"f_3640:srfi_2d69_2escm",(void*)f_3640},
{"f_3649:srfi_2d69_2escm",(void*)f_3649},
{"f_4545:srfi_2d69_2escm",(void*)f_4545},
{"f_3196:srfi_2d69_2escm",(void*)f_3196},
{"f_4539:srfi_2d69_2escm",(void*)f_4539},
{"f_3299:srfi_2d69_2escm",(void*)f_3299},
{"f_3298:srfi_2d69_2escm",(void*)f_3298},
{"f_4163:srfi_2d69_2escm",(void*)f_4163},
{"f_4164:srfi_2d69_2escm",(void*)f_4164},
{"f_2136:srfi_2d69_2escm",(void*)f_2136},
{"f_5460:srfi_2d69_2escm",(void*)f_5460},
{"f_4798:srfi_2d69_2escm",(void*)f_4798},
{"f_2100:srfi_2d69_2escm",(void*)f_2100},
{"f_4197:srfi_2d69_2escm",(void*)f_4197},
{"f_1971:srfi_2d69_2escm",(void*)f_1971},
{"f_3709:srfi_2d69_2escm",(void*)f_3709},
{"f_4179:srfi_2d69_2escm",(void*)f_4179},
{"f_3944:srfi_2d69_2escm",(void*)f_3944},
{"f_4173:srfi_2d69_2escm",(void*)f_4173},
{"f_4763:srfi_2d69_2escm",(void*)f_4763},
{"f_2706:srfi_2d69_2escm",(void*)f_2706},
{"f_3977:srfi_2d69_2escm",(void*)f_3977},
{"f_1835:srfi_2d69_2escm",(void*)f_1835},
{"f_1831:srfi_2d69_2escm",(void*)f_1831},
{"f_1843:srfi_2d69_2escm",(void*)f_1843},
{"f_2727:srfi_2d69_2escm",(void*)f_2727},
{"f_3953:srfi_2d69_2escm",(void*)f_3953},
{"f_1847:srfi_2d69_2escm",(void*)f_1847},
{"f_2724:srfi_2d69_2escm",(void*)f_2724},
{"f_1855:srfi_2d69_2escm",(void*)f_1855},
{"f_3596:srfi_2d69_2escm",(void*)f_3596},
{"f_5115:srfi_2d69_2escm",(void*)f_5115},
{"f_1859:srfi_2d69_2escm",(void*)f_1859},
{"f_4830:srfi_2d69_2escm",(void*)f_4830},
{"f_3590:srfi_2d69_2escm",(void*)f_3590},
{"f_5698:srfi_2d69_2escm",(void*)f_5698},
{"f_2715:srfi_2d69_2escm",(void*)f_2715},
{"f_3274:srfi_2d69_2escm",(void*)f_3274},
{"f_1867:srfi_2d69_2escm",(void*)f_1867},
{"f_3428:srfi_2d69_2escm",(void*)f_3428},
{"f_1871:srfi_2d69_2escm",(void*)f_1871},
{"f_1876:srfi_2d69_2escm",(void*)f_1876},
{"f_4813:srfi_2d69_2escm",(void*)f_4813},
{"f_1880:srfi_2d69_2escm",(void*)f_1880},
{"f_1881:srfi_2d69_2escm",(void*)f_1881},
{"f_1888:srfi_2d69_2escm",(void*)f_1888},
{"f_1894:srfi_2d69_2escm",(void*)f_1894},
{"f_4592:srfi_2d69_2escm",(void*)f_4592},
{"f_5353:srfi_2d69_2escm",(void*)f_5353},
{"f_2292:srfi_2d69_2escm",(void*)f_2292},
{"f_3583:srfi_2d69_2escm",(void*)f_3583},
{"f_4842:srfi_2d69_2escm",(void*)f_4842},
{"f_2038:srfi_2d69_2escm",(void*)f_2038},
{"f_2033:srfi_2d69_2escm",(void*)f_2033},
{"f_4856:srfi_2d69_2escm",(void*)f_4856},
{"f_3579:srfi_2d69_2escm",(void*)f_3579},
{"f_3577:srfi_2d69_2escm",(void*)f_3577},
{"f_3575:srfi_2d69_2escm",(void*)f_3575},
{"f_3573:srfi_2d69_2escm",(void*)f_3573},
{"f_3571:srfi_2d69_2escm",(void*)f_3571},
{"f_2279:srfi_2d69_2escm",(void*)f_2279},
{"f_2271:srfi_2d69_2escm",(void*)f_2271},
{"f_2246:srfi_2d69_2escm",(void*)f_2246},
{"f_2244:srfi_2d69_2escm",(void*)f_2244},
{"f_5660:srfi_2d69_2escm",(void*)f_5660},
{"f_2563:srfi_2d69_2escm",(void*)f_2563},
{"f_4520:srfi_2d69_2escm",(void*)f_4520},
{"f_2267:srfi_2d69_2escm",(void*)f_2267},
{"f_2260:srfi_2d69_2escm",(void*)f_2260},
{"f_2012:srfi_2d69_2escm",(void*)f_2012},
{"f_2597:srfi_2d69_2escm",(void*)f_2597},
{"f_4518:srfi_2d69_2escm",(void*)f_4518},
{"f_2040:srfi_2d69_2escm",(void*)f_2040},
{"f_5606:srfi_2d69_2escm",(void*)f_5606},
{"f_5601:srfi_2d69_2escm",(void*)f_5601},
{"f_2585:srfi_2d69_2escm",(void*)f_2585},
{"f_2922:srfi_2d69_2escm",(void*)f_2922},
{"f_2910:srfi_2d69_2escm",(void*)f_2910},
{"f_4350:srfi_2d69_2escm",(void*)f_4350},
{"f_2914:srfi_2d69_2escm",(void*)f_2914},
{"f_4355:srfi_2d69_2escm",(void*)f_4355},
{"f_2926:srfi_2d69_2escm",(void*)f_2926},
{"f_4577:srfi_2d69_2escm",(void*)f_4577},
{"f_4576:srfi_2d69_2escm",(void*)f_4576},
{"f_5646:srfi_2d69_2escm",(void*)f_5646},
{"f_2743:srfi_2d69_2escm",(void*)f_2743},
{"f_4586:srfi_2d69_2escm",(void*)f_4586},
{"f_3503:srfi_2d69_2escm",(void*)f_3503},
{"f_3500:srfi_2d69_2escm",(void*)f_3500},
{"f_2737:srfi_2d69_2escm",(void*)f_2737},
{"f_2817:srfi_2d69_2escm",(void*)f_2817},
{"f_2819:srfi_2d69_2escm",(void*)f_2819},
{"f_5638:srfi_2d69_2escm",(void*)f_5638},
{"f_2576:srfi_2d69_2escm",(void*)f_2576},
{"f_4557:srfi_2d69_2escm",(void*)f_4557},
{"f_4550:srfi_2d69_2escm",(void*)f_4550},
{"f_4567:srfi_2d69_2escm",(void*)f_4567},
{"f_4305:srfi_2d69_2escm",(void*)f_4305},
{"f_2112:srfi_2d69_2escm",(void*)f_2112},
{"f_5314:srfi_2d69_2escm",(void*)f_5314},
{"f_5411:srfi_2d69_2escm",(void*)f_5411},
{"f_2124:srfi_2d69_2escm",(void*)f_2124},
{"f_2143:srfi_2d69_2escm",(void*)f_2143},
{"f_2141:srfi_2d69_2escm",(void*)f_2141},
{"f_5573:srfi_2d69_2escm",(void*)f_5573},
{"f_5303:srfi_2d69_2escm",(void*)f_5303},
{"f_5305:srfi_2d69_2escm",(void*)f_5305},
{"f_5441:srfi_2d69_2escm",(void*)f_5441},
{"f_2115:srfi_2d69_2escm",(void*)f_2115},
{"f_5579:srfi_2d69_2escm",(void*)f_5579},
{"f_5568:srfi_2d69_2escm",(void*)f_5568},
{"f_5562:srfi_2d69_2escm",(void*)f_5562},
{"f_5338:srfi_2d69_2escm",(void*)f_5338},
{"f_3829:srfi_2d69_2escm",(void*)f_3829},
{"f_5595:srfi_2d69_2escm",(void*)f_5595},
{"f_5590:srfi_2d69_2escm",(void*)f_5590},
{"f_5325:srfi_2d69_2escm",(void*)f_5325},
{"f_4341:srfi_2d69_2escm",(void*)f_4341},
{"f_3811:srfi_2d69_2escm",(void*)f_3811},
{"f_3813:srfi_2d69_2escm",(void*)f_3813},
{"f_4408:srfi_2d69_2escm",(void*)f_4408},
{"f_5584:srfi_2d69_2escm",(void*)f_5584},
{"f_3711:srfi_2d69_2escm",(void*)f_3711},
{"f_3715:srfi_2d69_2escm",(void*)f_3715},
{"f_5089:srfi_2d69_2escm",(void*)f_5089},
{"f_2456:srfi_2d69_2escm",(void*)f_2456},
{"f_2448:srfi_2d69_2escm",(void*)f_2448},
{"f_2444:srfi_2d69_2escm",(void*)f_2444},
{"f_4313:srfi_2d69_2escm",(void*)f_4313},
{"f_4315:srfi_2d69_2escm",(void*)f_4315},
{"f_5554:srfi_2d69_2escm",(void*)f_5554},
{"f_2902:srfi_2d69_2escm",(void*)f_2902},
{"f_2430:srfi_2d69_2escm",(void*)f_2430},
{"f_4443:srfi_2d69_2escm",(void*)f_4443},
{"f_5396:srfi_2d69_2escm",(void*)f_5396},
{"f_4430:srfi_2d69_2escm",(void*)f_4430},
{"f_5383:srfi_2d69_2escm",(void*)f_5383},
{"toplevel:srfi_2d69_2escm",(void*)C_srfi_2d69_toplevel},
{"f_2411:srfi_2d69_2escm",(void*)f_2411},
{"f_2413:srfi_2d69_2escm",(void*)f_2413},
{"f_3838:srfi_2d69_2escm",(void*)f_3838},
{"f_4647:srfi_2d69_2escm",(void*)f_4647},
{"f_3831:srfi_2d69_2escm",(void*)f_3831},
{"f_3210:srfi_2d69_2escm",(void*)f_3210},
{"f_3212:srfi_2d69_2escm",(void*)f_3212},
{"f_4632:srfi_2d69_2escm",(void*)f_4632},
{"f_4636:srfi_2d69_2escm",(void*)f_4636},
{"f_3057:srfi_2d69_2escm",(void*)f_3057},
{"f_5515:srfi_2d69_2escm",(void*)f_5515},
{"f_3201:srfi_2d69_2escm",(void*)f_3201},
{"f_3205:srfi_2d69_2escm",(void*)f_3205},
{"f_4622:srfi_2d69_2escm",(void*)f_4622},
{"f_4690:srfi_2d69_2escm",(void*)f_4690},
{"f_3044:srfi_2d69_2escm",(void*)f_3044},
{"f_4087:srfi_2d69_2escm",(void*)f_4087},
{"f_3898:srfi_2d69_2escm",(void*)f_3898},
{"f_5504:srfi_2d69_2escm",(void*)f_5504},
{"f_4092:srfi_2d69_2escm",(void*)f_4092},
{"f_4610:srfi_2d69_2escm",(void*)f_4610},
{"f_4616:srfi_2d69_2escm",(void*)f_4616},
{"f_3880:srfi_2d69_2escm",(void*)f_3880},
{"f_3032:srfi_2d69_2escm",(void*)f_3032},
{"f_3031:srfi_2d69_2escm",(void*)f_3031},
{"f_3889:srfi_2d69_2escm",(void*)f_3889},
{"f_3871:srfi_2d69_2escm",(void*)f_3871},
{"f_4384:srfi_2d69_2escm",(void*)f_4384},
{"f_4390:srfi_2d69_2escm",(void*)f_4390},
{"f_2520:srfi_2d69_2escm",(void*)f_2520},
{"f_2537:srfi_2d69_2escm",(void*)f_2537},
{"f_4365:srfi_2d69_2escm",(void*)f_4365},
{"f_2551:srfi_2d69_2escm",(void*)f_2551},
{"f_2529:srfi_2d69_2escm",(void*)f_2529},
{"f_2525:srfi_2d69_2escm",(void*)f_2525},
{"f_4141:srfi_2d69_2escm",(void*)f_4141},
{"f_4144:srfi_2d69_2escm",(void*)f_4144},
{"f_2555:srfi_2d69_2escm",(void*)f_2555},
{"f_5072:srfi_2d69_2escm",(void*)f_5072},
{"f_5621:srfi_2d69_2escm",(void*)f_5621},
{"f_5629:srfi_2d69_2escm",(void*)f_5629},
{"f_4130:srfi_2d69_2escm",(void*)f_4130},
{"f_4139:srfi_2d69_2escm",(void*)f_4139},
{"f_4135:srfi_2d69_2escm",(void*)f_4135},
{"f_2544:srfi_2d69_2escm",(void*)f_2544},
{"f_5061:srfi_2d69_2escm",(void*)f_5061},
{"f_5612:srfi_2d69_2escm",(void*)f_5612},
{"f_5614:srfi_2d69_2escm",(void*)f_5614},
{"f_5616:srfi_2d69_2escm",(void*)f_5616},
{"f_5619:srfi_2d69_2escm",(void*)f_5619},
{"f_2943:srfi_2d69_2escm",(void*)f_2943},
{"f_2931:srfi_2d69_2escm",(void*)f_2931},
{"f_2936:srfi_2d69_2escm",(void*)f_2936},
{"f_2935:srfi_2d69_2escm",(void*)f_2935},
{"f_4154:srfi_2d69_2escm",(void*)f_4154},
{"f_3325:srfi_2d69_2escm",(void*)f_3325},
{"f_3320:srfi_2d69_2escm",(void*)f_3320},
{"f_2969:srfi_2d69_2escm",(void*)f_2969},
{"f_2968:srfi_2d69_2escm",(void*)f_2968},
{"f_2964:srfi_2d69_2escm",(void*)f_2964},
{"f_2516:srfi_2d69_2escm",(void*)f_2516},
{"f_5032:srfi_2d69_2escm",(void*)f_5032},
{"f_5038:srfi_2d69_2escm",(void*)f_5038},
{"f_3027:srfi_2d69_2escm",(void*)f_3027},
{"f_2530:srfi_2d69_2escm",(void*)f_2530},
{"f_2950:srfi_2d69_2escm",(void*)f_2950},
{"f_3329:srfi_2d69_2escm",(void*)f_3329},
{"f_2957:srfi_2d69_2escm",(void*)f_2957},
{"f_2504:srfi_2d69_2escm",(void*)f_2504},
{"f_3011:srfi_2d69_2escm",(void*)f_3011},
{"f_4491:srfi_2d69_2escm",(void*)f_4491},
{"f_3017:srfi_2d69_2escm",(void*)f_3017},
{"f_2508:srfi_2d69_2escm",(void*)f_2508},
{"f_3002:srfi_2d69_2escm",(void*)f_3002},
{"f_4991:srfi_2d69_2escm",(void*)f_4991},
{"f_4375:srfi_2d69_2escm",(void*)f_4375},
{"f_4374:srfi_2d69_2escm",(void*)f_4374},
{"f_5049:srfi_2d69_2escm",(void*)f_5049},
{"f_4420:srfi_2d69_2escm",(void*)f_4420},
{"f_3062:srfi_2d69_2escm",(void*)f_3062},
{"f_3061:srfi_2d69_2escm",(void*)f_3061},
{"f_1724:srfi_2d69_2escm",(void*)f_1724},
{"f_2301:srfi_2d69_2escm",(void*)f_2301},
{"f_1721:srfi_2d69_2escm",(void*)f_1721},
{"f_4414:srfi_2d69_2escm",(void*)f_4414},
{"f_2496:srfi_2d69_2escm",(void*)f_2496},
{"f_2492:srfi_2d69_2escm",(void*)f_2492},
{"f_3694:srfi_2d69_2escm",(void*)f_3694},
{"f_2480:srfi_2d69_2escm",(void*)f_2480},
{"f_3690:srfi_2d69_2escm",(void*)f_3690},
{"f_2484:srfi_2d69_2escm",(void*)f_2484},
{"f_3336:srfi_2d69_2escm",(void*)f_3336},
{"f_3334:srfi_2d69_2escm",(void*)f_3334},
{"f_2153:srfi_2d69_2escm",(void*)f_2153},
{"f_2319:srfi_2d69_2escm",(void*)f_2319},
{"f_2472:srfi_2d69_2escm",(void*)f_2472},
{"f_2313:srfi_2d69_2escm",(void*)f_2313},
{"f_2468:srfi_2d69_2escm",(void*)f_2468},
{"f_3678:srfi_2d69_2escm",(void*)f_3678},
{"f_2460:srfi_2d69_2escm",(void*)f_2460},
{"f_3096:srfi_2d69_2escm",(void*)f_3096},
{"f_2980:srfi_2d69_2escm",(void*)f_2980},
{"f_4121:srfi_2d69_2escm",(void*)f_4121},
{"f_2989:srfi_2d69_2escm",(void*)f_2989},
{"f_3083:srfi_2d69_2escm",(void*)f_3083},
{"f_2648:srfi_2d69_2escm",(void*)f_2648},
{"f_4110:srfi_2d69_2escm",(void*)f_4110},
{"f_3072:srfi_2d69_2escm",(void*)f_3072},
{"f_4472:srfi_2d69_2escm",(void*)f_4472},
{"f_3688:srfi_2d69_2escm",(void*)f_3688},
{"f_2633:srfi_2d69_2escm",(void*)f_2633},
{"f_4254:srfi_2d69_2escm",(void*)f_4254},
{"f_2629:srfi_2d69_2escm",(void*)f_2629},
{"f_4452:srfi_2d69_2escm",(void*)f_4452},
{"f_4241:srfi_2d69_2escm",(void*)f_4241},
{"f_3660:srfi_2d69_2escm",(void*)f_3660},
{"f_1771:srfi_2d69_2escm",(void*)f_1771},
{"f_4232:srfi_2d69_2escm",(void*)f_4232},
{"f_1781:srfi_2d69_2escm",(void*)f_1781},
{"f_2603:srfi_2d69_2escm",(void*)f_2603},
{"f_5530:srfi_2d69_2escm",(void*)f_5530},
{"f_1754:srfi_2d69_2escm",(void*)f_1754},
{"f_1926:srfi_2d69_2escm",(void*)f_1926},
{"f_1766:srfi_2d69_2escm",(void*)f_1766},
{"f_3862:srfi_2d69_2escm",(void*)f_3862},
{"f_3627:srfi_2d69_2escm",(void*)f_3627},
{"f_3624:srfi_2d69_2escm",(void*)f_3624},
{"f_1730:srfi_2d69_2escm",(void*)f_1730},
{"f_3853:srfi_2d69_2escm",(void*)f_3853},
{"f_3907:srfi_2d69_2escm",(void*)f_3907},
{"f_1745:srfi_2d69_2escm",(void*)f_1745},
{"f_1742:srfi_2d69_2escm",(void*)f_1742},
{"f_5735:srfi_2d69_2escm",(void*)f_5735},
{"f_3844:srfi_2d69_2escm",(void*)f_3844},
{"f_3605:srfi_2d69_2escm",(void*)f_3605},
{"f_3600:srfi_2d69_2escm",(void*)f_3600},
{"f_5183:srfi_2d69_2escm",(void*)f_5183},
{"f_5189:srfi_2d69_2escm",(void*)f_5189},
{"f_4901:srfi_2d69_2escm",(void*)f_4901},
{"f_3919:srfi_2d69_2escm",(void*)f_3919},
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
S|  ##sys#for-each		1
S|  for-each		1
o|eliminated procedure checks: 244 
o|specializations:
o|  1 (##sys#check-list (or pair list) *)
o|  4 (fp< float float)
o|  8 (eqv? * (not float))
o|  1 (car pair)
o|  2 (cdr pair)
o|  2 (memq * list)
o|Removed `not' forms: 6 
o|inlining procedure: k1756 
o|inlining procedure: k1756 
o|inlining procedure: k1773 
o|inlining procedure: k1783 
o|inlining procedure: k1783 
o|inlining procedure: k1773 
o|inlining procedure: k1950 
o|inlining procedure: k1950 
o|inlining procedure: k2023 
o|inlining procedure: k2023 
o|inlining procedure: k2079 
o|inlining procedure: k2079 
o|inlining procedure: k2088 
o|inlining procedure: k2088 
o|inlining procedure: k2126 
o|inlining procedure: k2126 
o|inlining procedure: k2303 
o|inlining procedure: k2303 
o|contracted procedure: "(srfi-69.scm:234) *eq?-hash" 
o|inlining procedure: k2182 
o|inlining procedure: k2182 
o|inlining procedure: k2202 
o|inlining procedure: k2202 
o|inlining procedure: k2220 
o|inlining procedure: k2220 
o|inlining procedure: k2238 
o|inlining procedure: k2238 
o|inlining procedure: k2587 
o|inlining procedure: k2587 
o|contracted procedure: "(srfi-69.scm:261) *eqv?-hash" 
o|inlining procedure: k2349 
o|inlining procedure: k2349 
o|inlining procedure: k2369 
o|inlining procedure: k2369 
o|inlining procedure: k2387 
o|inlining procedure: k2387 
o|inlining procedure: k2405 
o|inlining procedure: k2405 
o|inlining procedure: k2432 
o|inlining procedure: k2432 
o|inlining procedure: k2541 
o|inlining procedure: k2541 
o|inlining procedure: k2651 
o|inlining procedure: k2651 
o|inlining procedure: k2707 
o|inlining procedure: k2707 
o|inlining procedure: k2716 
o|inlining procedure: k2716 
o|inlining procedure: k2693 
o|inlining procedure: k2693 
o|inlining procedure: k2746 
o|inlining procedure: k2746 
o|inlining procedure: k2763 
o|inlining procedure: k2763 
o|inlining procedure: k2784 
o|inlining procedure: k2784 
o|inlining procedure: k2802 
o|inlining procedure: k2802 
o|inlining procedure: k2838 
o|inlining procedure: k2838 
o|inlining procedure: k2830 
o|inlining procedure: k2830 
o|inlining procedure: k2961 
o|inlining procedure: k2961 
o|inlining procedure: k2996 
o|inlining procedure: k2996 
o|inlining procedure: k3040 
o|inlining procedure: k3040 
o|inlining procedure: k3054 
o|inlining procedure: k3054 
o|inlining procedure: k3107 
o|inlining procedure: k3107 
o|inlining procedure: k3186 
o|inlining procedure: k3186 
o|inlining procedure: k3310 
o|inlining procedure: k3310 
o|inlining procedure: k3413 
o|inlining procedure: k3413 
o|inlining procedure: k3431 
o|inlining procedure: k3431 
o|inlining procedure: k3461 
o|inlining procedure: k3461 
o|merged explicitly consed rest parameter: tmp742751 
o|inlining procedure: k3505 
o|inlining procedure: k3505 
o|inlining procedure: k3520 
o|inlining procedure: k3520 
o|inlining procedure: k3536 
o|inlining procedure: k3536 
o|inlining procedure: k3549 
o|inlining procedure: k3549 
o|consed rest parameter at call site: "(srfi-69.scm:579) *make-hash-table" 9 
o|inlining procedure: k3591 
o|inlining procedure: k3591 
o|inlining procedure: k3608 
o|inlining procedure: k3608 
o|inlining procedure: k3642 
o|inlining procedure: k3642 
o|inlining procedure: k3671 
o|inlining procedure: k3671 
o|inlining procedure: k3689 
o|inlining procedure: k3689 
o|substituted constant variable: a3698 
o|substituted constant variable: a3701 
o|inlining procedure: k3702 
o|substituted constant variable: a3719 
o|substituted constant variable: a3722 
o|inlining procedure: k3702 
o|inlining procedure: k3730 
o|inlining procedure: k3730 
o|inlining procedure: k3733 
o|inlining procedure: k3733 
o|substituted constant variable: a3747 
o|substituted constant variable: a3749 
o|substituted constant variable: a3751 
o|substituted constant variable: a3753 
o|substituted constant variable: a3755 
o|substituted constant variable: a3757 
o|substituted constant variable: a3759 
o|substituted constant variable: a3761 
o|inlining procedure: k3777 
o|inlining procedure: k3777 
o|inlining procedure: k3806 
o|inlining procedure: k3806 
o|inlining procedure: k3824 
o|inlining procedure: k3824 
o|inlining procedure: k3912 
o|inlining procedure: k3912 
o|inlining procedure: k3926 
o|inlining procedure: k3926 
o|contracted procedure: "(srfi-69.scm:648) hash-table-rehash!" 
o|inlining procedure: k3947 
o|inlining procedure: k3947 
o|inlining procedure: k3967 
o|inlining procedure: k3967 
o|inlining procedure: k4045 
o|consed rest parameter at call site: "(srfi-69.scm:674) *make-hash-table" 9 
o|inlining procedure: k4045 
o|inlining procedure: k4095 
o|inlining procedure: k4095 
o|inlining procedure: k4156 
o|inlining procedure: k4156 
o|inlining procedure: k4166 
o|inlining procedure: k4166 
o|inlining procedure: k4174 
o|inlining procedure: k4174 
o|inlining procedure: k4186 
o|inlining procedure: k4186 
o|inlining procedure: k4222 
o|inlining procedure: k4235 
o|inlining procedure: k4235 
o|inlining procedure: k4222 
o|inlining procedure: k4286 
o|inlining procedure: k4286 
o|inlining procedure: k4338 
o|inlining procedure: k4338 
o|inlining procedure: k4367 
o|inlining procedure: k4367 
o|inlining procedure: k4377 
o|inlining procedure: k4377 
o|inlining procedure: k4385 
o|inlining procedure: k4385 
o|inlining procedure: k4397 
o|inlining procedure: k4397 
o|inlining procedure: k4433 
o|inlining procedure: k4446 
o|inlining procedure: k4446 
o|inlining procedure: k4433 
o|inlining procedure: k4494 
o|inlining procedure: k4494 
o|inlining procedure: k4569 
o|inlining procedure: k4569 
o|inlining procedure: k4579 
o|inlining procedure: k4579 
o|inlining procedure: k4587 
o|inlining procedure: k4587 
o|inlining procedure: k4599 
o|inlining procedure: k4599 
o|inlining procedure: k4635 
o|inlining procedure: k4650 
o|inlining procedure: k4650 
o|inlining procedure: k4635 
o|inlining procedure: k4693 
o|inlining procedure: k4693 
o|inlining procedure: k4750 
o|inlining procedure: k4766 
o|inlining procedure: k4766 
o|inlining procedure: k4750 
o|inlining procedure: k4801 
o|inlining procedure: k4801 
o|inlining procedure: k4843 
o|inlining procedure: k4859 
o|inlining procedure: k4859 
o|inlining procedure: k4843 
o|inlining procedure: k4893 
o|inlining procedure: k4893 
o|inlining procedure: k4940 
o|inlining procedure: k4953 
o|inlining procedure: k4953 
o|inlining procedure: k4968 
o|inlining procedure: k4968 
o|inlining procedure: k4940 
o|inlining procedure: k4994 
o|inlining procedure: k4994 
o|inlining procedure: k5009 
o|inlining procedure: k5009 
o|inlining procedure: k5052 
o|inlining procedure: k5052 
o|inlining procedure: k5075 
o|inlining procedure: k5075 
o|inlining procedure: k5143 
o|inlining procedure: k5143 
o|inlining procedure: k5163 
o|inlining procedure: k5163 
o|inlining procedure: k5230 
o|inlining procedure: k5230 
o|inlining procedure: k5245 
o|inlining procedure: k5245 
o|inlining procedure: k5308 
o|inlining procedure: k5308 
o|inlining procedure: k5341 
o|inlining procedure: k5341 
o|inlining procedure: k5356 
o|inlining procedure: k5356 
o|inlining procedure: k5399 
o|inlining procedure: k5399 
o|inlining procedure: k5414 
o|inlining procedure: k5414 
o|inlining procedure: k5455 
o|inlining procedure: k5455 
o|inlining procedure: k5487 
o|inlining procedure: k5487 
o|inlining procedure: k5518 
o|inlining procedure: k5518 
o|inlining procedure: k5533 
o|inlining procedure: k5533 
o|inlining procedure: k5647 
o|inlining procedure: k5663 
o|inlining procedure: k5663 
o|inlining procedure: k5647 
o|inlining procedure: k5701 
o|inlining procedure: k5701 
o|replaced variables: 539 
o|removed binding forms: 113 
o|substituted constant variable: a20875755 
o|substituted constant variable: a30395807 
o|substituted constant variable: a30395808 
o|removed unused formal parameters: (weak-keys748 weak-values749) 
o|removed unused parameter to known procedure: weak-keys748 "(srfi-69.scm:579) *make-hash-table" 
o|removed unused parameter to known procedure: weak-values749 "(srfi-69.scm:579) *make-hash-table" 
o|inlining procedure: k3710 
o|substituted constant variable: r37315845 
o|substituted constant variable: r37315847 
o|inlining procedure: k3740 
o|inlining procedure: k3740 
o|substituted constant variable: r39135857 
o|substituted constant variable: r39135858 
o|substituted constant variable: r39275860 
o|removed unused parameter to known procedure: weak-keys748 "(srfi-69.scm:674) *make-hash-table" 
o|removed unused parameter to known procedure: weak-values749 "(srfi-69.scm:674) *make-hash-table" 
o|substituted constant variable: f_40945867 
o|substituted constant variable: r41875876 
o|substituted constant variable: r43985892 
o|substituted constant variable: r46005906 
o|substituted constant variable: f_48585926 
o|substituted constant variable: f_48925929 
o|substituted constant variable: f_49525932 
o|substituted constant variable: f_49935943 
o|substituted constant variable: f_50745955 
o|replaced variables: 33 
o|removed binding forms: 531 
o|inlining procedure: k3418 
o|inlining procedure: k3584 
o|inlining procedure: k3584 
o|inlining procedure: k3584 
o|inlining procedure: k3628 
o|inlining procedure: k3628 
o|inlining procedure: k3628 
o|inlining procedure: k3628 
o|inlining procedure: k3628 
o|inlining procedure: k3628 
o|inlining procedure: k3628 
o|inlining procedure: k3628 
o|removed side-effect free assignment to unused variable: weak-keys781 
o|inlining procedure: k3628 
o|removed side-effect free assignment to unused variable: weak-keys781 
o|inlining procedure: k3628 
o|removed side-effect free assignment to unused variable: weak-values782 
o|inlining procedure: k3628 
o|removed side-effect free assignment to unused variable: weak-values782 
o|inlining procedure: k3628 
o|removed call to pure procedure with unused result: "(srfi-69.scm:678) slot" 
o|removed call to pure procedure with unused result: "(srfi-69.scm:678) slot" 
o|replaced variables: 3 
o|removed binding forms: 34 
o|contracted procedure: k4069 
o|contracted procedure: k4072 
o|removed binding forms: 25 
o|removed binding forms: 6 
o|simplifications: ((if . 64) (##core#call . 705)) 
o|  call simplifications:
o|    ##sys#check-list	2
o|    apply
o|    ##sys#check-pair
o|    void
o|    ##sys#setislot	10
o|    *	6
o|    fx<=	6
o|    ##sys#immediate?	6
o|    cons	21
o|    ##sys#check-structure	30
o|    ##sys#structure?
o|    ##sys#make-structure
o|    ##sys#setslot	24
o|    list	2
o|    ##sys#check-string	2
o|    fx>=	12
o|    list?
o|    pair?	4
o|    ##sys#peek-fixnum	2
o|    length
o|    ##sys#size	27
o|    fxmin	4
o|    fx=
o|    fx-	4
o|    char?	3
o|    eq?	40
o|    eof-object?	3
o|    symbol?	4
o|    not	4
o|    char->integer	3
o|    ##sys#check-symbol
o|    ##sys#slot	183
o|    car	30
o|    null?	78
o|    cdr	25
o|    number?	4
o|    ##sys#check-exact	11
o|    fixnum?	4
o|    flonum?	3
o|    fxshl	24
o|    fx+	43
o|    fx*	4
o|    fxxor	26
o|    fxand	9
o|    fx<	15
o|    fxneg	9
o|    fxmod	9
o|contracted procedure: k1919 
o|contracted procedure: k1733 
o|contracted procedure: k1913 
o|contracted procedure: k1735 
o|contracted procedure: k1907 
o|contracted procedure: k1737 
o|contracted procedure: k1901 
o|contracted procedure: k1739 
o|contracted procedure: k1743 
o|contracted procedure: k1758 
o|contracted procedure: k1750 
o|contracted procedure: k1775 
o|contracted procedure: k1785 
o|contracted procedure: k1873 
o|contracted procedure: k1864 
o|contracted procedure: k1861 
o|contracted procedure: k1852 
o|contracted procedure: k1849 
o|contracted procedure: k1840 
o|contracted procedure: k1837 
o|contracted procedure: k1828 
o|contracted procedure: k1825 
o|contracted procedure: k1816 
o|contracted procedure: k1813 
o|contracted procedure: k1804 
o|contracted procedure: k1801 
o|contracted procedure: k1792 
o|contracted procedure: k1895 
o|contracted procedure: k1990 
o|contracted procedure: k1929 
o|contracted procedure: k1984 
o|contracted procedure: k1931 
o|contracted procedure: k1978 
o|contracted procedure: k1933 
o|contracted procedure: k1972 
o|contracted procedure: k1935 
o|contracted procedure: k1937 
o|contracted procedure: k1952 
o|contracted procedure: k1944 
o|contracted procedure: k2069 
o|contracted procedure: k2000 
o|contracted procedure: k2063 
o|contracted procedure: k2002 
o|contracted procedure: k2057 
o|contracted procedure: k2004 
o|contracted procedure: k2051 
o|contracted procedure: k2006 
o|contracted procedure: k2008 
o|contracted procedure: k2010 
o|contracted procedure: k2025 
o|contracted procedure: k2017 
o|contracted procedure: k2046 
o|contracted procedure: k2090 
o|contracted procedure: k2088 
o|contracted procedure: k2172 
o|contracted procedure: k2103 
o|contracted procedure: k2166 
o|contracted procedure: k2105 
o|contracted procedure: k2160 
o|contracted procedure: k2107 
o|contracted procedure: k2154 
o|contracted procedure: k2109 
o|contracted procedure: k2113 
o|contracted procedure: k2128 
o|contracted procedure: k2120 
o|contracted procedure: k2149 
o|contracted procedure: k2338 
o|contracted procedure: k2282 
o|contracted procedure: k2332 
o|contracted procedure: k2284 
o|contracted procedure: k2326 
o|contracted procedure: k2286 
o|contracted procedure: k2320 
o|contracted procedure: k2288 
o|contracted procedure: k2290 
o|contracted procedure: k2305 
o|contracted procedure: k2297 
o|contracted procedure: k2184 
o|inlining procedure: k2318 
o|contracted procedure: k2193 
o|contracted procedure: k2200 
o|inlining procedure: k2318 
o|contracted procedure: k2205 
o|inlining procedure: k2318 
o|contracted procedure: k2214 
o|inlining procedure: k2318 
o|contracted procedure: k2223 
o|inlining procedure: k2318 
o|contracted procedure: k2232 
o|inlining procedure: k2318 
o|contracted procedure: k2241 
o|contracted procedure: k2252 
o|inlining procedure: k2318 
o|contracted procedure: k2622 
o|contracted procedure: k2566 
o|contracted procedure: k2616 
o|contracted procedure: k2568 
o|contracted procedure: k2610 
o|contracted procedure: k2570 
o|contracted procedure: k2604 
o|contracted procedure: k2572 
o|contracted procedure: k2574 
o|contracted procedure: k2589 
o|contracted procedure: k2581 
o|contracted procedure: k2351 
o|inlining procedure: k2602 
o|contracted procedure: k2360 
o|contracted procedure: k2367 
o|inlining procedure: k2602 
o|contracted procedure: k2372 
o|inlining procedure: k2602 
o|contracted procedure: k2381 
o|inlining procedure: k2602 
o|contracted procedure: k2390 
o|inlining procedure: k2602 
o|contracted procedure: k2399 
o|inlining procedure: k2602 
o|contracted procedure: k2408 
o|contracted procedure: k2419 
o|contracted procedure: k2427 
o|contracted procedure: k2434 
o|contracted procedure: k2522 
o|contracted procedure: k2513 
o|contracted procedure: k2510 
o|contracted procedure: k2501 
o|contracted procedure: k2498 
o|contracted procedure: k2489 
o|contracted procedure: k2486 
o|contracted procedure: k2477 
o|contracted procedure: k2474 
o|contracted procedure: k2465 
o|contracted procedure: k2462 
o|contracted procedure: k2453 
o|contracted procedure: k2450 
o|contracted procedure: k2441 
o|inlining procedure: k2602 
o|contracted procedure: k2636 
o|contracted procedure: k2687 
o|contracted procedure: k2642 
o|contracted procedure: k2684 
o|contracted procedure: k2645 
o|contracted procedure: k2653 
o|contracted procedure: k2672 
o|contracted procedure: k2669 
o|contracted procedure: k2660 
o|contracted procedure: k2663 
o|contracted procedure: k2666 
o|contracted procedure: k2678 
o|contracted procedure: k2681 
o|contracted procedure: k2732 
o|contracted procedure: k2748 
o|contracted procedure: k2757 
o|contracted procedure: k2766 
o|contracted procedure: k2773 
o|contracted procedure: k2778 
o|contracted procedure: k2787 
o|contracted procedure: k2796 
o|contracted procedure: k2805 
o|contracted procedure: k2814 
o|contracted procedure: k2825 
o|contracted procedure: k2833 
o|contracted procedure: k2840 
o|contracted procedure: k2928 
o|contracted procedure: k2919 
o|contracted procedure: k2916 
o|contracted procedure: k2907 
o|contracted procedure: k2904 
o|contracted procedure: k2895 
o|contracted procedure: k2892 
o|contracted procedure: k2883 
o|contracted procedure: k2880 
o|contracted procedure: k2871 
o|contracted procedure: k2868 
o|contracted procedure: k2859 
o|contracted procedure: k2856 
o|contracted procedure: k2847 
o|contracted procedure: k2977 
o|contracted procedure: k2985 
o|contracted procedure: k2991 
o|contracted procedure: k2999 
o|contracted procedure: k3007 
o|contracted procedure: k3013 
o|contracted procedure: k3019 
o|contracted procedure: k3049 
o|contracted procedure: k3046 
o|contracted procedure: k3037 
o|contracted procedure: k3067 
o|contracted procedure: k3142 
o|contracted procedure: k3086 
o|contracted procedure: k3136 
o|contracted procedure: k3088 
o|contracted procedure: k3130 
o|contracted procedure: k3090 
o|contracted procedure: k3124 
o|contracted procedure: k3092 
o|contracted procedure: k3094 
o|contracted procedure: k3109 
o|contracted procedure: k3101 
o|contracted procedure: k3267 
o|contracted procedure: k3153 
o|contracted procedure: k3261 
o|contracted procedure: k3155 
o|contracted procedure: k3255 
o|contracted procedure: k3157 
o|contracted procedure: k3249 
o|contracted procedure: k3159 
o|contracted procedure: k3243 
o|contracted procedure: k3161 
o|contracted procedure: k3237 
o|contracted procedure: k3163 
o|contracted procedure: k3231 
o|contracted procedure: k3165 
o|contracted procedure: k3225 
o|contracted procedure: k3167 
o|contracted procedure: k3169 
o|contracted procedure: k3171 
o|contracted procedure: k3188 
o|contracted procedure: k3180 
o|contracted procedure: k3206 
o|contracted procedure: k3217 
o|contracted procedure: k3220 
o|contracted procedure: k3391 
o|contracted procedure: k3277 
o|contracted procedure: k3385 
o|contracted procedure: k3279 
o|contracted procedure: k3379 
o|contracted procedure: k3281 
o|contracted procedure: k3373 
o|contracted procedure: k3283 
o|contracted procedure: k3367 
o|contracted procedure: k3285 
o|contracted procedure: k3361 
o|contracted procedure: k3287 
o|contracted procedure: k3355 
o|contracted procedure: k3289 
o|contracted procedure: k3349 
o|contracted procedure: k3291 
o|contracted procedure: k3293 
o|contracted procedure: k3295 
o|contracted procedure: k3312 
o|contracted procedure: k3304 
o|contracted procedure: k3330 
o|contracted procedure: k3341 
o|contracted procedure: k3344 
o|contracted procedure: k3409 
o|contracted procedure: k3411 
o|contracted procedure: k3416 
o|contracted procedure: k3418 
o|contracted procedure: k3435 
o|contracted procedure: k3442 
o|contracted procedure: k3470 
o|contracted procedure: k3464 
o|contracted procedure: k3483 
o|contracted procedure: k3485 
o|contracted procedure: k3490 
o|contracted procedure: k3507 
o|contracted procedure: k3509 
o|contracted procedure: k3515 
o|contracted procedure: k3517 
o|contracted procedure: k3523 
o|contracted procedure: k3525 
o|contracted procedure: k3531 
o|contracted procedure: k3533 
o|contracted procedure: k3539 
o|contracted procedure: k3541 
o|contracted procedure: k3547 
o|contracted procedure: k3549 
o|contracted procedure: k3610 
o|contracted procedure: k3613 
o|contracted procedure: k3636 
o|contracted procedure: k3645 
o|contracted procedure: k3654 
o|contracted procedure: k3657 
o|contracted procedure: k3662 
o|contracted procedure: k3665 
o|contracted procedure: k3674 
o|contracted procedure: k3684 
o|contracted procedure: k3705 
o|contracted procedure: k3726 
o|contracted procedure: k3736 
o|contracted procedure: k3762 
o|contracted procedure: k3772 
o|contracted procedure: k3775 
o|contracted procedure: k3783 
o|contracted procedure: k3788 
o|contracted procedure: k3792 
o|contracted procedure: k3795 
o|contracted procedure: k3801 
o|contracted procedure: k3804 
o|contracted procedure: k3816 
o|contracted procedure: k3819 
o|contracted procedure: k3822 
o|contracted procedure: k3834 
o|contracted procedure: k3847 
o|contracted procedure: k3856 
o|contracted procedure: k3865 
o|contracted procedure: k3874 
o|contracted procedure: k3883 
o|contracted procedure: k3892 
o|contracted procedure: k3901 
o|contracted procedure: k3910 
o|contracted procedure: k3915 
o|contracted procedure: k3922 
o|contracted procedure: k3924 
o|contracted procedure: k4017 
o|contracted procedure: k4002 
o|contracted procedure: k4014 
o|contracted procedure: k3936 
o|contracted procedure: k3938 
o|contracted procedure: k3949 
o|contracted procedure: k3958 
o|contracted procedure: k3961 
o|contracted procedure: k3969 
o|contracted procedure: k3972 
o|contracted procedure: k3974 
o|contracted procedure: k3996 
o|contracted procedure: k3990 
o|contracted procedure: k3993 
o|contracted procedure: k3987 
o|contracted procedure: k3978 
o|contracted procedure: k3984 
o|contracted procedure: k4023 
o|contracted procedure: k4025 
o|contracted procedure: k4039 
o|contracted procedure: k4031 
o|contracted procedure: k4036 
o|contracted procedure: k4033 
o|contracted procedure: k4047 
o|contracted procedure: k4054 
o|contracted procedure: k4057 
o|contracted procedure: k4060 
o|contracted procedure: k4063 
o|contracted procedure: k4066 
o|contracted procedure: k4075 
o|contracted procedure: k4077 
o|contracted procedure: k4083 
o|contracted procedure: k4089 
o|contracted procedure: k4097 
o|contracted procedure: k4100 
o|contracted procedure: k4115 
o|contracted procedure: k4118 
o|contracted procedure: k4106 
o|contracted procedure: k4112 
o|contracted procedure: k4124 
o|contracted procedure: k4136 
o|contracted procedure: k4331 
o|contracted procedure: k4142 
o|contracted procedure: k4146 
o|contracted procedure: k4148 
o|contracted procedure: k4150 
o|contracted procedure: k4152 
o|contracted procedure: k4158 
o|contracted procedure: k4168 
o|contracted procedure: k4183 
o|contracted procedure: k4189 
o|contracted procedure: k4199 
o|contracted procedure: k4205 
o|contracted procedure: k4210 
o|contracted procedure: k4212 
o|contracted procedure: k4214 
o|contracted procedure: k4216 
o|contracted procedure: k4220 
o|contracted procedure: k4225 
o|contracted procedure: k4237 
o|contracted procedure: k4250 
o|contracted procedure: k4247 
o|contracted procedure: k4242 
o|contracted procedure: k4244 
o|contracted procedure: k4255 
o|contracted procedure: k4277 
o|contracted procedure: k4260 
o|contracted procedure: k4265 
o|contracted procedure: k4268 
o|contracted procedure: k4274 
o|contracted procedure: k4288 
o|contracted procedure: k4301 
o|contracted procedure: k4298 
o|contracted procedure: k4293 
o|contracted procedure: k4295 
o|contracted procedure: k4306 
o|contracted procedure: k4316 
o|contracted procedure: k4319 
o|contracted procedure: k4325 
o|contracted procedure: k4328 
o|contracted procedure: k4333 
o|contracted procedure: k4336 
o|contracted procedure: k4536 
o|contracted procedure: k4353 
o|contracted procedure: k4357 
o|contracted procedure: k4359 
o|contracted procedure: k4361 
o|contracted procedure: k4363 
o|contracted procedure: k4369 
o|contracted procedure: k4379 
o|contracted procedure: k4394 
o|contracted procedure: k4400 
o|contracted procedure: k4410 
o|contracted procedure: k4416 
o|contracted procedure: k4421 
o|contracted procedure: k4423 
o|contracted procedure: k4425 
o|contracted procedure: k4427 
o|contracted procedure: k4431 
o|contracted procedure: k4436 
o|contracted procedure: k4448 
o|contracted procedure: k4461 
o|contracted procedure: k4458 
o|contracted procedure: k4453 
o|contracted procedure: k4455 
o|contracted procedure: k4463 
o|contracted procedure: k4485 
o|contracted procedure: k4468 
o|contracted procedure: k4473 
o|contracted procedure: k4476 
o|contracted procedure: k4482 
o|contracted procedure: k4496 
o|contracted procedure: k4509 
o|contracted procedure: k4506 
o|contracted procedure: k4501 
o|contracted procedure: k4503 
o|contracted procedure: k4511 
o|contracted procedure: k4521 
o|contracted procedure: k4524 
o|contracted procedure: k4530 
o|contracted procedure: k4533 
o|contracted procedure: k4542 
o|contracted procedure: k4553 
o|contracted procedure: k4730 
o|contracted procedure: k4555 
o|contracted procedure: k4559 
o|contracted procedure: k4561 
o|contracted procedure: k4563 
o|contracted procedure: k4565 
o|contracted procedure: k4571 
o|contracted procedure: k4581 
o|contracted procedure: k4596 
o|contracted procedure: k4602 
o|contracted procedure: k4612 
o|contracted procedure: k4618 
o|contracted procedure: k4623 
o|contracted procedure: k4625 
o|contracted procedure: k4627 
o|contracted procedure: k4629 
o|contracted procedure: k4633 
o|contracted procedure: k4640 
o|contracted procedure: k4652 
o|contracted procedure: k4664 
o|contracted procedure: k4661 
o|contracted procedure: k4655 
o|contracted procedure: k4666 
o|contracted procedure: k4684 
o|contracted procedure: k4671 
o|contracted procedure: k4681 
o|contracted procedure: k4695 
o|contracted procedure: k4707 
o|contracted procedure: k4704 
o|contracted procedure: k4698 
o|contracted procedure: k4709 
o|contracted procedure: k4724 
o|contracted procedure: k4727 
o|contracted procedure: k4740 
o|contracted procedure: k4742 
o|contracted procedure: k4744 
o|contracted procedure: k4746 
o|contracted procedure: k4753 
o|contracted procedure: k4760 
o|contracted procedure: k4768 
o|contracted procedure: k4771 
o|contracted procedure: k4789 
o|contracted procedure: k4776 
o|contracted procedure: k4786 
o|contracted procedure: k4795 
o|contracted procedure: k4803 
o|contracted procedure: k4806 
o|contracted procedure: k4821 
o|contracted procedure: k4824 
o|contracted procedure: k4827 
o|contracted procedure: k4833 
o|contracted procedure: k4835 
o|contracted procedure: k4837 
o|contracted procedure: k4839 
o|contracted procedure: k4846 
o|contracted procedure: k4853 
o|contracted procedure: k4861 
o|contracted procedure: k4864 
o|contracted procedure: k4878 
o|contracted procedure: k4866 
o|contracted procedure: k4875 
o|contracted procedure: k4887 
o|contracted procedure: k4895 
o|contracted procedure: k4898 
o|contracted procedure: k4909 
o|contracted procedure: k4912 
o|contracted procedure: k4918 
o|contracted procedure: k4924 
o|contracted procedure: k4926 
o|contracted procedure: k4928 
o|contracted procedure: k4930 
o|contracted procedure: k4934 
o|contracted procedure: k5029 
o|contracted procedure: k4936 
o|contracted procedure: k4938 
o|contracted procedure: k4943 
o|contracted procedure: k4955 
o|contracted procedure: k4958 
o|contracted procedure: k4960 
o|contracted procedure: k4982 
o|contracted procedure: k4965 
o|contracted procedure: k4968 
o|contracted procedure: k4970 
o|contracted procedure: k4996 
o|contracted procedure: k4999 
o|contracted procedure: k5001 
o|contracted procedure: k5009 
o|contracted procedure: k5011 
o|contracted procedure: k5023 
o|contracted procedure: k5035 
o|contracted procedure: k5039 
o|contracted procedure: k5041 
o|contracted procedure: k5043 
o|contracted procedure: k5054 
o|contracted procedure: k5066 
o|contracted procedure: k5069 
o|contracted procedure: k5077 
o|contracted procedure: k5080 
o|contracted procedure: k5082 
o|contracted procedure: k5090 
o|contracted procedure: k5093 
o|contracted procedure: k5106 
o|contracted procedure: k5109 
o|contracted procedure: k5118 
o|contracted procedure: k5126 
o|contracted procedure: k5132 
o|contracted procedure: k5134 
o|contracted procedure: k5145 
o|contracted procedure: k5154 
o|contracted procedure: k5157 
o|contracted procedure: k5165 
o|contracted procedure: k5168 
o|contracted procedure: k5177 
o|contracted procedure: k5180 
o|contracted procedure: k5186 
o|contracted procedure: k5192 
o|contracted procedure: k5194 
o|contracted procedure: k5203 
o|contracted procedure: k5205 
o|contracted procedure: k5217 
o|contracted procedure: k5219 
o|contracted procedure: k5221 
o|contracted procedure: k5232 
o|contracted procedure: k5239 
o|contracted procedure: k5247 
o|contracted procedure: k5254 
o|contracted procedure: k5260 
o|contracted procedure: k5263 
o|contracted procedure: k5272 
o|contracted procedure: k5275 
o|contracted procedure: k5269 
o|contracted procedure: k5265 
o|contracted procedure: k5281 
o|contracted procedure: k5287 
o|contracted procedure: k5293 
o|contracted procedure: k5299 
o|contracted procedure: k5310 
o|contracted procedure: k5319 
o|contracted procedure: k5322 
o|contracted procedure: k5328 
o|contracted procedure: k5330 
o|contracted procedure: k5332 
o|contracted procedure: k5343 
o|contracted procedure: k5350 
o|contracted procedure: k5358 
o|contracted procedure: k5365 
o|contracted procedure: k5371 
o|contracted procedure: k5374 
o|contracted procedure: k5380 
o|contracted procedure: k5376 
o|contracted procedure: k5386 
o|contracted procedure: k5388 
o|contracted procedure: k5390 
o|contracted procedure: k5401 
o|contracted procedure: k5408 
o|contracted procedure: k5416 
o|contracted procedure: k5423 
o|contracted procedure: k5429 
o|contracted procedure: k5432 
o|contracted procedure: k5438 
o|contracted procedure: k5434 
o|contracted procedure: k5444 
o|contracted procedure: k5446 
o|contracted procedure: k5457 
o|contracted procedure: k5465 
o|contracted procedure: k5468 
o|contracted procedure: k5470 
o|contracted procedure: k5472 
o|contracted procedure: k5481 
o|contracted procedure: k5489 
o|contracted procedure: k5498 
o|contracted procedure: k5501 
o|contracted procedure: k5507 
o|contracted procedure: k5509 
o|contracted procedure: k5520 
o|contracted procedure: k5527 
o|contracted procedure: k5535 
o|contracted procedure: k5542 
o|contracted procedure: k5544 
o|contracted procedure: k5550 
o|contracted procedure: k5556 
o|contracted procedure: k5559 
o|contracted procedure: k5565 
o|contracted procedure: k5576 
o|contracted procedure: k5587 
o|contracted procedure: k5598 
o|contracted procedure: k5626 
o|contracted procedure: k5732 
o|contracted procedure: k5632 
o|contracted procedure: k5635 
o|contracted procedure: k5639 
o|contracted procedure: k5641 
o|contracted procedure: k5643 
o|contracted procedure: k5650 
o|contracted procedure: k5657 
o|contracted procedure: k5665 
o|contracted procedure: k5671 
o|contracted procedure: k5689 
o|contracted procedure: k5676 
o|contracted procedure: k5686 
o|contracted procedure: k5695 
o|contracted procedure: k5703 
o|contracted procedure: k5709 
o|contracted procedure: k5724 
o|contracted procedure: k5727 
o|contracted procedure: k5730 
o|simplifications: ((let . 90)) 
o|removed binding forms: 619 
o|replaced variables: 60 
o|removed binding forms: 12 
o|direct leaf routine/allocation: loop706 0 
o|direct leaf routine/allocation: loop1133 0 
o|direct leaf routine/allocation: loop1150 0 
o|direct leaf routine/allocation: loop1178 0 
o|converted assignments to bindings: (loop706) 
o|converted assignments to bindings: (loop1133) 
o|converted assignments to bindings: (loop1150) 
o|converted assignments to bindings: (loop1178) 
o|simplifications: ((let . 4)) 
o|customizable procedures: (loop1118 loop1114 *hash-table-for-each *hash-table-fold fold21355 loop1352 for-each-loop13281339 doloop13231324 loop21311 loop1308 loop21297 loop1294 for-each-loop12701283 loop21257 loop1254 *hash-table-merge! doloop12311232 doloop12281229 loop1206 doloop12031204 loop1187 loop1158 loop1137 loop1087 loop1082 k4590 *hash-table-update!/default loop1035 loop1026 k4388 k4133 loop982 loop973 k4177 *hash-table-copy copy-loop917 doloop914915 loop890 doloop887888 k3570 k3572 k3574 k3713 k3692 loop815 hash-table-canonical-length *make-hash-table vector-hash436 recursive-atomic-hash437 recursive-hash438 loop445 *equal?-hash) 
o|calls to known targets: 137 
o|identified direct recursive calls: f_3406 2 
o|identified direct recursive calls: f_4092 1 
o|identified direct recursive calls: f_4232 1 
o|identified direct recursive calls: f_4443 1 
o|identified direct recursive calls: f_4647 1 
o|identified direct recursive calls: f_4763 1 
o|identified direct recursive calls: f_4856 1 
o|identified direct recursive calls: f_4950 1 
o|identified direct recursive calls: f_5242 1 
o|identified direct recursive calls: f_5353 1 
o|identified direct recursive calls: f_5411 1 
o|identified direct recursive calls: f_5660 1 
o|fast box initializations: 35 
o|fast global references: 33 
o|fast global assignments: 10 
o|dropping unused closure argument: f_3477 
o|dropping unused closure argument: f_4020 
o|dropping unused closure argument: f_5129 
o|dropping unused closure argument: f_3400 
o|dropping unused closure argument: f_5441 
o|dropping unused closure argument: f_5504 
o|dropping unused closure argument: f_2629 
*/
/* end of file */
