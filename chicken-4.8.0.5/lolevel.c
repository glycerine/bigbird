/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:46
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: lolevel.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file lolevel.c
   unit: lolevel
*/

#include "chicken.h"

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
# include <sys/types.h>
#endif
#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_w2b(x)                   C_fix(C_wordstobytes(C_unfix(x)))
#define C_memmove_o(to, from, n, toff, foff) C_memmove((char *)(to) + (toff), (char *)(from) + (foff), (n))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[144];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,99,104,101,99,107,45,98,108,111,99,107,32,120,54,50,32,108,111,99,54,51,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,12),40,102,95,49,49,56,48,32,120,56,56,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,115,116,114,117,99,116,117,114,101,32,120,56,52,32,108,111,99,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,51,51,32,120,49,48,55,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,99,104,101,99,107,45,112,111,105,110,116,101,114,32,120,49,48,51,32,46,32,108,111,99,49,48,52,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,48),40,102,95,49,50,53,48,32,97,49,50,49,49,50,54,32,97,49,50,48,49,50,55,32,97,49,49,57,49,50,56,32,97,49,49,56,49,50,57,32,97,49,49,55,49,51,48,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,48),40,102,95,49,50,55,53,32,97,49,51,55,49,52,50,32,97,49,51,54,49,52,51,32,97,49,51,53,49,52,52,32,97,49,51,52,49,52,53,32,97,49,51,51,49,52,54,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,48),40,102,95,49,51,48,48,32,97,49,53,51,49,53,56,32,97,49,53,50,49,53,57,32,97,49,53,49,49,54,48,32,97,49,53,48,49,54,49,32,97,49,52,57,49,54,50,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,48),40,102,95,49,51,50,53,32,97,49,54,57,49,55,52,32,97,49,54,56,49,55,53,32,97,49,54,55,49,55,54,32,97,49,54,54,49,55,55,32,97,49,54,53,49,55,56,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,13),40,102,95,49,51,53,48,32,120,49,56,49,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,10),40,110,111,115,105,122,101,114,114,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,16),40,115,105,122,101,114,114,32,97,114,103,115,50,48,55,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,29),40,99,104,101,99,107,110,49,32,110,50,48,56,32,110,109,97,120,50,48,57,32,111,102,102,50,49,48,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,47),40,99,104,101,99,107,110,50,32,110,50,49,49,32,110,109,97,120,50,49,50,32,110,109,97,120,50,50,49,51,32,111,102,102,49,50,49,52,32,111,102,102,50,50,49,53,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,13),40,102,95,49,52,56,56,32,120,50,51,49,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,13),40,102,95,49,52,56,54,32,120,50,50,53,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,13),40,102,95,49,53,48,52,32,120,50,52,51,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,13),40,102,95,49,53,48,50,32,120,50,51,55,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,13),40,102,95,49,53,55,48,32,120,50,54,56,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,102,95,49,53,54,56,32,120,50,54,50,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,20),40,109,111,118,101,32,102,114,111,109,50,49,56,32,116,111,50,49,57,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,40),40,109,111,118,101,45,109,101,109,111,114,121,33,32,102,114,111,109,49,56,56,32,116,111,49,56,57,32,46,32,116,109,112,49,56,55,49,57,48,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,51,48,48,32,105,51,48,50,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,50,57,48,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,99,111,112,121,32,120,50,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,97,108,108,111,99,97,116,101,32,97,51,48,56,51,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,14),40,102,114,101,101,32,97,51,49,52,51,49,56,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,13),40,102,95,49,55,54,54,32,120,51,50,52,41,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,15),40,112,111,105,110,116,101,114,63,32,120,51,50,49,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,13),40,102,95,49,55,55,53,32,120,51,50,57,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,20),40,112,111,105,110,116,101,114,45,108,105,107,101,63,32,120,51,50,54,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,26),40,97,100,100,114,101,115,115,45,62,112,111,105,110,116,101,114,32,97,100,100,114,51,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,25),40,112,111,105,110,116,101,114,45,62,97,100,100,114,101,115,115,32,112,116,114,51,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,22),40,110,117,108,108,45,112,111,105,110,116,101,114,63,32,112,116,114,51,51,57,41,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,102,95,49,56,49,51,32,97,51,52,54,51,52,57,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,62,112,111,105,110,116,101,114,32,120,51,52,50,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,24),40,112,111,105,110,116,101,114,45,62,111,98,106,101,99,116,32,112,116,114,51,53,50,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,23),40,112,111,105,110,116,101,114,61,63,32,112,49,51,53,53,32,112,50,51,53,54,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,26),40,112,111,105,110,116,101,114,43,32,97,51,54,49,51,54,53,32,97,51,54,48,51,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,16),40,102,95,49,56,52,55,32,97,51,55,49,51,55,52,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,13),40,102,95,49,56,54,54,32,120,51,56,50,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,20),40,97,108,105,103,110,45,116,111,45,119,111,114,100,32,120,51,55,54,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,13),40,102,95,49,56,57,51,32,120,51,57,48,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,27),40,116,97,103,45,112,111,105,110,116,101,114,32,112,116,114,51,56,53,32,116,97,103,51,56,54,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,34),40,116,97,103,103,101,100,45,112,111,105,110,116,101,114,63,32,120,52,48,48,32,46,32,116,109,112,51,57,57,52,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,13),40,102,95,49,57,52,48,32,120,52,49,54,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,18),40,112,111,105,110,116,101,114,45,116,97,103,32,120,52,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,33),40,109,97,107,101,45,108,111,99,97,116,105,118,101,32,111,98,106,52,50,49,32,46,32,105,110,100,101,120,52,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,38),40,109,97,107,101,45,119,101,97,107,45,108,111,99,97,116,105,118,101,32,111,98,106,52,50,56,32,46,32,105,110,100,101,120,52,50,57,41,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,25),40,108,111,99,97,116,105,118,101,45,115,101,116,33,32,120,52,51,53,32,121,52,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,23),40,108,111,99,97,116,105,118,101,45,62,111,98,106,101,99,116,32,120,52,51,57,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,16),40,108,111,99,97,116,105,118,101,63,32,120,52,52,49,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,27),40,112,111,105,110,116,101,114,45,117,56,45,115,101,116,33,32,112,52,52,52,32,110,52,52,53,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,27),40,112,111,105,110,116,101,114,45,115,56,45,115,101,116,33,32,112,52,52,55,32,110,52,52,56,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,117,49,54,45,115,101,116,33,32,112,52,53,48,32,110,52,53,49,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,115,49,54,45,115,101,116,33,32,112,52,53,51,32,110,52,53,52,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,117,51,50,45,115,101,116,33,32,112,52,53,54,32,110,52,53,55,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,115,51,50,45,115,101,116,33,32,112,52,53,57,32,110,52,54,48,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,102,51,50,45,115,101,116,33,32,112,52,54,50,32,110,52,54,51,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,102,54,52,45,115,101,116,33,32,112,52,54,53,32,110,52,54,54,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,56,53,32,120,52,56,55,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,18),40,102,95,50,48,57,57,32,120,52,56,57,32,105,52,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,34),40,101,120,116,101,110,100,45,112,114,111,99,101,100,117,114,101,32,112,114,111,99,52,56,53,32,100,97,116,97,52,56,54,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,13),40,102,95,50,49,50,51,32,120,53,48,49,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,16),40,102,95,50,49,49,56,32,112,114,111,99,53,48,48,41};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,26),40,101,120,116,101,110,100,101,100,45,112,114,111,99,101,100,117,114,101,63,32,120,52,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,13),40,102,95,50,49,53,51,32,120,53,49,49,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,16),40,102,95,50,49,52,56,32,112,114,111,99,53,49,48,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,21),40,112,114,111,99,101,100,117,114,101,45,100,97,116,97,32,120,53,48,52,41,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,34),40,115,101,116,45,112,114,111,99,101,100,117,114,101,45,100,97,116,97,33,32,112,114,111,99,53,49,52,32,120,53,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,48,51,32,120,57,54,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,115,108,111,116,115,32,120,53,50,48,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,98,121,116,101,115,32,120,53,50,51,41,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,40),40,109,97,107,101,45,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,32,116,121,112,101,53,50,56,32,46,32,97,114,103,115,53,50,57,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,13),40,102,95,50,50,52,53,32,120,53,52,55,41,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,35),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,63,32,120,53,51,55,32,46,32,116,109,112,53,51,54,53,51,56,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,27),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,116,121,112,101,32,120,53,53,51,41,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,29),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,108,101,110,103,116,104,32,120,53,53,54,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,42),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,115,108,111,116,45,115,101,116,33,32,120,53,53,57,32,105,53,54,48,32,121,53,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,55,51,41,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,21),40,114,101,99,111,114,100,45,62,118,101,99,116,111,114,32,120,53,55,48,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,101,118,105,99,116,101,100,63,32,120,53,56,48,41,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,48,50,32,105,54,48,52,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,53,57,50,41,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,16),40,102,95,50,52,52,55,32,97,53,56,54,53,56,57,41};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,34),40,111,98,106,101,99,116,45,101,118,105,99,116,32,120,53,56,50,32,46,32,97,108,108,111,99,97,116,111,114,53,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,51,56,32,105,54,52,48,41};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,50,55,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,49),40,111,98,106,101,99,116,45,101,118,105,99,116,45,116,111,45,108,111,99,97,116,105,111,110,32,120,54,49,54,32,112,116,114,54,49,55,32,46,32,108,105,109,105,116,54,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,55,48,32,105,54,55,50,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,14),40,114,101,108,101,97,115,101,32,120,54,54,53,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,54,54,32,97,54,53,56,54,54,50,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,35),40,111,98,106,101,99,116,45,114,101,108,101,97,115,101,32,120,54,53,52,32,46,32,114,101,108,101,97,115,101,114,54,53,53,41,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,56,56,32,105,54,57,48,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,56,50,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,115,105,122,101,32,120,54,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,50,55,32,105,55,50,57,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,55,49,52,41,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,33),40,111,98,106,101,99,116,45,117,110,101,118,105,99,116,32,120,55,48,53,32,46,32,116,109,112,55,48,52,55,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,115,116,55,48,41,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,24),40,111,98,106,101,99,116,45,98,101,99,111,109,101,33,32,97,108,115,116,55,51,54,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,34),40,109,117,116,97,116,101,45,112,114,111,99,101,100,117,114,101,33,32,111,108,100,55,51,57,32,112,114,111,99,55,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,54,53,41,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,38),40,109,97,107,101,45,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,110,55,53,53,32,46,32,116,109,112,55,53,52,55,53,54,41,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,22),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,63,32,120,55,55,52,41,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,55,56,48,32,112,116,114,115,55,56,50,32,105,55,56,51,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,46,32,112,116,114,115,55,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,57,51,41,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,35),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,102,105,108,108,33,32,112,118,55,56,57,32,112,116,114,55,57,48,41,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,29),40,112,118,45,98,117,102,45,115,101,116,33,32,97,56,49,48,56,49,54,32,97,56,48,57,56,49,55,41,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,39),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,115,101,116,33,32,112,118,56,50,48,32,105,56,50,49,32,112,116,114,56,50,50,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,29),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,108,101,110,103,116,104,32,112,118,56,51,52,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,19),40,102,95,51,48,56,49,32,112,118,56,50,56,32,105,56,50,57,41,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,18),40,102,95,51,48,57,57,32,120,53,54,53,32,105,53,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,49,56,32,112,52,56,50,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,50,49,32,112,52,56,48,41,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,50,52,32,112,52,55,56,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,50,55,32,112,52,55,54,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,51,48,32,112,52,55,52,41,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,51,51,32,112,52,55,50,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,51,54,32,112,52,55,48,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,51,57,32,112,52,54,56,41,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,14),67,95,108,111,99,97,116,105,118,101,95,114,101,102,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub812(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub812(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
void * ptr=(void * )C_c_pointer_or_null(C_a2);
*((void **)C_data_pointer(buf) + i) = ptr;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub803(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub803(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
C_return(*((void **)C_data_pointer(buf) + i));
C_ret:
#undef return

return C_r;}

/* from k2670 */
static C_word C_fcall stub659(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub659(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k2451 */
static C_word C_fcall stub587(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub587(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1850 */
static C_word C_fcall stub372(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub372(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub362(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub362(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
C_return((unsigned char *)ptr + off);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub347(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub347(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
C_return((void *)x);
C_ret:
#undef return

return C_r;}

/* from k1756 */
static C_word C_fcall stub315(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub315(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1749 */
static C_word C_fcall stub309(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub309(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1342 */
static C_word C_fcall stub170(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub170(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1317 */
static C_word C_fcall stub154(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub154(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1292 */
static C_word C_fcall stub138(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub138(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1267 */
static C_word C_fcall stub122(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub122(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

C_noret_decl(f_2641)
static void C_fcall f_2641(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2032)
static void C_ccall f_2032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2703)
static void C_fcall f_2703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2365)
static void C_fcall f_2365(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2825)
static void C_fcall f_2825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2356)
static void C_fcall f_2356(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2085)
static void C_ccall f_2085(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3003)
static C_word C_fcall f_3003(C_word t0,C_word t1);
C_noret_decl(f_2460)
static void C_fcall f_2460(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2466)
static void C_ccall f_2466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1529)
static void C_ccall f_1529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1792)
static void C_ccall f_1792(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1796)
static void C_ccall f_1796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1186)
static void C_ccall f_1186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1175)
static void C_fcall f_1175(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1679)
static void C_fcall f_1679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1159)
static void C_ccall f_1159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_fcall f_2964(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1405)
static void C_fcall f_1405(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1141)
static void C_fcall f_1141(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1233)
static void C_ccall f_1233(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1237)
static void C_ccall f_1237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2920)
static C_word C_fcall f_2920(C_word t0,C_word t1);
C_noret_decl(f_1935)
static void C_ccall f_1935(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2503)
static void C_fcall f_2503(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_fcall f_2505(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2766)
static void C_fcall f_2766(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_fcall f_2713(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2715)
static void C_fcall f_2715(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2600)
static void C_fcall f_2600(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1398)
static void C_fcall f_1398(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1383)
static void C_fcall f_1383(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1377)
static void C_fcall f_1377(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1371)
static void C_fcall f_1371(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2595)
static void C_fcall f_2595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1892)
static void C_ccall f_1892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1899)
static void C_ccall f_1899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_fcall f_2686(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f3409)
static void C_ccall f3409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1718)
static void C_fcall f_1718(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2297)
static void C_ccall f_2297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1433)
static void C_fcall f_1433(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1115)
static void C_fcall f_1115(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externexport void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1350)
static void C_ccall f_1350(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1111)
static void C_ccall f_1111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2138)
static void C_ccall f_2138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3030)
static C_word C_fcall f_3030(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1355)
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1355)
static void C_ccall f_1355r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2396)
static void C_fcall f_2396(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2398)
static void C_fcall f_2398(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2386)
static void C_fcall f_2386(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2491)
static void C_fcall f_2491(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3136)
static void C_ccall f_3136(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_fcall f_2487(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_fcall f_2471(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static C_word C_fcall f_2328(C_word t0,C_word t1);
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2641)
static void C_fcall trf_2641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2641(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2641(t0,t1,t2);}

C_noret_decl(trf_2703)
static void C_fcall trf_2703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2703(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2703(t0,t1);}

C_noret_decl(trf_2365)
static void C_fcall trf_2365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2365(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2365(t0,t1,t2);}

C_noret_decl(trf_2825)
static void C_fcall trf_2825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2825(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2825(t0,t1,t2);}

C_noret_decl(trf_2356)
static void C_fcall trf_2356(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2356(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2356(t0,t1);}

C_noret_decl(trf_2460)
static void C_fcall trf_2460(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2460(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2460(t0,t1);}

C_noret_decl(trf_1175)
static void C_fcall trf_1175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1175(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1175(t0,t1,t2);}

C_noret_decl(trf_1679)
static void C_fcall trf_1679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1679(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1679(t0,t1,t2);}

C_noret_decl(trf_2964)
static void C_fcall trf_2964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2964(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2964(t0,t1,t2,t3);}

C_noret_decl(trf_1405)
static void C_fcall trf_1405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1405(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1405(t0,t1);}

C_noret_decl(trf_1141)
static void C_fcall trf_1141(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1141(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1141(t0,t1,t2);}

C_noret_decl(trf_2503)
static void C_fcall trf_2503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2503(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2503(t0,t1);}

C_noret_decl(trf_2505)
static void C_fcall trf_2505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2505(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2505(t0,t1,t2);}

C_noret_decl(trf_2766)
static void C_fcall trf_2766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2766(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2766(t0,t1,t2);}

C_noret_decl(trf_2713)
static void C_fcall trf_2713(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2713(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2713(t0,t1);}

C_noret_decl(trf_2715)
static void C_fcall trf_2715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2715(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2715(t0,t1,t2);}

C_noret_decl(trf_2600)
static void C_fcall trf_2600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2600(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2600(t0,t1,t2);}

C_noret_decl(trf_1398)
static void C_fcall trf_1398(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1398(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_1398(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1383)
static void C_fcall trf_1383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1383(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1383(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1377)
static void C_fcall trf_1377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1377(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1377(t0,t1,t2);}

C_noret_decl(trf_1371)
static void C_fcall trf_1371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1371(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1371(t0,t1);}

C_noret_decl(trf_2595)
static void C_fcall trf_2595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2595(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2595(t0,t1);}

C_noret_decl(trf_2686)
static void C_fcall trf_2686(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2686(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2686(t0,t1,t2);}

C_noret_decl(trf_1718)
static void C_fcall trf_1718(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1718(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1718(t0,t1,t2);}

C_noret_decl(trf_1433)
static void C_fcall trf_1433(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1433(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1433(t0,t1,t2,t3);}

C_noret_decl(trf_1115)
static void C_fcall trf_1115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1115(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1115(t0,t1,t2);}

C_noret_decl(trf_2396)
static void C_fcall trf_2396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2396(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2396(t0,t1);}

C_noret_decl(trf_2398)
static void C_fcall trf_2398(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2398(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2398(t0,t1,t2);}

C_noret_decl(trf_2386)
static void C_fcall trf_2386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2386(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2386(t0,t1);}

C_noret_decl(trf_2491)
static void C_fcall trf_2491(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2491(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2491(t0,t1);}

C_noret_decl(trf_2487)
static void C_fcall trf_2487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2487(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2487(t0,t1);}

C_noret_decl(trf_2471)
static void C_fcall trf_2471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2471(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2471(t0,t1,t2);}

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

/* doloop670 in release in k2594 in object-release in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2641(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2641,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2650,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm:563: release */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2600(t5,t3,t4);}}

/* pointer-f32-set! in k1994 in k1112 in k1110 */
static void C_ccall f_2032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2032,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_f32_set(t2,t3));}

/* k2702 in k2697 in evict in k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2703(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2703,NULL,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:578: hash-table-set! */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[6],((C_word*)t0)[3],C_SCHEME_TRUE);}

/* pointer-f64-set! in k1994 in k1112 in k1110 */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2036,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_f64_set(t2,t3));}

/* k2706 in k2704 in k2702 in k2697 in evict in k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k2704 in k2702 in k2697 in evict in k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2713,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2713(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2713(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2360,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2365,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2365(t5,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* number-of-bytes in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2205(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2205,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_block_size(t2));}
else{
t3=C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_w2b(t3));}}
else{
/* lolevel.scm:428: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[4],lf[79],lf[80],t2);}}

/* evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2365(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2365,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2374,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:496: hash-table-ref/default */
t4=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2199 in number-of-slots in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_block_size(((C_word*)t0)[3]));}

/* pointer-s16-set! in k1994 in k1112 in k1110 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2020,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_s16_set(t2,t3));}

/* k2734 in doloop688 in k2712 in k2704 in k2702 in k2697 in evict in k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 in ... */
static void C_ccall f_2735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_2715(t5,((C_word*)t0)[5],t4);}

/* pointer-u32-set! in k1994 in k1112 in k1110 */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2024,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_u32_set(t2,t3));}

/* pointer-s32-set! in k1994 in k1112 in k1110 */
static void C_ccall f_2028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2028,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_s32_set(t2,t3));}

/* k2819 in k2817 in k2815 in k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* doloop727 in k2817 in k2815 in k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2825,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:607: copy */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2766(t5,t3,t4);}}

/* object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2352r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2352r(t0,t1,t2,t3);}}

static void C_ccall f_2352r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2356,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_2356(t6,C_u_i_car(t5));}
else{
t5=t4;
f_2356(t5,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2447,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));}}

/* k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2356(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2356,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2358,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:492: make-hash-table */
t3=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[96]+1));}

/* k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2360,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:493: ##sys#check-closure */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[91]);}

