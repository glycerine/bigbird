/* Generated from setup-api.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: setup-api.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -emit-import-library setup-api -output-file setup-api.c
   used units: library eval srfi_2d1 irregex utils posix srfi_2d13 extras ports data_2dstructures files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[347];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,27),40,115,101,116,117,112,45,97,112,105,35,115,104,101,108,108,112,97,116,104,32,115,116,114,53,55,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,36),40,115,101,116,117,112,45,97,112,105,35,101,120,116,114,97,45,102,101,97,116,117,114,101,115,32,46,32,116,109,112,55,50,55,51,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,39),40,115,101,116,117,112,45,97,112,105,35,101,120,116,114,97,45,110,111,110,102,101,97,116,117,114,101,115,32,46,32,116,109,112,56,57,57,48,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,30),40,115,101,116,117,112,45,97,112,105,35,117,115,101,114,45,105,110,115,116,97,108,108,45,115,101,116,117,112,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,34),40,115,101,116,117,112,45,97,112,105,35,115,117,100,111,45,105,110,115,116,97,108,108,32,46,32,97,114,103,115,49,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,8),40,102,95,50,53,48,54,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,8),40,102,95,50,52,57,56,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,41),40,115,101,116,117,112,45,97,112,105,35,112,97,116,99,104,32,119,104,105,99,104,49,55,54,32,114,120,49,55,55,32,115,117,98,115,116,49,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,48),40,115,101,116,117,112,45,97,112,105,35,114,101,103,105,115,116,101,114,45,112,114,111,103,114,97,109,32,110,97,109,101,50,50,49,32,46,32,116,109,112,50,50,48,50,50,50,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,102,105,110,100,45,112,114,111,103,114,97,109,32,110,97,109,101,50,50,57,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,22),40,114,101,103,32,110,97,109,101,50,51,51,32,114,110,97,109,101,50,51,52,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,45,97,112,105,35,102,105,120,109,97,107,101,116,97,114,103,101,116,32,102,105,108,101,51,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,15),40,102,95,50,57,49,49,32,99,109,100,51,54,50,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,50,51,32,103,51,51,48,52,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,13),40,102,95,50,54,57,50,32,102,50,56,48,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,13),40,102,95,50,55,48,56,32,102,51,48,55,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,57,48,32,103,51,48,50,51,48,57,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,54,51,32,103,50,55,53,50,56,50,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,51,54,32,103,51,52,56,51,53,52,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,55,55,32,103,51,56,57,51,57,53,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,30),40,115,101,116,117,112,45,97,112,105,35,101,120,101,99,117,116,101,32,101,120,112,108,105,115,116,51,50,48,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,37),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,58,102,111,114,109,45,101,114,114,111,114,32,115,52,57,50,32,112,52,57,51,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,42),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,58,108,105,110,101,45,101,114,114,111,114,32,115,53,49,48,32,112,53,49,49,32,110,53,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,103,54,48,57,32,100,54,49,57,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,8),40,102,95,51,51,49,56,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,15),40,102,95,51,51,49,51,32,101,120,110,54,57,48,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,8),40,102,95,51,51,53,50,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,8),40,102,95,51,51,54,53,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,21),40,102,95,51,51,54,48,32,46,32,97,114,103,115,54,56,52,55,48,54,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,8),40,102,95,51,51,52,55,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,16),40,102,95,51,51,48,56,32,107,54,56,51,54,56,57,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,50,51,32,100,101,112,54,50,57,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,48,56,32,103,54,49,53,54,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,102,95,50,57,57,52,32,115,52,56,50,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,108,105,110,101,115,52,56,52,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,23),40,102,95,51,50,53,50,32,115,53,56,55,32,105,110,100,101,110,116,53,56,56,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,102,95,51,53,50,52,32,105,116,101,109,55,53,56,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,52,56,32,103,55,53,53,55,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,13),40,102,95,51,53,55,54,32,102,55,52,48,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,51,48,32,103,55,51,55,55,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,15),40,102,95,51,49,54,48,32,100,101,112,53,54,49,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,16),40,102,95,51,49,48,50,32,108,105,110,101,53,52,48,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,49),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,58,109,97,107,101,47,112,114,111,99,47,104,101,108,112,101,114,32,115,112,101,99,53,56,49,32,97,114,103,118,53,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,45),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,47,112,114,111,99,32,103,55,56,51,55,56,52,55,57,52,32,46,32,114,118,97,114,55,56,53,55,57,53,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,31),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,97,116,105,111,110,45,112,114,101,102,105,120,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,13),40,118,101,114,98,32,100,105,114,56,54,54,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,15),40,102,95,53,55,56,49,32,100,105,114,56,55,56,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,15),40,102,95,53,55,56,57,32,100,105,114,56,56,48,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,8),40,102,95,51,55,54,52,41};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,8),40,102,95,51,55,55,51,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,45),40,115,101,116,117,112,45,97,112,105,35,119,114,105,116,101,45,105,110,102,111,32,105,100,56,57,48,32,102,105,108,101,115,56,57,49,32,105,110,102,111,56,57,50,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,13),40,102,95,51,56,51,48,32,102,57,56,50,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,55,50,32,103,57,55,57,57,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,119,97,108,107,32,102,114,111,109,57,54,53,32,116,111,57,54,54,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,47),40,115,101,116,117,112,45,97,112,105,35,99,111,112,121,45,102,105,108,101,32,102,114,111,109,57,52,56,32,116,111,57,52,57,32,46,32,116,109,112,57,52,55,57,53,48,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,37),40,115,101,116,117,112,45,97,112,105,35,109,111,118,101,45,102,105,108,101,32,102,114,111,109,49,48,48,49,32,116,111,49,48,48,50,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,114,101,109,111,118,101,45,102,105,108,101,42,32,100,105,114,49,48,49,51,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,48),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,45,100,101,115,116,45,112,97,116,104,110,97,109,101,32,112,97,116,104,49,48,50,49,32,102,105,108,101,49,48,50,50,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,14),40,102,95,52,48,51,48,32,102,49,48,52,52,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,50,55,32,103,49,48,51,57,49,48,53,52,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,36),40,115,101,116,117,112,45,97,112,105,35,99,104,101,99,107,45,102,105,108,101,108,105,115,116,32,102,108,105,115,116,49,48,50,52,41,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,14),40,102,95,52,49,56,52,32,97,49,48,57,53,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,47),40,115,101,116,117,112,45,97,112,105,35,115,117,112,112,108,121,45,118,101,114,115,105,111,110,32,105,110,102,111,49,48,56,54,32,118,101,114,115,105,111,110,49,48,56,55,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,8),40,102,95,52,50,55,53,41};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,53),40,115,101,116,117,112,45,97,112,105,35,115,116,97,110,100,97,114,100,45,101,120,116,101,110,115,105,111,110,32,110,97,109,101,49,49,49,50,32,46,32,116,109,112,49,49,49,49,49,49,49,51,41,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,14),40,102,95,52,51,48,56,32,102,49,49,57,48,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,55,51,32,103,49,49,56,53,49,50,49,53,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,60),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,45,101,120,116,101,110,115,105,111,110,32,105,100,49,49,53,57,32,102,105,108,101,115,49,49,54,48,32,46,32,116,109,112,49,49,53,56,49,49,54,49,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,13),40,101,120,105,102,121,32,102,49,50,51,54,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,14),40,102,95,52,52,55,53,32,102,49,50,56,56,41,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,55,49,32,103,49,50,56,51,49,51,48,48,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,14),40,102,95,52,53,52,50,32,102,49,50,54,48,41,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,52,51,32,103,49,50,53,53,49,50,54,50,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,58),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,45,112,114,111,103,114,97,109,32,105,100,49,50,50,55,32,102,105,108,101,115,49,50,50,56,32,46,32,116,109,112,49,50,50,54,49,50,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,14),40,102,95,52,54,51,57,32,102,49,51,52,52,41,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,50,55,32,103,49,51,51,57,49,51,53,54,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,57),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,45,115,99,114,105,112,116,32,105,100,49,51,49,51,32,102,105,108,101,115,49,51,49,52,32,46,32,116,109,112,49,51,49,50,49,51,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,45,97,112,105,35,114,101,112,111,45,112,97,116,104,32,116,109,112,49,51,55,52,49,51,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,49),40,115,101,116,117,112,45,97,112,105,35,101,110,115,117,114,101,45,100,105,114,101,99,116,111,114,121,32,112,97,116,104,49,52,48,52,32,116,109,112,49,52,48,51,49,52,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,8),40,102,95,52,56,57,50,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,19),40,102,95,52,56,56,55,32,101,120,49,52,52,54,49,52,53,52,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,48,48,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,50,54,41};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,23),40,102,95,52,57,50,49,32,46,32,97,114,103,115,49,52,52,56,49,52,55,48,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,8),40,102,95,52,56,57,53,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,18),40,102,95,52,56,56,50,32,107,49,52,52,55,49,52,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,54,52,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,55,48,41};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,55,51,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,55,56,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,56,49,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,56,52,41};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,46),40,115,101,116,117,112,45,97,112,105,35,116,114,121,45,99,111,109,112,105,108,101,32,99,111,100,101,49,52,50,54,32,46,32,116,109,112,49,52,50,53,49,52,50,55,41,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,42),40,115,101,116,117,112,45,97,112,105,35,114,101,113,117,105,114,101,100,45,99,104,105,99,107,101,110,45,118,101,114,115,105,111,110,32,118,49,52,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,55),40,115,101,116,117,112,45,97,112,105,35,117,112,103,114,97,100,101,45,109,101,115,115,97,103,101,32,101,120,116,49,52,57,54,32,109,115,103,49,52,57,55,32,116,109,112,49,52,57,53,49,52,57,56,41,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,97,114,103,115,49,53,51,50,41,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,49),40,115,101,116,117,112,45,97,112,105,35,114,101,113,117,105,114,101,100,45,101,120,116,101,110,115,105,111,110,45,118,101,114,115,105,111,110,32,46,32,97,114,103,115,49,53,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,42),40,115,101,116,117,112,45,97,112,105,35,102,105,110,100,45,108,105,98,114,97,114,121,32,110,97,109,101,49,53,54,53,32,112,114,111,99,49,53,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,102,105,110,100,45,104,101,97,100,101,114,32,110,97,109,101,49,53,57,52,41};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,14),40,102,95,53,50,52,56,32,120,49,54,51,52,41,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,54,49,55,32,103,49,54,50,57,49,54,51,57,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,21),40,118,101,114,115,105,111,110,45,62,108,105,115,116,32,118,49,54,49,52,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,112,49,49,54,52,54,32,112,50,49,54,52,55,41,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,36),40,115,101,116,117,112,45,97,112,105,35,118,101,114,115,105,111,110,62,61,63,32,118,49,49,54,49,49,32,118,50,49,54,49,50,41,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,26),40,115,101,116,117,112,45,97,112,105,35,101,120,116,101,110,115,105,111,110,45,110,97,109,101,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,43),40,115,101,116,117,112,45,97,112,105,35,101,120,116,101,110,115,105,111,110,45,118,101,114,115,105,111,110,32,46,32,116,109,112,49,54,57,48,49,54,57,49,41,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,43),40,115,101,116,117,112,45,97,112,105,35,114,101,97,100,45,105,110,102,111,32,101,103,103,49,55,48,53,32,46,32,116,109,112,49,55,48,52,49,55,48,54,41,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,8),40,102,95,53,53,48,48,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,19),40,102,95,53,52,57,53,32,101,120,49,55,50,57,49,55,51,55,41,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,8),40,102,95,53,53,48,56,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,8),40,102,95,53,53,51,50,41};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,23),40,102,95,53,53,50,55,32,46,32,97,114,103,115,49,55,51,49,49,55,53,50,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,8),40,102,95,53,53,48,51,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,18),40,102,95,53,52,57,48,32,107,49,55,51,48,49,55,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,14),40,102,95,53,53,52,53,32,102,49,55,54,56,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,53,56,32,103,49,55,54,53,49,55,55,52,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,14),40,119,97,108,107,32,100,105,114,49,55,53,52,41,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,50),40,115,101,116,117,112,45,97,112,105,35,114,101,109,111,118,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,49,55,49,56,32,46,32,116,109,112,49,55,49,55,49,55,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,57,54,32,103,49,56,48,51,49,56,48,55,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,50),40,115,101,116,117,112,45,97,112,105,35,114,101,109,111,118,101,45,101,120,116,101,110,115,105,111,110,32,101,103,103,49,55,56,54,32,46,32,116,109,112,49,55,56,53,49,55,56,55,41,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,27),40,115,101,116,117,112,45,97,112,105,35,36,115,121,115,116,101,109,32,115,116,114,49,56,49,51,41,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,14),40,102,95,53,55,49,49,32,99,49,56,51,53,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,115,101,116,117,112,45,101,114,114,111,114,45,104,97,110,100,108,105,110,103,41};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,14),40,102,95,53,55,52,50,32,120,49,54,56,48,41,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,14),40,102,95,53,55,50,51,32,120,49,54,54,57,41,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,8),40,102,95,53,56,50,56,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_5104)
static void C_fcall f_5104(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5683)
static void C_ccall f_5683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5685)
static void C_ccall f_5685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5681)
static void C_ccall f_5681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4873)
static void C_ccall f_4873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4871)
static void C_ccall f_4871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5141)
static void C_ccall f_5141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4632)
static void C_ccall f_4632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3308)
static void C_ccall f_3308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5765)
static void C_ccall f_5765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5762)
static void C_ccall f_5762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5125)
static void C_ccall f_5125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5127)
static void C_ccall f_5127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3097)
static void C_ccall f_3097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5723)
static void C_ccall f_5723(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5574)
static void C_ccall f_5574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5579)
static void C_fcall f_5579(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3487)
static void C_ccall f_3487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3523)
static void C_ccall f_3523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3327)
static void C_ccall f_3327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5737)
static void C_fcall f_5737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3517)
static void C_ccall f_3517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_fcall f_2511(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5805)
static void C_ccall f_5805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2550)
static void C_ccall f_2550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3702)
static void C_ccall f_3702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3676)
static void C_ccall f_3676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3539)
static void C_fcall f_3539(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4511)
static void C_ccall f_4511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4513)
static void C_fcall f_4513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3693)
static void C_fcall f_3693(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3714)
static void C_fcall f_3714(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4815)
static void C_ccall f_4815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4803)
static void C_ccall f_4803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4809)
static void C_ccall f_4809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5519)
static void C_ccall f_5519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5522)
static void C_ccall f_5522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4854)
static void C_ccall f_4854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4856)
static void C_ccall f_4856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5540)
static void C_fcall f_5540(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5245)
static void C_fcall f_5245(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5241)
static void C_ccall f_5241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5553)
static void C_fcall f_5553(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5555)
static void C_ccall f_5555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3954)
static void C_fcall f_3954(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5261)
static void C_fcall f_5261(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5203)
static void C_ccall f_5203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5201)
static void C_ccall f_5201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5495)
static void C_ccall f_5495(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5490)
static void C_ccall f_5490(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5214)
static void C_ccall f_5214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5217)
static void C_ccall f_5217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5211)
static void C_ccall f_5211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5229)
static void C_ccall f_5229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5220)
static void C_ccall f_5220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4573)
static void C_fcall f_4573(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4307)
static void C_ccall f_4307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5078)
static void C_fcall f_5078(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4198)
static void C_fcall f_4198(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_fcall f_2724(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_fcall f_4339(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5191)
static void C_ccall f_5191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5197)
static void C_ccall f_5197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5195)
static void C_ccall f_5195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5015)
static void C_ccall f_5015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5017)
static void C_fcall f_5017(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5508)
static void C_ccall f_5508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5028)
static void C_ccall f_5028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2754)
static void C_fcall f_2754(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5187)
static void C_ccall f_5187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5185)
static void C_ccall f_5185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5189)
static void C_ccall f_5189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5048)
static void C_ccall f_5048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5042)
static void C_ccall f_5042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5040)
static void C_ccall f_5040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5055)
static void C_ccall f_5055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4176)
static void C_fcall f_4176(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5061)
static void C_ccall f_5061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4311)
static void C_fcall f_4311(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4989)
static void C_ccall f_4989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4981)
static void C_ccall f_4981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_fcall f_2427(C_word t0) C_noret;
C_noret_decl(f_4970)
static void C_ccall f_4970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2297)
static void C_ccall f_2297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5474)
static void C_ccall f_5474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5665)
static void C_fcall f_5665(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4773)
static void C_ccall f_4773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5633)
static void C_fcall f_5633(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3387)
static void C_ccall f_3387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5036)
static void C_ccall f_5036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4793)
static void C_fcall f_4793(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2882)
static void C_fcall f_2882(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4150)
static void C_ccall f_4150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5785)
static void C_ccall f_5785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5793)
static void C_ccall f_5793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3576)
static void C_ccall f_3576(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3270)
static void C_fcall f_3270(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2961)
static void C_fcall f_2961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3252)
static void C_ccall f_3252(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5642)
static void C_ccall f_5642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2672)
static void C_ccall f_2672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3586)
static void C_fcall f_3586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2678)
static void C_fcall f_2678(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4739)
static void C_fcall f_4739(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3460)
static void C_fcall f_3460(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3793)
static void C_ccall f_3793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3780)
static void C_ccall f_3780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_fcall f_3233(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3237)
static void C_fcall f_3237(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2623)
static void C_fcall f_2623(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_fcall f_2838(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_fcall f_2831(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2941)
static void C_fcall f_2941(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4453)
static void C_fcall f_4453(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3988)
static void C_ccall f_3988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5828)
static void C_ccall f_5828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_ccall f_5826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4249)
static void C_fcall f_4249(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3448)
static void C_ccall f_3448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4401)
static void C_fcall f_4401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3057)
static void C_fcall f_3057(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4900)
static void C_ccall f_4900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4908)
static void C_ccall f_4908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3038)
static void C_fcall f_3038(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3002)
static void C_fcall f_3002(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5286)
static void C_ccall f_5286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5292)
static void C_ccall f_5292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3013)
static void C_fcall f_3013(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5298)
static void C_ccall f_5298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4003)
static void C_fcall f_4003(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5446)
static void C_ccall f_5446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4470)
static void C_ccall f_4470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4478)
static void C_fcall f_4478(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5452)
static void C_ccall f_5452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4474)
static void C_ccall f_4474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4691)
static void C_fcall f_4691(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3846)
static void C_fcall f_3846(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4073)
static void C_fcall f_4073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3822)
static void C_fcall f_3822(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3829)
static void C_ccall f_3829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5091)
static void C_fcall f_5091(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5303)
static void C_fcall f_5303(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3839)
static void C_ccall f_3839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4646)
static void C_ccall f_4646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4642)
static void C_fcall f_4642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2914)
static void C_ccall f_2914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3813)
static void C_fcall f_3813(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_fcall f_4027(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4669)
static void C_ccall f_4669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4660)
static void C_ccall f_4660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4869)
static void C_ccall f_4869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5119)
static void C_fcall f_5119(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4887)
static void C_ccall f_4887(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5301)
static void C_ccall f_5301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5402)
static void C_ccall f_5402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5400)
static void C_ccall f_5400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5132)
static void C_ccall f_5132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;

C_noret_decl(trf_5104)
static void C_fcall trf_5104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5104(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5104(t0,t1);}

C_noret_decl(trf_5579)
static void C_fcall trf_5579(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5579(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5579(t0,t1,t2);}

C_noret_decl(trf_5737)
static void C_fcall trf_5737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5737(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5737(t0,t1);}

C_noret_decl(trf_2511)
static void C_fcall trf_2511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2511(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2511(t0,t1);}

C_noret_decl(trf_3539)
static void C_fcall trf_3539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3539(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3539(t0,t1,t2);}

C_noret_decl(trf_4513)
static void C_fcall trf_4513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4513(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4513(t0,t1,t2);}

C_noret_decl(trf_3693)
static void C_fcall trf_3693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3693(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3693(t0,t1);}

C_noret_decl(trf_3714)
static void C_fcall trf_3714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3714(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3714(t0,t1,t2,t3);}

C_noret_decl(trf_5540)
static void C_fcall trf_5540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5540(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5540(t0,t1,t2);}

C_noret_decl(trf_5245)
static void C_fcall trf_5245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5245(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5245(t0,t1);}

C_noret_decl(trf_5553)
static void C_fcall trf_5553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5553(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5553(t0,t1);}

C_noret_decl(trf_3954)
static void C_fcall trf_3954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3954(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3954(t0,t1);}

C_noret_decl(trf_5261)
static void C_fcall trf_5261(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5261(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5261(t0,t1,t2);}

C_noret_decl(trf_4573)
static void C_fcall trf_4573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4573(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4573(t0,t1,t2);}

C_noret_decl(trf_5078)
static void C_fcall trf_5078(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5078(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5078(t0,t1,t2);}

C_noret_decl(trf_4198)
static void C_fcall trf_4198(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4198(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4198(t0,t1);}

C_noret_decl(trf_2724)
static void C_fcall trf_2724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2724(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2724(t0,t1,t2);}

C_noret_decl(trf_4339)
static void C_fcall trf_4339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4339(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4339(t0,t1);}

C_noret_decl(trf_5017)
static void C_fcall trf_5017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5017(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5017(t0,t1,t2,t3);}

C_noret_decl(trf_2754)
static void C_fcall trf_2754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2754(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2754(t0,t1,t2);}

C_noret_decl(trf_4176)
static void C_fcall trf_4176(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4176(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4176(t0,t1,t2);}

C_noret_decl(trf_4311)
static void C_fcall trf_4311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4311(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4311(t0,t1);}

C_noret_decl(trf_2427)
static void C_fcall trf_2427(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2427(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_2427(t0);}

C_noret_decl(trf_5665)
static void C_fcall trf_5665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5665(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5665(t0,t1);}

C_noret_decl(trf_5633)
static void C_fcall trf_5633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5633(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5633(t0,t1,t2);}

C_noret_decl(trf_4793)
static void C_fcall trf_4793(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4793(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4793(t0,t1,t2);}

C_noret_decl(trf_2882)
static void C_fcall trf_2882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2882(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2882(t0,t1,t2);}

C_noret_decl(trf_3270)
static void C_fcall trf_3270(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3270(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3270(t0,t1,t2);}

C_noret_decl(trf_2961)
static void C_fcall trf_2961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2961(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2961(t0,t1,t2);}

C_noret_decl(trf_3586)
static void C_fcall trf_3586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3586(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3586(t0,t1,t2);}

C_noret_decl(trf_2678)
static void C_fcall trf_2678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2678(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2678(t0,t1);}

C_noret_decl(trf_4739)
static void C_fcall trf_4739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4739(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4739(t0,t1);}

C_noret_decl(trf_3460)
static void C_fcall trf_3460(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3460(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3460(t0,t1,t2);}

C_noret_decl(trf_3233)
static void C_fcall trf_3233(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3233(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3233(t0,t1,t2);}

C_noret_decl(trf_3237)
static void C_fcall trf_3237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3237(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3237(t0,t1);}

C_noret_decl(trf_2623)
static void C_fcall trf_2623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2623(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2623(t0,t1,t2);}

C_noret_decl(trf_2838)
static void C_fcall trf_2838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2838(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2838(t0,t1);}

C_noret_decl(trf_2831)
static void C_fcall trf_2831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2831(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2831(t0,t1);}

C_noret_decl(trf_2941)
static void C_fcall trf_2941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2941(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2941(t0,t1,t2);}

C_noret_decl(trf_4453)
static void C_fcall trf_4453(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4453(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4453(t0,t1);}

C_noret_decl(trf_4249)
static void C_fcall trf_4249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4249(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4249(t0,t1);}

C_noret_decl(trf_4401)
static void C_fcall trf_4401(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4401(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4401(t0,t1,t2);}

C_noret_decl(trf_3057)
static void C_fcall trf_3057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3057(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3057(t0,t1,t2,t3);}

C_noret_decl(trf_3038)
static void C_fcall trf_3038(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3038(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3038(t0,t1,t2);}

C_noret_decl(trf_3002)
static void C_fcall trf_3002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3002(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3002(t0,t1,t2);}

C_noret_decl(trf_3013)
static void C_fcall trf_3013(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3013(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3013(t0,t1);}

C_noret_decl(trf_4003)
static void C_fcall trf_4003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4003(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4003(t0,t1,t2);}

C_noret_decl(trf_4478)
static void C_fcall trf_4478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4478(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4478(t0,t1);}

C_noret_decl(trf_4691)
static void C_fcall trf_4691(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4691(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4691(t0,t1,t2);}

C_noret_decl(trf_3846)
static void C_fcall trf_3846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3846(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3846(t0,t1,t2);}

C_noret_decl(trf_4073)
static void C_fcall trf_4073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4073(t0,t1,t2);}

C_noret_decl(trf_3822)
static void C_fcall trf_3822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3822(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3822(t0,t1,t2,t3);}

C_noret_decl(trf_5091)
static void C_fcall trf_5091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5091(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5091(t0,t1);}

C_noret_decl(trf_5303)
static void C_fcall trf_5303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5303(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5303(t0,t1,t2,t3);}

C_noret_decl(trf_4642)
static void C_fcall trf_4642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4642(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4642(t0,t1);}

C_noret_decl(trf_3813)
static void C_fcall trf_3813(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3813(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3813(t0,t1);}

C_noret_decl(trf_4027)
static void C_fcall trf_4027(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4027(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4027(t0,t1);}

C_noret_decl(trf_5119)
static void C_fcall trf_5119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5119(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5119(t0,t1);}

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

/* k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_fcall f_5104(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5104,NULL,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5141,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:734: version>=?");
((C_proc4)C_fast_retrieve_symbol_proc(lf[267]))(4,*((C_word*)lf[267]+1),t4,((C_word*)t0)[4],t1);}
else{
C_trace("setup-api.scm:733: upgrade-message");
f_5017(((C_word*)t0)[2],((C_word*)t0)[3],lf[280],C_SCHEME_END_OF_LIST);}}

/* k5682 in k5680 in k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_5683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5685,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:837: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}

/* k5684 in k5682 in k5680 in k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[5]);}

/* k5680 in k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5681,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5683,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:837: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[315],t2);}

/* k5686 in k5684 in k5682 in k5680 in k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_5687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k5688 in k5686 in k5684 in k5682 in k5680 in k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_5689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5689,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k5150 in k5147 in k5139 in k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_5151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_string_equal_p(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_5119(t3,C_i_not(t2));}

/* k4872 in k4870 in k4867 in k4865 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in ... */
static void C_ccall f_4873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:710: g1451");
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

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
if(!C_demand_2(1512)){
C_save(t1);
C_rereclaim2(1512*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,347);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[11]=C_h_intern(&lf[11],24,"setup-api#host-extension");
lf[13]=C_h_intern(&lf[13],24,"setup-api#chicken-prefix");
lf[14]=C_h_intern(&lf[14],19,"setup-api#shellpath");
lf[15]=C_h_intern(&lf[15],2,"qs");
lf[16]=C_h_intern(&lf[16],18,"normalize-pathname");
lf[18]=C_h_intern(&lf[18],30,"setup-api#setup-root-directory");
lf[19]=C_h_intern(&lf[19],28,"setup-api#setup-verbose-mode");
lf[20]=C_h_intern(&lf[20],28,"setup-api#setup-install-mode");
lf[21]=C_h_intern(&lf[21],25,"setup-api#deployment-mode");
lf[22]=C_h_intern(&lf[22],22,"setup-api#program-path");
lf[23]=C_h_intern(&lf[23],28,"setup-api#keep-intermediates");
lf[24]=C_h_intern(&lf[24],24,"setup-api#extra-features");
lf[25]=C_h_intern(&lf[25],17,"register-feature!");
lf[26]=C_h_intern(&lf[26],27,"setup-api#extra-nonfeatures");
lf[27]=C_h_intern(&lf[27],19,"unregister-feature!");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\004copy");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\011del /Q /S");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\004move");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\005chmod");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\006ranlib");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\006rm -fr");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\002mv");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\005chmod");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\006ranlib");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\005mkdir");
lf[46]=C_h_intern(&lf[46],22,"setup-api#sudo-install");
lf[47]=C_h_intern(&lf[47],5,"print");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\0001Warning: cannot install as superuser with Windows");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\012sudo cp -r");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\013sudo rm -fr");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\007sudo mv");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\012sudo chmod");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\013sudo ranlib");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\012sudo mkdir");
lf[55]=C_h_intern(&lf[55],21,"setup-api#abort-setup");
lf[56]=C_h_intern(&lf[56],15,"setup-api#patch");
lf[57]=C_h_intern(&lf[57],10,"write-line");
lf[58]=C_h_intern(&lf[58],19,"irregex-replace/all");
lf[59]=C_h_intern(&lf[59],9,"read-line");
lf[60]=C_h_intern(&lf[60],20,"with-input-from-file");
lf[61]=C_h_intern(&lf[61],19,"with-output-to-file");
lf[63]=C_h_intern(&lf[63],17,"get-output-string");
lf[64]=C_h_intern(&lf[64],7,"display");
lf[65]=C_h_intern(&lf[65],19,"\003syswrite-char/port");
lf[66]=C_h_intern(&lf[66],18,"open-output-string");
lf[67]=C_h_intern(&lf[67],21,"create-temporary-file");
lf[68]=C_h_intern(&lf[68],19,"\003sysstandard-output");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\011patching ");
lf[71]=C_h_intern(&lf[71],21,"setup-api#run-verbose");
lf[72]=C_h_intern(&lf[72],26,"setup-api#register-program");
lf[73]=C_h_intern(&lf[73],8,"->string");
lf[74]=C_h_intern(&lf[74],13,"make-pathname");
lf[75]=C_h_intern(&lf[75],22,"setup-api#find-program");
lf[77]=C_h_intern(&lf[77],26,"pathname-replace-extension");
lf[78]=C_h_intern(&lf[78],26,"\003sysload-dynamic-extension");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[81]=C_h_intern(&lf[81],18,"pathname-extension");
lf[82]=C_h_intern(&lf[82],17,"setup-api#execute");
lf[83]=C_h_intern(&lf[83],16,"\003sysflush-output");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[85]=C_h_intern(&lf[85],3,"map");
lf[86]=C_h_intern(&lf[86],8,"for-each");
lf[87]=C_h_intern(&lf[87],18,"string-intersperse");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\002-k");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\011-deployed");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[97]=C_h_intern(&lf[97],5,"cons\052");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\023compiling-extension");
lf[100]=C_h_intern(&lf[100],17,"\003sysstring-append");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\011-feature ");
lf[102]=C_h_intern(&lf[102],14,"symbol->string");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\014-no-feature ");
lf[104]=C_h_intern(&lf[104],6,"append");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\013-setup-mode");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[107]=C_h_intern(&lf[107],8,"feature\077");
lf[108]=C_h_intern(&lf[108],14,"\000cross-chicken");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[110]=C_h_intern(&lf[110],9,"substring");
lf[111]=C_h_intern(&lf[111],14,"string-prefix\077");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\002./");
lf[114]=C_h_intern(&lf[114],5,"error");
lf[115]=C_h_intern(&lf[115],5,"write");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\013 for line: ");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[121]=C_h_intern(&lf[121],6,"signal");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\025make: Failed to make ");
lf[124]=C_h_intern(&lf[124],22,"with-exception-handler");
lf[125]=C_h_intern(&lf[125],30,"call-with-current-continuation");
lf[126]=C_h_intern(&lf[126],13,"string-append");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\011 because ");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\010 changed");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\007 date: ");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\027 just because (reason: ");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\011 because ");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\017 does not exist");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\007making ");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\006make: ");
lf[135]=C_h_intern(&lf[135],22,"file-modification-time");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\015 was not made");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\022(make) dependency ");
lf[138]=C_h_intern(&lf[138],12,"file-exists\077");
lf[139]=C_h_intern(&lf[139],3,"any");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\036(make) don\047t know how to make ");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\011checking ");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\006make: ");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\013make: made ");
lf[145]=C_h_intern(&lf[145],7,"reverse");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[149]=C_h_intern(&lf[149],27,"condition-property-accessor");
lf[150]=C_h_intern(&lf[150],3,"exn");
lf[151]=C_h_intern(&lf[151],7,"message");
lf[152]=C_h_intern(&lf[152],19,"condition-predicate");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\0006argument-list to `make\047 is not a string or string list");
lf[154]=C_h_intern(&lf[154],5,"every");
lf[155]=C_h_intern(&lf[155],7,"string\077");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000#command part of line is not a thunk");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\037dependency item is not a string");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000!second part of line is not a list");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\0004line does not start with a string or list of strings");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000$list is not a list with 2 or 3 parts");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\036specification is an empty list");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\033specification is not a list");
lf[163]=C_h_intern(&lf[163],12,"vector->list");
lf[164]=C_h_intern(&lf[164],19,"setup-api#make/proc");
lf[165]=C_h_intern(&lf[165],9,"\003syserror");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\0000no matching clause in call to \047case-lambda\047 form");
lf[167]=C_h_intern(&lf[167],28,"setup-api#destination-prefix");
lf[168]=C_h_intern(&lf[168],24,"setup-api#runtime-prefix");
lf[169]=C_h_intern(&lf[169],29,"setup-api#installation-prefix");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\010  mkdir ");
lf[171]=C_h_intern(&lf[171],16,"create-directory");
lf[172]=C_h_intern(&lf[172],2,"-p");
lf[173]=C_h_intern(&lf[173],34,"setup-api#create-directory/parents");
lf[175]=C_h_intern(&lf[175],5,"files");
lf[176]=C_h_intern(&lf[176],3,"a+r");
lf[177]=C_h_intern(&lf[177],2,"pp");
lf[179]=C_h_intern(&lf[179],15,"repository-path");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\004 -> ");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\015writing info ");
lf[184]=C_h_intern(&lf[184],19,"setup-api#copy-file");
lf[185]=C_h_intern(&lf[185],9,"directory");
lf[186]=C_h_intern(&lf[186],10,"directory\077");
lf[187]=C_h_intern(&lf[187],18,"absolute-pathname\077");
lf[188]=C_h_intern(&lf[188],19,"setup-api#move-file");
lf[189]=C_h_intern(&lf[189],22,"setup-api#remove-file\052");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid file-specification");
lf[194]=C_h_intern(&lf[194],7,"version");
lf[195]=C_h_intern(&lf[195],8,"egg-name");
lf[196]=C_h_intern(&lf[196],24,"setup-api#extension-name");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\007unknown");
lf[199]=C_h_intern(&lf[199],36,"setup-api#extension-name-and-version");
lf[200]=C_h_intern(&lf[200],28,"setup-api#standard-extension");
lf[201]=C_h_intern(&lf[201],27,"setup-api#install-extension");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[204]=C_h_intern(&lf[204],3,"csc");
lf[205]=C_h_intern(&lf[205],8,"-dynamic");
lf[206]=C_h_intern(&lf[206],15,"-optimize-level");
lf[207]=C_h_intern(&lf[207],12,"-debug-level");
lf[208]=C_h_intern(&lf[208],20,"-emit-import-library");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\012import.scm");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\003scm");
lf[212]=C_h_intern(&lf[212],15,"\003sysget-keyword");
lf[213]=C_h_intern(&lf[213],5,"\000info");
lf[214]=C_h_intern(&lf[214],6,"static");
lf[215]=C_h_intern(&lf[215],6,"macosx");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[217]=C_h_intern(&lf[217],16,"software-version");
lf[218]=C_h_intern(&lf[218],25,"setup-api#install-program");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\003exe");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[225]=C_h_intern(&lf[225],24,"setup-api#install-script");
lf[226]=C_h_intern(&lf[226],4,"a+rx");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\014lib/chicken/");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000Acannot create directory: a file with the same name already exists");
lf[231]=C_h_intern(&lf[231],3,"a+x");
lf[232]=C_h_intern(&lf[232],18,"pathname-directory");
lf[233]=C_h_intern(&lf[233],21,"setup-api#try-compile");
lf[234]=C_h_intern(&lf[234],4,"\000c++");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\012succeeded.");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\007failed.");
lf[237]=C_h_intern(&lf[237],6,"system");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\007 >nul: ");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\014 >/dev/null ");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\0042>&1");
lf[245]=C_h_intern(&lf[245],4,"conc");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\002-L");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[257]=C_h_intern(&lf[257],13,"\000compile-only");
lf[258]=C_h_intern(&lf[258],5,"\000verb");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[260]=C_h_intern(&lf[260],8,"\000ldflags");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[262]=C_h_intern(&lf[262],7,"\000cflags");
lf[263]=C_h_intern(&lf[263],3,"\000cc");
lf[264]=C_h_intern(&lf[264],34,"setup-api#required-chicken-version");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\026 or higher is required");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\020CHICKEN version ");
lf[267]=C_h_intern(&lf[267],20,"setup-api#version>=\077");
lf[268]=C_h_intern(&lf[268],15,"chicken-version");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000.and repeat the current installation operation.");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\022  chicken-install ");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\015 - please run");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\002\047 ");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000#the currently installed extension `");
lf[277]=C_h_intern(&lf[277],36,"setup-api#required-extension-version");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000;, which is the minimum version that this extension requires");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\016is older than ");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000%has no associated version information");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\020is not installed");
lf[282]=C_h_intern(&lf[282],21,"extension-information");
lf[283]=C_h_intern(&lf[283],30,"required-extension-information");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\023bad argument format");
lf[285]=C_h_intern(&lf[285],22,"setup-api#test-compile");
lf[286]=C_h_intern(&lf[286],22,"setup-api#find-library");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\017(); return 0; }");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\015int main() { ");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\003();");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\005char ");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\012extern \042C\042");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\022#ifdef __cplusplus");
lf[295]=C_h_intern(&lf[295],21,"setup-api#find-header");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\033>\012int main() { return 0; }\012");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\012#include <");
lf[298]=C_h_intern(&lf[298],13,"irregex-split");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\006[-\134._]");
lf[300]=C_h_intern(&lf[300],8,"string>\077");
lf[301]=C_h_intern(&lf[301],27,"setup-api#extension-version");
lf[302]=C_h_intern(&lf[302],12,"string-null\077");
lf[303]=C_h_intern(&lf[303],19,"setup-api#read-info");
lf[304]=C_h_intern(&lf[304],4,"read");
lf[305]=C_h_intern(&lf[305],26,"setup-api#remove-directory");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\014sudo rm -fr ");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[308]=C_h_intern(&lf[308],11,"delete-file");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[310]=C_h_intern(&lf[310],16,"delete-directory");
lf[311]=C_h_intern(&lf[311],16,"remove-directory");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000#cannot remove - directory not found");
lf[313]=C_h_intern(&lf[313],26,"setup-api#remove-extension");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000.shell command failed with nonzero exit status ");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[318]=C_h_intern(&lf[318],30,"setup-api#setup-error-handling");
lf[319]=C_h_intern(&lf[319],5,"reset");
lf[320]=C_h_intern(&lf[320],19,"print-error-message");
lf[321]=C_h_intern(&lf[321],18,"\003sysstandard-error");
lf[322]=C_h_intern(&lf[322],29,"\003syscurrent-exception-handler");
lf[323]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\000\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\042invalid extension-name-and-version");
lf[326]=C_h_intern(&lf[326],14,"make-parameter");
lf[327]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\000\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[328]=C_h_intern(&lf[328],24,"get-environment-variable");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_INSTALL_PREFIX");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\013chicken-bug");
lf[331]=C_h_intern(&lf[331],17,"\003syspeek-c-string");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\016chicken-status");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\021chicken-uninstall");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\017chicken-install");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\003csi");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[338]=C_h_intern(&lf[338],4,"exit");
lf[339]=C_h_intern(&lf[339],17,"current-directory");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[343]=C_h_intern(&lf[343],13,"chicken-setup");
lf[344]=C_h_intern(&lf[344],7,"windows");
lf[345]=C_h_intern(&lf[345],14,"build-platform");
lf[346]=C_h_intern(&lf[346],13,"software-type");
C_register_lf2(lf,347,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4874 in k4872 in k4870 in k4867 in k4865 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in ... */
static void C_ccall f_4876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_fix(0)));}

