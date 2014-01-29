/* Generated from srfi-14.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:46
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: srfi-14.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-14.c
   unit: srfi_2d14
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[102];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,19),40,37,108,97,116,105,110,49,45,62,99,104,97,114,32,110,54,50,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,19),40,109,97,107,101,45,99,104,97,114,45,115,101,116,32,115,54,54,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,17),40,99,104,97,114,45,115,101,116,58,115,32,99,115,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,15),40,99,104,97,114,45,115,101,116,63,32,120,55,48,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,37,100,101,102,97,117,108,116,45,98,97,115,101,32,109,97,121,98,101,45,98,97,115,101,55,52,32,112,114,111,99,55,53,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,9),40,108,112,32,99,115,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,31),40,37,99,104,97,114,45,115,101,116,58,115,47,99,104,101,99,107,32,99,115,55,57,32,112,114,111,99,56,48,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,20),40,99,104,97,114,45,115,101,116,45,99,111,112,121,32,99,115,56,55,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,11),40,108,112,32,114,101,115,116,57,55,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,20),40,99,104,97,114,45,115,101,116,61,32,46,32,114,101,115,116,56,57,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,18),40,102,95,49,52,57,49,32,115,49,50,51,32,105,49,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,18),40,102,95,49,53,48,50,32,115,49,50,55,32,105,49,50,56,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,10),40,108,112,50,32,105,49,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,18),40,108,112,32,115,49,49,49,49,32,114,101,115,116,49,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,22),40,99,104,97,114,45,115,101,116,60,61,32,46,32,114,101,115,116,49,48,52,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,18),40,102,95,49,53,53,55,32,115,49,52,57,32,105,49,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,49,52,53,32,97,110,115,49,52,54,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,38),40,99,104,97,114,45,115,101,116,45,104,97,115,104,32,99,115,49,51,50,32,46,32,109,97,121,98,101,45,98,111,117,110,100,49,51,51,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,18),40,102,95,49,54,49,56,32,115,49,54,51,32,105,49,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,18),40,102,95,49,54,49,51,32,115,49,53,57,32,105,49,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,99,111,110,116,97,105,110,115,63,32,99,115,49,53,53,32,99,104,97,114,49,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,18),40,102,95,49,54,54,56,32,115,49,55,52,32,105,49,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,17),40,108,112,32,105,49,55,48,32,115,105,122,101,49,55,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,21),40,99,104,97,114,45,115,101,116,45,115,105,122,101,32,99,115,49,54,55,41,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,102,95,49,55,49,54,32,115,49,57,49,32,105,49,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,18),40,102,95,49,55,49,49,32,115,49,56,55,32,105,49,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,18),40,108,112,32,105,49,56,50,32,99,111,117,110,116,49,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,32),40,99,104,97,114,45,115,101,116,45,99,111,117,110,116,32,112,114,101,100,49,55,56,32,99,115,101,116,49,55,57,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,13),40,102,95,49,55,52,52,32,99,50,49,50,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,50,32,103,50,48,57,50,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,45),40,37,115,101,116,45,99,104,97,114,45,115,101,116,32,115,101,116,49,57,53,32,112,114,111,99,49,57,54,32,99,115,49,57,55,32,99,104,97,114,115,49,57,56,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,13),40,102,95,49,55,56,56,32,99,50,51,55,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,55,32,103,50,51,52,50,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,46),40,37,115,101,116,45,99,104,97,114,45,115,101,116,33,32,115,101,116,50,50,48,32,112,114,111,99,50,50,49,32,99,115,50,50,50,32,99,104,97,114,115,50,50,51,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,18),40,102,95,49,56,50,55,32,115,50,52,55,32,105,50,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,97,100,106,111,105,110,32,99,115,50,52,53,32,46,32,99,104,97,114,115,50,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,18),40,102,95,49,56,51,56,32,115,50,53,50,32,105,50,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,97,100,106,111,105,110,33,32,99,115,50,53,48,32,46,32,99,104,97,114,115,50,53,49,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,18),40,102,95,49,56,52,57,32,115,50,53,55,32,105,50,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,100,101,108,101,116,101,32,99,115,50,53,53,32,46,32,99,104,97,114,115,50,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,18),40,102,95,49,56,54,48,32,115,50,54,50,32,105,50,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,100,101,108,101,116,101,33,32,99,115,50,54,48,32,46,32,99,104,97,114,115,50,54,49,41,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,25),40,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,32,99,115,101,116,50,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,28),40,101,110,100,45,111,102,45,99,104,97,114,45,115,101,116,63,32,99,117,114,115,111,114,50,54,55,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,32),40,99,104,97,114,45,115,101,116,45,114,101,102,32,99,115,101,116,50,54,57,32,99,117,114,115,111,114,50,55,48,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,40),40,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,45,110,101,120,116,32,99,115,101,116,50,55,50,32,99,117,114,115,111,114,50,55,51,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,50,50,32,115,50,57,50,32,105,50,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,49,55,32,115,50,56,56,32,105,50,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,11),40,108,112,32,99,117,114,50,56,49,41,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,49),40,37,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,45,110,101,120,116,32,99,115,101,116,50,55,54,32,99,117,114,115,111,114,50,55,55,32,112,114,111,99,50,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,54,57,32,115,51,49,48,32,105,51,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,54,52,32,115,51,48,54,32,105,51,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,33),40,99,104,97,114,45,115,101,116,45,102,111,114,45,101,97,99,104,32,112,114,111,99,50,57,54,32,99,115,50,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,18),40,102,95,50,48,50,54,32,115,51,51,48,32,105,51,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,18),40,102,95,50,48,50,49,32,115,51,50,54,32,105,51,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,18),40,102,95,50,48,52,50,32,115,51,51,52,32,105,51,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,45,115,101,116,45,109,97,112,32,112,114,111,99,51,49,53,32,99,115,51,49,54,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,18),40,102,95,50,48,56,55,32,115,51,52,57,32,105,51,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,51,52,53,32,97,110,115,51,52,54,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,37),40,99,104,97,114,45,115,101,116,45,102,111,108,100,32,107,111,110,115,51,52,48,32,107,110,105,108,51,52,49,32,99,115,51,52,50,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,18),40,102,95,50,49,50,55,32,115,51,54,55,32,105,51,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,30),40,99,104,97,114,45,115,101,116,45,101,118,101,114,121,32,112,114,101,100,51,53,51,32,99,115,51,53,52,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,18),40,102,95,50,49,56,57,32,115,51,56,55,32,105,51,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,18),40,102,95,50,49,56,52,32,115,51,56,51,32,105,51,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,45,115,101,116,45,97,110,121,32,112,114,101,100,51,55,49,32,99,115,51,55,50,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,18),40,102,95,50,50,50,54,32,115,52,48,52,32,105,52,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,12),40,108,112,32,115,101,101,100,51,57,56,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,33,32,112,51,57,50,32,102,51,57,51,32,103,51,57,52,32,115,51,57,53,32,115,101,101,100,51,57,54,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,56),40,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,32,112,52,48,57,32,102,52,49,48,32,103,52,49,49,32,115,101,101,100,52,49,50,32,46,32,109,97,121,98,101,45,98,97,115,101,52,49,51,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,54),40,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,33,32,112,52,49,55,32,102,52,49,56,32,103,52,49,57,32,115,101,101,100,52,50,48,32,98,97,115,101,45,99,115,101,116,52,50,49,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,18),40,102,95,50,50,55,52,32,115,52,52,49,32,105,52,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,102,95,50,50,55,50,32,99,104,97,114,52,51,56,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,50,56,32,103,52,51,53,52,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,32),40,37,108,105,115,116,45,62,99,104,97,114,45,115,101,116,33,32,99,104,97,114,115,52,50,52,32,115,52,50,53,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,21),40,99,104,97,114,45,115,101,116,32,46,32,99,104,97,114,115,52,52,57,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,41),40,108,105,115,116,45,62,99,104,97,114,45,115,101,116,32,99,104,97,114,115,52,53,51,32,46,32,109,97,121,98,101,45,98,97,115,101,52,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,37),40,108,105,115,116,45,62,99,104,97,114,45,115,101,116,33,32,99,104,97,114,115,52,53,56,32,98,97,115,101,45,99,115,52,53,57,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,18),40,102,95,50,51,54,57,32,115,52,54,57,32,105,52,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,52,54,53,32,97,110,115,52,54,54,41};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,22),40,99,104,97,114,45,115,101,116,45,62,108,105,115,116,32,99,115,52,54,50,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,18),40,102,95,50,52,48,57,32,115,52,56,49,32,105,52,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,52,55,54,32,105,52,55,56,41};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,41),40,37,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,33,32,115,116,114,52,55,51,32,98,115,52,55,52,32,112,114,111,99,52,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,41),40,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,32,115,116,114,52,56,55,32,46,32,109,97,121,98,101,45,98,97,115,101,52,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,37),40,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,33,32,115,116,114,52,57,50,32,98,97,115,101,45,99,115,52,57,51,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,18),40,102,95,50,52,56,48,32,115,53,48,53,32,105,53,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,14),40,108,112,32,105,53,48,48,32,106,53,48,49,41,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,24),40,99,104,97,114,45,115,101,116,45,62,115,116,114,105,110,103,32,99,115,52,57,54,41};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,18),40,102,95,50,53,50,57,32,115,53,50,52,32,105,53,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,53,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,65),40,37,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,33,32,108,111,119,101,114,53,49,48,32,117,112,112,101,114,53,49,49,32,101,114,114,111,114,63,53,49,50,32,98,115,53,49,51,32,112,114,111,99,53,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,49),40,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,32,108,111,119,101,114,53,51,50,32,117,112,112,101,114,53,51,51,32,46,32,114,101,115,116,53,51,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,61),40,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,33,32,108,111,119,101,114,53,52,55,32,117,112,112,101,114,53,52,56,32,101,114,114,111,114,63,53,52,57,32,98,97,115,101,45,99,115,53,53,48,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,18),40,102,95,50,54,50,56,32,115,53,55,51,32,105,53,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,18),40,102,95,50,54,52,48,32,115,53,54,57,32,105,53,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,18),40,102,95,50,54,51,53,32,115,53,54,53,32,105,53,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,53,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,39),40,37,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,33,32,112,114,101,100,53,53,51,32,100,115,53,53,52,32,98,115,53,53,53,41,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,56),40,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,32,112,114,101,100,105,99,97,116,101,53,55,56,32,100,111,109,97,105,110,53,55,57,32,46,32,109,97,121,98,101,45,98,97,115,101,53,56,48,41};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,52),40,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,33,32,112,114,101,100,105,99,97,116,101,53,56,52,32,100,111,109,97,105,110,53,56,53,32,98,97,115,101,45,99,115,53,56,54,41,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,17),40,45,62,99,104,97,114,45,115,101,116,32,120,53,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,53,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,24),40,37,115,116,114,105,110,103,45,105,116,101,114,32,112,53,57,52,32,115,53,57,53,41};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,18),40,102,95,50,55,56,50,32,115,54,50,57,32,105,54,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,54,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,16),40,102,95,50,55,53,55,32,99,115,101,116,54,50,48,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,49,48,32,103,54,49,55,54,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,97,108,103,101,98,114,97,32,115,54,48,52,32,99,115,101,116,115,54,48,53,32,111,112,54,48,54,32,112,114,111,99,54,48,55,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,51,53,32,115,54,53,49,32,105,54,53,50,32,118,54,53,51,41,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,51,51,32,115,54,52,54,32,105,54,52,55,32,118,54,52,56,41,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,18),40,102,95,50,56,51,49,32,105,54,52,50,32,118,54,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,45,115,101,116,45,99,111,109,112,108,101,109,101,110,116,32,99,115,54,51,57,41,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,54,54,32,115,54,54,55,32,105,54,54,56,32,118,54,54,57,41,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,54,52,32,115,54,54,50,32,105,54,54,51,32,118,54,54,52,41,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,18),40,102,95,50,56,54,50,32,105,54,53,56,32,118,54,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,30),40,99,104,97,114,45,115,101,116,45,99,111,109,112,108,101,109,101,110,116,33,32,99,115,101,116,54,53,54,41,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,18),40,102,95,50,56,57,57,32,115,54,55,57,32,105,54,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,23),40,102,95,50,56,57,50,32,115,54,55,52,32,105,54,55,53,32,118,54,55,54,41,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,37),40,99,104,97,114,45,115,101,116,45,117,110,105,111,110,33,32,99,115,101,116,49,54,55,50,32,46,32,99,115,101,116,115,54,55,51,41,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,18),40,102,95,50,57,51,53,32,115,54,57,48,32,105,54,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,23),40,102,95,50,57,50,56,32,115,54,56,53,32,105,54,56,54,32,118,54,56,55,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,45,115,101,116,45,117,110,105,111,110,32,46,32,99,115,101,116,115,54,56,51,41,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,18),40,102,95,50,57,55,48,32,115,55,48,49,32,105,55,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,23),40,102,95,50,57,54,51,32,115,54,57,54,32,105,54,57,55,32,118,54,57,56,41,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,44),40,99,104,97,114,45,115,101,116,45,105,110,116,101,114,115,101,99,116,105,111,110,33,32,99,115,101,116,49,54,57,52,32,46,32,99,115,101,116,115,54,57,53,41,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,18),40,102,95,51,48,48,51,32,115,55,49,50,32,105,55,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,23),40,102,95,50,57,57,54,32,115,55,48,55,32,105,55,48,56,32,118,55,48,57,41,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,105,110,116,101,114,115,101,99,116,105,111,110,32,46,32,99,115,101,116,115,55,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,18),40,102,95,51,48,51,53,32,115,55,50,51,32,105,55,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,23),40,102,95,51,48,50,56,32,115,55,49,56,32,105,55,49,57,32,118,55,50,48,41,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,42),40,99,104,97,114,45,115,101,116,45,100,105,102,102,101,114,101,110,99,101,33,32,99,115,101,116,49,55,49,54,32,46,32,99,115,101,116,115,55,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,18),40,102,95,51,48,54,57,32,115,55,51,53,32,105,55,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,23),40,102,95,51,48,54,50,32,115,55,51,48,32,105,55,51,49,32,118,55,51,50,41,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,39),40,99,104,97,114,45,115,101,116,45,100,105,102,102,101,114,101,110,99,101,32,99,115,49,55,50,55,32,46,32,99,115,101,116,115,55,50,56,41,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,23),40,102,95,51,49,48,50,32,115,55,52,54,32,105,55,52,55,32,118,55,52,56,41,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,18),40,102,95,51,49,49,54,32,115,55,53,49,32,105,55,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,23),40,102,95,51,48,57,53,32,115,55,52,49,32,105,55,52,50,32,118,55,52,51,41,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,120,111,114,33,32,99,115,101,116,49,55,51,57,32,46,32,99,115,101,116,115,55,52,48,41,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,23),40,102,95,51,49,53,53,32,115,55,54,50,32,105,55,54,51,32,118,55,54,52,41,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,18),40,102,95,51,49,54,57,32,115,55,54,55,32,105,55,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,23),40,102,95,51,49,52,56,32,115,55,53,55,32,105,55,53,56,32,118,55,53,57,41,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,25),40,99,104,97,114,45,115,101,116,45,120,111,114,32,46,32,99,115,101,116,115,55,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,18),40,102,95,51,50,49,52,32,115,55,57,57,32,105,56,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,18),40,102,95,51,50,48,57,32,115,55,57,53,32,105,55,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,18),40,102,95,51,50,51,48,32,115,56,48,51,32,105,56,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,18),40,102,95,51,50,51,55,32,115,56,48,55,32,105,56,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,18),40,102,95,51,49,57,57,32,105,55,56,56,32,118,55,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,14),40,102,95,51,49,57,52,32,99,115,55,56,55,41,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,55,55,32,103,55,56,52,56,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,62),40,37,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,33,32,100,105,102,102,55,55,49,32,105,110,116,55,55,50,32,99,115,101,116,115,55,55,51,32,112,114,111,99,55,55,52,41,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,18),40,102,95,51,50,57,57,32,115,56,50,53,32,105,56,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,18),40,102,95,51,51,49,52,32,115,56,51,51,32,105,56,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,18),40,102,95,51,51,48,57,32,115,56,50,57,32,105,56,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,18),40,102,95,51,51,51,48,32,115,56,51,55,32,105,56,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,18),40,102,95,51,50,57,50,32,105,56,50,49,32,118,56,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,54),40,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,33,32,99,115,49,56,49,54,32,99,115,50,56,49,55,32,46,32,99,115,101,116,115,56,49,56,41,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,46),40,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,32,99,115,49,56,52,50,32,46,32,99,115,101,116,115,56,52,51,41,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,53,49,32,103,57,54,51,57,54,57,41,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,50,51,32,103,57,51,53,57,52,49,41,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,57,53,32,103,57,48,55,57,49,51,41,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,54,54,32,103,56,55,56,56,56,52,41,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1467)
static void C_fcall f_1467(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_fcall f_1396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2290)
static void C_fcall f_2290(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_fcall f_2521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1293)
static void C_fcall f_1293(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_fcall f_2505(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3548)
static void C_fcall f_3548(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_ccall f_3364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3409)
static void C_ccall f_3409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3518)
static void C_fcall f_3518(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2204)
static void C_ccall f_2204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3429)
static void C_ccall f_3429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2212)
static void C_fcall f_2212(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2218)
static void C_fcall f_2218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1948)
static void C_fcall f_1948(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2947)
static void C_ccall f_2947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_3125)
static void C_ccall f_3125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2269)
static void C_fcall f_2269(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2070)
static void C_fcall f_2070(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3346)
static void C_ccall f_3346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2389)
static void C_fcall f_2389(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_fcall f_1901(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_srfi_2d14_toplevel)
C_externexport void C_ccall C_srfi_2d14_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1731)
static void C_ccall f_1731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1739)
static void C_fcall f_1739(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1728)
static void C_ccall f_1728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3194)
static void C_ccall f_3194(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3191)
static void C_fcall f_3191(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3280)
static void C_ccall f_3280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_fcall f_2352(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2464)
static void C_fcall f_2464(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1849)
static void C_ccall f_1849(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2005)
static void C_fcall f_2005(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2000)
static void C_ccall f_2000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2401)
static void C_fcall f_2401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_fcall f_1341(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2021)
static void C_ccall f_2021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3454)
static void C_fcall f_3454(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_fcall f_1335(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1688)
static void C_fcall f_1688(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3448)
static void C_ccall f_3448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1613)
static void C_ccall f_1613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1650)
static void C_fcall f_1650(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1801)
static void C_fcall f_1801(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2798)
static void C_fcall f_2798(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3384)
static void C_ccall f_3384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_fcall f_2765(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static C_word C_fcall f_1580(C_word t0,C_word t1);
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2728)
static void C_fcall f_2728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2754)
static void C_fcall f_2754(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2116)
static void C_fcall f_2116(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2127)
static void C_ccall f_2127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2655)
static void C_ccall f_2655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_fcall f_2719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3230)
static void C_ccall f_3230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1526)
static void C_fcall f_1526(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2598)
static void C_ccall f_2598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3256)
static void C_fcall f_3256(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1537)
static void C_fcall f_1537(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static void C_fcall f_2549(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1783)
static void C_fcall f_1783(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3488)
static void C_fcall f_3488(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_fcall f_2603(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_fcall f_2609(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1760)
static void C_fcall f_1760(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_fcall f_2165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1892)
static void C_fcall f_1892(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3141)
static void C_ccall f_3141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1443)
static void C_fcall f_1443(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;

C_noret_decl(trf_1467)
static void C_fcall trf_1467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1467(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1467(t0,t1,t2);}

C_noret_decl(trf_1396)
static void C_fcall trf_1396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1396(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1396(t0,t1,t2);}

C_noret_decl(trf_2290)
static void C_fcall trf_2290(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2290(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2290(t0,t1,t2);}

C_noret_decl(trf_2521)
static void C_fcall trf_2521(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2521(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2521(t0,t1,t2);}

C_noret_decl(trf_1293)
static void C_fcall trf_1293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1293(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1293(t0,t1,t2);}

C_noret_decl(trf_2505)
static void C_fcall trf_2505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2505(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2505(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3548)
static void C_fcall trf_3548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3548(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3548(t0,t1,t2);}

C_noret_decl(trf_3518)
static void C_fcall trf_3518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3518(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3518(t0,t1,t2);}

C_noret_decl(trf_2212)
static void C_fcall trf_2212(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2212(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2212(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2218)
static void C_fcall trf_2218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2218(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2218(t0,t1,t2);}

C_noret_decl(trf_1948)
static void C_fcall trf_1948(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1948(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1948(t0,t1,t2);}

C_noret_decl(trf_2269)
static void C_fcall trf_2269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2269(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2269(t0,t1,t2);}

C_noret_decl(trf_2070)
static void C_fcall trf_2070(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2070(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2070(t0,t1,t2,t3);}

C_noret_decl(trf_2389)
static void C_fcall trf_2389(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2389(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2389(t0,t1,t2,t3);}

C_noret_decl(trf_1901)
static void C_fcall trf_1901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1901(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1901(t0,t1,t2);}

C_noret_decl(trf_1739)
static void C_fcall trf_1739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1739(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1739(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3191)
static void C_fcall trf_3191(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3191(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3191(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2352)
static void C_fcall trf_2352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2352(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2352(t0,t1,t2,t3);}

C_noret_decl(trf_2464)
static void C_fcall trf_2464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2464(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2464(t0,t1,t2,t3);}

C_noret_decl(trf_2005)
static void C_fcall trf_2005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2005(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2005(t0,t1,t2);}

C_noret_decl(trf_2401)
static void C_fcall trf_2401(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2401(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2401(t0,t1,t2);}

C_noret_decl(trf_1341)
static void C_fcall trf_1341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1341(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1341(t0,t1,t2);}

C_noret_decl(trf_3454)
static void C_fcall trf_3454(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3454(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3454(t0,t1,t2);}

C_noret_decl(trf_1335)
static void C_fcall trf_1335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1335(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1335(t0,t1,t2);}

C_noret_decl(trf_1688)
static void C_fcall trf_1688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1688(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1688(t0,t1,t2,t3);}

C_noret_decl(trf_1650)
static void C_fcall trf_1650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1650(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1650(t0,t1,t2,t3);}

C_noret_decl(trf_1801)
static void C_fcall trf_1801(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1801(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1801(t0,t1,t2);}

C_noret_decl(trf_2798)
static void C_fcall trf_2798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2798(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2798(t0,t1,t2);}

C_noret_decl(trf_2765)
static void C_fcall trf_2765(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2765(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2765(t0,t1,t2);}

C_noret_decl(trf_2728)
static void C_fcall trf_2728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2728(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2728(t0,t1,t2);}

C_noret_decl(trf_2754)
static void C_fcall trf_2754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2754(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2754(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2116)
static void C_fcall trf_2116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2116(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2116(t0,t1,t2);}

C_noret_decl(trf_2719)
static void C_fcall trf_2719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2719(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2719(t0,t1,t2);}

C_noret_decl(trf_1526)
static void C_fcall trf_1526(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1526(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1526(t0,t1);}

C_noret_decl(trf_3256)
static void C_fcall trf_3256(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3256(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3256(t0,t1,t2);}

C_noret_decl(trf_1537)
static void C_fcall trf_1537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1537(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1537(t0,t1,t2,t3);}

C_noret_decl(trf_2549)
static void C_fcall trf_2549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2549(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2549(t0,t1);}

C_noret_decl(trf_1783)
static void C_fcall trf_1783(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1783(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1783(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3488)
static void C_fcall trf_3488(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3488(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3488(t0,t1,t2);}

C_noret_decl(trf_2603)
static void C_fcall trf_2603(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2603(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2603(t0,t1,t2,t3);}

C_noret_decl(trf_2609)
static void C_fcall trf_2609(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2609(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2609(t0,t1,t2);}

C_noret_decl(trf_1760)
static void C_fcall trf_1760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1760(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1760(t0,t1,t2);}

C_noret_decl(trf_2165)
static void C_fcall trf_2165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2165(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2165(t0,t1,t2);}

C_noret_decl(trf_1892)
static void C_fcall trf_1892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1892(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1892(t0,t1,t2,t3);}

C_noret_decl(trf_1443)
static void C_fcall trf_1443(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1443(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1443(t0,t1,t2,t3);}

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

C_noret_decl(tr6r)
static void C_fcall tr6r(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6r(C_proc6 k){
int n;
C_word *a,t6;
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
n=C_rest_count(0);
a=C_alloc(n*3);
t6=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6);}

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

/* k2512 in %ucs-range->char-set! in k1251 */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2513,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_fixnum_min(t2,C_fix(256));
t4=C_fixnum_difference(t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2521(t8,((C_word*)t0)[5],t4);}