/* f_2099 in k2079 in extend-procedure in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2099,4,t0,t1,t2,t3);}
t4=C_a_i_cons(&a,2,lf[65],((C_word*)t0)[2]);
t5=C_i_setslot(t2,t3,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* f_2118 in extended-procedure? in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2118(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2118,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:392: ##sys#lambda-decoration */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t1,t2,t3);}

/* k2815 in k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2816,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2818,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:604: hash-table-set! */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[6],((C_word*)t0)[2],t2);}

/* k2817 in k2815 in k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2818,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_specialp(((C_word*)t0)[4]))?C_fix(1):C_fix(0));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2825,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2825(t7,t2,t3);}

/* k2079 in extend-procedure in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2085,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2099,a[2]=((C_word*)t0)[2],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:386: ##sys#decorate-lambda */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(5,*((C_word*)lf[67]+1),((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);}

/* object-evicted? in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2348,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_permanentp(t2));}

/* extended-procedure? in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2107,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2118,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2138,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:396: g498 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_2085 in k2079 in extend-procedure in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2085(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2085,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[65],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2454r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2454r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2454r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2458,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:511: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t5,t3,lf[97]);}

/* k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=C_u_i_car(t3);
t5=C_i_check_exact_2(t4,lf[97]);
t6=t2;
f_2460(t6,t4);}
else{
t3=t2;
f_2460(t3,C_SCHEME_FALSE);}}

/* k2805 in k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2808,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:599: hash-table-set! */
t3=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2807 in k2805 in k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_2447 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2447,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub587(t3,t4));}

/* k3101 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[4]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:470: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(6,*((C_word*)lf[87]+1),t2,((C_word*)t0)[2],C_fix(0),t4,lf[88]);}

/* k3103 in k3101 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(((C_word*)t0)[4],t2));}

/* doloop793 in k2993 in pointer-vector-fill! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static C_word C_fcall f_3003(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=f_3030(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t6=t3;
t1=t6;
goto loop;}}

/* k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2460(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2460,NULL,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2462,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2583,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:516: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),t4,((C_word*)t0)[4]);}

/* k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2464,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:517: make-hash-table */
t3=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[96]+1));}

/* k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word)li87),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2471(t6,t2,((C_word*)t0)[5]);}

/* k2465 in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:546: values */
C_values(4,0,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* pointer-like? in k1112 in k1110 */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1772,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1775,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:215: g327 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}

/* k1706 in k1704 in copy in object-copy in k1112 in k1110 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1704 in copy in object-copy in k1112 in k1110 */
static void C_ccall f_1705(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1705,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_byteblockp(((C_word*)t0)[2]);
t5=(C_truep(t4)?t4:C_i_symbolp(((C_word*)t0)[2]));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}
else{
t6=(C_truep(C_specialp(((C_word*)t0)[2]))?C_fix(1):C_fix(0));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1718,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word)li22),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1718(t10,t3,t6);}}

/* f_1775 in pointer-like? in k1112 in k1110 */
static void C_ccall f_1775(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1775,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* free in k1112 in k1110 */
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1752,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub315(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub315(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* pointer? in k1112 in k1110 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1763,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1766,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:213: g322 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}

/* f_1766 in pointer? in k1112 in k1110 */
static void C_ccall f_1766(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1766,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_safe_pointerp(t2));}

/* k1528 in k1512 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1529,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1538,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[9])){
t5=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:175: checkn1 */
t6=((C_word*)((C_word*)t0)[8])[1];
f_1383(t6,t3,((C_word*)t0)[9],t5,((C_word*)t0)[6]);}
else{
/* lolevel.scm:175: nosizerr */
t5=((C_word*)((C_word*)t0)[10])[1];
f_1371(t5,t4);}}
else{
/* lolevel.scm:177: typerr */
t3=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k1519 in k1512 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:173: memmove1 */
t2=((C_word*)t0)[2];
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* allocate in k1112 in k1110 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1745,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub309(t3,t4));}

/* k1603 in k1594 in k1578 in k1558 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:183: memmove4 */
t2=((C_word*)t0)[2];
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k1558 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1559,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=C_block_size(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1568,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1580,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* lolevel.scm:180: g260 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[5]);}
else{
/* lolevel.scm:188: typerr */
t3=((C_word*)t0)[12];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1428,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1433,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word)li20),tmp=(C_word)a,a+=16,tmp));
t5=((C_word*)t3)[1];
f_1433(t5,((C_word*)t0)[14],((C_word*)t0)[15],((C_word*)t0)[16]);}

/* k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[6],C_fix(0)))){
/* lolevel.scm:159: ##sys#error */
t3=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[8],lf[15],((C_word*)t0)[6]);}
else{
t3=t2;
f_1426(2,t3,C_SCHEME_UNDEFINED);}}

/* k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(0)))){
/* lolevel.scm:161: ##sys#error */
t3=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[8],lf[14],((C_word*)t0)[5]);}
else{
t3=t2;
f_1428(2,t3,C_SCHEME_UNDEFINED);}}

/* k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* lolevel.scm:157: ##sys#check-block */
f_1115(t2,((C_word*)t0)[16],C_a_i_list(&a,1,lf[8]));}

/* k1506 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_locativep(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_1504 */
static void C_ccall f_1504(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1504,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_safe_pointerp(t2));}

/* f_1502 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1502,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1504,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1508,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:62: g241 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* pointer->address in k1112 in k1110 */
static void C_ccall f_1792(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1792,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1796,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:222: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t3,t2,lf[25]);}

/* k1795 in pointer->address in k1112 in k1110 */
static void C_ccall f_1796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:223: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1184 in check-generic-structure in k1112 in k1110 */
static void C_ccall f_1186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
/* lolevel.scm:104: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[2],lf[4],t3,lf[5],((C_word*)t0)[4]);}
else{
/* lolevel.scm:104: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[4],C_SCHEME_FALSE,lf[5],((C_word*)t0)[4]);}}}

/* f_1180 in check-generic-structure in k1112 in k1110 */
static void C_ccall f_1180(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1180,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_structurep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2993 in pointer-vector-fill! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2994,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3003,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_3003(t4,C_fix(0)));}

/* f_1275 in k1112 in k1110 */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_1275,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t8=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(t4);
t10=C_i_foreign_fixnum_argumentp(t5);
t11=C_i_foreign_fixnum_argumentp(t6);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub138(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* address->pointer in k1112 in k1110 */
static void C_ccall f_1783(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1783,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1787,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:218: ##sys#check-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t3,t2,lf[22]);}

/* k1786 in address->pointer in k1112 in k1110 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:219: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* ##sys#check-generic-structure in k1112 in k1110 */
static void C_fcall f_1175(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1175,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1180,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1186,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:103: g86 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k1512 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1514,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
/* lolevel.scm:173: memmove1 */
t3=((C_word*)t0)[2];
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[8],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
/* lolevel.scm:173: nosizerr */
t3=((C_word*)((C_word*)t0)[9])[1];
f_1371(t3,t2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1529,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:174: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[4]);}}

/* pointer-vector-fill! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2988,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[120],lf[124]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2994,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* lolevel.scm:662: ##sys#check-pointer */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[124]);}
else{
t6=t5;
f_2994(2,t6,C_SCHEME_UNDEFINED);}}

