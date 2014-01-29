/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:47
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[289];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,26),40,102,95,51,52,55,56,32,120,50,52,55,57,32,114,50,52,56,48,32,99,50,52,56,49,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,19),40,102,95,51,53,53,49,32,99,108,97,117,115,101,50,52,54,54,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,52,52,57,32,103,50,52,54,49,50,52,55,50,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,26),40,102,95,51,53,50,53,32,120,50,52,51,56,32,114,50,52,51,57,32,99,50,52,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,22),40,102,95,51,54,56,55,32,97,110,50,52,49,52,32,97,116,50,52,49,53,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,50,51,57,53,32,103,50,52,48,55,50,52,50,48,32,103,50,52,48,56,50,52,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,22),40,102,95,51,55,55,48,32,103,50,51,55,53,50,51,55,54,50,51,55,55,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,51,53,53,32,103,50,51,54,55,50,51,56,49,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,50,32,97,110,97,109,101,115,50,51,52,57,32,105,50,51,53,48,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,37),40,108,111,111,112,32,97,114,103,115,50,51,51,54,32,97,110,97,109,101,115,50,51,51,55,32,97,116,121,112,101,115,50,51,51,56,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,26),40,102,95,51,54,50,53,32,120,50,51,49,57,32,114,50,51,50,48,32,99,50,51,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,21),40,102,95,51,57,52,52,32,116,101,109,112,50,50,50,51,50,50,56,48,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,21),40,102,95,51,57,53,53,32,116,101,109,112,50,50,50,51,50,51,48,56,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,102,95,51,57,56,52,32,116,121,112,101,50,51,49,55,32,118,97,114,50,51,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,50,57,49,32,103,50,51,48,51,50,51,49,48,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,50,54,51,32,103,50,50,55,53,50,50,56,50,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,50,49,56,32,108,50,50,49,51,50,50,53,52,32,108,101,110,50,50,49,52,50,50,53,53,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,50,49,56,32,108,50,50,49,51,50,50,51,57,32,108,101,110,50,50,49,52,50,50,52,48,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,53),40,102,95,51,57,51,52,32,105,110,112,117,116,50,50,49,50,50,50,50,53,32,114,101,110,97,109,101,50,50,50,49,50,50,50,54,32,99,111,109,112,97,114,101,50,50,48,57,50,50,50,55,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,102,95,52,49,57,53,32,120,50,50,48,49,32,114,50,50,48,50,32,99,50,50,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,8),40,102,95,52,50,52,53,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,59),40,102,95,52,50,53,51,32,116,121,112,101,50,49,55,54,50,49,55,55,50,49,56,50,32,112,114,101,100,50,49,55,56,50,49,55,57,50,49,56,51,32,112,117,114,101,50,49,56,48,50,49,56,49,50,49,56,52,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,26),40,102,95,52,50,50,55,32,120,50,49,55,49,32,114,50,49,55,50,32,99,50,49,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,16),40,102,95,52,51,53,56,32,97,114,103,50,49,53,55,41};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,49,52,48,32,103,50,49,53,50,50,49,54,49,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,26),40,102,95,52,51,49,54,32,120,50,49,50,54,32,114,50,49,50,55,32,99,50,49,50,56,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,102,95,52,52,49,48,32,120,50,49,48,57,32,114,50,49,49,48,32,99,50,49,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,48,55,48,32,108,50,48,54,53,50,49,48,49,32,108,101,110,50,48,54,54,50,49,48,50,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,48,55,48,32,108,50,48,54,53,50,48,57,49,32,108,101,110,50,48,54,54,50,48,57,50,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,53),40,102,95,52,52,56,52,32,105,110,112,117,116,50,48,54,52,50,48,55,55,32,114,101,110,97,109,101,50,48,55,51,50,48,55,56,32,99,111,109,112,97,114,101,50,48,54,49,50,48,55,57,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,48,50,48,32,108,50,48,49,53,50,48,52,53,32,108,101,110,50,48,49,54,50,48,52,54,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,53),40,102,95,52,54,49,52,32,105,110,112,117,116,50,48,49,52,50,48,50,55,32,114,101,110,97,109,101,50,48,50,51,50,48,50,56,32,99,111,109,112,97,114,101,50,48,49,49,50,48,50,57,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,26),40,102,95,52,56,49,52,32,120,50,48,48,51,32,114,50,48,48,52,32,99,50,48,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,29),40,102,95,52,56,50,56,32,102,111,114,109,49,57,57,54,32,114,49,57,57,55,32,99,49,57,57,56,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,29),40,102,95,52,56,53,49,32,102,111,114,109,49,57,56,53,32,114,49,57,56,54,32,99,49,57,56,55,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,47),40,108,111,111,112,32,120,115,49,57,54,52,32,118,97,114,115,49,57,54,53,32,98,115,49,57,54,54,32,118,97,108,115,49,57,54,55,32,114,101,115,116,49,57,54,56,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,29),40,102,95,52,57,48,54,32,102,111,114,109,49,57,53,55,32,114,49,57,53,56,32,99,49,57,53,57,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,40),40,108,111,111,112,32,120,115,49,57,51,53,32,118,97,114,115,49,57,51,54,32,118,97,108,115,49,57,51,55,32,114,101,115,116,49,57,51,56,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,29),40,102,95,53,48,55,50,32,102,111,114,109,49,57,50,56,32,114,49,57,50,57,32,99,49,57,51,48,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,18),40,102,95,53,52,52,55,32,115,110,97,109,101,49,56,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,108,111,116,115,49,56,57,49,32,105,49,56,57,50,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,54,53,32,103,49,56,55,55,49,56,56,52,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,51,54,32,103,49,56,52,56,49,56,53,52,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,29),40,102,95,53,50,50,52,32,102,111,114,109,49,56,50,49,32,114,49,56,50,50,32,99,49,56,50,51,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,14),40,102,95,53,54,49,55,32,107,49,55,55,51,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,53,54,32,103,49,55,54,56,49,55,55,56,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,20),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,49,55,51,55,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,57,50,32,103,49,56,48,52,49,56,49,48,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,29),40,102,95,53,53,51,50,32,102,111,114,109,49,55,50,53,32,114,49,55,50,54,32,99,49,55,50,55,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,29),40,102,95,53,55,55,57,32,102,111,114,109,49,55,49,51,32,114,49,55,49,52,32,99,49,55,49,53,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,29),40,102,95,53,56,55,48,32,102,111,114,109,49,54,57,51,32,114,49,54,57,52,32,99,49,54,57,53,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,53,55,54,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,15),40,103,101,110,118,97,114,115,32,110,49,53,55,52,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,8),40,102,95,54,48,50,51,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,54,54,48,32,103,49,54,55,50,49,54,56,48,32,103,49,54,55,51,49,54,56,49,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,27),40,98,117,105,108,100,32,118,97,114,115,50,49,54,51,57,32,118,114,101,115,116,49,54,52,48,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,28),40,102,95,54,48,51,49,32,118,97,114,115,49,49,54,51,53,32,118,97,114,115,50,49,54,51,54,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,35),40,102,95,54,48,48,54,32,118,97,114,115,49,54,50,50,32,97,114,103,99,49,54,50,51,32,114,101,115,116,49,54,50,52,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,23),40,102,95,53,57,57,56,32,99,49,54,50,48,32,98,111,100,121,49,54,50,49,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,35),40,102,95,54,50,49,53,32,118,97,114,115,49,53,57,57,32,97,114,103,99,49,54,48,48,32,114,101,115,116,49,54,48,49,41,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,14),40,102,95,54,50,48,55,32,99,49,53,57,56,41,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,56,49,32,103,49,53,57,51,49,54,48,51,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,29),40,102,95,53,57,50,56,32,102,111,114,109,49,53,55,48,32,114,49,53,55,49,32,99,49,53,55,50,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,97,114,103,115,49,53,53,50,32,118,97,114,100,101,102,115,49,53,53,51,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,29),40,102,95,54,50,57,49,32,102,111,114,109,49,53,51,56,32,114,49,53,51,57,32,99,49,53,52,48,41,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,29),40,102,95,54,52,49,53,32,102,111,114,109,49,53,50,51,32,114,49,53,50,52,32,99,49,53,50,53,41,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,48),40,114,101,99,117,114,32,118,97,114,115,49,51,56,52,32,100,101,102,97,117,108,116,101,114,115,49,51,56,53,32,110,111,110,45,100,101,102,97,117,108,116,115,49,51,56,54,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,61),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,49,51,55,56,32,100,101,102,97,117,108,116,101,114,115,49,51,55,57,32,98,111,100,121,45,112,114,111,99,49,51,56,48,32,114,101,115,116,49,51,56,49,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,27),40,102,95,54,54,52,50,32,112,114,101,102,105,120,49,52,50,51,32,115,121,109,49,52,50,52,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,14),40,102,95,54,54,53,50,32,118,49,52,52,53,41,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,16),40,102,95,54,54,55,49,32,118,97,114,49,53,48,50,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,58),40,114,101,99,117,114,32,118,97,114,115,49,51,54,57,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,49,51,55,48,32,100,101,102,115,49,51,55,49,32,110,101,120,116,45,103,117,121,49,51,55,50,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,56,53,32,103,49,52,57,55,49,53,48,52,41};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,53,54,32,103,49,52,54,56,49,52,55,52,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,50,56,32,103,49,52,52,48,49,52,52,55,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,57,56,32,103,49,52,49,48,49,52,49,54,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,29),40,102,95,54,52,56,53,32,102,111,114,109,49,51,53,53,32,114,49,51,53,54,32,99,49,51,53,55,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,14),40,102,95,54,57,51,48,32,120,49,51,51,56,41,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,50,49,32,103,49,51,51,51,49,51,52,51,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,51,48,48,32,101,108,115,101,63,49,51,48,49,41,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,29),40,102,95,54,56,52,53,32,102,111,114,109,49,50,56,56,32,114,49,50,56,57,32,99,49,50,57,48,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,13),40,102,111,108,100,32,98,115,49,50,54,55,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,29),40,102,95,54,57,56,51,32,102,111,114,109,49,50,54,49,32,114,49,50,54,50,32,99,49,50,54,51,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,28),40,113,117,111,116,105,102,121,45,112,114,111,99,32,120,115,49,50,52,51,32,105,100,49,50,52,52,41,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,29),40,102,95,55,48,54,52,32,102,111,114,109,49,50,51,57,32,114,49,50,52,48,32,99,49,50,52,49,41,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,102,95,55,49,53,51,32,102,111,114,109,49,50,51,49,32,114,49,50,51,50,32,99,49,50,51,51,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,14),40,102,95,55,50,48,48,32,118,49,49,48,49,41,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,14),40,102,95,55,50,49,53,32,118,49,49,49,48,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,14),40,102,95,55,50,50,57,32,118,49,49,51,51,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,14),40,102,95,55,50,54,49,32,118,49,50,48,57,41,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,57,50,32,103,49,50,48,52,49,50,49,52,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,54,54,32,103,49,49,55,56,49,49,56,52,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,15),40,102,95,55,50,52,48,32,118,98,49,49,54,48,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,52,51,32,103,49,49,53,53,49,50,50,49,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,49,54,32,103,49,49,50,56,49,49,51,53,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,56,52,32,103,49,48,57,54,49,49,48,51,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,14),40,102,95,55,52,51,49,32,120,49,48,55,51,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,53,54,32,103,49,48,54,56,49,48,55,53,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,29),40,102,95,55,49,57,48,32,102,111,114,109,49,48,52,56,32,114,49,48,52,57,32,99,49,48,53,48,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,49,48,51,57,41,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,29),40,102,95,55,52,55,52,32,102,111,114,109,49,48,51,50,32,114,49,48,51,51,32,99,49,48,51,52,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,97,112,112,101,110,100,42,32,105,108,56,55,51,32,108,56,55,52,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,19),40,109,97,112,42,32,112,114,111,99,56,55,53,32,108,56,55,54,41,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,13),40,102,95,55,53,57,54,32,118,57,51,55,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,13),40,102,95,55,54,49,49,32,118,57,52,54,41,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,14),40,102,95,55,54,50,52,32,120,49,48,50,49,41,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,13),40,102,95,55,54,52,55,32,118,57,56,54,41,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,54,57,32,103,57,56,49,57,56,56,41,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,35),40,102,111,108,100,32,108,108,105,115,116,115,57,53,56,32,101,120,112,115,57,53,57,32,108,108,105,115,116,115,50,57,54,48,41,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,48,52,32,103,49,48,49,54,49,48,50,51,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,57,52,57,32,97,99,99,57,53,48,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,50,48,32,103,57,51,50,57,51,57,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,57,48,57,32,97,99,99,57,49,48,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,56,51,32,103,56,57,53,57,48,49,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,26),40,102,95,55,53,50,48,32,102,111,114,109,56,54,54,32,114,56,54,55,32,99,56,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,14),40,102,95,55,57,50,57,32,110,109,56,53,52,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,52,52,32,103,56,53,49,56,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,26),40,102,95,55,57,50,53,32,102,111,114,109,56,51,57,32,114,56,52,48,32,99,56,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,18),40,102,95,56,48,51,49,32,118,56,50,51,32,97,56,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,56,48,52,32,103,56,49,54,56,50,57,32,103,56,49,55,56,51,48,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,55,53,32,103,55,56,55,55,57,51,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,26),40,102,95,55,57,55,56,32,102,111,114,109,55,53,56,32,114,55,53,57,32,99,55,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,26),40,102,95,56,49,49,57,32,102,111,114,109,55,53,49,32,114,55,53,50,32,99,55,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,26),40,102,95,56,49,52,50,32,102,111,114,109,55,52,52,32,114,55,52,53,32,99,55,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,13),40,102,95,56,49,57,55,32,122,54,48,53,41,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,13),40,102,95,56,50,48,57,32,122,54,51,51,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,19),40,102,95,56,50,55,51,32,97,55,50,55,32,97,50,55,50,56,41,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,55,48,56,32,103,55,50,48,55,51,51,32,103,55,50,49,55,51,52,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,54,55,55,32,103,54,56,57,54,57,55,32,103,54,57,48,54,57,56,41,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,54,52,54,32,103,54,53,56,54,54,54,32,103,54,53,57,54,54,55,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,49,54,32,103,54,50,56,54,51,53,41,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,56,56,32,103,54,48,48,54,48,55,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,54,49,32,103,53,55,51,53,55,57,41,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,51,52,32,103,53,52,54,53,53,50,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,26),40,102,95,56,49,54,50,32,102,111,114,109,53,50,50,32,114,53,50,51,32,99,53,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,115,53,48,51,41,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,26),40,102,95,56,53,53,52,32,102,111,114,109,52,56,56,32,114,52,56,57,32,99,52,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,13),40,102,95,56,54,53,56,32,120,50,49,51,41,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,13),40,102,95,56,54,54,56,32,120,50,52,49,41,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,20),40,102,95,56,55,48,51,32,110,116,52,51,54,32,105,100,52,51,55,41,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,20),40,102,95,56,55,49,52,32,105,100,52,55,50,32,111,116,52,55,51,41,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,53,51,32,103,52,54,53,52,55,56,32,103,52,54,54,52,55,57,41,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,49,55,32,103,52,50,57,52,52,50,32,103,52,51,48,52,52,51,41,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,20),40,102,95,56,56,50,49,32,111,116,51,54,52,32,105,100,51,54,53,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,20),40,102,95,56,56,51,52,32,105,100,52,48,48,32,110,116,52,48,49,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,56,49,32,103,51,57,51,52,48,54,32,103,51,57,52,52,48,55,41,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,52,53,32,103,51,53,55,51,55,48,32,103,51,53,56,51,55,49,41,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,49,49,32,103,51,50,51,51,51,52,32,103,51,50,52,51,51,53,41,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,51,51,49,41,0,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,50,53,52,32,103,50,54,54,51,48,48,32,103,50,54,55,51,48,49,41,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,55,53,32,103,50,56,55,50,57,51,41,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,50,52,32,103,50,51,54,50,52,51,41,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,57,54,32,103,50,48,56,50,49,53,41,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,54,57,32,103,49,56,49,49,56,55,41,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,26),40,102,95,56,54,52,53,32,102,111,114,109,49,54,49,32,114,49,54,50,32,99,49,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,26),40,102,95,57,49,56,48,32,102,111,114,109,49,52,55,32,114,49,52,56,32,99,49,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,25),40,97,57,50,51,56,32,102,111,114,109,49,50,56,32,114,49,50,57,32,99,49,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,26),40,102,95,57,51,48,54,32,102,111,114,109,49,50,48,32,114,49,50,49,32,99,49,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,26),40,102,95,57,51,50,48,32,102,111,114,109,49,49,52,32,114,49,49,53,32,99,49,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,26),40,102,95,57,51,51,49,32,102,111,114,109,49,48,55,32,114,49,48,56,32,99,49,48,57,41,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,23),40,102,95,57,51,54,57,32,102,111,114,109,56,54,32,114,56,55,32,99,56,56,41,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,15),40,102,95,57,52,54,51,32,115,108,111,116,52,50,41,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,22),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,54,49,32,105,54,50,41,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,50,53,32,103,51,55,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,20),40,102,95,57,52,52,55,32,120,49,51,32,114,49,52,32,99,49,53,41,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,20),40,102,95,57,55,51,57,32,102,111,114,109,54,32,114,55,32,99,56,41,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_6668)
static void C_ccall f_6668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6666)
static void C_ccall f_6666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7142)
static void C_ccall f_7142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6663)
static void C_ccall f_6663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6690)
static void C_ccall f_6690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8122)
static void C_ccall f_8122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6740)
static void C_fcall f_6740(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6682)
static void C_ccall f_6682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6684)
static void C_ccall f_6684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6735)
static void C_ccall f_6735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7105)
static void C_ccall f_7105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7102)
static void C_ccall f_7102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5996)
static void C_ccall f_5996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6710)
static void C_fcall f_6710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6966)
static void C_ccall f_6966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5070)
static void C_ccall f_5070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5977)
static void C_ccall f_5977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5979)
static void C_ccall f_5979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5971)
static void C_ccall f_5971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5064)
static void C_ccall f_5064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3523)
static void C_ccall f_3523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6941)
static void C_fcall f_6941(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3698)
static void C_fcall f_3698(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5955)
static void C_ccall f_5955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5952)
static void C_ccall f_5952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6930)
static void C_ccall f_6930(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8631)
static void C_ccall f_8631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8648)
static void C_ccall f_8648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8645)
static void C_ccall f_8645(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6601)
static void C_ccall f_6601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5939)
static void C_fcall f_5939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5931)
static void C_ccall f_5931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5933)
static void C_fcall f_5933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8643)
static void C_ccall f_8643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6634)
static void C_ccall f_6634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8657)
static void C_ccall f_8657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6632)
static void C_ccall f_6632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8658)
static void C_ccall f_8658(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6995)
static void C_fcall f_6995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5967)
static void C_ccall f_5967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5965)
static void C_ccall f_5965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5963)
static void C_ccall f_5963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5961)
static void C_ccall f_5961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6986)
static void C_ccall f_6986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6981)
static void C_ccall f_6981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6626)
static void C_ccall f_6626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8668)
static void C_ccall f_8668(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8667)
static void C_ccall f_8667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6983)
static void C_ccall f_6983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8664)
static void C_ccall f_8664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8677)
static void C_ccall f_8677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6658)
static void C_ccall f_6658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6651)
static void C_ccall f_6651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6652)
static void C_ccall f_6652(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3586)
static void C_fcall f_3586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8674)
static void C_ccall f_8674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6648)
static void C_ccall f_6648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6641)
static void C_ccall f_6641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6642)
static void C_ccall f_6642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8683)
static void C_ccall f_8683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5694)
static void C_ccall f_5694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6926)
static void C_ccall f_6926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4321)
static void C_ccall f_4321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8941)
static void C_ccall f_8941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8944)
static void C_ccall f_8944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6911)
static void C_ccall f_6911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6914)
static void C_ccall f_6914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8951)
static void C_ccall f_8951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8953)
static void C_fcall f_8953(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6909)
static void C_ccall f_6909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8964)
static void C_fcall f_8964(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8271)
static void C_ccall f_8271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8273)
static void C_ccall f_8273(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5537)
static void C_ccall f_5537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5530)
static void C_ccall f_5530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8608)
static void C_ccall f_8608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7978)
static void C_ccall f_7978(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7976)
static void C_ccall f_7976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8617)
static void C_ccall f_8617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7964)
static void C_ccall f_7964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8997)
static void C_fcall f_8997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7173)
static void C_ccall f_7173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8624)
static void C_ccall f_8624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5786)
static void C_ccall f_5786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5784)
static void C_ccall f_5784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5782)
static void C_ccall f_5782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8934)
static void C_ccall f_8934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7981)
static void C_ccall f_7981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7193)
static void C_ccall f_7193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7199)
static void C_ccall f_7199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7190)
static void C_ccall f_7190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7938)
static void C_ccall f_7938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7932)
static void C_ccall f_7932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7185)
static void C_ccall f_7185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7188)
static void C_ccall f_7188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5768)
static void C_ccall f_5768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7955)
static void C_fcall f_7955(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7951)
static void C_ccall f_7951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7945)
static void C_ccall f_7945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8859)
static void C_fcall f_8859(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7158)
static void C_ccall f_7158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7156)
static void C_ccall f_7156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7153)
static void C_ccall f_7153(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7151)
static void C_ccall f_7151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8901)
static void C_fcall f_8901(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3448)
static void C_ccall f_3448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3442)
static void C_ccall f_3442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8876)
static void C_ccall f_8876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8918)
static void C_ccall f_8918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7694)
static void C_fcall f_7694(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8890)
static void C_fcall f_8890(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7685)
static void C_ccall f_7685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5490)
static void C_fcall f_5490(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7821)
static void C_ccall f_7821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7826)
static void C_fcall f_7826(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7892)
static void C_fcall f_7892(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7653)
static void C_ccall f_7653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_fcall f_5460(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7658)
static void C_ccall f_7658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7647)
static void C_ccall f_7647(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5447)
static void C_ccall f_5447(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7660)
static void C_fcall f_7660(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8017)
static void C_ccall f_8017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7510)
static void C_ccall f_7510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7518)
static void C_ccall f_7518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_fcall f_4096(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8039)
static void C_ccall f_8039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8821)
static void C_ccall f_8821(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8819)
static void C_ccall f_8819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5348)
static void C_ccall f_5348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8041)
static void C_fcall f_8041(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8834)
static void C_ccall f_8834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8832)
static void C_ccall f_8832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8829)
static void C_ccall f_8829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7529)
static void C_fcall f_7529(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7523)
static void C_ccall f_7523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8052)
static void C_fcall f_8052(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4088)
static void C_ccall f_4088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8840)
static void C_ccall f_8840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7815)
static void C_ccall f_7815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3436)
static void C_ccall f_3436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6545)
static void C_ccall f_6545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4682)
static void C_ccall f_4682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8848)
static void C_fcall f_8848(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5304)
static void C_ccall f_5304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5301)
static void C_fcall f_5301(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9555)
static void C_ccall f_9555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9557)
static void C_ccall f_9557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9553)
static void C_ccall f_9553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6551)
static void C_ccall f_6551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6554)
static void C_ccall f_6554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9568)
static void C_ccall f_9568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9540)
static void C_fcall f_9540(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6581)
static void C_ccall f_6581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9538)
static void C_ccall f_9538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4643)
static void C_ccall f_4643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3820)
static void C_fcall f_3820(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5088)
static void C_fcall f_5088(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9580)
static void C_fcall f_9580(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9577)
static void C_ccall f_9577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7341)
static void C_fcall f_7341(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4377)
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7330)
static void C_ccall f_7330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4703)
static void C_fcall f_4703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3867)
static void C_fcall f_3867(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7339)
static void C_ccall f_7339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6504)
static void C_ccall f_6504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6507)
static void C_ccall f_6507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6530)
static void C_ccall f_6530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7305)
static void C_fcall f_7305(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7300)
static void C_ccall f_7300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9520)
static void C_ccall f_9520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6568)
static void C_fcall f_6568(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6562)
static void C_fcall f_6562(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6512)
static void C_fcall f_6512(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7067)
static void C_fcall f_7067(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7064)
static void C_ccall f_7064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7062)
static void C_ccall f_7062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7047)
static void C_ccall f_7047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7034)
static void C_ccall f_7034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7020)
static void C_ccall f_7020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6277)
static void C_ccall f_6277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6274)
static void C_ccall f_6274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4140)
static void C_fcall f_4140(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8330)
static void C_ccall f_8330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8347)
static void C_fcall f_8347(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3655)
static void C_fcall f_3655(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8358)
static void C_fcall f_8358(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6289)
static void C_ccall f_6289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7396)
static void C_ccall f_7396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8389)
static void C_fcall f_8389(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4034)
static void C_fcall f_4034(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4812)
static void C_ccall f_4812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4828)
static void C_ccall f_4828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7366)
static void C_ccall f_7366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5553)
static void C_fcall f_5553(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5555)
static void C_fcall f_5555(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_fcall f_4004(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5551)
static void C_fcall f_5551(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7371)
static void C_fcall f_7371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5543)
static void C_ccall f_5543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5547)
static void C_fcall f_5547(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6225)
static void C_fcall f_6225(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8302)
static void C_fcall f_8302(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8313)
static void C_fcall f_8313(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7856)
static void C_fcall f_7856(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7851)
static void C_ccall f_7851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5807)
static void C_ccall f_5807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5873)
static void C_ccall f_5873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5870)
static void C_ccall f_5870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7087)
static void C_fcall f_7087(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7079)
static void C_ccall f_7079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7077)
static void C_fcall f_7077(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7071)
static void C_ccall f_7071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8215)
static void C_ccall f_8215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8218)
static void C_ccall f_8218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6207)
static void C_ccall f_6207(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8552)
static void C_ccall f_8552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8554)
static void C_ccall f_8554(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8557)
static void C_ccall f_8557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8563)
static void C_ccall f_8563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8569)
static void C_ccall f_8569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8565)
static void C_ccall f_8565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8567)
static void C_ccall f_8567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8203)
static void C_ccall f_8203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8209)
static void C_ccall f_8209(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7867)
static void C_ccall f_7867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7703)
static void C_ccall f_7703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7595)
static void C_ccall f_7595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7596)
static void C_ccall f_7596(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7593)
static void C_ccall f_7593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3762)
static void C_fcall f_3762(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8227)
static void C_ccall f_8227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7733)
static void C_ccall f_7733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7580)
static void C_ccall f_7580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8598)
static void C_fcall f_8598(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8193)
static void C_ccall f_8193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3709)
static void C_fcall f_3709(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7757)
static void C_fcall f_7757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8180)
static void C_ccall f_8180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8196)
static void C_ccall f_8196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8197)
static void C_ccall f_8197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7555)
static void C_fcall f_7555(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8186)
static void C_ccall f_8186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8188)
static void C_ccall f_8188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7548)
static void C_ccall f_7548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8238)
static void C_ccall f_8238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7577)
static void C_ccall f_7577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9369)
static void C_ccall f_9369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9367)
static void C_ccall f_9367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9331)
static void C_ccall f_9331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9334)
static void C_ccall f_9334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5237)
static void C_ccall f_5237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7401)
static void C_fcall f_7401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9391)
static void C_ccall f_9391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8521)
static void C_fcall f_8521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3781)
static void C_fcall f_3781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4158)
static void C_fcall f_4158(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7431)
static void C_ccall f_7431(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7439)
static void C_ccall f_7439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5216)
static void C_ccall f_5216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9372)
static void C_ccall f_9372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7426)
static void C_ccall f_7426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5243)
static void C_ccall f_5243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5245)
static void C_ccall f_5245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4540)
static void C_fcall f_4540(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4794)
static void C_ccall f_4794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4922)
static void C_fcall f_4922(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5227)
static void C_ccall f_5227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5224)
static void C_ccall f_5224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4782)
static void C_ccall f_4782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9445)
static void C_ccall f_9445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9447)
static void C_ccall f_9447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4775)
static void C_fcall f_4775(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9283)
static void C_ccall f_9283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4591)
static void C_ccall f_4591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9458)
static void C_ccall f_9458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9288)
static void C_ccall f_9288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9456)
static void C_ccall f_9456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9450)
static void C_ccall f_9450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9318)
static void C_ccall f_9318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4584)
static void C_fcall f_4584(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9295)
static void C_ccall f_9295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9463)
static void C_ccall f_9463(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9462)
static void C_ccall f_9462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9460)
static void C_ccall f_9460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9329)
static void C_ccall f_9329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9320)
static void C_ccall f_9320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4576)
static void C_ccall f_4576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7214)
static void C_ccall f_7214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7215)
static void C_ccall f_7215(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6150)
static void C_ccall f_6150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9304)
static void C_ccall f_9304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9306)
static void C_ccall f_9306(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9309)
static void C_ccall f_9309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9490)
static void C_ccall f_9490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7235)
static void C_ccall f_7235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7238)
static void C_ccall f_7238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7229)
static void C_ccall f_7229(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3955)
static void C_ccall f_3955(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7240)
static void C_ccall f_7240(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9210)
static void C_fcall f_9210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4413)
static void C_ccall f_4413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4410)
static void C_ccall f_4410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9404)
static void C_fcall f_9404(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9682)
static void C_ccall f_9682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9687)
static void C_ccall f_9687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3934)
static void C_ccall f_3934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7206)
static void C_ccall f_7206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7200)
static void C_ccall f_7200(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7209)
static void C_ccall f_7209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6488)
static void C_ccall f_6488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6485)
static void C_ccall f_6485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6483)
static void C_ccall f_6483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9655)
static void C_ccall f_9655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9652)
static void C_ccall f_9652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6453)
static void C_ccall f_6453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9667)
static void C_ccall f_9667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6444)
static void C_ccall f_6444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6474)
static void C_ccall f_6474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9239)
static void C_ccall f_9239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9237)
static void C_ccall f_9237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5295)
static void C_fcall f_5295(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5298)
static void C_ccall f_5298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9243)
static void C_ccall f_9243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6413)
static void C_ccall f_6413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9252)
static void C_fcall f_9252(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6418)
static void C_ccall f_6418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5270)
static void C_fcall f_5270(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5928)
static void C_ccall f_5928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6407)
static void C_ccall f_6407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5250)
static void C_ccall f_5250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3476)
static void C_ccall f_3476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6420)
static void C_ccall f_6420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5289)
static void C_fcall f_5289(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5285)
static void C_fcall f_5285(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6018)
static void C_fcall f_6018(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4831)
static void C_ccall f_4831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3481)
static void C_ccall f_3481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6009)
static void C_ccall f_6009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8461)
static void C_fcall f_8461(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8456)
static void C_ccall f_8456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4837)
static void C_ccall f_4837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6034)
static void C_ccall f_6034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6031)
static void C_ccall f_6031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4854)
static void C_ccall f_4854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3460)
static void C_ccall f_3460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5630)
static void C_fcall f_5630(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8160)
static void C_ccall f_8160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8162)
static void C_ccall f_8162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6023)
static void C_ccall f_6023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3493)
static void C_ccall f_3493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8491)
static void C_fcall f_8491(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8486)
static void C_ccall f_8486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5617)
static void C_ccall f_5617(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9183)
static void C_ccall f_9183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9180)
static void C_ccall f_9180(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9010)
static void C_ccall f_9010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9015)
static void C_fcall f_9015(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7259)
static void C_ccall f_7259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8431)
static void C_fcall f_8431(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9192)
static void C_ccall f_9192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5908)
static void C_ccall f_5908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7275)
static void C_fcall f_7275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7273)
static void C_ccall f_7273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5865)
static void C_ccall f_5865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9178)
static void C_ccall f_9178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7267)
static void C_ccall f_7267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7261)
static void C_ccall f_7261(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6320)
static void C_fcall f_6320(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6318)
static void C_ccall f_6318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9057)
static void C_fcall f_9057(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8069)
static void C_ccall f_8069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9026)
static void C_fcall f_9026(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9706)
static void C_fcall f_9706(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8770)
static void C_fcall f_8770(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9702)
static void C_ccall f_9702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8400)
static void C_fcall f_8400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8083)
static void C_fcall f_8083(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7787)
static void C_fcall f_7787(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7782)
static void C_ccall f_7782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8798)
static void C_ccall f_8798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_fcall f_5716(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9739)
static void C_ccall f_9739(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9737)
static void C_ccall f_9737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9731)
static void C_ccall f_9731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9112)
static void C_ccall f_9112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9117)
static void C_fcall f_9117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5705)
static void C_ccall f_5705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9742)
static void C_ccall f_9742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8781)
static void C_fcall f_8781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9142)
static void C_ccall f_9142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9147)
static void C_fcall f_9147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6307)
static void C_ccall f_6307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6305)
static void C_ccall f_6305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6303)
static void C_ccall f_6303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8714)
static void C_ccall f_8714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7610)
static void C_ccall f_7610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7611)
static void C_ccall f_7611(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8712)
static void C_ccall f_8712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7619)
static void C_ccall f_7619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5414)
static void C_ccall f_5414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7602)
static void C_ccall f_7602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7605)
static void C_ccall f_7605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7632)
static void C_fcall f_7632(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7630)
static void C_ccall f_7630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6343)
static void C_ccall f_6343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8739)
static void C_fcall f_8739(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7488)
static void C_fcall f_7488(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7483)
static void C_ccall f_7483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5025)
static void C_ccall f_5025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8703)
static void C_ccall f_8703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8701)
static void C_ccall f_8701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8709)
static void C_ccall f_8709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7624)
static void C_ccall f_7624(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4967)
static void C_ccall f_4967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7923)
static void C_ccall f_7923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7925)
static void C_ccall f_7925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7928)
static void C_ccall f_7928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7929)
static void C_ccall f_7929(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8756)
static void C_ccall f_8756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8720)
static void C_ccall f_8720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8728)
static void C_fcall f_8728(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4938)
static void C_ccall f_4938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7441)
static void C_fcall f_7441(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8294)
static void C_ccall f_8294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7472)
static void C_ccall f_7472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7474)
static void C_ccall f_7474(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7477)
static void C_ccall f_7477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6800)
static void C_fcall f_6800(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7466)
static void C_ccall f_7466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4989)
static void C_ccall f_4989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6095)
static void C_fcall f_6095(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9087)
static void C_fcall f_9087(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4612)
static void C_ccall f_4612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4278)
static void C_fcall f_4278(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5003)
static void C_ccall f_5003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3396)
static void C_ccall f_3396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4631)
static void C_ccall f_4631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3384)
static void C_ccall f_3384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6053)
static void C_fcall f_6053(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6051)
static void C_ccall f_6051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6770)
static void C_fcall f_6770(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4623)
static void C_fcall f_4623(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6897)
static void C_ccall f_6897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6899)
static void C_ccall f_6899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8108)
static void C_ccall f_8108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8117)
static void C_ccall f_8117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8119)
static void C_ccall f_8119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6064)
static void C_fcall f_6064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6856)
static void C_ccall f_6856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6858)
static void C_ccall f_6858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6854)
static void C_ccall f_6854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8140)
static void C_ccall f_8140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8142)
static void C_ccall f_8142(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8145)
static void C_ccall f_8145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6845)
static void C_ccall f_6845(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6843)
static void C_ccall f_6843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6840)
static void C_ccall f_6840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6869)
static void C_fcall f_6869(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6867)
static void C_ccall f_6867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6677)
static void C_ccall f_6677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6670)
static void C_ccall f_6670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6671)
static void C_ccall f_6671(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3625)
static void C_ccall f_3625(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;

C_noret_decl(trf_6740)
static void C_fcall trf_6740(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6740(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6740(t0,t1,t2);}

C_noret_decl(trf_6710)
static void C_fcall trf_6710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6710(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6710(t0,t1,t2);}

C_noret_decl(trf_6941)
static void C_fcall trf_6941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6941(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6941(t0,t1,t2);}

C_noret_decl(trf_3698)
static void C_fcall trf_3698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3698(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3698(t0,t1,t2,t3);}

C_noret_decl(trf_5939)
static void C_fcall trf_5939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5939(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5939(t0,t1,t2);}

C_noret_decl(trf_5933)
static void C_fcall trf_5933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5933(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5933(t0,t1,t2);}

C_noret_decl(trf_6995)
static void C_fcall trf_6995(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6995(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6995(t0,t1,t2);}

C_noret_decl(trf_3586)
static void C_fcall trf_3586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3586(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3586(t0,t1,t2);}

C_noret_decl(trf_8953)
static void C_fcall trf_8953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8953(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8953(t0,t1,t2,t3);}

C_noret_decl(trf_8964)
static void C_fcall trf_8964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8964(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8964(t0,t1);}

C_noret_decl(trf_8997)
static void C_fcall trf_8997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8997(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8997(t0,t1,t2);}

C_noret_decl(trf_7955)
static void C_fcall trf_7955(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7955(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7955(t0,t1,t2);}

C_noret_decl(trf_8859)
static void C_fcall trf_8859(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8859(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8859(t0,t1);}

C_noret_decl(trf_8901)
static void C_fcall trf_8901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8901(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8901(t0,t1);}

C_noret_decl(trf_7694)
static void C_fcall trf_7694(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7694(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7694(t0,t1);}

C_noret_decl(trf_8890)
static void C_fcall trf_8890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8890(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8890(t0,t1,t2,t3);}

C_noret_decl(trf_5490)
static void C_fcall trf_5490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5490(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5490(t0,t1,t2);}

C_noret_decl(trf_7826)
static void C_fcall trf_7826(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7826(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7826(t0,t1,t2);}

C_noret_decl(trf_7892)
static void C_fcall trf_7892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7892(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7892(t0,t1,t2);}

C_noret_decl(trf_5460)
static void C_fcall trf_5460(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5460(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5460(t0,t1,t2);}

C_noret_decl(trf_7660)
static void C_fcall trf_7660(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7660(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7660(t0,t1,t2);}

C_noret_decl(trf_4096)
static void C_fcall trf_4096(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4096(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4096(t0,t1,t2,t3);}

C_noret_decl(trf_8041)
static void C_fcall trf_8041(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8041(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8041(t0,t1,t2,t3);}

C_noret_decl(trf_7529)
static void C_fcall trf_7529(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7529(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7529(t0,t1,t2,t3);}

C_noret_decl(trf_8052)
static void C_fcall trf_8052(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8052(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8052(t0,t1);}

C_noret_decl(trf_8848)
static void C_fcall trf_8848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8848(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8848(t0,t1,t2,t3);}

C_noret_decl(trf_5301)
static void C_fcall trf_5301(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5301(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5301(t0,t1);}

C_noret_decl(trf_9540)
static void C_fcall trf_9540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9540(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9540(t0,t1,t2,t3);}

C_noret_decl(trf_3820)
static void C_fcall trf_3820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3820(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3820(t0,t1,t2,t3);}

C_noret_decl(trf_5088)
static void C_fcall trf_5088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5088(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5088(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_9580)
static void C_fcall trf_9580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9580(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9580(t0,t1);}

C_noret_decl(trf_7341)
static void C_fcall trf_7341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7341(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7341(t0,t1,t2);}

C_noret_decl(trf_4377)
static void C_fcall trf_4377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4377(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4377(t0,t1,t2);}

C_noret_decl(trf_4703)
static void C_fcall trf_4703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4703(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4703(t0,t1);}

C_noret_decl(trf_3867)
static void C_fcall trf_3867(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3867(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3867(t0,t1);}

C_noret_decl(trf_7305)
static void C_fcall trf_7305(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7305(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7305(t0,t1,t2);}

C_noret_decl(trf_6568)
static void C_fcall trf_6568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6568(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6568(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6562)
static void C_fcall trf_6562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6562(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6562(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6512)
static void C_fcall trf_6512(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6512(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6512(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7067)
static void C_fcall trf_7067(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7067(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7067(t0,t1,t2,t3);}

C_noret_decl(trf_4140)
static void C_fcall trf_4140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4140(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4140(t0,t1,t2,t3);}

C_noret_decl(trf_8347)
static void C_fcall trf_8347(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8347(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8347(t0,t1,t2,t3);}

C_noret_decl(trf_3655)
static void C_fcall trf_3655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3655(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3655(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8358)
static void C_fcall trf_8358(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8358(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8358(t0,t1);}

C_noret_decl(trf_8389)
static void C_fcall trf_8389(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8389(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8389(t0,t1,t2,t3);}

C_noret_decl(trf_4034)
static void C_fcall trf_4034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4034(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4034(t0,t1,t2);}

C_noret_decl(trf_5553)
static void C_fcall trf_5553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5553(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5553(t0,t1);}

C_noret_decl(trf_5555)
static void C_fcall trf_5555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5555(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5555(t0,t1);}

C_noret_decl(trf_4004)
static void C_fcall trf_4004(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4004(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4004(t0,t1,t2);}

C_noret_decl(trf_5551)
static void C_fcall trf_5551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5551(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5551(t0,t1);}

C_noret_decl(trf_7371)
static void C_fcall trf_7371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7371(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7371(t0,t1,t2);}

C_noret_decl(trf_5547)
static void C_fcall trf_5547(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5547(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5547(t0,t1,t2);}

C_noret_decl(trf_6225)
static void C_fcall trf_6225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6225(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6225(t0,t1,t2);}

C_noret_decl(trf_8302)
static void C_fcall trf_8302(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8302(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8302(t0,t1,t2,t3);}

C_noret_decl(trf_8313)
static void C_fcall trf_8313(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8313(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8313(t0,t1);}

C_noret_decl(trf_7856)
static void C_fcall trf_7856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7856(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7856(t0,t1,t2,t3);}

C_noret_decl(trf_7087)
static void C_fcall trf_7087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7087(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7087(t0,t1);}

C_noret_decl(trf_7077)
static void C_fcall trf_7077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7077(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7077(t0,t1);}

C_noret_decl(trf_3762)
static void C_fcall trf_3762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3762(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3762(t0,t1);}

C_noret_decl(trf_8598)
static void C_fcall trf_8598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8598(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8598(t0,t1,t2);}

C_noret_decl(trf_3709)
static void C_fcall trf_3709(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3709(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3709(t0,t1);}

C_noret_decl(trf_7757)
static void C_fcall trf_7757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7757(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7757(t0,t1,t2);}

C_noret_decl(trf_7555)
static void C_fcall trf_7555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7555(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7555(t0,t1,t2,t3);}

C_noret_decl(trf_7401)
static void C_fcall trf_7401(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7401(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7401(t0,t1,t2);}

C_noret_decl(trf_8521)
static void C_fcall trf_8521(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8521(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8521(t0,t1,t2);}

C_noret_decl(trf_3781)
static void C_fcall trf_3781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3781(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3781(t0,t1,t2);}

C_noret_decl(trf_4158)
static void C_fcall trf_4158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4158(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4158(t0,t1);}

C_noret_decl(trf_4540)
static void C_fcall trf_4540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4540(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4540(t0,t1,t2,t3);}

C_noret_decl(trf_4922)
static void C_fcall trf_4922(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4922(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4922(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4775)
static void C_fcall trf_4775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4775(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4775(t0,t1,t2,t3);}

C_noret_decl(trf_4584)
static void C_fcall trf_4584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4584(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4584(t0,t1,t2,t3);}

C_noret_decl(trf_9210)
static void C_fcall trf_9210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9210(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9210(t0,t1);}

C_noret_decl(trf_9404)
static void C_fcall trf_9404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9404(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9404(t0,t1);}

C_noret_decl(trf_5295)
static void C_fcall trf_5295(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5295(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5295(t0,t1);}

C_noret_decl(trf_9252)
static void C_fcall trf_9252(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9252(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9252(t0,t1);}

C_noret_decl(trf_5270)
static void C_fcall trf_5270(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5270(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5270(t0,t1,t2,t3);}

C_noret_decl(trf_5289)
static void C_fcall trf_5289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5289(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5289(t0,t1);}

C_noret_decl(trf_5285)
static void C_fcall trf_5285(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5285(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5285(t0,t1);}

C_noret_decl(trf_6018)
static void C_fcall trf_6018(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6018(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6018(t0,t1);}

C_noret_decl(trf_8461)
static void C_fcall trf_8461(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8461(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8461(t0,t1,t2);}

C_noret_decl(trf_5630)
static void C_fcall trf_5630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5630(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5630(t0,t1,t2);}

C_noret_decl(trf_8491)
static void C_fcall trf_8491(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8491(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8491(t0,t1,t2);}

C_noret_decl(trf_9015)
static void C_fcall trf_9015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9015(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9015(t0,t1,t2,t3);}

C_noret_decl(trf_8431)
static void C_fcall trf_8431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8431(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8431(t0,t1,t2);}

C_noret_decl(trf_7275)
static void C_fcall trf_7275(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7275(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7275(t0,t1,t2);}

C_noret_decl(trf_6320)
static void C_fcall trf_6320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6320(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6320(t0,t1,t2,t3);}

C_noret_decl(trf_9057)
static void C_fcall trf_9057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9057(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9057(t0,t1,t2);}

C_noret_decl(trf_9026)
static void C_fcall trf_9026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9026(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9026(t0,t1);}

C_noret_decl(trf_9706)
static void C_fcall trf_9706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9706(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9706(t0,t1,t2);}

C_noret_decl(trf_8770)
static void C_fcall trf_8770(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8770(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8770(t0,t1,t2,t3);}

C_noret_decl(trf_8400)
static void C_fcall trf_8400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8400(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8400(t0,t1);}

C_noret_decl(trf_8083)
static void C_fcall trf_8083(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8083(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8083(t0,t1,t2);}

C_noret_decl(trf_7787)
static void C_fcall trf_7787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7787(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7787(t0,t1,t2,t3);}

C_noret_decl(trf_5716)
static void C_fcall trf_5716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5716(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5716(t0,t1,t2);}

C_noret_decl(trf_9117)
static void C_fcall trf_9117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9117(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9117(t0,t1,t2);}

C_noret_decl(trf_8781)
static void C_fcall trf_8781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8781(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8781(t0,t1);}

C_noret_decl(trf_9147)
static void C_fcall trf_9147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9147(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9147(t0,t1,t2);}

C_noret_decl(trf_7632)
static void C_fcall trf_7632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7632(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7632(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8739)
static void C_fcall trf_8739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8739(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8739(t0,t1);}

C_noret_decl(trf_7488)
static void C_fcall trf_7488(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7488(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7488(t0,t1,t2);}

C_noret_decl(trf_8728)
static void C_fcall trf_8728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8728(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8728(t0,t1,t2,t3);}

C_noret_decl(trf_7441)
static void C_fcall trf_7441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7441(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7441(t0,t1,t2);}

C_noret_decl(trf_6800)
static void C_fcall trf_6800(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6800(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6800(t0,t1,t2);}

C_noret_decl(trf_6095)
static void C_fcall trf_6095(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6095(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6095(t0,t1,t2,t3);}

C_noret_decl(trf_9087)
static void C_fcall trf_9087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9087(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9087(t0,t1,t2);}

C_noret_decl(trf_4278)
static void C_fcall trf_4278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4278(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4278(t0,t1);}

C_noret_decl(trf_6053)
static void C_fcall trf_6053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6053(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6053(t0,t1,t2,t3);}

C_noret_decl(trf_6770)
static void C_fcall trf_6770(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6770(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6770(t0,t1,t2);}

C_noret_decl(trf_4623)
static void C_fcall trf_4623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4623(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4623(t0,t1);}

C_noret_decl(trf_6064)
static void C_fcall trf_6064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6064(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6064(t0,t1);}

C_noret_decl(trf_6869)
static void C_fcall trf_6869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6869(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6869(t0,t1,t2,t3);}

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

/* k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:672: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[183]);}

/* k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:669: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[184]);}

/* k7141 */
static void C_ccall f_7142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7142,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[203],t1));}

/* k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6663(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6663,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6740,a[2]=t5,a[3]=t8,a[4]=t3,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_6740(t10,t6,((C_word*)t0)[9]);}

/* k3610 in map-loop2449 in k3533 in k3531 in k3527 */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3611,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3586(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3586(t6,((C_word*)t0)[5],t5);}}

/* k6689 in k6683 in k6681 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6690,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[97],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,t1,t7,((C_word*)t0)[9]));}

/* k6836 in k6839 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in ... */
static void C_ccall f_6837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6837,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[151],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6483,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6485,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:615: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k8121 */
static void C_ccall f_8122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8122,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,lf[223]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[26],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,4,lf[155],t2,t3,t7));}

/* map-loop1456 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_fcall f_6740(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6740,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6681 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6682,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:679: make-if-tree */
t3=((C_word*)t0)[9];
f_6562(t3,t2,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k6683 in k6681 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:682: r */
t3=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[182]);}

/* k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6680(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=((C_word*)t0)[10];
t4=((C_word*)t0)[6];
t5=t1;
t6=((C_word*)t0)[11];
t7=*((C_word*)lf[32]+1);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6504,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:626: reverse */
t9=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}

/* k3669 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3670(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3670,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[35],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[37],t2,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3687,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t11=((C_word*)t0)[3];
t12=((C_word*)t0)[4];
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[7],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3698,a[2]=t9,a[3]=t15,a[4]=t7,a[5]=t10,a[6]=((C_word)li5),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_3698(t17,t13,t11,t12);}

/* k6734 in map-loop1485 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6735(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6735,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6710(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6710(t6,((C_word*)t0)[5],t5);}}

/* k7104 in k7076 in k7070 in quotify-proc */
static void C_ccall f_7105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
/* chicken-syntax.scm:472: c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[4],t1,t3);}

/* k5096 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:993: reverse */
t3=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k5098 in k5096 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5099,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5104,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5130,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:995: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_i_car(t1);
t3=C_a_i_list(&a,2,lf[26],t2);
t4=t1;
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,t3,t5);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[97],((C_word*)t0)[5],t6));}}

/* k7101 in k7076 in k7070 in quotify-proc */
static void C_ccall f_7102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_7087(t2,C_i_not(t1));}

/* f_5998 in k5986 in k5980 in k5978 in k5976 in k5974 in k5972 in k5970 in k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5998,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6006,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li57),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:795: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[159]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t4,t5);}

/* k5995 in k5986 in k5980 in k5978 in k5976 in k5974 in k5972 in k5970 in k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5996,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[30],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[97],((C_word*)t0)[4],t2));}

/* map-loop1485 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_fcall f_6710(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6710,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6735,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:674: g1491 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6965 in map-loop1321 in k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6966(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6966,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6941(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6941(t6,((C_word*)t0)[5],t5);}}

/* k5078 in k5076 in k5074 */
static void C_ccall f_5079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5081,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:989: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[107],lf[109],((C_word*)t0)[2]);}
else{
t4=t2;
f_5081(2,t4,C_SCHEME_UNDEFINED);}}

/* k5076 in k5074 */
static void C_ccall f_5077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5077,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:987: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[100]);}

/* k5074 */
static void C_ccall f_5075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:986: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[104]);}

/* f_5072 in k5215 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in ... */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5072,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5075,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:985: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[105]);}

/* k5069 in k5215 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in ... */
static void C_ccall f_5070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:980: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[107],((C_word*)t0)[3],t1);}

/* k5972 in k5970 in k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:785: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[152]);}

/* k5974 in k5972 in k5970 in k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:786: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[150]);}

/* k5976 in k5974 in k5972 in k5970 in k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:787: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[151]);}

/* k5978 in k5976 in k5974 in k5972 in k5970 in k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:788: r */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[153]);}

/* k5970 in k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5973,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:784: r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[149]);}

/* k5063 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in ... */
static void C_ccall f_5064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5064,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[100],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4904,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4906,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1015: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k3527 */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3528,2,t0,t1);}
t2=C_i_memq(lf[13],*((C_word*)lf[14]+1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3532,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1276: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3522 in k3463 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in ... */
static void C_ccall f_3523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1270: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[25],C_SCHEME_END_OF_LIST,t1);}

/* f_3525 in k3463 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in ... */
static void C_ccall f_3525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3525,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3528,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1274: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[25],t2,lf[33]);}

/* map-loop1321 in k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_fcall f_6941(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6941,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6966,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:530: g1327 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3694 in k3669 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3696,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[30],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[26],((C_word*)t0)[6],t3));}

/* map-loop2395 in k3669 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_fcall f_3698(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3698,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:1249: g2401 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5954 in k5951 in loop in genvars in k5930 */
static void C_ccall f_5955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5955,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5951 in loop in genvars in k5930 */
static void C_ccall f_5952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5955,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:774: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5939(t4,t2,t3);}

/* k3510 in k3492 in k3490 in k3488 in k3480 */
static void C_ccall f_3511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3511,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[17],t3));}

/* k6937 in k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6939,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[26],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6926,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:533: expand */
t6=((C_word*)((C_word*)t0)[5])[1];
f_6869(t6,t5,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* f_6930 in k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6930(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6930,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[193],((C_word*)t0)[2],t2));}

/* f_3687 in k3669 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3687(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3687,4,t0,t1,t2,t3);}
t4=C_a_i_list(&a,4,lf[38],t3,C_SCHEME_TRUE,t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list2(&a,2,t2,t4));}

/* k8629 in k8622 in k8615 in loop in k8566 in k8564 in k8562 in k8556 */
static void C_ccall f_8631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:261: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8598(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
/* chicken-syntax.scm:260: ##sys#error */
t4=*((C_word*)lf[241]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[6],lf[242],t3);}}

/* k3559 in k3553 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3560,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,lf[26],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list2(&a,2,t1,t4));}

/* k8647 */
static void C_ccall f_8648(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8648,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_i_check_list_2(t2,lf[28]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8657,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9147,a[2]=t9,a[3]=t13,a[4]=t7,a[5]=((C_word)li153),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9147(t15,t11,t2);}

/* f_8645 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8645(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8645,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8648,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:213: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[247],t2,lf[248]);}

/* k6600 in k6619 in k6625 in k6631 in recur in make-if-tree in k6487 */
static void C_ccall f_6601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6601,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[30],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,lf[155],((C_word*)t0)[4],((C_word*)t0)[5],t2));}

/* loop in genvars in k5930 */
static void C_fcall f_5939(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5939,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5952,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5961,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:774: gensym */
t5=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5930 */
static void C_ccall f_5931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5933,a[2]=((C_word*)t0)[2],a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5963,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:775: require */
t4=*((C_word*)lf[166]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[167]);}

/* genvars in k5930 */
static void C_fcall f_5933(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5933,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5939,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5939(t6,t1,C_fix(0));}

/* k3531 in k3527 */
static void C_ccall f_3532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3534,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1277: get-line-number */
t3=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k8642 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:209: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[247],C_SCHEME_END_OF_LIST,t1);}

/* k3533 in k3531 in k3527 */
static void C_ccall f_3534(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3534,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[4],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_i_check_list_2(t12,lf[28]);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3584,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3586,a[2]=t8,a[3]=t16,a[4]=t6,a[5]=t9,a[6]=((C_word)li2),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_3586(t18,t14,t12);}

/* f_3551 in k3533 in k3531 in k3527 */
static void C_ccall f_3551(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3551,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3554,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* chicken-syntax.scm:1283: ##sys#strip-syntax */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3553 */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[27]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[26],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list2(&a,2,lf[27],t6));}
else{
if(C_truep(((C_word*)t0)[4])){
/* chicken-syntax.scm:1288: ##compiler#check-and-validate-type */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t1,lf[25]);}
else{
t4=t1;
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[26],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list2(&a,2,t4,t7));}}}

/* k6635 in k6633 in k6487 */
static void C_ccall f_6636(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6636,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6641,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6800,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6800(t11,t7,((C_word*)t0)[2]);}

/* k6633 in k6487 */
static void C_ccall f_6634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:657: ##sys#check-syntax */
t3=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[176],((C_word*)t0)[5],lf[185]);}

/* k8655 in k8647 */
static void C_ccall f_8657(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8657,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8658,a[2]=((C_word*)t0)[2],a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9117,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,a[6]=((C_word)li152),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_9117(t11,t7,((C_word*)t0)[5]);}

/* k6631 in recur in make-if-tree in k6487 */
static void C_ccall f_6632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6632,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6626,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:650: r */
t4=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[150]);}

/* f_8658 in k8655 in k8647 */
static void C_ccall f_8658(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8658,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8664,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:217: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* fold in k6985 */
static void C_fcall f_6995(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(14);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6995,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[26],((C_word*)t0)[2]));}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t3))){
t6=C_i_cdr(t3);
if(C_truep(C_i_nullp(t6))){
t7=C_u_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7034,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:492: fold */
t16=t8;
t17=t5;
t1=t16;
t2=t17;
goto loop;}
else{
t7=C_u_i_car(t3);
t8=C_i_cadr(t3);
t9=C_a_i_list(&a,2,t7,t8);
t10=C_a_i_list(&a,1,t9);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7047,a[2]=t7,a[3]=t1,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:496: fold */
t16=t11;
t17=t5;
t1=t16;
t2=t17;
goto loop;}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7020,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:491: fold */
t16=t6;
t17=t5;
t1=t16;
t2=t17;
goto loop;}}}

