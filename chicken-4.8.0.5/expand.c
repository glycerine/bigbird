/* Generated from expand.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:47
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: expand.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file expand.c
   unit: expand
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[338];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,102,95,51,51,57,51,32,115,121,109,50,50,48,32,112,114,111,112,50,50,49,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,20),40,108,111,111,107,117,112,32,105,100,50,48,56,32,115,101,50,48,57,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,23),40,102,95,51,52,49,57,32,115,121,109,50,52,50,32,112,114,111,112,50,52,51,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,30),40,102,95,51,52,50,55,32,115,121,109,50,52,54,32,112,114,111,112,50,52,55,32,118,97,108,50,52,56,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,30),40,102,95,51,52,51,50,32,115,121,109,50,53,49,32,112,114,111,112,50,53,50,32,118,97,108,50,53,51,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,26),40,109,97,99,114,111,45,97,108,105,97,115,32,118,97,114,50,50,51,32,115,101,50,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,23),40,102,95,51,52,55,56,32,115,121,109,50,55,54,32,112,114,111,112,50,55,55,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,23),40,102,95,51,52,56,51,32,115,121,109,50,56,54,32,112,114,111,112,50,56,55,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,50,57,52,32,105,50,57,54,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,11),40,119,97,108,107,32,120,50,54,55,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,115,116,114,105,112,45,115,121,110,116,97,120,32,101,120,112,50,54,52,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,23),40,102,95,51,53,56,55,32,115,121,109,51,54,49,32,112,114,111,112,51,54,50,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,30),40,102,95,51,53,57,50,32,115,121,109,51,54,53,32,112,114,111,112,51,54,54,32,118,97,108,51,54,55,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,24),40,102,95,51,53,56,53,32,97,108,105,97,115,51,53,54,32,115,121,109,51,53,55,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,18),40,102,95,51,54,49,50,32,120,52,48,48,32,121,52,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,56,49,32,103,51,57,51,52,48,51,32,103,51,57,52,52,48,52,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,34),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,52,52,32,103,51,53,49,51,55,50,32,103,51,53,50,51,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,49,56,32,103,51,51,48,51,51,54,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,101,120,116,101,110,100,45,115,101,32,115,101,51,48,56,32,118,97,114,115,51,48,57,32,46,32,116,109,112,51,48,55,51,49,48,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,23),40,102,95,51,55,52,57,32,115,121,109,52,50,53,32,112,114,111,112,52,50,54,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,13),40,102,95,51,55,53,55,32,97,52,50,57,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,101,52,51,49,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,49,32,115,121,109,52,49,55,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,103,108,111,98,97,108,105,122,101,32,115,121,109,52,49,52,32,115,101,52,49,53,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,101,110,115,117,114,101,45,116,114,97,110,115,102,111,114,109,101,114,32,116,52,52,55,32,46,32,116,109,112,52,52,54,52,52,56,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,102,95,51,56,54,57,32,97,52,55,48,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,61),40,35,35,115,121,115,35,101,120,116,101,110,100,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,52,53,56,32,115,101,52,53,57,32,116,114,97,110,115,102,111,114,109,101,114,52,54,48,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,99,111,112,121,45,109,97,99,114,111,32,111,108,100,52,55,54,32,110,101,119,52,55,55,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,109,97,99,114,111,63,32,115,121,109,52,56,53,32,46,32,116,109,112,52,56,52,52,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,109,101,53,48,48,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,110,114,101,103,105,115,116,101,114,45,109,97,99,114,111,32,110,97,109,101,52,57,56,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,117,110,100,101,102,105,110,101,45,109,97,99,114,111,33,32,110,97,109,101,53,48,55,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,99,111,112,121,32,112,115,53,51,51,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,49,50,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,14),40,102,95,52,48,48,55,32,101,120,53,51,48,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,17),40,102,95,52,49,50,52,32,105,110,112,117,116,53,52,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,8),40,102,95,52,49,51,48,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,102,95,52,49,51,53,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,8),40,102,95,52,49,52,48,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,57,56,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,8),40,102,95,52,49,53,50,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,21),40,102,95,52,49,52,55,32,46,32,97,114,103,115,53,50,52,53,53,54,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,57,54,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,102,95,52,48,48,50,32,107,53,50,51,53,50,57,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,52),40,99,97,108,108,45,104,97,110,100,108,101,114,32,110,97,109,101,53,49,52,32,104,97,110,100,108,101,114,53,49,53,32,101,120,112,53,49,54,32,115,101,53,49,55,32,99,115,53,49,56,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,31),40,101,120,112,97,110,100,32,104,101,97,100,53,53,57,32,101,120,112,53,54,48,32,109,100,101,102,53,54,49,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,13),40,102,95,52,51,48,54,32,98,54,49,48,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,50,48,32,103,54,51,50,54,51,56,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,57,51,32,103,54,48,53,54,49,50,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,14),40,102,95,52,51,53,54,32,99,115,54,53,53,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,23),40,102,95,52,51,57,52,32,115,121,109,54,53,49,32,112,114,111,112,54,53,50,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,101,120,112,53,54,57,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,101,120,112,97,110,100,45,48,32,101,120,112,53,48,57,32,100,115,101,53,49,48,32,99,115,63,53,49,49,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,8),40,102,95,52,52,52,49,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,33),40,102,95,52,52,52,54,32,101,120,112,50,54,56,55,54,56,56,54,57,49,32,109,54,56,57,54,57,48,54,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,101,120,112,54,56,54,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,101,120,112,97,110,100,32,101,120,112,54,55,51,32,46,32,116,109,112,54,55,50,54,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,108,108,105,115,116,55,48,48,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,63,32,108,108,105,115,116,54,57,56,41,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,12),40,101,114,114,32,109,115,103,55,50,50,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,13),40,102,95,52,54,57,48,32,107,55,54,51,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,52,54,32,103,55,53,56,55,55,53,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,44),40,108,111,111,112,32,109,111,100,101,55,51,50,32,114,101,113,55,51,51,32,111,112,116,55,51,52,32,107,101,121,55,51,53,32,108,108,105,115,116,55,51,54,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,67),40,35,35,115,121,115,35,101,120,112,97,110,100,45,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,55,49,54,32,98,111,100,121,55,49,55,32,101,114,114,104,55,49,56,32,115,101,55,49,57,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,100,101,102,106,97,109,45,101,114,114,111,114,32,102,111,114,109,56,51,56,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,17),40,99,111,109,112,32,115,56,54,52,32,105,100,56,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,98,111,100,121,50,56,56,50,32,101,120,112,115,56,56,51,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,13),40,102,95,53,50,52,51,32,118,57,49,54,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,18),40,102,95,53,50,54,49,32,118,57,52,53,32,120,57,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,102,95,53,50,57,52,32,118,49,48,51,52,32,116,49,48,51,53,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,48,49,53,32,103,49,48,50,55,49,48,52,48,32,103,49,48,50,56,49,48,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,22),40,109,97,112,45,108,111,111,112,57,56,54,32,103,57,57,56,49,48,48,52,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,19),40,102,95,53,50,55,52,32,118,115,57,56,49,32,120,57,56,50,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,31),40,109,97,112,45,108,111,111,112,57,54,50,32,103,57,55,52,49,48,53,48,32,103,57,55,53,49,48,53,49,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,57,50,54,32,103,57,51,56,57,53,49,32,103,57,51,57,57,53,50,41,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,57,57,32,103,57,49,49,57,49,56,41,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,48),40,102,105,110,105,32,118,97,114,115,56,55,53,32,118,97,108,115,56,55,54,32,109,118,97,114,115,56,55,55,32,109,118,97,108,115,56,55,56,32,98,111,100,121,56,55,57,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,55,57,32,103,49,48,57,49,49,48,57,55,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,33),40,108,111,111,112,32,98,111,100,121,49,48,54,56,32,100,101,102,115,49,48,54,57,32,100,111,110,101,49,48,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,60),40,102,105,110,105,47,115,121,110,116,97,120,32,118,97,114,115,49,48,54,50,32,118,97,108,115,49,48,54,51,32,109,118,97,114,115,49,48,54,52,32,109,118,97,108,115,49,48,54,53,32,98,111,100,121,49,48,54,54,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,120,49,49,51,50,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,53),40,108,111,111,112,32,98,111,100,121,49,49,49,54,32,118,97,114,115,49,49,49,55,32,118,97,108,115,49,49,49,56,32,109,118,97,114,115,49,49,49,57,32,109,118,97,108,115,49,49,50,48,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,17),40,101,120,112,97,110,100,32,98,111,100,121,49,49,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,45),40,35,35,115,121,115,35,99,97,110,111,110,105,99,97,108,105,122,101,45,98,111,100,121,32,98,111,100,121,56,52,56,32,46,32,116,109,112,56,52,55,56,52,57,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,14),40,102,95,53,57,53,49,32,97,49,49,55,54,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,19),40,109,119,97,108,107,32,120,49,49,54,52,32,112,49,49,54,53,41,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,43),40,109,97,116,99,104,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,49,49,53,56,32,112,97,116,49,49,53,57,32,118,97,114,115,49,49,54,48,41,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,104,101,97,100,49,49,56,54,32,98,111,100,121,49,49,56,55,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,101,120,112,97,110,100,45,99,117,114,114,105,101,100,45,100,101,102,105,110,101,32,104,101,97,100,49,49,56,49,32,98,111,100,121,49,49,56,50,32,115,101,49,49,56,51,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,115,121,110,116,97,120,45,101,114,114,111,114,45,104,111,111,107,32,46,32,97,114,103,115,49,50,48,49,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,16),40,111,117,116,115,116,114,32,115,116,114,49,50,49,56,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,49,50,51,53,41,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,100,101,102,115,49,50,48,56,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,99,120,49,50,50,48,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,121,110,116,97,120,45,101,114,114,111,114,47,99,111,110,116,101,120,116,32,109,115,103,49,50,48,51,32,97,114,103,49,50,48,52,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,115,121,110,116,97,120,45,114,117,108,101,115,45,109,105,115,109,97,116,99,104,32,105,110,112,117,116,49,50,52,57,41,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,15),40,102,95,54,50,56,57,32,112,108,49,50,54,51,41,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,26),40,103,101,116,45,108,105,110,101,45,110,117,109,98,101,114,32,115,101,120,112,49,50,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,29),40,116,101,115,116,32,120,49,50,57,48,32,112,114,101,100,49,50,57,49,32,109,115,103,49,50,57,50,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,13),40,101,114,114,32,109,115,103,49,50,57,51,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,120,49,51,48,49,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,108,97,109,98,100,97,45,108,105,115,116,63,32,120,49,50,57,54,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,20),40,112,114,111,112,101,114,45,108,105,115,116,63,32,120,49,51,49,50,41,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,51,51,53,32,120,49,51,51,55,32,110,49,51,51,56,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,14),40,102,95,54,54,50,57,32,121,49,51,52,57,41,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,120,49,51,50,51,32,112,49,51,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,57),40,35,35,115,121,115,35,99,104,101,99,107,45,115,121,110,116,97,120,32,105,100,49,50,55,50,32,101,120,112,49,50,55,51,32,112,97,116,49,50,55,52,32,46,32,116,109,112,49,50,55,49,49,50,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,14),40,102,95,54,55,57,48,32,97,49,51,55,57,41,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,25),40,102,95,54,56,49,53,32,115,121,109,49,51,57,56,32,112,114,111,112,49,51,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,25),40,102,95,54,56,52,51,32,115,121,109,49,52,48,50,32,112,114,111,112,49,52,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,14),40,102,95,54,56,48,53,32,97,49,51,56,54,41,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,16),40,114,101,110,97,109,101,32,115,121,109,49,51,55,49,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,52,51,52,32,105,49,52,51,54,32,102,49,52,51,55,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,25),40,102,95,54,57,55,51,32,115,121,109,49,52,53,48,32,112,114,111,112,49,52,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,25),40,102,95,54,57,56,49,32,115,121,109,49,52,54,48,32,112,114,111,112,49,52,54,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,25),40,102,95,55,48,48,53,32,115,121,109,49,52,55,55,32,112,114,111,112,49,52,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,25),40,102,95,55,48,49,52,32,115,121,109,49,52,56,52,32,112,114,111,112,49,52,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,14),40,102,95,55,48,50,55,32,97,49,52,56,57,41,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,14),40,102,95,55,48,53,49,32,97,49,52,57,55,41,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,23),40,99,111,109,112,97,114,101,32,115,49,49,52,50,51,32,115,50,49,52,50,52,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,20),40,97,115,115,113,45,114,101,118,101,114,115,101,32,108,49,53,48,57,41,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,14),40,102,95,55,49,54,56,32,97,49,53,50,53,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,25),40,102,95,55,50,48,48,32,115,121,109,49,53,51,56,32,112,114,111,112,49,53,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,17),40,102,95,55,50,48,56,32,110,97,109,101,49,53,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,23),40,109,105,114,114,111,114,45,114,101,110,97,109,101,32,115,121,109,49,53,49,51,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,32),40,102,95,54,55,51,56,32,102,111,114,109,49,51,54,50,32,115,101,49,51,54,51,32,100,115,101,49,51,54,52,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,59),40,109,97,107,101,45,101,114,47,105,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,51,54,48,32,101,120,112,108,105,99,105,116,45,114,101,110,97,109,105,110,103,63,49,51,54,49,41,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,101,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,53,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,105,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,53,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,33),40,102,95,55,50,54,51,32,115,121,109,49,53,55,57,32,112,114,111,112,49,53,56,48,32,118,97,108,49,53,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,14),40,102,95,55,50,54,49,32,97,49,53,55,54,41,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,54,54,32,103,49,53,55,51,49,53,56,51,41,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,109,97,114,107,45,112,114,105,109,105,116,105,118,101,32,112,114,105,109,115,49,53,54,51,41};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,14),40,102,95,55,52,54,49,32,120,50,50,55,57,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,50,56,54,32,103,50,50,57,56,50,51,48,52,41};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,18),40,102,95,55,52,54,55,32,114,117,108,101,115,50,50,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,14),40,102,95,55,53,55,51,32,120,50,51,49,56,41,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,17),40,102,95,55,53,52,50,32,114,117,108,101,50,51,49,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,48),40,102,95,55,53,57,57,32,105,110,112,117,116,50,51,49,57,32,112,97,116,116,101,114,110,50,51,50,48,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,51,50,49,41};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,30),40,102,95,55,55,53,49,32,105,110,112,117,116,50,51,53,56,32,112,97,116,116,101,114,110,50,51,53,57,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,14),40,102,95,55,57,48,49,32,120,50,51,55,57,41,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,57),40,102,95,55,56,53,48,32,112,97,116,116,101,114,110,50,51,54,55,32,112,97,116,104,50,51,54,56,32,109,97,112,105,116,50,51,54,57,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,51,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,50,52,49,55,32,100,50,52,49,57,32,103,101,110,50,52,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,37),40,102,95,55,57,55,49,32,116,101,109,112,108,97,116,101,50,51,57,53,32,100,105,109,50,51,57,54,32,101,110,118,50,51,57,55,41,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,55),40,102,95,56,49,52,50,32,112,97,116,116,101,114,110,50,52,51,55,32,100,105,109,50,52,51,56,32,118,97,114,115,50,52,51,57,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,52,52,48,41,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,46),40,102,95,56,50,49,50,32,116,101,109,112,108,97,116,101,50,52,52,52,32,100,105,109,50,52,52,53,32,101,110,118,50,52,52,54,32,102,114,101,101,50,52,52,55,41,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,32),40,102,95,56,50,57,51,32,112,50,52,53,52,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,52,53,53,41};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,20),40,102,95,56,51,50,48,32,112,97,116,116,101,114,110,50,52,54,48,41,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,20),40,102,95,56,51,52,51,32,112,97,116,116,101,114,110,50,52,54,51,41,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,112,97,116,116,101,114,110,50,52,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,20),40,102,95,56,51,54,49,32,112,97,116,116,101,114,110,50,52,54,52,41,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,79),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,115,121,110,116,97,120,45,114,117,108,101,115,32,101,108,108,105,112,115,105,115,50,50,50,50,32,114,117,108,101,115,50,50,50,51,32,115,117,98,107,101,121,119,111,114,100,115,50,50,50,52,32,114,50,50,50,53,32,99,50,50,50,54,41,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,109,101,50,53,51,55,41,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,109,97,99,114,111,45,115,117,98,115,101,116,32,109,101,48,50,53,50,56,32,46,32,116,109,112,50,53,50,55,50,53,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,17),40,102,95,56,52,53,48,32,115,100,101,102,50,53,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,53,56,32,103,50,53,54,53,50,53,55,48,41,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,102,105,120,117,112,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,115,101,50,53,52,56,32,46,32,116,109,112,50,53,52,55,50,53,52,57,41,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,28),40,102,95,56,53,51,50,32,101,120,112,50,50,49,48,32,114,50,50,49,49,32,99,50,50,49,50,41,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,26),40,102,95,56,53,54,51,32,120,50,50,48,52,32,114,50,50,48,53,32,99,50,50,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,26),40,102,95,56,53,56,52,32,120,50,49,57,51,32,114,50,49,57,52,32,99,50,49,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,26),40,102,95,56,54,48,56,32,120,50,49,53,56,32,114,50,49,53,57,32,99,50,49,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,26),40,102,95,56,55,53,55,32,120,50,49,53,49,32,114,50,49,53,50,32,99,50,49,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,26),40,102,95,56,55,54,56,32,120,50,49,52,52,32,114,50,49,52,53,32,99,50,49,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,11),40,101,114,114,32,120,50,48,55,50,41,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,13),40,116,101,115,116,32,102,120,50,48,55,51,41,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,14),40,102,95,56,57,51,57,32,120,50,49,50,48,41,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,49,48,51,32,103,50,49,49,53,50,49,50,50,41};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,16),40,101,120,112,97,110,100,32,99,108,115,50,48,57,55,41};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,29),40,102,95,56,55,55,57,32,102,111,114,109,50,48,54,50,32,114,50,48,54,51,32,99,50,48,54,52,41,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,29),40,102,95,57,48,52,49,32,102,111,114,109,50,48,53,53,32,114,50,48,53,54,32,99,50,48,53,55,41,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,120,49,57,56,53,32,110,49,57,56,54,41,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,19),40,119,97,108,107,49,32,120,49,57,56,55,32,110,49,57,56,56,41,0,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,16),40,102,95,57,50,50,53,32,101,110,118,50,48,51,53,41};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,16),40,102,95,57,50,52,54,32,101,110,118,50,48,52,50,41};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,16),40,102,95,57,50,56,53,32,101,110,118,50,48,53,48,41};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,16),40,115,105,109,112,108,105,102,121,32,120,50,48,50,55,41};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,29),40,102,95,57,48,53,56,32,102,111,114,109,49,57,55,54,32,114,49,57,55,55,32,99,49,57,55,56,41,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,14),40,102,95,57,51,50,52,32,98,49,57,51,51,41,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,14),40,102,95,57,51,54,53,32,98,49,57,54,55,41,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,53,48,32,103,49,57,54,50,49,57,54,57,41};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,49,54,32,103,49,57,50,56,49,57,51,53,41};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,29),40,102,95,57,51,48,55,32,102,111,114,109,49,57,48,52,32,114,49,57,48,53,32,99,49,57,48,54,41,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,15),40,101,120,112,97,110,100,32,98,115,49,56,57,53,41,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,29),40,102,95,57,52,54,57,32,102,111,114,109,49,56,56,57,32,114,49,56,57,48,32,99,49,56,57,49,41,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,14),40,102,95,57,53,57,48,32,120,49,56,55,53,41,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,53,56,32,103,49,56,55,48,49,56,56,48,41};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,56,52,48,32,101,108,115,101,63,49,56,52,49,41,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,29),40,102,95,57,53,49,51,32,102,111,114,109,49,56,50,55,32,114,49,56,50,56,32,99,49,56,50,57,41,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,55,57,54,32,101,108,115,101,63,49,55,57,55,41,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,29),40,102,95,57,54,52,54,32,102,111,114,109,49,55,56,56,32,114,49,55,56,57,32,99,49,55,57,48,41,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,29),40,102,95,57,56,50,51,32,102,111,114,109,49,55,55,56,32,114,49,55,55,57,32,99,49,55,56,48,41,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,29),40,102,95,57,56,54,54,32,102,111,114,109,49,55,54,57,32,114,49,55,55,48,32,99,49,55,55,49,41,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,26),40,102,95,57,56,57,56,32,120,49,55,53,52,32,114,49,55,53,53,32,99,49,55,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,26),40,102,95,57,57,51,53,32,120,49,55,52,55,32,114,49,55,52,56,32,99,49,55,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,26),40,102,95,57,57,52,57,32,120,49,55,52,48,32,114,49,55,52,49,32,99,49,55,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,26),40,102,95,57,57,54,51,32,120,49,55,51,51,32,114,49,55,51,52,32,99,49,55,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,26),40,102,95,57,57,55,55,32,120,49,55,50,53,32,114,49,55,50,54,32,99,49,55,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,26),40,102,95,49,48,48,50,55,32,115,121,109,49,55,49,48,32,112,114,111,112,49,55,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,30),40,102,95,49,48,48,49,49,32,102,111,114,109,49,54,57,54,32,114,49,54,57,55,32,99,49,54,57,56,41,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,26),40,102,95,49,48,49,50,49,32,115,121,109,49,54,56,49,32,112,114,111,112,49,54,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,102,111,114,109,49,54,54,57,41,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,48,57,56,32,120,49,54,54,53,32,114,49,54,54,54,32,99,49,54,54,55,41,0,0,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,50,48,49,32,120,49,54,53,56,32,114,49,54,53,57,32,99,49,54,54,48,41,0,0,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,50,49,53,32,120,49,54,53,49,32,114,49,54,53,50,32,99,49,54,53,51,41,0,0,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,50,50,57,32,120,49,54,52,52,32,114,49,54,52,53,32,99,49,54,52,54,41,0,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,50,52,51,32,120,49,54,51,55,32,114,49,54,51,56,32,99,49,54,51,57,41,0,0,0,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,27),40,102,95,49,48,50,53,55,32,120,49,54,51,48,32,114,49,54,51,49,32,99,49,54,51,50,41,0,0,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,51),40,102,95,49,48,50,55,49,32,103,49,54,49,56,49,54,49,57,49,54,50,52,32,103,49,54,50,48,49,54,50,49,49,54,50,53,32,103,49,54,50,50,49,54,50,51,49,54,50,54,41,0,0,0,0,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,51),40,102,95,49,48,50,56,48,32,103,49,54,48,52,49,54,48,53,49,54,49,48,32,103,49,54,48,54,49,54,48,55,49,54,49,49,32,103,49,54,48,56,49,54,48,57,49,54,49,50,41,0,0,0,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,51),40,102,95,49,48,50,56,57,32,103,49,53,57,48,49,53,57,49,49,53,57,54,32,103,49,53,57,50,49,53,57,51,49,53,57,55,32,103,49,53,57,52,49,53,57,53,49,53,57,56,41,0,0,0,0,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_3487)
static void C_ccall f_3487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5261)
static void C_ccall f_5261(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8527)
static void C_ccall f_8527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8521)
static void C_ccall f_8521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8524)
static void C_ccall f_8524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7394)
static void C_ccall f_7394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9672)
static void C_ccall f_9672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7390)
static void C_ccall f_7390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4744)
static void C_fcall f_4744(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9678)
static void C_ccall f_9678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7349)
static void C_ccall f_7349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8582)
static void C_ccall f_8582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5251)
static void C_ccall f_5251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9305)
static void C_ccall f_9305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9307)
static void C_ccall f_9307(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9644)
static void C_ccall f_9644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7341)
static void C_ccall f_7341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9646)
static void C_ccall f_9646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7343)
static void C_ccall f_7343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7345)
static void C_ccall f_7345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7347)
static void C_ccall f_7347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4527)
static void C_ccall f_4527(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8196)
static void C_ccall f_8196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9692)
static void C_ccall f_9692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9690)
static void C_ccall f_9690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9695)
static void C_ccall f_9695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9310)
static void C_ccall f_9310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7375)
static void C_ccall f_7375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6401)
static void C_ccall f_6401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4769)
static void C_ccall f_4769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9319)
static void C_ccall f_9319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9660)
static void C_fcall f_9660(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6417)
static C_word C_fcall f_6417(C_word t0);
C_noret_decl(f_8179)
static void C_ccall f_8179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4531)
static void C_fcall f_4531(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8801)
static void C_fcall f_8801(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9436)
static void C_fcall f_9436(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5243)
static void C_ccall f_5243(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6437)
static void C_fcall f_6437(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9655)
static void C_ccall f_9655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9653)
static void C_ccall f_9653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9651)
static void C_ccall f_9651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4552)
static void C_ccall f_4552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4557)
static void C_fcall f_4557(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8167)
static void C_ccall f_8167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8142)
static void C_ccall f_8142(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5376)
static void C_ccall f_5376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8028)
static void C_ccall f_8028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8026)
static void C_fcall f_8026(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8024)
static void C_ccall f_8024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8134)
static void C_ccall f_8134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9461)
static void C_ccall f_9461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9467)
static void C_ccall f_9467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9469)
static void C_ccall f_9469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8013)
static void C_ccall f_8013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9472)
static void C_ccall f_9472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5533)
static void C_fcall f_5533(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9481)
static void C_fcall f_9481(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8067)
static void C_fcall f_8067(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8048)
static void C_fcall f_8048(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8046)
static void C_ccall f_8046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8040)
static void C_ccall f_8040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4742)
static void C_ccall f_4742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4410)
static void C_ccall f_4410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3552)
static void C_fcall f_3552(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5394)
static void C_fcall f_5394(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5383)
static void C_fcall f_5383(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5381)
static void C_ccall f_5381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8790)
static void C_ccall f_8790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8792)
static void C_fcall f_8792(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6285)
static void C_ccall f_6285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9947)
static void C_ccall f_9947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9949)
static void C_ccall f_9949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6289)
static void C_ccall f_6289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8343)
static void C_ccall f_8343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9952)
static void C_ccall f_9952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9920)
static void C_ccall f_9920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8706)
static void C_fcall f_8706(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4435)
static void C_fcall f_4435(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5346)
static void C_fcall f_5346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8377)
static void C_ccall f_8377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5512)
static void C_fcall f_5512(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5510)
static void C_ccall f_5510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8370)
static void C_fcall f_8370(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5503)
static void C_fcall f_5503(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8356)
static void C_ccall f_8356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8350)
static void C_ccall f_8350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8007)
static void C_ccall f_8007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8009)
static void C_ccall f_8009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6266)
static void C_ccall f_6266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8361)
static void C_ccall f_8361(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9365)
static void C_ccall f_9365(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7299)
static void C_ccall f_7299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9340)
static void C_ccall f_9340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7279)
static void C_fcall f_7279(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9357)
static void C_fcall f_9357(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7250)
static void C_ccall f_7250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7258)
static void C_ccall f_7258(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7236)
static void C_ccall f_7236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7233)
static void C_ccall f_7233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7263)
static void C_ccall f_7263(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7261)
static void C_ccall f_7261(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3702)
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7244)
static void C_ccall f_7244(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3384)
static void C_fcall f_3384(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9513)
static void C_ccall f_9513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9516)
static void C_ccall f_9516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9511)
static void C_ccall f_9511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9522)
static void C_ccall f_9522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9524)
static void C_ccall f_9524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9526)
static void C_ccall f_9526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9528)
static void C_ccall f_9528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3402)
static void C_fcall f_3402(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8832)
static void C_ccall f_8832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3411)
static void C_fcall f_3411(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8849)
static void C_ccall f_8849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6738)
static void C_ccall f_6738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6732)
static void C_ccall f_6732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9503)
static void C_ccall f_9503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9183)
static void C_ccall f_9183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_fcall f_5315(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9189)
static void C_ccall f_9189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4645)
static void C_ccall f_4645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8814)
static void C_ccall f_8814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_fcall f_3662(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5304)
static void C_fcall f_5304(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3436)
static void C_ccall f_3436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6759)
static void C_ccall f_6759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6756)
static void C_ccall f_6756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5332)
static void C_ccall f_5332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7706)
static void C_ccall f_7706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8882)
static void C_ccall f_8882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_fcall f_3461(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6741)
static void C_ccall f_6741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6743)
static void C_ccall f_6743(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4902)
static void C_fcall f_4902(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8868)
static void C_ccall f_8868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7971)
static void C_ccall f_7971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9130)
static void C_ccall f_9130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_expand_toplevel)
C_externexport void C_ccall C_expand_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9139)
static void C_ccall f_9139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5203)
static void C_ccall f_5203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9118)
static void C_ccall f_9118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9110)
static void C_ccall f_9110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7723)
static void C_fcall f_7723(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7712)
static void C_ccall f_7712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9416)
static void C_ccall f_9416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4984)
static void C_fcall f_4984(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7495)
static void C_ccall f_7495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9602)
static void C_ccall f_9602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9604)
static void C_fcall f_9604(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6220)
static void C_ccall f_6220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6225)
static void C_fcall f_6225(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9285)
static void C_ccall f_9285(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9281)
static void C_ccall f_9281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7751)
static void C_ccall f_7751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7755)
static void C_ccall f_7755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9629)
static void C_ccall f_9629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9296)
static void C_ccall f_9296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7204)
static void C_ccall f_7204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7208)
static void C_ccall f_7208(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7200)
static void C_ccall f_7200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4828)
static void C_fcall f_4828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5170)
static void C_fcall f_5170(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7437)
static void C_ccall f_7437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7430)
static void C_ccall f_7430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9977)
static void C_ccall f_9977(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9975)
static void C_ccall f_9975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7425)
static void C_ccall f_7425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7421)
static void C_ccall f_7421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7417)
static void C_ccall f_7417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7413)
static void C_ccall f_7413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4816)
static void C_ccall f_4816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9858)
static void C_ccall f_9858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9938)
static void C_ccall f_9938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9935)
static void C_ccall f_9935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9933)
static void C_ccall f_9933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9201)
static void C_ccall f_9201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9204)
static void C_ccall f_9204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10201)
static void C_ccall f_10201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10204)
static void C_ccall f_10204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9988)
static void C_fcall f_9988(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9980)
static void C_ccall f_9980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9217)
static void C_fcall f_9217(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5158)
static void C_fcall f_5158(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_10215)
static void C_ccall f_10215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10213)
static void C_ccall f_10213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10218)
static void C_ccall f_10218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9225)
static void C_ccall f_9225(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9221)
static void C_ccall f_9221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9966)
static void C_ccall f_9966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9963)
static void C_ccall f_9963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9961)
static void C_ccall f_9961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5197)
static void C_ccall f_5197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5194)
static void C_ccall f_5194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7409)
static void C_ccall f_7409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7405)
static void C_ccall f_7405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10260)
static void C_ccall f_10260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10269)
static void C_ccall f_10269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4021)
static void C_fcall f_4021(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10271)
static void C_ccall f_10271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8907)
static void C_ccall f_8907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10278)
static void C_ccall f_10278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4051)
static void C_fcall f_4051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9901)
static void C_ccall f_9901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10280)
static void C_ccall f_10280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10287)
static void C_ccall f_10287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10289)
static void C_ccall f_10289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8974)
static void C_ccall f_8974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8737)
static void C_ccall f_8737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8749)
static void C_ccall f_8749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5093)
static void C_fcall f_5093(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9174)
static void C_ccall f_9174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7660)
static void C_ccall f_7660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7663)
static void C_ccall f_7663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7666)
static void C_ccall f_7666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6208)
static void C_ccall f_6208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8779)
static void C_ccall f_8779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8777)
static void C_ccall f_8777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9148)
static void C_ccall f_9148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3790)
static void C_fcall f_3790(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8784)
static void C_ccall f_8784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4864)
static void C_fcall f_4864(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8788)
static void C_ccall f_8788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8786)
static void C_ccall f_8786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9157)
static void C_ccall f_9157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_fcall f_4862(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9056)
static void C_ccall f_9056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9058)
static void C_ccall f_9058(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8755)
static void C_ccall f_8755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8757)
static void C_ccall f_8757(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6081)
static void C_ccall f_6081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6086)
static void C_fcall f_6086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3774)
static void C_fcall f_3774(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9061)
static void C_ccall f_9061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9063)
static void C_ccall f_9063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9065)
static void C_ccall f_9065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9067)
static void C_fcall f_9067(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8766)
static void C_ccall f_8766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8768)
static void C_ccall f_8768(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3741)
static void C_fcall f_3741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6363)
static void C_fcall f_6363(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9074)
static void C_ccall f_9074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9076)
static void C_fcall f_9076(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5085)
static void C_ccall f_5085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10039)
static void C_ccall f_10039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10037)
static void C_ccall f_10037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10031)
static void C_ccall f_10031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10048)
static void C_ccall f_10048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9092)
static void C_ccall f_9092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3631)
static void C_fcall f_3631(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9165)
static void C_ccall f_9165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10059)
static void C_ccall f_10059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10057)
static void C_ccall f_10057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10054)
static void C_ccall f_10054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10061)
static void C_ccall f_10061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10063)
static void C_ccall f_10063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6068)
static void C_ccall f_6068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5812)
static void C_ccall f_5812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9041)
static void C_ccall f_9041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9044)
static void C_ccall f_9044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3620)
static void C_fcall f_3620(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6070)
static void C_ccall f_6070(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10096)
static void C_ccall f_10096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10098)
static void C_ccall f_10098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4188)
static void C_ccall f_4188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7442)
static void C_ccall f_7442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7446)
static void C_ccall f_7446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7891)
static void C_ccall f_7891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9089)
static void C_ccall f_9089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10229)
static void C_ccall f_10229(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10227)
static void C_ccall f_10227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6382)
static void C_ccall f_6382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4352)
static void C_ccall f_4352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10232)
static void C_ccall f_10232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9242)
static void C_ccall f_9242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9246)
static void C_ccall f_9246(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8118)
static void C_ccall f_8118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8115)
static void C_ccall f_8115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10243)
static void C_ccall f_10243(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10241)
static void C_ccall f_10241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10246)
static void C_ccall f_10246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4306)
static void C_ccall f_4306(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10257)
static void C_ccall f_10257(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10255)
static void C_ccall f_10255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7489)
static void C_ccall f_7489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10009)
static void C_ccall f_10009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4163)
static void C_fcall f_4163(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6343)
static void C_ccall f_6343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6349)
static void C_ccall f_6349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7162)
static void C_ccall f_7162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7461)
static void C_ccall f_7461(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7467)
static void C_ccall f_7467(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6351)
static void C_ccall f_6351(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10011)
static void C_ccall f_10011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6355)
static void C_ccall f_6355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7154)
static void C_ccall f_7154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7151)
static void C_ccall f_7151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7168)
static void C_ccall f_7168(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10024)
static void C_ccall f_10024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10026)
static void C_ccall f_10026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10027)
static void C_ccall f_10027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7450)
static void C_ccall f_7450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7454)
static void C_ccall f_7454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7459)
static void C_ccall f_7459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5938)
static void C_fcall f_5938(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5934)
static void C_fcall f_5934(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7966)
static void C_ccall f_7966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7135)
static void C_ccall f_7135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7941)
static void C_ccall f_7941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7132)
static void C_ccall f_7132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8429)
static void C_ccall f_8429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5988)
static void C_ccall f_5988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8409)
static void C_ccall f_8409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8403)
static void C_ccall f_8403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7901)
static void C_ccall f_7901(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10171)
static void C_ccall f_10171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3950)
static void C_fcall f_3950(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6849)
static void C_ccall f_6849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6843)
static void C_ccall f_6843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7073)
static void C_ccall f_7073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4035)
static void C_fcall f_4035(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6863)
static void C_ccall f_6863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10155)
static void C_ccall f_10155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10152)
static void C_ccall f_10152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6877)
static void C_ccall f_6877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6801)
static void C_ccall f_6801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_fcall f_3989(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_10169)
static void C_ccall f_10169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6805)
static void C_ccall f_6805(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9022)
static void C_ccall f_9022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10163)
static void C_ccall f_10163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9039)
static void C_ccall f_9039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10133)
static void C_ccall f_10133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10131)
static void C_ccall f_10131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6819)
static void C_ccall f_6819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6815)
static void C_ccall f_6815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9788)
static void C_ccall f_9788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10146)
static void C_ccall f_10146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6824)
static void C_ccall f_6824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6822)
static void C_ccall f_6822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7630)
static void C_ccall f_7630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10125)
static void C_ccall f_10125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10101)
static void C_ccall f_10101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8411)
static void C_fcall f_8411(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9896)
static void C_ccall f_9896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9898)
static void C_ccall f_9898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9893)
static void C_ccall f_9893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9746)
static void C_ccall f_9746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9748)
static void C_ccall f_9748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10106)
static void C_fcall f_10106(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4204)
static void C_fcall f_4204(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9006)
static void C_ccall f_9006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7063)
static void C_ccall f_7063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7068)
static void C_ccall f_7068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9821)
static void C_ccall f_9821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9823)
static void C_ccall f_9823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7051)
static void C_ccall f_7051(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6952)
static void C_ccall f_6952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6303)
static void C_ccall f_6303(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6303)
static void C_ccall f_6303r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_8320)
static void C_ccall f_8320(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6315)
static void C_fcall f_6315(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9843)
static void C_ccall f_9843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6327)
static void C_fcall f_6327(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9732)
static void C_ccall f_9732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_fcall f_4264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7039)
static void C_ccall f_7039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6322)
static void C_ccall f_6322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6337)
static void C_ccall f_6337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9866)
static void C_ccall f_9866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9864)
static void C_ccall f_9864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7095)
static C_word C_fcall f_7095(C_word t0,C_word t1);
C_noret_decl(f_10199)
static void C_ccall f_10199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9769)
static void C_ccall f_9769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5467)
static void C_fcall f_5467(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8939)
static void C_ccall f_8939(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8949)
static void C_fcall f_8949(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8947)
static void C_ccall f_8947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8484)
static void C_ccall f_8484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8486)
static void C_fcall f_8486(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10121)
static void C_ccall f_10121(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10120)
static void C_ccall f_10120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8913)
static void C_ccall f_8913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8927)
static void C_fcall f_8927(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4344)
static void C_ccall f_4344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8300)
static void C_ccall f_8300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4506)
static void C_fcall f_4506(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5492)
static void C_ccall f_5492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8608)
static void C_ccall f_8608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8606)
static void C_ccall f_8606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6171)
static void C_ccall f_6171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6176)
static void C_ccall f_6176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6188)
static void C_ccall f_6188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6192)
static void C_ccall f_6192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6196)
static void C_ccall f_6196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6194)
static void C_ccall f_6194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6009)
static void C_ccall f_6009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_fcall f_4319(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8639)
static void C_ccall f_8639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6015)
static void C_fcall f_6015(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4585)
static void C_fcall f_4585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8621)
static void C_ccall f_8621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4573)
static void C_fcall f_4573(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8619)
static void C_ccall f_8619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6161)
static void C_ccall f_6161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8613)
static void C_ccall f_8613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6165)
static void C_ccall f_6165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7571)
static void C_ccall f_7571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7573)
static void C_ccall f_7573(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7577)
static void C_ccall f_7577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7327)
static void C_ccall f_7327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7565)
static void C_ccall f_7565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7568)
static void C_ccall f_7568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7307)
static void C_ccall f_7307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7301)
static void C_ccall f_7301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7303)
static void C_ccall f_7303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7339)
static void C_ccall f_7339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7337)
static void C_ccall f_7337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7335)
static void C_ccall f_7335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7331)
static void C_ccall f_7331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7027)
static void C_ccall f_7027(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6132)
static void C_ccall f_6132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6134)
static void C_fcall f_6134(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7014)
static void C_ccall f_7014(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6140)
static void C_ccall f_6140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6148)
static void C_fcall f_6148(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6146)
static void C_ccall f_6146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6159)
static void C_ccall f_6159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6157)
static void C_ccall f_6157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7599)
static void C_ccall f_7599(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5773)
static void C_ccall f_5773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6462)
static void C_fcall f_6462(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7815)
static void C_ccall f_7815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3927)
static void C_ccall f_3927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7888)
static void C_ccall f_7888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6632)
static void C_ccall f_6632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_fcall f_5716(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5709)
static void C_ccall f_5709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7878)
static void C_ccall f_7878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8665)
static void C_ccall f_8665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8668)
static void C_ccall f_8668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7542)
static void C_ccall f_7542(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7119)
static void C_fcall f_7119(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7850)
static void C_ccall f_7850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8670)
static void C_ccall f_8670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8672)
static void C_ccall f_8672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7549)
static void C_fcall f_7549(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6629)
static void C_ccall f_6629(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7317)
static void C_ccall f_7317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7311)
static void C_ccall f_7311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7313)
static void C_ccall f_7313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4226)
static void C_fcall f_4226(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4489)
static void C_fcall f_4489(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8682)
static void C_ccall f_8682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5436)
static void C_fcall f_5436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5425)
static void C_fcall f_5425(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8396)
static void C_ccall f_8396(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8396)
static void C_ccall f_8396r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9590)
static void C_ccall f_9590(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8641)
static void C_ccall f_8641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6442)
static void C_fcall f_6442(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7009)
static void C_ccall f_7009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6457)
static void C_fcall f_6457(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5671)
static void C_fcall f_5671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5677)
static void C_fcall f_5677(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_9571)
static void C_ccall f_9571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9574)
static void C_ccall f_9574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9586)
static void C_ccall f_9586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9551)
static void C_ccall f_9551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9557)
static void C_ccall f_9557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9559)
static void C_ccall f_9559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8561)
static void C_ccall f_8561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8563)
static void C_ccall f_8563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8450)
static void C_ccall f_8450(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9569)
static void C_ccall f_9569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8570)
static void C_ccall f_8570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8566)
static void C_ccall f_8566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8568)
static void C_ccall f_8568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9539)
static void C_fcall f_9539(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9537)
static void C_ccall f_9537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8291)
static void C_ccall f_8291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8293)
static void C_ccall f_8293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8517)
static void C_ccall f_8517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6775)
static void C_ccall f_6775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6778)
static void C_ccall f_6778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8576)
static void C_ccall f_8576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9709)
static void C_ccall f_9709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8260)
static void C_ccall f_8260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9715)
static void C_ccall f_9715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9717)
static void C_ccall f_9717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8277)
static void C_ccall f_8277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8495)
static void C_ccall f_8495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8535)
static void C_ccall f_8535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8532)
static void C_ccall f_8532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8530)
static void C_ccall f_8530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8464)
static void C_ccall f_8464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8251)
static void C_ccall f_8251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6934)
static void C_fcall f_6934(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9389)
static void C_ccall f_9389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8449)
static void C_ccall f_8449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5280)
static void C_ccall f_5280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8442)
static void C_ccall f_8442(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8442)
static void C_ccall f_8442r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8589)
static void C_ccall f_8589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8587)
static void C_ccall f_8587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8584)
static void C_ccall f_8584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7506)
static void C_fcall f_7506(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8210)
static void C_ccall f_8210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8212)
static void C_ccall f_8212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9391)
static void C_fcall f_9391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7797)
static void C_ccall f_7797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5272)
static void C_ccall f_5272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5274)
static void C_ccall f_5274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7359)
static void C_ccall f_7359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7351)
static void C_ccall f_7351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7353)
static void C_ccall f_7353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7355)
static void C_ccall f_7355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7357)
static void C_ccall f_7357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6973)
static void C_ccall f_6973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9680)
static void C_ccall f_9680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6985)
static void C_ccall f_6985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6988)
static void C_fcall f_6988(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8549)
static void C_ccall f_8549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6981)
static void C_ccall f_6981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6980)
static void C_fcall f_6980(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9324)
static void C_ccall f_9324(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7363)
static void C_ccall f_7363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3483)
static void C_ccall f_3483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7361)
static void C_ccall f_7361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7367)
static void C_ccall f_7367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7365)
static void C_ccall f_7365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7531)
static void C_ccall f_7531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7399)
static void C_ccall f_7399(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_4744)
static void C_fcall trf_4744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4744(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4744(t0,t1,t2);}

C_noret_decl(trf_9660)
static void C_fcall trf_9660(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9660(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9660(t0,t1,t2,t3);}

C_noret_decl(trf_4531)
static void C_fcall trf_4531(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4531(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4531(t0,t1,t2);}

C_noret_decl(trf_8801)
static void C_fcall trf_8801(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8801(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8801(t0,t1,t2);}

C_noret_decl(trf_9436)
static void C_fcall trf_9436(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9436(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9436(t0,t1,t2);}

C_noret_decl(trf_6437)
static void C_fcall trf_6437(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6437(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6437(t0,t1);}

C_noret_decl(trf_4557)
static void C_fcall trf_4557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4557(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4557(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8026)
static void C_fcall trf_8026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8026(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8026(t0,t1);}

C_noret_decl(trf_5533)
static void C_fcall trf_5533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5533(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5533(t0,t1,t2);}

C_noret_decl(trf_9481)
static void C_fcall trf_9481(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9481(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9481(t0,t1,t2);}

C_noret_decl(trf_8067)
static void C_fcall trf_8067(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8067(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8067(t0,t1);}

C_noret_decl(trf_8048)
static void C_fcall trf_8048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8048(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8048(t0,t1,t2,t3);}

C_noret_decl(trf_3552)
static void C_fcall trf_3552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3552(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3552(t0,t1,t2);}

C_noret_decl(trf_5394)
static void C_fcall trf_5394(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5394(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5394(t0,t1);}

C_noret_decl(trf_5383)
static void C_fcall trf_5383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5383(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5383(t0,t1,t2,t3);}

C_noret_decl(trf_8792)
static void C_fcall trf_8792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8792(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8792(t0,t1,t2);}

C_noret_decl(trf_8706)
static void C_fcall trf_8706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8706(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8706(t0,t1);}

C_noret_decl(trf_4435)
static void C_fcall trf_4435(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4435(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4435(t0,t1,t2);}

C_noret_decl(trf_5346)
static void C_fcall trf_5346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5346(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5346(t0,t1,t2);}

C_noret_decl(trf_5512)
static void C_fcall trf_5512(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5512(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5512(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8370)
static void C_fcall trf_8370(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8370(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8370(t0,t1,t2);}

C_noret_decl(trf_5503)
static void C_fcall trf_5503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5503(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5503(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7279)
static void C_fcall trf_7279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7279(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7279(t0,t1,t2);}

C_noret_decl(trf_9357)
static void C_fcall trf_9357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9357(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9357(t0,t1);}

C_noret_decl(trf_3702)
static void C_fcall trf_3702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3702(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3702(t0,t1,t2);}

C_noret_decl(trf_3384)
static void C_fcall trf_3384(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3384(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3384(t0,t1,t2);}

C_noret_decl(trf_3402)
static void C_fcall trf_3402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3402(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3402(t0,t1,t2);}

C_noret_decl(trf_3411)
static void C_fcall trf_3411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3411(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3411(t0,t1);}

C_noret_decl(trf_5315)
static void C_fcall trf_5315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5315(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5315(t0,t1);}

C_noret_decl(trf_3662)
static void C_fcall trf_3662(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3662(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3662(t0,t1,t2,t3);}

C_noret_decl(trf_5304)
static void C_fcall trf_5304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5304(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5304(t0,t1,t2,t3);}

C_noret_decl(trf_3461)
static void C_fcall trf_3461(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3461(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3461(t0,t1,t2);}

C_noret_decl(trf_4902)
static void C_fcall trf_4902(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4902(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4902(t0,t1);}

C_noret_decl(trf_7723)
static void C_fcall trf_7723(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7723(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7723(t0,t1);}

C_noret_decl(trf_4984)
static void C_fcall trf_4984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4984(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4984(t0,t1);}

C_noret_decl(trf_9604)
static void C_fcall trf_9604(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9604(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9604(t0,t1,t2);}

C_noret_decl(trf_6225)
static void C_fcall trf_6225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6225(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6225(t0,t1,t2);}

C_noret_decl(trf_4828)
static void C_fcall trf_4828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4828(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4828(t0,t1);}

C_noret_decl(trf_5170)
static void C_fcall trf_5170(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5170(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5170(t0,t1,t2,t3);}

C_noret_decl(trf_9988)
static void C_fcall trf_9988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9988(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9988(t0,t1);}

C_noret_decl(trf_9217)
static void C_fcall trf_9217(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9217(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9217(t0,t1,t2);}

C_noret_decl(trf_5158)
static void C_fcall trf_5158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5158(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5158(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4021)
static void C_fcall trf_4021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4021(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4021(t0,t1);}

C_noret_decl(trf_4051)
static void C_fcall trf_4051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4051(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4051(t0,t1);}

C_noret_decl(trf_5093)
static void C_fcall trf_5093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5093(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5093(t0,t1,t2,t3);}

C_noret_decl(trf_3790)
static void C_fcall trf_3790(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3790(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3790(t0,t1);}

C_noret_decl(trf_4864)
static void C_fcall trf_4864(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4864(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4864(t0,t1);}

C_noret_decl(trf_4862)
static void C_fcall trf_4862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4862(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4862(t0,t1);}

C_noret_decl(trf_6086)
static void C_fcall trf_6086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6086(t0,t1,t2);}

C_noret_decl(trf_3774)
static void C_fcall trf_3774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3774(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3774(t0,t1,t2);}

C_noret_decl(trf_9067)
static void C_fcall trf_9067(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9067(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9067(t0,t1,t2,t3);}

C_noret_decl(trf_3741)
static void C_fcall trf_3741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3741(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3741(t0,t1,t2);}

C_noret_decl(trf_6363)
static void C_fcall trf_6363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6363(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6363(t0,t1,t2);}

C_noret_decl(trf_9076)
static void C_fcall trf_9076(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9076(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9076(t0,t1,t2,t3);}

C_noret_decl(trf_3631)
static void C_fcall trf_3631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3631(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3631(t0,t1);}

C_noret_decl(trf_3620)
static void C_fcall trf_3620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3620(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3620(t0,t1,t2,t3);}

C_noret_decl(trf_4163)
static void C_fcall trf_4163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4163(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4163(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5938)
static void C_fcall trf_5938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5938(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5938(t0,t1,t2,t3);}

C_noret_decl(trf_5934)
static void C_fcall trf_5934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5934(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5934(t0,t1,t2,t3);}

C_noret_decl(trf_3950)
static void C_fcall trf_3950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3950(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3950(t0,t1,t2);}

C_noret_decl(trf_4035)
static void C_fcall trf_4035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4035(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4035(t0,t1,t2);}

C_noret_decl(trf_3989)
static void C_fcall trf_3989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3989(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3989(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8411)
static void C_fcall trf_8411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8411(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8411(t0,t1,t2);}

C_noret_decl(trf_10106)
static void C_fcall trf_10106(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10106(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10106(t0,t1,t2);}

C_noret_decl(trf_4204)
static void C_fcall trf_4204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4204(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4204(t0,t1,t2);}

C_noret_decl(trf_6315)
static void C_fcall trf_6315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6315(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6315(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6327)
static void C_fcall trf_6327(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6327(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6327(t0,t1,t2);}

C_noret_decl(trf_4264)
static void C_fcall trf_4264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4264(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4264(t0,t1,t2);}

C_noret_decl(trf_5467)
static void C_fcall trf_5467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5467(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5467(t0,t1,t2);}

C_noret_decl(trf_8949)
static void C_fcall trf_8949(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8949(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8949(t0,t1,t2);}

C_noret_decl(trf_8486)
static void C_fcall trf_8486(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8486(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8486(t0,t1,t2);}

C_noret_decl(trf_8927)
static void C_fcall trf_8927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8927(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8927(t0,t1,t2);}

C_noret_decl(trf_4506)
static void C_fcall trf_4506(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4506(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4506(t0,t1);}

C_noret_decl(trf_4319)
static void C_fcall trf_4319(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4319(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4319(t0,t1,t2);}

C_noret_decl(trf_6015)
static void C_fcall trf_6015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6015(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6015(t0,t1,t2,t3);}

C_noret_decl(trf_4585)
static void C_fcall trf_4585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4585(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4585(t0,t1);}

C_noret_decl(trf_4573)
static void C_fcall trf_4573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4573(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4573(t0,t1);}

C_noret_decl(trf_6134)
static void C_fcall trf_6134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6134(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6134(t0,t1,t2);}

C_noret_decl(trf_6148)
static void C_fcall trf_6148(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6148(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6148(t0,t1,t2);}

C_noret_decl(trf_6462)
static void C_fcall trf_6462(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6462(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6462(t0,t1,t2,t3);}

C_noret_decl(trf_5716)
static void C_fcall trf_5716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5716(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5716(t0,t1,t2);}

C_noret_decl(trf_7119)
static void C_fcall trf_7119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7119(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7119(t0,t1,t2);}

C_noret_decl(trf_7549)
static void C_fcall trf_7549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7549(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7549(t0,t1);}

C_noret_decl(trf_4226)
static void C_fcall trf_4226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4226(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4226(t0,t1);}

C_noret_decl(trf_4489)
static void C_fcall trf_4489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4489(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4489(t0,t1,t2);}

C_noret_decl(trf_5436)
static void C_fcall trf_5436(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5436(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5436(t0,t1);}

C_noret_decl(trf_5425)
static void C_fcall trf_5425(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5425(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5425(t0,t1,t2,t3);}

C_noret_decl(trf_6442)
static void C_fcall trf_6442(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6442(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6442(t0,t1,t2,t3);}

C_noret_decl(trf_6457)
static void C_fcall trf_6457(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6457(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6457(t0,t1);}

C_noret_decl(trf_5671)
static void C_fcall trf_5671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5671(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5671(t0,t1,t2);}

C_noret_decl(trf_5677)
static void C_fcall trf_5677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5677(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5677(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_9539)
static void C_fcall trf_9539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9539(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9539(t0,t1,t2,t3);}

C_noret_decl(trf_6934)
static void C_fcall trf_6934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6934(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6934(t0,t1,t2,t3);}

C_noret_decl(trf_7506)
static void C_fcall trf_7506(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7506(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7506(t0,t1,t2);}

C_noret_decl(trf_9391)
static void C_fcall trf_9391(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9391(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9391(t0,t1,t2);}

C_noret_decl(trf_6988)
static void C_fcall trf_6988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6988(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6988(t0,t1);}

C_noret_decl(trf_6980)
static void C_fcall trf_6980(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6980(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6980(t0,t1);}

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

/* k3485 in k3480 in walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
if(C_truep(t2)){
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}}}

/* k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5425,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li74),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5425(t6,t2,((C_word*)t0)[9],t1);}

/* f_5261 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5261(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5261,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[100],t2,t3));}

/* k8526 in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in ... */
static void C_ccall f_8527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1467: ##sys#fixup-macro-environment */
t2=*((C_word*)lf[225]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5267 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5269(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5272,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5274,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5376,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t4,a[6]=t7,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:490: reverse */
t9=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[5]);}