/* lp2 in k1451 in lp in k1440 in char-set<= in k1251 */
static void C_fcall f_1467(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1467,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* srfi-14.scm:179: lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1443(t4,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1491,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1500,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:180: g121 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[6],t2);}}

/* k1390 in char-set= in k1251 */
static void C_ccall f_1391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1391,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1396,a[2]=t1,a[3]=t3,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1396(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* lp in k1390 in char-set= in k1251 */
static void C_fcall f_1396(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1396,NULL,3,t0,t1,t2);}
t3=C_i_pairp(t2);
t4=C_i_not(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1417,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* srfi-14.scm:165: %char-set:s/check */
f_1335(t5,t6,lf[14]);}}

/* char-set-union in k1251 */
static void C_ccall f_2910(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2910r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2910r(t0,t1,t2);}}

static void C_ccall f_2910r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2919,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2947,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* srfi-14.scm:542: %char-set:s/check */
f_1335(t4,t6,lf[64]);}
else{
/* srfi-14.scm:545: char-set-copy */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[65]+1));}}

/* k2918 in char-set-union in k1251 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2928,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:543: %char-set-algebra */
f_2754(t2,t1,t4,t5,lf[64]);}

/* f_3209 */
static void C_ccall f_3209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3209,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3226,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:136: g797 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* k2920 in k2918 in char-set-union in k1251 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:544: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_2928 in k2918 in char-set-union in k1251 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2928,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2935,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:150: g688 */
t7=t6;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t2,t3);}}

/* f_2274 */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2274,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* k3324 */
static void C_ccall f_3326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k3327 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3329,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3330,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:610: g835 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* for-each-loop428 in %list->char-set! in k1251 */
static void C_fcall f_2290(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2290,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2299,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:360: g429 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* char-set:s in k1251 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1272,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* char-set? in k1251 */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1278,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[2]));}

/* k3227 */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3229,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3230,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:600: g801 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3224 */
static void C_ccall f_3226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* lp in k2512 in %ucs-range->char-set! in k1251 */
static void C_fcall f_2521(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2521,NULL,3,t0,t1,t2);}
t3=((C_word*)t0)[2];
t4=t2;
if(C_truep(C_fixnum_less_or_equal_p(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2529,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2535,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:433: g522 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_2529 in lp in k2512 in %ucs-range->char-set! in k1251 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2529,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* k2298 in for-each-loop428 in %list->char-set! in k1251 */
static void C_ccall f_2299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2290(t3,((C_word*)t0)[4],t2);}

/* f_3309 */
static void C_ccall f_3309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3309,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3314,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3326,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:136: g831 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* f_3214 */
static void C_ccall f_3214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3214,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k2533 in lp in k2512 in %ucs-range->char-set! in k1251 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:433: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2521(t3,((C_word*)t0)[4],t2);}

/* %default-base in k1251 */
static void C_fcall f_1293(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1293,NULL,3,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=t2;
t7=C_u_i_cdr(t6);
if(C_truep(C_i_nullp(t7))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1314,a[2]=t1,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:114: char-set? */
t9=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t5);}
else{
/* srfi-14.scm:116: ##sys#error */
t8=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,lf[9],t3,t2);}}
else{
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t1,C_fix(256),C_make_character(0));}}

/* char-set-diff+intersection in k1251 */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3338r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3338r(t0,t1,t2,t3);}}

static void C_ccall f_3338r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3342,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3360,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:616: %char-set:s/check */
f_1335(t5,t2,lf[75]);}

/* f_3330 in k3327 */
static void C_ccall f_3330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3330,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* k2502 in k2456 in char-set->string in k1251 */
static void C_ccall f_2503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:411: make-string */
t2=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* %ucs-range->char-set! in k1251 */
static void C_fcall f_2505(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2505,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_exact_2(t2,t6);
t8=C_i_check_exact_2(t3,t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2513,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2549,a[2]=t9,a[3]=t6,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=t3;
if(C_truep(C_fixnum_lessp(t11,t12))){
t13=t3;
t14=t10;
f_2549(t14,(C_truep(C_fixnum_lessp(C_fix(256),t13))?t4:C_SCHEME_FALSE));}
else{
t13=t10;
f_2549(t13,C_SCHEME_FALSE);}}

/* map-loop866 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_fcall f_3548(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3548,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_make_character(C_unfix(t3));
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

/* k1797 in k1786 in %set-char-set! in k1251 */
static void C_ccall f_1799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3366 in k3362 in k1251 */
static void C_ccall f_3368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3368,2,t0,t1);}
t2=C_mutate((C_word*)lf[68]+1 /* (set! char-set:full ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:634: ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(97),C_fix(123));}

/* k3362 in k1251 */
static void C_ccall f_3364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3364,2,t0,t1);}
t2=C_mutate((C_word*)lf[65]+1 /* (set! char-set:empty ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:631: char-set-complement */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[65]+1));}

/* k3359 in char-set-diff+intersection in k1251 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:616: string-copy */
t2=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_3314 */
static void C_ccall f_3314(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3314,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3415,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=lf[0];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3518,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li164),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3518(t11,t7,lf[94]);}

/* k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
t2=C_mutate((C_word*)lf[84]+1 /* (set! char-set:punctuation ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:670: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[95]);}

/* k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:689: list->char-set! */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[3]);}

/* k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3403,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1 /* (set! char-set:letter+digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:660: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[97]);}

/* k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3409,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:667: list->char-set! */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[3]);}

/* f_2272 in %list->char-set! in k1251 */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2272,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2274,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
t4=C_fix(C_character_code(t2));
/* srfi-14.scm:361: g439 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,((C_word*)t0)[2],t4);}

/* k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3406,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=lf[0];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3409,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3548,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li165),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3548(t11,t7,lf[96]);}

/* k2806 in for-each-loop610 in %char-set-algebra in k1251 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2798(t3,((C_word*)t0)[4],t2);}

/* map-loop895 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_fcall f_3518(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3518,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_make_character(C_unfix(t3));
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

/* k3431 in k3427 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in ... */
static void C_ccall f_3433(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3433,2,t0,t1);}
t2=C_mutate((C_word*)lf[88]+1 /* (set! char-set:printing ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3437,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[0];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3452,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3454,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=((C_word)li162),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3454(t13,t9,lf[92]);}

/* k3435 in k3431 in k3427 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in ... */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3437,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1 /* (set! char-set:blank ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3441,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3448,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:713: ucs-range->char-set */
t5=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(0),C_fix(32));}

/* k2199 */
static void C_ccall f_2201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k2202 in lp in k2159 in char-set-any in k1251 */
static void C_ccall f_2204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_make_character(C_unfix(t2));
/* srfi-14.scm:332: pred */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[4],t3);}
else{
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:333: lp */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2165(t3,((C_word*)t0)[6],t2);}}

/* char-set-complement in k1251 */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2818,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2822,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:522: %char-set:s/check */
f_1335(t3,t2,lf[61]);}

/* f_2996 in k2986 in char-set-intersection in k1251 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2996,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3003,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:149: g710 */
t7=t6;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t2,t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3425,2,t0,t1);}
t2=C_mutate((C_word*)lf[86]+1 /* (set! char-set:graphic ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3429,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[0];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3486,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3488,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=((C_word)li163),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3488(t13,t9,lf[93]);}

/* k3427 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 in ... */
static void C_ccall f_3429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3429,2,t0,t1);}
t2=C_mutate((C_word*)lf[87]+1 /* (set! char-set:whitespace ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:704: char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[87]+1),*((C_word*)lf[86]+1));}

/* k3054 in char-set-difference in k1251 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3057,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:573: %char-set-algebra */
f_2754(t2,t1,((C_word*)t0)[3],t3,lf[70]);}

/* k3056 in k3054 in char-set-difference in k1251 */
static void C_ccall f_3057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:574: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* %char-set-unfold! in k1251 */
static void C_fcall f_2212(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2212,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2218,a[2]=t8,a[3]=t4,a[4]=t5,a[5]=t3,a[6]=t2,a[7]=((C_word)li71),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_2218(t10,t1,t6);}

/* k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3421,2,t0,t1);}
t2=C_mutate((C_word*)lf[85]+1 /* (set! char-set:symbol ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:693: char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[83]+1),*((C_word*)lf[84]+1),*((C_word*)lf[85]+1));}

/* char-set-difference in k1251 */
static void C_ccall f_3046(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3046r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3046r(t0,t1,t2,t3);}}