/* k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5971,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:783: r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[163]);}

/* k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:782: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[164]);}

/* k5964 in k5962 in k5930 */
static void C_ccall f_5965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5967,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:781: genvars */
t3=((C_word*)t0)[5];
f_5933(t3,t2,t1);}

/* k5962 in k5930 */
static void C_ccall f_5963(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6207,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t8=C_i_cdr(((C_word*)t0)[4]);
t9=C_i_check_list_2(t8,lf[28]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6223,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6225,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_6225(t14,t10,t8);}

/* k5960 in loop in genvars in k5930 */
static void C_ccall f_5961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:774: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6985 */
static void C_ccall f_6986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6986,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6995,a[2]=t5,a[3]=t7,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_6995(t9,((C_word*)t0)[3],t2);}

/* k6980 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in ... */
static void C_ccall f_6981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:479: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[198],C_SCHEME_END_OF_LIST,t1);}

/* k6625 in k6631 in recur in make-if-tree in k6487 */
static void C_ccall f_6626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6626,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6620,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:651: r */
t5=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[151]);}

/* f_8668 in k8665 in k8655 in k8647 */
static void C_ccall f_8668(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8668,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8674,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:218: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k8665 in k8655 in k8647 */
static void C_ccall f_8667(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8667,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8668,a[2]=((C_word*)t0)[2],a[3]=((C_word)li138),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8677,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9087,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,a[6]=((C_word)li151),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_9087(t11,t7,((C_word*)t0)[6]);}

/* f_6983 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in ... */
static void C_ccall f_6983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6983,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6986,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:483: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[198],t2,lf[199]);}

/* k6619 in k6625 in k6631 in recur in make-if-tree in k6487 */
static void C_ccall f_6620(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6620,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6601,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)t0)[7];
t7=C_u_i_cdr(t6);
t8=((C_word*)t0)[8];
t9=C_u_i_cdr(t8);
t10=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:652: recur */
t11=((C_word*)((C_word*)t0)[11])[1];
f_6568(t11,t5,t7,t9,t10);}

/* k8663 */
static void C_ccall f_8664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:217: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8677(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8934,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9057,a[2]=t10,a[3]=t13,a[4]=t8,a[5]=((C_word)li150),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9057(t15,t11,((C_word*)t0)[6]);}

/* k6657 */
static void C_ccall f_6658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:665: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6650 */
static void C_ccall f_6651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:660: string-append */
t2=*((C_word*)lf[178]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_6652 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6652(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6652,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6658,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:665: prefix-sym */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[180],t2);}

/* map-loop2449 in k3533 in k3531 in k3527 */
static void C_fcall f_3586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3586,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:1282: g2455 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3582 in k3533 in k3531 in k3527 */
static void C_ccall f_3584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3584,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[29],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t4));}

/* k8673 */
static void C_ccall f_8674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:218: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6647 */
static void C_ccall f_6648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:660: string->symbol */
t2=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6641(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6642,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6652,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(t1,lf[28]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6663,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6770,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li74),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_6770(t13,t9,t1);}

/* f_6642 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6642,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6648,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6651,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:660: symbol->string */
t6=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8683(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8821,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[28]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8829,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8890,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li146),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8890(t13,t9,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* f_4316 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in ... */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4316,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4319,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1141: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[70],t2,lf[78]);}

/* k4313 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in ... */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1137: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[70],C_SCHEME_END_OF_LIST,t1);}

/* k4318 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1142: ##sys#strip-syntax */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5696 in k5693 in k5678 in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5697,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4));}

/* k5693 in k5678 in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5694(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5697,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_cddr(((C_word*)t0)[3]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5705,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5716,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=((C_word*)t0)[8],a[6]=((C_word)li47),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5716(t13,t9,t7);}

/* k5678 in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5679,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[112],lf[127]);
t3=C_a_i_list(&a,3,lf[115],((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,3,lf[128],((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list(&a,3,((C_word*)t0)[3],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5694,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:900: r */
t9=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[130]);}

/* k6925 in k6937 in k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6926,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[155],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k4320 in k4318 */
static void C_ccall f_4321(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4321,2,t0,t1);}
t2=C_i_cadr(t1);
t3=C_i_car(t2);
t4=C_i_caddr(t1);
t5=t1;
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_a_i_list(&a,2,lf[20],t3);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4358,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
t15=C_u_i_cdr(t2);
t16=C_i_check_list_2(t15,lf[28]);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4375,a[2]=t8,a[3]=t9,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4377,a[2]=t13,a[3]=t19,a[4]=t11,a[5]=t14,a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_4377(t21,t17,t15);}

/* k8939 in k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8941(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8941,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t7=C_u_i_length(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8997,a[2]=t9,a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_8997(t11,t6,t7);}

/* k8943 in k8939 in k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8944,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t3=C_i_check_list_2(t1,lf[28]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8951,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8953,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li147),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8953(t8,t4,((C_word*)t0)[2],t1);}

/* k6910 in k6908 in k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[190]);}

/* k6913 in k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:523: ##sys#notice */
t2=*((C_word*)lf[191]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[192],t1);}

/* k5654 in map-loop1756 in k5554 in k5552 in k5550 in parse-clause in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5655(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5655,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5630(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5630(t6,((C_word*)t0)[5],t5);}}

/* k8949 in k8943 in k8939 in k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:214: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* map-loop311 in k8943 in k8939 in k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8953(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8953,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8964,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_8964(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_8964(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6908 in k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:526: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6869(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k8963 in map-loop311 in k8943 in k8939 in k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8964(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8953(t5,((C_word*)t0)[7],t3,t4);}

/* k8270 in k8236 in k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8271(C_word c,C_word t0,C_word t1){
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
C_word ab[69],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8271,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[97],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,lf[97],t6);
t8=C_a_i_list(&a,4,lf[231],((C_word*)t0)[2],t7,((C_word*)t0)[2]);
t9=C_a_i_list(&a,3,lf[30],t5,t8);
t10=C_a_i_list(&a,3,lf[30],((C_word*)t0)[4],t9);
t11=C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t10);
t12=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_list(&a,3,lf[30],((C_word*)t0)[7],t11));}

/* f_8273 in k8236 in k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8273(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[42],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8273,4,t0,t1,t2,t3);}
t4=C_a_i_list(&a,1,t2);
t5=C_a_i_list(&a,2,lf[232],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,3,t2,t3,((C_word*)t0)[2]);
t8=C_a_i_list(&a,3,lf[209],t3,lf[232]);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,4,lf[30],t6,t7,t8));}

/* k5538 in k5536 in k5534 */
static void C_ccall f_5539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5541,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:881: r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[132]);}

/* k5536 in k5534 */
static void C_ccall f_5537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5539,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:880: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[133]);}

/* k5534 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:879: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[134]);}

/* f_5532 in k5767 in k5770 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in ... */
static void C_ccall f_5532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5532,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5535,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:878: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[126],t2,lf[135]);}

/* k5529 in k5767 in k5770 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in ... */
static void C_ccall f_5530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:872: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[126],((C_word*)t0)[3],t1);}

/* k6140 in build */
static void C_ccall f_6141(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6141,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6150,a[2]=((C_word*)t0)[6],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_cdr(t9);
if(C_truep(C_i_pairp(t10))){
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
/* chicken-syntax.scm:817: build */
t13=((C_word*)((C_word*)t0)[7])[1];
f_6095(t13,t8,t12,t1);}
else{
/* chicken-syntax.scm:818: build */
t11=((C_word*)((C_word*)t0)[7])[1];
f_6095(t11,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k8607 in loop in k8566 in k8564 in k8562 in k8556 */
static void C_ccall f_8608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* chicken-syntax.scm:261: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8598(t3,((C_word*)t0)[4],t2);}

/* k5523 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in ... */
static void C_ccall f_5524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5524,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[110],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5222,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5224,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:910: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* f_7978 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7978(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7978,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7981,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:328: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[221],t2,lf[224]);}

/* k7975 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:324: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[221],C_SCHEME_END_OF_LIST,t1);}

/* k4229 */
static void C_ccall f_4230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4230,2,t0,t1);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_caddr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1173: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[68]);}}

/* k4237 in k4229 */
static void C_ccall f_4238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4238,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4245,a[2]=t1,a[3]=t2,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4253,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word)li21),tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1173: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t3,t4);}

/* k8615 in loop in k8566 in k8564 in k8562 in k8556 */
static void C_ccall f_8617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8617,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:261: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8598(t4,((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8624,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:258: c */
t3=((C_word*)t0)[9];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[10],((C_word*)t0)[12]);}}

/* k7963 in for-each-loop844 in k7927 */
static void C_ccall f_7964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7955(t3,((C_word*)t0)[4],t2);}

/* f_4227 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in ... */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4227,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4230,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1170: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[62],t2,lf[69]);}

/* k4224 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in ... */
static void C_ccall f_4225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1166: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[62],C_SCHEME_END_OF_LIST,t1);}

/* loop in k8939 in k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8997(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8997,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9010,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_difference(t2,C_fix(1));
/* chicken-syntax.scm:225: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k7172 in k7157 in k7155 */
static void C_ccall f_7173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7173,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[97],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[140],((C_word*)t0)[5],t4));}

/* k5794 in k5785 in k5783 in k5781 */
static void C_ccall f_5795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5795,2,t0,t1);}
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5807,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:862: r */
t4=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[137]);}

/* k8622 in k8615 in loop in k8566 in k8564 in k8562 in k8556 */
static void C_ccall f_8624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8624,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:261: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8598(t4,((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8631,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:259: c */
t3=((C_word*)t0)[8];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* k5785 in k5783 in k5781 */
static void C_ccall f_5786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:859: r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[136]);}

/* k5783 in k5781 */
static void C_ccall f_5784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5786,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:858: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[141]);}

/* k5781 */
static void C_ccall f_5782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:857: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[142]);}

/* k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8934,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t3=C_i_check_list_2(t1,lf[28]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8941,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9015,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li149),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_9015(t8,t4,((C_word*)t0)[2],t1);}

/* k7980 */
static void C_ccall f_7981(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7981,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_list(&a,1,lf[223]);
t6=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[140],t4,t6));}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_u_i_car(t2);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[209],t5,t3));}
else{
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[32]+1);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8017,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8083,a[2]=t8,a[3]=t12,a[4]=t6,a[5]=t9,a[6]=((C_word)li120),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_8083(t14,t10,t2);}}}

/* f_4245 in k4237 in k4229 */
static void C_ccall f_4245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4251,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1177: ##sys#strip-syntax */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k7192 */
static void C_ccall f_7193(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7193,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7199,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7431,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
t12=C_i_check_list_2(t2,lf[28]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7439,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7441,a[2]=t10,a[3]=t15,a[4]=t8,a[5]=t11,a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_7441(t17,t13,t2);}

/* k7198 in k7192 */
static void C_ccall f_7199(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7199,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7200,a[2]=((C_word*)t0)[2],a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
t7=t1;
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7214,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7401,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7401(t13,t9,t7);}

/* f_7190 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7190,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7193,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:431: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[207],t2,lf[210]);}

/* k5776 in k5861 in k5864 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in ... */
static void C_ccall f_5777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:850: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[131],((C_word*)t0)[3],t1);}

/* k7937 in k7931 */
static void C_ccall f_7938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:355: ##sys#register-export */
t2=*((C_word*)lf[216]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_5779 in k5861 in k5864 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in ... */
static void C_ccall f_5779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5779,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5782,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:856: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[131],t2,lf[143]);}

/* k7931 */
static void C_ccall f_7932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7938,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:355: ##sys#current-module */
t3=*((C_word*)lf[217]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7184 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7185,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[204],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7151,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7153,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:450: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k7187 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:427: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[207],C_SCHEME_END_OF_LIST,t1);}

/* k5767 in k5770 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in ... */
static void C_ccall f_5768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5768,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[125],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5530,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5532,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:876: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k5740 in map-loop1792 in k5693 in k5678 in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5741,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5716(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5716(t6,((C_word*)t0)[5],t5);}}

/* for-each-loop844 in k7927 */
static void C_fcall f_7955(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7955,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7964,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:353: g845 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7950 in k7943 in k7927 */
static void C_ccall f_7951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7951,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k4212 in k4197 */
static void C_ccall f_4213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4213,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,lf[38],t1,C_SCHEME_TRUE,t2));}

/* k7943 in k7927 */
static void C_ccall f_7945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:357: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[221]);}

/* k8858 in k8875 in map-loop381 in k8827 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8859(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8848(t5,((C_word*)t0)[7],t3,t4);}

/* k7157 in k7155 */
static void C_ccall f_7158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7158,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7173,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:456: r */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[204]);}