/* k1994 in k1112 in k1110 */
static void C_ccall f_1996(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1996,2,t0,t1);}
t2=C_mutate((C_word*)lf[45]+1 /* (set! locative-ref ...) */,t1);
t3=C_mutate((C_word*)lf[46]+1 /* (set! locative->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1998,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[47]+1 /* (set! locative? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2002,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[48]+1 /* (set! pointer-u8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2008,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[49]+1 /* (set! pointer-s8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2012,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[50]+1 /* (set! pointer-u16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2016,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[51]+1 /* (set! pointer-s16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2020,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[52]+1 /* (set! pointer-u32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2024,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[53]+1 /* (set! pointer-s32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2028,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[54]+1 /* (set! pointer-f32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2032,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[55]+1 /* (set! pointer-f64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2036,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3139,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:331: getter-with-setter */
t15=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t13,t14,*((C_word*)lf[48]+1),lf[140]);}

/* locative->object in k1994 in k1112 in k1110 */
static void C_ccall f_1998(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1998,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_locative_to_object(t2));}

/* locative-set! in k1112 in k1110 */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1990,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_locative_set(t2,t3));}

/* copy in object-copy in k1112 in k1110 */
static void C_fcall f_1679(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1679,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_i_symbolp(t2))){
t3=C_slot(t2,C_fix(1));
/* lolevel.scm:196: ##sys#intern-symbol */
C_string_to_symbol(3,0,t1,t3);}
else{
t3=C_block_size(t2);
t4=(C_truep(C_byteblockp(t2))?C_words(t3):t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1705,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:200: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t5,t4);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* object-copy in k1112 in k1110 */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1673,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1679,a[2]=t4,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1679(t6,t1,t2);}

/* k1160 in k1158 in loop in object-become! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* lolevel.scm:96: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1141(t4,((C_word*)t0)[4],t3);}

/* k2974 in doloop780 in k2956 in pointer-vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=f_3030(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[6])[1];
f_2964(t6,((C_word*)t0)[7],t4,t5);}

/* k1158 in loop in object-become! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_1159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[5]);
/* lolevel.scm:95: ##sys#check-block */
f_1115(t2,t3,C_a_i_list(&a,1,lf[113]));}

/* doloop780 in k2956 in pointer-vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2964(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2964,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=((C_word*)t0)[2];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:657: ##sys#check-pointer */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,lf[120]);}}

/* k1572 */
static void C_ccall f_1574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_locativep(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_1570 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1570,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_safe_pointerp(t2));}

/* make-weak-locative in k1112 in k1110 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1974r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1974r(t0,t1,t2,t3);}}

static void C_ccall f_1974r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:305: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(6,*((C_word*)lf[42]+1),t1,t2,C_fix(0),C_SCHEME_TRUE,lf[43]);}
else{
t4=C_i_car(t3);
/* lolevel.scm:305: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(6,*((C_word*)lf[42]+1),t1,t2,t4,C_SCHEME_TRUE,lf[43]);}}

/* k1403 in checkn2 in move-memory! in k1112 in k1110 */
static void C_fcall f_1405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1405,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* lolevel.scm:154: sizerr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1377(t2,((C_word*)t0)[3],C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]));}}

/* loop in object-become! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_1141(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_1141,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_check_pair_2(t5,lf[113]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1159,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t8=C_u_i_car(t5);
/* lolevel.scm:94: ##sys#check-block */
f_1115(t7,t8,C_a_i_list(&a,1,lf[113]));}
else{
/* lolevel.scm:98: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[4],lf[113],lf[115],((C_word*)t0)[3]);}}}

/* pointer-vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2952r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2952r(t0,t1,t2);}}

static void C_ccall f_2952r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t3=t2;
t4=C_u_i_length(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2957,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:651: make-pointer-vector */
t6=*((C_word*)lf[119]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k2956 in pointer-vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2957,2,t0,t1);}
t2=C_slot(t1,C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2964,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2964(t6,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* f_1233 in check-pointer in k1112 in k1110 */
static void C_ccall f_1233(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1233,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_safe_pointerp(t2));}

/* k1235 in check-pointer in k1112 in k1110 */
static void C_ccall f_1237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* lolevel.scm:118: ##sys#error-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],t2,t4,lf[7],((C_word*)t0)[4]);}
else{
/* lolevel.scm:118: ##sys#error-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],t2,C_SCHEME_FALSE,lf[7],((C_word*)t0)[4]);}}}

/* align-to-word in k1112 in k1110 */
static void C_ccall f_1852(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1852,3,t0,t1,t2);}
if(C_truep(C_i_integerp(t2))){
/* lolevel.scm:252: align */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1866,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1872,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:253: g380 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* pointer-vector? in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2946,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[120]));}

/* make-locative in k1112 in k1110 */
static void C_ccall f_1958(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1958r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1958r(t0,t1,t2,t3);}}

static void C_ccall f_1958r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:302: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(6,*((C_word*)lf[42]+1),t1,t2,C_fix(0),C_SCHEME_FALSE,lf[41]);}
else{
t4=C_i_car(t3);
/* lolevel.scm:302: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(6,*((C_word*)lf[42]+1),t1,t2,t4,C_SCHEME_FALSE,lf[41]);}}

/* ##sys#check-pointer in k1112 in k1110 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1228r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1228r(t0,t1,t2,t3);}}

static void C_ccall f_1228r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1233,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1237,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:117: g105 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* f_1847 in k1112 in k1110 */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1847,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(4));
t4=C_i_foreign_integer_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub372(t3,t4));}

/* k1585 in k1578 in k1558 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:181: memmove2 */
t2=((C_word*)t0)[2];
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k1578 in k1558 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1580,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
/* lolevel.scm:181: checkn1 */
t3=((C_word*)((C_word*)t0)[9])[1];
f_1383(t3,t2,((C_word*)t0)[8],((C_word*)t0)[10],((C_word*)t0)[7]);}
else{
/* lolevel.scm:181: checkn1 */
t3=((C_word*)((C_word*)t0)[9])[1];
f_1383(t3,t2,((C_word*)t0)[10],((C_word*)t0)[10],((C_word*)t0)[7]);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1595,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:182: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[4]);}}

/* k1944 in pointer-tag in k1112 in k1110 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_taggedpointerp(((C_word*)t0)[3]))?C_slot(((C_word*)t0)[3],C_fix(1)):C_SCHEME_FALSE));}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:279: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],t2,lf[40],((C_word*)t0)[3]);}}

/* f_1250 in k1112 in k1110 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_1250,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t8=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(t4);
t10=C_i_foreign_fixnum_argumentp(t5);
t11=C_i_foreign_fixnum_argumentp(t6);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub122(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1498,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* lolevel.scm:172: g235 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1559,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* lolevel.scm:178: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[5]);}}

/* k1490 */
static void C_ccall f_1492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_locativep(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1877 in k1870 in align-to-word in k1112 in k1110 */
static void C_ccall f_1878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:254: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),((C_word*)t0)[2],t1);}

/* f_1940 in pointer-tag in k1112 in k1110 */
static void C_ccall f_1940(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1940,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1870 in align-to-word in k1112 in k1110 */
static void C_ccall f_1872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1872,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1878,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:254: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),t3,((C_word*)t0)[4]);}
else{
/* lolevel.scm:256: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[4],lf[35],lf[36],((C_word*)t0)[4]);}}

/* doloop765 in k2914 in k2904 in make-pointer-vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static C_word C_fcall f_2920(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=f_3030(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t6=t3;
t1=t6;
goto loop;}}

/* pointer-tag in k1112 in k1110 */
static void C_ccall f_1935(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1935,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1940,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1946,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:276: g414 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2502 in k2494 in k2492 in k2490 in k2488 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in ... */
static void C_fcall f_2503(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2503,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li86),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2505(t5,((C_word*)t0)[6],t1);}

/* doloop638 in k2502 in k2494 in k2492 in k2490 in k2488 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in ... */
static void C_fcall f_2505(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2505,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* lolevel.scm:544: evict */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2471(t5,t3,t4);}}

/* f_1866 in align-to-word in k1112 in k1110 */
static void C_ccall f_1866(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1866,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer->object in k1112 in k1110 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1819,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1823,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:236: ##sys#check-pointer */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[32]);}

/* k2626 in release in k2594 in object-release in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:565: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),t2,C_block_address(&a,1,((C_word*)t0)[4]));}

/* f_1813 in object->pointer in k1112 in k1110 */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1813,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub347(t3,t2));}

/* copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2766(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2766,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2781,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:590: hash-table-ref/default */
t4=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2761,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2766,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2766(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1594 in k1578 in k1558 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1595,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(C_truep(((C_word*)t0)[8])?((C_word*)t0)[8]:((C_word*)t0)[9]);
t5=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:183: checkn2 */
t6=((C_word*)((C_word*)t0)[10])[1];
f_1398(t6,t3,t4,((C_word*)t0)[9],t5,((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
/* lolevel.scm:186: typerr */
t3=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k2562 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 in ... */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:530: signal */
t2=*((C_word*)lf[99]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2565 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 in ... */
static void C_ccall f_2566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:536: make-property-condition */
t3=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[102],lf[103],((C_word*)((C_word*)t0)[3])[1]);}

/* k2568 in k2565 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in ... */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:531: make-composite-condition */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1805 in null-pointer? in k1112 in k1110 */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_null_pointerp(((C_word*)t0)[3]));}

/* object->pointer in k1112 in k1110 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1808,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1813,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:231: g344 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2649 in doloop670 in release in k2594 in object-release in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2641(t3,((C_word*)t0)[4],t2);}

/* k2712 in k2704 in k2702 in k2697 in evict in k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2713(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2713,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li93),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2715(t5,((C_word*)t0)[6],t1);}

/* null-pointer? in k1112 in k1110 */
static void C_ccall f_1802(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1802,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1806,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:228: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t3,t2,lf[30]);}

/* doloop688 in k2712 in k2704 in k2702 in k2697 in evict in k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2715(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2715,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2735,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* lolevel.scm:582: evict */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2686(t5,t3,t4);}}

/* release in k2594 in object-release in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2600(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2600,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_block_size(t2);
t4=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_byteblockp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3409,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:565: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),t7,C_block_address(&a,1,t2));}
else{
t7=(C_truep(C_specialp(t2))?C_fix(1):C_fix(0));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2641,a[2]=t3,a[3]=t9,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word)li89),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_2641(t11,t6,t7);}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2746 in k2697 in evict in k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_bytes(C_fix(1));
t3=((C_word*)t0)[2];
f_2703(t3,C_fixnum_plus(t1,t2));}

/* k2875 in k2870 in k2868 in mutate-procedure! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2876,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2878,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:623: proc */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2870 in k2868 in mutate-procedure! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2871,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=C_words(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:622: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t4,t3);}

/* f_1488 */
static void C_ccall f_1488(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1488,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_safe_pointerp(t2));}

/* f_1486 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1486,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1492,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:62: g229 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2877 in k2875 in k2870 in k2868 in mutate-procedure! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* checkn2 in move-memory! in k1112 in k1110 */
static void C_fcall f_1398(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1398,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1405,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=C_fixnum_difference(t3,t5);
if(C_truep(C_fixnum_less_or_equal_p(t2,t8))){
t9=C_fixnum_difference(t4,t6);
t10=t7;
f_1405(t10,C_fixnum_less_or_equal_p(t2,t9));}
else{
t9=t7;
f_1405(t9,C_SCHEME_FALSE);}}

/* mutate-procedure! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2865(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2865,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2869,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:618: ##sys#check-closure */
t5=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[116]);}

/* k2859 in object-become! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:615: ##sys#become! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[114]+1)))(3,*((C_word*)lf[114]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2868 in mutate-procedure! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:619: ##sys#check-closure */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[116]);}

/* checkn1 in move-memory! in k1112 in k1110 */
static void C_fcall f_1383(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1383,NULL,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_difference(t3,t4);
if(C_truep(C_fixnum_less_or_equal_p(t2,t5))){
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* lolevel.scm:149: sizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1377(t6,t1,C_a_i_list(&a,2,t2,t3));}}

/* object-become! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2856(C_word c,C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2856,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2860,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_i_check_list_2(t4,lf[113]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1141,a[2]=t7,a[3]=t4,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1141(t9,t3,t4);}

/* k2522 in doloop638 in k2502 in k2494 in k2492 in k2490 in k2488 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in ... */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_set_i_slot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2505(t4,((C_word*)t0)[5],t3);}

/* object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2754(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2754r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2754r(t0,t1,t2,t3);}}

static void C_ccall f_2754r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2761,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:586: make-hash-table */
t7=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,*((C_word*)lf[96]+1));}

/* sizerr in move-memory! in k1112 in k1110 */
static void C_fcall f_1377(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1377,NULL,3,t0,t1,t2);}
C_apply(8,0,t1,*((C_word*)lf[10]+1),lf[8],lf[12],((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k2842 in doloop727 in k2817 in k2815 in k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2825(t4,((C_word*)t0)[5],t3);}

/* nosizerr in move-memory! in k1112 in k1110 */
static void C_fcall f_1371(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1371,NULL,2,t0,t1);}
/* lolevel.scm:141: ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,lf[8],lf[11],((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2594 in object-release in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2595(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2595,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2600,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2600(t7,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* object-release in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2591(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2591r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2591r(t0,t1,t2,t3);}}

static void C_ccall f_2591r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2595,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_2595(t6,C_u_i_car(t5));}
else{
t5=t4;
f_2595(t5,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2666,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));}}

/* k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2781(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2781,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2793,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* lolevel.scm:593: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(3,*((C_word*)lf[112]+1),t2,t3);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* lolevel.scm:598: ##sys#intern-symbol */
C_string_to_symbol(3,0,t2,t3);}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2816,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:603: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t3,t2);}}}}