/* k8519 in k8515 in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in ... */
static void C_ccall f_8521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[227]+1 /* (set! ##sys#meta-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k8523 in k8515 in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in ... */
static void C_ccall f_8524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1469: make-parameter */
t2=*((C_word*)lf[228]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3376 in k3372 in k3368 */
static void C_ccall f_3378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3378,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#current-meta-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3382,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:68: make-parameter */
t4=*((C_word*)lf[228]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[1]+1));}

/* k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in ... */
static void C_ccall f_7394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7394,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[194]);
t4=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7399,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[25],a[24]=((C_word*)t0)[26],a[25]=((C_word*)t0)[27],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[3],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:80: r */
t5=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[220]);}

/* k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* expand.scm:1116: c */
t4=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[11],t3);}

/* k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in ... */
static void C_ccall f_7390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7390,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7394,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:78: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[221]);}

/* map-loop746 in k4738 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4744(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4744,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4769,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:359: g752 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9678(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9678,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1117: expand */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9660(t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9690,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9695,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1122: ##sys#strip-syntax */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9709,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1126: expand */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9660(t5,t4,((C_word*)t0)[5],C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1127: c */
t5=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[10],t4);}}}}

/* k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in ... */
static void C_ccall f_7349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9039,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9041,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1279: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k8581 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in ... */
static void C_ccall f_8582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1415: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[238],C_SCHEME_END_OF_LIST,t1);}

/* k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5259,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5261,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[3];
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5266,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=t4,a[8]=t7,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
/* expand.scm:480: reverse */
t10=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[7]);}

/* k3368 */
static void C_ccall f_3370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3370,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#features ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3374,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:64: make-parameter */
t4=*((C_word*)lf[228]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_END_OF_LIST);}

/* k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5251,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[16]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5467,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word)li75),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5467(t7,t3,t1);}

/* k3372 in k3368 */
static void C_ccall f_3374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3374,2,t0,t1);}
t2=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#current-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:65: make-parameter */
t4=*((C_word*)lf[228]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_END_OF_LIST);}

/* k5258 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5259,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[50],t2));}

/* k9304 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in ... */
static void C_ccall f_9305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1195: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[282],C_SCHEME_END_OF_LIST,t1);}

/* f_9307 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in ... */
static void C_ccall f_9307(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9307,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9310,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1200: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[282],t2,lf[287]);}

/* k9643 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in ... */
static void C_ccall f_9644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1101: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[221],C_SCHEME_END_OF_LIST,t1);}

/* k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in ... */
static void C_ccall f_7341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9511,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9513,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1150: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* f_9646 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in ... */
static void C_ccall f_9646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9646,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9651,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1107: r */
t7=t3;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,lf[303]);}

/* k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in ... */
static void C_ccall f_7343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9467,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9469,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1185: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in ... */
static void C_ccall f_7345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7347,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9305,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9307,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1198: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in ... */
static void C_ccall f_7347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9056,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9058,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1227: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4777 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:354: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* ##sys#expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4527(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[18],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4527,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4531,a[2]=t4,a[3]=t2,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4546,a[2]=t8,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=t5,a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:342: macro-alias */
f_3402(t11,lf[88],t5);}

/* k8195 in k8165 */
static void C_ccall f_8196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:255: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,C_SCHEME_FALSE);}

/* k9691 in k9689 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[297]);}

/* k9689 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9690,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1123: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9660(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k9694 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1120: ##sys#warn */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[298]+1)))(4,*((C_word*)lf[298]+1),((C_word*)t0)[2],lf[299],t1);}

/* k9309 */
static void C_ccall f_9310(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9310,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9319,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1204: r */
t9=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t8,lf[286]);}

/* k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in ... */
static void C_ccall f_7375(C_word c,C_word t0,C_word t1){
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
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7375,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[185]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[186]);
t5=C_mutate(((C_word *)((C_word*)t0)[5])+1,lf[187]);
t6=C_mutate(((C_word *)((C_word*)t0)[6])+1,lf[188]);
t7=C_mutate(((C_word *)((C_word*)t0)[7])+1,lf[189]);
t8=C_mutate(((C_word *)((C_word*)t0)[8])+1,lf[190]);
t9=C_mutate(((C_word *)((C_word*)t0)[9])+1,lf[191]);
t10=C_mutate(((C_word *)((C_word*)t0)[10])+1,lf[192]);
t11=C_mutate(((C_word *)((C_word*)t0)[11])+1,lf[193]);
t12=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7390,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[19],a[10]=((C_word*)t0)[20],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[22],a[13]=((C_word*)t0)[23],a[14]=((C_word*)t0)[24],a[15]=((C_word*)t0)[25],a[16]=((C_word*)t0)[26],a[17]=((C_word*)t0)[27],a[18]=((C_word*)t0)[28],a[19]=((C_word*)t0)[29],a[20]=((C_word*)t0)[30],a[21]=((C_word*)t0)[31],a[22]=((C_word*)t0)[32],a[23]=((C_word*)t0)[33],a[24]=((C_word*)t0)[34],a[25]=((C_word*)t0)[35],a[26]=((C_word*)t0)[36],a[27]=((C_word*)t0)[4],a[28]=((C_word*)t0)[37],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[38],a[31]=((C_word*)t0)[39],a[32]=((C_word*)t0)[40],a[33]=((C_word*)t0)[41],a[34]=((C_word*)t0)[42],a[35]=((C_word*)t0)[43],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[6],a[38]=((C_word*)t0)[7],a[39]=((C_word*)t0)[44],a[40]=((C_word*)t0)[5],a[41]=((C_word*)t0)[9],a[42]=((C_word*)t0)[10],a[43]=((C_word*)t0)[11],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[8],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:77: r */
t13=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t13))(3,t13,t12,lf[222]);}

/* k6399 in loop in k6354 in lambda-list? in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* expand.scm:713: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6363(t4,((C_word*)t0)[2],t3);}}

/* k4768 in map-loop746 in k4738 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4769(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4769,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4744(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4744(t6,((C_word*)t0)[5],t5);}}

/* k9318 in k9309 */
static void C_ccall f_9319(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9319,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9324,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9340,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9436,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li181),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9436(t12,t8,((C_word*)t0)[2]);}

/* expand in k9654 in k9652 in k9650 */
static void C_fcall f_9660(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9660,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9672,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1115: ##sys#check-syntax */
t8=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[221],t4,lf[301]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[302]);}}

/* proper-list? in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6411(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6411,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6417,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_6417(t2));}

/* k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4546,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:344: macro-alias */
f_3402(t2,lf[87],((C_word*)t0)[6]);}

/* k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4550,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:345: macro-alias */
f_3402(t2,lf[86],((C_word*)t0)[7]);}

/* loop in proper-list? in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static C_word C_fcall f_6417(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
return(t2);}
else{
if(C_truep(C_i_pairp(t1))){
t3=t1;
t4=C_u_i_cdr(t3);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k8178 in k8165 */
static void C_ccall f_8179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:252: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,C_SCHEME_FALSE);}

/* err in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4531(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4531,NULL,3,t0,t1,t2);}
/* expand.scm:338: errh */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* f_5294 in k5278 */
static void C_ccall f_5294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5294,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[100],t2,t3));}

/* test in k8789 in k8787 in k8785 in k8783 */
static void C_fcall f_8801(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8801,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8814,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1299: ##sys#strip-syntax */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8832,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1304: c */
t7=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[2],t3);}
else{
/* expand.scm:1300: err */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8792(t3,t1,t2);}}}

/* map-loop1916 in k9318 in k9309 */
static void C_fcall f_9436(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9436,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9461,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1207: g1922 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5243 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5243(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5243,3,t0,t1,t2);}
t3=C_a_i_list(&a,1,lf[99]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,t2,t3));}

/* k6436 in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6437(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6437,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6442,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li106),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_6442(t5,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k9654 in k9652 in k9650 */
static void C_ccall f_9655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9655,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9660,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word)li189),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_9660(t5,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k9652 in k9650 */
static void C_ccall f_9653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9655,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1109: r */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[220]);}

/* k9650 */
static void C_ccall f_9651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9651,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1108: r */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[214]);}

/* k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4552,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word*)t0)[9],a[12]=((C_word)li62),tmp=(C_word)a,a+=13,tmp));
t5=((C_word*)t3)[1];
f_4557(t5,((C_word*)t0)[10],C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[11]);}

/* loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4557(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4557,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_nullp(t6))){
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4570,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4778,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:354: reverse */
t9=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
/* expand.scm:354: reverse */
t8=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}}
else{
if(C_truep(C_i_symbolp(t6))){
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
/* expand.scm:382: err */
t7=((C_word*)t0)[9];
f_4531(t7,t1,lf[75]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t7=C_mutate(((C_word *)((C_word*)t0)[5])+1,t6);
/* expand.scm:386: loop */
t16=t1;
t17=C_fix(4);
t18=t3;
t19=t4;
t20=C_SCHEME_END_OF_LIST;
t21=C_SCHEME_END_OF_LIST;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
t5=t20;
t6=t21;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[5])+1,t6);
/* expand.scm:386: loop */
t16=t1;
t17=C_fix(4);
t18=t3;
t19=t4;
t20=C_SCHEME_END_OF_LIST;
t21=C_SCHEME_END_OF_LIST;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
t5=t20;
t6=t21;
goto loop;}}}
else{
if(C_truep(C_i_pairp(t6))){
t7=C_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4816,a[2]=t7,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[10],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[5],a[12]=t4,a[13]=t5,tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_symbolp(t7))){
t9=C_eqp(C_fix(3),t2);
if(C_truep(t9)){
t10=t8;
f_4816(2,t10,C_SCHEME_FALSE);}
else{
/* expand.scm:391: lookup */
f_3384(t8,t7,((C_word*)t0)[11]);}}
else{
t9=t8;
f_4816(2,t9,C_SCHEME_FALSE);}}
else{
/* expand.scm:388: err */
t7=((C_word*)t0)[9];
f_4531(t7,t1,lf[85]);}}}}

/* k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:346: macro-alias */
f_3402(t2,lf[55],((C_word*)t0)[8]);}

/* k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5234,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5243,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5251,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t5,a[9]=t3,a[10]=t6,tmp=(C_word)a,a+=11,tmp);
C_apply(5,0,t7,*((C_word*)lf[70]+1),t1,((C_word*)t0)[5]);}

/* k8165 */
static void C_ccall f_8167(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8167,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8179,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:253: meta-variables */
t6=((C_word*)((C_word*)t0)[4])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t4,t5,((C_word*)t0)[3],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8196,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:256: meta-variables */
t7=((C_word*)((C_word*)t0)[4])[1];
((C_proc6)C_fast_retrieve_proc(t7))(6,t7,t4,t6,((C_word*)t0)[3],((C_word*)t0)[6],C_SCHEME_FALSE);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8210,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:258: vector->list */
t3=*((C_word*)lf[175]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}}}}

/* f_8142 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_8142(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8142,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}
else{
t6=C_a_i_cons(&a,2,t2,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,t6,t4));}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8167,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:251: segment-pattern? */
t7=((C_word*)((C_word*)t0)[4])[1];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,t2,t5);}}

/* k5370 in map-loop986 */
static void C_ccall f_5371(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5371,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5346(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5346(t6,((C_word*)t0)[5],t5);}}

/* k5375 in k5267 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:491: reverse */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k5377 in k5375 in k5267 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5383,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5383(t6,t2,((C_word*)t0)[7],t1);}

/* k8027 in k8025 in k8023 in k8012 in k8008 in k8005 */
static void C_ccall f_8028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8046,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* synrules.scm:231: segment-tail */
t3=((C_word*)((C_word*)t0)[6])[1];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}

/* k8025 in k8023 in k8012 in k8008 in k8005 */
static void C_fcall f_8026(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8026,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8048,a[2]=t4,a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_8048(t6,t2,((C_word*)t0)[8],t1);}

/* k8136 in k8005 */
static void C_ccall f_8137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:240: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k8023 in k8012 in k8008 in k8005 */
static void C_ccall f_8024(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8067,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[10]))){
t4=((C_word*)t0)[10];
t5=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t5))){
if(C_truep(C_i_symbolp(t1))){
t6=((C_word*)t0)[10];
t7=C_u_i_car(t6);
t8=t3;
f_8067(t8,C_eqp(t1,t7));}
else{
t6=t3;
f_8067(t6,C_SCHEME_FALSE);}}
else{
t6=t3;
f_8067(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_8067(t4,C_SCHEME_FALSE);}}

/* k8133 in k8005 */
static void C_ccall f_8134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8134,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t1));}

/* k9460 in map-loop1916 in k9318 in k9309 */
static void C_ccall f_9461(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9461,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9436(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9436(t6,((C_word*)t0)[5],t5);}}

/* k9466 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in ... */
static void C_ccall f_9467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1182: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[88],C_SCHEME_END_OF_LIST,t1);}

/* f_9469 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in ... */
static void C_ccall f_9469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9469,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9472,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1187: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[88],t2,lf[288]);}

/* k8012 in k8008 in k8005 */
static void C_ccall f_8013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8013,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
/* synrules.scm:216: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[207],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* synrules.scm:217: process-template */
t5=((C_word*)((C_word*)t0)[4])[1];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t2,t4,((C_word*)t0)[11],((C_word*)t0)[6]);}}

/* k9471 */
static void C_ccall f_9472(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9472,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9481,a[2]=t5,a[3]=t7,a[4]=((C_word)li183),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_9481(t9,((C_word*)t0)[3],t2);}

/* map-loop1079 in k5527 in loop in fini/syntax in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5533(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5533,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k5529 in k5527 in loop in fini/syntax in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5531,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[102],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,1,t3));}

/* expand in k9471 */
static void C_fcall f_9481(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9481,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,lf[50],t4));}
else{
t4=C_i_car(t2);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9503,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* expand.scm:1193: expand */
t11=t6;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}

/* k5527 in loop in fini/syntax in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5528,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5533,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5533(t6,t2,t1);}

/* k6104 in loop in k6080 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6108,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* expand.scm:629: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6086(t5,t2,t4);}

/* k8065 in k8023 in k8012 in k8008 in k8005 */
static void C_fcall f_8067(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8067,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_8026(t2,((C_word*)t0)[3]);}
else{
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[2];
f_8026(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t3));}}

/* k6107 in k6104 in loop in k6080 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6108,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* doloop2417 in k8025 in k8023 in k8012 in k8008 in k8005 */
static void C_fcall f_8048(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8048,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(t4,C_fix(1));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_fixnum_difference(t2,C_fix(1));
t7=C_a_i_list(&a,3,lf[208],lf[70],t3);
t10=t1;
t11=t6;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k8042 in k8045 in k8027 in k8025 in k8023 in k8012 in k8008 in k8005 */
static void C_ccall f_8043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:233: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k8045 in k8027 in k8025 in k8023 in k8012 in k8008 in k8005 */
static void C_ccall f_8046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8046,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8043,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:233: segment-tail */
t4=((C_word*)((C_word*)t0)[7])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[8]);}}

/* k8039 in k8045 in k8027 in k8025 in k8023 in k8012 in k8008 in k8005 */
static void C_ccall f_8040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8040,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[70],((C_word*)t0)[3],t1));}

/* k4740 in k4738 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4742,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
f_4573(t4,C_a_i_list(&a,1,t3));}

/* k3569 in doloop294 in k3542 in walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3552(t4,((C_word*)t0)[5],t3);}

/* k4423 in expand in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4424(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4424,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4435,a[2]=t1,a[3]=t5,a[4]=t9,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4435(t11,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* ##sys#expand in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4420(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4420r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4420r(t0,t1,t2,t3);}}

static void C_ccall f_4420r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4424,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:306: ##sys#current-environment */
t5=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_4424(2,t5,C_i_car(t3));}}

/* f_3585 in k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3585,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3587,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3591,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:130: g359 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[7]);}

/* k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t1,lf[14]);
t5=C_i_check_list_2(t3,lf[14]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3662,a[2]=t8,a[3]=t2,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3662(t10,t6,t1,t3);}

/* ##sys#extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_3579r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3579r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3579r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3584,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=*((C_word*)lf[8]+1);
t11=t3;
t12=C_i_check_list_2(t11,lf[16]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3702,a[2]=t9,a[3]=t14,a[4]=t7,a[5]=t10,a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_3702(t16,t5,t11);}
else{
t6=t5;
f_3584(2,t6,C_i_car(t4));}}

/* k4409 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:270: lookup */
f_3384(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* doloop294 in k3542 in walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3552(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3552,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* expand.scm:122: walk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3461(t5,t3,t4);}}

/* f_3587 */
static void C_ccall f_3587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3587,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k5393 in k5410 in map-loop962 in k5377 in k5375 in k5267 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5394(C_word t0,C_word t1){
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
f_5383(t5,((C_word*)t0)[7],t3,t4);}

/* map-loop962 in k5377 in k5375 in k5267 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5383(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5383,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5411,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:481: g968 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5379 in k5377 in k5375 in k5267 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:447: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8790(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8790,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8792,a[2]=((C_word*)t0)[2],a[3]=((C_word)li164),tmp=(C_word)a,a+=4,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8801,a[2]=t1,a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li165),tmp=(C_word)a,a+=9,tmp));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8927,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word)li168),tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_8927(t11,((C_word*)t0)[7],((C_word*)t0)[2]);}

/* err in k8789 in k8787 in k8785 in k8783 */
static void C_fcall f_8792(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8792,NULL,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,lf[258],((C_word*)t0)[2]);
/* expand.scm:1295: ##sys#error */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[259],t2,t3);}

/* k6284 in get-line-number in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6285,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6289,a[2]=((C_word*)t0)[2],a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:677: g1261 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9946 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1043: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[309],C_SCHEME_END_OF_LIST,t1);}

/* f_9949 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9949,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9952,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1048: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[309],t2,lf[311]);}

/* f_6289 in k6284 in get-line-number in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6289(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6289,3,t0,t1,t2);}
t3=C_i_assq(((C_word*)t0)[2],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_i_cdr(t3):C_SCHEME_FALSE));}

/* f_8343 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_8343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8343,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8350,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:301: segment-template? */
t4=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k3589 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3591,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3592,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
/* expand.scm:131: g363 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],((C_word*)t0)[3],lf[7],t3);}
else{
t3=((C_word*)t0)[4];
/* expand.scm:131: g363 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],((C_word*)t0)[3],lf[7],t3);}}

/* f_3592 in k3589 */
static void C_ccall f_3592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3592,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* k9951 */
static void C_ccall f_9952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9952,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[310],t2));}

/* f_4446 in loop in k4423 in expand in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4446,4,t0,t1,t2,t3);}
if(C_truep(t3)){
/* expand.scm:310: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4435(t4,t1,t2);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_4441 in loop in k4423 in expand in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4441,2,t0,t1);}
/* expand.scm:308: ##sys#expand-0 */
t2=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k9919 in k9900 */
static void C_ccall f_9920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9920,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k8704 in k8681 in k8617 in k8612 */
static void C_fcall f_8706(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8706,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[252],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,lf[253],t6));}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[253],t3));}}

/* loop in k4423 in expand in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4435(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4435,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4441,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4446,a[2]=((C_word*)t0)[4],a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:306: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* map-loop986 */
static void C_fcall f_5346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5346,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5371,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:482: g992 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8375 in loop */
static void C_ccall f_8377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
/* synrules.scm:311: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8370(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop in fini/syntax in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5512(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5512,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5528,a[2]=t2,a[3]=t1,a[4]=t8,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:500: reverse */
t10=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5576,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
if(C_truep(C_i_listp(t6))){
t7=t2;
t8=C_u_i_car(t7);
t9=C_i_length(t8);
if(C_truep(C_fixnum_greater_or_equal_p(C_fix(3),t9))){
t10=C_i_caar(t2);
if(C_truep(C_i_symbolp(t10))){
t11=t2;
t12=C_u_i_car(t11);
t13=C_u_i_car(t12);
/* expand.scm:505: comp */
t14=((C_word*)((C_word*)t0)[3])[1];
f_5093(t14,t5,lf[96],t13);}
else{
t11=t5;
f_5576(2,t11,C_SCHEME_FALSE);}}
else{
t10=t5;
f_5576(2,t10,C_SCHEME_FALSE);}}
else{
t7=t5;
f_5576(2,t7,C_SCHEME_FALSE);}}
else{
/* expand.scm:501: loop */
t20=t1;
t21=t2;
t22=t3;
t23=C_SCHEME_TRUE;
t1=t20;
t2=t21;
t3=t22;
t4=t23;
goto loop;}}}

/* k5509 in fini/syntax in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:496: fini */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5158(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* loop */
static void C_fcall f_8370(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8370,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8377,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
/* synrules.scm:310: ellipsis? */
t6=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t3,t5);}
else{
t4=t3;
f_8377(2,t4,C_SCHEME_FALSE);}}

/* fini/syntax in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5503(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5503,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5510,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5512,a[2]=t9,a[3]=((C_word*)t0)[3],a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5512(t11,t7,t6,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k8355 in k8348 */
static void C_ccall f_8356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(C_fix(1),t1));}

/* ##sys#syntax-rules-mismatch in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6260,3,t0,t1,t2);}
/* expand.scm:675: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[138],t2);}

/* k8348 */
static void C_ccall f_8350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8350,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8356,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* synrules.scm:302: segment-depth */
t4=((C_word*)((C_word*)t0)[4])[1];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}}

/* k8005 */
static void C_ccall f_8007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8007,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:211: segment-depth */
t3=((C_word*)((C_word*)t0)[11])[1];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8115,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
/* synrules.scm:236: process-template */
t5=((C_word*)((C_word*)t0)[5])[1];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t2,t4,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8134,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8137,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:240: vector->list */
t4=*((C_word*)lf[175]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)t0)[4]));}}}}

/* k8008 in k8005 */
static void C_ccall f_8009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8009,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8013,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* synrules.scm:214: free-meta-variables */
t5=((C_word*)((C_word*)t0)[10])[1];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t3,t4,t2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* get-line-number in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6266,3,t0,t1,t2);}
if(C_truep(*((C_word*)lf[113]+1))){
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6285,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:682: ##sys#hash-table-ref */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[140]+1)))(4,*((C_word*)lf[140]+1),t5,*((C_word*)lf[113]+1),t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_8361 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_8361(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8361,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8370,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li150),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8370(t7,t1,t3);}

/* f_9365 in k9356 in k9338 in k9318 in k9309 */
static void C_ccall f_9365(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9365,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_i_cdr(t3);
t5=C_eqp(t4,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_i_cdr(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_i_car(t8));}}

/* k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10278,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10280,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:918: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k5222 in loop in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5188(2,t2,t1);}
else{
/* expand.scm:469: comp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5093(t2,((C_word*)t0)[2],lf[97],((C_word*)t0)[4]);}}

/* k9338 in k9318 in k9309 */
static void C_ccall f_9340(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9340,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_eqp(t3,C_SCHEME_END_OF_LIST);
t5=(C_truep(t4)?lf[283]:C_a_i_cons(&a,2,lf[98],t3));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9357,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_eqp(((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=t6;
f_9357(t8,lf[285]);}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);
t9=t6;
f_9357(t9,C_a_i_cons(&a,2,lf[50],t8));}}

/* for-each-loop1566 in mark-primitive in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_7279(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7279,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7288,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:905: g1567 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9356 in k9338 in k9318 in k9309 */
static void C_fcall f_9357(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_9357,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9365,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9389,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9391,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,a[6]=((C_word)li180),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_9391(t11,t7,((C_word*)t0)[7]);}

/* k6237 in loop in k6195 in k6193 in k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6241,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* expand.scm:668: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6225(t5,t2,t4);}

/* ##sys#ir-transformer in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7250,3,t0,t1,t2);}
/* expand.scm:897: make-er/ir-transformer */
t3=*((C_word*)lf[173]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_FALSE);}