/* k7155 */
static void C_ccall f_7156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:453: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[172]);}

/* f_7153 in k7184 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 in ... */
static void C_ccall f_7153(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7153,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7156,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:452: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[205],t2,lf[206]);}

/* k7150 in k7184 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 in ... */
static void C_ccall f_7151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:447: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[205],((C_word*)t0)[3],t1);}

/* k8900 in k8917 in map-loop345 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8901(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8890(t5,((C_word*)t0)[7],t3,t4);}

/* k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in ... */
static void C_ccall f_3448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4612,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4614,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1092: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in ... */
static void C_ccall f_3446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4812,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4814,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1082: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in ... */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4826,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4828,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1071: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in ... */
static void C_ccall f_3442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4851,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1055: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* f_6291 in k6406 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in ... */
static void C_ccall f_6291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6291,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6294,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:732: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[170],t2,lf[173]);}

/* k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in ... */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5064,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1014: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[100]);}

/* k6293 */
static void C_ccall f_6294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6294,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6303,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:736: r */
t9=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[169]);}

/* k8875 in map-loop381 in k8827 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8876,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8859,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_8859(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_8859(t5,t4);}}

/* k8917 in map-loop345 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8918,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8901,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_8901(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_8901(t5,t4);}}

/* k7692 in fold in k7628 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_fcall f_7694(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7694,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7703,a[2]=((C_word*)t0)[4],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(((C_word*)t0)[5]);
t8=((C_word*)t0)[3];
t9=C_u_i_cdr(t8);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
/* chicken-syntax.scm:405: fold */
t12=((C_word*)((C_word*)t0)[6])[1];
f_7632(t12,t6,t7,t9,t11);}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7733,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=C_i_cdr(((C_word*)t0)[5]);
t8=((C_word*)t0)[3];
t9=C_u_i_cdr(t8);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
/* chicken-syntax.scm:411: fold */
t12=((C_word*)((C_word*)t0)[6])[1];
f_7632(t12,t6,t7,t9,t11);}}

/* map-loop345 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8890(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8890,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8918,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:228: g351 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7684 in map-loop969 in fold in k7628 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7685(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7685,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7660(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7660(t6,((C_word*)t0)[5],t5);}}

/* map-loop1836 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_fcall f_5490(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5490,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in ... */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6407,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:729: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[169]);}

/* k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in ... */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6283,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:762: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[149]);}

/* k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in ... */
static void C_ccall f_3422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6840,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:613: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[150]);}

/* k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in ... */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6477,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:701: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[169]);}

/* k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in ... */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6843,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6845,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:500: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k5484 in map-loop1865 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5485(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5485,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5460(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5460(t6,((C_word*)t0)[5],t5);}}

/* k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in ... */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4193,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4195,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1188: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in ... */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4225,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4227,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1168: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in ... */
static void C_ccall f_3454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4314,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4316,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1139: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in ... */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4408,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4410,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1112: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in ... */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4482,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4484,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1103: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7820 in loop in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7821,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* chicken-syntax.scm:394: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7787(t5,((C_word*)t0)[5],t4,t2);}

/* map-loop920 in k7594 in k7591 in k7522 */
static void C_fcall f_7826(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7826,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7851,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:385: g926 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop883 in k7522 */
static void C_fcall f_7892(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7892,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7652 */
static void C_ccall f_7653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7653,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)t0)[3],t1));}

/* map-loop1865 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_fcall f_5460(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5460,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5485,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:930: g1871 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7656 in fold in k7628 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7658,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[30],t2));}

/* k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5458(C_word c,C_word t0,C_word t1){
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
C_word ab[62],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5458,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[114],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t6=C_a_i_list(&a,2,lf[112],((C_word*)t0)[7]);
t7=C_a_i_list(&a,3,lf[115],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[3],t5,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5268,a[2]=t8,a[3]=t4,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5270,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t11,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word)li40),tmp=(C_word)a,a+=10,tmp));
t13=((C_word*)t11)[1];
f_5270(t13,t9,((C_word*)t0)[12],C_fix(1));}

/* f_7647 in fold in k7628 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7647(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7647,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7653,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:400: lookup */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* f_5447 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5447(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5447,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[113]);}}

/* map-loop969 in fold in k7628 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_fcall f_7660(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7660,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7685,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:400: g975 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8015 in k7980 */
static void C_ccall f_8017(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8017,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8031,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(t1,lf[28]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8039,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8041,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li119),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8041(t13,t9,((C_word*)t0)[4],t1);}

/* k7509 in fold in k7482 in k7476 */
static void C_ccall f_7510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7510,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k7517 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:359: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[212],C_SCHEME_END_OF_LIST,t1);}

/* loop2218 in k4086 in k4081 in k4078 in k4072 */
static void C_fcall f_4096(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4096,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4103,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1199: ##sys#= */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* f_8031 in k8015 in k7980 */
static void C_ccall f_8031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8031,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[209],t2,t3));}

/* k8037 in k8015 in k7980 */
static void C_ccall f_8039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8039,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[97],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[140],((C_word*)t0)[4],t3));}

/* f_8821 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8821(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8821,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[209],t2,t3));}

/* k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8819(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8819,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[97],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[97],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8701,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8703,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8709,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8770,a[2]=t10,a[3]=t14,a[4]=t8,a[5]=t11,a[6]=((C_word)li142),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_8770(t16,t12,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k5346 in k5288 in k5284 in loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5348,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_5295(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_5295(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* map-loop804 in k8015 in k7980 */
static void C_fcall f_8041(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8041,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8069,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:343: g810 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_8834 in k8827 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8834,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[209],t2,t3));}

/* f_7520 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7520,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7523,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:363: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[212],t2,lf[214]);}

/* k8831 in k8827 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:214: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k8827 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8829(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8832,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8834,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8840,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8848,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li145),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8848(t12,t8,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* append* in k7522 */
static void C_fcall f_7529(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7529,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7548,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* chicken-syntax.scm:370: append* */
t9=t5;
t10=t7;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}}

/* k7522 */
static void C_ccall f_7523(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7523,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7529,a[2]=t7,a[3]=((C_word)li101),tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7555,a[2]=t9,a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp));
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_i_check_list_2(t2,lf[28]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7593,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t9,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7892,a[2]=t15,a[3]=t19,a[4]=t13,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_7892(t21,t17,t2);}

/* k4081 in k4078 in k4072 */
static void C_ccall f_4082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1199: ##sys#>= */
t3=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fix(0));}

/* k4078 in k4072 */
static void C_ccall f_4080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4080,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1199: ##sys#length */
t4=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_3943(2,t2,C_SCHEME_FALSE);}}

/* k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7923,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7925,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:350: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7976,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7978,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:326: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8051 in k8068 in map-loop804 in k8015 in k7980 */
static void C_fcall f_8052(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8041(t5,((C_word*)t0)[7],t3,t4);}

/* k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3408,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7518,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7520,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:361: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k4086 in k4081 in k4078 in k4072 */
static void C_ccall f_4088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4088,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4096,a[2]=t4,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4096(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_3943(2,t2,C_SCHEME_FALSE);}}

/* k8838 in k8827 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8840,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[223]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:214: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8117,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8119,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:317: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7814 in loop in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7815,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* chicken-syntax.scm:394: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7787(t5,((C_word*)t0)[5],t4,t2);}

/* k4687 in k4666 in k4654 in k4641 in k4621 */
static void C_ccall f_4688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4688,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4682,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1092: rename2023 */
t5=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[20]);}

/* k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in ... */
static void C_ccall f_3436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5524,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:909: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[110]);}

/* k6544 in recur in k6509 in k6506 in k6503 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6551,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6554,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:634: reverse */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}

/* k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in ... */
static void C_ccall f_3438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5216,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:982: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[100]);}

/* k4058 in map-loop2263 in k3941 */
static void C_ccall f_4059(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4059,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4034(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4034(t6,((C_word*)t0)[5],t5);}}

/* k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in ... */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3432,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5865,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:852: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[136]);}

/* k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in ... */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5771,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:874: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[27]);}

/* k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in ... */
static void C_ccall f_3430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5868,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5870,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:831: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4681 in k4687 in k4666 in k4654 in k4641 in k4621 */
static void C_ccall f_4682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4682,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,((C_word*)t0)[2],t7);
t9=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_cons(&a,2,((C_word*)t0)[6],t8));}

/* map-loop381 in k8827 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8848(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8848,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8876,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:230: g387 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5316 in k5294 in k5288 in k5284 in loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5318,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5301(t2,C_SCHEME_END_OF_LIST);}
else{
t2=C_a_i_list(&a,2,lf[119],lf[119]);
t3=C_a_i_list(&a,3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)t0)[2];
f_5301(t4,C_a_i_list(&a,1,t3));}}

/* k5303 in k5300 in k5294 in k5288 in k5284 in loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:939: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5300 in k5294 in k5288 in k5284 in loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_fcall f_5301(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5301,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5304,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_fixnum_increase(((C_word*)t0)[4]);
/* chicken-syntax.scm:975: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5270(t6,t2,t4,t5);}

/* k4072 */
static void C_ccall f_4074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4074,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1199: ##sys#list? */
t4=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_3943(2,t2,C_SCHEME_FALSE);}}

/* k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7185,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:449: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[204]);}

/* k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7188,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7190,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:429: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 in ... */
static void C_ccall f_3418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6981,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6983,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:481: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7062,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7064,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:460: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7472,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7474,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:415: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k9554 in k9552 in mapslots in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9652,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:96: string-append */
t4=*((C_word*)lf[178]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[10],lf[275],((C_word*)t0)[11]);}

/* k9556 in k9554 in k9552 in mapslots in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9557(C_word c,C_word t0,C_word t1){
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
C_word ab[79],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9557,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[123],lf[274]);
t3=C_a_i_list(&a,2,lf[112],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[116],lf[123],t3);
t5=C_a_i_list(&a,2,lf[117],t4);
t6=C_a_i_list(&a,4,lf[120],lf[123],((C_word*)t0)[3],lf[274]);
t7=C_a_i_list(&a,4,lf[97],t2,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9577,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9580,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t10=t9;
f_9580(t10,C_SCHEME_END_OF_LIST);}
else{
t10=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t7);
t11=t9;
f_9580(t11,C_a_i_list(&a,1,t10));}}

/* k9552 in mapslots in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9655,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:95: string-append */
t4=*((C_word*)lf[178]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[10],lf[276],t1,lf[277]);}

/* k6550 in k6544 in recur in k6509 in k6506 in k6503 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6551(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6551,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[97],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6530,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[6];
t7=C_u_i_cdr(t6);
t8=((C_word*)t0)[7];
t9=C_u_i_cdr(t8);
t10=((C_word*)t0)[6];
t11=C_u_i_car(t10);
/* chicken-syntax.scm:635: recur */
t12=((C_word*)((C_word*)t0)[8])[1];
f_6512(t12,t5,((C_word*)t0)[9],t7,t9,t11);}

/* k6553 in k6544 in recur in k6509 in k6506 in k6503 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6554,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:631: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* k9567 in k9576 in k9556 in k9554 in k9552 in mapslots in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9568,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4654 in k4641 in k4621 */
static void C_ccall f_4655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1092: rename2023 */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[24]);}

/* mapslots in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_fcall f_9540(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_9540,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_i_car(t2);
t6=C_i_symbolp(t5);
t7=C_i_not(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9553,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t7,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t7)){
t9=C_i_cadr(t5);
/* chicken-syntax.scm:94: symbol->string */
t10=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
/* chicken-syntax.scm:94: symbol->string */
t9=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t5);}}}

/* k6580 in recur in make-if-tree in k6487 */
static void C_ccall f_6581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6581,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k9537 in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9538,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[26],t3));}

/* k4641 in k4621 */
static void C_ccall f_4643(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4643,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cdr(t4);
t6=C_i_cdr(((C_word*)t0)[2]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4655,a[2]=t5,a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1092: rename2023 */
t8=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[88]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cdr(t3);
t5=t2;
f_4703(t5,C_eqp(t4,C_SCHEME_END_OF_LIST));}
else{
t4=t2;
f_4703(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_4703(t3,C_SCHEME_FALSE);}}}

/* k4666 in k4654 in k4641 in k4621 */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1092: rename2023 */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[90]);}

/* loop2 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_fcall f_3820(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3820,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_a_i_vector1(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3836,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
t7=C_fixnum_plus(t3,C_fix(1));
/* chicken-syntax.scm:1228: loop2 */
t9=t5;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* loop in k5080 in k5078 in k5076 in k5074 */
static void C_fcall f_5088(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5088,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5097,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:992: reverse */
t7=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5150,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=C_i_car(t2);
/* chicken-syntax.scm:1001: c */
t8=((C_word*)t0)[6];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[8],t7);}}

/* k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5081,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5088,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li37),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_5088(t7,((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3818(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3818,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3670,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3747,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3762,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t6=(C_truep(((C_word*)t0)[10])?C_i_pairp(((C_word*)t0)[10]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3770,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t12=((C_word*)t0)[10];
t13=C_i_check_list_2(t12,lf[28]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3779,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3781,a[2]=t10,a[3]=t16,a[4]=t8,a[5]=t11,a[6]=((C_word)li7),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_3781(t18,t14,t12);}
else{
t7=t5;
f_3762(t7,C_a_i_list1(&a,1,t2));}}

/* k9579 in k9556 in k9554 in k9552 in mapslots in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_fcall f_9580(C_word t0,C_word t1){
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
C_word ab[66],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9580,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,1,lf[123]);
t3=C_a_i_list(&a,2,lf[112],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[116],lf[123],t3);
t5=C_a_i_list(&a,2,lf[117],t4);
t6=C_a_i_list(&a,3,lf[118],lf[123],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[97],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[5],t7,((C_word*)t0)[6]);
t9=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t8);
t10=C_a_i_list(&a,1,t9);
/* chicken-syntax.scm:45: ##sys#append */
t11=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,((C_word*)t0)[9],t1,t10);}
else{
t2=C_a_i_list(&a,1,lf[123]);
t3=C_a_i_list(&a,2,lf[112],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[116],lf[123],t3);
t5=C_a_i_list(&a,2,lf[117],t4);
t6=C_a_i_list(&a,3,lf[118],lf[123],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[97],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t7);
t9=C_a_i_list(&a,1,t8);
/* chicken-syntax.scm:45: ##sys#append */
t10=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,((C_word*)t0)[9],t1,t9);}}

/* f_4358 in k4320 in k4318 */
static void C_ccall f_4358(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4358,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4363,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(t2);
/* chicken-syntax.scm:1152: ##sys#validate-exports */
t6=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,lf[70]);}

/* k4355 in k4373 in k4320 in k4318 */
static void C_ccall f_4356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4356,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[20],t1);
t3=C_a_i_list(&a,2,lf[20],((C_word*)t0)[2]);
t4=C_a_i_list(&a,5,lf[72],((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);
t5=C_a_i_list(&a,3,lf[73],lf[74],lf[75]);
t6=C_a_i_list(&a,2,lf[76],t4);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,5,lf[77],((C_word*)t0)[6],C_SCHEME_TRUE,t5,t6));}

/* k9576 in k9556 in k9554 in k9552 in mapslots in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9577,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[26],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9568,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:120: mapslots */
t6=((C_word*)((C_word*)t0)[5])[1];
f_9540(t6,t3,t4,t5);}

/* k3805 in map-loop2355 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3806(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3806,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3781(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3781(t6,((C_word*)t0)[5],t5);}}

/* map-loop1143 in k7233 in k7212 in k7198 in k7192 */
static void C_fcall f_7341(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7341,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7366,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:439: g1149 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4712 in k4701 in k4641 in k4621 */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4713,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k4373 in k4320 in k4318 */
static void C_ccall f_4375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4375,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[20],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1155: ##sys#validate-exports */
t4=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[6],lf[70]);}

/* map-loop2140 in k4320 in k4318 */
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4377,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4402,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:1150: g2146 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7329 in map-loop1166 */
static void C_ccall f_7330(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7330,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7305(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7305(t6,((C_word*)t0)[5],t5);}}

/* k4701 in k4641 in k4621 */
static void C_fcall f_4703(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4703,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4713,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1092: rename2023 */
t6=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[89]);}
else{
/* chicken-syntax.scm:1092: ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k3865 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_fcall f_3867(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3867,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_car(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3881,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:1262: ##compiler#check-and-validate-type */
t8=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,lf[34]);}
else{
/* chicken-syntax.scm:1266: syntax-error */
t2=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[7],lf[34],lf[46],((C_word*)t0)[3],((C_word*)t0)[8]);}}

/* k7337 in k7233 in k7212 in k7198 in k7192 */
static void C_ccall f_7339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:432: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k6503 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6507,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:627: reverse */
t3=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k6506 in k6503 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:628: reverse */
t3=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k6529 in k6550 in k6544 in recur in k6509 in k6506 in k6503 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6530,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* map-loop1166 */
static void C_fcall f_7305(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7305,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7330,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:442: g1172 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4362 */
static void C_ccall f_4363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4363,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7299 in map-loop1192 in k7257 */
static void C_ccall f_7300(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7300,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7275(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7275(t6,((C_word*)t0)[5],t5);}}

/* k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9687,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9702,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[6];
/* ##sys#string-append */
t5=*((C_word*)lf[278]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[280],t4);}

/* recur in make-if-tree in k6487 */
static void C_fcall f_6568(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6568,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6581,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:646: reverse */
t6=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t5=C_i_car(t2);
t6=C_a_i_list(&a,2,lf[169],((C_word*)t0)[3]);
t7=C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6632,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t1,a[6]=t6,a[7]=t2,a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:649: reverse */
t9=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}}

/* make-if-tree in k6487 */
static void C_fcall f_6562(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6562,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6568,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_6568(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in k6509 in k6506 in k6503 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_fcall f_6512(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6512,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_i_cdr(t2);
t7=C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6545,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:633: reverse */
t9=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t6);}}

/* k6509 in k6506 in k6503 in k6678 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6510,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6512,a[2]=t3,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6512(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* quotify-proc */
static void C_fcall f_7067(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7067,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7071,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:464: ##sys#check-syntax */
t5=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t3,t2,lf[202]);}

/* k3880 in k3865 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3881,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:1258: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3655(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* f_7064 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 in ... */
static void C_ccall f_7064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7064,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7067,a[2]=t4,a[3]=t3,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7142,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* chicken-syntax.scm:477: quotify-proc */
t8=t5;
f_7067(t8,t6,t7,lf[200]);}

/* k7061 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 in ... */
static void C_ccall f_7062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:458: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[200],C_SCHEME_END_OF_LIST,t1);}

/* k7046 in fold in k6985 */
static void C_ccall f_7047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7047,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[155],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[30],((C_word*)t0)[4],t2));}

/* k7033 in fold in k6985 */
static void C_ccall f_7034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7034,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[155],((C_word*)t0)[3],t1,C_SCHEME_FALSE));}

/* k6351 in k6342 in loop in k6308 in k6306 in k6304 in k6302 in k6293 */
static void C_ccall f_6352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6352,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* k5267 in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5268,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[26],t3));}

/* k7019 in fold in k6985 */
static void C_ccall f_7020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7020,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[155],((C_word*)t0)[3],t1,C_SCHEME_FALSE));}

/* k6276 in k6279 in k6282 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in ... */
static void C_ccall f_6277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6277,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[151],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:765: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[152]);}

/* k6273 in k6276 in k6279 in k6282 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in ... */
static void C_ccall f_6274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6274,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[152],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:766: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[153]);}

/* k6270 in k6273 in k6276 in k6279 in k6282 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in ... */
static void C_ccall f_6271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6271,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[153],t1);
t3=C_a_i_list(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5926,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5928,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:767: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k3752 in k3761 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* chicken-syntax.scm:1231: ##sys#append */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}
else{
/* chicken-syntax.scm:1231: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}}

/* k3746 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1229: ##sys#put! */
t2=*((C_word*)lf[39]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[40],t1);}

/* loop2218 in k4130 in k4125 in k4122 */
static void C_fcall f_4140(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4140,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4147,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1199: ##sys#= */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k4145 in loop2218 in k4130 in k4125 in k4122 */
static void C_ccall f_4147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4147,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4158,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cdr(t4);
t6=t3;
f_4158(t6,C_eqp(t5,C_SCHEME_END_OF_LIST));}
else{
t5=t3;
f_4158(t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4158(t4,C_SCHEME_FALSE);}}}

/* k4130 in k4125 in k4122 */
static void C_ccall f_4132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4132,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4140,a[2]=t4,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4140(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_4074(2,t2,C_SCHEME_FALSE);}}

/* k8329 in map-loop708 in k8236 in k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8330,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8313,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_8313(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_8313(t5,t4);}}

/* k4122 */
static void C_ccall f_4124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4124,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:1199: ##sys#length */
t4=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_4074(2,t2,C_SCHEME_FALSE);}}

/* k4125 in k4122 */
static void C_ccall f_4126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1199: ##sys#>= */
t3=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fix(0));}

/* k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3664,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1222: reverse */
t3=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[10]);}

/* k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3820,a[2]=t4,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3820(t6,t2,((C_word*)t0)[10],C_fix(1));}

/* map-loop677 in k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_fcall f_8347(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8347,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8358,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_8358(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_8358(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4114 in k4101 in loop2218 in k4086 in k4081 in k4078 in k4072 */
static void C_ccall f_4115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1199: loop2218 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4096(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_fcall f_3655(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(11);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3655,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1221: reverse */
t6=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=C_i_car(t2);
if(C_truep(C_i_symbolp(t5))){
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t5,t3);
t9=C_a_i_cons(&a,2,lf[44],t4);
/* chicken-syntax.scm:1256: loop */
t16=t1;
t17=t7;
t18=t8;
t19=t9;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3867,a[2]=t2,a[3]=t5,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t5))){
t7=C_u_i_length(t5);
t8=C_eqp(C_fix(2),t7);
if(C_truep(t8)){
t9=C_i_car(t5);
t10=t6;
f_3867(t10,C_i_symbolp(t9));}
else{
t9=t6;
f_3867(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_3867(t7,C_SCHEME_FALSE);}}}}

/* k6249 in map-loop1581 in k5962 in k5930 */
static void C_ccall f_6250(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6250,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6225(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6225(t6,((C_word*)t0)[5],t5);}}

/* k8357 in map-loop677 in k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_fcall f_8358(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8347(t5,((C_word*)t0)[7],t3,t4);}

/* k3641 in k3638 in k3632 */
static void C_ccall f_3642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3644,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1215: ##sys#globalize */
t3=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_SCHEME_END_OF_LIST);}

/* k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3648,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1217: r */
t3=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[47]);}

/* k6288 in k6406 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in ... */
static void C_ccall f_6289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:727: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[170],((C_word*)t0)[3],t1);}

/* k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3646,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_i_cdddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_u_i_car(t6);
/* chicken-syntax.scm:1216: ##sys#strip-syntax */
t8=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t2,t7);}
else{
t4=t2;
f_3646(2,t4,C_SCHEME_FALSE);}}

/* k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3648,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3655,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=t4,a[9]=((C_word*)t0)[7],a[10]=((C_word)li9),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3655(t6,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k6282 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in ... */
static void C_ccall f_6283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6283,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[149],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6280,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:763: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[150]);}

/* k6279 in k6282 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in ... */
static void C_ccall f_6280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6280,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[150],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6277,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:764: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[151]);}

/* k4028 in map-loop2291 in k3952 in k3941 */
static void C_ccall f_4029(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4029,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4004(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4004(t6,((C_word*)t0)[5],t5);}}

/* k7395 in map-loop1116 in k7212 in k7198 in k7192 */
static void C_ccall f_7396(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7396,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7371(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7371(t6,((C_word*)t0)[5],t5);}}

/* map-loop646 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_fcall f_8389(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8389,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8400,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_8400(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_8400(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4825 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in ... */
static void C_ccall f_4826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1069: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[94],C_SCHEME_END_OF_LIST,t1);}

/* map-loop2263 in k3941 */
static void C_fcall f_4034(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4034,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4059,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:1199: g2269 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4811 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in ... */
static void C_ccall f_4812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1080: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[91],C_SCHEME_END_OF_LIST,t1);}

/* k4816 */
static void C_ccall f_4817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4817,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[92],t2,C_SCHEME_TRUE));}

/* f_4814 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in ... */
static void C_ccall f_4814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4814,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4817,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1084: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[91],t2,lf[93]);}

/* f_4828 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in ... */
static void C_ccall f_4828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4828,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4831,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1073: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[94],t2,lf[95]);}

/* k7365 in map-loop1143 in k7233 in k7212 in k7198 in k7192 */
static void C_ccall f_7366(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7366,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7341(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7341(t6,((C_word*)t0)[5],t5);}}

/* k5552 in k5550 in parse-clause in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_fcall f_5553(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5553,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5555,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_5555(t3,C_i_cddr(((C_word*)t0)[9]));}
else{
t3=((C_word*)t0)[9];
t4=t2;
f_5555(t4,C_u_i_cdr(t3));}}

/* k5554 in k5552 in k5550 in parse-clause in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_fcall f_5555(C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5555,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[3])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,t1);
t5=C_a_i_cons(&a,2,lf[30],t4);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,2,((C_word*)t0)[6],t5));}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[30],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,((C_word*)t0)[6],t3));}}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5617,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5628,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5630,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li45),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5630(t13,t9,t7);}}

/* map-loop2291 in k3952 in k3941 */
static void C_fcall f_4004(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4004,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4029,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:1199: g2297 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5550 in parse-clause in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_fcall f_5551(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5551,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5553,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=t2;
f_5553(t3,C_i_cadr(((C_word*)t0)[8]));}
else{
t3=((C_word*)t0)[8];
t4=t2;
f_5553(t4,C_u_i_car(t3));}}

/* k4101 in loop2218 in k4086 in k4081 in k4078 in k4072 */
static void C_ccall f_4103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4103,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4115,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1199: ##sys#+ */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],C_fix(-1));}}

/* k6221 in k5962 in k5930 */
static void C_ccall f_6223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[165]+1),t1);}

/* map-loop1116 in k7212 in k7198 in k7192 */
static void C_fcall f_7371(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7371,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7396,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:438: g1122 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:883: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[27]);}

/* k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5547,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li46),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:897: r */
t4=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[131]);}

/* parse-clause in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_fcall f_5547(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5547,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5551,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=t3;
f_5551(t6,C_u_i_car(t5));}
else{
t5=t3;
f_5551(t5,C_SCHEME_FALSE);}}

/* k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:882: r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[125]);}

/* map-loop1581 in k5962 in k5930 */
static void C_fcall f_6225(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6225,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6250,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:776: g1587 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop708 in k8236 in k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_fcall f_8302(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8302,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8330,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:297: g714 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_6215 */
static void C_ccall f_6215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6215,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* k8312 in k8329 in map-loop708 in k8236 in k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_fcall f_8313(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8302(t5,((C_word*)t0)[7],t3,t4);}

/* loop in k7591 in k7522 */
static void C_fcall f_7856(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7856,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7867,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:381: append */
t6=*((C_word*)lf[162]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,t3);}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:382: append* */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7529(t6,t5,t4,t3);}
else{
t6=C_a_i_cons(&a,2,t4,t3);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-syntax.scm:384: loop */
t11=t1;
t12=t8;
t13=t6;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}}

/* k7850 in map-loop920 in k7594 in k7591 in k7522 */
static void C_ccall f_7851(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7851,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7826(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7826(t6,((C_word*)t0)[5],t5);}}

/* k5806 in k5794 in k5785 in k5783 in k5781 */
static void C_ccall f_5807(C_word c,C_word t0,C_word t1){
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
C_word ab[111],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5807,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_list(&a,3,lf[97],t3,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_cons(&a,2,lf[97],t12);
t14=C_a_i_list(&a,3,lf[138],lf[139],((C_word*)t0)[4]);
t15=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,t14);
t16=C_a_i_list(&a,2,((C_word*)t0)[3],t15);
t17=C_a_i_list(&a,3,lf[97],((C_word*)t0)[4],t16);
t18=C_a_i_list(&a,3,lf[140],t13,t17);
t19=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,t18);
t20=C_a_i_list(&a,3,t1,t7,t19);
t21=C_a_i_list(&a,3,lf[97],((C_word*)t0)[5],t20);
t22=C_a_i_list(&a,2,((C_word*)t0)[6],t21);
t23=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,C_a_i_list(&a,1,t22));}

/* k5872 */
static void C_ccall f_5873(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5873,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5885,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_a_i_cons(&a,2,t2,t5);
/* chicken-syntax.scm:837: ##sys#check-syntax */
t8=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,lf[144],t7,lf[146]);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5908,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_a_i_cons(&a,2,t2,t5);
/* chicken-syntax.scm:844: ##sys#check-syntax */
t8=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,lf[144],t7,lf[147]);}}

/* f_5870 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in ... */
static void C_ccall f_5870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5870,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5873,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:833: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[144],t2,lf[148]);}

/* k7085 in k7076 in k7070 in quotify-proc */
static void C_fcall f_7087(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7087,NULL,2,t0,t1);}
if(C_truep(t1)){
/* chicken-syntax.scm:473: syntax-error */
t2=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[200],lf[201],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}}

/* k7078 in k7076 in k7070 in quotify-proc */
static void C_ccall f_7079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7079,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k7076 in k7070 in quotify-proc */
static void C_fcall f_7077(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7077,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_pairp(t1);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7087,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_7087(t6,t4);}
else{
t6=C_i_car(t1);
t7=C_eqp(lf[97],t6);
if(C_truep(t7)){
t8=t5;
f_7087(t8,C_SCHEME_FALSE);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7102,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7105,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:472: r */
t10=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[90]);}}}

/* k7070 in quotify-proc */
static void C_ccall f_7071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7071,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=(C_truep(C_i_pairp(t2))?C_u_i_car(t2):t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7077,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t5=C_u_i_cdr(t2);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t5,t7);
t9=t4;
f_7077(t9,C_a_i_cons(&a,2,lf[97],t8));}
else{
t5=t4;
f_7077(t5,C_i_cadr(((C_word*)t0)[2]));}}

/* k8214 */
static void C_ccall f_8215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:287: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8218(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8218,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8227,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8389,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li129),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8389(t11,t7,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* f_6207 in k5962 in k5930 */
static void C_ccall f_6207(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6207,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6215,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:777: ##sys#decompose-lambda-list */
t5=*((C_word*)lf[159]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k8551 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:241: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[236],C_SCHEME_END_OF_LIST,t1);}

/* f_8554 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8554(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8554,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8557,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:245: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[236],t2,lf[246]);}

/* k8556 */
static void C_ccall f_8557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8557,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[26],t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8563,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:248: r */
t8=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[245]);}

/* k8562 in k8556 */
static void C_ccall f_8563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:249: r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[244]);}

/* k8568 in k8566 in k8564 in k8562 in k8556 */
static void C_ccall f_8569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8569,2,t0,t1);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(C_truep(((C_word*)((C_word*)t0)[2])[1])?((C_word*)((C_word*)t0)[3])[1]:C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_a_i_list(&a,2,lf[237],((C_word*)t0)[5]):(C_truep(((C_word*)((C_word*)t0)[2])[1])?C_a_i_list(&a,2,lf[238],((C_word*)t0)[5]):(C_truep(((C_word*)((C_word*)t0)[3])[1])?((C_word*)t0)[5]:lf[239]))));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)((C_word*)t0)[6])[1])?((C_word*)t0)[5]:lf[240]));}}

/* k8564 in k8562 in k8556 */
static void C_ccall f_8565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:250: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[243]);}

/* k8566 in k8564 in k8562 in k8556 */
static void C_ccall f_8567(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8567,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8569,a[2]=t5,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8598,a[2]=t10,a[3]=t3,a[4]=t7,a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],a[10]=((C_word)li135),tmp=(C_word)a,a+=11,tmp));
t12=((C_word*)t10)[1];
f_8598(t12,t8,((C_word*)t0)[7]);}

/* k8202 */
static void C_ccall f_8203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:286: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8208(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8208,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8209,a[2]=((C_word*)t0)[2],a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8218,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8431,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,a[6]=((C_word)li130),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_8431(t11,t7,((C_word*)t0)[8]);}

/* f_8209 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8209(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8209,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8215,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:287: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k7866 in loop in k7591 in k7522 */
static void C_ccall f_7867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-syntax.scm:384: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7856(t4,((C_word*)t0)[4],t3,t1);}

/* k7702 in k7692 in fold in k7628 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7703,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* k7594 in k7591 in k7522 */
static void C_ccall f_7595(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7595,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7596,a[2]=((C_word*)t0)[2],a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp);
t7=t1;
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7610,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7826,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li111),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7826(t13,t9,t7);}

/* f_7596 in k7594 in k7591 in k7522 */
static void C_ccall f_7596(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7596,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7602,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7605,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:385: gensym */
t5=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k7591 in k7522 */
static void C_ccall f_7593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7856,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word)li112),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7856(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* k3761 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_fcall f_3762(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3762,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3753,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1242: ##compiler#variable-mark */
t5=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],lf[40]);}

/* k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8227(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8227,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8238,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8347,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=((C_word)li128),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8347(t12,t8,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7732 in k7692 in fold in k7628 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7733,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[97],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[140],((C_word*)t0)[4],t2));}

/* k5109 in k5103 in k5098 in k5096 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5110,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5122,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:995: ##sys#append */
t7=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t5,t6);}

/* k7579 in k7576 in map* in k7522 */
static void C_ccall f_7580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7580,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* loop in k8566 in k8564 in k8562 in k8556 */
static void C_fcall f_8598(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8598,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8608,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8617,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=t4,a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:257: c */
t7=((C_word*)t0)[6];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t4,((C_word*)t0)[9]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8193(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8193,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8196,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8491,a[2]=t5,a[3]=t8,a[4]=t3,a[5]=((C_word)li132),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8491(t10,t6,((C_word*)t0)[7]);}

/* k3708 in k3725 in map-loop2395 in k3669 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_fcall f_3709(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_3698(t5,((C_word*)t0)[7],t3,t4);}

/* map-loop1004 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_fcall f_7757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7757,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7782,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:396: g1010 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8179 */
static void C_ccall f_8180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8180,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8186,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:282: r */
t7=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[234]);}

/* k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8196(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8196,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8197,a[2]=((C_word*)t0)[2],a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8208,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8461,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li131),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8461(t12,t8,((C_word*)t0)[3]);}

/* k5121 in k5109 in k5103 in k5098 in k5096 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5122,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[97],((C_word*)t0)[5],t3));}

/* f_8197 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8197,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8203,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:277: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
/* chicken-syntax.scm:278: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[230]);}}

/* map* in k7522 */
static void C_fcall f_7555(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7555,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7577,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* chicken-syntax.scm:374: proc */
t6=t2;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-syntax.scm:373: proc */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}}