/* k2582 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:516: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),((C_word*)t0)[2],t1);}

/* object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2677,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2681,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:569: make-hash-table */
t4=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[96]+1));}

/* k2574 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_bytes(C_fix(1));
t3=((C_word*)t0)[2];
f_2487(t3,C_fixnum_plus(t1,t2));}

/* f_1893 in k1889 in tag-pointer in k1112 in k1110 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1893,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1891 in k1889 in tag-pointer in k1112 in k1110 */
static void C_ccall f_1892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1897 in k1889 in tag-pointer in k1112 in k1110 */
static void C_ccall f_1899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_copy_pointer(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:267: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[5],t2,lf[37],((C_word*)t0)[2]);}}

/* k1889 in tag-pointer in k1112 in k1110 */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1892,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1893,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1899,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:265: g388 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}

/* number-of-slots in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2196,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2200,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_a_i_list(&a,1,lf[77]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1203,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1216,a[2]=t1,a[3]=t2,a[4]=t5,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:111: g94 */
t8=t6;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}

/* k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2194,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1 /* (set! block-ref ...) */,t1);
t3=C_mutate((C_word*)lf[77]+1 /* (set! number-of-slots ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2196,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[79]+1 /* (set! number-of-bytes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2205,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[81]+1 /* (set! make-record-instance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2227,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[83]+1 /* (set! record-instance? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2236,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[84]+1 /* (set! record-instance-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[85]+1 /* (set! record-instance-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2279,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[86]+1 /* (set! record-instance-slot-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2291,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3099,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:467: getter-with-setter */
t12=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t10,t11,*((C_word*)lf[86]+1),lf[130]);}

/* make-pointer-vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2892(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_2892r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2892r(t0,t1,t2,t3);}}

static void C_ccall f_2892r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?((C_word*)t0)[2]:C_i_car(t3));
t6=C_i_check_exact_2(t2,lf[119]);
t7=C_fudge(C_fix(7));
t8=C_fixnum_times(t2,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2905,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:637: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[122]+1)))(3,*((C_word*)lf[122]+1),t9,t8);}

/* tag-pointer in k1112 in k1110 */
static void C_ccall f_1886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1886,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1890,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:264: ##sys#make-tagged-pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t4,t3);}

/* k1880 in k1870 in align-to-word in k1112 in k1110 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:254: align */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k2179 in set-procedure-data! in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* lolevel.scm:409: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],lf[4],lf[72],lf[73],((C_word*)t0)[2]);}}

/* k2794 in k2792 in k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2792 in k2780 in copy in k2760 in object-unevict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2793,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2795,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:594: hash-table-set! */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* k1735 in doloop300 in k1704 in copy in object-copy in k1112 in k1110 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_1718(t4,((C_word*)t0)[5],t3);}

/* k2886 in k2875 in k2870 in k2868 in mutate-procedure! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2887,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
/* lolevel.scm:623: ##sys#become! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[114]+1)))(3,*((C_word*)lf[114]+1),((C_word*)t0)[3],t3);}

/* evict in k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2686(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2686,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2699,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:572: hash-table-ref/default */
t4=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(0));}}

/* f3409 in release in k2594 in object-release in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f3409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:564: free */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2681,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2686,a[2]=t3,a[3]=t1,a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2686(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_1325 in k1112 in k1110 */
static void C_ccall f_1325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_1325,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t8=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(t4);
t10=C_i_foreign_fixnum_argumentp(t5);
t11=C_i_foreign_fixnum_argumentp(t6);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub170(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* set-procedure-data! in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2176,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2180,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:406: extend-procedure */
t5=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k3068 in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3070,2,t0,t1);}
t2=C_mutate((C_word*)lf[126]+1 /* (set! pointer-vector-ref ...) */,t1);
t3=C_mutate((C_word*)lf[127]+1 /* (set! pointer-vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3072,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* pointer-vector-length in k3068 in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3072,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[120],lf[127]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f_1300 in k1112 in k1110 */
static void C_ccall f_1300(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_1300,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t8=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(t4);
t10=C_i_foreign_fixnum_argumentp(t5);
t11=C_i_foreign_fixnum_argumentp(t6);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub154(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* k1537 in k1528 in k1512 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:175: memmove3 */
t2=((C_word*)t0)[2];
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k2166 in procedure-data in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_slot(t1,C_fix(1)):C_SCHEME_FALSE));}

/* doloop300 in k1704 in copy in object-copy in k1112 in k1110 */
static void C_fcall f_1718(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1718,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1736,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:204: copy */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1679(t5,t3,t4);}}

/* f_3081 in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3081,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[120],lf[126]);
t5=C_i_check_exact_2(t3,lf[126]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3088,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
/* lolevel.scm:689: ##sys#check-range */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(5,*((C_word*)lf[87]+1),t6,t3,C_fix(0),t7);}

/* k3087 */
static void C_ccall f_3088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3088,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t3;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub803(t5,t2,t6));}

/* f_3118 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3118(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3118,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_f64_ref(&a,1,t2));}

/* f_1568 in k1558 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1568(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1568,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1570,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1574,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:62: g266 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* record-instance-slot-set! in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2291,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2295,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:462: ##sys#check-generic-structure */
f_1175(t5,t2,C_a_i_list(&a,1,lf[86]));}

/* f_2153 */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2153,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[65],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2296 in k2294 in record-instance-slot-set! in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_setslot(((C_word*)t0)[4],t2,((C_word*)t0)[5]));}

/* k2294 in record-instance-slot-set! in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[4]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:463: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(6,*((C_word*)lf[87]+1),t2,((C_word*)t0)[2],C_fix(0),t4,lf[86]);}

/* f_3099 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3099,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3102,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:469: ##sys#check-generic-structure */
f_1175(t4,t2,C_a_i_list(&a,1,lf[88]));}

/* move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_fcall f_1433(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(19);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1433,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_structurep(t2))){
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
t5=C_slot(t2,C_fix(1));
/* lolevel.scm:165: move */
t11=t1;
t12=t5;
t13=t3;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
/* lolevel.scm:166: typerr */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}}
else{
if(C_truep(C_structurep(t3))){
t4=C_slot(t3,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
t5=C_slot(t3,C_fix(1));
/* lolevel.scm:169: move */
t11=t1;
t12=t2;
t13=t5;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
/* lolevel.scm:170: typerr */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1486,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[4],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* lolevel.scm:171: g223 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}}

/* k2697 in evict in k2680 in object-size in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2699,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
/* lolevel.scm:576: align-to-word */
t5=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t5=C_bytes(t2);
t6=C_bytes(C_fix(1));
t7=t3;
f_2703(t7,C_fixnum_plus(t5,t6));}}}

/* procedure-data in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2140,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2148,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2168,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:401: g508 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2282 in record-instance-length in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_difference(t2,C_fix(1)));}

/* f_2148 in procedure-data in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2148(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2148,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2153,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:392: ##sys#lambda-decoration */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t1,t2,t3);}

/* ##sys#check-block in k1112 in k1110 */
static void C_fcall f_1115(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1115,NULL,3,t1,t2,t3);}
if(C_truep(C_blockp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=C_u_i_car(t5);
/* lolevel.scm:83: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,t4,t6,t2);}
else{
/* lolevel.scm:83: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,t4,C_SCHEME_FALSE,t2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_lolevel_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("lolevel_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1267)){
C_save(t1);
C_rereclaim2(1267*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,144);
lf[1]=C_h_intern(&lf[1],14,"\003syserror-hook");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000#bad argument type - not a structure");
lf[6]=C_h_intern(&lf[6],17,"\003syscheck-pointer");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a pointer");
lf[8]=C_h_intern(&lf[8],12,"move-memory!");
lf[9]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004mmap\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\010"
"s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64ve"
"ctor\376\377\016");
lf[10]=C_h_intern(&lf[10],9,"\003syserror");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\034need number of bytes to move");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000!number of bytes to move too large");
lf[13]=C_h_intern(&lf[13],15,"\003sysbytevector\077");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\033negative destination offset");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\026negative source offset");
lf[16]=C_h_intern(&lf[16],11,"object-copy");
lf[17]=C_h_intern(&lf[17],15,"\003sysmake-vector");
lf[18]=C_h_intern(&lf[18],8,"allocate");
lf[19]=C_h_intern(&lf[19],4,"free");
lf[20]=C_h_intern(&lf[20],8,"pointer\077");
lf[21]=C_h_intern(&lf[21],13,"pointer-like\077");
lf[22]=C_h_intern(&lf[22],16,"address->pointer");
lf[23]=C_h_intern(&lf[23],20,"\003sysaddress->pointer");
lf[24]=C_h_intern(&lf[24],17,"\003syscheck-integer");
lf[25]=C_h_intern(&lf[25],16,"pointer->address");
lf[26]=C_h_intern(&lf[26],20,"\003syspointer->address");
lf[27]=C_h_intern(&lf[27],17,"\003syscheck-special");
lf[28]=C_h_intern(&lf[28],12,"null-pointer");
lf[29]=C_h_intern(&lf[29],16,"\003sysnull-pointer");
lf[30]=C_h_intern(&lf[30],13,"null-pointer\077");
lf[31]=C_h_intern(&lf[31],15,"object->pointer");
lf[32]=C_h_intern(&lf[32],15,"pointer->object");
lf[33]=C_h_intern(&lf[33],9,"pointer=\077");
lf[34]=C_h_intern(&lf[34],8,"pointer+");
lf[35]=C_h_intern(&lf[35],13,"align-to-word");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a pointer or integer");
lf[37]=C_h_intern(&lf[37],11,"tag-pointer");
lf[38]=C_h_intern(&lf[38],23,"\003sysmake-tagged-pointer");
lf[39]=C_h_intern(&lf[39],15,"tagged-pointer\077");
lf[40]=C_h_intern(&lf[40],11,"pointer-tag");
lf[41]=C_h_intern(&lf[41],13,"make-locative");
lf[42]=C_h_intern(&lf[42],17,"\003sysmake-locative");
lf[43]=C_h_intern(&lf[43],18,"make-weak-locative");
lf[44]=C_h_intern(&lf[44],13,"locative-set!");
lf[45]=C_h_intern(&lf[45],12,"locative-ref");
lf[46]=C_h_intern(&lf[46],16,"locative->object");
lf[47]=C_h_intern(&lf[47],9,"locative\077");
lf[48]=C_h_intern(&lf[48],15,"pointer-u8-set!");
lf[49]=C_h_intern(&lf[49],15,"pointer-s8-set!");
lf[50]=C_h_intern(&lf[50],16,"pointer-u16-set!");
lf[51]=C_h_intern(&lf[51],16,"pointer-s16-set!");
lf[52]=C_h_intern(&lf[52],16,"pointer-u32-set!");
lf[53]=C_h_intern(&lf[53],16,"pointer-s32-set!");
lf[54]=C_h_intern(&lf[54],16,"pointer-f32-set!");
lf[55]=C_h_intern(&lf[55],16,"pointer-f64-set!");
lf[56]=C_h_intern(&lf[56],14,"pointer-u8-ref");
lf[57]=C_h_intern(&lf[57],14,"pointer-s8-ref");
lf[58]=C_h_intern(&lf[58],15,"pointer-u16-ref");
lf[59]=C_h_intern(&lf[59],15,"pointer-s16-ref");
lf[60]=C_h_intern(&lf[60],15,"pointer-u32-ref");
lf[61]=C_h_intern(&lf[61],15,"pointer-s32-ref");
lf[62]=C_h_intern(&lf[62],15,"pointer-f32-ref");
lf[63]=C_h_intern(&lf[63],15,"pointer-f64-ref");
lf[64]=C_h_intern(&lf[64],8,"extended");
lf[66]=C_h_intern(&lf[66],16,"extend-procedure");
lf[67]=C_h_intern(&lf[67],19,"\003sysdecorate-lambda");
lf[68]=C_h_intern(&lf[68],17,"\003syscheck-closure");
lf[69]=C_h_intern(&lf[69],19,"extended-procedure\077");
lf[70]=C_h_intern(&lf[70],21,"\003syslambda-decoration");
lf[71]=C_h_intern(&lf[71],14,"procedure-data");
lf[72]=C_h_intern(&lf[72],19,"set-procedure-data!");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000-bad argument type - not an extended procedure");
lf[74]=C_h_intern(&lf[74],10,"block-set!");
lf[75]=C_h_intern(&lf[75],14,"\003sysblock-set!");
lf[76]=C_h_intern(&lf[76],9,"block-ref");
lf[77]=C_h_intern(&lf[77],15,"number-of-slots");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a vector-like object");
lf[79]=C_h_intern(&lf[79],15,"number-of-bytes");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\0002cannot compute number of bytes of immediate object");
lf[81]=C_h_intern(&lf[81],20,"make-record-instance");
lf[82]=C_h_intern(&lf[82],18,"\003sysmake-structure");
lf[83]=C_h_intern(&lf[83],16,"record-instance\077");
lf[84]=C_h_intern(&lf[84],20,"record-instance-type");
lf[85]=C_h_intern(&lf[85],22,"record-instance-length");
lf[86]=C_h_intern(&lf[86],25,"record-instance-slot-set!");
lf[87]=C_h_intern(&lf[87],15,"\003syscheck-range");
lf[88]=C_h_intern(&lf[88],20,"record-instance-slot");
lf[89]=C_h_intern(&lf[89],14,"record->vector");
lf[90]=C_h_intern(&lf[90],15,"object-evicted\077");
lf[91]=C_h_intern(&lf[91],12,"object-evict");
lf[92]=C_h_intern(&lf[92],15,"hash-table-set!");
lf[93]=C_h_intern(&lf[93],19,"\003sysundefined-value");
lf[94]=C_h_intern(&lf[94],22,"hash-table-ref/default");
lf[95]=C_h_intern(&lf[95],15,"make-hash-table");
lf[96]=C_h_intern(&lf[96],3,"eq\077");
lf[97]=C_h_intern(&lf[97],24,"object-evict-to-location");
lf[98]=C_h_intern(&lf[98],24,"\003sysset-pointer-address!");
lf[99]=C_h_intern(&lf[99],6,"signal");
lf[100]=C_h_intern(&lf[100],24,"make-composite-condition");
lf[101]=C_h_intern(&lf[101],23,"make-property-condition");
lf[102]=C_h_intern(&lf[102],5,"evict");
lf[103]=C_h_intern(&lf[103],5,"limit");
lf[104]=C_h_intern(&lf[104],3,"exn");
lf[105]=C_h_intern(&lf[105],8,"location");
lf[106]=C_h_intern(&lf[106],7,"message");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000$cannot evict object - limit exceeded");
lf[108]=C_h_intern(&lf[108],9,"arguments");
lf[109]=C_h_intern(&lf[109],14,"object-release");
lf[110]=C_h_intern(&lf[110],11,"object-size");
lf[111]=C_h_intern(&lf[111],14,"object-unevict");
lf[112]=C_h_intern(&lf[112],15,"\003sysmake-string");
lf[113]=C_h_intern(&lf[113],14,"object-become!");
lf[114]=C_h_intern(&lf[114],11,"\003sysbecome!");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000:bad argument type - not an a-list of non-immediate objects");
lf[116]=C_h_intern(&lf[116],17,"mutate-procedure!");
lf[117]=C_h_intern(&lf[117],16,"mutate-procedure");
lf[118]=C_h_intern(&lf[118],5,"unset");
lf[119]=C_h_intern(&lf[119],19,"make-pointer-vector");
lf[120]=C_h_intern(&lf[120],14,"pointer-vector");
lf[122]=C_h_intern(&lf[122],13,"\003sysmake-blob");
lf[123]=C_h_intern(&lf[123],15,"pointer-vector\077");
lf[124]=C_h_intern(&lf[124],20,"pointer-vector-fill!");
lf[125]=C_h_intern(&lf[125],19,"pointer-vector-set!");
lf[126]=C_h_intern(&lf[126],18,"pointer-vector-ref");
lf[127]=C_h_intern(&lf[127],21,"pointer-vector-length");
lf[128]=C_h_intern(&lf[128],18,"getter-with-setter");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\031(pointer-vector-ref pv i)");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\032(record-instance-slot x i)");
lf[131]=C_h_intern(&lf[131],13,"\003sysblock-ref");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\017(block-ref x i)");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-f64-ref p)");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-f32-ref p)");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-s32-ref p)");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-u32-ref p)");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-s16-ref p)");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-u16-ref p)");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\022(pointer-s8-ref p)");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\022(pointer-u8-ref p)");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\022(locative-ref loc)");
lf[142]=C_h_intern(&lf[142],17,"register-feature!");
lf[143]=C_h_intern(&lf[143],7,"lolevel");
C_register_lf2(lf,144,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1111,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* f_1350 in k1112 in k1110 */
static void C_ccall f_1350(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1350,3,t0,t1,t2);}
t3=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:132: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,t3,lf[8],t2);}