static void C_ccall f_3046r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3055,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3081,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:572: %char-set:s/check */
f_1335(t5,t2,lf[70]);}
else{
/* srfi-14.scm:575: char-set-copy */
t4=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* k2821 in char-set-complement in k1251 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,C_fix(256),C_make_character(32));}

/* k2825 in k2823 in k2821 in char-set-complement in k1251 */
static void C_ccall f_2826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:525: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2823 in k2821 in char-set-complement in k1251 */
static void C_ccall f_2824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2826,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2831,a[2]=t1,a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:524: %string-iter */
f_2719(t2,t3,((C_word*)t0)[3]);}

/* lp in %char-set-unfold! in k1251 */
static void C_fcall f_2218(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2218,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2225,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* srfi-14.scm:341: p */
t4=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* f_2226 in k2223 in lp in %char-set-unfold! in k1251 */
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2226,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* k2223 in lp in %char-set-unfold! in k1251 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2225,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2226,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2232,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2244,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:342: f */
t5=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[5]);}}

/* f_3062 in k3054 in char-set-difference in k1251 */
static void C_ccall f_3062(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3062,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3069,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:151: g733 */
t7=t6;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t2,t3);}}

/* f_3069 */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3069,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* k1942 in char-set-for-each in k1251 */
static void C_ccall f_1943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1943,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1948,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1948(t5,((C_word*)t0)[3],C_fix(255));}

/* lp in k1942 in char-set-for-each in k1251 */
static void C_fcall f_1948(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1948,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1957,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1964,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1984,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:296: g304 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1932 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* f_2935 */
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2935,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* char-set-for-each in k1251 */
static void C_ccall f_1939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1939,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1943,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:293: %char-set:s/check */
f_1335(t4,t3,lf[33]);}

/* k2946 in char-set-union in k1251 */
static void C_ccall f_2947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k2243 in k2223 in lp in %char-set-unfold! in k1251 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fix(C_character_code(t1));
/* srfi-14.scm:342: g402 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k2237 in k2230 in k2223 in lp in %char-set-unfold! in k1251 */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:343: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2218(t2,((C_word*)t0)[3],t1);}

/* k2254 in k2252 in char-set-unfold in k1251 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:348: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2252 in char-set-unfold in k1251 */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:347: %char-set-unfold! */
f_2212(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* char-set-unfold in k1251 */
static void C_ccall f_2249(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr6r,(void*)f_2249r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_2249r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2249r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2253,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:346: %default-base */
f_1293(t7,t6,*((C_word*)lf[39]+1));}

/* k3123 */
static void C_ccall f_3125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(C_fix(1),t1);
/* srfi-14.scm:152: g744 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* char-set-unfold! in k1251 */
static void C_ccall f_2260(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2260,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2264,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2267,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:352: %char-set:s/check */
f_1335(t8,t6,lf[40]);}

/* k2263 in char-set-unfold! in k1251 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_3116 */
static void C_ccall f_3116(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3116,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=t1;
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(C_character_code(t4)));}

/* %list->char-set! in k1251 */
static void C_fcall f_2269(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2269,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2272,a[2]=t3,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[22]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2290,a[2]=t7,a[3]=t4,a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2290(t9,t1,t2);}

/* k2266 in char-set-unfold! in k1251 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:351: %char-set-unfold! */
f_2212(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* f_3102 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3102,5,t0,t1,t2,t3,t4);}
t5=C_make_character(C_unfix(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_string_set(t2,t3,t5));}

/* char-set-diff+intersection! in k1251 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3276r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3276r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3276r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3280,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:606: %char-set:s/check */
f_1335(t5,t2,lf[74]);}

/* k2230 in k2223 in lp in %char-set-unfold! in k1251 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:343: g */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}

/* f_1922 */
static void C_ccall f_1922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1922,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* lp in k2064 in char-set-fold in k1251 */
static void C_fcall f_2070(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2070,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2086,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2087,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2099,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t5,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* srfi-14.scm:316: g347 */
t9=t7;
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,((C_word*)t0)[4],t2);}}

/* k3345 in k3343 in k3341 in char-set-diff+intersection in k1251 */
static void C_ccall f_3346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:619: make-char-set */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k3343 in k3341 in char-set-diff+intersection in k1251 */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3346,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:618: %char-set-diff+intersection! */
f_3191(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],lf[75]);}

/* k3341 in char-set-diff+intersection in k1251 */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,C_fix(256),C_make_character(0));}

/* f_2087 in lp in k2064 in char-set-fold in k1251 */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2087,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k2085 in lp in k2064 in char-set-fold in k1251 */
static void C_ccall f_2086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:315: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2070(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_3292 in k3281 in k3279 in char-set-diff+intersection! in k1251 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3292,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3299,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:609: g823 */
t6=t5;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,((C_word*)t0)[2],t2);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3309,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3329,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:610: g827 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[2],t2);}}

/* k1911 in lp in k1895 in %char-set-cursor-next in k1251 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
/* srfi-14.scm:286: lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1901(t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* f_1917 in lp in k1895 in %char-set-cursor-next in k1251 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1917,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1922,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1934,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:136: g290 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* f_3299 */
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3299,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* %string->char-set! in k1251 */
static void C_fcall f_2389(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2389,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=t2;
t7=C_block_size(t6);
t8=C_fixnum_difference(t7,C_fix(1));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2401,a[2]=t10,a[3]=t2,a[4]=t3,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2401(t12,t1,t8);}

/* k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:637: char-set-adjoin! */
t3=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_make_character(181));}

/* k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3378,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1 /* (set! char-set:lower-case ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:640: ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(65),C_fix(91));}

/* k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3373,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:635: ucs-range->char-set! */
t3=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(223),C_fix(247),C_SCHEME_TRUE,t1);}

/* k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:636: ucs-range->char-set! */
t3=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(248),C_fix(256),C_SCHEME_TRUE,t1);}

/* k2379 in lp in k2346 in char-set->list in k1251 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2381,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
/* srfi-14.scm:383: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2352(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[6];
t3=C_make_character(C_unfix(t2));
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* srfi-14.scm:383: lp */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2352(t5,((C_word*)t0)[4],((C_word*)t0)[5],t4);}}

/* k1742 in %set-char-set in k1251 */
static void C_ccall f_1743(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1744,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[22]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1755,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1760,a[2]=t7,a[3]=t2,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1760(t9,t5,t3);}

/* f_1744 in k1742 in %set-char-set in k1251 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1744,3,t0,t1,t2);}
t3=C_fix(C_character_code(t2));
/* srfi-14.scm:238: set */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[3],t3);}

/* k2097 in lp in k2064 in char-set-fold in k1251 */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
/* srfi-14.scm:315: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2070(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[6];
t3=C_make_character(C_unfix(t2));
/* srfi-14.scm:317: kons */
t4=((C_word*)t0)[7];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,((C_word*)t0)[8],t3,((C_word*)t0)[2]);}}

/* lp in k1895 in %char-set-cursor-next in k1251 */
static void C_fcall f_1901(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1901,NULL,3,t0,t1,t2);}
t3=C_fixnum_difference(t2,C_fix(1));
t4=C_fixnum_lessp(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1913,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
if(C_truep(t4)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
/* srfi-14.scm:286: lp */
t8=t1;
t9=t3;
t1=t8;
t2=t9;
goto loop;}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1917,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:285: g286 */
t7=t6;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[3],t3);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d14_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d14_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d14_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(852)){
C_save(t1);
C_rereclaim2(852*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,102);
lf[1]=C_h_intern(&lf[1],13,"make-char-set");
lf[2]=C_h_intern(&lf[2],8,"char-set");
lf[3]=C_h_intern(&lf[3],10,"char-set:s");
lf[4]=C_h_intern(&lf[4],9,"char-set\077");
lf[6]=C_h_intern(&lf[6],9,"substring");
lf[7]=C_h_intern(&lf[7],9,"\003syserror");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000 BASE-CS parameter not a char-set");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\0003Expected final base char set -- too many parameters");
lf[10]=C_h_intern(&lf[10],15,"\003sysmake-string");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\016Not a char-set");
lf[13]=C_h_intern(&lf[13],13,"char-set-copy");
lf[14]=C_h_intern(&lf[14],9,"char-set=");
lf[15]=C_h_intern(&lf[15],10,"char-set<=");
lf[16]=C_h_intern(&lf[16],13,"char-set-hash");
lf[17]=C_h_intern(&lf[17],6,"modulo");
lf[18]=C_h_intern(&lf[18],18,"char-set-contains\077");
lf[19]=C_h_intern(&lf[19],13,"char-set-size");
lf[20]=C_h_intern(&lf[20],14,"char-set-count");
lf[22]=C_h_intern(&lf[22],8,"for-each");
lf[24]=C_h_intern(&lf[24],15,"char-set-adjoin");
lf[25]=C_h_intern(&lf[25],16,"char-set-adjoin!");
lf[26]=C_h_intern(&lf[26],15,"char-set-delete");
lf[27]=C_h_intern(&lf[27],16,"char-set-delete!");
lf[28]=C_h_intern(&lf[28],15,"char-set-cursor");
lf[30]=C_h_intern(&lf[30],16,"end-of-char-set\077");
lf[31]=C_h_intern(&lf[31],12,"char-set-ref");
lf[32]=C_h_intern(&lf[32],20,"char-set-cursor-next");
lf[33]=C_h_intern(&lf[33],17,"char-set-for-each");
lf[34]=C_h_intern(&lf[34],12,"char-set-map");
lf[35]=C_h_intern(&lf[35],13,"char-set-fold");
lf[36]=C_h_intern(&lf[36],14,"char-set-every");
lf[37]=C_h_intern(&lf[37],12,"char-set-any");
lf[39]=C_h_intern(&lf[39],15,"char-set-unfold");
lf[40]=C_h_intern(&lf[40],16,"char-set-unfold!");
lf[42]=C_h_intern(&lf[42],14,"list->char-set");
lf[43]=C_h_intern(&lf[43],15,"list->char-set!");
lf[44]=C_h_intern(&lf[44],14,"char-set->list");
lf[46]=C_h_intern(&lf[46],16,"string->char-set");
lf[47]=C_h_intern(&lf[47],17,"string->char-set!");
lf[48]=C_h_intern(&lf[48],16,"char-set->string");
lf[49]=C_h_intern(&lf[49],11,"make-string");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000`Requested UCS range contains unavailable characters -- this implementation "
"only supports Latin-1");
lf[52]=C_h_intern(&lf[52],19,"ucs-range->char-set");
lf[53]=C_h_intern(&lf[53],20,"ucs-range->char-set!");
lf[55]=C_h_intern(&lf[55],15,"char-set-filter");
lf[56]=C_h_intern(&lf[56],16,"char-set-filter!");
lf[57]=C_h_intern(&lf[57],10,"->char-set");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\036Not a charset, string or char.");
lf[61]=C_h_intern(&lf[61],19,"char-set-complement");
lf[62]=C_h_intern(&lf[62],20,"char-set-complement!");
lf[63]=C_h_intern(&lf[63],15,"char-set-union!");
lf[64]=C_h_intern(&lf[64],14,"char-set-union");
lf[65]=C_h_intern(&lf[65],14,"char-set:empty");
lf[66]=C_h_intern(&lf[66],22,"char-set-intersection!");
lf[67]=C_h_intern(&lf[67],21,"char-set-intersection");
lf[68]=C_h_intern(&lf[68],13,"char-set:full");
lf[69]=C_h_intern(&lf[69],20,"char-set-difference!");
lf[70]=C_h_intern(&lf[70],19,"char-set-difference");
lf[71]=C_h_intern(&lf[71],13,"char-set-xor!");
lf[72]=C_h_intern(&lf[72],12,"char-set-xor");
lf[74]=C_h_intern(&lf[74],27,"char-set-diff+intersection!");
lf[75]=C_h_intern(&lf[75],26,"char-set-diff+intersection");
lf[76]=C_h_intern(&lf[76],11,"string-copy");
lf[77]=C_h_intern(&lf[77],19,"char-set:lower-case");
lf[78]=C_h_intern(&lf[78],19,"char-set:upper-case");
lf[79]=C_h_intern(&lf[79],19,"char-set:title-case");
lf[80]=C_h_intern(&lf[80],15,"char-set:letter");
lf[81]=C_h_intern(&lf[81],14,"char-set:digit");
lf[82]=C_h_intern(&lf[82],18,"char-set:hex-digit");
lf[83]=C_h_intern(&lf[83],21,"char-set:letter+digit");
lf[84]=C_h_intern(&lf[84],20,"char-set:punctuation");
lf[85]=C_h_intern(&lf[85],15,"char-set:symbol");
lf[86]=C_h_intern(&lf[86],16,"char-set:graphic");
lf[87]=C_h_intern(&lf[87],19,"char-set:whitespace");
lf[88]=C_h_intern(&lf[88],17,"char-set:printing");
lf[89]=C_h_intern(&lf[89],14,"char-set:blank");
lf[90]=C_h_intern(&lf[90],20,"char-set:iso-control");
lf[91]=C_h_intern(&lf[91],14,"char-set:ascii");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001\000\000\000\240\376\377\016");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000\012\376\003\000\000\002\376\377\001\000\000\000\013\376\003\000\000\002\376\377\001\000\000\000\014\376\003\000\000\002\376\377\001\000\000\000\015\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001"
"\000\000\000\240\376\377\016");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\242\376\003\000\000\002\376\377\001\000\000\000\243\376\003\000\000\002\376\377\001\000\000\000\244\376\003\000\000\002\376\377\001\000\000\000\245\376\003\000\000\002\376\377\001\000\000\000\246\376\003\000\000\002\376\377\001\000\000\000\247\376\003\000\000\002\376\377\001"
"\000\000\000\250\376\003\000\000\002\376\377\001\000\000\000\251\376\003\000\000\002\376\377\001\000\000\000\254\376\003\000\000\002\376\377\001\000\000\000\256\376\003\000\000\002\376\377\001\000\000\000\257\376\003\000\000\002\376\377\001\000\000\000\260\376\003\000\000\002\376\377\001\000\000\000\261\376\003\000\000"
"\002\376\377\001\000\000\000\264\376\003\000\000\002\376\377\001\000\000\000\266\376\003\000\000\002\376\377\001\000\000\000\270\376\003\000\000\002\376\377\001\000\000\000\327\376\003\000\000\002\376\377\001\000\000\000\367\376\377\016");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\011$+<=>^`|~");
lf[96]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\241\376\003\000\000\002\376\377\001\000\000\000\253\376\003\000\000\002\376\377\001\000\000\000\255\376\003\000\000\002\376\377\001\000\000\000\267\376\003\000\000\002\376\377\001\000\000\000\273\376\003\000\000\002\376\377\001\000\000\000\277\376\377\016");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\027!\042#%&\047()\052,-./:;\077@[\134]_{}");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\0260123456789abcdefABCDEF");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\0120123456789");
lf[100]=C_h_intern(&lf[100],17,"register-feature!");
lf[101]=C_h_intern(&lf[101],7,"srfi-14");
C_register_lf2(lf,102,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1252,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:15: register-feature! */
t3=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[101]);}

/* k1729 in lp in k1682 in char-set-count in k1251 */
static void C_ccall f_1731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_make_character(C_unfix(t2));
/* srfi-14.scm:229: pred */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[4];
f_1707(2,t2,C_SCHEME_FALSE);}}

/* %set-char-set in k1251 */
static void C_fcall f_1739(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1739,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1743,a[2]=t2,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:237: %char-set:s/check */
f_1335(t7,t4,t3);}

/* k3354 in k3351 in k3345 in k3343 in k3341 in char-set-diff+intersection in k1251 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:619: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3351 in k3345 in k3343 in k3341 in char-set-diff+intersection in k1251 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3355,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:619: make-char-set */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* f_2369 in lp in k2346 in char-set->list in k1251 */
static void C_ccall f_2369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2369,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k1726 */
static void C_ccall f_1728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k1956 in lp in k1942 in char-set-for-each in k1251 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:297: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1948(t3,((C_word*)t0)[4],t2);}

/* f_3194 in %char-set-diff+intersection! in k1251 */
static void C_ccall f_3194(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3194,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3249,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:602: %char-set:s/check */
f_1335(t4,t2,((C_word*)t0)[4]);}

/* %char-set-diff+intersection! in k1251 */
static void C_fcall f_3191(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3191,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3194,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word)li152),tmp=(C_word)a,a+=6,tmp);
t7=C_i_check_list_2(t4,lf[22]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3256,a[2]=t9,a[3]=t6,a[4]=((C_word)li153),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3256(t11,t1,t4);}