/* k3725 in map-loop2395 in k3669 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3726,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3709,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_3709(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_3709(t5,t4);}}

/* k8185 in k8179 */
static void C_ccall f_8186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:283: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[233]);}

/* k8187 in k8185 in k8179 */
static void C_ccall f_8188(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8188,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8193,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8521,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li133),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8521(t11,t7,((C_word*)t0)[2]);}

/* k7547 in append* in k7522 */
static void C_ccall f_7548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7548,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4192 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in ... */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1186: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[52],C_SCHEME_END_OF_LIST,t1);}

/* f_4195 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in ... */
static void C_ccall f_4195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4195,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4198,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1190: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[52],t2,lf[61]);}

/* k8236 in k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8238(C_word c,C_word t0,C_word t1){
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
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8238,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8271,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8273,a[2]=((C_word*)t0)[2],a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8294,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8302,a[2]=t8,a[3]=t12,a[4]=t6,a[5]=t9,a[6]=((C_word)li127),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_8302(t14,t10,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k5103 in k5098 in k5096 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:995: ##sys#append */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],t1);}

/* k7576 in map* in k7522 */
static void C_ccall f_7577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7580,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* chicken-syntax.scm:374: map* */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7555(t5,t2,((C_word*)t0)[5],t4);}

/* k4197 */
static void C_ccall f_4198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4198,2,t0,t1);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1193: ##compiler#check-and-validate-type */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,lf[52]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_caddr(((C_word*)t0)[2]));}}

/* f_9369 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9369,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9372,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:127: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[268],t2,lf[271]);}

/* k9366 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:122: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[268],C_SCHEME_END_OF_LIST,t1);}

/* k5129 in k5098 in k5096 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:995: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k3777 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3779,2,t0,t1);}
t2=((C_word*)t0)[2];
f_3762(t2,C_a_i_list2(&a,2,t1,((C_word*)t0)[3]));}

/* f_3770 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3770(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3770,3,t0,t1,t2);}
t3=*((C_word*)lf[18]+1);
/* chicken-syntax.scm:1236: g2378 */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[34]);}

/* f_9331 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9331,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9334,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:145: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[232]);}

/* k9333 */
static void C_ccall f_9334(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9334,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[265]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[97],t4);
t6=C_a_i_list(&a,1,lf[266]);
t7=C_a_i_list(&a,2,lf[267],t6);
t8=C_a_i_list(&a,3,lf[138],lf[139],t1);
t9=C_a_i_list(&a,4,lf[97],t1,t7,t8);
t10=C_a_i_list(&a,3,lf[140],t5,t9);
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list(&a,3,lf[26],t2,t10));}

/* k5236 in k5226 */
static void C_ccall f_5237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:921: r */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[110]);}

/* k5238 in k5236 in k5226 */
static void C_ccall f_5239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5239,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5243,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:923: r */
t4=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[123]);}

/* map-loop1084 in k7198 in k7192 */
static void C_fcall f_7401(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7401,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7426,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:435: g1090 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9390 in k9371 */
static void C_ccall f_9391(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9391,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9404,a[2]=t2,a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t9=C_u_i_cdr(t2);
t10=t8;
f_9404(t10,C_i_nullp(t9));}
else{
t9=t8;
f_9404(t9,C_SCHEME_FALSE);}}

/* map-loop534 in k8187 in k8185 in k8179 */
static void C_fcall f_8521(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8521,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop2355 in k3817 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_fcall f_3781(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3781,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:1236: g2361 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4156 in k4145 in loop2218 in k4130 in k4125 in k4122 */
static void C_fcall f_4158(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4158,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1199: ##sys#+ */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],C_fix(-1));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_7431 in k7192 */
static void C_ccall f_7431(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7431,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}

/* k7437 in k7192 */
static void C_ccall f_7439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[41]+1),t1);}

/* k5215 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in ... */
static void C_ccall f_5216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5216,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[100],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5070,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5072,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:983: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k4166 in k4156 in k4145 in loop2218 in k4130 in k4125 in k4122 */
static void C_ccall f_4167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1199: loop2218 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4140(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k9371 */
static void C_ccall f_9372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9372,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_cons(&a,2,lf[97],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[140],t6,lf[269]));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:131: ##sys#check-syntax */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[268],((C_word*)t0)[2],lf[270]);}}

/* k7425 in map-loop1084 in k7198 in k7192 */
static void C_ccall f_7426(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7426,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7401(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7401(t6,((C_word*)t0)[5],t5);}}

/* k4566 */
static void C_ccall f_4568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4568,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:1103: ##sys#length */
t4=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_4518(2,t2,C_SCHEME_FALSE);}}

/* k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:924: r */
t3=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[122]);}

/* k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5245(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5245,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5250,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,a[12]=((C_word*)t0)[2],tmp=(C_word)a,a+=13,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5490,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5490(t11,t7,((C_word*)t0)[2]);}

/* k4558 in k4545 in loop2070 in k4530 in k4525 in k4522 in k4516 */
static void C_ccall f_4559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1103: loop2070 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4540(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop2070 in k4530 in k4525 in k4522 in k4516 */
static void C_fcall f_4540(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4540,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4547,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1103: ##sys#= */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k4793 in k4780 in loop2020 in k4765 in k4760 in k4757 in k4621 */
static void C_ccall f_4794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1092: loop2020 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4775(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k4545 in loop2070 in k4530 in k4525 in k4522 in k4516 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4547,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4559,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1103: ##sys#+ */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],C_fix(-1));}}

/* loop in k4914 in k4912 in k4910 in k4908 */
static void C_fcall f_4922(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4922,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4931,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1024: reverse */
t8=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4987,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t8=C_i_car(t2);
/* chicken-syntax.scm:1034: c */
t9=((C_word*)t0)[6];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,((C_word*)t0)[8],t8);}}

/* k5221 in k5523 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in ... */
static void C_ccall f_5222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:907: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],((C_word*)t0)[3],t1);}

/* k5226 */
static void C_ccall f_5227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5227,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_i_cadddr(((C_word*)t0)[2]);
t5=C_i_cddddr(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5237,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:920: r */
t7=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[47]);}

/* f_5224 in k5523 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in ... */
static void C_ccall f_5224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5224,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5227,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:912: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[111],t2,lf[124]);}

/* k4780 in loop2020 in k4765 in k4760 in k4757 in k4621 */
static void C_ccall f_4782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4782,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4794,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1092: ##sys#+ */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],C_fix(-1));}}

/* k4530 in k4525 in k4522 in k4516 */
static void C_ccall f_4532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4532,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4540,a[2]=t4,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4540(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_4493(2,t2,C_SCHEME_FALSE);}}

/* k4912 in k4910 in k4908 */
static void C_ccall f_4913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1021: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[101],lf[103],((C_word*)t0)[2]);}
else{
t4=t2;
f_4915(2,t4,C_SCHEME_UNDEFINED);}}

/* k4910 in k4908 */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1019: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[104]);}

/* k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4915,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4922,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li35),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_4922(t7,((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k9444 in k3377 in k3375 in k3372 */
static void C_ccall f_9445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:56: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[272],C_SCHEME_END_OF_LIST,t1);}

/* f_9447 in k3377 in k3375 in k3372 */
static void C_ccall f_9447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9447,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9450,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:60: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[272],t2,lf[281]);}

/* loop2020 in k4765 in k4760 in k4757 in k4621 */
static void C_fcall f_4775(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4775,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4782,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1092: ##sys#= */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k4903 in k5063 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in ... */
static void C_ccall f_4904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1012: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[101],((C_word*)t0)[3],t1);}

/* f_4906 in k5063 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in ... */
static void C_ccall f_4906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4906,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4909,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1017: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[100]);}

/* k4908 */
static void C_ccall f_4909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4911,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1018: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[105]);}

/* k9282 in k9251 in k9242 in a9238 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9283,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[112],t1);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t3);
t5=C_a_i_cons(&a,2,lf[241],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[155],((C_word*)t0)[4],((C_word*)t0)[5],t5));}

/* k4589 in loop2070 in k4574 in k4569 in k4566 */
static void C_ccall f_4591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4591,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4603,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1103: ##sys#+ */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],C_fix(-1));}}

/* k9457 in k9455 in k9449 */
static void C_ccall f_9458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:65: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[121]);}

/* k9287 in k9242 in a9238 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9288,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:179: string-append */
t3=*((C_word*)lf[178]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[257],t1,lf[258],((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=((C_word*)t0)[3];
f_9252(t2,C_SCHEME_FALSE);}}

/* k9455 in k9449 */
static void C_ccall f_9456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:64: r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[47]);}

/* k4760 in k4757 in k4621 */
static void C_ccall f_4761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1092: ##sys#>= */
t3=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fix(0));}

/* k9449 */
static void C_ccall f_9450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9450,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9456,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:63: symbol->string */
t7=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k4765 in k4760 in k4757 in k4621 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4767,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4775,a[2]=t4,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4775(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_4643(2,t2,C_SCHEME_FALSE);}}

/* k9317 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:155: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[263],C_SCHEME_END_OF_LIST,t1);}

/* loop2070 in k4574 in k4569 in k4566 */
static void C_fcall f_4584(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4584,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4591,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1103: ##sys#= */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k9293 in k9287 in k9242 in a9238 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_9252(t3,t2);}

/* f_9463 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9463(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9463,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9490,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* chicken-syntax.scm:71: c */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,((C_word*)t0)[3]);}
else{
/* chicken-syntax.scm:77: syntax-error */
t3=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[272],lf[273],t2);}}}

/* k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9462(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9462,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li161),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[28]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9520,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9706,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li163),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9706(t12,t8,((C_word*)t0)[4]);}

/* k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9462,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:66: r */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[110]);}

/* k3941 */
static void C_ccall f_3943(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3943,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3944,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t7=C_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4034,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li15),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4034(t13,t9,t7);}
else{
/* chicken-syntax.scm:1199: ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* f_3944 in k3941 */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3944,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}

/* k4757 in k4621 */
static void C_ccall f_4759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4759,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1092: ##sys#length */
t4=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_4643(2,t2,C_SCHEME_FALSE);}}

/* k9328 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:141: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[264],C_SCHEME_END_OF_LIST,t1);}

/* k4569 in k4566 */
static void C_ccall f_4570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1103: ##sys#>= */
t3=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fix(0));}

/* f_9320 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9320,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[37],t5));}

/* k3975 in k3966 in k3952 in k3941 */
static void C_ccall f_3976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3984,a[2]=((C_word*)t0)[4],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1199: ##sys#map-n */
t4=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k4574 in k4569 in k4566 */
static void C_ccall f_4576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4576,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4584,a[2]=t4,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4584(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_4518(2,t2,C_SCHEME_FALSE);}}

/* k4401 in map-loop2140 in k4320 in k4318 */
static void C_ccall f_4402(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4402,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4377(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4377(t6,((C_word*)t0)[5],t5);}}

/* k4416 in k4414 in k4412 */
static void C_ccall f_4417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4419,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(lf[44],((C_word*)t0)[2]);
if(C_truep(t3)){
/* chicken-syntax.scm:1118: syntax-error-hook */
t4=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[79],lf[84]);}
else{
t4=t2;
f_4419(2,t4,C_SCHEME_UNDEFINED);}}

/* k4418 in k4416 in k4414 in k4412 */
static void C_ccall f_4419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4419,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[80]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4437,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=C_i_caddr(((C_word*)t0)[5]);
/* chicken-syntax.scm:1125: ##sys#strip-syntax */
t6=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k3966 in k3952 in k3941 */
static void C_ccall f_3968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3968,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3976,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1199: rename2221 */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[54]);}

/* k7212 in k7198 in k7192 */
static void C_ccall f_7214(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7215,a[2]=t1,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7229,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[2];
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7235,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7371,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7371(t13,t9,t8);}

/* f_7215 in k7212 in k7198 in k7192 */
static void C_ccall f_7215(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7215,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}

/* k6149 in k6140 in build */
static void C_ccall f_6150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6150,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* k9303 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:161: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[260],C_SCHEME_END_OF_LIST,t1);}

/* f_9306 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9306(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9306,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9309,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:165: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[260],t2,lf[262]);}

/* k9308 */
static void C_ccall f_9309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9309,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[261],t2));}

/* k4407 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in ... */
static void C_ccall f_4408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1110: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[79],C_SCHEME_END_OF_LIST,t1);}

/* k9488 */
static void C_ccall f_9490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t4))){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
if(C_truep(C_i_nullp(t7))){
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_cadr(((C_word*)t0)[2]));}
else{
/* chicken-syntax.scm:77: syntax-error */
t8=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,((C_word*)t0)[3],lf[272],lf[273],((C_word*)t0)[2]);}}
else{
/* chicken-syntax.scm:77: syntax-error */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],lf[272],lf[273],((C_word*)t0)[2]);}}
else{
/* chicken-syntax.scm:77: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[272],lf[273],((C_word*)t0)[2]);}}
else{
/* chicken-syntax.scm:77: syntax-error */
t2=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[272],lf[273],((C_word*)t0)[2]);}}

/* f_3984 in k3975 in k3966 in k3952 in k3941 */
static void C_ccall f_3984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3984,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3996,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1199: rename2221 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[52]);}

/* k3981 in k3975 in k3966 in k3952 in k3941 */
static void C_ccall f_3982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3982,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* k4436 in k4418 in k4416 in k4414 in k4412 */
static void C_ccall f_4437(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(lf[44],t1);
if(C_truep(t3)){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],lf[44]);
t5=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,2,lf[17],t5));}
else{
if(C_truep(C_i_symbolp(t1))){
t4=C_a_i_list(&a,2,lf[81],t1);
t5=C_a_i_list(&a,2,((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t5);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,2,lf[17],t6));}
else{
if(C_truep(C_i_listp(t1))){
/* chicken-syntax.scm:1129: ##sys#validate-exports */
t4=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t1,lf[79]);}
else{
t4=C_i_caddr(((C_word*)t0)[6]);
/* chicken-syntax.scm:1131: syntax-error-hook */
t5=*((C_word*)lf[82]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[79],lf[83],t4);}}}}

/* k7233 in k7212 in k7198 in k7192 */
static void C_ccall f_7235(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7238,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7240,a[2]=((C_word*)t0)[3],a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7339,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7341,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li93),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7341(t12,t8,((C_word*)t0)[5]);}

/* k7237 in k7233 in k7212 in k7198 in k7192 */
static void C_ccall f_7238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7238,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[30],t2));}

/* f_7229 in k7212 in k7198 in k7192 */
static void C_ccall f_7229(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7229,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,t2,lf[208]));}

/* f_3955 in k3952 in k3941 */
static void C_ccall f_3955(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3955,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_car(t3));}

/* k3952 in k3941 */
static void C_ccall f_3954(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3954,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3955,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
t7=C_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4004,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4004(t13,t9,t7);}

/* f_7240 in k7233 in k7212 in k7198 in k7192 */
static void C_ccall f_7240(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[28],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7240,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,t3);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t0)[2];
t10=t2;
t11=C_u_i_car(t10);
t12=C_i_check_list_2(t11,lf[28]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7259,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7305,a[2]=t8,a[3]=t15,a[4]=t6,a[5]=t9,a[6]=((C_word)li91),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_7305(t17,t13,t11);}

/* k6180 in build */
static void C_ccall f_6181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:813: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k9209 in k9191 in k9182 */
static void C_fcall f_9210(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9210,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[250],t1);
t3=C_a_i_list(&a,4,lf[155],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t3));}

/* k4412 */
static void C_ccall f_4413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:1115: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k4414 in k4412 */
static void C_ccall f_4415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4417,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1116: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[20]);}

/* f_4410 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in ... */
static void C_ccall f_4410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4410,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4413,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1114: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[79],t2,lf[85]);}

/* k9402 in k9390 in k9371 */
static void C_fcall f_9404(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9404,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[30],t5));}
else{
t2=C_a_i_list(&a,3,lf[97],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,lf[97],t3);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[140],t2,t4));}}

/* k9681 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:87: string->symbol */
t2=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9687(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9687,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[112],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[114],t3);
t5=C_a_i_list(&a,3,lf[97],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9682,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=((C_word*)t0)[7];
/* ##sys#string-append */
t10=*((C_word*)lf[278]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,lf[279]);}

/* k5151 in k5148 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5152,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1003: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5088(t6,((C_word*)t0)[6],t3,t4,t5,C_SCHEME_FALSE);}

/* k5148 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5150,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5166,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1002: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-syntax.scm:1004: c */
t5=((C_word*)t0)[9];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,((C_word*)t0)[10],t4);}}

/* k3995 */
static void C_ccall f_3996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3996,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k3931 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in ... */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1197: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[51],C_SCHEME_END_OF_LIST,t1);}

/* f_3934 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in ... */
static void C_ccall f_3934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3934,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3943,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4074,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4124,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_i_car(t5);
/* chicken-syntax.scm:1199: ##sys#list? */
t10=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t7=t6;
f_3943(2,t7,C_SCHEME_FALSE);}}

/* k7205 */
static void C_ccall f_7206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7206,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_7200 in k7198 in k7192 */
static void C_ccall f_7200(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7200,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7206,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7209,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:435: gensym */
t5=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k7208 */
static void C_ccall f_7209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:435: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6487 */
static void C_ccall f_6488(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6488,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6562,a[2]=((C_word*)t0)[3],a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6634,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:656: ##sys#check-syntax */
t10=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[176],t3,lf[186]);}

/* f_6485 in k6836 in k6839 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in ... */
static void C_ccall f_6485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6485,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6488,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:617: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[176],t2,lf[187]);}

/* k6482 in k6836 in k6839 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in ... */
static void C_ccall f_6483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:611: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[176],((C_word*)t0)[3],t1);}

/* k5165 in k5148 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1002: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k3835 in loop2 in k3665 in k3663 in loop in k3647 in k3645 in k3643 in k3641 in k3638 in k3632 */
static void C_ccall f_3836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3836,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k9654 in k9552 in mapslots in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:95: string->symbol */
t2=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9651 in k9554 in k9552 in mapslots in k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:96: string->symbol */
t2=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6452 in k6419 in k6417 */
static void C_ccall f_6453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6453,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6444,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:711: r */
t7=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[150]);}

/* k9666 in k9686 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9667(C_word c,C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9667,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[123]);
t3=C_a_i_list(&a,2,lf[20],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[115],lf[123],t3);
t5=C_a_i_list(&a,3,lf[97],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9538,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9540,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word)li162),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_9540(t11,t7,((C_word*)t0)[8],C_fix(1));}

/* k6443 in k6452 in k6419 in k6417 */
static void C_ccall f_6444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6444,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[155],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[30],((C_word*)t0)[6],t3));}

/* k5170 in k5148 in loop in k5080 in k5078 in k5076 in k5074 */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5172,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1006: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5088(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1007: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],lf[107],lf[108],((C_word*)t0)[7]);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[6]);
/* chicken-syntax.scm:1010: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5088(t7,((C_word*)t0)[4],t3,((C_word*)t0)[5],t6,C_SCHEME_FALSE);}}

/* k6476 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in ... */
static void C_ccall f_6477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6477,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[169],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6474,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:702: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[150]);}

/* k6470 in k6473 in k6476 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in ... */
static void C_ccall f_6471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6471,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[151],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6413,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6415,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:704: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k6473 in k6476 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in ... */
static void C_ccall f_6474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6474,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[150],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6471,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:703: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[151]);}

/* a9238 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9239,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9243,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:173: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[255],t2,lf[259]);}

/* k9236 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:168: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[255],C_SCHEME_END_OF_LIST,t1);}

/* k5294 in k5288 in k5284 in loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_fcall f_5295(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5295,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5298,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5301,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(((C_word*)t0)[7])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5318,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t5=C_i_cadr(((C_word*)t0)[9]);
/* chicken-syntax.scm:970: c */
t6=((C_word*)t0)[10];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[7],t5);}
else{
t4=C_a_i_list(&a,3,((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[8]);
t5=t3;
f_5301(t5,C_a_i_list(&a,1,t4));}}
else{
t4=t3;
f_5301(t4,C_SCHEME_END_OF_LIST);}}

/* k5297 in k5294 in k5288 in k5284 in loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5298,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k9242 in a9238 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9243(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9243,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?lf[256]:C_i_car(t5));
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9252,a[2]=t2,a[3]=t5,a[4]=t9,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_stringp(((C_word*)t9)[1]))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9288,a[2]=t9,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:178: get-line-number */
t12=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,((C_word*)t0)[2]);}
else{
t11=t10;
f_9252(t11,C_SCHEME_UNDEFINED);}}

/* f_6415 in k6470 in k6473 in k6476 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in ... */
static void C_ccall f_6415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6415,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6418,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:706: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[174],t2,lf[175]);}

/* k6412 in k6470 in k6473 in k6476 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in ... */
static void C_ccall f_6413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:699: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[174],((C_word*)t0)[3],t1);}

/* k9251 in k9242 in a9238 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_fcall f_9252(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9252,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[117],((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,lf[223]);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[4])[1],t4);
t6=C_a_i_cons(&a,2,lf[241],t5);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,4,lf[155],t2,t3,t6));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9283,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:186: ##sys#strip-syntax */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}}

/* k6417 */
static void C_ccall f_6418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:707: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[172]);}

/* loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_fcall f_5270(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5270,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t2);
t5=C_i_cddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_caddr(t4):C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t6,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t7,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_i_pairp(t7))){
t9=C_u_i_cdr(t7);
if(C_truep(C_i_pairp(t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5414,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t11=C_u_i_car(t7);
/* chicken-syntax.scm:944: c */
t12=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,lf[121],t11);}
else{
t10=t8;
f_5285(t10,C_SCHEME_FALSE);}}
else{
t9=t8;
f_5285(t9,C_SCHEME_FALSE);}}}

/* k5925 in k6270 in k6273 in k6276 in k6279 in k6282 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in ... */
static void C_ccall f_5926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:760: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[154],((C_word*)t0)[3],t1);}

/* f_5928 in k6270 in k6273 in k6276 in k6279 in k6282 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in ... */
static void C_ccall f_5928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5928,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5931,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:769: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[154],t2,lf[168]);}

/* k6406 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in ... */
static void C_ccall f_6407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6407,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[169],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6289,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6291,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:730: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k3469 in k3467 in k3465 in k3463 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in ... */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3471,2,t0,t1);}
t2=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#chicken-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1320: register-feature! */
t4=*((C_word*)lf[2]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t3,lf[3],lf[4],lf[5],lf[6],lf[7],lf[8]);}

/* k3472 in k3469 in k3467 in k3465 in k3463 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in ... */
static void C_ccall f_3473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5250(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5250,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[112],((C_word*)t0)[2]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5447,a[2]=((C_word*)t0)[3],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(t1,lf[28]);
t9=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5458,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5460,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5460(t13,t9,t1);}

/* k3475 in k3465 in k3463 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in ... */
static void C_ccall f_3476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1295: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[12],C_SCHEME_END_OF_LIST,t1);}

/* f_3478 in k3465 in k3463 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in ... */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3478,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3481,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1299: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[12],t2,lf[23]);}

/* k6419 in k6417 */
static void C_ccall f_6420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6420,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6453,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:709: r */
t6=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[169]);}

/* k5986 in k5980 in k5978 in k5976 in k5974 in k5972 in k5970 in k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5987,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5996,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5998,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[12],a[11]=((C_word)li58),tmp=(C_word)a,a+=12,tmp);
t7=((C_word*)t0)[13];
t8=C_u_i_cdr(t7);
/* chicken-syntax.scm:793: fold-right */
t9=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t5,t6,lf[161],t8);}

/* k5288 in k5284 in loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_fcall f_5289(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5289,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=C_u_i_cdr(((C_word*)t0)[8]);
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5348,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[10],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t6=C_u_i_cdr(((C_word*)t0)[8]);
t7=C_u_i_car(t6);
/* chicken-syntax.scm:965: c */
t8=((C_word*)t0)[9];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,((C_word*)t0)[7],t7);}
else{
t6=t5;
f_5348(2,t6,C_SCHEME_FALSE);}}

/* k5284 in loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_fcall f_5285(C_word t0,C_word t1){
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
C_word ab[128],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5285,NULL,2,t0,t1);}
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[112],((C_word*)t0)[3]);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list(&a,2,lf[112],t4);
t6=C_a_i_list(&a,4,lf[116],((C_word*)t0)[2],t3,t5);
t7=C_a_i_list(&a,2,lf[117],t6);
t8=C_a_i_list(&a,3,lf[118],((C_word*)t0)[2],((C_word*)t0)[5]);
t9=C_a_i_list(&a,4,lf[97],t2,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5289,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t9,tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[9])){
t11=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[14]);
t12=C_a_i_list(&a,2,lf[112],((C_word*)t0)[3]);
t13=C_a_i_list(&a,2,lf[112],t1);
t14=C_a_i_list(&a,4,lf[116],((C_word*)t0)[2],t12,t13);
t15=C_a_i_list(&a,2,lf[117],t14);
t16=C_a_i_list(&a,4,lf[120],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[14]);
t17=t10;
f_5289(t17,C_a_i_list(&a,4,lf[97],t11,t15,t16));}
else{
t11=t10;
f_5289(t11,C_SCHEME_FALSE);}}

/* k5980 in k5978 in k5976 in k5974 in k5972 in k5970 in k5968 in k5966 in k5964 in k5962 in k5930 */
static void C_ccall f_5981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5987,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:790: append */
t3=*((C_word*)lf[162]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[2]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("chicken_2dsyntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3864)){
C_save(t1);
C_rereclaim2(3864*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,289);
lf[0]=C_h_intern(&lf[0],28,"\003sysdefine-values-definition");
lf[1]=C_h_intern(&lf[1],29,"\003syschicken-macro-environment");
lf[2]=C_h_intern(&lf[2],17,"register-feature!");
lf[3]=C_h_intern(&lf[3],6,"srfi-8");
lf[4]=C_h_intern(&lf[4],7,"srfi-11");
lf[5]=C_h_intern(&lf[5],7,"srfi-15");
lf[6]=C_h_intern(&lf[6],7,"srfi-16");
lf[7]=C_h_intern(&lf[7],7,"srfi-26");
lf[8]=C_h_intern(&lf[8],7,"srfi-31");
lf[9]=C_h_intern(&lf[9],16,"\003sysmacro-subset");
lf[10]=C_h_intern(&lf[10],29,"\003sysdefault-macro-environment");
lf[11]=C_h_intern(&lf[11],28,"\003sysextend-macro-environment");
lf[12]=C_h_intern(&lf[12],11,"define-type");
lf[13]=C_h_intern(&lf[13],10,"\000compiling");
lf[14]=C_h_intern(&lf[14],12,"\003sysfeatures");
lf[15]=C_h_intern(&lf[15],26,"\010compilertype-abbreviation");
lf[16]=C_h_intern(&lf[16],16,"\003sysput/restore!");
lf[17]=C_h_intern(&lf[17],24,"\004coreelaborationtimeonly");
lf[18]=C_h_intern(&lf[18],32,"\010compilercheck-and-validate-type");
lf[19]=C_h_intern(&lf[19],16,"\003sysstrip-syntax");
lf[20]=C_h_intern(&lf[20],5,"quote");
lf[21]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[22]=C_h_intern(&lf[22],16,"\003syscheck-syntax");
lf[23]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[24]=C_h_intern(&lf[24],18,"\003syser-transformer");
lf[25]=C_h_intern(&lf[25],17,"compiler-typecase");
lf[26]=C_h_intern(&lf[26],10,"\004corebegin");
lf[27]=C_h_intern(&lf[27],4,"else");
lf[28]=C_h_intern(&lf[28],3,"map");
lf[29]=C_h_intern(&lf[29],13,"\004coretypecase");
lf[30]=C_h_intern(&lf[30],8,"\004corelet");
lf[31]=C_h_intern(&lf[31],15,"get-line-number");
lf[32]=C_h_intern(&lf[32],6,"gensym");
lf[33]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001\376\377\001\000\000\000\001");
lf[34]=C_h_intern(&lf[34],21,"define-specialization");
lf[35]=C_h_intern(&lf[35],6,"inline");
lf[36]=C_h_intern(&lf[36],4,"hide");
lf[37]=C_h_intern(&lf[37],12,"\004coredeclare");
lf[38]=C_h_intern(&lf[38],8,"\004corethe");
lf[39]=C_h_intern(&lf[39],8,"\003sysput!");
lf[40]=C_h_intern(&lf[40],30,"\010compilerlocal-specializations");
lf[41]=C_h_intern(&lf[41],10,"\003sysappend");
lf[42]=C_h_intern(&lf[42],22,"\010compilervariable-mark");
lf[43]=C_h_intern(&lf[43],7,"reverse");
lf[44]=C_h_intern(&lf[44],1,"\052");
lf[45]=C_h_intern(&lf[45],12,"syntax-error");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\027invalid argument syntax");
lf[47]=C_h_intern(&lf[47],6,"define");
lf[48]=C_h_intern(&lf[48],13,"\003sysglobalize");
lf[49]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000"
"\000\376\377\001\000\000\000\001");
lf[50]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[51]=C_h_intern(&lf[51],6,"assume");
lf[52]=C_h_intern(&lf[52],3,"the");
lf[53]=C_h_intern(&lf[53],9,"\003sysmap-n");
lf[54]=C_h_intern(&lf[54],3,"let");
lf[55]=C_h_intern(&lf[55],25,"\003syssyntax-rules-mismatch");
lf[56]=C_h_intern(&lf[56],5,"\003sys+");
lf[57]=C_h_intern(&lf[57],5,"\003sys=");
lf[58]=C_h_intern(&lf[58],6,"\003sys>=");
lf[59]=C_h_intern(&lf[59],10,"\003syslength");
lf[60]=C_h_intern(&lf[60],9,"\003syslist\077");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[62]=C_h_intern(&lf[62],1,":");
lf[63]=C_h_intern(&lf[63],22,"\010compilervalidate-type");
lf[64]=C_h_intern(&lf[64],4,"type");
lf[65]=C_h_intern(&lf[65],9,"predicate");
lf[66]=C_h_intern(&lf[66],4,"pure");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid type syntax");
lf[68]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[69]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[70]=C_h_intern(&lf[70],7,"functor");
lf[71]=C_h_intern(&lf[71],20,"\003sysvalidate-exports");
lf[72]=C_h_intern(&lf[72],20,"\003sysregister-functor");
lf[73]=C_h_intern(&lf[73],6,"import");
lf[74]=C_h_intern(&lf[74],6,"scheme");
lf[75]=C_h_intern(&lf[75],7,"chicken");
lf[76]=C_h_intern(&lf[76],16,"begin-for-syntax");
lf[77]=C_h_intern(&lf[77],11,"\004coremodule");
lf[78]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376"
"\001\000\000\001_\376\001\000\000\001_");
lf[79]=C_h_intern(&lf[79],16,"define-interface");
lf[80]=C_h_intern(&lf[80],14,"\004coreinterface");
lf[81]=C_h_intern(&lf[81],10,"\000interface");
lf[82]=C_h_intern(&lf[82],17,"syntax-error-hook");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000-`\052\047 is not allowed as a name for an interface");
lf[85]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[86]=C_h_intern(&lf[86],19,"let-compiler-syntax");
lf[87]=C_h_intern(&lf[87],24,"\004corelet-compiler-syntax");
lf[88]=C_h_intern(&lf[88],22,"define-compiler-syntax");
lf[89]=C_h_intern(&lf[89],27,"\004coredefine-compiler-syntax");
lf[90]=C_h_intern(&lf[90],6,"lambda");
lf[91]=C_h_intern(&lf[91],3,"use");
lf[92]=C_h_intern(&lf[92],22,"\004corerequire-extension");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[94]=C_h_intern(&lf[94],17,"define-for-syntax");
lf[95]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[96]=C_h_intern(&lf[96],3,"rec");
lf[97]=C_h_intern(&lf[97],11,"\004corelambda");
lf[98]=C_h_intern(&lf[98],11,"\004coreletrec");
lf[99]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[100]=C_h_intern(&lf[100],5,"apply");
lf[101]=C_h_intern(&lf[101],4,"cute");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000+tail patterns after <...> are not supported");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\047you need to supply at least a procedure");
lf[104]=C_h_intern(&lf[104],5,"<...>");
lf[105]=C_h_intern(&lf[105],2,"<>");
lf[106]=C_h_intern(&lf[106],19,"\003sysprimitive-alias");
lf[107]=C_h_intern(&lf[107],3,"cut");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000+tail patterns after <...> are not supported");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\047you need to supply at least a procedure");
lf[110]=C_h_intern(&lf[110],18,"getter-with-setter");
lf[111]=C_h_intern(&lf[111],18,"define-record-type");
lf[112]=C_h_intern(&lf[112],10,"\004corequote");
lf[113]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[114]=C_h_intern(&lf[114],18,"\003sysmake-structure");
lf[115]=C_h_intern(&lf[115],14,"\003sysstructure\077");
lf[116]=C_h_intern(&lf[116],19,"\003syscheck-structure");
lf[117]=C_h_intern(&lf[117],10,"\004corecheck");
lf[118]=C_h_intern(&lf[118],13,"\003sysblock-ref");
lf[119]=C_h_intern(&lf[119],10,"\003syssetter");
lf[120]=C_h_intern(&lf[120],14,"\003sysblock-set!");
lf[121]=C_h_intern(&lf[121],6,"setter");
lf[122]=C_h_intern(&lf[122],1,"y");
lf[123]=C_h_intern(&lf[123],1,"x");
lf[124]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010variable\376\001\000"
"\000\001_");
lf[125]=C_h_intern(&lf[125],4,"memv");
lf[126]=C_h_intern(&lf[126],14,"condition-case");
lf[127]=C_h_intern(&lf[127],9,"condition");
lf[128]=C_h_intern(&lf[128],8,"\003sysslot");
lf[129]=C_h_intern(&lf[129],10,"\003syssignal");
lf[130]=C_h_intern(&lf[130],4,"cond");
lf[131]=C_h_intern(&lf[131],17,"handle-exceptions");
lf[132]=C_h_intern(&lf[132],3,"and");
lf[133]=C_h_intern(&lf[133],4,"kvar");
lf[134]=C_h_intern(&lf[134],5,"exvar");
lf[135]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[136]=C_h_intern(&lf[136],30,"call-with-current-continuation");
lf[137]=C_h_intern(&lf[137],22,"with-exception-handler");
lf[138]=C_h_intern(&lf[138],9,"\003sysapply");
lf[139]=C_h_intern(&lf[139],10,"\003sysvalues");
lf[140]=C_h_intern(&lf[140],20,"\003syscall-with-values");
lf[141]=C_h_intern(&lf[141],4,"args");
lf[142]=C_h_intern(&lf[142],1,"k");
lf[143]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[144]=C_h_intern(&lf[144],21,"define-record-printer");
lf[145]=C_h_intern(&lf[145],27,"\003sysregister-record-printer");
lf[146]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[147]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[148]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[149]=C_h_intern(&lf[149],2,">=");
lf[150]=C_h_intern(&lf[150],3,"car");
lf[151]=C_h_intern(&lf[151],3,"cdr");
lf[152]=C_h_intern(&lf[152],3,"eq\077");
lf[153]=C_h_intern(&lf[153],6,"length");
lf[154]=C_h_intern(&lf[154],11,"case-lambda");
lf[155]=C_h_intern(&lf[155],7,"\004coreif");
lf[156]=C_h_intern(&lf[156],9,"split-at!");
lf[157]=C_h_intern(&lf[157],4,"take");
lf[158]=C_h_intern(&lf[158],11,"lambda-list");
lf[159]=C_h_intern(&lf[159],25,"\003sysdecompose-lambda-list");
lf[160]=C_h_intern(&lf[160],10,"fold-right");
lf[161]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corecheck\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreimmutable\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376B\000\0000no matching clause in call to \047case-lambda\047 form\376\377\016\376"
"\377\016\376\377\016\376\377\016");
lf[162]=C_h_intern(&lf[162],6,"append");
lf[163]=C_h_intern(&lf[163],4,"lvar");
lf[164]=C_h_intern(&lf[164],4,"rvar");
lf[165]=C_h_intern(&lf[165],3,"min");
lf[166]=C_h_intern(&lf[166],7,"require");
lf[167]=C_h_intern(&lf[167],6,"srfi-1");
lf[168]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[169]=C_h_intern(&lf[169],5,"null\077");
lf[170]=C_h_intern(&lf[170],14,"let-optionals\052");
lf[171]=C_h_intern(&lf[171],4,"tmp2");
lf[172]=C_h_intern(&lf[172],3,"tmp");
lf[173]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[174]=C_h_intern(&lf[174],8,"optional");
lf[175]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[176]=C_h_intern(&lf[176],13,"let-optionals");
lf[177]=C_h_intern(&lf[177],14,"string->symbol");
lf[178]=C_h_intern(&lf[178],13,"string-append");
lf[179]=C_h_intern(&lf[179],14,"symbol->string");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\001%");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\004def-");
lf[182]=C_h_intern(&lf[182],4,"let\052");
lf[183]=C_h_intern(&lf[183],6,"_%rest");
lf[184]=C_h_intern(&lf[184],4,"body");
lf[185]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[186]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000");
lf[187]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[188]=C_h_intern(&lf[188],6,"select");
lf[189]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[190]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[191]=C_h_intern(&lf[191],10,"\003sysnotice");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\0005non-`else\047 clause following `else\047 clause in `select\047");
lf[193]=C_h_intern(&lf[193],8,"\003syseqv\077");
lf[194]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid syntax");
lf[196]=C_h_intern(&lf[196],2,"or");
lf[197]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[198]=C_h_intern(&lf[198],8,"and-let\052");
lf[199]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[200]=C_h_intern(&lf[200],13,"define-inline");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\052invalid substitution form - must be lambda");
lf[202]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[203]=C_h_intern(&lf[203],18,"\004coredefine-inline");
lf[204]=C_h_intern(&lf[204],8,"list-ref");
lf[205]=C_h_intern(&lf[205],9,"nth-value");
lf[206]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[207]=C_h_intern(&lf[207],13,"letrec-values");
lf[208]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[209]=C_h_intern(&lf[209],9,"\004coreset!");
lf[210]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[211]=C_h_intern(&lf[211],11,"let\052-values");
lf[212]=C_h_intern(&lf[212],10,"let-values");
lf[213]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[214]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[215]=C_h_intern(&lf[215],13,"define-values");
lf[216]=C_h_intern(&lf[216],19,"\003sysregister-export");
lf[217]=C_h_intern(&lf[217],18,"\003syscurrent-module");
lf[218]=C_h_intern(&lf[218],7,"\003sysget");
lf[219]=C_h_intern(&lf[219],16,"\004coremacro-alias");
lf[220]=C_h_intern(&lf[220],8,"for-each");
lf[221]=C_h_intern(&lf[221],11,"set!-values");
lf[222]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[223]=C_h_intern(&lf[223],14,"\004coreundefined");
lf[224]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[225]=C_h_intern(&lf[225],6,"unless");
lf[226]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[227]=C_h_intern(&lf[227],4,"when");
lf[228]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[229]=C_h_intern(&lf[229],12,"parameterize");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\011parameter");
lf[231]=C_h_intern(&lf[231],16,"\003sysdynamic-wind");
lf[232]=C_h_intern(&lf[232],1,"t");
lf[233]=C_h_intern(&lf[233],4,"mode");
lf[234]=C_h_intern(&lf[234],4,"swap");
lf[235]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[236]=C_h_intern(&lf[236],9,"eval-when");
lf[237]=C_h_intern(&lf[237],19,"\004corecompiletimetoo");
lf[238]=C_h_intern(&lf[238],20,"\004corecompiletimeonly");
lf[239]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[240]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[241]=C_h_intern(&lf[241],9,"\003syserror");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid situation specifier");
lf[243]=C_h_intern(&lf[243],4,"load");
lf[244]=C_h_intern(&lf[244],7,"compile");
lf[245]=C_h_intern(&lf[245],4,"eval");
lf[246]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[247]=C_h_intern(&lf[247],9,"fluid-let");
lf[248]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[249]=C_h_intern(&lf[249],6,"ensure");
lf[250]=C_h_intern(&lf[250],15,"\003syssignal-hook");
lf[251]=C_h_intern(&lf[251],11,"\000type-error");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\033argument has incorrect type");
lf[253]=C_h_intern(&lf[253],14,"\004coreimmutable");
lf[254]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\003");
lf[255]=C_h_intern(&lf[255],6,"assert");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\020assertion failed");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[259]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[260]=C_h_intern(&lf[260],7,"include");
lf[261]=C_h_intern(&lf[261],12,"\004coreinclude");
lf[262]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[263]=C_h_intern(&lf[263],7,"declare");
lf[264]=C_h_intern(&lf[264],4,"time");
lf[265]=C_h_intern(&lf[265],15,"\003sysstart-timer");
lf[266]=C_h_intern(&lf[266],14,"\003sysstop-timer");
lf[267]=C_h_intern(&lf[267],17,"\003sysdisplay-times");
lf[268]=C_h_intern(&lf[268],7,"receive");
lf[269]=C_h_intern(&lf[269],8,"\003syslist");
lf[270]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[271]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[272]=C_h_intern(&lf[272],13,"define-record");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid slot specification");
lf[274]=C_h_intern(&lf[274],3,"val");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\005-set!");
lf[278]=C_h_intern(&lf[278],17,"\003sysstring-append");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\001\077");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\005make-");
lf[281]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\001_");
lf[282]=C_h_intern(&lf[282],15,"define-constant");
lf[283]=C_h_intern(&lf[283],20,"\004coredefine-constant");
lf[284]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[285]=C_h_intern(&lf[285],21,"\003sysmacro-environment");
lf[286]=C_h_intern(&lf[286],11,"\003sysprovide");
lf[287]=C_h_intern(&lf[287],19,"chicken-more-macros");
lf[288]=C_h_intern(&lf[288],14,"chicken-syntax");
C_register_lf2(lf,289,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3373,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:38: ##sys#provide */
t3=*((C_word*)lf[286]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[287],lf[288]);}