/* k1112 in k1110 */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
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
C_word ab[100],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1113,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! ##sys#check-block ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1115,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[2] /* (set! ##sys#check-generic-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1175,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#check-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1228,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1250,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1275,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1300,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1325,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1350,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t10=lf[9];
t11=C_mutate((C_word*)lf[8]+1 /* (set! move-memory! ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1355,a[2]=t10,a[3]=t9,a[4]=t5,a[5]=t7,a[6]=t6,a[7]=t8,a[8]=((C_word)li21),tmp=(C_word)a,a+=9,tmp));
t12=C_mutate((C_word*)lf[16]+1 /* (set! object-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1673,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[18]+1 /* (set! allocate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1745,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[19]+1 /* (set! free ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1752,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[20]+1 /* (set! pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1763,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[21]+1 /* (set! pointer-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1772,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[22]+1 /* (set! address->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1783,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[25]+1 /* (set! pointer->address ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1792,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[28]+1 /* (set! null-pointer ...) */,*((C_word*)lf[29]+1));
t20=C_mutate((C_word*)lf[30]+1 /* (set! null-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1802,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[31]+1 /* (set! object->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1808,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[32]+1 /* (set! pointer->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1819,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[33]+1 /* (set! pointer=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1825,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[34]+1 /* (set! pointer+ ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1833,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1847,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
t26=C_mutate((C_word*)lf[35]+1 /* (set! align-to-word ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1852,a[2]=t25,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp));
t27=C_mutate((C_word*)lf[37]+1 /* (set! tag-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1886,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[39]+1 /* (set! tagged-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1905,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[40]+1 /* (set! pointer-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1935,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[41]+1 /* (set! make-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1958,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[43]+1 /* (set! make-weak-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1974,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[44]+1 /* (set! locative-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1990,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_locative_ref,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:310: getter-with-setter */
t35=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t35+1)))(5,t35,t33,t34,*((C_word*)lf[44]+1),lf[141]);}

/* k1110 */
static void C_ccall f_1111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:53: register-feature! */
t3=*((C_word*)lf[142]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[143]);}

/* record-instance-type in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2270,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2274,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:454: ##sys#check-generic-structure */
f_1175(t3,t2,C_a_i_list(&a,1,lf[84]));}

/* tagged-pointer? in k1112 in k1110 */
static void C_ccall f_1905(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1905r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1905r(t0,t1,t2,t3);}}

static void C_ccall f_1905r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(C_blockp(t2))){
if(C_truep(C_taggedpointerp(t2))){
t6=C_i_not(t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_slot(t2,C_fix(1));
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_equalp(t5,t7));}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* record-instance-length in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2279(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2279,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2283,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:458: ##sys#check-generic-structure */
f_1175(t3,t2,C_a_i_list(&a,1,lf[85]));}

/* k2273 in record-instance-type in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(0)));}

/* k2136 in extended-procedure? in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* k1540 in k1528 in k1512 in k1496 in move in k1427 in k1425 in k1423 in k1421 in move-memory! in k1112 in k1110 */
static void C_ccall f_1542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:175: checkn1 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1383(t3,((C_word*)t0)[4],t1,t2,((C_word*)t0)[5]);}

/* pv-buf-set! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static C_word C_fcall f_3030(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
t4=C_i_foreign_fixnum_argumentp(t2);
if(C_truep(t3)){
t5=C_i_foreign_pointer_argumentp(t3);
return(stub812(C_SCHEME_UNDEFINED,t1,t4,t5));}
else{
return(stub812(C_SCHEME_UNDEFINED,t1,t4,C_SCHEME_FALSE));}}

/* k1830 in k1828 in pointer=? in k1112 in k1110 */
static void C_ccall f_1831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_pointer_eqp(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* pointer+ in k1112 in k1110 */
static void C_ccall f_1833(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1833,4,t0,t1,t2,t3);}
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_integer_argumentp(t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub362(t4,t5,t6));}

/* move-memory! in k1112 in k1110 */
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+46)){
C_save_and_reclaim((void*)tr4r,(void*)f_1355r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1355r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1355r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(46);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_fix(0):C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1371,a[2]=t2,a[3]=t3,a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp));
t26=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1377,a[2]=t2,a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t27=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1383,a[2]=t20,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1398,a[2]=t20,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t29=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t14,a[6]=t10,a[7]=t6,a[8]=t18,a[9]=((C_word*)t0)[5],a[10]=t22,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=t24,a[14]=t1,a[15]=t2,a[16]=t3,tmp=(C_word)a,a+=17,tmp);
/* lolevel.scm:156: ##sys#check-block */
f_1115(t29,t2,C_a_i_list(&a,1,lf[8]));}

/* k2914 in k2904 in make-pointer-vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li102),tmp=(C_word)a,a+=6,tmp);
t3=f_2920(t2,C_fix(0));
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record3(&a,3,lf[120],((C_word*)t0)[2],((C_word*)t0)[3]));}

/* f_2123 */
static void C_ccall f_2123(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2123,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[65],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer=? in k1112 in k1110 */
static void C_ccall f_1825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1825,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1829,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:240: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t4,t2,lf[33]);}

/* pointer-vector-set! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3044,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[120],lf[126]);
t6=C_i_check_exact_2(t3,lf[126]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3052,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=C_slot(t2,C_fix(1));
/* lolevel.scm:680: ##sys#check-range */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(5,*((C_word*)lf[87]+1),t7,t3,C_fix(0),t8);}

/* k1828 in pointer=? in k1112 in k1110 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:241: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t2,((C_word*)t0)[4],lf[33]);}

/* k1822 in pointer->object in k1112 in k1110 */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_pointer_to_object(((C_word*)t0)[3]));}

/* k2249 in record-instance? in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_not(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_slot(((C_word*)t0)[4],C_fix(0));
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(((C_word*)t0)[2],t3));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2904 in make-pointer-vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2905,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record3(&a,3,lf[120],((C_word*)t0)[5],t1));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2915,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* lolevel.scm:640: ##sys#check-pointer */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[119]);}
else{
t4=t3;
f_2915(2,t4,C_SCHEME_UNDEFINED);}}}

/* k3051 in pointer-vector-set! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* lolevel.scm:681: ##sys#check-pointer */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[125]);}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(2));
/* lolevel.scm:682: pv-buf-set! */
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3030(t3,((C_word*)t0)[4],((C_word*)t0)[5]));}}

/* k3053 in k3051 in pointer-vector-set! in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(2));
/* lolevel.scm:682: pv-buf-set! */
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_3030(t2,((C_word*)t0)[4],((C_word*)t0)[5]));}

/* f_2245 in record-instance? in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2245,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_structurep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1214 in number-of-slots in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_1216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_block_size(((C_word*)t0)[3]));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=C_u_i_car(((C_word*)t0)[4]);
/* lolevel.scm:112: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[5],lf[4],t2,lf[78],((C_word*)t0)[6]);}
else{
/* lolevel.scm:112: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[4],C_SCHEME_FALSE,lf[78],((C_word*)t0)[6]);}}}

/* k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2070,2,t0,t1);}
t2=C_mutate((C_word*)lf[63]+1 /* (set! pointer-f64-ref ...) */,t1);
t3=C_a_i_vector1(&a,1,lf[64]);
t4=C_mutate(&lf[65] /* (set! xproc-tag ...) */,t3);
t5=C_mutate((C_word*)lf[66]+1 /* (set! extend-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2076,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[69]+1 /* (set! extended-procedure? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2107,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[71]+1 /* (set! procedure-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2140,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[72]+1 /* (set! set-procedure-data! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2176,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[74]+1 /* (set! block-set! ...) */,*((C_word*)lf[75]+1));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:419: getter-with-setter */
t11=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,*((C_word*)lf[131]+1),*((C_word*)lf[75]+1),lf[132]);}

/* extend-procedure in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2076,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2080,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:385: ##sys#check-closure */
t5=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[66]);}

/* f_1203 in number-of-slots in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1203,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_not(t3));}
else{
t4=C_byteblockp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_not(t4));}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* record-instance? in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2236(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2236r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2236r(t0,t1,t2,t3);}}

static void C_ccall f_2236r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2245,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2251,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:449: g545 */
t8=t6;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2062,2,t0,t1);}
t2=C_mutate((C_word*)lf[61]+1 /* (set! pointer-s32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2066,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3121,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:367: getter-with-setter */
t5=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[54]+1),lf[134]);}

/* k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2066,2,t0,t1);}
t2=C_mutate((C_word*)lf[62]+1 /* (set! pointer-f32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3118,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:373: getter-with-setter */
t5=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[55]+1),lf[133]);}

/* make-record-instance in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_2227r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2227r(t0,t1,t2,t3);}}

static void C_ccall f_2227r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=C_i_check_symbol_2(t2,lf[81]);
C_apply(5,0,t1,*((C_word*)lf[82]+1),t2,t3);}

/* k2395 in k2387 in k2385 in k2383 in k2380 in k2373 in evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in ... */
static void C_fcall f_2396(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2396,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li82),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2398(t5,((C_word*)t0)[6],t1);}

/* doloop602 in k2395 in k2387 in k2385 in k2383 in k2380 in k2373 in evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in ... */
static void C_fcall f_2398(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2398,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* lolevel.scm:507: evict */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2365(t5,t3,t4);}}

/* k2389 in k2387 in k2385 in k2383 in k2380 in k2373 in evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in ... */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_3121 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3121(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3121,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_f32_ref(&a,1,t2));}

/* f_3127 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3127(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3127,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_u32_ref(&a,1,t2));}

/* f_3124 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3124,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_s32_ref(&a,1,t2));}

/* k2387 in k2385 in k2383 in k2380 in k2373 in evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in ... */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2396,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2396(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2396(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2385 in k2383 in k2380 in k2373 in evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 in ... */
static void C_fcall f_2386(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2386,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:502: hash-table-set! */
t3=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k2383 in k2380 in k2373 in evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2384,2,t0,t1);}
t2=C_evict_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2386,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t4=*((C_word*)lf[93]+1);
t5=t3;
f_2386(t5,C_i_set_i_slot(t2,C_fix(0),*((C_word*)lf[93]+1)));}
else{
t4=t3;
f_2386(t4,C_SCHEME_UNDEFINED);}}

/* k2380 in k2373 in evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_bytes(C_fix(1));
t4=C_fixnum_plus(t1,t3);
/* lolevel.scm:500: allocator */
t5=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t2,t4);}

/* k2494 in k2492 in k2490 in k2488 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in ... */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2503(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2503(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in ... */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2490 in k2488 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in ... */
static void C_fcall f_2491(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2491,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2538,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:539: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),t3,((C_word*)t0)[9]);}

/* k2492 in k2490 in k2488 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in ... */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:540: hash-table-set! */
t3=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[3]);}

/* f_3133 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3133,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_u16_ref(t2));}

/* f_3130 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3130(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3130,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_s16_ref(t2));}

/* f_3136 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_3136(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3136,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_s8_ref(t2));}

/* f_3139 in k1994 in k1112 in k1110 */
static void C_ccall f_3139(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3139,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_u8_ref(t2));}