/* f_3199 */
static void C_ccall f_3199(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3199,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3209,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3229,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:599: g793 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[3],t2);}}

/* char-set->list in k1251 */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2343,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2347,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:380: %char-set:s/check */
f_1335(t3,t2,lf[44]);}

/* k2340 in list->char-set! in k1251 */
static void C_ccall f_2341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:375: %list->char-set! */
f_2269(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2346 in char-set->list in k1251 */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2347,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2352,a[2]=t3,a[3]=t1,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2352(t5,((C_word*)t0)[2],C_fix(255),C_SCHEME_END_OF_LIST);}

/* k3183 in char-set-xor in k1251 */
static void C_ccall f_3184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* f_1969 */
static void C_ccall f_1969(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1969,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k1705 in lp in k1682 in char-set-count in k1251 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:228: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1688(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[2];
/* srfi-14.scm:228: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1688(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}}

/* k3283 in k3281 in k3279 in char-set-diff+intersection! in k1251 */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:612: %char-set-diff+intersection! */
f_3191(t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],lf[74]);}

/* k3279 in char-set-diff+intersection! in k1251 */
static void C_ccall f_3280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:607: %char-set:s/check */
f_1335(t2,((C_word*)t0)[4],lf[74]);}

/* k3281 in k3279 in char-set-diff+intersection! in k1251 */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3282,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3292,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word)li159),tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:608: %string-iter */
f_2719(t2,t3,((C_word*)t0)[5]);}

/* k3285 in k3283 in k3281 in k3279 in char-set-diff+intersection! in k1251 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:613: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* lp in k2346 in char-set->list in k1251 */
static void C_fcall f_2352(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2352,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2369,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2381,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t5,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:384: g467 */
t8=t6;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[3],t2);}}

/* f_1964 in lp in k1942 in char-set-for-each in k1251 */
static void C_ccall f_1964(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1964,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1969,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1981,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:136: g308 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* char-set-adjoin in k1251 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1821r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1821r(t0,t1,t2,t3);}}

static void C_ccall f_1821r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1827,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:249: %set-char-set */
f_1739(t1,t4,lf[24],t2,t3);}

/* k2413 in doloop476 in %string->char-set! in k1251 */
static void C_ccall f_2415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2401(t3,((C_word*)t0)[4],t2);}

/* f_1827 in char-set-adjoin in k1251 */
static void C_ccall f_1827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1827,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* k3176 */
static void C_ccall f_3178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(C_fix(1),t1);
/* srfi-14.scm:152: g760 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* k1809 in for-each-loop227 in k1786 in %set-char-set! in k1251 */
static void C_ccall f_1810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1801(t3,((C_word*)t0)[4],t2);}

/* lp in k2458 in k2456 in char-set->string in k1251 */
static void C_fcall f_2464(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2464,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=((C_word*)t0)[2];
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2480,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2492,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:414: g503 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],t2);}}

/* k2436 in string->char-set in k1251 */
static void C_ccall f_2437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:400: %string->char-set! */
f_2389(t2,((C_word*)t0)[3],t1,lf[46]);}

/* k2438 in k2436 in string->char-set in k1251 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:401: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1979 */
static void C_ccall f_1981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k1982 in lp in k1942 in char-set-for-each in k1251 */
static void C_ccall f_1984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_make_character(C_unfix(t2));
/* srfi-14.scm:296: proc */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[4],t3);}
else{
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:297: lp */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1948(t3,((C_word*)t0)[6],t2);}}

/* char-set-delete in k1251 */
static void C_ccall f_1843(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1843r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1843r(t0,t1,t2,t3);}}

static void C_ccall f_1843r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1849,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:253: %set-char-set */
f_1739(t1,t4,lf[26],t2,t3);}

/* string->char-set in k1251 */
static void C_ccall f_2433(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2433r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2433r(t0,t1,t2,t3);}}

static void C_ccall f_2433r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2437,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:399: %default-base */
f_1293(t4,t3,*((C_word*)lf[46]+1));}

/* k1997 in k1995 in char-set-map in k1251 */
static void C_ccall f_1998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2000,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2005,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2005(t6,t2,C_fix(255));}

/* k1995 in char-set-map in k1251 */
static void C_ccall f_1996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,C_fix(256),C_make_character(0));}

/* f_1849 in char-set-delete in k1251 */
static void C_ccall f_1849(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1849,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* lp in k1997 in k1995 in char-set-map in k1251 */
static void C_fcall f_2005(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2005,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2014,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2021,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2041,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-14.scm:305: g324 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[5],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_2409 in doloop476 in %string->char-set! in k1251 */
static void C_ccall f_2409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2409,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* char-set-map in k1251 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1992,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1996,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:301: %char-set:s/check */
f_1335(t4,t3,lf[34]);}

/* k1999 in k1997 in k1995 in char-set-map in k1251 */
static void C_ccall f_2000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:308: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* doloop476 in %string->char-set! in k1251 */
static void C_fcall f_2401(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2401,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2415,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_i_string_ref(((C_word*)t0)[3],t2);
t7=C_fix(C_character_code(t6));
/* srfi-14.scm:396: g479 */
t8=t4;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,((C_word*)t0)[4],t7);}}

/* k1356 in k1346 in lp in %char-set:s/check in k1251 */
static void C_ccall f_1357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:127: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1341(t2,((C_word*)t0)[3],t1);}

/* make-char-set in k1251 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1266,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record2(&a,2,lf[2],t2));}

/* k2013 in lp in k1997 in k1995 in char-set-map in k1251 */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:307: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2005(t3,((C_word*)t0)[4],t2);}

/* f_2026 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2026,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k1346 in lp in %char-set:s/check in k1251 */
static void C_ccall f_1348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1348,2,t0,t1);}
if(C_truep(t1)){
/* srfi-14.scm:126: char-set:s */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1357,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:127: ##sys#error */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],lf[12],((C_word*)t0)[3]);}}

/* lp in %char-set:s/check in k1251 */
static void C_fcall f_1341(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1341,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1348,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:126: char-set? */
t4=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1251 */
static void C_ccall f_1252(C_word c,C_word t0,C_word t1){
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
C_word ab[192],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1252,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! %latin1->char ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1254,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[1]+1 /* (set! make-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1266,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[3]+1 /* (set! char-set:s ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1272,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[4]+1 /* (set! char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1278,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[5] /* (set! %default-base ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1293,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[11] /* (set! %char-set:s/check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1335,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[13]+1 /* (set! char-set-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1367,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[14]+1 /* (set! char-set= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1379,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[15]+1 /* (set! char-set<= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1425,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[16]+1 /* (set! char-set-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1519,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[18]+1 /* (set! char-set-contains? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1608,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[19]+1 /* (set! char-set-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1641,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[20]+1 /* (set! char-set-count ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1679,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate(&lf[21] /* (set! %set-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1739,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate(&lf[23] /* (set! %set-char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1783,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[24]+1 /* (set! char-set-adjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[25]+1 /* (set! char-set-adjoin! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1832,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[26]+1 /* (set! char-set-delete ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1843,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[27]+1 /* (set! char-set-delete! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1854,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[28]+1 /* (set! char-set-cursor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1865,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[30]+1 /* (set! end-of-char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1871,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[31]+1 /* (set! char-set-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1877,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[32]+1 /* (set! char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1883,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate(&lf[29] /* (set! %char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1892,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[33]+1 /* (set! char-set-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1939,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[34]+1 /* (set! char-set-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1992,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[35]+1 /* (set! char-set-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2061,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[36]+1 /* (set! char-set-every ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2107,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[37]+1 /* (set! char-set-any ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2156,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate(&lf[38] /* (set! %char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2212,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[39]+1 /* (set! char-set-unfold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2249,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[40]+1 /* (set! char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2260,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate(&lf[41] /* (set! %list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2269,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[2]+1 /* (set! char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2310,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[42]+1 /* (set! list->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2323,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[43]+1 /* (set! list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2334,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[44]+1 /* (set! char-set->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2343,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate(&lf[45] /* (set! %string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2389,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[46]+1 /* (set! string->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2433,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[47]+1 /* (set! string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2444,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[48]+1 /* (set! char-set->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2453,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate(&lf[50] /* (set! %ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2505,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[52]+1 /* (set! ucs-range->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[53]+1 /* (set! ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2594,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate(&lf[54] /* (set! %char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2603,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[55]+1 /* (set! char-set-filter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2663,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[56]+1 /* (set! char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2677,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[57]+1 /* (set! ->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2689,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate(&lf[59] /* (set! %string-iter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2719,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate(&lf[60] /* (set! %char-set-algebra ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2754,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[61]+1 /* (set! char-set-complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2818,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[62]+1 /* (set! char-set-complement! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[63]+1 /* (set! char-set-union! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2883,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[64]+1 /* (set! char-set-union ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2910,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[66]+1 /* (set! char-set-intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2954,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[67]+1 /* (set! char-set-intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2978,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[69]+1 /* (set! char-set-difference! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3019,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[70]+1 /* (set! char-set-difference ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3046,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[71]+1 /* (set! char-set-xor! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3086,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[72]+1 /* (set! char-set-xor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3130,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate(&lf[73] /* (set! %char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3191,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[74]+1 /* (set! char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3276,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[75]+1 /* (set! char-set-diff+intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3338,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:630: char-set */
t66=*((C_word*)lf[2]+1);
((C_proc2)(void*)(*((C_word*)t66+1)))(2,t66,t65);}

/* %latin1->char in k1251 */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1254,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_make_character(C_unfix(t2)));}

/* f_2021 in lp in k1997 in k1995 in char-set-map in k1251 */
static void C_ccall f_2021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2021,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2026,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2038,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:136: g328 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* map-loop951 in k3431 in k3427 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in ... */
static void C_fcall f_3454(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3454,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_make_character(C_unfix(t3));
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

/* k3450 in k3431 in k3427 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in ... */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:707: list->char-set */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* %char-set:s/check in k1251 */
static void C_fcall f_1335(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1335,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1341,a[2]=t5,a[3]=t3,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1341(t7,t1,t2);}

/* k1682 in char-set-count in k1251 */
static void C_ccall f_1683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1683,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1688,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word)li27),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1688(t5,((C_word*)t0)[3],C_fix(255),C_fix(0));}

/* lp in k1682 in char-set-count in k1251 */
static void C_fcall f_1688(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1688,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1707,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1711,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1731,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:229: g185 */
t9=t7;
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,((C_word*)t0)[4],t2);}}

/* k3447 in k3435 in k3431 in k3427 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in ... */
static void C_ccall f_3448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:713: ucs-range->char-set! */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(127),C_fix(160),C_SCHEME_TRUE,t1);}

/* k3443 in k3439 in k3435 in k3431 in k3427 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in ... */
static void C_ccall f_3445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[91]+1 /* (set! char-set:ascii ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k3439 in k3435 in k3431 in k3427 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in ... */
static void C_ccall f_3441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3441,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1 /* (set! char-set:iso-control ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3445,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:715: ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(0),C_fix(128));}

/* f_1711 in lp in k1682 in char-set-count in k1251 */
static void C_ccall f_1711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1711,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1716,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1728,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:136: g189 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* f_1716 */
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1716,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k1319 in k1312 in %default-base in k1251 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t1,C_fix(0),t3);}

/* k1312 in %default-base in k1251 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1314,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:114: char-set:s */
t3=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* srfi-14.scm:115: ##sys#error */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[8],((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* f_1613 in char-set-contains? in k1251 */
static void C_ccall f_1613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1613,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1618,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1630,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:136: g161 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* f_1618 */
static void C_ccall f_1618(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1618,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k2458 in k2456 in char-set->string in k1251 */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2459,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2464,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2464(t5,((C_word*)t0)[3],C_fix(255),C_fix(0));}

/* k2456 in char-set->string in k1251 */
static void C_ccall f_2457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2459,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2503,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:411: char-set-size */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* char-set->string in k1251 */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2453,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2457,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:410: %char-set:s/check */
f_1335(t3,t2,lf[48]);}

/* k2450 in string->char-set! in k1251 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:404: %string->char-set! */
f_2389(((C_word*)t0)[2],((C_word*)t0)[3],t1,lf[47]);}

/* k1635 in char-set-contains? in k1251 */
static void C_ccall f_1636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_fix(C_character_code(t2));
/* srfi-14.scm:213: g157 */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[4],t1,t3);}

/* k1628 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* char-set-adjoin! in k1251 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1832r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1832r(t0,t1,t2,t3);}}

static void C_ccall f_1832r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:251: %set-char-set! */
f_1783(t1,t4,lf[25],t2,t3);}

/* f_1838 in char-set-adjoin! in k1251 */
static void C_ccall f_1838(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1838,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* f_1668 in lp in k1644 in char-set-size in k1251 */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1668,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=t1;
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(C_character_code(t4)));}

/* k2173 in lp in k2159 in char-set-any in k1251 */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:333: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2165(t3,((C_word*)t0)[2],t2);}}

/* k2447 in string->char-set! in k1251 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* lp in k1644 in char-set-size in k1251 */
static void C_fcall f_1650(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1650,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1668,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1677,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:221: g172 */
t8=t6;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[3],t2);}}

/* f_2782 in lp in k2759 */
static void C_ccall f_2782(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2782,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=t1;
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(C_character_code(t4)));}

/* string->char-set! in k1251 */
static void C_ccall f_2444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2444,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2448,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2451,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:404: %char-set:s/check */
f_1335(t5,t3,lf[47]);}

/* f_2189 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2189,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* f_2184 in lp in k2159 in char-set-any in k1251 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2184,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2189,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2201,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:136: g385 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* k3584 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:642: ucs-range->char-set! */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(216),C_fix(223),C_SCHEME_TRUE,t1);}

/* end-of-char-set? in k1251 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1871,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_lessp(t2,C_fix(0)));}

/* char-set-contains? in k1251 */
static void C_ccall f_1608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1608,4,t0,t1,t2,t3);}
t4=C_i_check_char_2(t3,lf[18]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1613,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1636,a[2]=t3,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:213: %char-set:s/check */
f_1335(t6,t2,lf[18]);}

/* for-each-loop227 in k1786 in %set-char-set! in k1251 */
static void C_fcall f_1801(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1801,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1810,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:242: g228 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop610 in %char-set-algebra in k1251 */
static void C_fcall f_2798(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2798,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2807,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:509: g611 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2490 in lp in k2458 in k2456 in char-set->string in k1251 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
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
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:417: lp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2464(t4,((C_word*)t0)[5],t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=C_make_character(C_unfix(t2));
t4=C_i_string_set(((C_word*)t0)[6],((C_word*)t0)[2],t3);
t5=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t6=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:417: lp */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2464(t7,((C_word*)t0)[5],t6,t5);}}

/* char-set-ref in k1251 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1877,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_make_character(C_unfix(t3)));}

/* k2789 in lp in k2759 */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:514: op */
t2=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:643: ucs-range->char-set! */
t4=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,C_fix(192),C_fix(215),C_SCHEME_TRUE,t1);}

/* k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3384,2,t0,t1);}
t2=C_mutate((C_word*)lf[78]+1 /* (set! char-set:upper-case ...) */,t1);
t3=C_mutate((C_word*)lf[79]+1 /* (set! char-set:title-case ...) */,*((C_word*)lf[65]+1));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3388,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:648: char-set-union */
t5=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[78]+1),*((C_word*)lf[77]+1));}

/* k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3391,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:649: char-set-adjoin! */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,C_make_character(170),C_make_character(186));}

/* char-set-cursor-next in k1251 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1883,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t3,lf[32]);
/* srfi-14.scm:279: %char-set-cursor-next */
f_1892(t1,t2,t3,lf[32]);}

/* k1675 in lp in k1644 in char-set-size in k1251 */
static void C_ccall f_1677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],t1);
/* srfi-14.scm:221: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1650(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* lp in k2759 */
static void C_fcall f_2765(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2765,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2774,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2782,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:514: g627 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[5],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2759 */
static void C_ccall f_2760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2760,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2765,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word)li109),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2765(t5,((C_word*)t0)[4],C_fix(255));}

/* list->char-set in k1251 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2323r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2323r(t0,t1,t2,t3);}}

static void C_ccall f_2323r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2327,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:370: %default-base */
f_1293(t4,t3,*((C_word*)lf[42]+1));}

/* char-set-count in k1251 */
static void C_ccall f_1679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1679,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1683,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:225: %char-set:s/check */
f_1335(t4,t3,lf[20]);}

/* k2326 in list->char-set in k1251 */
static void C_ccall f_2327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2329,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:371: %list->char-set! */
f_2269(t2,((C_word*)t0)[3],t1);}