/* k4870 in k4867 in k4865 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in ... */
static void C_ccall f_4871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[4],a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:710: call-with-current-continuation");
t4=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5178,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5185,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:751: open-output-string");
t5=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k5147 in k5139 in k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_5148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5151,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:735: ->string");
t3=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5139 in k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5141,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:735: ->string");
t3=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_5119(t2,C_SCHEME_FALSE);}}

/* k5694 in k5692 in k5690 in k5688 in k5686 in k5684 in k5682 in k5680 in k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in ... */
static void C_ccall f_5696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:837: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5692 in k5690 in k5688 in k5686 in k5684 in k5682 in k5680 in k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_5693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:837: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5690 in k5688 in k5686 in k5684 in k5682 in k5680 in k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_5691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:837: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[314],((C_word*)t0)[5]);}

/* k5697 in k5694 in k5692 in k5690 in k5688 in k5686 in k5684 in k5682 in k5680 in k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in ... */
static void C_ccall f_5699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:836: error");
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_4636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4722,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:649: make-pathname");
t4=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,lf[228]);}

/* k4637 in k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4638,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4639,a[2]=t1,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[85]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4691,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li76),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4691(t13,t9,t7);}

/* f_4639 in k4637 in k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4639(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4639,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4642,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_4642(t5,C_u_i_car(t4));}
else{
t4=t3;
f_4642(t4,t2);}}

/* k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4632,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
C_trace("setup-api.scm:647: check-filelist");
f_4027(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace("setup-api.scm:647: check-filelist");
f_4027(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4636,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:648: installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[169]))(2,*((C_word*)lf[169]+1),t2);}

/* k3302 in k3300 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:389: g687");
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_3308 in k3300 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3308(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3308,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3347,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:389: with-exception-handler");
t5=C_fast_retrieve(lf[124]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k3300 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3308,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li31),tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:389: call-with-current-continuation");
t4=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* f_5742 in k5735 */
static void C_ccall f_5742(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5742,3,t0,t1,t2);}
t3=C_i_not(t2);
if(C_truep(t3)){
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[324]);}
else{
C_trace("setup-api.scm:786: ->string");
t4=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}
else{
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[324]);}
else{
C_trace("setup-api.scm:786: ->string");
t4=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}}

/* f_3313 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3313,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3318,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:389: k683");
t4=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_3318 */
static void C_ccall f_3318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3318,2,t0,t1);}
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3321,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:389: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[123],*((C_word*)lf[68]+1));}

/* f_3365 */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3365,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3284,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3301,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3371,a[2]=t5,a[3]=((C_word*)t0)[8],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:377: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t6);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* f_3360 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3360r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3360r(t0,t1,t2);}}

static void C_ccall f_3360r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3365,a[2]=t2,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:389: k683");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k5764 in k5761 in k5735 */
static void C_ccall f_5765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5765,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k5761 in k5735 */
static void C_ccall f_5762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5765,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:787: ensure-string");
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:378: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[133],((C_word*)t0)[3]);}

/* k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:378: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[3]);}

/* k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3371,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3373,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:378: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[134],*((C_word*)lf[68]+1));}
else{
t2=((C_word*)t0)[2];
f_3301(2,t2,C_SCHEME_UNDEFINED);}}

/* k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:378: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[3]);}

/* k5124 in k5117 in k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_5125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5125,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:738: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[279],t2);}

/* k5126 in k5124 in k5117 in k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_5127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5127,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:738: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[6]);}

/* k5128 in k5126 in k5124 in k5117 in k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_5129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:738: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[278],((C_word*)t0)[6]);}

/* k3378 in k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3387,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
if(C_truep(t4)){
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
C_trace("setup-api.scm:385: string-append");
t5=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[127],((C_word*)t0)[5],lf[128]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3404,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:387: open-output-string");
t6=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}
else{
C_trace("setup-api.scm:383: string-append");
t5=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[131],((C_word*)t0)[6],lf[132]);}}

/* f_3347 */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3352,a[2]=((C_word*)t0)[2],a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[3],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:389: ##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* setup-api#setup-error-handling in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5711,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[322]+1 /* (set! ##sys#current-exception-handler ...) */,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}

/* k5702 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:831: system");
t2=C_fast_retrieve(lf[237]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_3352 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3352,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
C_trace("setup-api.scm:389: g704");
t3=t2;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}

/* k5713 */
static void C_ccall f_5714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:843: reset");
t2=C_fast_retrieve(lf[319]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_5711 in setup-api#setup-error-handling in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5711(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5711,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5714,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:842: print-error-message");
t4=C_fast_retrieve(lf[320]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,*((C_word*)lf[321]+1));}

/* k3095 in k3087 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_3097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3097,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3102,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:315: every");
t3=C_fast_retrieve(lf[154]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_3239(2,t2,C_SCHEME_FALSE);}}

/* k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in ... */
static void C_ccall f_2578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2578,2,t0,t1);}
t2=C_mutate((C_word*)lf[71]+1 /* (set! setup-api#run-verbose ...) */,t1);
t3=C_mutate((C_word*)lf[72]+1 /* (set! setup-api#register-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2580,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[75]+1 /* (set! setup-api#find-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2606,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2623,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2632,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5826,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t8=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_CHICKEN_PROGRAM),C_fix(0));}

/* f_5723 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_5723(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5723,3,t0,t1,t2);}
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[323]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5737,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
t6=t2;
t7=C_u_i_length(t6);
t8=t5;
f_5737(t8,C_eqp(C_fix(2),t7));}
else{
t6=t5;
f_5737(t6,C_SCHEME_FALSE);}}}

/* k5719 in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k2570 in k2568 in k2566 in k2563 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in ... */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k2583 in setup-api#register-program in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2592,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:214: ->string");
t3=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* setup-api#register-program in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in ... */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2580r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2580r(t0,t1,t2,t3);}}

static void C_ccall f_2580r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2585,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2601,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:212: ->string");
t6=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=t4;
f_2585(2,t5,C_i_car(t3));}}

/* k5572 in k5543 in walk in k5472 in setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:823: delete-directory");
t2=C_fast_retrieve(lf[310]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2591 in k2583 in setup-api#register-program in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in ... */
static void C_ccall f_2592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2592,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t1,((C_word*)t0)[2]),C_retrieve2(lf[9],"setup-api#\052registered-programs\052"));
t3=C_mutate(&lf[9] /* (set! setup-api#*registered-programs* ...) */,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* for-each-loop1758 in k5543 in walk in k5472 in setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_fcall f_5579(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5579,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5588,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:813: g1759");
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5587 in for-each-loop1758 in k5543 in walk in k5472 in setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_5588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5579(t3,((C_word*)t0)[4],t2);}

/* k3547 in for-each-loop748 in k3533 in k3521 in k3516 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3539(t3,((C_word*)t0)[4],t2);}

/* k3486 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3487,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3489,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:399: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[141],t2);}

/* k3488 in k3486 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3489,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:399: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3493 in k3490 in k3488 in k3486 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:399: error");
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3490 in k3488 in k3486 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:399: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3526 */
static void C_ccall f_3527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:405: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* f_3524 in k3521 in k3516 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3524,3,t0,t1,t2);}
t3=*((C_word*)lf[68]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3527,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:405: display");
t5=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[144],*((C_word*)lf[68]+1));}

/* k3521 in k3516 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3523,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3534,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:407: reverse");
t4=*((C_word*)lf[145]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3322 in k3320 */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:389: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[122],((C_word*)t0)[4]);}

/* k3528 in k3526 */
static void C_ccall f_3529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k3324 in k3322 in k3320 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3336,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:393: exn?");
t5=((C_word*)((C_word*)t0)[6])[1];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[3]);}

/* k3326 in k3324 in k3322 in k3320 */
static void C_ccall f_3327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k3496 in k3259 in k3257 in k3255 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:354: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[143],*((C_word*)lf[68]+1));}
else{
t2=((C_word*)t0)[2];
f_3262(2,t2,C_SCHEME_UNDEFINED);}}

/* k3320 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[7]);
C_trace("setup-api.scm:389: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* k3505 in k3503 in k3501 in k3499 in k3496 in k3259 in k3257 in k3255 */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k3335 in k3324 in k3322 in k3320 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:389: display");
t2=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3337 in k3324 in k3322 in k3320 */
static void C_ccall f_3339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api.scm:394: exn-message");
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
C_trace("setup-api.scm:389: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[6]);}}

/* k3501 in k3499 in k3496 in k3259 in k3257 in k3255 */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:354: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[142],((C_word*)t0)[3]);}

/* k3503 in k3501 in k3499 in k3496 in k3259 in k3257 in k3255 */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:354: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k3499 in k3496 in k3259 in k3257 in k3255 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:354: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k3328 in k3326 in k3324 in k3322 in k3320 */
static void C_ccall f_3330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:396: signal");
t2=C_fast_retrieve(lf[121]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5735 */
static void C_fcall f_5737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5737,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5742,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5762,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:787: ensure-string");
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
C_trace("setup-api.scm:789: error");
t2=*((C_word*)lf[114]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[325],((C_word*)t0)[2]);}}

/* f_2506 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2511,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2511(t5,t1);}

/* k3516 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:404: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t2);}

/* k3510 in k3257 in k3255 */
static void C_ccall f_3512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api.scm:352: file-modification-time");
t2=C_fast_retrieve(lf[135]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_3260(2,t2,C_SCHEME_FALSE);}}

/* loop */
static void C_fcall f_2511(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2511,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2515,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:199: read-line");
t3=C_fast_retrieve(lf[59]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2514 in loop */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2515,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2529,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:201: irregex-replace/all");
t4=C_fast_retrieve(lf[58]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],t1,((C_word*)t0)[5]);}}

/* k2522 in k2514 in loop */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:202: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2511(t2,((C_word*)t0)[3]);}

/* k2528 in k2514 in loop */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:201: write-line");
t2=C_fast_retrieve(lf[57]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_2531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,t1,t1);
C_trace("setup-api.scm:204: patch");
((C_proc5)C_fast_retrieve_symbol_proc(lf[56]))(5,*((C_word*)lf[56]+1),t2,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in ... */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:206: open-output-string");
t3=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5804 in k5792 */
static void C_ccall f_5805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5805,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[33],"setup-api#\052mkdir-command\052"),lf[172],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:479: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t3);}

/* k5807 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in ... */
static void C_ccall f_5808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:232: reg");
f_2623(((C_word*)t0)[3],lf[330],t1);}

/* k2538 in k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in ... */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2539,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:206: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[30],"setup-api#\052move-command\052"),t2);}

/* k3725 in k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[7],"setup-api#\052sudo\052"))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3745,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:489: create-temporary-file");
t4=C_fast_retrieve(lf[67]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3773,a[2]=((C_word*)t0)[4],a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:492: with-output-to-file");
t4=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[3],t3);}}

/* k3727 in k3725 in k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3728,2,t0,t1);}
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:493: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[3]);}}

/* k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_3722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3780,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:486: repo-path");
f_4739(t3,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:487: ensure-directory");
f_4793(t2,t1,C_SCHEME_END_OF_LIST);}

/* k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_3720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:485: ->string");
t3=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k2540 in k2538 in k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in ... */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k2542 in k2540 in k2538 in k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in ... */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2559,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:206: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[6]);}

/* k2544 in k2542 in k2540 in k2538 in k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in ... */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k5813 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in ... */
static void C_ccall f_5814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:230: reg");
f_2623(((C_word*)t0)[3],lf[333],t1);}

/* k5816 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in ... */
static void C_ccall f_5817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:229: reg");
f_2623(((C_word*)t0)[3],lf[334],t1);}

/* k2546 in k2544 in k2542 in k2540 in k2538 in k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in ... */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2550,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2556,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:207: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[5]);}