/* k2373 in evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2374,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
/* lolevel.scm:499: align-to-word */
t4=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t4=t3;
f_2381(2,t4,C_bytes(t2));}}}

/* k2488 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 in ... */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2489,2,t0,t1);}
t2=C_evict_block(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2491,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t4=*((C_word*)lf[93]+1);
t5=t3;
f_2491(t5,C_i_set_i_slot(t2,C_fix(0),*((C_word*)lf[93]+1)));}
else{
t4=t3;
f_2491(t4,C_SCHEME_UNDEFINED);}}

/* k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2487(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2487,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[8])[1])){
t3=C_fixnum_difference(((C_word*)((C_word*)t0)[8])[1],t1);
t4=C_mutate(((C_word *)((C_word*)t0)[8])+1,t3);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[8])[1],C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2566,a[2]=t5,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[8])[1]);
/* lolevel.scm:532: make-property-condition */
t8=*((C_word*)lf[101]+1);
((C_proc9)(void*)(*((C_word*)t8+1)))(9,t8,t6,lf[104],lf[105],lf[97],lf[106],lf[107],lf[108],t7);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t2;
f_2489(2,t6,t5);}}
else{
t3=t2;
f_2489(2,t3,C_SCHEME_UNDEFINED);}}

/* k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2480,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2575,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
/* lolevel.scm:525: align-to-word */
t5=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t5=C_bytes(t2);
t6=C_bytes(C_fix(1));
t7=t3;
f_2487(t7,C_fixnum_plus(t5,t6));}}}

/* evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_fcall f_2471(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2471,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2480,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:521: hash-table-ref/default */
t4=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* pointer-u16-set! in k1994 in k1112 in k1110 */
static void C_ccall f_2016(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2016,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_u16_set(t2,t3));}

/* pointer-s8-set! in k1994 in k1112 in k1110 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2012,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_s8_set(t2,t3));}

/* pointer-u8-set! in k1994 in k1112 in k1110 */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2008,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_u8_set(t2,t3));}

/* locative? in k1994 in k1112 in k1110 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2002,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_locativep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2632 in k2626 in release in k2594 in object-release in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:564: free */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k2322 in k2318 in record->vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2328(t2,C_fix(0)));}

/* doloop573 in k2322 in k2318 in record->vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static C_word C_fcall f_2328(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];
return(t2);}
else{
t2=C_slot(((C_word*)t0)[4],t1);
t3=C_i_setslot(((C_word*)t0)[3],t1,t2);
t4=C_fixnum_plus(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}}

/* k2537 in k2490 in k2488 in k2486 in k2479 in evict in k2463 in k2461 in k2459 in k2457 in object-evict-to-location in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in ... */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2538,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* lolevel.scm:539: ##sys#set-pointer-address! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[98]+1)))(4,*((C_word*)lf[98]+1),((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* f_2666 in object-release in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2666,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub659(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub659(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
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
C_word ab[55],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
t2=C_mutate((C_word*)lf[88]+1 /* (set! record-instance-slot ...) */,t1);
t3=C_mutate((C_word*)lf[89]+1 /* (set! record->vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2315,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[90]+1 /* (set! object-evicted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2348,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[91]+1 /* (set! object-evict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2352,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[97]+1 /* (set! object-evict-to-location ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2454,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[109]+1 /* (set! object-release ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2591,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[110]+1 /* (set! object-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2677,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[111]+1 /* (set! object-unevict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2754,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[113]+1 /* (set! object-become! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[116]+1 /* (set! mutate-procedure! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[117]+1 /* (set! mutate-procedure ...) */,*((C_word*)lf[116]+1));
t13=C_a_i_list1(&a,1,lf[118]);
t14=C_mutate((C_word*)lf[119]+1 /* (set! make-pointer-vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2892,a[2]=t13,a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[123]+1 /* (set! pointer-vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2946,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[120]+1 /* (set! pointer-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2952,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[124]+1 /* (set! pointer-vector-fill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2988,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[121] /* (set! pv-buf-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[125]+1 /* (set! pointer-vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3044,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3081,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:685: getter-with-setter */
t22=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t22+1)))(5,t22,t20,t21,*((C_word*)lf[125]+1),lf[129]);}

/* record->vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2315(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2315,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2319,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:476: ##sys#check-generic-structure */
f_1175(t3,t2,C_a_i_list(&a,1,lf[89]));}

/* k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2050,2,t0,t1);}
t2=C_mutate((C_word*)lf[58]+1 /* (set! pointer-u16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2054,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3130,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:349: getter-with-setter */
t5=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[51]+1),lf[137]);}

/* k2318 in record->vector in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2319,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2323,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:478: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t3,t2);}

/* k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2054,2,t0,t1);}
t2=C_mutate((C_word*)lf[59]+1 /* (set! pointer-s16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3127,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:355: getter-with-setter */
t5=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[52]+1),lf[136]);}

/* k2056 in k2052 in k2048 in k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2058,2,t0,t1);}
t2=C_mutate((C_word*)lf[60]+1 /* (set! pointer-u32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2062,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3124,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:361: getter-with-setter */
t5=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[53]+1),lf[135]);}

/* k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2042,2,t0,t1);}
t2=C_mutate((C_word*)lf[56]+1 /* (set! pointer-u8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2046,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3136,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:337: getter-with-setter */
t5=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[49]+1),lf[139]);}

/* k2044 in k2040 in k1994 in k1112 in k1110 */
static void C_ccall f_2046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2046,2,t0,t1);}
t2=C_mutate((C_word*)lf[57]+1 /* (set! pointer-s8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3133,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:343: getter-with-setter */
t5=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,*((C_word*)lf[50]+1),lf[138]);}