/* k2328 in k2326 in list->char-set in k1251 */
static void C_ccall f_2329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:372: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* char-set-difference! in k1251 */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3019r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3019r(t0,t1,t2,t3);}}

static void C_ccall f_3019r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3023,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3026,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:566: %char-set:s/check */
f_1335(t5,t2,lf[69]);}

/* k2773 in lp in k2759 */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:515: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2765(t3,((C_word*)t0)[4],t2);}

/* k3011 in char-set-intersection in k1251 */
static void C_ccall f_3012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* list->char-set! in k1251 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2334,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2338,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2341,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:375: %char-set:s/check */
f_1335(t5,t3,lf[43]);}

/* k2337 in list->char-set! in k1251 */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_2480 in lp in k2458 in k2456 in char-set->string in k1251 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2480,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* f_3003 */
static void C_ccall f_3003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3003,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* char-set= in k1251 */
static void C_ccall f_1379(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1379r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1379r(t0,t1,t2);}}

static void C_ccall f_1379r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1391,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:162: %char-set:s/check */
f_1335(t7,t4,lf[14]);}}

/* k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3391,2,t0,t1);}
t2=C_mutate((C_word*)lf[80]+1 /* (set! char-set:letter ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:653: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[99]);}

/* k1376 in char-set-copy in k1251 */
static void C_ccall f_1377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k1373 in char-set-copy in k1251 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:155: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3395,2,t0,t1);}
t2=C_mutate((C_word*)lf[81]+1 /* (set! char-set:digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:654: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[98]);}

/* lp in k1529 in k1525 in char-set-hash in k1251 */
static C_word C_fcall f_1580(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(C_fixnum_greater_or_equal_p(t2,t3))){
return(C_fixnum_difference(t1,C_fix(1)));}
else{
t4=C_fixnum_plus(t1,t1);
t6=t4;
t1=t6;
goto loop;}}

/* k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 */
static void C_ccall f_3399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3399,2,t0,t1);}
t2=C_mutate((C_word*)lf[82]+1 /* (set! char-set:hex-digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3403,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:657: char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[80]+1),*((C_word*)lf[81]+1));}

/* k1644 in char-set-size in k1251 */
static void C_ccall f_1645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1645,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1650,a[2]=t3,a[3]=t1,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1650(t5,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* char-set-size in k1251 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1641,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1645,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:218: %char-set:s/check */
f_1335(t3,t2,lf[19]);}

/* lp in %string-iter in k1251 */
static void C_fcall f_2728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2728,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2737,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_string_ref(((C_word*)t0)[3],t2);
t6=C_fix(C_character_code(t5));
/* srfi-14.scm:500: p */
t7=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t4,t2,t6);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_2757 in %char-set-algebra in k1251 */
static void C_ccall f_2757(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2757,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:511: %char-set:s/check */
f_1335(t3,t2,((C_word*)t0)[4]);}

/* %char-set-algebra in k1251 */
static void C_fcall f_2754(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2754,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2757,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp);
t7=C_i_check_list_2(t3,lf[22]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2798,a[2]=t9,a[3]=t6,a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2798(t11,t1,t3);}

/* f_3035 */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3035,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* k2110 in char-set-every in k1251 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2111,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2116,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2116(t5,((C_word*)t0)[3],C_fix(255));}

/* char-set in k1251 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2310r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2310r(t0,t1,t2);}}

static void C_ccall f_2310r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2314,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,C_fix(256),C_make_character(0));}

/* k2313 in char-set in k1251 */
static void C_ccall f_2314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:366: %list->char-set! */
f_2269(t2,((C_word*)t0)[3],t1);}

/* char-set-copy in k1251 */
static void C_ccall f_1367(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1367,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1374,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1377,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:155: %char-set:s/check */
f_1335(t4,t2,lf[13]);}

/* lp in k2110 in char-set-every in k1251 */
static void C_fcall f_2116(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2116,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2127,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2139,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:324: g365 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],t2);}}

/* k2315 in k2313 in char-set in k1251 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:367: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2736 in lp in %string-iter in k1251 */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:501: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2728(t3,((C_word*)t0)[4],t2);}

/* k3025 in char-set-difference! in k1251 */
static void C_ccall f_3026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3028,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:566: %char-set-algebra */
f_2754(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[69]);}

/* f_3028 in k3025 in char-set-difference! in k1251 */
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3028,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:151: g721 */
t7=t6;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t2,t3);}}

/* k3022 in char-set-difference! in k1251 */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* char-set-filter in k1251 */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2663r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2663r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2663r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2667,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:459: %default-base */
f_1293(t5,t4,*((C_word*)lf[55]+1));}

/* char-set-delete! in k1251 */
static void C_ccall f_1854(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1854r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1854r(t0,t1,t2,t3);}}

static void C_ccall f_1854r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1860,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:255: %set-char-set! */
f_1783(t1,t4,lf[27],t2,t3);}

/* f_2127 in lp in k2110 in char-set-every in k1251 */
static void C_ccall f_2127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2127,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k2653 in lp in %char-set-filter! in k1251 */
static void C_ccall f_2655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_make_character(C_unfix(t2));
/* srfi-14.scm:454: pred */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[4];
f_2627(2,t2,C_SCHEME_FALSE);}}

/* f_1860 in char-set-delete! in k1251 */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1860,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* k2668 in k2666 in char-set-filter in k1251 */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:464: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* %string-iter in k1251 */
static void C_fcall f_2719(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2719,NULL,3,t1,t2,t3);}
t4=C_i_string_length(t3);
t5=C_fixnum_difference(t4,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2728,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2728(t9,t1,t5);}

/* k2666 in char-set-filter in k1251 */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2669,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2675,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:461: %char-set:s/check */
f_1335(t3,((C_word*)t0)[4],lf[56]);}

/* char-set-cursor in k1251 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1865,3,t0,t1,t2);}
/* srfi-14.scm:269: %char-set-cursor-next */
f_1892(t1,t2,C_fix(256),lf[28]);}

/* k2680 in char-set-filter! in k1251 */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* char-set-every in k1251 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2107,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2111,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:321: %char-set:s/check */
f_1335(t4,t3,lf[36]);}

/* char-set-filter! in k1251 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2677,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2681,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2684,a[2]=t5,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:468: %char-set:s/check */
f_1335(t6,t3,lf[56]);}

/* k2856 in char-set-complement! in k1251 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2862,a[2]=t1,a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:529: %string-iter */
f_2719(t2,t3,t1);}

/* k2674 in k2666 in char-set-filter in k1251 */
static void C_ccall f_2675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:460: %char-set-filter! */
f_2603(((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* char-set-complement! in k1251 */
static void C_ccall f_2853(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2853,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2857,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:528: %char-set:s/check */
f_1335(t3,t2,lf[62]);}

/* k2683 in char-set-filter! in k1251 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:469: %char-set:s/check */
f_1335(t2,((C_word*)t0)[4],lf[56]);}

/* f_2866 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2866,5,t0,t1,t2,t3,t4);}
t5=C_make_character(C_unfix(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_string_set(t2,t3,t5));}

/* f_2864 */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2864,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2866,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
t6=C_fixnum_difference(C_fix(1),t4);
/* srfi-14.scm:148: g665 */
t7=t5;
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,t3,t6);}

/* k2686 in k2683 in char-set-filter! in k1251 */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:467: %char-set-filter! */
f_2603(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_2862 in k2856 in char-set-complement! in k1251 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2862,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2864,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:529: g660 */
t5=t4;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t2,t3);}

/* ->char-set in k1251 */
static void C_ccall f_2689(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2689,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2696,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:477: char-set? */
t4=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2858 in k2856 in char-set-complement! in k1251 */
static void C_ccall f_2860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_3230 in k3227 */
static void C_ccall f_3230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3230,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* k2694 in ->char-set in k1251 */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
/* srfi-14.scm:478: string->char-set */
t2=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep(C_charp(((C_word*)t0)[2]))){
/* srfi-14.scm:479: char-set */
t2=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-14.scm:480: ##sys#error */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[57],lf[58],((C_word*)t0)[2]);}}}}

/* k3248 */
static void C_ccall f_3249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:597: %string-iter */
f_2719(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2886 in char-set-union! in k1251 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* char-set-union! in k1251 */
static void C_ccall f_2883(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2883r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2883r(t0,t1,t2,t3);}}

static void C_ccall f_2883r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2887,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2890,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:536: %char-set:s/check */
f_1335(t5,t2,lf[63]);}

/* k1525 in char-set-hash in k1251 */
static void C_fcall f_1526(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1526,NULL,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)((C_word*)t0)[2])[1],lf[16]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:200: %char-set:s/check */
f_1335(t3,((C_word*)t0)[4],lf[16]);}

/* f_3237 in k3234 in k3227 */
static void C_ccall f_3237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3237,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* k3234 in k3227 */
static void C_ccall f_3236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3236,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:601: g805 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f_2892 in k2889 in char-set-union! in k1251 */
static void C_ccall f_2892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2892,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2899,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:150: g677 */
t7=t6;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t2,t3);}}

/* f_2899 */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2899,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* k2889 in char-set-union! in k1251 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2892,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:536: %char-set-algebra */
f_2754(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[63]);}

/* k3264 in for-each-loop777 in %char-set-diff+intersection! in k1251 */
static void C_ccall f_3265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3256(t3,((C_word*)t0)[4],t2);}

/* ucs-range->char-set! in k1251 */
static void C_ccall f_2594(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2594,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2598,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2601,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:443: %char-set:s/check */
f_1335(t7,t5,lf[53]);}

/* k2597 in ucs-range->char-set! in k1251 */
static void C_ccall f_2598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_1502 in k1498 in lp2 in k1451 in lp in k1440 in char-set<= in k1251 */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1502,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=t1;
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(C_character_code(t4)));}

/* for-each-loop777 in %char-set-diff+intersection! in k1251 */
static void C_fcall f_3256(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3256,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3265,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:595: g778 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1498 in lp2 in k1451 in lp in k1440 in char-set<= in k1251 */
static void C_ccall f_1500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1511,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:180: g125 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* ucs-range->char-set in k1251 */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2567r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2567r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2567r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2575,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:437: %default-base */
f_1293(t9,t8,*((C_word*)lf[52]+1));}

/* lp in k1529 in k1525 in char-set-hash in k1251 */
static void C_fcall f_1537(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1537,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-14.scm:205: modulo */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1557,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1569,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* srfi-14.scm:207: g147 */
t8=t6;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[5],t2);}}

/* k1529 in k1525 in char-set-hash in k1251 */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1580,a[2]=((C_word*)t0)[2],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t3=f_1580(t2,C_fix(65536));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=t1,a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1537(t7,((C_word*)t0)[3],C_fix(255),C_fix(0));}

/* k2576 in k2574 in ucs-range->char-set in k1251 */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:439: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2574 in ucs-range->char-set in k1251 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2577,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:438: %ucs-range->char-set! */
f_2505(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,lf[52]);}

/* k1567 in lp in k1529 in k1525 in char-set-hash in k1251 */
static void C_ccall f_1569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
/* srfi-14.scm:206: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1537(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}
else{
t2=C_fixnum_times(C_fix(37),((C_word*)t0)[2]);
t3=C_fixnum_plus(t2,((C_word*)t0)[6]);
t4=C_fixnum_and(((C_word*)t0)[7],t3);
/* srfi-14.scm:206: lp */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1537(t5,((C_word*)t0)[4],((C_word*)t0)[5],t4);}}

/* k2547 in %ucs-range->char-set! in k1251 */
static void C_fcall f_2549(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-14.scm:429: ##sys#error */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[51],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
f_2513(2,t2,C_SCHEME_UNDEFINED);}}

/* char-set-hash in k1251 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1519r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1519r(t0,t1,t2,t3);}}

static void C_ccall f_1519r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(4194304):C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1526,a[2]=t7,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(((C_word*)t7)[1],C_fix(0));
if(C_truep(t9)){
t10=C_set_block_item(t7,0,C_fix(4194304));
t11=t8;
f_1526(t11,t10);}
else{
t10=t8;
f_1526(t10,C_SCHEME_UNDEFINED);}}

/* k1509 in k1498 in lp2 in k1451 in lp in k1440 in char-set<= in k1251 */
static void C_ccall f_1511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[2],t1))){
t2=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:181: lp2 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1467(t3,((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* %set-char-set! in k1251 */
static void C_fcall f_1783(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1783,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1787,a[2]=t2,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:243: %char-set:s/check */
f_1335(t6,t4,t3);}

/* k1780 in %set-char-set in k1251 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k3484 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 in ... */
static void C_ccall f_3486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:696: list->char-set */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop923 in k3423 in k3419 in k3416 in k3414 in k3410 in k3407 in k3405 in k3401 in k3397 in k3393 in k3389 in k3387 in k3382 in k3380 in k3376 in k3374 in k3372 in k3370 in k3366 in k3362 in k1251 in ... */
static void C_fcall f_3488(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3488,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_make_character(C_unfix(t3));
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

/* k2600 in ucs-range->char-set! in k1251 */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:442: %ucs-range->char-set! */
f_2505(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,lf[52]);}

/* %char-set-filter! in k1251 */
static void C_fcall f_2603(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2603,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2609,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t3,a[6]=((C_word)li101),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2609(t8,t1,C_fix(255));}

/* f_1788 in k1786 in %set-char-set! in k1251 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1788,3,t0,t1,t2);}
t3=C_fix(C_character_code(t2));
/* srfi-14.scm:244: set */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[3],t3);}

/* k1786 in %set-char-set! in k1251 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1788,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[22]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1799,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1801,a[2]=t7,a[3]=t2,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1801(t9,t5,t3);}

/* k2036 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* lp in %char-set-filter! in k1251 */
static void C_fcall f_2609(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2609,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2618,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2627,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2635,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2655,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:454: g563 */
t8=t6;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[5],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_1491 in lp2 in k1451 in lp in k1440 in char-set<= in k1251 */
static void C_ccall f_1491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1491,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=t1;
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(C_character_code(t4)));}

/* k2039 in lp in k1997 in k1995 in char-set-map in k1251 */
static void C_ccall f_2041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2041,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2042,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2054,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_make_character(C_unfix(t4));
/* srfi-14.scm:306: proc */
t6=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t3,t5);}
else{
t2=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm:307: lp */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2005(t3,((C_word*)t0)[7],t2);}}

/* f_2042 in k2039 in lp in k1997 in k1995 in char-set-map in k1251 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2042,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* k3092 in char-set-xor! in k1251 */
static void C_ccall f_3093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3093,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3095,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:581: %char-set-algebra */
f_2754(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[71]);}

/* f_3095 in k3092 in char-set-xor! in k1251 */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3095,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3102,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3116,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3125,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:152: g749 */
t9=t7;
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t2,t3);}}

/* k3089 in char-set-xor! in k1251 */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_1557 in lp in k1529 in k1525 in char-set-hash in k1251 */
static void C_ccall f_1557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1557,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* k2617 in lp in %char-set-filter! in k1251 */
static void C_ccall f_2618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:456: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2609(t3,((C_word*)t0)[4],t2);}

/* k2053 in k2039 in lp in k1997 in k1995 in char-set-map in k1251 */
static void C_ccall f_2054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fix(C_character_code(t1));
/* srfi-14.scm:306: g332 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* f_2635 in lp in %char-set-filter! in k1251 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2635,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2640,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2652,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:136: g567 */
t6=t4;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* char-set-xor! in k1251 */
static void C_ccall f_3086(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3086r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3086r(t0,t1,t2,t3);}}

static void C_ccall f_3086r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3090,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3093,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:581: %char-set:s/check */
f_1335(t5,t2,lf[71]);}

/* k3080 in char-set-difference in k1251 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* f_2628 in k2625 in lp in %char-set-filter! in k1251 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2628,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* k2625 in lp in %char-set-filter! in k1251 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2627,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:455: g571 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm:456: lp */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2609(t3,((C_word*)t0)[6],t2);}}

/* char-set-fold in k1251 */
static void C_ccall f_2061(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2061,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2065,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:312: %char-set:s/check */
f_1335(t5,t4,lf[35]);}

/* k2064 in char-set-fold in k1251 */
static void C_ccall f_2065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2065,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2070,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2070(t5,((C_word*)t0)[3],C_fix(255),((C_word*)t0)[4]);}

/* f_2640 */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2640,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=C_fix(C_character_code(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t5,C_fix(0)));}