/* k5810 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in ... */
static void C_ccall f_5811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:231: reg");
f_2623(((C_word*)t0)[3],lf[332],t1);}

/* k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_2550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:206: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k2551 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:205: $system");
f_5665(((C_word*)t0)[2],t1);}

/* k2558 in k2542 in k2540 in k2538 in k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in ... */
static void C_ccall f_2559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:206: display");
t2=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2555 in k2546 in k2544 in k2542 in k2540 in k2538 in k2532 in k2530 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_2556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:206: display");
t2=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3683 in setup-api#installation-prefix in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_3684(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:C_fast_retrieve(lf[13])));}}

/* k3705 in k3703 in k3701 in k3698 in verb in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:472: ##sys#flush-output");
((C_proc3)C_fast_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* setup-api#installation-prefix in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_3680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3684,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:464: destination-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[167]))(2,*((C_word*)lf[167]+1),t2);}

/* k3703 in k3701 in k3698 in verb in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k3701 in k3698 in verb in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_3702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3702,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:472: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_ccall f_3679(C_word c,C_word t0,C_word t1){
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
C_word ab[77],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3679,2,t0,t1);}
t2=C_mutate((C_word*)lf[169]+1 /* (set! setup-api#installation-prefix ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3680,a[2]=t1,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3693,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[10],"setup-api#\052windows\052"))?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5781,a[2]=t3,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5789,a[2]=t3,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[173]+1 /* (set! setup-api#create-directory/parents ...) */,t4);
t6=C_mutate(&lf[174] /* (set! setup-api#write-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3714,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[184]+1 /* (set! setup-api#copy-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3801,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[188]+1 /* (set! setup-api#move-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3950,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[189]+1 /* (set! setup-api#remove-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3988,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[190] /* (set! setup-api#make-dest-pathname ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4003,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[191] /* (set! setup-api#check-filelist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4027,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[193] /* (set! setup-api#supply-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4176,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[200]+1 /* (set! setup-api#standard-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[201]+1 /* (set! setup-api#install-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4290,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[218]+1 /* (set! setup-api#install-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4446,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[225]+1 /* (set! setup-api#install-script ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4621,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[180] /* (set! setup-api#repo-path ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4739,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[178] /* (set! setup-api#ensure-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4793,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[233]+1 /* (set! setup-api#try-compile ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4846,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[264]+1 /* (set! setup-api#required-chicken-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4989,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate(&lf[269] /* (set! setup-api#upgrade-message ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5017,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[277]+1 /* (set! setup-api#required-extension-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5072,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[285]+1 /* (set! setup-api#test-compile ...) */,C_fast_retrieve(lf[233]));
t24=C_mutate((C_word*)lf[286]+1 /* (set! setup-api#find-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5178,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[295]+1 /* (set! setup-api#find-header ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5222,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[267]+1 /* (set! setup-api#version>=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5241,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5400,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5723,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:779: make-parameter");
t29=C_fast_retrieve(lf[326]);
((C_proc4)(void*)(*((C_word*)t29+1)))(4,t29,t27,lf[327],t28);}

/* k3698 in verb in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_3700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3700,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3702,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:472: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[170],*((C_word*)lf[68]+1));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2563 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in ... */
static void C_ccall f_2565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2565,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:192: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[70],*((C_word*)lf[68]+1));}
else{
t2=((C_word*)t0)[2];
f_2484(2,t2,C_SCHEME_UNDEFINED);}}

/* k2568 in k2566 in k2563 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in ... */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:192: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[69],((C_word*)t0)[3]);}

/* k2566 in k2563 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:192: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_3676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3676,2,t0,t1);}
t2=C_mutate((C_word*)lf[168]+1 /* (set! setup-api#runtime-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:462: get-environment-variable");
t4=C_fast_retrieve(lf[328]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[329]);}

/* k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in ... */
static void C_ccall f_3672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3672,2,t0,t1);}
t2=C_mutate((C_word*)lf[167]+1 /* (set! setup-api#destination-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:459: make-parameter");
t4=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k3533 in k3521 in k3516 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3534,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3539,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3539(t5,((C_word*)t0)[3],t1);}

/* for-each-loop748 in k3533 in k3521 in k3516 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_fcall f_3539(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3539,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3548,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:405: g749");
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4510 in k4503 in k4473 in k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_4511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:643: write-info");
f_3714(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop1271 in k4473 in k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_fcall f_4513(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4513,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4538,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:635: g1277");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3761 in k3758 in k3746 in k3744 in k3725 in k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_3762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3762,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[30],"setup-api#\052move-command\052"),((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:491: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[3],t3);}

/* f_3764 in k3744 in k3725 in k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3764,2,t0,t1);}
t2=C_fast_retrieve(lf[177]);
C_trace("setup-api.scm:490: g919");
t3=C_fast_retrieve(lf[177]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* f_4542 in k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4542,3,t0,t1,t2);}
if(C_truep(C_i_listp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4554,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
C_trace("setup-api.scm:631: exify");
f_4453(t3,t4);}
else{
C_trace("setup-api.scm:632: exify");
f_4453(t1,t2);}}

/* k2374 in setup-api#extra-nonfeatures in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in ... */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* verb in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_fcall f_3693(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3693,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3700,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:471: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t3);}

/* k5849 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_5850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,lf[344]);
if(C_truep(t2)){
C_trace("setup-api.scm:89: build-platform");
t3=C_fast_retrieve(lf[345]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[2];
f_2285(2,t3,C_SCHEME_FALSE);}}

/* k4537 in map-loop1271 in k4473 in k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_4538(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4538,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4513(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4513(t6,((C_word*)t0)[5],t5);}}

/* k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 in ... */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2300,2,t0,t1);}
t2=C_mutate(&lf[12] /* (set! setup-api#*chicken-bin-path* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:101: get-environment-variable");
t4=C_fast_retrieve(lf[328]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[340]);}

/* k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in ... */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_2306(2,t3,t1);}
else{
C_trace("##sys#peek-c-string");
t3=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_PREFIX),C_fix(0));}}

/* setup-api#shellpath in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in ... */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2308,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2315,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:105: normalize-pathname");
t4=C_fast_retrieve(lf[16]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in ... */
static void C_ccall f_2306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2306,2,t0,t1);}
t2=C_mutate((C_word*)lf[13]+1 /* (set! setup-api#chicken-prefix ...) */,t1);
t3=C_mutate((C_word*)lf[14]+1 /* (set! setup-api#shellpath ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2308,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2320,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:108: current-directory");
t5=C_fast_retrieve(lf[339]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3744 in k3725 in k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3764,a[2]=((C_word*)t0)[4],a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:490: with-output-to-file");
t4=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t1,t3);}

/* k3742 in k3727 in k3725 in k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_3743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3743,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[176],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:493: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t3);}

/* k3746 in k3744 in k3725 in k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_3747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:491: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[4]);}

/* k2314 in setup-api#shellpath in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in ... */
static void C_ccall f_2315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:105: qs");
t2=C_fast_retrieve(lf[15]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_fcall f_3714(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3714,NULL,4,t1,t2,t3,t4);}
t5=C_a_i_cons(&a,2,lf[175],t3);
t6=C_a_i_cons(&a,2,t5,t4);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3720,a[2]=t1,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3783,a[2]=t7,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:484: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t8);}

/* k4556 in k4553 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4557,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in ... */
static void C_ccall f_2320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2320,2,t0,t1);}
t2=C_mutate(&lf[17] /* (set! setup-api#*base-directory* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:110: make-parameter");
t4=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_retrieve2(lf[17],"setup-api#\052base-directory\052"));}

/* k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in ... */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2324,2,t0,t1);}
t2=C_mutate((C_word*)lf[18]+1 /* (set! setup-api#setup-root-directory ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:111: make-parameter");
t4=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k4553 */
static void C_ccall f_4554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
C_trace("setup-api.scm:631: exify");
f_4453(t2,t3);}

/* k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in ... */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2328,2,t0,t1);}
t2=C_mutate((C_word*)lf[19]+1 /* (set! setup-api#setup-verbose-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:112: make-parameter");
t4=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}

/* k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in ... */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2344,2,t0,t1);}
t2=C_mutate((C_word*)lf[23]+1 /* (set! setup-api#keep-intermediates ...) */,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_mutate((C_word*)lf[24]+1 /* (set! setup-api#extra-features ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2346,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_mutate((C_word*)lf[26]+1 /* (set! setup-api#extra-nonfeatures ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2365,a[2]=t7,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t9=lf[28] /* setup-api#*copy-command* */ =C_SCHEME_UNDEFINED;;
t10=lf[29] /* setup-api#*remove-command* */ =C_SCHEME_UNDEFINED;;
t11=lf[30] /* setup-api#*move-command* */ =C_SCHEME_UNDEFINED;;
t12=lf[31] /* setup-api#*chmod-command* */ =C_SCHEME_UNDEFINED;;
t13=lf[32] /* setup-api#*ranlib-command*_/ */ =C_SCHEME_UNDEFINED;;
t14=lf[33] /* setup-api#*mkdir-command* */ =C_SCHEME_UNDEFINED;;
t15=C_mutate(&lf[34] /* (set! setup-api#user-install-setup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2427,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[46]+1 /* (set! setup-api#sudo-install ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2455,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5828,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:184: make-parameter");
t19=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t17,t18);}

/* k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in ... */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2340,2,t0,t1);}
t2=C_mutate((C_word*)lf[22]+1 /* (set! setup-api#program-path ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:115: make-parameter");
t4=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* setup-api#extra-features in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in ... */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2346r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2346r(t0,t1,t2);}}

static void C_ccall f_2346r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2356,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,C_fast_retrieve(lf[25]),t4);}
else{
t5=((C_word*)((C_word*)t0)[2])[1];
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4813 in k4807 in k4799 in setup-api#ensure-directory in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_4815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
C_trace("setup-api.scm:683: error");
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],lf[230]);}}

/* k2355 in setup-api#extra-features in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in ... */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3758 in k3746 in k3744 in k3725 in k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_3759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3762,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:491: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[3]);}

/* k4597 in map-loop1243 in k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4598(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4598,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4573(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4573(t6,((C_word*)t0)[5],t5);}}

/* k4799 in setup-api#ensure-directory in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:681: file-exists?");
t4=C_fast_retrieve(lf[138]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k4801 in k4799 in setup-api#ensure-directory in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* setup-api#extra-nonfeatures in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in ... */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2365r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2365r(t0,t1,t2);}}

static void C_ccall f_2365r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2375,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,C_fast_retrieve(lf[27]),t4);}
else{
t5=((C_word*)((C_word*)t0)[2])[1];
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4807 in k4799 in setup-api#ensure-directory in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4809,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:682: directory?");
t3=C_fast_retrieve(lf[186]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:685: create-directory/parents");
((C_proc3)C_fast_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t2,((C_word*)t0)[5]);}}

/* k5517 in k5515 in k5513 */
static void C_ccall f_5519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5522,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:811: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5515 in k5513 */
static void C_ccall f_5516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5516,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5525,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:811: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[5]);}

/* k5513 */
static void C_ccall f_5514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5514,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5516,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:811: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[306],t2);}

/* k5524 in k5515 in k5513 */
static void C_ccall f_5525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:811: display");
t2=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_5527 */
static void C_ccall f_5527(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5527r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5527r(t0,t1,t2);}}

static void C_ccall f_5527r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5532,a[2]=t2,a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:811: k1730");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k5520 in k5517 in k5515 in k5513 */
static void C_ccall f_5522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:811: $system");
f_5665(((C_word*)t0)[2],t1);}

/* k4819 in k4807 in k4799 in setup-api#ensure-directory in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_4820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4820,2,t0,t1);}
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4835,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:687: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[5]);}}

/* f_5532 */
static void C_ccall f_5532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5532,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4978,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:690: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[212]+1)))(5,*((C_word*)lf[212]+1),t2,lf[260],((C_word*)t0)[5],t3);}

/* k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_4856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4973,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:690: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[212]+1)))(5,*((C_word*)lf[212]+1),t2,lf[258],((C_word*)t0)[6],t3);}

/* k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4854,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4981,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:690: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[212]+1)))(5,*((C_word*)lf[212]+1),t2,lf[262],((C_word*)t0)[4],t3);}

/* k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4860,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4970,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:690: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[212]+1)))(5,*((C_word*)lf[212]+1),t2,lf[257],((C_word*)t0)[7],t3);}

/* k2778 in map-loop263 in k2700 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2779,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2754(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2754(t6,((C_word*)t0)[5],t5);}}

/* f_5545 in k5543 in walk in k5472 in setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5545(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5545,3,t0,t1,t2);}
t3=C_i_string_equal_p(lf[307],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5553,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_5553(t5,t3);}
else{
t5=t2;
t6=t4;
f_5553(t6,C_u_i_string_equal_p(lf[309],t5));}}

/* k5543 in walk in k5472 in setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_5544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5544,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li115),tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(t1,lf[86]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5574,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5579,a[2]=t6,a[3]=t2,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5579(t8,t4,t1);}

/* setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_4846(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4846r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4846r(t0,t1,t2,t3);}}

static void C_ccall f_4846r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t4=C_i_get_keyword(lf[234],t3,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4852,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4984,a[2]=t4,a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:690: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[212]+1)))(5,*((C_word*)lf[212]+1),t5,lf[263],t3,t6);}

/* walk in k5472 in setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_fcall f_5540(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5540,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5544,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:814: directory");
t4=C_fast_retrieve(lf[185]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_SCHEME_TRUE);}

/* k4503 in k4473 in k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:643: supply-version");
f_4176(t2,((C_word*)t0)[4],C_SCHEME_FALSE);}

/* k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in ... */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2332,2,t0,t1);}
t2=C_mutate((C_word*)lf[20]+1 /* (set! setup-api#setup-install-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:113: make-parameter");
t4=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* version->list in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_fcall f_5245(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5245,NULL,2,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5248,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5256,a[2]=t6,a[3]=t4,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5292,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:762: ->string");
t10=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}

/* f_5248 in version->list in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5248(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5248,3,t0,t1,t2);}
t3=C_a_i_string_to_number(&a,2,t2,C_fix(10));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_2788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2788,2,t0,t1);}
t2=(C_truep(t1)?lf[93]:lf[94]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:250: deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t3);}

/* k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2785,2,t0,t1);}
t2=(C_truep(t1)?lf[95]:lf[96]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2692,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2701,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:254: extra-features");
((C_proc2)C_fast_retrieve_symbol_proc(lf[24]))(2,*((C_word*)lf[24]+1),t9);}

/* setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_5241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5241,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5245,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5298,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:763: version->list");
f_5245(t5,t2);}

/* k5551 */
static void C_fcall f_5553(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5553,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5555,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:818: make-pathname");
t3=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* k5554 in k5551 */
static void C_ccall f_5555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:819: directory?");
t3=C_fast_retrieve(lf[186]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in ... */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2336,2,t0,t1);}
t2=C_mutate((C_word*)lf[21]+1 /* (set! setup-api#deployment-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:114: make-parameter");
t4=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_retrieve2(lf[12],"setup-api#\052chicken-bin-path\052"));}

/* k3947 in k3944 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:518: string-prefix?");
t2=C_fast_retrieve(lf[111]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3944 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3948,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:520: normalize-pathname");
t3=C_fast_retrieve(lf[16]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4383 in k4314 in k4312 in k4310 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4384,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[176],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:607: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t3);}

/* k5255 in version->list in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5256,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5261,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li101),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5261(t5,((C_word*)t0)[5],t1);}

/* k2792 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_2793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[2];
f_2678(t4,(C_truep(t3)?lf[106]:lf[105]));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2802,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:245: feature?");
t4=C_fast_retrieve(lf[107]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[108]);}}

/* k2794 in k2792 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_2796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2678(t2,(C_truep(t1)?lf[105]:lf[106]));}

/* k3151 in k3119 in k3116 in k3108 in k3106 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3152,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_3127(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3160,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
C_trace("setup-api.scm:326: every");
t4=C_fast_retrieve(lf[154]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t2,t3);}}

/* k5559 in k5554 in k5551 */
static void C_ccall f_5561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api.scm:820: walk");
t2=((C_word*)((C_word*)t0)[2])[1];
f_5540(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
C_trace("setup-api.scm:821: delete-file");
t2=C_fast_retrieve(lf[308]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2791,2,t0,t1);}
t2=(C_truep(t1)?lf[91]:lf[92]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:249: host-extension");
((C_proc2)C_fast_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t3);}

/* setup-api#move-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_3950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3950,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3954,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t5=t2;
t6=t4;
f_3954(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3954(t5,t2);}}

/* k3957 in k3955 in k3953 in setup-api#move-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3958,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:526: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[4]);}

/* k3955 in k3953 in setup-api#move-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_3956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3958,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:525: ensure-directory");
f_4793(t2,t1,C_SCHEME_END_OF_LIST);}

/* k3953 in setup-api#move-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_fcall f_3954(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3954,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3956,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_i_cadr(((C_word*)t0)[3]);
C_trace("setup-api.scm:524: make-pathname");
t4=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[4],t3);}
else{
t3=t2;
f_3956(2,t3,((C_word*)t0)[4]);}}

/* map-loop1617 in k5255 in version->list in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_fcall f_5261(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5261,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5286,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:759: g1623");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3125 in k3119 in k3116 in k3108 in k3106 */
static void C_ccall f_3127(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_i_closurep(t4);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_car(t8);
C_trace("setup-api.scm:332: make:line-error");
f_3057(((C_word*)t0)[3],lf[156],t9,((C_word*)t0)[4]);}}}

/* k3119 in k3116 in k3108 in k3106 */
static void C_ccall f_3121(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3121,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_i_listp(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=t6;
f_3127(2,t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3152,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
t10=C_u_i_car(t9);
C_trace("setup-api.scm:325: make:line-error");
f_3057(t7,lf[158],t10,t3);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_4926 */
static void C_ccall f_4926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4926,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_4921 */
static void C_ccall f_4921(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4921r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4921r(t0,t1,t2);}}

static void C_ccall f_4921r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4926,a[2]=t2,a[3]=((C_word)li83),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:710: k1447");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k5202 in k5200 in k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in ... */
static void C_ccall f_5203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k5204 in k5202 in k5200 in k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in ... */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:751: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[289],((C_word*)t0)[5]);}

/* k5206 in k5204 in k5202 in k5200 in k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in ... */
static void C_ccall f_5207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:751: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}

/* k5208 in k5206 in k5204 in k5202 in k5200 in k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in ... */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:751: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[288],((C_word*)t0)[5]);}

/* k5200 in k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_5201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:751: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[290],((C_word*)t0)[5]);}

/* f_3102 in k3095 in k3087 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3102,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3107,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
t4=t2;
t5=C_u_i_length(t4);
C_trace("setup-api.scm:317: <=");
C_less_or_equal_p(5,0,t3,C_fix(2),t5,C_fix(3));}
else{
t4=t3;
f_3107(2,t4,C_SCHEME_FALSE);}}

/* k3106 */
static void C_ccall f_3107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_3110(2,t3,t1);}
else{
C_trace("setup-api.scm:318: make:form-error");
f_3038(t2,lf[160],((C_word*)t0)[2]);}}

/* f_5495 */
static void C_ccall f_5495(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5495,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5500,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:811: k1730");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_5490 in k5472 in setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5490(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5490,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5495,a[2]=t2,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5503,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li113),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:811: with-exception-handler");
t5=C_fast_retrieve(lf[124]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k5212 in k5210 in k5208 in k5206 in k5204 in k5202 in k5200 in k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in ... */
static void C_ccall f_5214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:751: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5215 in k5212 in k5210 in k5208 in k5206 in k5204 in k5202 in k5200 in k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in ... */
static void C_ccall f_5217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5220,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:752: conc");
t3=C_fast_retrieve(lf[245]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[287],((C_word*)t0)[3]);}

/* k5210 in k5208 in k5206 in k5204 in k5202 in k5200 in k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in ... */
static void C_ccall f_5211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k3116 in k3108 in k3106 */
static void C_ccall f_3118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_3121(2,t3,t1);}
else{
C_trace("setup-api.scm:322: make:form-error");
f_3038(t2,lf[159],((C_word*)t0)[2]);}}

/* k3108 in k3106 */
static void C_ccall f_3110(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3110,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_stringp(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3118(2,t5,t3);}
else{
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
if(C_truep(C_i_listp(t6))){
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
C_trace("setup-api.scm:321: every");
t9=C_fast_retrieve(lf[154]);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t4,*((C_word*)lf[155]+1),t8);}
else{
t7=t4;
f_3118(2,t7,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* setup-api#find-header in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_5222(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5222,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5229,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:756: open-output-string");
t4=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_4184 in setup-api#supply-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4184(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4184,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4193,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:565: extension-name");
((C_proc2)C_fast_retrieve_symbol_proc(lf[196]))(2,*((C_word*)lf[196]+1),t3);}

/* k5228 in setup-api#find-header in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5229,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5231,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:756: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[297],t2);}

/* k5219 in k5215 in k5212 in k5210 in k5208 in k5206 in k5204 in k5202 in k5200 in k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in ... */
static void C_ccall f_5220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:750: test-compile");
((C_proc5)C_fast_retrieve_symbol_proc(lf[285]))(5,*((C_word*)lf[285]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[260],t1);}

/* k4371 in k4316 in k4314 in k4312 in k4310 */
static void C_ccall f_4372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4372,2,t0,t1);}
t2=C_eqp(t1,lf[215]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t3,((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:611: pathname-extension");
t5=C_fast_retrieve(lf[81]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t4=((C_word*)t0)[4];
f_4339(t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[4];
f_4339(t3,C_SCHEME_FALSE);}}

/* k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in ... */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2478,2,t0,t1);}
t2=C_mutate((C_word*)lf[55]+1 /* (set! setup-api#abort-setup ...) */,t1);
t3=C_mutate((C_word*)lf[56]+1 /* (set! setup-api#patch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2480,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:209: make-parameter");
t5=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_TRUE);}

/* k5232 in k5230 in k5228 in setup-api#find-header in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:756: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[296],((C_word*)t0)[4]);}

/* k5237 in k5234 in k5232 in k5230 in k5228 in setup-api#find-header in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:755: test-compile");
((C_proc5)C_fast_retrieve_symbol_proc(lf[285]))(5,*((C_word*)lf[285]+1),((C_word*)t0)[2],t1,lf[257],C_SCHEME_TRUE);}

/* k5234 in k5232 in k5230 in k5228 in setup-api#find-header in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_5236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5236,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:756: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4365 in k4371 in k4316 in k4314 in k4312 in k4310 */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4339(t2,C_i_equalp(t1,lf[216]));}

/* k5230 in k5228 in setup-api#find-header in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:756: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k4391 in k4306 in k4304 in k4302 in k4299 in setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:617: supply-version");
f_4176(t2,((C_word*)t0)[4],C_SCHEME_FALSE);}

/* k4398 in k4391 in k4306 in k4304 in k4302 in k4299 in setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:617: write-info");
f_3714(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2700 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2701,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[85]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li18),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2754(t7,t3,t1);}

/* f_2708 in k2704 in k2700 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2708,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:256: symbol->string");
t4=*((C_word*)lf[102]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2704 in k2700 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_2706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2706,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2708,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:257: extra-nonfeatures");
((C_proc2)C_fast_retrieve_symbol_proc(lf[26]))(2,*((C_word*)lf[26]+1),t7);}

/* map-loop1243 in k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_fcall f_4573(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4573,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4598,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:629: g1249");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4192 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4193,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[195],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,((C_word*)t0)[3]));}

/* k4306 in k4304 in k4302 in k4299 in setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4307(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4307,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4308,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[3];
t8=C_i_check_list_2(t7,lf[85]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4393,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4401,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4401(t13,t9,t7);}

/* loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_fcall f_5078(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5078,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5091,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t2))){
t4=t2;
t5=C_u_i_length(t4);
t6=t3;
f_5091(t6,C_fixnum_greater_or_equal_p(t5,C_fix(2)));}
else{
t4=t3;
f_5091(t4,C_SCHEME_FALSE);}}}

/* k4197 in setup-api#supply-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_fcall f_4198(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4198,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[194],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4210,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:571: extension-name");
((C_proc2)C_fast_retrieve_symbol_proc(lf[196]))(2,*((C_word*)lf[196]+1),t3);}

/* setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_5072r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5072r(t0,t1,t2);}}

static void C_ccall f_5072r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5078,a[2]=t4,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5078(t6,t1,t2);}

/* f_4308 in k4306 in k4304 in k4302 in k4299 in setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4308(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4308,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4311,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_4311(t5,C_u_i_car(t4));}
else{
t4=t3;
f_4311(t4,t2);}}

/* k4299 in setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4301,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
C_trace("setup-api.scm:599: check-filelist");
f_4027(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace("setup-api.scm:599: check-filelist");
f_4027(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4302 in k4299 in setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4305,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:600: repo-path");
f_4739(t2,C_SCHEME_END_OF_LIST);}

/* k4304 in k4302 in k4299 in setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:601: repo-path");
f_4739(t2,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k2714 */
static void C_ccall f_2715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#string-append");
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[2],lf[103],t1);}

/* k2716 in k2704 in k2700 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2717,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[85]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2724,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2724(t7,t3,t1);}

/* k2720 in k2716 in k2704 in k2700 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_2722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:251: append");
t2=*((C_word*)lf[104]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* map-loop290 in k2716 in k2704 in k2700 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_fcall f_2724(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2724,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:255: g296");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5003 in k5001 in k4994 in setup-api#required-chicken-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5004,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:715: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k5001 in k4994 in setup-api#required-chicken-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5002,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5004,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:715: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[266],t2);}

/* k4337 in k4316 in k4314 in k4312 in k4310 */
static void C_fcall f_4339(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4339,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:612: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_4322(2,t3,t2);}}