/* ##sys#mark-primitive in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7258(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7258,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7261,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_list_2(t2,lf[14]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7279,a[2]=t6,a[3]=t3,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7279(t8,t1,t2);}

/* k6240 in k6237 in loop in k6195 in k6193 in k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:666: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[128],((C_word*)t0)[3],lf[129],t1);}

/* k7287 in for-each-loop1566 in mark-primitive in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7279(t3,((C_word*)t0)[4],t2);}

/* k7235 in k6740 */
static void C_ccall f_7236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:894: handler */
t2=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]);}

/* k7232 in k6740 */
static void C_ccall f_7233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:894: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7119(t2,((C_word*)t0)[3],t1);}

/* f_7263 */
static void C_ccall f_7263(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7263,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* f_7261 in mark-primitive in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7261(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7261,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7263,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
t4=C_i_cdr(t2);
t5=t2;
t6=C_u_i_car(t5);
/* expand.scm:907: g1577 */
t7=t3;
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t4,lf[176],t6);}

/* map-loop318 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3702,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3727,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:127: g324 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#er-transformer in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7244(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7244,3,t0,t1,t2);}
/* expand.scm:896: make-er/ir-transformer */
t3=*((C_word*)lf[173]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_TRUE);}

/* f_4690 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4690(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4690,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4737,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:362: ##sys#strip-syntax */
t6=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* lookup in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3384(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3384,NULL,3,t1,t2,t3);}
t4=C_u_i_assq(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_cdr(t4));}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3393,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3397,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:72: g218 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,lf[5]);}}

/* k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3382(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3382,2,t0,t1);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#active-eval-environment ...) */,t1);
t3=C_mutate(&lf[4] /* (set! lookup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3384,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[6] /* (set! macro-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3402,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#strip-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3454,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[12]+1 /* (set! strip-syntax ...) */,*((C_word*)lf[10]+1));
t7=C_mutate((C_word*)lf[13]+1 /* (set! ##sys#extend-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3579,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[17]+1 /* (set! ##sys#globalize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3735,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:153: make-parameter */
t10=*((C_word*)lf[228]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,C_SCHEME_END_OF_LIST);}

/* f_9513 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in ... */
static void C_ccall f_9513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9513,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9516,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1152: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[289],t2,lf[296]);}

/* k9515 */
static void C_ccall f_9516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9516,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9522,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1155: r */
t7=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,lf[77]);}

/* k9510 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in ... */
static void C_ccall f_9511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1147: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[289],C_SCHEME_END_OF_LIST,t1);}

/* k9521 in k9515 */
static void C_ccall f_9522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9524,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1156: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[214]);}

/* k9523 in k9521 in k9515 */
static void C_ccall f_9524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:1157: r */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[295]);}

/* k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:1158: r */
t3=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[220]);}

/* k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9528(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9528,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9537,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9539,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word)li187),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_9539(t8,t4,((C_word*)t0)[8],C_SCHEME_FALSE);}

/* k3670 in for-each-loop344 in k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3662(t4,((C_word*)t0)[5],t2,t3);}

/* k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_3411(t3,t1);}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_block_size(t3);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t5=C_subchar(t3,C_fix(0));
t6=t2;
f_3411(t6,C_i_char_equalp(C_make_character(35),t5));}
else{
t5=t2;
f_3411(t5,C_SCHEME_FALSE);}}}

/* macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3402(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3402,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3408,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:76: ##sys#qualified-symbol? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),t4,t2);}

/* k8830 in test in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8832,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1307: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8801(t5,t3,t4);}
else{
/* expand.scm:1309: err */
t3=((C_word*)((C_word*)t0)[6])[1];
f_8792(t3,((C_word*)t0)[3],((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:1310: c */
t3=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[11]);}}

/* k3412 in k3409 in k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:83: lookup */
f_3384(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3409 in k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3411(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3411,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:82: gensym */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k3647 in map-loop381 in k3605 in k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3648,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3631,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_3631(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_3631(t5,t4);}}

/* f_3419 in k3414 in k3412 in k3409 in k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3419,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k3414 in k3412 in k3409 in k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3415,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3419,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:84: g240 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],lf[7]);}

/* k8847 in k8830 in test in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8849,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
/* expand.scm:1308: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8801(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_6738 in make-er/ir-transformer in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6738,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6741,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t3))){
t8=t7;
f_6741(2,t8,C_SCHEME_UNDEFINED);}
else{
/* expand.scm:775: ##sys#error */
t8=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,lf[178],t3);}}

/* make-er/ir-transformer in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6732,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6738,a[2]=t3,a[3]=t2,a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record2(&a,2,lf[24],t4));}

/* k9502 in expand in k9471 */
static void C_ccall f_9503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9503,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[50],((C_word*)t0)[3],t1));}

/* k3421 in k3414 in k3412 in k3409 in k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3423,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3427,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:85: g244 */
t5=t3;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[3],lf[5],((C_word*)t0)[5]);}

/* k9182 in k9188 in k9155 in k9137 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9183,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[194],((C_word*)t0)[3],t1));}

/* k5314 in k5331 in map-loop1015 in k5278 */
static void C_fcall f_5315(C_word t0,C_word t1){
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
f_5304(t5,((C_word*)t0)[7],t3,t4);}

/* k9188 in k9155 in k9137 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9189,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[194],((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9183,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1257: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9067(t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* f_3427 in k3421 in k3414 in k3412 in k3409 in k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3427,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* k4644 in k4583 in k4572 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4645,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:353: values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[6],t5);}

/* k4647 in k4583 in k4572 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4648,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,t2);
/* expand.scm:378: ##sys#append */
t4=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_a_i_list1(&a,1,t3);
/* expand.scm:378: ##sys#append */
t5=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t1,t4);}}

/* k8813 in test in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1299: ##sys#feature? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[260]+1)))(3,*((C_word*)lf[260]+1),((C_word*)t0)[2],t1);}

/* f_3432 in k3429 in k3421 in k3414 in k3412 in k3409 in k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3432,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_putprop(&a,3,t2,t3,t4));}

/* k3429 in k3421 in k3414 in k3412 in k3409 in k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3432,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:86: g249 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],lf[7],((C_word*)t0)[4]);}

/* for-each-loop344 in k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3662(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3662,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3671,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:127: g345 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* map-loop1015 in k5278 */
static void C_fcall f_5304(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5304,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5332,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:487: g1021 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5300 in k5278 */
static void C_ccall f_5302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5302,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[72],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[101],((C_word*)t0)[4],t3));}

/* k3434 in k3429 in k3421 in k3414 in k3412 in k3409 in k3407 in macro-alias in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6758 in k6755 in rename in k6740 */
static void C_ccall f_6759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6759,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6755 in rename in k6740 */
static void C_ccall f_6756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6759,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* expand.scm:780: rename */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6743(3,t5,t2,t4);}

/* k5331 in map-loop1015 in k5278 */
static void C_ccall f_5332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5332,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_5315(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_5315(t5,t4);}}

/* k7705 in k7628 */
static void C_ccall f_7706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7706,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,1,t4));}

/* ##sys#strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3454(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3454,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3461,a[2]=t4,a[3]=t6,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3461(t8,t1,t2);}

/* k4919 in k4815 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4902(t3,t2);}

/* k8881 in k8866 in k8830 in test in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8882,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* expand.scm:1314: test */
t4=((C_word*)((C_word*)t0)[5])[1];
f_8801(t4,((C_word*)t0)[2],t3);}}

/* walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3461(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(15);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3461,NULL,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}
else{
if(C_truep(C_i_symbolp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3478,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3482,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:105: g274 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[5]);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t5=C_a_i_cons(&a,2,t2,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)((C_word*)t0)[2])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3528,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_u_i_car(t9);
/* expand.scm:113: walk */
t16=t8;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t4=C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3543,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:118: make-vector */
t6=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}}}

/* k6740 */
static void C_ccall f_6741(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6741,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6743,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6877,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7095,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7119,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word)li125),tmp=(C_word)a,a+=8,tmp));
if(C_truep(((C_word*)t0)[5])){
/* expand.scm:888: handler */
t14=((C_word*)t0)[6];
((C_proc5)C_fast_retrieve_proc(t14))(5,t14,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t3)[1],((C_word*)t5)[1]);}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7233,a[2]=t9,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7236,a[2]=((C_word*)t0)[6],a[3]=t14,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:894: rename */
t16=((C_word*)t3)[1];
f_6743(3,t16,t15,((C_word*)t0)[8]);}}

/* rename in k6740 */
static void C_ccall f_6743(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(7);
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)tr3,(void*)f_6743,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6756,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:780: rename */
t13=t3;
t14=t5;
t1=t13;
t2=t14;
c=3;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6775,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6778,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:782: vector->list */
t5=*((C_word*)lf[175]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6790,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:775: g1377 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6801,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:788: lookup */
f_3384(t4,t2,((C_word*)t0)[4]);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}}

/* k5574 in loop in fini/syntax in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5576(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5576,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cadr(t3);
if(C_truep(C_i_pairp(t7))){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5597,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:511: caadr */
t9=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
t8=C_u_i_car(t3);
t9=C_u_i_cdr(t3);
t10=C_u_i_car(t9);
t11=C_eqp(t8,t10);
if(C_truep(t11)){
/* expand.scm:517: ##sys#defjam-error */
t12=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t6,t3);}
else{
t12=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* expand.scm:507: loop */
t13=((C_word*)((C_word*)t0)[4])[1];
f_5512(t13,((C_word*)t0)[5],t5,t12,C_SCHEME_FALSE);}}}
else{
/* expand.scm:521: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5512(t2,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}}

/* k4901 in k4815 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4902(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[2],C_fix(2)))){
/* expand.scm:411: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4557(t2,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}
else{
/* expand.scm:412: err */
t2=((C_word*)t0)[8];
f_4531(t2,((C_word*)t0)[4],lf[80]);}}

/* k8866 in k8830 in test in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8868,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8882,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1313: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8801(t5,t3,t4);}
else{
/* expand.scm:1315: err */
t3=((C_word*)((C_word*)t0)[6])[1];
f_8792(t3,((C_word*)t0)[3],((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8907,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1316: c */
t3=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* f_7971 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_7971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7971,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_symbolp(t2))){
t5=C_i_assq(t2,t4);
if(C_truep(t5)){
t6=C_i_cdr(t5);
t7=t3;
if(C_truep(C_fixnum_less_or_equal_p(t6,t7))){
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
/* synrules.scm:207: ##sys#syntax-error-hook */
t8=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[206],t2);}}
else{
t6=C_a_i_list(&a,2,lf[202],t2);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],t6));}}
else{
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8007,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* synrules.scm:210: segment-template? */
t6=((C_word*)((C_word*)t0)[12])[1];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t2);}}

/* k4113 in k4100 */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:238: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4116 in k4100 */
static void C_ccall f_4117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:239: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[42],t1,lf[43]);}