/* for-each-loop202 in k1742 in %set-char-set in k1251 */
static void C_fcall f_1760(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1760,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1769,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:236: g203 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2650 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* k1753 in k1742 in %set-char-set in k1251 */
static void C_ccall f_1755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:240: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* char-set-any in k1251 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2156,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2160,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:329: %char-set:s/check */
f_1335(t4,t3,lf[37]);}

/* k2159 in char-set-any in k1251 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2160,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2165,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2165(t5,((C_word*)t0)[3],C_fix(255));}

/* k1768 in for-each-loop202 in k1742 in %set-char-set in k1251 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1760(t3,((C_word*)t0)[4],t2);}

/* lp in k2159 in char-set-any in k1251 */
static void C_fcall f_2165(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2165,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2174,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2184,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2204,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:332: g381 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* char-set-intersection in k1251 */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2978r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2978r(t0,t1,t2);}}

static void C_ccall f_2978r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2987,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3012,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* srfi-14.scm:557: %char-set:s/check */
f_1335(t4,t6,lf[67]);}
else{
/* srfi-14.scm:560: char-set-copy */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[68]+1));}}

/* f_2970 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2970,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* k2137 in lp in k2110 in char-set-every in k1251 */
static void C_ccall f_2139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t1;
if(C_truep(t3)){
t4=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:325: lp */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2116(t5,((C_word*)t0)[4],t4);}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[2];
t4=C_make_character(C_unfix(t3));
/* srfi-14.scm:324: pred */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t2,t4);}}

/* %char-set-cursor-next in k1251 */
static void C_fcall f_1892(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1892,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1896,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:282: %char-set:s/check */
f_1335(t5,t2,t4);}

/* k2988 in k2986 in char-set-intersection in k1251 */
static void C_ccall f_2989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:559: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2986 in char-set-intersection in k1251 */
static void C_ccall f_2987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2989,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2996,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:558: %char-set-algebra */
f_2754(t2,t1,t4,t5,lf[67]);}

/* k1895 in %char-set-cursor-next in k1251 */
static void C_ccall f_1896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1896,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1901,a[2]=t3,a[3]=t1,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1901(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2140 in k2137 in lp in k2110 in char-set-every in k1251 */
static void C_ccall f_2142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:325: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2116(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_3169 */
static void C_ccall f_3169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3169,4,t0,t1,t2,t3);}
t4=C_i_string_ref(t2,t3);
t5=t1;
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(C_character_code(t4)));}

/* k2957 in char-set-intersection! in k1251 */
static void C_ccall f_2958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* char-set-intersection! in k1251 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2954r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2954r(t0,t1,t2,t3);}}

static void C_ccall f_2954r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2958,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2961,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:551: %char-set:s/check */
f_1335(t5,t2,lf[66]);}

/* f_3155 */
static void C_ccall f_3155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3155,5,t0,t1,t2,t3,t4);}
t5=C_make_character(C_unfix(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_string_set(t2,t3,t5));}

/* k2960 in char-set-intersection! in k1251 */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2961,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2963,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:551: %char-set-algebra */
f_2754(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[66]);}

/* f_2963 in k2960 in char-set-intersection! in k1251 */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2963,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2970,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:149: g699 */
t7=t6;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t2,t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1416 in lp in k1390 in char-set= in k1251 */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_i_string_equal_p(((C_word*)t0)[2],t1))){
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* srfi-14.scm:166: lp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1396(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_3148 in k3138 in char-set-xor in k1251 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3148,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3155,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3169,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3178,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:152: g765 */
t9=t7;
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t2,t3);}}

/* k3140 in k3138 in char-set-xor in k1251 */
static void C_ccall f_3141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:589: make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3138 in char-set-xor in k1251 */
static void C_ccall f_3139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3141,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3148,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:588: %char-set-algebra */
f_2754(t2,t1,t4,t5,lf[72]);}

/* char-set-xor in k1251 */
static void C_ccall f_3130(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_3130r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3130r(t0,t1,t2);}}

static void C_ccall f_3130r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3139,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3184,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* srfi-14.scm:587: %char-set:s/check */
f_1335(t4,t6,lf[72]);}
else{
/* srfi-14.scm:590: char-set-copy */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[65]+1));}}

/* char-set<= in k1251 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1425r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1425r(t0,t1,t2);}}

static void C_ccall f_1425r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1441,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:173: %char-set:s/check */
f_1335(t7,t4,lf[15]);}}

/* k1451 in lp in k1440 in char-set<= in k1251 */
static void C_ccall f_1452(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1452,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_eqp(((C_word*)t0)[3],t1);
if(C_truep(t4)){
/* srfi-14.scm:177: lp */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1443(t5,((C_word*)t0)[5],t1,t3);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1467,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=((C_word)li12),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_1467(t8,((C_word*)t0)[5],C_fix(255));}}

/* f_2831 in k2823 in k2821 in char-set-complement in k1251 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2831,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2833,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:524: g644 */
t5=t4;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t2,t3);}

/* f_2833 */
static void C_ccall f_2833(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2833,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2835,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp);
t6=C_fixnum_difference(C_fix(1),t4);
/* srfi-14.scm:148: g649 */
t7=t5;
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,t3,t6);}