/* k5007 in k5005 in k5003 in k5001 in k4994 in setup-api#required-chicken-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5012,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:715: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5005 in k5003 in k5001 in k4994 in setup-api#required-chicken-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_5006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:715: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[265],((C_word*)t0)[4]);}

/* k4329 in k4326 in k4320 in k4316 in k4314 in k4312 in k4310 */
static void C_ccall f_4330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[3]));}

/* k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:751: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[292],((C_word*)t0)[5]);}

/* k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_5191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_5197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:751: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[291],((C_word*)t0)[5]);}

/* k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_5195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5195,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k5198 in k5196 in k5194 in k5192 in k5190 in k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_5199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:751: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}

/* k5014 in setup-api#required-chicken-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:714: version>=?");
((C_proc4)C_fast_retrieve_symbol_proc(lf[267]))(4,*((C_word*)lf[267]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5010 in k5007 in k5005 in k5003 in k5001 in k4994 in setup-api#required-chicken-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_5012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:715: error");
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4326 in k4320 in k4316 in k4314 in k4312 in k4310 */
static void C_ccall f_4328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4328,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4330,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2651,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:235: runtime-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[168]))(2,*((C_word*)lf[168]+1),t4);}}

/* setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_fcall f_5017(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5017,NULL,4,t1,t2,t3,t4);}
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5028,a[2]=t1,a[3]=t6,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:719: open-output-string");
t8=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}

/* f_5508 */
static void C_ccall f_5508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5514,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:811: open-output-string");
t3=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_5503 */
static void C_ccall f_5503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5508,a[2]=((C_word*)t0)[2],a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5527,a[2]=((C_word*)t0)[3],a[3]=((C_word)li112),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:811: ##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* f_5500 */
static void C_ccall f_5500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5500,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k4320 in k4316 in k4314 in k4312 in k4310 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:613: deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t2);}

/* k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in ... */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2484,2,t0,t1);}
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:194: with-output-to-file");
t4=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2531,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:203: create-temporary-file");
t3=C_fast_retrieve(lf[67]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5028,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5030,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:719: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[276],t2);}

/* k4350 in k4337 in k4316 in k4314 in k4312 in k4310 */
static void C_ccall f_4351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4351,2,t0,t1);}
t2=C_a_i_list(&a,2,C_retrieve2(lf[32],"setup-api#\052ranlib-command\052"),t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:612: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t3);}

/* setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in ... */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2480,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2484,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2565,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:192: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t6);}

/* k2748 in map-loop290 in k2716 in k2704 in k2700 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2749,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2724(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2724(t6,((C_word*)t0)[5],t5);}}

/* f_2498 in k2483 in setup-api#patch in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2498,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:196: with-input-from-file");
t4=C_fast_retrieve(lf[60]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* map-loop263 in k2700 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_fcall f_2754(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2754,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2779,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:252: g269");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5185,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:751: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[294],t2);}

/* k5188 in k5186 in k5184 in setup-api#find-library in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:751: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[293],((C_word*)t0)[5]);}

/* k5047 in k5045 in k5043 in k5041 in k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in ... */
static void C_ccall f_5048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5048,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k5045 in k5043 in k5041 in k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in ... */
static void C_ccall f_5046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5061,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-api.scm:721: conc");
t4=C_fast_retrieve(lf[245]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[271],((C_word*)t0)[5]);}
else{
C_trace("setup-api.scm:719: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[272],((C_word*)t0)[4]);}}

/* k5043 in k5041 in k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_5044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:719: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[4]);}

/* k5041 in k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_5042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:719: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[273],((C_word*)t0)[4]);}

/* k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_5040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5040,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* f_3160 in k3151 in k3119 in k3116 in k3108 in k3106 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3160,3,t0,t1,t2);}
t3=C_i_stringp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
C_trace("setup-api.scm:328: make:form-error");
f_3038(t1,lf[157],t2);}}

/* k5056 in k5053 in k5051 in k5049 in k5047 in k5045 in k5043 in k5041 in k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in ... */
static void C_ccall f_5058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:718: error");
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5053 in k5051 in k5049 in k5047 in k5045 in k5043 in k5041 in k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in ... */
static void C_ccall f_5055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:719: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5051 in k5049 in k5047 in k5045 in k5043 in k5041 in k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in ... */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:719: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[270],((C_word*)t0)[4]);}

/* k5049 in k5047 in k5045 in k5043 in k5041 in k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in ... */
static void C_ccall f_5050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* setup-api#supply-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_fcall f_4176(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4176,NULL,3,t1,t2,t3);}
t4=C_i_assq(lf[194],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4184,a[2]=t2,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:561: g1093");
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4198,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t6=t5;
f_4198(t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4150,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:556: extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[199]))(2,*((C_word*)lf[199]+1),t6);}}}

/* k4316 in k4314 in k4312 in k4310 */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4317,2,t0,t1);}
t2=C_i_assq(lf[214],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4322,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4339,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4372,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:609: software-version");
t6=C_fast_retrieve(lf[217]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=t3;
f_4322(2,t4,C_SCHEME_FALSE);}}

/* k5060 in k5045 in k5043 in k5041 in k5039 in k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in ... */
static void C_ccall f_5061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:719: display");
t2=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4310 */
static void C_fcall f_4311(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4311,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:604: make-dest-pathname");
f_4003(t2,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k4312 in k4310 */
static void C_ccall f_4313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:605: copy-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[184]))(4,*((C_word*)lf[184]+1),t2,((C_word*)t0)[5],t1);}

/* k4314 in k4312 in k4310 */
static void C_ccall f_4315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=t2;
f_4317(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4384,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:607: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[5]);}}

/* k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2291,2,t0,t1);}
t2=C_mutate((C_word*)lf[11]+1 /* (set! setup-api#host-extension ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:96: get-environment-variable");
t4=C_fast_retrieve(lf[328]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[342]);}

/* f_4984 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4984,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_retrieve2(lf[3],"setup-api#\052cxx\052");
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_retrieve2(lf[3],"setup-api#\052cxx\052"));}
else{
t2=C_retrieve2(lf[2],"setup-api#\052cc\052");
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_retrieve2(lf[2],"setup-api#\052cc\052"));}}

/* setup-api#required-chicken-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_4989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4989,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4996,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5015,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:714: chicken-version");
t5=C_fast_retrieve(lf[268]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* f_4981 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4981,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[261]);}

/* k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2287,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:93: make-parameter");
t3=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2285,2,t0,t1);}
t2=C_mutate(&lf[10] /* (set! setup-api#*windows* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:91: register-feature!");
t4=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[343]);}

/* k4113 in exify in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=t1;
if(C_truep(t2)){
if(C_truep(C_i_equalp(lf[220],t1))){
t3=C_fast_retrieve(lf[78]);
t4=C_fast_retrieve(lf[78]);
C_trace("setup-api.scm:547: pathname-replace-extension");
t5=C_fast_retrieve(lf[77]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fast_retrieve(lf[78]));}
else{
if(C_truep(C_i_equalp(lf[221],t1))){
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
C_trace("setup-api.scm:547: pathname-replace-extension");
t3=C_fast_retrieve(lf[77]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],lf[222]);}
else{
C_trace("setup-api.scm:547: pathname-replace-extension");
t3=C_fast_retrieve(lf[77]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],lf[223]);}}
else{
t3=t1;
C_trace("setup-api.scm:547: pathname-replace-extension");
t4=C_fast_retrieve(lf[77]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],((C_word*)t0)[3],t3);}}}
else{
C_trace("setup-api.scm:547: pathname-replace-extension");
t3=C_fast_retrieve(lf[77]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* setup-api#sudo-install in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in ... */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2455r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2455r(t0,t1,t2);}}

static void C_ccall f_2455r(C_word t0,C_word t1,C_word t2){
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
if(C_truep(C_i_nullp(t2))){
t3=C_retrieve2(lf[7],"setup-api#\052sudo\052");
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_retrieve2(lf[7],"setup-api#\052sudo\052"));}
else{
if(C_truep(C_i_car(t2))){
t3=t1;
t4=lf[7] /* setup-api#*sudo* */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t5=lf[7] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
C_trace("setup-api.scm:157: print");
t6=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,lf[48]);}
else{
t5=C_mutate(&lf[28] /* (set! setup-api#*copy-command* ...) */,lf[49]);
t6=C_mutate(&lf[29] /* (set! setup-api#*remove-command* ...) */,lf[50]);
t7=C_mutate(&lf[30] /* (set! setup-api#*move-command* ...) */,lf[51]);
t8=C_mutate(&lf[31] /* (set! setup-api#*chmod-command* ...) */,lf[52]);
t9=C_mutate(&lf[32] /* (set! setup-api#*ranlib-command*_/ ...) */,lf[53]);
t10=C_mutate(&lf[33] /* (set! setup-api#*mkdir-command* ...) */,lf[54]);
t11=t3;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}
else{
C_trace("setup-api.scm:182: user-install-setup");
f_2427(t1);}}}

/* f_4973 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4973,2,t0,t1);}
C_trace("setup-api.scm:691: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t1);}

/* f_4978 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_4978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4978,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[259]);}

/* setup-api#user-install-setup in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in ... */
static void C_fcall f_2427(C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2427,NULL,1,t1);}
t2=lf[7] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=t1;
t4=C_mutate(&lf[28] /* (set! setup-api#*copy-command* ...) */,lf[35]);
t5=C_mutate(&lf[29] /* (set! setup-api#*remove-command* ...) */,lf[36]);
t6=C_mutate(&lf[30] /* (set! setup-api#*move-command* ...) */,lf[37]);
t7=C_mutate(&lf[31] /* (set! setup-api#*chmod-command* ...) */,lf[38]);
t8=C_mutate(&lf[32] /* (set! setup-api#*ranlib-command*_/ ...) */,lf[39]);
t9=t3;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t3=t1;
t4=C_mutate(&lf[28] /* (set! setup-api#*copy-command* ...) */,lf[40]);
t5=C_mutate(&lf[29] /* (set! setup-api#*remove-command* ...) */,lf[41]);
t6=C_mutate(&lf[30] /* (set! setup-api#*move-command* ...) */,lf[42]);
t7=C_mutate(&lf[31] /* (set! setup-api#*chmod-command* ...) */,lf[43]);
t8=C_mutate(&lf[32] /* (set! setup-api#*ranlib-command*_/ ...) */,lf[44]);
t9=C_mutate(&lf[33] /* (set! setup-api#*mkdir-command* ...) */,lf[45]);
t10=t3;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* f_4970 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4970,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_2300(2,t3,t1);}
else{
C_trace("##sys#peek-c-string");
t3=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}}

/* k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
C_trace("setup-api.scm:97: make-pathname");
t3=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[341]);}
else{
t3=t2;
f_2297(2,t3,C_SCHEME_FALSE);}}

/* k5472 in setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5474,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve2(lf[7],"setup-api#\052sudo\052"))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5490,a[2]=((C_word*)t0)[3],a[3]=((C_word)li114),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:811: call-with-current-continuation");
t4=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5540,a[2]=t3,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5540(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}}
else{
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-api.scm:808: error");
t2=*((C_word*)lf[114]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[311],lf[312],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k4769 in k4767 in k4758 in k4752 in setup-api#repo-path in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_fudge(C_fix(42));
C_trace("setup-api.scm:673: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[5]);}

/* setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_fcall f_5665(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5665,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5669,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5703,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
C_trace("setup-api.scm:833: string-append");
t5=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[316],t2,lf[317]);}
else{
t5=t2;
C_trace("setup-api.scm:831: system");
t6=C_fast_retrieve(lf[237]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}}

/* k4771 in k4769 in k4767 in k4758 in k4752 in setup-api#repo-path in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:673: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k4774 in k4771 in k4769 in k4767 in k4758 in k4752 in setup-api#repo-path in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:671: make-pathname");
t2=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5668 in setup-api#$system in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5669,2,t0,t1);}
t2=t1;
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:837: open-output-string");
t5=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5484 in k5472 in setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:811: g1734");
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k4994 in setup-api#required-chicken-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4996,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:715: open-output-string");
t3=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* for-each-loop1796 in k5653 in k5611 in setup-api#remove-extension in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_fcall f_5633(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5633,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5642,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:827: g1797");
t5=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3380 in k3378 in k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k3386 in k3378 in k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:378: display");
t2=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:719: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[275],((C_word*)t0)[4]);}

/* k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_5034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:719: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[4]);}

/* k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:719: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[274],((C_word*)t0)[4]);}

/* setup-api#remove-extension in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5608(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5608r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5608r(t0,t1,t2,t3);}}

static void C_ccall f_5608r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5613,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("setup-api.scm:825: repository-path");
t5=C_fast_retrieve(lf[179]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_5613(2,t5,C_i_car(t3));}}

/* k5037 in k5035 in k5033 in k5031 in k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_5038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* setup-api#ensure-directory in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_fcall f_4793(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4793,NULL,3,t1,t2,t3);}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4800,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_4800(2,t7,t2);}
else{
C_trace("setup-api.scm:680: pathname-directory");
t7=C_fast_retrieve(lf[232]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}}

/* map-loop336 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_fcall f_2882(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2882,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:272: g342");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5029 in k5027 in setup-api#upgrade-message in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:719: write");
t3=*((C_word*)lf[115]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[4]);}

/* k4149 in setup-api#supply-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
if(C_truep(C_i_pairp(t1))){
t2=C_i_cadr(t1);
t3=C_i_equalp(lf[197],t2);
t4=((C_word*)t0)[2];
f_4198(t4,(C_truep(t3)?lf[198]:C_i_cadr(t1)));}
else{
t2=((C_word*)t0)[2];
f_4198(t2,lf[198]);}}
else{
t2=((C_word*)t0)[2];
f_4198(t2,lf[198]);}}

/* k5653 in k5611 in setup-api#remove-extension in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5654(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5654,2,t0,t1);}
t2=C_i_assq(lf[175],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=C_fast_retrieve(lf[189]);
t5=C_i_cdr(t2);
t6=C_i_check_list_2(t5,lf[86]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5633,a[2]=t8,a[3]=t4,a[4]=((C_word)li119),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_5633(t10,t3,t5);}
else{
t4=t3;
f_5618(2,t4,C_SCHEME_FALSE);}}

/* f_4964 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_4964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4964,2,t0,t1);}
C_trace("setup-api.scm:695: g1440");
t2=*((C_word*)lf[64]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k5623 in k5616 in k5653 in k5611 in setup-api#remove-extension in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:828: remove-file*");
((C_proc3)C_fast_retrieve_symbol_proc(lf[189]))(3,*((C_word*)lf[189]+1),((C_word*)t0)[2],t1);}

/* k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2875,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(t1);
if(C_truep(C_i_string_equal_p(t3,lf[89]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2672,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2675,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2811,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:242: find-program");
((C_proc3)C_fast_retrieve_symbol_proc(lf[75]))(3,*((C_word*)lf[75]+1),t6,lf[109]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2829,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:260: string-prefix?");
t5=C_fast_retrieve(lf[111]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[112],t3);}}

/* k5784 */
static void C_ccall f_5785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:476: create-directory");
t2=C_fast_retrieve(lf[171]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}

/* f_5781 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_5781(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5781,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5785,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:475: verb");
f_3693(t3,t2);}

/* k2236 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2238 in k2236 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2241,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* f_5789 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_5789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5789,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5793,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:478: verb");
f_3693(t3,t2);}

/* k4767 in k4758 in k4752 in setup-api#repo-path in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_4768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4768,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:673: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[229],t2);}

/* k2874 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_2875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2875,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
C_trace("setup-api.scm:273: string-intersperse");
t4=C_fast_retrieve(lf[87]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t3,lf[88]);}

/* k5792 */
static void C_ccall f_5793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5805,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:479: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[3]);}

/* k4758 in k4752 in setup-api#repo-path in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4759,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4768,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:673: open-output-string");
t3=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("setup-api.scm:674: repository-path");
t2=C_fast_retrieve(lf[179]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k4752 in setup-api#repo-path in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4754,2,t0,t1);}
if(C_truep(t1)){
C_trace("setup-api.scm:668: installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[169]))(2,*((C_word*)lf[169]+1),((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:669: destination-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[167]))(2,*((C_word*)lf[167]+1),t2);}}

/* k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2262,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! setup-api#*cc* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2266,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}

/* k5616 in k5653 in k5611 in setup-api#remove-extension in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_5618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:828: make-pathname");
t3=C_fast_retrieve(lf[74]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[0]);}

/* k5611 in setup-api#remove-extension in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5654,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:826: read-info");
((C_proc4)C_fast_retrieve_symbol_proc(lf[303]))(4,*((C_word*)lf[303]+1),t2,((C_word*)t0)[3],t1);}

/* k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2274,2,t0,t1);}
t2=C_mutate(&lf[5] /* (set! setup-api#*target-libs* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2278,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}

/* k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2270,2,t0,t1);}
t2=C_mutate(&lf[4] /* (set! setup-api#*target-cflags* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_MORE_LIBS),C_fix(0));}

/* k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2266,2,t0,t1);}
t2=C_mutate(&lf[3] /* (set! setup-api#*cxx* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_CFLAGS),C_fix(0));}

/* k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2240 in k2238 in k2236 */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2241,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2278(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2278,2,t0,t1);}
t2=C_mutate(&lf[6] /* (set! setup-api#*target-lib-home* ...) */,t1);
t3=lf[7] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
t4=C_mutate(&lf[8] /* (set! setup-api#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t5=lf[9] /* setup-api#*registered-programs* */ =C_SCHEME_END_OF_LIST;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2285,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5850,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:88: software-type");
t8=C_fast_retrieve(lf[346]);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}

/* k4721 in k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
C_trace("setup-api.scm:649: ensure-directory");
f_4793(((C_word*)t0)[2],t1,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2253,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2249,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2247,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3224 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_3225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3241(2,t2,t1);}
else{
C_trace("setup-api.scm:338: error");
t2=*((C_word*)lf[114]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[153],((C_word*)t0)[3]);}}

/* k4715 in map-loop1327 in k4637 in k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4716,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4691(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4691(t6,((C_word*)t0)[5],t5);}}

/* f_3576 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3576(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3576,3,t0,t1,t2);}
C_trace("setup-api.scm:403: make-file");
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,lf[148]);}

/* k2256 in k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2257,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! setup-api#constant26 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2262,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}

/* k2254 in k2252 in k2250 in k2248 in k2246 in k2244 in k2242 in k2240 in k2238 in k2236 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2257,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3279,2,t0,t1);}
t2=C_i_not(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3284,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
t4=t3;
f_3284(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[2],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:362: any");
t5=C_fast_retrieve(lf[139]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[11]);}}

/* f_2994 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2994,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_string_equal_p(t2,((C_word*)t0)[2]));}

/* g609 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_fcall f_3270(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3270,NULL,3,t0,t1,t2);}
C_trace("setup-api.scm:358: make-file");
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_fcall f_2961(C_word t0,C_word t1,C_word t2){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2961,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fast_retrieve(lf[73]);
t10=C_i_check_list_2(t4,lf[85]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2866,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2882,a[2]=t8,a[3]=t13,a[4]=t6,a[5]=t9,a[6]=((C_word)li19),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_2882(t15,t11,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3257 in k3255 */
static void C_ccall f_3258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3512,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:351: file-exists?");
t4=C_fast_retrieve(lf[138]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k3255 */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3258,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-api.scm:350: fixmaketarget");
f_2831(t2,((C_word*)t0)[4]);}

/* f_3252 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3252(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3252,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3256,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t5=t2;
t6=((C_word*)t0)[6];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2994,a[2]=t5,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3002,a[2]=t9,a[3]=t7,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3002(t11,t4,t6);}

/* k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_3250(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3250,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3252,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li36),tmp=(C_word)a,a+=8,tmp));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3517,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[8])[1]))){
C_trace("setup-api.scm:401: make-file");
t5=((C_word*)((C_word*)t0)[3])[1];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)((C_word*)t0)[8])[1],lf[146]);}
else{
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[8])[1]))){
t5=C_i_caar(((C_word*)t0)[6]);
C_trace("setup-api.scm:402: make-file");
t6=((C_word*)((C_word*)t0)[3])[1];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,t5,lf[147]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3576,a[2]=((C_word*)t0)[3],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)((C_word*)t0)[8])[1];
t7=C_i_check_list_2(t6,lf[86]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3586,a[2]=t9,a[3]=t5,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3586(t11,t4,t6);}}}

/* k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3270,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[86]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3279,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3460,a[2]=t6,a[3]=t2,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3460(t8,t4,((C_word*)t0)[3]);}

/* k5641 in for-each-loop1796 in k5653 in k5611 in setup-api#remove-extension in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_5642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5633(t3,((C_word*)t0)[4],t2);}

/* k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3262,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3269,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace("setup-api.scm:357: string-append");
t4=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[140],((C_word*)t0)[11]);}
else{
if(C_truep(((C_word*)t0)[4])){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3487,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:399: open-output-string");
t3=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}}

/* k3259 in k3257 in k3255 */
static void C_ccall f_3260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3260,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3498,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:353: setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t3);}

/* k2985 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2986,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2961(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2961(t6,((C_word*)t0)[5],t5);}}

/* k3877 in k3865 in k3827 in walk in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_3878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3881,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:514: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[3]);}

/* k3888 in k3882 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
f_3818(2,t3,t2);}
else{
C_trace("setup-api.scm:502: make-pathname");
t2=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k3865 in k3827 in walk in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_3866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:513: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[4]);}

/* k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_3246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3246,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3250,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-api.scm:346: condition-property-accessor");
t4=C_fast_retrieve(lf[149]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[150],lf[151]);}

/* k2698 */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#string-append");
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[2],lf[101],t1);}

/* k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_3241(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3241,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,C_SCHEME_END_OF_LIST);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3246,a[2]=t5,a[3]=t7,a[4]=t9,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-api.scm:345: condition-predicate");
t12=C_fast_retrieve(lf[152]);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,lf[150]);}

/* k3880 in k3877 in k3865 in k3827 in walk in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3881,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[28],"setup-api#\052copy-command\052"),((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:512: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[3],t3);}

/* k3882 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3884,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3818(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3890,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:500: absolute-pathname?");
t3=C_fast_retrieve(lf[187]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2671 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_2672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:240: string-intersperse");
t2=C_fast_retrieve(lf[87]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[90]);}

/* k3594 in for-each-loop730 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3586(t3,((C_word*)t0)[4],t2);}

/* for-each-loop730 in k3248 in k3244 in k3240 in k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_fcall f_3586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3586,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3595,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:403: g731");
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_fcall f_2678(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2678,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:248: keep-intermediates");
((C_proc2)C_fast_retrieve_symbol_proc(lf[23]))(2,*((C_word*)lf[23]+1),t2);}

/* k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_2675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2675,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2678,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2793,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:244: deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t3);}

/* k4745 in setup-api#repo-path in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4748,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:676: ensure-directory");
f_4793(t2,t1,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k3405 in k3403 in k3378 in k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:387: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[4]);}

/* k4747 in k4745 in setup-api#repo-path in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3407 in k3405 in k3403 in k3378 in k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:387: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[129],((C_word*)t0)[4]);}

/* k3403 in k3378 in k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3404,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:387: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[130],t2);}

/* k3453 in k3451 in k3449 in k3447 in k3445 in k3438 in k3425 */
static void C_ccall f_3455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3458,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:367: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* setup-api#repo-path in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_fcall f_4739(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4739,NULL,2,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4746,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4754,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:667: deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t6);}
else{
C_trace("setup-api.scm:675: repository-path");
t6=C_fast_retrieve(lf[179]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k3451 in k3449 in k3447 in k3445 in k3438 in k3425 */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k3456 in k3453 in k3451 in k3449 in k3447 in k3445 in k3438 in k3425 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:366: error");
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3449 in k3447 in k3445 in k3438 in k3425 */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:367: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[136],((C_word*)t0)[4]);}

/* k2932 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_2934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2934,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[86]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2941,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2941(t6,((C_word*)t0)[3],t1);}

/* k3468 in for-each-loop608 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3460(t3,((C_word*)t0)[4],t2);}

/* for-each-loop608 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_fcall f_3460(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3460,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3469,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:356: g609");
t5=((C_word*)t0)[3];
f_3270(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4425 in map-loop1173 in k4306 in k4304 in k4302 in k4299 in setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4426,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4401(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4401(t6,((C_word*)t0)[5],t5);}}

/* k3792 in k3790 in k3788 in k3786 in k3784 in k3781 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_3793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k3790 in k3788 in k3786 in k3784 in k3781 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:484: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[181],((C_word*)t0)[3]);}

/* k3436 in k3427 in k3425 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_greaterp(t1,((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2906 in map-loop336 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2907,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2882(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2882(t6,((C_word*)t0)[5],t5);}}

/* k2689 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:241: cons*");
t2=C_fast_retrieve(lf[97]);
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[98],lf[99],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* f_2692 in k2783 in k2786 in k2789 in k2677 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_2692(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2692,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2699,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:253: symbol->string");
t4=*((C_word*)lf[102]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3784 in k3781 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:484: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k3781 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_3783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3783,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3785,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:484: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[183],*((C_word*)lf[68]+1));}
else{
t2=((C_word*)t0)[2];
f_3720(2,t2,C_SCHEME_UNDEFINED);}}

/* k3779 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3780,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,1,t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("setup-api.scm:455: repository-path");
t5=C_fast_retrieve(lf[179]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_car(t3);
C_trace("setup-api.scm:456: make-pathname");
t6=C_fast_retrieve(lf[74]);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[3],t5,t2,lf[0]);}}

/* k3788 in k3786 in k3784 in k3781 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:484: write");
t3=*((C_word*)lf[115]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k3786 in k3784 in k3781 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:484: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[182],((C_word*)t0)[3]);}

/* setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in ... */
static void C_fcall f_3233(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3233,NULL,3,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3237,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3611,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:341: vector->list");
t7=*((C_word*)lf[163]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_3237(t6,C_SCHEME_UNDEFINED);}}