/* k9129 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9130,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,lf[194],((C_word*)t0)[3],t1));}

/* k5596 in k5574 in loop in fini/syntax in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5597(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5597,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,lf[72],t7);
t9=C_a_i_list(&a,2,lf[23],t8);
t10=C_a_i_list(&a,3,lf[96],t1,t9);
t11=C_a_i_cons(&a,2,t10,((C_word*)t0)[3]);
/* expand.scm:507: loop */
t12=((C_word*)((C_word*)t0)[4])[1];
f_5512(t12,((C_word*)t0)[5],((C_word*)t0)[6],t11,C_SCHEME_FALSE);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_expand_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_expand_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("expand_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(4211)){
C_save(t1);
C_rereclaim2(4211*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,338);
lf[0]=C_h_intern(&lf[0],12,"\003sysfeatures");
lf[1]=C_h_intern(&lf[1],23,"\003syscurrent-environment");
lf[2]=C_h_intern(&lf[2],28,"\003syscurrent-meta-environment");
lf[3]=C_h_intern(&lf[3],27,"\003sysactive-eval-environment");
lf[5]=C_h_intern(&lf[5],16,"\004coremacro-alias");
lf[7]=C_h_intern(&lf[7],14,"\004corereal-name");
lf[8]=C_h_intern(&lf[8],6,"gensym");
lf[9]=C_h_intern(&lf[9],21,"\003sysqualified-symbol\077");
lf[10]=C_h_intern(&lf[10],16,"\003sysstrip-syntax");
lf[11]=C_h_intern(&lf[11],11,"make-vector");
lf[12]=C_h_intern(&lf[12],12,"strip-syntax");
lf[13]=C_h_intern(&lf[13],13,"\003sysextend-se");
lf[14]=C_h_intern(&lf[14],8,"for-each");
lf[15]=C_h_intern(&lf[15],6,"append");
lf[16]=C_h_intern(&lf[16],3,"map");
lf[17]=C_h_intern(&lf[17],13,"\003sysglobalize");
lf[18]=C_h_intern(&lf[18],21,"\003sysalias-global-hook");
lf[19]=C_h_intern(&lf[19],21,"\003sysmacro-environment");
lf[20]=C_h_intern(&lf[20],29,"\003syschicken-macro-environment");
lf[21]=C_h_intern(&lf[21],33,"\003syschicken-ffi-macro-environment");
lf[22]=C_h_intern(&lf[22],22,"\003sysensure-transformer");
lf[23]=C_h_intern(&lf[23],18,"\003syser-transformer");
lf[24]=C_h_intern(&lf[24],11,"transformer");
lf[25]=C_h_intern(&lf[25],9,"\003syserror");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000$expected syntax-transformer, but got");
lf[27]=C_h_intern(&lf[27],28,"\003sysextend-macro-environment");
lf[28]=C_h_intern(&lf[28],14,"\003syscopy-macro");
lf[29]=C_h_intern(&lf[29],10,"\003sysmacro\077");
lf[30]=C_h_intern(&lf[30],20,"\003sysunregister-macro");
lf[31]=C_h_intern(&lf[31],19,"\003sysundefine-macro!");
lf[32]=C_h_intern(&lf[32],12,"\003sysexpand-0");
lf[33]=C_h_intern(&lf[33],9,"condition");
lf[34]=C_h_intern(&lf[34],9,"\003sysabort");
lf[35]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message");
lf[36]=C_h_intern(&lf[36],13,"string-append");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\025during expansion of (");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\010 ...) - ");
lf[39]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message");
lf[40]=C_h_intern(&lf[40],3,"exn");
lf[41]=C_h_intern(&lf[41],21,"\003syssyntax-error-hook");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\030syntax transformer for `");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000@\047 returns original form, which would result in endless expansion");
lf[44]=C_h_intern(&lf[44],14,"symbol->string");
lf[45]=C_h_intern(&lf[45],25,"\003syssyntax-rules-mismatch");
lf[46]=C_h_intern(&lf[46],16,"\003sysdynamic-wind");
lf[47]=C_h_intern(&lf[47],22,"with-exception-handler");
lf[48]=C_h_intern(&lf[48],30,"call-with-current-continuation");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid syntax in macro form");
lf[50]=C_h_intern(&lf[50],8,"\004corelet");
lf[51]=C_h_intern(&lf[51],16,"\004coreloop-lambda");
lf[52]=C_h_intern(&lf[52],11,"\004coreletrec");
lf[53]=C_h_intern(&lf[53],8,"\004coreapp");
lf[54]=C_h_intern(&lf[54],16,"\003syscheck-syntax");
lf[55]=C_h_intern(&lf[55],3,"let");
lf[56]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[57]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[58]=C_h_intern(&lf[58],24,"\003syscompiler-syntax-hook");
lf[59]=C_h_intern(&lf[59],24,"\010compilercompiler-syntax");
lf[60]=C_h_intern(&lf[60],25,"\003sysenable-runtime-macros");
lf[61]=C_h_intern(&lf[61],10,"\003sysexpand");
lf[62]=C_h_intern(&lf[62],6,"expand");
lf[63]=C_h_intern(&lf[63],25,"\003sysextended-lambda-list\077");
lf[64]=C_h_intern(&lf[64],6,"#!rest");
lf[65]=C_h_intern(&lf[65],10,"#!optional");
lf[66]=C_h_intern(&lf[66],5,"#!key");
lf[67]=C_h_intern(&lf[67],31,"\003sysexpand-extended-lambda-list");
lf[68]=C_h_intern(&lf[68],5,"cadar");
lf[69]=C_h_intern(&lf[69],7,"reverse");
lf[70]=C_h_intern(&lf[70],10,"\003sysappend");
lf[71]=C_h_intern(&lf[71],10,"\004corequote");
lf[72]=C_h_intern(&lf[72],11,"\004corelambda");
lf[73]=C_h_intern(&lf[73],15,"\003sysget-keyword");
lf[74]=C_h_intern(&lf[74],15,"string->keyword");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000+rest argument list specified more than once");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000-`#!optional\047 argument marker in wrong context");
lf[77]=C_h_intern(&lf[77],3,"tmp");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000#invalid syntax of `#!rest\047 argument");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000)`#!rest\047 argument marker in wrong context");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000(`#!key\047 argument marker in wrong context");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\0000invalid lambda list syntax after `#!rest\047 marker");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000 invalid required argument syntax");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\0000invalid lambda list syntax after `#!rest\047 marker");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid lambda list syntax");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid lambda list syntax");
lf[86]=C_h_intern(&lf[86],14,"let-optionals\052");
lf[87]=C_h_intern(&lf[87],8,"optional");
lf[88]=C_h_intern(&lf[88],4,"let\052");
lf[89]=C_h_intern(&lf[89],16,"\003sysdefjam-error");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000,redefinition of currently used defining form");
lf[91]=C_h_intern(&lf[91],21,"\003sysdefine-definition");
lf[92]=C_h_intern(&lf[92],28,"\003sysdefine-syntax-definition");
lf[93]=C_h_intern(&lf[93],28,"\003sysdefine-values-definition");
lf[94]=C_h_intern(&lf[94],21,"\003syscanonicalize-body");
lf[95]=C_h_intern(&lf[95],6,"define");
lf[96]=C_h_intern(&lf[96],13,"define-syntax");
lf[97]=C_h_intern(&lf[97],13,"define-values");
lf[98]=C_h_intern(&lf[98],10,"\004corebegin");
lf[99]=C_h_intern(&lf[99],14,"\004coreundefined");
lf[100]=C_h_intern(&lf[100],9,"\004coreset!");
lf[101]=C_h_intern(&lf[101],20,"\003syscall-with-values");
lf[102]=C_h_intern(&lf[102],18,"\004coreletrec-syntax");
lf[103]=C_h_intern(&lf[103],5,"caadr");
lf[104]=C_h_intern(&lf[104],25,"\003sysexpand-curried-define");
lf[105]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[106]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[107]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[108]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[109]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[110]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[111]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[113]=C_h_intern(&lf[113],24,"\003sysline-number-database");
lf[114]=C_h_intern(&lf[114],24,"\003syssyntax-error-culprit");
lf[115]=C_h_intern(&lf[115],18,"\003syssyntax-context");
lf[116]=C_h_intern(&lf[116],15,"\003syssignal-hook");
lf[117]=C_h_intern(&lf[117],13,"\000syntax-error");
lf[118]=C_h_intern(&lf[118],24,"\003syssyntax-error/context");
lf[119]=C_h_intern(&lf[119],9,"\003sysprint");
lf[120]=C_h_intern(&lf[120],17,"get-output-string");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\006 ...)\047");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\025\012inside expression `(");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\027  Suggesting: `(import ");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\025  Suggesting one of:\012");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\017\012      (import ");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000# ...)\047 without importing it first.\012");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000-\012\012  Perhaps you intended to use the syntax `(");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[133]=C_h_intern(&lf[133],6,"syntax");
lf[134]=C_h_intern(&lf[134],7,"\003sysget");
lf[135]=C_h_intern(&lf[135],7,"\004coredb");
lf[136]=C_h_intern(&lf[136],18,"open-output-string");
lf[137]=C_h_intern(&lf[137],12,"syntax-error");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\024no rule matches form");
lf[139]=C_h_intern(&lf[139],15,"get-line-number");
lf[140]=C_h_intern(&lf[140],18,"\003syshash-table-ref");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\006) in `");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\004\047 - ");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\004in `");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\004\047 - ");
lf[146]=C_h_intern(&lf[146],8,"keyword\077");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\024not enough arguments");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\022too many arguments");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\021not a proper list");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\021unexpected object");
lf[151]=C_h_intern(&lf[151],1,"_");
lf[152]=C_h_intern(&lf[152],4,"pair");
lf[153]=C_h_intern(&lf[153],5,"pair\077");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\015pair expected");
lf[155]=C_h_intern(&lf[155],8,"variable");
lf[156]=C_h_intern(&lf[156],7,"symbol\077");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\023identifier expected");
lf[158]=C_h_intern(&lf[158],6,"symbol");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\017symbol expected");
lf[160]=C_h_intern(&lf[160],4,"list");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\024proper list expected");
lf[162]=C_h_intern(&lf[162],6,"number");
lf[163]=C_h_intern(&lf[163],7,"number\077");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\017number expected");
lf[165]=C_h_intern(&lf[165],6,"string");
lf[166]=C_h_intern(&lf[166],7,"string\077");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\017string expected");
lf[168]=C_h_intern(&lf[168],11,"lambda-list");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\024lambda-list expected");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\017missing keyword");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\015pair expected");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\017incomplete form");
lf[173]=C_h_intern(&lf[173],22,"make-er/ir-transformer");
lf[174]=C_h_intern(&lf[174],12,"list->vector");
lf[175]=C_h_intern(&lf[175],12,"vector->list");
lf[176]=C_h_intern(&lf[176],14,"\004coreprimitive");
lf[177]=C_h_intern(&lf[177],12,"\004corealiased");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\033(expand.scm:777) not a list");
lf[179]=C_h_intern(&lf[179],18,"\003sysir-transformer");
lf[180]=C_h_intern(&lf[180],20,"er-macro-transformer");
lf[181]=C_h_intern(&lf[181],20,"ir-macro-transformer");
lf[182]=C_h_intern(&lf[182],18,"\003sysmark-primitive");
lf[183]=C_h_intern(&lf[183],29,"\003sysinitial-macro-environment");
lf[184]=C_h_intern(&lf[184],24,"\003sysprocess-syntax-rules");
lf[185]=C_h_intern(&lf[185],7,"\003syscar");
lf[186]=C_h_intern(&lf[186],7,"\003syscdr");
lf[187]=C_h_intern(&lf[187],10,"\003syslength");
lf[188]=C_h_intern(&lf[188],11,"\003sysvector\077");
lf[189]=C_h_intern(&lf[189],16,"\003sysvector->list");
lf[190]=C_h_intern(&lf[190],16,"\003syslist->vector");
lf[191]=C_h_intern(&lf[191],6,"\003sys>=");
lf[192]=C_h_intern(&lf[192],5,"\003sys=");
lf[193]=C_h_intern(&lf[193],5,"\003sys+");
lf[194]=C_h_intern(&lf[194],8,"\003syscons");
lf[195]=C_h_intern(&lf[195],7,"\003syseq\077");
lf[196]=C_h_intern(&lf[196],10,"\003sysequal\077");
lf[197]=C_h_intern(&lf[197],9,"\003syslist\077");
lf[198]=C_h_intern(&lf[198],7,"\003sysmap");
lf[199]=C_h_intern(&lf[199],9,"\003sysmap-n");
lf[200]=C_h_intern(&lf[200],9,"\003syspair\077");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\026ill-formed syntax rule");
lf[202]=C_h_intern(&lf[202],11,"\004coresyntax");
lf[203]=C_h_intern(&lf[203],5,"quote");
lf[204]=C_h_intern(&lf[204],14,"\003sysdrop-right");
lf[205]=C_h_intern(&lf[205],14,"\003systake-right");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000,template dimension error (too few ellipses\077)");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\021too many ellipses");
lf[208]=C_h_intern(&lf[208],9,"\003sysapply");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000%Only one segment per level is allowed");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\047Cannot combine dotted tail and ellipsis");
lf[211]=C_h_intern(&lf[211],4,"temp");
lf[212]=C_h_intern(&lf[212],4,"tail");
lf[213]=C_h_intern(&lf[213],6,"rename");
lf[214]=C_h_intern(&lf[214],2,"or");
lf[215]=C_h_intern(&lf[215],4,"loop");
lf[216]=C_h_intern(&lf[216],6,"lambda");
lf[217]=C_h_intern(&lf[217],3,"len");
lf[218]=C_h_intern(&lf[218],1,"l");
lf[219]=C_h_intern(&lf[219],5,"input");
lf[220]=C_h_intern(&lf[220],4,"else");
lf[221]=C_h_intern(&lf[221],4,"cond");
lf[222]=C_h_intern(&lf[222],7,"compare");
lf[223]=C_h_intern(&lf[223],3,"and");
lf[224]=C_h_intern(&lf[224],16,"\003sysmacro-subset");
lf[225]=C_h_intern(&lf[225],27,"\003sysfixup-macro-environment");
lf[226]=C_h_intern(&lf[226],29,"\003sysdefault-macro-environment");
lf[227]=C_h_intern(&lf[227],26,"\003sysmeta-macro-environment");
lf[228]=C_h_intern(&lf[228],14,"make-parameter");
lf[229]=C_h_intern(&lf[229],12,"syntax-rules");
lf[230]=C_h_intern(&lf[230],3,"...");
lf[231]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[232]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[233]=C_h_intern(&lf[233],6,"export");
lf[234]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[235]=C_h_intern(&lf[235],22,"\003sysadd-to-export-list");
lf[236]=C_h_intern(&lf[236],18,"\003syscurrent-module");
lf[237]=C_h_intern(&lf[237],20,"\003sysvalidate-exports");
lf[238]=C_h_intern(&lf[238],16,"begin-for-syntax");
lf[239]=C_h_intern(&lf[239],24,"\004coreelaborationtimeonly");
lf[240]=C_h_intern(&lf[240],28,"\003sysregister-meta-expression");
lf[241]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[242]=C_h_intern(&lf[242],6,"module");
lf[243]=C_h_intern(&lf[243],1,"\052");
lf[244]=C_h_intern(&lf[244],1,"=");
lf[245]=C_h_intern(&lf[245],14,"string->symbol");
lf[246]=C_h_intern(&lf[246],17,"\003sysstring-append");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\001_");
lf[248]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[249]=C_h_intern(&lf[249],25,"\003sysregister-module-alias");
lf[250]=C_h_intern(&lf[250],23,"\003sysinstantiate-functor");
lf[251]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001\376\377\016"
);
lf[252]=C_h_intern(&lf[252],12,"\004coreinclude");
lf[253]=C_h_intern(&lf[253],11,"\004coremodule");
lf[254]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[255]=C_h_intern(&lf[255],17,"require-extension");
lf[256]=C_h_intern(&lf[256],22,"\004corerequire-extension");
lf[257]=C_h_intern(&lf[257],15,"require-library");
lf[258]=C_h_intern(&lf[258],11,"cond-expand");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\042syntax error in `cond-expand\047 form");
lf[260]=C_h_intern(&lf[260],12,"\003sysfeature\077");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000(no matching clause in `cond-expand\047 form");
lf[262]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[263]=C_h_intern(&lf[263],3,"not");
lf[264]=C_h_intern(&lf[264],5,"delay");
lf[265]=C_h_intern(&lf[265],16,"\003sysmake-promise");
lf[266]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[267]=C_h_intern(&lf[267],10,"quasiquote");
lf[268]=C_h_intern(&lf[268],7,"unquote");
lf[269]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[270]=C_h_intern(&lf[270],16,"unquote-splicing");
lf[271]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[272]=C_h_intern(&lf[272],1,"a");
lf[273]=C_h_intern(&lf[273],8,"\003syslist");
lf[274]=C_h_intern(&lf[274],1,"b");
lf[275]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\003sysappend\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[276]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\377\016");
lf[277]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\003syslist\376\001\000\000\001b\376\377\016");
lf[278]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\001\000\000\001b\376\377\016");
lf[279]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[280]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\377\016");
lf[281]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[282]=C_h_intern(&lf[282],2,"do");
lf[283]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[284]=C_h_intern(&lf[284],7,"\004coreif");
lf[285]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[286]=C_h_intern(&lf[286],6,"doloop");
lf[287]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001"
"\000\000\000\001");
lf[288]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[289]=C_h_intern(&lf[289],4,"case");
lf[290]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[291]=C_h_intern(&lf[291],10,"\003sysnotice");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\0003non-`else\047 clause following `else\047 clause in `case\047");
lf[293]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[294]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[295]=C_h_intern(&lf[295],4,"eqv\077");
lf[296]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[297]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[298]=C_h_intern(&lf[298],8,"\003syswarn");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\0003non-`else\047 clause following `else\047 clause in `cond\047");
lf[300]=C_h_intern(&lf[300],2,"if");
lf[301]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[302]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[303]=C_h_intern(&lf[303],2,"=>");
lf[304]=C_h_intern(&lf[304],4,"set!");
lf[305]=C_h_intern(&lf[305],10,"\003syssetter");
lf[306]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[307]=C_h_intern(&lf[307],13,"letrec-syntax");
lf[308]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[309]=C_h_intern(&lf[309],10,"let-syntax");
lf[310]=C_h_intern(&lf[310],15,"\004corelet-syntax");
lf[311]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[312]=C_h_intern(&lf[312],6,"letrec");
lf[313]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[314]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[315]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[316]=C_h_intern(&lf[316],18,"\004coredefine-syntax");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000@redefinition of `define-syntax\047 not allowed in syntax-definition");
lf[318]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[319]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list");
lf[320]=C_h_intern(&lf[320],19,"\003sysregister-export");
lf[321]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[322]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[323]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[324]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[325]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[326]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[327]=C_h_intern(&lf[327],5,"begin");
lf[328]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[329]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_");
lf[330]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[331]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[332]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[333]=C_h_intern(&lf[333],8,"reexport");
lf[334]=C_h_intern(&lf[334],17,"\003sysexpand-import");
lf[335]=C_h_intern(&lf[335],17,"import-for-syntax");
lf[336]=C_h_intern(&lf[336],6,"import");
lf[337]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\020\000hygienic-macros\376\003\000\000\002\376\001\000\000\015\000syntax-rules\376\003\000\000\002\376\001\000\000\007\000srfi-0\376\003\000\000\002\376\001\000\000\007\000srf"
"i-2\376\003\000\000\002\376\001\000\000\007\000srfi-6\376\003\000\000\002\376\001\000\000\007\000srfi-9\376\003\000\000\002\376\001\000\000\010\000srfi-46\376\003\000\000\002\376\001\000\000\010\000srfi-55\376\003\000\000\002\376\001"
"\000\000\010\000srfi-61\376\377\016");
C_register_lf2(lf,338,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3370,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:46: append */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[337],*((C_word*)lf[0]+1));}

/* k9137 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9139,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[71],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9148,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* expand.scm:1248: walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_9067(t5,t3,((C_word*)t0)[6],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9157,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t3=C_u_i_car(((C_word*)t0)[7]);
/* expand.scm:1249: c */
t4=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[8],t3);}
else{
t3=t2;
f_9157(2,t3,C_SCHEME_FALSE);}}}

/* k5587 in k5574 in loop in fini/syntax in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5588,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* expand.scm:507: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5512(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,C_SCHEME_FALSE);}

/* k5202 in k5196 in k5186 in loop in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5203,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* expand.scm:472: ##sys#append */
t3=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k9117 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(((C_word*)t0)[3]));}

/* k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9110(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9110,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9118,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1242: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[268],((C_word*)t0)[5],lf[269]);}
else{
t3=C_a_i_list(&a,2,lf[71],((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9130,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1245: walk */
t6=((C_word*)((C_word*)t0)[7])[1];
f_9067(t6,t4,((C_word*)t0)[4],t5);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9139,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1246: c */
t3=((C_word*)t0)[11];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[9]);}}

/* k3726 in map-loop318 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3727(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3727,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3702(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3702(t6,((C_word*)t0)[5],t5);}}

/* k7721 in k7628 */
static void C_fcall f_7723(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7723,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[203],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,1,t3));}
else{
t2=C_a_i_list(&a,2,lf[203],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,1,t3));}}

/* k4102 in k4100 */
static void C_ccall f_4103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4100 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4103,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=(C_truep(t3)?C_SCHEME_FALSE:C_eqp(((C_word*)t0)[4],t1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4114,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4117,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:240: symbol->string */
t7=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[5]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}}

/* ##sys#globalize in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3735,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3741,a[2]=t5,a[3]=t3,a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3741(t7,t1,t2);}

/* k7711 in k7628 */
static void C_ccall f_7712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:146: process-match */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_FALSE);}

/* k9415 in map-loop1950 in k9356 in k9338 in k9318 in k9309 */
static void C_ccall f_9416(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9416,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9391(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9391(t6,((C_word*)t0)[5],t5);}}

/* k4982 in k4815 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4984(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4984,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
switch(t2){
case C_fix(0):
/* expand.scm:422: err */
t3=((C_word*)t0)[3];
f_4531(t3,((C_word*)t0)[4],lf[82]);
case C_fix(1):
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* expand.scm:423: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4557(t4,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);
case C_fix(2):
/* expand.scm:424: err */
t3=((C_word*)t0)[3];
f_4531(t3,((C_word*)t0)[4],lf[83]);
default:
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[10]);
/* expand.scm:425: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4557(t4,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[8],((C_word*)t0)[6],t3,((C_word*)t0)[9]);}}
else{
/* expand.scm:426: err */
t2=((C_word*)t0)[3];
f_4531(t2,((C_word*)t0)[4],lf[84]);}}

/* f_4147 */
static void C_ccall f_4147(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4147r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4147r(t0,t1,t2);}}

static void C_ccall f_4147r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4152,a[2]=t2,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:204: k523 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_4140 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4140,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k7493 */
static void C_ccall f_7495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7495,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[45],((C_word*)((C_word*)t0)[2])[1]);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,1,t3);
/* synrules.scm:61: ##sys#append */
t5=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],t1,t4);}

/* k6210 in k6195 in k6193 in k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:656: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[124],t1,lf[125]);}

/* k9600 in k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9602,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[98],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9586,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1180: expand */
t6=((C_word*)((C_word*)t0)[5])[1];
f_9539(t6,t5,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* map-loop1858 in k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_fcall f_9604(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9604,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9629,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1176: g1864 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4135 */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4135,2,t0,t1);}
/* expand.scm:235: handler */
t2=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* f_4130 */
static void C_ccall f_4130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4130,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k6896 in compare in k6740 */
static void C_ccall f_6898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:818: compare */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6877(4,t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3521 in k3527 in walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k6219 in k6195 in k6193 in k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:660: outstr */
t2=((C_word*)t0)[2];
f_6134(t2,((C_word*)t0)[3],t1);}

/* loop in k6195 in k6193 in k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6225(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6225,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[127]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6238,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* expand.scm:667: symbol->string */
t5=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k6222 in k6195 in k6193 in k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:661: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[126],t1);}

/* f_9285 in k9280 in k9241 in k9220 in simplify in k9064 in k9062 in k9060 */
static void C_ccall f_9285(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9285,3,t0,t1,t2);}
t3=C_i_assq(lf[272],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}

/* k9280 in k9241 in k9220 in simplify in k9064 in k9062 in k9060 */
static void C_ccall f_9281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9281,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9285,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1228: g2048 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_7751 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_7751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7751,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_7755,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=t1,a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],tmp=(C_word)a,a+=19,tmp);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[16])[1],((C_word*)((C_word*)t0)[6])[1]);
t6=C_i_car(t3);
/* synrules.scm:154: process-match */
t7=((C_word*)((C_word*)t0)[15])[1];
((C_proc5)C_fast_retrieve_proc(t7))(5,t7,t4,t5,t6,C_SCHEME_FALSE);}

/* k7754 */
static void C_ccall f_7755(C_word c,C_word t0,C_word t1){
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
C_word ab[75],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7755,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cddr(((C_word*)t0)[6]);
t7=C_i_length(t6);
t8=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[5])[1],t7);
t9=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[8])[1],((C_word*)t0)[3]);
t10=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[5])[1]);
t11=C_a_i_list(&a,2,t9,t10);
t12=((C_word*)t0)[6];
t13=C_u_i_cdr(t12);
t14=C_u_i_cdr(t13);
t15=C_i_length(t14);
t16=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[5])[1],t15);
t17=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_7815,a[2]=t16,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=t11,a[9]=t8,a[10]=t5,a[11]=t2,a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[5],a[17]=t1,tmp=(C_word)a,a+=18,tmp);
t18=((C_word*)t0)[6];
t19=C_u_i_cdr(t18);
t20=C_u_i_cdr(t19);
/* synrules.scm:162: process-match */
t21=((C_word*)((C_word*)t0)[18])[1];
((C_proc5)C_fast_retrieve_proc(t21))(5,t21,t17,((C_word*)((C_word*)t0)[8])[1],t20,C_SCHEME_TRUE);}

/* k3527 in walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3528,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* expand.scm:114: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3461(t6,t3,t5);}

/* f_4152 */
static void C_ccall f_4152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4152,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k9628 in map-loop1858 in k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9629(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9629,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9604(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9604(t6,((C_word*)t0)[5],t5);}}

/* k9295 in k9064 in k9062 in k9060 */
static void C_ccall f_9296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1274: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9067(t3,((C_word*)t0)[4],t2,C_fix(0));}

/* k7202 in k7161 in mirror-rename in k6740 */
static void C_ccall f_7204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7204,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7208,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:868: g1540 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t1);}
else{
/* expand.scm:882: rename */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6743(3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* f_7208 in k7202 in k7161 in mirror-rename in k6740 */
static void C_ccall f_7208(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7208,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_7200 in k7161 in mirror-rename in k6740 */
static void C_ccall f_7200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7200,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k5186 in loop in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5188,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5197,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:472: reverse */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* expand.scm:473: loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_5170(t5,((C_word*)t0)[2],t3,t4);}}

/* k4827 in k4815 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4828(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
/* expand.scm:397: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4557(t3,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[5],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);}
else{
/* expand.scm:398: err */
t3=((C_word*)t0)[7];
f_4531(t3,((C_word*)t0)[4],lf[76]);}}

/* loop in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5170(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5170,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5188,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t4))){
t6=C_u_i_car(t4);
if(C_truep(C_i_symbolp(t6))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5223,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:468: comp */
t8=((C_word*)((C_word*)t0)[4])[1];
f_5093(t8,t7,lf[95],t6);}
else{
t7=t5;
f_5188(2,t7,C_SCHEME_FALSE);}}
else{
t6=t5;
f_5188(2,t6,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[98],((C_word*)t0)[5]));}}

/* k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in ... */
static void C_ccall f_7437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7437,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[200]);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7442,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:96: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[203]);}

/* k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in ... */
static void C_ccall f_7430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7430,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[198]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[199]);
t5=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7437,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[31],a[29]=((C_word*)t0)[32],a[30]=((C_word*)t0)[33],a[31]=((C_word*)t0)[34],a[32]=((C_word*)t0)[35],a[33]=((C_word*)t0)[36],a[34]=((C_word*)t0)[37],a[35]=((C_word*)t0)[38],a[36]=((C_word*)t0)[39],a[37]=((C_word*)t0)[40],a[38]=((C_word*)t0)[41],a[39]=((C_word*)t0)[2],a[40]=((C_word*)t0)[42],a[41]=((C_word*)t0)[3],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[4],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:94: r */
t6=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[214]);}

/* f_9977 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9977(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9977,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9980,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9988,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(t2);
if(C_truep(C_i_pairp(t7))){
t8=C_i_cadr(t2);
t9=t6;
f_9988(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_9988(t8,C_SCHEME_FALSE);}}

/* k9974 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1025: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[55],C_SCHEME_END_OF_LIST,t1);}

/* k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in ... */
static void C_ccall f_7425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7425,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[197]);
t4=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7430,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[2],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:90: r */
t5=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[215]);}

/* k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in ... */
static void C_ccall f_7421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7421,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7425,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[2],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:88: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[88]);}

/* k3542 in walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3543(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3543,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3552,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li8),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_3552(t8,((C_word*)t0)[6],C_fix(0));}

/* k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in ... */
static void C_ccall f_7417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7417,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7421,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[2],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:87: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[55]);}

/* k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in ... */
static void C_ccall f_7413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7413,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7417,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[2],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:86: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[216]);}

/* k4815 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4816(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4816,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[65]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4828,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t4,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
t7=t6;
f_4828(t7,C_SCHEME_UNDEFINED);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[9],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:395: macro-alias */
f_3402(t7,lf[77],((C_word*)t0)[10]);}}
else{
t6=C_eqp(t2,lf[64]);
if(C_truep(t6)){
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[4],C_fix(1)))){
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4862,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t4))){
t8=C_u_i_car(t4);
t9=t7;
f_4862(t9,C_i_symbolp(t8));}
else{
t8=t7;
f_4862(t8,C_SCHEME_FALSE);}}
else{
/* expand.scm:407: err */
t7=((C_word*)t0)[8];
f_4531(t7,((C_word*)t0)[6],lf[79]);}}
else{
t7=C_eqp(t2,lf[66]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4902,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[12],a[7]=t4,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=((C_word*)((C_word*)t0)[9])[1];
if(C_truep(t9)){
t10=t8;
f_4902(t10,C_SCHEME_UNDEFINED);}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4921,a[2]=((C_word*)t0)[9],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:409: macro-alias */
f_3402(t10,lf[77],((C_word*)t0)[10]);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t8=((C_word*)t0)[4];
switch(t8){
case C_fix(0):
t9=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[7]);
/* expand.scm:416: loop */
t10=((C_word*)((C_word*)t0)[5])[1];
f_4557(t10,((C_word*)t0)[6],C_fix(0),t9,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4);
case C_fix(1):
t9=C_a_i_list2(&a,2,((C_word*)t0)[2],C_SCHEME_FALSE);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[12]);
/* expand.scm:417: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4557(t11,((C_word*)t0)[6],C_fix(1),((C_word*)t0)[7],t10,C_SCHEME_END_OF_LIST,t4);
case C_fix(2):
/* expand.scm:418: err */
t9=((C_word*)t0)[8];
f_4531(t9,((C_word*)t0)[6],lf[81]);
default:
t9=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[13]);
/* expand.scm:419: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4557(t11,((C_word*)t0)[6],C_fix(3),((C_word*)t0)[7],((C_word*)t0)[12],t10,t4);}}
else{
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4984,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=t4,a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t9=C_u_i_length(((C_word*)t0)[2]);
t10=C_eqp(C_fix(2),t9);
if(C_truep(t10)){
t11=C_i_car(((C_word*)t0)[2]);
t12=t8;
f_4984(t12,C_i_symbolp(t11));}
else{
t11=t8;
f_4984(t11,C_SCHEME_FALSE);}}
else{
t9=t8;
f_4984(t9,C_SCHEME_FALSE);}}}}}}

/* k9857 in k9842 */
static void C_ccall f_9858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9858,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[284],((C_word*)t0)[3],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[50],((C_word*)t0)[5],t3));}

/* k9937 */
static void C_ccall f_9938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9938,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[102],t2));}

/* f_9935 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9935,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9938,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1056: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[307],t2,lf[308]);}

/* k9932 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1051: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[307],C_SCHEME_END_OF_LIST,t1);}

/* k9200 in k9155 in k9137 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9204,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1259: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9067(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9203 in k9200 in k9155 in k9137 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9204,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[194],((C_word*)t0)[3],t1));}

/* f_10201 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10201,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10204,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:969: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[327],t2,lf[328]);}

/* k4842 in k4815 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4828(t3,t2);}

/* k10203 */
static void C_ccall f_10204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10204,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[98],t2));}

/* f_4002 in call-handler in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4002,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4096,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li42),tmp=(C_word)a,a+=10,tmp);
/* expand.scm:204: with-exception-handler */
t5=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k9986 */
static void C_fcall f_9988(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* expand.scm:1031: ##sys#check-syntax */
t2=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[55],((C_word*)t0)[3],lf[314]);}
else{
/* expand.scm:1032: ##sys#check-syntax */
t2=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[55],((C_word*)t0)[3],lf[315]);}}

/* f_4007 */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4007,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4012,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:204: k523 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k9979 */
static void C_ccall f_9980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9980,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[50],t3));}

/* simplify in k9064 in k9062 in k9060 */
static void C_fcall f_9217(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9217,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9221,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1261: match-expression */
f_5934(t3,t2,lf[279],lf[280]);}

/* fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5158(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5158,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_nullp(t2);
t8=(C_truep(t7)?C_i_nullp(t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5170,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5170(t12,t1,t6,C_SCHEME_END_OF_LIST);}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5234,a[2]=t1,a[3]=t6,a[4]=t5,a[5]=t4,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:474: reverse */
t10=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}}

/* f_10215 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10215,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10218,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:961: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[300],t2,lf[329]);}

/* k10212 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:956: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[300],C_SCHEME_END_OF_LIST,t1);}

/* f_4012 */
static void C_ccall f_4012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4021,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[33]))){
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=t2;
f_4021(t4,C_i_memq(lf[40],t3));}
else{
t3=t2;
f_4021(t3,C_SCHEME_FALSE);}}

/* k10217 */
static void C_ccall f_10218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10218,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[284],t2));}

/* f_9225 in k9220 in simplify in k9064 in k9062 in k9060 */
static void C_ccall f_9225(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9225,3,t0,t1,t2);}
t3=C_i_assq(lf[272],t2);
t4=C_i_cdr(t3);
t5=C_a_i_list(&a,2,lf[273],t4);
/* expand.scm:1262: simplify */
t6=((C_word*)((C_word*)t0)[2])[1];
f_9217(t6,t1,t5);}

/* k9220 in simplify in k9064 in k9062 in k9060 */
static void C_ccall f_9221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9221,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9225,a[2]=((C_word*)t0)[2],a[3]=((C_word)li173),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1228: g2033 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1263: match-expression */
f_5934(t2,((C_word*)t0)[4],lf[277],lf[278]);}}

/* k9965 */
static void C_ccall f_9966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9966,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[52],t2));}

/* f_9963 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9963,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9966,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1040: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[312],t2,lf[313]);}

/* k9960 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1035: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[312],C_SCHEME_END_OF_LIST,t1);}

/* k5196 in k5186 in loop in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5203,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:472: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5671(t3,t2,((C_word*)t0)[4]);}

/* k5193 in k5186 in loop in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5194,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[98],t1));}

/* k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in ... */
static void C_ccall f_7409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7409,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7413,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[2],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:85: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[217]);}

/* k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in ... */
static void C_ccall f_7405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7405,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7409,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[2],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:84: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[218]);}

/* k10259 */
static void C_ccall f_10260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10260,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[72],t2));}

/* k10268 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:923: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[333],C_SCHEME_END_OF_LIST,t1);}

/* k4019 */
static void C_fcall f_4021(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4021,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4035,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4035(t8,t3,t4);}
else{
t2=((C_word*)t0)[2];
/* expand.scm:207: ##sys#abort */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}}

/* f_10271 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10271,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[334]+1);
/* expand.scm:926: g1627 */
((C_proc10)C_fast_retrieve_proc(*((C_word*)lf[334]+1)))(10,*((C_word*)lf[334]+1),t1,t2,t3,t4,*((C_word*)lf[1]+1),*((C_word*)lf[19]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[333]);}

/* k8905 in k8866 in k8830 in test in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8907,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* expand.scm:1316: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8801(t4,t2,t3);}
else{
/* expand.scm:1317: err */
t2=((C_word*)((C_word*)t0)[5])[1];
f_8792(t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k10277 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:916: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[335],C_SCHEME_END_OF_LIST,t1);}

/* k4049 in copy in k4019 */
static void C_fcall f_4051(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4051,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_i_car(((C_word*)t0)[2]);
/* expand.scm:223: string-append */
t5=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,lf[37],t3,lf[38],t4);}
else{
/* expand.scm:229: copy */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4035(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k9900 */
static void C_ccall f_9901(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9901,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_a_i_list(&a,2,lf[305],t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9920,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_u_i_cdr(t2);
t8=C_a_i_list(&a,1,t3);
/* expand.scm:1059: ##sys#append */
t9=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[100],t2,t3));}}

/* f_10280 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10280,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[334]+1);
/* expand.scm:919: g1613 */
((C_proc10)C_fast_retrieve_proc(*((C_word*)lf[334]+1)))(10,*((C_word*)lf[334]+1),t1,t2,t3,t4,*((C_word*)lf[2]+1),*((C_word*)lf[227]+1),C_SCHEME_TRUE,C_SCHEME_FALSE,lf[335]);}

/* k10286 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:910: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[336],C_SCHEME_END_OF_LIST,t1);}

/* f_10289 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10289,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[334]+1);
/* expand.scm:913: g1599 */
((C_proc10)C_fast_retrieve_proc(*((C_word*)lf[334]+1)))(10,*((C_word*)lf[334]+1),t1,t2,t3,t4,*((C_word*)lf[1]+1),*((C_word*)lf[19]+1),C_SCHEME_FALSE,C_SCHEME_FALSE,lf[336]);}

/* k8973 in map-loop2103 in expand in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8974(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8974,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8949(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8949(t6,((C_word*)t0)[5],t5);}}

/* k8736 in k8617 in k8612 */
static void C_ccall f_8737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1401: ##sys#validate-exports */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[237]+1)))(4,*((C_word*)lf[237]+1),((C_word*)t0)[2],t1,lf[242]);}

/* k8748 in k8612 */
static void C_ccall f_8749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1361: c */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],t1,t2);}

/* ##sys#defjam-error in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5072,3,t0,t1,t2);}
/* expand.scm:434: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[90],t2);}

/* comp in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5093(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5093,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5097,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:450: lookup */
f_3384(t4,t3,((C_word*)t0)[2]);}

/* k9173 in k9164 in k9155 in k9137 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9174,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[70],((C_word*)t0)[3],t1));}

/* k7659 in k7628 */
static void C_ccall f_7660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7660,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,1,t4));}

/* k5096 in comp in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)t0)[2];
t4=C_eqp(t3,lf[95]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t1)?C_eqp(t1,*((C_word*)lf[91]+1)):C_eqp(((C_word*)t0)[2],((C_word*)t0)[4])));}
else{
t5=C_eqp(t3,lf[96]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t1)?C_eqp(t1,*((C_word*)lf[92]+1)):C_eqp(((C_word*)t0)[2],((C_word*)t0)[4])));}
else{
t6=C_eqp(t3,lf[97]);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?(C_truep(t1)?C_eqp(t1,*((C_word*)lf[93]+1)):C_eqp(((C_word*)t0)[2],((C_word*)t0)[4])):C_eqp(((C_word*)t0)[2],((C_word*)t0)[4])));}}}}

/* k7662 in k7628 */
static void C_ccall f_7663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7666,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t4=((C_word*)t0)[5];
t5=C_u_i_cdr(t4);
/* synrules.scm:142: process-match */
t6=((C_word*)((C_word*)t0)[6])[1];
((C_proc5)C_fast_retrieve_proc(t6))(5,t6,t2,t3,t5,C_SCHEME_FALSE);}

/* k7665 in k7662 in k7628 */
static void C_ccall f_7666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1441: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6207 in k6195 in k6193 in k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:655: outstr */
t2=((C_word*)t0)[2];
f_6134(t2,((C_word*)t0)[3],t1);}

/* f_8779 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in ... */
static void C_ccall f_8779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8779,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8784,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1290: r */
t7=t3;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,lf[214]);}

/* k8776 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in ... */
static void C_ccall f_8777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1284: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[258],C_SCHEME_END_OF_LIST,t1);}

/* k9147 in k9137 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9148,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,lf[194],((C_word*)t0)[3],t1));}

/* k3788 in loop in k3751 in loop1 in globalize in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3790(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_cdr(t3));}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* expand.scm:148: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3774(t4,((C_word*)t0)[3],t3);}}

/* k8783 */
static void C_ccall f_8784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8786,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1291: r */
t3=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[263]);}

/* k4863 in k4860 in k4815 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4864(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:405: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4557(t5,((C_word*)t0)[5],C_fix(2),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_END_OF_LIST,t4);}

/* k8787 in k8785 in k8783 */
static void C_ccall f_8788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1293: r */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[223]);}

/* k8785 in k8783 */
static void C_ccall f_8786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1292: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[220]);}

/* k9155 in k9137 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9157(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9157,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9165,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1251: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[270],((C_word*)t0)[3],lf[271]);}
else{
t3=C_a_i_list(&a,2,lf[71],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9189,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t5=C_i_cdr(((C_word*)t0)[3]);
t6=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1256: walk */
t7=((C_word*)((C_word*)t0)[5])[1];
f_9067(t7,t4,t5,t6);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9201,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1259: walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9067(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4860 in k4815 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4862(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4862,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t3)){
t4=t2;
f_4864(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,t4);
t6=t2;
f_4864(t6,t5);}}
else{
/* expand.scm:406: err */
t2=((C_word*)t0)[9];
f_4531(t2,((C_word*)t0)[5],lf[78]);}}

/* k9055 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in ... */
static void C_ccall f_9056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1224: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[267],C_SCHEME_END_OF_LIST,t1);}

/* f_9058 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in ... */
static void C_ccall f_9058(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9058,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9061,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1229: r */
t6=t3;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[267]);}

/* k8754 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in ... */
static void C_ccall f_8755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1346: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[255],C_SCHEME_END_OF_LIST,t1);}

/* f_8757 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in ... */
static void C_ccall f_8757(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8757,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[256],t5,C_SCHEME_TRUE));}

/* k6080 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6081,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6086,a[2]=t4,a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6086(t6,((C_word*)t0)[2],t2);}

/* loop in k6080 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6086(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6086,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
t4=C_eqp(lf[133],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6105,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:629: cadar */
t6=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:630: loop */
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* loop in k3751 in loop1 in globalize in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3774(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3774,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* expand.scm:146: ##sys#alias-global-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(5,*((C_word*)lf[18]+1),t1,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3790,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=C_u_i_cdr(t7);
t9=t3;
f_3790(t9,C_i_symbolp(t8));}
else{
t6=t3;
f_3790(t6,C_SCHEME_FALSE);}}}

/* f_3749 in loop1 in globalize in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3749,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k9060 */
static void C_ccall f_9061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9063,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1230: r */
t3=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[268]);}

/* k9062 in k9060 */
static void C_ccall f_9063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9065,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1231: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[270]);}

/* k9064 in k9062 in k9060 */
static void C_ccall f_9065(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9065,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9067,a[2]=t7,a[3]=t5,a[4]=((C_word)li171),tmp=(C_word)a,a+=5,tmp));
t9=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9076,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word)li172),tmp=(C_word)a,a+=8,tmp));
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9217,a[2]=t7,a[3]=((C_word)li176),tmp=(C_word)a,a+=4,tmp));
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9296,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1273: ##sys#check-syntax */
t12=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,lf[267],((C_word*)t0)[5],lf[281]);}

/* walk in k9064 in k9062 in k9060 */
static void C_fcall f_9067(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9067,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9074,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1232: walk1 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9076(t5,t4,t2,t3);}

/* k8765 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in ... */
static void C_ccall f_8766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1338: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[257],C_SCHEME_END_OF_LIST,t1);}

/* f_8768 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in ... */
static void C_ccall f_8768(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8768,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[256],t5,C_SCHEME_FALSE));}

/* k5867 in k5844 in k5821 in k5810 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5868,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* expand.scm:574: fini */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5158(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[10]);
/* expand.scm:575: loop */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5677(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* loop1 in globalize in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3741(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3741,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3749,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3753,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:141: g423 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[5]);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in k6354 in lambda-list? in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6363(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6363,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_symbolp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6382,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:709: keyword? */
t5=*((C_word*)lf[146]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
if(C_truep(C_i_symbolp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6401,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:712: keyword? */
t7=*((C_word*)lf[146]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}}

/* k9073 in walk in k9064 in k9062 in k9060 */
static void C_ccall f_9074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1232: simplify */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9217(t2,((C_word*)t0)[3],t1);}

/* walk1 in k9064 in k9062 in k9060 */
static void C_fcall f_9076(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9076,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9089,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9092,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1235: vector->list */
t6=*((C_word*)lf[175]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9110,a[2]=t3,a[3]=t1,a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1240: c */
t8=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t7,((C_word*)t0)[3],t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[71],t2));}}}

/* k3616 in k3605 in k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:133: append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_3612 in k3605 in k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3612(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3612,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* ##sys#canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5081(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5081r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5081r(t0,t1,t2,t3);}}

static void C_ccall f_5081r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5085,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:448: ##sys#current-environment */
t5=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_5085(2,t5,C_i_car(t3));}}

/* k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5085(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5085,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5093,a[2]=t1,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t17=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5158,a[2]=t15,a[3]=t9,a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp));
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5503,a[2]=t11,a[3]=t9,a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5671,a[2]=t1,a[3]=t13,a[4]=t11,a[5]=t5,a[6]=t9,a[7]=((C_word)li82),tmp=(C_word)a,a+=8,tmp));
/* expand.scm:577: expand */
t20=((C_word*)t15)[1];
f_5671(t20,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10038 in k10035 in k10029 in k10025 in k10023 */
static void C_ccall f_10039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10039,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[316],((C_word*)t0)[4],t2));}

/* k10035 in k10029 in k10025 in k10023 */
static void C_ccall f_10037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10037,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10048,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10054,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1011: r */
t5=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[96]);}

/* k10029 in k10025 in k10023 */
static void C_ccall f_10031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10031,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10037,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10057,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1010: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[236]+1)))(2,*((C_word*)lf[236]+1),t4);}

/* k5851 in k5844 in k5821 in k5810 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:568: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5677(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k3751 in loop1 in globalize in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3753,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:138: g427 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3774,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3774(t5,((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* f_3757 in k3751 in loop1 in globalize in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3757(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3757,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* expand.scm:142: loop1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3741(t3,t1,t2);}
else{
t3=((C_word*)t0)[3];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10046 in k10035 in k10029 in k10025 in k10023 */
static void C_ccall f_10048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10048,2,t0,t1);}
if(C_truep(t1)){
/* expand.scm:1012: ##sys#defjam-error */
t2=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_i_car(((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[316],((C_word*)t0)[6],t2));}}

/* k9091 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1235: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9067(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3630 in k3647 in map-loop381 in k3605 in k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3631(C_word t0,C_word t1){
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
f_3620(t5,((C_word*)t0)[7],t3,t4);}

/* k9164 in k9155 in k9137 in k9108 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9165,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9174,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1252: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9067(t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k10058 */
static void C_ccall f_10059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1016: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[96],((C_word*)t0)[3],lf[318]);}

/* k10056 in k10029 in k10025 in k10023 */
static void C_ccall f_10057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1010: ##sys#register-export */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[320]+1)))(4,*((C_word*)lf[320]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10053 in k10035 in k10029 in k10025 in k10023 */
static void C_ccall f_10054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1011: c */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3605 in k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3607(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3607,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3612,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3620,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li15),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3620(t12,t8,t7,((C_word*)t0)[5]);}

/* k6052 in expand-curried-define in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6053,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,lf[95],((C_word*)((C_word*)t0)[3])[1],t1));}

/* k5824 in k5821 in k5810 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5825,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
/* expand.scm:566: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5677(t6,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t3,t5);}

/* k5821 in k5810 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5823,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:565: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[97],((C_word*)t0)[2],lf[111],C_SCHEME_FALSE,((C_word*)t0)[10]);}
else{
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5846,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* expand.scm:567: comp */
t3=((C_word*)((C_word*)t0)[15])[1];
f_5093(t3,t2,lf[98],((C_word*)t0)[11]);}}

/* k10060 in k10058 */
static void C_ccall f_10061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=C_u_i_car(t3);
t5=C_i_car(((C_word*)t0)[2]);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
/* expand.scm:1018: ##sys#syntax-error-hook */
t7=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,lf[317],((C_word*)t0)[5]);}
else{
t7=t2;
f_10063(2,t7,C_SCHEME_UNDEFINED);}}

/* k10062 in k10060 in k10058 */
static void C_ccall f_10063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10063,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[72],t4);
t6=C_a_i_list(&a,2,lf[23],t5);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[316],t2,t6));}

/* ##sys#syntax-error-hook in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6061(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6061r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6061r(t0,t1,t2);}}

static void C_ccall f_6061r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6068,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:621: ##sys#strip-syntax */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6067 in syntax-error-hook in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[116]+1),lf[117],t1);}

/* k5813 in k5810 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:562: fini/syntax */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5503(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k5810 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5812,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:561: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[96],((C_word*)t0)[9],lf[110],((C_word*)t0)[10]);}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5823,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
/* expand.scm:563: comp */
t3=((C_word*)((C_word*)t0)[16])[1];
f_5093(t3,t2,lf[97],((C_word*)t0)[13]);}}

/* f_9041 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in ... */
static void C_ccall f_9041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9041,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9044,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1281: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[264],t2,lf[266]);}

/* k9043 */
static void C_ccall f_9044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9044,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[265],t3));}

/* map-loop381 in k3605 in k3582 in extend-se in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3620(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3620,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3648,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:133: g387 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* ##sys#syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6070(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6070,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(*((C_word*)lf[115]+1)))){
/* expand.scm:632: ##sys#syntax-error-hook */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6132,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:633: open-output-string */
t5=*((C_word*)lf[136]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5844 in k5821 in k5810 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5846,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_cdr(((C_word*)t0)[8]);
/* expand.scm:568: ##sys#append */
t4=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[9]);}
else{
t2=C_i_memq(((C_word*)t0)[10],((C_word*)t0)[4]);
t3=(C_truep(t2)?t2:C_i_memq(((C_word*)t0)[10],((C_word*)t0)[6]));
if(C_truep(t3)){
/* expand.scm:571: fini */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5158(t4,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[12]);}
else{
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5868,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:572: ##sys#expand-0 */
t5=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[8],((C_word*)t0)[13],((C_word*)t0)[14]);}}}

/* k10095 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:973: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[95],C_SCHEME_END_OF_LIST,t1);}

/* f_10098 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10098,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10101,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:978: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[95],t2,lf[326]);}

/* k4187 in expand in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:258: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* ##sys#extend-macro-environment in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3857,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3861,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:163: ##sys#macro-environment */
t6=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in ... */
static void C_ccall f_7442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7442,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7446,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[2],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:97: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[213]);}

/* k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in ... */
static void C_ccall f_7446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7446,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7450,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:98: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[212]);}

/* k7890 in k7887 in k7876 */
static void C_ccall f_7891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:180: append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k9088 in walk1 in k9064 in k9062 in k9060 */
static void C_ccall f_9089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9089,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[190],t1));}

/* k3860 in extend-macro-environment in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:164: ##sys#ensure-transformer */
t3=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k3862 in k3860 in extend-macro-environment in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3865,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:165: lookup */
f_3384(t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3864 in k3862 in k3860 in extend-macro-environment in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3865,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:162: g468 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3883,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
/* expand.scm:172: ##sys#macro-environment */
t6=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}}

/* f_3869 in k3864 in k3862 in k3860 in extend-macro-environment in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3869(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3869,3,t0,t1,t2);}
t3=C_i_set_car(t2,((C_word*)t0)[2]);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_i_set_car(t5,((C_word*)t0)[3]);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}

/* f_10229 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10229(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10229,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10232,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:953: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[133],t2,lf[330]);}

/* f_4124 */
static void C_ccall f_4124(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4124,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t3)[1];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}

/* k10226 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:948: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[133],C_SCHEME_END_OF_LIST,t1);}

/* k6381 in loop in k6354 in lambda-list? in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k4351 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4352,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li49),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:271: g653 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[8],t1);}
else{
/* expand.scm:295: expand */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4163(t2,((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}}

/* k10231 */
static void C_ccall f_10232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10232,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[202],t2));}

/* f_4356 in k4351 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4356(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4356,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:289: call-handler */
t7=((C_word*)((C_word*)t0)[7])[1];
f_3989(t7,t3,((C_word*)t0)[4],t4,((C_word*)t0)[2],t6,C_SCHEME_TRUE);}

/* k4358 */
static void C_ccall f_4359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4359,2,t0,t1);}
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
/* expand.scm:290: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4163(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4370,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[58]+1))){
/* expand.scm:293: ##sys#compiler-syntax-hook */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],t1);}
else{
/* expand.scm:294: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4204(t4,((C_word*)t0)[4],t1);}}}

/* k9241 in k9220 in simplify in k9064 in k9062 in k9060 */
static void C_ccall f_9242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9242,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li174),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1228: g2040 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9281,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1270: match-expression */
f_5934(t2,((C_word*)t0)[3],lf[275],lf[276]);}}

/* f_9246 in k9241 in k9220 in simplify in k9064 in k9062 in k9060 */
static void C_ccall f_9246(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9246,3,t0,t1,t2);}
t3=C_i_assq(lf[274],t2);
t4=C_i_length(t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(32)))){
t5=C_i_assq(lf[272],t2);
t6=C_i_cdr(t5);
t7=C_i_cdr(t3);
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,lf[273],t8);
/* expand.scm:1267: simplify */
t10=((C_word*)((C_word*)t0)[2])[1];
f_9217(t10,t1,t9);}
else{
t5=((C_word*)t0)[3];
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k8117 in k8114 in k8005 */
static void C_ccall f_8118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8118,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t1));}

/* k8114 in k8005 */
static void C_ccall f_8115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* synrules.scm:237: process-template */
t5=((C_word*)((C_word*)t0)[5])[1];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t2,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* f_10243 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10243(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10243,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10246,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:945: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[203],t2,lf[331]);}

/* k10240 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:940: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[203],C_SCHEME_END_OF_LIST,t1);}

/* k3882 in k3864 in k3862 in k3860 in extend-macro-environment in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k10245 */
static void C_ccall f_10246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10246,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[71],t2));}

/* f_4306 in k4243 in k4233 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4306(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4306,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}

/* k3894 in copy-macro in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[27]+1),((C_word*)t0)[3],t1);}

/* ##sys#copy-macro in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3891(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3891,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3895,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3901,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:177: ##sys#macro-environment */
t6=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* f_10257 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10257(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10257,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10260,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:937: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[216],t2,lf[332]);}

/* k10254 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:932: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[216],C_SCHEME_END_OF_LIST,t1);}

/* k7488 */
static void C_ccall f_7489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7489,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],t3);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[23],t4));}

/* k10008 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:999: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[96],C_SCHEME_END_OF_LIST,t1);}

/* expand in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4163(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4163,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_listp(t3))){
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4188,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(t4);
t7=t4;
t8=C_u_i_car(t7);
/* expand.scm:260: call-handler */
t9=((C_word*)((C_word*)t0)[2])[1];
f_3989(t9,t5,t2,t6,t3,t8,C_SCHEME_FALSE);}
else{
/* expand.scm:262: values */
C_values(4,0,t1,t3,C_SCHEME_FALSE);}}
else{
/* expand.scm:256: ##sys#syntax-error-hook */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[49],t3);}}

/* k4160 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tmp22868 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k6342 in k6330 in err in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:701: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[141],((C_word*)t0)[3],lf[142],t1,lf[143],((C_word*)t0)[4]);}

/* k6348 in k6330 in err in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:702: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[144],t1,lf[145],((C_word*)t0)[3]);}

/* f_4394 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4394,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k7161 in mirror-rename in k6740 */
static void C_ccall f_7162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7162,2,t0,t1);}
t2=f_7095(((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7168,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:868: g1523 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[5],t2);}
else{
t3=t1;
if(C_truep(t3)){
if(C_truep(C_i_pairp(t1))){
/* expand.scm:875: rename */
t4=((C_word*)((C_word*)t0)[6])[1];
f_6743(3,t4,((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7200,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7204,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:876: g1536 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[3],lf[7]);}}
else{
/* expand.scm:873: rename */
t4=((C_word*)((C_word*)t0)[6])[1];
f_6743(3,t4,((C_word*)t0)[5],((C_word*)t0)[3]);}}}

/* f_7461 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_7461(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7461,3,t0,t1,t2);}
/* synrules.scm:104: c */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* f_7467 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_7467(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[50],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7467,3,t0,t1,t2);}
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],t4);
t6=C_a_i_list(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7489,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t6,a[5]=((C_word*)t0)[9],a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)((C_word*)t0)[10])[1];
t13=C_i_check_list_2(t2,lf[16]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[11],a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7506,a[2]=t11,a[3]=t16,a[4]=t9,a[5]=t12,a[6]=((C_word)li135),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_7506(t18,t14,t2);}

/* lambda-list? in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6351(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6351,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6355,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:706: ##sys#extended-lambda-list? */
t4=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* f_10011 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10011,5,t0,t1,t2,t3,t4);}
t5=C_i_cadr(t2);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
if(C_truep(C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10059,a[2]=t5,a[3]=t8,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1015: ##sys#check-syntax */
t10=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[96],t5,lf[319]);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10024,a[2]=t5,a[3]=t8,a[4]=t1,a[5]=t2,a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1007: ##sys#check-syntax */
t10=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[96],t5,lf[158]);}}

/* k6354 in lambda-list? in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6355,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6363,a[2]=t3,a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6363(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k7153 in mirror-rename in k6740 */
static void C_ccall f_7154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:865: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7119(t2,((C_word*)t0)[3],t1);}

/* k7150 in mirror-rename in k6740 */
static void C_ccall f_7151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:865: list->vector */
t2=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_7168 in k7161 in mirror-rename in k6740 */
static void C_ccall f_7168(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7168,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}

/* k10023 */
static void C_ccall f_10024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1008: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[96],((C_word*)t0)[3],lf[321]);}

/* k10025 in k10023 */
static void C_ccall f_10026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10027,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1009: g1708 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[5]);}

/* f_10027 in k10025 in k10023 */
static void C_ccall f_10027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10027,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in ... */
static void C_ccall f_7450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7450,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7454,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:99: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[211]);}

/* k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in ... */
static void C_ccall f_7454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7454,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|50,a[1]=(C_word)f_7459,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[2],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],tmp=(C_word)a,a+=51,tmp);
/* synrules.scm:101: r */
t4=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[52]);}

/* k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in ... */
static void C_ccall f_7459(C_word c,C_word t0,C_word t1){
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
C_word ab[119],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7459,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7461,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li134),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7467,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word)li136),tmp=(C_word)a,a+=13,tmp));
t5=C_mutate(((C_word *)((C_word*)t0)[14])+1,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7542,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[18],a[5]=((C_word*)t0)[19],a[6]=((C_word*)t0)[20],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[21],a[9]=((C_word)li138),tmp=(C_word)a,a+=10,tmp));
t6=C_mutate(((C_word *)((C_word*)t0)[21])+1,(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_7599,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[23],a[6]=((C_word*)t0)[24],a[7]=((C_word*)t0)[25],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[26],a[13]=((C_word*)t0)[27],a[14]=((C_word*)t0)[28],a[15]=((C_word*)t0)[29],a[16]=((C_word*)t0)[30],a[17]=((C_word*)t0)[31],a[18]=((C_word)li139),tmp=(C_word)a,a+=19,tmp));
t7=C_mutate(((C_word *)((C_word*)t0)[23])+1,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_7751,a[2]=((C_word*)t0)[32],a[3]=((C_word*)t0)[33],a[4]=((C_word*)t0)[34],a[5]=((C_word*)t0)[35],a[6]=((C_word*)t0)[36],a[7]=((C_word*)t0)[37],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[38],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[39],a[15]=((C_word*)t0)[21],a[16]=((C_word*)t0)[26],a[17]=((C_word)li140),tmp=(C_word)a,a+=18,tmp));
t8=C_mutate(((C_word *)((C_word*)t0)[20])+1,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7850,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[24],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[40],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[26],a[9]=((C_word*)t0)[28],a[10]=((C_word*)t0)[31],a[11]=((C_word)li142),tmp=(C_word)a,a+=12,tmp));
t9=C_mutate(((C_word *)((C_word*)t0)[18])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7971,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[18],a[4]=((C_word*)t0)[41],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[42],a[7]=((C_word*)t0)[43],a[8]=((C_word*)t0)[44],a[9]=((C_word*)t0)[45],a[10]=((C_word*)t0)[46],a[11]=((C_word*)t0)[47],a[12]=((C_word*)t0)[48],a[13]=((C_word)li144),tmp=(C_word)a,a+=14,tmp));
t10=C_mutate(((C_word *)((C_word*)t0)[19])+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8142,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[31],a[5]=((C_word)li145),tmp=(C_word)a,a+=6,tmp));
t11=C_mutate(((C_word *)((C_word*)t0)[43])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8212,a[2]=((C_word*)t0)[43],a[3]=((C_word*)t0)[48],a[4]=((C_word)li146),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate(((C_word *)((C_word*)t0)[31])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8293,a[2]=((C_word*)t0)[48],a[3]=((C_word)li147),tmp=(C_word)a,a+=4,tmp));
t13=C_mutate(((C_word *)((C_word*)t0)[48])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8320,a[2]=((C_word*)t0)[3],a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate(((C_word *)((C_word*)t0)[44])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8343,a[2]=((C_word*)t0)[44],a[3]=((C_word*)t0)[48],a[4]=((C_word)li149),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate(((C_word *)((C_word*)t0)[41])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8361,a[2]=((C_word*)t0)[3],a[3]=((C_word)li151),tmp=(C_word)a,a+=4,tmp));
/* synrules.scm:314: make-transformer */
t16=((C_word*)((C_word*)t0)[5])[1];
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,((C_word*)t0)[49],((C_word*)t0)[50]);}

/* mwalk in match-expression in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5938(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5938,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5988,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=C_i_car(t3);
/* expand.scm:593: mwalk */
t14=t4;
t15=t6;
t16=t7;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=C_i_assq(t3,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5951,a[2]=t2,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:587: g1174 */
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t4);}
else{
if(C_truep(C_i_memq(t3,((C_word*)t0)[4]))){
t5=C_a_i_cons(&a,2,t3,t2);
t6=C_a_i_cons(&a,2,t5,((C_word*)((C_word*)t0)[3])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_TRUE);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(t2,t3));}}}}

/* match-expression in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5934(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5934,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5938,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6009,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:596: mwalk */
t11=((C_word*)t8)[1];
f_5938(t11,t10,t2,t3);}

/* k7965 in k7876 */
static void C_ccall f_7966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7966,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
/* synrules.scm:195: process-pattern */
t3=((C_word*)((C_word*)t0)[4])[1];
((C_proc6)C_fast_retrieve_proc(t3))(6,t3,((C_word*)t0)[5],t1,t2,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7134 in k7131 in mirror-rename in k6740 */
static void C_ccall f_7135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7135,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7940 in k7876 */
static void C_ccall f_7941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7944,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);
/* synrules.scm:193: process-pattern */
t6=((C_word*)((C_word*)t0)[6])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t2,t4,t5,((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k7131 in mirror-rename in k6740 */
static void C_ccall f_7132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7135,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* expand.scm:863: mirror-rename */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7119(t5,t2,t4);}

/* k7943 in k7940 in k7876 */
static void C_ccall f_7944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:192: append */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_5951 in mwalk in match-expression in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5951,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_equalp(((C_word*)t0)[2],t3));}

/* k8428 in loop in k8408 in macro-subset in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in ... */
static void C_ccall f_8429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8429,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5986 in mwalk in match-expression in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:594: mwalk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5938(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8408 in macro-subset in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in ... */
static void C_ccall f_8409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8409,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8411,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li153),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8411(t5,((C_word*)t0)[3],t1);}

/* k8402 in macro-subset in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in ... */
static void C_ccall f_8403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1451: ##sys#fixup-macro-environment */
t2=*((C_word*)lf[225]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_7901 in k7876 */
static void C_ccall f_7901(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7901,3,t0,t1,t2);}
t3=C_eqp(((C_word*)((C_word*)t0)[2])[1],t2);
if(C_truep(t3)){
/* synrules.scm:184: mapit */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,((C_word*)t0)[4]);}
else{
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],t4,t2);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],t5,((C_word*)t0)[4]);
/* synrules.scm:184: mapit */
t7=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t1,t6);}}

/* k3944 in unregister-macro in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:187: ##sys#macro-environment */
t2=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* ##sys#undefine-macro! in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3979,3,t0,t1,t2);}
/* expand.scm:195: ##sys#unregister-macro */
t3=*((C_word*)lf[30]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k10170 in loop in k10100 */
static void C_ccall f_10171(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10171,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,lf[72],t5);
t7=C_a_i_list3(&a,3,t2,t3,t6);
/* expand.scm:996: loop */
t8=((C_word*)((C_word*)t0)[5])[1];
f_10106(t8,((C_word*)t0)[6],t7);}

/* loop in k3947 in unregister-macro in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3950(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3950,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_caar(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_u_i_cdr(t5));}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3972,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:192: loop */
t12=t7;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}}

/* k3947 in unregister-macro in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3948,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3950,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3950(t5,((C_word*)t0)[3],t1);}

/* k6848 */
static void C_ccall f_6849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6849,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=t1;
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* f_6843 in k6817 */
static void C_ccall f_6843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6843,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k7072 in k6975 in compare in k6740 */
static void C_ccall f_7073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_6980(t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
f_6980(t3,t2);}}

/* copy in k4019 */
static void C_fcall f_4035(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4035,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4051,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_equalp(lf[39],t3))){
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_car(t5);
t8=t6;
f_4051(t8,C_i_stringp(t7));}
else{
t7=t6;
f_4051(t7,C_SCHEME_FALSE);}}
else{
t7=t6;
f_4051(t7,C_SCHEME_FALSE);}}}

/* k4029 in k4019 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=C_a_i_record3(&a,3,lf[33],((C_word*)t0)[2],t1);
/* expand.scm:207: ##sys#abort */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k4059 in k4049 in copy in k4019 */
static void C_ccall f_4060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4060,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[35],t3));}

/* k6862 in k6800 in rename in k6740 */
static void C_ccall f_6863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6863,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=t1;
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* ##sys#expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[22],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3985,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3989,a[2]=t3,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4163,a[2]=t6,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4204,a[2]=t3,a[3]=t8,a[4]=t12,a[5]=t6,a[6]=t4,a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t14=((C_word*)t12)[1];
f_4204(t14,t1,t2);}

/* k10154 in k10123 in k10119 in loop in k10100 */
static void C_ccall f_10155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:985: ##sys#register-export */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[320]+1)))(4,*((C_word*)lf[320]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10151 in k10129 in k10123 in k10119 in loop in k10100 */
static void C_ccall f_10152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:986: c */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* f_4096 */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4096,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li39),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4147,a[2]=((C_word*)t0)[8],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4161,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12867 */
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* f_4098 */
static void C_ccall f_4098(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4101,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4124,a[2]=((C_word*)t0)[3],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4130,a[2]=t6,a[3]=t4,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li37),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4140,a[2]=t4,a[3]=t6,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:234: ##sys#dynamic-wind */
t10=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t2,t7,t8,t9);}
else{
/* expand.scm:236: handler */
t3=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* compare in k6740 */
static void C_ccall f_6877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)tr4,(void*)f_6877,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6898,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=t3;
t8=C_u_i_car(t7);
/* expand.scm:817: compare */
t22=t4;
t23=t6;
t24=t8;
t1=t22;
t2=t23;
t3=t24;
c=4;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_i_vectorp(t2))){
if(C_truep(C_i_vectorp(t3))){
t4=t2;
t5=C_block_size(t4);
t6=t3;
t7=C_block_size(t6);
t8=C_eqp(t5,t7);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6934,a[2]=t5,a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word)li113),tmp=(C_word)a,a+=8,tmp));
t12=((C_word*)t10)[1];
f_6934(t12,t1,C_fix(0),C_SCHEME_TRUE);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=C_i_symbolp(t2);
t5=(C_truep(t4)?C_i_symbolp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6973,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6977,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:827: g1448 */
t8=t6;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t2,lf[5]);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t2,t3));}}}}

/* k6800 in rename in k6740 */
static void C_ccall f_6801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6801,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp);
/* expand.scm:775: g1384 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:809: macro-alias */
f_3402(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* call-handler in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_3989(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3989,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3997,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4002,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[2],a[8]=((C_word)li43),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:204: call-with-current-continuation */
t9=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k10168 in k10162 in loop in k10100 */
static void C_ccall f_10169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:993: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10106(t2,((C_word*)t0)[3],t1);}

/* f_6805 in k6800 in rename in k6740 */
static void C_ccall f_6805(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6805,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6815,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:794: g1396 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[177]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:804: macro-alias */
f_3402(t3,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k9020 in k9004 in expand in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_9022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9022,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[98],t2));}
else{
/* expand.scm:1336: expand */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8927(t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k10162 in loop in k10100 */
static void C_ccall f_10163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:993: ##sys#expand-curried-define */
t3=*((C_word*)lf[104]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k9038 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in ... */
static void C_ccall f_9039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1276: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[264],C_SCHEME_END_OF_LIST,t1);}

/* k3996 in call-handler in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:204: g527 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k10132 in k10129 in k10123 in k10119 in loop in k10100 */
static void C_ccall f_10133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10133,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[100],((C_word*)t0)[4],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[100],((C_word*)t0)[4],lf[324]));}}

/* k10129 in k10123 in k10119 in loop in k10100 */
static void C_ccall f_10131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10146,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10152,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:986: r */
t5=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[95]);}

/* k6817 */
static void C_ccall f_6819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_6822(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6843,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:795: g1400 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[6],lf[176]);}}

/* f_6815 */
static void C_ccall f_6815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6815,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k9787 in k9744 in k9713 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9788,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[284],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k10144 in k10129 in k10123 in k10119 in loop in k10100 */
static void C_ccall f_10146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* expand.scm:987: ##sys#defjam-error */
t2=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_10133(2,t2,C_SCHEME_UNDEFINED);}}

/* k6823 in k6820 in k6817 */
static void C_ccall f_6824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6824,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* k6820 in k6817 */
static void C_ccall f_6822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6822,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:796: macro-alias */
f_3402(t2,((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[6]);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[6]);}}

/* k7628 */
static void C_ccall f_7630(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7630,2,t0,t1);}
if(C_truep(t1)){
/* synrules.scm:137: process-segment-match */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7660,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7663,a[2]=t5,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
t7=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[12])[1],((C_word*)((C_word*)t0)[6])[1]);
t8=((C_word*)t0)[5];
t9=C_u_i_car(t8);
/* synrules.scm:141: process-match */
t10=((C_word*)((C_word*)t0)[11])[1];
((C_proc5)C_fast_retrieve_proc(t10))(5,t10,t6,t7,t9,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[6])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7706,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)((C_word*)t0)[6])[1]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7712,a[2]=((C_word*)t0)[11],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:147: vector->list */
t8=*((C_word*)lf[175]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[5]);}
else{
t2=C_i_nullp(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7723,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[16],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_7723(t4,t2);}
else{
t4=C_booleanp(((C_word*)t0)[5]);
t5=t3;
f_7723(t5,(C_truep(t4)?t4:C_charp(((C_word*)t0)[5])));}}}}}

/* k10123 in k10119 in loop in k10100 */
static void C_ccall f_10125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10125,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10131,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10155,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:985: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[236]+1)))(2,*((C_word*)lf[236]+1),t4);}

/* k10100 */
static void C_ccall f_10101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10101,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10106,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li201),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10106(t5,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* loop in k8408 in macro-subset in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in ... */
static void C_fcall f_8411(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8411,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?t3:C_eqp(t2,((C_word*)t0)[2]));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8429,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* expand.scm:1450: loop */
t10=t6;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k9895 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1059: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[304],C_SCHEME_END_OF_LIST,t1);}

/* f_9898 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_9898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9898,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9901,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1064: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[304],t2,lf[306]);}

/* k9892 */
static void C_ccall f_9893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9893,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,lf[284],((C_word*)t0)[4],t2,C_SCHEME_FALSE));}

/* k9744 in k9713 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9746,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1135: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[77]);}
else{
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[98],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9788,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1145: expand */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9660(t6,t5,((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* k9747 in k9744 in k9713 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9748,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,t2);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,3,lf[208],t4,t1);
t6=C_i_cadddr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[208],t6,t1);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9769,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1142: expand */
t9=((C_word*)((C_word*)t0)[4])[1];
f_9660(t9,t8,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* loop in k10100 */
static void C_fcall f_10106(C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10106,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t3))){
t7=C_i_car(t3);
if(C_truep(C_i_pairp(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10163,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:992: ##sys#check-syntax */
t9=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[95],t2,lf[322]);}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10171,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:995: ##sys#check-syntax */
t9=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[95],t2,lf[323]);}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10120,a[2]=t3,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:983: ##sys#check-syntax */
t8=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[95],t2,lf[325]);}}

/* loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4204(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4204,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_i_symbolp(t4))){
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4221,a[2]=t4,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:268: lookup */
f_3384(t7,t4,((C_word*)t0)[2]);}
else{
/* expand.scm:296: values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}
else{
/* expand.scm:297: values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}

/* k9004 in expand in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_9006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9006,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[262]:C_a_i_cons(&a,2,lf[98],t2)));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1335: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_8801(t3,t2,((C_word*)t0)[7]);}}

/* k7062 in k6986 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_7063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7063,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7051,a[2]=((C_word*)t0)[3],a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:841: g1495 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[4],t2);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k7067 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_7068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_6988(t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
f_6988(t3,t2);}}

/* k9820 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in ... */
static void C_ccall f_9821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1085: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[214],C_SCHEME_END_OF_LIST,t1);}

/* f_9823 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in ... */
static void C_ccall f_9823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9823,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t5);
t7=C_u_i_car(t5);
if(C_truep(C_i_nullp(t6))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9843,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1097: r */
t9=t3;
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t8,lf[77]);}}}

/* f_7051 in k7062 in k6986 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_7051(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7051,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(((C_word*)t0)[2],t3));}

/* k6951 in doloop1434 in compare in k6740 */
static void C_ccall f_6952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_6934(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##sys#check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6303(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_6303r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6303r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6303r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6311,a[2]=t9,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t4,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t9))){
/* expand.scm:691: ##sys#current-environment */
t11=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
t11=t10;
f_6311(2,t11,C_i_car(t9));}}

/* f_8320 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_8320(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8320,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(t2);
/* synrules.scm:296: ellipsis? */
t6=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t1,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* test in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6315(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6315,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6322,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:694: pred */
t6=t3;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t2);}

/* k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6311(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6311,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6315,a[2]=t7,a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6327,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t14=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6351,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t15=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6411,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t16=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6437,a[2]=t7,a[3]=t5,a[4]=t11,a[5]=t9,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t17=C_mutate((C_word*)lf[114]+1 /* (set! ##sys#syntax-error-culprit ...) */,((C_word*)t0)[7]);
t18=t16;
f_6437(t18,t17);}
else{
t17=t16;
f_6437(t17,C_SCHEME_UNDEFINED);}}

/* k9842 */
static void C_ccall f_9843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9843,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9858,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1099: r */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[214]);}

/* err in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6327(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6327,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[114]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6331,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:698: get-line-number */
t5=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,*((C_word*)lf[114]+1));}

/* k9731 in k9716 in k9713 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9732,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[284],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[50],((C_word*)t0)[5],t2));}

/* k4260 in k4312 in k4243 in k4233 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4262,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[53],t2);
/* expand.scm:277: values */
C_values(4,0,((C_word*)t0)[3],t3,C_SCHEME_TRUE);}

/* map-loop620 in k4312 in k4243 in k4233 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4264(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4264,NULL,3,t0,t1,t2);}
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

/* k7038 in k6986 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_7039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7039,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7027,a[2]=((C_word*)t0)[3],a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:834: g1487 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[4],t2);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k6320 in test in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* expand.scm:694: err */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6327(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k6336 in k6330 in err in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:699: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3971 in loop in k3947 in unregister-macro in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3972,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6330 in err in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6343,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:701: symbol->string */
t4=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6349,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:702: symbol->string */
t4=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}}

/* f_9866 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 in ... */
static void C_ccall f_9866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9866,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_TRUE);}
else{
t6=C_i_cdr(t5);
t7=C_u_i_car(t5);
if(C_truep(C_i_nullp(t6))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9893,a[2]=t6,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1083: r */
t9=t3;
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t8,lf[223]);}}}

/* k9863 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 in ... */
static void C_ccall f_9864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1071: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[223],C_SCHEME_END_OF_LIST,t1);}

/* assq-reverse in k6740 */
static C_word C_fcall f_7095(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_cdar(t2);
t4=C_eqp(t3,t1);
if(C_truep(t4)){
t5=t2;
return(C_u_i_car(t5));}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* k10198 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_10199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:964: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[327],C_SCHEME_END_OF_LIST,t1);}

/* k9768 in k9747 in k9744 in k9713 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9769,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[300],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,3,lf[72],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[101],((C_word*)t0)[6],t3));}

/* map-loop899 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5467(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5467,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5492,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:477: g905 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4738 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4744(t6,t2,t1);}

/* k4736 */
static void C_ccall f_4737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(t1,C_fix(1));
/* expand.scm:339: string->keyword */
t3=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_8939 in expand in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8939(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8939,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}

/* k4733 */
static void C_ccall f_4734(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4734,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[71],t1);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_truep(t3)?t3:((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t6))){
t7=((C_word*)t0)[4];
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=C_a_i_cons(&a,2,lf[72],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t4,t11);
t13=C_a_i_cons(&a,2,t2,t12);
t14=C_a_i_cons(&a,2,lf[73],t13);
t15=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list(&a,2,((C_word*)t0)[6],t14));}
else{
t7=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_a_i_cons(&a,2,lf[73],t8);
t10=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,2,((C_word*)t0)[6],t9));}}

/* k4608 in k4583 in k4572 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4609(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4609,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[6],t5);
t7=C_a_i_list(&a,1,t6);
/* expand.scm:353: values */
C_values(4,0,((C_word*)t0)[7],((C_word*)t0)[8],t7);}

/* map-loop2103 in expand in k8789 in k8787 in k8785 in k8783 */
static void C_fcall f_8949(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8949,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8974,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1322: g2109 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8945 in expand in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[25]+1),lf[261],t1);}

/* k8482 in k8448 in fixup-macro-environment in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in ... */
static void C_ccall f_8484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* for-each-loop2558 in k8448 in fixup-macro-environment in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in ... */
static void C_fcall f_8486(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8486,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8495,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1453: g2559 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_10121 in k10119 in loop in k10100 */
static void C_ccall f_10121(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10121,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k10119 in loop in k10100 */
static void C_ccall f_10120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10120,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10121,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:984: g1679 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[5]);}

/* k8912 in k8905 in k8866 in k8830 in test in k8789 in k8787 in k8785 in k8783 */
static void C_ccall f_8913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k3836 in ensure-transformer in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(1)));}

/* expand in k8789 in k8787 in k8785 in k8783 */
static void C_fcall f_8927(C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8927,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8939,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
t9=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8947,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8949,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,a[6]=((C_word)li167),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_8949(t14,t10,((C_word*)t0)[2]);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t4))){
t7=C_i_car(t4);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9006,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1330: c */
t9=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t8,t7,((C_word*)t0)[6]);}
else{
/* expand.scm:1328: err */
t7=((C_word*)((C_word*)t0)[7])[1];
f_8792(t7,t1,t4);}}
else{
/* expand.scm:1323: err */
t4=((C_word*)((C_word*)t0)[7])[1];
f_8792(t4,t1,t2);}}}

/* k4343 in map-loop593 in k4243 in k4233 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4344(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4344,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4319(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4319(t6,((C_word*)t0)[5],t5);}}

/* k8298 */
static void C_ccall f_8300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
/* synrules.scm:288: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[209],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
/* synrules.scm:290: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[210],((C_word*)t0)[4]);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4504 in loop in extended-lambda-list? in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4506(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* expand.scm:333: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4489(t4,((C_word*)t0)[2],t3);}}

/* k5491 in map-loop899 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5492(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5492,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5467(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5467(t6,((C_word*)t0)[5],t5);}}

/* f_8608 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in ... */
static void C_ccall f_8608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8608,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8613,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1360: ##sys#check-syntax */
t7=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[242],t2,lf[254]);}

/* k8605 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in ... */
static void C_ccall f_8606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1354: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[242],C_SCHEME_END_OF_LIST,t1);}

/* k6170 in k6162 in k6160 in k6158 in k6156 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:642: ##sys#print */
t2=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6081,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6121,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:626: ##sys#strip-syntax */
t6=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6178,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6186,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:648: outstr */
t3=((C_word*)t0)[2];
f_6134(t3,t2,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[8];
t3=C_u_i_cdr(t2);
/* expand.scm:669: loop */
t4=((C_word*)((C_word*)t0)[9])[1];
f_6148(t4,((C_word*)t0)[3],t3);}}

/* k4369 in k4358 */
static void C_ccall f_4370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:294: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4204(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:649: outstr */
t3=((C_word*)t0)[3];
f_6134(t3,t2,lf[132]);}

/* k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6188,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:650: ##sys#print */
t3=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6192,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:652: ##sys#print */
t3=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:651: outstr */
t3=((C_word*)t0)[3];
f_6134(t3,t2,lf[131]);}

/* k6195 in k6193 in k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6196(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6196,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6208,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6211,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(((C_word*)t0)[2]);
/* expand.scm:658: symbol->string */
t7=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6220,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6223,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6225,a[2]=t7,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6225(t9,t5,((C_word*)t0)[2]);}}

/* k6193 in k6191 in k6189 in k6187 in k6185 in k6177 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:653: outstr */
t3=((C_word*)t0)[3];
f_6134(t3,t2,lf[130]);}

/* k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3816(C_word c,C_word t0,C_word t1){
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
C_word ab[78],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3816,2,t0,t1);}
t2=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#macro-environment ...) */,t1);
t3=C_set_block_item(lf[20] /* ##sys#chicken-macro-environment */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[21] /* ##sys#chicken-ffi-macro-environment */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate((C_word*)lf[22]+1 /* (set! ##sys#ensure-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3820,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#extend-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3857,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#copy-macro ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3891,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#macro? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3903,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[30]+1 /* (set! ##sys#unregister-macro ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3938,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#undefine-macro! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3979,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[32]+1 /* (set! ##sys#expand-0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3985,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(lf[58] /* ##sys#compiler-syntax-hook */,0,C_SCHEME_FALSE);
t13=C_set_block_item(lf[60] /* ##sys#enable-runtime-macros */,0,C_SCHEME_FALSE);
t14=C_mutate((C_word*)lf[61]+1 /* (set! ##sys#expand ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4420,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[62]+1 /* (set! expand ...) */,*((C_word*)lf[61]+1));
t16=C_mutate((C_word*)lf[63]+1 /* (set! ##sys#extended-lambda-list? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4483,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[67]+1 /* (set! ##sys#expand-extended-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4527,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[89]+1 /* (set! ##sys#defjam-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5072,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t19=C_set_block_item(lf[91] /* ##sys#define-definition */,0,C_SCHEME_UNDEFINED);
t20=C_set_block_item(lf[92] /* ##sys#define-syntax-definition */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[93] /* ##sys#define-values-definition */,0,C_SCHEME_UNDEFINED);
t22=C_mutate((C_word*)lf[94]+1 /* (set! ##sys#canonicalize-body ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5081,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate(&lf[112] /* (set! match-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5934,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[104]+1 /* (set! ##sys#expand-curried-define ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6011,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(lf[113] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t26=C_set_block_item(lf[114] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
t27=C_set_block_item(lf[115] /* ##sys#syntax-context */,0,C_SCHEME_END_OF_LIST);
t28=C_mutate((C_word*)lf[41]+1 /* (set! ##sys#syntax-error-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6061,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[118]+1 /* (set! ##sys#syntax-error/context ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6070,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[137]+1 /* (set! syntax-error ...) */,*((C_word*)lf[41]+1));
t31=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6260,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[139]+1 /* (set! get-line-number ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6266,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[54]+1 /* (set! ##sys#check-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6303,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[173]+1 /* (set! make-er/ir-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6732,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[23]+1 /* (set! ##sys#er-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7244,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[179]+1 /* (set! ##sys#ir-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7250,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[180]+1 /* (set! er-macro-transformer ...) */,*((C_word*)lf[23]+1));
t38=C_mutate((C_word*)lf[181]+1 /* (set! ir-macro-transformer ...) */,*((C_word*)lf[179]+1));
t39=C_mutate((C_word*)lf[182]+1 /* (set! ##sys#mark-primitive ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7258,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7299,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10287,a[2]=t40,tmp=(C_word)a,a+=3,tmp);
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10289,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:912: ##sys#er-transformer */
t43=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t43+1)))(3,t43,t41,t42);}

/* ##sys#ensure-transformer in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_3820r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3820r(t0,t1,t2,t3);}}

static void C_ccall f_3820r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(C_i_closurep(t2))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3837,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:158: ##sys#er-transformer */
t7=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
if(C_truep(C_i_structurep(t2,lf[24]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_slot(t2,C_fix(1)));}
else{
/* expand.scm:160: ##sys#error */
t6=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t5,lf[26],t2);}}}

/* k5452 in map-loop926 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5453,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5436,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_5436(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_5436(t5,t4);}}

/* k6007 in match-expression in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* map-loop593 in k4243 in k4233 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4319(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4319,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4344,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:282: g599 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4312 in k4243 in k4233 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4314,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[51],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,3,lf[52],t6,((C_word*)t0)[3]);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4262,a[2]=t7,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4264,a[2]=t11,a[3]=t14,a[4]=t9,a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_4264(t16,t12,((C_word*)t0)[5]);}

/* ##sys#expand-curried-define in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6011,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6015,a[2]=t6,a[3]=t8,a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6053,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:609: loop */
t11=((C_word*)t8)[1];
f_6015(t11,t10,t2,t3);}

/* k8638 in k8620 in k8617 in k8612 */
static void C_ccall f_8639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8641,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1384: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[242]);}

/* loop in expand-curried-define in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6015(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6015,NULL,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_car(t5));
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_cons(&a,2,lf[72],t9));}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=C_a_i_cons(&a,2,lf[72],t9);
t11=C_a_i_list(&a,1,t10);
/* expand.scm:608: loop */
t18=t1;
t19=t6;
t20=t11;
t1=t18;
t2=t19;
t3=t20;
goto loop;}}

/* k4583 in k4572 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4585(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4585,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4609,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:371: cadar */
t4=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=((C_word*)((C_word*)t0)[9])[1];
t3=(C_truep(t2)?C_SCHEME_FALSE:C_i_nullp(((C_word*)t0)[10]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:375: reverse */
t5=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4645,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4648,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:378: reverse */
t6=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}}

/* k8620 in k8617 in k8612 */
static void C_ccall f_8621(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8621,2,t0,t1);}
t2=C_i_cadr(t1);
t3=C_i_cadddr(t1);
if(C_truep(C_i_symbolp(t3))){
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],C_fix(4)))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8639,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8665,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8668,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1383: symbol->string */
t7=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8670,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1389: ##sys#register-module-alias */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[249]+1)))(4,*((C_word*)lf[249]+1),t4,t2,t3);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8672,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1392: ##sys#check-syntax */
t5=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[242],t1,lf[251]);}}

/* k4572 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4573(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4573,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=t1;
/* expand.scm:353: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t3)){
t4=t2;
f_4585(t4,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[9]))){
t4=C_i_cdr(((C_word*)t0)[2]);
t5=t2;
f_4585(t5,C_i_nullp(t4));}
else{
t4=t2;
f_4585(t4,C_SCHEME_FALSE);}}}}

/* k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[8]))){
t3=t2;
f_4573(t3,((C_word*)t0)[10]);}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4690,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4739,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t2,a[5]=t6,a[6]=t4,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:366: reverse */
t9=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[8]);}}

/* k8617 in k8612 */
static void C_ccall f_8619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8619,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1362: ##sys#strip-syntax */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8682,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8737,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_caddr(((C_word*)t0)[5]);
/* expand.scm:1402: ##sys#strip-syntax */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k6160 in k6158 in k6156 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:641: outstr */
t3=((C_word*)t0)[2];
f_6134(t3,t2,lf[122]);}

/* k8612 */
static void C_ccall f_8613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(4)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8749,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1361: r */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[244]);}
else{
t3=t2;
f_8619(2,t3,C_SCHEME_FALSE);}}

/* k6164 in k6162 in k6160 in k6158 in k6156 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:643: outstr */
t2=((C_word*)t0)[2];
f_6134(t2,((C_word*)t0)[3],lf[121]);}

/* k6162 in k6160 in k6158 in k6156 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6171,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(*((C_word*)lf[115]+1));
/* expand.scm:642: ##sys#strip-syntax */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7570 in k7564 in k7576 in k7547 */
static void C_ccall f_7571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:124: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),t1);}

/* f_7573 in k7576 in k7547 */
static void C_ccall f_7573(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7573,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7576 in k7547 */
static void C_ccall f_7577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7577,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7565,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7573,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:121: process-pattern */
t5=((C_word*)((C_word*)t0)[9])[1];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t3,((C_word*)t0)[8],((C_word*)((C_word*)t0)[10])[1],t4,C_SCHEME_FALSE);}

/* k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7331,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9947,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9949,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1046: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9961,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9963,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1038: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7325,2,t0,t1);}
t2=C_mutate((C_word*)lf[92]+1 /* (set! ##sys#define-syntax-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9975,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9977,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1028: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7321,2,t0,t1);}
t2=C_mutate((C_word*)lf[91]+1 /* (set! ##sys#define-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10009,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10011,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1002: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k7564 in k7576 in k7547 */
static void C_ccall f_7565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7568,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7571,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:126: meta-variables */
t4=((C_word*)((C_word*)t0)[7])[1];
((C_proc6)C_fast_retrieve_proc(t4))(6,t4,t3,((C_word*)t0)[8],C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k6682 in walk in k6436 in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:767: walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6442(t6,((C_word*)t0)[5],t3,t5);}

/* k4629 in k4583 in k4572 in k4569 in loop in k4551 in k4549 in k4547 in k4545 in expand-extended-lambda-list in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4630,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:353: values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[6],t5);}

/* k7567 in k7564 in k7576 in k7547 */
static void C_ccall f_7568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7568,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,((C_word*)t0)[5],t2));}

/* k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7311,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10241,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10243,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:943: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7307,2,t0,t1);}
t2=C_mutate((C_word*)lf[183]+1 /* (set! ##sys#initial-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10255,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10257,a[2]=((C_word)li207),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:935: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10269,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10271,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:925: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7307,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:930: ##sys#macro-environment */
t3=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in ... */
static void C_ccall f_7339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7341,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9644,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9646,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1104: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 in ... */
static void C_ccall f_7337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9821,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9823,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1088: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9864,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9866,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1074: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9896,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9898,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1062: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7333,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9933,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9935,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1054: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* f_7027 in k7038 in k6986 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_7027(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7027,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(t3,((C_word*)t0)[2]));}

/* k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6134,a[2]=t1,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6140,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6148,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,a[7]=((C_word)li93),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_6148(t7,t3,*((C_word*)lf[115]+1));}

/* outstr in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6134(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6134,NULL,3,t0,t1,t2);}
/* expand.scm:635: ##sys#print */
t3=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* f_7014 in k7007 in k6986 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_7014(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7014,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k7016 in k7007 in k6986 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_7018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(((C_word*)t0)[3],t2));}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(((C_word*)t0)[3],t2));}}

/* k6139 in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:670: get-output-string */
t3=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6148(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6148,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6157,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:638: outstr */
t4=((C_word*)t0)[2];
f_6134(t4,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6176,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
/* expand.scm:645: ##sys#strip-syntax */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k6145 in k6139 in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:670: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6158 in k6156 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:640: ##sys#print */
t3=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k6156 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:639: outstr */
t3=((C_word*)t0)[2];
f_6134(t3,t2,lf[123]);}

/* k5777 in loop2 in k5710 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5778(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5778,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_i_cddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,lf[72],t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[5]);
/* expand.scm:556: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_5677(t9,((C_word*)t0)[7],((C_word*)t0)[8],t3,t8,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* f_7599 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_7599(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7599,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_symbolp(t3))){
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
t5=C_a_i_list(&a,2,lf[202],t3);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],t2,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,1,t7));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}
else{
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7630,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* synrules.scm:136: segment-pattern? */
t6=((C_word*)((C_word*)t0)[17])[1];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,t3,t4);}}

/* k5772 in k5766 in loop2 in k5710 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:550: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5716(t2,((C_word*)t0)[3],t1);}

/* doloop1335 in k6456 in walk in k6436 in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6462(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6462,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
/* expand.scm:737: err */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6327(t5,t1,lf[147]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6480,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
/* expand.scm:739: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6327(t6,t5,lf[148]);}
else{
if(C_truep(C_i_pairp(t2))){
t6=C_i_car(t2);
/* expand.scm:742: walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_6442(t7,t5,t6,((C_word*)t0)[7]);}
else{
/* expand.scm:741: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6327(t6,t5,lf[149]);}}}}

/* k5766 in loop2 in k5710 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[4]);
/* expand.scm:551: ##sys#expand-curried-define */
t4=*((C_word*)lf[104]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k7814 in k7754 */
static void C_ccall f_7815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7815,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7797,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[14])[1]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[15])[1],((C_word*)((C_word*)t0)[16])[1],C_fix(-1));
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],t4,t5);
t7=C_a_i_list(&a,1,t6);
/* synrules.scm:61: ##sys#append */
t8=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,((C_word*)t0)[17],t7);}

/* k3926 in k3909 in k3906 in macro? in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:183: lookup */
f_3384(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k7887 in k7876 */
static void C_ccall f_7888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7891,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[205],((C_word*)t0)[4],((C_word*)t0)[5]);
/* synrules.scm:189: process-pattern */
t5=((C_word*)((C_word*)t0)[6])[1];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t2,t3,t4,((C_word*)t0)[7],C_SCHEME_TRUE);}

/* k6631 */
static void C_ccall f_6632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_i_symbolp(t1))){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(t2,((C_word*)t0)[3]));}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(t2,((C_word*)t0)[3]));}}

/* loop2 in k5710 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5716(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5716,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:548: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t5,lf[95],t2,lf[105],C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5778,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:553: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t5,lf[95],t2,lf[106],C_SCHEME_FALSE,((C_word*)t0)[3]);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5728,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:538: ##sys#check-syntax */
t5=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t4,lf[95],t2,lf[108],C_SCHEME_FALSE,((C_word*)t0)[3]);}}

/* k5710 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5711,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5716,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li80),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_5716(t5,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* ##sys#unregister-macro in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3938,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3945,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3948,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:189: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3909 in k3906 in macro? in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3910,2,t0,t1);}
t2=C_i_pairp(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3918,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3927,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:183: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k7871 */
static void C_ccall f_7872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7872,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list1(&a,1,t2));}

/* k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5709,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:534: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[95],((C_word*)t0)[10],lf[109],C_SCHEME_FALSE,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5812,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* expand.scm:560: comp */
t3=((C_word*)((C_word*)t0)[16])[1];
f_5093(t3,t2,lf[96],((C_word*)t0)[13]);}}

/* k7876 */
static void C_ccall f_7878(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7878,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_i_length(t2);
t4=C_eqp(t3,C_fix(0));
t5=(C_truep(t4)?((C_word*)t0)[3]:C_a_i_list(&a,3,lf[204],((C_word*)t0)[3],t3));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7888,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7901,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word)li141),tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:181: process-pattern */
t10=((C_word*)((C_word*)t0)[5])[1];
((C_proc6)C_fast_retrieve_proc(t10))(6,t10,t6,t8,((C_word*)((C_word*)t0)[7])[1],t9,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7941,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[11])[1],((C_word*)t0)[3]);
/* synrules.scm:192: process-pattern */
t6=((C_word*)((C_word*)t0)[5])[1];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t2,t4,t5,((C_word*)t0)[6],C_SCHEME_FALSE);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7966,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:195: vector->list */
t3=*((C_word*)lf[175]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}}}

/* k3906 in macro? in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3908,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:181: lookup */
f_3384(t2,((C_word*)t0)[3],t1);}

/* ##sys#macro? in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3903(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3903r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3903r(t0,t1,t2,t3);}}

static void C_ccall f_3903r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3908,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:180: ##sys#current-environment */
t5=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_3908(2,t5,C_i_car(t3));}}

/* k3900 in copy-macro in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:177: lookup */
f_3384(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k8664 in k8620 in k8617 in k8612 */
static void C_ccall f_8665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1380: string->symbol */
t2=*((C_word*)lf[245]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8667 in k8620 in k8617 in k8612 */
static void C_ccall f_8668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1381: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[246]+1)))(4,*((C_word*)lf[246]+1),((C_word*)t0)[2],lf[247],t1);}

/* f_7542 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_7542(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7542,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7549,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_cddr(t2);
t7=t3;
f_7549(t7,C_i_nullp(t6));}
else{
t6=t3;
f_7549(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_7549(t4,C_SCHEME_FALSE);}}

/* k5729 in k5727 in loop2 in k5710 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5730,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[4]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
/* expand.scm:541: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_5677(t6,((C_word*)t0)[7],((C_word*)t0)[8],t2,t5,((C_word*)t0)[9],((C_word*)t0)[10]);}
else{
t4=C_a_i_cons(&a,2,lf[107],((C_word*)t0)[5]);
/* expand.scm:541: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_5677(t5,((C_word*)t0)[7],((C_word*)t0)[8],t2,t4,((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* k3917 in k3909 in k3906 in macro? in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_i_pairp(t1):C_SCHEME_FALSE));}

/* mirror-rename in k6740 */
static void C_fcall f_7119(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7119,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7132,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:863: mirror-rename */
t11=t3;
t12=t5;
t1=t11;
t2=t12;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7151,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7154,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:865: vector->list */
t5=*((C_word*)lf[175]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7162,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:868: lookup */
f_3384(t3,t2,((C_word*)t0)[6]);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}}

/* f_7850 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_7850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_7850,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7872,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* synrules.scm:174: mapit */
t7=t4;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,t3);}}
else{
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7878,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* synrules.scm:175: segment-pattern? */
t7=((C_word*)((C_word*)t0)[10])[1];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,t2,t5);}}

/* k8669 in k8620 in k8617 in k8612 */
static void C_ccall f_8670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[248]);}

/* k8671 in k8620 in k8617 in k8612 */
static void C_ccall f_8672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:1394: ##sys#instantiate-functor */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[250]+1)))(5,*((C_word*)lf[250]+1),((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);}

/* k5727 in loop2 in k5710 in k5707 in loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
t5=C_eqp(t4,((C_word*)t0)[2]);
if(C_truep(t5)){
/* expand.scm:540: ##sys#defjam-error */
t6=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t2,((C_word*)t0)[4]);}
else{
t6=t2;
f_5730(2,t6,C_SCHEME_UNDEFINED);}}

/* k7547 */
static void C_fcall f_7549(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7549,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdar(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7577,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:120: process-match */
t5=((C_word*)((C_word*)t0)[10])[1];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t4,((C_word*)((C_word*)t0)[9])[1],t2,C_SCHEME_FALSE);}
else{
/* synrules.scm:127: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[5],lf[201],((C_word*)t0)[2]);}}

/* f_6629 in walk in k6436 in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6629(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6629,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6632,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(t2))){
/* expand.scm:759: lookup */
f_3384(t3,t2,((C_word*)t0)[3]);}
else{
t4=t3;
f_6632(2,t4,C_SCHEME_FALSE);}}

/* k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10199,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10201,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:967: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10096,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10098,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:976: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10227,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10229,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:951: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7312 in k7310 in k7308 in k7305 in k7302 in k7300 in k7298 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_7313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10213,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10215,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:959: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4233 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4234,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:275: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t3,lf[55],((C_word*)t0)[2],lf[56],C_SCHEME_FALSE,((C_word*)t0)[4]);}
else{
/* expand.scm:286: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4226(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4226,NULL,2,t0,t1);}
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[50]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4234,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:272: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t3,lf[55],((C_word*)t0)[3],lf[57],C_SCHEME_FALSE,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4352,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[11])){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4394,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:287: g649 */
t5=t4;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)((C_word*)t0)[2])[1],lf[59]);}
else{
t4=t3;
f_4352(2,t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4352(2,t4,C_SCHEME_FALSE);}}}

/* k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4221,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4226,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_pairp(((C_word*)t4)[1]))){
t6=t5;
f_4226(t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4404,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4410,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:270: ##sys#macro-environment */
t8=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* ##sys#extended-lambda-list? in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4483(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4483,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4489,a[2]=t4,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4489(t6,t1,t2);}

/* loop in extended-lambda-list? in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_4489(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4489,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_eqp(t3,lf[64]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4506,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4506(t6,t4);}
else{
t6=C_eqp(t3,lf[65]);
t7=t5;
f_4506(t7,(C_truep(t6)?t6:C_eqp(t3,lf[66])));}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5410 in map-loop962 in k5377 in k5375 in k5267 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5411,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5394,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_5394(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_5394(t5,t4);}}

/* k4403 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4404(C_word c,C_word t0,C_word t1){
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
f_4226(t4,t3);}
else{
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_4226(t4,t3);}}

/* k8681 in k8617 in k8612 */
static void C_ccall f_8682(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8682,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_eqp(lf[243],t1);
t4=(C_truep(t3)?C_SCHEME_TRUE:t1);
t5=C_i_cdddr(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8706,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_cdr(t5);
if(C_truep(C_i_nullp(t7))){
t8=C_u_i_car(t5);
t9=t6;
f_8706(t9,C_i_stringp(t8));}
else{
t8=t6;
f_8706(t8,C_SCHEME_FALSE);}}
else{
t7=t6;
f_8706(t7,C_SCHEME_FALSE);}}

/* k6479 in doloop1335 in k6456 in walk in k6436 in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6462(t4,((C_word*)t0)[5],t2,t3);}

/* k5435 in k5452 in map-loop926 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5436(C_word t0,C_word t1){
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
f_5425(t5,((C_word*)t0)[7],t3,t4);}

/* map-loop926 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5425(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5425,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5453,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* expand.scm:480: g932 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* ##sys#macro-subset in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in ... */
static void C_ccall f_8396(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_8396r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8396r(t0,t1,t2,t3);}}

static void C_ccall f_8396r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8403,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8409,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1447: ##sys#macro-environment */
t8=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}

/* f_9590 in k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9590(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9590,3,t0,t1,t2);}
t3=C_a_i_list(&a,2,lf[203],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t3));}

/* k8640 in k8638 in k8620 in k8617 in k8612 */
static void C_ccall f_8641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8641,2,t0,t1);}
t2=C_i_cddddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[243],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t7=C_a_i_list(&a,4,t1,((C_word*)t0)[5],lf[244],t6);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[98],t5,t7));}

/* k4243 in k4233 in k4225 in k4220 in loop in expand-0 in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_4244(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4244,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4306,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(t2,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4319,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4319(t13,t9,t2);}

/* walk in k6436 in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6442(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6442,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
t5=C_block_size(t3);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_vector_ref(t3,C_fix(1)):C_fix(0));
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6457,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t9=C_eqp(t5,C_fix(1));
if(C_truep(t9)){
t10=t8;
f_6457(t10,C_fix(1));}
else{
t10=C_fixnum_greaterp(t5,C_fix(2));
t11=t8;
f_6457(t11,(C_truep(t10)?C_i_vector_ref(t3,C_fix(2)):C_fix(99999)));}}
else{
if(C_truep(C_immp(t3))){
t4=C_eqp(t3,t2);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* expand.scm:744: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6327(t5,t1,lf[150]);}}
else{
if(C_truep(C_i_symbolp(t3))){
t4=t3;
t5=C_eqp(t4,lf[151]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_TRUE);}
else{
t6=C_eqp(t4,lf[152]);
if(C_truep(t6)){
/* expand.scm:748: test */
t7=((C_word*)((C_word*)t0)[4])[1];
f_6315(t7,t1,t2,*((C_word*)lf[153]+1),lf[154]);}
else{
t7=C_eqp(t4,lf[155]);
if(C_truep(t7)){
/* expand.scm:749: test */
t8=((C_word*)((C_word*)t0)[4])[1];
f_6315(t8,t1,t2,*((C_word*)lf[156]+1),lf[157]);}
else{
t8=C_eqp(t4,lf[158]);
if(C_truep(t8)){
/* expand.scm:750: test */
t9=((C_word*)((C_word*)t0)[4])[1];
f_6315(t9,t1,t2,*((C_word*)lf[156]+1),lf[159]);}
else{
t9=C_eqp(t4,lf[160]);
if(C_truep(t9)){
/* expand.scm:751: test */
t10=((C_word*)((C_word*)t0)[4])[1];
f_6315(t10,t1,t2,((C_word*)((C_word*)t0)[5])[1],lf[161]);}
else{
t10=C_eqp(t4,lf[162]);
if(C_truep(t10)){
/* expand.scm:752: test */
t11=((C_word*)((C_word*)t0)[4])[1];
f_6315(t11,t1,t2,*((C_word*)lf[163]+1),lf[164]);}
else{
t11=C_eqp(t4,lf[165]);
if(C_truep(t11)){
/* expand.scm:753: test */
t12=((C_word*)((C_word*)t0)[4])[1];
f_6315(t12,t1,t2,*((C_word*)lf[166]+1),lf[167]);}
else{
t12=C_eqp(t4,lf[168]);
if(C_truep(t12)){
/* expand.scm:754: test */
t13=((C_word*)((C_word*)t0)[4])[1];
f_6315(t13,t1,t2,((C_word*)((C_word*)t0)[6])[1],lf[169]);}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6629,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:756: test */
t14=((C_word*)((C_word*)t0)[4])[1];
f_6315(t14,t1,t2,t13,lf[170]);}}}}}}}}}
else{
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6683,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* expand.scm:766: walk */
t27=t4;
t28=t5;
t29=t6;
t1=t27;
t2=t28;
t3=t29;
goto loop;}
else{
/* expand.scm:764: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6327(t4,t1,lf[171]);}}
else{
/* expand.scm:763: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6327(t4,t1,lf[172]);}}}}}

/* f_7005 in k6986 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_7005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7005,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k7007 in k6986 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_7009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7009,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7014,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7018,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:836: g1482 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],lf[176]);}

/* k6456 in walk in k6436 in k6310 in check-syntax in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_6457(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6457,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li104),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_6462(t5,((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}

/* expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5671,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5677,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li81),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_5677(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in expand in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_fcall f_5677(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5677,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_pairp(t2))){
t7=C_i_car(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=(C_truep(C_i_pairp(t7))?C_u_i_car(t7):C_SCHEME_FALSE);
t11=(C_truep(t10)?(C_truep(C_i_symbolp(t10))?t10:C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(C_i_symbolp(t11))){
t12=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5709,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t9,a[7]=t5,a[8]=t6,a[9]=t1,a[10]=t7,a[11]=((C_word*)t0)[4],a[12]=t2,a[13]=t11,a[14]=((C_word*)t0)[5],a[15]=((C_word*)t0)[6],a[16]=((C_word*)t0)[7],tmp=(C_word)a,a+=17,tmp);
/* expand.scm:533: comp */
t13=((C_word*)((C_word*)t0)[7])[1];
f_5093(t13,t12,lf[95],t11);}
else{
/* expand.scm:531: fini */
t12=((C_word*)((C_word*)t0)[5])[1];
f_5158(t12,t1,t3,t4,t5,t6,t2);}}
else{
/* expand.scm:525: fini */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5158(t7,t1,t3,t4,t5,t6,t2);}}

/* k9570 in k9568 in k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[290]);}

/* k9573 in k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1170: ##sys#notice */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[291]+1)))(4,*((C_word*)lf[291]+1),((C_word*)t0)[2],lf[292],t1);}

/* k9585 in k9600 in k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9586,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[284],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* expand.scm:1166: c */
t4=((C_word*)t0)[10];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[11],t3);}

/* k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9557,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1167: expand */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9539(t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9569,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9574,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1172: ##sys#strip-syntax */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9590,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word)li185),tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9602,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9604,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li186),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_9604(t13,t9,t7);}}}

/* k9558 in k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9559,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[98],t2));}

/* k8560 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in ... */
static void C_ccall f_8561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1424: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[233],C_SCHEME_END_OF_LIST,t1);}

/* f_8563 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in ... */
static void C_ccall f_8563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8563,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8566,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8576,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* expand.scm:1431: ##sys#strip-syntax */
t8=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* f_8450 in k8448 in fixup-macro-environment in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in ... */
static void C_ccall f_8450(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8450,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8464,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
if(C_truep(C_i_nullp(t7))){
t8=((C_word*)t0)[2];
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_i_set_car(t5,t8));}
else{
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_u_i_car(t9);
/* expand.scm:1462: ##sys#append */
t11=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t6,t10,((C_word*)t0)[2]);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k9568 in k9555 in k9550 in expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1173: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9539(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k8569 in k8567 in k8565 */
static void C_ccall f_8570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[234]);}

/* k8565 */
static void C_ccall f_8566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8568,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1433: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[236]+1)))(2,*((C_word*)lf[236]+1),t2);}

/* k8567 in k8565 */
static void C_ccall f_8568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8568,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8570,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* expand.scm:1435: ##sys#add-to-export-list */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[235]+1)))(4,*((C_word*)lf[235]+1),t2,t1,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[234]);}}

/* expand in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_fcall f_9539(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9539,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9551,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1165: ##sys#check-syntax */
t8=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[289],t4,lf[293]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[294]);}}

/* k9536 in k9527 in k9525 in k9523 in k9521 in k9515 */
static void C_ccall f_9537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9537,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[55],((C_word*)t0)[3],t1));}

/* k8290 in k8249 */
static void C_ccall f_8291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:281: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* f_8293 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_8293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8293,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8300,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:285: segment-template? */
t5=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t2);}

/* k8515 in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in ... */
static void C_ccall f_8517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8517,2,t0,t1);}
t2=C_mutate((C_word*)lf[226]+1 /* (set! ##sys#default-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8524,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1469: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6120 in k6175 in loop in k6131 in syntax-error/context in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_6121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:626: ##sys#get */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[134]+1)))(4,*((C_word*)lf[134]+1),((C_word*)t0)[2],t1,lf[135]);}

/* k6774 in rename in k6740 */
static void C_ccall f_6775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:782: list->vector */
t2=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6777 in rename in k6740 */
static void C_ccall f_6778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:782: rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6743(3,t2,((C_word*)t0)[3],t1);}

/* k8575 */
static void C_ccall f_8576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:1430: ##sys#validate-exports */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[237]+1)))(4,*((C_word*)lf[237]+1),((C_word*)t0)[2],t1,lf[233]);}

/* k9708 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9709,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k8259 in k8249 */
static void C_ccall f_8260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:271: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* k9713 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9715,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1128: r */
t3=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[77]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t3=C_u_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(4));
if(C_truep(t4)){
t5=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1134: c */
t6=((C_word*)t0)[7];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t2,((C_word*)t0)[8],t5);}
else{
t5=t2;
f_9746(2,t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_9746(2,t3,C_SCHEME_FALSE);}}}

/* k9716 in k9713 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9717(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9717,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[2]);
t6=C_a_i_list(&a,2,t5,t1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9732,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1132: expand */
t8=((C_word*)((C_word*)t0)[4])[1];
f_9660(t8,t7,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k8276 in k8249 */
static void C_ccall f_8277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:276: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* k8494 in for-each-loop2558 in k8448 in fixup-macro-environment in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in ... */
static void C_ccall f_8495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8486(t3,((C_word*)t0)[4],t2);}

/* k8534 */
static void C_ccall f_8535(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8535,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[230];
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_symbolp(((C_word*)t3)[1]))){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8549,a[2]=t9,a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:54: ##sys#check-syntax */
t11=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,lf[229],((C_word*)t0)[2],lf[231]);}
else{
/* synrules.scm:58: ##sys#process-syntax-rules */
t10=*((C_word*)lf[184]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,((C_word*)t0)[3],((C_word*)t9)[1],((C_word*)t7)[1],((C_word*)t3)[1],((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* f_8532 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in ... */
static void C_ccall f_8532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8532,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8535,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:49: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[229],t2,lf[232]);}

/* f_6790 in rename in k6740 */
static void C_ccall f_6790(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6790,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_cdr(t2));}

/* k8529 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in ... */
static void C_ccall f_8530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:44: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[229],C_SCHEME_END_OF_LIST,t1);}

/* k8463 */
static void C_ccall f_8464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_car(((C_word*)t0)[3],t1));}

/* k8249 */
static void C_ccall f_8251(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8251,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8260,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:273: free-meta-variables */
t5=((C_word*)((C_word*)t0)[3])[1];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:278: free-meta-variables */
t7=((C_word*)((C_word*)t0)[3])[1];
((C_proc6)C_fast_retrieve_proc(t7))(6,t7,t4,t6,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8291,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:281: vector->list */
t3=*((C_word*)lf[175]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}}}}

/* doloop1434 in compare in k6740 */
static void C_fcall f_6934(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6934,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
t5=(C_truep(t4)?t4:C_i_not(t3));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_fixnum_plus(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6952,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_i_vector_ref(((C_word*)t0)[4],t2);
t9=C_i_vector_ref(((C_word*)t0)[5],t2);
/* expand.scm:824: compare */
t10=((C_word*)((C_word*)t0)[6])[1];
f_6877(4,t10,t7,t8,t9);}}

/* k9387 in k9356 in k9338 in k9318 in k9309 */
static void C_ccall f_9389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9389,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[53],t2);
t4=C_a_i_list(&a,3,lf[98],((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,4,lf[284],((C_word*)t0)[4],((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[50],((C_word*)t0)[2],((C_word*)t0)[7],t5));}

/* k8448 in fixup-macro-environment in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in ... */
static void C_ccall f_8449(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8450,a[2]=t1,a[3]=((C_word)li155),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[14]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8484,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8486,a[2]=t7,a[3]=t2,a[4]=((C_word)li156),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8486(t9,t5,t3);}

/* k5278 */
static void C_ccall f_5280(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5280,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5294,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[3];
t9=C_i_check_list_2(t1,lf[16]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5302,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5304,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,a[6]=((C_word)li70),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_5304(t14,t10,t8,t1);}

/* ##sys#fixup-macro-environment in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in ... */
static void C_ccall f_8442(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_8442r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8442r(t0,t1,t2,t3);}}

static void C_ccall f_8442r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8449,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* expand.scm:1454: ##sys#append */
t7=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t5);}
else{
t7=t6;
f_8449(2,t7,t2);}}

/* k8588 in k8586 */
static void C_ccall f_8589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8589,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,lf[98],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[239],t4));}

/* k8586 */
static void C_ccall f_8587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[98],t3);
/* expand.scm:1421: ##sys#register-meta-expression */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[240]+1)))(3,*((C_word*)lf[240]+1),t2,t4);}

/* f_8584 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in ... */
static void C_ccall f_8584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8584,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8587,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1420: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[238],t2,lf[241]);}

/* map-loop2286 */
static void C_fcall f_7506(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7506,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7531,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* synrules.scm:110: g2292 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8209 in k8165 */
static void C_ccall f_8210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* synrules.scm:258: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* f_8212 in k7457 in k7452 in k7448 in k7444 in k7440 in k7435 in k7428 in k7423 in k7419 in k7415 in k7411 in k7407 in k7403 in k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in ... */
static void C_ccall f_8212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8212,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_assq(t2,t4);
if(C_truep(t6)){
t7=C_i_cdr(t6);
t8=t3;
t9=C_fixnum_greater_or_equal_p(t7,t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_truep(t9)?C_a_i_cons(&a,2,t2,t5):t5));}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t5);}}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8251,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:270: segment-template? */
t7=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,t2);}}

/* map-loop1950 in k9356 in k9338 in k9318 in k9309 */
static void C_fcall f_9391(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9391,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9416,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1218: g1956 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7796 in k7814 in k7754 */
static void C_ccall f_7797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7797,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=C_a_i_list(&a,4,((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],t4);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[9],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[11],t7);
t9=((C_word*)t0)[12];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,1,t8));}

/* k5271 in k5267 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* expand.scm:447: ##sys#append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_5274 in k5267 in k5265 in k5254 in k5250 in k5233 in fini in k5084 in canonicalize-body in k3814 in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_5274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5274,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[8]+1);
t9=t2;
t10=C_i_check_list_2(t9,lf[16]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5280,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5346,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,a[6]=((C_word)li71),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_5346(t15,t11,t9);}

/* k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in ... */
static void C_ccall f_7359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7361,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8582,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8584,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1418: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in k7302 in ... */
static void C_ccall f_7351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7353,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8777,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8779,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1287: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in k7305 in ... */
static void C_ccall f_7353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8766,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8768,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1341: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in k7308 in ... */
static void C_ccall f_7355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8755,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8757,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1349: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in k7312 in k7310 in ... */
static void C_ccall f_7357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8606,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8608,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1357: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* f_6973 in compare in k6740 */
static void C_ccall f_6973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6973,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k6975 in compare in k6740 */
static void C_ccall f_6977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_6980(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7073,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
/* expand.scm:849: lookup */
f_3384(t3,t4,t5);}}

/* k9679 in k9676 in k9671 in expand in k9654 in k9652 in k9650 */
static void C_ccall f_9680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9680,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[98],t2));}

/* k6983 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_6985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_6988(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7068,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
/* expand.scm:849: lookup */
f_3384(t3,t4,t5);}}

/* k3395 in lookup in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:C_SCHEME_FALSE));}

/* k6986 in k6983 in k6978 in k6975 in compare in k6740 */
static void C_fcall f_6988(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6988,NULL,2,t0,t1);}
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
if(C_truep(C_i_symbolp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7005,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:835: g1475 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[176]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7039,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:837: ##sys#macro-environment */
t3=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
if(C_truep(C_i_symbolp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7063,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:841: ##sys#macro-environment */
t3=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[2],t1));}}}

/* k8548 in k8534 */
static void C_ccall f_8549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
/* synrules.scm:58: ##sys#process-syntax-rules */
t7=*((C_word*)lf[184]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* f_6981 in k6978 in k6975 in compare in k6740 */
static void C_ccall f_6981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6981,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k6978 in k6975 in compare in k6740 */
static void C_fcall f_6980(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6980,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6981,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6985,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:830: g1458 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[5]);}

/* f_3478 in walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3478,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* f_3393 in lookup in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3393,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* f_9324 in k9318 in k9309 */
static void C_ccall f_9324(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9324,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_i_car(t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list2(&a,2,t3,t6));}

/* k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in ... */
static void C_ccall f_7363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8530,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8532,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:47: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3480 in walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3483,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3487,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:106: g284 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[7]);}

/* f_3483 in k3480 in walk in strip-syntax in k3380 in k3376 in k3372 in k3368 */
static void C_ccall f_3483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3483,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_getprop(t2,t3,C_SCHEME_FALSE));}

/* k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in k7316 in k7314 in ... */
static void C_ccall f_7361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8561,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8563,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1427: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* ##sys#process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in ... */
static void C_ccall f_7367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[143],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_7367,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_SCHEME_UNDEFINED;
t38=(*a=C_VECTOR_TYPE|1,a[1]=t37,tmp=(C_word)a,a+=2,tmp);
t39=C_SCHEME_UNDEFINED;
t40=(*a=C_VECTOR_TYPE|1,a[1]=t39,tmp=(C_word)a,a+=2,tmp);
t41=C_SCHEME_UNDEFINED;
t42=(*a=C_VECTOR_TYPE|1,a[1]=t41,tmp=(C_word)a,a+=2,tmp);
t43=C_SCHEME_UNDEFINED;
t44=(*a=C_VECTOR_TYPE|1,a[1]=t43,tmp=(C_word)a,a+=2,tmp);
t45=C_SCHEME_UNDEFINED;
t46=(*a=C_VECTOR_TYPE|1,a[1]=t45,tmp=(C_word)a,a+=2,tmp);
t47=C_SCHEME_UNDEFINED;
t48=(*a=C_VECTOR_TYPE|1,a[1]=t47,tmp=(C_word)a,a+=2,tmp);
t49=C_SCHEME_UNDEFINED;
t50=(*a=C_VECTOR_TYPE|1,a[1]=t49,tmp=(C_word)a,a+=2,tmp);
t51=C_SCHEME_UNDEFINED;
t52=(*a=C_VECTOR_TYPE|1,a[1]=t51,tmp=(C_word)a,a+=2,tmp);
t53=C_SCHEME_UNDEFINED;
t54=(*a=C_VECTOR_TYPE|1,a[1]=t53,tmp=(C_word)a,a+=2,tmp);
t55=C_SCHEME_UNDEFINED;
t56=(*a=C_VECTOR_TYPE|1,a[1]=t55,tmp=(C_word)a,a+=2,tmp);
t57=C_SCHEME_UNDEFINED;
t58=(*a=C_VECTOR_TYPE|1,a[1]=t57,tmp=(C_word)a,a+=2,tmp);
t59=C_SCHEME_UNDEFINED;
t60=(*a=C_VECTOR_TYPE|1,a[1]=t59,tmp=(C_word)a,a+=2,tmp);
t61=C_SCHEME_UNDEFINED;
t62=(*a=C_VECTOR_TYPE|1,a[1]=t61,tmp=(C_word)a,a+=2,tmp);
t63=C_SCHEME_UNDEFINED;
t64=(*a=C_VECTOR_TYPE|1,a[1]=t63,tmp=(C_word)a,a+=2,tmp);
t65=C_SCHEME_UNDEFINED;
t66=(*a=C_VECTOR_TYPE|1,a[1]=t65,tmp=(C_word)a,a+=2,tmp);
t67=C_SCHEME_UNDEFINED;
t68=(*a=C_VECTOR_TYPE|1,a[1]=t67,tmp=(C_word)a,a+=2,tmp);
t69=C_SCHEME_UNDEFINED;
t70=(*a=C_VECTOR_TYPE|1,a[1]=t69,tmp=(C_word)a,a+=2,tmp);
t71=C_SCHEME_UNDEFINED;
t72=(*a=C_VECTOR_TYPE|1,a[1]=t71,tmp=(C_word)a,a+=2,tmp);
t73=C_SCHEME_UNDEFINED;
t74=(*a=C_VECTOR_TYPE|1,a[1]=t73,tmp=(C_word)a,a+=2,tmp);
t75=C_SCHEME_UNDEFINED;
t76=(*a=C_VECTOR_TYPE|1,a[1]=t75,tmp=(C_word)a,a+=2,tmp);
t77=C_SCHEME_UNDEFINED;
t78=(*a=C_VECTOR_TYPE|1,a[1]=t77,tmp=(C_word)a,a+=2,tmp);
t79=C_SCHEME_UNDEFINED;
t80=(*a=C_VECTOR_TYPE|1,a[1]=t79,tmp=(C_word)a,a+=2,tmp);
t81=C_SCHEME_UNDEFINED;
t82=(*a=C_VECTOR_TYPE|1,a[1]=t81,tmp=(C_word)a,a+=2,tmp);
t83=C_SCHEME_UNDEFINED;
t84=(*a=C_VECTOR_TYPE|1,a[1]=t83,tmp=(C_word)a,a+=2,tmp);
t85=C_SCHEME_UNDEFINED;
t86=(*a=C_VECTOR_TYPE|1,a[1]=t85,tmp=(C_word)a,a+=2,tmp);
t87=C_SCHEME_UNDEFINED;
t88=(*a=C_VECTOR_TYPE|1,a[1]=t87,tmp=(C_word)a,a+=2,tmp);
t89=C_SCHEME_UNDEFINED;
t90=(*a=C_VECTOR_TYPE|1,a[1]=t89,tmp=(C_word)a,a+=2,tmp);
t91=C_SCHEME_UNDEFINED;
t92=(*a=C_VECTOR_TYPE|1,a[1]=t91,tmp=(C_word)a,a+=2,tmp);
t93=C_SCHEME_UNDEFINED;
t94=(*a=C_VECTOR_TYPE|1,a[1]=t93,tmp=(C_word)a,a+=2,tmp);
t95=C_SCHEME_UNDEFINED;
t96=(*a=C_VECTOR_TYPE|1,a[1]=t95,tmp=(C_word)a,a+=2,tmp);
t97=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7375,a[2]=t8,a[3]=t10,a[4]=t12,a[5]=t14,a[6]=t16,a[7]=t18,a[8]=t20,a[9]=t22,a[10]=t24,a[11]=t26,a[12]=t28,a[13]=t30,a[14]=t32,a[15]=t34,a[16]=t36,a[17]=t38,a[18]=t40,a[19]=t42,a[20]=t44,a[21]=t46,a[22]=t48,a[23]=t50,a[24]=t52,a[25]=t54,a[26]=t56,a[27]=t58,a[28]=t60,a[29]=t62,a[30]=t64,a[31]=t66,a[32]=t68,a[33]=t70,a[34]=t72,a[35]=t6,a[36]=t74,a[37]=t76,a[38]=t84,a[39]=t86,a[40]=t82,a[41]=t78,a[42]=t4,a[43]=t80,a[44]=t90,a[45]=t96,a[46]=t88,a[47]=t94,a[48]=t92,a[49]=t1,a[50]=t3,a[51]=t5,a[52]=t2,tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:65: r */
t98=t5;
((C_proc3)C_fast_retrieve_proc(t98))(3,t98,t97,lf[223]);}

/* k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in k7330 in k7328 in k7326 in k7323 in k7319 in ... */
static void C_ccall f_7365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7365,2,t0,t1);}
t2=C_mutate((C_word*)lf[184]+1 /* (set! ##sys#process-syntax-rules ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7367,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[224]+1 /* (set! ##sys#macro-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8396,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[225]+1 /* (set! ##sys#fixup-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8442,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8527,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1467: ##sys#macro-environment */
t7=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k7530 in map-loop2286 */
static void C_ccall f_7531(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7531,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7506(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7506(t6,((C_word*)t0)[5],t5);}}

/* k7397 in k7392 in k7388 in k7373 in process-syntax-rules in k7364 in k7362 in k7360 in k7358 in k7356 in k7354 in k7352 in k7350 in k7348 in k7346 in k7344 in k7342 in k7340 in k7338 in k7336 in k7334 in k7332 in ... */
static void C_ccall f_7399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7399,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[195]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[196]);
t5=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_7405,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[2],a[26]=((C_word*)t0)[28],a[27]=((C_word*)t0)[29],a[28]=((C_word*)t0)[30],a[29]=((C_word*)t0)[31],a[30]=((C_word*)t0)[32],a[31]=((C_word*)t0)[33],a[32]=((C_word*)t0)[34],a[33]=((C_word*)t0)[35],a[34]=((C_word*)t0)[36],a[35]=((C_word*)t0)[37],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[4],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:83: r */
t6=((C_word*)t0)[51];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[219]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[708] = {
{"f_3487:expand_2escm",(void*)f_3487},
{"f_5266:expand_2escm",(void*)f_5266},
{"f_5261:expand_2escm",(void*)f_5261},
{"f_8527:expand_2escm",(void*)f_8527},
{"f_5269:expand_2escm",(void*)f_5269},
{"f_8521:expand_2escm",(void*)f_8521},
{"f_8524:expand_2escm",(void*)f_8524},
{"f_3378:expand_2escm",(void*)f_3378},
{"f_7394:expand_2escm",(void*)f_7394},
{"f_9672:expand_2escm",(void*)f_9672},
{"f_7390:expand_2escm",(void*)f_7390},
{"f_4744:expand_2escm",(void*)f_4744},
{"f_9678:expand_2escm",(void*)f_9678},
{"f_7349:expand_2escm",(void*)f_7349},
{"f_8582:expand_2escm",(void*)f_8582},
{"f_5256:expand_2escm",(void*)f_5256},
{"f_3370:expand_2escm",(void*)f_3370},
{"f_5251:expand_2escm",(void*)f_5251},
{"f_3374:expand_2escm",(void*)f_3374},
{"f_5259:expand_2escm",(void*)f_5259},
{"f_9305:expand_2escm",(void*)f_9305},
{"f_9307:expand_2escm",(void*)f_9307},
{"f_9644:expand_2escm",(void*)f_9644},
{"f_7341:expand_2escm",(void*)f_7341},
{"f_9646:expand_2escm",(void*)f_9646},
{"f_7343:expand_2escm",(void*)f_7343},
{"f_7345:expand_2escm",(void*)f_7345},
{"f_7347:expand_2escm",(void*)f_7347},
{"f_4778:expand_2escm",(void*)f_4778},
{"f_4527:expand_2escm",(void*)f_4527},
{"f_8196:expand_2escm",(void*)f_8196},
{"f_9692:expand_2escm",(void*)f_9692},
{"f_9690:expand_2escm",(void*)f_9690},
{"f_9695:expand_2escm",(void*)f_9695},
{"f_9310:expand_2escm",(void*)f_9310},
{"f_7375:expand_2escm",(void*)f_7375},
{"f_6401:expand_2escm",(void*)f_6401},
{"f_4769:expand_2escm",(void*)f_4769},
{"f_9319:expand_2escm",(void*)f_9319},
{"f_9660:expand_2escm",(void*)f_9660},
{"f_6411:expand_2escm",(void*)f_6411},
{"f_4546:expand_2escm",(void*)f_4546},
{"f_4548:expand_2escm",(void*)f_4548},
{"f_6417:expand_2escm",(void*)f_6417},
{"f_8179:expand_2escm",(void*)f_8179},
{"f_4531:expand_2escm",(void*)f_4531},
{"f_5294:expand_2escm",(void*)f_5294},
{"f_8801:expand_2escm",(void*)f_8801},
{"f_9436:expand_2escm",(void*)f_9436},
{"f_5243:expand_2escm",(void*)f_5243},
{"f_6437:expand_2escm",(void*)f_6437},
{"f_9655:expand_2escm",(void*)f_9655},
{"f_9653:expand_2escm",(void*)f_9653},
{"f_9651:expand_2escm",(void*)f_9651},
{"f_4552:expand_2escm",(void*)f_4552},
{"f_4557:expand_2escm",(void*)f_4557},
{"f_4550:expand_2escm",(void*)f_4550},
{"f_5234:expand_2escm",(void*)f_5234},
{"f_8167:expand_2escm",(void*)f_8167},
{"f_8142:expand_2escm",(void*)f_8142},
{"f_5371:expand_2escm",(void*)f_5371},
{"f_5376:expand_2escm",(void*)f_5376},
{"f_5378:expand_2escm",(void*)f_5378},
{"f_8028:expand_2escm",(void*)f_8028},
{"f_8026:expand_2escm",(void*)f_8026},
{"f_8137:expand_2escm",(void*)f_8137},
{"f_8024:expand_2escm",(void*)f_8024},
{"f_8134:expand_2escm",(void*)f_8134},
{"f_9461:expand_2escm",(void*)f_9461},
{"f_9467:expand_2escm",(void*)f_9467},
{"f_9469:expand_2escm",(void*)f_9469},
{"f_8013:expand_2escm",(void*)f_8013},
{"f_9472:expand_2escm",(void*)f_9472},
{"f_5533:expand_2escm",(void*)f_5533},
{"f_5531:expand_2escm",(void*)f_5531},
{"f_9481:expand_2escm",(void*)f_9481},
{"f_5528:expand_2escm",(void*)f_5528},
{"f_6105:expand_2escm",(void*)f_6105},
{"f_8067:expand_2escm",(void*)f_8067},
{"f_6108:expand_2escm",(void*)f_6108},
{"f_8048:expand_2escm",(void*)f_8048},
{"f_8043:expand_2escm",(void*)f_8043},
{"f_8046:expand_2escm",(void*)f_8046},
{"f_8040:expand_2escm",(void*)f_8040},
{"f_4742:expand_2escm",(void*)f_4742},
{"f_3570:expand_2escm",(void*)f_3570},
{"f_4424:expand_2escm",(void*)f_4424},
{"f_4420:expand_2escm",(void*)f_4420},
{"f_3585:expand_2escm",(void*)f_3585},
{"f_3584:expand_2escm",(void*)f_3584},
{"f_3579:expand_2escm",(void*)f_3579},
{"f_4410:expand_2escm",(void*)f_4410},
{"f_3552:expand_2escm",(void*)f_3552},
{"f_3587:expand_2escm",(void*)f_3587},
{"f_5394:expand_2escm",(void*)f_5394},
{"f_5383:expand_2escm",(void*)f_5383},
{"f_5381:expand_2escm",(void*)f_5381},
{"f_8790:expand_2escm",(void*)f_8790},
{"f_8792:expand_2escm",(void*)f_8792},
{"f_6285:expand_2escm",(void*)f_6285},
{"f_9947:expand_2escm",(void*)f_9947},
{"f_9949:expand_2escm",(void*)f_9949},
{"f_6289:expand_2escm",(void*)f_6289},
{"f_8343:expand_2escm",(void*)f_8343},
{"f_3591:expand_2escm",(void*)f_3591},
{"f_3592:expand_2escm",(void*)f_3592},
{"f_9952:expand_2escm",(void*)f_9952},
{"f_4446:expand_2escm",(void*)f_4446},
{"f_4441:expand_2escm",(void*)f_4441},
{"f_9920:expand_2escm",(void*)f_9920},
{"f_8706:expand_2escm",(void*)f_8706},
{"f_4435:expand_2escm",(void*)f_4435},
{"f_5346:expand_2escm",(void*)f_5346},
{"f_8377:expand_2escm",(void*)f_8377},
{"f_5512:expand_2escm",(void*)f_5512},
{"f_5510:expand_2escm",(void*)f_5510},
{"f_8370:expand_2escm",(void*)f_8370},
{"f_5503:expand_2escm",(void*)f_5503},
{"f_8356:expand_2escm",(void*)f_8356},
{"f_6260:expand_2escm",(void*)f_6260},
{"f_8350:expand_2escm",(void*)f_8350},
{"f_8007:expand_2escm",(void*)f_8007},
{"f_8009:expand_2escm",(void*)f_8009},
{"f_6266:expand_2escm",(void*)f_6266},
{"f_8361:expand_2escm",(void*)f_8361},
{"f_9365:expand_2escm",(void*)f_9365},
{"f_7299:expand_2escm",(void*)f_7299},
{"f_5223:expand_2escm",(void*)f_5223},
{"f_9340:expand_2escm",(void*)f_9340},
{"f_7279:expand_2escm",(void*)f_7279},
{"f_9357:expand_2escm",(void*)f_9357},
{"f_6238:expand_2escm",(void*)f_6238},
{"f_7250:expand_2escm",(void*)f_7250},
{"f_7258:expand_2escm",(void*)f_7258},
{"f_6241:expand_2escm",(void*)f_6241},
{"f_7288:expand_2escm",(void*)f_7288},
{"f_7236:expand_2escm",(void*)f_7236},
{"f_7233:expand_2escm",(void*)f_7233},
{"f_7263:expand_2escm",(void*)f_7263},
{"f_7261:expand_2escm",(void*)f_7261},
{"f_3702:expand_2escm",(void*)f_3702},
{"f_7244:expand_2escm",(void*)f_7244},
{"f_4690:expand_2escm",(void*)f_4690},
{"f_3384:expand_2escm",(void*)f_3384},
{"f_3382:expand_2escm",(void*)f_3382},
{"f_9513:expand_2escm",(void*)f_9513},
{"f_9516:expand_2escm",(void*)f_9516},
{"f_9511:expand_2escm",(void*)f_9511},
{"f_9522:expand_2escm",(void*)f_9522},
{"f_9524:expand_2escm",(void*)f_9524},
{"f_9526:expand_2escm",(void*)f_9526},
{"f_9528:expand_2escm",(void*)f_9528},
{"f_3671:expand_2escm",(void*)f_3671},
{"f_3408:expand_2escm",(void*)f_3408},
{"f_3402:expand_2escm",(void*)f_3402},
{"f_8832:expand_2escm",(void*)f_8832},
{"f_3413:expand_2escm",(void*)f_3413},
{"f_3411:expand_2escm",(void*)f_3411},
{"f_3648:expand_2escm",(void*)f_3648},
{"f_3419:expand_2escm",(void*)f_3419},
{"f_3415:expand_2escm",(void*)f_3415},
{"f_8849:expand_2escm",(void*)f_8849},
{"f_6738:expand_2escm",(void*)f_6738},
{"f_6732:expand_2escm",(void*)f_6732},
{"f_9503:expand_2escm",(void*)f_9503},
{"f_3423:expand_2escm",(void*)f_3423},
{"f_9183:expand_2escm",(void*)f_9183},
{"f_5315:expand_2escm",(void*)f_5315},
{"f_9189:expand_2escm",(void*)f_9189},
{"f_3427:expand_2escm",(void*)f_3427},
{"f_4645:expand_2escm",(void*)f_4645},
{"f_4648:expand_2escm",(void*)f_4648},
{"f_8814:expand_2escm",(void*)f_8814},
{"f_3432:expand_2escm",(void*)f_3432},
{"f_3431:expand_2escm",(void*)f_3431},
{"f_3662:expand_2escm",(void*)f_3662},
{"f_5304:expand_2escm",(void*)f_5304},
{"f_5302:expand_2escm",(void*)f_5302},
{"f_3436:expand_2escm",(void*)f_3436},
{"f_6759:expand_2escm",(void*)f_6759},
{"f_6756:expand_2escm",(void*)f_6756},
{"f_5332:expand_2escm",(void*)f_5332},
{"f_7706:expand_2escm",(void*)f_7706},
{"f_3454:expand_2escm",(void*)f_3454},
{"f_4921:expand_2escm",(void*)f_4921},
{"f_8882:expand_2escm",(void*)f_8882},
{"f_3461:expand_2escm",(void*)f_3461},
{"f_6741:expand_2escm",(void*)f_6741},
{"f_6743:expand_2escm",(void*)f_6743},
{"f_5576:expand_2escm",(void*)f_5576},
{"f_4902:expand_2escm",(void*)f_4902},
{"f_8868:expand_2escm",(void*)f_8868},
{"f_7971:expand_2escm",(void*)f_7971},
{"f_4114:expand_2escm",(void*)f_4114},
{"f_4117:expand_2escm",(void*)f_4117},
{"f_9130:expand_2escm",(void*)f_9130},
{"f_5597:expand_2escm",(void*)f_5597},
{"toplevel:expand_2escm",(void*)C_expand_toplevel},
{"f_9139:expand_2escm",(void*)f_9139},
{"f_5588:expand_2escm",(void*)f_5588},
{"f_5203:expand_2escm",(void*)f_5203},
{"f_9118:expand_2escm",(void*)f_9118},
{"f_9110:expand_2escm",(void*)f_9110},
{"f_3727:expand_2escm",(void*)f_3727},
{"f_7723:expand_2escm",(void*)f_7723},
{"f_4103:expand_2escm",(void*)f_4103},
{"f_4101:expand_2escm",(void*)f_4101},
{"f_3735:expand_2escm",(void*)f_3735},
{"f_7712:expand_2escm",(void*)f_7712},
{"f_9416:expand_2escm",(void*)f_9416},
{"f_4984:expand_2escm",(void*)f_4984},
{"f_4147:expand_2escm",(void*)f_4147},
{"f_4140:expand_2escm",(void*)f_4140},
{"f_7495:expand_2escm",(void*)f_7495},
{"f_6211:expand_2escm",(void*)f_6211},
{"f_9602:expand_2escm",(void*)f_9602},
{"f_9604:expand_2escm",(void*)f_9604},
{"f_4135:expand_2escm",(void*)f_4135},
{"f_4130:expand_2escm",(void*)f_4130},
{"f_6898:expand_2escm",(void*)f_6898},
{"f_3522:expand_2escm",(void*)f_3522},
{"f_6220:expand_2escm",(void*)f_6220},
{"f_6225:expand_2escm",(void*)f_6225},
{"f_6223:expand_2escm",(void*)f_6223},
{"f_9285:expand_2escm",(void*)f_9285},
{"f_9281:expand_2escm",(void*)f_9281},
{"f_7751:expand_2escm",(void*)f_7751},
{"f_7755:expand_2escm",(void*)f_7755},
{"f_3528:expand_2escm",(void*)f_3528},
{"f_4152:expand_2escm",(void*)f_4152},
{"f_9629:expand_2escm",(void*)f_9629},
{"f_9296:expand_2escm",(void*)f_9296},
{"f_7204:expand_2escm",(void*)f_7204},
{"f_7208:expand_2escm",(void*)f_7208},
{"f_7200:expand_2escm",(void*)f_7200},
{"f_5188:expand_2escm",(void*)f_5188},
{"f_4828:expand_2escm",(void*)f_4828},
{"f_5170:expand_2escm",(void*)f_5170},
{"f_7437:expand_2escm",(void*)f_7437},
{"f_7430:expand_2escm",(void*)f_7430},
{"f_9977:expand_2escm",(void*)f_9977},
{"f_9975:expand_2escm",(void*)f_9975},
{"f_7425:expand_2escm",(void*)f_7425},
{"f_7421:expand_2escm",(void*)f_7421},
{"f_3543:expand_2escm",(void*)f_3543},
{"f_7417:expand_2escm",(void*)f_7417},
{"f_7413:expand_2escm",(void*)f_7413},
{"f_4816:expand_2escm",(void*)f_4816},
{"f_9858:expand_2escm",(void*)f_9858},
{"f_9938:expand_2escm",(void*)f_9938},
{"f_9935:expand_2escm",(void*)f_9935},
{"f_9933:expand_2escm",(void*)f_9933},
{"f_9201:expand_2escm",(void*)f_9201},
{"f_9204:expand_2escm",(void*)f_9204},
{"f_10201:expand_2escm",(void*)f_10201},
{"f_4844:expand_2escm",(void*)f_4844},
{"f_10204:expand_2escm",(void*)f_10204},
{"f_4002:expand_2escm",(void*)f_4002},
{"f_9988:expand_2escm",(void*)f_9988},
{"f_4007:expand_2escm",(void*)f_4007},
{"f_9980:expand_2escm",(void*)f_9980},
{"f_9217:expand_2escm",(void*)f_9217},
{"f_5158:expand_2escm",(void*)f_5158},
{"f_10215:expand_2escm",(void*)f_10215},
{"f_10213:expand_2escm",(void*)f_10213},
{"f_4012:expand_2escm",(void*)f_4012},
{"f_10218:expand_2escm",(void*)f_10218},
{"f_9225:expand_2escm",(void*)f_9225},
{"f_9221:expand_2escm",(void*)f_9221},
{"f_9966:expand_2escm",(void*)f_9966},
{"f_9963:expand_2escm",(void*)f_9963},
{"f_9961:expand_2escm",(void*)f_9961},
{"f_5197:expand_2escm",(void*)f_5197},
{"f_5194:expand_2escm",(void*)f_5194},
{"f_7409:expand_2escm",(void*)f_7409},
{"f_7405:expand_2escm",(void*)f_7405},
{"f_10260:expand_2escm",(void*)f_10260},
{"f_10269:expand_2escm",(void*)f_10269},
{"f_4021:expand_2escm",(void*)f_4021},
{"f_10271:expand_2escm",(void*)f_10271},
{"f_8907:expand_2escm",(void*)f_8907},
{"f_10278:expand_2escm",(void*)f_10278},
{"f_4051:expand_2escm",(void*)f_4051},
{"f_9901:expand_2escm",(void*)f_9901},
{"f_10280:expand_2escm",(void*)f_10280},
{"f_10287:expand_2escm",(void*)f_10287},
{"f_10289:expand_2escm",(void*)f_10289},
{"f_8974:expand_2escm",(void*)f_8974},
{"f_8737:expand_2escm",(void*)f_8737},
{"f_8749:expand_2escm",(void*)f_8749},
{"f_5072:expand_2escm",(void*)f_5072},
{"f_5093:expand_2escm",(void*)f_5093},
{"f_9174:expand_2escm",(void*)f_9174},
{"f_7660:expand_2escm",(void*)f_7660},
{"f_5097:expand_2escm",(void*)f_5097},
{"f_7663:expand_2escm",(void*)f_7663},
{"f_7666:expand_2escm",(void*)f_7666},
{"f_6208:expand_2escm",(void*)f_6208},
{"f_8779:expand_2escm",(void*)f_8779},
{"f_8777:expand_2escm",(void*)f_8777},
{"f_9148:expand_2escm",(void*)f_9148},
{"f_3790:expand_2escm",(void*)f_3790},
{"f_8784:expand_2escm",(void*)f_8784},
{"f_4864:expand_2escm",(void*)f_4864},
{"f_8788:expand_2escm",(void*)f_8788},
{"f_8786:expand_2escm",(void*)f_8786},
{"f_9157:expand_2escm",(void*)f_9157},
{"f_4862:expand_2escm",(void*)f_4862},
{"f_9056:expand_2escm",(void*)f_9056},
{"f_9058:expand_2escm",(void*)f_9058},
{"f_8755:expand_2escm",(void*)f_8755},
{"f_8757:expand_2escm",(void*)f_8757},
{"f_6081:expand_2escm",(void*)f_6081},
{"f_6086:expand_2escm",(void*)f_6086},
{"f_3774:expand_2escm",(void*)f_3774},
{"f_3749:expand_2escm",(void*)f_3749},
{"f_9061:expand_2escm",(void*)f_9061},
{"f_9063:expand_2escm",(void*)f_9063},
{"f_9065:expand_2escm",(void*)f_9065},
{"f_9067:expand_2escm",(void*)f_9067},
{"f_8766:expand_2escm",(void*)f_8766},
{"f_8768:expand_2escm",(void*)f_8768},
{"f_5868:expand_2escm",(void*)f_5868},
{"f_3741:expand_2escm",(void*)f_3741},
{"f_6363:expand_2escm",(void*)f_6363},
{"f_9074:expand_2escm",(void*)f_9074},
{"f_9076:expand_2escm",(void*)f_9076},
{"f_3618:expand_2escm",(void*)f_3618},
{"f_3612:expand_2escm",(void*)f_3612},
{"f_5081:expand_2escm",(void*)f_5081},
{"f_5085:expand_2escm",(void*)f_5085},
{"f_10039:expand_2escm",(void*)f_10039},
{"f_10037:expand_2escm",(void*)f_10037},
{"f_10031:expand_2escm",(void*)f_10031},
{"f_5852:expand_2escm",(void*)f_5852},
{"f_3753:expand_2escm",(void*)f_3753},
{"f_3757:expand_2escm",(void*)f_3757},
{"f_10048:expand_2escm",(void*)f_10048},
{"f_9092:expand_2escm",(void*)f_9092},
{"f_3631:expand_2escm",(void*)f_3631},
{"f_9165:expand_2escm",(void*)f_9165},
{"f_10059:expand_2escm",(void*)f_10059},
{"f_10057:expand_2escm",(void*)f_10057},
{"f_10054:expand_2escm",(void*)f_10054},
{"f_3607:expand_2escm",(void*)f_3607},
{"f_6053:expand_2escm",(void*)f_6053},
{"f_5825:expand_2escm",(void*)f_5825},
{"f_5823:expand_2escm",(void*)f_5823},
{"f_10061:expand_2escm",(void*)f_10061},
{"f_10063:expand_2escm",(void*)f_10063},
{"f_6061:expand_2escm",(void*)f_6061},
{"f_6068:expand_2escm",(void*)f_6068},
{"f_5814:expand_2escm",(void*)f_5814},
{"f_5812:expand_2escm",(void*)f_5812},
{"f_9041:expand_2escm",(void*)f_9041},
{"f_9044:expand_2escm",(void*)f_9044},
{"f_3620:expand_2escm",(void*)f_3620},
{"f_6070:expand_2escm",(void*)f_6070},
{"f_5846:expand_2escm",(void*)f_5846},
{"f_10096:expand_2escm",(void*)f_10096},
{"f_10098:expand_2escm",(void*)f_10098},
{"f_4188:expand_2escm",(void*)f_4188},
{"f_3857:expand_2escm",(void*)f_3857},
{"f_7442:expand_2escm",(void*)f_7442},
{"f_7446:expand_2escm",(void*)f_7446},
{"f_7891:expand_2escm",(void*)f_7891},
{"f_9089:expand_2escm",(void*)f_9089},
{"f_3861:expand_2escm",(void*)f_3861},
{"f_3863:expand_2escm",(void*)f_3863},
{"f_3865:expand_2escm",(void*)f_3865},
{"f_3869:expand_2escm",(void*)f_3869},
{"f_10229:expand_2escm",(void*)f_10229},
{"f_4124:expand_2escm",(void*)f_4124},
{"f_10227:expand_2escm",(void*)f_10227},
{"f_6382:expand_2escm",(void*)f_6382},
{"f_4352:expand_2escm",(void*)f_4352},
{"f_10232:expand_2escm",(void*)f_10232},
{"f_4356:expand_2escm",(void*)f_4356},
{"f_4359:expand_2escm",(void*)f_4359},
{"f_9242:expand_2escm",(void*)f_9242},
{"f_9246:expand_2escm",(void*)f_9246},
{"f_8118:expand_2escm",(void*)f_8118},
{"f_8115:expand_2escm",(void*)f_8115},
{"f_10243:expand_2escm",(void*)f_10243},
{"f_10241:expand_2escm",(void*)f_10241},
{"f_3883:expand_2escm",(void*)f_3883},
{"f_10246:expand_2escm",(void*)f_10246},
{"f_4306:expand_2escm",(void*)f_4306},
{"f_3895:expand_2escm",(void*)f_3895},
{"f_3891:expand_2escm",(void*)f_3891},
{"f_10257:expand_2escm",(void*)f_10257},
{"f_10255:expand_2escm",(void*)f_10255},
{"f_7489:expand_2escm",(void*)f_7489},
{"f_10009:expand_2escm",(void*)f_10009},
{"f_4163:expand_2escm",(void*)f_4163},
{"f_4161:expand_2escm",(void*)f_4161},
{"f_6343:expand_2escm",(void*)f_6343},
{"f_6349:expand_2escm",(void*)f_6349},
{"f_4394:expand_2escm",(void*)f_4394},
{"f_7162:expand_2escm",(void*)f_7162},
{"f_7461:expand_2escm",(void*)f_7461},
{"f_7467:expand_2escm",(void*)f_7467},
{"f_6351:expand_2escm",(void*)f_6351},
{"f_10011:expand_2escm",(void*)f_10011},
{"f_6355:expand_2escm",(void*)f_6355},
{"f_7154:expand_2escm",(void*)f_7154},
{"f_7151:expand_2escm",(void*)f_7151},
{"f_7168:expand_2escm",(void*)f_7168},
{"f_10024:expand_2escm",(void*)f_10024},
{"f_10026:expand_2escm",(void*)f_10026},
{"f_10027:expand_2escm",(void*)f_10027},
{"f_7450:expand_2escm",(void*)f_7450},
{"f_7454:expand_2escm",(void*)f_7454},
{"f_7459:expand_2escm",(void*)f_7459},
{"f_5938:expand_2escm",(void*)f_5938},
{"f_5934:expand_2escm",(void*)f_5934},
{"f_7966:expand_2escm",(void*)f_7966},
{"f_7135:expand_2escm",(void*)f_7135},
{"f_7941:expand_2escm",(void*)f_7941},
{"f_7132:expand_2escm",(void*)f_7132},
{"f_7944:expand_2escm",(void*)f_7944},
{"f_5951:expand_2escm",(void*)f_5951},
{"f_8429:expand_2escm",(void*)f_8429},
{"f_5988:expand_2escm",(void*)f_5988},
{"f_8409:expand_2escm",(void*)f_8409},
{"f_8403:expand_2escm",(void*)f_8403},
{"f_7901:expand_2escm",(void*)f_7901},
{"f_3945:expand_2escm",(void*)f_3945},
{"f_3979:expand_2escm",(void*)f_3979},
{"f_10171:expand_2escm",(void*)f_10171},
{"f_3950:expand_2escm",(void*)f_3950},
{"f_3948:expand_2escm",(void*)f_3948},
{"f_6849:expand_2escm",(void*)f_6849},
{"f_6843:expand_2escm",(void*)f_6843},
{"f_7073:expand_2escm",(void*)f_7073},
{"f_4035:expand_2escm",(void*)f_4035},
{"f_4030:expand_2escm",(void*)f_4030},
{"f_4060:expand_2escm",(void*)f_4060},
{"f_6863:expand_2escm",(void*)f_6863},
{"f_3985:expand_2escm",(void*)f_3985},
{"f_10155:expand_2escm",(void*)f_10155},
{"f_10152:expand_2escm",(void*)f_10152},
{"f_4096:expand_2escm",(void*)f_4096},
{"f_4098:expand_2escm",(void*)f_4098},
{"f_6877:expand_2escm",(void*)f_6877},
{"f_6801:expand_2escm",(void*)f_6801},
{"f_3989:expand_2escm",(void*)f_3989},
{"f_10169:expand_2escm",(void*)f_10169},
{"f_6805:expand_2escm",(void*)f_6805},
{"f_9022:expand_2escm",(void*)f_9022},
{"f_10163:expand_2escm",(void*)f_10163},
{"f_9039:expand_2escm",(void*)f_9039},
{"f_3997:expand_2escm",(void*)f_3997},
{"f_10133:expand_2escm",(void*)f_10133},
{"f_10131:expand_2escm",(void*)f_10131},
{"f_6819:expand_2escm",(void*)f_6819},
{"f_6815:expand_2escm",(void*)f_6815},
{"f_9788:expand_2escm",(void*)f_9788},
{"f_10146:expand_2escm",(void*)f_10146},
{"f_6824:expand_2escm",(void*)f_6824},
{"f_6822:expand_2escm",(void*)f_6822},
{"f_7630:expand_2escm",(void*)f_7630},
{"f_10125:expand_2escm",(void*)f_10125},
{"f_10101:expand_2escm",(void*)f_10101},
{"f_8411:expand_2escm",(void*)f_8411},
{"f_9896:expand_2escm",(void*)f_9896},
{"f_9898:expand_2escm",(void*)f_9898},
{"f_9893:expand_2escm",(void*)f_9893},
{"f_9746:expand_2escm",(void*)f_9746},
{"f_9748:expand_2escm",(void*)f_9748},
{"f_10106:expand_2escm",(void*)f_10106},
{"f_4204:expand_2escm",(void*)f_4204},
{"f_9006:expand_2escm",(void*)f_9006},
{"f_7063:expand_2escm",(void*)f_7063},
{"f_7068:expand_2escm",(void*)f_7068},
{"f_9821:expand_2escm",(void*)f_9821},
{"f_9823:expand_2escm",(void*)f_9823},
{"f_7051:expand_2escm",(void*)f_7051},
{"f_6952:expand_2escm",(void*)f_6952},
{"f_6303:expand_2escm",(void*)f_6303},
{"f_8320:expand_2escm",(void*)f_8320},
{"f_6315:expand_2escm",(void*)f_6315},
{"f_6311:expand_2escm",(void*)f_6311},
{"f_9843:expand_2escm",(void*)f_9843},
{"f_6327:expand_2escm",(void*)f_6327},
{"f_9732:expand_2escm",(void*)f_9732},
{"f_4262:expand_2escm",(void*)f_4262},
{"f_4264:expand_2escm",(void*)f_4264},
{"f_7039:expand_2escm",(void*)f_7039},
{"f_6322:expand_2escm",(void*)f_6322},
{"f_6337:expand_2escm",(void*)f_6337},
{"f_3972:expand_2escm",(void*)f_3972},
{"f_6331:expand_2escm",(void*)f_6331},
{"f_9866:expand_2escm",(void*)f_9866},
{"f_9864:expand_2escm",(void*)f_9864},
{"f_7095:expand_2escm",(void*)f_7095},
{"f_10199:expand_2escm",(void*)f_10199},
{"f_9769:expand_2escm",(void*)f_9769},
{"f_5467:expand_2escm",(void*)f_5467},
{"f_4739:expand_2escm",(void*)f_4739},
{"f_4737:expand_2escm",(void*)f_4737},
{"f_8939:expand_2escm",(void*)f_8939},
{"f_4734:expand_2escm",(void*)f_4734},
{"f_4609:expand_2escm",(void*)f_4609},
{"f_8949:expand_2escm",(void*)f_8949},
{"f_8947:expand_2escm",(void*)f_8947},
{"f_8484:expand_2escm",(void*)f_8484},
{"f_8486:expand_2escm",(void*)f_8486},
{"f_10121:expand_2escm",(void*)f_10121},
{"f_10120:expand_2escm",(void*)f_10120},
{"f_8913:expand_2escm",(void*)f_8913},
{"f_3837:expand_2escm",(void*)f_3837},
{"f_8927:expand_2escm",(void*)f_8927},
{"f_4344:expand_2escm",(void*)f_4344},
{"f_8300:expand_2escm",(void*)f_8300},
{"f_4506:expand_2escm",(void*)f_4506},
{"f_5492:expand_2escm",(void*)f_5492},
{"f_8608:expand_2escm",(void*)f_8608},
{"f_8606:expand_2escm",(void*)f_8606},
{"f_6171:expand_2escm",(void*)f_6171},
{"f_6176:expand_2escm",(void*)f_6176},
{"f_6178:expand_2escm",(void*)f_6178},
{"f_4370:expand_2escm",(void*)f_4370},
{"f_6186:expand_2escm",(void*)f_6186},
{"f_6188:expand_2escm",(void*)f_6188},
{"f_6192:expand_2escm",(void*)f_6192},
{"f_6190:expand_2escm",(void*)f_6190},
{"f_6196:expand_2escm",(void*)f_6196},
{"f_6194:expand_2escm",(void*)f_6194},
{"f_3816:expand_2escm",(void*)f_3816},
{"f_3820:expand_2escm",(void*)f_3820},
{"f_5453:expand_2escm",(void*)f_5453},
{"f_6009:expand_2escm",(void*)f_6009},
{"f_4319:expand_2escm",(void*)f_4319},
{"f_4314:expand_2escm",(void*)f_4314},
{"f_6011:expand_2escm",(void*)f_6011},
{"f_8639:expand_2escm",(void*)f_8639},
{"f_6015:expand_2escm",(void*)f_6015},
{"f_4585:expand_2escm",(void*)f_4585},
{"f_8621:expand_2escm",(void*)f_8621},
{"f_4573:expand_2escm",(void*)f_4573},
{"f_4570:expand_2escm",(void*)f_4570},
{"f_8619:expand_2escm",(void*)f_8619},
{"f_6161:expand_2escm",(void*)f_6161},
{"f_8613:expand_2escm",(void*)f_8613},
{"f_6165:expand_2escm",(void*)f_6165},
{"f_6163:expand_2escm",(void*)f_6163},
{"f_7571:expand_2escm",(void*)f_7571},
{"f_7573:expand_2escm",(void*)f_7573},
{"f_7577:expand_2escm",(void*)f_7577},
{"f_7329:expand_2escm",(void*)f_7329},
{"f_7327:expand_2escm",(void*)f_7327},
{"f_7325:expand_2escm",(void*)f_7325},
{"f_7321:expand_2escm",(void*)f_7321},
{"f_7565:expand_2escm",(void*)f_7565},
{"f_6683:expand_2escm",(void*)f_6683},
{"f_4630:expand_2escm",(void*)f_4630},
{"f_7568:expand_2escm",(void*)f_7568},
{"f_7309:expand_2escm",(void*)f_7309},
{"f_7307:expand_2escm",(void*)f_7307},
{"f_7301:expand_2escm",(void*)f_7301},
{"f_7303:expand_2escm",(void*)f_7303},
{"f_7339:expand_2escm",(void*)f_7339},
{"f_7337:expand_2escm",(void*)f_7337},
{"f_7335:expand_2escm",(void*)f_7335},
{"f_7333:expand_2escm",(void*)f_7333},
{"f_7331:expand_2escm",(void*)f_7331},
{"f_7027:expand_2escm",(void*)f_7027},
{"f_6132:expand_2escm",(void*)f_6132},
{"f_6134:expand_2escm",(void*)f_6134},
{"f_7014:expand_2escm",(void*)f_7014},
{"f_7018:expand_2escm",(void*)f_7018},
{"f_6140:expand_2escm",(void*)f_6140},
{"f_6148:expand_2escm",(void*)f_6148},
{"f_6146:expand_2escm",(void*)f_6146},
{"f_6159:expand_2escm",(void*)f_6159},
{"f_6157:expand_2escm",(void*)f_6157},
{"f_5778:expand_2escm",(void*)f_5778},
{"f_7599:expand_2escm",(void*)f_7599},
{"f_5773:expand_2escm",(void*)f_5773},
{"f_6462:expand_2escm",(void*)f_6462},
{"f_5767:expand_2escm",(void*)f_5767},
{"f_7815:expand_2escm",(void*)f_7815},
{"f_3927:expand_2escm",(void*)f_3927},
{"f_7888:expand_2escm",(void*)f_7888},
{"f_6632:expand_2escm",(void*)f_6632},
{"f_5716:expand_2escm",(void*)f_5716},
{"f_5711:expand_2escm",(void*)f_5711},
{"f_3938:expand_2escm",(void*)f_3938},
{"f_3910:expand_2escm",(void*)f_3910},
{"f_7872:expand_2escm",(void*)f_7872},
{"f_5709:expand_2escm",(void*)f_5709},
{"f_7878:expand_2escm",(void*)f_7878},
{"f_3908:expand_2escm",(void*)f_3908},
{"f_3903:expand_2escm",(void*)f_3903},
{"f_3901:expand_2escm",(void*)f_3901},
{"f_8665:expand_2escm",(void*)f_8665},
{"f_8668:expand_2escm",(void*)f_8668},
{"f_7542:expand_2escm",(void*)f_7542},
{"f_5730:expand_2escm",(void*)f_5730},
{"f_3918:expand_2escm",(void*)f_3918},
{"f_7119:expand_2escm",(void*)f_7119},
{"f_7850:expand_2escm",(void*)f_7850},
{"f_8670:expand_2escm",(void*)f_8670},
{"f_8672:expand_2escm",(void*)f_8672},
{"f_5728:expand_2escm",(void*)f_5728},
{"f_7549:expand_2escm",(void*)f_7549},
{"f_6629:expand_2escm",(void*)f_6629},
{"f_7315:expand_2escm",(void*)f_7315},
{"f_7317:expand_2escm",(void*)f_7317},
{"f_7311:expand_2escm",(void*)f_7311},
{"f_7313:expand_2escm",(void*)f_7313},
{"f_4234:expand_2escm",(void*)f_4234},
{"f_4226:expand_2escm",(void*)f_4226},
{"f_4221:expand_2escm",(void*)f_4221},
{"f_4483:expand_2escm",(void*)f_4483},
{"f_4489:expand_2escm",(void*)f_4489},
{"f_5411:expand_2escm",(void*)f_5411},
{"f_4404:expand_2escm",(void*)f_4404},
{"f_8682:expand_2escm",(void*)f_8682},
{"f_6480:expand_2escm",(void*)f_6480},
{"f_5436:expand_2escm",(void*)f_5436},
{"f_5425:expand_2escm",(void*)f_5425},
{"f_8396:expand_2escm",(void*)f_8396},
{"f_9590:expand_2escm",(void*)f_9590},
{"f_8641:expand_2escm",(void*)f_8641},
{"f_4244:expand_2escm",(void*)f_4244},
{"f_6442:expand_2escm",(void*)f_6442},
{"f_7005:expand_2escm",(void*)f_7005},
{"f_7009:expand_2escm",(void*)f_7009},
{"f_6457:expand_2escm",(void*)f_6457},
{"f_5671:expand_2escm",(void*)f_5671},
{"f_5677:expand_2escm",(void*)f_5677},
{"f_9571:expand_2escm",(void*)f_9571},
{"f_9574:expand_2escm",(void*)f_9574},
{"f_9586:expand_2escm",(void*)f_9586},
{"f_9551:expand_2escm",(void*)f_9551},
{"f_9557:expand_2escm",(void*)f_9557},
{"f_9559:expand_2escm",(void*)f_9559},
{"f_8561:expand_2escm",(void*)f_8561},
{"f_8563:expand_2escm",(void*)f_8563},
{"f_8450:expand_2escm",(void*)f_8450},
{"f_9569:expand_2escm",(void*)f_9569},
{"f_8570:expand_2escm",(void*)f_8570},
{"f_8566:expand_2escm",(void*)f_8566},
{"f_8568:expand_2escm",(void*)f_8568},
{"f_9539:expand_2escm",(void*)f_9539},
{"f_9537:expand_2escm",(void*)f_9537},
{"f_8291:expand_2escm",(void*)f_8291},
{"f_8293:expand_2escm",(void*)f_8293},
{"f_8517:expand_2escm",(void*)f_8517},
{"f_6121:expand_2escm",(void*)f_6121},
{"f_6775:expand_2escm",(void*)f_6775},
{"f_6778:expand_2escm",(void*)f_6778},
{"f_8576:expand_2escm",(void*)f_8576},
{"f_9709:expand_2escm",(void*)f_9709},
{"f_8260:expand_2escm",(void*)f_8260},
{"f_9715:expand_2escm",(void*)f_9715},
{"f_9717:expand_2escm",(void*)f_9717},
{"f_8277:expand_2escm",(void*)f_8277},
{"f_8495:expand_2escm",(void*)f_8495},
{"f_8535:expand_2escm",(void*)f_8535},
{"f_8532:expand_2escm",(void*)f_8532},
{"f_6790:expand_2escm",(void*)f_6790},
{"f_8530:expand_2escm",(void*)f_8530},
{"f_8464:expand_2escm",(void*)f_8464},
{"f_8251:expand_2escm",(void*)f_8251},
{"f_6934:expand_2escm",(void*)f_6934},
{"f_9389:expand_2escm",(void*)f_9389},
{"f_8449:expand_2escm",(void*)f_8449},
{"f_5280:expand_2escm",(void*)f_5280},
{"f_8442:expand_2escm",(void*)f_8442},
{"f_8589:expand_2escm",(void*)f_8589},
{"f_8587:expand_2escm",(void*)f_8587},
{"f_8584:expand_2escm",(void*)f_8584},
{"f_7506:expand_2escm",(void*)f_7506},
{"f_8210:expand_2escm",(void*)f_8210},
{"f_8212:expand_2escm",(void*)f_8212},
{"f_9391:expand_2escm",(void*)f_9391},
{"f_7797:expand_2escm",(void*)f_7797},
{"f_5272:expand_2escm",(void*)f_5272},
{"f_5274:expand_2escm",(void*)f_5274},
{"f_7359:expand_2escm",(void*)f_7359},
{"f_7351:expand_2escm",(void*)f_7351},
{"f_7353:expand_2escm",(void*)f_7353},
{"f_7355:expand_2escm",(void*)f_7355},
{"f_7357:expand_2escm",(void*)f_7357},
{"f_6973:expand_2escm",(void*)f_6973},
{"f_6977:expand_2escm",(void*)f_6977},
{"f_9680:expand_2escm",(void*)f_9680},
{"f_6985:expand_2escm",(void*)f_6985},
{"f_3397:expand_2escm",(void*)f_3397},
{"f_6988:expand_2escm",(void*)f_6988},
{"f_8549:expand_2escm",(void*)f_8549},
{"f_6981:expand_2escm",(void*)f_6981},
{"f_6980:expand_2escm",(void*)f_6980},
{"f_3478:expand_2escm",(void*)f_3478},
{"f_3393:expand_2escm",(void*)f_3393},
{"f_9324:expand_2escm",(void*)f_9324},
{"f_7363:expand_2escm",(void*)f_7363},
{"f_3482:expand_2escm",(void*)f_3482},
{"f_3483:expand_2escm",(void*)f_3483},
{"f_7361:expand_2escm",(void*)f_7361},
{"f_7367:expand_2escm",(void*)f_7367},
{"f_7365:expand_2escm",(void*)f_7365},
{"f_7531:expand_2escm",(void*)f_7531},
{"f_7399:expand_2escm",(void*)f_7399},
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
S|  ##sys#map		6
S|  for-each		3
S|  map		10
o|eliminated procedure checks: 522 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (zero? fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  2 (vector-length vector)
o|  8 (eqv? (not float) *)
o|  2 (cadr (pair * pair))
o|  8 (cddr (pair * pair))
o|  1 (cdadr (pair * (pair pair *)))
o|  1 (caar (pair pair *))
o|  1 (>= fixnum fixnum)
o|  2 (length list)
o|  15 (eqv? * (not float))
o|  1 (##sys#call-with-values (procedure () *) *)
o|  2 (cdar (pair pair *))
o|  11 (##sys#check-list (or pair list) *)
o|  1 (set-cdr! pair *)
o|  70 (cdr pair)
o|  1 (set-car! pair *)
o|  50 (car pair)
o|Removed `not' forms: 35 
o|inlining procedure: k3387 
o|inlining procedure: k3387 
o|inlining procedure: k3405 
o|inlining procedure: k3405 
o|removed call to pure procedure with unused result: "(expand.scm:87) void" 
o|inlining procedure: k3443 
o|inlining procedure: k3443 
o|inlining procedure: k3466 
o|inlining procedure: k3466 
o|inlining procedure: k3488 
o|inlining procedure: k3488 
o|contracted procedure: k3494 
o|inlining procedure: k3497 
o|inlining procedure: k3497 
o|inlining procedure: k3503 
o|inlining procedure: k3503 
o|inlining procedure: k3555 
o|inlining procedure: k3555 
o|inlining procedure: k3598 
o|inlining procedure: k3598 
o|inlining procedure: k3623 
o|inlining procedure: k3623 
o|inlining procedure: k3665 
o|inlining procedure: k3665 
o|inlining procedure: k3705 
o|inlining procedure: k3705 
o|inlining procedure: k3744 
o|inlining procedure: k3759 
o|inlining procedure: k3759 
o|inlining procedure: k3777 
o|inlining procedure: k3777 
o|inlining procedure: k3744 
o|inlining procedure: k3826 
o|inlining procedure: k3826 
o|inlining procedure: k3866 
o|inlining procedure: k3866 
o|inlining procedure: k3914 
o|inlining procedure: k3914 
o|removed unused formal parameters: (me2501) 
o|inlining procedure: k3953 
o|inlining procedure: k3953 
o|removed unused parameter to known procedure: me2501 loop499 
o|inlining procedure: k4017 
o|inlining procedure: k4038 
o|inlining procedure: k4038 
o|inlining procedure: k4075 
o|inlining procedure: k4075 
o|inlining procedure: k4017 
o|removed call to pure procedure with unused result: "(expand.scm:243) void" 
o|inlining procedure: k4102 
o|inlining procedure: k4102 
o|contracted procedure: k4118 
o|removed call to pure procedure with unused result: "(expand.scm:203) void" 
o|removed call to pure procedure with unused result: "(expand.scm:200) void" 
o|inlining procedure: k4168 
o|inlining procedure: k4168 
o|removed call to pure procedure with unused result: "(expand.scm:200) void" 
o|inlining procedure: k4207 
o|inlining procedure: k4227 
o|inlining procedure: k4267 
o|inlining procedure: k4267 
o|inlining procedure: k4322 
o|inlining procedure: k4322 
o|inlining procedure: k4227 
o|inlining procedure: k4360 
o|inlining procedure: k4360 
o|inlining procedure: k4388 
o|inlining procedure: k4388 
o|inlining procedure: k4405 
o|inlining procedure: k4405 
o|inlining procedure: k4207 
o|inlining procedure: k4448 
o|inlining procedure: k4448 
o|inlining procedure: k4492 
o|inlining procedure: k4514 
o|inlining procedure: k4514 
o|substituted constant variable: a4521 
o|substituted constant variable: a4523 
o|substituted constant variable: a4525 
o|inlining procedure: k4492 
o|inlining procedure: k4560 
o|inlining procedure: k4574 
o|inlining procedure: k4574 
o|inlining procedure: k4610 
o|inlining procedure: k4610 
o|inlining procedure: k4653 
o|inlining procedure: k4653 
o|contracted procedure: k4656 
o|contracted procedure: k4662 
o|inlining procedure: k4665 
o|inlining procedure: k4665 
o|inlining procedure: k4714 
o|substituted constant variable: %lambda727 
o|inlining procedure: k4714 
o|contracted procedure: "(expand.scm:362) ->keyword721" 
o|inlining procedure: k4747 
o|inlining procedure: k4747 
o|inlining procedure: k4560 
o|inlining procedure: k4788 
o|inlining procedure: k4788 
o|inlining procedure: k4804 
o|inlining procedure: k4829 
o|inlining procedure: k4829 
o|inlining procedure: k4845 
o|inlining procedure: k4857 
o|contracted procedure: k4874 
o|inlining procedure: k4857 
o|inlining procedure: k4845 
o|inlining procedure: k4903 
o|inlining procedure: k4903 
o|contracted procedure: k4915 
o|inlining procedure: k4922 
o|inlining procedure: k4940 
o|inlining procedure: k4940 
o|substituted constant variable: a4974 
o|substituted constant variable: a4976 
o|substituted constant variable: a4978 
o|inlining procedure: k4922 
o|inlining procedure: k4985 
o|inlining procedure: k4985 
o|inlining procedure: k5006 
o|inlining procedure: k5006 
o|substituted constant variable: a5022 
o|substituted constant variable: a5024 
o|substituted constant variable: a5026 
o|inlining procedure: k5033 
o|inlining procedure: k5033 
o|substituted constant variable: a5048 
o|substituted constant variable: a5050 
o|substituted constant variable: a5052 
o|inlining procedure: k5056 
o|inlining procedure: k5056 
o|inlining procedure: k4804 
o|inlining procedure: k5100 
o|inlining procedure: k5100 
o|inlining procedure: k5109 
o|inlining procedure: k5109 
o|inlining procedure: k5118 
o|inlining procedure: k5118 
o|inlining procedure: k5139 
o|inlining procedure: k5139 
o|substituted constant variable: a5152 
o|substituted constant variable: a5154 
o|substituted constant variable: a5156 
o|inlining procedure: k5161 
o|inlining procedure: k5173 
o|inlining procedure: k5216 
o|inlining procedure: k5216 
o|inlining procedure: k5173 
o|inlining procedure: k5161 
o|removed call to pure procedure with unused result: "(expand.scm:474) void" 
o|inlining procedure: k5307 
o|inlining procedure: k5307 
o|inlining procedure: k5349 
o|inlining procedure: k5349 
o|inlining procedure: k5386 
o|inlining procedure: k5386 
o|inlining procedure: k5428 
o|inlining procedure: k5428 
o|inlining procedure: k5470 
o|inlining procedure: k5470 
o|inlining procedure: k5515 
o|inlining procedure: k5536 
o|inlining procedure: k5536 
o|inlining procedure: k5515 
o|inlining procedure: k5571 
o|inlining procedure: k5587 
o|inlining procedure: k5587 
o|inlining procedure: k5571 
o|inlining procedure: k5637 
o|inlining procedure: k5637 
o|substituted constant variable: a5658 
o|inlining procedure: k5680 
o|inlining procedure: k5704 
o|inlining procedure: k5721 
o|inlining procedure: k5721 
o|inlining procedure: k5741 
o|inlining procedure: k5741 
o|inlining procedure: k5704 
o|inlining procedure: k5818 
o|inlining procedure: k5818 
o|inlining procedure: k5856 
o|inlining procedure: k5856 
o|inlining procedure: k5890 
o|inlining procedure: k5890 
o|inlining procedure: k5680 
o|inlining procedure: k5941 
o|inlining procedure: k5983 
o|inlining procedure: k5983 
o|inlining procedure: k5941 
o|inlining procedure: k5961 
o|inlining procedure: k5961 
o|inlining procedure: k6004 
o|inlining procedure: k6004 
o|inlining procedure: k6018 
o|inlining procedure: k6018 
o|inlining procedure: k6122 
o|inlining procedure: k6122 
o|inlining procedure: k6151 
o|inlining procedure: k6151 
o|inlining procedure: k6197 
o|inlining procedure: k6197 
o|inlining procedure: k6228 
o|inlining procedure: k6228 
o|contracted procedure: "(expand.scm:646) syntax-imports1205" 
o|inlining procedure: k6089 
o|inlining procedure: k6089 
o|inlining procedure: k6269 
o|inlining procedure: k6278 
o|inlining procedure: k6293 
o|inlining procedure: k6293 
o|inlining procedure: k6278 
o|inlining procedure: k6269 
o|inlining procedure: k6318 
o|inlining procedure: k6318 
o|inlining procedure: k6336 
o|inlining procedure: k6336 
o|propagated global variable: sexp1294 ##sys#syntax-error-culprit 
o|inlining procedure: k6356 
o|inlining procedure: k6356 
o|inlining procedure: k6368 
o|inlining procedure: k6368 
o|inlining procedure: k6383 
o|inlining procedure: k6396 
o|inlining procedure: k6396 
o|inlining procedure: k6383 
o|inlining procedure: k6422 
o|inlining procedure: k6422 
o|inlining procedure: k6445 
o|inlining procedure: k6465 
o|inlining procedure: k6465 
o|inlining procedure: k6496 
o|inlining procedure: k6496 
o|inlining procedure: k6517 
o|inlining procedure: k6517 
o|inlining procedure: k6445 
o|inlining procedure: k6538 
o|inlining procedure: k6538 
o|inlining procedure: k6550 
o|inlining procedure: k6562 
o|inlining procedure: k6562 
o|inlining procedure: k6580 
o|inlining procedure: k6580 
o|inlining procedure: k6598 
o|inlining procedure: k6598 
o|inlining procedure: k6616 
o|inlining procedure: k6616 
o|inlining procedure: k6637 
o|inlining procedure: k6637 
o|substituted constant variable: a6649 
o|substituted constant variable: a6651 
o|substituted constant variable: a6653 
o|substituted constant variable: a6655 
o|substituted constant variable: a6657 
o|substituted constant variable: a6659 
o|substituted constant variable: a6661 
o|substituted constant variable: a6663 
o|inlining procedure: k6550 
o|inlining procedure: k6673 
o|inlining procedure: k6673 
o|inlining procedure: k6746 
o|inlining procedure: k6746 
o|inlining procedure: k6779 
o|removed call to pure procedure with unused result: "(expand.scm:785) void" 
o|inlining procedure: k6807 
o|removed call to pure procedure with unused result: "(expand.scm:796) void" 
o|removed call to pure procedure with unused result: "(expand.scm:800) void" 
o|inlining procedure: k6807 
o|removed call to pure procedure with unused result: "(expand.scm:804) void" 
o|inlining procedure: k6802 
o|inlining procedure: k6802 
o|removed call to pure procedure with unused result: "(expand.scm:809) void" 
o|inlining procedure: k6779 
o|removed call to pure procedure with unused result: "(expand.scm:775) void" 
o|inlining procedure: k6880 
o|inlining procedure: k6893 
o|inlining procedure: k6893 
o|inlining procedure: k6880 
o|inlining procedure: k6916 
o|inlining procedure: k6937 
o|inlining procedure: k6937 
o|inlining procedure: k6916 
o|inlining procedure: k6967 
o|inlining procedure: k6995 
o|inlining procedure: k7019 
o|inlining procedure: k7019 
o|inlining procedure: k6995 
o|inlining procedure: k7040 
o|inlining procedure: k7040 
o|inlining procedure: k7069 
o|inlining procedure: k7069 
o|removed unused parameter to known procedure: n1501 "(expand.scm:831) lookup21368" 
o|inlining procedure: k7074 
o|inlining procedure: k7074 
o|removed unused parameter to known procedure: n1501 "(expand.scm:828) lookup21368" 
o|inlining procedure: k6967 
o|removed unused formal parameters: (n1501) 
o|removed call to pure procedure with unused result: "(expand.scm:775) void" 
o|inlining procedure: k7098 
o|inlining procedure: k7098 
o|inlining procedure: k7122 
o|inlining procedure: k7122 
o|inlining procedure: k7155 
o|removed call to pure procedure with unused result: "(expand.scm:870) void" 
o|contracted procedure: k7181 
o|inlining procedure: k7178 
o|removed call to pure procedure with unused result: "(expand.scm:875) void" 
o|removed call to pure procedure with unused result: "(expand.scm:877) void" 
o|inlining procedure: k7205 
o|inlining procedure: k7205 
o|removed call to pure procedure with unused result: "(expand.scm:882) void" 
o|inlining procedure: k7178 
o|removed call to pure procedure with unused result: "(expand.scm:873) void" 
o|inlining procedure: k7155 
o|inlining procedure: k7222 
o|inlining procedure: k7222 
o|inlining procedure: k7282 
o|inlining procedure: k7282 
o|removed side-effect free assignment to unused variable: %vector-length2234 
o|removed side-effect free assignment to unused variable: %vector-ref2235 
o|removed side-effect free assignment to unused variable: %null?2257 
o|removed side-effect free assignment to unused variable: %or2258 
o|removed side-effect free assignment to unused variable: %syntax-error2264 
o|inlining procedure: k7509 
o|inlining procedure: k7509 
o|inlining procedure: k7545 
o|inlining procedure: k7545 
o|inlining procedure: k7584 
o|inlining procedure: k7584 
o|inlining procedure: k7602 
o|inlining procedure: k7602 
o|inlining procedure: k7634 
o|inlining procedure: k7634 
o|inlining procedure: k7716 
o|inlining procedure: k7716 
o|inlining procedure: k7744 
o|inlining procedure: k7744 
o|inlining procedure: k7853 
o|inlining procedure: k7853 
o|inlining procedure: k7906 
o|inlining procedure: k7906 
o|inlining procedure: k7930 
o|inlining procedure: k7930 
o|inlining procedure: k7974 
o|inlining procedure: k7984 
o|inlining procedure: k7984 
o|inlining procedure: k7974 
o|inlining procedure: k8014 
o|inlining procedure: k8014 
o|substituted constant variable: %append2227 
o|inlining procedure: k8051 
o|inlining procedure: k8051 
o|substituted constant variable: %apply2228 
o|substituted constant variable: %append2227 
o|inlining procedure: k8080 
o|inlining procedure: k8080 
o|inlining procedure: k8104 
o|inlining procedure: k8104 
o|inlining procedure: k8145 
o|inlining procedure: k8145 
o|inlining procedure: k8183 
o|inlining procedure: k8183 
o|inlining procedure: k8215 
o|inlining procedure: k8234 
o|inlining procedure: k8234 
o|inlining procedure: k8215 
o|inlining procedure: k8264 
o|inlining procedure: k8264 
o|inlining procedure: k8296 
o|inlining procedure: k8307 
o|inlining procedure: k8307 
o|inlining procedure: k8296 
o|inlining procedure: k8323 
o|inlining procedure: k8323 
o|inlining procedure: k8346 
o|inlining procedure: k8346 
o|inlining procedure: k8373 
o|inlining procedure: k8373 
o|inlining procedure: k8414 
o|inlining procedure: k8414 
o|inlining procedure: k8452 
o|inlining procedure: k8463 
o|inlining procedure: k8463 
o|inlining procedure: k8452 
o|inlining procedure: k8489 
o|inlining procedure: k8489 
o|inlining procedure: k8569 
o|inlining procedure: k8569 
o|inlining procedure: k8614 
o|inlining procedure: k8632 
o|inlining procedure: k8632 
o|inlining procedure: k8614 
o|inlining procedure: k8701 
o|inlining procedure: k8701 
o|inlining procedure: k8719 
o|inlining procedure: k8719 
o|inlining procedure: k8804 
o|inlining procedure: k8804 
o|inlining procedure: k8827 
o|inlining procedure: k8838 
o|inlining procedure: k8838 
o|inlining procedure: k8827 
o|inlining procedure: k8869 
o|inlining procedure: k8869 
o|inlining procedure: k8883 
o|inlining procedure: k8883 
o|inlining procedure: k8902 
o|inlining procedure: k8902 
o|inlining procedure: k8930 
o|inlining procedure: k8952 
o|inlining procedure: k8952 
o|inlining procedure: k8930 
o|inlining procedure: k8990 
o|inlining procedure: k9008 
o|inlining procedure: k9008 
o|inlining procedure: k9017 
o|inlining procedure: k9017 
o|inlining procedure: k8990 
o|inlining procedure: k9079 
o|inlining procedure: k9079 
o|inlining procedure: k9105 
o|inlining procedure: k9105 
o|inlining procedure: k9152 
o|inlining procedure: k9152 
o|inlining procedure: k9222 
o|inlining procedure: k9222 
o|inlining procedure: k9250 
o|inlining procedure: k9250 
o|inlining procedure: k9282 
o|inlining procedure: k9282 
o|inlining procedure: k9367 
o|inlining procedure: k9367 
o|inlining procedure: k9394 
o|inlining procedure: k9394 
o|inlining procedure: k9439 
o|inlining procedure: k9439 
o|inlining procedure: k9484 
o|inlining procedure: k9484 
o|inlining procedure: k9542 
o|inlining procedure: k9565 
o|inlining procedure: k9565 
o|inlining procedure: k9607 
o|inlining procedure: k9607 
o|inlining procedure: k9542 
o|inlining procedure: k9663 
o|inlining procedure: k9686 
o|inlining procedure: k9686 
o|inlining procedure: k9710 
o|inlining procedure: k9710 
o|inlining procedure: k9794 
o|inlining procedure: k9794 
o|inlining procedure: k9663 
o|inlining procedure: k9827 
o|inlining procedure: k9827 
o|inlining procedure: k9870 
o|inlining procedure: k9870 
o|inlining procedure: k9906 
o|inlining procedure: k9906 
o|inlining procedure: k10017 
o|inlining procedure: k10017 
o|inlining procedure: k10113 
o|inlining procedure: k10113 
o|inlining procedure: k10138 
o|inlining procedure: k10138 
o|propagated global variable: g16271628 ##sys#expand-import 
o|propagated global variable: g16131614 ##sys#expand-import 
o|propagated global variable: g15991600 ##sys#expand-import 
o|replaced variables: 987 
o|removed binding forms: 252 
o|contracted procedure: k3437 
o|substituted constant variable: r344410299 
o|substituted constant variable: f_395210332 
o|contracted procedure: k3992 
o|contracted procedure: k3994 
o|substituted constant variable: f_403710335 
o|substituted constant variable: r407610338 
o|contracted procedure: k4104 
o|removed call to pure procedure with unused result: "(expand.scm:243) void" 
o|contracted procedure: k4166 
o|inlining procedure: k4369 
o|substituted constant variable: r438910360 
o|substituted constant variable: f_449110371 
o|substituted constant variable: r466610384 
o|substituted constant variable: a471310386 
o|substituted constant variable: r503410410 
o|substituted constant variable: r505710411 
o|converted assignments to bindings: (err720) 
o|substituted constant variable: r521710425 
o|contracted procedure: k5237 
o|inlining procedure: k5587 
o|substituted constant variable: r563810447 
o|substituted constant variable: a574010453 
o|substituted constant variable: r589110460 
o|substituted constant variable: r598410464 
o|substituted constant variable: r596210466 
o|substituted constant variable: r600510469 
o|substituted constant variable: f_622710478 
o|substituted constant variable: f_608810480 
o|converted assignments to bindings: (outstr1217) 
o|substituted constant variable: r629410485 
o|substituted constant variable: r627910486 
o|substituted constant variable: f_626810487 
o|substituted constant variable: r639710497 
o|substituted constant variable: r638410499 
o|substituted constant variable: r651810508 
o|contracted procedure: k6792 
o|contracted procedure: k6825 
o|contracted procedure: k6834 
o|contracted procedure: k6850 
o|contracted procedure: k6864 
o|contracted procedure: k6882 
o|substituted constant variable: r689410539 
o|substituted constant variable: r691710547 
o|contracted procedure: k7092 
o|substituted constant variable: f_709710562 
o|contracted procedure: k7170 
o|contracted procedure: k7195 
o|contracted procedure: k7210 
o|contracted procedure: k7217 
o|contracted procedure: k7184 
o|removed side-effect free assignment to unused variable: %append2227 
o|removed side-effect free assignment to unused variable: %apply2228 
o|substituted constant variable: r758510581 
o|substituted constant variable: r808110605 
o|substituted constant variable: r823510614 
o|substituted constant variable: r830810619 
o|substituted constant variable: f_829510621 
o|substituted constant variable: f_832210623 
o|substituted constant variable: f_834510625 
o|substituted constant variable: f_841310628 
o|substituted constant variable: r863310640 
o|substituted constant variable: r872010647 
o|substituted constant variable: r887010654 
o|substituted constant variable: r900910665 
o|substituted constant variable: r956610691 
o|substituted constant variable: f_954110695 
o|substituted constant variable: r968710697 
o|substituted constant variable: r979510702 
o|substituted constant variable: f_966210703 
o|substituted constant variable: r982810704 
o|substituted constant variable: r987110706 
o|substituted constant variable: a1013710715 
o|simplifications: ((let . 2)) 
o|replaced variables: 12 
o|removed binding forms: 916 
o|contracted procedure: k410410347 
o|inlining procedure: k4797 
o|inlining procedure: k4797 
o|inlining procedure: k6880 
o|inlining procedure: k6880 
o|inlining procedure: k6880 
o|inlining procedure: k6880 
o|inlining procedure: k6880 
o|inlining procedure: k6880 
o|inlining procedure: "(expand.scm:831) lookup21368" 
o|inlining procedure: "(expand.scm:828) lookup21368" 
o|inlining procedure: k8223 
o|inlining procedure: k8223 
o|inlining procedure: k8540 
o|inlining procedure: k8540 
o|replaced variables: 3 
o|removed binding forms: 85 
o|substituted constant variable: result142510946 
o|substituted constant variable: result142510948 
o|substituted constant variable: result142510952 
o|substituted constant variable: result142510954 
o|substituted constant variable: result142510956 
o|substituted constant variable: result142510958 
o|removed side-effect free assignment to unused variable: lookup21368 
o|substituted constant variable: r822410980 
o|substituted constant variable: r822410981 
o|replaced variables: 10 
o|removed binding forms: 18 
o|removed conditional forms: 2 
o|inlining procedure: k7067 
o|inlining procedure: k7072 
o|replaced variables: 4 
o|removed binding forms: 13 
o|removed binding forms: 4 
o|simplifications: ((if . 47) (##core#call . 940)) 
o|  call simplifications:
o|    fx-	2
o|    cdddr
o|    cadddr	2
o|    cddddr
o|    >=
o|    +	3
o|    =
o|    -
o|    <=
o|    boolean?
o|    char?
o|    cdar	2
o|    ##sys#immediate?
o|    vector-ref	5
o|    fx<	2
o|    not	3
o|    fx=	3
o|    memq	7
o|    caddr	8
o|    length	7
o|    fx<=	2
o|    ##sys#call-with-values
o|    cddr	10
o|    ##sys#list	154
o|    ##sys#cons	85
o|    list?	6
o|    cadr	27
o|    values	8
o|    ##sys#apply	2
o|    memv
o|    equal?	2
o|    string?	2
o|    ##sys#make-structure	2
o|    apply	3
o|    list	13
o|    set-car!	4
o|    procedure?
o|    ##sys#structure?	2
o|    caar	5
o|    eq?	73
o|    null?	47
o|    car	62
o|    ##sys#check-list	13
o|    assq	12
o|    symbol?	41
o|    vector?	12
o|    fx>=	5
o|    fx+	4
o|    cons	63
o|    ##sys#setslot	19
o|    pair?	87
o|    ##sys#slot	58
o|    ##sys#size	5
o|    fx>	5
o|    char=?
o|    cdr	50
o|contracted procedure: k3416 
o|contracted procedure: k3424 
o|contracted procedure: k3439 
o|contracted procedure: k3441 
o|contracted procedure: k3446 
o|contracted procedure: k3464 
o|contracted procedure: k3475 
o|contracted procedure: k3500 
o|contracted procedure: k3506 
o|contracted procedure: k3509 
o|contracted procedure: k3532 
o|contracted procedure: k3512 
o|contracted procedure: k3515 
o|contracted procedure: k3517 
o|contracted procedure: k3537 
o|contracted procedure: k3540 
o|contracted procedure: k3575 
o|contracted procedure: k3545 
o|contracted procedure: k3557 
o|contracted procedure: k3560 
o|contracted procedure: k3566 
o|contracted procedure: k3572 
o|contracted procedure: k3601 
o|contracted procedure: k3603 
o|contracted procedure: k3655 
o|contracted procedure: k3625 
o|contracted procedure: k3628 
o|contracted procedure: k3637 
o|contracted procedure: k3640 
o|contracted procedure: k3650 
o|contracted procedure: k3653 
o|contracted procedure: k3687 
o|contracted procedure: k3667 
o|contracted procedure: k3676 
o|contracted procedure: k3679 
o|contracted procedure: k3682 
o|contracted procedure: k3685 
o|contracted procedure: k3693 
o|contracted procedure: k3696 
o|contracted procedure: k3707 
o|contracted procedure: k3710 
o|contracted procedure: k3719 
o|contracted procedure: k3729 
o|contracted procedure: k3746 
o|contracted procedure: k3761 
o|contracted procedure: k3779 
o|contracted procedure: k3808 
o|contracted procedure: k3798 
o|contracted procedure: k3850 
o|contracted procedure: k3823 
o|contracted procedure: k3829 
o|contracted procedure: k3841 
o|contracted procedure: k3871 
o|contracted procedure: k3873 
o|contracted procedure: k3880 
o|contracted procedure: k3888 
o|contracted procedure: k3885 
o|contracted procedure: k3911 
o|contracted procedure: k3928 
o|contracted procedure: k3955 
o|contracted procedure: k3976 
o|contracted procedure: k3961 
o|contracted procedure: k4026 
o|contracted procedure: k4017 
o|contracted procedure: k4032 
o|contracted procedure: k4040 
o|contracted procedure: k4043 
o|contracted procedure: k4056 
o|contracted procedure: k4064 
o|contracted procedure: k4067 
o|contracted procedure: k4072 
o|contracted procedure: k4078 
o|contracted procedure: k4086 
o|contracted procedure: k4093 
o|contracted procedure: k4106 
o|contracted procedure: k4171 
o|contracted procedure: k4180 
o|contracted procedure: k4190 
o|contracted procedure: k4209 
o|contracted procedure: k4217 
o|contracted procedure: k4222 
o|contracted procedure: k4230 
o|contracted procedure: k4235 
o|contracted procedure: k4240 
o|contracted procedure: k4245 
o|contracted procedure: k4310 
o|contracted procedure: k4316 
o|contracted procedure: k4303 
o|contracted procedure: k4300 
o|contracted procedure: k4297 
o|contracted procedure: k4294 
o|contracted procedure: k4257 
o|contracted procedure: k4254 
o|contracted procedure: k4251 
o|contracted procedure: k4269 
o|contracted procedure: k4291 
o|contracted procedure: k4288 
o|contracted procedure: k4272 
o|contracted procedure: k4281 
o|contracted procedure: k4324 
o|contracted procedure: k4327 
o|contracted procedure: k4336 
o|contracted procedure: k4346 
o|contracted procedure: k4363 
o|contracted procedure: k4378 
o|contracted procedure: k4391 
o|contracted procedure: k4399 
o|contracted procedure: k4466 
o|contracted procedure: k4425 
o|contracted procedure: k4460 
o|contracted procedure: k4427 
o|contracted procedure: k4454 
o|contracted procedure: k4429 
o|contracted procedure: k4472 
o|contracted procedure: k4494 
o|contracted procedure: k4497 
o|contracted procedure: k4502 
o|contracted procedure: k4512 
o|contracted procedure: k4562 
o|contracted procedure: k4577 
o|contracted procedure: k4602 
o|contracted procedure: k4605 
o|contracted procedure: k4599 
o|contracted procedure: k4596 
o|contracted procedure: k4593 
o|contracted procedure: k4590 
o|inlining procedure: k4574 
o|contracted procedure: k4613 
o|contracted procedure: k4626 
o|contracted procedure: k4623 
o|contracted procedure: k4620 
o|inlining procedure: k4574 
o|contracted procedure: k4641 
o|contracted procedure: k4638 
o|contracted procedure: k4635 
o|inlining procedure: k4574 
o|inlining procedure: k4650 
o|inlining procedure: k4650 
o|contracted procedure: k4668 
o|contracted procedure: k4675 
o|contracted procedure: k4677 
o|contracted procedure: k4692 
o|contracted procedure: k4704 
o|contracted procedure: k4701 
o|contracted procedure: k4698 
o|contracted procedure: k4710 
o|contracted procedure: k4716 
o|contracted procedure: k4726 
o|contracted procedure: k4723 
o|contracted procedure: k4714 
o|contracted procedure: k4543 
o|contracted procedure: k4687 
o|contracted procedure: k4684 
o|contracted procedure: k4749 
o|contracted procedure: k4752 
o|contracted procedure: k4761 
o|contracted procedure: k4771 
o|contracted procedure: k4785 
o|contracted procedure: k4791 
o|contracted procedure: k4807 
o|contracted procedure: k4813 
o|contracted procedure: k4817 
o|contracted procedure: k4824 
o|contracted procedure: k4832 
o|contracted procedure: k4848 
o|contracted procedure: k4854 
o|contracted procedure: k4866 
o|contracted procedure: k4878 
o|contracted procedure: k4884 
o|contracted procedure: k4898 
o|contracted procedure: k4906 
o|contracted procedure: k4925 
o|contracted procedure: k4931 
o|contracted procedure: k4938 
o|contracted procedure: k4943 
o|contracted procedure: k4953 
o|contracted procedure: k4950 
o|contracted procedure: k4958 
o|contracted procedure: k4971 
o|contracted procedure: k4968 
o|contracted procedure: k4988 
o|contracted procedure: k4997 
o|contracted procedure: k5004 
o|contracted procedure: k5009 
o|contracted procedure: k5019 
o|contracted procedure: k5030 
o|contracted procedure: k5036 
o|contracted procedure: k5043 
o|contracted procedure: k5053 
o|contracted procedure: k5059 
o|contracted procedure: k5918 
o|contracted procedure: k5086 
o|contracted procedure: k5912 
o|contracted procedure: k5088 
o|contracted procedure: k5906 
o|contracted procedure: k5090 
o|contracted procedure: k5098 
o|contracted procedure: k5106 
o|contracted procedure: k5121 
o|contracted procedure: k5136 
o|contracted procedure: k5496 
o|contracted procedure: k5163 
o|contracted procedure: k5175 
o|contracted procedure: k5181 
o|contracted procedure: k5199 
o|contracted procedure: k5210 
o|contracted procedure: k5212 
o|contracted procedure: k5219 
o|contracted procedure: k5248 
o|contracted procedure: k5252 
o|contracted procedure: k5240 
o|contracted procedure: k5276 
o|contracted procedure: k5285 
o|contracted procedure: k5298 
o|contracted procedure: k5291 
o|contracted procedure: k5288 
o|contracted procedure: k5339 
o|contracted procedure: k5309 
o|contracted procedure: k5312 
o|contracted procedure: k5321 
o|contracted procedure: k5324 
o|contracted procedure: k5334 
o|contracted procedure: k5337 
o|contracted procedure: k5351 
o|contracted procedure: k5354 
o|contracted procedure: k5363 
o|contracted procedure: k5373 
o|contracted procedure: k5418 
o|contracted procedure: k5388 
o|contracted procedure: k5391 
o|contracted procedure: k5400 
o|contracted procedure: k5403 
o|contracted procedure: k5413 
o|contracted procedure: k5416 
o|contracted procedure: k5460 
o|contracted procedure: k5430 
o|contracted procedure: k5433 
o|contracted procedure: k5442 
o|contracted procedure: k5445 
o|contracted procedure: k5455 
o|contracted procedure: k5458 
o|contracted procedure: k5472 
o|contracted procedure: k5475 
o|contracted procedure: k5484 
o|contracted procedure: k5494 
o|contracted procedure: k5524 
o|contracted procedure: k5521 
o|contracted procedure: k5538 
o|contracted procedure: k5560 
o|contracted procedure: k5557 
o|contracted procedure: k5541 
o|contracted procedure: k5550 
o|contracted procedure: k5565 
o|inlining procedure: k5584 
o|contracted procedure: k5629 
o|contracted procedure: k5589 
o|contracted procedure: k5605 
o|contracted procedure: k5602 
o|contracted procedure: k5599 
o|contracted procedure: k5617 
o|inlining procedure: k5584 
o|contracted procedure: k5665 
o|contracted procedure: k5634 
o|contracted procedure: k5660 
o|contracted procedure: k5640 
o|contracted procedure: k5656 
o|contracted procedure: k5646 
o|contracted procedure: k5682 
o|contracted procedure: k5688 
o|contracted procedure: k5698 
o|contracted procedure: k5719 
o|contracted procedure: k5724 
o|contracted procedure: k5802 
o|contracted procedure: k5763 
o|contracted procedure: k5775 
o|contracted procedure: k5783 
o|contracted procedure: k5797 
o|contracted procedure: k5792 
o|contracted procedure: k5789 
o|contracted procedure: k5786 
o|contracted procedure: k5735 
o|contracted procedure: k5750 
o|contracted procedure: k5743 
o|contracted procedure: k5741 
o|inlining procedure: k5738 
o|inlining procedure: k5738 
o|contracted procedure: k5752 
o|contracted procedure: k5839 
o|contracted procedure: k5830 
o|contracted procedure: k5836 
o|contracted procedure: k5833 
o|contracted procedure: k5854 
o|contracted procedure: k5859 
o|contracted procedure: k5861 
o|contracted procedure: k5872 
o|contracted procedure: k5882 
o|contracted procedure: k5893 
o|contracted procedure: k5896 
o|contracted procedure: k5924 
o|contracted procedure: k5943 
o|contracted procedure: k5980 
o|contracted procedure: k5999 
o|contracted procedure: k5946 
o|contracted procedure: k5956 
o|contracted procedure: k5964 
o|contracted procedure: k5972 
o|contracted procedure: k5968 
o|contracted procedure: k6050 
o|contracted procedure: k6020 
o|contracted procedure: k6029 
o|contracted procedure: k6045 
o|contracted procedure: k6042 
o|contracted procedure: k6039 
o|contracted procedure: k6125 
o|contracted procedure: k6153 
o|contracted procedure: k6173 
o|contracted procedure: k6182 
o|contracted procedure: k6248 
o|contracted procedure: k6200 
o|contracted procedure: k6213 
o|contracted procedure: k6230 
o|contracted procedure: k6245 
o|contracted procedure: k6082 
o|contracted procedure: k6091 
o|contracted procedure: k6117 
o|contracted procedure: k6097 
o|contracted procedure: k6256 
o|contracted procedure: k6274 
o|contracted procedure: k6281 
o|contracted procedure: k6291 
o|contracted procedure: k6725 
o|contracted procedure: k6306 
o|contracted procedure: k6719 
o|contracted procedure: k6308 
o|contracted procedure: k6704 
o|contracted procedure: k6312 
o|contracted procedure: k6366 
o|contracted procedure: k6374 
o|contracted procedure: k6386 
o|contracted procedure: k6393 
o|contracted procedure: k6420 
o|contracted procedure: k6428 
o|contracted procedure: k6447 
o|contracted procedure: k6450 
o|contracted procedure: k6452 
o|contracted procedure: k6526 
o|contracted procedure: k6454 
o|contracted procedure: k6467 
o|contracted procedure: k6473 
o|contracted procedure: k6485 
o|contracted procedure: k6488 
o|contracted procedure: k6490 
o|contracted procedure: k6499 
o|contracted procedure: k6509 
o|contracted procedure: k6514 
o|contracted procedure: k6520 
o|contracted procedure: k6535 
o|contracted procedure: k6541 
o|contracted procedure: k6553 
o|contracted procedure: k6559 
o|contracted procedure: k6565 
o|contracted procedure: k6574 
o|contracted procedure: k6583 
o|contracted procedure: k6592 
o|contracted procedure: k6601 
o|contracted procedure: k6610 
o|contracted procedure: k6619 
o|contracted procedure: k6639 
o|contracted procedure: k6642 
o|contracted procedure: k6667 
o|contracted procedure: k6676 
o|contracted procedure: k6692 
o|contracted procedure: k6695 
o|contracted procedure: k6710 
o|contracted procedure: k6748 
o|contracted procedure: k6767 
o|contracted procedure: k6782 
o|contracted procedure: k6785 
o|contracted procedure: k6809 
o|contracted procedure: k6832 
o|contracted procedure: k6828 
o|contracted procedure: k6841 
o|contracted procedure: k6837 
o|contracted procedure: k6857 
o|contracted procedure: k6853 
o|contracted procedure: k6871 
o|contracted procedure: k6867 
o|contracted procedure: k6884 
o|contracted procedure: k6890 
o|contracted procedure: k6913 
o|contracted procedure: k6919 
o|contracted procedure: k6922 
o|contracted procedure: k6963 
o|contracted procedure: k6927 
o|contracted procedure: k6939 
o|contracted procedure: k6941 
o|contracted procedure: k6948 
o|contracted procedure: k6954 
o|contracted procedure: k6957 
o|contracted procedure: k7080 
o|contracted procedure: k6970 
o|contracted procedure: k6992 
o|contracted procedure: k6998 
o|contracted procedure: k7010 
o|contracted procedure: k7022 
o|contracted procedure: k7032 
o|contracted procedure: k7043 
o|contracted procedure: k7046 
o|contracted procedure: k7056 
o|contracted procedure: k7100 
o|contracted procedure: k7116 
o|contracted procedure: k7106 
o|contracted procedure: k7124 
o|contracted procedure: k7143 
o|contracted procedure: k7158 
o|contracted procedure: k7192 
o|contracted procedure: k7237 
o|contracted procedure: k7269 
o|contracted procedure: k7273 
o|contracted procedure: k7284 
o|contracted procedure: k7293 
o|contracted procedure: k7296 
o|contracted procedure: k7476 
o|contracted procedure: k7539 
o|contracted procedure: k7536 
o|contracted procedure: k7482 
o|contracted procedure: k7485 
o|contracted procedure: k7479 
o|contracted procedure: k7473 
o|contracted procedure: k7491 
o|contracted procedure: k7503 
o|contracted procedure: k7500 
o|contracted procedure: k7497 
o|contracted procedure: k7511 
o|contracted procedure: k7514 
o|contracted procedure: k7523 
o|contracted procedure: k7533 
o|contracted procedure: k7550 
o|contracted procedure: k7552 
o|contracted procedure: k7558 
o|contracted procedure: k7561 
o|contracted procedure: k7581 
o|contracted procedure: k7587 
o|contracted procedure: k7594 
o|contracted procedure: k7604 
o|contracted procedure: k7610 
o|contracted procedure: k7623 
o|contracted procedure: k7620 
o|contracted procedure: k7617 
o|contracted procedure: k7637 
o|contracted procedure: k7678 
o|contracted procedure: k7647 
o|contracted procedure: k7656 
o|contracted procedure: k7653 
o|contracted procedure: k7650 
o|contracted procedure: k7644 
o|contracted procedure: k7668 
o|contracted procedure: k7673 
o|contracted procedure: k7683 
o|contracted procedure: k7714 
o|contracted procedure: k7693 
o|contracted procedure: k7702 
o|contracted procedure: k7699 
o|contracted procedure: k7696 
o|contracted procedure: k7690 
o|contracted procedure: k7708 
o|contracted procedure: k7719 
o|contracted procedure: k7731 
o|contracted procedure: k7728 
o|contracted procedure: k7740 
o|contracted procedure: k7737 
o|contracted procedure: k7742 
o|contracted procedure: k7763 
o|contracted procedure: k7841 
o|contracted procedure: k7838 
o|contracted procedure: k7769 
o|contracted procedure: k7835 
o|contracted procedure: k7832 
o|contracted procedure: k7775 
o|contracted procedure: k7826 
o|contracted procedure: k7829 
o|contracted procedure: k7781 
o|contracted procedure: k7820 
o|contracted procedure: k7811 
o|contracted procedure: k7787 
o|contracted procedure: k7793 
o|contracted procedure: k7790 
o|contracted procedure: k7784 
o|contracted procedure: k7778 
o|contracted procedure: k7772 
o|contracted procedure: k7766 
o|contracted procedure: k7760 
o|contracted procedure: k7805 
o|contracted procedure: k7808 
o|contracted procedure: k7802 
o|contracted procedure: k7799 
o|contracted procedure: k7844 
o|contracted procedure: k7847 
o|contracted procedure: k7855 
o|contracted procedure: k7861 
o|contracted procedure: k7868 
o|contracted procedure: k7928 
o|contracted procedure: k7879 
o|contracted procedure: k7920 
o|contracted procedure: k7881 
o|contracted procedure: k7893 
o|contracted procedure: k7896 
o|contracted procedure: k7908 
o|contracted procedure: k7918 
o|contracted procedure: k7915 
o|contracted procedure: k7906 
o|contracted procedure: k7933 
o|contracted procedure: k7948 
o|contracted procedure: k7953 
o|contracted procedure: k7958 
o|contracted procedure: k7968 
o|contracted procedure: k7976 
o|contracted procedure: k7979 
o|contracted procedure: k7994 
o|contracted procedure: k7987 
o|contracted procedure: k8000 
o|contracted procedure: k8010 
o|contracted procedure: k8017 
o|contracted procedure: k8032 
o|contracted procedure: k8053 
o|substituted constant variable: g11501 
o|contracted procedure: k8060 
o|contracted procedure: k8063 
o|contracted procedure: k8075 
o|contracted procedure: k8072 
o|contracted procedure: k8077 
o|contracted procedure: k8083 
o|contracted procedure: k8089 
o|contracted procedure: k8102 
o|contracted procedure: k8107 
o|contracted procedure: k8126 
o|contracted procedure: k8147 
o|contracted procedure: k8153 
o|contracted procedure: k8160 
o|contracted procedure: k8172 
o|contracted procedure: k8175 
o|contracted procedure: k8181 
o|contracted procedure: k8186 
o|contracted procedure: k8202 
o|contracted procedure: k8217 
o|contracted procedure: k8229 
o|contracted procedure: k8232 
o|contracted procedure: k8241 
o|contracted procedure: k8223 
o|contracted procedure: k8256 
o|contracted procedure: k8262 
o|contracted procedure: k8267 
o|contracted procedure: k8283 
o|contracted procedure: k8310 
o|contracted procedure: k8325 
o|contracted procedure: k8331 
o|contracted procedure: k8338 
o|contracted procedure: k8358 
o|contracted procedure: k8367 
o|contracted procedure: k8382 
o|contracted procedure: k8384 
o|contracted procedure: k8435 
o|contracted procedure: k8399 
o|contracted procedure: k8416 
o|contracted procedure: k8418 
o|contracted procedure: k8425 
o|contracted procedure: k8508 
o|contracted procedure: k8445 
o|contracted procedure: k8478 
o|contracted procedure: k8454 
o|contracted procedure: k8475 
o|contracted procedure: k8465 
o|contracted procedure: k8480 
o|contracted procedure: k8491 
o|contracted procedure: k8500 
o|contracted procedure: k8503 
o|contracted procedure: k8536 
o|contracted procedure: k8545 
o|contracted procedure: k8552 
o|contracted procedure: k8556 
o|contracted procedure: k8578 
o|contracted procedure: k8594 
o|contracted procedure: k8602 
o|contracted procedure: k8599 
o|contracted procedure: k8610 
o|contracted procedure: k8622 
o|contracted procedure: k8624 
o|contracted procedure: k8629 
o|contracted procedure: k8635 
o|contracted procedure: k8661 
o|contracted procedure: k8658 
o|contracted procedure: k8655 
o|contracted procedure: k8646 
o|contracted procedure: k8652 
o|contracted procedure: k8649 
o|contracted procedure: k8677 
o|contracted procedure: k8690 
o|contracted procedure: k8687 
o|contracted procedure: k8732 
o|contracted procedure: k8696 
o|contracted procedure: k8699 
o|contracted procedure: k8714 
o|contracted procedure: k8711 
o|contracted procedure: k8701 
o|contracted procedure: k8716 
o|contracted procedure: k8722 
o|contracted procedure: k8739 
o|contracted procedure: k8741 
o|contracted procedure: k8751 
o|contracted procedure: k8759 
o|contracted procedure: k8770 
o|contracted procedure: k8781 
o|contracted procedure: k8798 
o|contracted procedure: k8806 
o|contracted procedure: k8818 
o|contracted procedure: k8824 
o|contracted procedure: k8833 
o|contracted procedure: k8841 
o|contracted procedure: k8854 
o|contracted procedure: k8872 
o|contracted procedure: k8878 
o|contracted procedure: k8890 
o|contracted procedure: k8915 
o|contracted procedure: k8932 
o|contracted procedure: k8943 
o|contracted procedure: k8954 
o|contracted procedure: k8957 
o|contracted procedure: k8966 
o|contracted procedure: k8976 
o|contracted procedure: k8981 
o|contracted procedure: k8987 
o|contracted procedure: k8993 
o|contracted procedure: k8999 
o|contracted procedure: k9011 
o|contracted procedure: k9052 
o|contracted procedure: k9049 
o|contracted procedure: k9081 
o|contracted procedure: k9096 
o|contracted procedure: k9102 
o|contracted procedure: k9114 
o|contracted procedure: k9126 
o|contracted procedure: k9132 
o|contracted procedure: k9144 
o|contracted procedure: k9150 
o|contracted procedure: k9161 
o|contracted procedure: k9170 
o|contracted procedure: k9185 
o|contracted procedure: k9179 
o|contracted procedure: k9191 
o|contracted procedure: k9194 
o|contracted procedure: k9205 
o|contracted procedure: k9236 
o|contracted procedure: k9233 
o|contracted procedure: k9230 
o|contracted procedure: k9248 
o|contracted procedure: k9275 
o|contracted procedure: k9253 
o|contracted procedure: k9272 
o|contracted procedure: k9266 
o|contracted procedure: k9269 
o|contracted procedure: k9263 
o|contracted procedure: k9260 
o|contracted procedure: k9290 
o|contracted procedure: k9301 
o|contracted procedure: k9311 
o|contracted procedure: k9313 
o|contracted procedure: k9329 
o|contracted procedure: k9332 
o|contracted procedure: k9336 
o|contracted procedure: k9345 
o|contracted procedure: k9429 
o|contracted procedure: k9349 
o|contracted procedure: k9385 
o|contracted procedure: k9382 
o|contracted procedure: k9369 
o|contracted procedure: k9377 
o|contracted procedure: k9362 
o|contracted procedure: k9359 
o|contracted procedure: k9353 
o|contracted procedure: k9342 
o|contracted procedure: k9396 
o|contracted procedure: k9399 
o|contracted procedure: k9408 
o|contracted procedure: k9418 
o|contracted procedure: k9420 
o|contracted procedure: k9427 
o|contracted procedure: k9441 
o|contracted procedure: k9444 
o|contracted procedure: k9453 
o|contracted procedure: k9463 
o|contracted procedure: k9473 
o|contracted procedure: k9486 
o|contracted procedure: k9493 
o|contracted procedure: k9507 
o|contracted procedure: k9499 
o|contracted procedure: k9517 
o|contracted procedure: k9640 
o|contracted procedure: k9533 
o|contracted procedure: k9544 
o|contracted procedure: k9547 
o|contracted procedure: k9595 
o|contracted procedure: k9598 
o|contracted procedure: k9579 
o|contracted procedure: k9582 
o|contracted procedure: k9609 
o|contracted procedure: k9612 
o|contracted procedure: k9621 
o|contracted procedure: k9631 
o|contracted procedure: k9634 
o|contracted procedure: k9648 
o|contracted procedure: k9665 
o|contracted procedure: k9668 
o|contracted procedure: k9699 
o|contracted procedure: k9737 
o|contracted procedure: k9722 
o|contracted procedure: k9734 
o|contracted procedure: k9728 
o|contracted procedure: k9725 
o|contracted procedure: k9753 
o|contracted procedure: k9774 
o|contracted procedure: k9762 
o|contracted procedure: k9771 
o|contracted procedure: k9765 
o|contracted procedure: k9759 
o|contracted procedure: k9756 
o|contracted procedure: k9784 
o|contracted procedure: k9791 
o|contracted procedure: k9797 
o|contracted procedure: k9804 
o|contracted procedure: k9809 
o|contracted procedure: k9814 
o|contracted procedure: k9825 
o|contracted procedure: k9830 
o|contracted procedure: k9833 
o|contracted procedure: k9839 
o|contracted procedure: k9860 
o|contracted procedure: k9848 
o|contracted procedure: k9854 
o|contracted procedure: k9851 
o|contracted procedure: k9868 
o|contracted procedure: k9873 
o|contracted procedure: k9876 
o|contracted procedure: k9882 
o|contracted procedure: k9889 
o|contracted procedure: k9902 
o|contracted procedure: k9904 
o|contracted procedure: k9909 
o|contracted procedure: k9916 
o|contracted procedure: k9924 
o|contracted procedure: k9943 
o|contracted procedure: k9957 
o|contracted procedure: k9971 
o|contracted procedure: k10005 
o|contracted procedure: k9995 
o|contracted procedure: k10002 
o|contracted procedure: k10013 
o|contracted procedure: k10020 
o|contracted procedure: k10076 
o|contracted procedure: k10073 
o|contracted procedure: k10070 
o|contracted procedure: k10089 
o|contracted procedure: k10080 
o|contracted procedure: k10032 
o|contracted procedure: k10044 
o|contracted procedure: k10109 
o|contracted procedure: k10116 
o|contracted procedure: k10192 
o|contracted procedure: k10159 
o|contracted procedure: k10179 
o|contracted procedure: k10187 
o|contracted procedure: k10184 
o|contracted procedure: k10176 
o|contracted procedure: k10126 
o|contracted procedure: k10140 
o|contracted procedure: k10209 
o|contracted procedure: k10223 
o|contracted procedure: k10237 
o|contracted procedure: k10251 
o|contracted procedure: k10265 
o|simplifications: ((let . 181)) 
o|replaced variables: 2 
o|removed binding forms: 769 
o|inlining procedure: k3712 
o|inlining procedure: k3712 
o|inlining procedure: k4274 
o|inlining procedure: k4274 
o|inlining procedure: k4329 
o|inlining procedure: k4329 
o|inlining procedure: k4707 
o|inlining procedure: k4707 
o|inlining procedure: k4754 
o|inlining procedure: k4754 
o|inlining procedure: k5356 
o|inlining procedure: k5356 
o|inlining procedure: k5477 
o|inlining procedure: k5477 
o|inlining procedure: k5543 
o|inlining procedure: k5543 
o|inlining procedure: k5587 
o|inlining procedure: k7516 
o|inlining procedure: k7516 
o|inlining procedure: k8693 
o|inlining procedure: k8693 
o|inlining procedure: k8959 
o|inlining procedure: k8959 
o|inlining procedure: k9401 
o|inlining procedure: k9401 
o|inlining procedure: k9446 
o|inlining procedure: k9446 
o|inlining procedure: k9614 
o|inlining procedure: k9614 
o|inlining procedure: k10038 
o|replaced variables: 57 
o|removed binding forms: 7 
o|simplifications: ((if . 3)) 
o|removed binding forms: 80 
o|contracted procedure: k5691 
o|removed binding forms: 1 
o|replaced variables: 1 
o|simplifications: ((if . 2)) 
o|removed binding forms: 1 
o|contracted procedure: k5693 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop1313 0 
o|direct leaf routine/allocation: assq-reverse1369 0 
o|converted assignments to bindings: (loop1313) 
o|contracted procedure: "(expand.scm:869) k7163" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (loop1668 k9986 expand1795 map-loop18581879 expand1839 expand1894 map-loop19161934 k9356 map-loop19501968 match-expression walk1982 walk11983 simplify1984 expand2096 map-loop21032121 err2070 test2071 k8704 for-each-loop25582569 loop2536 loop2465 k8065 k8025 doloop24172418 k7721 k7547 map-loop22862303 for-each-loop15661582 mirror-rename1370 k6978 k6986 doloop14341435 k6436 test1286 k6456 walk1322 doloop13351336 loop1300 err1287 loop1207 loop1219 loop1234 outstr1217 loop1185 mwalk1163 fini/syntax862 loop1115 loop21131 loop1067 map-loop10791096 fini861 map-loop899917 k5435 map-loop926950 k5393 map-loop9621049 map-loop9861003 k5314 map-loop10151039 comp860 loop881 expand863 k4982 k4901 k4860 k4863 macro-alias k4827 loop731 err720 map-loop746774 k4572 k4583 k4504 loop699 loop685 k4225 loop568 expand513 map-loop593611 map-loop620637 call-handler512 k4019 k4049 copy532 loop499 k3788 loop430 loop1416 map-loop318335 for-each-loop344371 k3630 map-loop381402 doloop294295 walk266 k3409 lookup) 
o|calls to known targets: 358 
o|identified direct recursive calls: f_3461 1 
o|identified direct recursive calls: f_3950 1 
o|identified direct recursive calls: f_4264 2 
o|identified direct recursive calls: f_4557 2 
o|identified direct recursive calls: f_5533 2 
o|identified direct recursive calls: f_5512 1 
o|identified direct recursive calls: f_5938 1 
o|identified direct recursive calls: f_6015 1 
o|identified direct recursive calls: f_6086 1 
o|identified direct recursive calls: f_6417 1 
o|identified direct recursive calls: f_6442 1 
o|identified direct recursive calls: f_6743 1 
o|identified direct recursive calls: f_6877 1 
o|identified direct recursive calls: f_7095 1 
o|identified direct recursive calls: f_7119 1 
o|identified direct recursive calls: f_8048 1 
o|identified direct recursive calls: f_8411 1 
o|identified direct recursive calls: f_9481 1 
o|fast box initializations: 69 
o|fast global references: 26 
o|fast global assignments: 3 
o|dropping unused closure argument: f_6417 
o|dropping unused closure argument: f_3384 
o|dropping unused closure argument: f_3402 
o|dropping unused closure argument: f_5934 
o|dropping unused closure argument: f_7095 
*/
/* end of file */