/* k4842 in k4836 in k4830 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4843,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,((C_word*)t0)[4],t3));}

/* k6016 in k6008 */
static void C_fcall f_6018(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6018,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6021,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6023,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6031,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li56),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:805: ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* k4830 */
static void C_ccall f_4831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1074: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[76]);}

/* k3480 */
static void C_ccall f_3481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3481,2,t0,t1);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:1302: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[21]);}}

/* k3488 in k3480 */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3489,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3491,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1303: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[20]);}

/* k4848 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in ... */
static void C_ccall f_4849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1053: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[96],C_SCHEME_END_OF_LIST,t1);}

/* k6008 */
static void C_ccall f_6009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6009,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6018,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6018(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6018(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* map-loop588 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_fcall f_8461(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8461,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8486,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:286: g594 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3372 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:46: ##sys#macro-environment */
t3=*((C_word*)lf[285]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_6006 */
static void C_ccall f_6006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6006,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6009,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
t6=C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm:798: ##sys#check-syntax */
t7=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[154],t6,lf[158]);}

/* k3375 in k3372 */
static void C_ccall f_3376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9737,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9739,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:51: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3377 in k3375 in k3372 */
static void C_ccall f_3378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9445,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9447,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:58: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8455 in map-loop616 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8456(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8456,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8431(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8431(t6,((C_word*)t0)[5],t5);}}

/* k4836 in k4830 */
static void C_ccall f_4837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1075: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[47]);}

/* k6033 */
static void C_ccall f_6034(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6034,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[4];
t8=C_i_check_list_2(t6,lf[28]);
t9=C_i_check_list_2(t7,lf[28]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6051,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6053,a[2]=t5,a[3]=t12,a[4]=t3,a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6053(t14,t10,t6,t7);}}

/* f_6031 in k6016 in k6008 */
static void C_ccall f_6031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6031,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6034,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6095,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li55),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6095(t8,t4,t3,((C_word*)t0)[8]);}

/* k4853 */
static void C_ccall f_4854(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4854,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t2);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t4,t7);
t9=C_a_i_cons(&a,2,lf[97],t8);
t10=C_a_i_list(&a,2,t3,t9);
t11=C_a_i_list(&a,1,t10);
t12=C_u_i_car(t2);
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list(&a,3,lf[98],t11,t12));}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_list(&a,1,t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[98],t7,t2));}}

/* f_4851 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in ... */
static void C_ccall f_4851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4851,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4854,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1057: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[96],t2,lf[99]);}

/* k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in ... */
static void C_ccall f_3460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3932,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3934,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1199: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in ... */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3623,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3625,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1205: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3463 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in ... */
static void C_ccall f_3464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3523,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3525,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1272: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3465 in k3463 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in ... */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3466,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3476,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3478,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1297: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3467 in k3465 in k3463 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in ... */
static void C_ccall f_3468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3468,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1314: ##sys#macro-subset */
t3=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],*((C_word*)lf[10]+1));}

/* map-loop1756 in k5554 in k5552 in k5550 in parse-clause in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_fcall f_5630(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5630,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5655,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:893: g1762 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6028 */
static void C_ccall f_6029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:806: split-at! */
t2=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k8159 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:271: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[229],C_SCHEME_END_OF_LIST,t1);}

/* f_8162 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8162,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8180,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:279: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[229],t2,lf[235]);}

/* k5626 in k5554 in k5552 in k5550 in parse-clause in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5628(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5628,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
if(C_truep(((C_word*)t0)[4])){
t4=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t5=C_a_i_list(&a,1,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,lf[30],t6);
t8=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,2,t3,t7));}
else{
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);
t5=C_a_i_cons(&a,2,lf[30],t4);
t6=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,2,t3,t5));}}

/* f_6023 in k6016 in k6008 */
static void C_ccall f_6023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6029,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:806: take */
t3=*((C_word*)lf[157]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6020 in k6016 in k6008 */
static void C_ccall f_6021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6021,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[155],((C_word*)t0)[3],t1,((C_word*)t0)[4]));}

/* k3492 in k3490 in k3488 in k3480 */
static void C_ccall f_3493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3493,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[15]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1309: ##compiler#check-and-validate-type */
t5=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t1,lf[12],((C_word*)t0)[3]);}

/* k3490 in k3488 in k3480 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3493,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_i_caddr(((C_word*)t0)[4]);
/* chicken-syntax.scm:1304: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* map-loop561 in k8191 in k8187 in k8185 in k8179 */
static void C_fcall f_8491(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8491,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8485 in map-loop588 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8486(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8486,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8461(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8461(t6,((C_word*)t0)[5],t5);}}

/* f_5617 in k5554 in k5552 in k5550 in parse-clause in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5617(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5617,3,t0,t1,t2);}
t3=C_a_i_list(&a,2,lf[112],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,((C_word*)t0)[2],t3,((C_word*)t0)[3]));}

/* k9182 */
static void C_ccall f_9183(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9183,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9192,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:197: r */
t9=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[172]);}

/* f_9180 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9180(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9180,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9183,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:193: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[249],t2,lf[254]);}

/* k9009 in loop in k8939 in k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_9010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9010,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_SCHEME_FALSE,t1));}

/* map-loop254 in k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_9015(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9015,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9026,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_9026(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_9026(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7257 */
static void C_ccall f_7259(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7259,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7261,a[2]=((C_word*)t0)[2],a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp);
t7=((C_word*)t0)[3];
t8=C_u_i_car(t7);
t9=C_i_check_list_2(t8,lf[28]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7273,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7275,a[2]=t5,a[3]=t12,a[4]=t3,a[5]=t6,a[6]=((C_word)li90),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7275(t14,t10,t8);}

/* k5884 in k5872 */
static void C_ccall f_5885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5885,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_a_i_list(&a,2,lf[20],t2);
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[97],t5);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[145],t3,t6));}

/* map-loop616 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_fcall f_8431(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8431,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8456,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:287: g622 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9191 in k9182 */
static void C_ccall f_9192(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9192,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t5=C_a_i_list(&a,2,lf[117],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9210,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t7=t6;
f_9210(t7,C_a_i_cons(&a,2,lf[251],((C_word*)t0)[5]));}
else{
t7=C_a_i_list(&a,2,lf[112],lf[252]);
t8=C_a_i_list(&a,2,lf[253],t7);
t9=C_a_i_list(&a,2,lf[112],((C_word*)t0)[3]);
t10=C_a_i_list(&a,3,t8,t1,t9);
t11=t6;
f_9210(t11,C_a_i_cons(&a,2,lf[251],t10));}}

/* k5907 in k5872 */
static void C_ccall f_5908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5908,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[20],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[145],t3));}

/* map-loop1192 in k7257 */
static void C_fcall f_7275(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7275,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7300,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:443: g1198 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7271 in k7257 */
static void C_ccall f_7273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7273,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[97],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[140],((C_word*)t0)[4],t3));}

/* k5867 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in ... */
static void C_ccall f_5868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:829: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[144],C_SCHEME_END_OF_LIST,t1);}

/* k5864 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in ... */
static void C_ccall f_5865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5865,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[136],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5862,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:853: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[137]);}

/* k5861 in k5864 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in ... */
static void C_ccall f_5862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5862,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[137],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5777,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5779,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:854: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k9177 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_9178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:188: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[249],C_SCHEME_END_OF_LIST,t1);}

/* k7266 */
static void C_ccall f_7267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7267,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[209],((C_word*)t0)[3],t1));}

/* f_7261 in k7257 */
static void C_ccall f_7261(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7261,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7267,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:443: lookup */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* loop in k6308 in k6306 in k6304 in k6302 in k6293 */
static void C_fcall f_6320(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6320,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,lf[30],t4));}
else{
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6343,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=t3,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:747: r */
t6=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[171]);}
else{
t5=C_a_i_list(&a,2,t4,t2);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,lf[30],t7));}}}

/* k6317 in k6308 in k6306 in k6304 in k6302 in k6293 */
static void C_ccall f_6318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6318,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* map-loop275 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_9057(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9057,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8068 in map-loop804 in k8015 in k7980 */
static void C_ccall f_8069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8069,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8052,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_8052(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_8052(t5,t4);}}

/* k9025 in map-loop254 in k8932 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_9026(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_9015(t5,((C_word*)t0)[7],t3,t4);}

/* map-loop25 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_fcall f_9706(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9706,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9731,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:68: g31 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop417 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8770(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8770,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8798,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:235: g423 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9701 in k9518 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:82: string->symbol */
t2=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8399 in map-loop646 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_fcall f_8400(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8389(t5,((C_word*)t0)[7],t3,t4);}

/* map-loop775 in k7980 */
static void C_fcall f_8083(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8083,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8108,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:339: g781 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in k7608 in k7594 in k7591 in k7522 */
static void C_fcall f_7787(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7787,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:389: reverse */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=C_i_car(t2);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7821,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:393: map* */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7555(t6,t5,((C_word*)t0)[4],t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7815,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:392: lookup */
t6=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}}

/* k7781 in map-loop1004 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7782(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7782,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7757(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7757(t6,((C_word*)t0)[5],t5);}}

/* k8797 in map-loop417 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8798,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8781,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_8781(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_8781(t5,t4);}}

/* map-loop1792 in k5693 in k5678 in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_fcall f_5716(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5716,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5741,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:900: g1798 */
t5=((C_word*)t0)[5];
f_5547(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_9739 in k3375 in k3372 */
static void C_ccall f_9739(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9739,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9742,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:53: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[282],t2,lf[284]);}

/* k9736 in k3375 in k3372 */
static void C_ccall f_9737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:48: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[282],C_SCHEME_END_OF_LIST,t1);}

/* k5770 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in ... */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5771,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[27],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5768,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:875: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[125]);}

/* k9730 in map-loop25 in k9461 in k9459 in k9457 in k9455 in k9449 */
static void C_ccall f_9731(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9731,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9706(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9706(t6,((C_word*)t0)[5],t5);}}

/* k9111 in map-loop224 in k8665 in k8655 in k8647 */
static void C_ccall f_9112(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9112,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9087(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9087(t6,((C_word*)t0)[5],t5);}}

/* map-loop196 in k8655 in k8647 */
static void C_fcall f_9117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9117,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9142,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:217: g202 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5703 in k5693 in k5678 in k5544 in k5542 in k5540 in k5538 in k5536 in k5534 */
static void C_ccall f_5705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5705,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[129],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,1,t3);
/* chicken-syntax.scm:879: ##sys#append */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],t1,t4);}

/* k9741 */
static void C_ccall f_9742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9742,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[283],t2));}

/* k8780 in k8797 in map-loop417 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8781(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8770(t5,((C_word*)t0)[7],t3,t4);}

/* k9141 in map-loop196 in k8655 in k8647 */
static void C_ccall f_9142(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9142,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9117(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9117(t6,((C_word*)t0)[5],t5);}}

/* map-loop169 in k8647 */
static void C_fcall f_9147(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9147,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6308 in k6306 in k6304 in k6302 in k6293 */
static void C_ccall f_6309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6309,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6318,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6320,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t6,a[7]=((C_word*)t0)[8],a[8]=((C_word)li63),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6320(t8,t4,t1,((C_word*)t0)[9]);}

/* k6306 in k6304 in k6302 in k6293 */
static void C_ccall f_6307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:739: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[172]);}

/* k6304 in k6302 in k6293 */
static void C_ccall f_6305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:738: r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[151]);}

/* k6302 in k6293 */
static void C_ccall f_6303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:737: r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[150]);}

/* f_8714 in k8707 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8714,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[209],t2,t3));}

/* k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7611,a[2]=t1,a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7619,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7787,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7787(t7,t3,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* f_7611 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7611(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7611,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}

/* k8711 in k8707 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:214: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7619(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7619,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7624,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7757,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,a[6]=((C_word)li109),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_7757(t11,t7,((C_word*)t0)[7]);}

/* k5412 in loop in k5456 in k5248 in k5244 in k5242 in k5238 in k5236 in k5226 */
static void C_ccall f_5414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5285(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* k7601 */
static void C_ccall f_7602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7602,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7604 */
static void C_ccall f_7605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:385: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* fold in k7628 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_fcall f_7632(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7632,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7647,a[2]=((C_word*)t0)[2],a[3]=((C_word)li106),tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[3];
t11=C_i_check_list_2(t10,lf[28]);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7658,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7660,a[2]=t8,a[3]=t14,a[4]=t6,a[5]=t9,a[6]=((C_word)li107),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_7660(t16,t12,t10);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7694,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
if(C_truep(C_i_pairp(t6))){
t7=C_i_cdar(t4);
t8=t5;
f_7694(t8,C_i_nullp(t7));}
else{
t7=t5;
f_7694(t7,C_SCHEME_FALSE);}}}

/* k7628 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7630,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li108),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_7632(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* k6342 in loop in k6308 in k6306 in k6304 in k6302 in k6293 */
static void C_ccall f_6343(C_word c,C_word t0,C_word t1){
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
C_word ab[76],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6343,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[155],t3,t4,t5);
t7=C_a_i_list(&a,2,t2,t6);
t8=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t9=C_a_i_list(&a,2,lf[20],C_SCHEME_END_OF_LIST);
t10=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t11=C_a_i_list(&a,4,lf[155],t8,t9,t10);
t12=C_a_i_list(&a,2,t1,t11);
t13=C_a_i_list(&a,2,t7,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6352,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t15=((C_word*)t0)[8];
t16=C_u_i_cdr(t15);
/* chicken-syntax.scm:754: loop */
t17=((C_word*)((C_word*)t0)[9])[1];
f_6320(t17,t14,t1,t16);}

/* k8738 in k8755 in map-loop453 in k8707 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8739(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8728(t5,((C_word*)t0)[7],t3,t4);}

/* fold in k7482 in k7476 */
static void C_fcall f_7488(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7488,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[30],t3));}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7510,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* chicken-syntax.scm:425: fold */
t10=t5;
t11=t7;
t1=t10;
t2=t11;
goto loop;}}

/* k7482 in k7476 */
static void C_ccall f_7483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7483,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7488,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=((C_word)li99),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7488(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5024 in k5007 in k4985 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_5025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5025,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_list2(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1045: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_4922(t9,((C_word*)t0)[6],t3,((C_word*)t0)[7],t7,t8,C_SCHEME_FALSE);}

/* f_8703 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8703,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[209],t2,t3));}

/* k8700 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8701,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[97],t2);
t4=C_a_i_list(&a,4,lf[231],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t4));}

/* k8707 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8709(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8712,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8714,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8720,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8728,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li141),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8728(t12,t8,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f_7624 in k7618 in k7608 in k7594 in k7591 in k7522 */
static void C_ccall f_7624(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7624,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_cadr(t2));}

/* k4966 in k4932 in k4930 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_4967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1027: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k7922 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:348: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[215],C_SCHEME_END_OF_LIST,t1);}

/* f_7925 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7925,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7928,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:352: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[215],t2,lf[222]);}

/* k7927 */
static void C_ccall f_7928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7928,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7929,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_i_check_list_2(t3,lf[220]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7955,a[2]=t7,a[3]=t2,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_7955(t9,t5,t3);}

/* f_7929 in k7927 */
static void C_ccall f_7929(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7929,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7932,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:354: ##sys#get */
t4=*((C_word*)lf[218]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,lf[219],t2);}

/* k8755 in map-loop453 in k8707 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8756,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8739,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_8739(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_8739(t5,t4);}}

/* k4958 in k4946 in k4937 in k4932 in k4930 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_4959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4959,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[97],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[30],((C_word*)t0)[6],t4));}

/* k8718 in k8707 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_ccall f_8720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8720,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[223]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:214: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* map-loop453 in k8707 in k8818 in k8682 in k8675 in k8665 in k8655 in k8647 */
static void C_fcall f_8728(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8728,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8756,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:237: g459 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4946 in k4937 in k4932 in k4930 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_4947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4947,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4959,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:1027: ##sys#append */
t7=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t5,t6);}

/* k4930 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_4931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1025: reverse */
t3=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k4932 in k4930 in loop in k4914 in k4912 in k4910 in k4908 */
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4933,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4938,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4967,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1027: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_i_car(t1);
t3=t1;
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,t2,t4);
t6=C_a_i_list(&a,3,lf[97],((C_word*)t0)[6],t5);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t6));}}

/* k4937 in k4932 in k4930 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_4938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4938,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1027: ##sys#append */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],t1);}

/* map-loop1056 in k7192 */
static void C_fcall f_7441(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7441,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7466,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:434: g1062 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8292 in k8236 in k8225 in k8216 in k8206 in k8194 in k8191 in k8187 in k8185 in k8179 */
static void C_ccall f_8294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8294,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[209],((C_word*)t0)[2],C_SCHEME_TRUE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:280: ##sys#append */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* k7471 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:413: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[211],C_SCHEME_END_OF_LIST,t1);}

/* f_7474 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_7474(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7474,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7477,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:417: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[211],t2,lf[213]);}

/* k7476 */
static void C_ccall f_7477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7477,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7483,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:420: r */
t7=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[212]);}

/* map-loop1398 in k6635 in k6633 in k6487 */
static void C_fcall f_6800(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6800,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7465 in map-loop1056 in k7192 */
static void C_ccall f_7466(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7466,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7441(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7441(t6,((C_word*)t0)[5],t5);}}

/* k4525 in k4522 in k4516 */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1103: ##sys#>= */
t3=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fix(0));}

/* k4522 in k4516 */
static void C_ccall f_4524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4524,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1103: ##sys#length */
t4=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_4493(2,t2,C_SCHEME_FALSE);}}

/* k5043 in k5007 in k4985 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_5044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1044: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k4985 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_4987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4987,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5003,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1035: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-syntax.scm:1037: c */
t5=((C_word*)t0)[10];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,((C_word*)t0)[11],t4);}}

/* k4988 in k4985 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_4989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4989,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1036: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_4922(t6,((C_word*)t0)[6],t3,t4,((C_word*)t0)[7],t5,C_SCHEME_FALSE);}

/* k4516 */
static void C_ccall f_4518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4518,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1103: ##sys#list? */
t4=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
f_4493(2,t2,C_SCHEME_FALSE);}}

/* build */
static void C_fcall f_6095(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6095,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[2])){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,lf[30],t7));}
else{
t4=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
t7=C_u_i_car(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,lf[30],t7));}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6141,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:813: gensym */
t6=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4502 in k4491 */
static void C_ccall f_4503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4503,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* map-loop224 in k8665 in k8655 in k8647 */
static void C_fcall f_9087(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9087,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9112,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:218: g230 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4614 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in ... */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4614,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4623,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_i_cdr(t5);
t8=t6;
f_4623(t8,C_eqp(t7,C_SCHEME_END_OF_LIST));}
else{
t7=t6;
f_4623(t7,C_SCHEME_FALSE);}}

/* k4611 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in ... */
static void C_ccall f_4612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1090: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[88],C_SCHEME_END_OF_LIST,t1);}

/* k4481 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in ... */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1101: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[86],C_SCHEME_END_OF_LIST,t1);}

/* f_4484 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in ... */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4484,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4493,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4518,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4568,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_i_car(t5);
/* chicken-syntax.scm:1103: ##sys#list? */
t10=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t7=t6;
f_4493(2,t7,C_SCHEME_FALSE);}}

/* k4274 */
static void C_ccall f_4275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4275,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[37],t2));}

/* k4277 */
static void C_fcall f_4278(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4278,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[65],t2);
t4=C_a_i_list(&a,1,t3);
/* chicken-syntax.scm:45: ##sys#append */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],t1,t4);}
else{
/* chicken-syntax.scm:45: ##sys#append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}}

/* k5002 in k4985 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_5003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1035: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k5007 in k4985 in loop in k4914 in k4912 in k4910 in k4908 */
static void C_ccall f_5009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5009,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1039: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4922(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1040: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],lf[101],lf[102],((C_word*)t0)[8]);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5025,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1044: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4602 in k4589 in loop2070 in k4574 in k4569 in k4566 */
static void C_ccall f_4603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1103: loop2070 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4584(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8643,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8645,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:211: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9178,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9180,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:191: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8160,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8162,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:273: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8552,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8554,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:243: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8140,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8142,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:309: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4630 in k4621 */
static void C_ccall f_4631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4631,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9329,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9331,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:143: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9367,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9369,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:125: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9304,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9306,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:163: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9318,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9320,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:157: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* map-loop1660 in k6033 */
static void C_fcall f_6053(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6053,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6064,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_6064(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_6064(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6049 in k6033 */
static void C_ccall f_6051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6051,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],t1,((C_word*)t0)[3]));}

/* k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9237,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9239,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:170: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* map-loop1428 in k6639 in k6635 in k6633 in k6487 */
static void C_fcall f_6770(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6770,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6795,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:665: g1434 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4621 */
static void C_fcall f_4623(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4623,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4631,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1092: rename2023 */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[89]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4759,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1092: ##sys#list? */
t6=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t4=t2;
f_4643(2,t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_4643(2,t3,C_SCHEME_FALSE);}}}

/* k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6897(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6897,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:520: expand */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6869(t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6909,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6914,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:525: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6930,a[2]=((C_word*)t0)[7],a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6939,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6941,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li78),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_6941(t13,t9,t7);}}}

/* k6898 in k6895 in k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6899,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[26],t2));}

/* k6890 in expand in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:519: c */
t4=((C_word*)t0)[9];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[10],t3);}

/* k8107 in map-loop775 in k7980 */
static void C_ccall f_8108(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8108,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8083(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8083(t6,((C_word*)t0)[5],t5);}}

/* k4438 in k4436 in k4418 in k4416 in k4414 in k4412 */
static void C_ccall f_4440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4440,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[17],t3));}

/* k8116 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:315: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[225],C_SCHEME_END_OF_LIST,t1);}

/* f_8119 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8119,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8122,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:319: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[225],t2,lf[226]);}

/* k6063 in map-loop1660 in k6033 */
static void C_fcall f_6064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_6053(t5,((C_word*)t0)[7],t3,t4);}

/* f_4253 in k4237 in k4229 */
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[30],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4253,5,t0,t1,t2,t3,t4);}
if(C_truep(t2)){
t5=C_i_cdddr(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],t6);
t8=C_a_i_list(&a,2,lf[64],t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4275,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4278,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t11=C_a_i_list(&a,2,lf[66],((C_word*)t0)[4]);
t12=t10;
f_4278(t12,C_a_i_list(&a,1,t11));}
else{
t11=t10;
f_4278(t11,C_SCHEME_END_OF_LIST);}}
else{
/* chicken-syntax.scm:1179: syntax-error */
t5=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,lf[62],lf[67],((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k4250 */
static void C_ccall f_4251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1177: ##compiler#validate-type */
t2=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6855 in k6853 in k6847 */
static void C_ccall f_6856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:507: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[196]);}

/* k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6858,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6867,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6869,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li79),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_6869(t8,t4,((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4491 */
static void C_ccall f_4493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4493,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4503,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1103: rename2073 */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[87]);}
else{
/* chicken-syntax.scm:1103: ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k6853 in k6847 */
static void C_ccall f_6854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6856,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:506: r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[27]);}

/* k8139 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:307: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[227],C_SCHEME_END_OF_LIST,t1);}

/* f_8142 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in k3375 in k3372 */
static void C_ccall f_8142(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8142,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8145,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:311: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[227],t2,lf[228]);}

/* k8144 */
static void C_ccall f_8145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8145,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[26],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[155],t2,t6));}

/* k6847 */
static void C_ccall f_6848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6848,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6854,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:505: r */
t7=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[172]);}

/* f_6845 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in ... */
static void C_ccall f_6845(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6845,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6848,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:502: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[188],t2,lf[197]);}

/* k6842 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in k3377 in ... */
static void C_ccall f_6843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:498: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[188],C_SCHEME_END_OF_LIST,t1);}

/* k6839 in k3421 in k3419 in k3417 in k3415 in k3413 in k3411 in k3409 in k3406 in k3403 in k3401 in k3399 in k3397 in k3395 in k3393 in k3391 in k3389 in k3387 in k3385 in k3383 in k3381 in k3379 in ... */
static void C_ccall f_6840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6840,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[150],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6837,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:614: ##sys#primitive-alias */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[151]);}

/* k6794 in map-loop1428 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6795(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6795,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6770(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6770(t6,((C_word*)t0)[5],t5);}}

/* expand in k6857 in k6855 in k6853 in k6847 */
static void C_fcall f_6869(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6869,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[189]);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6891,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:518: ##sys#check-syntax */
t7=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[188],t4,lf[194]);}
else{
/* chicken-syntax.scm:514: syntax-error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[188],lf[195],t2);}}}

/* k6866 in k6857 in k6855 in k6853 in k6847 */
static void C_ccall f_6867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6867,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1));}

/* k3632 */
static void C_ccall f_3633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3633,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3639,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1212: ##sys#globalize */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_SCHEME_END_OF_LIST);}

/* k3638 in k3632 */
static void C_ccall f_3639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3639,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3642,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1214: gensym */
t4=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k6676 */
static void C_ccall f_6677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:674: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6670(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6670,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6671,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6680,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6710,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,a[6]=((C_word)li72),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_6710(t11,t7,((C_word*)t0)[5]);}

/* f_6671 in k6669 in k6667 in k6664 in k6661 in k6639 in k6635 in k6633 in k6487 */
static void C_ccall f_6671(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6671,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6677,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:674: prefix-sym */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[181],t2);}

/* k3622 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in ... */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1203: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[34],C_SCHEME_END_OF_LIST,t1);}