/* k2415 in doloop602 in k2395 in k2387 in k2385 in k2383 in k2380 in k2373 in evict in k2359 in k2357 in k2355 in object-evict in k2311 in k2192 in k2068 in k2064 in k2060 in k2056 in k2052 in k2048 in k2044 in ... */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_set_i_slot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2398(t4,((C_word*)t0)[5],t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[260] = {
{"f_2641:lolevel_2escm",(void*)f_2641},
{"f_2032:lolevel_2escm",(void*)f_2032},
{"f_2703:lolevel_2escm",(void*)f_2703},
{"f_2036:lolevel_2escm",(void*)f_2036},
{"f_2707:lolevel_2escm",(void*)f_2707},
{"f_2705:lolevel_2escm",(void*)f_2705},
{"f_2360:lolevel_2escm",(void*)f_2360},
{"f_2205:lolevel_2escm",(void*)f_2205},
{"f_2365:lolevel_2escm",(void*)f_2365},
{"f_2200:lolevel_2escm",(void*)f_2200},
{"f_2020:lolevel_2escm",(void*)f_2020},
{"f_2735:lolevel_2escm",(void*)f_2735},
{"f_2024:lolevel_2escm",(void*)f_2024},
{"f_2028:lolevel_2escm",(void*)f_2028},
{"f_2820:lolevel_2escm",(void*)f_2820},
{"f_2825:lolevel_2escm",(void*)f_2825},
{"f_2352:lolevel_2escm",(void*)f_2352},
{"f_2356:lolevel_2escm",(void*)f_2356},
{"f_2358:lolevel_2escm",(void*)f_2358},
{"f_2099:lolevel_2escm",(void*)f_2099},
{"f_2118:lolevel_2escm",(void*)f_2118},
{"f_2816:lolevel_2escm",(void*)f_2816},
{"f_2818:lolevel_2escm",(void*)f_2818},
{"f_2080:lolevel_2escm",(void*)f_2080},
{"f_2348:lolevel_2escm",(void*)f_2348},
{"f_2107:lolevel_2escm",(void*)f_2107},
{"f_2085:lolevel_2escm",(void*)f_2085},
{"f_2454:lolevel_2escm",(void*)f_2454},
{"f_2458:lolevel_2escm",(void*)f_2458},
{"f_2806:lolevel_2escm",(void*)f_2806},
{"f_2808:lolevel_2escm",(void*)f_2808},
{"f_2447:lolevel_2escm",(void*)f_2447},
{"f_3102:lolevel_2escm",(void*)f_3102},
{"f_3104:lolevel_2escm",(void*)f_3104},
{"f_3003:lolevel_2escm",(void*)f_3003},
{"f_2460:lolevel_2escm",(void*)f_2460},
{"f_2462:lolevel_2escm",(void*)f_2462},
{"f_2464:lolevel_2escm",(void*)f_2464},
{"f_2466:lolevel_2escm",(void*)f_2466},
{"f_1772:lolevel_2escm",(void*)f_1772},
{"f_1707:lolevel_2escm",(void*)f_1707},
{"f_1705:lolevel_2escm",(void*)f_1705},
{"f_1775:lolevel_2escm",(void*)f_1775},
{"f_1752:lolevel_2escm",(void*)f_1752},
{"f_1763:lolevel_2escm",(void*)f_1763},
{"f_1766:lolevel_2escm",(void*)f_1766},
{"f_1529:lolevel_2escm",(void*)f_1529},
{"f_1521:lolevel_2escm",(void*)f_1521},
{"f_1745:lolevel_2escm",(void*)f_1745},
{"f_1604:lolevel_2escm",(void*)f_1604},
{"f_1559:lolevel_2escm",(void*)f_1559},
{"f_1428:lolevel_2escm",(void*)f_1428},
{"f_1424:lolevel_2escm",(void*)f_1424},
{"f_1426:lolevel_2escm",(void*)f_1426},
{"f_1422:lolevel_2escm",(void*)f_1422},
{"f_1508:lolevel_2escm",(void*)f_1508},
{"f_1504:lolevel_2escm",(void*)f_1504},
{"f_1502:lolevel_2escm",(void*)f_1502},
{"f_1792:lolevel_2escm",(void*)f_1792},
{"f_1796:lolevel_2escm",(void*)f_1796},
{"f_1186:lolevel_2escm",(void*)f_1186},
{"f_1180:lolevel_2escm",(void*)f_1180},
{"f_2994:lolevel_2escm",(void*)f_2994},
{"f_1275:lolevel_2escm",(void*)f_1275},
{"f_1783:lolevel_2escm",(void*)f_1783},
{"f_1787:lolevel_2escm",(void*)f_1787},
{"f_1175:lolevel_2escm",(void*)f_1175},
{"f_1514:lolevel_2escm",(void*)f_1514},
{"f_2988:lolevel_2escm",(void*)f_2988},
{"f_1996:lolevel_2escm",(void*)f_1996},
{"f_1998:lolevel_2escm",(void*)f_1998},
{"f_1990:lolevel_2escm",(void*)f_1990},
{"f_1679:lolevel_2escm",(void*)f_1679},
{"f_1673:lolevel_2escm",(void*)f_1673},
{"f_1161:lolevel_2escm",(void*)f_1161},
{"f_2975:lolevel_2escm",(void*)f_2975},
{"f_1159:lolevel_2escm",(void*)f_1159},
{"f_2964:lolevel_2escm",(void*)f_2964},
{"f_1574:lolevel_2escm",(void*)f_1574},
{"f_1570:lolevel_2escm",(void*)f_1570},
{"f_1974:lolevel_2escm",(void*)f_1974},
{"f_1405:lolevel_2escm",(void*)f_1405},
{"f_1141:lolevel_2escm",(void*)f_1141},
{"f_2952:lolevel_2escm",(void*)f_2952},
{"f_2957:lolevel_2escm",(void*)f_2957},
{"f_1233:lolevel_2escm",(void*)f_1233},
{"f_1237:lolevel_2escm",(void*)f_1237},
{"f_1852:lolevel_2escm",(void*)f_1852},
{"f_2946:lolevel_2escm",(void*)f_2946},
{"f_1958:lolevel_2escm",(void*)f_1958},
{"f_1228:lolevel_2escm",(void*)f_1228},
{"f_1847:lolevel_2escm",(void*)f_1847},
{"f_1586:lolevel_2escm",(void*)f_1586},
{"f_1580:lolevel_2escm",(void*)f_1580},
{"f_1946:lolevel_2escm",(void*)f_1946},
{"f_1250:lolevel_2escm",(void*)f_1250},
{"f_1498:lolevel_2escm",(void*)f_1498},
{"f_1492:lolevel_2escm",(void*)f_1492},
{"f_1878:lolevel_2escm",(void*)f_1878},
{"f_1940:lolevel_2escm",(void*)f_1940},
{"f_1872:lolevel_2escm",(void*)f_1872},
{"f_2920:lolevel_2escm",(void*)f_2920},
{"f_1935:lolevel_2escm",(void*)f_1935},
{"f_2503:lolevel_2escm",(void*)f_2503},
{"f_2505:lolevel_2escm",(void*)f_2505},
{"f_1866:lolevel_2escm",(void*)f_1866},
{"f_1819:lolevel_2escm",(void*)f_1819},
{"f_2627:lolevel_2escm",(void*)f_2627},
{"f_1813:lolevel_2escm",(void*)f_1813},
{"f_2766:lolevel_2escm",(void*)f_2766},
{"f_2761:lolevel_2escm",(void*)f_2761},
{"f_1595:lolevel_2escm",(void*)f_1595},
{"f_2563:lolevel_2escm",(void*)f_2563},
{"f_2566:lolevel_2escm",(void*)f_2566},
{"f_2569:lolevel_2escm",(void*)f_2569},
{"f_1806:lolevel_2escm",(void*)f_1806},
{"f_1808:lolevel_2escm",(void*)f_1808},
{"f_2650:lolevel_2escm",(void*)f_2650},
{"f_2713:lolevel_2escm",(void*)f_2713},
{"f_1802:lolevel_2escm",(void*)f_1802},
{"f_2715:lolevel_2escm",(void*)f_2715},
{"f_2600:lolevel_2escm",(void*)f_2600},
{"f_2747:lolevel_2escm",(void*)f_2747},
{"f_2876:lolevel_2escm",(void*)f_2876},
{"f_2871:lolevel_2escm",(void*)f_2871},
{"f_1488:lolevel_2escm",(void*)f_1488},
{"f_1486:lolevel_2escm",(void*)f_1486},
{"f_2878:lolevel_2escm",(void*)f_2878},
{"f_1398:lolevel_2escm",(void*)f_1398},
{"f_2865:lolevel_2escm",(void*)f_2865},
{"f_2860:lolevel_2escm",(void*)f_2860},
{"f_2869:lolevel_2escm",(void*)f_2869},
{"f_1383:lolevel_2escm",(void*)f_1383},
{"f_2856:lolevel_2escm",(void*)f_2856},
{"f_2523:lolevel_2escm",(void*)f_2523},
{"f_2754:lolevel_2escm",(void*)f_2754},
{"f_1377:lolevel_2escm",(void*)f_1377},
{"f_2843:lolevel_2escm",(void*)f_2843},
{"f_1371:lolevel_2escm",(void*)f_1371},
{"f_2595:lolevel_2escm",(void*)f_2595},
{"f_2591:lolevel_2escm",(void*)f_2591},
{"f_2781:lolevel_2escm",(void*)f_2781},
{"f_2583:lolevel_2escm",(void*)f_2583},
{"f_2677:lolevel_2escm",(void*)f_2677},
{"f_2575:lolevel_2escm",(void*)f_2575},
{"f_1893:lolevel_2escm",(void*)f_1893},
{"f_1892:lolevel_2escm",(void*)f_1892},
{"f_1899:lolevel_2escm",(void*)f_1899},
{"f_1890:lolevel_2escm",(void*)f_1890},
{"f_2196:lolevel_2escm",(void*)f_2196},
{"f_2194:lolevel_2escm",(void*)f_2194},
{"f_2892:lolevel_2escm",(void*)f_2892},
{"f_1886:lolevel_2escm",(void*)f_1886},
{"f_1881:lolevel_2escm",(void*)f_1881},
{"f_2180:lolevel_2escm",(void*)f_2180},
{"f_2795:lolevel_2escm",(void*)f_2795},
{"f_2793:lolevel_2escm",(void*)f_2793},
{"f_1736:lolevel_2escm",(void*)f_1736},
{"f_2887:lolevel_2escm",(void*)f_2887},
{"f_2686:lolevel_2escm",(void*)f_2686},
{"f3409:lolevel_2escm",(void*)f3409},
{"f_2681:lolevel_2escm",(void*)f_2681},
{"f_1325:lolevel_2escm",(void*)f_1325},
{"f_2176:lolevel_2escm",(void*)f_2176},
{"f_3070:lolevel_2escm",(void*)f_3070},
{"f_3072:lolevel_2escm",(void*)f_3072},
{"f_1300:lolevel_2escm",(void*)f_1300},
{"f_1538:lolevel_2escm",(void*)f_1538},
{"f_2168:lolevel_2escm",(void*)f_2168},
{"f_1718:lolevel_2escm",(void*)f_1718},
{"f_3081:lolevel_2escm",(void*)f_3081},
{"f_3088:lolevel_2escm",(void*)f_3088},
{"f_3118:lolevel_2escm",(void*)f_3118},
{"f_1568:lolevel_2escm",(void*)f_1568},
{"f_2291:lolevel_2escm",(void*)f_2291},
{"f_2153:lolevel_2escm",(void*)f_2153},
{"f_2297:lolevel_2escm",(void*)f_2297},
{"f_2295:lolevel_2escm",(void*)f_2295},
{"f_3099:lolevel_2escm",(void*)f_3099},
{"f_1433:lolevel_2escm",(void*)f_1433},
{"f_2699:lolevel_2escm",(void*)f_2699},
{"f_2140:lolevel_2escm",(void*)f_2140},
{"f_2283:lolevel_2escm",(void*)f_2283},
{"f_2148:lolevel_2escm",(void*)f_2148},
{"f_1115:lolevel_2escm",(void*)f_1115},
{"toplevel:lolevel_2escm",(void*)C_lolevel_toplevel},
{"f_1350:lolevel_2escm",(void*)f_1350},
{"f_1113:lolevel_2escm",(void*)f_1113},
{"f_1111:lolevel_2escm",(void*)f_1111},
{"f_2270:lolevel_2escm",(void*)f_2270},
{"f_1905:lolevel_2escm",(void*)f_1905},
{"f_2279:lolevel_2escm",(void*)f_2279},
{"f_2274:lolevel_2escm",(void*)f_2274},
{"f_2138:lolevel_2escm",(void*)f_2138},
{"f_1542:lolevel_2escm",(void*)f_1542},
{"f_3030:lolevel_2escm",(void*)f_3030},
{"f_1831:lolevel_2escm",(void*)f_1831},
{"f_1833:lolevel_2escm",(void*)f_1833},
{"f_1355:lolevel_2escm",(void*)f_1355},
{"f_2915:lolevel_2escm",(void*)f_2915},
{"f_2123:lolevel_2escm",(void*)f_2123},
{"f_1825:lolevel_2escm",(void*)f_1825},
{"f_3044:lolevel_2escm",(void*)f_3044},
{"f_1829:lolevel_2escm",(void*)f_1829},
{"f_1823:lolevel_2escm",(void*)f_1823},
{"f_2251:lolevel_2escm",(void*)f_2251},
{"f_2905:lolevel_2escm",(void*)f_2905},
{"f_3052:lolevel_2escm",(void*)f_3052},
{"f_3054:lolevel_2escm",(void*)f_3054},
{"f_2245:lolevel_2escm",(void*)f_2245},
{"f_1216:lolevel_2escm",(void*)f_1216},
{"f_2070:lolevel_2escm",(void*)f_2070},
{"f_2076:lolevel_2escm",(void*)f_2076},
{"f_1203:lolevel_2escm",(void*)f_1203},
{"f_2236:lolevel_2escm",(void*)f_2236},
{"f_2062:lolevel_2escm",(void*)f_2062},
{"f_2066:lolevel_2escm",(void*)f_2066},
{"f_2227:lolevel_2escm",(void*)f_2227},
{"f_2396:lolevel_2escm",(void*)f_2396},
{"f_2398:lolevel_2escm",(void*)f_2398},
{"f_2390:lolevel_2escm",(void*)f_2390},
{"f_3121:lolevel_2escm",(void*)f_3121},
{"f_3127:lolevel_2escm",(void*)f_3127},
{"f_3124:lolevel_2escm",(void*)f_3124},
{"f_2388:lolevel_2escm",(void*)f_2388},
{"f_2386:lolevel_2escm",(void*)f_2386},
{"f_2384:lolevel_2escm",(void*)f_2384},
{"f_2381:lolevel_2escm",(void*)f_2381},
{"f_2495:lolevel_2escm",(void*)f_2495},
{"f_2497:lolevel_2escm",(void*)f_2497},
{"f_2491:lolevel_2escm",(void*)f_2491},
{"f_2493:lolevel_2escm",(void*)f_2493},
{"f_3133:lolevel_2escm",(void*)f_3133},
{"f_3130:lolevel_2escm",(void*)f_3130},
{"f_3136:lolevel_2escm",(void*)f_3136},
{"f_3139:lolevel_2escm",(void*)f_3139},
{"f_2374:lolevel_2escm",(void*)f_2374},
{"f_2489:lolevel_2escm",(void*)f_2489},
{"f_2487:lolevel_2escm",(void*)f_2487},
{"f_2480:lolevel_2escm",(void*)f_2480},
{"f_2471:lolevel_2escm",(void*)f_2471},
{"f_2016:lolevel_2escm",(void*)f_2016},
{"f_2012:lolevel_2escm",(void*)f_2012},
{"f_2008:lolevel_2escm",(void*)f_2008},
{"f_2002:lolevel_2escm",(void*)f_2002},
{"f_2633:lolevel_2escm",(void*)f_2633},
{"f_2323:lolevel_2escm",(void*)f_2323},
{"f_2328:lolevel_2escm",(void*)f_2328},
{"f_2538:lolevel_2escm",(void*)f_2538},
{"f_2666:lolevel_2escm",(void*)f_2666},
{"f_2313:lolevel_2escm",(void*)f_2313},
{"f_2315:lolevel_2escm",(void*)f_2315},
{"f_2050:lolevel_2escm",(void*)f_2050},
{"f_2319:lolevel_2escm",(void*)f_2319},
{"f_2054:lolevel_2escm",(void*)f_2054},
{"f_2058:lolevel_2escm",(void*)f_2058},
{"f_2042:lolevel_2escm",(void*)f_2042},
{"f_2046:lolevel_2escm",(void*)f_2046},
{"f_2416:lolevel_2escm",(void*)f_2416},
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
o|eliminated procedure checks: 95 
o|specializations:
o|  1 (length list)
o|  3 (cdr pair)
o|  9 (car pair)
o|Removed `not' forms: 9 
o|merged explicitly consed rest parameter: loc63 
o|inlining procedure: k1118 
o|inlining procedure: k1118 
o|inlining procedure: k1125 
o|inlining procedure: k1125 
o|merged explicitly consed rest parameter: loc85 
o|inlining procedure: k1182 
o|inlining procedure: k1182 
o|inlining procedure: k1178 
o|inlining procedure: k1178 
o|inlining procedure: k1191 
o|inlining procedure: k1191 
o|inlining procedure: k1231 
o|inlining procedure: k1231 
o|inlining procedure: k1243 
o|inlining procedure: k1243 
o|merged explicitly consed rest parameter: args207 
o|inlining procedure: k1386 
o|inlining procedure: k1386 
o|consed rest parameter at call site: "(lolevel.scm:149) sizerr204" 1 
o|inlining procedure: k1401 
o|inlining procedure: k1401 
o|consed rest parameter at call site: "(lolevel.scm:154) sizerr204" 1 
o|inlining procedure: k1436 
o|inlining procedure: k1436 
o|inlining procedure: k1465 
o|inlining procedure: k1465 
o|inlining procedure: k1493 
o|inlining procedure: k1493 
o|inlining procedure: k1483 
o|inlining procedure: k1509 
o|inlining procedure: k1509 
o|inlining procedure: k1519 
o|inlining procedure: k1519 
o|inlining procedure: k1525 
o|inlining procedure: k1525 
o|inlining procedure: k1483 
o|inlining procedure: k1575 
o|inlining procedure: k1575 
o|inlining procedure: k1565 
o|inlining procedure: k1588 
o|inlining procedure: k1588 
o|inlining procedure: k1565 
o|consed rest parameter at call site: "(lolevel.scm:157) check-block" 2 
o|consed rest parameter at call site: "(lolevel.scm:156) check-block" 2 
o|contracted procedure: k1684 
o|inlining procedure: k1682 
o|inlining procedure: k1706 
o|inlining procedure: k1706 
o|inlining procedure: k1721 
o|inlining procedure: k1721 
o|inlining procedure: k1682 
o|inlining procedure: k1756 
o|inlining procedure: k1756 
o|inlining procedure: k1777 
o|inlining procedure: k1777 
o|inlining procedure: k1811 
o|inlining procedure: k1811 
o|inlining procedure: k1855 
o|inlining procedure: k1855 
o|inlining procedure: k1868 
o|inlining procedure: k1868 
o|inlining procedure: k1895 
o|inlining procedure: k1895 
o|inlining procedure: k1891 
o|inlining procedure: k1891 
o|inlining procedure: k1911 
o|inlining procedure: k1919 
o|inlining procedure: k1919 
o|inlining procedure: k1911 
o|inlining procedure: k1942 
o|inlining procedure: k1942 
o|inlining procedure: k1938 
o|inlining procedure: k1938 
o|inlining procedure: k1964 
o|inlining procedure: k1964 
o|inlining procedure: k1980 
o|inlining procedure: k1980 
o|inlining procedure: k2005 
o|inlining procedure: k2005 
o|inlining procedure: k2087 
o|inlining procedure: k2087 
o|inlining procedure: k2110 
o|inlining procedure: k2125 
o|inlining procedure: k2125 
o|inlining procedure: k2115 
o|inlining procedure: k2115 
o|inlining procedure: k2110 
o|inlining procedure: k2143 
o|inlining procedure: k2155 
o|inlining procedure: k2155 
o|inlining procedure: k2169 
o|inlining procedure: k2169 
o|inlining procedure: k2143 
o|inlining procedure: k2181 
o|inlining procedure: k2181 
o|contracted procedure: "(lolevel.scm:423) check-generic-vector" 
o|inlining procedure: k1205 
o|inlining procedure: k1211 
o|inlining procedure: k1211 
o|inlining procedure: k1205 
o|inlining procedure: k1201 
o|inlining procedure: k1201 
o|inlining procedure: k1221 
o|inlining procedure: k1221 
o|contracted procedure: k2210 
o|inlining procedure: k2208 
o|inlining procedure: k2208 
o|inlining procedure: k2247 
o|inlining procedure: k2247 
o|inlining procedure: k2242 
o|inlining procedure: k2242 
o|consed rest parameter at call site: "(lolevel.scm:454) check-generic-structure" 2 
o|consed rest parameter at call site: "(lolevel.scm:458) check-generic-structure" 2 
o|consed rest parameter at call site: "(lolevel.scm:462) check-generic-structure" 2 
o|inlining procedure: k2331 
o|inlining procedure: k2331 
o|consed rest parameter at call site: "(lolevel.scm:476) check-generic-structure" 2 
o|contracted procedure: k2370 
o|inlining procedure: k2368 
o|inlining procedure: k2389 
o|inlining procedure: k2389 
o|inlining procedure: k2401 
o|inlining procedure: k2401 
o|inlining procedure: k2420 
o|inlining procedure: k2420 
o|inlining procedure: k2368 
o|contracted procedure: k2476 
o|inlining procedure: k2474 
o|inlining procedure: k2496 
o|inlining procedure: k2496 
o|inlining procedure: k2508 
o|inlining procedure: k2508 
o|inlining procedure: k2527 
o|inlining procedure: k2527 
o|inlining procedure: k2552 
o|inlining procedure: k2552 
o|inlining procedure: k2574 
o|inlining procedure: k2574 
o|inlining procedure: k2474 
o|contracted procedure: k2605 
o|inlining procedure: k2603 
o|contracted procedure: k2611 
o|inlining procedure: k2614 
o|inlining procedure: k2614 
o|inlining procedure: k2644 
o|inlining procedure: k2644 
o|inlining procedure: k2603 
o|inlining procedure: k2670 
o|inlining procedure: k2670 
o|contracted procedure: k2691 
o|inlining procedure: k2689 
o|inlining procedure: k2706 
o|inlining procedure: k2706 
o|inlining procedure: k2718 
o|inlining procedure: k2718 
o|inlining procedure: k2739 
o|inlining procedure: k2739 
o|inlining procedure: k2746 
o|inlining procedure: k2746 
o|inlining procedure: k2689 
o|contracted procedure: k2771 
o|inlining procedure: k2769 
o|contracted procedure: k2777 
o|inlining procedure: k2782 
o|inlining procedure: k2782 
o|inlining procedure: k2788 
o|inlining procedure: k2788 
o|inlining procedure: k2799 
o|inlining procedure: k2799 
o|inlining procedure: k2828 
o|inlining procedure: k2828 
o|inlining procedure: k2769 
o|contracted procedure: "(lolevel.scm:614) check-become-alist" 
o|inlining procedure: k1146 
o|inlining procedure: k1146 
o|consed rest parameter at call site: "(lolevel.scm:95) check-block" 2 
o|consed rest parameter at call site: "(lolevel.scm:94) check-block" 2 
o|inlining procedure: k2906 
o|inlining procedure: k2906 
o|inlining procedure: k2923 
o|inlining procedure: k2923 
o|inlining procedure: k2967 
o|inlining procedure: k2967 
o|inlining procedure: k3006 
o|inlining procedure: k3006 
o|inlining procedure: k3037 
o|inlining procedure: k3037 
o|contracted procedure: "(lolevel.scm:690) pv-buf-ref" 
o|consed rest parameter at call site: "(lolevel.scm:469) check-generic-structure" 2 
o|replaced variables: 288 
o|removed binding forms: 114 
o|substituted constant variable: a11243145 
o|substituted constant variable: f_11813147 
o|substituted constant variable: a11903151 
o|substituted constant variable: a12423155 
o|substituted constant variable: r17573192 
o|substituted constant variable: r17573192 
o|substituted constant variable: f_17763195 
o|substituted constant variable: f_18103197 
o|substituted constant variable: f_18673201 
o|substituted constant variable: f_18943203 
o|substituted constant variable: r19123209 
o|substituted constant variable: f_19413211 
o|substituted constant variable: r19653214 
o|substituted constant variable: r19653214 
o|substituted constant variable: r19813218 
o|substituted constant variable: r19813218 
o|substituted constant variable: f_20043223 
o|substituted constant variable: f_20863225 
o|substituted constant variable: f_21243228 
o|substituted constant variable: r21163229 
o|substituted constant variable: r21163230 
o|substituted constant variable: f_21093231 
o|substituted constant variable: f_21543234 
o|substituted constant variable: r21703236 
o|substituted constant variable: f_21423237 
o|substituted constant variable: f_12043245 
o|substituted constant variable: a12203249 
o|substituted constant variable: f_22463253 
o|substituted constant variable: r22433255 
o|substituted constant variable: r26713288 
o|substituted constant variable: r26713288 
o|substituted constant variable: f_26883301 
o|substituted constant variable: loc68 
o|substituted constant variable: loc68 
o|substituted constant variable: loc68 
o|substituted constant variable: loc68 
o|substituted constant variable: loc68 
o|substituted constant variable: r30383330 
o|substituted constant variable: r30383330 
o|replaced variables: 29 
o|removed binding forms: 268 
o|inlining procedure: k2199 
o|inlining procedure: k2626 
o|removed binding forms: 62 
o|simplifications: ((let . 9)) 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|simplifications: ((if . 37) (##core#call . 225)) 
o|  call simplifications:
o|    vector
o|    ##sys#check-structure	4
o|    ##sys#structure?
o|    ##sys#fudge
o|    fx*
o|    ##sys#make-structure	2
o|    ##sys#check-list
o|    ##sys#check-pair
o|    ##sys#check-exact	4
o|    list	3
o|    +
o|    values
o|    void	2
o|    ##sys#setislot	4
o|    ##sys#check-symbol
o|    cons	3
o|    eq?	6
o|    not	4
o|    equal?
o|    integer?
o|    ##sys#foreign-integer-argument	2
o|    symbol?	8
o|    fx>=	9
o|    ##sys#setslot	5
o|    fx+	18
o|    ##sys#intern-symbol	2
o|    car	10
o|    null?	14
o|    cdr	3
o|    fx<	3
o|    ##sys#generic-structure?	2
o|    string?	3
o|    ##sys#size	19
o|    memq	3
o|    ##sys#slot	30
o|    fx-	7
o|    fx<=	3
o|    apply	2
o|    ##sys#foreign-block-argument	4
o|    ##sys#foreign-pointer-argument	8
o|    ##sys#foreign-fixnum-argument	16
o|    pair?	11
o|contracted procedure: k1127 
o|contracted procedure: k1193 
o|contracted procedure: k1245 
o|contracted procedure: k1253 
o|contracted procedure: k1257 
o|contracted procedure: k1261 
o|contracted procedure: k1264 
o|contracted procedure: k1267 
o|contracted procedure: k1278 
o|contracted procedure: k1282 
o|contracted procedure: k1286 
o|contracted procedure: k1289 
o|contracted procedure: k1292 
o|contracted procedure: k1303 
o|contracted procedure: k1307 
o|contracted procedure: k1311 
o|contracted procedure: k1314 
o|contracted procedure: k1317 
o|contracted procedure: k1328 
o|contracted procedure: k1332 
o|contracted procedure: k1336 
o|contracted procedure: k1339 
o|contracted procedure: k1342 
o|contracted procedure: k1666 
o|contracted procedure: k1358 
o|contracted procedure: k1660 
o|contracted procedure: k1360 
o|contracted procedure: k1654 
o|contracted procedure: k1362 
o|contracted procedure: k1648 
o|contracted procedure: k1364 
o|contracted procedure: k1642 
o|contracted procedure: k1366 
o|contracted procedure: k1636 
o|contracted procedure: k1368 
o|contracted procedure: k1395 
o|contracted procedure: k1388 
o|contracted procedure: k1419 
o|contracted procedure: k1409 
o|contracted procedure: k1416 
o|contracted procedure: k1438 
o|contracted procedure: k1457 
o|contracted procedure: k1444 
o|contracted procedure: k1451 
o|contracted procedure: k1462 
o|contracted procedure: k1481 
o|contracted procedure: k1468 
o|contracted procedure: k1475 
o|contracted procedure: k1530 
o|contracted procedure: k1544 
o|contracted procedure: k1560 
o|contracted procedure: k1563 
o|contracted procedure: k1596 
o|contracted procedure: k1606 
o|contracted procedure: k1610 
o|contracted procedure: k1624 
o|contracted procedure: k1630 
o|contracted procedure: k1690 
o|contracted procedure: k1697 
o|contracted procedure: k1699 
o|contracted procedure: k1701 
o|contracted procedure: k1708 
o|contracted procedure: k1715 
o|contracted procedure: k1723 
o|contracted procedure: k1726 
o|contracted procedure: k1732 
o|contracted procedure: k1738 
o|contracted procedure: k1749 
o|contracted procedure: k1756 
o|contracted procedure: k1837 
o|contracted procedure: k1841 
o|contracted procedure: k1850 
o|contracted procedure: k1857 
o|contracted procedure: k1928 
o|contracted procedure: k1908 
o|contracted procedure: k1917 
o|contracted procedure: k1926 
o|contracted procedure: k1967 
o|contracted procedure: k1964 
o|contracted procedure: k1983 
o|contracted procedure: k1980 
o|contracted procedure: k2072 
o|contracted procedure: k2089 
o|contracted procedure: k2096 
o|contracted procedure: k2104 
o|contracted procedure: k2101 
o|contracted procedure: k2127 
o|contracted procedure: k2134 
o|contracted procedure: k2157 
o|contracted procedure: k2164 
o|contracted procedure: k2184 
o|contracted procedure: k1223 
o|contracted procedure: k2223 
o|contracted procedure: k2230 
o|contracted procedure: k2263 
o|contracted procedure: k2239 
o|contracted procedure: k2252 
o|contracted procedure: k2261 
o|contracted procedure: k2288 
o|contracted procedure: k2302 
o|contracted procedure: k2308 
o|contracted procedure: k2305 
o|contracted procedure: k2320 
o|contracted procedure: k2333 
o|contracted procedure: k2345 
o|contracted procedure: k2336 
o|contracted procedure: k2342 
o|contracted procedure: k2378 
o|contracted procedure: k2403 
o|contracted procedure: k2406 
o|contracted procedure: k2412 
o|contracted procedure: k2418 
o|contracted procedure: k2420 
o|contracted procedure: k2426 
o|contracted procedure: k2433 
o|propagated global variable: a2432 ##sys#undefined-value 
o|contracted procedure: k2436 
o|contracted procedure: k2443 
o|contracted procedure: k2451 
o|contracted procedure: k2484 
o|contracted procedure: k2510 
o|contracted procedure: k2513 
o|contracted procedure: k2519 
o|contracted procedure: k2525 
o|contracted procedure: k2527 
o|contracted procedure: k2534 
o|contracted procedure: k2539 
o|contracted procedure: k2546 
o|propagated global variable: a2545 ##sys#undefined-value 
o|contracted procedure: k2549 
o|contracted procedure: k2555 
o|contracted procedure: k2571 
o|contracted procedure: k2584 
o|contracted procedure: k2588 
o|contracted procedure: k2617 
o|contracted procedure: k2620 
o|contracted procedure: k2623 
o|contracted procedure: k2638 
o|contracted procedure: k2646 
o|contracted procedure: k2655 
o|contracted procedure: k2658 
o|contracted procedure: k2662 
o|contracted procedure: k2670 
o|contracted procedure: k2700 
o|contracted procedure: k2720 
o|contracted procedure: k2724 
o|contracted procedure: k2731 
o|contracted procedure: k2737 
o|contracted procedure: k2739 
o|contracted procedure: k2849 
o|contracted procedure: k2757 
o|contracted procedure: k2797 
o|contracted procedure: k2802 
o|contracted procedure: k2810 
o|contracted procedure: k2812 
o|contracted procedure: k2822 
o|contracted procedure: k2830 
o|contracted procedure: k2833 
o|contracted procedure: k2839 
o|contracted procedure: k2845 
o|contracted procedure: k1135 
o|contracted procedure: k1144 
o|contracted procedure: k1152 
o|contracted procedure: k1156 
o|contracted procedure: k2872 
o|contracted procedure: k2883 
o|contracted procedure: k2880 
o|contracted procedure: k2890 
o|contracted procedure: k2939 
o|contracted procedure: k2895 
o|contracted procedure: k2898 
o|contracted procedure: k2900 
o|contracted procedure: k2902 
o|contracted procedure: k2911 
o|contracted procedure: k2925 
o|contracted procedure: k2934 
o|contracted procedure: k2958 
o|contracted procedure: k2969 
o|contracted procedure: k2972 
o|contracted procedure: k2985 
o|contracted procedure: k2991 
o|contracted procedure: k2995 
o|contracted procedure: k2997 
o|contracted procedure: k3008 
o|contracted procedure: k3017 
o|contracted procedure: k3034 
o|contracted procedure: k3037 
o|contracted procedure: k3047 
o|contracted procedure: k3049 
o|contracted procedure: k3059 
o|contracted procedure: k3065 
o|contracted procedure: k3075 
o|contracted procedure: k3083 
o|contracted procedure: k3085 
o|contracted procedure: k3093 
o|contracted procedure: k3027 
o|contracted procedure: k3096 
o|contracted procedure: k3109 
o|contracted procedure: k3115 
o|contracted procedure: k3112 
o|simplifications: ((let . 38)) 
o|removed binding forms: 198 
o|inlining procedure: k1540 
o|inlining procedure: k3053 
o|replaced variables: 21 
o|replaced variables: 1 
o|removed binding forms: 13 
o|removed binding forms: 1 
o|direct leaf routine/allocation: doloop573574 0 
o|direct leaf routine/allocation: pv-buf-set! 0 
o|converted assignments to bindings: (doloop573574) 
o|contracted procedure: "(lolevel.scm:643) k2928" 
o|contracted procedure: "(lolevel.scm:658) k2976" 
o|contracted procedure: "(lolevel.scm:667) k3011" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|direct leaf routine/allocation: doloop765766 0 
o|direct leaf routine/allocation: doloop793794 0 
o|contracted procedure: k2906 
o|converted assignments to bindings: (doloop765766) 
o|converted assignments to bindings: (doloop793794) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|customizable procedures: (doloop780781 loop69 copy713 doloop727728 k2702 k2712 evict681 doloop688689 k2594 release664 doloop670671 k2459 k2486 k2490 k2502 evict626 doloop638639 k2355 k2385 k2395 evict591 doloop602603 ##sys#check-generic-structure copy289 doloop300301 ##sys#check-block checkn2206 checkn1205 nosizerr203 move217 k1403 sizerr204) 
o|calls to known targets: 78 
o|identified direct recursive calls: f_1433 2 
o|identified direct recursive calls: f_2328 1 
o|identified direct recursive calls: f_2920 1 
o|identified direct recursive calls: f_3003 1 
o|fast box initializations: 19 
o|fast global references: 18 
o|fast global assignments: 4 
o|dropping unused closure argument: f_1175 
o|dropping unused closure argument: f_1115 
o|dropping unused closure argument: f_3030 
*/
/* end of file */