/* f_2835 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2835,5,t0,t1,t2,t3,t4);}
t5=C_make_character(C_unfix(t4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_string_set(t2,t3,t5));}

/* k1440 in char-set<= in k1251 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1441,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1443,a[2]=t3,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1443(t5,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* lp in k1440 in char-set<= in k1251 */
static void C_fcall f_1443(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1443,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t3);
t5=C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1452,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t3);
/* srfi-14.scm:175: %char-set:s/check */
f_1335(t6,t7,lf[15]);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[345] = {
{"f_2513:srfi_2d14_2escm",(void*)f_2513},
{"f_1467:srfi_2d14_2escm",(void*)f_1467},
{"f_1391:srfi_2d14_2escm",(void*)f_1391},
{"f_1396:srfi_2d14_2escm",(void*)f_1396},
{"f_2910:srfi_2d14_2escm",(void*)f_2910},
{"f_2919:srfi_2d14_2escm",(void*)f_2919},
{"f_3209:srfi_2d14_2escm",(void*)f_3209},
{"f_2921:srfi_2d14_2escm",(void*)f_2921},
{"f_2928:srfi_2d14_2escm",(void*)f_2928},
{"f_2274:srfi_2d14_2escm",(void*)f_2274},
{"f_3326:srfi_2d14_2escm",(void*)f_3326},
{"f_3329:srfi_2d14_2escm",(void*)f_3329},
{"f_2290:srfi_2d14_2escm",(void*)f_2290},
{"f_1272:srfi_2d14_2escm",(void*)f_1272},
{"f_1278:srfi_2d14_2escm",(void*)f_1278},
{"f_3229:srfi_2d14_2escm",(void*)f_3229},
{"f_3226:srfi_2d14_2escm",(void*)f_3226},
{"f_2521:srfi_2d14_2escm",(void*)f_2521},
{"f_2529:srfi_2d14_2escm",(void*)f_2529},
{"f_2299:srfi_2d14_2escm",(void*)f_2299},
{"f_3309:srfi_2d14_2escm",(void*)f_3309},
{"f_3214:srfi_2d14_2escm",(void*)f_3214},
{"f_2535:srfi_2d14_2escm",(void*)f_2535},
{"f_1293:srfi_2d14_2escm",(void*)f_1293},
{"f_3338:srfi_2d14_2escm",(void*)f_3338},
{"f_3330:srfi_2d14_2escm",(void*)f_3330},
{"f_2503:srfi_2d14_2escm",(void*)f_2503},
{"f_2505:srfi_2d14_2escm",(void*)f_2505},
{"f_3548:srfi_2d14_2escm",(void*)f_3548},
{"f_1799:srfi_2d14_2escm",(void*)f_1799},
{"f_3368:srfi_2d14_2escm",(void*)f_3368},
{"f_3364:srfi_2d14_2escm",(void*)f_3364},
{"f_3360:srfi_2d14_2escm",(void*)f_3360},
{"f_3314:srfi_2d14_2escm",(void*)f_3314},
{"f_3415:srfi_2d14_2escm",(void*)f_3415},
{"f_3412:srfi_2d14_2escm",(void*)f_3412},
{"f_3418:srfi_2d14_2escm",(void*)f_3418},
{"f_3403:srfi_2d14_2escm",(void*)f_3403},
{"f_3409:srfi_2d14_2escm",(void*)f_3409},
{"f_2272:srfi_2d14_2escm",(void*)f_2272},
{"f_3406:srfi_2d14_2escm",(void*)f_3406},
{"f_2807:srfi_2d14_2escm",(void*)f_2807},
{"f_3518:srfi_2d14_2escm",(void*)f_3518},
{"f_3433:srfi_2d14_2escm",(void*)f_3433},
{"f_3437:srfi_2d14_2escm",(void*)f_3437},
{"f_2201:srfi_2d14_2escm",(void*)f_2201},
{"f_2204:srfi_2d14_2escm",(void*)f_2204},
{"f_2818:srfi_2d14_2escm",(void*)f_2818},
{"f_2996:srfi_2d14_2escm",(void*)f_2996},
{"f_3425:srfi_2d14_2escm",(void*)f_3425},
{"f_3429:srfi_2d14_2escm",(void*)f_3429},
{"f_3055:srfi_2d14_2escm",(void*)f_3055},
{"f_3057:srfi_2d14_2escm",(void*)f_3057},
{"f_2212:srfi_2d14_2escm",(void*)f_2212},
{"f_3421:srfi_2d14_2escm",(void*)f_3421},
{"f_3046:srfi_2d14_2escm",(void*)f_3046},
{"f_2822:srfi_2d14_2escm",(void*)f_2822},
{"f_2826:srfi_2d14_2escm",(void*)f_2826},
{"f_2824:srfi_2d14_2escm",(void*)f_2824},
{"f_2218:srfi_2d14_2escm",(void*)f_2218},
{"f_2226:srfi_2d14_2escm",(void*)f_2226},
{"f_2225:srfi_2d14_2escm",(void*)f_2225},
{"f_3062:srfi_2d14_2escm",(void*)f_3062},
{"f_3069:srfi_2d14_2escm",(void*)f_3069},
{"f_1943:srfi_2d14_2escm",(void*)f_1943},
{"f_1948:srfi_2d14_2escm",(void*)f_1948},
{"f_1934:srfi_2d14_2escm",(void*)f_1934},
{"f_2935:srfi_2d14_2escm",(void*)f_2935},
{"f_1939:srfi_2d14_2escm",(void*)f_1939},
{"f_2947:srfi_2d14_2escm",(void*)f_2947},
{"f_2244:srfi_2d14_2escm",(void*)f_2244},
{"f_2238:srfi_2d14_2escm",(void*)f_2238},
{"f_2255:srfi_2d14_2escm",(void*)f_2255},
{"f_2253:srfi_2d14_2escm",(void*)f_2253},
{"f_2249:srfi_2d14_2escm",(void*)f_2249},
{"f_3125:srfi_2d14_2escm",(void*)f_3125},
{"f_2260:srfi_2d14_2escm",(void*)f_2260},
{"f_2264:srfi_2d14_2escm",(void*)f_2264},
{"f_3116:srfi_2d14_2escm",(void*)f_3116},
{"f_2269:srfi_2d14_2escm",(void*)f_2269},
{"f_2267:srfi_2d14_2escm",(void*)f_2267},
{"f_3102:srfi_2d14_2escm",(void*)f_3102},
{"f_3276:srfi_2d14_2escm",(void*)f_3276},
{"f_2232:srfi_2d14_2escm",(void*)f_2232},
{"f_1922:srfi_2d14_2escm",(void*)f_1922},
{"f_2070:srfi_2d14_2escm",(void*)f_2070},
{"f_3346:srfi_2d14_2escm",(void*)f_3346},
{"f_3344:srfi_2d14_2escm",(void*)f_3344},
{"f_3342:srfi_2d14_2escm",(void*)f_3342},
{"f_2087:srfi_2d14_2escm",(void*)f_2087},
{"f_2086:srfi_2d14_2escm",(void*)f_2086},
{"f_3292:srfi_2d14_2escm",(void*)f_3292},
{"f_1913:srfi_2d14_2escm",(void*)f_1913},
{"f_1917:srfi_2d14_2escm",(void*)f_1917},
{"f_3299:srfi_2d14_2escm",(void*)f_3299},
{"f_2389:srfi_2d14_2escm",(void*)f_2389},
{"f_3375:srfi_2d14_2escm",(void*)f_3375},
{"f_3378:srfi_2d14_2escm",(void*)f_3378},
{"f_3371:srfi_2d14_2escm",(void*)f_3371},
{"f_3373:srfi_2d14_2escm",(void*)f_3373},
{"f_2381:srfi_2d14_2escm",(void*)f_2381},
{"f_1743:srfi_2d14_2escm",(void*)f_1743},
{"f_1744:srfi_2d14_2escm",(void*)f_1744},
{"f_2099:srfi_2d14_2escm",(void*)f_2099},
{"f_1901:srfi_2d14_2escm",(void*)f_1901},
{"toplevel:srfi_2d14_2escm",(void*)C_srfi_2d14_toplevel},
{"f_1731:srfi_2d14_2escm",(void*)f_1731},
{"f_1739:srfi_2d14_2escm",(void*)f_1739},
{"f_3355:srfi_2d14_2escm",(void*)f_3355},
{"f_3352:srfi_2d14_2escm",(void*)f_3352},
{"f_2369:srfi_2d14_2escm",(void*)f_2369},
{"f_1728:srfi_2d14_2escm",(void*)f_1728},
{"f_1957:srfi_2d14_2escm",(void*)f_1957},
{"f_3194:srfi_2d14_2escm",(void*)f_3194},
{"f_3191:srfi_2d14_2escm",(void*)f_3191},
{"f_3199:srfi_2d14_2escm",(void*)f_3199},
{"f_2343:srfi_2d14_2escm",(void*)f_2343},
{"f_2341:srfi_2d14_2escm",(void*)f_2341},
{"f_2347:srfi_2d14_2escm",(void*)f_2347},
{"f_3184:srfi_2d14_2escm",(void*)f_3184},
{"f_1969:srfi_2d14_2escm",(void*)f_1969},
{"f_1707:srfi_2d14_2escm",(void*)f_1707},
{"f_3284:srfi_2d14_2escm",(void*)f_3284},
{"f_3280:srfi_2d14_2escm",(void*)f_3280},
{"f_3282:srfi_2d14_2escm",(void*)f_3282},
{"f_3287:srfi_2d14_2escm",(void*)f_3287},
{"f_2352:srfi_2d14_2escm",(void*)f_2352},
{"f_1964:srfi_2d14_2escm",(void*)f_1964},
{"f_1821:srfi_2d14_2escm",(void*)f_1821},
{"f_2415:srfi_2d14_2escm",(void*)f_2415},
{"f_1827:srfi_2d14_2escm",(void*)f_1827},
{"f_3178:srfi_2d14_2escm",(void*)f_3178},
{"f_1810:srfi_2d14_2escm",(void*)f_1810},
{"f_2464:srfi_2d14_2escm",(void*)f_2464},
{"f_2437:srfi_2d14_2escm",(void*)f_2437},
{"f_2439:srfi_2d14_2escm",(void*)f_2439},
{"f_1981:srfi_2d14_2escm",(void*)f_1981},
{"f_1984:srfi_2d14_2escm",(void*)f_1984},
{"f_1843:srfi_2d14_2escm",(void*)f_1843},
{"f_2433:srfi_2d14_2escm",(void*)f_2433},
{"f_1998:srfi_2d14_2escm",(void*)f_1998},
{"f_1996:srfi_2d14_2escm",(void*)f_1996},
{"f_1849:srfi_2d14_2escm",(void*)f_1849},
{"f_2005:srfi_2d14_2escm",(void*)f_2005},
{"f_2409:srfi_2d14_2escm",(void*)f_2409},
{"f_1992:srfi_2d14_2escm",(void*)f_1992},
{"f_2000:srfi_2d14_2escm",(void*)f_2000},
{"f_2401:srfi_2d14_2escm",(void*)f_2401},
{"f_1357:srfi_2d14_2escm",(void*)f_1357},
{"f_1266:srfi_2d14_2escm",(void*)f_1266},
{"f_2014:srfi_2d14_2escm",(void*)f_2014},
{"f_2026:srfi_2d14_2escm",(void*)f_2026},
{"f_1348:srfi_2d14_2escm",(void*)f_1348},
{"f_1341:srfi_2d14_2escm",(void*)f_1341},
{"f_1252:srfi_2d14_2escm",(void*)f_1252},
{"f_1254:srfi_2d14_2escm",(void*)f_1254},
{"f_2021:srfi_2d14_2escm",(void*)f_2021},
{"f_3454:srfi_2d14_2escm",(void*)f_3454},
{"f_3452:srfi_2d14_2escm",(void*)f_3452},
{"f_1335:srfi_2d14_2escm",(void*)f_1335},
{"f_1683:srfi_2d14_2escm",(void*)f_1683},
{"f_1688:srfi_2d14_2escm",(void*)f_1688},
{"f_3448:srfi_2d14_2escm",(void*)f_3448},
{"f_3445:srfi_2d14_2escm",(void*)f_3445},
{"f_3441:srfi_2d14_2escm",(void*)f_3441},
{"f_1711:srfi_2d14_2escm",(void*)f_1711},
{"f_1716:srfi_2d14_2escm",(void*)f_1716},
{"f_1320:srfi_2d14_2escm",(void*)f_1320},
{"f_1314:srfi_2d14_2escm",(void*)f_1314},
{"f_1613:srfi_2d14_2escm",(void*)f_1613},
{"f_1618:srfi_2d14_2escm",(void*)f_1618},
{"f_2459:srfi_2d14_2escm",(void*)f_2459},
{"f_2457:srfi_2d14_2escm",(void*)f_2457},
{"f_2453:srfi_2d14_2escm",(void*)f_2453},
{"f_2451:srfi_2d14_2escm",(void*)f_2451},
{"f_1636:srfi_2d14_2escm",(void*)f_1636},
{"f_1630:srfi_2d14_2escm",(void*)f_1630},
{"f_1832:srfi_2d14_2escm",(void*)f_1832},
{"f_1838:srfi_2d14_2escm",(void*)f_1838},
{"f_1668:srfi_2d14_2escm",(void*)f_1668},
{"f_2174:srfi_2d14_2escm",(void*)f_2174},
{"f_2448:srfi_2d14_2escm",(void*)f_2448},
{"f_1650:srfi_2d14_2escm",(void*)f_1650},
{"f_2782:srfi_2d14_2escm",(void*)f_2782},
{"f_2444:srfi_2d14_2escm",(void*)f_2444},
{"f_2189:srfi_2d14_2escm",(void*)f_2189},
{"f_2184:srfi_2d14_2escm",(void*)f_2184},
{"f_3585:srfi_2d14_2escm",(void*)f_3585},
{"f_1871:srfi_2d14_2escm",(void*)f_1871},
{"f_1608:srfi_2d14_2escm",(void*)f_1608},
{"f_1801:srfi_2d14_2escm",(void*)f_1801},
{"f_2798:srfi_2d14_2escm",(void*)f_2798},
{"f_2492:srfi_2d14_2escm",(void*)f_2492},
{"f_1877:srfi_2d14_2escm",(void*)f_1877},
{"f_2791:srfi_2d14_2escm",(void*)f_2791},
{"f_3381:srfi_2d14_2escm",(void*)f_3381},
{"f_3384:srfi_2d14_2escm",(void*)f_3384},
{"f_3388:srfi_2d14_2escm",(void*)f_3388},
{"f_1883:srfi_2d14_2escm",(void*)f_1883},
{"f_1677:srfi_2d14_2escm",(void*)f_1677},
{"f_2765:srfi_2d14_2escm",(void*)f_2765},
{"f_2760:srfi_2d14_2escm",(void*)f_2760},
{"f_2323:srfi_2d14_2escm",(void*)f_2323},
{"f_1679:srfi_2d14_2escm",(void*)f_1679},
{"f_2327:srfi_2d14_2escm",(void*)f_2327},
{"f_2329:srfi_2d14_2escm",(void*)f_2329},
{"f_3019:srfi_2d14_2escm",(void*)f_3019},
{"f_2774:srfi_2d14_2escm",(void*)f_2774},
{"f_3012:srfi_2d14_2escm",(void*)f_3012},
{"f_2334:srfi_2d14_2escm",(void*)f_2334},
{"f_2338:srfi_2d14_2escm",(void*)f_2338},
{"f_2480:srfi_2d14_2escm",(void*)f_2480},
{"f_3003:srfi_2d14_2escm",(void*)f_3003},
{"f_1379:srfi_2d14_2escm",(void*)f_1379},
{"f_3391:srfi_2d14_2escm",(void*)f_3391},
{"f_1377:srfi_2d14_2escm",(void*)f_1377},
{"f_1374:srfi_2d14_2escm",(void*)f_1374},
{"f_3395:srfi_2d14_2escm",(void*)f_3395},
{"f_1580:srfi_2d14_2escm",(void*)f_1580},
{"f_3399:srfi_2d14_2escm",(void*)f_3399},
{"f_1645:srfi_2d14_2escm",(void*)f_1645},
{"f_1641:srfi_2d14_2escm",(void*)f_1641},
{"f_2728:srfi_2d14_2escm",(void*)f_2728},
{"f_2757:srfi_2d14_2escm",(void*)f_2757},
{"f_2754:srfi_2d14_2escm",(void*)f_2754},
{"f_3035:srfi_2d14_2escm",(void*)f_3035},
{"f_2111:srfi_2d14_2escm",(void*)f_2111},
{"f_2310:srfi_2d14_2escm",(void*)f_2310},
{"f_2314:srfi_2d14_2escm",(void*)f_2314},
{"f_1367:srfi_2d14_2escm",(void*)f_1367},
{"f_2116:srfi_2d14_2escm",(void*)f_2116},
{"f_2316:srfi_2d14_2escm",(void*)f_2316},
{"f_2737:srfi_2d14_2escm",(void*)f_2737},
{"f_3026:srfi_2d14_2escm",(void*)f_3026},
{"f_3028:srfi_2d14_2escm",(void*)f_3028},
{"f_3023:srfi_2d14_2escm",(void*)f_3023},
{"f_2663:srfi_2d14_2escm",(void*)f_2663},
{"f_1854:srfi_2d14_2escm",(void*)f_1854},
{"f_2127:srfi_2d14_2escm",(void*)f_2127},
{"f_2655:srfi_2d14_2escm",(void*)f_2655},
{"f_1860:srfi_2d14_2escm",(void*)f_1860},
{"f_2669:srfi_2d14_2escm",(void*)f_2669},
{"f_2719:srfi_2d14_2escm",(void*)f_2719},
{"f_2667:srfi_2d14_2escm",(void*)f_2667},
{"f_1865:srfi_2d14_2escm",(void*)f_1865},
{"f_2681:srfi_2d14_2escm",(void*)f_2681},
{"f_2107:srfi_2d14_2escm",(void*)f_2107},
{"f_2677:srfi_2d14_2escm",(void*)f_2677},
{"f_2857:srfi_2d14_2escm",(void*)f_2857},
{"f_2675:srfi_2d14_2escm",(void*)f_2675},
{"f_2853:srfi_2d14_2escm",(void*)f_2853},
{"f_2684:srfi_2d14_2escm",(void*)f_2684},
{"f_2866:srfi_2d14_2escm",(void*)f_2866},
{"f_2864:srfi_2d14_2escm",(void*)f_2864},
{"f_2687:srfi_2d14_2escm",(void*)f_2687},
{"f_2862:srfi_2d14_2escm",(void*)f_2862},
{"f_2689:srfi_2d14_2escm",(void*)f_2689},
{"f_2860:srfi_2d14_2escm",(void*)f_2860},
{"f_3230:srfi_2d14_2escm",(void*)f_3230},
{"f_2696:srfi_2d14_2escm",(void*)f_2696},
{"f_3249:srfi_2d14_2escm",(void*)f_3249},
{"f_2887:srfi_2d14_2escm",(void*)f_2887},
{"f_2883:srfi_2d14_2escm",(void*)f_2883},
{"f_1526:srfi_2d14_2escm",(void*)f_1526},
{"f_3237:srfi_2d14_2escm",(void*)f_3237},
{"f_3236:srfi_2d14_2escm",(void*)f_3236},
{"f_2892:srfi_2d14_2escm",(void*)f_2892},
{"f_2899:srfi_2d14_2escm",(void*)f_2899},
{"f_2890:srfi_2d14_2escm",(void*)f_2890},
{"f_3265:srfi_2d14_2escm",(void*)f_3265},
{"f_2594:srfi_2d14_2escm",(void*)f_2594},
{"f_2598:srfi_2d14_2escm",(void*)f_2598},
{"f_1502:srfi_2d14_2escm",(void*)f_1502},
{"f_3256:srfi_2d14_2escm",(void*)f_3256},
{"f_1500:srfi_2d14_2escm",(void*)f_1500},
{"f_2567:srfi_2d14_2escm",(void*)f_2567},
{"f_1537:srfi_2d14_2escm",(void*)f_1537},
{"f_1530:srfi_2d14_2escm",(void*)f_1530},
{"f_2577:srfi_2d14_2escm",(void*)f_2577},
{"f_2575:srfi_2d14_2escm",(void*)f_2575},
{"f_1569:srfi_2d14_2escm",(void*)f_1569},
{"f_2549:srfi_2d14_2escm",(void*)f_2549},
{"f_1519:srfi_2d14_2escm",(void*)f_1519},
{"f_1511:srfi_2d14_2escm",(void*)f_1511},
{"f_1783:srfi_2d14_2escm",(void*)f_1783},
{"f_1781:srfi_2d14_2escm",(void*)f_1781},
{"f_3486:srfi_2d14_2escm",(void*)f_3486},
{"f_3488:srfi_2d14_2escm",(void*)f_3488},
{"f_2601:srfi_2d14_2escm",(void*)f_2601},
{"f_2603:srfi_2d14_2escm",(void*)f_2603},
{"f_1788:srfi_2d14_2escm",(void*)f_1788},
{"f_1787:srfi_2d14_2escm",(void*)f_1787},
{"f_2038:srfi_2d14_2escm",(void*)f_2038},
{"f_2609:srfi_2d14_2escm",(void*)f_2609},
{"f_1491:srfi_2d14_2escm",(void*)f_1491},
{"f_2041:srfi_2d14_2escm",(void*)f_2041},
{"f_2042:srfi_2d14_2escm",(void*)f_2042},
{"f_3093:srfi_2d14_2escm",(void*)f_3093},
{"f_3095:srfi_2d14_2escm",(void*)f_3095},
{"f_3090:srfi_2d14_2escm",(void*)f_3090},
{"f_1557:srfi_2d14_2escm",(void*)f_1557},
{"f_2618:srfi_2d14_2escm",(void*)f_2618},
{"f_2054:srfi_2d14_2escm",(void*)f_2054},
{"f_2635:srfi_2d14_2escm",(void*)f_2635},
{"f_3086:srfi_2d14_2escm",(void*)f_3086},
{"f_3081:srfi_2d14_2escm",(void*)f_3081},
{"f_2628:srfi_2d14_2escm",(void*)f_2628},
{"f_2627:srfi_2d14_2escm",(void*)f_2627},
{"f_2061:srfi_2d14_2escm",(void*)f_2061},
{"f_2065:srfi_2d14_2escm",(void*)f_2065},
{"f_2640:srfi_2d14_2escm",(void*)f_2640},
{"f_1760:srfi_2d14_2escm",(void*)f_1760},
{"f_2652:srfi_2d14_2escm",(void*)f_2652},
{"f_1755:srfi_2d14_2escm",(void*)f_1755},
{"f_2156:srfi_2d14_2escm",(void*)f_2156},
{"f_2160:srfi_2d14_2escm",(void*)f_2160},
{"f_1769:srfi_2d14_2escm",(void*)f_1769},
{"f_2165:srfi_2d14_2escm",(void*)f_2165},
{"f_2978:srfi_2d14_2escm",(void*)f_2978},
{"f_2970:srfi_2d14_2escm",(void*)f_2970},
{"f_2139:srfi_2d14_2escm",(void*)f_2139},
{"f_1892:srfi_2d14_2escm",(void*)f_1892},
{"f_2989:srfi_2d14_2escm",(void*)f_2989},
{"f_2987:srfi_2d14_2escm",(void*)f_2987},
{"f_1896:srfi_2d14_2escm",(void*)f_1896},
{"f_2142:srfi_2d14_2escm",(void*)f_2142},
{"f_3169:srfi_2d14_2escm",(void*)f_3169},
{"f_2958:srfi_2d14_2escm",(void*)f_2958},
{"f_2954:srfi_2d14_2escm",(void*)f_2954},
{"f_3155:srfi_2d14_2escm",(void*)f_3155},
{"f_2961:srfi_2d14_2escm",(void*)f_2961},
{"f_2963:srfi_2d14_2escm",(void*)f_2963},
{"f_1417:srfi_2d14_2escm",(void*)f_1417},
{"f_3148:srfi_2d14_2escm",(void*)f_3148},
{"f_3141:srfi_2d14_2escm",(void*)f_3141},
{"f_3139:srfi_2d14_2escm",(void*)f_3139},
{"f_3130:srfi_2d14_2escm",(void*)f_3130},
{"f_1425:srfi_2d14_2escm",(void*)f_1425},
{"f_1452:srfi_2d14_2escm",(void*)f_1452},
{"f_2831:srfi_2d14_2escm",(void*)f_2831},
{"f_2833:srfi_2d14_2escm",(void*)f_2833},
{"f_2835:srfi_2d14_2escm",(void*)f_2835},
{"f_1441:srfi_2d14_2escm",(void*)f_1441},
{"f_1443:srfi_2d14_2escm",(void*)f_1443},
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
S|  map		4
S|  for-each		5
o|eliminated procedure checks: 214 
o|specializations:
o|  4 (##sys#check-list (or pair list) *)
o|  1 (make-string fixnum)
o|  1 (min fixnum fixnum)
o|  2 (< fixnum fixnum)
o|  1 (string-length string)
o|  14 (zero? fixnum)
o|  1 (<= fixnum fixnum)
o|  4 (make-string fixnum char)
o|  8 (cdr pair)
o|  4 (car pair)
o|Removed `not' forms: 8 
o|inlining procedure: k1296 
o|inlining procedure: k1309 
o|inlining procedure: k1309 
o|inlining procedure: k1296 
o|substituted constant variable: a1330 
o|inlining procedure: "(srfi-14.scm:118) %latin1->char" 
o|inlining procedure: k1344 
o|inlining procedure: k1344 
o|inlining procedure: k1384 
o|inlining procedure: k1384 
o|inlining procedure: k1401 
o|inlining procedure: k1401 
o|inlining procedure: k1430 
o|inlining procedure: k1430 
o|inlining procedure: k1448 
o|inlining procedure: k1448 
o|inlining procedure: k1470 
o|inlining procedure: k1470 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k1540 
o|inlining procedure: k1540 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k1555 
o|inlining procedure: k1555 
o|inlining procedure: k1583 
o|inlining procedure: k1583 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:215) %char->latin1" 
o|inlining procedure: k1653 
o|inlining procedure: k1653 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k1691 
o|inlining procedure: k1691 
o|inlining procedure: k1703 
o|inlining procedure: k1703 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:229) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:238) %char->latin1" 
o|inlining procedure: k1763 
o|inlining procedure: k1763 
o|inlining procedure: "(srfi-14.scm:244) %char->latin1" 
o|inlining procedure: k1804 
o|inlining procedure: k1804 
o|inlining procedure: "(srfi-14.scm:273) %latin1->char" 
o|inlining procedure: k1906 
o|inlining procedure: k1906 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k1951 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:296) %latin1->char" 
o|inlining procedure: k1951 
o|inlining procedure: k2008 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:306) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:306) %latin1->char" 
o|inlining procedure: k2008 
o|substituted constant variable: a2058 
o|inlining procedure: k2073 
o|inlining procedure: k2073 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2085 
o|inlining procedure: k2085 
o|inlining procedure: "(srfi-14.scm:317) %latin1->char" 
o|inlining procedure: k2121 
o|inlining procedure: k2121 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:324) %latin1->char" 
o|inlining procedure: k2168 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:332) %latin1->char" 
o|inlining procedure: k2168 
o|removed unused formal parameters: (proc391) 
o|inlining procedure: k2221 
o|inlining procedure: k2221 
o|inlining procedure: "(srfi-14.scm:342) %char->latin1" 
o|removed unused parameter to known procedure: proc391 "(srfi-14.scm:347) %char-set-unfold!" 
o|removed unused parameter to known procedure: proc391 "(srfi-14.scm:351) %char-set-unfold!" 
o|inlining procedure: "(srfi-14.scm:361) %char->latin1" 
o|inlining procedure: k2293 
o|inlining procedure: k2293 
o|substituted constant variable: a2320 
o|inlining procedure: k2355 
o|inlining procedure: k2355 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2367 
o|inlining procedure: k2367 
o|inlining procedure: "(srfi-14.scm:385) %latin1->char" 
o|inlining procedure: k2404 
o|inlining procedure: k2404 
o|inlining procedure: "(srfi-14.scm:396) %char->latin1" 
o|inlining procedure: k2467 
o|inlining procedure: k2467 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:415) %latin1->char" 
o|inlining procedure: k2524 
o|inlining procedure: k2524 
o|substituted constant variable: a2546 
o|inlining procedure: k2556 
o|inlining procedure: k2556 
o|substituted constant variable: a2562 
o|removed unused formal parameters: (proc556) 
o|inlining procedure: k2612 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:454) %latin1->char" 
o|inlining procedure: k2612 
o|removed unused parameter to known procedure: proc556 "(srfi-14.scm:460) %char-set-filter!" 
o|removed unused parameter to known procedure: proc556 "(srfi-14.scm:467) %char-set-filter!" 
o|inlining procedure: k2692 
o|inlining procedure: k2692 
o|inlining procedure: k2706 
o|inlining procedure: k2706 
o|inlining procedure: k2731 
o|inlining procedure: "(srfi-14.scm:500) %char->latin1" 
o|inlining procedure: k2731 
o|inlining procedure: k2768 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k2768 
o|inlining procedure: k2801 
o|inlining procedure: k2801 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|substituted constant variable: a2851 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|inlining procedure: k2894 
o|inlining procedure: k2894 
o|inlining procedure: k2913 
o|inlining procedure: k2930 
o|inlining procedure: k2930 
o|inlining procedure: k2913 
o|inlining procedure: k2965 
o|inlining procedure: k2965 
o|inlining procedure: k2981 
o|inlining procedure: k2998 
o|inlining procedure: k2998 
o|inlining procedure: k2981 
o|inlining procedure: k3030 
o|inlining procedure: k3030 
o|inlining procedure: k3049 
o|inlining procedure: k3064 
o|inlining procedure: k3064 
o|inlining procedure: k3049 
o|inlining procedure: k3097 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|inlining procedure: k3097 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k3133 
o|inlining procedure: k3150 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|inlining procedure: k3150 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k3133 
o|inlining procedure: k3201 
o|inlining procedure: k3201 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k3259 
o|inlining procedure: k3259 
o|inlining procedure: k3294 
o|inlining procedure: k3294 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|substituted constant variable: a3356 
o|inlining procedure: k3457 
o|inlining procedure: k3457 
o|inlining procedure: k3491 
o|inlining procedure: k3491 
o|inlining procedure: k3521 
o|inlining procedure: k3521 
o|inlining procedure: k3551 
o|inlining procedure: k3551 
o|inlining procedure: "(srfi-14.scm:651) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:650) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:637) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:142) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:141) %latin1->char" 
o|replaced variables: 272 
o|removed binding forms: 135 
o|removed side-effect free assignment to unused variable: %char->latin1 
o|substituted constant variable: n623594 
o|folded constant expression: (integer->char (quote 0)) 
o|substituted constant variable: f_21673754 
o|substituted constant variable: r25573805 
o|inlining procedure: "(srfi-14.scm:707) %latin1->char" 
o|substituted constant variable: g963967 
o|inlining procedure: "(srfi-14.scm:696) %latin1->char" 
o|substituted constant variable: g935939 
o|inlining procedure: "(srfi-14.scm:671) %latin1->char" 
o|substituted constant variable: g907911 
o|inlining procedure: "(srfi-14.scm:661) %latin1->char" 
o|substituted constant variable: g878882 
o|substituted constant variable: n623917 
o|folded constant expression: (integer->char (quote 186)) 
o|substituted constant variable: n623922 
o|folded constant expression: (integer->char (quote 170)) 
o|substituted constant variable: n623927 
o|folded constant expression: (integer->char (quote 181)) 
o|substituted constant variable: n623932 
o|folded constant expression: (integer->char (quote 1)) 
o|substituted constant variable: n623937 
o|folded constant expression: (integer->char (quote 0)) 
o|replaced variables: 121 
o|removed binding forms: 294 
o|inlining procedure: "(srfi-14.scm:114) %string-copy" 
o|inlining procedure: k1332 
o|inlining procedure: "(srfi-14.scm:155) %string-copy" 
o|inlining procedure: "(srfi-14.scm:237) %string-copy" 
o|inlining procedure: k1911 
o|inlining procedure: k1956 
o|inlining procedure: k2013 
o|inlining procedure: k2617 
o|inlining procedure: "(srfi-14.scm:542) %string-copy" 
o|inlining procedure: "(srfi-14.scm:557) %string-copy" 
o|inlining procedure: "(srfi-14.scm:572) %string-copy" 
o|inlining procedure: "(srfi-14.scm:587) %string-copy" 
o|inlining procedure: k3581 
o|inlining procedure: k3587 
o|replaced variables: 9 
o|removed binding forms: 138 
o|removed side-effect free assignment to unused variable: %string-copy 
o|substituted constant variable: a13314066 
o|contracted procedure: k1359 
o|contracted procedure: k1363 
o|contracted procedure: k3578 
o|substituted constant variable: a35804173 
o|substituted constant variable: a35864174 
o|replaced variables: 20 
o|removed binding forms: 18 
o|substituted constant variable: r1360 
o|substituted constant variable: r1364 
o|substituted constant variable: a3577 
o|removed binding forms: 17 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|removed binding forms: 3 
o|removed side-effect free assignment to unused variable: c0 
o|removed side-effect free assignment to unused variable: c1 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|simplifications: ((if . 3) (##core#call . 273)) 
o|  call simplifications:
o|    ##sys#setslot	4
o|    values	2
o|    string?
o|    char?
o|    cdr
o|    fx<	2
o|    fxmin
o|    <=
o|    ##sys#check-string
o|    ##sys#size
o|    cons	5
o|    string-set!	25
o|    ##sys#check-list	5
o|    ##sys#check-char
o|    zero?	11
o|    ##sys#check-exact	4
o|    >=	7
o|    *
o|    +	5
o|    fxand
o|    eq?	15
o|    <	11
o|    fx<=
o|    string-ref	22
o|    char->integer	28
o|    -	28
o|    not	11
o|    car	6
o|    string=?
o|    pair?	16
o|    null?	6
o|    string-length	8
o|    ##sys#structure?
o|    ##sys#slot	19
o|    ##sys#make-structure
o|    integer->char	19
o|contracted procedure: k1298 
o|contracted procedure: k1306 
o|contracted procedure: k12904065 
o|contracted procedure: k12904073 
o|contracted procedure: k1382 
o|contracted procedure: k1387 
o|contracted procedure: k1422 
o|contracted procedure: k1399 
o|contracted procedure: k1407 
o|contracted procedure: k1419 
o|contracted procedure: k1428 
o|contracted procedure: k1433 
o|contracted procedure: k1516 
o|contracted procedure: k1446 
o|contracted procedure: k1457 
o|contracted procedure: k1472 
o|substituted constant variable: g4552 
o|contracted procedure: k1496 
o|contracted procedure: k1507 
o|contracted procedure: k1481 
o|contracted procedure: k1488 
o|contracted procedure: k1513 
o|contracted procedure: k1601 
o|contracted procedure: k1522 
o|contracted procedure: k1527 
o|contracted procedure: k1542 
o|substituted constant variable: g4558 
o|contracted procedure: k1552 
o|contracted procedure: k1565 
o|contracted procedure: k1562 
o|contracted procedure: k1577 
o|contracted procedure: k1574 
o|contracted procedure: k1555 
o|contracted procedure: k1585 
o|contracted procedure: k1595 
o|contracted procedure: k1597 
o|contracted procedure: k1611 
o|contracted procedure: k1626 
o|contracted procedure: k1623 
o|contracted procedure: k1638 
o|contracted procedure: k1655 
o|substituted constant variable: g4566 
o|contracted procedure: k1662 
o|contracted procedure: k1673 
o|contracted procedure: k1665 
o|contracted procedure: k1693 
o|substituted constant variable: g4570 
o|contracted procedure: k1700 
o|contracted procedure: k1703 
o|contracted procedure: k1724 
o|contracted procedure: k1721 
o|contracted procedure: k1736 
o|contracted procedure: k1749 
o|contracted procedure: k1751 
o|contracted procedure: k1765 
o|contracted procedure: k1774 
o|contracted procedure: k1777 
o|contracted procedure: k12904094 
o|contracted procedure: k1793 
o|contracted procedure: k1795 
o|contracted procedure: k1806 
o|contracted procedure: k1815 
o|contracted procedure: k1818 
o|substituted constant variable: g4578 
o|contracted procedure: k1886 
o|contracted procedure: k1904 
o|contracted procedure: k1909 
o|substituted constant variable: g4580 
o|contracted procedure: k1930 
o|contracted procedure: k1927 
o|contracted procedure: k1953 
o|substituted constant variable: g4584 
o|contracted procedure: k1962 
o|contracted procedure: k1977 
o|contracted procedure: k1974 
o|contracted procedure: k1989 
o|contracted procedure: k19624104 
o|contracted procedure: k2010 
o|substituted constant variable: g4588 
o|contracted procedure: k2019 
o|contracted procedure: k2034 
o|contracted procedure: k2031 
o|contracted procedure: k2050 
o|contracted procedure: k2056 
o|contracted procedure: k20194110 
o|contracted procedure: k2075 
o|substituted constant variable: g4592 
o|contracted procedure: k2082 
o|contracted procedure: k2095 
o|contracted procedure: k2092 
o|contracted procedure: k2104 
o|contracted procedure: k2119 
o|substituted constant variable: g4596 
o|contracted procedure: k2135 
o|contracted procedure: k2132 
o|contracted procedure: k2147 
o|contracted procedure: k2153 
o|contracted procedure: k2170 
o|substituted constant variable: g4600 
o|contracted procedure: k2182 
o|contracted procedure: k2197 
o|contracted procedure: k2194 
o|contracted procedure: k2209 
o|contracted procedure: k2240 
o|contracted procedure: k2282 
o|contracted procedure: k2284 
o|contracted procedure: k2295 
o|contracted procedure: k2304 
o|contracted procedure: k2307 
o|contracted procedure: k2357 
o|substituted constant variable: g4608 
o|contracted procedure: k2364 
o|contracted procedure: k2377 
o|contracted procedure: k2374 
o|contracted procedure: k2386 
o|contracted procedure: k2367 
o|contracted procedure: k2392 
o|contracted procedure: k2429 
o|contracted procedure: k2398 
o|contracted procedure: k2406 
o|substituted constant variable: g4612 
o|contracted procedure: k2420 
o|contracted procedure: k2426 
o|contracted procedure: k2423 
o|contracted procedure: k2469 
o|substituted constant variable: g4616 
o|contracted procedure: k2478 
o|contracted procedure: k2488 
o|contracted procedure: k2485 
o|contracted procedure: k2499 
o|contracted procedure: k2493 
o|contracted procedure: k2508 
o|contracted procedure: k2510 
o|contracted procedure: k2543 
o|contracted procedure: k2518 
o|contracted procedure: k2526 
o|contracted procedure: k2540 
o|contracted procedure: k2553 
o|contracted procedure: k2559 
o|contracted procedure: k2587 
o|contracted procedure: k2570 
o|contracted procedure: k2581 
o|contracted procedure: k2572 
o|contracted procedure: k2614 
o|substituted constant variable: g4624 
o|contracted procedure: k2623 
o|contracted procedure: k26234134 
o|contracted procedure: k2648 
o|contracted procedure: k2645 
o|contracted procedure: k2660 
o|contracted procedure: k2700 
o|contracted procedure: k2709 
o|contracted procedure: k2751 
o|contracted procedure: k2725 
o|contracted procedure: k2733 
o|substituted constant variable: g4628 
o|contracted procedure: k2742 
o|contracted procedure: k2748 
o|contracted procedure: k2745 
o|contracted procedure: k2770 
o|substituted constant variable: g4632 
o|contracted procedure: k2779 
o|contracted procedure: k2787 
o|contracted procedure: k2792 
o|contracted procedure: k2803 
o|contracted procedure: k2812 
o|contracted procedure: k2815 
o|contracted procedure: k2840 
o|contracted procedure: k2846 
o|contracted procedure: k2871 
o|contracted procedure: k2877 
o|contracted procedure: k2896 
o|contracted procedure: k2915 
o|contracted procedure: k2932 
o|contracted procedure: k12904147 
o|contracted procedure: k2967 
o|contracted procedure: k2983 
o|contracted procedure: k3000 
o|contracted procedure: k12904152 
o|contracted procedure: k3032 
o|contracted procedure: k3051 
o|contracted procedure: k3066 
o|contracted procedure: k12904157 
o|contracted procedure: k3099 
o|contracted procedure: k3107 
o|contracted procedure: k3121 
o|contracted procedure: k3113 
o|contracted procedure: k3135 
o|contracted procedure: k3152 
o|contracted procedure: k3160 
o|contracted procedure: k3174 
o|contracted procedure: k3166 
o|contracted procedure: k12904162 
o|contracted procedure: k3203 
o|contracted procedure: k3222 
o|contracted procedure: k3219 
o|contracted procedure: k3250 
o|contracted procedure: k3261 
o|contracted procedure: k3270 
o|contracted procedure: k3273 
o|contracted procedure: k3296 
o|contracted procedure: k3322 
o|contracted procedure: k3319 
o|contracted procedure: k3459 
o|contracted procedure: k3481 
o|contracted procedure: k3478 
o|contracted procedure: k3462 
o|contracted procedure: k3471 
o|contracted procedure: k3493 
o|contracted procedure: k3515 
o|contracted procedure: k3512 
o|contracted procedure: k3496 
o|contracted procedure: k3505 
o|contracted procedure: k3523 
o|contracted procedure: k3545 
o|contracted procedure: k3542 
o|contracted procedure: k3526 
o|contracted procedure: k3535 
o|contracted procedure: k3553 
o|contracted procedure: k3575 
o|contracted procedure: k3572 
o|contracted procedure: k3556 
o|contracted procedure: k3565 
o|simplifications: ((let . 37)) 
o|replaced variables: 1 
o|removed binding forms: 206 
o|inlining procedure: k2140 
o|inlining procedure: k2173 
o|inlining procedure: k2472 
o|inlining procedure: k2472 
o|inlining procedure: k3464 
o|inlining procedure: k3464 
o|inlining procedure: k3498 
o|inlining procedure: k3498 
o|inlining procedure: k3528 
o|inlining procedure: k3528 
o|inlining procedure: k3558 
o|inlining procedure: k3558 
o|replaced variables: 10 
o|removed binding forms: 18 
o|substituted constant variable: tmp3773794741 
o|substituted constant variable: tmp3773794741 
o|simplifications: ((if . 1)) 
o|removed binding forms: 19 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|direct leaf routine/allocation: lp141 0 
o|contracted procedure: k1531 
o|converted assignments to bindings: (lp141) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (map-loop866883 map-loop895912 map-loop923940 map-loop951968 %char-set-diff+intersection! for-each-loop777810 %char-set-algebra %string-iter for-each-loop610633 lp622 lp596 %char-set-filter! lp557 %ucs-range->char-set! k2547 lp517 lp499 %string->char-set! doloop476477 lp464 %list->char-set! for-each-loop428443 %default-base %char-set-unfold! lp397 lp374 lp356 lp344 lp319 lp299 lp280 %char-set-cursor-next %set-char-set! %set-char-set for-each-loop227238 for-each-loop202213 lp181 lp169 k1525 lp144 lp2118 lp110 lp96 %char-set:s/check lp81) 
o|calls to known targets: 160 
o|identified direct recursive calls: f_1580 1 
o|identified direct recursive calls: f_1901 1 
o|identified direct recursive calls: f_3454 2 
o|identified direct recursive calls: f_3488 2 
o|identified direct recursive calls: f_3518 2 
o|identified direct recursive calls: f_3548 2 
o|fast box initializations: 30 
o|fast global references: 81 
o|fast global assignments: 14 
o|dropping unused closure argument: f_1293 
o|dropping unused closure argument: f_2505 
o|dropping unused closure argument: f_2212 
o|dropping unused closure argument: f_2269 
o|dropping unused closure argument: f_2389 
o|dropping unused closure argument: f_1739 
o|dropping unused closure argument: f_3191 
o|dropping unused closure argument: f_1335 
o|dropping unused closure argument: f_2754 
o|dropping unused closure argument: f_2719 
o|dropping unused closure argument: f_1783 
o|dropping unused closure argument: f_2603 
o|dropping unused closure argument: f_1892 
*/
/* end of file */