/* f_3625 in k3461 in k3459 in k3457 in k3455 in k3453 in k3451 in k3449 in k3447 in k3445 in k3443 in k3441 in k3439 in k3437 in k3435 in k3433 in k3431 in k3429 in k3427 in k3425 in k3423 in k3421 in ... */
static void C_ccall f_3625(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3625,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3633,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1209: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[34],t2,lf[49]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[50]);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[707] = {
{"f_6668:chicken_2dsyntax_2escm",(void*)f_6668},
{"f_6666:chicken_2dsyntax_2escm",(void*)f_6666},
{"f_7142:chicken_2dsyntax_2escm",(void*)f_7142},
{"f_6663:chicken_2dsyntax_2escm",(void*)f_6663},
{"f_3611:chicken_2dsyntax_2escm",(void*)f_3611},
{"f_6690:chicken_2dsyntax_2escm",(void*)f_6690},
{"f_6837:chicken_2dsyntax_2escm",(void*)f_6837},
{"f_8122:chicken_2dsyntax_2escm",(void*)f_8122},
{"f_6740:chicken_2dsyntax_2escm",(void*)f_6740},
{"f_6682:chicken_2dsyntax_2escm",(void*)f_6682},
{"f_6684:chicken_2dsyntax_2escm",(void*)f_6684},
{"f_6680:chicken_2dsyntax_2escm",(void*)f_6680},
{"f_3670:chicken_2dsyntax_2escm",(void*)f_3670},
{"f_6735:chicken_2dsyntax_2escm",(void*)f_6735},
{"f_7105:chicken_2dsyntax_2escm",(void*)f_7105},
{"f_5097:chicken_2dsyntax_2escm",(void*)f_5097},
{"f_5099:chicken_2dsyntax_2escm",(void*)f_5099},
{"f_7102:chicken_2dsyntax_2escm",(void*)f_7102},
{"f_5998:chicken_2dsyntax_2escm",(void*)f_5998},
{"f_5996:chicken_2dsyntax_2escm",(void*)f_5996},
{"f_6710:chicken_2dsyntax_2escm",(void*)f_6710},
{"f_6966:chicken_2dsyntax_2escm",(void*)f_6966},
{"f_5079:chicken_2dsyntax_2escm",(void*)f_5079},
{"f_5077:chicken_2dsyntax_2escm",(void*)f_5077},
{"f_5075:chicken_2dsyntax_2escm",(void*)f_5075},
{"f_5072:chicken_2dsyntax_2escm",(void*)f_5072},
{"f_5070:chicken_2dsyntax_2escm",(void*)f_5070},
{"f_5973:chicken_2dsyntax_2escm",(void*)f_5973},
{"f_5975:chicken_2dsyntax_2escm",(void*)f_5975},
{"f_5977:chicken_2dsyntax_2escm",(void*)f_5977},
{"f_5979:chicken_2dsyntax_2escm",(void*)f_5979},
{"f_5971:chicken_2dsyntax_2escm",(void*)f_5971},
{"f_5064:chicken_2dsyntax_2escm",(void*)f_5064},
{"f_3528:chicken_2dsyntax_2escm",(void*)f_3528},
{"f_3523:chicken_2dsyntax_2escm",(void*)f_3523},
{"f_3525:chicken_2dsyntax_2escm",(void*)f_3525},
{"f_6941:chicken_2dsyntax_2escm",(void*)f_6941},
{"f_3696:chicken_2dsyntax_2escm",(void*)f_3696},
{"f_3698:chicken_2dsyntax_2escm",(void*)f_3698},
{"f_5955:chicken_2dsyntax_2escm",(void*)f_5955},
{"f_5952:chicken_2dsyntax_2escm",(void*)f_5952},
{"f_3511:chicken_2dsyntax_2escm",(void*)f_3511},
{"f_6939:chicken_2dsyntax_2escm",(void*)f_6939},
{"f_6930:chicken_2dsyntax_2escm",(void*)f_6930},
{"f_3687:chicken_2dsyntax_2escm",(void*)f_3687},
{"f_8631:chicken_2dsyntax_2escm",(void*)f_8631},
{"f_3560:chicken_2dsyntax_2escm",(void*)f_3560},
{"f_8648:chicken_2dsyntax_2escm",(void*)f_8648},
{"f_8645:chicken_2dsyntax_2escm",(void*)f_8645},
{"f_6601:chicken_2dsyntax_2escm",(void*)f_6601},
{"f_5939:chicken_2dsyntax_2escm",(void*)f_5939},
{"f_5931:chicken_2dsyntax_2escm",(void*)f_5931},
{"f_5933:chicken_2dsyntax_2escm",(void*)f_5933},
{"f_3532:chicken_2dsyntax_2escm",(void*)f_3532},
{"f_8643:chicken_2dsyntax_2escm",(void*)f_8643},
{"f_3534:chicken_2dsyntax_2escm",(void*)f_3534},
{"f_3551:chicken_2dsyntax_2escm",(void*)f_3551},
{"f_3554:chicken_2dsyntax_2escm",(void*)f_3554},
{"f_6636:chicken_2dsyntax_2escm",(void*)f_6636},
{"f_6634:chicken_2dsyntax_2escm",(void*)f_6634},
{"f_8657:chicken_2dsyntax_2escm",(void*)f_8657},
{"f_6632:chicken_2dsyntax_2escm",(void*)f_6632},
{"f_8658:chicken_2dsyntax_2escm",(void*)f_8658},
{"f_6995:chicken_2dsyntax_2escm",(void*)f_6995},
{"f_5969:chicken_2dsyntax_2escm",(void*)f_5969},
{"f_5967:chicken_2dsyntax_2escm",(void*)f_5967},
{"f_5965:chicken_2dsyntax_2escm",(void*)f_5965},
{"f_5963:chicken_2dsyntax_2escm",(void*)f_5963},
{"f_5961:chicken_2dsyntax_2escm",(void*)f_5961},
{"f_6986:chicken_2dsyntax_2escm",(void*)f_6986},
{"f_6981:chicken_2dsyntax_2escm",(void*)f_6981},
{"f_6626:chicken_2dsyntax_2escm",(void*)f_6626},
{"f_8668:chicken_2dsyntax_2escm",(void*)f_8668},
{"f_8667:chicken_2dsyntax_2escm",(void*)f_8667},
{"f_6983:chicken_2dsyntax_2escm",(void*)f_6983},
{"f_6620:chicken_2dsyntax_2escm",(void*)f_6620},
{"f_8664:chicken_2dsyntax_2escm",(void*)f_8664},
{"f_8677:chicken_2dsyntax_2escm",(void*)f_8677},
{"f_6658:chicken_2dsyntax_2escm",(void*)f_6658},
{"f_6651:chicken_2dsyntax_2escm",(void*)f_6651},
{"f_6652:chicken_2dsyntax_2escm",(void*)f_6652},
{"f_3586:chicken_2dsyntax_2escm",(void*)f_3586},
{"f_3584:chicken_2dsyntax_2escm",(void*)f_3584},
{"f_8674:chicken_2dsyntax_2escm",(void*)f_8674},
{"f_6648:chicken_2dsyntax_2escm",(void*)f_6648},
{"f_6641:chicken_2dsyntax_2escm",(void*)f_6641},
{"f_6642:chicken_2dsyntax_2escm",(void*)f_6642},
{"f_8683:chicken_2dsyntax_2escm",(void*)f_8683},
{"f_4316:chicken_2dsyntax_2escm",(void*)f_4316},
{"f_4314:chicken_2dsyntax_2escm",(void*)f_4314},
{"f_4319:chicken_2dsyntax_2escm",(void*)f_4319},
{"f_5697:chicken_2dsyntax_2escm",(void*)f_5697},
{"f_5694:chicken_2dsyntax_2escm",(void*)f_5694},
{"f_5679:chicken_2dsyntax_2escm",(void*)f_5679},
{"f_6926:chicken_2dsyntax_2escm",(void*)f_6926},
{"f_4321:chicken_2dsyntax_2escm",(void*)f_4321},
{"f_8941:chicken_2dsyntax_2escm",(void*)f_8941},
{"f_8944:chicken_2dsyntax_2escm",(void*)f_8944},
{"f_6911:chicken_2dsyntax_2escm",(void*)f_6911},
{"f_6914:chicken_2dsyntax_2escm",(void*)f_6914},
{"f_5655:chicken_2dsyntax_2escm",(void*)f_5655},
{"f_8951:chicken_2dsyntax_2escm",(void*)f_8951},
{"f_8953:chicken_2dsyntax_2escm",(void*)f_8953},
{"f_6909:chicken_2dsyntax_2escm",(void*)f_6909},
{"f_8964:chicken_2dsyntax_2escm",(void*)f_8964},
{"f_8271:chicken_2dsyntax_2escm",(void*)f_8271},
{"f_8273:chicken_2dsyntax_2escm",(void*)f_8273},
{"f_5539:chicken_2dsyntax_2escm",(void*)f_5539},
{"f_5537:chicken_2dsyntax_2escm",(void*)f_5537},
{"f_5535:chicken_2dsyntax_2escm",(void*)f_5535},
{"f_5532:chicken_2dsyntax_2escm",(void*)f_5532},
{"f_5530:chicken_2dsyntax_2escm",(void*)f_5530},
{"f_6141:chicken_2dsyntax_2escm",(void*)f_6141},
{"f_8608:chicken_2dsyntax_2escm",(void*)f_8608},
{"f_5524:chicken_2dsyntax_2escm",(void*)f_5524},
{"f_7978:chicken_2dsyntax_2escm",(void*)f_7978},
{"f_7976:chicken_2dsyntax_2escm",(void*)f_7976},
{"f_4230:chicken_2dsyntax_2escm",(void*)f_4230},
{"f_4238:chicken_2dsyntax_2escm",(void*)f_4238},
{"f_8617:chicken_2dsyntax_2escm",(void*)f_8617},
{"f_7964:chicken_2dsyntax_2escm",(void*)f_7964},
{"f_4227:chicken_2dsyntax_2escm",(void*)f_4227},
{"f_4225:chicken_2dsyntax_2escm",(void*)f_4225},
{"f_8997:chicken_2dsyntax_2escm",(void*)f_8997},
{"f_7173:chicken_2dsyntax_2escm",(void*)f_7173},
{"f_5795:chicken_2dsyntax_2escm",(void*)f_5795},
{"f_8624:chicken_2dsyntax_2escm",(void*)f_8624},
{"f_5786:chicken_2dsyntax_2escm",(void*)f_5786},
{"f_5784:chicken_2dsyntax_2escm",(void*)f_5784},
{"f_5782:chicken_2dsyntax_2escm",(void*)f_5782},
{"f_8934:chicken_2dsyntax_2escm",(void*)f_8934},
{"f_7981:chicken_2dsyntax_2escm",(void*)f_7981},
{"f_4245:chicken_2dsyntax_2escm",(void*)f_4245},
{"f_7193:chicken_2dsyntax_2escm",(void*)f_7193},
{"f_7199:chicken_2dsyntax_2escm",(void*)f_7199},
{"f_7190:chicken_2dsyntax_2escm",(void*)f_7190},
{"f_5777:chicken_2dsyntax_2escm",(void*)f_5777},
{"f_7938:chicken_2dsyntax_2escm",(void*)f_7938},
{"f_5779:chicken_2dsyntax_2escm",(void*)f_5779},
{"f_7932:chicken_2dsyntax_2escm",(void*)f_7932},
{"f_7185:chicken_2dsyntax_2escm",(void*)f_7185},
{"f_7188:chicken_2dsyntax_2escm",(void*)f_7188},
{"f_5768:chicken_2dsyntax_2escm",(void*)f_5768},
{"f_5741:chicken_2dsyntax_2escm",(void*)f_5741},
{"f_7955:chicken_2dsyntax_2escm",(void*)f_7955},
{"f_7951:chicken_2dsyntax_2escm",(void*)f_7951},
{"f_4213:chicken_2dsyntax_2escm",(void*)f_4213},
{"f_7945:chicken_2dsyntax_2escm",(void*)f_7945},
{"f_8859:chicken_2dsyntax_2escm",(void*)f_8859},
{"f_7158:chicken_2dsyntax_2escm",(void*)f_7158},
{"f_7156:chicken_2dsyntax_2escm",(void*)f_7156},
{"f_7153:chicken_2dsyntax_2escm",(void*)f_7153},
{"f_7151:chicken_2dsyntax_2escm",(void*)f_7151},
{"f_8901:chicken_2dsyntax_2escm",(void*)f_8901},
{"f_3448:chicken_2dsyntax_2escm",(void*)f_3448},
{"f_3446:chicken_2dsyntax_2escm",(void*)f_3446},
{"f_3444:chicken_2dsyntax_2escm",(void*)f_3444},
{"f_3442:chicken_2dsyntax_2escm",(void*)f_3442},
{"f_6291:chicken_2dsyntax_2escm",(void*)f_6291},
{"f_3440:chicken_2dsyntax_2escm",(void*)f_3440},
{"f_6294:chicken_2dsyntax_2escm",(void*)f_6294},
{"f_8876:chicken_2dsyntax_2escm",(void*)f_8876},
{"f_8918:chicken_2dsyntax_2escm",(void*)f_8918},
{"f_7694:chicken_2dsyntax_2escm",(void*)f_7694},
{"f_8890:chicken_2dsyntax_2escm",(void*)f_8890},
{"f_7685:chicken_2dsyntax_2escm",(void*)f_7685},
{"f_5490:chicken_2dsyntax_2escm",(void*)f_5490},
{"f_3426:chicken_2dsyntax_2escm",(void*)f_3426},
{"f_3428:chicken_2dsyntax_2escm",(void*)f_3428},
{"f_3422:chicken_2dsyntax_2escm",(void*)f_3422},
{"f_3424:chicken_2dsyntax_2escm",(void*)f_3424},
{"f_3420:chicken_2dsyntax_2escm",(void*)f_3420},
{"f_5485:chicken_2dsyntax_2escm",(void*)f_5485},
{"f_3458:chicken_2dsyntax_2escm",(void*)f_3458},
{"f_3456:chicken_2dsyntax_2escm",(void*)f_3456},
{"f_3454:chicken_2dsyntax_2escm",(void*)f_3454},
{"f_3452:chicken_2dsyntax_2escm",(void*)f_3452},
{"f_3450:chicken_2dsyntax_2escm",(void*)f_3450},
{"f_7821:chicken_2dsyntax_2escm",(void*)f_7821},
{"f_7826:chicken_2dsyntax_2escm",(void*)f_7826},
{"f_7892:chicken_2dsyntax_2escm",(void*)f_7892},
{"f_7653:chicken_2dsyntax_2escm",(void*)f_7653},
{"f_5460:chicken_2dsyntax_2escm",(void*)f_5460},
{"f_7658:chicken_2dsyntax_2escm",(void*)f_7658},
{"f_5458:chicken_2dsyntax_2escm",(void*)f_5458},
{"f_7647:chicken_2dsyntax_2escm",(void*)f_7647},
{"f_5447:chicken_2dsyntax_2escm",(void*)f_5447},
{"f_7660:chicken_2dsyntax_2escm",(void*)f_7660},
{"f_8017:chicken_2dsyntax_2escm",(void*)f_8017},
{"f_7510:chicken_2dsyntax_2escm",(void*)f_7510},
{"f_7518:chicken_2dsyntax_2escm",(void*)f_7518},
{"f_4096:chicken_2dsyntax_2escm",(void*)f_4096},
{"f_8031:chicken_2dsyntax_2escm",(void*)f_8031},
{"f_8039:chicken_2dsyntax_2escm",(void*)f_8039},
{"f_8821:chicken_2dsyntax_2escm",(void*)f_8821},
{"f_8819:chicken_2dsyntax_2escm",(void*)f_8819},
{"f_5348:chicken_2dsyntax_2escm",(void*)f_5348},
{"f_8041:chicken_2dsyntax_2escm",(void*)f_8041},
{"f_8834:chicken_2dsyntax_2escm",(void*)f_8834},
{"f_7520:chicken_2dsyntax_2escm",(void*)f_7520},
{"f_8832:chicken_2dsyntax_2escm",(void*)f_8832},
{"f_8829:chicken_2dsyntax_2escm",(void*)f_8829},
{"f_7529:chicken_2dsyntax_2escm",(void*)f_7529},
{"f_7523:chicken_2dsyntax_2escm",(void*)f_7523},
{"f_4082:chicken_2dsyntax_2escm",(void*)f_4082},
{"f_4080:chicken_2dsyntax_2escm",(void*)f_4080},
{"f_3404:chicken_2dsyntax_2escm",(void*)f_3404},
{"f_3402:chicken_2dsyntax_2escm",(void*)f_3402},
{"f_8052:chicken_2dsyntax_2escm",(void*)f_8052},
{"f_3408:chicken_2dsyntax_2escm",(void*)f_3408},
{"f_4088:chicken_2dsyntax_2escm",(void*)f_4088},
{"f_8840:chicken_2dsyntax_2escm",(void*)f_8840},
{"f_3400:chicken_2dsyntax_2escm",(void*)f_3400},
{"f_7815:chicken_2dsyntax_2escm",(void*)f_7815},
{"f_4688:chicken_2dsyntax_2escm",(void*)f_4688},
{"f_3436:chicken_2dsyntax_2escm",(void*)f_3436},
{"f_6545:chicken_2dsyntax_2escm",(void*)f_6545},
{"f_3438:chicken_2dsyntax_2escm",(void*)f_3438},
{"f_4059:chicken_2dsyntax_2escm",(void*)f_4059},
{"f_3432:chicken_2dsyntax_2escm",(void*)f_3432},
{"f_3434:chicken_2dsyntax_2escm",(void*)f_3434},
{"f_3430:chicken_2dsyntax_2escm",(void*)f_3430},
{"f_4682:chicken_2dsyntax_2escm",(void*)f_4682},
{"f_8848:chicken_2dsyntax_2escm",(void*)f_8848},
{"f_5318:chicken_2dsyntax_2escm",(void*)f_5318},
{"f_5304:chicken_2dsyntax_2escm",(void*)f_5304},
{"f_5301:chicken_2dsyntax_2escm",(void*)f_5301},
{"f_4074:chicken_2dsyntax_2escm",(void*)f_4074},
{"f_3414:chicken_2dsyntax_2escm",(void*)f_3414},
{"f_3412:chicken_2dsyntax_2escm",(void*)f_3412},
{"f_3418:chicken_2dsyntax_2escm",(void*)f_3418},
{"f_3416:chicken_2dsyntax_2escm",(void*)f_3416},
{"f_3410:chicken_2dsyntax_2escm",(void*)f_3410},
{"f_9555:chicken_2dsyntax_2escm",(void*)f_9555},
{"f_9557:chicken_2dsyntax_2escm",(void*)f_9557},
{"f_9553:chicken_2dsyntax_2escm",(void*)f_9553},
{"f_6551:chicken_2dsyntax_2escm",(void*)f_6551},
{"f_6554:chicken_2dsyntax_2escm",(void*)f_6554},
{"f_9568:chicken_2dsyntax_2escm",(void*)f_9568},
{"f_4655:chicken_2dsyntax_2escm",(void*)f_4655},
{"f_9540:chicken_2dsyntax_2escm",(void*)f_9540},
{"f_6581:chicken_2dsyntax_2escm",(void*)f_6581},
{"f_9538:chicken_2dsyntax_2escm",(void*)f_9538},
{"f_4643:chicken_2dsyntax_2escm",(void*)f_4643},
{"f_4667:chicken_2dsyntax_2escm",(void*)f_4667},
{"f_3820:chicken_2dsyntax_2escm",(void*)f_3820},
{"f_5088:chicken_2dsyntax_2escm",(void*)f_5088},
{"f_5081:chicken_2dsyntax_2escm",(void*)f_5081},
{"f_3818:chicken_2dsyntax_2escm",(void*)f_3818},
{"f_9580:chicken_2dsyntax_2escm",(void*)f_9580},
{"f_4358:chicken_2dsyntax_2escm",(void*)f_4358},
{"f_4356:chicken_2dsyntax_2escm",(void*)f_4356},
{"f_9577:chicken_2dsyntax_2escm",(void*)f_9577},
{"f_3806:chicken_2dsyntax_2escm",(void*)f_3806},
{"f_7341:chicken_2dsyntax_2escm",(void*)f_7341},
{"f_4713:chicken_2dsyntax_2escm",(void*)f_4713},
{"f_4375:chicken_2dsyntax_2escm",(void*)f_4375},
{"f_4377:chicken_2dsyntax_2escm",(void*)f_4377},
{"f_7330:chicken_2dsyntax_2escm",(void*)f_7330},
{"f_4703:chicken_2dsyntax_2escm",(void*)f_4703},
{"f_3867:chicken_2dsyntax_2escm",(void*)f_3867},
{"f_7339:chicken_2dsyntax_2escm",(void*)f_7339},
{"f_6504:chicken_2dsyntax_2escm",(void*)f_6504},
{"f_6507:chicken_2dsyntax_2escm",(void*)f_6507},
{"f_6530:chicken_2dsyntax_2escm",(void*)f_6530},
{"f_7305:chicken_2dsyntax_2escm",(void*)f_7305},
{"f_4363:chicken_2dsyntax_2escm",(void*)f_4363},
{"f_7300:chicken_2dsyntax_2escm",(void*)f_7300},
{"f_9520:chicken_2dsyntax_2escm",(void*)f_9520},
{"f_6568:chicken_2dsyntax_2escm",(void*)f_6568},
{"f_6562:chicken_2dsyntax_2escm",(void*)f_6562},
{"f_6512:chicken_2dsyntax_2escm",(void*)f_6512},
{"f_6510:chicken_2dsyntax_2escm",(void*)f_6510},
{"f_7067:chicken_2dsyntax_2escm",(void*)f_7067},
{"f_3881:chicken_2dsyntax_2escm",(void*)f_3881},
{"f_7064:chicken_2dsyntax_2escm",(void*)f_7064},
{"f_7062:chicken_2dsyntax_2escm",(void*)f_7062},
{"f_7047:chicken_2dsyntax_2escm",(void*)f_7047},
{"f_7034:chicken_2dsyntax_2escm",(void*)f_7034},
{"f_6352:chicken_2dsyntax_2escm",(void*)f_6352},
{"f_5268:chicken_2dsyntax_2escm",(void*)f_5268},
{"f_7020:chicken_2dsyntax_2escm",(void*)f_7020},
{"f_6277:chicken_2dsyntax_2escm",(void*)f_6277},
{"f_6274:chicken_2dsyntax_2escm",(void*)f_6274},
{"f_6271:chicken_2dsyntax_2escm",(void*)f_6271},
{"f_3753:chicken_2dsyntax_2escm",(void*)f_3753},
{"f_3747:chicken_2dsyntax_2escm",(void*)f_3747},
{"f_4140:chicken_2dsyntax_2escm",(void*)f_4140},
{"f_4147:chicken_2dsyntax_2escm",(void*)f_4147},
{"f_4132:chicken_2dsyntax_2escm",(void*)f_4132},
{"f_8330:chicken_2dsyntax_2escm",(void*)f_8330},
{"f_4124:chicken_2dsyntax_2escm",(void*)f_4124},
{"f_4126:chicken_2dsyntax_2escm",(void*)f_4126},
{"f_3664:chicken_2dsyntax_2escm",(void*)f_3664},
{"f_3666:chicken_2dsyntax_2escm",(void*)f_3666},
{"f_8347:chicken_2dsyntax_2escm",(void*)f_8347},
{"f_4115:chicken_2dsyntax_2escm",(void*)f_4115},
{"f_3655:chicken_2dsyntax_2escm",(void*)f_3655},
{"f_6250:chicken_2dsyntax_2escm",(void*)f_6250},
{"f_8358:chicken_2dsyntax_2escm",(void*)f_8358},
{"f_3642:chicken_2dsyntax_2escm",(void*)f_3642},
{"f_3646:chicken_2dsyntax_2escm",(void*)f_3646},
{"f_6289:chicken_2dsyntax_2escm",(void*)f_6289},
{"f_3644:chicken_2dsyntax_2escm",(void*)f_3644},
{"f_3648:chicken_2dsyntax_2escm",(void*)f_3648},
{"f_6283:chicken_2dsyntax_2escm",(void*)f_6283},
{"f_6280:chicken_2dsyntax_2escm",(void*)f_6280},
{"f_4029:chicken_2dsyntax_2escm",(void*)f_4029},
{"f_7396:chicken_2dsyntax_2escm",(void*)f_7396},
{"f_8389:chicken_2dsyntax_2escm",(void*)f_8389},
{"f_4826:chicken_2dsyntax_2escm",(void*)f_4826},
{"f_4034:chicken_2dsyntax_2escm",(void*)f_4034},
{"f_4812:chicken_2dsyntax_2escm",(void*)f_4812},
{"f_4817:chicken_2dsyntax_2escm",(void*)f_4817},
{"f_4814:chicken_2dsyntax_2escm",(void*)f_4814},
{"f_4828:chicken_2dsyntax_2escm",(void*)f_4828},
{"f_7366:chicken_2dsyntax_2escm",(void*)f_7366},
{"f_5553:chicken_2dsyntax_2escm",(void*)f_5553},
{"f_5555:chicken_2dsyntax_2escm",(void*)f_5555},
{"f_4004:chicken_2dsyntax_2escm",(void*)f_4004},
{"f_5551:chicken_2dsyntax_2escm",(void*)f_5551},
{"f_4103:chicken_2dsyntax_2escm",(void*)f_4103},
{"f_6223:chicken_2dsyntax_2escm",(void*)f_6223},
{"f_7371:chicken_2dsyntax_2escm",(void*)f_7371},
{"f_5543:chicken_2dsyntax_2escm",(void*)f_5543},
{"f_5545:chicken_2dsyntax_2escm",(void*)f_5545},
{"f_5547:chicken_2dsyntax_2escm",(void*)f_5547},
{"f_5541:chicken_2dsyntax_2escm",(void*)f_5541},
{"f_6225:chicken_2dsyntax_2escm",(void*)f_6225},
{"f_8302:chicken_2dsyntax_2escm",(void*)f_8302},
{"f_6215:chicken_2dsyntax_2escm",(void*)f_6215},
{"f_8313:chicken_2dsyntax_2escm",(void*)f_8313},
{"f_7856:chicken_2dsyntax_2escm",(void*)f_7856},
{"f_7851:chicken_2dsyntax_2escm",(void*)f_7851},
{"f_5807:chicken_2dsyntax_2escm",(void*)f_5807},
{"f_5873:chicken_2dsyntax_2escm",(void*)f_5873},
{"f_5870:chicken_2dsyntax_2escm",(void*)f_5870},
{"f_7087:chicken_2dsyntax_2escm",(void*)f_7087},
{"f_7079:chicken_2dsyntax_2escm",(void*)f_7079},
{"f_7077:chicken_2dsyntax_2escm",(void*)f_7077},
{"f_7071:chicken_2dsyntax_2escm",(void*)f_7071},
{"f_8215:chicken_2dsyntax_2escm",(void*)f_8215},
{"f_8218:chicken_2dsyntax_2escm",(void*)f_8218},
{"f_6207:chicken_2dsyntax_2escm",(void*)f_6207},
{"f_8552:chicken_2dsyntax_2escm",(void*)f_8552},
{"f_8554:chicken_2dsyntax_2escm",(void*)f_8554},
{"f_8557:chicken_2dsyntax_2escm",(void*)f_8557},
{"f_8563:chicken_2dsyntax_2escm",(void*)f_8563},
{"f_8569:chicken_2dsyntax_2escm",(void*)f_8569},
{"f_8565:chicken_2dsyntax_2escm",(void*)f_8565},
{"f_8567:chicken_2dsyntax_2escm",(void*)f_8567},
{"f_8203:chicken_2dsyntax_2escm",(void*)f_8203},
{"f_8208:chicken_2dsyntax_2escm",(void*)f_8208},
{"f_8209:chicken_2dsyntax_2escm",(void*)f_8209},
{"f_7867:chicken_2dsyntax_2escm",(void*)f_7867},
{"f_7703:chicken_2dsyntax_2escm",(void*)f_7703},
{"f_7595:chicken_2dsyntax_2escm",(void*)f_7595},
{"f_7596:chicken_2dsyntax_2escm",(void*)f_7596},
{"f_7593:chicken_2dsyntax_2escm",(void*)f_7593},
{"f_3762:chicken_2dsyntax_2escm",(void*)f_3762},
{"f_8227:chicken_2dsyntax_2escm",(void*)f_8227},
{"f_7733:chicken_2dsyntax_2escm",(void*)f_7733},
{"f_5110:chicken_2dsyntax_2escm",(void*)f_5110},
{"f_7580:chicken_2dsyntax_2escm",(void*)f_7580},
{"f_8598:chicken_2dsyntax_2escm",(void*)f_8598},
{"f_8193:chicken_2dsyntax_2escm",(void*)f_8193},
{"f_3709:chicken_2dsyntax_2escm",(void*)f_3709},
{"f_7757:chicken_2dsyntax_2escm",(void*)f_7757},
{"f_8180:chicken_2dsyntax_2escm",(void*)f_8180},
{"f_8196:chicken_2dsyntax_2escm",(void*)f_8196},
{"f_5122:chicken_2dsyntax_2escm",(void*)f_5122},
{"f_8197:chicken_2dsyntax_2escm",(void*)f_8197},
{"f_7555:chicken_2dsyntax_2escm",(void*)f_7555},
{"f_3726:chicken_2dsyntax_2escm",(void*)f_3726},
{"f_8186:chicken_2dsyntax_2escm",(void*)f_8186},
{"f_8188:chicken_2dsyntax_2escm",(void*)f_8188},
{"f_7548:chicken_2dsyntax_2escm",(void*)f_7548},
{"f_4193:chicken_2dsyntax_2escm",(void*)f_4193},
{"f_4195:chicken_2dsyntax_2escm",(void*)f_4195},
{"f_8238:chicken_2dsyntax_2escm",(void*)f_8238},
{"f_5104:chicken_2dsyntax_2escm",(void*)f_5104},
{"f_7577:chicken_2dsyntax_2escm",(void*)f_7577},
{"f_4198:chicken_2dsyntax_2escm",(void*)f_4198},
{"f_9369:chicken_2dsyntax_2escm",(void*)f_9369},
{"f_9367:chicken_2dsyntax_2escm",(void*)f_9367},
{"f_5130:chicken_2dsyntax_2escm",(void*)f_5130},
{"f_3779:chicken_2dsyntax_2escm",(void*)f_3779},
{"f_3770:chicken_2dsyntax_2escm",(void*)f_3770},
{"f_9331:chicken_2dsyntax_2escm",(void*)f_9331},
{"f_9334:chicken_2dsyntax_2escm",(void*)f_9334},
{"f_5237:chicken_2dsyntax_2escm",(void*)f_5237},
{"f_5239:chicken_2dsyntax_2escm",(void*)f_5239},
{"f_7401:chicken_2dsyntax_2escm",(void*)f_7401},
{"f_9391:chicken_2dsyntax_2escm",(void*)f_9391},
{"f_8521:chicken_2dsyntax_2escm",(void*)f_8521},
{"f_3781:chicken_2dsyntax_2escm",(void*)f_3781},
{"f_4158:chicken_2dsyntax_2escm",(void*)f_4158},
{"f_7431:chicken_2dsyntax_2escm",(void*)f_7431},
{"f_7439:chicken_2dsyntax_2escm",(void*)f_7439},
{"f_5216:chicken_2dsyntax_2escm",(void*)f_5216},
{"f_4167:chicken_2dsyntax_2escm",(void*)f_4167},
{"f_9372:chicken_2dsyntax_2escm",(void*)f_9372},
{"f_7426:chicken_2dsyntax_2escm",(void*)f_7426},
{"f_4568:chicken_2dsyntax_2escm",(void*)f_4568},
{"f_5243:chicken_2dsyntax_2escm",(void*)f_5243},
{"f_5245:chicken_2dsyntax_2escm",(void*)f_5245},
{"f_4559:chicken_2dsyntax_2escm",(void*)f_4559},
{"f_4540:chicken_2dsyntax_2escm",(void*)f_4540},
{"f_4794:chicken_2dsyntax_2escm",(void*)f_4794},
{"f_4547:chicken_2dsyntax_2escm",(void*)f_4547},
{"f_4922:chicken_2dsyntax_2escm",(void*)f_4922},
{"f_5222:chicken_2dsyntax_2escm",(void*)f_5222},
{"f_5227:chicken_2dsyntax_2escm",(void*)f_5227},
{"f_5224:chicken_2dsyntax_2escm",(void*)f_5224},
{"f_4782:chicken_2dsyntax_2escm",(void*)f_4782},
{"f_4532:chicken_2dsyntax_2escm",(void*)f_4532},
{"f_4913:chicken_2dsyntax_2escm",(void*)f_4913},
{"f_4911:chicken_2dsyntax_2escm",(void*)f_4911},
{"f_4915:chicken_2dsyntax_2escm",(void*)f_4915},
{"f_9445:chicken_2dsyntax_2escm",(void*)f_9445},
{"f_9447:chicken_2dsyntax_2escm",(void*)f_9447},
{"f_4775:chicken_2dsyntax_2escm",(void*)f_4775},
{"f_4904:chicken_2dsyntax_2escm",(void*)f_4904},
{"f_4906:chicken_2dsyntax_2escm",(void*)f_4906},
{"f_4909:chicken_2dsyntax_2escm",(void*)f_4909},
{"f_9283:chicken_2dsyntax_2escm",(void*)f_9283},
{"f_4591:chicken_2dsyntax_2escm",(void*)f_4591},
{"f_9458:chicken_2dsyntax_2escm",(void*)f_9458},
{"f_9288:chicken_2dsyntax_2escm",(void*)f_9288},
{"f_9456:chicken_2dsyntax_2escm",(void*)f_9456},
{"f_4761:chicken_2dsyntax_2escm",(void*)f_4761},
{"f_9450:chicken_2dsyntax_2escm",(void*)f_9450},
{"f_4767:chicken_2dsyntax_2escm",(void*)f_4767},
{"f_9318:chicken_2dsyntax_2escm",(void*)f_9318},
{"f_4584:chicken_2dsyntax_2escm",(void*)f_4584},
{"f_9295:chicken_2dsyntax_2escm",(void*)f_9295},
{"f_9463:chicken_2dsyntax_2escm",(void*)f_9463},
{"f_9462:chicken_2dsyntax_2escm",(void*)f_9462},
{"f_9460:chicken_2dsyntax_2escm",(void*)f_9460},
{"f_3943:chicken_2dsyntax_2escm",(void*)f_3943},
{"f_3944:chicken_2dsyntax_2escm",(void*)f_3944},
{"f_4759:chicken_2dsyntax_2escm",(void*)f_4759},
{"f_9329:chicken_2dsyntax_2escm",(void*)f_9329},
{"f_4570:chicken_2dsyntax_2escm",(void*)f_4570},
{"f_9320:chicken_2dsyntax_2escm",(void*)f_9320},
{"f_3976:chicken_2dsyntax_2escm",(void*)f_3976},
{"f_4576:chicken_2dsyntax_2escm",(void*)f_4576},
{"f_4402:chicken_2dsyntax_2escm",(void*)f_4402},
{"f_4417:chicken_2dsyntax_2escm",(void*)f_4417},
{"f_4419:chicken_2dsyntax_2escm",(void*)f_4419},
{"f_3968:chicken_2dsyntax_2escm",(void*)f_3968},
{"f_7214:chicken_2dsyntax_2escm",(void*)f_7214},
{"f_7215:chicken_2dsyntax_2escm",(void*)f_7215},
{"f_6150:chicken_2dsyntax_2escm",(void*)f_6150},
{"f_9304:chicken_2dsyntax_2escm",(void*)f_9304},
{"f_9306:chicken_2dsyntax_2escm",(void*)f_9306},
{"f_9309:chicken_2dsyntax_2escm",(void*)f_9309},
{"f_4408:chicken_2dsyntax_2escm",(void*)f_4408},
{"f_9490:chicken_2dsyntax_2escm",(void*)f_9490},
{"f_3984:chicken_2dsyntax_2escm",(void*)f_3984},
{"f_3982:chicken_2dsyntax_2escm",(void*)f_3982},
{"f_4437:chicken_2dsyntax_2escm",(void*)f_4437},
{"f_7235:chicken_2dsyntax_2escm",(void*)f_7235},
{"f_7238:chicken_2dsyntax_2escm",(void*)f_7238},
{"f_7229:chicken_2dsyntax_2escm",(void*)f_7229},
{"f_3955:chicken_2dsyntax_2escm",(void*)f_3955},
{"f_3954:chicken_2dsyntax_2escm",(void*)f_3954},
{"f_7240:chicken_2dsyntax_2escm",(void*)f_7240},
{"f_6181:chicken_2dsyntax_2escm",(void*)f_6181},
{"f_9210:chicken_2dsyntax_2escm",(void*)f_9210},
{"f_4413:chicken_2dsyntax_2escm",(void*)f_4413},
{"f_4415:chicken_2dsyntax_2escm",(void*)f_4415},
{"f_4410:chicken_2dsyntax_2escm",(void*)f_4410},
{"f_9404:chicken_2dsyntax_2escm",(void*)f_9404},
{"f_9682:chicken_2dsyntax_2escm",(void*)f_9682},
{"f_9687:chicken_2dsyntax_2escm",(void*)f_9687},
{"f_5152:chicken_2dsyntax_2escm",(void*)f_5152},
{"f_5150:chicken_2dsyntax_2escm",(void*)f_5150},
{"f_3996:chicken_2dsyntax_2escm",(void*)f_3996},
{"f_3932:chicken_2dsyntax_2escm",(void*)f_3932},
{"f_3934:chicken_2dsyntax_2escm",(void*)f_3934},
{"f_7206:chicken_2dsyntax_2escm",(void*)f_7206},
{"f_7200:chicken_2dsyntax_2escm",(void*)f_7200},
{"f_7209:chicken_2dsyntax_2escm",(void*)f_7209},
{"f_6488:chicken_2dsyntax_2escm",(void*)f_6488},
{"f_6485:chicken_2dsyntax_2escm",(void*)f_6485},
{"f_6483:chicken_2dsyntax_2escm",(void*)f_6483},
{"f_5166:chicken_2dsyntax_2escm",(void*)f_5166},
{"f_3836:chicken_2dsyntax_2escm",(void*)f_3836},
{"f_9655:chicken_2dsyntax_2escm",(void*)f_9655},
{"f_9652:chicken_2dsyntax_2escm",(void*)f_9652},
{"f_6453:chicken_2dsyntax_2escm",(void*)f_6453},
{"f_9667:chicken_2dsyntax_2escm",(void*)f_9667},
{"f_6444:chicken_2dsyntax_2escm",(void*)f_6444},
{"f_5172:chicken_2dsyntax_2escm",(void*)f_5172},
{"f_6477:chicken_2dsyntax_2escm",(void*)f_6477},
{"f_6471:chicken_2dsyntax_2escm",(void*)f_6471},
{"f_6474:chicken_2dsyntax_2escm",(void*)f_6474},
{"f_9239:chicken_2dsyntax_2escm",(void*)f_9239},
{"f_9237:chicken_2dsyntax_2escm",(void*)f_9237},
{"f_5295:chicken_2dsyntax_2escm",(void*)f_5295},
{"f_5298:chicken_2dsyntax_2escm",(void*)f_5298},
{"f_9243:chicken_2dsyntax_2escm",(void*)f_9243},
{"f_6415:chicken_2dsyntax_2escm",(void*)f_6415},
{"f_6413:chicken_2dsyntax_2escm",(void*)f_6413},
{"f_9252:chicken_2dsyntax_2escm",(void*)f_9252},
{"f_6418:chicken_2dsyntax_2escm",(void*)f_6418},
{"f_5270:chicken_2dsyntax_2escm",(void*)f_5270},
{"f_5926:chicken_2dsyntax_2escm",(void*)f_5926},
{"f_5928:chicken_2dsyntax_2escm",(void*)f_5928},
{"f_6407:chicken_2dsyntax_2escm",(void*)f_6407},
{"f_3471:chicken_2dsyntax_2escm",(void*)f_3471},
{"f_3473:chicken_2dsyntax_2escm",(void*)f_3473},
{"f_5250:chicken_2dsyntax_2escm",(void*)f_5250},
{"f_3476:chicken_2dsyntax_2escm",(void*)f_3476},
{"f_3478:chicken_2dsyntax_2escm",(void*)f_3478},
{"f_6420:chicken_2dsyntax_2escm",(void*)f_6420},
{"f_5987:chicken_2dsyntax_2escm",(void*)f_5987},
{"f_5289:chicken_2dsyntax_2escm",(void*)f_5289},
{"f_5285:chicken_2dsyntax_2escm",(void*)f_5285},
{"f_5981:chicken_2dsyntax_2escm",(void*)f_5981},
{"toplevel:chicken_2dsyntax_2escm",(void*)C_chicken_2dsyntax_toplevel},
{"f_4843:chicken_2dsyntax_2escm",(void*)f_4843},
{"f_6018:chicken_2dsyntax_2escm",(void*)f_6018},
{"f_4831:chicken_2dsyntax_2escm",(void*)f_4831},
{"f_3481:chicken_2dsyntax_2escm",(void*)f_3481},
{"f_3489:chicken_2dsyntax_2escm",(void*)f_3489},
{"f_4849:chicken_2dsyntax_2escm",(void*)f_4849},
{"f_6009:chicken_2dsyntax_2escm",(void*)f_6009},
{"f_8461:chicken_2dsyntax_2escm",(void*)f_8461},
{"f_3373:chicken_2dsyntax_2escm",(void*)f_3373},
{"f_6006:chicken_2dsyntax_2escm",(void*)f_6006},
{"f_3376:chicken_2dsyntax_2escm",(void*)f_3376},
{"f_3378:chicken_2dsyntax_2escm",(void*)f_3378},
{"f_8456:chicken_2dsyntax_2escm",(void*)f_8456},
{"f_4837:chicken_2dsyntax_2escm",(void*)f_4837},
{"f_6034:chicken_2dsyntax_2escm",(void*)f_6034},
{"f_6031:chicken_2dsyntax_2escm",(void*)f_6031},
{"f_4854:chicken_2dsyntax_2escm",(void*)f_4854},
{"f_4851:chicken_2dsyntax_2escm",(void*)f_4851},
{"f_3460:chicken_2dsyntax_2escm",(void*)f_3460},
{"f_3462:chicken_2dsyntax_2escm",(void*)f_3462},
{"f_3464:chicken_2dsyntax_2escm",(void*)f_3464},
{"f_3466:chicken_2dsyntax_2escm",(void*)f_3466},
{"f_3468:chicken_2dsyntax_2escm",(void*)f_3468},
{"f_5630:chicken_2dsyntax_2escm",(void*)f_5630},
{"f_6029:chicken_2dsyntax_2escm",(void*)f_6029},
{"f_8160:chicken_2dsyntax_2escm",(void*)f_8160},
{"f_8162:chicken_2dsyntax_2escm",(void*)f_8162},
{"f_5628:chicken_2dsyntax_2escm",(void*)f_5628},
{"f_6023:chicken_2dsyntax_2escm",(void*)f_6023},
{"f_6021:chicken_2dsyntax_2escm",(void*)f_6021},
{"f_3493:chicken_2dsyntax_2escm",(void*)f_3493},
{"f_3491:chicken_2dsyntax_2escm",(void*)f_3491},
{"f_8491:chicken_2dsyntax_2escm",(void*)f_8491},
{"f_8486:chicken_2dsyntax_2escm",(void*)f_8486},
{"f_5617:chicken_2dsyntax_2escm",(void*)f_5617},
{"f_9183:chicken_2dsyntax_2escm",(void*)f_9183},
{"f_9180:chicken_2dsyntax_2escm",(void*)f_9180},
{"f_9010:chicken_2dsyntax_2escm",(void*)f_9010},
{"f_9015:chicken_2dsyntax_2escm",(void*)f_9015},
{"f_7259:chicken_2dsyntax_2escm",(void*)f_7259},
{"f_5885:chicken_2dsyntax_2escm",(void*)f_5885},
{"f_8431:chicken_2dsyntax_2escm",(void*)f_8431},
{"f_9192:chicken_2dsyntax_2escm",(void*)f_9192},
{"f_5908:chicken_2dsyntax_2escm",(void*)f_5908},
{"f_7275:chicken_2dsyntax_2escm",(void*)f_7275},
{"f_7273:chicken_2dsyntax_2escm",(void*)f_7273},
{"f_5868:chicken_2dsyntax_2escm",(void*)f_5868},
{"f_5865:chicken_2dsyntax_2escm",(void*)f_5865},
{"f_5862:chicken_2dsyntax_2escm",(void*)f_5862},
{"f_9178:chicken_2dsyntax_2escm",(void*)f_9178},
{"f_7267:chicken_2dsyntax_2escm",(void*)f_7267},
{"f_7261:chicken_2dsyntax_2escm",(void*)f_7261},
{"f_6320:chicken_2dsyntax_2escm",(void*)f_6320},
{"f_6318:chicken_2dsyntax_2escm",(void*)f_6318},
{"f_9057:chicken_2dsyntax_2escm",(void*)f_9057},
{"f_8069:chicken_2dsyntax_2escm",(void*)f_8069},
{"f_9026:chicken_2dsyntax_2escm",(void*)f_9026},
{"f_9706:chicken_2dsyntax_2escm",(void*)f_9706},
{"f_8770:chicken_2dsyntax_2escm",(void*)f_8770},
{"f_9702:chicken_2dsyntax_2escm",(void*)f_9702},
{"f_8400:chicken_2dsyntax_2escm",(void*)f_8400},
{"f_8083:chicken_2dsyntax_2escm",(void*)f_8083},
{"f_7787:chicken_2dsyntax_2escm",(void*)f_7787},
{"f_7782:chicken_2dsyntax_2escm",(void*)f_7782},
{"f_8798:chicken_2dsyntax_2escm",(void*)f_8798},
{"f_5716:chicken_2dsyntax_2escm",(void*)f_5716},
{"f_9739:chicken_2dsyntax_2escm",(void*)f_9739},
{"f_9737:chicken_2dsyntax_2escm",(void*)f_9737},
{"f_5771:chicken_2dsyntax_2escm",(void*)f_5771},
{"f_9731:chicken_2dsyntax_2escm",(void*)f_9731},
{"f_9112:chicken_2dsyntax_2escm",(void*)f_9112},
{"f_9117:chicken_2dsyntax_2escm",(void*)f_9117},
{"f_5705:chicken_2dsyntax_2escm",(void*)f_5705},
{"f_9742:chicken_2dsyntax_2escm",(void*)f_9742},
{"f_8781:chicken_2dsyntax_2escm",(void*)f_8781},
{"f_9142:chicken_2dsyntax_2escm",(void*)f_9142},
{"f_9147:chicken_2dsyntax_2escm",(void*)f_9147},
{"f_6309:chicken_2dsyntax_2escm",(void*)f_6309},
{"f_6307:chicken_2dsyntax_2escm",(void*)f_6307},
{"f_6305:chicken_2dsyntax_2escm",(void*)f_6305},
{"f_6303:chicken_2dsyntax_2escm",(void*)f_6303},
{"f_8714:chicken_2dsyntax_2escm",(void*)f_8714},
{"f_7610:chicken_2dsyntax_2escm",(void*)f_7610},
{"f_7611:chicken_2dsyntax_2escm",(void*)f_7611},
{"f_8712:chicken_2dsyntax_2escm",(void*)f_8712},
{"f_7619:chicken_2dsyntax_2escm",(void*)f_7619},
{"f_5414:chicken_2dsyntax_2escm",(void*)f_5414},
{"f_7602:chicken_2dsyntax_2escm",(void*)f_7602},
{"f_7605:chicken_2dsyntax_2escm",(void*)f_7605},
{"f_7632:chicken_2dsyntax_2escm",(void*)f_7632},
{"f_7630:chicken_2dsyntax_2escm",(void*)f_7630},
{"f_6343:chicken_2dsyntax_2escm",(void*)f_6343},
{"f_8739:chicken_2dsyntax_2escm",(void*)f_8739},
{"f_7488:chicken_2dsyntax_2escm",(void*)f_7488},
{"f_7483:chicken_2dsyntax_2escm",(void*)f_7483},
{"f_5025:chicken_2dsyntax_2escm",(void*)f_5025},
{"f_8703:chicken_2dsyntax_2escm",(void*)f_8703},
{"f_8701:chicken_2dsyntax_2escm",(void*)f_8701},
{"f_8709:chicken_2dsyntax_2escm",(void*)f_8709},
{"f_7624:chicken_2dsyntax_2escm",(void*)f_7624},
{"f_4967:chicken_2dsyntax_2escm",(void*)f_4967},
{"f_7923:chicken_2dsyntax_2escm",(void*)f_7923},
{"f_7925:chicken_2dsyntax_2escm",(void*)f_7925},
{"f_7928:chicken_2dsyntax_2escm",(void*)f_7928},
{"f_7929:chicken_2dsyntax_2escm",(void*)f_7929},
{"f_8756:chicken_2dsyntax_2escm",(void*)f_8756},
{"f_4959:chicken_2dsyntax_2escm",(void*)f_4959},
{"f_8720:chicken_2dsyntax_2escm",(void*)f_8720},
{"f_8728:chicken_2dsyntax_2escm",(void*)f_8728},
{"f_4947:chicken_2dsyntax_2escm",(void*)f_4947},
{"f_4931:chicken_2dsyntax_2escm",(void*)f_4931},
{"f_4933:chicken_2dsyntax_2escm",(void*)f_4933},
{"f_4938:chicken_2dsyntax_2escm",(void*)f_4938},
{"f_7441:chicken_2dsyntax_2escm",(void*)f_7441},
{"f_8294:chicken_2dsyntax_2escm",(void*)f_8294},
{"f_7472:chicken_2dsyntax_2escm",(void*)f_7472},
{"f_7474:chicken_2dsyntax_2escm",(void*)f_7474},
{"f_7477:chicken_2dsyntax_2escm",(void*)f_7477},
{"f_6800:chicken_2dsyntax_2escm",(void*)f_6800},
{"f_7466:chicken_2dsyntax_2escm",(void*)f_7466},
{"f_4526:chicken_2dsyntax_2escm",(void*)f_4526},
{"f_4524:chicken_2dsyntax_2escm",(void*)f_4524},
{"f_5044:chicken_2dsyntax_2escm",(void*)f_5044},
{"f_4987:chicken_2dsyntax_2escm",(void*)f_4987},
{"f_4989:chicken_2dsyntax_2escm",(void*)f_4989},
{"f_4518:chicken_2dsyntax_2escm",(void*)f_4518},
{"f_6095:chicken_2dsyntax_2escm",(void*)f_6095},
{"f_4503:chicken_2dsyntax_2escm",(void*)f_4503},
{"f_9087:chicken_2dsyntax_2escm",(void*)f_9087},
{"f_4614:chicken_2dsyntax_2escm",(void*)f_4614},
{"f_4612:chicken_2dsyntax_2escm",(void*)f_4612},
{"f_4482:chicken_2dsyntax_2escm",(void*)f_4482},
{"f_4484:chicken_2dsyntax_2escm",(void*)f_4484},
{"f_4275:chicken_2dsyntax_2escm",(void*)f_4275},
{"f_4278:chicken_2dsyntax_2escm",(void*)f_4278},
{"f_5003:chicken_2dsyntax_2escm",(void*)f_5003},
{"f_5009:chicken_2dsyntax_2escm",(void*)f_5009},
{"f_4603:chicken_2dsyntax_2escm",(void*)f_4603},
{"f_3392:chicken_2dsyntax_2escm",(void*)f_3392},
{"f_3390:chicken_2dsyntax_2escm",(void*)f_3390},
{"f_3396:chicken_2dsyntax_2escm",(void*)f_3396},
{"f_3394:chicken_2dsyntax_2escm",(void*)f_3394},
{"f_3398:chicken_2dsyntax_2escm",(void*)f_3398},
{"f_4631:chicken_2dsyntax_2escm",(void*)f_4631},
{"f_3382:chicken_2dsyntax_2escm",(void*)f_3382},
{"f_3380:chicken_2dsyntax_2escm",(void*)f_3380},
{"f_3386:chicken_2dsyntax_2escm",(void*)f_3386},
{"f_3384:chicken_2dsyntax_2escm",(void*)f_3384},
{"f_6053:chicken_2dsyntax_2escm",(void*)f_6053},
{"f_6051:chicken_2dsyntax_2escm",(void*)f_6051},
{"f_3388:chicken_2dsyntax_2escm",(void*)f_3388},
{"f_6770:chicken_2dsyntax_2escm",(void*)f_6770},
{"f_4623:chicken_2dsyntax_2escm",(void*)f_4623},
{"f_6897:chicken_2dsyntax_2escm",(void*)f_6897},
{"f_6899:chicken_2dsyntax_2escm",(void*)f_6899},
{"f_6891:chicken_2dsyntax_2escm",(void*)f_6891},
{"f_8108:chicken_2dsyntax_2escm",(void*)f_8108},
{"f_4440:chicken_2dsyntax_2escm",(void*)f_4440},
{"f_8117:chicken_2dsyntax_2escm",(void*)f_8117},
{"f_8119:chicken_2dsyntax_2escm",(void*)f_8119},
{"f_6064:chicken_2dsyntax_2escm",(void*)f_6064},
{"f_4253:chicken_2dsyntax_2escm",(void*)f_4253},
{"f_4251:chicken_2dsyntax_2escm",(void*)f_4251},
{"f_6856:chicken_2dsyntax_2escm",(void*)f_6856},
{"f_6858:chicken_2dsyntax_2escm",(void*)f_6858},
{"f_4493:chicken_2dsyntax_2escm",(void*)f_4493},
{"f_6854:chicken_2dsyntax_2escm",(void*)f_6854},
{"f_8140:chicken_2dsyntax_2escm",(void*)f_8140},
{"f_8142:chicken_2dsyntax_2escm",(void*)f_8142},
{"f_8145:chicken_2dsyntax_2escm",(void*)f_8145},
{"f_6848:chicken_2dsyntax_2escm",(void*)f_6848},
{"f_6845:chicken_2dsyntax_2escm",(void*)f_6845},
{"f_6843:chicken_2dsyntax_2escm",(void*)f_6843},
{"f_6840:chicken_2dsyntax_2escm",(void*)f_6840},
{"f_6795:chicken_2dsyntax_2escm",(void*)f_6795},
{"f_6869:chicken_2dsyntax_2escm",(void*)f_6869},
{"f_6867:chicken_2dsyntax_2escm",(void*)f_6867},
{"f_3633:chicken_2dsyntax_2escm",(void*)f_3633},
{"f_3639:chicken_2dsyntax_2escm",(void*)f_3639},
{"f_6677:chicken_2dsyntax_2escm",(void*)f_6677},
{"f_6670:chicken_2dsyntax_2escm",(void*)f_6670},
{"f_6671:chicken_2dsyntax_2escm",(void*)f_6671},
{"f_3623:chicken_2dsyntax_2escm",(void*)f_3623},
{"f_3625:chicken_2dsyntax_2escm",(void*)f_3625},
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
S|  ##sys#map		10
S|  map		37
o|eliminated procedure checks: 653 
o|specializations:
o|  1 (caddr (pair * (pair * pair)))
o|  3 (cadr (pair * pair))
o|  1 (zero? fixnum)
o|  2 (length list)
o|  24 (##sys#check-list (or pair list) *)
o|  6 (cdddr (pair * (pair * pair)))
o|  2 (string-append string string)
o|  49 (cdr pair)
o|  23 (car pair)
o|  17 (cddr (pair * pair))
o|Removed `not' forms: 12 
o|inlining procedure: k3482 
o|inlining procedure: k3482 
o|inlining procedure: k3569 
o|inlining procedure: k3569 
o|inlining procedure: k3589 
o|inlining procedure: k3589 
o|inlining procedure: k3627 
o|inlining procedure: k3658 
o|inlining procedure: k3701 
o|inlining procedure: k3701 
o|inlining procedure: k3754 
o|inlining procedure: k3754 
o|inlining procedure: k3761 
o|propagated global variable: g23782379 ##compiler#check-and-validate-type 
o|inlining procedure: k3784 
o|inlining procedure: k3784 
o|inlining procedure: k3761 
o|inlining procedure: k3823 
o|inlining procedure: k3823 
o|inlining procedure: k3658 
o|inlining procedure: k3862 
o|inlining procedure: k3862 
o|inlining procedure: k3894 
o|inlining procedure: k3894 
o|inlining procedure: k3627 
o|inlining procedure: k3938 
o|inlining procedure: k4007 
o|inlining procedure: k4007 
o|inlining procedure: k4037 
o|inlining procedure: k4037 
o|inlining procedure: k3938 
o|inlining procedure: k4069 
o|inlining procedure: k4083 
o|inlining procedure: k4099 
o|inlining procedure: k4099 
o|inlining procedure: k4083 
o|inlining procedure: k4069 
o|inlining procedure: k4127 
o|inlining procedure: k4143 
o|inlining procedure: k4143 
o|inlining procedure: k4173 
o|inlining procedure: k4173 
o|inlining procedure: k4127 
o|inlining procedure: k4199 
o|inlining procedure: k4199 
o|inlining procedure: k4231 
o|contracted procedure: k4258 
o|inlining procedure: k4255 
o|inlining procedure: k4280 
o|inlining procedure: k4280 
o|inlining procedure: k4255 
o|inlining procedure: k4231 
o|inlining procedure: k4380 
o|inlining procedure: k4380 
o|inlining procedure: k4438 
o|inlining procedure: k4438 
o|inlining procedure: k4453 
o|inlining procedure: k4453 
o|inlining procedure: k4488 
o|inlining procedure: k4488 
o|inlining procedure: k4513 
o|inlining procedure: k4527 
o|inlining procedure: k4543 
o|inlining procedure: k4543 
o|inlining procedure: k4527 
o|inlining procedure: k4513 
o|inlining procedure: k4571 
o|inlining procedure: k4587 
o|inlining procedure: k4587 
o|inlining procedure: k4571 
o|inlining procedure: k4618 
o|inlining procedure: k4618 
o|inlining procedure: k4698 
o|inlining procedure: k4698 
o|inlining procedure: k4731 
o|inlining procedure: k4731 
o|inlining procedure: k4746 
o|inlining procedure: k4762 
o|inlining procedure: k4778 
o|inlining procedure: k4778 
o|inlining procedure: k4762 
o|inlining procedure: k4746 
o|inlining procedure: k4857 
o|inlining procedure: k4857 
o|inlining procedure: k4925 
o|inlining procedure: k4925 
o|inlining procedure: k5004 
o|inlining procedure: k5004 
o|inlining procedure: k5091 
o|inlining procedure: k5091 
o|inlining procedure: k5167 
o|inlining procedure: k5167 
o|inlining procedure: k5273 
o|inlining procedure: k5273 
o|inlining procedure: k5310 
o|inlining procedure: k5310 
o|inlining procedure: k5344 
o|inlining procedure: k5344 
o|inlining procedure: k5403 
o|inlining procedure: k5403 
o|inlining procedure: k5449 
o|inlining procedure: k5449 
o|inlining procedure: k5463 
o|inlining procedure: k5463 
o|inlining procedure: k5493 
o|inlining procedure: k5493 
o|inlining procedure: k5556 
o|inlining procedure: k5566 
o|inlining procedure: k5566 
o|inlining procedure: k5556 
o|inlining procedure: k5593 
o|inlining procedure: k5593 
o|inlining procedure: k5633 
o|inlining procedure: k5633 
o|inlining procedure: k5719 
o|inlining procedure: k5719 
o|inlining procedure: k5878 
o|inlining procedure: k5878 
o|inlining procedure: k5942 
o|inlining procedure: k5942 
o|inlining procedure: k6035 
o|inlining procedure: k6035 
o|inlining procedure: k6056 
o|inlining procedure: k6056 
o|inlining procedure: k6098 
o|inlining procedure: k6121 
o|inlining procedure: k6121 
o|inlining procedure: k6098 
o|inlining procedure: k6149 
o|inlining procedure: k6149 
o|inlining procedure: k6182 
o|inlining procedure: k6182 
o|inlining procedure: k6228 
o|inlining procedure: k6228 
o|inlining procedure: k6323 
o|inlining procedure: k6323 
o|removed unused formal parameters: (rename1382) 
o|inlining procedure: k6571 
o|inlining procedure: k6571 
o|removed unused parameter to known procedure: rename1382 "(chicken-syntax.scm:679) make-if-tree1362" 
o|contracted procedure: "(chicken-syntax.scm:677) make-default-procs1361" 
o|inlining procedure: k6515 
o|inlining procedure: k6515 
o|inlining procedure: k6713 
o|inlining procedure: k6713 
o|inlining procedure: k6743 
o|inlining procedure: k6743 
o|inlining procedure: k6773 
o|inlining procedure: k6773 
o|inlining procedure: k6803 
o|inlining procedure: k6803 
o|inlining procedure: k6872 
o|inlining procedure: k6872 
o|inlining procedure: k6892 
o|inlining procedure: k6892 
o|inlining procedure: k6944 
o|inlining procedure: k6944 
o|inlining procedure: k6998 
o|inlining procedure: k6998 
o|inlining procedure: k7021 
o|inlining procedure: k7021 
o|inlining procedure: k7078 
o|inlining procedure: k7078 
o|inlining procedure: k7091 
o|inlining procedure: k7091 
o|inlining procedure: k7278 
o|inlining procedure: k7278 
o|inlining procedure: k7308 
o|inlining procedure: k7308 
o|inlining procedure: k7344 
o|inlining procedure: k7344 
o|inlining procedure: k7374 
o|inlining procedure: k7374 
o|inlining procedure: k7404 
o|inlining procedure: k7404 
o|inlining procedure: k7444 
o|inlining procedure: k7444 
o|inlining procedure: k7491 
o|inlining procedure: k7491 
o|inlining procedure: k7532 
o|inlining procedure: k7532 
o|inlining procedure: k7558 
o|inlining procedure: k7558 
o|inlining procedure: k7635 
o|inlining procedure: k7663 
o|inlining procedure: k7663 
o|inlining procedure: k7635 
o|inlining procedure: k7760 
o|inlining procedure: k7760 
o|inlining procedure: k7790 
o|inlining procedure: k7790 
o|inlining procedure: k7829 
o|inlining procedure: k7829 
o|inlining procedure: k7859 
o|inlining procedure: k7859 
o|inlining procedure: k7879 
o|inlining procedure: k7879 
o|inlining procedure: k7895 
o|inlining procedure: k7895 
o|inlining procedure: k7958 
o|inlining procedure: k7958 
o|inlining procedure: k7986 
o|inlining procedure: k7986 
o|inlining procedure: k8044 
o|inlining procedure: k8044 
o|inlining procedure: k8086 
o|inlining procedure: k8086 
o|contracted procedure: "(chicken-syntax.scm:286) pname525" 
o|inlining procedure: k8168 
o|inlining procedure: k8168 
o|inlining procedure: k8305 
o|inlining procedure: k8305 
o|inlining procedure: k8350 
o|inlining procedure: k8350 
o|inlining procedure: k8392 
o|inlining procedure: k8392 
o|inlining procedure: k8434 
o|inlining procedure: k8434 
o|inlining procedure: k8464 
o|inlining procedure: k8464 
o|inlining procedure: k8494 
o|inlining procedure: k8494 
o|inlining procedure: k8524 
o|inlining procedure: k8524 
o|inlining procedure: k8570 
o|inlining procedure: k8585 
o|inlining procedure: k8585 
o|inlining procedure: k8570 
o|inlining procedure: k8601 
o|inlining procedure: k8619 
o|inlining procedure: k8619 
o|inlining procedure: k8601 
o|inlining procedure: k8731 
o|inlining procedure: k8731 
o|inlining procedure: k8773 
o|inlining procedure: k8773 
o|inlining procedure: k8851 
o|inlining procedure: k8851 
o|inlining procedure: k8893 
o|inlining procedure: k8893 
o|inlining procedure: k8956 
o|inlining procedure: k8956 
o|inlining procedure: k9000 
o|inlining procedure: k9000 
o|inlining procedure: k9018 
o|inlining procedure: k9018 
o|inlining procedure: k9060 
o|inlining procedure: k9060 
o|inlining procedure: k9090 
o|inlining procedure: k9090 
o|inlining procedure: k9120 
o|inlining procedure: k9120 
o|inlining procedure: k9150 
o|inlining procedure: k9150 
o|inlining procedure: k9212 
o|inlining procedure: k9212 
o|inlining procedure: k9269 
o|inlining procedure: k9269 
o|inlining procedure: k9289 
o|inlining procedure: k9289 
o|inlining procedure: k9373 
o|inlining procedure: k9373 
o|inlining procedure: k9465 
o|inlining procedure: k9465 
o|inlining procedure: k9485 
o|inlining procedure: k9497 
o|inlining procedure: k9497 
o|inlining procedure: k9485 
o|inlining procedure: k9543 
o|inlining procedure: k9543 
o|inlining procedure: k9588 
o|inlining procedure: k9588 
o|inlining procedure: k9657 
o|inlining procedure: k9657 
o|substituted constant variable: a9684 
o|substituted constant variable: a9703 
o|inlining procedure: k9709 
o|inlining procedure: k9709 
o|replaced variables: 554 
o|removed binding forms: 181 
o|substituted constant variable: r34839750 
o|substituted constant variable: r37559761 
o|substituted constant variable: r37559761 
o|substituted constant variable: f_38229767 
o|substituted constant variable: r38959773 
o|substituted constant variable: f_36269774 
o|substituted constant variable: r40849785 
o|substituted constant variable: r40709786 
o|substituted constant variable: r41749791 
o|substituted constant variable: r41289792 
o|substituted constant variable: a42799798 
o|substituted constant variable: r42329800 
o|substituted constant variable: r44399803 
o|substituted constant variable: r44399803 
o|substituted constant variable: r45289815 
o|substituted constant variable: r45149816 
o|substituted constant variable: r45729820 
o|substituted constant variable: r47329826 
o|substituted constant variable: r47639831 
o|substituted constant variable: r47479832 
o|substituted constant variable: f_52729843 
o|substituted constant variable: r54049850 
o|substituted constant variable: f_54489852 
o|converted assignments to bindings: (parse-clause1736) 
o|substituted constant variable: f_59419869 
o|substituted constant variable: r61839881 
o|converted assignments to bindings: (genvars1573) 
o|substituted constant variable: f_65149889 
o|converted assignments to bindings: (make-if-tree1362) 
o|substituted constant variable: f_68719899 
o|substituted constant variable: r70929917 
o|converted assignments to bindings: (quotify-proc1242) 
o|substituted constant variable: f_75579935 
o|substituted constant variable: f_89999995 
o|substituted constant variable: r929010012 
o|substituted constant variable: r949810019 
o|substituted constant variable: r948610020 
o|simplifications: ((let . 4)) 
o|replaced variables: 10 
o|removed binding forms: 600 
o|inlining procedure: k8607 
o|inlining procedure: k8607 
o|inlining procedure: k8607 
o|replaced variables: 1 
o|removed binding forms: 41 
o|removed binding forms: 4 
o|simplifications: ((if . 24) (##core#call . 1134)) 
o|  call simplifications:
o|    string?
o|    cdar
o|    caar
o|    assq	2
o|    not	3
o|    apply	2
o|    fx-	2
o|    fx>=
o|    cddddr
o|    cddr	6
o|    add1
o|    ##sys#call-with-values	2
o|    ##sys#pair?	9
o|    ##sys#eq?	8
o|    ##sys#cdr	28
o|    ##sys#car	19
o|    cdddr	2
o|    cadddr	2
o|    list?	3
o|    fx=
o|    symbol?	8
o|    null?	32
o|    vector
o|    cdr	19
o|    fx+	3
o|    ##sys#check-list	36
o|    pair?	85
o|    cons	75
o|    ##sys#setslot	47
o|    ##sys#slot	129
o|    car	46
o|    eq?	7
o|    list	9
o|    ##sys#cons	156
o|    memq	7
o|    cadr	50
o|    caddr	17
o|    ##sys#list	312
o|contracted procedure: k3485 
o|contracted procedure: k3501 
o|contracted procedure: k3504 
o|contracted procedure: k3507 
o|contracted procedure: k3498 
o|contracted procedure: k3513 
o|contracted procedure: k3516 
o|contracted procedure: k3529 
o|contracted procedure: k3619 
o|contracted procedure: k3616 
o|contracted procedure: k3539 
o|contracted procedure: k3562 
o|contracted procedure: k3566 
o|contracted procedure: k3576 
o|contracted procedure: k3580 
o|contracted procedure: k3548 
o|contracted procedure: k3545 
o|contracted procedure: k3542 
o|contracted procedure: k3591 
o|contracted procedure: k3594 
o|contracted procedure: k3603 
o|contracted procedure: k3613 
o|contracted procedure: k3629 
o|contracted procedure: k3634 
o|contracted procedure: k3636 
o|contracted procedure: k3649 
o|contracted procedure: k3660 
o|contracted procedure: k3667 
o|contracted procedure: k3740 
o|contracted procedure: k3743 
o|contracted procedure: k3675 
o|contracted procedure: k3681 
o|contracted procedure: k3692 
o|contracted procedure: k3684 
o|contracted procedure: k3678 
o|contracted procedure: k3733 
o|contracted procedure: k3703 
o|contracted procedure: k3706 
o|contracted procedure: k3715 
o|contracted procedure: k3718 
o|contracted procedure: k3728 
o|contracted procedure: k3731 
o|contracted procedure: k3758 
o|contracted procedure: k3749 
o|contracted procedure: k3763 
o|contracted procedure: k3775 
o|contracted procedure: k3786 
o|contracted procedure: k3789 
o|contracted procedure: k3798 
o|contracted procedure: k3808 
o|contracted procedure: k3825 
o|contracted procedure: k3832 
o|contracted procedure: k3838 
o|contracted procedure: k3841 
o|contracted procedure: k3843 
o|contracted procedure: k3848 
o|contracted procedure: k3857 
o|contracted procedure: k3860 
o|contracted procedure: k3886 
o|contracted procedure: k3874 
o|contracted procedure: k3877 
o|contracted procedure: k3883 
o|contracted procedure: k3891 
o|contracted procedure: k3897 
o|contracted procedure: k3904 
o|contracted procedure: k3925 
o|contracted procedure: k3914 
o|contracted procedure: k3936 
o|contracted procedure: k3948 
o|contracted procedure: k3950 
o|contracted procedure: k3960 
o|contracted procedure: k3962 
o|contracted procedure: k3964 
o|contracted procedure: k3969 
o|contracted procedure: k3978 
o|contracted procedure: k4001 
o|contracted procedure: k3998 
o|contracted procedure: k3992 
o|contracted procedure: k3989 
o|contracted procedure: k4009 
o|contracted procedure: k4012 
o|contracted procedure: k4021 
o|contracted procedure: k4031 
o|contracted procedure: k4039 
o|contracted procedure: k4042 
o|contracted procedure: k4051 
o|contracted procedure: k4061 
o|contracted procedure: k4066 
o|contracted procedure: k4093 
o|contracted procedure: k4111 
o|contracted procedure: k4117 
o|contracted procedure: k4120 
o|contracted procedure: k4137 
o|contracted procedure: k4154 
o|contracted procedure: k4163 
o|contracted procedure: k4168 
o|contracted procedure: k4171 
o|contracted procedure: k4176 
o|contracted procedure: k4183 
o|contracted procedure: k4186 
o|contracted procedure: k4189 
o|contracted procedure: k4202 
o|contracted procedure: k4215 
o|contracted procedure: k4218 
o|contracted procedure: k4234 
o|contracted procedure: k4239 
o|contracted procedure: k4304 
o|contracted procedure: k4301 
o|contracted procedure: k4298 
o|contracted procedure: k4271 
o|contracted procedure: k4268 
o|contracted procedure: k4289 
o|contracted procedure: k4286 
o|contracted procedure: k4280 
o|contracted procedure: k4295 
o|contracted procedure: k4307 
o|contracted procedure: k4322 
o|contracted procedure: k4324 
o|contracted procedure: k4326 
o|contracted procedure: k4343 
o|contracted procedure: k4360 
o|contracted procedure: k4368 
o|contracted procedure: k4371 
o|contracted procedure: k4346 
o|contracted procedure: k4349 
o|contracted procedure: k4352 
o|contracted procedure: k4331 
o|contracted procedure: k4337 
o|contracted procedure: k4340 
o|contracted procedure: k4382 
o|contracted procedure: k4385 
o|contracted procedure: k4394 
o|contracted procedure: k4404 
o|contracted procedure: k4427 
o|contracted procedure: k4430 
o|contracted procedure: k4424 
o|contracted procedure: k4441 
o|contracted procedure: k4447 
o|inlining procedure: k4438 
o|contracted procedure: k4456 
o|contracted procedure: k4466 
o|contracted procedure: k4469 
o|contracted procedure: k4471 
o|contracted procedure: k4478 
o|contracted procedure: k4486 
o|contracted procedure: k4494 
o|contracted procedure: k4496 
o|contracted procedure: k4505 
o|contracted procedure: k4510 
o|contracted procedure: k4537 
o|contracted procedure: k4555 
o|contracted procedure: k4561 
o|contracted procedure: k4564 
o|contracted procedure: k4581 
o|contracted procedure: k4599 
o|contracted procedure: k4605 
o|contracted procedure: k4608 
o|contracted procedure: k4616 
o|contracted procedure: k4624 
o|contracted procedure: k4636 
o|contracted procedure: k4633 
o|contracted procedure: k4696 
o|contracted procedure: k4644 
o|contracted procedure: k4693 
o|contracted procedure: k4646 
o|contracted procedure: k4648 
o|contracted procedure: k4690 
o|contracted procedure: k4672 
o|contracted procedure: k4684 
o|contracted procedure: k4678 
o|contracted procedure: k4675 
o|contracted procedure: k4669 
o|contracted procedure: k4663 
o|contracted procedure: k4660 
o|contracted procedure: k4657 
o|contracted procedure: k4704 
o|contracted procedure: k4721 
o|contracted procedure: k4706 
o|contracted procedure: k4718 
o|contracted procedure: k4715 
o|contracted procedure: k4726 
o|contracted procedure: k4729 
o|contracted procedure: k4734 
o|contracted procedure: k4741 
o|contracted procedure: k4743 
o|contracted procedure: k4749 
o|contracted procedure: k4751 
o|contracted procedure: k4772 
o|contracted procedure: k4790 
o|contracted procedure: k4796 
o|contracted procedure: k4799 
o|contracted procedure: k4801 
o|contracted procedure: k4808 
o|contracted procedure: k4822 
o|contracted procedure: k4845 
o|contracted procedure: k4839 
o|contracted procedure: k4855 
o|contracted procedure: k4860 
o|contracted procedure: k4880 
o|contracted procedure: k4877 
o|contracted procedure: k4872 
o|contracted procedure: k4867 
o|contracted procedure: k4894 
o|contracted procedure: k4891 
o|contracted procedure: k5060 
o|contracted procedure: k4900 
o|contracted procedure: k4927 
o|contracted procedure: k4955 
o|contracted procedure: k4952 
o|contracted procedure: k4949 
o|contracted procedure: k4943 
o|contracted procedure: k4963 
o|contracted procedure: k4978 
o|contracted procedure: k4975 
o|contracted procedure: k4972 
o|contracted procedure: k4996 
o|contracted procedure: k4999 
o|contracted procedure: k5013 
o|contracted procedure: k5038 
o|contracted procedure: k5032 
o|contracted procedure: k5035 
o|contracted procedure: k5048 
o|contracted procedure: k5057 
o|contracted procedure: k5050 
o|contracted procedure: k5212 
o|contracted procedure: k5066 
o|contracted procedure: k5093 
o|contracted procedure: k5118 
o|contracted procedure: k5115 
o|contracted procedure: k5112 
o|contracted procedure: k5126 
o|contracted procedure: k5143 
o|contracted procedure: k5138 
o|contracted procedure: k5135 
o|contracted procedure: k5159 
o|contracted procedure: k5162 
o|contracted procedure: k5176 
o|contracted procedure: k5193 
o|contracted procedure: k5200 
o|contracted procedure: k5209 
o|contracted procedure: k5202 
o|contracted procedure: k5520 
o|contracted procedure: k5218 
o|contracted procedure: k5228 
o|contracted procedure: k5230 
o|contracted procedure: k5232 
o|contracted procedure: k5234 
o|contracted procedure: k5240 
o|contracted procedure: k5246 
o|contracted procedure: k5444 
o|contracted procedure: k5451 
o|contracted procedure: k5454 
o|contracted procedure: k5441 
o|contracted procedure: k5438 
o|contracted procedure: k5258 
o|contracted procedure: k5429 
o|contracted procedure: k5435 
o|contracted procedure: k5432 
o|contracted procedure: k5264 
o|contracted procedure: k5261 
o|contracted procedure: k5255 
o|contracted procedure: k5275 
o|contracted procedure: k5278 
o|contracted procedure: k5426 
o|contracted procedure: k5280 
o|contracted procedure: k5282 
o|contracted procedure: k5380 
o|contracted procedure: k5392 
o|contracted procedure: k5398 
o|contracted procedure: k5395 
o|contracted procedure: k5389 
o|contracted procedure: k5383 
o|contracted procedure: k5386 
o|contracted procedure: k5286 
o|contracted procedure: k5308 
o|contracted procedure: k5326 
o|contracted procedure: k5323 
o|contracted procedure: k5332 
o|contracted procedure: k5338 
o|contracted procedure: k5344 
o|contracted procedure: k5362 
o|contracted procedure: k5374 
o|contracted procedure: k5377 
o|contracted procedure: k5371 
o|contracted procedure: k5365 
o|contracted procedure: k5368 
o|contracted procedure: k5400 
o|contracted procedure: k5406 
o|contracted procedure: k5465 
o|contracted procedure: k5468 
o|contracted procedure: k5477 
o|contracted procedure: k5487 
o|contracted procedure: k5495 
o|contracted procedure: k5517 
o|contracted procedure: k5514 
o|contracted procedure: k5498 
o|contracted procedure: k5507 
o|contracted procedure: k5761 
o|contracted procedure: k5764 
o|contracted procedure: k5526 
o|contracted procedure: k5559 
o|contracted procedure: k5578 
o|contracted procedure: k5575 
o|contracted procedure: k5572 
o|inlining procedure: k5566 
o|contracted procedure: k5584 
o|inlining procedure: k5566 
o|contracted procedure: k5622 
o|contracted procedure: k5624 
o|contracted procedure: k5614 
o|contracted procedure: k5590 
o|contracted procedure: k5605 
o|contracted procedure: k5602 
o|contracted procedure: k5599 
o|inlining procedure: k5593 
o|contracted procedure: k5611 
o|inlining procedure: k5593 
o|contracted procedure: k5635 
o|contracted procedure: k5638 
o|contracted procedure: k5647 
o|contracted procedure: k5657 
o|contracted procedure: k5672 
o|contracted procedure: k5667 
o|contracted procedure: k5758 
o|contracted procedure: k5752 
o|contracted procedure: k5755 
o|contracted procedure: k5749 
o|contracted procedure: k5746 
o|contracted procedure: k5687 
o|contracted procedure: k5690 
o|contracted procedure: k5681 
o|contracted procedure: k5684 
o|contracted procedure: k5699 
o|contracted procedure: k5701 
o|contracted procedure: k5713 
o|contracted procedure: k5710 
o|contracted procedure: k5707 
o|contracted procedure: k5721 
o|contracted procedure: k5724 
o|contracted procedure: k5733 
o|contracted procedure: k5743 
o|contracted procedure: k5855 
o|contracted procedure: k5858 
o|contracted procedure: k5773 
o|contracted procedure: k5800 
o|contracted procedure: k5852 
o|contracted procedure: k5840 
o|contracted procedure: k5849 
o|contracted procedure: k5846 
o|contracted procedure: k5843 
o|contracted procedure: k5809 
o|contracted procedure: k5833 
o|contracted procedure: k5818 
o|contracted procedure: k5830 
o|contracted procedure: k5827 
o|contracted procedure: k5824 
o|contracted procedure: k5821 
o|contracted procedure: k5815 
o|contracted procedure: k5812 
o|contracted procedure: k5803 
o|contracted procedure: k5797 
o|contracted procedure: k5791 
o|contracted procedure: k5874 
o|contracted procedure: k5881 
o|contracted procedure: k5902 
o|contracted procedure: k5890 
o|contracted procedure: k5899 
o|contracted procedure: k5896 
o|contracted procedure: k5893 
o|contracted procedure: k5905 
o|contracted procedure: k5916 
o|contracted procedure: k5913 
o|contracted procedure: k5919 
o|contracted procedure: k6255 
o|contracted procedure: k6258 
o|contracted procedure: k6261 
o|contracted procedure: k6264 
o|contracted procedure: k6267 
o|contracted procedure: k5922 
o|contracted procedure: k5944 
o|contracted procedure: k5957 
o|contracted procedure: k6204 
o|contracted procedure: k6201 
o|contracted procedure: k5992 
o|contracted procedure: k5989 
o|contracted procedure: k6003 
o|contracted procedure: k6014 
o|contracted procedure: k6038 
o|contracted procedure: k6045 
o|contracted procedure: k6047 
o|contracted procedure: k6088 
o|contracted procedure: k6058 
o|contracted procedure: k6083 
o|contracted procedure: k6086 
o|contracted procedure: k6080 
o|contracted procedure: k6061 
o|contracted procedure: k6070 
o|contracted procedure: k6073 
o|contracted procedure: k6100 
o|contracted procedure: k6119 
o|contracted procedure: k6113 
o|contracted procedure: k6116 
o|contracted procedure: k6110 
o|contracted procedure: k6138 
o|contracted procedure: k6124 
o|contracted procedure: k6133 
o|contracted procedure: k6174 
o|contracted procedure: k6177 
o|contracted procedure: k6165 
o|contracted procedure: k6171 
o|contracted procedure: k6168 
o|contracted procedure: k6146 
o|contracted procedure: k6151 
o|contracted procedure: k6185 
o|contracted procedure: k6196 
o|contracted procedure: k6212 
o|contracted procedure: k6217 
o|contracted procedure: k6219 
o|contracted procedure: k6230 
o|contracted procedure: k6233 
o|contracted procedure: k6242 
o|contracted procedure: k6252 
o|contracted procedure: k6403 
o|contracted procedure: k6285 
o|contracted procedure: k6295 
o|contracted procedure: k6297 
o|contracted procedure: k6400 
o|contracted procedure: k6314 
o|contracted procedure: k6325 
o|contracted procedure: k6332 
o|contracted procedure: k6334 
o|contracted procedure: k6339 
o|contracted procedure: k6379 
o|contracted procedure: k6382 
o|contracted procedure: k6385 
o|contracted procedure: k6376 
o|contracted procedure: k6356 
o|contracted procedure: k6365 
o|contracted procedure: k6368 
o|contracted procedure: k6371 
o|contracted procedure: k6362 
o|contracted procedure: k6359 
o|contracted procedure: k6348 
o|contracted procedure: k6397 
o|contracted procedure: k6394 
o|contracted procedure: k6391 
o|contracted procedure: k6461 
o|contracted procedure: k6464 
o|contracted procedure: k6467 
o|contracted procedure: k6409 
o|contracted procedure: k6458 
o|contracted procedure: k6455 
o|contracted procedure: k6425 
o|contracted procedure: k6431 
o|contracted procedure: k6434 
o|contracted procedure: k6445 
o|contracted procedure: k6436 
o|contracted procedure: k6440 
o|contracted procedure: k6428 
o|contracted procedure: k6830 
o|contracted procedure: k6833 
o|contracted procedure: k6479 
o|contracted procedure: k6489 
o|contracted procedure: k6491 
o|contracted procedure: k6573 
o|contracted procedure: k6582 
o|contracted procedure: k6588 
o|contracted procedure: k6628 
o|contracted procedure: k6591 
o|contracted procedure: k6622 
o|contracted procedure: k6610 
o|contracted procedure: k6616 
o|contracted procedure: k6613 
o|contracted procedure: k6597 
o|contracted procedure: k6594 
o|contracted procedure: k6607 
o|contracted procedure: k6637 
o|contracted procedure: k6659 
o|contracted procedure: k6695 
o|contracted procedure: k6707 
o|contracted procedure: k6704 
o|contracted procedure: k6701 
o|contracted procedure: k6698 
o|contracted procedure: k6692 
o|contracted procedure: k6517 
o|contracted procedure: k6520 
o|contracted procedure: k6538 
o|contracted procedure: k6547 
o|contracted procedure: k6541 
o|contracted procedure: k6526 
o|contracted procedure: k6559 
o|contracted procedure: k6556 
o|contracted procedure: k6715 
o|contracted procedure: k6718 
o|contracted procedure: k6727 
o|contracted procedure: k6737 
o|contracted procedure: k6745 
o|contracted procedure: k6767 
o|contracted procedure: k6764 
o|contracted procedure: k6748 
o|contracted procedure: k6757 
o|contracted procedure: k6775 
o|contracted procedure: k6778 
o|contracted procedure: k6787 
o|contracted procedure: k6797 
o|contracted procedure: k6805 
o|contracted procedure: k6827 
o|contracted procedure: k6824 
o|contracted procedure: k6808 
o|contracted procedure: k6817 
o|contracted procedure: k6849 
o|contracted procedure: k6977 
o|contracted procedure: k6863 
o|contracted procedure: k6874 
o|contracted procedure: k6880 
o|contracted procedure: k6886 
o|contracted procedure: k6888 
o|contracted procedure: k6935 
o|contracted procedure: k6919 
o|contracted procedure: k6922 
o|contracted procedure: k6946 
o|contracted procedure: k6949 
o|contracted procedure: k6958 
o|contracted procedure: k6968 
o|contracted procedure: k6971 
o|contracted procedure: k6987 
o|contracted procedure: k7000 
o|contracted procedure: k7006 
o|contracted procedure: k7012 
o|contracted procedure: k7055 
o|contracted procedure: k7024 
o|contracted procedure: k7052 
o|contracted procedure: k7049 
o|contracted procedure: k7040 
o|contracted procedure: k7043 
o|contracted procedure: k7072 
o|contracted procedure: k7115 
o|contracted procedure: k7083 
o|contracted procedure: k7112 
o|contracted procedure: k7094 
o|contracted procedure: k7117 
o|contracted procedure: k7124 
o|contracted procedure: k7133 
o|contracted procedure: k7144 
o|contracted procedure: k7181 
o|contracted procedure: k7147 
o|contracted procedure: k7178 
o|contracted procedure: k7163 
o|contracted procedure: k7175 
o|contracted procedure: k7169 
o|contracted procedure: k7166 
o|contracted procedure: k7194 
o|contracted procedure: k7210 
o|contracted procedure: k7220 
o|contracted procedure: k7226 
o|contracted procedure: k7335 
o|contracted procedure: k7245 
o|contracted procedure: k7255 
o|contracted procedure: k7269 
o|contracted procedure: k7251 
o|contracted procedure: k7248 
o|contracted procedure: k7280 
o|contracted procedure: k7283 
o|contracted procedure: k7292 
o|contracted procedure: k7302 
o|contracted procedure: k7310 
o|contracted procedure: k7313 
o|contracted procedure: k7322 
o|contracted procedure: k7332 
o|contracted procedure: k7346 
o|contracted procedure: k7349 
o|contracted procedure: k7358 
o|contracted procedure: k7368 
o|contracted procedure: k7376 
o|contracted procedure: k7379 
o|contracted procedure: k7388 
o|contracted procedure: k7398 
o|contracted procedure: k7406 
o|contracted procedure: k7409 
o|contracted procedure: k7418 
o|contracted procedure: k7428 
o|contracted procedure: k7435 
o|contracted procedure: k7446 
o|contracted procedure: k7449 
o|contracted procedure: k7458 
o|contracted procedure: k7468 
o|contracted procedure: k7478 
o|contracted procedure: k7493 
o|contracted procedure: k7500 
o|contracted procedure: k7514 
o|contracted procedure: k7506 
o|contracted procedure: k7524 
o|contracted procedure: k7534 
o|contracted procedure: k7544 
o|contracted procedure: k7560 
o|contracted procedure: k7566 
o|contracted procedure: k7584 
o|contracted procedure: k7589 
o|contracted procedure: k7606 
o|contracted procedure: k7616 
o|contracted procedure: k7637 
o|contracted procedure: k7654 
o|contracted procedure: k7644 
o|contracted procedure: k7665 
o|contracted procedure: k7668 
o|contracted procedure: k7677 
o|contracted procedure: k7687 
o|contracted procedure: k7715 
o|contracted procedure: k7718 
o|contracted procedure: k7712 
o|contracted procedure: k7699 
o|contracted procedure: k7705 
o|contracted procedure: k7742 
o|contracted procedure: k7724 
o|contracted procedure: k7727 
o|contracted procedure: k7735 
o|contracted procedure: k7754 
o|contracted procedure: k7744 
o|contracted procedure: k7751 
o|contracted procedure: k7762 
o|contracted procedure: k7765 
o|contracted procedure: k7774 
o|contracted procedure: k7784 
o|contracted procedure: k7792 
o|contracted procedure: k7798 
o|contracted procedure: k7807 
o|inlining procedure: k7800 
o|inlining procedure: k7800 
o|contracted procedure: k7831 
o|contracted procedure: k7834 
o|contracted procedure: k7843 
o|contracted procedure: k7853 
o|contracted procedure: k7861 
o|contracted procedure: k7864 
o|contracted procedure: k7873 
o|contracted procedure: k7882 
o|inlining procedure: k7866 
o|contracted procedure: k7897 
o|contracted procedure: k7919 
o|contracted procedure: k7916 
o|contracted procedure: k7900 
o|contracted procedure: k7909 
o|contracted procedure: k7939 
o|contracted procedure: k7941 
o|contracted procedure: k7960 
o|contracted procedure: k7969 
o|contracted procedure: k7972 
o|contracted procedure: k7982 
o|contracted procedure: k7984 
o|contracted procedure: k7989 
o|contracted procedure: k7996 
o|contracted procedure: k8002 
o|contracted procedure: k7999 
o|contracted procedure: k8113 
o|contracted procedure: k8007 
o|contracted procedure: k8022 
o|contracted procedure: k8035 
o|contracted procedure: k8028 
o|contracted procedure: k8025 
o|contracted procedure: k8076 
o|contracted procedure: k8046 
o|contracted procedure: k8049 
o|contracted procedure: k8058 
o|contracted procedure: k8061 
o|contracted procedure: k8071 
o|contracted procedure: k8074 
o|contracted procedure: k8088 
o|contracted procedure: k8091 
o|contracted procedure: k8100 
o|contracted procedure: k8110 
o|contracted procedure: k8127 
o|contracted procedure: k8130 
o|contracted procedure: k8133 
o|contracted procedure: k8150 
o|contracted procedure: k8153 
o|contracted procedure: k8181 
o|contracted procedure: k8189 
o|contracted procedure: k8170 
o|contracted procedure: k8204 
o|contracted procedure: k8223 
o|contracted procedure: k8232 
o|contracted procedure: k8234 
o|contracted procedure: k8344 
o|contracted procedure: k8243 
o|contracted procedure: k8267 
o|contracted procedure: k8264 
o|contracted procedure: k8261 
o|contracted procedure: k8249 
o|contracted procedure: k8258 
o|contracted procedure: k8255 
o|contracted procedure: k8252 
o|contracted procedure: k8246 
o|contracted procedure: k8240 
o|contracted procedure: k8229 
o|contracted procedure: k8290 
o|contracted procedure: k8287 
o|contracted procedure: k8278 
o|contracted procedure: k8281 
o|contracted procedure: k8284 
o|contracted procedure: k8299 
o|contracted procedure: k8296 
o|contracted procedure: k8337 
o|contracted procedure: k8307 
o|contracted procedure: k8310 
o|contracted procedure: k8319 
o|contracted procedure: k8322 
o|contracted procedure: k8332 
o|contracted procedure: k8335 
o|contracted procedure: k8382 
o|contracted procedure: k8352 
o|contracted procedure: k8377 
o|contracted procedure: k8380 
o|contracted procedure: k8374 
o|contracted procedure: k8355 
o|contracted procedure: k8364 
o|contracted procedure: k8367 
o|contracted procedure: k8424 
o|contracted procedure: k8394 
o|contracted procedure: k8419 
o|contracted procedure: k8422 
o|contracted procedure: k8416 
o|contracted procedure: k8397 
o|contracted procedure: k8406 
o|contracted procedure: k8409 
o|contracted procedure: k8436 
o|contracted procedure: k8439 
o|contracted procedure: k8448 
o|contracted procedure: k8458 
o|contracted procedure: k8466 
o|contracted procedure: k8469 
o|contracted procedure: k8478 
o|contracted procedure: k8488 
o|contracted procedure: k8496 
o|contracted procedure: k8518 
o|contracted procedure: k8515 
o|contracted procedure: k8499 
o|contracted procedure: k8508 
o|contracted procedure: k8526 
o|contracted procedure: k8548 
o|contracted procedure: k8545 
o|contracted procedure: k8529 
o|contracted procedure: k8538 
o|contracted procedure: k8558 
o|contracted procedure: k8560 
o|contracted procedure: k8573 
o|contracted procedure: k8579 
o|contracted procedure: k8603 
o|contracted procedure: k8613 
o|contracted procedure: k861310308 
o|contracted procedure: k861310312 
o|contracted procedure: k861310316 
o|contracted procedure: k8649 
o|contracted procedure: k8653 
o|contracted procedure: k8815 
o|contracted procedure: k8688 
o|contracted procedure: k8812 
o|contracted procedure: k8691 
o|contracted procedure: k8697 
o|contracted procedure: k8694 
o|contracted procedure: k8685 
o|contracted procedure: k8725 
o|contracted procedure: k8722 
o|contracted procedure: k8763 
o|contracted procedure: k8733 
o|contracted procedure: k8736 
o|contracted procedure: k8745 
o|contracted procedure: k8748 
o|contracted procedure: k8758 
o|contracted procedure: k8761 
o|contracted procedure: k8805 
o|contracted procedure: k8775 
o|contracted procedure: k8778 
o|contracted procedure: k8787 
o|contracted procedure: k8790 
o|contracted procedure: k8800 
o|contracted procedure: k8803 
o|contracted procedure: k8825 
o|contracted procedure: k8845 
o|contracted procedure: k8842 
o|contracted procedure: k8883 
o|contracted procedure: k8853 
o|contracted procedure: k8856 
o|contracted procedure: k8865 
o|contracted procedure: k8868 
o|contracted procedure: k8878 
o|contracted procedure: k8881 
o|contracted procedure: k8925 
o|contracted procedure: k8895 
o|contracted procedure: k8898 
o|contracted procedure: k8907 
o|contracted procedure: k8910 
o|contracted procedure: k8920 
o|contracted procedure: k8923 
o|contracted procedure: k8935 
o|contracted procedure: k8937 
o|contracted procedure: k8945 
o|contracted procedure: k8947 
o|contracted procedure: k8988 
o|contracted procedure: k8958 
o|contracted procedure: k8983 
o|contracted procedure: k8986 
o|contracted procedure: k8980 
o|contracted procedure: k8961 
o|contracted procedure: k8970 
o|contracted procedure: k8973 
o|contracted procedure: k9002 
o|contracted procedure: k9012 
o|contracted procedure: k9050 
o|contracted procedure: k9020 
o|contracted procedure: k9045 
o|contracted procedure: k9048 
o|contracted procedure: k9042 
o|contracted procedure: k9023 
o|contracted procedure: k9032 
o|contracted procedure: k9035 
o|contracted procedure: k9062 
o|contracted procedure: k9084 
o|contracted procedure: k9081 
o|contracted procedure: k9065 
o|contracted procedure: k9074 
o|contracted procedure: k9092 
o|contracted procedure: k9095 
o|contracted procedure: k9104 
o|contracted procedure: k9114 
o|contracted procedure: k9122 
o|contracted procedure: k9125 
o|contracted procedure: k9134 
o|contracted procedure: k9144 
o|contracted procedure: k9152 
o|contracted procedure: k9174 
o|contracted procedure: k9171 
o|contracted procedure: k9155 
o|contracted procedure: k9164 
o|contracted procedure: k9184 
o|contracted procedure: k9186 
o|contracted procedure: k9233 
o|contracted procedure: k9197 
o|contracted procedure: k9230 
o|contracted procedure: k9203 
o|contracted procedure: k9206 
o|contracted procedure: k9200 
o|contracted procedure: k9214 
o|contracted procedure: k9227 
o|contracted procedure: k9221 
o|contracted procedure: k9224 
o|contracted procedure: k9212 
o|contracted procedure: k9244 
o|contracted procedure: k9296 
o|contracted procedure: k9248 
o|contracted procedure: k9257 
o|contracted procedure: k9260 
o|contracted procedure: k9263 
o|contracted procedure: k9271 
o|contracted procedure: k9279 
o|contracted procedure: k9269 
o|contracted procedure: k9284 
o|contracted procedure: k9314 
o|contracted procedure: k9325 
o|contracted procedure: k9339 
o|contracted procedure: k9363 
o|contracted procedure: k9360 
o|contracted procedure: k9345 
o|contracted procedure: k9357 
o|contracted procedure: k9351 
o|contracted procedure: k9354 
o|contracted procedure: k9348 
o|contracted procedure: k9342 
o|contracted procedure: k9441 
o|contracted procedure: k9376 
o|contracted procedure: k9386 
o|contracted procedure: k9383 
o|contracted procedure: k9392 
o|contracted procedure: k9394 
o|contracted procedure: k9418 
o|contracted procedure: k9415 
o|contracted procedure: k9412 
o|contracted procedure: k9409 
o|contracted procedure: k9424 
o|contracted procedure: k9430 
o|contracted procedure: k9427 
o|contracted procedure: k9432 
o|contracted procedure: k9451 
o|contracted procedure: k9467 
o|contracted procedure: k9482 
o|contracted procedure: k9494 
o|contracted procedure: k9510 
o|contracted procedure: k9500 
o|inlining procedure: k9473 
o|inlining procedure: k9473 
o|inlining procedure: k9473 
o|inlining procedure: k9473 
o|inlining procedure: k9473 
o|contracted procedure: k9516 
o|contracted procedure: k9698 
o|contracted procedure: k9695 
o|contracted procedure: k9692 
o|contracted procedure: k9689 
o|contracted procedure: k9528 
o|contracted procedure: k9672 
o|contracted procedure: k9678 
o|contracted procedure: k9675 
o|contracted procedure: k9669 
o|contracted procedure: k9534 
o|contracted procedure: k9531 
o|contracted procedure: k9525 
o|contracted procedure: k9545 
o|contracted procedure: k9548 
o|contracted procedure: k9663 
o|contracted procedure: k9550 
o|contracted procedure: k9636 
o|contracted procedure: k9648 
o|contracted procedure: k9645 
o|contracted procedure: k9639 
o|contracted procedure: k9642 
o|contracted procedure: k9558 
o|contracted procedure: k9564 
o|contracted procedure: k9570 
o|contracted procedure: k9573 
o|contracted procedure: k9585 
o|contracted procedure: k9582 
o|contracted procedure: k9597 
o|contracted procedure: k9609 
o|contracted procedure: k9606 
o|contracted procedure: k9600 
o|contracted procedure: k9603 
o|contracted procedure: k9594 
o|contracted procedure: k9615 
o|contracted procedure: k9627 
o|contracted procedure: k9624 
o|contracted procedure: k9618 
o|contracted procedure: k9621 
o|contracted procedure: k9633 
o|contracted procedure: k9657 
o|contracted procedure: k9711 
o|contracted procedure: k9714 
o|contracted procedure: k9723 
o|contracted procedure: k9733 
o|contracted procedure: k9747 
o|simplifications: ((let . 111)) 
o|removed binding forms: 925 
o|inlining procedure: k3559 
o|inlining procedure: k3559 
o|inlining procedure: k3596 
o|inlining procedure: k3596 
o|inlining procedure: k3791 
o|inlining procedure: k3791 
o|inlining procedure: k4014 
o|inlining procedure: k4014 
o|inlining procedure: k4044 
o|inlining procedure: k4044 
o|inlining procedure: k4387 
o|inlining procedure: k4387 
o|inlining procedure: k4433 
o|inlining procedure: k4433 
o|inlining procedure: k4433 
o|inlining procedure: k5470 
o|inlining procedure: k5470 
o|inlining procedure: k5500 
o|inlining procedure: k5500 
o|inlining procedure: k5640 
o|inlining procedure: k5640 
o|inlining procedure: k5726 
o|inlining procedure: k5726 
o|inlining procedure: k6235 
o|inlining procedure: k6235 
o|inlining procedure: k6720 
o|inlining procedure: k6720 
o|inlining procedure: k6750 
o|inlining procedure: k6750 
o|inlining procedure: k6780 
o|inlining procedure: k6780 
o|inlining procedure: k6810 
o|inlining procedure: k6810 
o|inlining procedure: k6951 
o|inlining procedure: k6951 
o|inlining procedure: k7285 
o|inlining procedure: k7285 
o|inlining procedure: k7315 
o|inlining procedure: k7315 
o|inlining procedure: k7351 
o|inlining procedure: k7351 
o|inlining procedure: k7381 
o|inlining procedure: k7381 
o|inlining procedure: k7411 
o|inlining procedure: k7411 
o|inlining procedure: k7451 
o|inlining procedure: k7451 
o|inlining procedure: k7670 
o|inlining procedure: k7670 
o|inlining procedure: k7767 
o|inlining procedure: k7767 
o|inlining procedure: k7836 
o|inlining procedure: k7836 
o|inlining procedure: k7902 
o|inlining procedure: k7902 
o|inlining procedure: k8093 
o|inlining procedure: k8093 
o|inlining procedure: k8441 
o|inlining procedure: k8441 
o|inlining procedure: k8471 
o|inlining procedure: k8471 
o|inlining procedure: k8501 
o|inlining procedure: k8501 
o|inlining procedure: k8531 
o|inlining procedure: k8531 
o|inlining procedure: k9067 
o|inlining procedure: k9067 
o|inlining procedure: k9097 
o|inlining procedure: k9097 
o|inlining procedure: k9127 
o|inlining procedure: k9127 
o|inlining procedure: k9157 
o|inlining procedure: k9157 
o|inlining procedure: k9266 
o|inlining procedure: k9266 
o|substituted constant variable: r947410932 
o|substituted constant variable: r947410933 
o|substituted constant variable: r947410934 
o|substituted constant variable: r947410935 
o|inlining procedure: k9588 
o|inlining procedure: k9588 
o|inlining procedure: k9716 
o|inlining procedure: k9716 
o|simplifications: ((let . 1)) 
o|replaced variables: 68 
o|removed binding forms: 4 
o|removed conditional forms: 4 
o|substituted constant variable: a355810940 
o|simplifications: ((if . 1)) 
o|replaced variables: 1 
o|removed binding forms: 121 
o|contracted procedure: k7074 
o|removed binding forms: 3 
o|customizable procedures: (map-loop2550 k9579 mapslots60 k9402 k9251 k9209 map-loop169186 map-loop196214 map-loop224242 map-loop275292 k9025 map-loop254299 loop330 k8963 map-loop311333 k8900 map-loop345369 k8858 map-loop381405 k8780 map-loop417441 k8738 map-loop453477 loop502 map-loop534551 map-loop561578 map-loop588606 map-loop616634 k8399 map-loop646665 k8357 map-loop677696 k8312 map-loop708732 map-loop775792 k8051 map-loop804828 for-each-loop844856 map-loop883900 loop908 map-loop920938 loop948 map-loop10041022 k7692 fold957 map-loop969987 map*872 append*871 fold1038 map-loop10561074 map-loop10841102 map-loop11161134 map-loop11431220 map-loop11661183 map-loop11921213 quotify-proc1242 k7076 k7085 fold1266 map-loop13211342 expand1299 map-loop13981415 map-loop14281446 map-loop14561473 map-loop14851503 recur1368 make-if-tree1362 recur1383 loop1551 map-loop15811602 genvars1573 k6016 build1638 k6063 map-loop16601679 loop1575 parse-clause1736 map-loop17921809 k5550 k5552 k5554 map-loop17561777 map-loop18361853 map-loop18651883 k5284 k5288 k5294 k5300 loop1890 loop1934 loop1963 k4621 loop20202044 k4701 loop20702090 loop20702100 map-loop21402160 k4277 k4156 loop22182238 loop22182253 map-loop22632281 map-loop22912309 k3865 loop2335 loop22348 map-loop23552380 k3761 k3708 map-loop23952419 map-loop24492471) 
o|calls to known targets: 298 
o|identified direct recursive calls: f_3820 1 
o|identified direct recursive calls: f_3655 1 
o|identified direct recursive calls: f_5490 2 
o|identified direct recursive calls: f_6740 2 
o|identified direct recursive calls: f_6800 2 
o|identified direct recursive calls: f_6995 3 
o|identified direct recursive calls: f_7488 1 
o|identified direct recursive calls: f_7529 1 
o|identified direct recursive calls: f_7856 1 
o|identified direct recursive calls: f_7892 2 
o|identified direct recursive calls: f_8491 2 
o|identified direct recursive calls: f_8521 2 
o|identified direct recursive calls: f_8997 1 
o|identified direct recursive calls: f_9057 2 
o|identified direct recursive calls: f_9147 2 
o|fast box initializations: 74 
*/
/* end of file */