/* k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_fcall f_3237(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3237,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=C_i_listp(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3089,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_3089(2,t6,t4);}
else{
C_trace("setup-api.scm:313: make:form-error");
f_3038(t5,lf[162],t3);}}

/* k3238 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_i_stringp(t3);
if(C_truep(t4)){
t5=t2;
f_3241(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3225,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:337: every");
t6=C_fast_retrieve(lf[154]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[155]+1),t3);}}

/* k2949 in for-each-loop323 in k2932 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2941(t3,((C_word*)t0)[4],t2);}

/* setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_4446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_4446r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4446r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4446r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(10);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4453,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4466,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t7,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:624: setup-install-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[20]))(2,*((C_word*)lf[20]+1),t8);}

/* f_3773 in k3725 in k3723 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3773,2,t0,t1);}
t2=C_fast_retrieve(lf[177]);
C_trace("setup-api.scm:492: g931");
t3=C_fast_retrieve(lf[177]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* reg in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in ... */
static void C_fcall f_2623(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2623,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2630,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:225: make-pathname");
t5=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_retrieve2(lf[12],"setup-api#\052chicken-bin-path\052"),t3);}

/* setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in ... */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2855,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2911,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(t2,lf[85]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2934,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2961,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_2961(t13,t9,t2);}

/* k2852 in setup-api#fixmaketarget in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_2853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_equalp(lf[79],t1))){
t2=C_i_string_equal_p(lf[80],C_fast_retrieve(lf[78]));
t3=((C_word*)t0)[2];
f_2838(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_2838(t2,C_SCHEME_FALSE);}}

/* k2827 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_2829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2829,2,t0,t1);}
t2=(C_truep(t1)?C_retrieve2(lf[8],"setup-api#\052windows-shell\052"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2823,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:261: substring");
t4=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(2));}
else{
C_trace("setup-api.scm:262: find-program");
((C_proc3)C_fast_retrieve_symbol_proc(lf[75]))(3,*((C_word*)lf[75]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k2923 in k2921 in k2918 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k2925 in k2923 in k2921 in k2918 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:276: ##sys#flush-output");
((C_proc3)C_fast_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3413 in k3411 in k3409 in k3407 in k3405 in k3403 in k3378 in k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:387: get-output-string");
t2=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2918 */
static void C_ccall f_2920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2920,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:276: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[84],*((C_word*)lf[68]+1));}
else{
C_trace("setup-api.scm:277: $system");
f_5665(((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k3411 in k3409 in k3407 in k3405 in k3403 in k3378 in k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[4]);}

/* k2921 in k2918 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:276: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k3409 in k3407 in k3405 in k3403 in k3378 in k3376 in k3374 in k3372 in k3369 in k3282 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:387: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k2822 in k2827 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:261: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),((C_word*)t0)[2],t1);}

/* k2836 in setup-api#fixmaketarget in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_fcall f_2838(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api.scm:267: pathname-replace-extension");
t2=C_fast_retrieve(lf[77]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_fast_retrieve(lf[78]));}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3427 in k3425 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:370: file-modification-time");
t3=C_fast_retrieve(lf[135]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3425 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3428,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3440,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:364: file-exists?");
t4=C_fast_retrieve(lf[138]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* f_3423 in k3277 in k3268 in k3261 in k3259 in k3257 in k3255 */
static void C_ccall f_3423(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3423,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:363: fixmaketarget");
f_2831(t3,t2);}

/* k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4466,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[6]))){
t3=((C_word*)t0)[6];
C_trace("setup-api.scm:625: check-filelist");
f_4027(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[6]);
C_trace("setup-api.scm:625: check-filelist");
f_4027(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4468,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:626: installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[169]))(2,*((C_word*)lf[169]+1),t2);}

/* k2600 in setup-api#register-program in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:212: make-pathname");
t2=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[12],"setup-api#\052chicken-bin-path\052"),t1);}

/* setup-api#fixmaketarget in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in ... */
static void C_fcall f_2831(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2831,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2838,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:265: pathname-extension");
t5=C_fast_retrieve(lf[81]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* for-each-loop323 in k2932 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_fcall f_2941(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2941,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2950,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:270: g324");
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4290r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4290r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4290r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4301,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:598: setup-install-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[20]))(2,*((C_word*)lf[20]+1),t7);}

/* k2800 in k2792 in k2674 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_2802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api.scm:246: host-extension");
((C_proc2)C_fast_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2678(t2,lf[105]);}}

/* exify in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_fcall f_4453(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4453,NULL,2,t1,t2);}
t3=(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))?lf[219]:C_SCHEME_FALSE);
t4=C_a_i_list(&a,1,t3);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4114,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:548: pathname-extension");
t8=C_fast_retrieve(lf[81]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* setup-api#remove-file* in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_3988(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3988,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4001,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:529: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,t2);}

/* setup-api#find-program in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in ... */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2606,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2610,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:217: ->string");
t4=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3969 in k3957 in k3955 in k3953 in setup-api#move-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3973,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:526: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[3]);}

/* k3972 in k3969 in k3957 in k3955 in k3953 in setup-api#move-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3973,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[30],"setup-api#\052move-command\052"),((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:526: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[3],t3);}

/* k2810 in k2864 in map-loop377 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:242: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),((C_word*)t0)[2],t1);}

/* k3609 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_3237(t3,t2);}

/* setup-api#make/proc in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in ... */
static void C_ccall f_3613(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3613r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3613r(t0,t1,t2,t3);}}

static void C_ccall f_3613r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(4);
t4=t3;
t5=C_u_i_length(t4);
switch(t5){
case C_fix(0):
t6=t2;
C_trace("setup-api.scm:411: make:make/proc/helper");
f_3233(t1,t6,C_SCHEME_END_OF_LIST);
case C_fix(1):
t6=t2;
t7=C_i_car(t3);
t8=t3;
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3640,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_vectorp(t7))){
C_trace("setup-api.scm:416: vector->list");
t11=*((C_word*)lf[163]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t7);}
else{
C_trace("setup-api.scm:413: make:make/proc/helper");
f_3233(t1,t6,t7);}
default:
C_trace("setup-api.scm:410: ##sys#error");
t6=*((C_word*)lf[165]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,lf[166]);}}

/* k2629 in reg in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_2630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:225: register-program");
((C_proc4)C_fast_retrieve_symbol_proc(lf[72]))(4,*((C_word*)lf[72]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_5828 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in ... */
static void C_ccall f_5828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5828,2,t0,t1);}
t2=C_fast_retrieve(lf[338]);
C_trace("setup-api.scm:184: g138");
t3=C_fast_retrieve(lf[338]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,C_fix(1));}

/* k5825 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in ... */
static void C_ccall f_5826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:226: reg");
f_2623(((C_word*)t0)[3],lf[337],t1);}

/* k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5820,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in k2264 in ... */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5823,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSI_PROGRAM),C_fix(0));}

/* k5822 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_5823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:227: reg");
f_2623(((C_word*)t0)[3],lf[336],t1);}

/* k5819 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in ... */
static void C_ccall f_5820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:228: reg");
f_2623(((C_word*)t0)[3],lf[335],t1);}

/* k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in ... */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5811,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_STATUS_PROGRAM),C_fix(0));}

/* k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in ... */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2645,2,t0,t1);}
t2=C_mutate(&lf[76] /* (set! setup-api#fixmaketarget ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2831,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[82]+1 /* (set! setup-api#execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2855,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[113] /* (set! setup-api#make:form-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3038,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[117] /* (set! setup-api#make:line-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3057,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[120] /* (set! setup-api#make:make/proc/helper ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3233,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[164]+1 /* (set! setup-api#make/proc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3613,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:458: make-parameter");
t9=C_fast_retrieve(lf[326]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,C_SCHEME_FALSE);}

/* k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in ... */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2645,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5808,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_BUG_PROGRAM),C_fix(0));}

/* k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in ... */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5814,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_UNINSTALL_PROGRAM),C_fix(0));}

/* k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in ... */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5817,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_INSTALL_PROGRAM),C_fix(0));}

/* k4256 in k4251 in k4245 in k4233 in k4231 in k4229 in k4227 in k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in ... */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4258,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_4249(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
t2=((C_word*)t0)[3];
f_4249(t2,C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST));}}

/* k4251 in k4245 in k4233 in k4231 in k4229 in k4227 in k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_4252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:589: file-exists?");
t3=C_fast_retrieve(lf[138]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2609 in setup-api#find-program in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in k2289 in k2286 in k2283 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_2610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_assoc(t1,C_retrieve2(lf[9],"setup-api#\052registered-programs\052"));
if(C_truep(t2)){
t3=C_i_cdr(t2);
C_trace("setup-api.scm:220: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),((C_word*)t0)[2],t3);}
else{
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4495 in k4481 in k4479 in k4477 */
static void C_ccall f_4496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4496,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[176],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:640: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t3);}

/* k3445 in k3438 in k3425 */
static void C_ccall f_3446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3446,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3448,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:367: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[137],t2);}

/* k4248 in k4245 in k4233 in k4231 in k4229 in k4227 in k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_fcall f_4249(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4249,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4243,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:592: supply-version");
f_4176(t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3447 in k3445 in k3438 in k3425 */
static void C_ccall f_3448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:367: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k4245 in k4233 in k4231 in k4229 in k4227 in k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_4246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4249,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4252,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:588: pathname-replace-extension");
t4=C_fast_retrieve(lf[77]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[7],lf[202]);}

/* k3438 in k3425 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3428(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:367: open-output-string");
t3=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4242 in k4248 in k4245 in k4233 in k4231 in k4229 in k4227 in k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in ... */
static void C_ccall f_4243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:585: install-extension");
((C_proc5)C_fast_retrieve_symbol_proc(lf[201]))(5,*((C_word*)lf[201]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3654 in k3779 in k3721 in k3719 in setup-api#write-info in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:456: make-pathname");
t2=C_fast_retrieve(lf[74]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],lf[0]);}

/* f_4275 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4275,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* k4097 in map-loop1027 in setup-api#check-filelist in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4098,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4073(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4073(t6,((C_word*)t0)[5],t5);}}

/* k4209 in k4197 in setup-api#supply-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4210,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[195],t1);
C_trace("setup-api.scm:569: cons*");
t3=C_fast_retrieve(lf[97]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_4212(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_4212r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4212r(t0,t1,t2,t3);}}

static void C_ccall f_4212r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4222,a[2]=t1,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4275,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:577: ##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[212]+1)))(5,*((C_word*)lf[212]+1),t8,lf[213],t7,t9);}

/* k2650 in k4326 in k4320 in k4316 in k4314 in k4312 in k4310 */
static void C_ccall f_2651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api.scm:236: make-pathname");
t2=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}}

/* k3639 in setup-api#make/proc in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_3640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:413: make:make/proc/helper");
f_3233(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* map-loop1173 in k4306 in k4304 in k4302 in k4299 in setup-api#install-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_fcall f_4401(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4401,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4426,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:602: g1179");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4229 in k4227 in k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_list(&a,9,lf[204],lf[205],lf[206],C_fix(3),lf[207],C_fix(1),((C_word*)t0)[7],lf[208],((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
C_trace("setup-api.scm:577: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t4);}

/* k3048 in k3046 in k3044 in setup-api#make:form-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:309: write");
t3=*((C_word*)lf[115]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4233 in k4231 in k4229 in k4227 in k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_4234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:587: pathname-replace-extension");
t3=C_fast_retrieve(lf[77]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[8],lf[203]);}

/* k3044 in setup-api#make:form-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_3045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3045,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:309: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],t2);}

/* k4231 in k4229 in k4227 in k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_list(&a,7,lf[204],lf[205],lf[206],C_fix(3),lf[207],C_fix(0),((C_word*)t0)[7]);
t4=C_a_i_list1(&a,1,t3);
C_trace("setup-api.scm:584: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t4);}

/* k3046 in k3044 in setup-api#make:form-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_ccall f_3047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:309: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[116],((C_word*)t0)[5]);}

/* k4227 in k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:582: make-pathname");
t3=C_fast_retrieve(lf[74]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_FALSE,((C_word*)t0)[7],lf[209]);}

/* k4225 in k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_4226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:581: make-pathname");
t3=C_fast_retrieve(lf[74]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_FALSE,((C_word*)t0)[6],lf[210]);}

/* k4223 in k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_4224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4224,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:580: make-pathname");
t3=C_fast_retrieve(lf[74]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_FALSE,t1,lf[211]);}

/* k3053 in k3050 in k3048 in k3046 in k3044 in setup-api#make:form-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:309: error");
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4221 in setup-api#standard-extension in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:579: ->string");
t3=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* setup-api#make:line-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in ... */
static void C_fcall f_3057(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3057,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3064,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:310: open-output-string");
t6=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3050 in k3048 in k3046 in k3044 in setup-api#make:form-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:309: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* f_4900 */
static void C_ccall f_4900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4906,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:710: open-output-string");
t3=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4905 */
static void C_ccall f_4906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4906,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4908,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:710: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[29],"setup-api#\052remove-command\052"),t2);}

/* k4907 in k4905 */
static void C_ccall f_4908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4908,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[65]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* setup-api#make:form-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in k2293 in ... */
static void C_fcall f_3038(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3038,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3045,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:309: open-output-string");
t5=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4834 in k4819 in k4807 in k4799 in setup-api#ensure-directory in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4835,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[231],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:687: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t3);}

/* loop */
static void C_fcall f_3002(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3002,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3013,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(t3);
if(C_truep(C_i_stringp(t5))){
t6=C_u_i_car(t3);
t7=t4;
f_3013(t7,C_a_i_list1(&a,1,t6));}
else{
t6=t4;
f_3013(t6,C_u_i_car(t3));}}}

/* k5285 in map-loop1617 in k5255 in version->list in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_5286(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5286,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5261(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5261(t6,((C_word*)t0)[5],t5);}}

/* setup-api#extension-version in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5411(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5411r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5411r(t0,t1,t2);}}

static void C_ccall f_5411r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5433,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:795: extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[199]))(2,*((C_word*)lf[199]+1),t5);}

/* k4909 in k4907 in k4905 */
static void C_ccall f_4910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4919,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:710: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[5]);}

/* k4911 in k4909 in k4907 in k4905 */
static void C_ccall f_4913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:710: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4914 in k4911 in k4909 in k4907 in k4905 */
static void C_ccall f_4916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:710: $system");
f_5665(((C_word*)t0)[2],t1);}

/* k4918 in k4909 in k4907 in k4905 */
static void C_ccall f_4919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:710: display");
t2=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5291 in version->list in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:762: irregex-split");
t2=C_fast_retrieve(lf[298]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[299],t1);}

/* k3012 in loop */
static void C_fcall f_3013(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3013,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:305: any");
t3=C_fast_retrieve(lf[139]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],t1);}

/* k5297 in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5301,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:764: version->list");
f_5245(t2,((C_word*)t0)[4]);}

/* k3017 in k3012 in loop */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
C_trace("setup-api.scm:307: loop");
t4=((C_word*)((C_word*)t0)[5])[1];
f_3002(t4,((C_word*)t0)[2],t3);}}

/* k4943 in k4941 in k4865 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in ... */
static void C_ccall f_4944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
C_trace("setup-api.scm:696: system");
t3=C_fast_retrieve(lf[237]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k5422 in k5432 in setup-api#extension-version in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
C_trace("setup-api.scm:797: ->string");
t2=C_fast_retrieve(lf[73]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k4941 in k4865 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_4942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4944,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("setup-api.scm:707: print");
t3=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[238]);}
else{
t3=t1;
C_trace("setup-api.scm:696: system");
t4=C_fast_retrieve(lf[237]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}}

/* k4000 in setup-api#remove-file* in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4001,2,t0,t1);}
t2=C_a_i_list(&a,2,C_retrieve2(lf[29],"setup-api#\052remove-command\052"),t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:528: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t3);}

/* setup-api#make-dest-pathname in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_fcall f_4003(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4003,NULL,3,t1,t2,t3);}
if(C_truep(C_i_listp(t3))){
t4=C_i_cadr(t3);
C_trace("setup-api.scm:533: make-dest-pathname");
t7=t1;
t8=t2;
t9=t4;
t1=t7;
t2=t8;
t3=t9;
goto loop;}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4022,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:534: absolute-pathname?");
t5=C_fast_retrieve(lf[187]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* k5432 in setup-api#extension-version in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5433,2,t0,t1);}
t2=C_i_cadr(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:796: string-null?");
t4=C_fast_retrieve(lf[302]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* f_4030 in setup-api#check-filelist in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4030,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4042,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
C_trace("setup-api.scm:541: every");
t4=C_fast_retrieve(lf[154]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[155]+1),t2);}
else{
t4=t3;
f_4042(2,t4,C_SCHEME_FALSE);}}}

/* k4670 in k4667 in k4637 in k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:660: supply-version");
f_4176(t2,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k4676 in k4670 in k4667 in k4637 in k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_4677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:660: write-info");
f_3714(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k4481 in k4479 in k4477 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4484,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4496,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:640: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[3]);}}

/* k4479 in k4477 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4482,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:638: copy-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[184]))(4,*((C_word*)lf[184]+1),t2,((C_word*)t0)[3],t1);}

/* k4483 in k4481 in k4479 in k4477 */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5444 in setup-api#read-info in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:802: make-pathname");
t3=C_fast_retrieve(lf[74]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,((C_word*)t0)[3],lf[0]);}

/* setup-api#read-info in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5441(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5441r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5441r(t0,t1,t2,t3);}}

static void C_ccall f_5441r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5446,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("setup-api.scm:800: repository-path");
t5=C_fast_retrieve(lf[179]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_5446(2,t5,C_i_car(t3));}}

/* k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4472(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4474,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[10],"setup-api#\052windows\052"))){
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4542,a[2]=((C_word*)t0)[5],a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t8=((C_word*)t0)[6];
t9=C_i_check_list_2(t8,lf[85]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4573,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4573(t13,t2,t8);}
else{
t3=t2;
f_4474(2,t3,((C_word*)t0)[6]);}}

/* k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_4470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4604,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:627: make-pathname");
t4=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,lf[224]);}

/* k4477 */
static void C_fcall f_4478(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4478,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:637: make-dest-pathname");
f_4003(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5451 in k5444 in setup-api#read-info in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:801: with-input-from-file");
t2=C_fast_retrieve(lf[60]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[304]+1));}

/* f_4475 in k4473 in k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4475(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4475,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4478,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_4478(t5,C_u_i_car(t4));}
else{
t4=t3;
f_4478(t4,t2);}}

/* k4473 in k4471 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4474(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4474,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4475,a[2]=((C_word*)t0)[2],a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[85]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4505,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4513,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li71),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4513(t12,t8,t1);}

/* k4952 in k4865 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_4953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_truep(C_retrieve2(lf[10],"setup-api#\052windows\052"))?lf[241]:lf[242]);
t3=(C_truep(((C_word*)t0)[2])?lf[243]:lf[244]);
C_trace("setup-api.scm:697: conc");
t4=C_fast_retrieve(lf[245]);
((C_proc15)(void*)(*((C_word*)t4+1)))(15,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[246],((C_word*)t0)[5],lf[247],((C_word*)t0)[6],lf[248],C_retrieve2(lf[4],"setup-api#\052target-cflags\052"),lf[249],((C_word*)t0)[7],lf[250],t1,t2,t3);}

/* map-loop1327 in k4637 in k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_fcall f_4691(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4691,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4716,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:650: g1333");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* setup-api#remove-directory in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5463r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5463r(t0,t1,t2,t3);}}

static void C_ccall f_5463r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_TRUE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5474,a[2]=t1,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:806: file-exists?");
t7=C_fast_retrieve(lf[138]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k3840 in k3827 in walk in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_3841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3841,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3846,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3846(t5,((C_word*)t0)[3],t1);}

/* for-each-loop972 in k3840 in k3827 in walk in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_fcall f_3846(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3846,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3855,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:506: g973");
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4040 */
static void C_ccall f_4042(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4042,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=C_a_i_list2(&a,2,t3,t5);
if(C_truep(t6)){
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
C_trace("setup-api.scm:543: error");
t7=*((C_word*)lf[114]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[2],lf[192],((C_word*)t0)[3]);}}
else{
C_trace("setup-api.scm:543: error");
t2=*((C_word*)lf[114]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[192],((C_word*)t0)[3]);}}}

/* k4688 in k4667 in k4637 in k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4689,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[226],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:659: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t3);}

/* k5365 in loop in k5300 in k5297 in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_5366(C_word c,C_word t0,C_word t1){
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
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[4];
t5=C_u_i_car(t4);
if(C_truep(C_i_string_equal_p(t3,t5))){
t6=((C_word*)t0)[3];
t7=C_u_i_cdr(t6);
t8=((C_word*)t0)[4];
t9=C_u_i_cdr(t8);
C_trace("setup-api.scm:776: loop");
t10=((C_word*)((C_word*)t0)[5])[1];
f_5303(t10,((C_word*)t0)[2],t7,t9);}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}}

/* k3854 in for-each-loop972 in k3840 in k3827 in walk in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_3855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3846(t3,((C_word*)t0)[4],t2);}

/* map-loop1027 in setup-api#check-filelist in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_fcall f_4073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4073,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4098,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:538: g1033");
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3819 in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* walk in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_fcall f_3822(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3822,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3829,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:505: directory?");
t5=C_fast_retrieve(lf[186]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3827 in walk in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_3829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3829,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3841,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:509: directory");
t4=C_fast_retrieve(lf[185]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3866,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:511: ensure-directory");
f_4793(t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}}

/* k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_fcall f_5091(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5091,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:730: extension-information");
t8=C_fast_retrieve(lf[282]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
C_trace("setup-api.scm:745: error");
t2=*((C_word*)lf[114]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[283],lf[284],((C_word*)t0)[2]);}}

/* k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5099,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(lf[194],t1))){
t3=C_i_assq(lf[194],t1);
t4=t2;
f_5104(t4,C_i_cadr(t3));}
else{
t3=t2;
f_5104(t3,C_SCHEME_FALSE);}}
else{
C_trace("setup-api.scm:743: upgrade-message");
f_5017(((C_word*)t0)[2],((C_word*)t0)[3],lf[281],C_SCHEME_END_OF_LIST);}}

/* loop in k5300 in k5297 in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_fcall f_5303(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5303,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t3));}
else{
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_car(t2);
if(C_truep(C_i_numberp(t5))){
t6=C_i_car(t3);
if(C_truep(C_i_numberp(t6))){
t7=t2;
t8=C_u_i_car(t7);
t9=t3;
t10=C_u_i_car(t9);
t11=C_i_greaterp(t8,t10);
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t12=t2;
t13=C_u_i_car(t12);
t14=t3;
t15=C_u_i_car(t14);
if(C_truep(C_i_nequalp(t13,t15))){
t16=t2;
t17=C_u_i_cdr(t16);
t18=t3;
t19=C_u_i_cdr(t18);
C_trace("setup-api.scm:771: loop");
t28=t1;
t29=t17;
t30=t19;
t1=t28;
t2=t29;
t3=t30;
goto loop;}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t6=C_i_car(t3);
t7=C_i_numberp(t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5366,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_u_i_car(t9);
t11=t3;
t12=C_u_i_car(t11);
C_trace("setup-api.scm:773: string>?");
t13=*((C_word*)lf[300]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t8,t10,t12);}}}}}

/* f_3830 in k3827 in walk in k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_3830(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3830,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3836,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:508: make-pathname");
t4=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],t2);}

/* k3838 in k3835 */
static void C_ccall f_3839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:508: walk");
t2=((C_word*)((C_word*)t0)[2])[1];
f_3822(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3835 */
static void C_ccall f_3836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3839,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:508: make-pathname");
t3=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4645 in k4643 in k4641 */
static void C_ccall f_4646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4660,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:655: shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[3]);}}

/* setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_3801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3801r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3801r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3801r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_TRUE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3809,a[2]=t8,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t8))){
C_trace("setup-api.scm:495: installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[169]))(2,*((C_word*)lf[169]+1),t9);}
else{
t10=t9;
f_3809(2,t10,C_i_car(t8));}}

/* k4647 in k4645 in k4643 in k4641 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3067 in k3065 in k3063 in setup-api#make:line-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_3068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:310: write");
t3=*((C_word*)lf[115]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}

/* k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_3809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3809,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3813,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t5=((C_word*)t0)[4];
t6=t4;
f_3813(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3813(t5,((C_word*)t0)[4]);}}

/* k3065 in k3063 in setup-api#make:line-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:310: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[119],((C_word*)t0)[5]);}

/* k3063 in setup-api#make:line-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_3064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3064,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3066,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:310: display");
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],t2);}

/* k4641 */
static void C_fcall f_4642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4642,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4644,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:652: make-dest-pathname");
f_4003(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4643 in k4641 */
static void C_ccall f_4644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4646,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:653: copy-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[184]))(4,*((C_word*)lf[184]+1),t2,((C_word*)t0)[3],t1);}

/* f_2911 in setup-api#execute in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in k2295 in ... */
static void C_ccall f_2911(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2911,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2914,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2920,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:276: run-verbose");
((C_proc2)C_fast_retrieve_symbol_proc(lf[71]))(2,*((C_word*)lf[71]+1),t4);}

/* k2913 */
static void C_ccall f_2914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:277: $system");
f_5665(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_fcall f_3813(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3813,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3815,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("setup-api.scm:498: make-pathname");
t4=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[5],t3);}
else{
t3=t2;
f_3815(2,t3,((C_word*)t0)[5]);}}

/* k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3815(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3815,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3884,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=t1;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3945,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:519: normalize-pathname");
t7=C_fast_retrieve(lf[16]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}

/* k3076 in k3073 in k3071 in k3069 in k3067 in k3065 in k3063 in setup-api#make:line-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api.scm:310: error");
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3816 in k3814 in k3812 in k3808 in setup-api#copy-file in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_3818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3818,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3822,a[2]=t4,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3822(t6,t2,((C_word*)t0)[3],t1);}

/* k3073 in k3071 in k3069 in k3067 in k3065 in k3063 in setup-api#make:line-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in ... */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:310: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3071 in k3069 in k3067 in k3065 in k3063 in setup-api#make:line-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:310: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3069 in k3067 in k3065 in k3063 in setup-api#make:line-error in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_3070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:310: display");
t3=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[118],((C_word*)t0)[5]);}

/* setup-api#check-filelist in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_fcall f_4027(C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4027,NULL,2,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4030,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(t2,lf[85]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4073,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,a[6]=((C_word)li60),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4073(t12,t1,t2);}

/* k4667 in k4637 in k4635 in k4633 in k4630 in setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4671,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=t2;
f_4671(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4689,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:659: string-intersperse");
t4=C_fast_retrieve(lf[87]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,lf[227]);}}

/* k4659 in k4645 in k4643 in k4641 */
static void C_ccall f_4660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4660,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[176],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:655: execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),((C_word*)t0)[2],t3);}

/* k4020 in setup-api#make-dest-pathname in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
C_trace("setup-api.scm:536: make-pathname");
t2=C_fast_retrieve(lf[74]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in ... */
static void C_ccall f_4864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4964,a[2]=((C_word*)t0)[9],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:695: with-output-to-file");
t4=C_fast_retrieve(lf[61]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[3],t3);}

/* k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in ... */
static void C_ccall f_4862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4864,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-api.scm:693: pathname-replace-extension");
t3=C_fast_retrieve(lf[77]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[255]);}

/* k4867 in k4865 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_4869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4871,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_eqp(t1,C_fix(0));
if(C_truep(t3)){
C_trace("setup-api.scm:709: print");
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[235]);}
else{
C_trace("setup-api.scm:709: print");
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[236]);}}
else{
t3=t2;
f_4871(2,t3,C_SCHEME_UNDEFINED);}}

/* k4865 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in ... */
static void C_ccall f_4866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4942,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(((C_word*)t0)[5])?lf[239]:lf[240]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=t5;
f_4953(2,t6,lf[251]);}
else{
C_trace("setup-api.scm:704: conc");
t6=C_fast_retrieve(lf[245]);
((C_proc8)(void*)(*((C_word*)t6+1)))(8,t6,t5,lf[252],C_retrieve2(lf[6],"setup-api#\052target-lib-home\052"),lf[253],((C_word*)t0)[8],lf[254],C_retrieve2(lf[5],"setup-api#\052target-libs\052"));}}

/* k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_ccall f_4860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-api.scm:692: create-temporary-file");
t3=C_fast_retrieve(lf[67]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[256]);}

/* f_4892 */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4892,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_4895 */
static void C_ccall f_4895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4900,a[2]=((C_word*)t0)[2],a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4921,a[2]=((C_word*)t0)[3],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:710: ##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* k5117 in k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in ... */
static void C_fcall f_5119(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5119,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:738: open-output-string");
t3=C_fast_retrieve(lf[66]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("setup-api.scm:742: loop");
t2=((C_word*)((C_word*)t0)[5])[1];
f_5078(t2,((C_word*)t0)[2],((C_word*)t0)[6]);}}

/* k4603 in k4469 in k4467 in k4464 in setup-api#install-program in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in ... */
static void C_ccall f_4604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4604,2,t0,t1);}
C_trace("setup-api.scm:627: ensure-directory");
f_4793(((C_word*)t0)[2],t1,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* f_4882 in k4870 in k4867 in k4865 in k4863 in k4861 in k4859 in k4857 in k4855 in k4853 in k4851 in setup-api#try-compile in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in ... */
static void C_ccall f_4882(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4882,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4887,a[2]=t2,a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4895,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:710: with-exception-handler");
t5=C_fast_retrieve(lf[124]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* f_4887 */
static void C_ccall f_4887(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4887,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4892,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:710: k1447");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k5300 in k5297 in setup-api#version>=? in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5301,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5303,a[2]=t3,a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5303(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3087 in k3236 in setup-api#make:make/proc/helper in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in k2298 in ... */
static void C_ccall f_3089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3089,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3097,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_3097(2,t4,t2);}
else{
C_trace("setup-api.scm:314: make:form-error");
f_3038(t3,lf[161],((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[3];
f_3239(2,t2,C_SCHEME_FALSE);}}

/* k5408 in setup-api#extension-name in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in ... */
static void C_ccall f_5409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* setup-api#extension-name in k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in ... */
static void C_ccall f_5402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5409,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:792: extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[199]))(2,*((C_word*)lf[199]+1),t2);}

/* k5398 in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_5400(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5400,2,t0,t1);}
t2=C_mutate((C_word*)lf[199]+1 /* (set! setup-api#extension-name-and-version ...) */,t1);
t3=C_mutate((C_word*)lf[196]+1 /* (set! setup-api#extension-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5402,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[301]+1 /* (set! setup-api#extension-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5411,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[303]+1 /* (set! setup-api#read-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5441,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[305]+1 /* (set! setup-api#remove-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5463,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[313]+1 /* (set! setup-api#remove-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5608,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[62] /* (set! setup-api#$system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5665,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[318]+1 /* (set! setup-api#setup-error-handling ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5708,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5721,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:849: user-install-setup");
f_2427(t10);}

/* k5130 in k5128 in k5126 in k5124 in k5117 in k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in ... */
static void C_ccall f_5132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:738: get-output-string");
t3=C_fast_retrieve(lf[63]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k5133 in k5130 in k5128 in k5126 in k5124 in k5117 in k5103 in k5098 in k5089 in loop in setup-api#required-extension-version in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in ... */
static void C_ccall f_5135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5135,2,t0,t1);}
C_trace("setup-api.scm:736: upgrade-message");
f_5017(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_a_i_list(&a,1,((C_word*)t0)[4]));}

/* setup-api#install-script in k3678 in k3674 in k3670 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 in k2576 in k2476 in k2342 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2304 in k2302 in ... */
static void C_ccall f_4621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4621r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4621r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4621r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4632,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:646: setup-install-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[20]))(2,*((C_word*)lf[20]+1),t7);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[587] = {
{"f_5104:setup_2dapi_2escm",(void*)f_5104},
{"f_5683:setup_2dapi_2escm",(void*)f_5683},
{"f_5685:setup_2dapi_2escm",(void*)f_5685},
{"f_5681:setup_2dapi_2escm",(void*)f_5681},
{"f_5687:setup_2dapi_2escm",(void*)f_5687},
{"f_5689:setup_2dapi_2escm",(void*)f_5689},
{"f_5151:setup_2dapi_2escm",(void*)f_5151},
{"f_4873:setup_2dapi_2escm",(void*)f_4873},
{"toplevel:setup_2dapi_2escm",(void*)C_toplevel},
{"f_4876:setup_2dapi_2escm",(void*)f_4876},
{"f_4871:setup_2dapi_2escm",(void*)f_4871},
{"f_5178:setup_2dapi_2escm",(void*)f_5178},
{"f_5148:setup_2dapi_2escm",(void*)f_5148},
{"f_5141:setup_2dapi_2escm",(void*)f_5141},
{"f_5696:setup_2dapi_2escm",(void*)f_5696},
{"f_5693:setup_2dapi_2escm",(void*)f_5693},
{"f_5691:setup_2dapi_2escm",(void*)f_5691},
{"f_5699:setup_2dapi_2escm",(void*)f_5699},
{"f_4636:setup_2dapi_2escm",(void*)f_4636},
{"f_4638:setup_2dapi_2escm",(void*)f_4638},
{"f_4639:setup_2dapi_2escm",(void*)f_4639},
{"f_4632:setup_2dapi_2escm",(void*)f_4632},
{"f_4634:setup_2dapi_2escm",(void*)f_4634},
{"f_3303:setup_2dapi_2escm",(void*)f_3303},
{"f_3308:setup_2dapi_2escm",(void*)f_3308},
{"f_3301:setup_2dapi_2escm",(void*)f_3301},
{"f_5742:setup_2dapi_2escm",(void*)f_5742},
{"f_3313:setup_2dapi_2escm",(void*)f_3313},
{"f_3318:setup_2dapi_2escm",(void*)f_3318},
{"f_3365:setup_2dapi_2escm",(void*)f_3365},
{"f_3284:setup_2dapi_2escm",(void*)f_3284},
{"f_3360:setup_2dapi_2escm",(void*)f_3360},
{"f_5765:setup_2dapi_2escm",(void*)f_5765},
{"f_5762:setup_2dapi_2escm",(void*)f_5762},
{"f_3375:setup_2dapi_2escm",(void*)f_3375},
{"f_3377:setup_2dapi_2escm",(void*)f_3377},
{"f_3371:setup_2dapi_2escm",(void*)f_3371},
{"f_3373:setup_2dapi_2escm",(void*)f_3373},
{"f_5125:setup_2dapi_2escm",(void*)f_5125},
{"f_5127:setup_2dapi_2escm",(void*)f_5127},
{"f_5129:setup_2dapi_2escm",(void*)f_5129},
{"f_3379:setup_2dapi_2escm",(void*)f_3379},
{"f_3347:setup_2dapi_2escm",(void*)f_3347},
{"f_5708:setup_2dapi_2escm",(void*)f_5708},
{"f_5703:setup_2dapi_2escm",(void*)f_5703},
{"f_3352:setup_2dapi_2escm",(void*)f_3352},
{"f_5714:setup_2dapi_2escm",(void*)f_5714},
{"f_5711:setup_2dapi_2escm",(void*)f_5711},
{"f_3097:setup_2dapi_2escm",(void*)f_3097},
{"f_2578:setup_2dapi_2escm",(void*)f_2578},
{"f_5723:setup_2dapi_2escm",(void*)f_5723},
{"f_5721:setup_2dapi_2escm",(void*)f_5721},
{"f_2571:setup_2dapi_2escm",(void*)f_2571},
{"f_2585:setup_2dapi_2escm",(void*)f_2585},
{"f_2580:setup_2dapi_2escm",(void*)f_2580},
{"f_5574:setup_2dapi_2escm",(void*)f_5574},
{"f_2592:setup_2dapi_2escm",(void*)f_2592},
{"f_5579:setup_2dapi_2escm",(void*)f_5579},
{"f_5588:setup_2dapi_2escm",(void*)f_5588},
{"f_3548:setup_2dapi_2escm",(void*)f_3548},
{"f_3487:setup_2dapi_2escm",(void*)f_3487},
{"f_3489:setup_2dapi_2escm",(void*)f_3489},
{"f_3495:setup_2dapi_2escm",(void*)f_3495},
{"f_3492:setup_2dapi_2escm",(void*)f_3492},
{"f_3527:setup_2dapi_2escm",(void*)f_3527},
{"f_3524:setup_2dapi_2escm",(void*)f_3524},
{"f_3523:setup_2dapi_2escm",(void*)f_3523},
{"f_3323:setup_2dapi_2escm",(void*)f_3323},
{"f_3529:setup_2dapi_2escm",(void*)f_3529},
{"f_3325:setup_2dapi_2escm",(void*)f_3325},
{"f_3327:setup_2dapi_2escm",(void*)f_3327},
{"f_3498:setup_2dapi_2escm",(void*)f_3498},
{"f_3321:setup_2dapi_2escm",(void*)f_3321},
{"f_3506:setup_2dapi_2escm",(void*)f_3506},
{"f_3336:setup_2dapi_2escm",(void*)f_3336},
{"f_3339:setup_2dapi_2escm",(void*)f_3339},
{"f_3502:setup_2dapi_2escm",(void*)f_3502},
{"f_3504:setup_2dapi_2escm",(void*)f_3504},
{"f_3500:setup_2dapi_2escm",(void*)f_3500},
{"f_3330:setup_2dapi_2escm",(void*)f_3330},
{"f_5737:setup_2dapi_2escm",(void*)f_5737},
{"f_2506:setup_2dapi_2escm",(void*)f_2506},
{"f_3517:setup_2dapi_2escm",(void*)f_3517},
{"f_3512:setup_2dapi_2escm",(void*)f_3512},
{"f_2511:setup_2dapi_2escm",(void*)f_2511},
{"f_2515:setup_2dapi_2escm",(void*)f_2515},
{"f_2523:setup_2dapi_2escm",(void*)f_2523},
{"f_2529:setup_2dapi_2escm",(void*)f_2529},
{"f_2531:setup_2dapi_2escm",(void*)f_2531},
{"f_2533:setup_2dapi_2escm",(void*)f_2533},
{"f_5805:setup_2dapi_2escm",(void*)f_5805},
{"f_5808:setup_2dapi_2escm",(void*)f_5808},
{"f_2539:setup_2dapi_2escm",(void*)f_2539},
{"f_3726:setup_2dapi_2escm",(void*)f_3726},
{"f_3728:setup_2dapi_2escm",(void*)f_3728},
{"f_3722:setup_2dapi_2escm",(void*)f_3722},
{"f_3724:setup_2dapi_2escm",(void*)f_3724},
{"f_3720:setup_2dapi_2escm",(void*)f_3720},
{"f_2541:setup_2dapi_2escm",(void*)f_2541},
{"f_2543:setup_2dapi_2escm",(void*)f_2543},
{"f_2545:setup_2dapi_2escm",(void*)f_2545},
{"f_5814:setup_2dapi_2escm",(void*)f_5814},
{"f_5817:setup_2dapi_2escm",(void*)f_5817},
{"f_2547:setup_2dapi_2escm",(void*)f_2547},
{"f_5811:setup_2dapi_2escm",(void*)f_5811},
{"f_2550:setup_2dapi_2escm",(void*)f_2550},
{"f_2553:setup_2dapi_2escm",(void*)f_2553},
{"f_2559:setup_2dapi_2escm",(void*)f_2559},
{"f_2556:setup_2dapi_2escm",(void*)f_2556},
{"f_3684:setup_2dapi_2escm",(void*)f_3684},
{"f_3706:setup_2dapi_2escm",(void*)f_3706},
{"f_3680:setup_2dapi_2escm",(void*)f_3680},
{"f_3704:setup_2dapi_2escm",(void*)f_3704},
{"f_3702:setup_2dapi_2escm",(void*)f_3702},
{"f_3679:setup_2dapi_2escm",(void*)f_3679},
{"f_3700:setup_2dapi_2escm",(void*)f_3700},
{"f_2565:setup_2dapi_2escm",(void*)f_2565},
{"f_2569:setup_2dapi_2escm",(void*)f_2569},
{"f_2567:setup_2dapi_2escm",(void*)f_2567},
{"f_3676:setup_2dapi_2escm",(void*)f_3676},
{"f_3672:setup_2dapi_2escm",(void*)f_3672},
{"f_3534:setup_2dapi_2escm",(void*)f_3534},
{"f_3539:setup_2dapi_2escm",(void*)f_3539},
{"f_4511:setup_2dapi_2escm",(void*)f_4511},
{"f_4513:setup_2dapi_2escm",(void*)f_4513},
{"f_3762:setup_2dapi_2escm",(void*)f_3762},
{"f_3764:setup_2dapi_2escm",(void*)f_3764},
{"f_4542:setup_2dapi_2escm",(void*)f_4542},
{"f_2375:setup_2dapi_2escm",(void*)f_2375},
{"f_3693:setup_2dapi_2escm",(void*)f_3693},
{"f_5850:setup_2dapi_2escm",(void*)f_5850},
{"f_4538:setup_2dapi_2escm",(void*)f_4538},
{"f_2300:setup_2dapi_2escm",(void*)f_2300},
{"f_2303:setup_2dapi_2escm",(void*)f_2303},
{"f_2308:setup_2dapi_2escm",(void*)f_2308},
{"f_2306:setup_2dapi_2escm",(void*)f_2306},
{"f_3745:setup_2dapi_2escm",(void*)f_3745},
{"f_3743:setup_2dapi_2escm",(void*)f_3743},
{"f_3747:setup_2dapi_2escm",(void*)f_3747},
{"f_2315:setup_2dapi_2escm",(void*)f_2315},
{"f_3714:setup_2dapi_2escm",(void*)f_3714},
{"f_4557:setup_2dapi_2escm",(void*)f_4557},
{"f_2320:setup_2dapi_2escm",(void*)f_2320},
{"f_2324:setup_2dapi_2escm",(void*)f_2324},
{"f_4554:setup_2dapi_2escm",(void*)f_4554},
{"f_2328:setup_2dapi_2escm",(void*)f_2328},
{"f_2344:setup_2dapi_2escm",(void*)f_2344},
{"f_2340:setup_2dapi_2escm",(void*)f_2340},
{"f_2346:setup_2dapi_2escm",(void*)f_2346},
{"f_4815:setup_2dapi_2escm",(void*)f_4815},
{"f_2356:setup_2dapi_2escm",(void*)f_2356},
{"f_3759:setup_2dapi_2escm",(void*)f_3759},
{"f_4598:setup_2dapi_2escm",(void*)f_4598},
{"f_4800:setup_2dapi_2escm",(void*)f_4800},
{"f_4803:setup_2dapi_2escm",(void*)f_4803},
{"f_2365:setup_2dapi_2escm",(void*)f_2365},
{"f_4809:setup_2dapi_2escm",(void*)f_4809},
{"f_5519:setup_2dapi_2escm",(void*)f_5519},
{"f_5516:setup_2dapi_2escm",(void*)f_5516},
{"f_5514:setup_2dapi_2escm",(void*)f_5514},
{"f_5525:setup_2dapi_2escm",(void*)f_5525},
{"f_5527:setup_2dapi_2escm",(void*)f_5527},
{"f_5522:setup_2dapi_2escm",(void*)f_5522},
{"f_4820:setup_2dapi_2escm",(void*)f_4820},
{"f_5532:setup_2dapi_2escm",(void*)f_5532},
{"f_4854:setup_2dapi_2escm",(void*)f_4854},
{"f_4856:setup_2dapi_2escm",(void*)f_4856},
{"f_4852:setup_2dapi_2escm",(void*)f_4852},
{"f_4858:setup_2dapi_2escm",(void*)f_4858},
{"f_2779:setup_2dapi_2escm",(void*)f_2779},
{"f_5545:setup_2dapi_2escm",(void*)f_5545},
{"f_5544:setup_2dapi_2escm",(void*)f_5544},
{"f_4846:setup_2dapi_2escm",(void*)f_4846},
{"f_5540:setup_2dapi_2escm",(void*)f_5540},
{"f_4505:setup_2dapi_2escm",(void*)f_4505},
{"f_2332:setup_2dapi_2escm",(void*)f_2332},
{"f_5245:setup_2dapi_2escm",(void*)f_5245},
{"f_5248:setup_2dapi_2escm",(void*)f_5248},
{"f_2788:setup_2dapi_2escm",(void*)f_2788},
{"f_2785:setup_2dapi_2escm",(void*)f_2785},
{"f_5241:setup_2dapi_2escm",(void*)f_5241},
{"f_5553:setup_2dapi_2escm",(void*)f_5553},
{"f_5555:setup_2dapi_2escm",(void*)f_5555},
{"f_2336:setup_2dapi_2escm",(void*)f_2336},
{"f_3948:setup_2dapi_2escm",(void*)f_3948},
{"f_3945:setup_2dapi_2escm",(void*)f_3945},
{"f_4384:setup_2dapi_2escm",(void*)f_4384},
{"f_5256:setup_2dapi_2escm",(void*)f_5256},
{"f_2793:setup_2dapi_2escm",(void*)f_2793},
{"f_2796:setup_2dapi_2escm",(void*)f_2796},
{"f_3152:setup_2dapi_2escm",(void*)f_3152},
{"f_5561:setup_2dapi_2escm",(void*)f_5561},
{"f_2791:setup_2dapi_2escm",(void*)f_2791},
{"f_3950:setup_2dapi_2escm",(void*)f_3950},
{"f_3958:setup_2dapi_2escm",(void*)f_3958},
{"f_3956:setup_2dapi_2escm",(void*)f_3956},
{"f_3954:setup_2dapi_2escm",(void*)f_3954},
{"f_5261:setup_2dapi_2escm",(void*)f_5261},
{"f_3127:setup_2dapi_2escm",(void*)f_3127},
{"f_3121:setup_2dapi_2escm",(void*)f_3121},
{"f_4926:setup_2dapi_2escm",(void*)f_4926},
{"f_4921:setup_2dapi_2escm",(void*)f_4921},
{"f_5203:setup_2dapi_2escm",(void*)f_5203},
{"f_5205:setup_2dapi_2escm",(void*)f_5205},
{"f_5207:setup_2dapi_2escm",(void*)f_5207},
{"f_5209:setup_2dapi_2escm",(void*)f_5209},
{"f_5201:setup_2dapi_2escm",(void*)f_5201},
{"f_3102:setup_2dapi_2escm",(void*)f_3102},
{"f_3107:setup_2dapi_2escm",(void*)f_3107},
{"f_5495:setup_2dapi_2escm",(void*)f_5495},
{"f_5490:setup_2dapi_2escm",(void*)f_5490},
{"f_5214:setup_2dapi_2escm",(void*)f_5214},
{"f_5217:setup_2dapi_2escm",(void*)f_5217},
{"f_5211:setup_2dapi_2escm",(void*)f_5211},
{"f_3118:setup_2dapi_2escm",(void*)f_3118},
{"f_3110:setup_2dapi_2escm",(void*)f_3110},
{"f_5222:setup_2dapi_2escm",(void*)f_5222},
{"f_4184:setup_2dapi_2escm",(void*)f_4184},
{"f_5229:setup_2dapi_2escm",(void*)f_5229},
{"f_5220:setup_2dapi_2escm",(void*)f_5220},
{"f_4372:setup_2dapi_2escm",(void*)f_4372},
{"f_2478:setup_2dapi_2escm",(void*)f_2478},
{"f_5233:setup_2dapi_2escm",(void*)f_5233},
{"f_5239:setup_2dapi_2escm",(void*)f_5239},
{"f_5236:setup_2dapi_2escm",(void*)f_5236},
{"f_4366:setup_2dapi_2escm",(void*)f_4366},
{"f_5231:setup_2dapi_2escm",(void*)f_5231},
{"f_4393:setup_2dapi_2escm",(void*)f_4393},
{"f_4399:setup_2dapi_2escm",(void*)f_4399},
{"f_2701:setup_2dapi_2escm",(void*)f_2701},
{"f_2708:setup_2dapi_2escm",(void*)f_2708},
{"f_2706:setup_2dapi_2escm",(void*)f_2706},
{"f_4573:setup_2dapi_2escm",(void*)f_4573},
{"f_4193:setup_2dapi_2escm",(void*)f_4193},
{"f_4307:setup_2dapi_2escm",(void*)f_4307},
{"f_5078:setup_2dapi_2escm",(void*)f_5078},
{"f_4198:setup_2dapi_2escm",(void*)f_4198},
{"f_5072:setup_2dapi_2escm",(void*)f_5072},
{"f_4308:setup_2dapi_2escm",(void*)f_4308},
{"f_4301:setup_2dapi_2escm",(void*)f_4301},
{"f_4303:setup_2dapi_2escm",(void*)f_4303},
{"f_4305:setup_2dapi_2escm",(void*)f_4305},
{"f_2715:setup_2dapi_2escm",(void*)f_2715},
{"f_2717:setup_2dapi_2escm",(void*)f_2717},
{"f_2722:setup_2dapi_2escm",(void*)f_2722},
{"f_2724:setup_2dapi_2escm",(void*)f_2724},
{"f_5004:setup_2dapi_2escm",(void*)f_5004},
{"f_5002:setup_2dapi_2escm",(void*)f_5002},
{"f_4339:setup_2dapi_2escm",(void*)f_4339},
{"f_5009:setup_2dapi_2escm",(void*)f_5009},
{"f_5006:setup_2dapi_2escm",(void*)f_5006},
{"f_4330:setup_2dapi_2escm",(void*)f_4330},
{"f_5193:setup_2dapi_2escm",(void*)f_5193},
{"f_5191:setup_2dapi_2escm",(void*)f_5191},
{"f_5197:setup_2dapi_2escm",(void*)f_5197},
{"f_5195:setup_2dapi_2escm",(void*)f_5195},
{"f_5199:setup_2dapi_2escm",(void*)f_5199},
{"f_5015:setup_2dapi_2escm",(void*)f_5015},
{"f_5012:setup_2dapi_2escm",(void*)f_5012},
{"f_4328:setup_2dapi_2escm",(void*)f_4328},
{"f_5017:setup_2dapi_2escm",(void*)f_5017},
{"f_5508:setup_2dapi_2escm",(void*)f_5508},
{"f_5503:setup_2dapi_2escm",(void*)f_5503},
{"f_5500:setup_2dapi_2escm",(void*)f_5500},
{"f_4322:setup_2dapi_2escm",(void*)f_4322},
{"f_2484:setup_2dapi_2escm",(void*)f_2484},
{"f_5028:setup_2dapi_2escm",(void*)f_5028},
{"f_4351:setup_2dapi_2escm",(void*)f_4351},
{"f_2480:setup_2dapi_2escm",(void*)f_2480},
{"f_2749:setup_2dapi_2escm",(void*)f_2749},
{"f_2498:setup_2dapi_2escm",(void*)f_2498},
{"f_2754:setup_2dapi_2escm",(void*)f_2754},
{"f_5187:setup_2dapi_2escm",(void*)f_5187},
{"f_5185:setup_2dapi_2escm",(void*)f_5185},
{"f_5189:setup_2dapi_2escm",(void*)f_5189},
{"f_5048:setup_2dapi_2escm",(void*)f_5048},
{"f_5046:setup_2dapi_2escm",(void*)f_5046},
{"f_5044:setup_2dapi_2escm",(void*)f_5044},
{"f_5042:setup_2dapi_2escm",(void*)f_5042},
{"f_5040:setup_2dapi_2escm",(void*)f_5040},
{"f_3160:setup_2dapi_2escm",(void*)f_3160},
{"f_5058:setup_2dapi_2escm",(void*)f_5058},
{"f_5055:setup_2dapi_2escm",(void*)f_5055},
{"f_5052:setup_2dapi_2escm",(void*)f_5052},
{"f_5050:setup_2dapi_2escm",(void*)f_5050},
{"f_4176:setup_2dapi_2escm",(void*)f_4176},
{"f_4317:setup_2dapi_2escm",(void*)f_4317},
{"f_5061:setup_2dapi_2escm",(void*)f_5061},
{"f_4311:setup_2dapi_2escm",(void*)f_4311},
{"f_4313:setup_2dapi_2escm",(void*)f_4313},
{"f_4315:setup_2dapi_2escm",(void*)f_4315},
{"f_2291:setup_2dapi_2escm",(void*)f_2291},
{"f_4984:setup_2dapi_2escm",(void*)f_4984},
{"f_4989:setup_2dapi_2escm",(void*)f_4989},
{"f_4981:setup_2dapi_2escm",(void*)f_4981},
{"f_2287:setup_2dapi_2escm",(void*)f_2287},
{"f_2285:setup_2dapi_2escm",(void*)f_2285},
{"f_4114:setup_2dapi_2escm",(void*)f_4114},
{"f_2455:setup_2dapi_2escm",(void*)f_2455},
{"f_4973:setup_2dapi_2escm",(void*)f_4973},
{"f_4978:setup_2dapi_2escm",(void*)f_4978},
{"f_2427:setup_2dapi_2escm",(void*)f_2427},
{"f_4970:setup_2dapi_2escm",(void*)f_4970},
{"f_2297:setup_2dapi_2escm",(void*)f_2297},
{"f_2294:setup_2dapi_2escm",(void*)f_2294},
{"f_5474:setup_2dapi_2escm",(void*)f_5474},
{"f_4770:setup_2dapi_2escm",(void*)f_4770},
{"f_5665:setup_2dapi_2escm",(void*)f_5665},
{"f_4773:setup_2dapi_2escm",(void*)f_4773},
{"f_4776:setup_2dapi_2escm",(void*)f_4776},
{"f_5669:setup_2dapi_2escm",(void*)f_5669},
{"f_5485:setup_2dapi_2escm",(void*)f_5485},
{"f_4996:setup_2dapi_2escm",(void*)f_4996},
{"f_5633:setup_2dapi_2escm",(void*)f_5633},
{"f_3381:setup_2dapi_2escm",(void*)f_3381},
{"f_3387:setup_2dapi_2escm",(void*)f_3387},
{"f_5032:setup_2dapi_2escm",(void*)f_5032},
{"f_5034:setup_2dapi_2escm",(void*)f_5034},
{"f_5036:setup_2dapi_2escm",(void*)f_5036},
{"f_5608:setup_2dapi_2escm",(void*)f_5608},
{"f_5038:setup_2dapi_2escm",(void*)f_5038},
{"f_4793:setup_2dapi_2escm",(void*)f_4793},
{"f_2882:setup_2dapi_2escm",(void*)f_2882},
{"f_5030:setup_2dapi_2escm",(void*)f_5030},
{"f_4150:setup_2dapi_2escm",(void*)f_4150},
{"f_5654:setup_2dapi_2escm",(void*)f_5654},
{"f_4964:setup_2dapi_2escm",(void*)f_4964},
{"f_5624:setup_2dapi_2escm",(void*)f_5624},
{"f_2866:setup_2dapi_2escm",(void*)f_2866},
{"f_5785:setup_2dapi_2escm",(void*)f_5785},
{"f_5781:setup_2dapi_2escm",(void*)f_5781},
{"f_2237:setup_2dapi_2escm",(void*)f_2237},
{"f_2239:setup_2dapi_2escm",(void*)f_2239},
{"f_5789:setup_2dapi_2escm",(void*)f_5789},
{"f_4768:setup_2dapi_2escm",(void*)f_4768},
{"f_2875:setup_2dapi_2escm",(void*)f_2875},
{"f_5793:setup_2dapi_2escm",(void*)f_5793},
{"f_4759:setup_2dapi_2escm",(void*)f_4759},
{"f_4754:setup_2dapi_2escm",(void*)f_4754},
{"f_2262:setup_2dapi_2escm",(void*)f_2262},
{"f_5618:setup_2dapi_2escm",(void*)f_5618},
{"f_5613:setup_2dapi_2escm",(void*)f_5613},
{"f_2274:setup_2dapi_2escm",(void*)f_2274},
{"f_2270:setup_2dapi_2escm",(void*)f_2270},
{"f_2266:setup_2dapi_2escm",(void*)f_2266},
{"f_2243:setup_2dapi_2escm",(void*)f_2243},
{"f_2241:setup_2dapi_2escm",(void*)f_2241},
{"f_2278:setup_2dapi_2escm",(void*)f_2278},
{"f_4722:setup_2dapi_2escm",(void*)f_4722},
{"f_2253:setup_2dapi_2escm",(void*)f_2253},
{"f_2251:setup_2dapi_2escm",(void*)f_2251},
{"f_2249:setup_2dapi_2escm",(void*)f_2249},
{"f_2247:setup_2dapi_2escm",(void*)f_2247},
{"f_2245:setup_2dapi_2escm",(void*)f_2245},
{"f_3225:setup_2dapi_2escm",(void*)f_3225},
{"f_4716:setup_2dapi_2escm",(void*)f_4716},
{"f_3576:setup_2dapi_2escm",(void*)f_3576},
{"f_2257:setup_2dapi_2escm",(void*)f_2257},
{"f_2255:setup_2dapi_2escm",(void*)f_2255},
{"f_3279:setup_2dapi_2escm",(void*)f_3279},
{"f_2994:setup_2dapi_2escm",(void*)f_2994},
{"f_3270:setup_2dapi_2escm",(void*)f_3270},
{"f_2961:setup_2dapi_2escm",(void*)f_2961},
{"f_3258:setup_2dapi_2escm",(void*)f_3258},
{"f_3256:setup_2dapi_2escm",(void*)f_3256},
{"f_3252:setup_2dapi_2escm",(void*)f_3252},
{"f_3250:setup_2dapi_2escm",(void*)f_3250},
{"f_3269:setup_2dapi_2escm",(void*)f_3269},
{"f_5642:setup_2dapi_2escm",(void*)f_5642},
{"f_3262:setup_2dapi_2escm",(void*)f_3262},
{"f_3260:setup_2dapi_2escm",(void*)f_3260},
{"f_2986:setup_2dapi_2escm",(void*)f_2986},
{"f_3878:setup_2dapi_2escm",(void*)f_3878},
{"f_3890:setup_2dapi_2escm",(void*)f_3890},
{"f_3866:setup_2dapi_2escm",(void*)f_3866},
{"f_3246:setup_2dapi_2escm",(void*)f_3246},
{"f_2699:setup_2dapi_2escm",(void*)f_2699},
{"f_3241:setup_2dapi_2escm",(void*)f_3241},
{"f_3881:setup_2dapi_2escm",(void*)f_3881},
{"f_3884:setup_2dapi_2escm",(void*)f_3884},
{"f_2672:setup_2dapi_2escm",(void*)f_2672},
{"f_3595:setup_2dapi_2escm",(void*)f_3595},
{"f_3586:setup_2dapi_2escm",(void*)f_3586},
{"f_2678:setup_2dapi_2escm",(void*)f_2678},
{"f_2675:setup_2dapi_2escm",(void*)f_2675},
{"f_4746:setup_2dapi_2escm",(void*)f_4746},
{"f_3406:setup_2dapi_2escm",(void*)f_3406},
{"f_4748:setup_2dapi_2escm",(void*)f_4748},
{"f_3408:setup_2dapi_2escm",(void*)f_3408},
{"f_3404:setup_2dapi_2escm",(void*)f_3404},
{"f_3455:setup_2dapi_2escm",(void*)f_3455},
{"f_4739:setup_2dapi_2escm",(void*)f_4739},
{"f_3452:setup_2dapi_2escm",(void*)f_3452},
{"f_3458:setup_2dapi_2escm",(void*)f_3458},
{"f_3450:setup_2dapi_2escm",(void*)f_3450},
{"f_2934:setup_2dapi_2escm",(void*)f_2934},
{"f_3469:setup_2dapi_2escm",(void*)f_3469},
{"f_3460:setup_2dapi_2escm",(void*)f_3460},
{"f_4426:setup_2dapi_2escm",(void*)f_4426},
{"f_3793:setup_2dapi_2escm",(void*)f_3793},
{"f_3791:setup_2dapi_2escm",(void*)f_3791},
{"f_3437:setup_2dapi_2escm",(void*)f_3437},
{"f_2907:setup_2dapi_2escm",(void*)f_2907},
{"f_2690:setup_2dapi_2escm",(void*)f_2690},
{"f_2692:setup_2dapi_2escm",(void*)f_2692},
{"f_3785:setup_2dapi_2escm",(void*)f_3785},
{"f_3783:setup_2dapi_2escm",(void*)f_3783},
{"f_3780:setup_2dapi_2escm",(void*)f_3780},
{"f_3789:setup_2dapi_2escm",(void*)f_3789},
{"f_3787:setup_2dapi_2escm",(void*)f_3787},
{"f_3233:setup_2dapi_2escm",(void*)f_3233},
{"f_3237:setup_2dapi_2escm",(void*)f_3237},
{"f_3239:setup_2dapi_2escm",(void*)f_3239},
{"f_2950:setup_2dapi_2escm",(void*)f_2950},
{"f_4446:setup_2dapi_2escm",(void*)f_4446},
{"f_3773:setup_2dapi_2escm",(void*)f_3773},
{"f_2623:setup_2dapi_2escm",(void*)f_2623},
{"f_2855:setup_2dapi_2escm",(void*)f_2855},
{"f_2853:setup_2dapi_2escm",(void*)f_2853},
{"f_2829:setup_2dapi_2escm",(void*)f_2829},
{"f_2924:setup_2dapi_2escm",(void*)f_2924},
{"f_2926:setup_2dapi_2escm",(void*)f_2926},
{"f_3415:setup_2dapi_2escm",(void*)f_3415},
{"f_2920:setup_2dapi_2escm",(void*)f_2920},
{"f_3412:setup_2dapi_2escm",(void*)f_3412},
{"f_2922:setup_2dapi_2escm",(void*)f_2922},
{"f_3410:setup_2dapi_2escm",(void*)f_3410},
{"f_2823:setup_2dapi_2escm",(void*)f_2823},
{"f_2838:setup_2dapi_2escm",(void*)f_2838},
{"f_3428:setup_2dapi_2escm",(void*)f_3428},
{"f_3426:setup_2dapi_2escm",(void*)f_3426},
{"f_3423:setup_2dapi_2escm",(void*)f_3423},
{"f_4466:setup_2dapi_2escm",(void*)f_4466},
{"f_4468:setup_2dapi_2escm",(void*)f_4468},
{"f_2601:setup_2dapi_2escm",(void*)f_2601},
{"f_2831:setup_2dapi_2escm",(void*)f_2831},
{"f_2941:setup_2dapi_2escm",(void*)f_2941},
{"f_4290:setup_2dapi_2escm",(void*)f_4290},
{"f_2802:setup_2dapi_2escm",(void*)f_2802},
{"f_4453:setup_2dapi_2escm",(void*)f_4453},
{"f_3988:setup_2dapi_2escm",(void*)f_3988},
{"f_2606:setup_2dapi_2escm",(void*)f_2606},
{"f_3970:setup_2dapi_2escm",(void*)f_3970},
{"f_3973:setup_2dapi_2escm",(void*)f_3973},
{"f_2811:setup_2dapi_2escm",(void*)f_2811},
{"f_3611:setup_2dapi_2escm",(void*)f_3611},
{"f_3613:setup_2dapi_2escm",(void*)f_3613},
{"f_2630:setup_2dapi_2escm",(void*)f_2630},
{"f_5828:setup_2dapi_2escm",(void*)f_5828},
{"f_5826:setup_2dapi_2escm",(void*)f_5826},
{"f_2634:setup_2dapi_2escm",(void*)f_2634},
{"f_2632:setup_2dapi_2escm",(void*)f_2632},
{"f_5823:setup_2dapi_2escm",(void*)f_5823},
{"f_5820:setup_2dapi_2escm",(void*)f_5820},
{"f_2640:setup_2dapi_2escm",(void*)f_2640},
{"f_2645:setup_2dapi_2escm",(void*)f_2645},
{"f_2642:setup_2dapi_2escm",(void*)f_2642},
{"f_2638:setup_2dapi_2escm",(void*)f_2638},
{"f_2636:setup_2dapi_2escm",(void*)f_2636},
{"f_4258:setup_2dapi_2escm",(void*)f_4258},
{"f_4252:setup_2dapi_2escm",(void*)f_4252},
{"f_2610:setup_2dapi_2escm",(void*)f_2610},
{"f_4496:setup_2dapi_2escm",(void*)f_4496},
{"f_3446:setup_2dapi_2escm",(void*)f_3446},
{"f_4249:setup_2dapi_2escm",(void*)f_4249},
{"f_3448:setup_2dapi_2escm",(void*)f_3448},
{"f_4246:setup_2dapi_2escm",(void*)f_4246},
{"f_3440:setup_2dapi_2escm",(void*)f_3440},
{"f_4243:setup_2dapi_2escm",(void*)f_4243},
{"f_3656:setup_2dapi_2escm",(void*)f_3656},
{"f_4275:setup_2dapi_2escm",(void*)f_4275},
{"f_4098:setup_2dapi_2escm",(void*)f_4098},
{"f_4210:setup_2dapi_2escm",(void*)f_4210},
{"f_4212:setup_2dapi_2escm",(void*)f_4212},
{"f_2651:setup_2dapi_2escm",(void*)f_2651},
{"f_3640:setup_2dapi_2escm",(void*)f_3640},
{"f_4401:setup_2dapi_2escm",(void*)f_4401},
{"f_4230:setup_2dapi_2escm",(void*)f_4230},
{"f_3049:setup_2dapi_2escm",(void*)f_3049},
{"f_4234:setup_2dapi_2escm",(void*)f_4234},
{"f_3045:setup_2dapi_2escm",(void*)f_3045},
{"f_4232:setup_2dapi_2escm",(void*)f_4232},
{"f_3047:setup_2dapi_2escm",(void*)f_3047},
{"f_4228:setup_2dapi_2escm",(void*)f_4228},
{"f_4226:setup_2dapi_2escm",(void*)f_4226},
{"f_4224:setup_2dapi_2escm",(void*)f_4224},
{"f_3055:setup_2dapi_2escm",(void*)f_3055},
{"f_4222:setup_2dapi_2escm",(void*)f_4222},
{"f_3057:setup_2dapi_2escm",(void*)f_3057},
{"f_3052:setup_2dapi_2escm",(void*)f_3052},
{"f_4900:setup_2dapi_2escm",(void*)f_4900},
{"f_4906:setup_2dapi_2escm",(void*)f_4906},
{"f_4908:setup_2dapi_2escm",(void*)f_4908},
{"f_3038:setup_2dapi_2escm",(void*)f_3038},
{"f_4835:setup_2dapi_2escm",(void*)f_4835},
{"f_3002:setup_2dapi_2escm",(void*)f_3002},
{"f_5286:setup_2dapi_2escm",(void*)f_5286},
{"f_5411:setup_2dapi_2escm",(void*)f_5411},
{"f_4910:setup_2dapi_2escm",(void*)f_4910},
{"f_4913:setup_2dapi_2escm",(void*)f_4913},
{"f_4916:setup_2dapi_2escm",(void*)f_4916},
{"f_4919:setup_2dapi_2escm",(void*)f_4919},
{"f_5292:setup_2dapi_2escm",(void*)f_5292},
{"f_3013:setup_2dapi_2escm",(void*)f_3013},
{"f_5298:setup_2dapi_2escm",(void*)f_5298},
{"f_3019:setup_2dapi_2escm",(void*)f_3019},
{"f_4944:setup_2dapi_2escm",(void*)f_4944},
{"f_5424:setup_2dapi_2escm",(void*)f_5424},
{"f_4942:setup_2dapi_2escm",(void*)f_4942},
{"f_4001:setup_2dapi_2escm",(void*)f_4001},
{"f_4003:setup_2dapi_2escm",(void*)f_4003},
{"f_5433:setup_2dapi_2escm",(void*)f_5433},
{"f_4030:setup_2dapi_2escm",(void*)f_4030},
{"f_4671:setup_2dapi_2escm",(void*)f_4671},
{"f_4677:setup_2dapi_2escm",(void*)f_4677},
{"f_4482:setup_2dapi_2escm",(void*)f_4482},
{"f_4480:setup_2dapi_2escm",(void*)f_4480},
{"f_4484:setup_2dapi_2escm",(void*)f_4484},
{"f_5446:setup_2dapi_2escm",(void*)f_5446},
{"f_5441:setup_2dapi_2escm",(void*)f_5441},
{"f_4472:setup_2dapi_2escm",(void*)f_4472},
{"f_4470:setup_2dapi_2escm",(void*)f_4470},
{"f_4478:setup_2dapi_2escm",(void*)f_4478},
{"f_5452:setup_2dapi_2escm",(void*)f_5452},
{"f_4475:setup_2dapi_2escm",(void*)f_4475},
{"f_4474:setup_2dapi_2escm",(void*)f_4474},
{"f_4953:setup_2dapi_2escm",(void*)f_4953},
{"f_4691:setup_2dapi_2escm",(void*)f_4691},
{"f_5463:setup_2dapi_2escm",(void*)f_5463},
{"f_3841:setup_2dapi_2escm",(void*)f_3841},
{"f_3846:setup_2dapi_2escm",(void*)f_3846},
{"f_4042:setup_2dapi_2escm",(void*)f_4042},
{"f_4689:setup_2dapi_2escm",(void*)f_4689},
{"f_5366:setup_2dapi_2escm",(void*)f_5366},
{"f_3855:setup_2dapi_2escm",(void*)f_3855},
{"f_4073:setup_2dapi_2escm",(void*)f_4073},
{"f_3820:setup_2dapi_2escm",(void*)f_3820},
{"f_3822:setup_2dapi_2escm",(void*)f_3822},
{"f_3829:setup_2dapi_2escm",(void*)f_3829},
{"f_5091:setup_2dapi_2escm",(void*)f_5091},
{"f_5099:setup_2dapi_2escm",(void*)f_5099},
{"f_5303:setup_2dapi_2escm",(void*)f_5303},
{"f_3830:setup_2dapi_2escm",(void*)f_3830},
{"f_3839:setup_2dapi_2escm",(void*)f_3839},
{"f_3836:setup_2dapi_2escm",(void*)f_3836},
{"f_4646:setup_2dapi_2escm",(void*)f_4646},
{"f_3801:setup_2dapi_2escm",(void*)f_3801},
{"f_4648:setup_2dapi_2escm",(void*)f_4648},
{"f_3068:setup_2dapi_2escm",(void*)f_3068},
{"f_3809:setup_2dapi_2escm",(void*)f_3809},
{"f_3066:setup_2dapi_2escm",(void*)f_3066},
{"f_3064:setup_2dapi_2escm",(void*)f_3064},
{"f_4642:setup_2dapi_2escm",(void*)f_4642},
{"f_4644:setup_2dapi_2escm",(void*)f_4644},
{"f_2911:setup_2dapi_2escm",(void*)f_2911},
{"f_2914:setup_2dapi_2escm",(void*)f_2914},
{"f_3813:setup_2dapi_2escm",(void*)f_3813},
{"f_3815:setup_2dapi_2escm",(void*)f_3815},
{"f_3078:setup_2dapi_2escm",(void*)f_3078},
{"f_3818:setup_2dapi_2escm",(void*)f_3818},
{"f_3075:setup_2dapi_2escm",(void*)f_3075},
{"f_3072:setup_2dapi_2escm",(void*)f_3072},
{"f_3070:setup_2dapi_2escm",(void*)f_3070},
{"f_4027:setup_2dapi_2escm",(void*)f_4027},
{"f_4669:setup_2dapi_2escm",(void*)f_4669},
{"f_4660:setup_2dapi_2escm",(void*)f_4660},
{"f_4022:setup_2dapi_2escm",(void*)f_4022},
{"f_4864:setup_2dapi_2escm",(void*)f_4864},
{"f_4862:setup_2dapi_2escm",(void*)f_4862},
{"f_4869:setup_2dapi_2escm",(void*)f_4869},
{"f_4866:setup_2dapi_2escm",(void*)f_4866},
{"f_4860:setup_2dapi_2escm",(void*)f_4860},
{"f_4892:setup_2dapi_2escm",(void*)f_4892},
{"f_4895:setup_2dapi_2escm",(void*)f_4895},
{"f_5119:setup_2dapi_2escm",(void*)f_5119},
{"f_4604:setup_2dapi_2escm",(void*)f_4604},
{"f_4882:setup_2dapi_2escm",(void*)f_4882},
{"f_4887:setup_2dapi_2escm",(void*)f_4887},
{"f_5301:setup_2dapi_2escm",(void*)f_5301},
{"f_3089:setup_2dapi_2escm",(void*)f_3089},
{"f_5409:setup_2dapi_2escm",(void*)f_5409},
{"f_5402:setup_2dapi_2escm",(void*)f_5402},
{"f_5400:setup_2dapi_2escm",(void*)f_5400},
{"f_5132:setup_2dapi_2escm",(void*)f_5132},
{"f_5135:setup_2dapi_2escm",(void*)f_5135},
{"f_4621:setup_2dapi_2escm",(void*)f_4621},
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
o|hiding nonexported module bindings: setup-api#constant26 
o|hiding nonexported module bindings: setup-api#*cc* 
o|hiding nonexported module bindings: setup-api#*cxx* 
o|hiding nonexported module bindings: setup-api#*target-cflags* 
o|hiding nonexported module bindings: setup-api#*target-libs* 
o|hiding nonexported module bindings: setup-api#*target-lib-home* 
o|hiding nonexported module bindings: setup-api#*sudo* 
o|hiding nonexported module bindings: setup-api#*windows-shell* 
o|hiding nonexported module bindings: setup-api#*registered-programs* 
o|hiding nonexported module bindings: setup-api#*windows* 
o|hiding nonexported module bindings: setup-api#*chicken-bin-path* 
o|hiding nonexported module bindings: setup-api#*csc-options* 
o|hiding nonexported module bindings: setup-api#*base-directory* 
o|hiding nonexported module bindings: setup-api#*copy-command* 
o|hiding nonexported module bindings: setup-api#*remove-command* 
o|hiding nonexported module bindings: setup-api#*move-command* 
o|hiding nonexported module bindings: setup-api#*chmod-command* 
o|hiding nonexported module bindings: setup-api#*ranlib-command* 
o|hiding nonexported module bindings: setup-api#*mkdir-command* 
o|hiding nonexported module bindings: setup-api#windows-user-install-setup 
o|hiding nonexported module bindings: setup-api#unix-user-install-setup 
o|hiding nonexported module bindings: setup-api#windows-sudo-install-setup 
o|hiding nonexported module bindings: setup-api#unix-sudo-install-setup 
o|hiding nonexported module bindings: setup-api#user-install-setup 
o|hiding nonexported module bindings: setup-api#sudo-install-setup 
o|hiding nonexported module bindings: setup-api#ignore-errors 
o|hiding nonexported module bindings: setup-api#target-prefix 
o|hiding nonexported module bindings: setup-api#fixpath 
o|hiding nonexported module bindings: setup-api#fixmaketarget 
o|hiding nonexported module bindings: setup-api#make:find-matching-line 
o|hiding nonexported module bindings: setup-api#make:form-error 
o|hiding nonexported module bindings: setup-api#make:line-error 
o|hiding nonexported module bindings: setup-api#make:check-spec 
o|hiding nonexported module bindings: setup-api#make:check-argv 
o|hiding nonexported module bindings: setup-api#make:make/proc/helper 
o|hiding nonexported module bindings: setup-api#make-setup-info-pathname 
o|hiding nonexported module bindings: setup-api#write-info 
o|hiding nonexported module bindings: setup-api#path-prefix? 
o|hiding nonexported module bindings: setup-api#make-dest-pathname 
o|hiding nonexported module bindings: setup-api#check-filelist 
o|hiding nonexported module bindings: setup-api#translate-extension 
o|hiding nonexported module bindings: setup-api#what-version 
o|hiding nonexported module bindings: setup-api#supply-version 
o|hiding nonexported module bindings: setup-api#repo-path 
o|hiding nonexported module bindings: setup-api#ensure-directory 
o|hiding nonexported module bindings: setup-api#upgrade-message 
o|hiding nonexported module bindings: setup-api#$system 
S|applied compiler syntax:
S|  for-each		7
S|  map		10
S|  sprintf		15
S|  printf		8
o|eliminated procedure checks: 83 
o|specializations:
o|  1 (current-exception-handler procedure)
o|  1 (current-error-port)
o|  1 (= fixnum fixnum)
o|  2 (string=? string string)
o|  1 (cddr (pair * pair))
o|  1 (>= fixnum fixnum)
o|  3 (zero? fixnum)
o|  3 (##sys#check-list (or pair list) *)
o|  1 (caddr (pair * (pair * pair)))
o|  1 (cadr (pair * pair))
o|  4 (length list)
o|  19 (car pair)
o|  8 (cdr pair)
o|  2 (string-append string string)
o|safe globals: (setup-api#constant26 c801) 
o|Removed `not' forms: 5 
o|inlining procedure: k2352 
o|inlining procedure: k2352 
o|inlining procedure: k2371 
o|inlining procedure: k2371 
o|inlining procedure: k2431 
o|contracted procedure: "(setup-api.scm:170) setup-api#windows-user-install-setup" 
o|inlining procedure: k2431 
o|contracted procedure: "(setup-api.scm:171) setup-api#unix-user-install-setup" 
o|inlining procedure: k2458 
o|propagated global variable: f_24575857 setup-api#*sudo* 
o|inlining procedure: k2458 
o|contracted procedure: "(setup-api.scm:181) setup-api#sudo-install-setup" 
o|inlining procedure: k2445 
o|contracted procedure: "(setup-api.scm:176) setup-api#windows-sudo-install-setup" 
o|inlining procedure: k2445 
o|contracted procedure: "(setup-api.scm:177) setup-api#unix-sudo-install-setup" 
o|inlining procedure: k2485 
o|inlining procedure: k2516 
o|inlining procedure: k2516 
o|inlining procedure: k2485 
o|propagated global variable: out182186 ##sys#standard-output 
o|inlining procedure: k2613 
o|inlining procedure: k2613 
o|inlining procedure: k2834 
o|inlining procedure: k2834 
o|contracted procedure: "(setup-api.scm:273) setup-api#fixpath" 
o|inlining procedure: k2662 
o|substituted constant variable: a2696 
o|substituted constant variable: a2712 
o|substituted constant variable: setup-api#*csc-options* 
o|inlining procedure: k2727 
o|inlining procedure: k2727 
o|inlining procedure: k2757 
o|inlining procedure: k2757 
o|inlining procedure: k2794 
o|inlining procedure: k2794 
o|inlining procedure: k2662 
o|inlining procedure: k2885 
o|inlining procedure: k2885 
o|inlining procedure: k2913 
o|propagated global variable: out366370 ##sys#standard-output 
o|inlining procedure: k2913 
o|inlining procedure: k2944 
o|inlining procedure: k2944 
o|inlining procedure: k2964 
o|inlining procedure: k2964 
o|inlining procedure: k3263 
o|inlining procedure: k3290 
o|inlining procedure: k3290 
o|inlining procedure: k3335 
o|inlining procedure: k3335 
o|propagated global variable: out694698 ##sys#standard-output 
o|contracted procedure: k3388 
o|inlining procedure: k3386 
o|inlining procedure: k3386 
o|propagated global variable: out653657 ##sys#standard-output 
o|inlining procedure: k3429 
o|inlining procedure: k3429 
o|inlining procedure: k3463 
o|inlining procedure: k3463 
o|inlining procedure: k3263 
o|propagated global variable: out596600 ##sys#standard-output 
o|contracted procedure: "(setup-api.scm:349) setup-api#make:find-matching-line" 
o|inlining procedure: k3005 
o|inlining procedure: k3005 
o|propagated global variable: out762766 ##sys#standard-output 
o|inlining procedure: k3518 
o|inlining procedure: k3542 
o|inlining procedure: k3542 
o|inlining procedure: k3518 
o|inlining procedure: k3564 
o|inlining procedure: k3564 
o|inlining procedure: k3589 
o|inlining procedure: k3589 
o|contracted procedure: "(setup-api.scm:343) setup-api#make:check-argv" 
o|inlining procedure: k3221 
o|inlining procedure: k3221 
o|contracted procedure: "(setup-api.scm:342) setup-api#make:check-spec" 
o|inlining procedure: k3083 
o|inlining procedure: k3104 
o|inlining procedure: k3130 
o|inlining procedure: k3130 
o|inlining procedure: k3153 
o|inlining procedure: k3153 
o|inlining procedure: k3164 
o|inlining procedure: k3164 
o|inlining procedure: k3182 
o|inlining procedure: k3182 
o|inlining procedure: k3104 
o|inlining procedure: k3083 
o|inlining procedure: k3617 
o|inlining procedure: k3617 
o|inlining procedure: k3639 
o|inlining procedure: k3639 
o|substituted constant variable: c801 
o|inlining procedure: k3685 
o|inlining procedure: k3685 
o|inlining procedure: k3696 
o|propagated global variable: out870874 ##sys#standard-output 
o|inlining procedure: k3696 
o|inlining procedure: k3729 
o|inlining procedure: k3729 
o|propagated global variable: g919920 pp 
o|propagated global variable: g931932 pp 
o|consed rest parameter at call site: "(setup-api.scm:487) setup-api#ensure-directory" 2 
o|contracted procedure: "(setup-api.scm:486) setup-api#make-setup-info-pathname" 
o|consed rest parameter at call site: "(setup-api.scm:486) setup-api#repo-path" 1 
o|propagated global variable: out900904 ##sys#standard-output 
o|inlining procedure: k3825 
o|inlining procedure: k3849 
o|inlining procedure: k3849 
o|inlining procedure: k3825 
o|consed rest parameter at call site: "(setup-api.scm:511) setup-api#ensure-directory" 2 
o|inlining procedure: k3885 
o|inlining procedure: k3885 
o|contracted procedure: "(setup-api.scm:499) setup-api#path-prefix?" 
o|consed rest parameter at call site: "(setup-api.scm:525) setup-api#ensure-directory" 2 
o|inlining procedure: k4006 
o|inlining procedure: k4006 
o|inlining procedure: k4032 
o|inlining procedure: k4032 
o|inlining procedure: k4045 
o|inlining procedure: k4045 
o|inlining procedure: k4076 
o|inlining procedure: k4076 
o|inlining procedure: k4181 
o|inlining procedure: k4181 
o|contracted procedure: "(setup-api.scm:568) setup-api#what-version" 
o|inlining procedure: k4146 
o|inlining procedure: k4146 
o|inlining procedure: k4160 
o|inlining procedure: k4160 
o|inlining procedure: k4254 
o|inlining procedure: k4254 
o|removed call to pure procedure with unused result: "(setup-api.scm:577) get-keyword" 
o|inlining procedure: k4323 
o|inlining procedure: k4323 
o|contracted procedure: "(setup-api.scm:615) setup-api#target-prefix" 
o|inlining procedure: k2652 
o|inlining procedure: k2652 
o|inlining procedure: k4334 
o|inlining procedure: k4334 
o|inlining procedure: k4355 
o|inlining procedure: k4355 
o|inlining procedure: k4296 
o|inlining procedure: k4404 
o|inlining procedure: k4404 
o|consed rest parameter at call site: "(setup-api.scm:601) setup-api#repo-path" 1 
o|consed rest parameter at call site: "(setup-api.scm:600) setup-api#repo-path" 1 
o|inlining procedure: k4431 
o|inlining procedure: k4431 
o|inlining procedure: k4296 
o|contracted procedure: "(setup-api.scm:621) setup-api#translate-extension" 
o|contracted procedure: k4118 
o|inlining procedure: k4115 
o|inlining procedure: k4127 
o|inlining procedure: k4127 
o|inlining procedure: k4115 
o|inlining procedure: k4483 
o|inlining procedure: k4483 
o|inlining procedure: k4461 
o|inlining procedure: k4516 
o|inlining procedure: k4516 
o|inlining procedure: k4544 
o|inlining procedure: k4544 
o|inlining procedure: k4576 
o|inlining procedure: k4576 
o|consed rest parameter at call site: "(setup-api.scm:627) setup-api#ensure-directory" 2 
o|inlining procedure: k4606 
o|inlining procedure: k4606 
o|inlining procedure: k4461 
o|inlining procedure: k4647 
o|inlining procedure: k4647 
o|inlining procedure: k4627 
o|inlining procedure: k4694 
o|inlining procedure: k4694 
o|consed rest parameter at call site: "(setup-api.scm:649) setup-api#ensure-directory" 2 
o|inlining procedure: k4724 
o|inlining procedure: k4724 
o|inlining procedure: k4627 
o|merged explicitly consed rest parameter: tmp13741375 
o|consed rest parameter at call site: "(setup-api.scm:676) setup-api#ensure-directory" 2 
o|inlining procedure: k4745 
o|consed rest parameter at call site: "(setup-api.scm:676) setup-api#ensure-directory" 2 
o|inlining procedure: k4760 
o|inlining procedure: k4760 
o|inlining procedure: k4745 
o|consed rest parameter at call site: "(setup-api.scm:676) setup-api#ensure-directory" 2 
o|merged explicitly consed rest parameter: tmp14031405 
o|inlining procedure: k4801 
o|inlining procedure: k4810 
o|inlining procedure: k4810 
o|inlining procedure: k4821 
o|inlining procedure: k4821 
o|inlining procedure: k4801 
o|inlining procedure: k4934 
o|inlining procedure: k4934 
o|inlining procedure: k4943 
o|inlining procedure: k4943 
o|inlining procedure: k4986 
o|propagated global variable: f_49856023 setup-api#*cxx* 
o|inlining procedure: k4986 
o|propagated global variable: f_49856024 setup-api#*cc* 
o|inlining procedure: k4992 
o|inlining procedure: k4992 
o|merged explicitly consed rest parameter: tmp14951498 
o|inlining procedure: k5060 
o|inlining procedure: k5060 
o|inlining procedure: k5081 
o|inlining procedure: k5081 
o|inlining procedure: k5100 
o|contracted procedure: k5108 
o|inlining procedure: k5114 
o|consed rest parameter at call site: "(setup-api.scm:736) setup-api#upgrade-message" 3 
o|inlining procedure: k5114 
o|consed rest parameter at call site: "(setup-api.scm:733) setup-api#upgrade-message" 3 
o|inlining procedure: k5100 
o|consed rest parameter at call site: "(setup-api.scm:743) setup-api#upgrade-message" 3 
o|substituted constant variable: a5175 
o|inlining procedure: k5252 
o|inlining procedure: k5252 
o|inlining procedure: k5264 
o|inlining procedure: k5264 
o|inlining procedure: k5306 
o|inlining procedure: k5306 
o|inlining procedure: k5319 
o|inlining procedure: k5333 
o|inlining procedure: k5333 
o|inlining procedure: k5319 
o|inlining procedure: k5367 
o|inlining procedure: k5367 
o|inlining procedure: k5419 
o|inlining procedure: k5419 
o|inlining procedure: k5469 
o|inlining procedure: k5547 
o|inlining procedure: k5547 
o|substituted constant variable: a5568 
o|inlining procedure: k5582 
o|inlining procedure: k5582 
o|inlining procedure: k5469 
o|inlining procedure: k5636 
o|inlining procedure: k5636 
o|inlining procedure: k5670 
o|inlining procedure: k5670 
o|inlining procedure: k5702 
o|inlining procedure: k5702 
o|inlining procedure: k5725 
o|inlining procedure: k5725 
o|inlining procedure: k5744 
o|inlining procedure: k5744 
o|substituted constant variable: a5775 
o|propagated global variable: g138139 exit 
o|replaced variables: 459 
o|removed binding forms: 186 
o|removed side-effect free assignment to unused variable: c801 
o|removed side-effect free assignment to unused variable: setup-api#*csc-options* 
o|inlining procedure: k2794 
o|converted assignments to bindings: (smooth331) 
o|substituted constant variable: r34305899 
o|substituted constant variable: f_30045903 
o|substituted constant variable: r31835924 
o|substituted constant variable: f_31035925 
o|substituted constant variable: f_30825926 
o|substituted constant variable: r41615956 
o|contracted procedure: k4219 
o|substituted constant variable: a42535958 
o|substituted constant variable: r26535962 
o|substituted constant variable: r43565966 
o|inlining procedure: k4115 
o|propagated global variable: r41166109 ##sys#load-dynamic-extension 
o|propagated global variable: r41166109 ##sys#load-dynamic-extension 
o|inlining procedure: k4115 
o|inlining procedure: k4115 
o|inlining procedure: k4115 
o|converted assignments to bindings: (exify1235) 
o|inlining procedure: k4801 
o|inlining procedure: k4801 
o|substituted constant variable: a49336017 
o|substituted constant variable: a49336018 
o|substituted constant variable: a50596028 
o|substituted constant variable: f_50806029 
o|converted assignments to bindings: (version->list1613) 
o|substituted constant variable: f_57246061 
o|substituted constant variable: f_57436063 
o|converted assignments to bindings: (verb865) 
o|converted assignments to bindings: (reg232) 
o|simplifications: ((let . 5)) 
o|replaced variables: 28 
o|removed binding forms: 458 
o|Removed `not' forms: 1 
o|contracted procedure: "(setup-api.scm:278) smooth331" 
o|substituted constant variable: r27956073 
o|inlining procedure: k4043 
o|inlining procedure: k4154 
o|inlining procedure: k4154 
o|inlining procedure: k4329 
o|inlining procedure: k5748 
o|replaced variables: 2 
o|removed binding forms: 42 
o|removed conditional forms: 1 
o|Removed `not' forms: 1 
o|substituted constant variable: tmp104910516175 
o|substituted constant variable: tmp104910516175 
o|substituted constant variable: tmp104910516175 
o|substituted constant variable: r41556179 
o|substituted constant variable: r41556180 
o|substituted constant variable: tmp120812106181 
o|substituted constant variable: tmp120812106181 
o|substituted constant variable: r41166111 
o|substituted constant variable: r41166113 
o|replaced variables: 4 
o|removed binding forms: 6 
o|removed conditional forms: 4 
o|removed binding forms: 9 
o|simplifications: ((if . 31) (##core#call . 332)) 
o|  call simplifications:
o|    number?	3
o|    =
o|    string->number
o|    fx>=
o|    ##sys#get-keyword
o|    ##sys#fudge
o|    assq	5
o|    ##sys#cons	5
o|    ##sys#list	17
o|    eq?	8
o|    vector?	2
o|    <=
o|    caddr
o|    procedure?
o|    caar
o|    >	2
o|    cddr	2
o|    string?	7
o|    ##sys#call-with-values	3
o|    ##sys#apply	3
o|    cons	13
o|    ##sys#setslot	10
o|    ##sys#check-list	14
o|    pair?	27
o|    ##sys#slot	34
o|    equal?	6
o|    string=?	5
o|    not	5
o|    assoc
o|    cdr	5
o|    alist-cons
o|    list?	13
o|    list	23
o|    write-char	25
o|    cadr	15
o|    eof-object?
o|    null?	32
o|    car	34
o|    apply	2
o|contracted procedure: k2358 
o|contracted procedure: k2349 
o|contracted procedure: k2377 
o|contracted procedure: k2368 
o|contracted procedure: k2460 
o|contracted procedure: k2466 
o|contracted procedure: k2488 
o|contracted procedure: k2495 
o|contracted procedure: k2503 
o|contracted procedure: k2519 
o|contracted procedure: k2561 
o|contracted procedure: k2587 
o|contracted procedure: k2593 
o|contracted procedure: k2611 
o|contracted procedure: k2620 
o|contracted procedure: k2842 
o|contracted procedure: k2849 
o|contracted procedure: k2930 
o|contracted procedure: k2935 
o|contracted procedure: k2946 
o|contracted procedure: k2955 
o|contracted procedure: k2958 
o|contracted procedure: k2966 
o|contracted procedure: k2969 
o|contracted procedure: k2978 
o|contracted procedure: k2988 
o|contracted procedure: k2862 
o|contracted procedure: k2871 
o|contracted procedure: k2879 
o|contracted procedure: k2664 
o|contracted procedure: k2680 
o|contracted procedure: k2683 
o|contracted procedure: k2686 
o|contracted procedure: k2702 
o|contracted procedure: k2718 
o|contracted procedure: k2729 
o|contracted procedure: k2732 
o|contracted procedure: k2741 
o|contracted procedure: k2751 
o|contracted procedure: k2759 
o|contracted procedure: k2762 
o|contracted procedure: k2771 
o|contracted procedure: k2781 
o|contracted procedure: k2815 
o|contracted procedure: k2887 
o|contracted procedure: k2890 
o|contracted procedure: k2899 
o|contracted procedure: k2909 
o|contracted procedure: k3266 
o|contracted procedure: k3275 
o|contracted procedure: k3280 
o|contracted procedure: k3288 
o|contracted procedure: k3293 
o|contracted procedure: k3297 
o|contracted procedure: k3344 
o|contracted procedure: k3354 
o|contracted procedure: k3397 
o|contracted procedure: k3432 
o|contracted procedure: k3465 
o|contracted procedure: k3474 
o|contracted procedure: k3477 
o|contracted procedure: k3007 
o|contracted procedure: k3010 
o|contracted procedure: k3035 
o|contracted procedure: k3025 
o|contracted procedure: k3544 
o|contracted procedure: k3553 
o|contracted procedure: k3556 
o|contracted procedure: k3558 
o|contracted procedure: k3567 
o|contracted procedure: k3574 
o|contracted procedure: k3580 
o|contracted procedure: k3591 
o|contracted procedure: k3600 
o|contracted procedure: k3603 
o|contracted procedure: k3219 
o|contracted procedure: k3085 
o|contracted procedure: k3093 
o|contracted procedure: k3196 
o|contracted procedure: k3114 
o|contracted procedure: k3177 
o|contracted procedure: k3123 
o|contracted procedure: k3149 
o|contracted procedure: k3128 
o|contracted procedure: k3146 
o|contracted procedure: k3133 
o|contracted procedure: k3162 
o|contracted procedure: k3171 
o|contracted procedure: k3185 
o|contracted procedure: k3201 
o|contracted procedure: k3605 
o|contracted procedure: k3620 
o|contracted procedure: k3629 
o|contracted procedure: k3632 
o|contracted procedure: k3641 
o|contracted procedure: k3710 
o|contracted procedure: k5801 
o|contracted procedure: k5798 
o|contracted procedure: k3798 
o|contracted procedure: k3717 
o|contracted procedure: k3739 
o|contracted procedure: k3736 
o|contracted procedure: k3755 
o|contracted procedure: k3752 
o|contracted procedure: k3660 
o|inlining procedure: k3654 
o|contracted procedure: k3931 
o|contracted procedure: k3804 
o|contracted procedure: k3925 
o|contracted procedure: k3806 
o|contracted procedure: k3910 
o|contracted procedure: k3810 
o|contracted procedure: k3851 
o|contracted procedure: k3860 
o|contracted procedure: k3863 
o|contracted procedure: k3874 
o|contracted procedure: k3871 
o|contracted procedure: k3897 
o|contracted procedure: k3904 
o|contracted procedure: k3906 
o|contracted procedure: k3916 
o|contracted procedure: k3966 
o|contracted procedure: k3963 
o|contracted procedure: k3974 
o|contracted procedure: k3981 
o|contracted procedure: k3983 
o|contracted procedure: k3997 
o|contracted procedure: k3994 
o|contracted procedure: k4008 
o|contracted procedure: k4015 
o|contracted procedure: k4034 
o|contracted procedure: k4051 
o|contracted procedure: k4043 
o|contracted procedure: k4061 
o|contracted procedure: k4067 
o|contracted procedure: k4078 
o|contracted procedure: k4081 
o|contracted procedure: k4090 
o|contracted procedure: k4100 
o|contracted procedure: k4179 
o|contracted procedure: k4189 
o|contracted procedure: k4203 
o|contracted procedure: k4206 
o|contracted procedure: k4163 
o|contracted procedure: k4173 
o|contracted procedure: k4154 
o|contracted procedure: k4283 
o|contracted procedure: k4215 
o|contracted procedure: k4277 
o|contracted procedure: k4217 
o|contracted procedure: k4239 
o|contracted procedure: k4254 
o|contracted procedure: k4266 
o|contracted procedure: k4263 
o|contracted procedure: k4272 
o|contracted procedure: k4269 
o|contracted procedure: k4439 
o|contracted procedure: k4293 
o|contracted procedure: k4318 
o|contracted procedure: k4347 
o|contracted procedure: k4344 
o|contracted procedure: k4352 
o|contracted procedure: k4368 
o|contracted procedure: k4358 
o|contracted procedure: k4380 
o|contracted procedure: k4377 
o|contracted procedure: k4385 
o|contracted procedure: k4389 
o|contracted procedure: k4406 
o|contracted procedure: k4409 
o|contracted procedure: k4418 
o|contracted procedure: k4428 
o|contracted procedure: k4433 
o|contracted procedure: k4431 
o|contracted procedure: k4614 
o|contracted procedure: k4449 
o|contracted procedure: k4459 
o|contracted procedure: k4136 
o|contracted procedure: k4106 
o|contracted procedure: k4124 
o|contracted procedure: k4130 
o|contracted procedure: k4492 
o|contracted procedure: k4489 
o|contracted procedure: k4497 
o|contracted procedure: k4501 
o|contracted procedure: k4518 
o|contracted procedure: k4521 
o|contracted procedure: k4530 
o|contracted procedure: k4540 
o|contracted procedure: k4546 
o|contracted procedure: k4559 
o|contracted procedure: k4562 
o|contracted procedure: k4567 
o|contracted procedure: k4578 
o|contracted procedure: k4581 
o|contracted procedure: k4590 
o|contracted procedure: k4600 
o|contracted procedure: k4608 
o|contracted procedure: k4606 
o|contracted procedure: k4732 
o|contracted procedure: k4624 
o|contracted procedure: k4656 
o|contracted procedure: k4653 
o|contracted procedure: k4661 
o|contracted procedure: k4665 
o|contracted procedure: k4685 
o|contracted procedure: k4682 
o|contracted procedure: k4696 
o|contracted procedure: k4699 
o|contracted procedure: k4708 
o|contracted procedure: k4718 
o|contracted procedure: k4726 
o|contracted procedure: k4724 
o|contracted procedure: k4786 
o|contracted procedure: k4742 
o|contracted procedure: k4778 
o|contracted procedure: k4839 
o|contracted procedure: k4796 
o|contracted procedure: k4831 
o|contracted procedure: k4828 
o|contracted procedure: k4849 
o|contracted procedure: k4936 
o|contracted procedure: k4949 
o|contracted procedure: k4955 
o|contracted procedure: k4958 
o|contracted procedure: k5065 
o|contracted procedure: k5020 
o|contracted procedure: k5083 
o|contracted procedure: k5092 
o|contracted procedure: k5094 
o|contracted procedure: k5152 
o|contracted procedure: k5159 
o|contracted procedure: k5167 
o|contracted procedure: k5250 
o|contracted procedure: k5266 
o|contracted procedure: k5269 
o|contracted procedure: k5278 
o|contracted procedure: k5288 
o|contracted procedure: k5308 
o|contracted procedure: k5314 
o|contracted procedure: k5395 
o|contracted procedure: k5322 
o|contracted procedure: k5358 
o|contracted procedure: k5328 
o|contracted procedure: k5331 
o|contracted procedure: k5339 
o|contracted procedure: k5392 
o|contracted procedure: k5360 
o|contracted procedure: k5373 
o|contracted procedure: k5434 
o|contracted procedure: k5414 
o|contracted procedure: k5417 
o|contracted procedure: k5453 
o|contracted procedure: k5601 
o|contracted procedure: k5466 
o|contracted procedure: k5549 
o|contracted procedure: k5570 
o|contracted procedure: k5584 
o|contracted procedure: k5593 
o|contracted procedure: k5596 
o|contracted procedure: k5614 
o|contracted procedure: k5625 
o|contracted procedure: k5627 
o|contracted procedure: k5638 
o|contracted procedure: k5647 
o|contracted procedure: k5650 
o|contracted procedure: k5655 
o|contracted procedure: k5673 
o|contracted procedure: k5727 
o|contracted procedure: k5729 
o|contracted procedure: k5738 
o|contracted procedure: k5740 
o|contracted procedure: k5746 
o|contracted procedure: k5748 
o|contracted procedure: k5769 
o|contracted procedure: k5842 
o|simplifications: ((let . 69)) 
o|removed binding forms: 275 
o|inlining procedure: k2971 
o|inlining procedure: k2971 
o|inlining procedure: k2734 
o|inlining procedure: k2734 
o|inlining procedure: k2764 
o|inlining procedure: k2764 
o|inlining procedure: k2892 
o|inlining procedure: k2892 
o|inlining procedure: k4083 
o|inlining procedure: k4083 
o|inlining procedure: k4411 
o|inlining procedure: k4411 
o|inlining procedure: k4523 
o|inlining procedure: k4523 
o|inlining procedure: k4583 
o|inlining procedure: k4583 
o|inlining procedure: k4701 
o|inlining procedure: k4701 
o|inlining procedure: k5271 
o|inlining procedure: k5271 
o|replaced variables: 27 
o|removed binding forms: 36 
o|customizable procedures: (reg232 k5735 for-each-loop17961806 for-each-loop17581773 k5551 walk1753 version->list1613 loop1645 map-loop16171638 k5089 k5103 k5117 loop1531 setup-api#upgrade-message map-loop13271355 k4641 map-loop12431261 exify1235 map-loop12711299 k4477 setup-api#check-filelist map-loop11731214 setup-api#write-info k4310 k4337 k4248 setup-api#supply-version k4197 map-loop10271053 setup-api#make-dest-pathname k3953 k3812 for-each-loop972983 walk964 setup-api#repo-path setup-api#ensure-directory verb865 setup-api#make:make/proc/helper k3236 setup-api#make:form-error setup-api#make:line-error for-each-loop730741 for-each-loop748769 k3012 loop483 g609616 for-each-loop608620 setup-api#fixmaketarget map-loop336353 k2677 map-loop263281 map-loop290308 map-loop377394 for-each-loop323401 k2836 setup-api#$system loop190 setup-api#user-install-setup) 
o|calls to known targets: 200 
o|identified direct recursive calls: f_4003 1 
o|identified direct recursive calls: f_5303 1 
o|fast box initializations: 23 
o|fast global references: 98 
o|fast global assignments: 52 
o|dropping unused closure argument: f_3693 
o|dropping unused closure argument: f_3714 
o|dropping unused closure argument: f_5245 
o|dropping unused closure argument: f_5017 
o|dropping unused closure argument: f_4176 
o|dropping unused closure argument: f_2427 
o|dropping unused closure argument: f_5665 
o|dropping unused closure argument: f_4793 
o|dropping unused closure argument: f_4739 
o|dropping unused closure argument: f_3233 
o|dropping unused closure argument: f_2623 
o|dropping unused closure argument: f_2831 
o|dropping unused closure argument: f_4453 
o|dropping unused closure argument: f_3057 
o|dropping unused closure argument: f_3038 
o|dropping unused closure argument: f_4003 
o|dropping unused closure argument: f_4027 
*/
/* end of file */
